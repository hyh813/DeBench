// Angr Decompilation of 4_gcc_O0_no_g
// Platform: ARMEL

// Function: _init at 0x103fc
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_10408 at 0x10408
extern unsigned int g_23008;

int sub_10408()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_23008;
}


// Function: _start at 0x10488
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_104c0 at 0x104c0
void sub_104c0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x104cc
extern unsigned int g_23030;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_23030)
        goto LABEL_104e4;
    return v0;
LABEL_104e4:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x104f0
extern char __TMC_END__;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_10500;
    return 143440;
LABEL_10500:
    if (!(1))
        goto LABEL_1050c;
    return 143440;
LABEL_1050c:
}


// Function: register_tm_clones at 0x1051c
extern char __TMC_END__;

int register_tm_clones()
{
    if (0)
        goto LABEL_10538;
    return 143440;
LABEL_10538:
    if (!(1))
        goto LABEL_10544;
    return 143440;
LABEL_10544:
}


// Function: __do_global_dtors_aux at 0x10554
extern char __TMC_END__;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__TMC_END__)
        goto LABEL_10568;
    return a0;
LABEL_10568:
    v0 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v0;
}


// Function: frame_dummy at 0x1057c
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: cdecl_func at 0x10580
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_cdecl at 0x105b0
unsigned int call_cdecl()
{
    unsigned int v0;  // r0

    v0 = cdecl_func(5, 10);
    return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x105d0
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: call_stdcall at 0x10600
unsigned int call_stdcall()
{
    unsigned int v0;  // r0

    v0 = stdcall_func(5, 10);
    return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x10620
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: call_fastcall at 0x1065c
unsigned int call_fastcall()
{
    unsigned int v0;  // r0

    v0 = fastcall_func(1, 2, 3);
    return fastcall_func(1, 2, 3);
}


// Function: call_thiscall at 0x10680
unsigned int call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x1069c
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp+0x0]

    return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_arm_aapcs at 0x106ec
unsigned int call_arm_aapcs()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = 5;
    v1 = arm_aapcs_func(1, 2, 3, 4);
    return arm_aapcs_func(1, 2, 3, 4);
}


// Function: mips_func at 0x10724
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x1076c
unsigned int call_mips()
{
    unsigned int v0;  // r0

    v0 = mips_func(10, 20, 30, 40);
    return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x10794
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x107ec
unsigned int call_amd64_sysv()
{
    unsigned int v0;  // r0

    v0 = amd64_sysv_func(1, 2, 3, 4, 5, 6);
    return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x1082c
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    char v0;  // [bp+0x0]

    return a0 + a1 + a2 + a3 + *((int *)&v0);
}


// Function: call_ms_x64 at 0x1087c
unsigned int call_ms_x64()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = 5;
    v1 = ms_x64_func(1, 2, 3, 4);
    return ms_x64_func(1, 2, 3, 4);
}


// Function: vectorcall_func at 0x108b4
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x108fc
unsigned int call_vectorcall()
{
    unsigned int v0;  // r0

    v0 = vectorcall_func(1, 2, 3, 4);
    return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x10924
unsigned int mixed_conventions_test()
{
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    v0 += cdecl_func(1, 2);
    v0 += stdcall_func(3, 4);
    v0 += fastcall_func(5, 6, 7);
    return v0;
}


// Function: varargs_func at 0x109a0
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int varargs_func(unsigned int a0, unsigned int a1)
{
    unsigned int v7;  // r3
    unsigned int v8;  // r2
    char ptr[4];  // r3
    char v0[4];  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int i;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]
    unsigned int v6;  // [bp-0x4]

    v6 = v7;
    v5 = v8;
    v4 = a1;
    v3 = GLIBC_2.4::__stack_chk_guard;
    v1 = 0;
    *((unsigned int **)&v0[0]) = &v4;
    for (i = 0; i < a0; i += 1)
    {
        ptr = v0;
        *((char *[4])&v0[0]) = ptr + 1;
        *((char [4])&v1) = v1 + *(ptr);
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: func_no_args at 0x10a4c
unsigned int func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x10a68
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x10ad0
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v3;  // r3
    unsigned int v4;  // r0
    unsigned int v5;  // r1
    unsigned int v6;  // r0
    unsigned int v7;  // r0
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x8]

    v1 = &vvar_4;
    v3 = (!a1 ? NULL : strlen(a1));
    v0 = (!a1 ? NULL : strlen(a1));
    v4 = __aeabi_dadd(__floatsidf(a0 + v0), a1, a2, a3);
    v6 = __aeabi_dadd(v4, v5, __aeabi_l2d(a4, a5, v4, v5), v5);
    v7 = __aeabi_d2iz(v6, v5, v6, v5);
    return __aeabi_d2iz(v6, v5, v6, v5);
}


// Function: func_struct_byval at 0x10b80
typedef struct struct_0 {
    char field_0[4];
    unsigned int field_4;
} struct_0;

unsigned int func_struct_byval(unsigned int a0, unsigned int a1)
{
    unsigned int v8;  // r2
    unsigned int v9;  // r3
    struct_0 *ptr;  // r3
    char v0;  // [bp-0x2c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x28]
    unsigned int v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x24]
    unsigned int v4;  // [bp-0x10]
    unsigned int v5;  // [bp-0xc]
    unsigned int v6;  // [bp-0x8]
    unsigned int v7;  // [bp-0x4]

    v4 = a0;
    v5 = a1;
    v6 = v8;
    v7 = v9;
    memset(&v0, 0, 12);
    while (true)
    {
        if (v0 > 15)
            break;
        ptr = &(&v4)[2 * v0];
        *((char [4])&v2) = v1 + ptr->field_0;
        v3 = v3 + ptr->field_4 + armg_calculate_flag_c(1, v1, ptr->field_0, 0);
        v0 += 1;
        v1 = v2;
    }
    return v1;
}


// Function: func_struct_byptr at 0x10c10
unsigned int func_struct_byptr(unsigned int *a0)
{
    return (a0 ? a0[1] * *(a0) : 4294967295);
}


// Function: test_calling_conventions at 0x10c58
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_12400;
extern char g_124c4;
extern char g_124ec;
extern char g_12510;
extern char g_12540;
extern char g_12568;
extern char g_12594;

unsigned int test_calling_conventions()
{
    unsigned int v25;  // r3
    unsigned int v27;  // r0
    unsigned int v0;  // [bp-0x130]
    unsigned int i;  // [bp-0xc0]
    unsigned int v2;  // [bp-0xbc]
    unsigned int v3;  // [bp-0xb8]
    unsigned int v4;  // [bp-0xb4]
    char *v5;  // [bp-0xb0]
    unsigned int v6;  // [bp-0xac]
    unsigned int v7;  // [bp-0xa8]
    unsigned int v8;  // [bp-0xa4]
    unsigned int v9[1];  // [bp-0xa0]
    unsigned int v10;  // [bp-0x9c]
    unsigned int v11;  // [bp-0x98]
    unsigned int v12;  // [bp-0x94]
    char v13;  // [bp-0x88]
    unsigned int v14;  // [bp-0x14]

    v14 = GLIBC_2.4::__stack_chk_guard;
    puts(0x12400);
    printf("CALL-L1-01: %d\n", call_cdecl());
    printf("CALL-L1-02: %d\n", call_stdcall());
    printf("CALL-L1-03: %d\n", call_fastcall());
    printf("CALL-L1-04: %d\n", call_thiscall());
    printf("CALL-L1-05: %d\n", call_arm_aapcs());
    printf("CALL-L1-06: %d\n", call_mips());
    printf("CALL-L1-07: %d\n", call_amd64_sysv());
    printf("CALL-L1-08: %d\n", call_ms_x64());
    printf("CALL-L1-09: %d\n", call_vectorcall());
    printf("CALL-L1-10: %d\n", mixed_conventions_test());
    v2 = varargs_func(5, 1);
    printf(0x124c4, v2);
    v3 = func_no_args();
    printf(0x124ec, v3);
    v4 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
    printf(0x12510, v4);
    v5 = "test";
    v0 = 100;
    v6 = func_mixed_args(10, v5, 1374389535, 1074339512, 100, 0);
    printf(0x12540, v6);
    for (i = 0; i <= 15; i += 1)
    {
        v25 = i + 1;
        (&v11)[2 * i] = v25;
        (&v11)[1 + 2 * i] = v25 >> 31;
    }
    memcpy(&v0, &v13, 112);
    v7 = func_struct_byval(v11, v12);
    printf(0x12568, v7);
    *((unsigned int [1])v9) = 5;
    v10 = 10;
    v8 = func_struct_byptr(&v9);
    v27 = printf(0x12594, v8);
    if (!(v14 ^ GLIBC_2.4::__stack_chk_guard))
        return v27;
    __stack_chk_fail(); /* do not return */
}


// Function: param_by_value_int at 0x10f34
unsigned int param_by_value_int(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    v0 *= 2;
    return v0;
}


// Function: call_by_value_int at 0x10f64
int call_by_value_int()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = 5;
    v1 = param_by_value_int(v0);
    return v0 + v1;
}


// Function: param_by_value_ptr at 0x10f9c
unsigned int param_by_value_ptr(unsigned int *a0)
{
    unsigned int flag1;  // r3
    unsigned int v3;  // r3
    unsigned int *ptr;  // [bp-0xc], Other Possible Types: unsigned int

    ptr = a0;
    *(ptr) = *(ptr) * 2;
    ptr = 0;
    flag1 = ptr;
    if (!flag1)
    {
        v3 = 1;
        if (!armg_calculate_condition(18, flag1, 0, 0))
            goto LABEL_10fd6;
LABEL_10fd5:
        v3 = 0;
    }
    else
    {
        v3 = flag1;
        if (armg_calculate_condition(18, v3, 0, 0))
            goto LABEL_10fd5;
LABEL_10fd6:
    }
    return v3 & 255;
}


// Function: call_by_value_ptr at 0x10fec
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_by_value_ptr()
{
    unsigned int v0;  // [bp-0x18]
    char *v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    v0 = 5;
    v1 = &v0;
    v2 = param_by_value_ptr(v1);
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v0 + v2;
    __stack_chk_fail(); /* do not return */
}


// Function: param_array_decay at 0x1105c
unsigned int param_array_decay(unsigned int a0, unsigned int a1)
{
    return 4;
}


// Function: call_array_decay at 0x11084
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_array_decay()
{
    unsigned int v2;  // r0
    char v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0xc]

    v1 = GLIBC_2.4::__stack_chk_guard;
    memset(&v0, 0, 40);
    v2 = param_array_decay(&v0, 10);
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return v2;
    __stack_chk_fail(); /* do not return */
}


// Function: param_string at 0x110f4
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x11130
unsigned int call_string_param()
{
    unsigned int v0;  // r0

    v0 = param_string("Hello");
    return param_string("Hello");
}


// Function: param_ptr_array at 0x11150
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int i;  // [bp-0xc]

    v0 = 0;
    for (i = 0; i < a1; i += 1)
    {
        v0 += *((char *)*((int *)(a0 + i * 4)));
    }
    return v0;
}


// Function: call_ptr_array at 0x111d0
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_ptr_array()
{
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    v0 = "abc";
    v1 = "def";
    v2 = "ghi";
    v4 = param_ptr_array(&v0, 3);
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v4;
    __stack_chk_fail(); /* do not return */
}


// Function: param_varargs at 0x11240
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int param_varargs(unsigned int a0, unsigned int a1)
{
    unsigned int v7;  // r3
    unsigned int v8;  // r2
    char ptr[4];  // r3
    char v0[4];  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int i;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]
    unsigned int v6;  // [bp-0x4]

    v6 = v7;
    v5 = v8;
    v4 = a1;
    v3 = GLIBC_2.4::__stack_chk_guard;
    *((unsigned int **)&v0[0]) = &v4;
    v1 = 0;
    for (i = 0; i < a0; i += 1)
    {
        ptr = v0;
        *((char *[4])&v0[0]) = ptr + 1;
        *((char [4])&v1) = v1 + *(ptr);
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: call_varargs_param at 0x112ec
unsigned int call_varargs_param()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x10]

    v0 = 40;
    v1 = param_varargs(4, 10);
    return param_varargs(4, 10);
}


// Function: param_func_ptr at 0x11324
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
    return a0(a1) + 10;
}


// Function: callback_func at 0x11358
unsigned int callback_func(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_func_ptr_param at 0x11380
unsigned int call_func_ptr_param()
{
    unsigned int v0;  // r0

    v0 = param_func_ptr(callback_func, 5);
    return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x113a4
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
    if (ptr && *(ptr))
    {
        *(ptr)->field_0 = a1;
        *(ptr) = NULL;
        return 1;
    }
    return 4294967295;
}


// Function: call_double_ptr at 0x1140c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_double_ptr()
{
    char *flag1;  // r3
    char *v6;  // r3
    unsigned int v0;  // [bp-0x18]
    char *v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    v0 = 10;
    v1 = &v0;
    v2 = param_double_ptr(&v1, 20);
    flag1 = v1;
    if (!flag1)
    {
        v6 = 0x1;
        if (!armg_calculate_condition(18, flag1, 0, 0))
            goto LABEL_1145a;
LABEL_11459:
        v6 = NULL;
    }
    else
    {
        v6 = flag1;
        if (armg_calculate_condition(18, v6, 0, 0))
            goto LABEL_11459;
LABEL_1145a:
    }
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return (v6 & 255) + v0;
    __stack_chk_fail(); /* do not return */
}


// Function: param_complex_cast at 0x11498
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
    unsigned int v0[2];  // [bp-0x18]
    unsigned int v1[2];  // [bp-0x14]
    unsigned int v2[2];  // [bp-0x10]
    unsigned int v3[2];  // [bp-0xc]

    if (!a1)
    {
        v1[0] = a0;
        v2[0] = v1;
        v3[0] = v2;
        return v3[0];
    }
    else if (a1 == 1)
    {
        v0[0] = a0;
        return v0[0] + v0[1];
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_complex_cast at 0x1151c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_complex_cast()
{
    unsigned int v4;  // r0
    unsigned int v0[1];  // [bp-0x18]
    unsigned int v1[1];  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v3 = GLIBC_2.4::__stack_chk_guard;
    *((unsigned int [1])v0) = 305419896;
    *((unsigned int [1])v1) = 100;
    v2 = 200;
    param_complex_cast(&v1, 1);
    v4 = param_complex_cast(&v0, 0);
    if (!(v3 ^ GLIBC_2.4::__stack_chk_guard))
        return v4;
    __stack_chk_fail(); /* do not return */
}


// Function: param_struct_byval at 0x115a8
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
    return a0 + a15;
}


// Function: call_struct_byval at 0x115dc
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_struct_byval()
{
    unsigned int v18;  // r0
    unsigned int idx;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    unsigned int v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned int v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x38]
    unsigned int v7;  // [bp-0x34]
    unsigned int v8;  // [bp-0x30]
    unsigned int v9;  // [bp-0x2c]
    unsigned int v10;  // [bp-0x28]
    unsigned int v11;  // [bp-0x24]
    unsigned int v12;  // [bp-0x20]
    unsigned int v13;  // [bp-0x1c]
    unsigned int v14;  // [bp-0x18]
    unsigned int v15;  // [bp-0x14]
    unsigned int v16;  // [bp-0x10]
    unsigned int v17;  // [bp-0xc]

    v17 = GLIBC_2.4::__stack_chk_guard;
    for (idx = 0; idx <= 15; idx += 1)
    {
        (&v1)[idx] = idx;
    }
    v18 = param_struct_byval(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
    if (!(v17 ^ GLIBC_2.4::__stack_chk_guard))
        return v18;
    __stack_chk_fail(); /* do not return */
}


// Function: param_order_dep at 0x11690
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_order_dep at 0x116c0
unsigned int call_order_dep()
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    v0 += 1;
    v0 += 1;
    v1 = param_order_dep(v0, v0);
    return param_order_dep(v0, v0);
}


// Function: test_parameter_passing at 0x11708
extern char g_125f4;

int test_parameter_passing()
{
    unsigned int v10;  // r0

    puts(0x125f4);
    printf("PARAM-L1-01: %d\n", call_by_value_int());
    printf("PARAM-L1-02: %d\n", call_by_value_ptr());
    printf("PARAM-L2-01: %d\n", call_array_decay());
    printf("PARAM-L2-02: %d\n", call_string_param());
    printf("PARAM-L2-03: %d\n", call_ptr_array());
    printf("PARAM-L2-04: %d\n", call_varargs_param());
    printf("PARAM-L3-01: %d\n", call_func_ptr_param());
    printf("PARAM-L3-02: %d\n", call_double_ptr());
    printf("PARAM-L3-03: %d\n", call_complex_cast());
    printf("PARAM-L3-04: %d\n", call_struct_byval());
    v10 = printf("PARAM-L3-05: %d\n", call_order_dep());
    return printf("PARAM-L3-05: %d\n", call_order_dep());
}


// Function: ret_basic_type at 0x1182c
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_ret_basic at 0x11854
unsigned int call_ret_basic()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = 21;
    v1 = ret_basic_type(v0);
    return v1;
}


// Function: ret_pointer at 0x11884
int ret_pointer(unsigned int a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x118ac
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_ret_pointer()
{
    unsigned int *v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]

    v4 = GLIBC_2.4::__stack_chk_guard;
    v1 = 10;
    v2 = 20;
    v3 = 30;
    v0 = ret_pointer(&v1);
    if (!(v4 ^ GLIBC_2.4::__stack_chk_guard))
        return *(v0);
    __stack_chk_fail(); /* do not return */
}


// Function: ret_small_struct at 0x11920
unsigned int [2] ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    *(ptr) = a1;
    ptr[1] = a2;
    return ptr;
}


// Function: call_ret_small_struct at 0x1196c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_ret_small_struct()
{
    unsigned int v0[1];  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = GLIBC_2.4::__stack_chk_guard;
    ret_small_struct(&v0, 3, 4);
    if (!(v2 ^ GLIBC_2.4::__stack_chk_guard))
        return *(v0) + v1;
    __stack_chk_fail(); /* do not return */
}


// Function: ret_large_struct at 0x119d4
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int [4] ret_large_struct(unsigned int *ptr, unsigned int a1)
{
    unsigned int index;  // [bp-0x50]
    unsigned int v1;  // [bp-0x4c]
    unsigned int v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x44]
    unsigned int v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x3c]
    unsigned int v6;  // [bp-0x38]
    unsigned int v7;  // [bp-0x34]
    unsigned int v8;  // [bp-0x30]
    unsigned int v9;  // [bp-0x2c]
    unsigned int v10;  // [bp-0x28]
    unsigned int v11;  // [bp-0x24]
    unsigned int v12;  // [bp-0x20]
    unsigned int v13;  // [bp-0x1c]
    unsigned int v14;  // [bp-0x18]
    unsigned int v15;  // [bp-0x14]
    unsigned int v16;  // [bp-0x10]
    unsigned int v17;  // [bp-0xc]

    v17 = GLIBC_2.4::__stack_chk_guard;
    for (index = 0; index <= 15; index += 1)
    {
        (&v1)[index] = a1 + index;
    }
    *(ptr) = v1;
    ptr[1] = v2;
    ptr[2] = v3;
    ptr[3] = v4;
    ptr[4] = v5;
    ptr[5] = v6;
    ptr[6] = v7;
    ptr[7] = v8;
    vvar_47{r64|4b} = ptr + 8;
    *(ptr) = v9;
    ptr[1] = v10;
    ptr[2] = v11;
    ptr[3] = v12;
    vvar_53{r64|4b} = ptr + 4;
    *(ptr) = v13;
    ptr[1] = v14;
    ptr[2] = v15;
    ptr[3] = v16;
    if (!(v17 ^ GLIBC_2.4::__stack_chk_guard))
        return ptr;
    __stack_chk_fail(); /* do not return */
}


// Function: call_ret_large_struct at 0x11a94
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_ret_large_struct()
{
    unsigned int v0[15];  // [bp-0x4c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = GLIBC_2.4::__stack_chk_guard;
    ret_large_struct(&v0, 100);
    if (!(v2 ^ GLIBC_2.4::__stack_chk_guard))
        return v0[0] + v1;
    __stack_chk_fail(); /* do not return */
}


// Function: func_a at 0x11af8
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x11b20
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: ret_func_ptr at 0x11b48
int ret_func_ptr(unsigned int a0)
{
    return (!a0 ? func_a : func_b);
}


// Function: call_ret_func_ptr at 0x11b88
int call_ret_func_ptr()
{
    unsigned int v1;  // r0
    unsigned int *v0;  // [bp-0xc]

    v0 = ret_func_ptr(1);
    v1 = v0(5);
    return v0(5);
}


// Function: ret_opaque_handle at 0x11bbc
extern char handle2.0;

int ret_opaque_handle(unsigned int a0)
{
    return (a0 ? 143432 : "d");
}


// Function: call_ret_opaque at 0x11bfc
int call_ret_opaque()
{
    unsigned int *v0;  // [bp-0xc]

    v0 = ret_opaque_handle(0);
    return *(v0);
}


// Function: ret_complex_expr at 0x11c28
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x11c74
int call_ret_complex_expr()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = ret_complex_expr(5, 3, 10);
    v1 = ret_complex_expr(3, 5, 10);
    return v0 + v1;
}


// Function: ret_multi_branch at 0x11cc0
unsigned int ret_multi_branch(unsigned int a0)
{
    if (a0 == 2)
        return 30;
    if (2 < a0)
        return 4294967295;
    if (!a0)
    {
        return 10;
    }
    else if (a0 == 1)
    {
        return 20;
    }
    return 4294967295;
}


// Function: call_ret_multi_branch at 0x11d30
unsigned int call_ret_multi_branch()
{
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    v0 += ret_multi_branch(0);
    v0 += ret_multi_branch(1);
    v0 += ret_multi_branch(2);
    return v0;
}


// Function: ret_void at 0x11d9c
int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0;
}


// Function: call_ret_void at 0x11dd8
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_ret_void()
{
    unsigned int v0[1];  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = GLIBC_2.4::__stack_chk_guard;
    ret_void(7, &v0);
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return *(v0);
    __stack_chk_fail(); /* do not return */
}


// Function: test_return_values at 0x11e34
extern char g_12700;
extern char g_12720;
extern char g_1273c;
extern char g_12758;
extern char g_12774;
extern char g_12794;
extern char g_127b0;
extern char g_127d0;
extern char g_127ec;
extern char g_12808;

int test_return_values()
{
    unsigned int v8;  // r0

    puts(0x12700);
    printf(0x12720, call_ret_basic());
    printf(0x1273c, call_ret_pointer());
    printf(0x12758, call_ret_small_struct());
    printf(0x12774, call_ret_large_struct());
    printf(0x12794, call_ret_func_ptr());
    printf(0x127b0, call_ret_opaque());
    printf(0x127d0, call_ret_complex_expr());
    printf(0x127ec, call_ret_multi_branch());
    v8 = printf(0x12808, call_ret_void());
    return printf(0x12808, call_ret_void());
}


// Function: main at 0x11f28
unsigned int main()
{
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}


// Function: __aeabi_drsub at 0x11f48
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = __aeabi_dadd();
    return __aeabi_dadd();
}


// Function: __subdf3 at 0x11f50
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v0;  // r0

    v0 = __aeabi_dadd();
    return __aeabi_dadd();
}


// Function: __aeabi_dadd at 0x11f54
extern char __stack_chk_guard;
extern char g_200000;
extern char g_400000;

int __aeabi_dadd(int a0)
{
    unsigned int v1;  // r1
    unsigned int v2;  // r4
    unsigned int v10;  // cc_ndep
    unsigned int v91;  // cc_ndep
    unsigned int v92;  // cc_dep2
    unsigned int v93;  // cc_ndep
    unsigned int flag2;  // r1
    unsigned int v95;  // r3
    unsigned int v96;  // r3
    unsigned int v97;  // r2
    unsigned int v98;  // cc_op
    unsigned int v99;  // cc_dep2
    unsigned int v100;  // cc_dep1
    unsigned int v11;  // cc_dep1
    unsigned int v101;  // r2
    unsigned int v102;  // r2
    unsigned int v103;  // r0
    unsigned int v104;  // r1
    unsigned int v106;  // r1
    unsigned int v107;  // r4
    unsigned int v108;  // r4
    char v109;  // r4
    unsigned int v12;  // cc_dep2
    unsigned int v110;  // cc_op
    unsigned int v111;  // cc_dep1
    unsigned int v112;  // cc_dep2
    unsigned int v113;  // cc_ndep
    unsigned int v114;  // cc_dep1
    unsigned int v115;  // cc_dep2
    unsigned int v116;  // cc_ndep
    unsigned int v117;  // cc_dep1
    unsigned int v118;  // cc_dep2
    unsigned int v119;  // cc_ndep
    unsigned int v13;  // cc_ndep
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
    unsigned int v76;  // r1
    unsigned int v77;  // cc_dep1
    unsigned int v78;  // cc_op
    unsigned int v79;  // cc_dep2
    unsigned int v80;  // cc_ndep
    unsigned int v9;  // cc_dep2
    unsigned int v81;  // r12
    unsigned int v82;  // r0
    unsigned int v84;  // r12
    unsigned int v85;  // r0
    unsigned int flag3;  // r1
    unsigned int v87;  // r4
    unsigned int v88;  // cc_op
    unsigned int v89;  // cc_dep1
    unsigned int v90;  // cc_dep2
    unsigned int v0;  // [bp-0xc]

    v2 = v1 * 2;
    v4 = v3 * 2;
    if (!(v2 ^ v4))
    {
        v8 = (armg_calculate_condition(5, v5, v6, v7) ? a0 ^ v14 : v5);
        v9 = (armg_calculate_condition(5, v5, v6, v7) ? armg_calculate_flag_c(5, v5, v6, v7) : v6);
        v10 = (armg_calculate_condition(5, v5, v6, v7) ? armg_calculate_flag_v(5, v5, v6, v7) : v7);
        if (!armg_calculate_condition(21, v8, v9, v10))
            goto LABEL_11f6a;
LABEL_11f69:
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
            goto LABEL_11f69;
LABEL_11f6a:
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
                goto LABEL_11f8c;
        }
        else
        {
            v34 = (v4 >> 21) - v32;
            if (!((char)armg_calculate_condition(210, v33, v32, 0)))
            {
LABEL_11f8c:
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
            goto LABEL_11fb0;
        return a0;
LABEL_11fb0:
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
                    goto LABEL_1215a;
LABEL_12159:
                v32 += 1;
                if (!armg_calculate_condition(21, v32, v60, v61))
                    goto LABEL_1215e;
LABEL_1215d:
                v35 -= 1;
            }
            else
            {
                v45 = v45;
                if (armg_calculate_condition(5, v32, v60, v61))
                    goto LABEL_12159;
LABEL_1215a:
                if (armg_calculate_condition(21, v32, v60, v61))
                    goto LABEL_1215d;
LABEL_1215e:
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
        v76 = v70;
        v77 = v76;
        if (v76 >= 0x100000)
        {
            v78 = 2;
            v79 = 0x200000;
            v80 = 0;
            v81 = v71;
            v82 = v72;
            if (v76 >= 0x200000)
            {
                v81 = (v72 & 1) * 0x80000000 | v71 >> 1;
                v76 = (v62 + 1) * 0x200000;
                v78 = 1;
                v79 = &g_400000;
                v80 = 0;
                v82 = (v76 & 1) * 0x80000000 | v72 >> 1;
                if ((char)armg_calculate_condition(33, v76, &g_400000, 0))
                    return 0;
            }
        }
        else
        {
            v84 = v71 * 2;
            v85 = v72 * 2 + (v71 >> 31 & 1);
            flag3 = v76 * 2 + armg_calculate_flag_c(3, v72, v72, v71 >> 31 & 1);
            v87 = v62 - 1;
            if (1 <= v62)
            {
                v78 = 2;
                v76 = (armg_calculate_condition(34, v77, 0x100000, 0) ? flag3 : v77);
                v79 = (armg_calculate_condition(34, v77, 0x100000, 0) ? 0x100000 : 0x100000);
                v80 = (armg_calculate_condition(34, v77, 0x100000, 0) ? 0 : 0);
                v81 = v84;
                v82 = v85;
                if (!((char)armg_calculate_condition(34, v76, v79, v80)))
                    goto LABEL_1209c;
            }
            else
            {
                v78 = 2;
                v76 = (armg_calculate_condition(34, v77, 0x100000, 0) ? flag3 : v77);
                v79 = (armg_calculate_condition(34, v77, 0x100000, 0) ? 0x100000 : 0x100000);
                v80 = (armg_calculate_condition(34, v77, 0x100000, 0) ? 0 : 0);
                v81 = v84;
                v82 = v85;
                if (!((char)armg_calculate_condition(34, v76, v79, v80)))
                {
LABEL_1209c:
                    v92 = armg_calculate_flag_c(2, v76, v79, v80);
                    v93 = armg_calculate_flag_v(2, v76, v79, v80);
                    if (!flag3)
                    {
                        flag2 = v85;
                        if (!armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_120a6;
LABEL_120a5:
                        v85 = 0;
                    }
                    else
                    {
                        flag2 = flag3;
                        if (armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_120a5;
LABEL_120a6:
                    }
                    if (!flag2)
                    {
                        v95 = 32;
                        if (!armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_120ae;
LABEL_120ad:
                        v95 += 32;
                    }
                    else
                    {
                        v95 = Clz(flag2);
                        if (armg_calculate_condition(5, flag3, v92, v93))
                            goto LABEL_120ad;
LABEL_120ae:
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
                            goto LABEL_120ec;
                        }
                        else
                        {
                            v100 = v97;
                            v101 = v102 + 20;
                        }
                    }
                    v104 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 | v85 >> ((char)(armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v84) & 31) & ((armg_calculate_condition(v98 | 208, v100, v99, 0) ? 32 - v101 : v84) & 255) - 32 >> 31 : flag2 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31);
                    v103 = (armg_calculate_condition(v98 | 208, v100, v99, 0) ? v85 << ((char)v101 & 31) & (v101 & 255) - 32 >> 31 : v85);
LABEL_120ec:
                    if (v96 <= v87)
                    {
                        v106 = v104 + (v87 - v96) * 0x100000;
                        if (!armg_calculate_condition(162, v87, v96, 0))
                            goto LABEL_120f6;
LABEL_120f5:
                        v106 |= v66 & 0x80000000;
                        if (!((char)armg_calculate_condition(162, v87, v96, 0)))
                            goto LABEL_120fc;
                        return v103;
                    }
                    else
                    {
                        v106 = v104;
                        if (armg_calculate_condition(162, v87, v96, 0))
                            goto LABEL_120f5;
LABEL_120f6:
                        if (!((char)armg_calculate_condition(162, v87, v96, 0)))
                            goto LABEL_120fc;
                        return v103;
                    }
LABEL_120fc:
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
        if (v81 == 0x80000000)
        {
            v88 = (armg_calculate_condition(v78, v76, v79, v80) ? 5 : v78);
            v89 = (armg_calculate_condition(v78, v76, v79, v80) ? v82 >> 1 : v76);
            v90 = (armg_calculate_condition(v78, v76, v79, v80) ? v82 & 1 : v79);
            v91 = (armg_calculate_condition(v78, v76, v79, v80) ? armg_calculate_flag_v(v78, v76, v79, v80) : v80);
        }
        else
        {
            v88 = (armg_calculate_condition(v78, v76, v79, v80) ? 5 : v78);
            v89 = (armg_calculate_condition(v78, v76, v79, v80) ? v82 >> 1 : v76);
            v90 = (armg_calculate_condition(v78, v76, v79, v80) ? v82 & 1 : v79);
            v91 = (armg_calculate_condition(v78, v76, v79, v80) ? armg_calculate_flag_v(v78, v76, v79, v80) : v80);
        }
        return v82 + armg_calculate_flag_c(v88, v89, v90, v91);
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
                goto LABEL_121d4;
        }
        else
        {
            v110 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? 5 : v28);
            v111 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? ~(v4 >> 21) : v29);
            v112 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? v4 >> 20 & 1 : v30);
            v113 = (armg_calculate_condition(v28 | 16, v29, v30, v31) ? armg_calculate_flag_v(v28, v29, v30, v31) : v31);
            if ((char)armg_calculate_condition(v110, v111, v112, v113))
            {
LABEL_121d4:
                return (armg_calculate_condition(21, ~(v2 >> 21), v2 >> 20 & 1, armg_calculate_flag_v(v110, v111, v112, v113)) ? a0 : v39);
            }
        }
        if (!(v2 ^ v4))
        {
            v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
            v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
            v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
            if ((char)armg_calculate_condition(5, v114, v115, v116))
                goto LABEL_1218c;
        }
        else
        {
            v114 = (armg_calculate_condition(5, v111, v112, v113) ? a0 ^ v39 : v111);
            v115 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_c(5, v111, v112, v113) : v112);
            v116 = (armg_calculate_condition(5, v111, v112, v113) ? armg_calculate_flag_v(5, v111, v112, v113) : v113);
            if ((char)armg_calculate_condition(5, v114, v115, v116))
            {
LABEL_1218c:
                v120 = v38 ^ v40;
                v121 = armg_calculate_flag_c(5, v114, v115, v116);
                v122 = armg_calculate_flag_v(5, v114, v115, v116);
                if ((v38 ^ v40))
                {
                    v123 = 0;
                    if (!armg_calculate_condition(21, v120, v121, v122))
                        goto LABEL_12196;
LABEL_12195:
                    a0 = 0;
                    if (!((char)armg_calculate_condition(21, v120, v121, v122)))
                        goto LABEL_1219c;
                    return 0;
                }
                else
                {
                    v123 = v38;
                    if (armg_calculate_condition(21, v120, v121, v122))
                        goto LABEL_12195;
LABEL_12196:
                    if (!((char)armg_calculate_condition(21, v120, v121, v122)))
                        goto LABEL_1219c;
                    return a0;
                }
LABEL_1219c:
                if (!v0 >> 21)
                    return a0 * 2;
                if (armg_calculate_condition(49, v0, &g_400000, 0))
                {
                    if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
                        goto LABEL_121c0;
                    return a0;
                }
                else
                {
                    if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
                        goto LABEL_121c0;
                    return a0;
                }
LABEL_121c0:
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


// Function: __aeabi_ui2d at 0x12200
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
            goto LABEL_1220c;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_1220c;
        return a0;
    }
LABEL_1220c:
    v2 = vvar_4{r64|4b};
    v1 = v9;
    v0 = v10;
}


// Function: __floatsidf at 0x12224
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
            goto LABEL_12230;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, a0, v7, v8)))
            goto LABEL_12230;
        return a0;
    }
LABEL_12230:
    v2 = vvar_4{r64|4b};
    v1 = v9;
    v0 = v10;
}


// Function: __extendsfdf2 at 0x1224c
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
            goto LABEL_12262;
LABEL_12261:
        v22 = 5;
        v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
        v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
        v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
        if (!armg_calculate_condition(21, v23, v24, v25))
            goto LABEL_12266;
LABEL_12265:
        if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
            goto LABEL_1226c;
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
            goto LABEL_12261;
LABEL_12262:
        v22 = v10;
        v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
        v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
        v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
        if (armg_calculate_condition(v22 | 16, v23, v24, v25))
            goto LABEL_12265;
LABEL_12266:
        if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
            goto LABEL_1226c;
        return v4;
    }
LABEL_1226c:
    if ((v3 & 16777215))
        goto LABEL_12274;
    return v4;
LABEL_12274:
    v42 = v5 ^ 0xff000000;
    v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
    if (!(v5 ^ 0xff000000))
    {
        if (!((char)armg_calculate_condition(5, v42, 1, v43)))
            goto LABEL_12280;
        return v4;
    }
    else
    {
        if (!((char)armg_calculate_condition(5, v42, 1, v43)))
            goto LABEL_12280;
        return v4;
    }
LABEL_12280:
    v2 = vvar_32{r64|4b};
    v1 = v44;
    v0 = v45;
}


// Function: __floatundidf at 0x12294
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
        goto LABEL_1229c;
    return a0;
LABEL_1229c:
    v2 = v3;
    v1 = v4;
    v0 = v5;
    v6 = a1 >> 22;
    if (!a1 >> 22)
        goto LABEL_0x12040;
}


// Function: __aeabi_l2d at 0x122a8
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
    unsigned int v3;  // lr
    unsigned int v4;  // r5
    unsigned int v5;  // r4
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    if (a0 || a1)
        goto LABEL_122b0;
    return a0;
LABEL_122b0:
    v2 = v3;
    v1 = v4;
    v0 = v5;
    if (!(a1 & 0x80000000) >> 31)
        goto LABEL_0x122c4;
}


// Function: __aeabi_d2iz at 0x12308
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


// Function: _fini at 0x12364
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

