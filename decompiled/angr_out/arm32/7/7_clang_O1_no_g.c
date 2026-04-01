// Angr Decompilation of 7_clang_O1_no_g
// Platform: ARMEL

// Function: _init at 0x40048c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_400498 at 0x400498
extern unsigned int g_412008;

int sub_400498()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_412008;
}


// Function: _start at 0x40053c
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_400574 at 0x400574
void sub_400574()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400580
extern unsigned int g_412044;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_412044)
        goto LABEL_400598;
    return v0;
LABEL_400598:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4005a4
extern char __TMC_END__;
extern unsigned int g_412040;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_4005c4;
    return &__TMC_END__;
LABEL_4005c4:
    if (g_412040)
        goto LABEL_4005d4;
    return &__TMC_END__;
LABEL_4005d4:
    goto g_412040;
}


// Function: register_tm_clones at 0x4005e8
extern char __TMC_END__;
extern unsigned int g_41204c;

int register_tm_clones()
{
    if (0)
        goto LABEL_400614;
    return &__TMC_END__;
LABEL_400614:
    if (g_41204c)
        goto LABEL_400624;
    return &__TMC_END__;
LABEL_400624:
    goto g_41204c;
}


// Function: __do_global_dtors_aux at 0x400638
extern char __TMC_END__;
extern unsigned int __dso_handle;
extern unsigned int g_41203c;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__TMC_END__)
        goto LABEL_400654;
    return v2;
LABEL_400654:
    v1 = v3;
    v0 = v4;
    if (!g_41203c)
    {
        v5 = deregister_tm_clones();
        __TMC_END__ = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4006a0
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_fake_branch at 0x4006a4
int param_fake_branch()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: call_fake_branch at 0x4006a8
unsigned int call_fake_branch()
{
    return 10;
}


// Function: param_opaque_predicate at 0x4006b0
int param_opaque_predicate(unsigned int a0)
{
    unsigned int v5;  // lr
    unsigned int v6;  // r7
    unsigned int v15;  // r5
    unsigned int v16;  // r1
    unsigned int v7;  // r6
    unsigned int v8;  // r5
    unsigned int v9;  // r4
    unsigned int v10;  // r4
    unsigned int v11;  // r7
    unsigned int v12;  // r5
    unsigned int v13;  // r0
    unsigned int result;  // r1
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x4]

    v4 = v5;
    v3 = v6;
    v2 = v7;
    v1 = v8;
    v0 = v9;
    v10 = a0;
    v11 = a0 + 1;
    v12 = a0;
    if (!((char)armg_calculate_condition(33, v12, 1, 0)))
    {
        v13 = v10;
        result = v11;
        do
        {
            v15 = result;
            __aeabi_idivmod(v13, result);
            v13 = v15;
            result = v16;
            v12 = v15;
        } while (result);
    }
    if (((a0 * 2 | 1) + v10 * v10 ^ v11 * v11) || v12 != 1)
        return v10 * 3 + 20;
    return a0 * 2 + 10;
}


// Function: call_opaque_predicate at 0x400710
unsigned int call_opaque_predicate()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int result;  // r1
    unsigned int v7;  // r0
    unsigned int v8;  // r1
    unsigned int v9;  // r1
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    result = 6;
    v7 = 5;
    do
    {
        v8 = result;
        __aeabi_idivmod(v7, v8);
        result = v9;
        v7 = v8;
    } while (result);
    return (v8 == 1 ? 20 : 35);
}


// Function: param_instruction_substitution at 0x400744
int param_instruction_substitution(unsigned int a0)
{
    return (a0 & 15) + (a0 >> 1) + a0 * 21;
}


// Function: call_instruction_substitution at 0x40075c
unsigned int call_instruction_substitution()
{
    return 225;
}


// Function: decrypt_string at 0x400764
char [2] decrypt_string(char *a0, char *ptr, unsigned int n, char a3)
{
    unsigned int result;  // r0
    char cur[2];  // r1

    strncpy(ptr, a0, n);
    ptr[1 + n] = 0;
    result = *(ptr);
    if (!result)
        return ptr;
    cur = ptr + 1;
    do
    {
        cur[1] = (char)result ^ a3;
        result = cur[0];
        cur = &cur[1];
    } while (result);
    return ptr;
}


// Function: param_string_encryption at 0x4007c0
extern char param_string_encryption.encrypted;

int param_string_encryption()
{
    char dst[2];  // r0
    unsigned int result;  // r1
    char cur[2];  // r0
    char v0[31];  // [bp-0x28]
    char flag1;  // [bp-0x9]

    dst = strncpy(&v0, &param_string_encryption.encrypted, 32);
    flag1 = 0;
    result = (unsigned int)v0;
    if (result)
    {
        cur = &dst[1];
        do
        {
            cur[1] = (char)result ^ 90;
            result = cur[0];
            cur = &cur[1];
        } while (result);
    }
    return strlen(&v0) + (unsigned int)v0;
}


// Function: call_string_encryption at 0x40082c
extern char param_string_encryption.encrypted;

int call_string_encryption()
{
    char dst[2];  // r0
    unsigned int result;  // r1
    char cur[2];  // r0
    char v0[1][31];  // [bp-0x28]
    char flag1;  // [bp-0x9]

    dst = strncpy(&v0, &param_string_encryption.encrypted, 32);
    flag1 = 0;
    result = (unsigned int)v0;
    if (result)
    {
        cur = &dst[1];
        do
        {
            cur[1] = (char)result ^ 90;
            result = cur[0];
            cur = &cur[1];
        } while (result);
    }
    return strlen(&v0) + (unsigned int)v0;
}


// Function: param_tail_call_optimized at 0x400898
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // lr
    unsigned int v2;  // r0
    unsigned int v0;  // [bp-0x4]

    if (a0 < 1)
        return a1;
    v0 = v1;
    v2 = param_tail_call_optimized(a0 - 1, a1 + a0);
    return param_tail_call_optimized(a0 - 1, a1 + a0);
}


// Function: call_tail_call_optimized at 0x4008c0
unsigned int call_tail_call_optimized()
{
    unsigned int v0;  // r0

    v0 = param_tail_call_optimized(1000, 0);
    return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x4008d8
unsigned int param_non_tail_call(unsigned int a0)
{
    unsigned int result;  // r0
    unsigned int v3;  // r0
    unsigned int v4;  // r4
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (a0 < 1)
    {
        result = 0;
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_4008e4;
        return 0;
        v3 = result;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_4008e4;
        return a0;
        v3 = a0;
    }
LABEL_4008e4:
    v1 = vvar_3{r64|4b};
    v0 = v4;
    return param_non_tail_call(v3 - 1) + v3;
}


// Function: call_non_tail_call at 0x400900
unsigned int call_non_tail_call()
{
    unsigned int v0;  // r0

    v0 = param_non_tail_call(100);
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400914
unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *p, unsigned int j)
{
    unsigned int *ptr;  // r12
    unsigned int *v1;  // r0
    unsigned int *v2;  // r1
    unsigned int *v3;  // r12
    unsigned int v4;  // r0
    unsigned int *v5;  // r2

    if (j >= 1)
    {
        ptr = p;
        do
        {
            v1 = a0 + 1;
            v2 = a1 + 1;
            v3 = ptr + 1;
            *(ptr) = *(a1) + *(a0);
            j = vvar_23{r64|4b} - 1;
            ptr = v3;
            a0 = v1;
            a1 = v2;
        } while (vvar_23{r64|4b} != 1);
    }
    v4 = 0;
    if (j >= 1)
    {
        do
        {
            v5 = p + 1;
            v4 += *(p);
            p = v5;
            j -= 1;
        } while (j != 1);
    }
    return v4;
}


// Function: call_vectorized_loop at 0x400964
extern unsigned int g_401170[4];
extern unsigned int g_401190[4];

int call_vectorized_loop()
{
    unsigned int idx;  // r0
    unsigned int j;  // r2
    unsigned int v4;  // r0
    unsigned int index;  // r2
    unsigned int v6;  // r0
    unsigned int v7;  // r0
    unsigned int result;  // [bp-0x28]
    char v1;  // [bp-0x24]

    idx = 0;
    memset(&v1, 0, 28);
    result = 0;
    do
    {
        (&result)[idx] = g_401190[idx] + g_401170[idx];
        idx += 1;
    } while (idx != 8);
    j = 0;
    v4 = 0;
    do
    {
        index = j;
        v6 = v4;
        v7 = (&result)[index] + v6;
        v4 = v7;
        j = index + 1;
    } while (j != 8);
    return (&result)[index] + v6;
}


// Function: param_link_time_optimization at 0x4009f0
int param_link_time_optimization(unsigned int a0)
{
    return 10 + a0 * 2;
}


// Function: call_link_time_optimization at 0x4009fc
unsigned int call_link_time_optimization()
{
    return 20;
}


// Function: div_zero_handler at 0x400a04
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
    div_zero_caught = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x400a2c
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
    unsigned int v0;  // r0

    signal(8, div_zero_handler);
    if (!_setjmp(&jmp_buffer))
    {
        v0 = __divsi3(10, a0);
        return __divsi3(10, a0);
    }
    return 4294967295;
}


// Function: call_division_by_zero at 0x400a84
int call_division_by_zero()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v0 = param_division_by_zero(5);
    v1 = param_division_by_zero(0);
    signal(8, NULL);
    return v1 + v0;
}


// Function: segv_handler at 0x400ab8
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x400ae0
extern unsigned int segv_buffer;

int param_null_pointer_deref(unsigned int *a0)
{
    signal(11, segv_handler);
    _setjmp(&segv_buffer);
    return *(a0);
}


// Function: call_null_pointer_deref at 0x400b24
int call_null_pointer_deref()
{
    unsigned int v1;  // r0
    unsigned int v2;  // r0
    unsigned int v0[1];  // [bp-0x14]

    *((unsigned int [1])v0) = 42;
    v1 = param_null_pointer_deref(&v0);
    v2 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    return v2 + v1;
}


// Function: param_buffer_overflow_stack at 0x400b68
int param_buffer_overflow_stack()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: param_buffer_overflow_heap at 0x400b6c
int param_buffer_overflow_heap()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: call_buffer_overflow at 0x400b70
unsigned int call_buffer_overflow()
{
    return 30;
}


// Function: param_integer_overflow at 0x400b78
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r3
    unsigned int v1;  // cc_dep1
    unsigned int v14;  // r2
    unsigned int v15;  // r2
    unsigned int v16;  // r2
    unsigned int v2;  // cc_dep2
    unsigned int v3;  // cc_ndep
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // cc_ndep

    v0 = a1 + a0;
    if (1 <= a0)
    {
        if ((char)armg_calculate_condition(162, (armg_calculate_condition(162, v1, v2, v3) ? a1 : v1), (armg_calculate_condition(162, v1, v2, v3) ? 1 : v2), (armg_calculate_condition(162, v1, v2, v3) ? 0 : v3)))
            goto LABEL_400ba4;
    }
    else
    {
        if ((char)armg_calculate_condition(162, (armg_calculate_condition(162, v4, v5, v6) ? a1 : v4), (armg_calculate_condition(162, v4, v5, v6) ? 1 : v5), (armg_calculate_condition(162, v4, v5, v6) ? 0 : v6)))
        {
LABEL_400ba4:
            if (!((char)armg_calculate_condition(82, v0, 0, 0)))
                return 4294967295;
        }
    }
    if (0 < v0)
        v14 = 4294967294;
    else
        v14 = v0;
    v15 = v14;
    if (armg_calculate_condition(82, a1 & a0, 0, 0))
        v16 = v0;
    else
        v16 = v15;
    return v16;
}


// Function: call_integer_overflow at 0x400bb8
unsigned int call_integer_overflow()
{
    return 0x77359400;
}


// Function: param_undefined_behavior at 0x400bc4
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_undefined_behavior at 0x400bcc
unsigned int call_undefined_behavior()
{
    return 10;
}


// Function: param_implementation_defined at 0x400bd4
unsigned int param_implementation_defined()
{
    return 44;
}


// Function: call_implementation_defined at 0x400bdc
unsigned int call_implementation_defined()
{
    return 44;
}


// Function: test_obf_opt_edge at 0x400be4
extern unsigned int g_401170[4];
extern unsigned int g_401190[4];
extern char g_4011b0;
extern char g_4011cc;
extern char g_4011e8;
extern char g_401205;
extern char g_401221;
extern char g_40124b;
extern char g_401270;
extern char g_401296;
extern char g_4012b6;
extern char g_4012d2;
extern char g_4012ef;
extern char g_40130c;
extern char g_40133d;
extern char g_40135a;
extern char g_401381;
extern char param_string_encryption.encrypted;

int test_obf_opt_edge()
{
    unsigned int v5;  // r0
    unsigned int index;  // r0
    unsigned int v16;  // r1
    unsigned int v17;  // r0
    unsigned int v18;  // r0
    unsigned int v19;  // r0
    unsigned int v20;  // r0
    unsigned int v21;  // r0
    unsigned int flag2;  // r1
    unsigned int v7;  // r4
    unsigned int v8;  // r1
    unsigned int idx;  // r5
    unsigned int result;  // r0
    void* cur;  // r1
    char v0[1];  // [bp-0x30]
    char v1;  // [bp-0x2f]
    char v2;  // [bp-0x2c]
    char flag1;  // [bp-0x11]

    puts(&g_401381);
    printf(&g_4011b0, 10);
    v5 = 5;
    flag2 = 6;
    do
    {
        v7 = flag2;
        __aeabi_idivmod(v5, flag2);
        v5 = v7;
        flag2 = v8;
    } while (flag2);
    printf(&g_4011cc, (v7 == 1 ? 20 : 35));
    printf(&g_4011e8, 225);
    strncpy(&v0, &param_string_encryption.encrypted, 32);
    idx = 0;
    flag1 = 0;
    result = (unsigned int)v0;
    if (result)
    {
        cur = &v1;
        do
        {
            *((char *)&cur[1]) = (char)result ^ 90;
            result = *((char *)cur);
            cur += 1;
        } while (result);
    }
    printf(&g_401205, strlen(&v0) + (unsigned int)v0);
    printf(&g_401221, param_tail_call_optimized(1000, 0));
    printf(&g_40124b, param_non_tail_call(100));
    memset(&v2, 0, 28);
    *((unsigned int *)&v0) = 0;
    do
    {
        *((unsigned int *)&(&v0)[4 * idx]) = g_401190[idx] + g_401170[idx];
        idx += 1;
    } while (idx != 8);
    index = 0;
    v16 = 0;
    do
    {
        v16 += *((int *)&(&v0)[4 * index]);
        index += 1;
    } while (index != 8);
    printf(&g_401270, v16);
    printf(&g_401296, 20);
    v17 = param_division_by_zero(5);
    v18 = param_division_by_zero(0);
    signal(8, NULL);
    printf(&g_4012b6, v18 + v17);
    *((unsigned int *)&v0) = 42;
    v19 = param_null_pointer_deref(&v0);
    v20 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    printf(&g_4012d2, v20 + v19);
    printf(&g_4012ef, 30);
    printf(&g_40130c, 0x77359400);
    printf(&g_40133d, 10);
    v21 = printf(&g_40135a, 44);
    return printf(&g_40135a, 44);
}


// Function: main at 0x400e70
unsigned int main()
{
    test_obf_opt_edge();
    return 0;
}


// Function: __divsi3 at 0x400e84
int __divsi3(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r0

    if (a1)
    {
        v0 = .divsi3_skip_div0_test();
        return .divsi3_skip_div0_test();
    }
    if (armg_calculate_condition(194, a0, 0, 0))
    {
        if (!armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_40109e;
LABEL_40109d:
    }
    else
    {
LABEL_40109a:
        if (armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_40109d;
LABEL_40109e:
    }
    goto LABEL_40109a;
}


// Function: .divsi3_skip_div0_test at 0x400e8c
extern char g_400ec4;

unsigned int .divsi3_skip_div0_test(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    unsigned int v3;  // r12
    unsigned int v4;  // cc_op
    unsigned int v13;  // r2
    unsigned int v14;  // r2
    unsigned int v15;  // cc_dep1
    unsigned int v5;  // cc_dep1
    unsigned int v6;  // cc_dep2
    unsigned int v7;  // cc_ndep
    unsigned int v9;  // r3
    unsigned int cur;  // r3
    unsigned int v11;  // cc_dep1
    unsigned int v12;  // cc_dep2

    v3 = a0 ^ a1;
    if (armg_calculate_condition(v4 | 64, v5, v6, v7))
        a1 = -(a1);
    if (a0 >> 31 == 1)
        v9 = -(a0);
    else
        v9 = a0;
    cur = v9;
    v11 = cur;
    v12 = a1;
    if (cur <= a1)
        a0 = (armg_calculate_condition(50, v11, v12, 0) ? 0 : a0);
    if ((a1 & a1 - 1))
    {
        v13 = (!a1 ? 32 : Clz(a1)) - (!cur ? 32 : Clz(cur));
        v14 = 31 - v13;
        v11 = 31;
        v12 = v13;
        vvar_783{r68|4b} = &g_400ec4;
        if (v13 != 31)
            v14 *= 3;
    }
    else
    {
        v14 = (!a1 ? 32 : Clz(a1));
        v14 = 31 - v14;
        v12 = 0;
        v15 = v3;
        a0 = cur >> ((char)v14 & 31) & (v14 & 255) - 32 >> 31;
    }
}


// Function: __aeabi_idivmod at 0x4010a4
int __aeabi_idivmod(unsigned int a0, unsigned int a1)
{
}


// Function: __aeabi_ldiv0 at 0x4010c4
int __aeabi_ldiv0(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a1;
}


// Function: _fini at 0x4010d4
int _fini(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a3;
    v3 = sub_4010d8();
    return sub_4010d8();
}


// Function: sub_4010d8 at 0x4010d8
int sub_4010d8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0;
}

