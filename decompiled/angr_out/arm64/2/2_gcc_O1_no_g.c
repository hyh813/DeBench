// Angr Decompilation of 2_gcc_O1_no_g
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
extern unsigned long long g_413f88;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_413f88;
}


// Function: sub_4006e4 at 0x4006e4
long long sub_4006e4()
{
    __libc_start_main(); /* do not return */
}


// Function: _start at 0x400780
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_4007b0 at 0x4007b0
void sub_4007b0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4007b4
extern unsigned long long g_413fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_413fe0)
        return 0;
    v0 = __gmon_start__(g_413fe0);
    return __gmon_start__(g_413fe0);
}


// Function: sub_4007c8 at 0x4007c8
void sub_4007c8()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4007d0
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400800
extern char __TMC_END__;
extern unsigned long long g_413ff8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_413ff8)
    {
        goto g_413ff8;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_40083c at 0x40083c
void sub_40083c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400840
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_413fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_413fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return 1;
}


// Function: sub_400888 at 0x400888
long long sub_400888()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400890
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: double_value at 0x400894
unsigned int double_value(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: process_int at 0x40089c
int process_int(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: complex_callback at 0x4008a8
unsigned long long complex_callback(unsigned int *ptr, unsigned long long *a1)
{
    *(ptr) = *(ptr) + 10;
    if (*(a1))
        return 1;
    return 0;
}


// Function: process_char at 0x4008c4
long long process_char(unsigned int a0)
{
    if (25 >= ((a0 & 255) - 65 & 255))
        return (a0 & 255) + 32 & 255;
    return a0 & 255;
}


// Function: process_short at 0x4008e8
int process_short(unsigned int a0, unsigned int a1)
{
    return (a1 * 0x10000 >> 31 & 0xffff0000 | a1 & 65535) + (a0 & 65535);
}


// Function: process_long at 0x4008f4
unsigned long long process_long(unsigned long a0)
{
    return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x4008fc
long long process_ll(unsigned long a0)
{
    return a0 * a0;
}


// Function: process_float at 0x400904
long long process_float()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: process_double at 0x400918
long long process_double()
{
    return "PTR-L2-07 (ptr_void): %d\n";
}


// Function: process_ld at 0x400930
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


// Function: process_bool at 0x400958
unsigned long long process_bool(unsigned int a0)
{
    if (0 >= a0)
        return 0;
    return ~(a0) & 1;
}


// Function: const_param at 0x40096c
int const_param(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: volatile_access at 0x400978
unsigned int volatile_access(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x400988
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


// Function: array_1d_stack at 0x400adc
unsigned long long array_1d_stack(unsigned long ptr, unsigned int i)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(ptr + v0 * 4));
        v0 += 1;
    } while ((unsigned int)v0 < i);
    return v1;
}


// Function: array_string at 0x400b10
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


// Function: array_2d_stack at 0x400b3c
long long array_2d_stack(unsigned int *a0)
{
    unsigned long long v0;  // x0
    unsigned int *ptr;  // x1
    unsigned long long v2;  // x0
    unsigned long v3;  // x2
    unsigned long long v5;  // x0

    v0 = 0;
    ptr = a0;
    do
    {
        v2 = v0;
        v5 = v2 + *(ptr);
        ptr += 11;
        v0 = v5;
    } while (ptr != a0 + 110);
    return v2 + v3;
}


// Function: array_3d at 0x400b5c
unsigned long long array_3d(unsigned int *a0)
{
    unsigned int i[5];  // x3
    unsigned long long v1;  // x0
    unsigned int cur[5];  // x1

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


// Function: array_vla at 0x400bb0
unsigned long long array_vla(unsigned int i, unsigned long ptr)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(ptr + v0 * 4));
        v0 += 1;
    } while ((unsigned int)v0 < i);
    return v1;
}


// Function: array_pointer at 0x400be4
unsigned long long array_pointer(unsigned int *a0, unsigned int a1)
{
    unsigned long long v0;  // x0
    unsigned int *ptr;  // x2
    unsigned int *v2;  // x2

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v2 = ptr + 10;
        v0 += *(ptr);
        ptr = v2;
    } while (ptr != (char *)&a0[7 + 10 * a1] + 2);
    return v0;
}


// Function: pointer_array at 0x400c20
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
    unsigned int v0;  // w3
    unsigned int v2;  // w3
    unsigned long long v3;  // x1
    unsigned long long v4;  // x0

    if (a1 <= 10)
        v0 = a1;
    else
        v0 = 10;
    v2 = v0;
    if (a1 <= 0)
        return 0;
    v3 = 0;
    v4 = 0;
    do
    {
        if (*((long long *)(a0 + v3 * 8)))
            v4 += *((int *)*((long long *)(a0 + v3 * 8)));
    } while ((v3 += 1, v2 > (unsigned int)v3));
    return v4;
}


// Function: array_complex_index at 0x400c6c
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


// Function: array_oob at 0x400ca0
unsigned long long array_oob(unsigned int *a0, unsigned long a1)
{
    unsigned long long v0;  // x0
    unsigned int *ptr;  // x2
    unsigned int *v2;  // x2

    if (((char)(a1 >> 31) & 1))
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v2 = ptr + 1;
        v0 += *(ptr);
        ptr = v2;
    } while (ptr != (char *)&a0[a1 & 4294967295] + 1);
    return v0;
}


// Function: test_array_types at 0x400cd0
extern char __stack_chk_guard;
extern char g_402de8;

unsigned long long test_array_types()
{
    unsigned int *cur;  // x1
    unsigned int k;  // w0
    char *iter;  // x3
    unsigned int i;  // w2
    unsigned long long index;  // x0
    unsigned int v32;  // w1
    unsigned int j[5];  // x3
    unsigned int l;  // w2
    unsigned int ptr[5];  // x0
    char *v0;  // [bp-0x570]
    unsigned int v1;  // [bp-0x534]
    unsigned int v2;  // [bp-0x530]
    unsigned int v3;  // [bp-0x52c]
    unsigned int v4;  // [bp-0x528]
    unsigned int v5;  // [bp-0x524]
    unsigned int v6;  // [bp-0x520]
    unsigned long long v7;  // [bp-0x518]
    unsigned long long v8;  // [bp-0x510]
    unsigned int v9;  // [bp-0x508]
    char *v10;  // [bp-0x500]
    char *v11;  // [bp-0x4f8]
    char *v12;  // [bp-0x4f0]
    char v13;  // [bp-0x4e8]
    unsigned int v14;  // [bp-0x4b0]
    char v15;  // [bp-0x46c]
    unsigned int result[10];  // [bp-0x460]
    unsigned int v17;  // [bp-0x438]
    unsigned int v18;  // [bp-0x410]
    unsigned int v19;  // [bp-0x3e8]
    unsigned int v20;  // [bp-0x3c0]
    unsigned int v21[100];  // [bp-0x398]
    unsigned int v22;  // [bp-0x208]
    char v23;  // [bp-0x14]
    char v24[8];  // [bp-0x10]
    unsigned long v25;  // [bp-0x8]
    char v26;  // [bp+0x0]

    v0 = &v26;
    v25 = *((long long *)&__stack_chk_guard);
    puts(&g_402de8);
    v7 = 8589934593;
    v8 = 17179869187;
    v9 = 5;
    __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&v7, 5) & 4294967295);
    strncpy(v24, "hello", 5);
    __printf_chk(1, "ARR-L1-02 (array_string): %d\n", array_string(&v24) & 4294967295);
    iter = &v21;
    i = 0;
    do
    {
        index = 0;
        do
        {
            if (i == (unsigned int)index)
                v32 = index;
            else
                v32 = 0;
        } while ((*((unsigned int *)&iter[4 * index]) = v32, index += 1, index != 10));
        i += 1;
        iter += 40;
    } while (i != 10);
    __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v21) & 4294967295);
    j = &v22;
    do
    {
        l = 0;
        ptr = j;
        do
        {
            ptr[0] = 1;
            ptr[1] = 1;
            ptr[2] = 1;
            ptr[3] = 1;
            ptr[4] = 1;
            l += 1;
            ptr += 1;
        } while (l != 5);
        j += 5;
    } while (j != &v23);
    __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v22) & 4294967295);
    v4 = 10;
    v5 = 20;
    v6 = 30;
    __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v4) & 4294967295);
    *(&result) = 0;
    v17 = 10;
    v18 = 20;
    v19 = 30;
    v20 = 40;
    __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(&result, 5) & 4294967295);
    v1 = 10;
    v2 = 20;
    v3 = 30;
    memset(&v13, 0, 56);
    v10 = &v1;
    v11 = &v2;
    v12 = &v3;
    __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array(&v10, 3) & 4294967295);
    cur = &v14;
    k = 0;
    do
    {
        *(cur) = k;
        cur += 1;
        k += 1;
    } while (k != 20);
    __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v15));
    if (v25 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: ptr_single at 0x400f54
int ptr_single(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: ptr_double at 0x400f60
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
    return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x400f70
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


// Function: ptr_increment at 0x400f84
unsigned long long ptr_increment(unsigned int *a0, unsigned int a1)
{
    unsigned long long v0;  // x0
    unsigned int *ptr;  // x2
    unsigned int *v2;  // x2

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v2 = ptr + 1;
        v0 += *(ptr);
        ptr = v2;
    } while (ptr != &a0[a1]);
    return v0;
}


// Function: ptr_offset at 0x400fb4
int ptr_offset(unsigned long a0, unsigned int a1)
{
    return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x400fbc
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
    return ((a0 - a1) * 0x4000000000000000 | a0 - a1 >> 2) & 13835058059577131007 & 4294967295;
}


// Function: ptr_void at 0x400fc8
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


// Function: ptr_const at 0x400fec
unsigned int ptr_const(unsigned int *a0)
{
    return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x400ff8
int ptr_const_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) + 5;
    return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40100c
int ptr_func_simple(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1);
}


// Function: ptr_func_complex at 0x401028
extern char __stack_chk_guard;

unsigned long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
    unsigned long long v5;  // x0
    char *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x18]
    unsigned long long result;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    v1 = "test";
    result = 0;
    v5 = a0(a1, &v1, a0, 0);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v5;
}


// Function: ptr_cast at 0x40108c
int ptr_cast(unsigned int *a0)
{
    return *(a0);
}


// Function: opaque_handle_create at 0x401094
unsigned long long opaque_handle_create(unsigned long a0)
{
    return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: opaque_handle_op at 0x40109c
unsigned int opaque_handle_op(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: test_pointer_types at 0x4010a4
typedef struct struct_0 {
    char field_0;
} struct_0;

extern char __stack_chk_guard;
extern char g_402f20;

unsigned long long test_pointer_types()
{
    char *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    char *v3;  // [bp-0x30]
    struct_0 **v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned int v7;  // [bp-0x10]
    unsigned long v8;  // [bp-0x8]
    char v9;  // [bp+0x0]

    v0 = &v9;
    v8 = *((long long *)&__stack_chk_guard);
    puts(&g_402f20);
    __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
    __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
    v1 = 5;
    v3 = &v1;
    v4 = &v3;
    __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple(&v4) & 4294967295);
    v5 = 8589934593;
    v6 = 17179869187;
    v7 = 5;
    __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&v5, 5) & 4294967295);
    __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
    __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
    __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
    __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
    __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
    __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
    __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5) & 4294967295);
    v2 = 5;
    __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v2) & 4294967295);
    __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
    __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
    if (v8 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: struct_simple at 0x401280
int struct_simple(unsigned int *a0)
{
    return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x401298
unsigned long long struct_array(unsigned int *a0, unsigned int a1)
{
    unsigned long long v0;  // x0
    unsigned int ptr[3];  // x2

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v0 += ptr[0] + ptr[1] + ptr[2];
        ptr += 1;
    } while (ptr != (char *)&a0[2 + 3 * a1] + 1);
    return v0;
}


// Function: struct_nested at 0x4012e8
int struct_nested(unsigned int *a0)
{
    return *(a0) + a0[3];
}


// Function: struct_deep at 0x4012f8
int struct_deep(unsigned int *a0)
{
    return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401308
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *idx)
{
    unsigned int v0;  // w0

    v0 = 0;
    if (idx->field_8)
        v0 = idx->field_8->field_0;
    return idx->field_0 + v0;
}


// Function: struct_bitfields at 0x401324
int struct_bitfields(unsigned int *ptr)
{
    unsigned long v0;  // x1

    v0 = *(ptr);
    return ((unsigned int)v0 & 1) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 1)) & 3) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 3)) & 7) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 6)) & 1023);
}


// Function: union_type at 0x401348
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


// Function: union_array at 0x401370
unsigned long long union_array(unsigned long ptr, unsigned int i)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(ptr + v0 * 4));
        v0 += 1;
    } while ((unsigned int)v0 < i);
    return v1;
}


// Function: enum_type at 0x4013a4
unsigned int enum_type(unsigned int a0)
{
    return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: enum_switch at 0x4013b0
unsigned long long enum_switch(unsigned int a0)
{
    unsigned long long v0;  // x0

    if (a0 == 2)
    {
        return 50;
    }
    else if (2 < a0)
    {
        if (a0 != 3)
            v0 = 4294967197;
        else
            v0 = 4294967295;
        return v0;
    }
    else if (a0)
    {
        return 100;
    }
    else
    {
        return 0;
    }
}


// Function: struct_func_ptr at 0x4013e8
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int struct_func_ptr(struct_0 *a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0->field_8(a0->field_0, a0->field_8);
}


// Function: linked_list at 0x401404
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long linked_list(struct_0 *ptr)
{
    unsigned long long v0;  // x0

    if (!ptr)
        return 0;
    v0 = 0;
    do
    {
        v0 += ptr->field_0;
        ptr = ptr->field_8;
    } while (ptr->field_8);
    return v0;
}


// Function: doubly_linked_list at 0x40142c
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long doubly_linked_list(struct_0 *ptr)
{
    unsigned long long v0;  // x0

    if (!ptr)
        return 0;
    v0 = 0;
    do
    {
        v0 += ptr->field_0;
        ptr = ptr->field_8;
    } while (ptr->field_8);
    return v0;
}


// Function: binary_tree_sum at 0x401454
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

unsigned long long binary_tree_sum(struct_0 *a0)
{
    unsigned long long v5;  // x30
    unsigned long long v6;  // x19
    unsigned long long v7;  // x20
    unsigned long long v8;  // x0
    unsigned long long v9;  // x0
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    if (!a0)
        return 0;
    v0 = &v4;
    v1 = v5;
    v2 = v6;
    v3 = v7;
    v8 = binary_tree_sum(a0->field_8);
    v9 = binary_tree_sum(a0->field_10);
    return v8 + a0->field_0 + v9;
}


// Function: binary_tree at 0x401498
unsigned long long binary_tree()
{
    void* v2;  // x0
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v3 = binary_tree_sum(v2);
    return binary_tree_sum(v2);
}


// Function: graph_traverse at 0x4014ac
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
                v1 += *((int *)&ptr->padding_0[0]);
                ptr = ptr->field_8;
            } while (ptr->field_8);
        }
    } while ((idx += 1, (unsigned int)idx < p->field_50));
    return v1;
}


// Function: test_composite_types at 0x4014f4
extern char __stack_chk_guard;
extern char g_4030f8;

unsigned long long test_composite_types()
{
    char *v0;  // [bp-0x1b0]
    unsigned int v1[2];  // [bp-0x158]
    unsigned int flag1[1];  // [bp-0x150]
    unsigned int v4;  // [bp-0x14c]
    unsigned int v5;  // [bp-0x148]
    unsigned int v6;  // [bp-0x140]
    unsigned long long flag6;  // [bp-0x138]
    unsigned int v8;  // [bp-0x130]
    char *v9;  // [bp-0x128]
    unsigned int v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x118]
    unsigned int result;  // [bp-0x110]
    unsigned long long flag5;  // [bp-0x108]
    unsigned int v14;  // [bp-0x100]
    unsigned long long flag3;  // [bp-0xf8]
    unsigned long long flag4;  // [bp-0xf0]
    unsigned long long v17;  // [bp-0xe8]
    unsigned int v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    unsigned long long v20;  // [bp-0xd0]
    unsigned long long v21;  // [bp-0xc8]
    unsigned int v22;  // [bp-0xc0]
    char *v23;  // [bp-0xb8]
    char v24;  // [bp-0xb0], Other Possible Types: unsigned int
    char *v25;  // [bp-0xa8]
    char v26;  // [bp-0xa0], Other Possible Types: unsigned int
    unsigned long long flag2;  // [bp-0x98]
    unsigned int v28;  // [bp-0x90]
    char *v29;  // [bp-0x88]
    unsigned long long flag7;  // [bp-0x80]
    char v31;  // [bp-0x78], Other Possible Types: unsigned int
    unsigned long long flag8;  // [bp-0x70]
    char *v33;  // [bp-0x68]
    char *v34;  // [bp-0x60]
    char v35;  // [bp-0x58]
    unsigned int v36;  // [bp-0x10]
    unsigned long v37;  // [bp-0x8]
    char v38;  // [bp+0x0]

    v0 = &v38;
    v37 = *((long long *)&__stack_chk_guard);
    puts(&g_4030f8);
    *((unsigned int [1])flag1) = 1;
    v4 = 2;
    v5 = 3;
    __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", struct_simple(&flag1) & 4294967295);
    v19 = 4294967297;
    v20 = 8589934593;
    v21 = 8589934594;
    __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", struct_array(&v19, 2) & 4294967295);
    __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
    __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
    v6 = 20;
    flag6 = 0;
    v8 = 10;
    v9 = &v6;
    __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v8) & 4294967295);
    *(&v1) = *(&v1) | 1;
    *(v1) = (((unsigned int)*(&v1) & 0xfffffff8 | ((unsigned int)*(&v1) & 4294967289 | __ROL__(2, 1) & 6) & 7) & 0xffffffc0 | (((unsigned int)*(&v1) & 0xfffffff8 | ((unsigned int)*(&v1) & 4294967289 | __ROL__(2, 1) & 6) & 7) & 4294967239 | __ROL__(3, 3) & 56) & 63) & 0xffff0000 | ((((unsigned int)*(&v1) & 0xfffffff8 | ((unsigned int)*(&v1) & 4294967289 | __ROL__(2, 1) & 6) & 7) & 0xffffffc0 | (((unsigned int)*(&v1) & 0xfffffff8 | ((unsigned int)*(&v1) & 4294967289 | __ROL__(2, 1) & 6) & 7) & 4294967239 | __ROL__(3, 3) & 56) & 63) & 4294901823 | __ROL__(100, 6) & 65472) & 65535;
    *(&v1) = *(&v1) & 0xffffffff00000000 | *(v1);
    *(&v1) = *(&v1) & 18442240478377148415;
    __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v1) & 4294967295);
    __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
    v17 = 85899345930;
    v18 = 30;
    __printf_chk(1, "CMP-L2-08 (union_array): %d\n", union_array(&v17, 3) & 4294967295);
    __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
    __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
    v10 = 10;
    v11 = process_int;
    __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v10) & 4294967295);
    v22 = 10;
    v23 = &v24;
    v24 = 20;
    v25 = &v26;
    v26 = 30;
    flag2 = 0;
    __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", linked_list(&v22) & 4294967295);
    v28 = 10;
    v29 = &v31;
    flag7 = 0;
    v31 = 20;
    flag8 = 0;
    v33 = &v28;
    __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v28) & 4294967295);
    v14 = 100;
    flag3 = 0;
    flag4 = 0;
    __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v14) & 4294967295);
    result = 1;
    flag5 = 0;
    memset(&v35, 0, 80);
    v34 = &result;
    v36 = 2;
    __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v34) & 4294967295);
    if (v37 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: main at 0x4017f8
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


// Function: sub_40181c at 0x40181c
void sub_40181c()
{
    __addtf3();
    return;
}


// Function: __addtf3 at 0x401820
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
                goto LABEL_401898;
            }
            if (cur || flag9)
            {
                v21 = (unsigned int)v21 - 1;
                if ((unsigned int)v21 != 1)
                {
LABEL_401898:
                    if (iter == 32767)
                        goto LABEL_401ce4;
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
                    goto LABEL_4018ec;
                }
                else
                {
                    v27 = flag10 - flag9;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                    goto LABEL_4018ec;
                }
            }
            v27 = flag10;
            if (flag5 == 32767 && (cur || flag10))
            {
LABEL_401b34:
                v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                v27 = flag10;
                goto LABEL_401b40;
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
                        goto LABEL_401d68;
                    v27 = flag9 - flag10;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                    iter = flag6;
                    goto LABEL_4018ec;
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
                    goto LABEL_401b40;
                }
                else
                {
                    goto LABEL_401df4;
                }
            }
            else
            {
                v21 = -((unsigned int)v21);
                cur |= 0x8000000000000;
LABEL_401d68:
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
LABEL_4018ec:
                    flag8 = cur & 2251799813685247;
                    if ((cur >> 51 & 1))
                        goto LABEL_4018f4;
                }
                else
                {
                    if (!cur && !flag9)
                        return v21;
                    v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                    v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                    v35 = __ROL__(cur, 61) & 2305843009213693951;
                    goto LABEL_401d04;
                    goto LABEL_401d04;
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
                            goto LABEL_402160;
                        v27 = flag9;
                        goto LABEL_402088;
                    }
                    v27 = flag10;
                    if (!flag3)
                        goto LABEL_402088;
                    v27 = flag10 - flag9;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                    if (((char)(cur >> 51) & 1))
                    {
                        v27 = flag9 - flag10;
                        cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                        v38 = v27 | cur;
LABEL_40195c:
                        if (!v38)
                            goto LABEL_401ab0;
                        goto LABEL_401960;
                    }
                    if (!v27 && !cur)
                    {
LABEL_402160:
                        v34 = 0;
                        goto LABEL_401abc;
                    }
                    else
                    {
                        v39 = v27 & 7;
                        flag4 = 1;
                        goto LABEL_40196c;
                    }
                }
                else
                {
                    if (iter != 32767)
                    {
                        if (v19 != 32767)
                        {
                            if (!flag2)
                                goto LABEL_401fc8;
                            goto LABEL_401f98;
                        }
                    }
                    else
                    {
                        if (flag2)
                        {
                            v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                            if (v19 != 32767)
                                goto LABEL_401f98;
                        }
                        else if (v19 != 32767)
                        {
LABEL_401fc8:
                            if (!flag3)
                                goto LABEL_401fcc;
                            goto LABEL_40228c;
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
LABEL_402228:
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
                            goto LABEL_401d04;
                        }
                        else
                        {
LABEL_40228c:
                            v35 = __ROL__(cur, 61) & 2305843009213693951;
                            v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                            goto LABEL_401d04;
                        }
                    }
                    else if (flag2)
                    {
LABEL_401f98:
                        v41 = __ROL__(cur, 61) & 0xe000000000000000;
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        if (flag3)
                            goto LABEL_402228;
                        v34 = v5 & 2305843009213693951 | v41;
                        goto LABEL_401d04;
                    }
                    else
                    {
LABEL_401fcc:
                        v34 = 18446744073709551615;
                        v21 = 1;
LABEL_401d0c:
                        goto LABEL_4019b8;
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
                    goto LABEL_4018f4;
                }
                if (!v27 && !flag8)
                {
                    v34 = 0;
                    goto LABEL_401abc;
                }
                else
                {
                    result = result;
LABEL_4018f4:
                    if (flag8)
                    {
                        if (!flag8)
                            v46 = 64;
                        else
                            v46 = Clz(flag8);
                        v47 = v46 - 12;
LABEL_401900:
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
                            goto LABEL_401900;
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
                            goto LABEL_401958;
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
                            goto LABEL_40195c;
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
                                goto LABEL_402088;
                            v27 = flag10 + flag9;
                            cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                            if (!((char)(cur >> 51) & 1))
                            {
LABEL_401958:
                                v38 = v27 | cur;
                                goto LABEL_40195c;
                            }
                            else
                            {
                                cur &= 18444492273895866367;
                                v39 = v27 & 7;
                                flag4 = 0;
                                iter = 1;
                                goto LABEL_40196c;
                            }
                        }
                        else
                        {
                            if (!flag7)
                            {
                                v34 = 0;
                                goto LABEL_401abc;
                            }
                            else
                            {
                                v27 = flag9;
LABEL_402088:
                                flag11 = 0;
                                iter = 0;
                                goto LABEL_402090;
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
                                    goto LABEL_4022b8;
                                goto LABEL_402110;
                            }
                            if (cur || flag9)
                                goto LABEL_40237c;
                            if (!flag1)
                                return v21;
                            goto LABEL_402350;
                        }
                        else
                        {
                            if (flag1)
                            {
                                v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                                if (v19 != 32767)
                                {
LABEL_4022b8:
                                    if (cur || flag9)
                                        goto LABEL_4022c0;
                                }
                                else
                                {
                                    if (cur || flag9)
                                        goto LABEL_40237c;
                                }
LABEL_402350:
                                v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                v35 = __ROL__(cur, 61) & 2305843009213693951;
                                goto LABEL_401d04;
                            }
                            else
                            {
                                if (v19 != 32767)
                                    goto LABEL_402110;
                                if (!cur && !flag9)
                                    return v21;
LABEL_40237c:
                                if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
                                    v21 &= 4294967295;
                                else
                                    v21 = 1;
                                if (!flag1)
                                {
LABEL_402110:
                                    v35 = __ROL__(cur, 61) & 2305843009213693951;
                                    v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                    goto LABEL_401d04;
                                }
                                else
                                {
LABEL_4022c0:
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
                                    goto LABEL_401d04;
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
LABEL_4020b4:
                            goto LABEL_402360;
                        }
                        if (v67 != &g_400000)
                            v80 = 0;
                        else
                            v80 = 1;
                        if ((char)arm64g_calculate_condition(25, (unsigned long long)(v80 & (v16 ^ 1)), 0, 0))
                        {
LABEL_402360:
                            v1 = 0;
                            v83 = __sfp_handle_exceptions();
                            return __sfp_handle_exceptions();
                        }
                        if (v67 == &g_800000)
                        {
                            if (!result)
                                goto LABEL_4022fc;
                            goto LABEL_4021c8;
                        }
LABEL_402024:
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
LABEL_401c94:
                                v27 += 8;
                                if (!((char)arm64g_calculate_condition(50, v27, 8, 0)))
                                    cur += 1;
                            }
LABEL_401c9c:
                            flag11 = cur & 0x8000000000000;
                            if (flag4)
                            {
                                v21 = (unsigned int)v21 | 8;
                                goto LABEL_401998;
                            }
                        }
LABEL_401b68:
                        switch (v67)
                        {
                        case 0:
LABEL_401ba0:
                            break;
                        case 4194304:
                            if (!result)
                                goto LABEL_401ba0;
LABEL_401b84:
                            v34 = 18446744073709551615;
                            v21 = (unsigned int)v21 | 20;
                            goto LABEL_401abc;
                        case 8388608:
                            v81 = 1;
LABEL_401b7c:
                            if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v81 & (unsigned int)result), 0, 0)))
                                goto LABEL_401b84;
                            break;
                        default:
                            v81 = 0;
                            goto LABEL_401b7c;
                        }
                        goto LABEL_401abc;
                    }
LABEL_40196c:
                    if (!v39)
                    {
                        flag11 = cur & 0x8000000000000;
                        v21 = 0;
                        if (flag4)
                        {
LABEL_402090:
                            v21 = 0;
                            if (((char)(v10 >> 11) & 1))
                                v21 = 8;
                        }
LABEL_401998:
                        if (flag11)
                            goto LABEL_40199c;
                        goto LABEL_401b48;
                    }
                    switch (v78)
                    {
                    case 4194304:
                        v21 = 16;
                        if (!result)
                            goto LABEL_401c94;
                        break;
                    case 8388608:
                        v21 = 16;
                        if (result)
                            goto LABEL_401c94;
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
                            goto LABEL_401998;
                        }
                    }
                    goto LABEL_401c9c;
                }
            }
            if (flag5)
            {
                v21 = -((unsigned int)v21);
                cur |= 0x8000000000000;
                goto LABEL_401c00;
            }
            if (cur || flag10)
            {
                v21 = ~((unsigned int)v21);
                if ((unsigned int)v21)
                {
LABEL_401c00:
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
                            goto LABEL_401c58;
                        }
                        else
                        {
                            cur += 1;
                            iter = v19;
                            goto LABEL_401c58;
                        }
                    }
                    else
                    {
                        if (!cur && !flag9)
                            return v21;
                        v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                        goto LABEL_401d04;
                    }
                }
                else
                {
                    v27 = flag10 + flag9;
                    cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                    iter = flag6;
LABEL_401c58:
                    if (((char)(cur >> 51) & 1))
                    {
                        iter += 1;
                        if (iter != 32767)
                        {
                            flag4 = 0;
                            v27 = v27 & 1 | v27 >> 1 | cur * 0x8000000000000000;
                            cur = __ROL__(cur & 18444492273895866367, 63) & 9223372036854775807;
                            v39 = v27 & 7;
                            goto LABEL_40196c;
                        }
                        else
                        {
                            v67 = v10 & 0xc00000;
                            if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
                                goto LABEL_4020b4;
                            if (v67 != &g_400000)
                                v68 = 0;
                            else
                                v68 = 1;
                            if ((char)arm64g_calculate_condition(25, (unsigned long long)(v68 & (v16 ^ 1)), 0, 0))
                                goto LABEL_402360;
                            if (v67 != &g_800000)
                                goto LABEL_402024;
                            if (result)
                            {
LABEL_4021c8:
                                goto LABEL_402360;
                            }
                            else
                            {
LABEL_4022fc:
                                cur = 18446744073709551615;
                                v27 = 18446744073709551615;
                                iter = 32766;
                                v21 = 20;
LABEL_40199c:
                                if (iter + 1 != 32767)
                                {
                                    v34 = cur * 0x2000000000000000 | v27 >> 3;
                                }
                                else
                                {
                                    v67 = v10 & 0xc00000;
                                    goto LABEL_401b68;
                                }
                            }
LABEL_4019b8:
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
LABEL_401df4:
                        v34 = 0;
                        v35 = 0;
                        v21 = 0;
                    }
                    else
                    {
                        v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                        v27 = flag9;
LABEL_401b40:
                        iter = 32767;
LABEL_401b48:
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        v34 = cur * 0x2000000000000000 | v27 >> 3;
                        if (iter != 32767)
                        {
LABEL_401abc:
                            goto LABEL_4019b8;
                        }
                    }
LABEL_401d04:
                    if (v35 || v34)
                        goto LABEL_401d0c;
                    v34 = 0;
                    goto LABEL_4019b8;
                }
            }
        }
        else if (flag6)
        {
            cur |= 0x8000000000000;
            v57 = v21;
            if (flag5 != 32767)
                goto LABEL_401a30;
LABEL_401ce4:
            if (!cur && !flag10)
                return v21;
            v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
            v35 = __ROL__(cur, 61) & 2305843009213693951;
            v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
            goto LABEL_401d04;
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
                        goto LABEL_401b34;
                    }
LABEL_401a30:
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
LABEL_401e10:
                    v27 = v61 + flag10;
                    if (!((char)arm64g_calculate_condition(50, v61, flag10, 0)))
                        cur += 1;
                    goto LABEL_401e10;
                }
                else
                {
                    v27 = flag10 + flag9;
                    cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                    goto LABEL_401c58;
                }
            }
            v27 = flag10;
            if (flag5 == 32767 && (cur || flag10))
            {
                v21 = (unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1;
                v27 = flag10;
                goto LABEL_401b40;
            }
        }
    }
    v39 = v27 & 7;
    flag4 = 0;
    if (!iter)
    {
        if (v27 || cur)
        {
LABEL_401960:
            v39 = v27 & 7;
            iter = 0;
            flag4 = 1;
            goto LABEL_40196c;
        }
        else
        {
LABEL_401ab0:
            v34 = 0;
            v21 = 0;
            goto LABEL_401abc;
        }
    }
}


// Function: sub_4023b4 at 0x4023b4
void sub_4023b4()
{
    __multf3();
    return;
}


// Function: __multf3 at 0x4023c0

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
LABEL_402818:
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
                    goto LABEL_402818;
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


// Function: __sfp_handle_exceptions at 0x402bc0
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
    uint128_t v0;  // qcflag

    if (((char)(a0 >> 4) & 1))
        a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
    return a0;
}


// Function: _fini at 0x402c30
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

