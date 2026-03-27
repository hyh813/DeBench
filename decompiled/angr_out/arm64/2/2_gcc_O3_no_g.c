// Angr Decompilation of 2_gcc_O3_no_g
// Platform: AARCH64

// Function: _init at 0x4006b8
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x4006d0
extern unsigned long long g_414f88;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_414f88;
}


// Function: sub_4006e4 at 0x4006e4
long long sub_4006e4()
{
    __libc_start_main(); /* do not return */
}


// Function: main at 0x400780
unsigned int main()
{
    unsigned long long v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = test_data_types_l1();
    v3 = test_pointer_types(test_array_types(v2));
    test_composite_types(v3);
    return 0;
}


// Function: sub_4007a4 at 0x4007a4
void sub_4007a4(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x4007c0
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_4007f0 at 0x4007f0
void sub_4007f0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4007f4
extern unsigned long long g_414fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_414fe0)
        return 0;
    v0 = __gmon_start__(g_414fe0);
    return __gmon_start__(g_414fe0);
}


// Function: sub_400808 at 0x400808
void sub_400808()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400810
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400840
extern char __TMC_END__;
extern unsigned long long g_414ff8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_414ff8)
    {
        goto g_414ff8;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_40087c at 0x40087c
void sub_40087c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400880
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_414fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_414fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return 1;
}


// Function: sub_4008c8 at 0x4008c8
long long sub_4008c8()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x4008d0
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: sub_4008d4 at 0x4008d4
void sub_4008d4(unsigned long a0)
{
    process_char();
    return;
}


// Function: process_char at 0x4008e0
long long process_char(unsigned int a0)
{
    if (25 >= ((a0 & 255) - 65 & 255))
        return (a0 & 255) + 32 & 255;
    return a0 & 255;
}


// Function: process_short at 0x400900
int process_short(unsigned int a0, unsigned int a1)
{
    return (a1 * 0x10000 >> 31 & 0xffff0000 | a1 & 65535) + (a0 & 65535);
}


// Function: sub_40090c at 0x40090c
void sub_40090c(unsigned long a0)
{
    process_int();
    return;
}


// Function: process_int at 0x400910
int process_int(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: sub_40091c at 0x40091c
void sub_40091c(unsigned long a0)
{
    process_long();
    return;
}


// Function: process_long at 0x400920
unsigned long long process_long(unsigned long a0)
{
    return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: sub_400928 at 0x400928
void sub_400928(unsigned long a0)
{
    process_ll();
    return;
}


// Function: process_ll at 0x400930
long long process_ll(unsigned long a0)
{
    return a0 * a0;
}


// Function: sub_400938 at 0x400938
long long sub_400938()
{
    unsigned long long v0;  // x0

    v0 = process_float();
    return process_float();
}


// Function: process_float at 0x400940
long long process_float()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: process_double at 0x400950
extern char g_403000;

long long process_double()
{
    return &g_403000;
}


// Function: process_ld at 0x400964
extern unsigned long long $d;

long long process_ld()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __multf3();
    v2 = __addtf3(&$d);
    return __addtf3(&$d);
}


// Function: sub_40098c at 0x40098c
void sub_40098c(unsigned long a0)
{
    process_bool();
    return;
}


// Function: process_bool at 0x400990
unsigned long long process_bool(unsigned int a0)
{
    if (0 >= a0)
        return 0;
    return ~(a0) & 1;
}


// Function: const_param at 0x4009a4
int const_param(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: volatile_access at 0x4009b0
unsigned int volatile_access(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4009c0
extern char $d;

int test_data_types_l1()
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    puts(&$d);
    __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
    __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
    __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
    __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
    __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
    __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
    __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 10000);
    __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 10000);
    __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n");
    __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
    __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
    __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
    __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
    v1 = 10;
    return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v1 * 2);
}


// Function: array_1d_stack at 0x400b10
unsigned long long array_1d_stack(unsigned long long a0, unsigned long a1)
{
    unsigned long long ptr;  // x4
    unsigned long long i;  // x2
    unsigned long long v3;  // d0
    unsigned long long v4;  // x2
    unsigned long long v5;  // x0
    unsigned long long v6;  // x0

    ptr = a0;
    if ((unsigned int)a1 <= 0)
        return 0;
    if ((unsigned int)a1 - 1 > 2)
    {
        i = ptr;
        do
        {
            i += 16;
        } while (i != ptr + 16 + ((((unsigned int)a1 * 0x40000000 | (unsigned int)a1 >> 2) & 1073741823) - 1) * 16);
        v3 = [D] unsupported_Iop_ZeroHI96ofV128();
        v4 = (unsigned int)a1 & 0xfffffffc;
        if ((char)arm64g_calculate_condition(10, a1 & 3, 0, 0))
            return v3;
    }
    else
    {
        v4 = 0;
        v3 = 0;
    }
    v5 = v3 + *((int *)(ptr + (v4 & 4294967295) * 4));
    if ((unsigned int)a1 <= (unsigned int)v4 + 1)
        return v5;
    v6 = v5 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 4));
    if ((unsigned int)a1 <= (unsigned int)v4 + 2)
        return v6;
    return v6 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 8));
}


// Function: array_string at 0x400bb4
unsigned long long array_string(char *a0)
{
    unsigned long long v0;  // x1
    unsigned long long v1;  // x1
    unsigned long long v2;  // x1

    if (!*(a0))
        return 0;
    v0 = 1;
    do
    {
        v2 = v0 + 1;
        v0 = v2;
    } while (a0[1 + v0]);
    return v1 & 4294967295;
}


// Function: array_2d_stack at 0x400be4
int array_2d_stack(unsigned int *a0)
{
    return *(a0) + a0[11] + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_400c38 at 0x400c38
void sub_400c38(unsigned long a0)
{
    array_3d();
    return;
}


// Function: array_3d at 0x400c40
int array_3d(unsigned int *a0)
{
    unsigned int v0[125];  // x1
    unsigned int v1;  // s0

    v0 = a0 + 100;
    v1 = [D] unsupported_Iop_ZeroHI96ofV128();
    return ...;
}


// Function: array_vla at 0x400da0
unsigned long long array_vla(unsigned int a0, unsigned long long ptr)
{
    unsigned long v0;  // x4
    unsigned long long i;  // x2
    unsigned long long v3;  // d0
    unsigned long long v4;  // x2
    unsigned long long v5;  // x0
    unsigned long long v6;  // x0

    v0 = a0;
    if (a0 <= 0)
        return 0;
    if (a0 - 1 > 2)
    {
        i = ptr;
        do
        {
            i += 16;
        } while (i != ptr + 16 + ((((unsigned int)v0 * 0x40000000 | (unsigned int)v0 >> 2) & 1073741823) - 1) * 16);
        v3 = [D] unsupported_Iop_ZeroHI96ofV128();
        v4 = (unsigned int)v0 & 0xfffffffc;
        if ((char)arm64g_calculate_condition(10, v0 & 3, 0, 0))
            return v3;
    }
    else
    {
        v4 = 0;
        v3 = 0;
    }
    v5 = v3 + *((int *)(ptr + (v4 & 4294967295) * 4));
    if ((unsigned int)v0 <= (unsigned int)v4 + 1)
        return v5;
    v6 = v5 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 4));
    if ((unsigned int)v0 <= (unsigned int)v4 + 2)
        return v6;
    return v6 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 8));
}


// Function: array_pointer at 0x400e44
unsigned long long array_pointer(unsigned int *a0, unsigned int a1)
{
    unsigned long long v0;  // x0
    unsigned int *ptr;  // x2
    unsigned long long v2;  // x0
    unsigned long v3;  // x1
    unsigned long long v5;  // x0

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v2 = v0;
        v5 = v2 + *(ptr);
        ptr += 10;
        v0 = v5;
    } while (ptr != 10 + (char *)a0 + (a1 - 1) * 40);
    return v2 + v3;
}


// Function: pointer_array at 0x400e84
typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_2 *field_8;
    struct struct_3 *field_10;
    struct struct_4 *field_18;
    struct struct_5 *field_20;
    struct struct_6 *field_28;
    struct struct_7 *field_30;
    struct struct_8 *field_38;
    struct struct_9 *field_40;
    unsigned long long field_48;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

typedef struct struct_6 {
    unsigned int field_0;
} struct_6;

typedef struct struct_7 {
    unsigned int field_0;
} struct_7;

typedef struct struct_8 {
    unsigned int field_0;
} struct_8;

typedef struct struct_9 {
    unsigned int field_0;
} struct_9;

unsigned long long pointer_array(struct_0 *a0, unsigned int a1)
{
    unsigned long long cur;  // x0

    if (a1 <= 0)
        return 0;
    cur = 0;
    if (a0->field_0)
        cur = a0->field_0->field_0;
    if (a1 <= 1)
        return cur;
    if (a0->field_8)
        cur += a0->field_8->field_0;
    if (a1 == 2)
        return cur;
    if (a0->field_10)
        cur += a0->field_10->field_0;
    if (a1 == 3)
        return cur;
    if (a0->field_18)
        cur += a0->field_18->field_0;
    if (a1 == 4)
        return cur;
    if (a0->field_20)
        cur += a0->field_20->field_0;
    if (a1 == 5)
        return cur;
    if (a0->field_28)
        cur += a0->field_28->field_0;
    if (a1 == 6)
        return cur;
    if (a0->field_30)
        cur += a0->field_30->field_0;
    if (a1 == 7)
        return cur;
    if (a0->field_38)
        cur += a0->field_38->field_0;
    if (a1 == 8)
        return cur;
    if (a0->field_40)
        cur += a0->field_40->field_0;
    return cur;
}


// Function: array_complex_index at 0x400f84
unsigned long long array_complex_index(unsigned long a0, unsigned long a1, unsigned int a2, unsigned long a3, unsigned int a4)
{
    unsigned long v0;  // cc_op
    unsigned long v1;  // cc_dep1
    unsigned long v2;  // cc_dep2
    unsigned long v3;  // cc_ndep
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep

    if (0 <= ((unsigned int)a3 | a4))
    {
        if ((char)arm64g_calculate_condition(163, ((char)arm64g_calculate_condition(v0 | 160, v1, v2, v3) ? a3 & 4294967295 : 0), ((char)arm64g_calculate_condition(v0 | 160, v1, v2, v3) ? a1 & 4294967295 : 0), 0))
            return 4294967295;
    }
    else
    {
        if ((char)arm64g_calculate_condition(160, ((char)arm64g_calculate_condition(v4 | 160, v5, v6, v7) ? a3 & 4294967295 : 0), ((char)arm64g_calculate_condition(v4 | 160, v5, v6, v7) ? a1 & 4294967295 : 0), 0))
            return 4294967295;
    }
    if (a2 <= a4)
        return 4294967295;
    return *((int *)(a0 + ((unsigned int)a3 + a4 * (unsigned int)a1) * 4));
}


// Function: array_oob at 0x400fb0
unsigned long long array_oob(unsigned long long a0, unsigned long a1)
{
    unsigned long long ptr;  // x4
    unsigned long v1;  // x5
    unsigned long long i;  // x2
    unsigned long long v4;  // d0
    unsigned long long v5;  // x2
    unsigned long long v6;  // x0
    unsigned long long v7;  // x0

    ptr = a0;
    if (((char)(a1 >> 31) & 1))
        return 0;
    v1 = (unsigned int)a1 + 1;
    if ((unsigned int)a1 > 2)
    {
        i = ptr;
        do
        {
            i += 16;
        } while (i != a0 + 16 + ((((unsigned int)v1 * 0x40000000 | (unsigned int)v1 >> 2) & 1073741823) - 1) * 16);
        v4 = [D] unsupported_Iop_ZeroHI96ofV128();
        v5 = (unsigned int)v1 & 0xfffffffc;
        if ((char)arm64g_calculate_condition(10, v1 & 3, 0, 0))
            return v4;
    }
    else
    {
        v5 = 0;
        v4 = 0;
    }
    v6 = v4 + *((int *)(ptr + (v5 & 4294967295) * 4));
    if ((unsigned int)a1 < (unsigned int)v5 + 1)
        return v6;
    v7 = v6 + *((int *)(ptr + (v5 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v5, 2) & 17179869180 & 17179869183) + 4));
    if ((unsigned int)a1 < (unsigned int)v5 + 2)
        return v7;
    return v7 + *((int *)(ptr + (v5 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v5, 2) & 17179869180 & 17179869183) + 8));
}


// Function: test_array_types at 0x401054
extern char __stack_chk_guard;
extern char g_403208;

long long test_array_types()
{
    char *v5;  // x0
    unsigned int v6;  // w2
    unsigned long long v8;  // x0
    char *v0;  // [bp-0x20]
    char v1[1];  // [bp-0x10]
    char v2;  // [bp-0xf]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    puts(&g_403208);
    __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
    v5 = &v2;
    v6 = 0;
    strncpy(&v1, "hello", 5);
    do
    {
        v6 += 1;
        v5 += 1;
    } while (*(v5));
    __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v6);
    __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
    __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
    __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
    __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
    __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v8 = __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", 17);
    return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: sub_401168 at 0x401168
void sub_401168(unsigned long a0)
{
    ptr_single();
    return;
}


// Function: ptr_single at 0x401170
int ptr_single(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: sub_40117c at 0x40117c
void sub_40117c(unsigned long a0)
{
    ptr_double();
    return;
}


// Function: ptr_double at 0x401180
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
    return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401190
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


// Function: ptr_increment at 0x4011a4
unsigned long long ptr_increment(unsigned int *a0, unsigned long a1)
{
    unsigned int cur[3];  // x4
    unsigned int i[3];  // x2
    unsigned long long v3;  // d0
    unsigned int v4;  // w2
    unsigned long long v5;  // x0
    unsigned long long v6;  // x0

    cur = a0;
    if ((unsigned int)a1 <= 0)
        return 0;
    if ((unsigned int)a1 - 1 > 2)
    {
        i = cur;
        do
        {
            i = &i[1 + 1];
        } while (&cur[1 + 1 + 4 + 4 * (((unsigned int)a1 * 0x40000000 | (unsigned int)a1 >> 2) & 1073741823)] != i);
        v3 = [D] unsupported_Iop_ZeroHI96ofV128();
        v4 = (unsigned int)a1 & 0xfffffffc;
        cur = &cur[a1 & 0xfffffffc];
        if ((char)arm64g_calculate_condition(10, a1 & 3, 0, 0))
            return v3;
    }
    else
    {
        v4 = 0;
        v3 = 0;
    }
    v5 = v3 + cur[0];
    if ((unsigned int)a1 <= v4 + 1)
        return v5;
    v6 = v5 + cur[1];
    if ((unsigned int)a1 <= v4 + 2)
        return v6;
    return v6 + cur[2];
}


// Function: sub_40124c at 0x40124c
void sub_40124c(unsigned long a0, unsigned long a1)
{
    ptr_offset();
    return;
}


// Function: ptr_offset at 0x401250
int ptr_offset(unsigned long a0, unsigned int a1)
{
    return *((int *)(a0 + a1 * 4));
}


// Function: sub_401258 at 0x401258
void sub_401258(unsigned long a0, unsigned long a1)
{
    ptr_diff();
    return;
}


// Function: ptr_diff at 0x401260
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
    return ((a0 - a1) * 0x4000000000000000 | a0 - a1 >> 2) & 13835058059577131007 & 4294967295;
}


// Function: sub_40126c at 0x40126c
long long sub_40126c(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // x0

    v0 = ptr_void();
    return ptr_void();
}


// Function: ptr_void at 0x401270
unsigned long long ptr_void(void* a0, unsigned int a1)
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


// Function: ptr_const at 0x401294
unsigned int ptr_const(unsigned int *a0)
{
    return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x4012a0
int ptr_const_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) + 5;
    return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x4012b4
int ptr_func_simple(unsigned long a0, unsigned long a1)
{
    goto a0;
}


// Function: ptr_func_complex at 0x4012c0
extern char __stack_chk_guard;

unsigned long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
    unsigned long long v5;  // x0
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long result;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    v1 = "test";
    result = 0;
    v5 = a0(a1, &v1, "test", &__stack_chk_guard, a0, 0);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v5;
}


// Function: ptr_cast at 0x401320
int ptr_cast(unsigned int *a0)
{
    return *(a0);
}


// Function: sub_401328 at 0x401328
void sub_401328(unsigned long a0)
{
    opaque_handle_create();
    return;
}


// Function: opaque_handle_create at 0x401330
unsigned long long opaque_handle_create(unsigned long a0)
{
    return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: sub_401338 at 0x401338
void sub_401338(unsigned long a0)
{
    opaque_handle_op();
    return;
}


// Function: opaque_handle_op at 0x401340
unsigned int opaque_handle_op(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_401348 at 0x401348
void sub_401348()
{
    test_pointer_types();
    return;
}


// Function: test_pointer_types at 0x401350
extern char g_403340;

int test_pointer_types()
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_403340);
    __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
    __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
    __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
    __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
    __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
    __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
    __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
    __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
    __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
    __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
    __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
    __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
    __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
    return __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: sub_40148c at 0x40148c
void sub_40148c(unsigned long a0)
{
    struct_simple();
    return;
}


// Function: struct_simple at 0x401490
int struct_simple(unsigned int *a0)
{
    return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x4014a4
unsigned long long struct_array(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // x7
    unsigned long long i;  // x2
    unsigned long long v3;  // d4
    unsigned int v4;  // w4
    unsigned long long v5;  // x2
    unsigned long long v6;  // x0
    unsigned long long v7;  // x0

    v0 = a0;
    if ((unsigned int)a1 <= 0)
        return 0;
    if ((unsigned int)a1 - 1 > 2)
    {
        i = v0;
        do
        {
            i += 48;
        } while (i != v0 + 48 + ((((unsigned int)a1 * 0x40000000 | (unsigned int)a1 >> 2) & 1073741823) - 1) * 48);
        v3 = [D] unsupported_Iop_ZeroHI96ofV128();
        v4 = (unsigned int)a1 & 0xfffffffc;
        if ((char)arm64g_calculate_condition(10, a1 & 3, 0, 0))
            return v3;
    }
    else
    {
        v4 = 0;
        v3 = 0;
    }
    v5 = v4 * 12;
    v6 = v3 + *((int *)(v0 + v5)) + *((int *)(v0 + v5 + 4)) + *((int *)(v0 + v5 + 8));
    if ((unsigned int)a1 <= v4 + 1)
        return v6;
    v7 = v6 + *((int *)(v0 + v5 + 12)) + *((int *)(v0 + v5 + 12 + 4)) + *((int *)(v0 + v5 + 12 + 8));
    if ((unsigned int)a1 <= v4 + 2)
        return v7;
    return v7 + *((int *)(v0 + v5 + 24 + 4)) + *((int *)(v0 + v5 + 24)) + *((int *)(v0 + v5 + 24 + 8));
}


// Function: sub_40158c at 0x40158c
void sub_40158c(unsigned long a0)
{
    struct_nested();
    return;
}


// Function: struct_nested at 0x401590
int struct_nested(unsigned int *a0)
{
    return *(a0) + a0[3];
}


// Function: struct_deep at 0x4015a0
int struct_deep(unsigned int *a0)
{
    return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x4015b0
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *ptr)
{
    unsigned long v0;  // x0

    v0 = ptr->field_0;
    if (ptr->field_8)
        v0 += ptr->field_8->field_0;
    return v0;
}


// Function: sub_4015c8 at 0x4015c8
void sub_4015c8(unsigned long a0)
{
    struct_bitfields();
    return;
}


// Function: struct_bitfields at 0x4015d0
int struct_bitfields(unsigned int *ptr)
{
    unsigned long v0;  // x1

    v0 = *(ptr);
    return ((unsigned int)v0 & 1) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 1)) & 3) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 3)) & 7) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 6)) & 1023);
}


// Function: union_type at 0x4015f4
long long union_type(void* a0, unsigned int a1)
{
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
        return *((int *)a0);
    }
}


// Function: sub_40161c at 0x40161c
long long sub_40161c(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // x0

    v0 = union_array();
    return union_array();
}


// Function: union_array at 0x401620
unsigned long long union_array(unsigned long long a0, unsigned long a1)
{
    unsigned long long ptr;  // x4
    unsigned long long i;  // x2
    unsigned long long v3;  // d0
    unsigned long long v4;  // x2
    unsigned long long v5;  // x0
    unsigned long long v6;  // x0

    ptr = a0;
    if ((unsigned int)a1 <= 0)
        return 0;
    if ((unsigned int)a1 - 1 > 2)
    {
        i = ptr;
        do
        {
            i += 16;
        } while (i != ptr + 16 + ((((unsigned int)a1 * 0x40000000 | (unsigned int)a1 >> 2) & 1073741823) - 1) * 16);
        v3 = [D] unsupported_Iop_ZeroHI96ofV128();
        v4 = (unsigned int)a1 & 0xfffffffc;
        if ((char)arm64g_calculate_condition(10, a1 & 3, 0, 0))
            return v3;
    }
    else
    {
        v4 = 0;
        v3 = 0;
    }
    v5 = v3 + *((int *)(ptr + (v4 & 4294967295) * 4));
    if ((unsigned int)a1 <= (unsigned int)v4 + 1)
        return v5;
    v6 = v5 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 4));
    if ((unsigned int)a1 <= (unsigned int)v4 + 2)
        return v6;
    return v6 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 8));
}


// Function: enum_type at 0x4016c4
unsigned int enum_type(unsigned int a0)
{
    return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: enum_switch at 0x4016d0
extern unsigned int CSWTCH.62[4];

unsigned long long enum_switch(unsigned int a0)
{
    if (3 < a0)
        return 4294967197;
    return CSWTCH.62[a0];
}


// Function: struct_func_ptr at 0x4016f0
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int struct_func_ptr(struct_0 *a0)
{
    goto a0->field_8;
}


// Function: linked_list at 0x401704
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long linked_list(struct_0 *a0)
{
    struct_0 *ptr;  // x1
    unsigned long long v1;  // x0
    struct_0 *v2;  // x1

    ptr = a0;
    v1 = 0;
    if (ptr)
    {
        do
        {
            v2 = ptr->field_8;
            v1 += ptr->field_0;
            ptr = v2;
        } while (ptr->field_8);
    }
    return v1;
}


// Function: doubly_linked_list at 0x401724
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long doubly_linked_list(struct_0 *a0)
{
    struct_0 *ptr;  // x1
    unsigned long long v1;  // x0
    struct_0 *v2;  // x1

    ptr = a0;
    v1 = 0;
    if (ptr)
    {
        do
        {
            v2 = ptr->field_8;
            v1 += ptr->field_0;
            ptr = v2;
        } while (ptr->field_8);
    }
    return v1;
}


// Function: binary_tree_sum at 0x401744
typedef struct struct_8 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_7 *field_8;
    struct struct_8 *field_10;
} struct_8;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_6 *field_8;
    struct struct_7 *field_10;
} struct_7;

typedef struct struct_6 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_5 *field_8;
} struct_6;

typedef struct struct_5 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_4 *field_8;
    struct struct_5 *field_10;
} struct_5;

typedef struct struct_16 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_15 *field_8;
    struct struct_16 *field_10;
} struct_16;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_3 *field_8;
    struct struct_4 *field_10;
} struct_4;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_2 *field_8;
    struct struct_3 *field_10;
} struct_3;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
    struct struct_2 *field_10;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
    struct struct_1 *field_10;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_41 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_41 *field_10;
} struct_41;

typedef struct struct_18 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_17 *field_8;
    struct struct_18 *field_10;
} struct_18;

typedef struct struct_44 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_43 *field_8;
    struct struct_44 *field_10;
} struct_44;

typedef struct struct_22 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_21 *field_8;
    struct struct_22 *field_10;
} struct_22;

typedef struct struct_40 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_39 *field_8;
    struct struct_40 *field_10;
} struct_40;

typedef struct struct_35 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_34 *field_8;
    struct struct_35 *field_10;
} struct_35;

typedef struct struct_15 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_14 *field_8;
} struct_15;

typedef struct struct_17 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_17 *field_10;
} struct_17;

typedef struct struct_43 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_42 *field_8;
    struct struct_43 *field_10;
} struct_43;

typedef struct struct_21 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_20 *field_8;
    struct struct_21 *field_10;
} struct_21;

typedef struct struct_39 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_38 *field_8;
    struct struct_39 *field_10;
} struct_39;

typedef struct struct_34 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_33 *field_8;
    struct struct_34 *field_10;
} struct_34;

typedef struct struct_14 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_13 *field_8;
    struct struct_14 *field_10;
} struct_14;

typedef struct struct_42 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_42 *field_10;
} struct_42;

typedef struct struct_20 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_19 *field_8;
    struct struct_20 *field_10;
} struct_20;

typedef struct struct_38 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_37 *field_8;
    struct struct_38 *field_10;
} struct_38;

typedef struct struct_33 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_32 *field_8;
    struct struct_33 *field_10;
} struct_33;

typedef struct struct_13 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_12 *field_8;
    struct struct_13 *field_10;
} struct_13;

typedef struct struct_19 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_19 *field_10;
} struct_19;

typedef struct struct_37 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_36 *field_8;
    struct struct_37 *field_10;
} struct_37;

typedef struct struct_32 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_31 *field_8;
    struct struct_32 *field_10;
} struct_32;

typedef struct struct_12 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_11 *field_8;
    struct struct_12 *field_10;
} struct_12;

typedef struct struct_36 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_36 *field_10;
} struct_36;

typedef struct struct_31 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_30 *field_8;
    struct struct_31 *field_10;
} struct_31;

typedef struct struct_11 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_10 *field_8;
    struct struct_11 *field_10;
} struct_11;

typedef struct struct_30 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_30 *field_10;
} struct_30;

typedef struct struct_10 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_9 *field_8;
    struct struct_10 *field_10;
} struct_10;

typedef struct struct_9 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_9 *field_10;
} struct_9;

unsigned int binary_tree_sum(struct_8 *a0)
{
    unsigned long long v27;  // x9
    unsigned long long v28;  // x9
    struct_6 *ptr;  // x5
    struct_5 *cur;  // x6
    unsigned long long v36;  // x15
    unsigned long v37;  // x14
    struct_6 *v38;  // x5
    struct_16 *v39;  // x4
    struct_8 *v40;  // x1
    unsigned long long v41;  // x9
    unsigned long long v42;  // x30
    unsigned long long v43;  // x19
    struct_8 *p;  // x1
    unsigned long long v44;  // x20
    unsigned long long v45;  // x21
    unsigned long long v46;  // x22
    unsigned long long v47;  // x25
    unsigned long long v48;  // x26
    unsigned long long v49;  // x27
    unsigned long long v50;  // x28
    unsigned long long v51;  // x23
    struct_7 *v30;  // x4
    unsigned long long v52;  // x24
    unsigned long v53;  // x18
    struct_4 *v54;  // x19
    unsigned long long v55;  // x27
    struct_4 *ptr6;  // x19
    struct_3 *v57;  // x21
    unsigned long long v58;  // x25
    unsigned long v59;  // x22
    struct_3 *ptr7;  // x21
    struct_2 *iter;  // x2
    unsigned long long ptr10;  // x11
    unsigned long long v62;  // x7
    unsigned long v63;  // x28
    unsigned long long v64;  // x8
    struct_1 *v65;  // x20
    unsigned long long v66;  // x26
    struct_1 *ptr5;  // x20
    struct_0 *v68;  // x23
    unsigned long long v69;  // x3
    unsigned long v70;  // x24
    struct_0 *ptr8;  // x23
    unsigned long long v32;  // x10
    unsigned long long v72;  // x0
    struct_41 *v73;  // x23
    struct_6 *v77;  // x5
    struct_16 *addr;  // x4, Other Possible Types: struct_7 *
    unsigned long long node;  // x13
    unsigned long long v80;  // x12
    struct_7 *v81;  // x4
    struct_8 *v82;  // x1
    unsigned long long v83;  // x9
    struct_6 *v33;  // x5
    char *v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    unsigned int v10;  // [bp-0x54]
    struct_7 *v11;  // [bp-0x50]
    unsigned int v12;  // [bp-0x48]
    unsigned int v13;  // [bp-0x44]
    struct_6 *v14;  // [bp-0x40]
    struct_5 *v15;  // [bp-0x38]
    unsigned int v16;  // [bp-0x30]
    unsigned int v17;  // [bp-0x2c]
    struct_2 *v18;  // [bp-0x28]
    unsigned int v19;  // [bp-0x20]
    unsigned int v20;  // [bp-0x1c]
    unsigned int v21;  // [bp-0x18]
    unsigned int v22;  // [bp-0x14]
    unsigned int v23;  // [bp-0x10]
    unsigned int v24;  // [bp-0xc]
    struct_8 *v25;  // [bp-0x8]
    char v26;  // [bp+0x0]

    v27 = 0;
    if (!a0)
        return 0;
    do
    {
        v28 = v27;
        p = a0;
        v30 = p->field_8;
        ptr10 = 0;
        v32 = p->field_0;
        if (p->field_8)
        {
            do
            {
                addr = v30;
                v33 = addr->field_8;
                node = 0;
                v80 = addr->field_0;
                if (addr->field_8)
                {
                    do
                    {
                        ptr = v33;
                        cur = ptr->field_8;
                        v36 = 0;
                        v37 = ptr->field_0;
                        if (ptr->field_8)
                        {
                            v0 = &v26;
                            v1 = v42;
                            v2 = v43;
                            v3 = v44;
                            v4 = v45;
                            v5 = v46;
                            v6 = v47;
                            v7 = v48;
                            v8 = v49;
                            v9 = v50;
                            while (true)
                            {
                                while (true)
                                {
                                    do
                                    {
                                        v53 = cur->field_0;
                                        v54 = cur->field_8;
                                        v55 = 0;
                                        if (cur->field_8)
                                        {
                                            do
                                            {
                                                ptr6 = v54;
                                                v57 = ptr6->field_8;
                                                v58 = 0;
                                                v59 = ptr6->field_0;
                                                if (ptr6->field_8)
                                                {
                                                    do
                                                    {
                                                        ptr7 = v57;
                                                        iter = ptr7->field_8;
                                                        v62 = 0;
                                                        v63 = ptr7->field_0;
                                                        if (ptr7->field_8)
                                                        {
                                                            v51 = v51;
                                                            v52 = v52;
                                                            do
                                                            {
                                                                v64 = iter->field_0;
                                                                v65 = iter->field_8;
                                                                v66 = 0;
                                                                if (iter->field_8)
                                                                {
                                                                    do
                                                                    {
                                                                        ptr5 = v65;
                                                                        v68 = ptr5->field_8;
                                                                        v69 = 0;
                                                                        v70 = ptr5->field_0;
                                                                        if (ptr5->field_8)
                                                                        {
                                                                            do
                                                                            {
                                                                                ptr8 = v68;
                                                                                v10 = v32;
                                                                                v11 = addr;
                                                                                v12 = v80;
                                                                                v13 = ptr10;
                                                                                v14 = ptr;
                                                                                v15 = cur;
                                                                                v16 = node;
                                                                                v17 = v36;
                                                                                v18 = iter;
                                                                                v19 = v64;
                                                                                v20 = v62;
                                                                                v21 = v69;
                                                                                v22 = v53;
                                                                                v23 = v37;
                                                                                v24 = v28;
                                                                                v25 = p;
                                                                                v72 = binary_tree_sum(ptr8->field_8);
                                                                                v73 = ptr8->field_10;
                                                                                v53 = v22;
                                                                                v32 = v10;
                                                                                v80 = v12;
                                                                                ptr10 = v13;
                                                                                v69 = v21 + v72 + ptr8->field_0;
                                                                                node = v16;
                                                                                v36 = v17;
                                                                                v64 = v19;
                                                                                v62 = v20;
                                                                                v37 = v23;
                                                                                v28 = v24;
                                                                                addr = v11;
                                                                                ptr = v14;
                                                                                cur = v15;
                                                                                iter = v18;
                                                                                p = v25;
                                                                                v68 = v73;
                                                                            } while (ptr8->field_10);
                                                                            v70 += v69;
                                                                        }
                                                                        v66 += v70;
                                                                        v65 = ptr5->field_10;
                                                                    } while (ptr5->field_10);
                                                                    v64 += v66;
                                                                }
                                                                iter = iter->field_10;
                                                                v62 += v64;
                                                            } while (iter->field_10);
                                                            v63 += v62;
                                                        }
                                                        v58 += v63;
                                                        v57 = ptr7->field_10;
                                                    } while (ptr7->field_10);
                                                    v59 += v58;
                                                }
                                                v55 += v59;
                                                v54 = ptr6->field_10;
                                            } while (ptr6->field_10);
                                            v53 += v55;
                                        }
                                        cur = cur->field_10;
                                        v36 += v53;
                                    } while (cur->field_10);
                                    v77 = *((long long *)&ptr[1].field_0);
                                    node += v37 + v36;
                                    if (*((long long *)&ptr[1].field_0))
                                        continue;
LABEL_4018d8:
                                    v81 = addr->field_10;
                                    ptr10 += v80 + node;
                                    if (addr->field_10)
                                        continue;
                                    while (true)
                                    {
                                        v82 = p->field_10;
                                        v83 = v28 + v32 + ptr10;
                                        if (!p->field_10)
                                            return (unsigned int)v28 + (unsigned int)v32 + (unsigned int)ptr10;
                                        while (true)
                                        {
                                            v28 = v83;
                                            p = v82;
                                            v81 = p->field_8;
                                            ptr10 = 0;
                                            v32 = p->field_0;
                                            if (p->field_8)
                                                break;
                                            v82 = p->field_10;
                                            v83 = v28 + v32;
                                            if (!p->field_10)
                                                return (unsigned int)v28 + (unsigned int)v32;
                                        }
                                        addr = v81;
                                        v77 = addr->field_8;
                                        node = 0;
                                        v80 = addr->field_0;
                                        if (addr->field_8)
                                            break;
                                        ptr10 += v80;
                                        v81 = addr->field_10;
                                        if (addr->field_10)
                                            continue;
                                    }
LABEL_4018bc:
                                    ptr = v77;
                                    cur = ptr->field_8;
                                    v36 = 0;
                                    v37 = ptr->field_0;
                                    if (!ptr->field_8)
                                        break;
                                }
                                node += v37;
                                v77 = *((long long *)&ptr[1].field_0);
                                if (*((long long *)&ptr[1].field_0))
                                    goto LABEL_4018bc;
                                else
                                    goto LABEL_4018d8;
                            }
                        }
                    } while ((v38 = *((long long *)&ptr[1].field_0), node += v37, v33 = *((long long *)&ptr[1].field_0), *((long long *)&ptr[1].field_0)));
                    v80 += node;
                }
            } while ((v39 = addr->field_10, ptr10 += v80, v30 = addr->field_10, addr->field_10));
            v32 += ptr10;
        }
    } while ((v40 = p->field_10, v41 = v28 + v32, a0 = p->field_10, v27 = v28 + v32, p->field_10));
    return (unsigned int)v28 + (unsigned int)v32;
}


// Function: binary_tree at 0x401980
typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
    struct struct_1 *field_10;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    void* field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_2 *field_10;
} struct_2;

unsigned int binary_tree(struct_1 *a0)
{
    unsigned long long v6;  // x23
    unsigned long long v7;  // x21
    struct_0 *p;  // x19
    unsigned long long v17;  // x0
    struct_2 *v18;  // x19
    struct_1 *v19;  // x21
    unsigned long long v20;  // x23
    unsigned long long v8;  // x22
    unsigned long long v9;  // x19
    unsigned long long v10;  // x20
    struct_1 *ptr;  // x21
    unsigned long long v12;  // x23
    unsigned long v13;  // x22
    struct_0 *v14;  // x19
    unsigned long long v15;  // x20
    char *v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v6 = 0;
    if (!a0)
        return 0;
    v3 = v7;
    v4 = v8;
    v1 = v9;
    v2 = v10;
    do
    {
        ptr = a0;
        v12 = v6;
        v13 = ptr->field_0;
        v14 = ptr->field_8;
        v15 = 0;
        if (ptr->field_8)
        {
            do
            {
                p = v14;
                v17 = binary_tree_sum(p->field_8);
                v18 = p->field_10;
                v15 += v17 + p->field_0;
                v14 = v18;
            } while (p->field_10);
            v13 += v15;
        }
    } while ((v19 = ptr->field_10, v20 = v12 + v13, v6 = v12 + v13, a0 = ptr->field_10, ptr->field_10));
    return (unsigned int)v12 + (unsigned int)v13;
}


// Function: graph_traverse at 0x4019f4
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

unsigned long long graph_traverse(struct_1 *p)
{
    unsigned long long idx;  // x3
    unsigned long long v1;  // x0
    struct_2 *ptr;  // x1
    unsigned long v3;  // x1

    if (p->field_50 <= 0)
        return 0;
    idx = 0;
    v1 = 0;
    do
    {
        ptr = (&p->field_0)[idx];
        if ((&p->field_0)[idx])
        {
            do
            {
                v3 = ptr->field_8;
                v1 += *((int *)&ptr->padding_0[0]);
                ptr = v3;
            } while (ptr->field_8);
        }
    } while ((idx += 1, (unsigned int)idx < p->field_50));
    return v1;
}


// Function: test_composite_types at 0x401a40
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

extern char __stack_chk_guard;
extern char g_403518;

unsigned long long test_composite_types()
{
    struct_0 *ptr;  // x0
    unsigned long long v16;  // x2
    struct_0 *v17;  // x0
    struct_1 *p;  // x0
    unsigned long long v19;  // x2
    struct_1 *v20;  // x0
    char *v0;  // [bp-0x80]
    unsigned int v1;  // [bp-0x68]
    char *v2;  // [bp-0x60]
    char v3;  // [bp-0x58], Other Possible Types: unsigned int
    char *v4;  // [bp-0x50]
    char v5;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned long long result;  // [bp-0x40]
    unsigned int v7;  // [bp-0x38]
    char *v8;  // [bp-0x30]
    unsigned long long flag1;  // [bp-0x28]
    char v10;  // [bp-0x20], Other Possible Types: unsigned int
    unsigned long long flag2;  // [bp-0x18]
    char *v12;  // [bp-0x10]
    unsigned long v13;  // [bp-0x8]
    char v14;  // [bp+0x0]

    v0 = &v14;
    v13 = *((long long *)&__stack_chk_guard);
    puts(&g_403518);
    __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
    __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
    __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
    __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
    __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
    __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
    __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
    __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
    __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
    __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
    __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
    result = 0;
    ptr = &v3;
    v16 = 10;
    v1 = 10;
    v2 = &v3;
    v3 = 20;
    v4 = &v5;
    v5 = 30;
    do
    {
        v17 = ptr->field_8;
        v16 += (unsigned long long)ptr->field_0;
        ptr = v17;
    } while (ptr->field_8);
    __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v16);
    p = &v10;
    v19 = 10;
    v7 = 10;
    v8 = &v10;
    flag1 = 0;
    v10 = 20;
    flag2 = 0;
    v12 = &v7;
    do
    {
        v20 = p->field_8;
        v19 += (unsigned long long)p->field_0;
        p = v20;
    } while (p->field_8);
    __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v19);
    __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
    __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
    if (v13 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: sub_401c38 at 0x401c38
void sub_401c38()
{
    __addtf3();
    return;
}


// Function: __addtf3 at 0x401c40
extern unsigned long long g_400000;
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
                goto LABEL_401cb8;
            }
            if (cur || flag9)
            {
                v21 = (unsigned int)v21 - 1;
                if ((unsigned int)v21 != 1)
                {
LABEL_401cb8:
                    if (iter == 32767)
                        goto LABEL_402104;
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
                    goto LABEL_401d0c;
                }
                else
                {
                    v27 = flag10 - flag9;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                    goto LABEL_401d0c;
                }
            }
            v27 = flag10;
            if (flag5 == 32767 && (cur || flag10))
            {
LABEL_401f54:
                v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                v27 = flag10;
                goto LABEL_401f60;
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
                        goto LABEL_402188;
                    v27 = flag9 - flag10;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                    iter = flag6;
                    goto LABEL_401d0c;
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
                    goto LABEL_401f60;
                }
                else
                {
                    goto LABEL_402214;
                }
            }
            else
            {
                v21 = -((unsigned int)v21);
                cur |= 0x8000000000000;
LABEL_402188:
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
LABEL_401d0c:
                    flag8 = cur & 2251799813685247;
                    if ((cur >> 51 & 1))
                        goto LABEL_401d14;
                }
                else
                {
                    if (!cur && !flag9)
                        return v21;
                    v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                    v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                    v35 = __ROL__(cur, 61) & 2305843009213693951;
                    goto LABEL_402124;
                    goto LABEL_402124;
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
                            goto LABEL_402580;
                        v27 = flag9;
                        goto LABEL_4024a8;
                    }
                    v27 = flag10;
                    if (!flag3)
                        goto LABEL_4024a8;
                    v27 = flag10 - flag9;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                    if (((char)(cur >> 51) & 1))
                    {
                        v27 = flag9 - flag10;
                        cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                        v38 = v27 | cur;
LABEL_401d7c:
                        if (!v38)
                            goto LABEL_401ed0;
                        goto LABEL_401d80;
                    }
                    if (!v27 && !cur)
                    {
LABEL_402580:
                        v34 = 0;
                        goto LABEL_401edc;
                    }
                    else
                    {
                        v39 = v27 & 7;
                        flag4 = 1;
                        goto LABEL_401d8c;
                    }
                }
                else
                {
                    if (iter != 32767)
                    {
                        if (v19 != 32767)
                        {
                            if (!flag2)
                                goto LABEL_4023e8;
                            goto LABEL_4023b8;
                        }
                    }
                    else
                    {
                        if (flag2)
                        {
                            v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                            if (v19 != 32767)
                                goto LABEL_4023b8;
                        }
                        else if (v19 != 32767)
                        {
LABEL_4023e8:
                            if (!flag3)
                                goto LABEL_4023ec;
                            goto LABEL_4026ac;
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
LABEL_402648:
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
                            goto LABEL_402124;
                        }
                        else
                        {
LABEL_4026ac:
                            v35 = __ROL__(cur, 61) & 2305843009213693951;
                            v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                            goto LABEL_402124;
                        }
                    }
                    else if (flag2)
                    {
LABEL_4023b8:
                        v41 = __ROL__(cur, 61) & 0xe000000000000000;
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        if (flag3)
                            goto LABEL_402648;
                        v34 = v5 & 2305843009213693951 | v41;
                        goto LABEL_402124;
                    }
                    else
                    {
LABEL_4023ec:
                        v34 = 18446744073709551615;
                        v21 = 1;
LABEL_40212c:
                        goto LABEL_401dd8;
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
                    goto LABEL_401d14;
                }
                if (!v27 && !flag8)
                {
                    v34 = 0;
                    goto LABEL_401edc;
                }
                else
                {
                    result = result;
LABEL_401d14:
                    if (flag8)
                    {
                        if (!flag8)
                            v46 = 64;
                        else
                            v46 = Clz(flag8);
                        v47 = v46 - 12;
LABEL_401d20:
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
                            goto LABEL_401d20;
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
                            goto LABEL_401d78;
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
                            goto LABEL_401d7c;
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
                                goto LABEL_4024a8;
                            v27 = flag10 + flag9;
                            cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                            if (!((char)(cur >> 51) & 1))
                            {
LABEL_401d78:
                                v38 = v27 | cur;
                                goto LABEL_401d7c;
                            }
                            else
                            {
                                cur &= 18444492273895866367;
                                v39 = v27 & 7;
                                flag4 = 0;
                                iter = 1;
                                goto LABEL_401d8c;
                            }
                        }
                        else
                        {
                            if (!flag7)
                            {
                                v34 = 0;
                                goto LABEL_401edc;
                            }
                            else
                            {
                                v27 = flag9;
LABEL_4024a8:
                                flag11 = 0;
                                iter = 0;
                                goto LABEL_4024b0;
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
                                    goto LABEL_4026d8;
                                goto LABEL_402530;
                            }
                            if (cur || flag9)
                                goto LABEL_40279c;
                            if (!flag1)
                                return v21;
                            goto LABEL_402770;
                        }
                        else
                        {
                            if (flag1)
                            {
                                v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                                if (v19 != 32767)
                                {
LABEL_4026d8:
                                    if (cur || flag9)
                                        goto LABEL_4026e0;
                                }
                                else
                                {
                                    if (cur || flag9)
                                        goto LABEL_40279c;
                                }
LABEL_402770:
                                v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                v35 = __ROL__(cur, 61) & 2305843009213693951;
                                goto LABEL_402124;
                            }
                            else
                            {
                                if (v19 != 32767)
                                    goto LABEL_402530;
                                if (!cur && !flag9)
                                    return v21;
LABEL_40279c:
                                if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
                                    v21 &= 4294967295;
                                else
                                    v21 = 1;
                                if (!flag1)
                                {
LABEL_402530:
                                    v35 = __ROL__(cur, 61) & 2305843009213693951;
                                    v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                    goto LABEL_402124;
                                }
                                else
                                {
LABEL_4026e0:
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
                                    goto LABEL_402124;
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
LABEL_4024d4:
                            goto LABEL_402780;
                        }
                        if (v67 != &g_400000)
                            v80 = 0;
                        else
                            v80 = 1;
                        if ((char)arm64g_calculate_condition(25, (unsigned long long)(v80 & (v16 ^ 1)), 0, 0))
                        {
LABEL_402780:
                            v1 = 0;
                            v83 = __sfp_handle_exceptions();
                            return __sfp_handle_exceptions();
                        }
                        if (v67 == &g_800000)
                        {
                            if (!result)
                                goto LABEL_40271c;
                            goto LABEL_4025e8;
                        }
LABEL_402444:
                        v21 = 20;
                        if (v67 == &g_400000)
                        {
                            cur = 18446744073709551615;
                            iter = 32766;
                            v27 = 18446744073709551615;
                            flag4 = 0;
                            v21 = 20;
                            if (!result)
                            {
LABEL_4020b4:
                                v27 += 8;
                                if (!((char)arm64g_calculate_condition(50, v27, 8, 0)))
                                    cur += 1;
                            }
LABEL_4020bc:
                            flag11 = cur & 0x8000000000000;
                            if (flag4)
                            {
                                v21 = (unsigned int)v21 | 8;
                                goto LABEL_401db8;
                            }
                        }
LABEL_401f88:
                        switch (v67)
                        {
                        case 0:
LABEL_401fc0:
                            break;
                        case 4194304:
                            if (!result)
                                goto LABEL_401fc0;
LABEL_401fa4:
                            v34 = 18446744073709551615;
                            v21 = (unsigned int)v21 | 20;
                            goto LABEL_401edc;
                        case 8388608:
                            v81 = 1;
LABEL_401f9c:
                            if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v81 & (unsigned int)result), 0, 0)))
                                goto LABEL_401fa4;
                            break;
                        default:
                            v81 = 0;
                            goto LABEL_401f9c;
                        }
                        goto LABEL_401edc;
                    }
LABEL_401d8c:
                    if (!v39)
                    {
                        flag11 = cur & 0x8000000000000;
                        v21 = 0;
                        if (flag4)
                        {
LABEL_4024b0:
                            v21 = 0;
                            if (((char)(v10 >> 11) & 1))
                                v21 = 8;
                        }
LABEL_401db8:
                        if (flag11)
                            goto LABEL_401dbc;
                        goto LABEL_401f68;
                    }
                    switch (v78)
                    {
                    case 4194304:
                        v21 = 16;
                        if (!result)
                            goto LABEL_4020b4;
                        break;
                    case 8388608:
                        v21 = 16;
                        if (result)
                            goto LABEL_4020b4;
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
                            goto LABEL_401db8;
                        }
                    }
                    goto LABEL_4020bc;
                }
            }
            if (flag5)
            {
                v21 = -((unsigned int)v21);
                cur |= 0x8000000000000;
                goto LABEL_402020;
            }
            if (cur || flag10)
            {
                v21 = ~((unsigned int)v21);
                if ((unsigned int)v21)
                {
LABEL_402020:
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
                            goto LABEL_402078;
                        }
                        else
                        {
                            cur += 1;
                            iter = v19;
                            goto LABEL_402078;
                        }
                    }
                    else
                    {
                        if (!cur && !flag9)
                            return v21;
                        v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                        goto LABEL_402124;
                    }
                }
                else
                {
                    v27 = flag10 + flag9;
                    cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                    iter = flag6;
LABEL_402078:
                    if (((char)(cur >> 51) & 1))
                    {
                        iter += 1;
                        if (iter != 32767)
                        {
                            flag4 = 0;
                            v27 = v27 & 1 | v27 >> 1 | cur * 0x8000000000000000;
                            cur = __ROL__(cur & 18444492273895866367, 63) & 9223372036854775807;
                            v39 = v27 & 7;
                            goto LABEL_401d8c;
                        }
                        else
                        {
                            v67 = v10 & 0xc00000;
                            if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
                                goto LABEL_4024d4;
                            if (v67 != &g_400000)
                                v68 = 0;
                            else
                                v68 = 1;
                            if ((char)arm64g_calculate_condition(25, (unsigned long long)(v68 & (v16 ^ 1)), 0, 0))
                                goto LABEL_402780;
                            if (v67 != &g_800000)
                                goto LABEL_402444;
                            if (result)
                            {
LABEL_4025e8:
                                goto LABEL_402780;
                            }
                            else
                            {
LABEL_40271c:
                                cur = 18446744073709551615;
                                v27 = 18446744073709551615;
                                iter = 32766;
                                v21 = 20;
LABEL_401dbc:
                                if (iter + 1 != 32767)
                                {
                                    v34 = cur * 0x2000000000000000 | v27 >> 3;
                                }
                                else
                                {
                                    v67 = v10 & 0xc00000;
                                    goto LABEL_401f88;
                                }
                            }
LABEL_401dd8:
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
LABEL_402214:
                        v34 = 0;
                        v35 = 0;
                        v21 = 0;
                    }
                    else
                    {
                        v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                        v27 = flag9;
LABEL_401f60:
                        iter = 32767;
LABEL_401f68:
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        v34 = cur * 0x2000000000000000 | v27 >> 3;
                        if (iter != 32767)
                        {
LABEL_401edc:
                            goto LABEL_401dd8;
                        }
                    }
LABEL_402124:
                    if (v35 || v34)
                        goto LABEL_40212c;
                    v34 = 0;
                    goto LABEL_401dd8;
                }
            }
        }
        else if (flag6)
        {
            cur |= 0x8000000000000;
            v57 = v21;
            if (flag5 != 32767)
                goto LABEL_401e50;
LABEL_402104:
            if (!cur && !flag10)
                return v21;
            v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
            v35 = __ROL__(cur, 61) & 2305843009213693951;
            v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
            goto LABEL_402124;
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
                        goto LABEL_401f54;
                    }
LABEL_401e50:
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
LABEL_402230:
                    v27 = v61 + flag10;
                    if (!((char)arm64g_calculate_condition(50, v61, flag10, 0)))
                        cur += 1;
                    goto LABEL_402230;
                }
                else
                {
                    v27 = flag10 + flag9;
                    cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                    goto LABEL_402078;
                }
            }
            v27 = flag10;
            if (flag5 == 32767 && (cur || flag10))
            {
                v21 = (unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1;
                v27 = flag10;
                goto LABEL_401f60;
            }
        }
    }
    v39 = v27 & 7;
    flag4 = 0;
    if (!iter)
    {
        if (v27 || cur)
        {
LABEL_401d80:
            v39 = v27 & 7;
            iter = 0;
            flag4 = 1;
            goto LABEL_401d8c;
        }
        else
        {
LABEL_401ed0:
            v34 = 0;
            v21 = 0;
            goto LABEL_401edc;
        }
    }
}


// Function: sub_4027d4 at 0x4027d4
void sub_4027d4()
{
    __multf3();
    return;
}


// Function: __multf3 at 0x4027e0

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
LABEL_402c38:
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
                    goto LABEL_402c38;
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


// Function: __sfp_handle_exceptions at 0x402fe0
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
    uint128_t v0;  // qcflag

    if (((char)(a0 >> 4) & 1))
        a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
    return a0;
}


// Function: _fini at 0x403050
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

