// Angr Decompilation of 4_gcc_O2_g
// Platform: AARCH64

// Function: _init at 0x4006f0
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400710
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


// Function: sub_400724 at 0x400724
long long sub_400724()
{
    char *v0;  // x0
    unsigned long long len;  // x0

    len = strlen(v0);
    return strlen(v0);
}


// Function: main at 0x4007c0
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_return_values(test_parameter_passing(test_calling_conventions()));
    return 0;
}


// Function: sub_4007e0 at 0x4007e0
void sub_4007e0(unsigned long a0)
{
    _start(); /* do not return */
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


// Function: sub_400914 at 0x400914
void sub_400914(unsigned long a0)
{
    func_a();
    return;
}


// Function: func_a at 0x400920
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: sub_400928 at 0x400928
void sub_400928(unsigned long a0)
{
    func_b();
    return;
}


// Function: func_b at 0x400930
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400938 at 0x400938
void sub_400938(unsigned long a0, unsigned long a1)
{
    cdecl_func();
    return;
}


// Function: cdecl_func at 0x400940
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_400948 at 0x400948
void sub_400948()
{
    call_cdecl();
    return;
}


// Function: call_cdecl at 0x400950
unsigned long long call_cdecl()
{
    return 15;
}


// Function: sub_400958 at 0x400958
void sub_400958(unsigned long a0, unsigned long a1)
{
    stdcall_func();
    return;
}


// Function: stdcall_func at 0x400960
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: sub_400968 at 0x400968
void sub_400968()
{
    call_stdcall();
    return;
}


// Function: call_stdcall at 0x400970
unsigned long long call_stdcall()
{
    return 50;
}


// Function: sub_400978 at 0x400978
void sub_400978(unsigned long a0, unsigned long a1, unsigned long a2)
{
    fastcall_func();
    return;
}


// Function: fastcall_func at 0x400980
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: sub_40098c at 0x40098c
void sub_40098c()
{
    call_fastcall();
    return;
}


// Function: call_fastcall at 0x400990
unsigned long long call_fastcall()
{
    return 6;
}


// Function: sub_400998 at 0x400998
void sub_400998()
{
    call_thiscall();
    return;
}


// Function: call_thiscall at 0x4009a0
unsigned long long call_thiscall()
{
    return 15;
}


// Function: sub_4009a8 at 0x4009a8
void sub_4009a8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    arm_aapcs_func();
    return;
}


// Function: arm_aapcs_func at 0x4009b0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x4009c4
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: sub_4009cc at 0x4009cc
void sub_4009cc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    mips_func();
    return;
}


// Function: mips_func at 0x4009d0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x4009e0
unsigned long long call_mips()
{
    return 100;
}


// Function: sub_4009e8 at 0x4009e8
void sub_4009e8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    amd64_sysv_func();
    return;
}


// Function: amd64_sysv_func at 0x4009f0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_400a08 at 0x400a08
void sub_400a08()
{
    call_amd64_sysv();
    return;
}


// Function: call_amd64_sysv at 0x400a10
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: sub_400a18 at 0x400a18
void sub_400a18(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    ms_x64_func();
    return;
}


// Function: ms_x64_func at 0x400a20
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x400a34
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: sub_400a3c at 0x400a3c
void sub_400a3c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    vectorcall_func();
    return;
}


// Function: vectorcall_func at 0x400a40
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x400a50
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: sub_400a58 at 0x400a58
void sub_400a58()
{
    mixed_conventions_test();
    return;
}


// Function: mixed_conventions_test at 0x400a60
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: sub_400a68 at 0x400a68
void sub_400a68(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    varargs_func();
    return;
}


// Function: varargs_func at 0x400a70
extern char __stack_chk_guard;

unsigned long long varargs_func(unsigned int i, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v16;  // x3
    char v17[4];  // x1
    char v26[4];  // x2
    unsigned long long v18;  // x0
    unsigned int v19;  // w1
    char v20[4];  // x2
    unsigned int v21;  // w5
    char v23[4];  // x2
    char ptr[4];  // x4
    char *v0;  // [bp-0x80]
    char *v1;  // [bp-0x68]
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
    v16 = 4294967240;
    v14 = a7;
    v6 = *((long long *)&__stack_chk_guard);
    v17 = &v15;
    v1 = &v15;
    v2 = &v15;
    v3 = &v7;
    v4 = 4294967240;
    result = 0;
    if (i > 0)
    {
        v18 = 0;
        v19 = 0;
        do
        {
            v20 = v17;
            if (!((char)(v16 >> 31) & 1))
            {
LABEL_400ad4:
                v23 = v20 + 2;
                ptr = v20;
                continue;
            }
            else
            {
                v21 = (unsigned int)v16 + 8;
                if (v21 > 0)
                {
                    v16 = v21;
                    goto LABEL_400ad4;
                }
                else
                {
                    v16 = v21;
                    v23 = v20;
                    ptr = &(&v15)[v16 & 4294967295];
                }
            }
            v26 = v23;
            v19 += 1;
            v18 += (unsigned long long)*(ptr);
            v17 = v26;
        } while (i != v19);
    }
    else
    {
        v18 = 0;
    }
    if (v6 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v18;
}


// Function: func_no_args at 0x400b40
unsigned long long func_no_args()
{
    return 42;
}


// Function: sub_400b48 at 0x400b48
void sub_400b48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    func_many_args();
    return;
}


// Function: func_many_args at 0x400b50
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400b70
int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
    unsigned long v4;  // x19
    unsigned long long v5;  // d8
    unsigned long long v6;  // d9
    unsigned int v7;  // s0
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v4 = a0;
    v1 = v5;
    v2 = v6;
    if (a1)
        v4 += strlen(a1);
    return (unsigned int)v4 + v7 + a2;
}


// Function: func_struct_byval at 0x400bc0
int func_struct_byval(unsigned long long *a0)
{
    unsigned long long v0;  // x2
    unsigned long long *ptr;  // x1
    unsigned long long *v2;  // x1

    v0 = 0;
    ptr = a0;
    do
    {
        v2 = ptr + 1;
        v0 += *(ptr);
        ptr = v2;
    } while (ptr != a0 + 16);
    return v0;
}


// Function: sub_400be8 at 0x400be8
long long sub_400be8(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = func_struct_byptr();
    return func_struct_byptr();
}


// Function: func_struct_byptr at 0x400bf0
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return a0[1] * *(a0);
}


// Function: sub_400c08 at 0x400c08
void sub_400c08()
{
    test_calling_conventions();
    return;
}


// Function: test_calling_conventions at 0x400c10
extern char $d;
extern char __stack_chk_guard;
extern char g_401678;
extern char g_4016a0;
extern char g_4016c8;
extern char g_4016f0;
extern char g_401718;
extern char g_401748;

long long test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long idx;  // x0
    char ptr[8];  // x0
    unsigned long long v22;  // x2
    char v23[8];  // x0
    unsigned long long v24;  // x0
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
    __printf_chk(1, &g_401678, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
    __printf_chk(1, &g_4016a0, 42);
    __printf_chk(1, &g_4016c8, 36);
    __printf_chk(1, &g_4016f0, 117);
    idx = 1;
    do
    {
        (&v25)[idx] = idx;
        idx += 1;
    } while (idx != 17);
    memcpy(&v9, &v1, 16);
    memcpy(&v10, &v2, 16);
    ptr = &v9;
    v22 = 0;
    memcpy(&v11, &v3, 16);
    memcpy(&v12, &v4, 16);
    memcpy(&v13, &v5, 16);
    memcpy(&v14, &v6, 16);
    memcpy(&v15, &v7, 16);
    memcpy(&v16, &v8, 16);
    do
    {
        v23 = ptr + 1;
        v22 += *(ptr);
        ptr = v23;
    } while (&v17 != ptr);
    __printf_chk(1, &g_401718, v22);
    if (v17 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v24 = __printf_chk(1, &g_401748, 50);
    return __printf_chk(1, &g_401748, 50);
}


// Function: sub_400e18 at 0x400e18
void sub_400e18(unsigned long a0)
{
    param_by_value_int();
    return;
}


// Function: param_by_value_int at 0x400e20
unsigned int param_by_value_int(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400e28 at 0x400e28
void sub_400e28()
{
    call_by_value_int();
    return;
}


// Function: call_by_value_int at 0x400e30
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: sub_400e38 at 0x400e38
void sub_400e38(unsigned long a0)
{
    param_by_value_ptr();
    return;
}


// Function: param_by_value_ptr at 0x400e40
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
    return 1;
}


// Function: sub_400e58 at 0x400e58
void sub_400e58()
{
    call_by_value_ptr();
    return;
}


// Function: call_by_value_ptr at 0x400e60
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: sub_400e68 at 0x400e68
void sub_400e68()
{
    param_array_decay();
    return;
}


// Function: param_array_decay at 0x400e70
unsigned long long param_array_decay()
{
    return 8;
}


// Function: sub_400e78 at 0x400e78
void sub_400e78()
{
    call_array_decay();
    return;
}


// Function: call_array_decay at 0x400e80
unsigned long long call_array_decay()
{
    return 8;
}


// Function: sub_400e88 at 0x400e88
void sub_400e88(unsigned long a0)
{
    param_string();
    return;
}


// Function: param_string at 0x400e90
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x400ea0
unsigned long long call_string_param()
{
    return 173;
}


// Function: sub_400ea8 at 0x400ea8
long long sub_400ea8(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // x0

    v0 = param_ptr_array();
    return param_ptr_array();
}


// Function: param_ptr_array at 0x400eb0
unsigned long long param_ptr_array(unsigned long a0, unsigned int i)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0
    unsigned long long v2;  // x0
    unsigned long long v3;  // x2
    unsigned long v4;  // x3
    unsigned long long v5;  // x0

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v2 = v1;
        v3 = v0 + 1;
        v5 = v2 + *((char *)*((long long *)(a0 + v0 * 8)));
        v0 = v3;
        v1 = v5;
    } while ((unsigned int)v0 < i);
    return v2 + v4;
}


// Function: sub_400eec at 0x400eec
void sub_400eec()
{
    call_ptr_array();
    return;
}


// Function: call_ptr_array at 0x400ef0
unsigned long long call_ptr_array()
{
    return 300;
}


// Function: sub_400ef8 at 0x400ef8
void sub_400ef8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    param_varargs();
    return;
}


// Function: param_varargs at 0x400f00
extern char __stack_chk_guard;

unsigned long long param_varargs(unsigned int i, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v16;  // x3
    char v17[4];  // x1
    char v26[4];  // x2
    unsigned long long v18;  // x0
    unsigned int v19;  // w1
    char v20[4];  // x2
    unsigned int v21;  // w5
    char v23[4];  // x2
    char ptr[4];  // x4
    char *v0;  // [bp-0x80]
    char *v1;  // [bp-0x68]
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
    v16 = 4294967240;
    v14 = a7;
    v6 = *((long long *)&__stack_chk_guard);
    v17 = &v15;
    v1 = &v15;
    v2 = &v15;
    v3 = &v7;
    v4 = 4294967240;
    result = 0;
    if (i > 0)
    {
        v18 = 0;
        v19 = 0;
        do
        {
            v20 = v17;
            if (!((char)(v16 >> 31) & 1))
            {
LABEL_400f64:
                v23 = v20 + 2;
                ptr = v20;
                continue;
            }
            else
            {
                v21 = (unsigned int)v16 + 8;
                if (v21 > 0)
                {
                    v16 = v21;
                    goto LABEL_400f64;
                }
                else
                {
                    v16 = v21;
                    v23 = v20;
                    ptr = &(&v15)[v16 & 4294967295];
                }
            }
            v26 = v23;
            v19 += 1;
            v18 += (unsigned long long)*(ptr);
            v17 = v26;
        } while (i != v19);
    }
    else
    {
        v18 = 0;
    }
    if (v6 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v18;
}


// Function: call_varargs_param at 0x400fd0
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // x0

    v0 = param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: sub_400fe8 at 0x400fe8
void sub_400fe8(unsigned long a0, unsigned long a1)
{
    param_func_ptr();
    return;
}


// Function: param_func_ptr at 0x400ff0
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x401010
unsigned long long call_func_ptr_param()
{
    return 20;
}


// Function: sub_401018 at 0x401018
long long sub_401018(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = param_double_ptr();
    return param_double_ptr();
}


// Function: param_double_ptr at 0x401020
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


// Function: sub_401048 at 0x401048
void sub_401048()
{
    call_double_ptr();
    return;
}


// Function: call_double_ptr at 0x401050
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: sub_401058 at 0x401058
long long sub_401058(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // x0

    v0 = param_complex_cast();
    return param_complex_cast();
}


// Function: param_complex_cast at 0x401060
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


// Function: sub_401088 at 0x401088
void sub_401088()
{
    call_complex_cast();
    return;
}


// Function: call_complex_cast at 0x401090
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: sub_40109c at 0x40109c
void sub_40109c(unsigned long a0)
{
    param_struct_byval();
    return;
}


// Function: param_struct_byval at 0x4010a0
int param_struct_byval(unsigned int *a0)
{
    return *(a0) + a0[15];
}


// Function: call_struct_byval at 0x4010b0
extern char __stack_chk_guard;

long long call_struct_byval()
{
    unsigned int i;  // w0
    unsigned int *cur;  // x1
    char *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    i = 0;
    cur = &v1;
    v3 = *((long long *)&__stack_chk_guard);
    do
    {
        *(cur) = i;
        cur += 1;
        i += 1;
    } while (i != 16);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v1 + v2;
}


// Function: sub_40111c at 0x40111c
void sub_40111c(unsigned long a0, unsigned long a1)
{
    param_order_dep();
    return;
}


// Function: param_order_dep at 0x401120
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401128 at 0x401128
void sub_401128()
{
    call_order_dep();
    return;
}


// Function: call_order_dep at 0x401130
unsigned long long call_order_dep()
{
    return 4;
}


// Function: sub_401138 at 0x401138
void sub_401138()
{
    test_parameter_passing();
    return;
}


// Function: test_parameter_passing at 0x401140
extern char __stack_chk_guard;
extern char g_401778;

long long test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned int *cur;  // x1
    unsigned int i;  // w0
    unsigned long long v8;  // x0
    char *v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    puts(&g_401778);
    __printf_chk(1, "PARAM-L1-01: %d\n", 15);
    __printf_chk(1, "PARAM-L1-02: %d\n", 11);
    __printf_chk(1, "PARAM-L2-01: %d\n", 8);
    __printf_chk(1, "PARAM-L2-02: %d\n", 173);
    __printf_chk(1, "PARAM-L2-03: %d\n", 300);
    __printf_chk(1, "PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30, 40, a5, a6, a7) & 4294967295);
    __printf_chk(1, "PARAM-L3-01: %d\n", 20);
    __printf_chk(1, "PARAM-L3-02: %d\n", 21);
    __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
    cur = &v1;
    i = 0;
    do
    {
        *(cur) = i;
        cur += 1;
        i += 1;
    } while (i != 16);
    __printf_chk(1, "PARAM-L3-04: %d\n", v1 + v2);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v8 = __printf_chk(1, "PARAM-L3-05: %d\n", 4);
    return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x4012a4
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_4012ac at 0x4012ac
void sub_4012ac()
{
    call_ret_basic();
    return;
}


// Function: call_ret_basic at 0x4012b0
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: sub_4012b8 at 0x4012b8
void sub_4012b8(unsigned long a0)
{
    ret_pointer();
    return;
}


// Function: ret_pointer at 0x4012c0
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: sub_4012c8 at 0x4012c8
void sub_4012c8()
{
    call_ret_pointer();
    return;
}


// Function: call_ret_pointer at 0x4012d0
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: sub_4012d8 at 0x4012d8
void sub_4012d8(unsigned long a0, unsigned long a1)
{
    ret_small_struct();
    return;
}


// Function: ret_small_struct at 0x4012e0
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: sub_4012ec at 0x4012ec
void sub_4012ec()
{
    call_ret_small_struct();
    return;
}


// Function: call_ret_small_struct at 0x4012f0
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: sub_4012f8 at 0x4012f8
void sub_4012f8(unsigned long a0)
{
    ret_large_struct();
    return;
}


// Function: ret_large_struct at 0x401300
extern char __stack_chk_guard;

unsigned long long ret_large_struct(unsigned int a0)
{
    unsigned long long index;  // x1
    unsigned long long v8;  // x1
    int v9;  // q3
    int v10;  // q0
    int v11;  // q1
    uint128_t ptr[4];  // x8
    char *v0;  // [bp-0x60]
    unsigned int v13;  // [bp-0x4c]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    index = 1;
    v5 = *((long long *)&__stack_chk_guard);
    do
    {
        v8 = index + 1;
        (&v13)[index] = a0 - 1 + (unsigned int)index;
        index = v8;
    } while (index != 17);
    v9 = *((int128_t *)&v2);
    v10 = *((int128_t *)&v3);
    v11 = *((int128_t *)&v4);
    ptr[0] = *((int128_t *)&v1);
    *((void*)&ptr[1]) = v9;
    *((void*)&ptr[2]) = v10;
    *((void*)&ptr[3]) = v11;
    if (v5 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return &__stack_chk_guard;
}


// Function: sub_401378 at 0x401378
void sub_401378()
{
    call_ret_large_struct();
    return;
}


// Function: call_ret_large_struct at 0x401380
extern char __stack_chk_guard;

long long call_ret_large_struct()
{
    unsigned long long idx;  // x0
    unsigned long long v6;  // x0
    char *v0;  // [bp-0x60]
    unsigned int v7;  // [bp-0x4c]
    char v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    idx = 1;
    v3 = *((long long *)&__stack_chk_guard);
    do
    {
        v6 = idx + 1;
        (&v7)[idx] = (unsigned int)idx + 99;
        idx = v6;
    } while (idx != 17);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v2 + *((int *)&v1);
}


// Function: ret_func_ptr at 0x4013f4
long long ret_func_ptr(unsigned int a0)
{
    if (!a0)
        return func_a;
    return func_b;
}


// Function: call_ret_func_ptr at 0x401410
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: sub_401418 at 0x401418
void sub_401418(unsigned long a0)
{
    ret_opaque_handle();
    return;
}


// Function: ret_opaque_handle at 0x401420
extern char handle2.0;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &handle2.0;
    return "d";
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
    call_ret_opaque();
    return;
}


// Function: call_ret_opaque at 0x401440
extern unsigned int handle1.1;

int call_ret_opaque()
{
    return handle1.1;
}


// Function: sub_40144c at 0x40144c
void sub_40144c(unsigned long a0, unsigned long a1, unsigned long a2)
{
    ret_complex_expr();
    return;
}


// Function: ret_complex_expr at 0x401450
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a0 > a1)
        return __ROL__(a2, 1) & 4294967294;
    return a2 + 10;
}


// Function: call_ret_complex_expr at 0x401464
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: sub_40146c at 0x40146c
void sub_40146c(unsigned long a0)
{
    ret_multi_branch();
    return;
}


// Function: ret_multi_branch at 0x401470
unsigned long long ret_multi_branch(unsigned int a0)
{
    if (a0 >= 3)
        return 4294967295;
    return __ROL__((a0 + 1) * 5, 1) & 4294967294;
}


// Function: sub_401488 at 0x401488
void sub_401488()
{
    call_ret_multi_branch();
    return;
}


// Function: call_ret_multi_branch at 0x401490
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: sub_401498 at 0x401498
void sub_401498(unsigned long a0, unsigned long a1)
{
    ret_void();
    return;
}


// Function: ret_void at 0x4014a0
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: sub_4014ac at 0x4014ac
void sub_4014ac()
{
    call_ret_void();
    return;
}


// Function: call_ret_void at 0x4014b0
unsigned long long call_ret_void()
{
    return 21;
}


// Function: sub_4014b8 at 0x4014b8
void sub_4014b8()
{
    test_return_values();
    return;
}


// Function: test_return_values at 0x4014c0
extern char g_4018a8;
extern char g_4018c8;
extern char g_4018e8;
extern char g_401908;
extern char g_401928;
extern char g_401948;
extern char g_401968;
extern char g_401988;
extern char g_4019a8;
extern char g_4019c8;
extern unsigned int handle1.1;

int test_return_values()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4018a8);
    __printf_chk(1, &g_4018c8, 42);
    __printf_chk(1, &g_4018e8, 20);
    __printf_chk(1, &g_401908, 7);
    __printf_chk(1, &g_401928, call_ret_large_struct() & 4294967295);
    __printf_chk(1, &g_401948, 10);
    __printf_chk(1, &g_401968, handle1.1);
    __printf_chk(1, &g_401988, 40);
    __printf_chk(1, &g_4019a8, 60);
    return __printf_chk(1, &g_4019c8, 21);
}


// Function: _fini at 0x401594
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

