// Angr Decompilation of 4_clang_O1_no_g
// Platform: ARMEL

// Function: _init at 0x4003e4
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_4003f0 at 0x4003f0
extern unsigned int g_412008;

int sub_4003f0()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_412008;
}


// Function: _start at 0x400458
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_400490 at 0x400490
void sub_400490()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x40049c
extern unsigned int g_412030;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_412030)
        goto LABEL_4004b4;
    return v0;
LABEL_4004b4:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4004c0
extern char __TMC_END__;
extern unsigned int g_41202c;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_4004e0;
    return &__TMC_END__;
LABEL_4004e0:
    if (g_41202c)
        goto LABEL_4004f0;
    return &__TMC_END__;
LABEL_4004f0:
    goto g_41202c;
}


// Function: register_tm_clones at 0x400504
extern char __TMC_END__;
extern unsigned int g_412038;

int register_tm_clones()
{
    if (0)
        goto LABEL_400530;
    return &__TMC_END__;
LABEL_400530:
    if (g_412038)
        goto LABEL_400540;
    return &__TMC_END__;
LABEL_400540:
    goto g_412038;
}


// Function: __do_global_dtors_aux at 0x400554
extern char __TMC_END__;
extern unsigned int __dso_handle;
extern unsigned int g_412028;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__TMC_END__)
        goto LABEL_400570;
    return v2;
LABEL_400570:
    v1 = v3;
    v0 = v4;
    if (!g_412028)
    {
        v5 = deregister_tm_clones();
        __TMC_END__ = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4005bc
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: cdecl_func at 0x4005c0
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_cdecl at 0x4005c8
unsigned int call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x4005d0
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: call_stdcall at 0x4005dc
unsigned int call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x4005e4
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a1 + a0 + a2;
}


// Function: call_fastcall at 0x4005f0
unsigned int call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x4005f8
unsigned int call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x400600
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp+0x0]

    return a1 + a0 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x400618
unsigned int call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x400620
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x400630
unsigned int call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x400638
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x400658
unsigned int call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x400660
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp+0x0]

    return a1 + a0 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x400678
unsigned int call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x400680
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x400690
unsigned int call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x400698
unsigned int mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x4006a0
unsigned int varargs_func(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v4;  // r1
    char ptr[4];  // r2
    char v0[4];  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v1 = a1;
    v2 = a2;
    v3 = a3;
    *((unsigned int **)&v0[0]) = &v1;
    v4 = 0;
    if (i >= 1)
    {
        do
        {
            ptr = v0;
            *((char *[4])&v0[0]) = ptr + 1;
            v4 += *(ptr);
            i -= 1;
        } while (i != 1);
    }
    return v4;
}


// Function: func_no_args at 0x4006e4
unsigned int func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x4006ec
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x40071c
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    unsigned int v2;  // r1
    unsigned int v3;  // r0
    unsigned int v4;  // r0

    v0 = (!a1 ? NULL : strlen(a1));
    v1 = __adddf3(__floatsidf(v0 + a0), a1, a2, a3);
    v3 = __adddf3(v1, v2, __floatdidf(a4, a5), v2);
    v4 = __fixdfsi(v3, a1, a2, a3);
    return __fixdfsi(v3, a1, a2, a3);
}


// Function: func_struct_byval at 0x400794
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int i;  // r1
    unsigned int v5;  // r0
    unsigned int v6;  // r0
    unsigned int v7;  // r1
    unsigned int v8;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    i = 0;
    v5 = 0;
    do
    {
        v6 = v5;
        v7 = i;
        v8 = *((int *)((char *)&v0 + v7)) + v6;
        i = v7 + 8;
        v5 = v8;
    } while (i != 128);
    return *((int *)((char *)&v0 + v7)) + v6;
}


// Function: func_struct_byptr at 0x4007e0
unsigned int func_struct_byptr(unsigned int a0)
{
    unsigned int v1;  // r0
    unsigned int v2;  // r1
    unsigned int v3;  // r2

    if (!a0)
    {
        if ((Not Conv(32I->1I, armg_calculate_condition(0x12<32>, vvar_0, 0x0<32>, 0x0<32>)))) { Goto None } else { Goto None }
        v1 = 4294967295;
        if (!armg_calculate_condition(18, a0, 0, 0))
            return v1;
    }
    else
    {
        if ((Not Conv(32I->1I, armg_calculate_condition(0x12<32>, vvar_0, 0x0<32>, 0x0<32>)))) { Goto None } else { Goto None }
        if (!armg_calculate_condition(18, v1, 0, 0))
            return a0;
    }
    return v3 * v2;
}


// Function: test_calling_conventions at 0x4007f4
extern char g_4014b4;
extern char g_4014dc;
extern char g_4014fe;
extern char g_401525;
extern char g_40154d;
extern char g_401579;
extern char g_40175e;

int test_calling_conventions()
{
    unsigned int i;  // r4
    unsigned int cur[2];  // r0
    unsigned int j;  // r0
    unsigned int v7;  // r1
    unsigned int v8;  // r0
    unsigned int v0;  // [bp-0x90]
    unsigned int v1;  // [bp-0x8c]
    unsigned int v2;  // [bp-0x88]

    puts(&g_40175e);
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
    v0 = 4;
    v1 = 5;
    i = 1;
    printf(&g_4014b4, varargs_func(5, 1, 2, 3));
    printf(&g_4014dc, 42);
    printf(&g_4014fe, 36);
    printf(&g_401525, 117);
    cur = &v2;
    do
    {
        cur[0] = i;
        cur[1] = 0;
        cur += 1;
        i += 1;
    } while (i != 17);
    j = 0;
    v7 = 0;
    do
    {
        v7 += *((int *)((char *)&v2 + j));
        j += 8;
    } while (j != 128);
    printf(&g_40154d, v7);
    v8 = printf(&g_401579, 50);
    return printf(&g_401579, 50);
}


// Function: param_by_value_int at 0x4009cc
unsigned int param_by_value_int(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_by_value_int at 0x4009d4
unsigned int call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x4009dc
unsigned int param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) * 2;
    return 1;
}


// Function: call_by_value_ptr at 0x4009f0
unsigned int call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x4009f8
unsigned int param_array_decay()
{
    return 4;
}


// Function: call_array_decay at 0x400a00
unsigned int call_array_decay()
{
    return 4;
}


// Function: param_string at 0x400a08
int param_string(char *a0)
{
    return a0[1] + *(a0);
}


// Function: call_string_param at 0x400a18
unsigned int call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x400a20
typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned int param_ptr_array(struct_0 **a0, unsigned int i)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    struct_0 **v2;  // r2
    unsigned int v3;  // r3
    unsigned int v4;  // r0

    if (i < 1)
        return 0;
    v0 = 0;
    do
    {
        v1 = v0;
        v2 = a0 + 1;
        v4 = v1 + *(a0)->field_0;
        a0 = v2;
        v0 = v4;
        i -= 1;
    } while (i != 1);
    return v1 + v3;
}


// Function: call_ptr_array at 0x400a50
unsigned int call_ptr_array()
{
    return 300;
}


// Function: param_varargs at 0x400a58
unsigned int param_varargs(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v4;  // r1
    char ptr[4];  // r2
    char v0[4];  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v1 = a1;
    v2 = a2;
    v3 = a3;
    *((unsigned int **)&v0[0]) = &v1;
    v4 = 0;
    if (i >= 1)
    {
        do
        {
            ptr = v0;
            *((char *[4])&v0[0]) = ptr + 1;
            v4 += *(ptr);
            i -= 1;
        } while (i != 1);
    }
    return v4;
}


// Function: call_varargs_param at 0x400a9c
unsigned int call_varargs_param()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = 40;
    v1 = param_varargs(4, 10, 20, 30);
    return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x400acc
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400aec
unsigned int call_func_ptr_param()
{
    return 20;
}


// Function: param_double_ptr at 0x400af4
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned int * param_double_ptr(struct_0 **ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int *p;  // r3
    unsigned int *v1;  // cc_dep1
    unsigned int *v10;  // r0
    unsigned int v2;  // cc_dep2
    unsigned int *v17;  // cc_dep1
    unsigned int v18;  // cc_dep2
    unsigned int v19;  // cc_ndep
    unsigned int v3;  // cc_ndep
    unsigned int *v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // cc_ndep

    p = *(ptr);
    if (ptr)
    {
        v17 = (armg_calculate_condition(18, v1, v2, v3) ? p : v1);
        v18 = (armg_calculate_condition(18, v1, v2, v3) ? 0 : v2);
        v19 = (armg_calculate_condition(18, v1, v2, v3) ? 0 : v3);
        if (!armg_calculate_condition(18, v17, v18, v19))
            goto LABEL_400b0a;
LABEL_400b09:
        v10 = NULL;
    }
    else
    {
        v17 = (armg_calculate_condition(18, v4, v5, v6) ? p : v4);
        v18 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v5);
        v19 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v6);
        if (armg_calculate_condition(18, v17, v18, v19))
            goto LABEL_400b09;
LABEL_400b0a:
        v10 = 0xffffffff;
    }
    *(ptr) = v10;
    *(p) = a1;
    if (!armg_calculate_condition(18, v17, v18, v19))
        return v10;
    return 0x1;
}


// Function: call_double_ptr at 0x400b1c
unsigned int call_double_ptr()
{
    return 21;
}


// Function: param_complex_cast at 0x400b24
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
    if (a1 == 1)
        return a0[1] + *(a0);
    if (a1)
        goto LABEL_400b3c;
    return *(a0);
LABEL_400b3c:
    return 4294967295;
}


// Function: call_complex_cast at 0x400b58
unsigned int call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x400b64
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
    return a0 + a15;
}


// Function: call_struct_byval at 0x400b70
int call_struct_byval()
{
    unsigned int idx;  // r0
    unsigned long v0;  // [bp-0x40]
    char v1;  // [bp-0x4]

    idx = 0;
    do
    {
        (&v0)[idx] = idx;
        idx += 1;
    } while (idx != 16);
    return *((int *)&v1) + v0;
}


// Function: param_order_dep at 0x400ba0
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_order_dep at 0x400ba8
unsigned int call_order_dep()
{
    return 3;
}


// Function: test_parameter_passing at 0x400bb0
extern char g_40177f;

int test_parameter_passing()
{
    unsigned int idx;  // r0
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]

    puts(&g_40177f);
    printf("PARAM-L1-01: %d\n", 15);
    printf("PARAM-L1-02: %d\n", 11);
    printf("PARAM-L2-01: %d\n", 4);
    printf("PARAM-L2-02: %d\n", 173);
    printf("PARAM-L2-03: %d\n", 300);
    v0 = 40;
    printf("PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30));
    printf("PARAM-L3-01: %d\n", 20);
    printf("PARAM-L3-02: %d\n", 21);
    printf("PARAM-L3-03: %d\n", 305419896);
    idx = 0;
    do
    {
        (&v1)[idx] = idx;
        idx += 1;
    } while (idx != 16);
    printf("PARAM-L3-04: %d\n", v2 + v1);
    v5 = printf("PARAM-L3-05: %d\n", 3);
    return printf("PARAM-L3-05: %d\n", 3);
}


// Function: ret_basic_type at 0x400cf0
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_ret_basic at 0x400cf8
unsigned int call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x400d00
int ret_pointer(unsigned int a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x400d08
unsigned int call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x400d10
unsigned int [2] ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    *(ptr) = a1;
    ptr[1] = a2;
    return ptr;
}


// Function: call_ret_small_struct at 0x400d18
unsigned int call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x400d20
int ret_large_struct(unsigned int ptr, unsigned int a1)
{
    unsigned int idx;  // r2

    idx = 0;
    do
    {
        *((unsigned int *)(ptr + idx * 4)) = a1 + idx;
        idx += 1;
    } while (idx != 16);
    return ptr;
}


// Function: call_ret_large_struct at 0x400d3c
int call_ret_large_struct()
{
    unsigned int idx;  // r0
    unsigned long v0;  // [bp-0x40]
    char v1;  // [bp-0x4]

    idx = 0;
    do
    {
        (&v0)[idx] = idx + 100;
        idx += 1;
    } while (idx != 16);
    return *((int *)&v1) + v0;
}


// Function: func_a at 0x400d70
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x400d78
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: ret_func_ptr at 0x400d80
int ret_func_ptr(unsigned int a0)
{
    if (a0)
        return func_b;
    return func_a;
}


// Function: call_ret_func_ptr at 0x400da8
unsigned int call_ret_func_ptr()
{
    return 10;
}


// Function: ret_opaque_handle at 0x400db0
extern char ret_opaque_handle.handle2;

int ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &ret_opaque_handle.handle2;
    return "d";
}


// Function: call_ret_opaque at 0x400dd8
extern unsigned int ret_opaque_handle.handle1;

int call_ret_opaque()
{
    return ret_opaque_handle.handle1;
}


// Function: ret_complex_expr at 0x400de8
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a1 >= a0)
        return a2 + 10;
    return a2 * 2;
}


// Function: call_ret_complex_expr at 0x400dfc
unsigned int call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x400e04
unsigned int ret_multi_branch(unsigned int a0)
{
    return (a0 < 3 ? 10 + a0 * 10 : 4294967295);
}


// Function: call_ret_multi_branch at 0x400e20
unsigned int call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x400e28
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: call_ret_void at 0x400e34
unsigned int call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x400e3c
extern char g_401661;
extern char g_40167d;
extern char g_401699;
extern char g_4016b4;
extern char g_4016d1;
extern char g_4016ed;
extern char g_40170a;
extern char g_401726;
extern char g_401742;
extern char g_4017a0;
extern unsigned int ret_opaque_handle.handle1;

int test_return_values()
{
    unsigned int idx;  // r0
    unsigned int v3;  // r0
    unsigned long v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0xc]

    puts(&g_4017a0);
    printf(&g_401661, 42);
    printf(&g_40167d, 20);
    printf(&g_401699, 7);
    idx = 0;
    do
    {
        (&v0)[idx] = idx + 100;
        idx += 1;
    } while (idx != 16);
    printf(&g_4016b4, v1 + v0);
    printf(&g_4016d1, 10);
    printf(&g_4016ed, ret_opaque_handle.handle1);
    printf(&g_40170a, 40);
    printf(&g_401726, 60);
    v3 = printf(&g_401742, 21);
    return printf(&g_401742, 21);
}


// Function: main at 0x400f40
unsigned int main()
{
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}


// Function: __aeabi_drsub at 0x400f5c
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = __adddf3();
    return __adddf3();
}


// Function: __subdf3 at 0x400f64
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = __adddf3();
    return __adddf3();
}


// Function: __adddf3 at 0x400f68
extern unsigned int g_400000;

int __adddf3(int a0)
{
    unsigned int v1;  // r1
    unsigned int v2;  // r4
    unsigned int v10;  // cc_ndep
    unsigned int v90;  // cc_ndep
    unsigned int v91;  // cc_dep1
    unsigned int v92;  // cc_dep2
    unsigned int v93;  // cc_ndep
    unsigned int flag2;  // r1
    unsigned int v95;  // r3
    unsigned int v96;  // r3
    unsigned int v97;  // r2
    unsigned int v98;  // cc_op
    unsigned int v99;  // cc_dep2
    unsigned int v11;  // cc_dep1
    unsigned int v100;  // cc_dep1
    unsigned int v101;  // r2
    unsigned int v102;  // r2
    unsigned int v103;  // r0
    unsigned int v104;  // r1
    unsigned int v106;  // r1
    unsigned int v107;  // r4
    unsigned int v108;  // r4
    unsigned int v12;  // cc_dep2
    char v109;  // r4
    unsigned int v110;  // cc_op
    unsigned int v111;  // cc_dep1
    unsigned int v112;  // cc_dep2
    unsigned int v113;  // cc_ndep
    unsigned int v114;  // cc_dep1
    unsigned int v115;  // cc_dep2
    unsigned int v116;  // cc_ndep
    unsigned int v117;  // cc_dep1
    unsigned int v118;  // cc_dep2
    unsigned int v13;  // cc_ndep
    unsigned int v119;  // cc_ndep
    unsigned int v120;  // cc_dep1
    unsigned int v121;  // cc_dep2
    unsigned int v122;  // cc_ndep
    unsigned int v123;  // r1
    unsigned int v14;  // r2
    unsigned int v18;  // cc_op
    unsigned int v3;  // r3
    unsigned int v19;  // cc_dep1
    unsigned int v20;  // cc_dep2
    unsigned int v21;  // cc_ndep
    unsigned int v4;  // r5
    unsigned int v28;  // cc_op
    unsigned int v29;  // cc_dep1
    unsigned int v30;  // cc_dep2
    unsigned int v31;  // cc_ndep
    unsigned int v32;  // r4
    unsigned int v33;  // cc_dep1
    unsigned int v34;  // r5
    unsigned int v35;  // r5
    unsigned int v36;  // r2
    unsigned int v5;  // cc_dep1
    unsigned int v37;  // r3
    unsigned int v38;  // r1
    unsigned int v39;  // r2
    unsigned int v40;  // r3
    unsigned int v41;  // cc_op
    unsigned int v42;  // cc_dep1
    unsigned int v44;  // cc_ndep
    unsigned int v45;  // r1
    unsigned int v46;  // cc_dep2
    unsigned int v6;  // cc_dep2
    unsigned int v47;  // r0
    unsigned int v49;  // cc_op
    unsigned int v50;  // cc_dep1
    unsigned int v52;  // cc_ndep
    unsigned int v53;  // r3
    unsigned int v54;  // cc_dep2
    unsigned int v55;  // r2
    unsigned int v7;  // cc_ndep
    unsigned int v57;  // cc_dep1
    unsigned int v58;  // cc_dep2
    unsigned int v59;  // cc_ndep
    unsigned int v60;  // cc_dep2
    unsigned int v61;  // cc_ndep
    unsigned int v62;  // r4
    unsigned int v63;  // cc_dep2
    unsigned int v64;  // r12
    unsigned int v65;  // r0
    unsigned int v66;  // r1
    unsigned int v67;  // cc_dep2
    unsigned int v68;  // cc_ndep
    char v69;  // r5
    unsigned int v70;  // r1
    unsigned int v8;  // cc_dep1
    unsigned int v71;  // r12
    unsigned int v72;  // r0
    unsigned int v76;  // cc_dep1
    unsigned int v77;  // cc_op
    unsigned int v78;  // cc_dep2
    unsigned int v79;  // cc_ndep
    unsigned int v9;  // cc_dep2
    unsigned int v80;  // r12
    unsigned int v81;  // r0
    unsigned int v83;  // r12
    unsigned int v84;  // r0
    unsigned int flag3;  // r1
    unsigned int v86;  // r4
    unsigned int v87;  // cc_op
    unsigned int v88;  // cc_dep1
    unsigned int v89;  // cc_dep2
    unsigned int v0;  // [bp-0xc]

    v2 = v1 * 2;
    v4 = v3 * 2;
    if (!(v2 ^ v4))
    {
        v8 = (armg_calculate_condition(5, v5, v6, v7) ? a0 ^ v14 : v5);
        v9 = (armg_calculate_condition(5, v5, v6, v7) ? armg_calculate_flag_c(5, v5, v6, v7) : v6);
        v10 = (armg_calculate_condition(5, v5, v6, v7) ? armg_calculate_flag_v(5, v5, v6, v7) : v7);
        if (!armg_calculate_condition(21, v8, v9, v10))
            goto LABEL_400f7e;
LABEL_400f7d:
        v18 = (armg_calculate_condition(21, v8, v9, v10) ? 5 : 5);
        v19 = (armg_calculate_condition(21, v8, v9, v10) ? v2 | a0 : v8);
        v20 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_c(5, v8, v9, v10) : v9);
        v21 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_v(5, v8, v9, v10) : v10);
    }
    else
    {
        v8 = (armg_calculate_condition(5, v11, v12, v13) ? a0 ^ v14 : v11);
        v9 = (armg_calculate_condition(5, v11, v12, v13) ? armg_calculate_flag_c(5, v11, v12, v13) : v12);
        v10 = (armg_calculate_condition(5, v11, v12, v13) ? armg_calculate_flag_v(5, v11, v12, v13) : v13);
        if (armg_calculate_condition(21, v8, v9, v10))
            goto LABEL_400f7d;
LABEL_400f7e:
        v18 = (armg_calculate_condition(21, v8, v9, v10) ? 5 : 5);
        v19 = (armg_calculate_condition(21, v8, v9, v10) ? v2 | a0 : v8);
        v20 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_c(5, v8, v9, v10) : v9);
        v21 = (armg_calculate_condition(21, v8, v9, v10) ? armg_calculate_flag_v(5, v8, v9, v10) : v10);
    }
    v28 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)));
    v29 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? ~(v4 >> 21) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)));
    v30 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? v4 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)));
    v31 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)));
    if (!((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? ~(v4 >> 21) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? v4 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)) | 16, (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? 5 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? ~(v2 >> 21) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? v2 >> 20 & 1 : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20)), (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))) : (armg_calculate_condition((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18) | 16, (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) ? armg_calculate_flag_v((armg_calculate_condition(v18 | 16, v19, v20, v21) ? 5 : v18), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v4 | v14 : v19), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20), (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21)) : (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21))))))
    {
        v32 = v2 >> 21;
        v33 = v4 >> 21;
        if (v4 >> 21 < v32)
        {
            v35 = -(v34);
            if (!((char)armg_calculate_condition(210, v33, v32, 0)))
                goto LABEL_400fa0;
        }
        else
        {
            v34 = (v4 >> 21) - v32;
            if (!((char)armg_calculate_condition(210, v33, v32, 0)))
            {
LABEL_400fa0:
                v32 += v35;
                v36 = a0 ^ v14;
                v37 = v1 ^ v3;
                a0 ^= v36;
                v38 = v37 ^ v1;
                v39 = a0 ^ v36;
                v40 = v38 ^ v37;
            }
        }
        if (54 >= v35)
            goto LABEL_400fc4;
        return a0;
LABEL_400fc4:
        v41 = 5;
        v42 = v38 & 0x80000000;
        v44 = armg_calculate_flag_v(2, v35, 54, 0);
        v45 = 0x100000 | v38 & 1048575;
        v46 = 1;
        v47 = a0;
        if ((v38 & 0x80000000))
        {
            v41 = 2;
            v42 = 0;
            v44 = 0;
            v45 = -(v45) - (a0 > 0);
            v46 = a0;
            v47 = -(a0);
        }
        v49 = 5;
        v50 = v40 & 0x80000000;
        v52 = armg_calculate_flag_v(v41, v42, v46, v44);
        v53 = 0x100000 | v40 & 1048575;
        v54 = 1;
        v55 = v39;
        if ((v40 & 0x80000000))
        {
            v49 = 2;
            v50 = 0;
            v52 = 0;
            v53 = -(v53) - (v39 > 0);
            v54 = v39;
            v55 = -(v39);
        }
        v57 = v32 ^ v35;
        v58 = armg_calculate_flag_c(v49, v50, v54, v52);
        v59 = armg_calculate_flag_v(v49, v50, v54, v52);
        if (!(v32 ^ v35))
        {
            v60 = armg_calculate_flag_c(5, v57, v58, v59);
            v61 = armg_calculate_flag_v(5, v57, v58, v59);
            v53 ^= 0x100000;
            if (!v32)
            {
                v45 ^= 0x100000;
                if (!armg_calculate_condition(5, v32, v60, v61))
                    goto LABEL_40116e;
LABEL_40116d:
                v32 += 1;
                if (!armg_calculate_condition(21, v32, v60, v61))
                    goto LABEL_401172;
LABEL_401171:
                v35 -= 1;
            }
            else
            {
                v45 = v45;
                if (armg_calculate_condition(5, v32, v60, v61))
                    goto LABEL_40116d;
LABEL_40116e:
                if (armg_calculate_condition(21, v32, v60, v61))
                    goto LABEL_401171;
LABEL_401172:
            }
        }
        v62 = v32 - 1;
        vvar_286{r64|1b} = (char)(32 - v35);
        v63 = v35;
        if (32 >= v35)
        {
            v64 = v55 << (vvar_286{r64|1b} & 31) & vvar_286{r64|1b} - 32 >> 31;
            v45 += armg_calculate_flag_c(1, v47, v55 >> ((char)v35 & 31) & (v35 & 255) - 32 >> 31, 0);
            v65 = v47 + (v55 >> ((char)v35 & 31) & (v35 & 255) - 32 >> 31) + (v53 << (vvar_286{r64|1b} & 31) & vvar_286{r64|1b} - 32 >> 31);
            if ((v35 & 255) < 32)
            {
                v66 = v45 + (v53 >> (char)v35) + armg_calculate_flag_c(2, 32, v63, 0);
                v67 = v53 >> (char)v35;
                v68 = armg_calculate_flag_c(2, 32, v63, 0);
            }
            else
            {
                v66 = v45 + (v53 >> 31) + armg_calculate_flag_c(2, 32, v63, 0);
                v67 = v53 >> 31;
                v68 = armg_calculate_flag_c(2, 32, v63, 0);
            }
        }
        else
        {
            v69 = v35 - 32;
            v64 = (1 <= v55 ? v53 << (vvar_286{r64|1b} + 32 & 31) & vvar_286{r64|1b} - 0 >> 31 | 2 : v53 << (vvar_286{r64|1b} + 32 & 31) & vvar_286{r64|1b} - 0 >> 31);
            v65 = v47 + (v53 >> (char)(v69 < 32 ? v69 : 31));
            v66 = v45 + (v53 >> 31) + armg_calculate_flag_c(1, v47, v53 >> (char)(v69 < 32 ? v69 : 31), 0);
            v67 = v53 >> 31;
            v68 = armg_calculate_flag_c(1, v47, v53 >> (char)(v69 < 32 ? v69 : 31), 0);
        }
        v70 = v66;
        v71 = v64;
        v72 = v65;
        if (!((char)armg_calculate_condition(83, v45, v67, v68)))
        {
            v70 = -(v66) - ((v64 <= 0 ? v65 <= 0 : v65 < 0) ^ 1);
            v71 = -(v64);
            v72 = -(v65) - (v64 > 0);
        }
        v91 = v70;
        v76 = v91;
        if (v91 >= 0x100000)
        {
            v77 = 2;
            v78 = 0x200000;
            v79 = 0;
            v80 = v71;
            v81 = v72;
            if (v91 >= 0x200000)
            {
                v80 = (v72 & 1) * 0x80000000 | v71 >> 1;
                v91 = (v62 + 1) * 0x200000;
                v77 = 1;
                v78 = &g_400000;
                v79 = 0;
                v81 = (v91 & 1) * 0x80000000 | v72 >> 1;
                if ((char)armg_calculate_condition(33, v91, &g_400000, 0))
                    return 0;
            }
        }
        else
        {
            v83 = v71 * 2;
            v84 = v72 * 2 + (v71 >> 31 & 1);
            flag3 = v91 * 2 + armg_calculate_flag_c(3, v72, v72, v71 >> 31 & 1);
            v86 = v62 - 1;
            if (1 <= v62)
            {
                v77 = 2;
                v91 = (armg_calculate_condition(34, v76, 0x100000, 0) ? flag3 : v76);
                v78 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0x100000 : 0x100000);
                v79 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0 : 0);
                v80 = v83;
                v81 = v84;
                if (!((char)armg_calculate_condition(34, v91, v78, v79)))
                    goto LABEL_4010b0;
            }
            else
            {
                v77 = 2;
                v91 = (armg_calculate_condition(34, v76, 0x100000, 0) ? flag3 : v76);
                v78 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0x100000 : 0x100000);
                v79 = (armg_calculate_condition(34, v76, 0x100000, 0) ? 0 : 0);
                v80 = v83;
                v81 = v84;
                if (!((char)armg_calculate_condition(34, v91, v78, v79)))
                {
LABEL_4010b0:
                    v92 = armg_calculate_flag_c(2, v91, v78, v79);
                    v93 = armg_calculate_flag_v(2, v91, v78, v79);
                    if (!flag3)
                    {
                        flag2 = v84;
                        if (!armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_4010ba;
LABEL_4010b9:
                        v84 = 0;
                    }
                    else
                    {
                        flag2 = flag3;
                        if (armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_4010b9;
LABEL_4010ba:
                    }
                    if (!flag2)
                    {
                        v95 = 32;
                        if (!armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_4010c2;
LABEL_4010c1:
                        v95 += 32;
                    }
                    else
                    {
                        v95 = Clz(flag2);
                        if (armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_4010c1;
LABEL_4010c2:
                    }
                    v96 = v95 - 11;
                    v97 = v96 - 32;
                    v98 = 2;
                    v99 = 32;
                    v100 = v96;
                    v101 = v97;
                    if (32 > v100)
                    {
                        v102 = v97 + 12;
                        v98 = 1;
                        v99 = 12;
                        if (!((char)armg_calculate_condition(209, v97, 12, 0)))
                        {
                            v103 = flag2 << ((char)v102 + 20 & 31) & (char)v102 - 12 >> 31;
                            v104 = flag2 >> ((char)(12 - v102) & 31) & (12 - v102 & 255) - 32 >> 31;
                            goto LABEL_401100;
                        }
                        else
                        {
                            v100 = v97;
                            v101 = v102 + 20;
                        }
                    }
                    v104 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 | v84 >> ((char)(armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v83) & 31) & ((armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v83) & 255) - 32 >> 31 : flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31);
                    v103 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? v84 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 : v84);
LABEL_401100:
                    if (v96 <= v86)
                    {
                        v106 = v104 + (v86 - v96) * 0x100000;
                        if (!armg_calculate_condition(162, v86, v96, 0))
                            goto LABEL_40110a;
LABEL_401109:
                        v106 |= v66 & 0x80000000;
                        if (!((char)armg_calculate_condition(162, v86, v96, 0)))
                            goto LABEL_401110;
                        return v103;
                    }
                    else
                    {
                        v106 = v104;
                        if (armg_calculate_condition(162, v86, v96, 0))
                            goto LABEL_401109;
LABEL_40110a:
                        if (!((char)armg_calculate_condition(162, v86, v96, 0)))
                            goto LABEL_401110;
                        return v103;
                    }
LABEL_401110:
                    v107 = ~(v0);
                    v108 = v107 - 31;
                    if (31 <= v107)
                    {
                        return v106 >> ((char)v108 & 31) & (v108 & 255) - 32 >> 31;
                    }
                    else if (!((char)armg_calculate_condition(193, v108, 12, 0)))
                    {
                        v109 = (char)v108 + 32;
                        return v103 >> (v109 & 31) & v109 - 32 >> 31 | v106 << ((char)(32 - v109) & 31) & (32 - v109 & 255) - 32 >> 31;
                    }
                    else
                    {
                        return v103 >> ((char)(32 - (12 - (v108 + 12))) & 31) & (32 - (12 - (v108 + 12)) & 255) - 32 >> 31 | v106 << ((char)(12 - (v108 + 12)) & 31) & (12 - (v108 + 12) & 255) - 32 >> 31;
                    }
                }
            }
        }
        if (v80 == 0x80000000)
        {
            v87 = (armg_calculate_condition(v77, v91, v78, v79) ? 5 : v77);
            v88 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 >> 1 : v91);
            v89 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 & 1 : v78);
            v90 = (armg_calculate_condition(v77, v91, v78, v79) ? armg_calculate_flag_v(v77, v91, v78, v79) : v79);
        }
        else
        {
            v87 = (armg_calculate_condition(v77, v91, v78, v79) ? 5 : v77);
            v88 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 >> 1 : v91);
            v89 = (armg_calculate_condition(v77, v91, v78, v79) ? v81 & 1 : v78);
            v90 = (armg_calculate_condition(v77, v91, v78, v79) ? armg_calculate_flag_v(v77, v91, v78, v79) : v79);
        }
        return v81 + armg_calculate_flag_c(v87, v88, v89, v90);
    }
    else
    {
        if (~(v2 >> 21))
        {
            v110 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? 5 : v28);
            v111 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? ~(v4 >> 21) : v29);
            v112 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? v4 >> 20 & 1 : v30);
            v113 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? armg_calculate_flag_v(v28, v29, v30, v31) : v31);
            if ((char)armg_calculate_condition(v110, v111, v112, v113))
                goto LABEL_4011e8;
        }
        else
        {
            v110 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? 5 : v28);
            v111 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? ~(v4 >> 21) : v29);
            v112 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? v4 >> 20 & 1 : v30);
            v113 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? armg_calculate_flag_v(v28, v29, v30, v31) : v31);
            if ((char)armg_calculate_condition(v110, v111, v112, v113))
            {
LABEL_4011e8:
                return (armg_calculate_condition(21, ~(v2 >> 21), v2 >> 20 & 1, armg_calculate_flag_v(v110, v111, v112, v113)) ? a0 : v39);
            }
        }
        if (!(v2 ^ v4))
        {
            v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
            v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
            v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
            if ((char)armg_calculate_condition(5, v114, v115, v116))
                goto LABEL_4011a0;
        }
        else
        {
            v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
            v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
            v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
            if ((char)armg_calculate_condition(5, v114, v115, v116))
            {
LABEL_4011a0:
                v120 = v38 ^ v40;
                v121 = armg_calculate_flag_c(5, v114, v115, v116);
                v122 = armg_calculate_flag_v(5, v114, v115, v116);
                if ((v38 ^ v40))
                {
                    v123 = 0;
                    if (!armg_calculate_condition(21, v120, v121, v122))
                        goto LABEL_4011aa;
LABEL_4011a9:
                    a0 = 0;
                    if (!((char)armg_calculate_condition(21, v120, v121, v122)))
                        goto LABEL_4011b0;
                    return 0;
                }
                else
                {
                    v123 = v38;
                    if (armg_calculate_condition(21, v120, v121, v122))
                        goto LABEL_4011a9;
LABEL_4011aa:
                    if (!((char)armg_calculate_condition(21, v120, v121, v122)))
                        goto LABEL_4011b0;
                    return a0;
                }
LABEL_4011b0:
                if (!v0 >> 21)
                    return a0 * 2;
                if (armg_calculate_condition(49, v0, &g_400000, 0))
                {
                    if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
                        goto LABEL_4011d4;
                    return a0;
                }
                else
                {
                    if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
                        goto LABEL_4011d4;
                    return a0;
                }
LABEL_4011d4:
                return 0;
            }
        }
        v117 = v2 | a0;
        v118 = armg_calculate_flag_c(5, v114, v115, v116);
        v119 = armg_calculate_flag_v(5, v114, v115, v116);
        if (!v2 && !a0)
        {
            if (!armg_calculate_condition(5, v117, v118, v119))
                return a0;
        }
        else
        {
            if (!armg_calculate_condition(5, v117, v118, v119))
                return a0;
        }
        return v39;
    }
}


// Function: __aeabi_ui2d at 0x401214
unsigned int __aeabi_ui2d(unsigned int a0, unsigned int a1)
{
    unsigned int v3;  // cc_op
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // cc_ndep
    unsigned int v7;  // cc_dep2
    unsigned int v8;  // cc_ndep
    unsigned int v9;  // r5
    unsigned int v10;  // r4
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    v7 = armg_calculate_flag_c(v3, v4, v5, v6);
    v8 = armg_calculate_flag_v(v3, v4, v5, v6);
    if (!a0)
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_401220;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_401220;
        return a0;
    }
LABEL_401220:
    v2 = vvar_4{r64|4b};
    v1 = v9;
    v0 = v10;
}


// Function: __floatsidf at 0x401238
unsigned int __floatsidf(unsigned int a0, unsigned int a1)
{
    unsigned int v3;  // cc_op
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // cc_ndep
    unsigned int v7;  // cc_dep2
    unsigned int v8;  // cc_ndep
    unsigned int v9;  // r5
    unsigned int v10;  // r4
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    v7 = armg_calculate_flag_c(v3, v4, v5, v6);
    v8 = armg_calculate_flag_v(v3, v4, v5, v6);
    if (!a0)
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_401244;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_401244;
        return a0;
    }
LABEL_401244:
    v2 = vvar_4{r64|4b};
    v1 = v9;
    v0 = v10;
}


// Function: __extendsfdf2 at 0x401260
unsigned int __extendsfdf2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v3;  // r2
    unsigned int v4;  // r0
    unsigned int v13;  // cc_ndep
    unsigned int v14;  // cc_op
    unsigned int v15;  // cc_dep1
    unsigned int v16;  // cc_dep2
    unsigned int v17;  // cc_ndep
    unsigned int v22;  // cc_op
    unsigned int v5;  // r3
    unsigned int v23;  // cc_dep1
    unsigned int v24;  // cc_dep2
    unsigned int v25;  // cc_ndep
    unsigned int v6;  // cc_op
    unsigned int v7;  // cc_dep1
    unsigned int v42;  // cc_dep1
    unsigned int v43;  // cc_ndep
    unsigned int v44;  // r5
    unsigned int v45;  // r4
    unsigned int v8;  // cc_dep2
    unsigned int v9;  // cc_ndep
    unsigned int v10;  // cc_op
    unsigned int v11;  // cc_dep1
    unsigned int v12;  // cc_dep2
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    v3 = a0 * 2;
    v4 = v3 * 0x10000000;
    if (a0 * 2)
    {
        v5 = v3 & 0xff000000;
        v10 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 5 : v6);
        v11 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v3 & 0xff000000 : v7);
        v12 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 1 : v8);
        v13 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
        if (!armg_calculate_condition(v10 | 16, v11, v12, v13))
            goto LABEL_401276;
LABEL_401275:
        v22 = 5;
        v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
        v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
        v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
        if (!armg_calculate_condition(21, v23, v24, v25))
            goto LABEL_40127a;
LABEL_401279:
        if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
            goto LABEL_401280;
        return v4;
    }
    else
    {
        v5 = a3;
        v10 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 5 : v14);
        v11 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? v3 & 0xff000000 : v15);
        v12 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 1 : v16);
        v13 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? armg_calculate_flag_v(v14, v15, v16, v17) : v17);
        if (armg_calculate_condition(v10 | 16, v11, v12, v13))
            goto LABEL_401275;
LABEL_401276:
        v22 = v10;
        v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
        v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
        v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
        if (armg_calculate_condition(v22 | 16, v23, v24, v25))
            goto LABEL_401279;
LABEL_40127a:
        if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
            goto LABEL_401280;
        return v4;
    }
LABEL_401280:
    if ((v3 & 16777215))
        goto LABEL_401288;
    return v4;
LABEL_401288:
    v42 = v5 ^ 0xff000000;
    v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
    if (!(v5 ^ 0xff000000))
    {
        if (!((char)armg_calculate_condition(5, v42, 1, v43)))
            goto LABEL_401294;
        return v4;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, v42, 1, v43)))
            goto LABEL_401294;
        return v4;
    }
LABEL_401294:
    v2 = vvar_32{r64|4b};
    v1 = v44;
    v0 = v45;
}


// Function: __floatundidf at 0x4012a8
unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
    unsigned int v3;  // lr
    unsigned int v4;  // r5
    unsigned int v5;  // r4
    unsigned int v6;  // r12
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    if (a0 || a1)
        goto LABEL_4012b0;
    return a0;
LABEL_4012b0:
    v2 = v3;
    v1 = v4;
    v0 = v5;
    v6 = a1 >> 22;
    if (!a1 >> 22)
        goto LABEL_0x401054;
}


// Function: __floatdidf at 0x4012bc
unsigned int __floatdidf(unsigned int a0, unsigned int a1)
{
    unsigned int v3;  // lr
    unsigned int v4;  // r5
    unsigned int v5;  // r4
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    if (a0 || a1)
        goto LABEL_4012c4;
    return a0;
LABEL_4012c4:
    v2 = v3;
    v1 = v4;
    v0 = v5;
    if (!(a1 & 0x80000000) >> 31)
        goto LABEL_0x4012d8;
}


// Function: __fixdfsi at 0x40131c
unsigned int __fixdfsi(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r2

    v0 = a1 * 2;
    if (!((char)armg_calculate_condition(33, v0, 0x200000, 0)))
    {
        if ((char)armg_calculate_condition(81, v0, 0x200000, 0))
        {
            return 0;
        }
        else if (4294966303 > v0 + 0x200000 >> 21)
        {
            if ((a1 & 0x80000000))
                return -((a1 * 0x800 | 0x80000000 | a0 >> 21) >> ((char)(4294966303 - (v0 + 0x200000 >> 21)) & 31) & (4294966303 - (v0 + 0x200000 >> 21) & 255) - 32 >> 31);
            return (a1 * 0x800 | 0x80000000 | a0 >> 21) >> ((char)(4294966303 - (v0 + 0x200000 >> 21)) & 31) & (4294966303 - (v0 + 0x200000 >> 21) & 255) - 32 >> 31;
        }
    }
    else
    {
        if (a0 || a1 * 0x1000)
            return 0;
    }
    if ((a1 & 0x80000000))
        return a1 & 0x80000000;
    return 2147483647;
}


// Function: _fini at 0x401378
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

