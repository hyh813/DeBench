// Angr Decompilation of 4_clang_O0_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_405ff4;

int _init()
{
    if (g_405ff4)
        g_405ff4();
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


// Function: sub_401080 at 0x401080
int sub_401080()
{
    void* v1;  // ebx

    goto (int)v1[16];
}


// Function: sub_401086 at 0x401086
void sub_401086()
{
}


// Function: _start at 0x401090
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
    __libc_start_main(main, v2, &v3, 0, 0); /* do not return */
}


// Function: sub_4010bb at 0x4010bb
void sub_4010bb()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198587()
}


// Function: sub_4010bc at 0x4010bc
void sub_4010bc()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x4010c0
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_4010c4 at 0x4010c4
void sub_4010c4()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4010d0
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[5080] + 3;
}


// Function: sub_401103 at 0x401103
void sub_401103()
{
}


// Function: sub_401109 at 0x401109
void sub_401109()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401110
typedef struct struct_0 {
    char padding_0[20199];
    struct struct_1 *field_4ee7;
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
    v3 = (char *)&v2->field_4ee7 + 3;
    v0 = v4;
    if (!(&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1)
    {
        return (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[4]))
    {
        return (*((int *)&v3->padding_0[4]))(&v3->padding_0[56], (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1;
    }
}


// Function: sub_401157 at 0x401157
void sub_401157()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401160
typedef struct struct_0 {
    char padding_0[20099];
    unsigned int field_4e83;
    char padding_4e87[48];
    unsigned int field_4eb7;
    char padding_4ebb[16];
    char field_4ecb;
    char padding_4ecc[3];
    unsigned int field_4ecf;
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
    ptr = &v6->padding_4e87[11];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[56])
        return v5;
    if (*((int *)&ptr->padding_0[16]))
        sub_401080(*((int *)&ptr->padding_0[36]));
    v10 = &ptr->padding_0[248];
    v11 = *((int *)&ptr->padding_0[60]);
    i = (&ptr->padding_0[244] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[60]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[60]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[60]);
        } while (*((int *)&ptr->padding_0[60]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[56] = 1;
    return v14;
}


// Function: sub_4011ea at 0x4011ea
void sub_4011ea()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4011f0
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x4011f9
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x4011fd
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_401201 at 0x401201
void sub_401201(unsigned int a0, unsigned int a1)
{
    cdecl_func();
    return;
}


// Function: cdecl_func at 0x401210
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401221 at 0x401221
int sub_401221()
{
    call_cdecl();
    return;
}


// Function: call_cdecl at 0x401230
unsigned int call_cdecl()
{
    return cdecl_func(5, 10);
}


// Function: sub_40125d at 0x40125d
void sub_40125d(unsigned int a0, unsigned int a1)
{
    stdcall_func();
    return;
}


// Function: stdcall_func at 0x401260
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: sub_401274 at 0x401274
int sub_401274()
{
    call_stdcall();
    return;
}


// Function: call_stdcall at 0x401280
unsigned int call_stdcall()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x8]

    v0 = v2;
    return stdcall_func(5, 10);
}


// Function: sub_4012ad at 0x4012ad
void sub_4012ad(unsigned int a0)
{
    fastcall_func();
    return;
}


// Function: fastcall_func at 0x4012b0
int fastcall_func(unsigned int a0)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // edx

    return v0 + v1 + a0;
}


// Function: sub_4012cf at 0x4012cf
int sub_4012cf()
{
    call_fastcall();
    return;
}


// Function: call_fastcall at 0x4012d0
unsigned int call_fastcall()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x8]

    v0 = v2;
    return fastcall_func(3);
}


// Function: sub_4012fa at 0x4012fa
void sub_4012fa()
{
    call_thiscall();
    return;
}


// Function: call_thiscall at 0x401300
unsigned int call_thiscall()
{
    return 15;
}


// Function: sub_40130a at 0x40130a
void sub_40130a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    arm_aapcs_func();
    return;
}


// Function: arm_aapcs_func at 0x401310
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_401333 at 0x401333
int sub_401333()
{
    call_arm_aapcs();
    return;
}


// Function: call_arm_aapcs at 0x401340
unsigned int call_arm_aapcs()
{
    return arm_aapcs_func(1, 2, 3, 4, 5);
}


// Function: sub_401385 at 0x401385
void sub_401385(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    mips_func();
    return;
}


// Function: mips_func at 0x401390
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: sub_4013ad at 0x4013ad
int sub_4013ad()
{
    call_mips();
    return;
}


// Function: call_mips at 0x4013b0
unsigned int call_mips()
{
    return mips_func(10, 20, 30, 40);
}


// Function: sub_4013ed at 0x4013ed
void sub_4013ed(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    amd64_sysv_func();
    return;
}


// Function: amd64_sysv_func at 0x4013f0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_401419 at 0x401419
int sub_401419()
{
    call_amd64_sysv();
    return;
}


// Function: call_amd64_sysv at 0x401420
unsigned int call_amd64_sysv()
{
    return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: sub_40146d at 0x40146d
void sub_40146d(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    ms_x64_func();
    return;
}


// Function: ms_x64_func at 0x401470
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_401493 at 0x401493
int sub_401493()
{
    call_ms_x64();
    return;
}


// Function: call_ms_x64 at 0x4014a0
unsigned int call_ms_x64()
{
    return ms_x64_func(1, 2, 3, 4, 5);
}


// Function: sub_4014e5 at 0x4014e5
void sub_4014e5(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    vectorcall_func();
    return;
}


// Function: vectorcall_func at 0x4014f0
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a0 + a1 + a2 + a3;
}


// Function: sub_40150d at 0x40150d
int sub_40150d()
{
    call_vectorcall();
    return;
}


// Function: call_vectorcall at 0x401510
unsigned int call_vectorcall()
{
    return vectorcall_func(1, 2, 3, 4);
}


// Function: sub_40154d at 0x40154d
int sub_40154d()
{
    mixed_conventions_test();
    return;
}


// Function: mixed_conventions_test at 0x401550
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int mixed_conventions_test()
{
    unsigned int v4;  // ebx
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]

    v2 = v4;
    v0 = &_GLOBAL_OFFSET_TABLE_;
    v1 = 0;
    v1 += cdecl_func(1, 2);
    v1 += stdcall_func(3, 4);
    v1 += fastcall_func(7);
    return v1;
}


// Function: sub_4015d2 at 0x4015d2
void sub_4015d2()
{
    varargs_func();
    return;
}


// Function: varargs_func at 0x4015e0
unsigned int varargs_func(unsigned int a0, unsigned int a1)
{
    unsigned int *ptr;  // eax
    unsigned int i;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int *v2;  // [bp-0x8]

    v1 = 0;
    v2 = &vvar_1;
    for (i = 0; i < a0; i += 1)
    {
        ptr = v2;
        v2 = ptr + 1;
        v1 += *(ptr);
    }
    return v1;
}


// Function: sub_401634 at 0x401634
void sub_401634()
{
    func_no_args();
    return;
}


// Function: func_no_args at 0x401640
unsigned int func_no_args()
{
    return 42;
}


// Function: sub_40164a at 0x40164a
void sub_40164a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    func_many_args();
    return;
}


// Function: func_many_args at 0x401650
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_401685 at 0x401685
int sub_401685()
{
    func_mixed_args();
    return;
}


// Function: func_mixed_args at 0x401690
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int func_mixed_args(unsigned int a0, char *a1, unsigned int a2)
{
    unsigned int v6;  // ebx
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0xc]
    unsigned int v5;  // [bp-0x8]

    v5 = v6;
    v1 = &_GLOBAL_OFFSET_TABLE_;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    [D] PutI(72:F64x8)[t6,0] = t7()
    [D] PutI(136:I8x8)[t6,0] = 0x01()
    [D] PutI(136:I8x8)[t6,0] = 0x00()
    v0 = (!a1 ? NULL : strlen(a1));
    v4 = v0;
    v2 = a0 + v4;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    [D] PutI(72:F64x8)[t24,1] = t25()
    [D] PutI(136:I8x8)[t24,1] = 0x01()
    [D] PutI(136:I8x8)[t24,0] = 0x00()
    [D] PutI(72:F64x8)[t46,0] = t49()
    [D] PutI(136:I8x8)[t46,0] = 0x01()
    [D] PutI(72:F64x8)[t59,1] = t60()
    [D] PutI(136:I8x8)[t59,1] = 0x01()
    [D] PutI(136:I8x8)[t59,0] = 0x00()
    v3 = ([D] unsupported_<class 'pyvex.expr.GetI'>() ? [D] unsupported_<class 'pyvex.expr.GetI'>() : nan);
    [D] PutI(136:I8x8)[t107,0] = 0x00()
    return v3;
}


// Function: sub_401722 at 0x401722
void sub_401722()
{
    func_struct_byval();
    return;
}


// Function: func_struct_byval at 0x401730
unsigned int func_struct_byval()
{
    char *ptr;  // [bp-0x1c]
    char idx;  // [bp-0x18], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]
    unsigned int v5;  // [bp+0x4]

    ptr = &v5;
    memset(&idx, 0, 12);
    while (true)
    {
        if (idx >= 16)
            break;
        v3 = v2 + *((int *)&ptr[8 * idx]);
        v4 = v4 + *((int *)&ptr[4 + 8 * idx]) + (v2 + *((int *)&ptr[8 * idx]) < v2);
        idx += 1;
        v2 = v3;
    }
    return v2;
}


// Function: func_struct_byptr at 0x401790
unsigned int func_struct_byptr(unsigned int *a0)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = v1;
    v0 = (!a0 ? 4294967295 : a0[1] * *(a0));
    return v0;
}


// Function: sub_4017c4 at 0x4017c4
int sub_4017c4()
{
    test_calling_conventions();
    return;
}


// Function: test_calling_conventions at 0x4017d0
extern void _GLOBAL_OFFSET_TABLE_;
extern char g_403008;

int test_calling_conventions()
{
    unsigned int v14;  // edx
    void* *cur;  // edi
    unsigned int result;  // ecx
    char j[4];  // esi
    void* ptr;  // ebx
    void* v0;  // [bp-0x13c]
    void* v1;  // [bp-0xbc]
    unsigned int v2;  // [bp-0xb8]
    unsigned int v3[1];  // [bp-0xb4]
    unsigned int v4;  // [bp-0xb0]
    unsigned int v5;  // [bp-0xac]
    unsigned int idx;  // [bp-0xa8]
    unsigned int v7;  // [bp-0xa4]
    unsigned long v19;  // [bp-0xa0]
    unsigned int v8;  // [bp-0x24]
    void* v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x1c]
    unsigned int v11;  // [bp-0x18]
    unsigned int v12;  // [bp-0x14]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    printf(&g_403008);
    call_cdecl();
    printf(v1 - 12246);
    call_stdcall();
    printf(v1 - 12230);
    call_fastcall();
    printf(v1 - 12214);
    call_thiscall();
    printf(v1 - 12198);
    call_arm_aapcs();
    printf(v1 - 12182);
    call_mips();
    printf(v1 - 12166);
    call_amd64_sysv();
    printf(v1 - 12150);
    call_ms_x64();
    printf(v1 - 12134);
    call_vectorcall();
    printf(v1 - 12118);
    mixed_conventions_test();
    printf(v1 - 12102);
    v12 = varargs_func(5, 1);
    printf(v1 - 12086);
    v11 = func_no_args();
    printf(v1 - 12046);
    v10 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
    printf(v1 - 12012);
    v9 = v1 - 11973;
    v8 = func_mixed_args(10, v9, 1374389535);
    v0 = v1 - 11968;
    printf(v1 - 11968);
    for (idx = 0; idx < 16; idx += 1)
    {
        v14 = idx + 1;
        (&v7)[2 * idx] = v14;
        (&v19)[2 * idx] = v14 >> 31;
    }
    cur = &v0;
    result = 32;
    for (j = &v7; result; j += 1)
    {
        result -= 1;
        *((char [4])cur) = *(j);
        cur += 1;
    }
    v5 = func_struct_byval();
    printf(v1 - 11928);
    ptr = v1;
    *(v3) = (int)ptr[11316];
    v4 = (int)ptr[11312];
    v2 = func_struct_byptr(&v3);
    return printf(v1 - 11884);
}


// Function: sub_401b81 at 0x401b81
void sub_401b81(unsigned int a0)
{
    param_by_value_int();
    return;
}


// Function: param_by_value_int at 0x401b90
unsigned int param_by_value_int(unsigned int a0)
{
    a0 *= 2;
    return a0;
}


// Function: sub_401ba4 at 0x401ba4
int sub_401ba4()
{
    call_by_value_int();
    return;
}


// Function: call_by_value_int at 0x401bb0
int call_by_value_int()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = 5;
    v0 = param_by_value_int(v1);
    return v1 + v0;
}


// Function: sub_401be4 at 0x401be4
void sub_401be4(unsigned int a0)
{
    param_by_value_ptr();
    return;
}


// Function: param_by_value_ptr at 0x401bf0
unsigned int param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) * 2;
    ptr = 0;
    if (ptr)
        return 0;
    return 1;
}


// Function: sub_401c1c at 0x401c1c
int sub_401c1c()
{
    call_by_value_ptr();
    return;
}


// Function: call_by_value_ptr at 0x401c20
int call_by_value_ptr()
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = 5;
    v1 = &v2;
    v0 = param_by_value_ptr(v1);
    return v2 + v0;
}


// Function: sub_401c5a at 0x401c5a
void sub_401c5a()
{
    param_array_decay();
    return;
}


// Function: param_array_decay at 0x401c60
unsigned int param_array_decay()
{
    return 4;
}


// Function: call_array_decay at 0x401c70
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int call_array_decay()
{
    unsigned int v0;  // [bp-0x34]
    char v1;  // [bp-0x30]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    memset(&v1, 0, 40);
    return param_array_decay();
}


// Function: sub_401cbf at 0x401cbf
void sub_401cbf(unsigned int a0)
{
    param_string();
    return;
}


// Function: param_string at 0x401cc0
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: sub_401cd7 at 0x401cd7
int sub_401cd7()
{
    call_string_param();
    return;
}


// Function: call_string_param at 0x401ce0
unsigned int call_string_param()
{
    return param_string("Hello");
}


// Function: sub_401d05 at 0x401d05
void sub_401d05(unsigned int a0)
{
    param_ptr_array();
    return;
}


// Function: param_ptr_array at 0x401d10
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
    unsigned int i;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = 0;
    for (i = 0; i < a1; i += 1)
    {
        v1 += *((char *)*((int *)(a0 + i * 4)));
    }
    return v1;
}


// Function: sub_401d5e at 0x401d5e
int sub_401d5e()
{
    call_ptr_array();
    return;
}


// Function: call_ptr_array at 0x401d60
extern unsigned int g_405f10;
extern unsigned int g_405f14;
extern unsigned int g_405f18;

unsigned int call_ptr_array()
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v0 = g_405f10;
    v1 = g_405f14;
    v2 = g_405f18;
    return param_ptr_array(&v0, 3);
}


// Function: sub_401da7 at 0x401da7
void sub_401da7()
{
    param_varargs();
    return;
}


// Function: param_varargs at 0x401db0
unsigned int param_varargs(unsigned int a0, unsigned int a1)
{
    unsigned int *ptr;  // eax
    unsigned int i;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int *v2;  // [bp-0x8]

    v2 = &vvar_1;
    v1 = 0;
    for (i = 0; i < a0; i += 1)
    {
        ptr = v2;
        v2 = ptr + 1;
        v1 += *(ptr);
    }
    return v1;
}


// Function: sub_401e04 at 0x401e04
int sub_401e04()
{
    call_varargs_param();
    return;
}


// Function: call_varargs_param at 0x401e10
unsigned int call_varargs_param()
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v0 = 20;
    v1 = 30;
    v2 = 40;
    return param_varargs(4, 10);
}


// Function: sub_401e55 at 0x401e55
int sub_401e55()
{
    param_func_ptr();
    return;
}


// Function: param_func_ptr at 0x401e60
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
    char v0;  // [bp-0x8]
    char v1;  // [bp+0x0]

    return a0(a1, *((int *)&v0), &v1) + 10;
}


// Function: sub_401e8b at 0x401e8b
int sub_401e8b()
{
    call_func_ptr_param();
    return;
}


// Function: call_func_ptr_param at 0x401e90
unsigned int call_func_ptr_param()
{
    return param_func_ptr(callback_func, 5);
}


// Function: sub_401ebf at 0x401ebf
void sub_401ebf(unsigned int a0)
{
    callback_func();
    return;
}


// Function: callback_func at 0x401ec0
unsigned int callback_func(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401ece at 0x401ece
void sub_401ece(unsigned int a0)
{
    param_double_ptr();
    return;
}


// Function: param_double_ptr at 0x401ed0
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = v1;
    if (ptr && *(ptr))
    {
        *(ptr)->field_0 = a1;
        *(ptr) = NULL;
        v0 = 1;
        return v0;
    }
    v0 = 4294967295;
    return v0;
}


// Function: sub_401f1e at 0x401f1e
int sub_401f1e()
{
    call_double_ptr();
    return;
}


// Function: call_double_ptr at 0x401f20
int call_double_ptr()
{
    unsigned int v6;  // ebx
    unsigned int v7;  // esi
    unsigned int v0;  // [bp-0x18]
    char *v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x8]

    v4 = v6;
    v3 = v7;
    v2 = 10;
    v1 = &v2;
    v0 = param_double_ptr(&v1, 20);
    return v2 + (!v1 ? 1 : NULL);
}


// Function: sub_401f73 at 0x401f73
void sub_401f73(unsigned int a0, unsigned int a1)
{
    param_complex_cast();
    return;
}


// Function: param_complex_cast at 0x401f80
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x8]

    v0 = (!a1 ? *(a0) : (a1 == 1 ? *(a0) + a0[1] : 4294967295));
    return v0;
}


// Function: sub_401fec at 0x401fec
int sub_401fec()
{
    call_complex_cast();
    return;
}


// Function: call_complex_cast at 0x401ff0
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int call_complex_cast()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1[1];  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3[1];  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    *((unsigned int [1])v3) = 305419896;
    *((unsigned int [1])v1) = 100;
    v2 = 200;
    param_complex_cast(&v1, 1);
    return param_complex_cast(&v3, 0);
}


// Function: param_struct_byval at 0x402050
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
    return a0 + a15;
}


// Function: sub_40205d at 0x40205d
int sub_40205d()
{
    call_struct_byval();
    return;
}


// Function: call_struct_byval at 0x402060
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int call_struct_byval()
{
    char cur[4];  // edi
    unsigned int result;  // ecx
    char j[4];  // esi
    char v0;  // [bp-0x9c]
    char v1;  // [bp-0x98]
    char v2;  // [bp-0x94]
    char v3;  // [bp-0x90]
    char v4;  // [bp-0x8c]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x84]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x7c]
    char v9;  // [bp-0x78]
    char v10;  // [bp-0x74]
    char v11;  // [bp-0x70]
    char v12;  // [bp-0x6c]
    char v13;  // [bp-0x68]
    char v14;  // [bp-0x64]
    char v15;  // [bp-0x60]
    unsigned int v16;  // [bp-0x5c]
    unsigned int idx;  // [bp-0x58]
    unsigned long v18;  // [bp-0x54]

    v16 = &_GLOBAL_OFFSET_TABLE_;
    for (idx = 0; idx < 16; idx += 1)
    {
        (&v18)[idx] = idx;
    }
    cur = &v0;
    result = 16;
    for (j = &v18; result; j += 1)
    {
        result -= 1;
        *(cur) = *(j);
        cur += 1;
    }
    return param_struct_byval(*((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3), *((int *)&v4), *((int *)&v5), *((int *)&v6), *((int *)&v7), *((int *)&v8), *((int *)&v9), *((int *)&v10), *((int *)&v11), *((int *)&v12), *((int *)&v13), *((int *)&v14), *((int *)&v15));
}


// Function: sub_4020c3 at 0x4020c3
void sub_4020c3(unsigned int a0, unsigned int a1)
{
    param_order_dep();
    return;
}


// Function: param_order_dep at 0x4020d0
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_4020e1 at 0x4020e1
int sub_4020e1()
{
    call_order_dep();
    return;
}


// Function: call_order_dep at 0x4020f0
unsigned int call_order_dep()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0xc]

    v0 = 0;
    v0 += 1;
    v1 = v0 + 1;
    return param_order_dep(v0, v1);
}


// Function: sub_40212e at 0x40212e
int sub_40212e()
{
    test_parameter_passing();
    return;
}


// Function: test_parameter_passing at 0x402130
extern char _GLOBAL_OFFSET_TABLE_;
extern char g_4031d3;

int test_parameter_passing()
{
    unsigned int v0;  // [bp-0x18]
    char *v1;  // [bp-0xc]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    printf(&g_4031d3);
    v0 = call_by_value_int();
    printf(v1 + 11787);
    v0 = call_by_value_ptr();
    printf(v1 + 11770);
    v0 = call_array_decay();
    printf(v1 + 11753);
    v0 = call_string_param();
    printf(v1 + 11736);
    v0 = call_ptr_array();
    printf(v1 + 11719);
    v0 = call_varargs_param();
    printf(v1 + 11702);
    v0 = call_func_ptr_param();
    printf(v1 + 11685);
    v0 = call_double_ptr();
    printf(v1 + 11668);
    v0 = call_complex_cast();
    printf(v1 + 11651);
    v0 = call_struct_byval();
    printf(v1 + 11634);
    v0 = call_order_dep();
    return printf(v1 + 11617);
}


// Function: sub_402299 at 0x402299
void sub_402299(unsigned int a0)
{
    ret_basic_type();
    return;
}


// Function: ret_basic_type at 0x4022a0
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_4022ae at 0x4022ae
int sub_4022ae()
{
    call_ret_basic();
    return;
}


// Function: call_ret_basic at 0x4022b0
unsigned int call_ret_basic()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = 21;
    v0 = ret_basic_type(v1);
    return v0;
}


// Function: sub_4022e1 at 0x4022e1
void sub_4022e1(unsigned int a0)
{
    ret_pointer();
    return;
}


// Function: ret_pointer at 0x4022f0
int ret_pointer(unsigned int a0)
{
    return a0 + 4;
}


// Function: sub_4022fe at 0x4022fe
int sub_4022fe()
{
    call_ret_pointer();
    return;
}


// Function: call_ret_pointer at 0x402300
int call_ret_pointer()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]

    v1 = 10;
    v2 = 20;
    v3 = 30;
    v0 = ret_pointer(&v1);
    return *(v0);
}


// Function: sub_402347 at 0x402347
void sub_402347(unsigned int a0, unsigned int a1, unsigned int a2)
{
    ret_small_struct();
    return;
}


// Function: ret_small_struct at 0x402350
unsigned int [2] ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    *(ptr) = a1;
    ptr[1] = a2;
    return ptr;
}


// Function: sub_40236d at 0x40236d
int sub_40236d()
{
    call_ret_small_struct();
    return;
}


// Function: call_ret_small_struct at 0x402370
int call_ret_small_struct()
{
    unsigned int v4;  // ebx
    unsigned int v0[1];  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0x8]

    v2 = v4;
    ret_small_struct(&v0, 3, 4);
    return *(v0) + v1;
}


// Function: sub_4023ad at 0x4023ad
void sub_4023ad(unsigned int a0, unsigned int a1)
{
    ret_large_struct();
    return;
}


// Function: ret_large_struct at 0x4023b0
unsigned int ret_large_struct(unsigned int a0, unsigned int a1)
{
    unsigned int ptr;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int idx;  // [bp-0x8]

    ptr = a0;
    v1 = a0;
    for (idx = 0; idx < 16; idx += 1)
    {
        *((unsigned int *)(ptr + idx * 4)) = a1 + idx;
    }
    return v1;
}


// Function: sub_4023fa at 0x4023fa
int sub_4023fa()
{
    call_ret_large_struct();
    return;
}


// Function: call_ret_large_struct at 0x402400
int call_ret_large_struct()
{
    unsigned int v4;  // ebx
    char v0;  // [bp-0x4c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0x8]

    v2 = v4;
    ret_large_struct(&v0, 100);
    return *((int *)&v0) + v1;
}


// Function: sub_402435 at 0x402435
void sub_402435(unsigned int a0)
{
    func_a();
    return;
}


// Function: func_a at 0x402440
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: sub_40244e at 0x40244e
void sub_40244e(unsigned int a0)
{
    func_b();
    return;
}


// Function: func_b at 0x402450
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_40245e at 0x40245e
void sub_40245e(unsigned int a0)
{
    ret_func_ptr();
    return;
}


// Function: ret_func_ptr at 0x402460
int ret_func_ptr(unsigned int a0)
{
    if (!a0)
        return func_a;
    return func_b;
}


// Function: sub_402489 at 0x402489
int sub_402489()
{
    call_ret_func_ptr();
    return;
}


// Function: call_ret_func_ptr at 0x402490
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int call_ret_func_ptr()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int *v1;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v1 = ret_func_ptr(1);
    return v1(5);
}


// Function: sub_4024c8 at 0x4024c8
void sub_4024c8(unsigned int a0)
{
    ret_opaque_handle();
    return;
}


// Function: ret_opaque_handle at 0x4024d0
extern char ret_opaque_handle.handle2;

int ret_opaque_handle(unsigned int a0)
{
    if (a0)
        return &ret_opaque_handle.handle2;
    return "d";
}


// Function: sub_4024f9 at 0x4024f9
int sub_4024f9()
{
    call_ret_opaque();
    return;
}


// Function: call_ret_opaque at 0x402500
int call_ret_opaque()
{
    unsigned int *v0;  // [bp-0xc]

    v0 = ret_opaque_handle(0);
    return *(v0);
}


// Function: sub_40252f at 0x40252f
void sub_40252f(unsigned int a0, unsigned int a1)
{
    ret_complex_expr();
    return;
}


// Function: ret_complex_expr at 0x402530
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x8]

    v0 = v1;
    v0 = (a0 <= a1 ? a2 + 10 : a2 * 2);
    return v0;
}


// Function: sub_402568 at 0x402568
int sub_402568()
{
    call_ret_complex_expr();
    return;
}


// Function: call_ret_complex_expr at 0x402570
extern unsigned int _GLOBAL_OFFSET_TABLE_;

int call_ret_complex_expr()
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v2 = ret_complex_expr(5, 3, 10);
    v1 = ret_complex_expr(3, 5, 10);
    return v2 + v1;
}


// Function: sub_4025d3 at 0x4025d3
void sub_4025d3(unsigned int a0)
{
    ret_multi_branch();
    return;
}


// Function: ret_multi_branch at 0x4025e0
unsigned int ret_multi_branch(unsigned int a0)
{
    unsigned int v0;  // [bp-0x8]

    v0 = (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
    return v0;
}


// Function: sub_402651 at 0x402651
int sub_402651()
{
    call_ret_multi_branch();
    return;
}


// Function: call_ret_multi_branch at 0x402660
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int call_ret_multi_branch()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    v1 = 0;
    v1 += ret_multi_branch(0);
    v1 += ret_multi_branch(1);
    v1 += ret_multi_branch(2);
    return v1;
}


// Function: sub_4026c4 at 0x4026c4
void sub_4026c4(unsigned int a0, unsigned int a1)
{
    ret_void();
    return;
}


// Function: ret_void at 0x4026d0
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return ptr;
}


// Function: sub_4026e4 at 0x4026e4
int sub_4026e4()
{
    call_ret_void();
    return;
}


// Function: call_ret_void at 0x4026f0
unsigned int call_ret_void()
{
    unsigned int v0[1];  // [bp-0xc]

    ret_void(7, &v0);
    return v0;
}


// Function: sub_40271f at 0x40271f
int sub_40271f()
{
    test_return_values();
    return;
}


// Function: test_return_values at 0x402720
extern char _GLOBAL_OFFSET_TABLE_;
extern char g_4032b0;

int test_return_values()
{
    unsigned int v0;  // [bp-0x18]
    char *v1;  // [bp-0xc]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    printf(&g_4032b0);
    v0 = call_ret_basic();
    printf(v1 + 11569);
    v0 = call_ret_pointer();
    printf(v1 + 11541);
    v0 = call_ret_small_struct();
    printf(v1 + 11513);
    v0 = call_ret_large_struct();
    printf(v1 + 11486);
    v0 = call_ret_func_ptr();
    printf(v1 + 11457);
    v0 = call_ret_opaque();
    printf(v1 + 11429);
    v0 = call_ret_complex_expr();
    printf(v1 + 11400);
    v0 = call_ret_multi_branch();
    printf(v1 + 11372);
    v0 = call_ret_void();
    return printf(v1 + 11344);
}


// Function: sub_40284f at 0x40284f
int sub_40284f()
{
    main();
    return;
}


// Function: main at 0x402850
extern unsigned int _GLOBAL_OFFSET_TABLE_;

unsigned int main()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int result;  // [bp-0xc]

    v0 = &_GLOBAL_OFFSET_TABLE_;
    result = 0;
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}


// Function: sub_40288a at 0x40288a
void sub_40288a()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x402890
typedef struct struct_0 {
    char padding_0[13923];
    struct struct_1 *field_3663;
    struct struct_1 *field_3667;
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
    ptr = &v2[1].padding_0[251];
    v4 = *((int *)&ptr->padding_0[0x100]);
    if (*((int *)&ptr->padding_0[0x100]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[0x100];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_4028d2 at 0x4028d2
void sub_4028d2()
{
}


// Function: _fini at 0x4028dc
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

