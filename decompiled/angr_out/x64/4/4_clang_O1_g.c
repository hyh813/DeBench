// Angr Decompilation of 4_clang_O1_g
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
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_404008;
    goto g_404010;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
    char *v1;  // rdi

    return puts(v1);
}


// Function: _start at 0x401070
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_401095 at 0x401095
void sub_401095()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198549()
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4010a0
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_4010c9 at 0x4010c9
void sub_4010c9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4010d0

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401109 at 0x401109
void sub_401109()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401110
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_403ff8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (__TMC_END__)
        return v2;
    if (g_403ff8)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v1;
}


// Function: sub_401145 at 0x401145
void sub_401145()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401150
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_401159 at 0x401159
void sub_401159(unsigned long a0, unsigned long a1)
{
    cdecl_func();
    return;
}


// Function: cdecl_func at 0x401160
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
    call_cdecl();
    return;
}


// Function: call_cdecl at 0x401170
unsigned long long call_cdecl()
{
    return 15;
}


// Function: sub_401176 at 0x401176
void sub_401176(unsigned long a0, unsigned long a1)
{
    stdcall_func();
    return;
}


// Function: stdcall_func at 0x401180
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: sub_401186 at 0x401186
void sub_401186()
{
    call_stdcall();
    return;
}


// Function: call_stdcall at 0x401190
unsigned long long call_stdcall()
{
    return 50;
}


// Function: sub_401196 at 0x401196
void sub_401196(unsigned long a0, unsigned long a1, unsigned long a2)
{
    fastcall_func();
    return;
}


// Function: fastcall_func at 0x4011a0
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return a0 + a1 + a2;
}


// Function: sub_4011a6 at 0x4011a6
void sub_4011a6()
{
    call_fastcall();
    return;
}


// Function: call_fastcall at 0x4011b0
unsigned long long call_fastcall()
{
    return 6;
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6()
{
    call_thiscall();
    return;
}


// Function: call_thiscall at 0x4011c0
unsigned long long call_thiscall()
{
    return 15;
}


// Function: sub_4011c6 at 0x4011c6
void sub_4011c6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    arm_aapcs_func();
    return;
}


// Function: arm_aapcs_func at 0x4011d0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_4011db at 0x4011db
void sub_4011db()
{
    call_arm_aapcs();
    return;
}


// Function: call_arm_aapcs at 0x4011e0
unsigned long long call_arm_aapcs()
{
    return 15;
}


// Function: sub_4011e6 at 0x4011e6
void sub_4011e6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    mips_func();
    return;
}


// Function: mips_func at 0x4011f0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: sub_4011f8 at 0x4011f8
void sub_4011f8()
{
    call_mips();
    return;
}


// Function: call_mips at 0x401200
unsigned long long call_mips()
{
    return 100;
}


// Function: sub_401206 at 0x401206
void sub_401206(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    amd64_sysv_func();
    return;
}


// Function: amd64_sysv_func at 0x401210
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_40121e at 0x40121e
void sub_40121e()
{
    call_amd64_sysv();
    return;
}


// Function: call_amd64_sysv at 0x401220
unsigned long long call_amd64_sysv()
{
    return 21;
}


// Function: sub_401226 at 0x401226
void sub_401226(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    ms_x64_func();
    return;
}


// Function: ms_x64_func at 0x401230
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_40123b at 0x40123b
void sub_40123b()
{
    call_ms_x64();
    return;
}


// Function: call_ms_x64 at 0x401240
unsigned long long call_ms_x64()
{
    return 15;
}


// Function: sub_401246 at 0x401246
void sub_401246(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    vectorcall_func();
    return;
}


// Function: vectorcall_func at 0x401250
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: sub_401258 at 0x401258
void sub_401258()
{
    call_vectorcall();
    return;
}


// Function: call_vectorcall at 0x401260
unsigned long long call_vectorcall()
{
    return 10;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
    mixed_conventions_test();
    return;
}


// Function: mixed_conventions_test at 0x401270
unsigned long long mixed_conventions_test()
{
    return 33;
}


// Function: sub_401276 at 0x401276
void sub_401276(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    varargs_func();
    return;
}


// Function: varargs_func at 0x401280
unsigned long long varargs_func(unsigned int a0)
{
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    uint128_t v28;  // xmm4
    uint128_t v29;  // xmm5
    uint128_t v30;  // xmm6
    uint128_t v31;  // xmm7
    unsigned long long v32;  // rax
    unsigned int v33;  // edi
    unsigned long v34;  // rsi
    char ptr[4];  // rdx
    unsigned int v36;  // edi
    unsigned long long v20;  // rcx
    unsigned long long v21;  // r8
    unsigned long long v22;  // r9
    char result;  // al
    uint128_t v24;  // xmm0
    uint128_t v25;  // xmm1
    uint128_t v26;  // xmm2
    uint128_t v27;  // xmm3
    unsigned int v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v1[4];  // [bp-0xd0]
    char *v2;  // [bp-0xc8]
    char v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    uint128_t v9;  // [bp-0x88]
    uint128_t v10;  // [bp-0x78]
    uint128_t v11;  // [bp-0x68]
    uint128_t v12;  // [bp-0x58]
    uint128_t v13;  // [bp-0x48]
    uint128_t v14;  // [bp-0x38]
    uint128_t v15;  // [bp-0x28]
    uint128_t v16;  // [bp-0x18]
    unsigned long v17;  // [bp+0x8]

    v4 = v18;
    v5 = v19;
    v6 = v20;
    v7 = v21;
    v8 = v22;
    if (result)
    {
        v9 = v24;
        v10 = v25;
        v11 = v26;
        v12 = v27;
        v13 = v28;
        v14 = v29;
        v15 = v30;
        v16 = v31;
    }
    v2 = &v3;
    *((unsigned long **)&v1) = &v17;
    v0 = 206158430216;
    v32 = 0;
    if (a0 <= 0)
        return 0;
    do
    {
        v33 = a0;
        v34 = v0;
        if (v34 > 40)
        {
            ptr = v1;
            *(&v1) = ptr + 2;
        }
        else
        {
            ptr = &v2[v34];
            v0 = (unsigned int)v34 + 8;
        }
        v32 = (unsigned long long)((unsigned int)v32 + *(ptr));
        v36 = v33 - 1;
        a0 = v36;
    } while (v33 + 4294967295);
    return v32;
}


// Function: sub_4012f8 at 0x4012f8
void sub_4012f8()
{
}


// Function: sub_401334 at 0x401334
void sub_401334()
{
    func_no_args();
    return;
}


// Function: func_no_args at 0x401340
unsigned long long func_no_args()
{
    return 42;
}


// Function: sub_401346 at 0x401346
void sub_401346(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned int a7)
{
    func_many_args();
    return;
}


// Function: func_many_args at 0x401350
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_401366 at 0x401366
void sub_401366(unsigned long a0, unsigned long a1, unsigned long a2)
{
    func_mixed_args();
    return;
}


// Function: func_mixed_args at 0x401370
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2)
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // xmm0lq
    unsigned long long len;  // rax
    int v5;  // xmm0
    int v6;  // xmm1
    int v7;  // xmm2
    unsigned long long v0;  // [bp-0x18]

    v0 = v2;
    if (a1)
    {
        v0 = v3;
        len = strlen(a1);
        v5 = v0;
    }
    else
    {
        len = 0;
    }
    return (unsigned int)(AddV(v6 & 0xffffffffffffffff0000000000000000 | a2, AddV(v7 & 0xffffffffffffffff0000000000000000 | len + (a0 & 4294967295) & 4294967295, v5 & 340282366920938463463374607431768211455)));
}


// Function: sub_4013b1 at 0x4013b1
void sub_4013b1()
{
    func_struct_byval();
    return;
}


// Function: func_struct_byval at 0x4013c0
unsigned long long func_struct_byval()
{
    unsigned long long idx;  // rdx
    unsigned long long v2;  // rax
    unsigned long v0;  // [bp+0x8]

    idx = 0;
    v2 = 0;
    do
    {
        v2 += (&v0)[idx];
        idx += 1;
    } while (idx != 16);
    return v2;
}


// Function: sub_4013df at 0x4013df
void sub_4013df(unsigned long a0)
{
    func_struct_byptr();
    return;
}


// Function: func_struct_byptr at 0x4013e0
unsigned long long func_struct_byptr(unsigned int *a0)
{
    if (!a0)
        return 4294967295;
    return *(a0) * a0[1];
}


// Function: sub_4013f2 at 0x4013f2
void sub_4013f2()
{
    test_calling_conventions();
    return;
}


// Function: test_calling_conventions at 0x401400
extern char g_4020a4;
extern char g_4020cc;
extern char g_4020ee;
extern char g_402115;
extern char g_40213d;
extern char g_402169;
extern char g_40234e;

int test_calling_conventions()
{
    unsigned long long idx;  // rax
    unsigned long long index;  // rax
    unsigned long long v5;  // rsi
    unsigned long v6;  // [bp-0x88]
    char v0;  // [bp-0x80]

    puts(&g_40234e);
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
    printf(&g_4020a4, varargs_func(5) & 4294967295);
    printf(&g_4020cc, 42);
    printf(&g_4020ee, 36);
    printf(&g_402115, 117);
    idx = 1;
    do
    {
        (&v6)[idx] = idx;
        idx += 1;
    } while (idx != 17);
    index = 0;
    v5 = 0;
    do
    {
        v5 += *((long long *)&(&v0)[8 * index]);
        index += 1;
    } while (index != 16);
    printf(&g_40213d, v5);
    return printf(&g_402169, 50);
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8(unsigned long a0)
{
    param_by_value_int();
    return;
}


// Function: param_by_value_int at 0x4015b0
unsigned int param_by_value_int(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_4015b4 at 0x4015b4
void sub_4015b4()
{
    call_by_value_int();
    return;
}


// Function: call_by_value_int at 0x4015c0
unsigned long long call_by_value_int()
{
    return 15;
}


// Function: sub_4015c6 at 0x4015c6
void sub_4015c6(unsigned long a0)
{
    param_by_value_ptr();
    return;
}


// Function: param_by_value_ptr at 0x4015d0
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) * 2;
    return 1;
}


// Function: sub_4015d8 at 0x4015d8
void sub_4015d8()
{
    call_by_value_ptr();
    return;
}


// Function: call_by_value_ptr at 0x4015e0
unsigned long long call_by_value_ptr()
{
    return 11;
}


// Function: sub_4015e6 at 0x4015e6
void sub_4015e6()
{
    param_array_decay();
    return;
}


// Function: param_array_decay at 0x4015f0
unsigned long long param_array_decay()
{
    return 8;
}


// Function: sub_4015f6 at 0x4015f6
void sub_4015f6()
{
    call_array_decay();
    return;
}


// Function: call_array_decay at 0x401600
unsigned long long call_array_decay()
{
    return 8;
}


// Function: sub_401606 at 0x401606
void sub_401606(unsigned long a0)
{
    param_string();
    return;
}


// Function: param_string at 0x401610
int param_string(char *a0)
{
    return a0[1] + *(a0);
}


// Function: sub_40161a at 0x40161a
void sub_40161a()
{
    call_string_param();
    return;
}


// Function: call_string_param at 0x401620
unsigned long long call_string_param()
{
    return 173;
}


// Function: sub_401626 at 0x401626
void sub_401626(unsigned long a0, unsigned long a1)
{
    param_ptr_array();
    return;
}


// Function: param_ptr_array at 0x401630
unsigned long long param_ptr_array(unsigned long a0, unsigned long a1)
{
    unsigned long long i;  // rdx
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rsi
    unsigned long long v5;  // rax

    if ((unsigned int)a1 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v3 = v2;
        v5 = v3 + *((char *)*((long long *)(a0 + i * 8)));
        i += 1;
        v2 = v5;
    } while ((a1 & 4294967295) != i);
    return v3 + v4;
}


// Function: sub_401656 at 0x401656
void sub_401656()
{
    call_ptr_array();
    return;
}


// Function: call_ptr_array at 0x401660
unsigned long long call_ptr_array()
{
    return 300;
}


// Function: sub_401666 at 0x401666
void sub_401666(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    param_varargs();
    return;
}


// Function: param_varargs at 0x401670
unsigned long long param_varargs(unsigned int a0)
{
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    uint128_t v28;  // xmm4
    uint128_t v29;  // xmm5
    uint128_t v30;  // xmm6
    uint128_t v31;  // xmm7
    unsigned long long v32;  // rax
    unsigned int v33;  // edi
    unsigned long v34;  // rsi
    char ptr[4];  // rdx
    unsigned int v36;  // edi
    unsigned long long v20;  // rcx
    unsigned long long v21;  // r8
    unsigned long long v22;  // r9
    char result;  // al
    uint128_t v24;  // xmm0
    uint128_t v25;  // xmm1
    uint128_t v26;  // xmm2
    uint128_t v27;  // xmm3
    unsigned int v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v1[4];  // [bp-0xd0]
    char *v2;  // [bp-0xc8]
    char v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    uint128_t v9;  // [bp-0x88]
    uint128_t v10;  // [bp-0x78]
    uint128_t v11;  // [bp-0x68]
    uint128_t v12;  // [bp-0x58]
    uint128_t v13;  // [bp-0x48]
    uint128_t v14;  // [bp-0x38]
    uint128_t v15;  // [bp-0x28]
    uint128_t v16;  // [bp-0x18]
    unsigned long v17;  // [bp+0x8]

    v4 = v18;
    v5 = v19;
    v6 = v20;
    v7 = v21;
    v8 = v22;
    if (result)
    {
        v9 = v24;
        v10 = v25;
        v11 = v26;
        v12 = v27;
        v13 = v28;
        v14 = v29;
        v15 = v30;
        v16 = v31;
    }
    v2 = &v3;
    *((unsigned long **)&v1) = &v17;
    v0 = 206158430216;
    v32 = 0;
    if (a0 <= 0)
        return 0;
    do
    {
        v33 = a0;
        v34 = v0;
        if (v34 > 40)
        {
            ptr = v1;
            *(&v1) = ptr + 2;
        }
        else
        {
            ptr = &v2[v34];
            v0 = (unsigned int)v34 + 8;
        }
        v32 = (unsigned long long)((unsigned int)v32 + *(ptr));
        v36 = v33 - 1;
        a0 = v36;
    } while (v33 + 4294967295);
    return v32;
}


// Function: sub_4016e8 at 0x4016e8
void sub_4016e8()
{
}


// Function: sub_401724 at 0x401724
void sub_401724()
{
    call_varargs_param();
    return;
}


// Function: call_varargs_param at 0x401730
unsigned long long call_varargs_param()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    return param_varargs(4);
}


// Function: sub_401754 at 0x401754
void sub_401754(unsigned long a0, unsigned long a1)
{
    param_func_ptr();
    return;
}


// Function: param_func_ptr at 0x401760
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    return a0(a1) + 10;
}


// Function: sub_40176d at 0x40176d
void sub_40176d()
{
    call_func_ptr_param();
    return;
}


// Function: call_func_ptr_param at 0x401770
unsigned long long call_func_ptr_param()
{
    return 20;
}


// Function: sub_401776 at 0x401776
void sub_401776(unsigned long a0)
{
    param_double_ptr();
    return;
}


// Function: param_double_ptr at 0x401780
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (ptr && *(ptr))
    {
        *(ptr)->field_0 = a1;
        *(ptr) = NULL;
        v1 = 1;
    }
    return v1;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
    call_double_ptr();
    return;
}


// Function: call_double_ptr at 0x4017b0
unsigned long long call_double_ptr()
{
    return 21;
}


// Function: sub_4017b6 at 0x4017b6
void sub_4017b6(unsigned long a0, unsigned long a1)
{
    param_complex_cast();
    return;
}


// Function: param_complex_cast at 0x4017c0
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


// Function: sub_4017d7 at 0x4017d7
void sub_4017d7()
{
    call_complex_cast();
    return;
}


// Function: call_complex_cast at 0x4017e0
unsigned long long call_complex_cast()
{
    return 305419896;
}


// Function: sub_4017e6 at 0x4017e6
int sub_4017e6()
{
    param_struct_byval();
    return;
}


// Function: param_struct_byval at 0x4017f0
int param_struct_byval()
{
    return;
}


// Function: sub_4017f9 at 0x4017f9
void sub_4017f9()
{
    call_struct_byval();
    return;
}


// Function: call_struct_byval at 0x401800
int call_struct_byval()
{
    unsigned long long idx;  // rax
    unsigned long v0;  // [bp-0x40]
    char v1;  // [bp-0x4]

    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
        idx += 1;
    } while (idx != 16);
    return *((int *)&v1) + (int)v0;
}


// Function: sub_401827 at 0x401827
void sub_401827(unsigned long a0, unsigned long a1)
{
    param_order_dep();
    return;
}


// Function: param_order_dep at 0x401830
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401834 at 0x401834
void sub_401834()
{
    call_order_dep();
    return;
}


// Function: call_order_dep at 0x401840
unsigned long long call_order_dep()
{
    return 3;
}


// Function: sub_401846 at 0x401846
void sub_401846()
{
    test_parameter_passing();
    return;
}


// Function: test_parameter_passing at 0x401850
extern char g_40236f;

int test_parameter_passing()
{
    unsigned long long idx;  // rbx
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0xc]

    puts(&g_40236f);
    idx = 0;
    printf("PARAM-L1-01: %d\n", 15);
    printf("PARAM-L1-02: %d\n", 11);
    printf("PARAM-L2-01: %d\n", 8);
    printf("PARAM-L2-02: %d\n", 173);
    printf("PARAM-L2-03: %d\n", 300);
    printf("PARAM-L2-04: %d\n", param_varargs(4) & 4294967295);
    printf("PARAM-L3-01: %d\n", 20);
    printf("PARAM-L3-02: %d\n", 21);
    printf("PARAM-L3-03: %d\n", 305419896);
    do
    {
        *((unsigned int *)((char *)&v0 + 4 * idx)) = idx;
        idx += 1;
    } while (idx != 16);
    printf("PARAM-L3-04: %d\n", *((int *)&v1) + (int)v0);
    return printf("PARAM-L3-05: %d\n", 3);
}


// Function: sub_40196b at 0x40196b
void sub_40196b(unsigned long a0)
{
    ret_basic_type();
    return;
}


// Function: ret_basic_type at 0x401970
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401974 at 0x401974
void sub_401974()
{
    call_ret_basic();
    return;
}


// Function: call_ret_basic at 0x401980
unsigned long long call_ret_basic()
{
    return 42;
}


// Function: sub_401986 at 0x401986
void sub_401986(unsigned long a0)
{
    ret_pointer();
    return;
}


// Function: ret_pointer at 0x401990
long long ret_pointer(unsigned long a0)
{
    return a0 + 4;
}


// Function: sub_401995 at 0x401995
void sub_401995()
{
    call_ret_pointer();
    return;
}


// Function: call_ret_pointer at 0x4019a0
unsigned long long call_ret_pointer()
{
    return 20;
}


// Function: sub_4019a6 at 0x4019a6
void sub_4019a6(unsigned long a0, unsigned long a1)
{
    ret_small_struct();
    return;
}


// Function: ret_small_struct at 0x4019b0
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
    return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: sub_4019ba at 0x4019ba
void sub_4019ba()
{
    call_ret_small_struct();
    return;
}


// Function: call_ret_small_struct at 0x4019c0
unsigned long long call_ret_small_struct()
{
    return 7;
}


// Function: sub_4019c6 at 0x4019c6
void sub_4019c6(unsigned long a0, unsigned long a1)
{
    ret_large_struct();
    return;
}


// Function: ret_large_struct at 0x4019d0
long long ret_large_struct(unsigned long ptr, unsigned int a1)
{
    unsigned long long idx;  // rdx

    idx = 0;
    do
    {
        *((unsigned int *)(ptr + idx * 4)) = a1 + (unsigned int)idx;
        idx += 1;
    } while (idx != 16);
    return ptr;
}


// Function: sub_4019f1 at 0x4019f1
void sub_4019f1()
{
    call_ret_large_struct();
    return;
}


// Function: call_ret_large_struct at 0x401a00
int call_ret_large_struct()
{
    unsigned long long idx;  // rax
    unsigned long v0;  // [bp-0x40]
    char v1;  // [bp-0x4]

    idx = 0;
    do
    {
        *((unsigned int *)((char *)&v0 + 4 * idx)) = (unsigned int)idx + 100;
        idx += 1;
    } while (idx != 16);
    return *((int *)&v1) + (int)v0;
}


// Function: sub_401a2a at 0x401a2a
void sub_401a2a(unsigned long a0)
{
    func_a();
    return;
}


// Function: func_a at 0x401a30
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: sub_401a34 at 0x401a34
void sub_401a34(unsigned long a0)
{
    func_b();
    return;
}


// Function: func_b at 0x401a40
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401a44 at 0x401a44
void sub_401a44(unsigned long a0)
{
    ret_func_ptr();
    return;
}


// Function: ret_func_ptr at 0x401a50
long long ret_func_ptr(unsigned int a0)
{
    if (a0)
        return func_b;
    return func_a;
}


// Function: sub_401a65 at 0x401a65
void sub_401a65()
{
    call_ret_func_ptr();
    return;
}


// Function: call_ret_func_ptr at 0x401a70
unsigned long long call_ret_func_ptr()
{
    return 10;
}


// Function: sub_401a76 at 0x401a76
void sub_401a76(unsigned long a0)
{
    ret_opaque_handle();
    return;
}


// Function: ret_opaque_handle at 0x401a80
extern char ret_opaque_handle.handle2;

long long ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &ret_opaque_handle.handle2;
    return "d";
}


// Function: sub_401a95 at 0x401a95
void sub_401a95()
{
    call_ret_opaque();
    return;
}


// Function: call_ret_opaque at 0x401aa0
extern unsigned int ret_opaque_handle.handle1;

int call_ret_opaque()
{
    return ret_opaque_handle.handle1;
}


// Function: sub_401aa7 at 0x401aa7
void sub_401aa7(unsigned long a0, unsigned long a1, unsigned long a2)
{
    ret_complex_expr();
    return;
}


// Function: ret_complex_expr at 0x401ab0
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a1 < a0 ? a2 * 2 : a2 + 10);
}


// Function: sub_401abc at 0x401abc
void sub_401abc()
{
    call_ret_complex_expr();
    return;
}


// Function: call_ret_complex_expr at 0x401ac0
unsigned long long call_ret_complex_expr()
{
    return 40;
}


// Function: sub_401ac6 at 0x401ac6
void sub_401ac6(unsigned long a0)
{
    ret_multi_branch();
    return;
}


// Function: ret_multi_branch at 0x401ad0
unsigned long long ret_multi_branch(unsigned int a0)
{
    return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: sub_401ae3 at 0x401ae3
void sub_401ae3()
{
    call_ret_multi_branch();
    return;
}


// Function: call_ret_multi_branch at 0x401af0
unsigned long long call_ret_multi_branch()
{
    return 60;
}


// Function: sub_401af6 at 0x401af6
void sub_401af6(unsigned long a0, unsigned long a1)
{
    ret_void();
    return;
}


// Function: ret_void at 0x401b00
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return a0 * 3;
}


// Function: sub_401b06 at 0x401b06
void sub_401b06()
{
    call_ret_void();
    return;
}


// Function: call_ret_void at 0x401b10
unsigned long long call_ret_void()
{
    return 21;
}


// Function: sub_401b16 at 0x401b16
void sub_401b16()
{
    test_return_values();
    return;
}


// Function: test_return_values at 0x401b20
extern char g_402251;
extern char g_40226d;
extern char g_402289;
extern char g_4022a4;
extern char g_4022c1;
extern char g_4022dd;
extern char g_4022fa;
extern char g_402316;
extern char g_402332;
extern char g_402390;
extern unsigned int ret_opaque_handle.handle1;

int test_return_values()
{
    unsigned long long idx;  // rbx
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0xc]

    puts(&g_402390);
    idx = 0;
    printf(&g_402251, 42);
    printf(&g_40226d, 20);
    printf(&g_402289, 7);
    do
    {
        *((unsigned int *)((char *)&v0 + 4 * idx)) = (unsigned int)idx + 100;
        idx += 1;
    } while (idx != 16);
    printf(&g_4022a4, *((int *)&v1) + (int)v0);
    printf(&g_4022c1, 10);
    printf(&g_4022dd, ret_opaque_handle.handle1);
    printf(&g_4022fa, 40);
    printf(&g_402316, 60);
    return printf(&g_402332, 21);
}


// Function: sub_401bfb at 0x401bfb
void sub_401bfb()
{
    main();
    return;
}


// Function: main at 0x401c00
unsigned int main()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}


// Function: _fini at 0x401c14
void _fini()
{
    return;
}

