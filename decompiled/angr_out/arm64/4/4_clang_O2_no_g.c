// Angr Decompilation of 4_clang_O2_no_g
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
            goto LABEL_400944;
        }
        else
        {
            v33 = (unsigned int)v31 + 8;
            v19 = v33;
            if ((char)arm64g_calculate_condition(129, v31 & 4294967295, 8, 0))
            {
LABEL_400944:
                ptr = v16;
                *(&v16) = ptr + 2;
                continue;
            }
            else
            {
                ptr = &v17[v31 & 4294967295];
            }
        }
        v35 = result - 1;
        v22 += (unsigned long long)*(ptr);
        v31 = v33;
        a0 = v35;
    } while (result != 1);
    return v22;
}


// Function: func_no_args at 0x40098c
unsigned long long func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x400994
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4009b4
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


// Function: func_struct_byval at 0x400a0c
int func_struct_byval(unsigned int *a0)
{
    return ...;
}


// Function: func_struct_byptr at 0x400a8c
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return *(a0) * a0[1];
}


// Function: test_calling_conventions at 0x400aa4
extern char g_401228;
extern char g_401250;
extern char g_401272;
extern char g_401299;
extern char g_4012c1;
extern char g_4012ed;
extern char g_4014d2;

int test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4014d2);
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
    printf(&g_401228, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
    printf(&g_401250, 42);
    printf(&g_401272, 36);
    printf(&g_401299, 117);
    printf(&g_4012c1, 136);
    return printf(&g_4012ed, 50);
}


// Function: param_by_value_int at 0x400bd8
unsigned int param_by_value_int(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400be0
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x400be8
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
    return 1;
}


// Function: call_by_value_ptr at 0x400c00
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x400c08
unsigned long long param_array_decay()
{
    return 8;
}


// Function: call_array_decay at 0x400c10
unsigned long long call_array_decay()
{
    return 8;
}


// Function: param_string at 0x400c18
int param_string(char *a0)
{
    return a0[1] + *(a0);
}


// Function: call_string_param at 0x400c28
unsigned long long call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x400c30
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


// Function: call_ptr_array at 0x400cbc
unsigned long long call_ptr_array()
{
    return 300;
}


// Function: param_varargs at 0x400cc4
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
            goto LABEL_400d28;
        }
        else
        {
            v33 = (unsigned int)v31 + 8;
            v19 = v33;
            if ((char)arm64g_calculate_condition(129, v31 & 4294967295, 8, 0))
            {
LABEL_400d28:
                ptr = v16;
                *(&v16) = ptr + 2;
                continue;
            }
            else
            {
                ptr = &v17[v31 & 4294967295];
            }
        }
        v35 = result - 1;
        v22 += (unsigned long long)*(ptr);
        v31 = v33;
        a0 = v35;
    } while (result != 1);
    return v22;
}


// Function: call_varargs_param at 0x400d70
int call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400d88
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400da8
unsigned long long call_func_ptr_param()
{
    return 20;
}


// Function: param_double_ptr at 0x400db0
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


// Function: call_double_ptr at 0x400dd8
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: param_complex_cast at 0x400de0
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


// Function: call_complex_cast at 0x400e08
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x400e14
int param_struct_byval(unsigned int *a0)
{
    return a0[15] + *(a0);
}


// Function: call_struct_byval at 0x400e24
unsigned long long call_struct_byval()
{
    return 15;
}


// Function: param_order_dep at 0x400e2c
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_order_dep at 0x400e34
unsigned long long call_order_dep()
{
    return 3;
}


// Function: test_parameter_passing at 0x400e3c
extern char g_4014f3;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4014f3);
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


// Function: ret_basic_type at 0x400f20
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x400f28
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x400f30
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x400f38
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x400f40
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | (a1 * 0x100000000 | a1 >> 32) & 0xffffffff00000000;
}


// Function: call_ret_small_struct at 0x400f4c
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x400f54
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


// Function: call_ret_large_struct at 0x400fac
unsigned long long call_ret_large_struct()
{
    return 215;
}


// Function: func_a at 0x400fb4
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x400fbc
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x400fc4
long long ret_func_ptr(unsigned int a0)
{
    if (a0)
        return func_b;
    return func_a;
}


// Function: call_ret_func_ptr at 0x400fe0
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: ret_opaque_handle at 0x400fe8
extern char ret_opaque_handle.handle2;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &ret_opaque_handle.handle2;
    return "d";
}


// Function: call_ret_opaque at 0x401004
extern unsigned int $d.4;

int call_ret_opaque()
{
    return $d.4;
}


// Function: ret_complex_expr at 0x401010
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a1 >= a0)
        return a2 + 10;
    return __ROL__(a2, 1) & 4294967294;
}


// Function: call_ret_complex_expr at 0x401024
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x40102c
unsigned long long ret_multi_branch(unsigned int a0)
{
    if (a0 >= 3)
        return 4294967295;
    return 10 * a0 + 10;
}


// Function: call_ret_multi_branch at 0x401044
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x40104c
long long ret_void(unsigned long a0, unsigned int *ptr)
{
    *(ptr) = (unsigned int)a0 * 3;
    return a0;
}


// Function: call_ret_void at 0x401058
unsigned long long call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x401060
extern unsigned int $d.4;
extern char g_4013d5;
extern char g_4013f1;
extern char g_40140d;
extern char g_401428;
extern char g_401445;
extern char g_401461;
extern char g_40147e;
extern char g_40149a;
extern char g_4014b6;
extern char g_401514;

int test_return_values()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401514);
    printf(&g_4013d5, 42);
    printf(&g_4013f1, 20);
    printf(&g_40140d, 7);
    printf(&g_401428, 215);
    printf(&g_401445, 10);
    printf(&g_401461, $d.4);
    printf(&g_40147e, 40);
    printf(&g_40149a, 60);
    return printf(&g_4014b6, 21);
}


// Function: main at 0x40110c
unsigned int main(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
    test_return_values();
    return 0;
}


// Function: _fini at 0x40112c
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

