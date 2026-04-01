// Angr Decompilation of 5-23_gcc_Os_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_403ff4;

int _init()
{
    if (g_403ff4)
        g_403ff4();
    frame_dummy();
    return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
    unsigned int ptr[3];  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = ptr[1];
    goto ptr[2];
}


// Function: sub_40103c at 0x40103c
void sub_40103c()
{
    sub_401040();
    return;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
    sub_401030(0);
    return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
    sub_401050();
    return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
    sub_401030(8);
    return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
    sub_401060();
    return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
    sub_401030(16);
    return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
    sub_401070();
    return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
    sub_401030(24);
    return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
    sub_401080();
    return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
    sub_401030(32);
    return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
    sub_401090();
    return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
    sub_401030(40);
    return;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
    sub_4010a0();
    return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
    sub_401030(48);
    return;
}


// Function: sub_4010ae at 0x4010ae
int sub_4010ae()
{
    sub_4010b0();
    return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
} struct_0;

int sub_4010b0()
{
    struct_0 *v1;  // ebx

    goto v1->field_2c;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
    sub_4010c0();
    return;
}


// Function: sub_4010c0 at 0x4010c0
typedef struct struct_0 {
    char padding_0[12];
    unsigned int field_c;
} struct_0;

int sub_4010c0()
{
    struct_0 *v1;  // ebx

    goto v1->field_c;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
    sub_4010d0();
    return;
}


// Function: sub_4010d0 at 0x4010d0
typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

int sub_4010d0()
{
    struct_0 *v1;  // ebx

    goto v1->field_10;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
    sub_4010e0();
    return;
}


// Function: sub_4010e0 at 0x4010e0
typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
} struct_0;

int sub_4010e0()
{
    struct_0 *v1;  // ebx

    goto v1->field_14;
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
    sub_4010f0();
    return;
}


// Function: sub_4010f0 at 0x4010f0
typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

int sub_4010f0()
{
    struct_0 *v1;  // ebx

    goto v1->field_18;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
    sub_401100();
    return;
}


// Function: sub_401100 at 0x401100
typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
} struct_0;

int sub_401100()
{
    struct_0 *v1;  // ebx

    goto v1->field_1c;
}


// Function: sub_40110a at 0x40110a
int sub_40110a()
{
    sub_401110();
    return;
}


// Function: sub_401110 at 0x401110
typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
} struct_0;

int sub_401110()
{
    struct_0 *v1;  // ebx

    goto v1->field_20;
}


// Function: sub_40111a at 0x40111a
int sub_40111a()
{
    sub_401120();
    return;
}


// Function: sub_401120 at 0x401120
typedef struct struct_0 {
    char padding_0[36];
    unsigned int field_24;
} struct_0;

int sub_401120()
{
    struct_0 *v1;  // ebx

    goto v1->field_24;
}


// Function: sub_40112a at 0x40112a
void sub_40112a()
{
    main();
    return;
}


// Function: main at 0x401130
unsigned int main()
{
    char v0;  // [bp+0x0]

    test_preprocessing_features(&v0);
    test_asm_features(&v0);
    return 0;
}


// Function: sub_401148 at 0x401148
void sub_401148()
{
    _start(); /* do not return */
}


// Function: _start at 0x401150
int _start()
{
    unsigned int v4;  // eax
    unsigned int v5;  // edx
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp+0x0]
    unsigned int v2;  // [bp+0x0]
    unsigned int v3;  // [bp+0x4]

    v1 = v4;
    v0 = v5;
    sub_4010c0(main, v2, &v3, 0, 0);
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198779()
}


// Function: sub_40117c at 0x40117c
void sub_40117c()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401180
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401184 at 0x401184
void sub_401184()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401190
typedef struct struct_0 {
    char padding_0[11863];
    struct struct_1 *field_2e57;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[2973] + 3;
}


// Function: sub_4011c3 at 0x4011c3
void sub_4011c3()
{
}


// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4011d0
typedef struct struct_0 {
    char padding_0[11815];
    struct struct_1 *field_2e27;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
    struct_0 *v2;  // edx
    struct_0 *v3;  // edx
    unsigned int v4;  // ebx
    unsigned int v0;  // [bp-0x8]

    __x86.get_pc_thunk.dx();
    v3 = &v2->padding_0[11759];
    v0 = v4;
    if (!(&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1)
    {
        return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[56]))
    {
        return (*((int *)&v3->padding_0[56]))(&v3->padding_0[72], (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
    }
}


// Function: sub_401217 at 0x401217
void sub_401217()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401220
typedef struct struct_0 {
    char padding_0[11715];
    unsigned int field_2dc3;
    char padding_2dc7[16];
    unsigned int field_2dd7;
    char padding_2ddb[4];
    char field_2ddf;
    char padding_2de0[3];
    unsigned int field_2de3;
} struct_0;

unsigned int * __do_global_dtors_aux()
{
    unsigned int *v5;  // eax
    struct_0 *v6;  // edi
    struct_0 *ptr;  // edi
    unsigned int v8;  // esi
    unsigned int v9;  // ebx
    struct_0 *v10;  // esi
    unsigned int v11;  // eax
    unsigned int i;  // ebx
    unsigned int v13;  // eax
    unsigned int *v14;  // eax
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v5 = __x86.get_pc_thunk.di(*((int *)&v2), &v3);
    ptr = &v6->padding_0[11671];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[72])
        return v5;
    if (*((int *)&ptr->padding_0[44]))
        sub_4010b0(*((int *)&ptr->padding_0[64]));
    v10 = &ptr->padding_0[224];
    v11 = *((int *)&ptr->padding_0[76]);
    i = (&ptr->padding_0[220] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[76]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[76]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[76]);
        } while (*((int *)&ptr->padding_0[76]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[72] = 1;
    return v14;
}


// Function: sub_4012aa at 0x4012aa
void sub_4012aa()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4012b0
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x4012b9
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x4012bd
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: param_macro_constants at 0x4012c1
unsigned int param_macro_constants(unsigned int a0)
{
    if (a0 <= 0x400)
        return 0x200;
    return 64;
}


// Function: call_macro_constants at 0x4012de
unsigned int call_macro_constants()
{
    return 64;
}


// Function: param_macro_functions at 0x4012e8
int param_macro_functions(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int v1;  // edx

    v0 = a0;
    if (v0 < a1)
        v1 = a1;
    else
        v1 = v0;
    return v0 * v0 + v1;
}


// Function: call_macro_functions at 0x401303
unsigned int call_macro_functions()
{
    return 30;
}


// Function: param_conditional_compile at 0x40130d
int param_conditional_compile(unsigned int a0)
{
    return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x40131d
unsigned int call_conditional_compile()
{
    return 32;
}


// Function: param_multi_branch_compile at 0x401327
int param_multi_branch_compile(unsigned int a0)
{
    return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x401339
unsigned int call_multi_branch_compile()
{
    return 57122;
}


// Function: param_macro_recursion at 0x401343
int param_macro_recursion(unsigned int a0)
{
    return a0 + 16;
}


// Function: call_macro_recursion at 0x401352
unsigned int call_macro_recursion()
{
    return 116;
}


// Function: param_stringize at 0x40135c
unsigned int param_stringize()
{
    return 19;
}


// Function: call_stringize at 0x401366
unsigned int call_stringize()
{
    return 19;
}


// Function: my_func at 0x401370
unsigned int my_func(unsigned int a0)
{
    return a0 * 10;
}


// Function: param_token_paste at 0x40137d
int param_token_paste(unsigned int a0)
{
    return a0 * 11 + 5;
}


// Function: call_token_paste at 0x40138d
unsigned int call_token_paste()
{
    return 60;
}


// Function: param_variadic_macro at 0x401397
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
    sub_401110(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
    return a0 + 50;
}


// Function: call_variadic_macro at 0x4013d0
unsigned int call_variadic_macro()
{
    return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4013e7
int param_macro_override(unsigned int a0)
{
    return a0 * 3 + 1;
}


// Function: call_macro_override at 0x4013fa
unsigned int call_macro_override()
{
    return 16;
}


// Function: param_include_guard at 0x401404
unsigned int param_include_guard()
{
    return 500;
}


// Function: call_include_guard at 0x40140e
unsigned int call_include_guard()
{
    return 500;
}


// Function: param_builtin_macros at 0x401418
int param_builtin_macros(unsigned int a0)
{
    sub_401110(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:00");
    return a0 + 282;
}


// Function: call_builtin_macros at 0x40146a
unsigned int call_builtin_macros()
{
    return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x40147d
extern unsigned int g_40206e;
extern unsigned int g_402096;
extern unsigned int g_4020b1;
extern unsigned int g_4020cc;
extern unsigned int g_4020e7;
extern unsigned int g_402106;
extern unsigned int g_402122;
extern unsigned int g_40214c;
extern unsigned int g_402167;
extern unsigned int g_402182;
extern unsigned int g_40219d;
extern unsigned int g_4021b9;

int test_preprocessing_features()
{
    sub_401110(1, &g_40206e);
    sub_401110(1, &g_402096, 64);
    sub_401110(1, &g_4020b1, 30);
    sub_401110(1, &g_4020cc, 32);
    sub_401110(1, &g_4020e7, 57122);
    sub_401110(1, &g_402106, 116);
    sub_401110(1, &g_402122, 19);
    sub_401110(1, &g_40214c, 60);
    sub_401110(1, &g_402167, call_variadic_macro());
    sub_401110(1, &g_402182, 16);
    sub_401110(1, &g_40219d, 500);
    return sub_401110(1, &g_4021b9, call_builtin_macros());
}


// Function: param_asm_basic at 0x401588
int param_asm_basic(unsigned int a0)
{
    return a0 + 10;
}


// Function: call_asm_basic at 0x40159d
unsigned int call_asm_basic()
{
    return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x4015b0
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
    unsigned int v0;  // eax
    unsigned int idx;  // ecx

    v0 = 0;
    for (idx = 0; idx < a1; idx += 1)
    {
        v0 += *((int *)(ptr + idx * 4));
    }
    return v0;
}


// Function: call_asm_clobber at 0x4015d3
unsigned int call_asm_clobber()
{
    unsigned long v3;  // ldt
    unsigned long v4;  // gdt
    unsigned short v5;  // gs
    unsigned int v6;  // eax
    char v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x10]

    v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
    v6 = param_asm_clobber(&v0, 5);
    if (v1 == *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
        return v6;
    return __stack_chk_fail_local();
}


// Function: param_asm_multi_insn at 0x401606
char param_asm_multi_insn(char *a0, char *a1, unsigned int a2)
{
    char *iter;  // edx
    char *cur;  // ecx
    unsigned int result;  // ebx
    char v3;  // al

    iter = a0;
    cur = a1;
    for (result = a2; result; result -= 1)
    {
        v3 = *(cur);
        *(iter) = *(cur);
        iter += 1;
        cur += 1;
    }
    return v3;
}


// Function: call_asm_multi_insn at 0x401629
unsigned int call_asm_multi_insn()
{
    unsigned int flag1;  // ecx
    unsigned int v8;  // edi
    unsigned int v17;  // eax
    unsigned int v9;  // esi
    char *cur;  // edi
    void* i;  // esi
    unsigned long v12;  // ldt
    unsigned long v13;  // gdt
    unsigned short v14;  // gs
    unsigned int *iter;  // edi
    unsigned int flag2;  // ecx
    char v0[10];  // [bp-0x3a]
    char result[4];  // [bp-0x30]
    char v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]

    flag1 = 10;
    v5 = v8;
    v4 = v9;
    cur = &v0;
    i = __x86.get_pc_thunk.ax() - -2992;
    v3 = *((int *)_ccall(v12, v13, (unsigned int)v14, 20));
    for (*(&result) = 0; flag1; i += 1)
    {
        flag1 -= 1;
        *(cur) = *((char *)i);
        cur += 1;
    }
    iter = &v2;
    for (flag2 = 7; flag2; iter += 1)
    {
        flag2 -= 1;
        *(iter) = 0;
    }
    param_asm_multi_insn(&result, &v0, 9);
    v17 = 4294967295;
    if (result[0] == 72)
        v17 = (v2 == 111 ? 42 : 4294967295);
    if (v3 != *((int *)_ccall(v12, v13, (unsigned int)v14, 20)))
        v17 = __stack_chk_fail_local();
    return v17;
}


// Function: param_asm_simd at 0x4016ad
unsigned int param_asm_simd(uint128_t *a0, uint128_t *a1, uint128_t *ptr)
{
    *(ptr) = AddV(*(a0), *(a1));
    return 0;
}


// Function: param_simd_intrinsics at 0x4016ce
unsigned int param_simd_intrinsics(uint128_t *a0, uint128_t *a1, uint128_t *ptr)
{
    *(ptr) = AddV(*(a1), *(a0));
    return 0;
}


// Function: call_asm_simd at 0x4016ec
typedef struct struct_0 {
    char padding_0[3019];
    unsigned int field_bcb;
    char padding_bcf[12];
    unsigned int field_bdb;
} struct_0;

int call_asm_simd()
{
    struct_0 *v10;  // eax
    unsigned int result;  // ecx
    unsigned int flag1;  // ecx
    char iter[4];  // edi
    unsigned int v12;  // edi
    unsigned int v13;  // esi
    char cur[4];  // edi
    struct_0 *i;  // esi
    unsigned long v16;  // ldt
    unsigned long v17;  // gdt
    unsigned short v18;  // gs
    struct_0 *j;  // esi
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x20], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]
    unsigned int v5;  // [bp-0x14]
    unsigned int v6;  // [bp-0x10]
    unsigned int v7;  // [bp-0xc]
    unsigned int v8;  // [bp-0x8]

    v10 = __x86.get_pc_thunk.ax() + 10447;
    result = 4;
    v8 = v12;
    v7 = v13;
    cur = &v0;
    i = &v10[2].padding_0[1348];
    for (v6 = *((int *)_ccall(v16, v17, (unsigned int)v18, 20)); result; i = &i->padding_0[4])
    {
        result -= 1;
        *((int *)&cur[0]) = *((int *)&i->padding_0[0]);
        cur += 1;
    }
    j = &v10[2].padding_0[1332];
    flag1 = 4;
    for (iter = &v1; flag1; j = &j->padding_0[4])
    {
        flag1 -= 1;
        *((int *)&iter[0]) = *((int *)&j->padding_0[0]);
        iter += 1;
    }
    param_asm_simd(&v0, &v1, &v2);
    if (v6 == *((int *)_ccall(v16, v17, (unsigned int)v18, 20)))
        return v3 + v2 + v4 + v5;
    return __stack_chk_fail_local();
}


// Function: param_asm_atomic at 0x401763
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
    atomic_exchange_add(a0, a1);
    return a1 + *(a0);
}


// Function: param_atomic_c11 at 0x40177a
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
    atomic_exchange_add(a0, a1);
    return *(a0) + a1;
}


// Function: call_asm_atomic at 0x401791
unsigned int call_asm_atomic()
{
    unsigned long v3;  // ldt
    unsigned long v4;  // gdt
    unsigned short v5;  // gs
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
    v0 = 10;
    atomic_exchange_add(&v0, 5);
    v6 = v0 * 2 + 5;
    if (v1 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
        v6 = __stack_chk_fail_local();
    return v6;
}


// Function: param_dynamic_code at 0x4017d3
unsigned int param_dynamic_code(unsigned int a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    v0 = sub_4010f0(30);
    v1 = sub_401100(0, v0, 7, 34, 4294967295, 0);
    if (v1 == 4294967295)
        return 4294967295;
    sub_401120(v1, v0, a0, a0);
    return a0 + 5;
}


// Function: param_memory_protection at 0x40182d
unsigned int param_memory_protection()
{
    unsigned int v2;  // edi
    unsigned int *p;  // eax
    unsigned int *ptr;  // esi
    unsigned int result;  // eax
    unsigned int v6;  // ecx
    unsigned int v0;  // [bp-0x20]

    v2 = sub_4010f0(30);
    p = sub_401100(0, v2, 3, 34, 4294967295, 0);
    if (p == 0xffffffff)
        return 4294967295;
    ptr = p;
    *(p) = 42;
    result = sub_4010d0(ptr, v2, 1, p);
    if (result)
    {
        sub_401120(ptr, v2, result, result);
        return 4294967294;
    }
    v0 = *(ptr);
    if (!sub_4010d0(ptr, v2, 3, v6))
    {
        *(ptr) = 100;
        sub_401120(ptr, v2, 0, 0);
        return v0;
    }
    sub_401120(ptr, v2, v0, v0);
    return 4294967293;
}


// Function: param_clobber_importance at 0x4018e5
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x401907
unsigned int call_asm_privileged()
{
    unsigned int v1;  // ebx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v1 = param_dynamic_code(10);
    v2 = param_memory_protection();
    v3 = param_clobber_importance(3, 7);
    if (v1 != 15)
    {
        return v1;
    }
    else if (v2 == 42)
    {
        return (v3 == 20 ? 77 : 15);
    }
    else
    {
        return v1;
    }
}


// Function: param_memory_clobber_demo at 0x40194f
typedef struct struct_0 {
    char padding_0[9904];
    unsigned int field_26b0;
} struct_0;

int param_memory_clobber_demo()
{
    struct_0 *v1;  // ecx

    __x86.get_pc_thunk.cx();
    return 50 + v1->field_26b0;
}


// Function: test_asm_features at 0x401970
extern unsigned int g_4021ec;
extern unsigned int g_402217;
extern unsigned int g_402233;
extern unsigned int g_40224f;
extern unsigned int g_40226b;
extern unsigned int g_402287;
extern unsigned int g_4022a3;

int test_asm_features()
{
    sub_401110(1, &g_4021ec);
    sub_401110(1, &g_402217, call_asm_basic());
    sub_401110(1, &g_402233, call_asm_clobber());
    sub_401110(1, &g_40224f, call_asm_multi_insn());
    sub_401110(1, &g_40226b, call_asm_simd());
    sub_401110(1, &g_402287, call_asm_atomic());
    return sub_401110(1, &g_4022a3, call_asm_privileged());
}


// Function: __x86.get_pc_thunk.ax at 0x401a26
unsigned int __x86.get_pc_thunk.ax()
{
    char v0;  // [bp+0x0]

    return *((int *)&v0);
}


// Function: __x86.get_pc_thunk.cx at 0x401a2a
void __x86.get_pc_thunk.cx()
{
    return;
}


// Function: sub_401a2e at 0x401a2e
int sub_401a2e()
{
    __stack_chk_fail_local();
    return;
}


// Function: __stack_chk_fail_local at 0x401a30
int __stack_chk_fail_local()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    sub_4010e0();
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x401a50
typedef struct struct_0 {
    char padding_0[9343];
    struct struct_1 *field_247f;
    struct struct_1 *field_2483;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
    struct_0 *v2;  // edx
    struct_0 *ptr;  // edx
    unsigned int *v4;  // eax
    unsigned int v5;  // ebx
    struct_0 *v6;  // ebx
    struct_0 *p;  // ebx
    unsigned int v0;  // [bp-0x8]

    __x86.get_pc_thunk.dx();
    ptr = &v2[1].padding_0[227];
    v4 = *((int *)&ptr->padding_0[232]);
    if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[232];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_401a92 at 0x401a92
void sub_401a92()
{
}


// Function: _fini at 0x401a9c
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

