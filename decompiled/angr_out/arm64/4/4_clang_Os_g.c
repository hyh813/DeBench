// Angr Decompilation of 4_clang_Os_g
// Platform: AARCH64

// Function: _init at 0x400668
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400680
extern unsigned long long g_412ff8;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_412ff8;
}


// Function: sub_400694 at 0x400694
long long sub_400694()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: _start at 0x400740
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400770 at 0x400770
void sub_400770()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400774
extern unsigned long long g_412fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fd0)
        return 0;
    v0 = __gmon_start__(g_412fd0);
    return __gmon_start__(g_412fd0);
}


// Function: sub_400788 at 0x400788
void sub_400788()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400790
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x4007c0
extern char __TMC_END__;
extern unsigned long long g_412fe0;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_412fe0)
    {
        goto g_412fe0;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_4007fc at 0x4007fc
void sub_4007fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400800
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_412fc8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_412fc8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return 1;
}


// Function: sub_400848 at 0x400848
long long sub_400848()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400850
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: cdecl_func at 0x400854
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_cdecl at 0x40085c
unsigned long long call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x400864
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a0 * a1;
}


// Function: call_stdcall at 0x40086c
unsigned long long call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x400874
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a1 + a0 + a2;
}


// Function: call_fastcall at 0x400880
unsigned long long call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x400888
unsigned long long call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x400890
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x4008a4
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x4008ac
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x4008bc
unsigned long long call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x4008c4
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x4008dc
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x4008e4
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4008f8
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x400900
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x400910
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x400918
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x400920
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v22;  // x8
    uint128_t v23;  // q0
    unsigned int result;  // w0
    unsigned int v33;  // w10
    char ptr[4];  // x11
    unsigned int v35;  // w0
    uint128_t v24;  // q1
    uint128_t v25;  // q2
    uint128_t v26;  // q3
    uint128_t v27;  // q4
    uint128_t v28;  // q5
    uint128_t v29;  // q6
    uint128_t v30;  // q7
    unsigned long v31;  // x11
    uint128_t v0;  // [bp-0xe0]
    uint128_t v1;  // [bp-0xd0]
    uint128_t v2;  // [bp-0xc0]
    uint128_t v3;  // [bp-0xb0]
    uint128_t v4;  // [bp-0xa0]
    uint128_t v5;  // [bp-0x90]
    uint128_t v6;  // [bp-0x80]
    uint128_t v7;  // [bp-0x70]
    char v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    char v16[4];  // [bp-0x20], Other Possible Types: char
    char *v17;  // [bp-0x18]
    char *v18;  // [bp-0x10]
    unsigned int v19;  // [bp-0x8], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x8]
    char v21;  // [bp+0x0]

    v18 = &v8;
    v19 = 18446743528248704968;
    v22 = 0;
    v11 = a3;
    v12 = a4;
    v9 = a1;
    v10 = a2;
    v13 = a5;
    v14 = a6;
    v0 = v23;
    v1 = v24;
    v2 = v25;
    v3 = v26;
    v4 = v27;
    v5 = v28;
    v6 = v29;
    v7 = v30;
    v17 = &v16;
    v15 = a7;
    *((char **)&v16) = &v21;
    if (a0 < 1)
        return 0;
    v31 = v20;
    do
    {
        result = a0;
        if (!((char)(v31 >> 31) & 1))
        {
            v33 = v31;
        }
        else
        {
            v33 = (unsigned int)v31 + 8;
            v19 = v33;
            if (!((char)arm64g_calculate_condition(129, v31 & 4294967295, 8, 0)))
            {
                ptr = &v17[v31 & 4294967295];
                continue;
            }
        }
        ptr = v16;
        *(&v16) = ptr + 2;
        v35 = result - 1;
        v22 += (unsigned long long)*(ptr);
        v31 = v33;
        a0 = v35;
    } while (result != 1);
    return v22;
}


// Function: func_no_args at 0x4009cc
unsigned long long func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x4009d4
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4009f4
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
    unsigned long long v3;  // d8
    unsigned int v4;  // w0
    unsigned int v5;  // s0
    unsigned long long v0;  // [bp-0x30]
    char *v1;  // [bp-0x20]
    char v2;  // [bp+0x0]

    v0 = v3;
    v1 = &v2;
    if (a1)
        v4 = strlen(a1);
    else
        v4 = 0;
    return v4 + a0 + v5 + a2;
}


// Function: func_struct_byval at 0x400a4c
long long func_struct_byval(unsigned long a0)
{
    unsigned long long i;  // x8

    i = 0;
    do
    {
        i += 16;
    } while (i != 128);
    return [D] unsupported_Iop_ZeroHI64ofV128();
}


// Function: func_struct_byptr at 0x400a74
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x400a8c
extern char g_4012d0;
extern char g_4012f8;
extern char g_40131a;
extern char g_401341;
extern char g_401369;
extern char g_401395;
extern char g_40157a;

int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long i;  // x8
    uint128_t v6;  // q0
    uint128_t v7;  // q0
    unsigned long long j;  // x8
    char v0;  // [bp-0x130]
    char v1;  // [bp-0xb0]
    char *v2;  // [bp-0x30]
    char v3;  // [bp+0x0]

    v2 = &v3;
    puts(&g_40157a);
    printf("CALL-L1-01: %d\n", 15);
    printf("CALL-L1-02: %d\n", 50);
    printf("CALL-L1-03: %d\n", 6);
    printf("CALL-L1-04: %d\n", 15);
    printf("CALL-L1-05: %d\n", 15);
    printf("CALL-L1-06: %d\n", 100);
    printf("CALL-L1-07: %d\n", 21);
    printf("CALL-L1-08: %d\n", 15);
    printf("CALL-L1-09: %d\n", 10);
    printf("CALL-L1-10: %d\n", 33);
    printf(&g_4012d0, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
    printf(&g_4012f8, 42);
    printf(&g_40131a, 36);
    printf(&g_401341, 117);
    i = 0;
    v6 = 0x10000000000000000;
    do
    {
        v7 = AddV(v6, 2 CONCAT 2);
        *((uint128_t *)&(&v1)[i]) = AddV(v6, 1 CONCAT 1);
        i += 16;
        v6 = v7;
    } while (i != 128);
    memcpy(&v0, &v1, 128);
    j = 0;
    do
    {
        j += 16;
    } while (j != 128);
    printf(&g_401369, [D] unsupported_Iop_ZeroHI64ofV128());
    return printf(&g_401395, 50);
}


// Function: param_by_value_int at 0x400c44
unsigned int param_by_value_int(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400c4c
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x400c54
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
    return 1;
}


// Function: call_by_value_ptr at 0x400c6c
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x400c74
unsigned long long param_array_decay()
{
    return 8;
}


// Function: call_array_decay at 0x400c7c
unsigned long long call_array_decay()
{
    return 8;
}


// Function: param_string at 0x400c84
int param_string(char *a0)
{
    return a0[1] + *(a0);
}


// Function: call_string_param at 0x400c94
unsigned long long call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x400c9c
typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned long long param_ptr_array(struct_0 **a0, unsigned int a1)
{
    unsigned long long v0;  // x0
    unsigned long i;  // x9
    unsigned long long v2;  // x0
    struct_0 **v3;  // x8
    unsigned long v4;  // x9
    unsigned long v5;  // x10
    unsigned long long v6;  // x0

    if (a1 < 1)
        return 0;
    v0 = 0;
    i = a1;
    do
    {
        v2 = v0;
        v3 = a0 + 1;
        v4 = i - 1;
        v6 = v2 + *(a0)->field_0;
        a0 = v3;
        v0 = v6;
        i = v4;
    } while (i != 1);
    return v2 + v5;
}


// Function: call_ptr_array at 0x400cd0
unsigned long long call_ptr_array()
{
    return 300;
}


// Function: param_varargs at 0x400cd8
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v22;  // x8
    uint128_t v23;  // q0
    unsigned int result;  // w0
    unsigned int v33;  // w10
    char ptr[4];  // x11
    unsigned int v35;  // w0
    uint128_t v24;  // q1
    uint128_t v25;  // q2
    uint128_t v26;  // q3
    uint128_t v27;  // q4
    uint128_t v28;  // q5
    uint128_t v29;  // q6
    uint128_t v30;  // q7
    unsigned long v31;  // x11
    uint128_t v0;  // [bp-0xe0]
    uint128_t v1;  // [bp-0xd0]
    uint128_t v2;  // [bp-0xc0]
    uint128_t v3;  // [bp-0xb0]
    uint128_t v4;  // [bp-0xa0]
    uint128_t v5;  // [bp-0x90]
    uint128_t v6;  // [bp-0x80]
    uint128_t v7;  // [bp-0x70]
    char v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v15;  // [bp-0x28]
    char v16[4];  // [bp-0x20], Other Possible Types: char
    char *v17;  // [bp-0x18]
    char *v18;  // [bp-0x10]
    unsigned int v19;  // [bp-0x8], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x8]
    char v21;  // [bp+0x0]

    v18 = &v8;
    v19 = 18446743528248704968;
    v22 = 0;
    v11 = a3;
    v12 = a4;
    v9 = a1;
    v10 = a2;
    v13 = a5;
    v14 = a6;
    v0 = v23;
    v1 = v24;
    v2 = v25;
    v3 = v26;
    v4 = v27;
    v5 = v28;
    v6 = v29;
    v7 = v30;
    v17 = &v16;
    v15 = a7;
    *((char **)&v16) = &v21;
    if (a0 < 1)
        return 0;
    v31 = v20;
    do
    {
        result = a0;
        if (!((char)(v31 >> 31) & 1))
        {
            v33 = v31;
        }
        else
        {
            v33 = (unsigned int)v31 + 8;
            v19 = v33;
            if (!((char)arm64g_calculate_condition(129, v31 & 4294967295, 8, 0)))
            {
                ptr = &v17[v31 & 4294967295];
                continue;
            }
        }
        ptr = v16;
        *(&v16) = ptr + 2;
        v35 = result - 1;
        v22 += (unsigned long long)*(ptr);
        v31 = v33;
        a0 = v35;
    } while (result != 1);
    return v22;
}


// Function: call_varargs_param at 0x400d84
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400d9c
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400dbc
unsigned long long call_func_ptr_param()
{
    return 20;
}


// Function: param_double_ptr at 0x400dc4
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
    if (!ptr)
    {
        return 4294967295;
    }
    else if (*(ptr))
    {
        *(ptr)->field_0 = a1;
        *(ptr) = NULL;
        return 1;
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_double_ptr at 0x400dec
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: param_complex_cast at 0x400df4
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
    if (a1 == 1)
    {
        return a0[1] + *(a0);
    }
    else if (!a1)
    {
        return *(a0);
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_complex_cast at 0x400e1c
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x400e28
int param_struct_byval(unsigned int *a0)
{
    return a0[15] + *(a0);
}


// Function: call_struct_byval at 0x400e38
int call_struct_byval()
{
    int v0;  // [bp-0x40]
    char v1;  // [bp-0x4]

    v0 = 0x3000000020000000100000000;
    return *((int *)&v1) + (int)v0;
}


// Function: param_order_dep at 0x400e64
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_order_dep at 0x400e6c
unsigned long long call_order_dep()
{
    return 3;
}


// Function: test_parameter_passing at 0x400e74
extern char g_40159b;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    int v0;  // [bp-0x50]
    uint128_t v1;  // [bp-0x20]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    puts(&g_40159b);
    printf("PARAM-L1-01: %d\n", 15);
    printf("PARAM-L1-02: %d\n", 11);
    printf("PARAM-L2-01: %d\n", 8);
    printf("PARAM-L2-02: %d\n", 173);
    printf("PARAM-L2-03: %d\n", 300);
    printf("PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30, 40, a5, a6, a7) & 4294967295);
    printf("PARAM-L3-01: %d\n", 20);
    printf("PARAM-L3-02: %d\n", 21);
    printf("PARAM-L3-03: %d\n", 305419896);
    v0 = 0x3000000020000000100000000;
    v1 = 1188422437972219480990927552524;
    printf("PARAM-L3-04: %d\n", *((int *)((char *)&v1 + 12)) + (int)v0);
    return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x400f80
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x400f88
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x400f90
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x400f98
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x400fa0
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | (a1 * 0x100000000 | a1 >> 32) & 0xffffffff00000000;
}


// Function: call_ret_small_struct at 0x400fac
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x400fb4
long long ret_large_struct(unsigned long a0)
{
    unsigned long long i;  // x9
    uint128_t v1;  // q1
    unsigned long long v2;  // x8
    uint128_t v3;  // q1

    i = 0;
    v1 = 0x3000000020000000100000000;
    do
    {
        v3 = AddV(v1, 17179869188 CONCAT 17179869188);
        *((uint128_t *)(v2 + i)) = AddV(v1, a0 & 4294967295 | (a0 & 4294967295) * 0x100000000 CONCAT a0 & 4294967295 | (a0 & 4294967295) * 0x100000000);
        i += 16;
        v1 = v3;
    } while (i != 64);
    return a0;
}


// Function: call_ret_large_struct at 0x400fe4
int call_ret_large_struct()
{
    int v0;  // [bp-0x40]
    char v1;  // [bp-0x4]

    v0 = 8160500740850794668087192846436;
    return *((int *)&v1) + (int)v0;
}


// Function: func_a at 0x401010
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x401018
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x401020
long long ret_func_ptr(unsigned int a0)
{
    if (a0)
        return func_b;
    return func_a;
}


// Function: call_ret_func_ptr at 0x40103c
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: ret_opaque_handle at 0x401044
extern char ret_opaque_handle.handle2;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &ret_opaque_handle.handle2;
    return "d";
}


// Function: call_ret_opaque at 0x401060
extern unsigned int $d.3;

int call_ret_opaque()
{
    return $d.3;
}


// Function: ret_complex_expr at 0x40106c
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a1 >= a0)
        return a2 + 10;
    return __ROL__(a2, 1) & 4294967294;
}


// Function: call_ret_complex_expr at 0x401080
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x401088
unsigned long long ret_multi_branch(unsigned int a0)
{
    if (a0 >= 3)
        return 4294967295;
    return 10 * a0 + 10;
}


// Function: call_ret_multi_branch at 0x4010a0
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x4010a8
long long ret_void(unsigned long a0, unsigned int *ptr)
{
    *(ptr) = (unsigned int)a0 * 3;
    return a0;
}


// Function: call_ret_void at 0x4010b4
unsigned long long call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x4010bc
extern unsigned int $d.3;
extern char g_40147d;
extern char g_401499;
extern char g_4014b5;
extern char g_4014d0;
extern char g_4014ed;
extern char g_401509;
extern char g_401526;
extern char g_401542;
extern char g_40155e;
extern char g_4015bc;

int test_return_values()
{
    int v0;  // [bp-0x50]
    uint128_t v1;  // [bp-0x20]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    puts(&g_4015bc);
    printf(&g_40147d, 42);
    printf(&g_401499, 20);
    printf(&g_4014b5, 7);
    v0 = 8160500740850794668087192846436;
    v1 = 9111238691243327648145774477424;
    printf(&g_4014d0, *((int *)((char *)&v1 + 12)) + (int)v0);
    printf(&g_4014ed, 10);
    printf(&g_401509, $d.3);
    printf(&g_401526, 40);
    printf(&g_401542, 60);
    return printf(&g_40155e, 21);
}


// Function: main at 0x401190
unsigned int main(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
    test_return_values();
    return 0;
}


// Function: _fini at 0x4011b0
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

