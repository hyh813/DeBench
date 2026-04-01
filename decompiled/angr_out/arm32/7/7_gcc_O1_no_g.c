// Angr Decompilation of 7_gcc_O1_no_g
// Platform: ARMEL

// Function: _init at 0x10508
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_10514 at 0x10514
extern unsigned int g_22008;

int sub_10514()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_22008;
}


// Function: _start at 0x105dc
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10614 at 0x10614
void sub_10614()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x10620
extern unsigned int g_22048;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_22048)
        goto LABEL_10638;
    return v0;
LABEL_10638:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x10644
extern char __TMC_END__;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_10654;
    return 139360;
LABEL_10654:
    if (!(1))
        goto LABEL_10660;
    return 139360;
LABEL_10660:
}


// Function: register_tm_clones at 0x10670
extern char __TMC_END__;

int register_tm_clones()
{
    if (0)
        goto LABEL_1068c;
    return 139360;
LABEL_1068c:
    if (!(1))
        goto LABEL_10698;
    return 139360;
LABEL_10698:
}


// Function: __do_global_dtors_aux at 0x106a8
extern char __TMC_END__;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__TMC_END__)
        goto LABEL_106bc;
    return a0;
LABEL_106bc:
    v0 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v0;
}


// Function: frame_dummy at 0x106d0
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: div_zero_handler at 0x106d4
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    div_zero_caught = 1;
    __longjmp_chk(0x22070, 1); /* do not return */
}


// Function: segv_handler at 0x106ec
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    segv_caught = 1;
    __longjmp_chk(0x22200, 1); /* do not return */
}


// Function: param_fake_branch at 0x10708
int param_fake_branch()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: call_fake_branch at 0x1070c
unsigned int call_fake_branch()
{
    return 10;
}


// Function: param_opaque_predicate at 0x10714
int param_opaque_predicate(unsigned int a0)
{
    unsigned int flag1;  // r1
    unsigned int v1;  // r3
    unsigned int v2;  // r2
    unsigned int v3;  // r7
    unsigned int flag2;  // r1
    unsigned int flag3;  // r4
    unsigned int v6;  // r1
    unsigned int result;  // r3

    flag1 = a0 + 1;
    v1 = a0 * a0 + a0 * 2 + 1;
    v2 = flag1 * flag1;
    if (v1 != v2)
    {
        v3 = 0;
        if (!armg_calculate_condition(2, v1, v2, 0))
            goto LABEL_1073a;
LABEL_10739:
        v3 = 1;
    }
    else
    {
        if (armg_calculate_condition(2, v1, v2, 0))
            goto LABEL_10739;
LABEL_1073a:
    }
    if (!flag1)
        return a0 * 3 + 20;
    flag2 = flag1;
    do
    {
        flag3 = flag2;
        __aeabi_idivmod();
        flag2 = v6;
    } while (flag2);
    if (flag3 != 1)
    {
        result = 0;
        if (!armg_calculate_condition(2, flag3, 1, 0))
            goto LABEL_10766;
LABEL_10765:
        result = v3 & 1;
    }
    else
    {
        if (armg_calculate_condition(2, flag3, 1, 0))
            goto LABEL_10765;
LABEL_10766:
    }
    if (result)
        return a0 * 2 + 10;
    return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x10784
unsigned int call_opaque_predicate()
{
    unsigned int v0;  // r0

    v0 = param_opaque_predicate(5);
    return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x10794
int param_instruction_substitution(unsigned int a0)
{
    return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x107b4
unsigned int call_instruction_substitution()
{
    return 225;
}


// Function: decrypt_string at 0x107bc
char [2] decrypt_string(char *a0, char *a1, unsigned int n, char a3)
{
    char p[2];  // r5
    unsigned int result;  // r2
    char ptr[2];  // r12

    p = a1;
    strncpy(p, a0, n);
    p[1 + n] = 0;
    result = p[0];
    if (!result)
        return p;
    ptr = p;
    do
    {
        ptr[0] = (char)result ^ a3;
        result = ptr[1];
        ptr = &ptr[1];
    } while (result);
    return p;
}


// Function: param_string_encryption at 0x10810
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char encrypted.0;

int param_string_encryption()
{
    unsigned int v3;  // lr
    unsigned int len;  // r0
    char v0[32];  // [bp-0x2c]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = GLIBC_2.4::__stack_chk_guard;
    decrypt_string(0x22058, &v0, 32, 90);
    len = strlen(&v0);
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return (unsigned int)v0 + len;
}


// Function: call_string_encryption at 0x10878
unsigned int call_string_encryption()
{
    unsigned int v0;  // r0

    v0 = param_string_encryption();
    return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x10884
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (a0 <= 0)
        return a1;
    v1 = v2;
    v0 = v3;
    v4 = param_tail_call_optimized(a0 - 1, a0 + a1);
    return param_tail_call_optimized(a0 - 1, a0 + a1);
}


// Function: call_tail_call_optimized at 0x108a8
unsigned int call_tail_call_optimized()
{
    unsigned int v0;  // r0

    v0 = param_tail_call_optimized(1000, 0);
    return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x108bc
unsigned int param_non_tail_call(unsigned int a0)
{
    if (a0 <= 0)
        return 0;
    return param_non_tail_call(a0 - 1) + a0;
}


// Function: call_non_tail_call at 0x108e0
unsigned int call_non_tail_call()
{
    unsigned int v0;  // r0

    v0 = param_non_tail_call(100);
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x108f0
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, struct_0 *a2, unsigned int a3)
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    struct_0 *v14;  // r3
    unsigned int v15;  // r0
    unsigned int v16;  // r0
    unsigned int v17;  // r0
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int *v8;  // r0
    unsigned int *pos;  // r1
    unsigned int *index;  // r0
    struct_0 *ptr;  // r3
    unsigned int *v12;  // r0
    unsigned int *v13;  // r1
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    if (a3 <= 0)
        return 0;
    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    v8 = a0 + 1;
    pos = a1 + 1;
    vvar_33{r64|4b} = &a2->field_4;
    index = v8;
    ptr = a2;
    do
    {
        v12 = index + 1;
        v13 = pos + 1;
        v14 = &ptr->field_4;
        ptr->field_4 = index[1] + pos[1];
        index = v12;
        pos = v13;
        ptr = v14;
    } while (index != &v8[a3]);
    v15 = 0;
    do
    {
        v16 = v15;
        vvar_51{r64|4b} = vvar_68{r64|4b} + 4;
        v17 = v16 + *((int *)(vvar_68{r64|4b} + 4));
        vvar_68{r64|4b} = vvar_51{r64|4b};
        v15 = v17;
    } while (vvar_68{r64|4b} != &(&a2->field_4)[a3]);
    return v16 + *((int *)(vvar_18{r64|4b} + 4));
}


// Function: call_vectorized_loop at 0x10954
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_vectorized_loop()
{
    unsigned int v18;  // r0
    unsigned int result[1];  // [bp-0x6c]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x5c]
    unsigned int v5;  // [bp-0x58]
    unsigned int v6;  // [bp-0x54]
    unsigned int v7;  // [bp-0x50]
    unsigned int v8[1];  // [bp-0x4c]
    unsigned int v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x44]
    unsigned int v11;  // [bp-0x40]
    unsigned int v12;  // [bp-0x3c]
    unsigned int v13;  // [bp-0x38]
    unsigned int v14;  // [bp-0x34]
    unsigned int flag1;  // [bp-0x30]
    char v16;  // [bp-0x2c]
    unsigned int v17;  // [bp-0xc]

    v17 = GLIBC_2.4::__stack_chk_guard;
    *((unsigned int [1])result) = 1;
    v1 = 2;
    v2 = 3;
    v3 = 4;
    v4 = 5;
    v5 = 6;
    v6 = 7;
    v7 = 8;
    *(v8) = 8;
    v9 = 7;
    v10 = 6;
    v11 = 5;
    v12 = 4;
    v13 = 3;
    v14 = 2;
    *((unsigned int [1])&flag1) = 1;
    memset(&v16, 0, 32);
    v18 = param_vectorized_loop(&result, &v8, &v16, 8);
    if ((v17 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v18;
}


// Function: param_link_time_optimization at 0x109f0
unsigned int param_link_time_optimization(unsigned int a0)
{
    return (a0 + 5) * 2;
}


// Function: call_link_time_optimization at 0x109fc
unsigned int call_link_time_optimization()
{
    return 20;
}


// Function: param_division_by_zero at 0x10a04
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    signal(8, div_zero_handler);
    return (_setjmp(0x22070) ? 4294967295 : __aeabi_idiv(10, a0));
}


// Function: call_division_by_zero at 0x10a50
int call_division_by_zero()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v0 = param_division_by_zero(5);
    v1 = param_division_by_zero(0);
    signal(8, NULL);
    return v0 + v1;
}


// Function: param_null_pointer_deref at 0x10a80
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
    signal(11, segv_handler);
    if (!_setjmp(0x22200))
        return *(a0);
    return 4294967295;
}


// Function: call_null_pointer_deref at 0x10ac0
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_null_pointer_deref()
{
    unsigned int v2;  // r0
    unsigned int v3;  // r0
    unsigned int v0[1];  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    v1 = GLIBC_2.4::__stack_chk_guard;
    *((unsigned int [1])v0) = 42;
    v2 = param_null_pointer_deref(&v0);
    v3 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v2 + v3;
}


// Function: param_buffer_overflow_stack at 0x10b30
int param_buffer_overflow_stack()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: param_buffer_overflow_heap at 0x10b34
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
    void* ptr;  // r0
    unsigned int result;  // r3

    ptr = malloc(16);
    if (!ptr)
        return 4294967294;
    result = 33;
    do
    {
        result -= 1;
    } while (result != 1);
    free(ptr);
    return a0;
}


// Function: call_buffer_overflow at 0x10b6c
unsigned int call_buffer_overflow()
{
    return param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x10b80
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // r0
    unsigned int v1;  // cc_dep1
    unsigned int v2;  // cc_dep2
    unsigned int v25;  // r2
    unsigned int v3;  // cc_ndep
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // cc_ndep
    unsigned int v7;  // cc_dep1
    unsigned int v8;  // cc_dep2
    unsigned int v9;  // cc_ndep

    v0 = a0 + a1;
    if (0 < a0)
    {
        v4 = (armg_calculate_condition(194, v1, v2, v3) ? a1 : v1);
        v5 = (armg_calculate_condition(194, v1, v2, v3) ? 0 : v2);
        v6 = (armg_calculate_condition(194, v1, v2, v3) ? 0 : v3);
        if (!armg_calculate_condition(194, v4, v5, v6))
            goto LABEL_10b92;
LABEL_10b91:
        a2 = 1;
        if (!armg_calculate_condition(210, v4, v5, v6))
            goto LABEL_10b96;
LABEL_10b95:
        a2 = 0;
    }
    else
    {
        v4 = (armg_calculate_condition(194, v7, v8, v9) ? a1 : v7);
        v5 = (armg_calculate_condition(194, v7, v8, v9) ? 0 : v8);
        v6 = (armg_calculate_condition(194, v7, v8, v9) ? 0 : v9);
        if (armg_calculate_condition(194, v4, v5, v6))
            goto LABEL_10b91;
LABEL_10b92:
        if (armg_calculate_condition(210, v4, v5, v6))
            goto LABEL_10b95;
LABEL_10b96:
    }
    if ((a2 & v0 >> 31))
        return 4294967295;
    if (v0 <= 0)
    {
        v25 = 0;
        if (!armg_calculate_condition(194, v0, 0, 0))
            goto LABEL_10bae;
LABEL_10bad:
        v25 = 1;
    }
    else
    {
        v25 = a2 & v0 >> 31;
        if (armg_calculate_condition(194, v0, 0, 0))
            goto LABEL_10bad;
LABEL_10bae:
    }
    if (!(v25 & (a0 & a1) >> 31))
        return v0;
    return 4294967294;
}


// Function: call_integer_overflow at 0x10bc4
unsigned int call_integer_overflow()
{
    return 0x77359400;
}


// Function: param_undefined_behavior at 0x10bd0
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_undefined_behavior at 0x10bd8
unsigned int call_undefined_behavior()
{
    return 10;
}


// Function: param_implementation_defined at 0x10be0
unsigned int param_implementation_defined()
{
    return 44;
}


// Function: call_implementation_defined at 0x10be8
unsigned int call_implementation_defined()
{
    return 44;
}


// Function: test_obf_opt_edge at 0x10bf0
extern char g_1103c;
extern char g_1106c;
extern char g_11088;
extern char g_110a4;
extern char g_110c4;
extern char g_110e0;
extern char g_1110c;
extern char g_11134;
extern char g_1115c;
extern char g_1117c;
extern char g_11198;
extern char g_111b8;
extern char g_111d8;
extern char g_1120c;
extern char g_1122c;

int test_obf_opt_edge()
{
    unsigned int v8;  // r0

    puts(0x1103c);
    __printf_chk(1, 0x1106c, 10);
    __printf_chk(1, 0x11088, call_opaque_predicate());
    __printf_chk(1, 0x110a4, 225);
    __printf_chk(1, 0x110c4, param_string_encryption());
    __printf_chk(1, 0x110e0, call_tail_call_optimized());
    __printf_chk(1, 0x1110c, call_non_tail_call());
    __printf_chk(1, 0x11134, call_vectorized_loop());
    __printf_chk(1, 0x1115c, 20);
    __printf_chk(1, 0x1117c, call_division_by_zero());
    __printf_chk(1, 0x11198, call_null_pointer_deref());
    __printf_chk(1, 0x111b8, call_buffer_overflow());
    __printf_chk(1, 0x111d8, 0x77359400);
    __printf_chk(1, 0x1120c, 10);
    v8 = __printf_chk(1, 0x1122c, 44);
    return __printf_chk(1, 0x1122c, 44);
}


// Function: main at 0x10d40
unsigned int main()
{
    test_obf_opt_edge();
    return 0;
}


// Function: __aeabi_idiv at 0x10d50
int __aeabi_idiv(unsigned int a0, unsigned int a1)
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
            goto LABEL_10f6a;
LABEL_10f69:
    }
    else
    {
LABEL_10f66:
        if (armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_10f69;
LABEL_10f6a:
    }
    goto LABEL_10f66;
}


// Function: .divsi3_skip_div0_test at 0x10d58
extern char g_10d90;

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
        vvar_783{r68|4b} = 69008;
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


// Function: __aeabi_idivmod at 0x10f70
int __aeabi_idivmod(unsigned int a0, unsigned int a1)
{
}


// Function: __aeabi_idiv0 at 0x10f90
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a1;
}


// Function: _fini at 0x10fa0
int _fini(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a3;
    v3 = sub_10fa4();
    return sub_10fa4();
}


// Function: sub_10fa4 at 0x10fa4
int sub_10fa4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0;
}

