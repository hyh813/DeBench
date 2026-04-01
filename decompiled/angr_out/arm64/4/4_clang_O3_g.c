// Angr Decompilation of 4_clang_O3_g
// Platform: AARCH64

// Function: _init at 0x400628
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400640
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


// Function: sub_400654 at 0x400654
long long sub_400654()
{
    char *v0;  // x0
    unsigned long long len;  // x0

    len = strlen(v0);
    return strlen(v0);
}


// Function: _start at 0x400700
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400730 at 0x400730
void sub_400730()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400734
extern unsigned long long g_412fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fd0)
        return 0;
    v0 = __gmon_start__(g_412fd0);
    return __gmon_start__(g_412fd0);
}


// Function: sub_400748 at 0x400748
void sub_400748()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400750
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400780
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


// Function: sub_4007bc at 0x4007bc
void sub_4007bc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4007c0
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


// Function: sub_400808 at 0x400808
long long sub_400808()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400810
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: cdecl_func at 0x400814
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_cdecl at 0x40081c
unsigned long long call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x400824
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a0 * a1;
}


// Function: call_stdcall at 0x40082c
unsigned long long call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x400834
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a1 + a0 + a2;
}


// Function: call_fastcall at 0x400840
unsigned long long call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x400848
unsigned long long call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x400850
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x400864
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x40086c
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40087c
unsigned long long call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x400884
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x40089c
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x4008a4
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4008b8
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x4008c0
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x4008d0
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x4008d8
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x4008e0
typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v23;  // x8
    uint128_t v24;  // q0
    struct_0 **v33;  // x9
    unsigned long v34;  // x8
    unsigned long long v35;  // x10
    unsigned long long v36;  // x10
    unsigned long long i;  // x8
    unsigned long long v39;  // d0
    struct_0 **p;  // x9
    unsigned int flag1;  // w10
    unsigned int v42;  // w10
    uint128_t v25;  // q1
    struct_0 **v43;  // x9
    unsigned long long v44;  // x8
    unsigned int result;  // w0
    unsigned int v46;  // w10
    struct_0 **ptr;  // x11
    unsigned int v48;  // w0
    unsigned int v49;  // w0
    uint128_t v26;  // q2
    uint128_t v27;  // q3
    uint128_t v28;  // q4
    uint128_t v29;  // q5
    uint128_t v30;  // q6
    uint128_t v31;  // q7
    unsigned long v32;  // x11
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
    struct_0 **v16;  // [bp-0x20], Other Possible Types: char, unsigned long
    struct_0 **v17;  // [bp-0x20]
    char *v18;  // [bp-0x18]
    char *v19;  // [bp-0x10]
    unsigned int v20;  // [bp-0x8]
    unsigned long long v21;  // [bp-0x8]
    char *v22;  // [bp+0x0]

    v11 = a3;
    v12 = a4;
    v19 = &v8;
    v21 = 18446743528248704968;
    v23 = a0 - 1;
    v9 = a1;
    v10 = a2;
    v13 = a5;
    v14 = a6;
    v0 = v24;
    v1 = v25;
    v2 = v26;
    v3 = v27;
    v4 = v28;
    v5 = v29;
    v6 = v30;
    v7 = v31;
    v18 = &v16;
    v15 = a7;
    v17 = &v22;
    if (a0 < 1)
        return 0;
    v32 = v20;
    if (!((char)(v32 >> 31) & 1))
    {
        v33 = v17;
        if ((unsigned int)v23 < 4 || (char *)&v33[v23 & 4294967295] + 4 > &v16 && &v18 > v33)
        {
            v36 = 0;
            v39 = 0;
        }
        else
        {
            v34 = v23 + 1;
            if ((char)arm64g_calculate_condition(10, v34 & 3, 0, 0))
                v35 = 4;
            else
                v35 = v34 & 3;
            v36 = v34 - v35;
            i = v36;
            do
            {
                v16 = (unsigned long long)v27 + 8;
                i -= 4;
            } while (i != 4);
            v33 = &v33[v36];
            v39 = [D] unsupported_Iop_ZeroHI64ofV128();
        }
        p = v33 + 1;
        flag1 = a0 - v36;
        do
        {
            v16 = p;
            v42 = flag1 - 1;
            v43 = p + 1;
            v39 += (int)p[1];
            p = v43;
            flag1 = v42;
        } while (flag1 != 1);
        return v39;
    }
    else
    {
        v44 = 0;
        while (true)
        {
            result = a0;
            if (!((char)(v32 >> 31) & 1))
            {
                v46 = v32;
                goto LABEL_400988;
            }
            else
            {
                v46 = (unsigned int)v32 + 8;
                v20 = v46;
                if ((char)arm64g_calculate_condition(129, v32 & 4294967295, 8, 0))
                {
LABEL_400988:
                    ptr = v17;
                    v17 = ptr + 1;
                    v48 = result - 1;
                    v44 += *((int *)ptr);
                    v32 = v46;
                    a0 = v48;
                    if (result == 1)
                        return v44;
                }
                else
                {
                    v49 = result - 1;
                    v44 += *((int *)&v18[v32 & 4294967295]);
                    v32 = v46;
                    a0 = v49;
                    if (result == 1)
                        return v44;
                }
            }
        }
    }
}


// Function: func_no_args at 0x400a78
unsigned long long func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x400a80
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400aa0
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


// Function: func_struct_byval at 0x400af8
int func_struct_byval(unsigned int *a0)
{
    return ...;
}


// Function: func_struct_byptr at 0x400b78
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x400b90
extern char g_4014a8;
extern char g_4014d0;
extern char g_4014f2;
extern char g_401519;
extern char g_401541;
extern char g_40156d;
extern char g_401752;

int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401752);
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
    printf(&g_4014a8, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
    printf(&g_4014d0, 42);
    printf(&g_4014f2, 36);
    printf(&g_401519, 117);
    printf(&g_401541, 136);
    return printf(&g_40156d, 50);
}


// Function: param_by_value_int at 0x400cc4
unsigned int param_by_value_int(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400ccc
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x400cd4
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
    return 1;
}


// Function: call_by_value_ptr at 0x400cec
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x400cf4
unsigned long long param_array_decay()
{
    return 8;
}


// Function: call_array_decay at 0x400cfc
unsigned long long call_array_decay()
{
    return 8;
}


// Function: param_string at 0x400d04
int param_string(char *a0)
{
    return a0[1] + *(a0);
}


// Function: call_string_param at 0x400d14
unsigned long long call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x400d1c
typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_2 *field_8;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

typedef struct struct_2 {
    char field_0;
} struct_2;

unsigned long long param_ptr_array(struct_0 *a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned long long j;  // x9
    unsigned long long v2;  // x8
    unsigned long long v3;  // x8
    unsigned long long v4;  // x11
    struct_0 *v5;  // x12
    unsigned long long i;  // x13
    struct_0 *v9;  // x11

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
        v5 = &a0->field_8;
        i = v1;
        do
        {
            v3 += v5->field_8->field_0;
            v4 += v5->field_0->field_0;
            v5 += 1;
            i -= 2;
        } while (i != 2);
        v2 = v4 + v3;
        if (v1 == v0)
            return v4 + v3 & 4294967295;
    }
    v9 = &(&a0->field_0)[v1];
    j = v0 - v1;
    do
    {
        v2 += v9->field_0->field_0;
        j -= 1;
        v9 = &v9->field_8;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: call_ptr_array at 0x400da8
unsigned long long call_ptr_array()
{
    return 300;
}


// Function: param_varargs at 0x400db0
typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long v23;  // x8
    uint128_t v24;  // q0
    struct_0 **v33;  // x9
    unsigned long v34;  // x8
    unsigned long long v35;  // x10
    unsigned long long v36;  // x10
    unsigned long long i;  // x8
    unsigned long long v39;  // d0
    struct_0 **p;  // x9
    unsigned int flag1;  // w10
    unsigned int v42;  // w10
    uint128_t v25;  // q1
    struct_0 **v43;  // x9
    unsigned long long v44;  // x8
    unsigned int result;  // w0
    unsigned int v46;  // w10
    struct_0 **ptr;  // x11
    unsigned int v48;  // w0
    unsigned int v49;  // w0
    uint128_t v26;  // q2
    uint128_t v27;  // q3
    uint128_t v28;  // q4
    uint128_t v29;  // q5
    uint128_t v30;  // q6
    uint128_t v31;  // q7
    unsigned long v32;  // x11
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
    struct_0 **v16;  // [bp-0x20], Other Possible Types: char, unsigned long
    struct_0 **v17;  // [bp-0x20]
    char *v18;  // [bp-0x18]
    char *v19;  // [bp-0x10]
    unsigned int v20;  // [bp-0x8]
    unsigned long long v21;  // [bp-0x8]
    char *v22;  // [bp+0x0]

    v11 = a3;
    v12 = a4;
    v19 = &v8;
    v21 = 18446743528248704968;
    v23 = a0 - 1;
    v9 = a1;
    v10 = a2;
    v13 = a5;
    v14 = a6;
    v0 = v24;
    v1 = v25;
    v2 = v26;
    v3 = v27;
    v4 = v28;
    v5 = v29;
    v6 = v30;
    v7 = v31;
    v18 = &v16;
    v15 = a7;
    v17 = &v22;
    if (a0 < 1)
        return 0;
    v32 = v20;
    if (!((char)(v32 >> 31) & 1))
    {
        v33 = v17;
        if ((unsigned int)v23 < 4 || (char *)&v33[v23 & 4294967295] + 4 > &v16 && &v18 > v33)
        {
            v36 = 0;
            v39 = 0;
        }
        else
        {
            v34 = v23 + 1;
            if ((char)arm64g_calculate_condition(10, v34 & 3, 0, 0))
                v35 = 4;
            else
                v35 = v34 & 3;
            v36 = v34 - v35;
            i = v36;
            do
            {
                v16 = (unsigned long long)v27 + 8;
                i -= 4;
            } while (i != 4);
            v33 = &v33[v36];
            v39 = [D] unsupported_Iop_ZeroHI64ofV128();
        }
        p = v33 + 1;
        flag1 = a0 - v36;
        do
        {
            v16 = p;
            v42 = flag1 - 1;
            v43 = p + 1;
            v39 += (int)p[1];
            p = v43;
            flag1 = v42;
        } while (flag1 != 1);
        return v39;
    }
    else
    {
        v44 = 0;
        while (true)
        {
            result = a0;
            if (!((char)(v32 >> 31) & 1))
            {
                v46 = v32;
                goto LABEL_400e58;
            }
            else
            {
                v46 = (unsigned int)v32 + 8;
                v20 = v46;
                if ((char)arm64g_calculate_condition(129, v32 & 4294967295, 8, 0))
                {
LABEL_400e58:
                    ptr = v17;
                    v17 = ptr + 1;
                    v48 = result - 1;
                    v44 += *((int *)ptr);
                    v32 = v46;
                    a0 = v48;
                    if (result == 1)
                        return v44;
                }
                else
                {
                    v49 = result - 1;
                    v44 += *((int *)&v18[v32 & 4294967295]);
                    v32 = v46;
                    a0 = v49;
                    if (result == 1)
                        return v44;
                }
            }
        }
    }
}


// Function: call_varargs_param at 0x400f48
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400f60
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400f80
unsigned long long call_func_ptr_param()
{
    return 20;
}


// Function: param_double_ptr at 0x400f88
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


// Function: call_double_ptr at 0x400fb0
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: param_complex_cast at 0x400fb8
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


// Function: call_complex_cast at 0x400fe0
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x400fec
int param_struct_byval(unsigned int *a0)
{
    return a0[15] + *(a0);
}


// Function: call_struct_byval at 0x400ffc
unsigned long long call_struct_byval()
{
    return 15;
}


// Function: param_order_dep at 0x401004
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_order_dep at 0x40100c
unsigned long long call_order_dep()
{
    return 3;
}


// Function: test_parameter_passing at 0x401014
extern char g_401773;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401773);
    printf("PARAM-L1-01: %d\n", 15);
    printf("PARAM-L1-02: %d\n", 11);
    printf("PARAM-L2-01: %d\n", 8);
    printf("PARAM-L2-02: %d\n", 173);
    printf("PARAM-L2-03: %d\n", 300);
    printf("PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30, 40, a5, a6, a7) & 4294967295);
    printf("PARAM-L3-01: %d\n", 20);
    printf("PARAM-L3-02: %d\n", 21);
    printf("PARAM-L3-03: %d\n", 305419896);
    printf("PARAM-L3-04: %d\n", 15);
    return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x4010f8
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x401100
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x401108
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x401110
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x401118
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | (a1 * 0x100000000 | a1 >> 32) & 0xffffffff00000000;
}


// Function: call_ret_small_struct at 0x401124
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x40112c
typedef struct struct_0 {
    unsigned int field_0;
    uint128_t field_4;
    uint128_t field_14;
    uint128_t field_24;
    unsigned long long field_34;
    unsigned int field_3c;
} struct_0;

long long ret_large_struct(unsigned long a0)
{
    int v0;  // q3
    struct_0 *ptr;  // x8
    unsigned long v2;  // d3

    v0 = a0 & 4294967295 | (a0 & 4294967295) * 0x100000000 CONCAT a0 & 4294967295 | (a0 & 4294967295) * 0x100000000;
    ptr->field_0 = a0;
    *((unsigned int *)((char *)&ptr->field_24 + 12)) = (unsigned int)a0 + 15;
    v2 = [D] unsupported_Iop_ZeroHI64ofV128();
    *((void*)&(&ptr->field_0)[1]) = AddV(v0, 316912650112397582603894390785);
    *((void*)((char *)&ptr->field_4 + 4)) = AddV(v0, 633825300243241909290088267781);
    *((void*)((char *)&ptr->field_14 + 4)) = AddV(v0, 950737950374086235976282144777);
    *((unsigned long *)((char *)&ptr->field_24 + 4)) = v2;
    return a0;
}


// Function: call_ret_large_struct at 0x401184
unsigned long long call_ret_large_struct()
{
    return 215;
}


// Function: func_a at 0x40118c
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x401194
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x40119c
long long ret_func_ptr(unsigned int a0)
{
    if (a0)
        return func_b;
    return func_a;
}


// Function: call_ret_func_ptr at 0x4011b8
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: ret_opaque_handle at 0x4011c0
extern char ret_opaque_handle.handle2;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &ret_opaque_handle.handle2;
    return "d";
}


// Function: call_ret_opaque at 0x4011d8
extern unsigned int ret_opaque_handle.handle1;

int call_ret_opaque()
{
    return ret_opaque_handle.handle1;
}


// Function: ret_complex_expr at 0x4011e4
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a1 >= a0)
        return a2 + 10;
    return __ROL__(a2, 1) & 4294967294;
}


// Function: call_ret_complex_expr at 0x4011f8
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x401200
unsigned long long ret_multi_branch(unsigned int a0)
{
    if (a0 >= 3)
        return 4294967295;
    return 10 * a0 + 10;
}


// Function: call_ret_multi_branch at 0x401218
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x401220
long long ret_void(unsigned long a0, unsigned int *ptr)
{
    *(ptr) = (unsigned int)a0 * 3;
    return a0;
}


// Function: call_ret_void at 0x40122c
unsigned long long call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x401234
extern char g_401655;
extern char g_401671;
extern char g_40168d;
extern char g_4016a8;
extern char g_4016c5;
extern char g_4016e1;
extern char g_4016fe;
extern char g_40171a;
extern char g_401736;
extern char g_401794;
extern unsigned int ret_opaque_handle.handle1;

int test_return_values()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401794);
    printf(&g_401655, 42);
    printf(&g_401671, 20);
    printf(&g_40168d, 7);
    printf(&g_4016a8, 215);
    printf(&g_4016c5, 10);
    printf(&g_4016e1, ret_opaque_handle.handle1);
    printf(&g_4016fe, 40);
    printf(&g_40171a, 60);
    return printf(&g_401736, 21);
}


// Function: main at 0x4012e0
extern char g_401655;
extern char g_401671;
extern char g_40168d;
extern char g_4016a8;
extern char g_4016c5;
extern char g_4016e1;
extern char g_4016fe;
extern char g_40171a;
extern char g_401736;
extern char g_401794;
extern unsigned int ret_opaque_handle.handle1;

unsigned int main(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
    puts(&g_401794);
    printf(&g_401655, 42);
    printf(&g_401671, 20);
    printf(&g_40168d, 7);
    printf(&g_4016a8, 215);
    printf(&g_4016c5, 10);
    printf(&g_4016e1, ret_opaque_handle.handle1);
    printf(&g_4016fe, 40);
    printf(&g_40171a, 60);
    printf(&g_401736, 21);
    return 0;
}


// Function: _fini at 0x40139c
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

