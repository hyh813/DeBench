// Angr Decompilation of 4_gcc_O0_g
// Platform: AARCH64

// Function: _init at 0x400730
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400750
extern unsigned long long g_413f80;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_413f80;
}


// Function: sub_400764 at 0x400764
long long sub_400764()
{
    char *v0;  // x0
    unsigned long long len;  // x0

    len = strlen(v0);
    return strlen(v0);
}


// Function: _start at 0x400800
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400830 at 0x400830
void sub_400830()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400834
extern unsigned long long g_413fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_413fe0)
        return 0;
    v0 = __gmon_start__(g_413fe0);
    return __gmon_start__(g_413fe0);
}


// Function: sub_400848 at 0x400848
void sub_400848()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400850
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400880
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


// Function: sub_4008bc at 0x4008bc
void sub_4008bc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4008c0
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


// Function: sub_400908 at 0x400908
long long sub_400908()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400910
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: cdecl_func at 0x400914
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_cdecl at 0x400934
int call_cdecl()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return cdecl_func(5, 10);
}


// Function: stdcall_func at 0x400950
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: call_stdcall at 0x400970
int call_stdcall()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return stdcall_func(5, 10);
}


// Function: fastcall_func at 0x40098c
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: call_fastcall at 0x4009b8
int call_fastcall()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return fastcall_func(1, 2, 3);
}


// Function: call_thiscall at 0x4009d8
unsigned long long call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x4009e0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x400a24
int call_arm_aapcs()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return arm_aapcs_func(1, 2, 3, 4, 5);
}


// Function: mips_func at 0x400a4c
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x400a84
int call_mips()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return mips_func(10, 20, 30, 40);
}


// Function: amd64_sysv_func at 0x400aa8
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x400af8
int call_amd64_sysv()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: ms_x64_func at 0x400b24
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x400b68
int call_ms_x64()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return ms_x64_func(1, 2, 3, 4, 5);
}


// Function: vectorcall_func at 0x400b90
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x400bc8
int call_vectorcall()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return vectorcall_func(1, 2, 3, 4);
}


// Function: mixed_conventions_test at 0x400bec
unsigned int mixed_conventions_test()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = 0;
    v1 += cdecl_func(1, 2);
    v1 += stdcall_func(3, 4);
    v1 += fastcall_func(5, 6, 7);
    return v1;
}


// Function: varargs_func at 0x400c5c
extern char __stack_chk_guard;

long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    uint128_t v26;  // q0
    uint128_t v27;  // q1
    uint128_t v28;  // q2
    uint128_t v29;  // q3
    uint128_t v30;  // q4
    uint128_t v31;  // q5
    uint128_t v32;  // q6
    uint128_t v33;  // q7
    unsigned long v34;  // x1
    unsigned int *ptr;  // x0
    char *v0;  // [bp-0x110]
    unsigned int v1;  // [bp-0xf0]
    unsigned int i;  // [bp-0xec]
    unsigned long long v3;  // [bp-0xe8]
    char *v4;  // [bp-0xe0]
    char *v5;  // [bp-0xd8]
    unsigned int v6;  // [bp-0xd0]
    unsigned int v7;  // [bp-0xcc]
    unsigned long v8;  // [bp-0xc8]
    uint128_t v9;  // [bp-0xc0]
    uint128_t v10;  // [bp-0xb0]
    uint128_t v11;  // [bp-0xa0]
    uint128_t v12;  // [bp-0x90]
    uint128_t v13;  // [bp-0x80]
    uint128_t v14;  // [bp-0x70]
    uint128_t v15;  // [bp-0x60]
    uint128_t v16;  // [bp-0x50]
    char v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long long v19;  // [bp-0x30]
    unsigned long long v20;  // [bp-0x28]
    unsigned long long v21;  // [bp-0x20]
    unsigned long long v22;  // [bp-0x18]
    unsigned long long v23;  // [bp-0x10]
    unsigned long long v24;  // [bp-0x8]
    char v25;  // [bp+0x0]

    v0 = &v25;
    v18 = a1;
    v19 = a2;
    v20 = a3;
    v21 = a4;
    v22 = a5;
    v23 = a6;
    v24 = a7;
    v9 = v26;
    v10 = v27;
    v11 = v28;
    v12 = v29;
    v13 = v30;
    v14 = v31;
    v15 = v32;
    v16 = v33;
    v8 = *((long long *)&__stack_chk_guard);
    v1 = 0;
    v3 = &v25;
    v4 = &v25;
    v5 = &v17;
    v6 = 4294967240;
    v7 = 4294967168;
    for (i = 0; i < a0; i += 1)
    {
        v34 = v6;
        ptr = v3;
        if ((unsigned int)v34 >= 0)
        {
            v3 = (char *)&ptr[2] + 3 & 18446744073709551608;
        }
        else
        {
            v6 = (unsigned int)v34 + 8;
            if (v6 > 0)
                v3 = (char *)&ptr[2] + 3 & 18446744073709551608;
            else
                ptr = &v4[v34 * 0x100000000 >> 63 & 0xffffffff00000000 | v34 & 4294967295];
        }
        v1 += *(ptr);
    }
    if (v8 == *((long long *)&__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: func_no_args at 0x400d9c
unsigned long long func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x400da4
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400e0c
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
    unsigned int v3;  // w0
    unsigned int v4;  // s0
    char *v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    if (a1)
        v3 = strlen(a1);
    else
        v3 = 0;
    v1 = v3;
    return a0 + v1 + v4 + a2;
}


// Function: func_struct_byval at 0x400e74
unsigned long long func_struct_byval(unsigned long ptr)
{
    unsigned int i;  // [bp-0xc]
    unsigned long long v1;  // [bp-0x8]

    v1 = 0;
    for (i = 0; i <= 15; i += 1)
    {
        v1 += *((long long *)(ptr + i * 8));
    }
    return v1;
}


// Function: func_struct_byptr at 0x400ec0
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (a0)
        return a0[1] * *(a0);
    return 4294967295;
}


// Function: test_calling_conventions at 0x400ef8
extern char $d;
extern char __stack_chk_guard;
extern char g_402078;
extern char g_4020a0;
extern char g_4020c8;
extern char g_4020f8;
extern char g_402120;
extern char g_402150;

unsigned long long test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x150]
    char v1;  // [bp-0x140]
    char v2;  // [bp-0x130]
    char v3;  // [bp-0x120]
    char v4;  // [bp-0x110]
    char v5;  // [bp-0x100]
    char v6;  // [bp-0xf0]
    char v7;  // [bp-0xe0]
    char v8;  // [bp-0xd0]
    unsigned int i;  // [bp-0xb4]
    unsigned int v10;  // [bp-0xb0]
    unsigned int v11;  // [bp-0xac]
    unsigned int v12;  // [bp-0xa8]
    unsigned int v13;  // [bp-0xa4]
    unsigned int v14;  // [bp-0xa0]
    unsigned int v15;  // [bp-0x9c]
    unsigned int v16[1];  // [bp-0x98]
    unsigned int v17;  // [bp-0x94]
    char *v18;  // [bp-0x90]
    unsigned long v19;  // [bp-0x88]
    char v20;  // [bp-0x78]
    char v21;  // [bp-0x68]
    char v22;  // [bp-0x58]
    char v23;  // [bp-0x48]
    char v24;  // [bp-0x38]
    char v25;  // [bp-0x28]
    char v26;  // [bp-0x18]
    unsigned long v27;  // [bp-0x8]
    char v28;  // [bp+0x0]

    v0 = &v28;
    v27 = *((long long *)&__stack_chk_guard);
    puts(&$d);
    printf("CALL-L1-01: %d\n", call_cdecl() & 4294967295);
    printf("CALL-L1-02: %d\n", call_stdcall() & 4294967295);
    printf("CALL-L1-03: %d\n", call_fastcall() & 4294967295);
    printf("CALL-L1-04: %d\n", call_thiscall() & 4294967295);
    printf("CALL-L1-05: %d\n", call_arm_aapcs() & 4294967295);
    printf("CALL-L1-06: %d\n", call_mips() & 4294967295);
    printf("CALL-L1-07: %d\n", call_amd64_sysv() & 4294967295);
    printf("CALL-L1-08: %d\n", call_ms_x64() & 4294967295);
    printf("CALL-L1-09: %d\n", call_vectorcall() & 4294967295);
    printf("CALL-L1-10: %d\n", mixed_conventions_test() & 4294967295);
    v10 = varargs_func(5, 1, 2, 3, 4, 5, a6, a7);
    printf(&g_402078, v10);
    v11 = func_no_args();
    printf(&g_4020a0, v11);
    v12 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
    printf(&g_4020c8, v12);
    v18 = "test";
    v13 = func_mixed_args(10, v18, 100);
    printf(&g_4020f8, v13);
    for (i = 0; i <= 15; i += 1)
    {
        *((unsigned long long *)((char *)&v19 + (__ROL__(i, 3) & 18446744073709551608))) = (i + 1) * 0x100000000 >> 63 & 0xffffffff00000000 | i + 1;
    }
    memcpy(&v1, &v19, 16);
    memcpy(&v2, &v20, 16);
    memcpy(&v3, &v21, 16);
    memcpy(&v4, &v22, 16);
    memcpy(&v5, &v23, 16);
    memcpy(&v6, &v24, 16);
    memcpy(&v7, &v25, 16);
    memcpy(&v8, &v26, 16);
    v14 = func_struct_byval(&v1);
    printf(&g_402120, v14);
    *((unsigned int [1])v16) = 5;
    v17 = 10;
    v15 = func_struct_byptr(&v16);
    printf(&g_402150, v15);
    if (v27 == *((long long *)&__stack_chk_guard))
        return &__stack_chk_guard;
    __stack_chk_fail(); /* do not return */
}


// Function: param_by_value_int at 0x401178
unsigned int param_by_value_int(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    v0 = (v0 * 2 | v0 >> 31) & 4294967294;
    return v0;
}


// Function: call_by_value_int at 0x401198
int call_by_value_int()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = 5;
    v2 = param_by_value_int(v1);
    return v1 + v2;
}


// Function: param_by_value_ptr at 0x4011c8
long long param_by_value_ptr(unsigned int *a0)
{
    unsigned int v1;  // w0
    unsigned int *ptr;  // [bp-0x8], Other Possible Types: unsigned long long

    ptr = a0;
    *(ptr) = __ROL__(*(ptr), 1) & 4294967294;
    ptr = 0;
    if (ptr)
        v1 = 0;
    else
        v1 = 1;
    return v1 & 255;
}


// Function: call_by_value_ptr at 0x401200
extern char __stack_chk_guard;

unsigned long long call_by_value_ptr()
{
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    char *v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = 5;
    v3 = &v1;
    v2 = param_by_value_ptr(v3);
    if (v4 == *((long long *)&__stack_chk_guard))
        return v1 + v2 & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: param_array_decay at 0x401274
unsigned long long param_array_decay(unsigned long a0, unsigned long a1)
{
    return 8;
}


// Function: call_array_decay at 0x40128c
extern char __stack_chk_guard;

long long call_array_decay()
{
    unsigned int v4;  // w0
    char *v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    memset(&v1, 0, 40);
    v4 = param_array_decay(&v1, 10);
    if (v2 == *((long long *)&__stack_chk_guard))
        return v4;
    __stack_chk_fail(); /* do not return */
}


// Function: param_string at 0x4012f0
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x40131c
int call_string_param()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_string("Hello");
}


// Function: param_ptr_array at 0x401338
unsigned int param_ptr_array(unsigned long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x8]
    unsigned int i;  // [bp-0x4]

    v0 = 0;
    for (i = 0; i < a1; i += 1)
    {
        v0 += *((char *)*((long long *)(a0 + (__ROL__(i, 3) & 18446744073709551608))));
    }
    return v0;
}


// Function: call_ptr_array at 0x4013a0
extern unsigned long long $d;
extern char __stack_chk_guard;
extern unsigned long long g_414018;
extern unsigned long long g_414020;

long long call_ptr_array()
{
    unsigned int v6;  // w0
    char *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = $d;
    v2 = g_414018;
    v3 = g_414020;
    v6 = param_ptr_array(&v1, 3);
    if (v4 == *((long long *)&__stack_chk_guard))
        return v6;
    __stack_chk_fail(); /* do not return */
}


// Function: param_varargs at 0x401418
extern char __stack_chk_guard;

long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    uint128_t v26;  // q0
    uint128_t v27;  // q1
    uint128_t v28;  // q2
    uint128_t v29;  // q3
    uint128_t v30;  // q4
    uint128_t v31;  // q5
    uint128_t v32;  // q6
    uint128_t v33;  // q7
    unsigned long v34;  // x1
    unsigned int *ptr;  // x0
    char *v0;  // [bp-0x110]
    unsigned int v1;  // [bp-0xf0]
    unsigned int i;  // [bp-0xec]
    unsigned long long v3;  // [bp-0xe8]
    char *v4;  // [bp-0xe0]
    char *v5;  // [bp-0xd8]
    unsigned int v6;  // [bp-0xd0]
    unsigned int v7;  // [bp-0xcc]
    unsigned long v8;  // [bp-0xc8]
    uint128_t v9;  // [bp-0xc0]
    uint128_t v10;  // [bp-0xb0]
    uint128_t v11;  // [bp-0xa0]
    uint128_t v12;  // [bp-0x90]
    uint128_t v13;  // [bp-0x80]
    uint128_t v14;  // [bp-0x70]
    uint128_t v15;  // [bp-0x60]
    uint128_t v16;  // [bp-0x50]
    char v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long long v19;  // [bp-0x30]
    unsigned long long v20;  // [bp-0x28]
    unsigned long long v21;  // [bp-0x20]
    unsigned long long v22;  // [bp-0x18]
    unsigned long long v23;  // [bp-0x10]
    unsigned long long v24;  // [bp-0x8]
    char v25;  // [bp+0x0]

    v0 = &v25;
    v18 = a1;
    v19 = a2;
    v20 = a3;
    v21 = a4;
    v22 = a5;
    v23 = a6;
    v24 = a7;
    v9 = v26;
    v10 = v27;
    v11 = v28;
    v12 = v29;
    v13 = v30;
    v14 = v31;
    v15 = v32;
    v16 = v33;
    v8 = *((long long *)&__stack_chk_guard);
    v3 = &v25;
    v4 = &v25;
    v5 = &v17;
    v6 = 4294967240;
    v7 = 4294967168;
    v1 = 0;
    for (i = 0; i < a0; i += 1)
    {
        v34 = v6;
        ptr = v3;
        if ((unsigned int)v34 >= 0)
        {
            v3 = (char *)&ptr[2] + 3 & 18446744073709551608;
        }
        else
        {
            v6 = (unsigned int)v34 + 8;
            if (v6 > 0)
                v3 = (char *)&ptr[2] + 3 & 18446744073709551608;
            else
                ptr = &v4[v34 * 0x100000000 >> 63 & 0xffffffff00000000 | v34 & 4294967295];
        }
        v1 += *(ptr);
    }
    if (v8 == *((long long *)&__stack_chk_guard))
        return v1;
    __stack_chk_fail(); /* do not return */
}


// Function: call_varargs_param at 0x401558
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x401580
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1, a0) + 10;
}


// Function: callback_func at 0x4015a8
unsigned int callback_func(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_func_ptr_param at 0x4015c0
int call_func_ptr_param()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x4015e0
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
    if (ptr && *(ptr))
    {
        *(ptr)->field_0 = a1;
        *(ptr) = NULL;
        return 1;
    }
    return 4294967295;
}


// Function: call_double_ptr at 0x401634
extern char __stack_chk_guard;

unsigned long long call_double_ptr()
{
    unsigned int v6;  // w0
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    char *v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = 10;
    v3 = &v1;
    v2 = param_double_ptr(&v3, 20);
    if (v3)
        v6 = 0;
    else
        v6 = 1;
    if (v4 == *((long long *)&__stack_chk_guard))
        return (v6 & 255) + v1 & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: param_complex_cast at 0x4016bc
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
    unsigned int v0[2];  // [bp-0x20]
    unsigned int v1[2];  // [bp-0x18]
    unsigned int v2[2];  // [bp-0x10]
    unsigned int v3[2];  // [bp-0x8]

    if (!a1)
    {
        *((unsigned int **)&v1[0]) = a0;
        *((unsigned int *[2])&v2[0]) = v1;
        *((unsigned int *[2])&v3[0]) = v2;
        return v3[0];
    }
    else if (a1 == 1)
    {
        *((unsigned int **)&v0[0]) = a0;
        return v0[0] + v0[1];
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_complex_cast at 0x401730
extern char __stack_chk_guard;

long long call_complex_cast()
{
    unsigned int v6;  // w0
    char *v0;  // [bp-0x30]
    unsigned int v1[1];  // [bp-0x14]
    unsigned int v2[1];  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    *((unsigned int [1])v1) = 305419896;
    *((unsigned int [1])v2) = 100;
    v3 = 200;
    param_complex_cast(&v2, 1);
    v6 = param_complex_cast(&v1, 0);
    if (v4 == *((long long *)&__stack_chk_guard))
        return v6;
    __stack_chk_fail(); /* do not return */
}


// Function: param_struct_byval at 0x4017b0
int param_struct_byval(unsigned int *a0)
{
    return *(a0) + a0[15];
}


// Function: call_struct_byval at 0x4017cc
extern char __stack_chk_guard;

long long call_struct_byval()
{
    unsigned int v12;  // w0
    char *v0;  // [bp-0xa0]
    char v1;  // [bp-0x90]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x60]
    unsigned int i;  // [bp-0x4c]
    unsigned long v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    char v9;  // [bp-0x18]
    unsigned long v10;  // [bp-0x8]
    char v11;  // [bp+0x0]

    v0 = &v11;
    v10 = *((long long *)&__stack_chk_guard);
    for (i = 0; i <= 15; i += 1)
    {
        *((unsigned int *)((char *)&v6 + (__ROL__(i, 2) & 18446744073709551612))) = i;
    }
    memcpy(&v1, &v6, 16);
    memcpy(&v2, &v7, 16);
    memcpy(&v3, &v8, 16);
    memcpy(&v4, &v9, 16);
    v12 = param_struct_byval(&v1);
    if (v10 == *((long long *)&__stack_chk_guard))
        return v12;
    __stack_chk_fail(); /* do not return */
}


// Function: param_order_dep at 0x40186c
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_order_dep at 0x40188c
int call_order_dep()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = 0;
    v1 += 1;
    v1 += 1;
    return param_order_dep(v1, v1);
}


// Function: test_parameter_passing at 0x4018c4
extern char g_4021a0;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v6;  // x1
    unsigned int v7;  // w0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4021a0);
    printf("PARAM-L1-01: %d\n", call_by_value_int() & 4294967295);
    printf("PARAM-L1-02: %d\n", call_by_value_ptr() & 4294967295);
    printf("PARAM-L2-01: %d\n", call_array_decay() & 4294967295);
    printf("PARAM-L2-02: %d\n", call_string_param() & 4294967295);
    v6 = call_ptr_array() & 4294967295;
    v7 = call_varargs_param(printf("PARAM-L2-03: %d\n", v6), v6, a2, a3, a4, a5, a6, a7);
    printf("PARAM-L2-04: %d\n", v7);
    printf("PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
    printf("PARAM-L3-02: %d\n", call_double_ptr() & 4294967295);
    printf("PARAM-L3-03: %d\n", call_complex_cast() & 4294967295);
    printf("PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
    return printf("PARAM-L3-05: %d\n", call_order_dep() & 4294967295);
}


// Function: ret_basic_type at 0x4019c0
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x4019d8
int call_ret_basic()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = 21;
    v2 = ret_basic_type(v1);
    return v2;
}


// Function: ret_pointer at 0x401a00
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x401a18
extern char __stack_chk_guard;

long long call_ret_pointer()
{
    char *v0;  // [bp-0x30]
    unsigned int *v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v2 = 85899345930;
    v3 = 30;
    v1 = ret_pointer(&v2);
    if (v4 == *((long long *)&__stack_chk_guard))
        return *(v1);
    __stack_chk_fail(); /* do not return */
}


// Function: ret_small_struct at 0x401a94
unsigned long long ret_small_struct(unsigned int a0, unsigned long a1)
{
    unsigned int v0;  // [bp-0x8]

    v0 = a0;
    return *((long long *)&v0);
}


// Function: call_ret_small_struct at 0x401abc
int call_ret_small_struct()
{
    char *v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = ret_small_struct(3, 4);
    return (int)v1 + *((int *)((char *)&v1 + 4));
}


// Function: ret_large_struct at 0x401ae8
extern char __stack_chk_guard;

unsigned long long ret_large_struct(unsigned int a0)
{
    int v8;  // q1
    uint128_t ptr[4];  // x8
    int v10;  // q1
    char *v0;  // [bp-0x70]
    unsigned int i;  // [bp-0x4c]
    unsigned long v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]
    unsigned long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v6 = *((long long *)&__stack_chk_guard);
    for (i = 0; i <= 15; i += 1)
    {
        *((unsigned int *)((char *)&v2 + (__ROL__(i, 2) & 18446744073709551612))) = a0 + i;
    }
    v8 = *((int128_t *)&v3);
    ptr[0] = *((int128_t *)&v2);
    *((void*)&ptr[1]) = v8;
    v10 = *((int128_t *)&v5);
    ptr[2] = *((int128_t *)&v4);
    *((void*)&ptr[3]) = v10;
    if (v6 == *((long long *)&__stack_chk_guard))
        return &__stack_chk_guard;
    __stack_chk_fail(); /* do not return */
}


// Function: call_ret_large_struct at 0x401b88
extern char __stack_chk_guard;

unsigned long long call_ret_large_struct()
{
    char *v0;  // [bp-0x60]
    char v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    ret_large_struct(100);
    if (v3 == *((long long *)&__stack_chk_guard))
        return *((int *)&v1) + v2 & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: func_a at 0x401bf0
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x401c08
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: ret_func_ptr at 0x401c20
long long ret_func_ptr(unsigned int a0)
{
    if (!a0)
        return func_a;
    return func_b;
}


// Function: call_ret_func_ptr at 0x401c50
long long call_ret_func_ptr()
{
    unsigned long long v3;  // x0
    char *v0;  // [bp-0x20]
    unsigned long long *v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = ret_func_ptr(1);
    v3 = v1(5, v1);
    return v1(5, v1);
}


// Function: ret_opaque_handle at 0x401c78
extern char handle2.0;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &handle2.0;
    return "d";
}


// Function: call_ret_opaque at 0x401ca8
int call_ret_opaque()
{
    char *v0;  // [bp-0x20]
    unsigned int *v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = ret_opaque_handle(0);
    return *(v1);
}


// Function: ret_complex_expr at 0x401ccc
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a0 <= a1)
        return a2 + 10;
    return (a2 * 2 | a2 >> 31) & 4294967294;
}


// Function: call_ret_complex_expr at 0x401d08
int call_ret_complex_expr()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = ret_complex_expr(5, 3, 10);
    v2 = ret_complex_expr(3, 5, 10);
    return v1 + v2;
}


// Function: ret_multi_branch at 0x401d4c
unsigned long long ret_multi_branch(unsigned int a0)
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


// Function: call_ret_multi_branch at 0x401dac
unsigned int call_ret_multi_branch()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = 0;
    v1 += (unsigned int)ret_multi_branch(0);
    v1 += (unsigned int)ret_multi_branch(1);
    v1 += (unsigned int)ret_multi_branch(2);
    return v1;
}


// Function: ret_void at 0x401e0c
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = ((a0 * 2 | a0 >> 31) & 4294967294) + a0;
    return ptr;
}


// Function: call_ret_void at 0x401e3c
extern char __stack_chk_guard;

long long call_ret_void()
{
    char *v0;  // [bp-0x20]
    unsigned int v1[1];  // [bp-0xc]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    ret_void(7, &v1);
    if (v2 == *((long long *)&__stack_chk_guard))
        return *(v1);
    __stack_chk_fail(); /* do not return */
}


// Function: test_return_values at 0x401e9c
extern char g_4022e0;
extern char g_402300;
extern char g_402320;
extern char g_402340;
extern char g_402360;
extern char g_402380;
extern char g_4023a0;
extern char g_4023c0;
extern char g_4023e0;
extern char g_402400;

int test_return_values()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4022e0);
    printf(&g_402300, call_ret_basic() & 4294967295);
    printf(&g_402320, call_ret_pointer() & 4294967295);
    printf(&g_402340, call_ret_small_struct() & 4294967295);
    printf(&g_402360, call_ret_large_struct() & 4294967295);
    printf(&g_402380, call_ret_func_ptr() & 4294967295);
    printf(&g_4023a0, call_ret_opaque() & 4294967295);
    printf(&g_4023c0, call_ret_complex_expr() & 4294967295);
    printf(&g_4023e0, call_ret_multi_branch() & 4294967295);
    return printf(&g_402400, call_ret_void() & 4294967295);
}


// Function: main at 0x401f70
unsigned int main(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
    test_return_values();
    return 0;
}


// Function: _fini at 0x401f90
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

