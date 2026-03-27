// Angr Decompilation of 7_gcc_O3_g
// Platform: AARCH64

// Function: _init at 0x400848
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400860
extern unsigned long long g_412f50;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_412f50;
}


// Function: sub_400874 at 0x400874
long long sub_400874()
{
    char *v0;  // x0
    unsigned long long len;  // x0

    len = strlen(v0);
    return strlen(v0);
}


// Function: main at 0x400980
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_obf_opt_edge();
    return 0;
}


// Function: sub_400998 at 0x400998
void sub_400998(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x4009c0
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_4009f0 at 0x4009f0
void sub_4009f0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4009f4
extern unsigned long long g_412fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fe0)
        return 0;
    v0 = __gmon_start__(g_412fe0);
    return __gmon_start__(g_412fe0);
}


// Function: sub_400a08 at 0x400a08
void sub_400a08()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400a10
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400a40
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


// Function: sub_400a7c at 0x400a7c
void sub_400a7c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400a80
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


// Function: sub_400ac8 at 0x400ac8
long long sub_400ac8()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400ad0
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: sub_400ad4 at 0x400ad4
void sub_400ad4()
{
    div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x400ae0
extern unsigned long long __data_start;
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
    __longjmp_chk(&jmp_buffer, 1, &__data_start); /* do not return */
}


// Function: segv_handler at 0x400b00
extern unsigned long long div_zero_caught;
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
    __longjmp_chk(&segv_buffer, 1, &div_zero_caught); /* do not return */
}


// Function: param_division_by_zero.constprop.0 at 0x400b20
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero.constprop.0()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
        return 4294967295;
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4197196()
}


// Function: sub_400b5c at 0x400b5c
void sub_400b5c()
{
    param_division_by_zero.constprop.1();
    return;
}


// Function: param_division_by_zero.constprop.1 at 0x400b60
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero.constprop.1()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
        return 4294967295;
    return 2;
}


// Function: sub_400b9c at 0x400b9c
long long sub_400b9c()
{
    unsigned long long v0;  // x0

    v0 = param_fake_branch();
    return param_fake_branch();
}


// Function: param_fake_branch at 0x400ba0
long long param_fake_branch()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: call_fake_branch at 0x400ba4
unsigned long long call_fake_branch()
{
    return 10;
}


// Function: sub_400bac at 0x400bac
long long sub_400bac(unsigned long a0)
{
    unsigned long long v0;  // x0

    v0 = param_opaque_predicate();
    return param_opaque_predicate();
}


// Function: param_opaque_predicate at 0x400bb0
int param_opaque_predicate(unsigned int a0)
{
    unsigned int flag1;  // w1
    unsigned int v1;  // w3
    unsigned int v2;  // w2
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_dep2
    unsigned int result;  // w6
    unsigned int v6;  // w2
    unsigned long v7;  // x3

    flag1 = a0 + 1;
    v1 = flag1 * flag1;
    v2 = (__ROL__(a0, 1) & 4294967294) + a0 * a0 + 1;
    v3 = v2;
    v4 = v1;
    if (v2 != v1)
        result = 0;
    else
        result = 1;
    if (flag1)
    {
        v6 = a0;
        do
        {
            flag1 = v6 - flag1 * v6 / flag1;
            v6 = flag1;
        } while (flag1);
        if (result)
        {
            if (!((char)arm64g_calculate_condition(19, ((char)arm64g_calculate_condition(19, v3, v4, 0) ? v7 & 4294967295 : 0), ((char)arm64g_calculate_condition(19, v3, v4, 0) ? 1 : 0), 0)))
                return (__ROL__(a0, 1) & 4294967294) + 10;
        }
        else
        {
            if (!((char)arm64g_calculate_condition(16, ((char)arm64g_calculate_condition(19, v3, v4, 0) ? v7 & 4294967295 : 0), ((char)arm64g_calculate_condition(19, v3, v4, 0) ? 1 : 0), 0)))
                return (__ROL__(a0, 1) & 4294967294) + 10;
        }
    }
    return (__ROL__(a0, 1) & 4294967294) + a0 + 20;
}


// Function: sub_400c0c at 0x400c0c
void sub_400c0c()
{
    call_opaque_predicate();
    return;
}


// Function: call_opaque_predicate at 0x400c10
unsigned long long call_opaque_predicate()
{
    unsigned int flag1;  // w0
    unsigned int v1;  // w1
    unsigned int result;  // w2

    flag1 = 6;
    v1 = 5;
    do
    {
        flag1 = v1 - flag1 * v1 / flag1;
        v1 = flag1;
    } while (flag1);
    if (result != 1)
        return 35;
    return 20;
}


// Function: param_instruction_substitution at 0x400c40
int param_instruction_substitution(unsigned int a0)
{
    return ((a0 * 8 | a0 >> 29) & 0xfffffff8) - a0 * 2 + (a0 >> 1) + (a0 & 15) + ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
}


// Function: call_instruction_substitution at 0x400c64
unsigned long long call_instruction_substitution()
{
    return 225;
}


// Function: sub_400c6c at 0x400c6c
void sub_400c6c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    decrypt_string();
    return;
}


// Function: decrypt_string at 0x400c70
char [2] decrypt_string(char *a0, char *a1, unsigned long a2, char a3)
{
    char p[2];  // x0
    unsigned int result;  // w2
    char ptr[2];  // x4
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    p = strncpy(a1, a0, a2);
    p[1 + a2] = 0;
    result = p[0];
    if (!result)
        return p;
    ptr = p;
    do
    {
        ptr[0] = a3 ^ (char)result;
        result = ptr[1];
        ptr = &ptr[1];
    } while (result);
    return p;
}


// Function: param_string_encryption at 0x400cd0
extern char __stack_chk_guard;
extern char encrypted.0;

long long param_string_encryption()
{
    char dst[2];  // x0
    unsigned long v6;  // x19
    char ptr[2];  // x0
    unsigned long long len;  // x0
    char *v0;  // [bp-0x50]
    char v1[31];  // [bp-0x28]
    char result;  // [bp-0x9]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    dst = strncpy(&v1, &encrypted.0, 31);
    v6 = (unsigned long long)v1;
    result = 0;
    if ((unsigned int)v6)
    {
        ptr = dst;
        do
        {
            ptr[0] = (char)v6 ^ 90;
            v6 = ptr[1];
            ptr = &ptr[1];
        } while ((unsigned int)v6);
        v6 = (unsigned long long)v1;
    }
    len = strlen(dst);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6 + len;
}


// Function: sub_400d6c at 0x400d6c
void sub_400d6c()
{
    call_string_encryption();
    return;
}


// Function: call_string_encryption at 0x400d70
extern char __stack_chk_guard;
extern char encrypted.0;

long long call_string_encryption()
{
    char dst[2];  // x0
    unsigned long v6;  // x19
    char ptr[2];  // x0
    unsigned long len;  // x0
    char *v0;  // [bp-0x50]
    char v1[31];  // [bp-0x28]
    char result;  // [bp-0x9]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    dst = strncpy(&v1, &encrypted.0, 31);
    v6 = (unsigned long long)v1;
    result = 0;
    if ((unsigned int)v6)
    {
        ptr = dst;
        do
        {
            ptr[0] = (char)v6 ^ 90;
            v6 = ptr[1];
            ptr = &ptr[1];
        } while ((unsigned int)v6);
        v6 = (unsigned long long)v1;
    }
    len = strlen(dst);
    if (v3 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6 + len;
}


// Function: sub_400e0c at 0x400e0c
void sub_400e0c(unsigned long a0, unsigned long a1)
{
    param_tail_call_optimized();
    return;
}


// Function: param_tail_call_optimized at 0x400e10
unsigned long long param_tail_call_optimized(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // x2
    unsigned long long v1;  // x0
    unsigned long v2;  // x2
    unsigned int i;  // w3
    unsigned long v4;  // d1
    unsigned long v5;  // x4
    unsigned long long v7;  // x0

    v0 = a0;
    v1 = a1 & 4294967295;
    if ((unsigned int)v0 <= 0)
        return a1 & 4294967295;
    v2 = v0;
    if ((unsigned int)v2 > 8)
    {
        i = 0;
        do
        {
            i += 1;
        } while ((((unsigned int)v0 * 0x40000000 | (unsigned int)v0 >> 2) & 1073741823) != i);
        v4 = [D] unsupported_Iop_ZeroHI96ofV128();
        v5 = (unsigned int)v0 & 0xfffffffc;
        v1 = a1 + v4;
        v2 = v0 - v5;
        if ((unsigned int)v0 == (unsigned int)v5)
            return a1 + v4;
    }
    if ((unsigned int)v2 == 1)
    {
        return v1 + v2;
    }
    else if ((unsigned int)v2 == 2)
    {
        return v1 + v2 + (unsigned int)v2 - 1;
    }
    else if ((unsigned int)v2 == 3)
    {
        return v1 + v2 + (unsigned int)v2 - 1 + (unsigned int)v2 - 2;
    }
    else if ((unsigned int)v2 == 4)
    {
        return v1 + v2 + (unsigned int)v2 - 1 + (unsigned int)v2 - 2 + (unsigned int)v2 - 3;
    }
    else if ((unsigned int)v2 != 5)
    {
        v7 = v1 + v2 + (unsigned int)v2 - 1 + (unsigned int)v2 - 2 + (unsigned int)v2 - 3 + (unsigned int)v2 - 4 + (unsigned int)v2 - 5;
        if ((unsigned int)v2 == 6)
            return v7 & 4294967295;
        return (unsigned int)v2 - 7 + (unsigned int)v2 - 6 + v7 & 4294967295;
    }
    else
    {
        return v1 + v2 + (unsigned int)v2 - 1 + (unsigned int)v2 - 2 + (unsigned int)v2 - 3 + (unsigned int)v2 - 4;
    }
}


// Function: sub_400edc at 0x400edc
void sub_400edc()
{
    call_tail_call_optimized();
    return;
}


// Function: call_tail_call_optimized at 0x400ee0
unsigned long long call_tail_call_optimized()
{
    return 500500;
}


// Function: sub_400eec at 0x400eec
void sub_400eec(unsigned long a0)
{
    param_non_tail_call();
    return;
}


// Function: param_non_tail_call at 0x400ef0
unsigned long long param_non_tail_call(unsigned int a0)
{
    unsigned long v0;  // x1
    unsigned int i;  // w0
    unsigned long long v2;  // d0
    unsigned long v3;  // x2
    unsigned long long v5;  // x1
    unsigned long long v6;  // x0

    v0 = a0;
    if ((unsigned int)v0 <= 0)
        return 0;
    if ((unsigned int)v0 > 8)
    {
        i = 0;
        do
        {
            i += 1;
        } while ((((unsigned int)v0 * 0x40000000 | (unsigned int)v0 >> 2) & 1073741823) != i);
        v2 = [D] unsupported_Iop_ZeroHI96ofV128();
        v3 = (unsigned int)v0 & 0xfffffffc;
        v5 = v0 - v3;
        if ((unsigned int)v0 == (unsigned int)v3)
            return v2;
    }
    else
    {
        v2 = 0;
        v5 = v0;
    }
    if ((unsigned int)v5 == 1)
    {
        return v2 + v5;
    }
    else if ((unsigned int)v5 == 2)
    {
        return v2 + v5 + (unsigned int)v5 - 1;
    }
    else if ((unsigned int)v5 == 3)
    {
        return v2 + v5 + (unsigned int)v5 - 1 + (unsigned int)v5 - 2;
    }
    else if ((unsigned int)v5 == 4)
    {
        return v2 + v5 + (unsigned int)v5 - 1 + (unsigned int)v5 - 2 + (unsigned int)v5 - 3;
    }
    else if ((unsigned int)v5 != 5)
    {
        v6 = v2 + v5 + (unsigned int)v5 - 1 + (unsigned int)v5 - 2 + (unsigned int)v5 - 3 + (unsigned int)v5 - 4 + (unsigned int)v5 - 5;
        if ((unsigned int)v5 == 6)
            return v6 & 4294967295;
        return (unsigned int)v5 - 7 + (unsigned int)v5 - 6 + v6 & 4294967295;
    }
    else
    {
        return v2 + v5 + (unsigned int)v5 - 1 + (unsigned int)v5 - 2 + (unsigned int)v5 - 3 + (unsigned int)v5 - 4;
    }
}


// Function: call_non_tail_call at 0x400fc0
unsigned long long call_non_tail_call()
{
    return 5050;
}


// Function: sub_400fc8 at 0x400fc8
long long sub_400fc8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // x0

    v0 = param_vectorized_loop();
    return param_vectorized_loop();
}


// Function: param_vectorized_loop at 0x400fd0
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long long ptr, unsigned long a3)
{
    unsigned long long v0;  // cc_dep1
    unsigned long long v1;  // x4
    unsigned long long v10;  // x6
    unsigned long long idx;  // x4
    unsigned long long j;  // x0
    unsigned long long v14;  // d0
    unsigned long v15;  // x1
    unsigned long long v16;  // x0
    unsigned long long v17;  // x0
    unsigned long v2;  // x7
    unsigned long long v3;  // cc_op
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned int v6;  // w5
    unsigned long long i;  // x4
    unsigned int v8;  // w4
    unsigned long index;  // x7

    v0 = a3 & 4294967295;
    if ((unsigned int)a3 <= 0)
        return 0;
    v1 = ptr - (a1 + 4);
    v2 = (unsigned int)a3 - 1;
    if (8 < ptr - (a0 + 4))
    {
        v3 = 4;
        v4 = ((char)arm64g_calculate_condition(131, v0, 0, 0) ? v1 : 0);
        v5 = ((char)arm64g_calculate_condition(131, v0, 0, 0) ? 8 : 0);
        if (!((char)arm64g_calculate_condition(132, v4, v5, 0)))
            goto LABEL_400ff6;
LABEL_400ff5:
        if ((char)arm64g_calculate_condition(147, ((char)arm64g_calculate_condition(v3 | 128, v4, v5, 0) ? v2 & 4294967295 : 0), ((char)arm64g_calculate_condition(v3 | 128, v4, v5, 0) ? 3 : 0), 0))
            goto LABEL_401108;
LABEL_400ffc:
        v6 = ((unsigned int)a3 * 0x40000000 | (unsigned int)a3 >> 2) & 1073741823;
        i = 0;
        do
        {
            *((int128_t *)(ptr + i)) = AddV(*((int128_t *)(a0 + i)), *((int128_t *)(a1 + i)));
            i += 16;
        } while (i != (__ROL__(((unsigned int)a3 * 0x40000000 | (unsigned int)a3 >> 2) & 1073741823, 4) & 0xfffffffffffffff0));
        v8 = (unsigned int)a3 & 0xfffffffc;
        if (!((char)arm64g_calculate_condition(10, a3 & 3, 0, 0)))
        {
            index = v8;
            v10 = __ROL__(index, 2) & 18446744073709551612;
            *((int *)(ptr + index * 4)) = *((int *)(a1 + index * 4)) + *((int *)(a0 + index * 4));
            if ((unsigned int)a3 > v8 + 1)
            {
                *((int *)(ptr + v10 + 4)) = *((int *)(a0 + v10 + 4)) + *((int *)(a1 + v10 + 4));
                if ((unsigned int)a3 > v8 + 2)
                    *((int *)(ptr + v10 + 8)) = *((int *)(a0 + v10 + 8)) + *((int *)(a1 + v10 + 8));
            }
        }
    }
    else
    {
        v3 = 0;
        v4 = ((char)arm64g_calculate_condition(131, v0, 0, 0) ? v1 : 0);
        v5 = ((char)arm64g_calculate_condition(131, v0, 0, 0) ? 8 : 0);
        if ((char)arm64g_calculate_condition(128, v4, v5, 0))
            goto LABEL_400ff5;
LABEL_400ff6:
        if (!((char)arm64g_calculate_condition(144, ((char)arm64g_calculate_condition(v3 | 128, v4, v5, 0) ? v2 & 4294967295 : 0), ((char)arm64g_calculate_condition(v3 | 128, v4, v5, 0) ? 3 : 0), 0)))
            goto LABEL_400ffc;
LABEL_401108:
        idx = 0;
        do
        {
            *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
            idx += 1;
        } while ((unsigned int)idx < (unsigned int)a3);
        if ((unsigned int)v2 > 2)
        {
            v6 = ((unsigned int)a3 * 0x40000000 | (unsigned int)a3 >> 2) & 1073741823;
            v8 = (unsigned int)a3 & 0xfffffffc;
        }
        else
        {
            v15 = 0;
            v14 = 0;
LABEL_4010cc:
            v16 = v14 + *((int *)(ptr + (v15 & 4294967295) * 4));
            if ((unsigned int)a3 <= (unsigned int)v15 + 1)
                return v16;
            v17 = v16 + *((int *)(ptr + (v15 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v15, 2) & 17179869180 & 17179869183) + 4));
            if ((unsigned int)a3 <= (unsigned int)v15 + 2)
                return v17;
            return v17 + *((int *)(ptr + (v15 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v15, 2) & 17179869180 & 17179869183) + 8));
        }
    }
    j = ptr;
    do
    {
        j += 16;
    } while (j != ptr + 16 + (v6 - 1) * 16);
    v14 = [D] unsupported_Iop_ZeroHI96ofV128();
    v15 = v8;
    if (v8 == (unsigned int)a3)
        return v14;
    goto LABEL_4010cc;
}


// Function: call_vectorized_loop at 0x401154
unsigned long long call_vectorized_loop()
{
    return 72;
}


// Function: sub_40115c at 0x40115c
void sub_40115c(unsigned long a0)
{
    param_link_time_optimization();
    return;
}


// Function: param_link_time_optimization at 0x401160
unsigned int param_link_time_optimization(unsigned int a0)
{
    return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
}


// Function: sub_40116c at 0x40116c
void sub_40116c()
{
    call_link_time_optimization();
    return;
}


// Function: call_link_time_optimization at 0x401170
unsigned long long call_link_time_optimization()
{
    return 20;
}


// Function: sub_401178 at 0x401178
void sub_401178(unsigned long a0)
{
    param_division_by_zero();
    return;
}


// Function: param_division_by_zero at 0x401180
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
        return 4294967295;
    return 10 / a0;
}


// Function: sub_4011cc at 0x4011cc
void sub_4011cc()
{
    call_division_by_zero();
    return;
}


// Function: call_division_by_zero at 0x4011d0
int call_division_by_zero()
{
    unsigned int v2;  // w0
    unsigned int v3;  // w0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_division_by_zero.constprop.1();
    v3 = param_division_by_zero.constprop.0();
    signal(8, NULL);
    return v2 + v3;
}


// Function: sub_401208 at 0x401208
void sub_401208(unsigned long a0)
{
    param_null_pointer_deref();
    return;
}


// Function: param_null_pointer_deref at 0x401210
extern unsigned long long segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    signal(11, segv_handler);
    if (_setjmp(&segv_buffer))
        return 4294967295;
    return *(a0);
}


// Function: sub_401258 at 0x401258
void sub_401258()
{
    call_null_pointer_deref();
    return;
}


// Function: call_null_pointer_deref at 0x401260
extern char __stack_chk_guard;

long long call_null_pointer_deref()
{
    unsigned long long v4;  // x0
    unsigned long long v5;  // x0
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0xc]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    v1 = 42;
    v4 = param_null_pointer_deref(&v1);
    v5 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    if (v2 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return (v4 & 4294967295) + (v5 & 4294967295);
}


// Function: sub_4012dc at 0x4012dc
long long sub_4012dc()
{
    unsigned long long v0;  // x0

    v0 = param_buffer_overflow_stack();
    return param_buffer_overflow_stack();
}


// Function: param_buffer_overflow_stack at 0x4012e0
long long param_buffer_overflow_stack()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: param_buffer_overflow_heap at 0x4012e4
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(16);
    if (!ptr)
        return 4294967294;
    free(ptr);
    return a0;
}


// Function: sub_40131c at 0x40131c
void sub_40131c()
{
    call_buffer_overflow();
    return;
}


// Function: call_buffer_overflow at 0x401320
unsigned long long call_buffer_overflow()
{
    void* ptr;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    ptr = malloc(16);
    if (!ptr)
        return 8;
    free(ptr);
    return 30;
}


// Function: sub_40134c at 0x40134c
void sub_40134c(unsigned long a0, unsigned long a1)
{
    param_integer_overflow();
    return;
}


// Function: param_integer_overflow at 0x401350
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // cc_op
    unsigned long v1;  // cc_op
    unsigned long long v14;  // x0
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep
    unsigned long long v5;  // cc_dep1
    unsigned long v6;  // cc_op
    unsigned long v7;  // cc_dep1
    unsigned long v8;  // cc_dep2
    unsigned long v9;  // cc_ndep

    if (0 < (unsigned int)a0)
    {
        v0 = 3;
        v5 = ((char)arm64g_calculate_condition(v1 | 192, v2, v3, v4) ? a1 & 4294967295 : 0x40000000);
    }
    else
    {
        v0 = 0;
        v5 = ((char)arm64g_calculate_condition(v6 | 192, v7, v8, v9) ? a1 & 4294967295 : 0x40000000);
    }
    v14 = a0 + a1;
    if ((char)arm64g_calculate_condition(v0 | 208, v5, 0, 0))
    {
        if ((char)arm64g_calculate_condition(73, (unsigned long long)((unsigned int)a0 & (unsigned int)a1), 0, 0))
        {
            if (!((char)arm64g_calculate_condition(211, ((char)arm64g_calculate_condition(v0 | 64, v5, 0, 0) ? v14 & 4294967295 : 0x40000000), 0, 0)))
                return 4294967294;
        }
        else
        {
            if (!((char)arm64g_calculate_condition(208, ((char)arm64g_calculate_condition(v0 | 64, v5, 0, 0) ? v14 & 4294967295 : 0x40000000), 0, 0)))
                return 4294967294;
        }
        return v14 & 4294967295;
    }
    else if (0 <= (unsigned int)v14)
    {
        return v14 & 4294967295;
    }
    else
    {
        return 4294967295;
    }
}


// Function: call_integer_overflow at 0x401384
unsigned long long call_integer_overflow()
{
    return 0x77359400;
}


// Function: param_undefined_behavior at 0x401390
unsigned int param_undefined_behavior(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_401398 at 0x401398
void sub_401398()
{
    call_undefined_behavior();
    return;
}


// Function: call_undefined_behavior at 0x4013a0
unsigned long long call_undefined_behavior()
{
    return 10;
}


// Function: sub_4013a8 at 0x4013a8
void sub_4013a8()
{
    param_implementation_defined();
    return;
}


// Function: param_implementation_defined at 0x4013b0
unsigned long long param_implementation_defined()
{
    return 48;
}


// Function: sub_4013b8 at 0x4013b8
void sub_4013b8()
{
    call_implementation_defined();
    return;
}


// Function: call_implementation_defined at 0x4013c0
unsigned long long call_implementation_defined()
{
    return 48;
}


// Function: sub_4013c8 at 0x4013c8
void sub_4013c8()
{
    test_obf_opt_edge();
    return;
}


// Function: test_obf_opt_edge at 0x4013d0
extern char $d;
extern char __stack_chk_guard;
extern char encrypted.0;
extern char g_401668;
extern char g_401688;
extern char g_4016a8;
extern char g_4016c8;
extern char g_4016e8;
extern char g_401718;
extern char g_401740;
extern char g_401768;
extern char g_401788;
extern char g_4017a8;
extern char g_4017c8;
extern char g_4017e8;
extern char g_401820;
extern char g_401840;

long long test_obf_opt_edge()
{
    unsigned int flag2;  // w0
    unsigned int v7;  // w1
    unsigned long long v16;  // x0
    void* ptr;  // x0
    unsigned long long v18;  // x2
    unsigned long long v19;  // x0
    unsigned int flag1;  // w2
    unsigned long long v9;  // x2
    char cur[2];  // x20
    unsigned long v11;  // x19
    unsigned long long v13;  // x0
    unsigned long long v14;  // x0
    unsigned long long v15;  // x0
    char *v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x2c]
    char v2[15][2];  // [bp-0x28]
    char result;  // [bp-0x9]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    puts(&$d);
    __printf_chk(1, &g_401668, 10);
    flag2 = 6;
    v7 = 5;
    do
    {
        flag2 = v7 - flag2 * v7 / flag2;
        v7 = flag2;
    } while (flag2);
    if (flag1 == 1)
        v9 = 20;
    else
        v9 = 35;
    __printf_chk(1, &g_401688, v9);
    cur = &v2;
    __printf_chk(1, &g_4016a8, 225);
    strncpy(&v2, &encrypted.0, 31);
    v11 = (unsigned long long)v2;
    result = 0;
    if ((unsigned int)v11)
    {
        do
        {
            cur[0] = (char)v11 ^ 90;
            v11 = cur[1];
            cur = &cur[1];
        } while ((unsigned int)v11);
        v11 = (unsigned long long)v2;
    }
    __printf_chk(1, &g_4016c8, v11 + strlen(&v2));
    __printf_chk(1, &g_4016e8, 500500);
    __printf_chk(1, &g_401718, 5050);
    __printf_chk(1, &g_401740, 72);
    __printf_chk(1, &g_401768, 20);
    v13 = param_division_by_zero.constprop.1();
    v14 = param_division_by_zero.constprop.0();
    signal(8, NULL);
    __printf_chk(1, &g_401788, (v13 & 4294967295) + (v14 & 4294967295));
    v1 = 42;
    v15 = param_null_pointer_deref(&v1);
    v16 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    __printf_chk(1, &g_4017a8, (v15 & 4294967295) + (v16 & 4294967295));
    ptr = malloc(16);
    if (ptr)
    {
        free(ptr);
        v18 = 30;
    }
    else
    {
        v18 = 8;
    }
    __printf_chk(1, &g_4017c8, v18);
    __printf_chk(1, &g_4017e8, 0x77359400);
    __printf_chk(1, &g_401820, 10);
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v19 = __printf_chk(1, &g_401840, 48);
    return __printf_chk(1, &g_401840, 48);
}


// Function: _fini at 0x401618
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

