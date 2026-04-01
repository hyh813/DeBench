// Angr Decompilation of 4_gcc_Os_g
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


// Function: main at 0x400800
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_return_values(test_parameter_passing(test_calling_conventions()));
    return 0;
}


// Function: sub_400820 at 0x400820
void sub_400820(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x400840
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400870 at 0x400870
void sub_400870()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400874
extern unsigned long long g_412fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fe0)
        return 0;
    v0 = __gmon_start__(g_412fe0);
    return __gmon_start__(g_412fe0);
}


// Function: sub_400888 at 0x400888
void sub_400888()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400890
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x4008c0
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


// Function: sub_4008fc at 0x4008fc
void sub_4008fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400900
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


// Function: sub_400948 at 0x400948
long long sub_400948()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400950
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: func_a at 0x400954
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x40095c
unsigned int func_b(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: callback_func at 0x400964
unsigned int callback_func(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: cdecl_func at 0x40096c
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_cdecl at 0x400974
unsigned long long call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x40097c
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: call_stdcall at 0x400984
unsigned long long call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x40098c
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: call_fastcall at 0x400998
unsigned long long call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x4009a0
unsigned long long call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x4009a8
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x4009bc
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x4009c4
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_mips at 0x4009d4
unsigned long long call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x4009dc
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x4009f4
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x4009fc
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x400a10
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x400a18
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: call_vectorcall at 0x400a28
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x400a30
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x400a38
extern char __stack_chk_guard;

unsigned long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v16[4];  // x3
    unsigned int v17;  // w4
    unsigned long long i;  // x1
    unsigned long long v19;  // x0
    unsigned int v20;  // w5
    char ptr[4];  // x3
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
    v16 = &v15;
    v17 = 0;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    v6 = *((long long *)&__stack_chk_guard);
    v1 = &v15;
    v2 = &v15;
    i = 4294967240;
    v3 = &v7;
    v19 = 0;
    v4 = 4294967240;
    for (result = 0; v17 < a0; i = v20)
    {
        if (!((char)(i >> 31) & 1))
        {
            v20 = i;
            ptr = v16;
            v16 = &v16[2 + 3] & 18446744073709551608;
        }
        else
        {
            v20 = (unsigned int)i + 8;
            if (v20 > 0)
            {
                ptr = v16;
                v16 = &v16[2 + 3] & 18446744073709551608;
            }
            else
            {
                ptr = &(&v15)[i & 4294967295];
            }
        }
        v17 += 1;
        v19 += (unsigned long long)*(ptr);
    }
    if (v6 == *((long long *)&__stack_chk_guard))
        return v19;
    __stack_chk_fail(); /* do not return */
}


// Function: func_no_args at 0x400b0c
unsigned long long func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x400b14
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x400b34
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
    if (a1)
        v6 = strlen(a1);
    else
        v6 = 0;
    return v6 + a0 + v7 + a2;
}


// Function: func_struct_byval at 0x400b8c
long long func_struct_byval(unsigned long ptr)
{
    unsigned long long i;  // x1
    unsigned long long v1;  // x0
    unsigned long long v2;  // x0
    unsigned long long idx;  // x1
    unsigned long long v4;  // x1
    unsigned long long v5;  // x0

    i = 0;
    v1 = 0;
    do
    {
        v2 = v1;
        idx = i;
        v4 = idx + 1;
        v5 = v2 + *((long long *)(ptr + idx * 8));
        i = v4;
        v1 = v5;
    } while (i != 16);
    return v2 + *((long long *)(ptr + idx * 8));
}


// Function: func_struct_byptr at 0x400bb0
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return a0[1] * *(a0);
}


// Function: test_calling_conventions at 0x400bc8
extern char __stack_chk_guard;
extern char g_40145c;
extern char g_40151d;
extern char g_401545;
extern char g_401567;
extern char g_401593;
extern char g_4015bb;
extern char g_4015e7;

long long test_calling_conventions(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long idx;  // x0
    unsigned long long v22;  // x0
    unsigned long long v23;  // x2
    unsigned long long index;  // x1
    unsigned long long v25;  // x1
    unsigned long long v26;  // x0
    char *v0;  // [bp-0x120]
    unsigned long v1;  // [bp-0x108]
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
    puts(&g_40145c);
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
    __printf_chk(1, &g_40151d, varargs_func(5, 1, 2, 3, 4, 5, a6, a7) & 4294967295);
    __printf_chk(1, &g_401545, 42);
    __printf_chk(1, &g_401567, 36);
    __printf_chk(1, &g_401593, func_mixed_args(10, "test", 100) & 4294967295);
    idx = 0;
    do
    {
        v22 = idx + 1;
        (&v1)[idx] = v22;
        idx = v22;
    } while (idx != 16);
    v23 = 0;
    memcpy(&v9, &v1, 16);
    memcpy(&v10, &v2, 16);
    memcpy(&v11, &v3, 16);
    memcpy(&v12, &v4, 16);
    memcpy(&v13, &v5, 16);
    memcpy(&v14, &v6, 16);
    index = 0;
    memcpy(&v15, &v7, 16);
    memcpy(&v16, &v8, 16);
    do
    {
        v25 = index + 1;
        v23 += *((long long *)&(&v9)[8 * index]);
        index = v25;
    } while (index != 16);
    __printf_chk(1, &g_4015bb, v23);
    if (v17 == *((long long *)&__stack_chk_guard))
    {
        v26 = __printf_chk(1, &g_4015e7, 50);
        return __printf_chk(1, &g_4015e7, 50);
    }
    __stack_chk_fail(); /* do not return */
}


// Function: param_by_value_int at 0x400de4
unsigned int param_by_value_int(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_by_value_int at 0x400dec
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x400df4
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = (*(ptr) * 2 | *(ptr) >> 31) & 4294967294;
    return 1;
}


// Function: call_by_value_ptr at 0x400e08
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x400e10
unsigned long long param_array_decay()
{
    return 8;
}


// Function: call_array_decay at 0x400e18
unsigned long long call_array_decay()
{
    return 8;
}


// Function: param_string at 0x400e20
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x400e30
unsigned long long call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x400e38
unsigned long long param_ptr_array(unsigned long a0, unsigned int a1)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0
    unsigned long long v2;  // x2
    unsigned long long v3;  // x2

    v0 = 0;
    v1 = 0;
    while (true)
    {
        v2 = v0;
        if ((unsigned int)v2 >= a1)
            break;
        v3 = v2 + 1;
        v1 += *((char *)*((long long *)(a0 + v2 * 8)));
        v0 = v3;
    }
    return v1;
}


// Function: call_ptr_array at 0x400e64
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
    if (v4 == *((long long *)&__stack_chk_guard))
        return v6;
    __stack_chk_fail(); /* do not return */
}


// Function: param_varargs at 0x400ecc
extern char __stack_chk_guard;

unsigned long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    char v16[4];  // x3
    unsigned int v17;  // w4
    unsigned long long i;  // x1
    unsigned long long v19;  // x0
    unsigned int v20;  // w5
    char ptr[4];  // x3
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
    v16 = &v15;
    v17 = 0;
    v12 = a5;
    v13 = a6;
    v14 = a7;
    v6 = *((long long *)&__stack_chk_guard);
    v1 = &v15;
    v2 = &v15;
    i = 4294967240;
    v3 = &v7;
    v19 = 0;
    v4 = 4294967240;
    for (result = 0; v17 < a0; i = v20)
    {
        if (!((char)(i >> 31) & 1))
        {
            v20 = i;
            ptr = v16;
            v16 = &v16[2 + 3] & 18446744073709551608;
        }
        else
        {
            v20 = (unsigned int)i + 8;
            if (v20 > 0)
            {
                ptr = v16;
                v16 = &v16[2 + 3] & 18446744073709551608;
            }
            else
            {
                ptr = &(&v15)[i & 4294967295];
            }
        }
        v17 += 1;
        v19 += (unsigned long long)*(ptr);
    }
    if (v6 == *((long long *)&__stack_chk_guard))
        return v19;
    __stack_chk_fail(); /* do not return */
}


// Function: call_varargs_param at 0x400fa0
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v0;  // x0

    v0 = param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
    return param_varargs(4, 10, 20, 30, 40, a5, a6, a7);
}


// Function: param_func_ptr at 0x400fb8
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x400fd8
int call_func_ptr_param()
{
    return param_func_ptr(callback_func, 5);
}


// Function: param_double_ptr at 0x400fe8
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


// Function: call_double_ptr at 0x40100c
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: param_complex_cast at 0x401014
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


// Function: call_complex_cast at 0x40103c
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x401048
int param_struct_byval(unsigned int *a0)
{
    return *(a0) + a0[15];
}


// Function: call_struct_byval at 0x401058
extern char __stack_chk_guard;

long long call_struct_byval()
{
    unsigned long long idx;  // x0
    char *v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0xc]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v1 + 4 * idx)) = idx;
        idx += 1;
    } while (idx != 16);
    if (v3 == *((long long *)&__stack_chk_guard))
        return (unsigned int)v1 + v2;
    __stack_chk_fail(); /* do not return */
}


// Function: param_order_dep at 0x4010c0
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: call_order_dep at 0x4010c8
unsigned long long call_order_dep()
{
    return 4;
}


// Function: test_parameter_passing at 0x4010d0
extern char g_401614;

int test_parameter_passing(unsigned long a0, unsigned long a1, unsigned long a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7)
{
    unsigned long long v2;  // x2
    unsigned int v3;  // w0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401614);
    __printf_chk(1, "PARAM-L1-01: %d\n", 15);
    __printf_chk(1, "PARAM-L1-02: %d\n", 11);
    __printf_chk(1, "PARAM-L2-01: %d\n", 8);
    __printf_chk(1, "PARAM-L2-02: %d\n", 173);
    v2 = call_ptr_array() & 4294967295;
    v3 = call_varargs_param(__printf_chk(1, "PARAM-L2-03: %d\n", v2), "PARAM-L2-03: %d\n", v2, a3, a4, a5, a6, a7);
    __printf_chk(1, "PARAM-L2-04: %d\n", v3);
    __printf_chk(1, "PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
    __printf_chk(1, "PARAM-L3-02: %d\n", 21);
    __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
    __printf_chk(1, "PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
    return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x4011d8
unsigned int ret_basic_type(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_ret_basic at 0x4011e0
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x4011e8
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x4011f0
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x4011f8
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: call_ret_small_struct at 0x401204
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x40120c
extern char __stack_chk_guard;

unsigned long long ret_large_struct(unsigned int a0)
{
    unsigned long long index;  // x2
    int v8;  // q1
    uint128_t ptr[4];  // x8
    int v10;  // q1
    char *v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x8]
    char v6;  // [bp+0x0]

    v0 = &v6;
    v5 = *((long long *)&__stack_chk_guard);
    index = 0;
    do
    {
        *((unsigned int *)((char *)&v1 + 4 * index)) = a0 + (unsigned int)index;
        index += 1;
    } while (index != 16);
    v8 = *((int128_t *)&v2);
    ptr[0] = *((int128_t *)&v1);
    *((void*)&ptr[1]) = v8;
    v10 = *((int128_t *)&v4);
    ptr[2] = *((int128_t *)&v3);
    *((void*)&ptr[3]) = v10;
    if (v5 == *((long long *)&__stack_chk_guard))
        return &__stack_chk_guard;
    __stack_chk_fail(); /* do not return */
}


// Function: call_ret_large_struct at 0x401278
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
    if (v3 == *((long long *)&__stack_chk_guard))
        return *((int *)&v1) + v2;
    __stack_chk_fail(); /* do not return */
}


// Function: ret_func_ptr at 0x4012d4
long long ret_func_ptr(unsigned int a0)
{
    if (!a0)
        return func_a;
    return func_b;
}


// Function: call_ret_func_ptr at 0x4012f0
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: ret_opaque_handle at 0x4012f8
extern char handle2.0;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &handle2.0;
    return "d";
}


// Function: call_ret_opaque at 0x401314
extern unsigned int handle1.1;

int call_ret_opaque()
{
    return handle1.1;
}


// Function: ret_complex_expr at 0x401320
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a0 > a1)
        return __ROL__(a2, 1) & 4294967294;
    return a2 + 10;
}


// Function: call_ret_complex_expr at 0x401334
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x40133c
unsigned long long ret_multi_branch(unsigned int a0)
{
    if (a0 >= 3)
        return 4294967295;
    return 10 + 10 * a0;
}


// Function: call_ret_multi_branch at 0x401350
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x401358
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: call_ret_void at 0x401364
unsigned long long call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x40136c
extern char g_4016f0;
extern char g_40170e;
extern char g_40172a;
extern char g_401746;
extern char g_401761;
extern char g_40177e;
extern char g_40179a;
extern char g_4017b7;
extern char g_4017d3;
extern char g_4017ef;
extern unsigned int handle1.1;

int test_return_values()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_4016f0);
    __printf_chk(1, &g_40170e, 42);
    __printf_chk(1, &g_40172a, 20);
    __printf_chk(1, &g_401746, 7);
    __printf_chk(1, &g_401761, call_ret_large_struct() & 4294967295);
    __printf_chk(1, &g_40177e, 10);
    __printf_chk(1, &g_40179a, handle1.1);
    __printf_chk(1, &g_4017b7, 40);
    __printf_chk(1, &g_4017d3, 60);
    return __printf_chk(1, &g_4017ef, 21);
}


// Function: _fini at 0x401440
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

