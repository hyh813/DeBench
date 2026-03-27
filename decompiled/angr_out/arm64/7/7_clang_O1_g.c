// Angr Decompilation of 7_clang_O1_g
// Platform: AARCH64

// Function: _init at 0x400710
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400730
extern unsigned long long g_411ff8;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_411ff8;
}


// Function: sub_400744 at 0x400744
long long sub_400744()
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
extern unsigned long long g_411fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_411fd0)
        return 0;
    v0 = __gmon_start__(g_411fd0);
    return __gmon_start__(g_411fd0);
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
extern unsigned long long g_411fe0;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_411fe0)
    {
        goto g_411fe0;
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
extern unsigned long long g_411fc8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_411fc8)
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


// Function: param_fake_branch at 0x400914
long long param_fake_branch()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: call_fake_branch at 0x400918
unsigned long long call_fake_branch()
{
    return 10;
}


// Function: param_opaque_predicate at 0x400920
long long param_opaque_predicate(unsigned long a0)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // cc_dep1
    unsigned int flag1;  // w10
    unsigned int v3;  // w11
    unsigned int result;  // w12
    unsigned long v5;  // x9
    unsigned long v6;  // x11
    unsigned long long v7;  // cc_op
    unsigned long long v8;  // cc_dep1
    unsigned long long v9;  // cc_dep2

    v0 = (unsigned int)a0 + 1;
    v1 = a0 & 4294967295;
    flag1 = a0;
    if (!((char)arm64g_calculate_condition(33, a0 & 4294967295, 1, 0)))
    {
        v3 = a0;
        result = v0;
        do
        {
            flag1 = result;
            result = v3 - flag1 * v3 / result;
            v3 = flag1;
        } while (result);
    }
    v5 = v0 * v0;
    v6 = (((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294 | 1) + (unsigned int)a0 * (unsigned int)a0;
    if (flag1 == 1)
    {
        v7 = 3;
        v8 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v6 & 4294967295 : 0);
        v9 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v5 & 4294967295 : 0);
    }
    else
    {
        v7 = 0;
        v8 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v6 & 4294967295 : 0);
        v9 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v5 & 4294967295 : 0);
    }
    if (!((char)arm64g_calculate_condition(v7, v8, v9, 0)))
        return (unsigned int)a0 * 3 + 20;
    return (((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294) + 10;
}


// Function: call_opaque_predicate at 0x400974
unsigned long long call_opaque_predicate()
{
    unsigned int flag1;  // w8
    unsigned int v1;  // w9
    unsigned int result;  // w10

    flag1 = 6;
    v1 = 5;
    do
    {
        result = flag1;
        flag1 = v1 - result * v1 / flag1;
        v1 = result;
    } while (flag1);
    if (result != 1)
        return 35;
    return 20;
}


// Function: param_instruction_substitution at 0x4009a4
int param_instruction_substitution(unsigned int a0)
{
    return (a0 & 15) + (a0 >> 1) + 21 * a0;
}


// Function: call_instruction_substitution at 0x4009b8
unsigned long long call_instruction_substitution()
{
    return 225;
}


// Function: decrypt_string at 0x4009c0
char [2] decrypt_string(char *a0, char *ptr, unsigned long n, char a3)
{
    unsigned int result;  // w8
    char cur[2];  // x10
    unsigned int v4;  // w8
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    strncpy(ptr, a0, n);
    ptr[1 + n] = 0;
    result = *(ptr);
    if (!result)
        return ptr;
    cur = ptr + 1;
    do
    {
        v4 = cur[0];
        cur[1] = (char)result ^ a3;
        cur = &cur[1];
        result = v4;
    } while (result);
    return ptr;
}


// Function: param_string_encryption at 0x400a28
extern char $d.1;

int param_string_encryption()
{
    unsigned int result;  // w8
    void* cur;  // x9
    unsigned int v6;  // w8
    char v0[31];  // [bp-0x40]
    char flag1;  // [bp-0x21]
    char *v2;  // [bp-0x20]
    char v3;  // [bp+0x0]

    v2 = &v3;
    strncpy(&v0, &$d.1, 32);
    result = (unsigned int)v0;
    flag1 = 0;
    if (result)
    {
        cur = &v0 | 1;
        do
        {
            v6 = *((char *)cur);
            *((char *)&cur[1]) = (char)result ^ 90;
            cur += 1;
            result = v6;
        } while (result);
    }
    return (unsigned int)strlen(&v0) + (unsigned int)v0;
}


// Function: call_string_encryption at 0x400a98
extern char $d.1;

int call_string_encryption()
{
    unsigned int result;  // w8
    void* cur;  // x9
    unsigned int v6;  // w8
    char v0[1][31];  // [bp-0x40]
    char flag1;  // [bp-0x21]
    char *v2;  // [bp-0x20]
    char v3;  // [bp+0x0]

    v2 = &v3;
    strncpy(&v0, &$d.1, 32);
    result = (unsigned int)v0;
    flag1 = 0;
    if (result)
    {
        cur = &v0 | 1;
        do
        {
            v6 = *((char *)cur);
            *((char *)&cur[1]) = (char)result ^ 90;
            cur += 1;
            result = v6;
        } while (result);
    }
    return (unsigned int)strlen(&v0) + (unsigned int)v0;
}


// Function: param_tail_call_optimized at 0x400b08
int param_tail_call_optimized(unsigned long a0, unsigned long a1)
{
    unsigned long long v3;  // x30
    char *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    if ((unsigned int)a0 < 1)
        return a1;
    v0 = &v2;
    v1 = v3;
    return param_tail_call_optimized((unsigned int)a0 - 1, a1 + (a0 & 4294967295));
}


// Function: call_tail_call_optimized at 0x400b34
int call_tail_call_optimized()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x400b50
unsigned long long param_non_tail_call(unsigned long a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if ((unsigned int)a0 < 1)
        return 0;
    return param_non_tail_call((unsigned int)a0 - 1) + (a0 & 4294967295);
}


// Function: call_non_tail_call at 0x400b84
unsigned long long call_non_tail_call()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_non_tail_call(100);
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400b9c
unsigned long long param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *cur, unsigned int a3)
{
    unsigned long i;  // x8
    unsigned int *ptr;  // x9
    unsigned long long v11;  // x0
    unsigned int *v2;  // x0
    unsigned int *v3;  // x1
    unsigned long v4;  // x8
    unsigned long long v6;  // x0
    unsigned long j;  // x8
    unsigned long long v8;  // x0
    unsigned long v9;  // x9

    if (a3 >= 1)
    {
        i = a3;
        ptr = cur;
        do
        {
            v2 = a0 + 1;
            v3 = a1 + 1;
            v4 = i - 1;
            *(ptr) = *(a1) + *(a0);
            i = v4;
            ptr += 1;
            a0 = v2;
            a1 = v3;
        } while (i != 1);
    }
    if (a3 < 1)
        return 0;
    v6 = 0;
    j = a3;
    do
    {
        v8 = v6;
        cur += 1;
        v11 = *(cur) + v8;
        j -= 1;
        v6 = v11;
    } while (j != 1);
    return v9 + v8;
}


// Function: call_vectorized_loop at 0x400bf0
extern char $d.2;
extern char g_4010d8;

long long call_vectorized_loop()
{
    unsigned long long idx;  // x8
    unsigned long long j;  // x8
    unsigned long long v4;  // x0
    unsigned long long v5;  // x0
    unsigned long v6;  // x10
    unsigned long long v7;  // x0
    int result;  // [bp-0x20]
    uint128_t flag1;  // [bp-0x10]

    idx = 0;
    *((uint128_t *)&result) = 0;
    flag1 = 0;
    do
    {
        *((int *)((char *)&result + idx)) = *((int *)&(&g_4010d8)[idx]) + *((int *)&(&$d.2)[idx]);
        idx += 4;
    } while (idx != 32);
    j = 0;
    v4 = 0;
    do
    {
        v5 = v4;
        j += 4;
        v7 = *((int *)((char *)&result + j)) + v5;
        v4 = v7;
    } while (j != 32);
    return v6 + v5;
}


// Function: param_link_time_optimization at 0x400c58
int param_link_time_optimization(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: call_link_time_optimization at 0x400c64
unsigned long long call_link_time_optimization()
{
    return 20;
}


// Function: div_zero_handler at 0x400c6c
extern unsigned int $d.3;
extern unsigned long long jmp_buffer;

long long div_zero_handler()
{
    unsigned long long v3;  // x30
    char *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = v3;
    $d.3 = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x400c90
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero(unsigned long a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    signal(8, div_zero_handler);
    if (!_setjmp(&jmp_buffer))
        return 10 / (a0 & 4294967295);
    return 4294967295;
}


// Function: call_division_by_zero at 0x400cdc
int call_division_by_zero()
{
    unsigned int v2;  // w0
    unsigned int v3;  // w0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_division_by_zero(5);
    v3 = param_division_by_zero(0);
    signal(8, NULL);
    return v3 + v2;
}


// Function: segv_handler at 0x400d1c
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;

long long segv_handler()
{
    unsigned long long v3;  // x30
    char *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = v3;
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x400d40
extern unsigned long long segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    signal(11, segv_handler);
    if (!_setjmp(&segv_buffer))
        return *(a0);
    return 4294967295;
}


// Function: call_null_pointer_deref at 0x400d88
int call_null_pointer_deref()
{
    unsigned int v3;  // w0
    unsigned int v4;  // w0
    unsigned int v0;  // [bp-0x24]
    char *v1;  // [bp-0x20]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = 42;
    v3 = param_null_pointer_deref(&v0);
    v4 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    return v4 + v3;
}


// Function: param_buffer_overflow_stack at 0x400dd8
long long param_buffer_overflow_stack()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: param_buffer_overflow_heap at 0x400ddc
long long param_buffer_overflow_heap()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: call_buffer_overflow at 0x400de0
unsigned long long call_buffer_overflow()
{
    return 30;
}


// Function: param_integer_overflow at 0x400de8
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // x8
    unsigned long long v1;  // cc_dep1
    unsigned long v2;  // x9
    unsigned long long v3;  // cc_op
    unsigned long long v4;  // cc_dep1

    v0 = a1 + a0;
    v1 = a0 & 4294967295;
    if ((unsigned int)a0 >= 1)
    {
        v1 = a1 & 4294967295;
        if ((unsigned int)a1 >= 1 && ((char)(v0 >> 31) & 1))
            return 4294967295;
    }
    v2 = (unsigned int)a1 & (unsigned int)a0;
    if (0 < (unsigned int)v0)
    {
        v3 = 3;
        v4 = ((char)arm64g_calculate_condition(195, v1, 1, 0) ? v2 & 4294967295 : 0);
    }
    else
    {
        v3 = 0;
        v4 = ((char)arm64g_calculate_condition(195, v1, 1, 0) ? v2 & 4294967295 : 0);
    }
    if (!((char)arm64g_calculate_condition(v3 | 176, v4, 0, 0)))
        return v0 & 4294967295;
    return 4294967294;
}


// Function: call_integer_overflow at 0x400e20
unsigned long long call_integer_overflow()
{
    return 0x77359400;
}


// Function: param_undefined_behavior at 0x400e2c
unsigned int param_undefined_behavior(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x400e34
unsigned long long call_undefined_behavior()
{
    return 10;
}


// Function: param_implementation_defined at 0x400e3c
unsigned long long param_implementation_defined()
{
    return 48;
}


// Function: call_implementation_defined at 0x400e44
unsigned long long call_implementation_defined()
{
    return 48;
}


// Function: test_obf_opt_edge at 0x400e4c
extern char $d.1;
extern char $d.2;
extern char $d.4;
extern char g_4010d8;
extern char g_401114;
extern char g_401130;
extern char g_40114d;
extern char g_401169;
extern char g_401193;
extern char g_4011b8;
extern char g_4011de;
extern char g_4011fe;
extern char g_40121a;
extern char g_401237;
extern char g_401254;
extern char g_401285;
extern char g_4012a2;
extern char g_4012c9;

int test_obf_opt_edge()
{
    unsigned int flag4;  // w8
    unsigned int v8;  // w9
    unsigned long long idx;  // x8
    unsigned long long l;  // x8
    unsigned long long v19;  // x1
    unsigned long long v20;  // x8
    unsigned long long v21;  // x0
    unsigned long long v22;  // x0
    unsigned long long v23;  // x0
    unsigned long long v24;  // x0
    unsigned int flag3;  // w10
    unsigned long long v10;  // x1
    unsigned int result;  // w8
    void* cur;  // x9
    unsigned int v13;  // w8
    char v0[16];  // [bp-0x40]
    uint128_t v3;  // [bp-0x30]
    char flag1;  // [bp-0x21]
    char *v5;  // [bp-0x20]
    char v6;  // [bp+0x0]

    v5 = &v6;
    puts(&g_4012c9);
    printf(&$d.4, 10);
    flag4 = 6;
    v8 = 5;
    do
    {
        flag3 = flag4;
        flag4 = v8 - flag3 * v8 / flag4;
        v8 = flag3;
    } while (flag4);
    if (flag3 == 1)
        v10 = 20;
    else
        v10 = 35;
    printf(&g_401114, v10);
    printf(&g_401130, 225);
    strncpy(&v0, &$d.1, 32);
    result = (unsigned int)v0;
    flag1 = 0;
    if (result)
    {
        cur = &v0 | 1;
        do
        {
            v13 = *((char *)cur);
            *((char *)&cur[1]) = (char)result ^ 90;
            cur += 1;
            result = v13;
        } while (result);
    }
    printf(&g_40114d, strlen(&v0) + (unsigned long long)v0);
    printf(&g_401169, param_tail_call_optimized(1000, 0) & 4294967295);
    printf(&g_401193, param_non_tail_call(100) & 4294967295);
    idx = 0;
    *((uint128_t *)&v0) = 0;
    v3 = 0;
    do
    {
        *((int *)&v0[idx]) = *((int *)&(&g_4010d8)[idx]) + *((int *)&(&$d.2)[idx]);
        idx += 4;
    } while (idx != 32);
    l = 0;
    v19 = 0;
    do
    {
        v20 = l + 4;
        v19 += *((int *)&v0[l]);
        l = v20;
    } while (l != 32);
    printf(&g_4011b8, v19);
    printf(&g_4011de, 20);
    v21 = param_division_by_zero(5);
    v22 = param_division_by_zero(0);
    signal(8, NULL);
    printf(&g_4011fe, (v22 & 4294967295) + (v21 & 4294967295));
    *((unsigned int *)&v0) = 42;
    v23 = param_null_pointer_deref(&v0);
    v24 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    printf(&g_40121a, (v24 & 4294967295) + (v23 & 4294967295));
    printf(&g_401237, 30);
    printf(&g_401254, 0x77359400);
    printf(&g_401285, 10);
    return printf(&g_4012a2, 48);
}


// Function: main at 0x401088
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_obf_opt_edge();
    return 0;
}


// Function: _fini at 0x4010a0
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

