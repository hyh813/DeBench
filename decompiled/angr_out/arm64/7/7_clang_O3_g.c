// Angr Decompilation of 7_clang_O3_g
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
    if (!((char)arm64g_calculate_condition(49, a0 & 4294967295, 1, 0)))
    {
        flag1 = 4294967295;
    }
    else
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


// Function: call_opaque_predicate at 0x400978
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


// Function: param_instruction_substitution at 0x4009a8
int param_instruction_substitution(unsigned int a0)
{
    return (a0 & 15) + (a0 >> 1) + 21 * a0;
}


// Function: call_instruction_substitution at 0x4009bc
unsigned long long call_instruction_substitution()
{
    return 225;
}


// Function: decrypt_string at 0x4009c4
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


// Function: param_string_encryption at 0x400a2c
extern char $d.1;

int param_string_encryption()
{
    unsigned int result;  // w8
    void* cur;  // x9
    unsigned int v6;  // w8
    unsigned int v7;  // w19
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
        v7 = (unsigned int)v0;
    }
    else
    {
        v7 = 0;
    }
    return (unsigned int)strlen(&v0) + v7;
}


// Function: call_string_encryption at 0x400aa4
extern char $d.1;

int call_string_encryption()
{
    unsigned int result;  // w8
    void* cur;  // x9
    unsigned int v6;  // w8
    unsigned int v7;  // w19
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
        v7 = (unsigned int)v0;
    }
    else
    {
        v7 = 0;
    }
    return (unsigned int)strlen(&v0) + v7;
}


// Function: param_tail_call_optimized at 0x400b1c
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    if (a0 >= 1)
        a1 = a1 + a0 + (a0 - 1) * (a0 - 1) - (__ROL__((a0 - 1) * (a0 - 2), 63) & 9223372036854775807);
    return a1;
}


// Function: call_tail_call_optimized at 0x400b44
unsigned long long call_tail_call_optimized()
{
    return 500500;
}


// Function: param_non_tail_call at 0x400b50
unsigned long long param_non_tail_call(unsigned int a0)
{
    unsigned int v0;  // w8

    v0 = a0 - 1;
    if (a0 < 1)
        return 0;
    return a0 + v0 * v0 - (__ROL__(v0 * (a0 - 2), 63) & 9223372036854775807);
}


// Function: call_non_tail_call at 0x400b78
unsigned long long call_non_tail_call()
{
    return 5050;
}


// Function: param_vectorized_loop at 0x400b80
unsigned long long param_vectorized_loop(void* a0, void* a1, void* a2, unsigned int a3)
{
    unsigned long v0;  // x8
    unsigned long long v1;  // x9
    void* cur;  // x12
    unsigned long long i;  // x13
    void* v12;  // x10
    unsigned long long v13;  // x13
    void* v14;  // x11
    int v15;  // q1
    unsigned long long v16;  // x12
    unsigned long long j;  // x9
    void* iter;  // x10
    void* v19;  // x11
    unsigned long long v2;  // x10
    void* v20;  // x12
    void* v21;  // x12
    void* v22;  // x11
    unsigned long long v23;  // x9
    unsigned long long v24;  // x9
    unsigned long long v25;  // x0
    unsigned long long k;  // x11
    void* addr;  // x10
    unsigned long long l;  // x8
    void* v3;  // x12
    void* v30;  // x10
    unsigned long long v31;  // x8
    unsigned int v4;  // w11
    unsigned int v5;  // w13
    unsigned int v6;  // w10
    unsigned int v7;  // w11
    void* p;  // x10
    void* ptr;  // x11

    if (a3 < 1)
        return 0;
    v0 = a3;
    if (8 > a3)
    {
        v1 = 0;
    }
    else
    {
        v2 = __ROL__(v0, 2) & 18446744073709551612;
        v1 = 0;
        v3 = a2 + v2;
        if (a0 + v2 <= a2)
            v4 = 0;
        else
            v4 = 1;
        if (v3 <= a0)
            v5 = 0;
        else
            v5 = 1;
        if (a1 + v2 <= a2)
            v6 = 0;
        else
            v6 = 1;
        if (v3 <= a1)
            v7 = 0;
        else
            v7 = 1;
        if (!(v4 & v5 & 1) && !(v6 & v7 & 1))
        {
            v1 = v0 & 0xfffffff8;
            p = a0 + 16;
            ptr = a1 + 16;
            cur = a2 + 16;
            i = v1;
            do
            {
                v12 = p + 32;
                v13 = i - 8;
                v14 = ptr + 32;
                v15 = AddV(*((int128_t *)ptr), *((int128_t *)p));
                *((int128_t *)&cur[16]) = AddV((int128_t)ptr[16], (int128_t)p[16]);
                *(cur) = v15;
                cur += 32;
                p = v12;
                ptr = v14;
                i = v13;
            } while (i != 8);
            if (v1 == v0)
                goto LABEL_400c50;
        }
    }
    v16 = __ROL__(v1, 2) & 18446744073709551612;
    j = v0 - v1;
    iter = a2 + v16;
    v19 = a1 + v16;
    v20 = a0 + v16;
    do
    {
        v21 = v20 + 4;
        v22 = v19 + 4;
        v23 = j - 1;
        *((int *)iter) = *((int *)v19) + *((int *)v20);
        iter += 4;
        j = v23;
        v19 = v22;
        v20 = v21;
    } while (j != 1);
LABEL_400c50:
    if (a3 < 1)
        return 0;
    if (8 > a3)
    {
        v24 = 0;
        v25 = 0;
    }
    else
    {
        v24 = v0 & 0xfffffff8;
        k = v24;
        do
        {
            k -= 8;
        } while (k != 8);
        v25 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v24 == v0)
            return v25;
    }
    addr = a2 + v24 * 4;
    l = v0 - v24;
    do
    {
        v30 = addr + 4;
        v31 = l - 1;
        v25 += *((int *)addr);
        l = v31;
        addr = v30;
    } while (l != 1);
    return v25;
}


// Function: call_vectorized_loop at 0x400cd0
unsigned long long call_vectorized_loop()
{
    return 72;
}


// Function: param_link_time_optimization at 0x400cd8
int param_link_time_optimization(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: call_link_time_optimization at 0x400ce4
unsigned long long call_link_time_optimization()
{
    return 20;
}


// Function: div_zero_handler at 0x400cec
extern unsigned int div_zero_caught;
extern unsigned long long jmp_buffer;

long long div_zero_handler()
{
    unsigned long long v3;  // x30
    char *v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    char v2;  // [bp+0x0]

    v0 = &v2;
    v1 = v3;
    div_zero_caught = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x400d0c
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


// Function: call_division_by_zero at 0x400d60
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


// Function: segv_handler at 0x400da0
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


// Function: param_null_pointer_deref at 0x400dc4
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


// Function: call_null_pointer_deref at 0x400e14
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


// Function: param_buffer_overflow_stack at 0x400e64
long long param_buffer_overflow_stack()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: param_buffer_overflow_heap at 0x400e68
long long param_buffer_overflow_heap()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: call_buffer_overflow at 0x400e6c
unsigned long long call_buffer_overflow()
{
    return 30;
}


// Function: param_integer_overflow at 0x400e74
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


// Function: call_integer_overflow at 0x400eac
unsigned long long call_integer_overflow()
{
    return 0x77359400;
}


// Function: param_undefined_behavior at 0x400eb8
unsigned int param_undefined_behavior(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x400ec0
unsigned long long call_undefined_behavior()
{
    return 10;
}


// Function: param_implementation_defined at 0x400ec8
unsigned long long param_implementation_defined()
{
    return 48;
}


// Function: call_implementation_defined at 0x400ed0
unsigned long long call_implementation_defined()
{
    return 48;
}


// Function: test_obf_opt_edge at 0x400ed8
extern char $d.1;
extern char $d.2;
extern char g_401104;
extern char g_401120;
extern char g_40113d;
extern char g_401159;
extern char g_401183;
extern char g_4011a8;
extern char g_4011ce;
extern char g_4011ee;
extern char g_40120a;
extern char g_401227;
extern char g_401244;
extern char g_401275;
extern char g_401292;
extern char g_4012b9;

int test_obf_opt_edge()
{
    unsigned int flag3;  // w8
    unsigned int v6;  // w9
    unsigned long long v15;  // x0
    unsigned long long v16;  // x0
    unsigned long long v17;  // x0
    unsigned int flag2;  // w10
    unsigned long long v8;  // x1
    unsigned int result;  // w8
    void* cur;  // x9
    unsigned int v11;  // w8
    unsigned long v12;  // x19
    unsigned long long v14;  // x0
    char v0[31];  // [bp-0x40]
    char flag1;  // [bp-0x21]
    char *v3;  // [bp-0x20]
    char v4;  // [bp+0x0]

    v3 = &v4;
    puts(&g_4012b9);
    printf(&$d.2, 10);
    flag3 = 6;
    v6 = 5;
    do
    {
        flag2 = flag3;
        flag3 = v6 - flag2 * v6 / flag3;
        v6 = flag2;
    } while (flag3);
    if (flag2 == 1)
        v8 = 20;
    else
        v8 = 35;
    printf(&g_401104, v8);
    printf(&g_401120, 225);
    strncpy(&v0, &$d.1, 32);
    result = (unsigned int)v0;
    flag1 = 0;
    if (result)
    {
        cur = &v0 | 1;
        do
        {
            v11 = *((char *)cur);
            *((char *)&cur[1]) = (char)result ^ 90;
            cur += 1;
            result = v11;
        } while (result);
        v12 = (unsigned long long)v0;
    }
    else
    {
        v12 = 0;
    }
    printf(&g_40113d, strlen(&v0) + v12);
    printf(&g_401159, 500500);
    printf(&g_401183, 5050);
    printf(&g_4011a8, 72);
    printf(&g_4011ce, 20);
    v14 = param_division_by_zero(5);
    v15 = param_division_by_zero(0);
    signal(8, NULL);
    printf(&g_4011ee, (v15 & 4294967295) + (v14 & 4294967295));
    *((unsigned int *)&v0) = 42;
    v16 = param_null_pointer_deref(&v0);
    v17 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    printf(&g_40120a, (v17 & 4294967295) + (v16 & 4294967295));
    printf(&g_401227, 30);
    printf(&g_401244, 0x77359400);
    printf(&g_401275, 10);
    return printf(&g_401292, 48);
}


// Function: main at 0x4010b8
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_obf_opt_edge();
    return 0;
}


// Function: _fini at 0x4010d0
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

