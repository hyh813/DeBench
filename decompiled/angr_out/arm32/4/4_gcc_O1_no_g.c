// Angr Decompilation of 4_gcc_O1_no_g
// Platform: ARMEL

// Function: _init at 0x103dc
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_103e8 at 0x103e8
extern unsigned int g_22008;

int sub_103e8()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_22008;
}


// Function: _start at 0x1045c
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10494 at 0x10494
void sub_10494()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x104a0
extern unsigned int g_2202c;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_2202c)
        goto LABEL_104b8;
    return v0;
LABEL_104b8:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x104c4
extern char __TMC_END__;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_104d4;
    return 139344;
LABEL_104d4:
    if (!(1))
        goto LABEL_104e0;
    return 139344;
LABEL_104e0:
}


// Function: register_tm_clones at 0x104f0
extern char __TMC_END__;

int register_tm_clones()
{
    if (0)
        goto LABEL_1050c;
    return 139344;
LABEL_1050c:
    if (!(1))
        goto LABEL_10518;
    return 139344;
LABEL_10518:
}


// Function: __do_global_dtors_aux at 0x10528
extern char __TMC_END__;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__TMC_END__)
        goto LABEL_1053c;
    return a0;
LABEL_1053c:
    v0 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v0;
}


// Function: frame_dummy at 0x10550
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: callback_func at 0x10554
unsigned int callback_func(unsigned int a0)
{
    return a0 * 2;
}


// Function: func_a at 0x1055c
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x10564
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: cdecl_func at 0x1056c
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_cdecl at 0x10574
unsigned int call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x1057c
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: call_stdcall at 0x10584
unsigned int call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x1058c
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: call_fastcall at 0x10598
unsigned int call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x105a0
unsigned int call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x105a8
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp+0x0]

    return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x105c0
unsigned int call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x105c8
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x105d8
unsigned int call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x105e0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x10600
unsigned int call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x10608
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp+0x0]

    return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x10620
unsigned int call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x10628
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x10638
unsigned int call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x10640
unsigned int mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x10648
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int varargs_func(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v5;  // r3
    unsigned int v6;  // r0
    char ptr[4];  // r2
    char v0[4];  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]
    unsigned int v4;  // [bp-0x4]

    v4 = a3;
    v3 = a2;
    v2 = a1;
    v1 = GLIBC_2.4::__stack_chk_guard;
    *((unsigned int **)&v0[0]) = &v2;
    if (i > 0)
    {
        v5 = 0;
        v6 = 0;
        do
        {
            ptr = v0;
            *((char *[4])&v0[0]) = ptr + 1;
            v6 += *(ptr);
            v5 += 1;
        } while (i != v5);
    }
    else
    {
        v6 = 0;
    }
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: func_no_args at 0x106d8
unsigned int func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x106e0
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x10710
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    char *v0;  // cc_dep1
    char *len;  // r0
    unsigned int v2;  // r0
    unsigned int v3;  // r0
    unsigned int v4;  // r1
    unsigned int v5;  // r0

    v0 = a1;
    if (!a1)
    {
        len = NULL;
        if (!((char)armg_calculate_condition(2, v0, 0, 0)))
            goto LABEL_1072c;
    }
    else
    {
        len = a1;
        if (!((char)armg_calculate_condition(2, v0, 0, 0)))
        {
LABEL_1072c:
            len = strlen(len);
        }
    }
    v2 = __aeabi_dadd(__floatsidf(&len[a0]), a1, a2, a3);
    v3 = __aeabi_l2d(a4, a5);
    v5 = __aeabi_d2iz(__aeabi_dadd(v2, v4, v3, v4), a1, a2, a3);
    return __aeabi_d2iz(__aeabi_dadd(v2, v4, v3, v4), a1, a2, a3);
}


// Function: func_struct_byval at 0x10774
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char i[4];  // r3
    unsigned int v6;  // r0
    unsigned int v7;  // r0
    char ptr[4];  // r3
    char v9[4];  // r3
    unsigned int v10;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]
    char v4;  // [bp+0x70]

    v0 = a0;
    v1 = a1;
    v2 = a2;
    v3 = a3;
    i = &v0;
    v6 = 0;
    do
    {
        v7 = v6;
        ptr = i;
        v9 = ptr + 2;
        v10 = *(ptr) + v7;
        i = v9;
        v6 = v10;
    } while (i != &v4);
    return *(ptr) + v7;
}


// Function: func_struct_byptr at 0x107a8
unsigned int func_struct_byptr(unsigned int *ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
    if (ptr)
    {
        if (!armg_calculate_condition(2, ptr, 0, 0))
            return ptr[1] * *(ptr);
    }
    else
    {
        if (!armg_calculate_condition(2, ptr, 0, 0))
            return 0;
    }
    return 4294967295;
}


// Function: test_calling_conventions at 0x107c0
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_11594;
extern char g_11658;
extern char g_11680;
extern char g_116a4;
extern char g_116cc;
extern char g_116f4;
extern char g_11720;

unsigned int test_calling_conventions()
{
    unsigned int v6;  // lr
    unsigned int cur[2];  // r1
    unsigned int v9;  // r2
    unsigned int v10;  // r0
    char ptr[4];  // r3
    unsigned int v13;  // r2
    char v14[4];  // r3
    unsigned int v15;  // r0
    unsigned int v0;  // [bp-0x118]
    unsigned int v1;  // [bp-0x114]
    char v2;  // [bp-0x110]
    char v3;  // [bp-0x90]
    unsigned int v16;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x4]

    v5 = v6;
    v4 = GLIBC_2.4::__stack_chk_guard;
    puts(0x11594);
    __printf_chk(1, "CALL-L1-01: %d\n", 15);
    __printf_chk(1, "CALL-L1-02: %d\n", 50);
    __printf_chk(1, "CALL-L1-03: %d\n", 6);
    __printf_chk(1, "CALL-L1-04: %d\n", 15);
    __printf_chk(1, "CALL-L1-05: %d\n", 15);
    __printf_chk(1, "CALL-L1-06: %d\n", 100);
    __printf_chk(1, "CALL-L1-07: %d\n", 21);
    __printf_chk(1, "CALL-L1-08: %d\n", 15);
    __printf_chk(1, "CALL-L1-09: %d\n", 10);
    __printf_chk(1, "CALL-L1-10: %d\n", 33);
    v1 = 5;
    v0 = 4;
    __printf_chk(1, 0x11658, varargs_func(5, 1, 2, 3));
    __printf_chk(1, 0x11680, 42);
    __printf_chk(1, 0x116a4, 36);
    __printf_chk(1, 0x116cc, 117);
    cur = &v2;
    v9 = 1;
    v10 = 0;
    do
    {
        cur[0] = v9;
        cur[1] = v10;
        cur += 1;
        v10 += armg_calculate_flag_c(1, v9, 1, 0);
        v9 += 1;
    } while (v9 - 17 || v10);
    memcpy(&v3, &v2, 128);
    ptr = &v3;
    v13 = 0;
    do
    {
        v14 = ptr + 2;
        v13 += *(ptr);
        ptr = v14;
    } while (&v16 != ptr);
    __printf_chk(1, 0x116f4, v13);
    v15 = __printf_chk(1, 0x11720, 50);
    if ((v4 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v15;
}


// Function: param_by_value_int at 0x109cc
unsigned int param_by_value_int(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_by_value_int at 0x109d4
unsigned int call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x109dc
unsigned int param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) * 2;
    return 1;
}


// Function: call_by_value_ptr at 0x109f0
unsigned int call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x109f8
unsigned int param_array_decay()
{
    return 4;
}


// Function: call_array_decay at 0x10a00
unsigned int call_array_decay()
{
    return 4;
}


// Function: param_string at 0x10a08
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x10a18
unsigned int call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x10a20
typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned int param_ptr_array(struct_0 **a0, unsigned int a1)
{
    struct_0 **v0;  // r3
    unsigned int v1;  // r0
    struct_0 **i;  // r3
    unsigned int v3;  // r0
    struct_0 **v4;  // r3
    unsigned int v5;  // r2
    unsigned int v6;  // r0

    if (a1 <= 0)
        return 0;
    v0 = a0 + 1;
    v1 = 0;
    i = v0;
    do
    {
        v3 = v1;
        v4 = i + 1;
        v6 = v3 + i[1]->field_0;
        i = v4;
        v1 = v6;
    } while (i != &v0[a1]);
    return v3 + v5;
}


// Function: call_ptr_array at 0x10a54
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_ptr_array()
{
    unsigned int v5;  // lr
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x4]

    v4 = v5;
    v3 = GLIBC_2.4::__stack_chk_guard;
    v0 = "abc";
    v1 = "def";
    v2 = "ghi";
    v6 = param_ptr_array(&v0, 3);
    if ((v3 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: param_varargs at 0x10ab4
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_varargs(unsigned int i, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v5;  // r3
    unsigned int v6;  // r0
    char ptr[4];  // r2
    char v0[4];  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]
    unsigned int v4;  // [bp-0x4]

    v4 = a3;
    v3 = a2;
    v2 = a1;
    v1 = GLIBC_2.4::__stack_chk_guard;
    *((unsigned int **)&v0[0]) = &v2;
    if (i > 0)
    {
        v5 = 0;
        v6 = 0;
        do
        {
            ptr = v0;
            *((char *[4])&v0[0]) = ptr + 1;
            v6 += *(ptr);
            v5 += 1;
        } while (i != v5);
    }
    else
    {
        v6 = 0;
    }
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: call_varargs_param at 0x10b44
unsigned int call_varargs_param()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = 40;
    v3 = param_varargs(4, 10, 20, 30);
    return param_varargs(4, 10, 20, 30);
}


// Function: param_func_ptr at 0x10b70
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x10b88
unsigned int call_func_ptr_param()
{
    unsigned int v0;  // r0

    v0 = param_func_ptr(callback_func, 5);
    return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x10ba0
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
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


// Function: call_double_ptr at 0x10bd8
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_double_ptr()
{
    unsigned int v4;  // lr
    unsigned int v0;  // [bp-0x14]
    char *result;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = GLIBC_2.4::__stack_chk_guard;
    v0 = 10;
    result = &v0;
    param_double_ptr(&result, 20);
    if (!result)
        v0 += 1;
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v0;
}


// Function: param_complex_cast at 0x10c44
typedef struct struct_0 {
    struct struct_0 *field_0;
    unsigned int field_4;
} struct_0;

struct_0 * param_complex_cast(struct_0 *ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
    if (!a1)
        return ptr->field_0;
    if (a1 == 1)
    {
        if (!armg_calculate_condition(18, a1, 1, 0))
            return (char *)ptr->field_0 + ptr->field_4;
    }
    else
    {
        if (!armg_calculate_condition(18, a1, 1, 0))
            return ptr;
    }
    return 0xffffffff;
}


// Function: call_complex_cast at 0x10c6c
unsigned int call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x10c78
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
    return a0 + a15;
}


// Function: call_struct_byval at 0x10c94
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_struct_byval()
{
    unsigned int v4;  // lr
    unsigned int *ptr;  // r2
    unsigned int i;  // r3
    unsigned int *v7;  // r2
    unsigned int v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = GLIBC_2.4::__stack_chk_guard;
    ptr = &v0;
    i = 0;
    do
    {
        v7 = ptr + 1;
        *(ptr) = i;
        i += 1;
        ptr = v7;
    } while (i != 16);
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v1 + v0;
}


// Function: param_order_dep at 0x10cf8
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_order_dep at 0x10d00
unsigned int call_order_dep()
{
    return 4;
}


// Function: test_parameter_passing at 0x10d08
extern char g_11750;

int test_parameter_passing()
{
    unsigned int v7;  // r0

    puts(0x11750);
    __printf_chk(1, "PARAM-L1-01: %d\n", 15);
    __printf_chk(1, "PARAM-L1-02: %d\n", call_by_value_ptr());
    __printf_chk(1, "PARAM-L2-01: %d\n", 4);
    __printf_chk(1, "PARAM-L2-02: %d\n", 173);
    __printf_chk(1, "PARAM-L2-03: %d\n", call_ptr_array());
    __printf_chk(1, "PARAM-L2-04: %d\n", call_varargs_param());
    __printf_chk(1, "PARAM-L3-01: %d\n", call_func_ptr_param());
    __printf_chk(1, "PARAM-L3-02: %d\n", call_double_ptr());
    __printf_chk(1, "PARAM-L3-03: %d\n", call_complex_cast());
    __printf_chk(1, "PARAM-L3-04: %d\n", call_struct_byval());
    v7 = __printf_chk(1, "PARAM-L3-05: %d\n", 4);
    return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x10e14
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_ret_basic at 0x10e1c
unsigned int call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x10e24
int ret_pointer(unsigned int a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x10e2c
unsigned int call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x10e34
unsigned int [2] ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    *(ptr) = a1;
    ptr[1] = a2;
    return ptr;
}


// Function: call_ret_small_struct at 0x10e40
unsigned int call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x10e48
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int [16] ret_large_struct(unsigned int *ptr, unsigned int a1)
{
    unsigned int *ptr4;  // r3
    unsigned int *v18;  // r3
    unsigned int addr[16];  // r12
    unsigned int ptr3[16];  // r12
    unsigned int v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned int v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    unsigned int v5;  // [bp-0x38]
    unsigned int v6;  // [bp-0x34]
    unsigned int v7;  // [bp-0x30]
    unsigned int v8;  // [bp-0x2c]
    unsigned int v9;  // [bp-0x28]
    unsigned int v10;  // [bp-0x24]
    unsigned int v11;  // [bp-0x20]
    unsigned int v12;  // [bp-0x1c]
    unsigned int v13;  // [bp-0x18]
    unsigned int v14;  // [bp-0x14]
    unsigned int v15;  // [bp-0x10]
    unsigned int v16;  // [bp-0xc]

    v16 = GLIBC_2.4::__stack_chk_guard;
    ptr4 = &v0;
    do
    {
        v18 = ptr4 + 1;
        *(ptr4) = a1;
        a1 += 1;
        ptr4 = v18;
    } while (ptr4 != &v16);
    *(ptr) = v0;
    ptr[1] = v1;
    ptr[2] = v2;
    ptr[3] = v3;
    ptr[4] = v4;
    ptr[5] = v5;
    ptr[6] = v6;
    ptr[7] = v7;
    addr = ptr + 8;
    addr[0] = v8;
    addr[1] = v9;
    addr[2] = v10;
    addr[3] = v11;
    ptr3 = &addr[4];
    ptr3[0] = v12;
    ptr3[1] = v13;
    ptr3[2] = v14;
    ptr3[3] = v15;
    if ((v16 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return ptr;
}


// Function: call_ret_large_struct at 0x10ed0
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_ret_large_struct()
{
    unsigned int v4;  // lr
    unsigned int v0[15];  // [bp-0x4c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = GLIBC_2.4::__stack_chk_guard;
    ret_large_struct(&v0, 100);
    if ((v2 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v0[0] + v1;
}


// Function: ret_func_ptr at 0x10f28
unsigned int ret_func_ptr(unsigned int a0)
{
    if (a0)
    {
        if (!armg_calculate_condition(2, a0, 0, 0))
            return func_b;
    }
    else
    {
        if (!armg_calculate_condition(2, a0, 0, 0))
            return 0;
    }
    return func_a;
}


// Function: call_ret_func_ptr at 0x10f48
unsigned int call_ret_func_ptr()
{
    unsigned int v0;  // r0

    v0 = func_b(5);
    return func_b(5);
}


// Function: ret_opaque_handle at 0x10f58
extern char handle2.0;

int ret_opaque_handle(unsigned int a0)
{
    if (!a0)
        return "d";
    return 139336;
}


// Function: call_ret_opaque at 0x10f70
extern unsigned int handle1.1;

int call_ret_opaque()
{
    return handle1.1;
}


// Function: ret_complex_expr at 0x10f80
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v1;  // r0

    if (a1 < a0)
    {
        v1 = a2 * 2;
        if (!armg_calculate_condition(210, a0, a1, 0))
            return v1;
    }
    else if (!armg_calculate_condition(210, v1, a1, 0))
    {
        return a0;
    }
    return a2 + 10;
}


// Function: call_ret_complex_expr at 0x10f90
unsigned int call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x10f98
unsigned int ret_multi_branch(unsigned int a0)
{
    if (a0 == 1)
    {
        return 20;
    }
    else if (a0 != 2)
    {
        if (a0)
        {
            if (!armg_calculate_condition(2, a0, 0, 0))
                return 4294967295;
        }
        else
        {
            if (!armg_calculate_condition(2, a0, 0, 0))
                return 0;
        }
        return 10;
    }
    else
    {
        return 30;
    }
}


// Function: call_ret_multi_branch at 0x10fc8
unsigned int call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x10fd0
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: call_ret_void at 0x10fdc
unsigned int call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x10fe4
extern char g_11850;
extern char g_11870;
extern char g_1188c;
extern char g_118a8;
extern char g_118c4;
extern char g_118e4;
extern char g_11900;
extern char g_11920;
extern char g_1193c;
extern char g_11958;
extern unsigned int handle1.1;

int test_return_values()
{
    unsigned int v4;  // r0

    puts(0x11850);
    __printf_chk(1, 0x11870, 42);
    __printf_chk(1, 0x1188c, call_ret_pointer());
    __printf_chk(1, 0x118a8, call_ret_small_struct());
    __printf_chk(1, 0x118c4, call_ret_large_struct());
    __printf_chk(1, 0x118e4, call_ret_func_ptr());
    __printf_chk(1, 0x11900, handle1.1);
    __printf_chk(1, 0x11920, 40);
    __printf_chk(1, 0x1193c, 60);
    v4 = __printf_chk(1, 0x11958, 21);
    return __printf_chk(1, 0x11958, 21);
}


// Function: main at 0x110c4
unsigned int main()
{
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}


// Function: __aeabi_drsub at 0x110dc
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = __aeabi_dadd();
    return __aeabi_dadd();
}


// Function: __subdf3 at 0x110e4
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = __aeabi_dadd();
    return __aeabi_dadd();
}


// Function: __aeabi_dadd at 0x110e8
extern char __stack_chk_guard;
extern char g_200000;
extern char g_400000;

int __aeabi_dadd(int a0)
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
            goto LABEL_110fe;
LABEL_110fd:
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
            goto LABEL_110fd;
LABEL_110fe:
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
                goto LABEL_11120;
        }
        else
        {
            v34 = (v4 >> 21) - v32;
            if (!((char)armg_calculate_condition(210, v33, v32, 0)))
            {
LABEL_11120:
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
            goto LABEL_11144;
        return a0;
LABEL_11144:
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
                    goto LABEL_112ee;
LABEL_112ed:
                v32 += 1;
                if (!armg_calculate_condition(21, v32, v60, v61))
                    goto LABEL_112f2;
LABEL_112f1:
                v35 -= 1;
            }
            else
            {
                v45 = v45;
                if (armg_calculate_condition(5, v32, v60, v61))
                    goto LABEL_112ed;
LABEL_112ee:
                if (armg_calculate_condition(21, v32, v60, v61))
                    goto LABEL_112f1;
LABEL_112f2:
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
                    goto LABEL_11230;
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
LABEL_11230:
                    v92 = armg_calculate_flag_c(2, v91, v78, v79);
                    v93 = armg_calculate_flag_v(2, v91, v78, v79);
                    if (!flag3)
                    {
                        flag2 = v84;
                        if (!armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_1123a;
LABEL_11239:
                        v84 = 0;
                    }
                    else
                    {
                        flag2 = flag3;
                        if (armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_11239;
LABEL_1123a:
                    }
                    if (!flag2)
                    {
                        v95 = 32;
                        if (!armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_11242;
LABEL_11241:
                        v95 += 32;
                    }
                    else
                    {
                        v95 = Clz(flag2);
                        if (armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_11241;
LABEL_11242:
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
                            goto LABEL_11280;
                        }
                        else
                        {
                            v100 = v97;
                            v101 = v102 + 20;
                        }
                    }
                    v104 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 | v84 >> ((char)(armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v83) & 31) & ((armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v83) & 255) - 32 >> 31 : flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31);
                    v103 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? v84 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 : v84);
LABEL_11280:
                    if (v96 <= v86)
                    {
                        v106 = v104 + (v86 - v96) * 0x100000;
                        if (!armg_calculate_condition(162, v86, v96, 0))
                            goto LABEL_1128a;
LABEL_11289:
                        v106 |= v66 & 0x80000000;
                        if (!((char)armg_calculate_condition(162, v86, v96, 0)))
                            goto LABEL_11290;
                        return v103;
                    }
                    else
                    {
                        v106 = v104;
                        if (armg_calculate_condition(162, v86, v96, 0))
                            goto LABEL_11289;
LABEL_1128a:
                        if (!((char)armg_calculate_condition(162, v86, v96, 0)))
                            goto LABEL_11290;
                        return v103;
                    }
LABEL_11290:
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
                goto LABEL_11368;
        }
        else
        {
            v110 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? 5 : v28);
            v111 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? ~(v4 >> 21) : v29);
            v112 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? v4 >> 20 & 1 : v30);
            v113 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? armg_calculate_flag_v(v28, v29, v30, v31) : v31);
            if ((char)armg_calculate_condition(v110, v111, v112, v113))
            {
LABEL_11368:
                return (armg_calculate_condition(21, ~(v2 >> 21), v2 >> 20 & 1, armg_calculate_flag_v(v110, v111, v112, v113)) ? a0 : v39);
            }
        }
        if (!(v2 ^ v4))
        {
            v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
            v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
            v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
            if ((char)armg_calculate_condition(5, v114, v115, v116))
                goto LABEL_11320;
        }
        else
        {
            v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
            v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
            v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
            if ((char)armg_calculate_condition(5, v114, v115, v116))
            {
LABEL_11320:
                v120 = v38 ^ v40;
                v121 = armg_calculate_flag_c(5, v114, v115, v116);
                v122 = armg_calculate_flag_v(5, v114, v115, v116);
                if ((v38 ^ v40))
                {
                    v123 = 0;
                    if (!armg_calculate_condition(21, v120, v121, v122))
                        goto LABEL_1132a;
LABEL_11329:
                    a0 = 0;
                    if (!((char)armg_calculate_condition(21, v120, v121, v122)))
                        goto LABEL_11330;
                    return 0;
                }
                else
                {
                    v123 = v38;
                    if (armg_calculate_condition(21, v120, v121, v122))
                        goto LABEL_11329;
LABEL_1132a:
                    if (!((char)armg_calculate_condition(21, v120, v121, v122)))
                        goto LABEL_11330;
                    return a0;
                }
LABEL_11330:
                if (!v0 >> 21)
                    return a0 * 2;
                if (armg_calculate_condition(49, v0, &g_400000, 0))
                {
                    if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
                        goto LABEL_11354;
                    return a0;
                }
                else
                {
                    if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
                        goto LABEL_11354;
                    return a0;
                }
LABEL_11354:
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


// Function: __aeabi_ui2d at 0x11394
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
            goto LABEL_113a0;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_113a0;
        return a0;
    }
LABEL_113a0:
    v2 = vvar_4{r64|4b};
    v1 = v9;
    v0 = v10;
}


// Function: __floatsidf at 0x113b8
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
            goto LABEL_113c4;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_113c4;
        return a0;
    }
LABEL_113c4:
    v2 = vvar_4{r64|4b};
    v1 = v9;
    v0 = v10;
}


// Function: __extendsfdf2 at 0x113e0
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
            goto LABEL_113f6;
LABEL_113f5:
        v22 = 5;
        v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
        v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
        v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
        if (!armg_calculate_condition(21, v23, v24, v25))
            goto LABEL_113fa;
LABEL_113f9:
        if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
            goto LABEL_11400;
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
            goto LABEL_113f5;
LABEL_113f6:
        v22 = v10;
        v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
        v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
        v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
        if (armg_calculate_condition(v22 | 16, v23, v24, v25))
            goto LABEL_113f9;
LABEL_113fa:
        if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
            goto LABEL_11400;
        return v4;
    }
LABEL_11400:
    if ((v3 & 16777215))
        goto LABEL_11408;
    return v4;
LABEL_11408:
    v42 = v5 ^ 0xff000000;
    v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
    if (!(v5 ^ 0xff000000))
    {
        if (!((char)armg_calculate_condition(5, v42, 1, v43)))
            goto LABEL_11414;
        return v4;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, v42, 1, v43)))
            goto LABEL_11414;
        return v4;
    }
LABEL_11414:
    v2 = vvar_32{r64|4b};
    v1 = v44;
    v0 = v45;
}


// Function: __floatundidf at 0x11428
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
        goto LABEL_11430;
    return a0;
LABEL_11430:
    v2 = v3;
    v1 = v4;
    v0 = v5;
    v6 = a1 >> 22;
    if (!a1 >> 22)
        goto LABEL_0x111d4;
}


// Function: __aeabi_l2d at 0x1143c
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
    unsigned int v3;  // lr
    unsigned int v4;  // r5
    unsigned int v5;  // r4
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    if (a0 || a1)
        goto LABEL_11444;
    return a0;
LABEL_11444:
    v2 = v3;
    v1 = v4;
    v0 = v5;
    if (!(a1 & 0x80000000) >> 31)
        goto LABEL_0x11458;
}


// Function: __aeabi_d2iz at 0x1149c
extern char g_200000;

unsigned int __aeabi_d2iz(unsigned int a0, unsigned int a1)
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


// Function: _fini at 0x114f8
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

