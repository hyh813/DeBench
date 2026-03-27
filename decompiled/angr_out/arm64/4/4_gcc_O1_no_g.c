// Angr Decompilation of 4_gcc_O1_no_g
// Platform: AARCH64

// Function: _init at 0x400738
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400750
extern unsigned long long g_412f80;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_412f80;
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
extern unsigned long long g_412fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fe0)
        return 0;
    v0 = __gmon_start__(g_412fe0);
    return __gmon_start__(g_412fe0);
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
extern unsigned long long g_412ff8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_412ff8)
    {
        goto g_412ff8;
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
extern unsigned long long g_412fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_412fd8)
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


// Function: callback_func at 0x400914
unsigned int callback_func(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: func_a at 0x40091c
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x400924
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: cdecl_func at 0x40092c
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_cdecl at 0x400934
unsigned long long call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x40093c
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: call_stdcall at 0x400944
unsigned long long call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x40094c
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: call_fastcall at 0x400958
unsigned long long call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x400960
unsigned long long call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x400968
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x40097c
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x400984
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x400994
unsigned long long call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x40099c
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x4009b4
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x4009bc
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x4009d0
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x4009d8
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x4009e8
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x4009f0
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x4009f8
extern char __stack_chk_guard;

unsigned long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned int v16;  // w1
    unsigned long long v17;  // x0
    unsigned long v18;  // x3
    unsigned int *ptr;  // x2
    char *v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x68]
    char *v2;  // [bp-0x60]
    char *v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x50]
    unsigned int result;  // [bp-0x4c]
    unsigned long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v14;  // [bp-0x8]
    char v15;  // [bp+0x0]

    v0 = &v15;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    v11 = a4;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    v6 = *((long long *)&__stack_chk_guard);
    v16 = 0;
    v1 = &v15;
    v2 = &v15;
    v3 = &v7;
    v4 = 4294967240;
    result = 0;
    if (a0 > 0)
    {
        v17 = 0;
        do
        {
            v18 = v4;
            ptr = v1;
            if (((char)(v18 >> 31) & 1))
            {
                v4 = (unsigned int)v18 + 8;
                if (v4 > 0)
                    v1 = (char *)&ptr[2] + 3 & 18446744073709551608;
                else
                    ptr = &v2[v18 & 4294967295];
            }
            else
            {
                v1 = (char *)&ptr[2] + 3 & 18446744073709551608;
            }
        } while ((v17 += (unsigned long long)*(ptr), v16 += 1, a0 != v16));
    }
    else
    {
        v17 = 0;
    }
    if (v6 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v17;
}


// Function: func_no_args at 0x400ae8
unsigned long long func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x400af0
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400b10
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
    unsigned long long v4;  // d8
    unsigned long long v5;  // d9
    unsigned int v6;  // w0
    unsigned int v7;  // s0
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = v4;
    v2 = v5;
    v6 = 0;
    if (a1)
        v6 = strlen(a1);
    return v6 + a0 + v7 + a2;
}


// Function: func_struct_byval at 0x400b64
long long func_struct_byval(unsigned long long *a0)
{
    unsigned long long v0;  // x0
    unsigned long long *i;  // x1
    unsigned long long v2;  // x0
    unsigned long long *ptr;  // x1
    unsigned long long *v4;  // x1
    unsigned long long v5;  // x0

    v0 = 0;
    i = a0;
    do
    {
        v2 = v0;
        v4 = i + 1;
        v5 = v2 + *(i);
        i = v4;
        v0 = v5;
    } while (i != a0 + 16);
    return v2 + *(ptr);
}


// Function: func_struct_byptr at 0x400b84
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return a0[1] * *(a0);
}


// Function: test_calling_conventions at 0x400ba0
extern char $d;
extern char __stack_chk_guard;
extern char g_401638;
extern char g_401660;
extern char g_401688;
extern char g_4016b8;
extern char g_4016e0;
extern char g_401710;

unsigned long long test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long idx;  // x0
    char ptr[8];  // x0
    unsigned long long v23;  // x2
    char v24[8];  // x0
    char *v0;  // [bp-0x120]
    unsigned long v25;  // [bp-0x110]
    char v1;  // [bp-0x108]
    char v2;  // [bp-0xf8]
    char v3;  // [bp-0xe8]
    char v4;  // [bp-0xd8]
    char v5;  // [bp-0xc8]
    char v6;  // [bp-0xb8]
    char v7;  // [bp-0xa8]
    char v8;  // [bp-0x98]
    char v9;  // [bp-0x88]
    char v10;  // [bp-0x78]
    char v11;  // [bp-0x68]
    char v12;  // [bp-0x58]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    char v15;  // [bp-0x28]
    char v16;  // [bp-0x18]
    unsigned long v17;  // [bp-0x8]
    char v18;  // [bp+0x0]

    v0 = &v18;
    v17 = *((long long *)&__stack_chk_guard);
    puts(&$d);
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
    __printf_chk(1, &g_401638, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
    __printf_chk(1, &g_401660, 42);
    __printf_chk(1, &g_401688, 36);
    __printf_chk(1, &g_4016b8, func_mixed_args(10, "test", 100) & 4294967295);
    idx = 1;
    do
    {
        (&v25)[idx] = idx;
        idx += 1;
    } while (idx != 17);
    ptr = &v9;
    memcpy(&v9, &v1, 16);
    memcpy(&v10, &v2, 16);
    memcpy(&v11, &v3, 16);
    memcpy(&v12, &v4, 16);
    memcpy(&v13, &v5, 16);
    memcpy(&v14, &v6, 16);
    memcpy(&v15, &v7, 16);
    memcpy(&v16, &v8, 16);
    v23 = 0;
    do
    {
        v24 = ptr + 1;
        v23 += *(ptr);
        ptr = v24;
    } while (&v17 != ptr);
    __printf_chk(1, &g_4016e0, v23);
    __printf_chk(1, &g_401710, 50);
    if (v17 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: param_by_value_int at 0x400dc0
unsigned int param_by_value_int(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400dc8
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x400dd0
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
    return 1;
}


// Function: call_by_value_ptr at 0x400de4
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x400dec
unsigned long long param_array_decay()
{
    return 8;
}


// Function: call_array_decay at 0x400df4
unsigned long long call_array_decay()
{
    return 8;
}


// Function: param_string at 0x400dfc
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x400e0c
unsigned long long call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x400e14
unsigned long long param_ptr_array(unsigned long a0, unsigned int i)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v1 += *((char *)*((long long *)(a0 + v0 * 8)));
        v0 += 1;
    } while ((unsigned int)v0 < i);
    return v1;
}


// Function: call_ptr_array at 0x400e4c
extern unsigned long long $d;
extern char __stack_chk_guard;
extern unsigned long long g_413018;
extern unsigned long long g_413020;

unsigned long long call_ptr_array()
{
    unsigned long long v6;  // x0
    char *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = $d;
    v2 = g_413018;
    v3 = g_413020;
    v6 = param_ptr_array(&v1, 3);
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: param_varargs at 0x400eb4
extern char __stack_chk_guard;

unsigned long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned int v16;  // w1
    unsigned long long v17;  // x0
    unsigned long v18;  // x3
    unsigned int *ptr;  // x2
    char *v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x68]
    char *v2;  // [bp-0x60]
    char *v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x50]
    unsigned int result;  // [bp-0x4c]
    unsigned long v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    unsigned long long v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v14;  // [bp-0x8]
    char v15;  // [bp+0x0]

    v0 = &v15;
    v8 = a1;
    v9 = a2;
    v10 = a3;
    v11 = a4;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    v6 = *((long long *)&__stack_chk_guard);
    v16 = 0;
    v1 = &v15;
    v2 = &v15;
    v3 = &v7;
    v4 = 4294967240;
    result = 0;
    if (a0 > 0)
    {
        v17 = 0;
        do
        {
            v18 = v4;
            ptr = v1;
            if (((char)(v18 >> 31) & 1))
            {
                v4 = (unsigned int)v18 + 8;
                if (v4 > 0)
                    v1 = (char *)&ptr[2] + 3 & 18446744073709551608;
                else
                    ptr = &v2[v18 & 4294967295];
            }
            else
            {
                v1 = (char *)&ptr[2] + 3 & 18446744073709551608;
            }
        } while ((v17 += (unsigned long long)*(ptr), v16 += 1, a0 != v16));
    }
    else
    {
        v17 = 0;
    }
    if (v6 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v17;
}


// Function: call_varargs_param at 0x400fa4
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400fcc
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400fec
int call_func_ptr_param()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x40100c
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


// Function: call_double_ptr at 0x401038
extern char __stack_chk_guard;

long long call_double_ptr()
{
    unsigned int v5;  // w0
    unsigned long v6;  // x0
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    v1 = 10;
    v2 = &v1;
    param_double_ptr(&v2, 20);
    v5 = v1;
    if (v2)
        v6 = v5;
    else
        v6 = v5 + 1;
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: param_complex_cast at 0x4010a8
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
    if (!a1)
    {
        return *(a0);
    }
    else if (a1 == 1)
    {
        return *(a0) + a0[1];
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_complex_cast at 0x4010d4
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x4010e0
int param_struct_byval(unsigned int *a0)
{
    return *(a0) + a0[15];
}


// Function: call_struct_byval at 0x4010f0
extern char __stack_chk_guard;

long long call_struct_byval()
{
    unsigned int *cur;  // x1
    unsigned int i;  // w0
    char *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    cur = &v1;
    i = 0;
    do
    {
        *(cur) = i;
        cur += 1;
        i += 1;
    } while (i != 16);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v2 + v1;
}


// Function: param_order_dep at 0x401158
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_order_dep at 0x401160
unsigned long long call_order_dep()
{
    return 4;
}


// Function: test_parameter_passing at 0x401168
extern char g_401740;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v3;  // x2
    unsigned int v4;  // w0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401740);
    __printf_chk(1, "PARAM-L1-01: %d\n", 15);
    __printf_chk(1, "PARAM-L1-02: %d\n", call_by_value_ptr() & 4294967295);
    __printf_chk(1, "PARAM-L2-01: %d\n", 8);
    __printf_chk(1, "PARAM-L2-02: %d\n", 173);
    v3 = call_ptr_array() & 4294967295;
    v4 = call_varargs_param(__printf_chk(1, "PARAM-L2-03: %d\n", v3), "PARAM-L2-03: %d\n", v3, a3, a4, a5, a6, a7);
    __printf_chk(1, "PARAM-L2-04: %d\n", v4);
    __printf_chk(1, "PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
    __printf_chk(1, "PARAM-L3-02: %d\n", call_double_ptr() & 4294967295);
    __printf_chk(1, "PARAM-L3-03: %d\n", call_complex_cast() & 4294967295);
    __printf_chk(1, "PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
    return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x40127c
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x401284
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x40128c
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x401294
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x40129c
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: call_ret_small_struct at 0x4012a8
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x4012b0
extern char __stack_chk_guard;

unsigned long long ret_large_struct(unsigned int a0)
{
    unsigned long long index;  // x1
    int v8;  // q1
    uint128_t ptr[4];  // x8
    int v10;  // q1
    char *v0;  // [bp-0x60]
    unsigned int v11;  // [bp-0x4c]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    index = 1;
    do
    {
        (&v11)[index] = a0 - 1 + (unsigned int)index;
        index += 1;
    } while (index != 17);
    v8 = *((int128_t *)&v2);
    ptr[0] = *((int128_t *)&v1);
    *((void*)&ptr[1]) = v8;
    v10 = *((int128_t *)&v4);
    ptr[2] = *((int128_t *)&v3);
    *((void*)&ptr[3]) = v10;
    if (v5 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: call_ret_large_struct at 0x40132c
extern char __stack_chk_guard;

long long call_ret_large_struct()
{
    char *v0;  // [bp-0x60]
    char v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    ret_large_struct(100);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return *((int *)&v1) + v2;
}


// Function: ret_func_ptr at 0x401388
long long ret_func_ptr(unsigned int a0)
{
    if (!a0)
        return func_a;
    return func_b;
}


// Function: call_ret_func_ptr at 0x4013a4
int call_ret_func_ptr()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return func_b(5);
}


// Function: ret_opaque_handle at 0x4013bc
extern char handle2.0;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &handle2.0;
    return "d";
}


// Function: call_ret_opaque at 0x4013e0
extern unsigned int handle1.1;

int call_ret_opaque()
{
    return handle1.1;
}


// Function: ret_complex_expr at 0x4013ec
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a0 > a1)
        return __ROL__(a2, 1) & 4294967294;
    return a2 + 10;
}


// Function: call_ret_complex_expr at 0x401400
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x401408
unsigned long long ret_multi_branch(unsigned int a0)
{
    if (a0 == 1)
    {
        return 20;
    }
    else if (a0 == 2)
    {
        return 30;
    }
    else if (!a0)
    {
        return 10;
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_ret_multi_branch at 0x401434
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x40143c
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: call_ret_void at 0x401448
unsigned long long call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x401450
extern char g_401870;
extern char g_401890;
extern char g_4018b0;
extern char g_4018d0;
extern char g_4018f0;
extern char g_401910;
extern char g_401930;
extern char g_401950;
extern char g_401970;
extern char g_401990;
extern unsigned int handle1.1;

int test_return_values()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401870);
    __printf_chk(1, &g_401890, 42);
    __printf_chk(1, &g_4018b0, call_ret_pointer() & 4294967295);
    __printf_chk(1, &g_4018d0, call_ret_small_struct() & 4294967295);
    __printf_chk(1, &g_4018f0, call_ret_large_struct() & 4294967295);
    __printf_chk(1, &g_401910, call_ret_func_ptr() & 4294967295);
    __printf_chk(1, &g_401930, handle1.1);
    __printf_chk(1, &g_401950, 40);
    __printf_chk(1, &g_401970, 60);
    return __printf_chk(1, &g_401990, 21);
}


// Function: main at 0x401534
unsigned int main(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_parameter_passing(test_calling_conventions(a0, a1, a2, a3, a4, a5, a6, a7), a1, a2, a3, a4, a5, a6, a7);
    test_return_values();
    return 0;
}


// Function: _fini at 0x401554
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

