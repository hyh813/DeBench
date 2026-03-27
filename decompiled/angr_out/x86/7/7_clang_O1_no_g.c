// Angr Decompilation of 7_clang_O1_no_g
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


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
    void* v1;  // ebx

    goto (int)v1[16];
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
}


// Function: _start at 0x4010d0
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


// Function: sub_4010fb at 0x4010fb
void sub_4010fb()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198651()
}


// Function: sub_4010fc at 0x4010fc
void sub_4010fc()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401100
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401104 at 0x401104
void sub_401104()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401110
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[3017] + 3;
}


// Function: sub_401143 at 0x401143
void sub_401143()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401150
typedef struct struct_0 {
    char padding_0[11943];
    struct struct_1 *field_2ea7;
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
    v3 = (char *)&v2->field_2ea7 + 3;
    v0 = v4;
    if (!(&v3->padding_0[60] - &v3->padding_0[60] >> 31) + (&v3->padding_0[60] - &v3->padding_0[60] >> 2) >> 1)
    {
        return (&v3->padding_0[60] - &v3->padding_0[60] >> 31) + (&v3->padding_0[60] - &v3->padding_0[60] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[4]))
    {
        return (*((int *)&v3->padding_0[4]))(&v3->padding_0[60], (&v3->padding_0[60] - &v3->padding_0[60] >> 31) + (&v3->padding_0[60] - &v3->padding_0[60] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[60] - &v3->padding_0[60] >> 31) + (&v3->padding_0[60] - &v3->padding_0[60] >> 2) >> 1;
    }
}


// Function: sub_401197 at 0x401197
void sub_401197()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4011a0
typedef struct struct_0 {
    char padding_0[11843];
    unsigned int field_2e43;
    char padding_2e47[60];
    unsigned int field_2e83;
    char padding_2e87[8];
    char field_2e8f;
    char padding_2e90[3];
    unsigned int field_2e93;
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
    ptr = &v6->padding_2e47[11];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[60])
        return v5;
    if (*((int *)&ptr->padding_0[16]))
        sub_4010c0(*((int *)&ptr->padding_0[48]));
    v10 = &ptr->padding_0[236];
    v11 = *((int *)&ptr->padding_0[64]);
    i = (&ptr->padding_0[232] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[64]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[64]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[64]);
        } while (*((int *)&ptr->padding_0[64]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[60] = 1;
    return v14;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401230
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401239
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40123d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_401241 at 0x401241
void sub_401241(unsigned int a0)
{
    param_fake_branch();
    return;
}


// Function: param_fake_branch at 0x401250
int param_fake_branch(unsigned int a0)
{
    return a0;
}


// Function: sub_401255 at 0x401255
void sub_401255()
{
    call_fake_branch();
    return;
}


// Function: call_fake_branch at 0x401260
unsigned int call_fake_branch()
{
    return 10;
}


// Function: sub_401266 at 0x401266
int sub_401266()
{
    param_opaque_predicate();
    return;
}


// Function: param_opaque_predicate at 0x401270
int param_opaque_predicate(unsigned int a0)
{
    unsigned int v3;  // ebx
    unsigned int v4;  // edi
    unsigned int v13;  // cc_ndep
    unsigned int result;  // edx
    unsigned int v15;  // ebx
    unsigned int v5;  // esi
    unsigned int v6;  // esi
    unsigned int v7;  // edi
    unsigned int v8;  // edi
    unsigned int v9;  // ebx
    unsigned int v10;  // cc_op
    unsigned int v11;  // cc_dep1
    unsigned int v12;  // cc_dep2
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = v4;
    v0 = v5;
    v6 = a0;
    v7 = v6;
    v8 = v7 + 1;
    v9 = v6;
    if (!((char)_ccall(4, 18, v7 + 1, 0, _ccall(v10, v11, v12, v13))))
    {
        v9 = v6;
        result = v8;
        do
        {
            v15 = result;
            v9 = v15;
            result = ((int)((v9 >> 31 CONCAT v9) % v15) CONCAT (int)((v9 >> 31 CONCAT v9) / v15)) >> 32;
        } while (result);
    }
    if (v9 != 1 || (v8 * v8 ^ (v6 * 2 | 1) + v6 * v6))
        return v6 * 3 + 20;
    return v6 * 2 + 10;
}


// Function: sub_4012c1 at 0x4012c1
void sub_4012c1()
{
    call_opaque_predicate();
    return;
}


// Function: call_opaque_predicate at 0x4012d0
unsigned int call_opaque_predicate()
{
    unsigned int flag1;  // edx
    unsigned int v2;  // eax
    unsigned int result;  // ecx

    flag1 = 6;
    v2 = 5;
    do
    {
        result = flag1;
        flag1 = ((int)((v2 >> 31 CONCAT v2) % result) CONCAT (int)((v2 >> 31 CONCAT v2) / result)) >> 32;
        v2 = result;
    } while (flag1);
    if (result != 1)
        return 35;
    return 20;
}


// Function: sub_4012fc at 0x4012fc
void sub_4012fc(unsigned int a0)
{
    param_instruction_substitution();
    return;
}


// Function: param_instruction_substitution at 0x401300
int param_instruction_substitution(unsigned int a0)
{
    return a0 * 21 + (a0 & 15) + (a0 >> 1);
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
    call_instruction_substitution();
    return;
}


// Function: call_instruction_substitution at 0x401320
unsigned int call_instruction_substitution()
{
    return 225;
}


// Function: sub_401326 at 0x401326
int sub_401326()
{
    decrypt_string();
    return;
}


// Function: decrypt_string at 0x401330
char [2] decrypt_string(char *a0, char *p, unsigned int a2, char a3)
{
    unsigned int dst;  // eax
    char v1;  // al
    char ptr[2];  // edx

    dst = strncpy(p, a0, a2);
    p[1 + a2] = 0;
    v1 = *(p);
    if (!*(p))
        return p;
    ptr = p + 1;
    do
    {
        ptr[1] = v1 ^ a3;
        v1 = ptr[0];
        ptr = &ptr[1];
    } while (ptr[0]);
    return p;
}


// Function: sub_401385 at 0x401385
int sub_401385()
{
    param_string_encryption();
    return;
}


// Function: param_string_encryption at 0x401390
int param_string_encryption()
{
    void* ptr;  // ecx
    char v5;  // al
    char flag1;  // [bp-0x28]
    char v1;  // [bp-0x27]
    char result;  // [bp-0x9]

    result = 0;
    if (flag1)
    {
        ptr = &v1;
        v5 = flag1;
        do
        {
            *((char *)&ptr[1]) = v5 ^ 90;
            v5 = *((char *)ptr);
            ptr += 1;
        } while (*((char *)ptr));
    }
    return strlen(&flag1) + flag1;
}


// Function: sub_4013f8 at 0x4013f8
int sub_4013f8()
{
    call_string_encryption();
    return;
}


// Function: call_string_encryption at 0x401400
int call_string_encryption()
{
    void* ptr;  // ecx
    char v5;  // al
    char flag1;  // [bp-0x28]
    char v1;  // [bp-0x27]
    char result;  // [bp-0x9]

    result = 0;
    if (flag1)
    {
        ptr = &v1;
        v5 = flag1;
        do
        {
            *((char *)&ptr[1]) = v5 ^ 90;
            v5 = *((char *)ptr);
            ptr += 1;
        } while (*((char *)ptr));
    }
    return strlen(&flag1) + flag1;
}


// Function: sub_401468 at 0x401468
int sub_401468()
{
    param_tail_call_optimized();
    return;
}


// Function: param_tail_call_optimized at 0x401470
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    if (a0 <= 0)
        return a1;
    return param_tail_call_optimized(a0 - 1, a1 + a0);
}


// Function: sub_4014a3 at 0x4014a3
int sub_4014a3()
{
    call_tail_call_optimized();
    return;
}


// Function: call_tail_call_optimized at 0x4014b0
unsigned int call_tail_call_optimized()
{
    return param_tail_call_optimized(1000, 0);
}


// Function: sub_4014d4 at 0x4014d4
int sub_4014d4()
{
    param_non_tail_call();
    return;
}


// Function: param_non_tail_call at 0x4014e0
unsigned int param_non_tail_call(unsigned int a0)
{
    return (a0 <= 0 ? 0 : param_non_tail_call(a0 - 1) + a0);
}


// Function: sub_40150e at 0x40150e
int sub_40150e()
{
    call_non_tail_call();
    return;
}


// Function: call_non_tail_call at 0x401510
unsigned int call_non_tail_call()
{
    return param_non_tail_call(100);
}


// Function: sub_401531 at 0x401531
int sub_401531()
{
    param_vectorized_loop();
    return;
}


// Function: param_vectorized_loop at 0x401540
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int i)
{
    unsigned int idx;  // edi
    unsigned int index;  // esi
    unsigned int v2;  // eax

    if (i > 0)
    {
        idx = 0;
        do
        {
            *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
            idx += 1;
        } while (i != idx);
    }
    if (i <= 0)
        return 0;
    index = 0;
    v2 = 0;
    do
    {
        v2 += *((int *)(ptr + index * 4));
        index += 1;
    } while (i != index);
    return v2;
}


// Function: sub_401592 at 0x401592
void sub_401592()
{
    call_vectorized_loop();
    return;
}


// Function: call_vectorized_loop at 0x4015a0
extern unsigned int g_402008;
extern unsigned int g_402028;

unsigned int call_vectorized_loop()
{
    unsigned int index;  // eax
    unsigned int *v4;  // ecx
    unsigned int *v5;  // edx
    unsigned int idx;  // ecx
    unsigned int v7;  // eax
    unsigned int result;  // [bp-0x24]
    char v1;  // [bp-0x20]

    memset(&v1, 0, 28);
    result = 0;
    index = 0;
    v4 = &g_402028;
    v5 = &g_402008;
    do
    {
        (&result)[index] = *(v4) + *(v5);
        index += 1;
        v4 += 1;
        v5 += 1;
    } while (index != 8);
    idx = 0;
    v7 = 0;
    do
    {
        v7 += (&result)[idx];
        idx += 1;
    } while (idx != 8);
    return v7;
}


// Function: param_link_time_optimization at 0x401630
int param_link_time_optimization(unsigned int a0)
{
    return a0 * 2 + 10;
}


// Function: sub_40163a at 0x40163a
void sub_40163a()
{
    call_link_time_optimization();
    return;
}


// Function: call_link_time_optimization at 0x401640
unsigned int call_link_time_optimization()
{
    return 20;
}


// Function: sub_401646 at 0x401646
int sub_401646()
{
    div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x401650
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    div_zero_caught = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: sub_40167b at 0x40167b
int sub_40167b()
{
    param_division_by_zero();
    return;
}


// Function: param_division_by_zero at 0x401680
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
        return 4294967295;
    return (int)((0 CONCAT 10) % a0) CONCAT (int)((0 CONCAT 10) / a0);
}


// Function: sub_4016d2 at 0x4016d2
int sub_4016d2()
{
    call_division_by_zero();
    return;
}


// Function: call_division_by_zero at 0x4016e0
int call_division_by_zero()
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    v1 = param_division_by_zero(5);
    v2 = param_division_by_zero(0);
    signal(8, NULL);
    return v2 + v1;
}


// Function: sub_40172d at 0x40172d
int sub_40172d()
{
    segv_handler(); /* do not return */
}


// Function: segv_handler at 0x401730
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: sub_40175b at 0x40175b
int sub_40175b()
{
    param_null_pointer_deref();
    return;
}


// Function: param_null_pointer_deref at 0x401760
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
    signal(11, segv_handler);
    if (_setjmp(&segv_buffer))
        return 4294967295;
    return *(a0);
}


// Function: sub_4017ab at 0x4017ab
int sub_4017ab()
{
    call_null_pointer_deref();
    return;
}


// Function: call_null_pointer_deref at 0x4017b0
int call_null_pointer_deref()
{
    unsigned int v2;  // eax
    unsigned int v3;  // eax
    unsigned int v0[1];  // [bp-0x10]

    *((unsigned int [1])v0) = 42;
    v2 = param_null_pointer_deref(&v0);
    v3 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    return v3 + v2;
}


// Function: sub_401805 at 0x401805
void sub_401805(unsigned int a0)
{
    param_buffer_overflow_stack();
    return;
}


// Function: param_buffer_overflow_stack at 0x401810
int param_buffer_overflow_stack(unsigned int a0)
{
    return a0;
}


// Function: sub_401815 at 0x401815
void sub_401815(unsigned int a0)
{
    param_buffer_overflow_heap();
    return;
}


// Function: param_buffer_overflow_heap at 0x401820
int param_buffer_overflow_heap(unsigned int a0)
{
    return a0;
}


// Function: sub_401825 at 0x401825
void sub_401825()
{
    call_buffer_overflow();
    return;
}


// Function: call_buffer_overflow at 0x401830
unsigned int call_buffer_overflow()
{
    return 30;
}


// Function: sub_401836 at 0x401836
void sub_401836(unsigned int a0, unsigned int a1)
{
    param_integer_overflow();
    return;
}


// Function: param_integer_overflow at 0x401840
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax
    unsigned int v3;  // eax

    v0 = a1 + a0;
    if (a0 > 0 && a1 > 0 && v0 < 0)
        return 4294967295;
    if (v0 <= 0)
        v1 = v0;
    else
        v1 = 4294967294;
    v3 = v1;
    if ((a0 & a1) < 0)
        return v3;
    return v0;
}


// Function: call_integer_overflow at 0x401870
unsigned int call_integer_overflow()
{
    return 0x77359400;
}


// Function: sub_401876 at 0x401876
void sub_401876(unsigned int a0)
{
    param_undefined_behavior();
    return;
}


// Function: param_undefined_behavior at 0x401880
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401887 at 0x401887
void sub_401887()
{
    call_undefined_behavior();
    return;
}


// Function: call_undefined_behavior at 0x401890
unsigned int call_undefined_behavior()
{
    return 10;
}


// Function: sub_401896 at 0x401896
void sub_401896()
{
    param_implementation_defined();
    return;
}


// Function: param_implementation_defined at 0x4018a0
unsigned int param_implementation_defined()
{
    return 43;
}


// Function: sub_4018a6 at 0x4018a6
void sub_4018a6()
{
    call_implementation_defined();
    return;
}


// Function: call_implementation_defined at 0x4018b0
unsigned int call_implementation_defined()
{
    return 43;
}


// Function: sub_4018b6 at 0x4018b6
int sub_4018b6()
{
    test_obf_opt_edge();
    return;
}


// Function: test_obf_opt_edge at 0x4018c0
extern unsigned int g_402008;
extern unsigned int g_402028;
extern char g_402048;
extern char g_402064;
extern char g_402080;
extern char g_40209d;
extern char g_4020b9;
extern char g_4020e3;
extern char g_402108;
extern char g_40212e;
extern char g_40214e;
extern char g_40216a;
extern char g_402187;
extern char g_4021a4;
extern char g_4021d5;
extern char g_4021f2;
extern char g_402219;
extern char param_string_encryption.encrypted;

int test_obf_opt_edge()
{
    unsigned int flag2;  // edx
    unsigned int v5;  // eax
    unsigned int k;  // ecx
    unsigned int flag1;  // ecx
    void* ptr;  // ecx
    char v8;  // al
    unsigned int idx;  // eax
    unsigned int *v12;  // ecx
    unsigned int *v13;  // edx
    char v0[1];  // [bp-0x30]
    char v1;  // [bp-0x2f]
    char result;  // [bp-0x11]

    puts(&g_402219);
    printf(&g_402048);
    flag2 = 6;
    v5 = 5;
    do
    {
        flag1 = flag2;
        flag2 = ((int)((v5 >> 31 CONCAT v5) % flag1) CONCAT (int)((v5 >> 31 CONCAT v5) / flag1)) >> 32;
        v5 = flag1;
    } while (flag2);
    printf(&g_402064);
    printf(&g_402080);
    strncpy(&v0, &param_string_encryption.encrypted, 32);
    result = 0;
    if (v0)
    {
        ptr = &v1;
        v8 = v0;
        do
        {
            *((char *)&ptr[1]) = v8 ^ 90;
            v8 = *((char *)ptr);
            ptr += 1;
        } while (*((char *)ptr));
    }
    strlen(&v0);
    printf(&g_40209d);
    param_tail_call_optimized(1000, 0);
    printf(&g_4020b9);
    param_non_tail_call(100);
    printf(&g_4020e3);
    memset(&v0, 0, 32);
    idx = 0;
    v12 = &g_402028;
    v13 = &g_402008;
    do
    {
        *((unsigned int *)&(&v0)[4 * idx]) = *(v12) + *(v13);
        idx += 1;
        v12 += 1;
        v13 += 1;
    } while (idx != 8);
    k = 0;
    do
    {
        k += 1;
    } while (k != 8);
    printf(&g_402108);
    printf(&g_40212e);
    param_division_by_zero(5);
    param_division_by_zero(0);
    signal(8, NULL);
    printf(&g_40214e);
    *((unsigned int *)&v0) = 42;
    param_null_pointer_deref(&v0);
    param_null_pointer_deref(NULL);
    signal(11, NULL);
    printf(&g_40216a);
    printf(&g_402187);
    printf(&g_4021a4);
    printf(&g_4021d5);
    return printf(&g_4021f2);
}


// Function: main at 0x401ba0
unsigned int main()
{
    test_obf_opt_edge();
    return 0;
}


// Function: sub_401bbc at 0x401bbc
void sub_401bbc()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x401bc0
typedef struct struct_0 {
    char padding_0[9023];
    struct struct_1 *field_233f;
    struct struct_1 *field_2343;
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
    ptr = &v2[1].padding_0[239];
    v4 = *((int *)&ptr->padding_0[244]);
    if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[244];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_401c02 at 0x401c02
void sub_401c02()
{
}


// Function: _fini at 0x401c0c
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

