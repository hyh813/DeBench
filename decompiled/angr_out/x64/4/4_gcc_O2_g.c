// Angr Decompilation of 4_gcc_O2_g
// Platform: AMD64

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_403fe8;

unsigned long long * _init()
{
    unsigned long long *v1;  // rax

    v1 = g_403fe8;
    if (g_403fe8)
        v1 = g_403fe8();
    return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403fa8;
extern unsigned long long g_403fb0;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_403fa8;
    goto g_403fb0;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
    sub_401030();
    return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
    unsigned long long result;  // [bp-0x8]

    result = 0;
    sub_401020();
    return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
    sub_401040();
    return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
    unsigned long long result;  // [bp-0x8]

    result = 1;
    sub_401020();
    return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
    sub_401050();
    return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 2;
    sub_401020();
    return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
    sub_401060();
    return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 3;
    sub_401020();
    return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
    __cxa_finalize();
    return;
}


// Function: main at 0x4010c0
unsigned int main()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // r8
    unsigned long long v6;  // r9

    test_calling_conventions();
    test_parameter_passing(v1, v2, v3, v4, v5, v6);
    test_return_values(v1, v2, v3, v4, v5, v6);
    return 0;
}


// Function: sub_4010e4 at 0x4010e4
void sub_4010e4(unsigned long a0, unsigned long a1, unsigned long a2)
{
    _start(); /* do not return */
}


// Function: _start at 0x4010f0
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_401115 at 0x401115
void sub_401115()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198677()
}


// Function: sub_401116 at 0x401116
void sub_401116()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401120

unsigned long long deregister_tm_clones()
{
    return 4210720;
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401150

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401190
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_403ff8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (__bss_start)
        return v2;
    if (g_403ff8)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    __bss_start = 1;
    return v1;
}


// Function: sub_4011c5 at 0x4011c5
void sub_4011c5()
{
}


// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4011d0
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_4011d9 at 0x4011d9
void sub_4011d9(unsigned long a0)
{
    func_a();
    return;
}


// Function: func_a at 0x4011e0
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: sub_4011e8 at 0x4011e8
void sub_4011e8(unsigned long a0)
{
    func_b();
    return;
}


// Function: func_b at 0x4011f0
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_4011f8 at 0x4011f8
void sub_4011f8(unsigned long a0, unsigned long a1)
{
    cdecl_func();
    return;
}


// Function: cdecl_func at 0x401200
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401208 at 0x401208
void sub_401208()
{
    call_cdecl();
    return;
}


// Function: call_cdecl at 0x401210
unsigned long long call_cdecl()
{
    return 15;
}


// Function: sub_40121a at 0x40121a
void sub_40121a(unsigned long a0, unsigned long a1)
{
    stdcall_func();
    return;
}


// Function: stdcall_func at 0x401220
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
    call_stdcall();
    return;
}


// Function: call_stdcall at 0x401230
unsigned long long call_stdcall()
{
    return 50;
}


// Function: sub_40123a at 0x40123a
void sub_40123a(unsigned long a0, unsigned long a1, unsigned long a2)
{
    fastcall_func();
    return;
}


// Function: fastcall_func at 0x401240
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
    call_fastcall();
    return;
}


// Function: call_fastcall at 0x401250
unsigned long long call_fastcall()
{
    return 6;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
    call_thiscall();
    return;
}


// Function: call_thiscall at 0x401260
unsigned long long call_thiscall()
{
    return 15;
}


// Function: sub_40126a at 0x40126a
void sub_40126a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    arm_aapcs_func();
    return;
}


// Function: arm_aapcs_func at 0x401270
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_40127f at 0x40127f
void sub_40127f()
{
    call_arm_aapcs();
    return;
}


// Function: call_arm_aapcs at 0x401280
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: sub_40128a at 0x40128a
void sub_40128a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    mips_func();
    return;
}


// Function: mips_func at 0x401290
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: sub_40129c at 0x40129c
void sub_40129c()
{
    call_mips();
    return;
}


// Function: call_mips at 0x4012a0
unsigned long long call_mips()
{
    return 100;
}


// Function: sub_4012aa at 0x4012aa
void sub_4012aa(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    amd64_sysv_func();
    return;
}


// Function: amd64_sysv_func at 0x4012b0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_4012c2 at 0x4012c2
void sub_4012c2()
{
    call_amd64_sysv();
    return;
}


// Function: call_amd64_sysv at 0x4012d0
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: sub_4012da at 0x4012da
void sub_4012da(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    ms_x64_func();
    return;
}


// Function: ms_x64_func at 0x4012e0
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_4012ef at 0x4012ef
void sub_4012ef()
{
    call_ms_x64();
    return;
}


// Function: call_ms_x64 at 0x4012f0
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: sub_4012fa at 0x4012fa
void sub_4012fa(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    vectorcall_func();
    return;
}


// Function: vectorcall_func at 0x401300
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
    call_vectorcall();
    return;
}


// Function: call_vectorcall at 0x401310
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: sub_40131a at 0x40131a
void sub_40131a()
{
    mixed_conventions_test();
    return;
}


// Function: mixed_conventions_test at 0x401320
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: sub_40132a at 0x40132a
void sub_40132a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    varargs_func();
    return;
}


// Function: varargs_func at 0x401330
unsigned long long varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v10;  // rcx
    char ptr[4];  // rsi
    unsigned int cur;  // eax
    unsigned int iter;  // r8d
    unsigned long v14;  // rcx
    char v15[4];  // rsi
    unsigned int v0;  // [bp-0x58]
    char *v1;  // [bp-0x50]
    char *v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long v9;  // [bp+0x8]

    v4 = a1;
    v5 = a2;
    v6 = a3;
    v7 = a4;
    v8 = a5;
    v0 = 8;
    v1 = &v9;
    v2 = &v3;
    if (a0 <= 0)
        return 0;
    v10 = 8;
    ptr = &v9;
    cur = 0;
    iter = 0;
    while (true)
    {
        if ((unsigned int)v10 <= 47)
        {
            cur += 1;
            v14 = (unsigned int)v10 + 8;
            iter += *((int *)&(&v3)[v10 & 4294967295]);
            v10 = v14;
            if (a0 == cur)
                return iter;
        }
        else
        {
            cur += 1;
            v15 = ptr + 2;
            iter += *(ptr);
            ptr = v15;
            if (a0 == cur)
                return iter;
        }
    }
}


// Function: sub_401394 at 0x401394
void sub_401394()
{
}


// Function: sub_4013d8 at 0x4013d8
void sub_4013d8()
{
}


// Function: sub_4013ea at 0x4013ea
void sub_4013ea()
{
    func_no_args();
    return;
}


// Function: func_no_args at 0x4013f0
unsigned long long func_no_args()
{
    return 42;
}


// Function: sub_4013fa at 0x4013fa
void sub_4013fa(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned int a7)
{
    func_many_args();
    return;
}


// Function: func_many_args at 0x401400
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_40141a at 0x40141a
void sub_40141a(unsigned long a0, unsigned long a1, unsigned long a2)
{
    func_mixed_args();
    return;
}


// Function: func_mixed_args at 0x401420
int func_mixed_args(unsigned int a0, char *a1, unsigned long a2)
{
    int v1;  // ymm1
    int v2;  // ymm0
    uint256_t v3;  // ymm1
    unsigned long v4;  // rbx

    v3 = v1 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2 & 340282366920938463463374607431768211455;
    v4 = a0;
    if (a1)
    {
        v3 = v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v2 & 18446744073709551615;
        v4 += strlen(a1);
    }
    return AddV(AddV(v4 & 4294967295, (uint128_t)v3 & 340282366920938463463374607431768211455) & 4294967295, a2);
}


// Function: sub_401472 at 0x401472
void sub_401472()
{
    func_struct_byval();
    return;
}


// Function: func_struct_byval at 0x401480
unsigned long long func_struct_byval()
{
    char cur[8];  // rdx
    unsigned long long v3;  // rax
    unsigned long v0;  // [bp+0x8]
    char v1;  // [bp+0x88]

    cur = &v0;
    v3 = 0;
    do
    {
        v3 += *(cur);
        cur += 1;
    } while (cur != &v1);
    return v3;
}


// Function: sub_4014a5 at 0x4014a5
void sub_4014a5(unsigned long a0)
{
    func_struct_byptr();
    return;
}


// Function: func_struct_byptr at 0x4014b0
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return a0[1] * *(a0);
}


// Function: sub_4014c6 at 0x4014c6
void sub_4014c6()
{
    test_calling_conventions();
    return;
}


// Function: test_calling_conventions at 0x4014d0
extern char g_402008;
extern char g_402030;
extern char g_402058;
extern char g_402080;
extern char g_4020a8;
extern char g_4020d0;
extern char g_402100;

long long test_calling_conventions()
{
    unsigned long long idx;  // rax
    unsigned long long v21;  // rdx
    char cur[8];  // rax
    char v0;  // [bp-0x120]
    char v1;  // [bp-0x118]
    char v2;  // [bp-0x108]
    char v3;  // [bp-0xf8]
    char v4;  // [bp-0xe8]
    char v5;  // [bp-0xd8]
    char v6;  // [bp-0xc8]
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    char v11;  // [bp-0x78]
    char v12;  // [bp-0x68]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    char v17;  // [bp-0x18]

    puts(&g_402008);
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
    __printf_chk(1, &g_402030, varargs_func(5, 1, 2, 3, 4, 5) & 4294967295);
    __printf_chk(1, &g_402058, 42);
    __printf_chk(1, &g_402080, 36);
    __printf_chk(1, &g_4020a8, 117);
    idx = 1;
    do
    {
        *((unsigned long long *)&(&v0)[8 * idx]) = idx;
        idx += 1;
    } while (idx != 17);
    v21 = 0;
    cur = &v9;
    memcpy(&v9, &v1, 16);
    memcpy(&v10, &v2, 16);
    memcpy(&v11, &v3, 16);
    memcpy(&v12, &v4, 16);
    memcpy(&v13, &v5, 16);
    memcpy(&v14, &v6, 16);
    memcpy(&v15, &v7, 16);
    memcpy(&v16, &v8, 16);
    do
    {
        v21 += *(cur);
        cur += 1;
    } while (&v17 != cur);
    __printf_chk(1, &g_4020d0, v21);
    return __printf_chk(1, &g_402100, 50);
}


// Function: sub_401766 at 0x401766
void sub_401766(unsigned long a0)
{
    param_by_value_int();
    return;
}


// Function: param_by_value_int at 0x401770
unsigned int param_by_value_int(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401778 at 0x401778
void sub_401778()
{
    call_by_value_int();
    return;
}


// Function: call_by_value_int at 0x401780
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: sub_40178a at 0x40178a
void sub_40178a(unsigned long a0)
{
    param_by_value_ptr();
    return;
}


// Function: param_by_value_ptr at 0x401790
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) * 2;
    return 1;
}


// Function: sub_40179c at 0x40179c
void sub_40179c()
{
    call_by_value_ptr();
    return;
}


// Function: call_by_value_ptr at 0x4017a0
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: sub_4017aa at 0x4017aa
void sub_4017aa()
{
    param_array_decay();
    return;
}


// Function: param_array_decay at 0x4017b0
unsigned long long param_array_decay()
{
    return 8;
}


// Function: sub_4017ba at 0x4017ba
void sub_4017ba()
{
    call_array_decay();
    return;
}


// Function: call_array_decay at 0x4017c0
unsigned long long call_array_decay()
{
    return 8;
}


// Function: sub_4017ca at 0x4017ca
void sub_4017ca(unsigned long a0)
{
    param_string();
    return;
}


// Function: param_string at 0x4017d0
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: sub_4017de at 0x4017de
void sub_4017de()
{
    call_string_param();
    return;
}


// Function: call_string_param at 0x4017e0
unsigned long long call_string_param()
{
    return 173;
}


// Function: sub_4017ea at 0x4017ea
void sub_4017ea(unsigned long a0, unsigned long a1)
{
    param_ptr_array();
    return;
}


// Function: param_ptr_array at 0x4017f0
typedef struct struct_0 {
    char field_0;
} struct_0;

unsigned long long param_ptr_array(struct_0 **a0, unsigned int a1)
{
    unsigned long long v1;  // rax
    struct_0 **i;  // rdi
    unsigned long long v3;  // rax
    struct_0 **v4;  // rdi
    unsigned long v5;  // rdx
    unsigned long long v6;  // rax

    if (a1 <= 0)
        return 0;
    v1 = 0;
    i = a0;
    do
    {
        v3 = v1;
        v4 = i + 1;
        v6 = v3 + *(i)->field_0;
        v1 = v6;
        i = v4;
    } while (i != &a0[1 + a1 + 1]);
    return v3 + v5;
}


// Function: sub_40181a at 0x40181a
void sub_40181a()
{
}


// Function: sub_401823 at 0x401823
void sub_401823()
{
    call_ptr_array();
    return;
}


// Function: call_ptr_array at 0x401830
unsigned long long call_ptr_array()
{
    return 300;
}


// Function: sub_40183a at 0x40183a
void sub_40183a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    param_varargs();
    return;
}


// Function: param_varargs at 0x401840
unsigned long long param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v10;  // rcx
    char ptr[4];  // rsi
    unsigned int cur;  // eax
    unsigned int iter;  // r8d
    unsigned long v14;  // rcx
    char v15[4];  // rsi
    unsigned int v0;  // [bp-0x58]
    char *v1;  // [bp-0x50]
    char *v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long v9;  // [bp+0x8]

    v4 = a1;
    v5 = a2;
    v6 = a3;
    v7 = a4;
    v8 = a5;
    v0 = 8;
    v1 = &v9;
    v2 = &v3;
    if (a0 <= 0)
        return 0;
    v10 = 8;
    ptr = &v9;
    cur = 0;
    iter = 0;
    while (true)
    {
        if ((unsigned int)v10 <= 47)
        {
            cur += 1;
            v14 = (unsigned int)v10 + 8;
            iter += *((int *)&(&v3)[v10 & 4294967295]);
            v10 = v14;
            if (a0 == cur)
                return iter;
        }
        else
        {
            cur += 1;
            v15 = ptr + 2;
            iter += *(ptr);
            ptr = v15;
            if (a0 == cur)
                return iter;
        }
    }
}


// Function: sub_4018a4 at 0x4018a4
void sub_4018a4()
{
}


// Function: sub_4018e8 at 0x4018e8
void sub_4018e8()
{
}


// Function: sub_4018fa at 0x4018fa
void sub_4018fa()
{
    call_varargs_param();
    return;
}


// Function: call_varargs_param at 0x401900
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long a5)
{
    return param_varargs(4, 10, 20, 30, 40, a5);
}


// Function: sub_401925 at 0x401925
void sub_401925(unsigned long a0, unsigned long a1)
{
    param_func_ptr();
    return;
}


// Function: param_func_ptr at 0x401930
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    return a0(a1) + 10;
}


// Function: sub_401948 at 0x401948
void sub_401948()
{
    call_func_ptr_param();
    return;
}


// Function: call_func_ptr_param at 0x401950
unsigned long long call_func_ptr_param()
{
    return 20;
}


// Function: sub_40195a at 0x40195a
void sub_40195a(unsigned long a0)
{
    param_double_ptr();
    return;
}


// Function: param_double_ptr at 0x401960
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


// Function: sub_401986 at 0x401986
void sub_401986()
{
    call_double_ptr();
    return;
}


// Function: call_double_ptr at 0x401990
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: sub_40199a at 0x40199a
void sub_40199a(unsigned long a0, unsigned long a1)
{
    param_complex_cast();
    return;
}


// Function: param_complex_cast at 0x4019a0
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
    if (!a1)
    {
        return *(a0);
    }
    else if (a1 == 1)
    {
        return a0[1] + *(a0);
    }
    else
    {
        return 4294967295;
    }
}


// Function: sub_4019b3 at 0x4019b3
void sub_4019b3()
{
}


// Function: sub_4019bb at 0x4019bb
void sub_4019bb()
{
}


// Function: sub_4019c6 at 0x4019c6
void sub_4019c6()
{
    call_complex_cast();
    return;
}


// Function: call_complex_cast at 0x4019d0
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: sub_4019da at 0x4019da
int sub_4019da()
{
    param_struct_byval();
    return;
}


// Function: param_struct_byval at 0x4019e0
int param_struct_byval()
{
    return;
}


// Function: sub_4019ed at 0x4019ed
void sub_4019ed()
{
    call_struct_byval();
    return;
}


// Function: call_struct_byval at 0x4019f0
long long call_struct_byval()
{
    unsigned long long idx;  // rax
    unsigned long v0;  // [bp-0x58]
    char v1;  // [bp-0x1c]

    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
        idx += 1;
    } while (idx != 16);
    return *((int *)&v1) + (int)v0;
}


// Function: sub_401a3e at 0x401a3e
void sub_401a3e(unsigned long a0, unsigned long a1)
{
    param_order_dep();
    return;
}


// Function: param_order_dep at 0x401a40
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401a48 at 0x401a48
void sub_401a48()
{
    call_order_dep();
    return;
}


// Function: call_order_dep at 0x401a50
unsigned long long call_order_dep()
{
    return 4;
}


// Function: sub_401a5a at 0x401a5a
void sub_401a5a()
{
    test_parameter_passing();
    return;
}


// Function: test_parameter_passing at 0x401a60
extern char g_402130;

long long test_parameter_passing()
{
    unsigned long long v3;  // r9
    unsigned long long idx;  // rax
    unsigned long v0;  // [bp-0x58]
    char v1;  // [bp-0x1c]

    puts(&g_402130);
    __printf_chk(1, "PARAM-L1-01: %d\n", 15);
    __printf_chk(1, "PARAM-L1-02: %d\n", 11);
    __printf_chk(1, "PARAM-L2-01: %d\n", 8);
    __printf_chk(1, "PARAM-L2-02: %d\n", 173);
    __printf_chk(1, "PARAM-L2-03: %d\n", 300);
    __printf_chk(1, "PARAM-L2-04: %d\n", param_varargs(4, 10, 20, 30, 40, v3) & 4294967295);
    __printf_chk(1, "PARAM-L3-01: %d\n", 20);
    __printf_chk(1, "PARAM-L3-02: %d\n", 21);
    __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
        idx += 1;
    } while (idx != 16);
    __printf_chk(1, "PARAM-L3-04: %d\n", *((int *)&v1) + (int)v0);
    return __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


// Function: sub_401bd8 at 0x401bd8
void sub_401bd8(unsigned long a0)
{
    ret_basic_type();
    return;
}


// Function: ret_basic_type at 0x401be0
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401be8 at 0x401be8
void sub_401be8()
{
    call_ret_basic();
    return;
}


// Function: call_ret_basic at 0x401bf0
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: sub_401bfa at 0x401bfa
void sub_401bfa(unsigned long a0)
{
    ret_pointer();
    return;
}


// Function: ret_pointer at 0x401c00
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: sub_401c09 at 0x401c09
void sub_401c09()
{
    call_ret_pointer();
    return;
}


// Function: call_ret_pointer at 0x401c10
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: sub_401c1a at 0x401c1a
void sub_401c1a(unsigned long a0, unsigned long a1)
{
    ret_small_struct();
    return;
}


// Function: ret_small_struct at 0x401c20
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: sub_401c2e at 0x401c2e
void sub_401c2e()
{
    call_ret_small_struct();
    return;
}


// Function: call_ret_small_struct at 0x401c30
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: sub_401c3a at 0x401c3a
void sub_401c3a(unsigned long a0)
{
    ret_large_struct();
    return;
}


// Function: ret_large_struct at 0x401c40
uint128_t [4] ret_large_struct(uint128_t *ptr, unsigned int a1)
{
    unsigned int *cur;  // rdx
    int v7;  // xmm1
    int v8;  // xmm2
    int v9;  // xmm3
    unsigned int v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]

    cur = &v0;
    do
    {
        *(cur) = a1;
        cur += 1;
        a1 += 1;
    } while (cur != &v4);
    v7 = *((int128_t *)&v1);
    v8 = *((int128_t *)&v2);
    v9 = *((int128_t *)&v3);
    *(ptr) = *((int128_t *)&v0);
    *((void*)&ptr[1]) = v7;
    *((void*)&ptr[2]) = v8;
    *((void*)&ptr[3]) = v9;
    return ptr;
}


// Function: sub_401cb6 at 0x401cb6
void sub_401cb6()
{
    call_ret_large_struct();
    return;
}


// Function: call_ret_large_struct at 0x401cc0
long long call_ret_large_struct()
{
    unsigned int v4;  // edx
    unsigned int *cur;  // rax
    unsigned int v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x1c]
    char v2;  // [bp-0x18]

    v4 = 100;
    cur = &v0;
    do
    {
        *(cur) = v4;
        cur += 1;
        v4 += 1;
    } while (cur != &v2);
    return v1 + v0;
}


// Function: sub_401d17 at 0x401d17
void sub_401d17(unsigned long a0)
{
    ret_func_ptr();
    return;
}


// Function: ret_func_ptr at 0x401d20
long long ret_func_ptr(unsigned int a0)
{
    if (a0)
        return func_b;
    return func_a;
}


// Function: sub_401d39 at 0x401d39
void sub_401d39()
{
    call_ret_func_ptr();
    return;
}


// Function: call_ret_func_ptr at 0x401d40
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: sub_401d4a at 0x401d4a
void sub_401d4a(unsigned long a0)
{
    ret_opaque_handle();
    return;
}


// Function: ret_opaque_handle at 0x401d50
extern char handle2.0;

long long ret_opaque_handle(unsigned int a0)
{
    if (!a0)
        return "d";
    return &handle2.0;
}


// Function: sub_401d69 at 0x401d69
void sub_401d69()
{
    call_ret_opaque();
    return;
}


// Function: call_ret_opaque at 0x401d70
extern unsigned int handle1.1;

int call_ret_opaque()
{
    return handle1.1;
}


// Function: sub_401d7b at 0x401d7b
void sub_401d7b(unsigned long a0, unsigned long a1, unsigned long a2)
{
    ret_complex_expr();
    return;
}


// Function: ret_complex_expr at 0x401d80
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a0 <= a1 ? a2 + 10 : a2 * 2);
}


// Function: call_ret_complex_expr at 0x401d90
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: sub_401d9a at 0x401d9a
void sub_401d9a(unsigned long a0)
{
    ret_multi_branch();
    return;
}


// Function: ret_multi_branch at 0x401da0
unsigned long long ret_multi_branch(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 2)
        v1 = (a0 * 5 + 5) * 2;
    return v1;
}


// Function: sub_401db5 at 0x401db5
void sub_401db5()
{
    call_ret_multi_branch();
    return;
}


// Function: call_ret_multi_branch at 0x401dc0
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: sub_401dca at 0x401dca
void sub_401dca(unsigned long a0, unsigned long a1)
{
    ret_void();
    return;
}


// Function: ret_void at 0x401dd0
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: sub_401dda at 0x401dda
void sub_401dda()
{
    call_ret_void();
    return;
}


// Function: call_ret_void at 0x401de0
unsigned long long call_ret_void()
{
    return 21;
}


// Function: sub_401dea at 0x401dea
void sub_401dea()
{
    test_return_values();
    return;
}


// Function: test_return_values at 0x401df0
extern char g_4022ac;
extern char g_4022ca;
extern char g_4022e6;
extern char g_402302;
extern char g_40231d;
extern char g_40233a;
extern char g_402356;
extern char g_402373;
extern char g_40238f;
extern char g_4023ab;
extern unsigned int handle1.1;

int test_return_values()
{
    puts(&g_4022ac);
    __printf_chk(1, &g_4022ca, 42);
    __printf_chk(1, &g_4022e6, 20);
    __printf_chk(1, &g_402302, 7);
    __printf_chk(1, &g_40231d, call_ret_large_struct() & 4294967295);
    __printf_chk(1, &g_40233a, 10);
    __printf_chk(1, &g_402356, handle1.1);
    __printf_chk(1, &g_402373, 40);
    __printf_chk(1, &g_40238f, 60);
    return __printf_chk(1, &g_4023ab, 21);
}


// Function: _fini at 0x401ee8
void _fini()
{
    return;
}

