// Angr Decompilation of 7_clang_O0_no_g
// Platform: AARCH64

// Function: _init at 0x400748
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400760
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


// Function: sub_400774 at 0x400774
long long sub_400774()
{
    char *v0;  // x0
    unsigned long long len;  // x0

    len = strlen(v0);
    return strlen(v0);
}


// Function: _start at 0x400840
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400870 at 0x400870
void sub_400870()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400874
extern unsigned long long g_411fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_411fd0)
        return 0;
    v0 = __gmon_start__(g_411fd0);
    return __gmon_start__(g_411fd0);
}


// Function: sub_400888 at 0x400888
void sub_400888()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400890
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x4008c0
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


// Function: sub_4008fc at 0x4008fc
void sub_4008fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400900
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


// Function: sub_400948 at 0x400948
long long sub_400948()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400950
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_fake_branch at 0x400954
unsigned int param_fake_branch(unsigned int a0)
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x18]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = a0;
    if (0 > a0 * a0)
        v1 = 3735928559 + v1 * 2;
    v0 = "test";
    if (0 <= strlen(v0))
        return v1;
    v1 += 1000;
    return v1;
}


// Function: call_fake_branch at 0x4009dc
int call_fake_branch()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x4009f4
int param_opaque_predicate(unsigned int a0)
{
    unsigned int v7;  // w8
    unsigned int v8;  // w8
    unsigned int v9;  // w8
    unsigned int flag1;  // [bp-0x20]
    unsigned int result;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int flag3;  // [bp-0x14]
    unsigned int flag2;  // [bp-0x10]
    unsigned int flag4;  // [bp-0xc]
    unsigned int v6;  // [bp-0x4]

    if (a0 * a0 + a0 * 2 + 1 != (a0 + 1) * (a0 + 1))
        v7 = 0;
    else
        v7 = 1;
    flag4 = v7 & 1;
    flag2 = a0;
    for (flag3 = a0 + 1; flag3; flag2 = v2)
    {
        v2 = flag3;
        flag3 = flag2 - flag3 * flag2 / flag3;
    }
    if (flag2 != 1)
        v8 = 0;
    else
        v8 = 1;
    result = v8 & 1;
    if ((a0 ^ 2863311530 ^ 2863311530) != a0)
        v9 = 0;
    else
        v9 = 1;
    flag1 = v9 & 1;
    if (flag4 && result && flag1)
    {
        v6 = ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
        return v6;
    }
    v6 = 3 * a0 + 20;
    return v6;
}


// Function: call_opaque_predicate at 0x400b20
int call_opaque_predicate()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x400b38
int param_instruction_substitution(unsigned int a0)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0x8]

    v3 = ((a0 * 8 | a0 >> 29) & 0xfffffff8) - a0 * 2;
    v2 = (a0 * 0x80000000 | a0 >> 1) & 2147483647;
    v1 = a0 & 15;
    v0 = ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
    return v3 + v2 + v1 + v0;
}


// Function: call_instruction_substitution at 0x400bb4
int call_instruction_substitution()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x400bcc
char * decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
    char *cur;  // [bp-0x38]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    strncpy(a1, a0, n);
    a1[1 + n] = 0;
    for (cur = a1; *(cur); cur += 1)
    {
        *(cur) = *(cur) ^ a3;
    }
    return a1;
}


// Function: param_string_encryption at 0x400c5c
extern char $d.2;

int param_string_encryption()
{
    char *v0;  // [bp-0x38]
    char v1[32];  // [bp-0x30]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v0 = &v1[0];
    decrypt_string(&$d.2, &v1, 32, 90);
    return (unsigned int)strlen(v0) + (unsigned int)v1;
}


// Function: call_string_encryption at 0x400ca4
int call_string_encryption()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400cb8
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (0 < a0)
    {
        v0 = param_tail_call_optimized(a0 - 1, a1 + a0);
        return v0;
    }
    v0 = a1;
    return v0;
}


// Function: call_tail_call_optimized at 0x400d18
int call_tail_call_optimized()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x400d34
unsigned int param_non_tail_call(unsigned int a0)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (0 < a0)
    {
        v0 = a0 + param_non_tail_call(a0 - 1);
        return v0;
    }
    v0 = 0;
    return v0;
}


// Function: call_non_tail_call at 0x400d90
int call_non_tail_call()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400da8
unsigned int param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3)
{
    unsigned int j;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int i;  // [bp-0x20]

    for (i = 0; a3 > i; i += 1)
    {
        *((int *)(ptr + i * 4)) = *((int *)(a0 + i * 4)) + *((int *)(a1 + i * 4));
    }
    v1 = 0;
    for (j = 0; a3 > j; j += 1)
    {
        v1 += *((int *)(ptr + j * 4));
    }
    return v1;
}


// Function: call_vectorized_loop at 0x400e6c
int call_vectorized_loop()
{
    uint128_t result;  // [bp-0x70]
    uint128_t flag1;  // [bp-0x60]
    uint128_t v2;  // [bp-0x50]
    uint128_t v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x30]
    uint128_t v5;  // [bp-0x20]
    char *v6;  // [bp-0x10]
    char v7;  // [bp+0x0]

    v6 = &v7;
    v4 = 316912650112397582603894390785;
    v5 = 633825300243241909290088267781;
    v2 = 396140812682002152440041832456;
    v3 = 79228162551157825753847955460;
    result = 0;
    flag1 = 0;
    return param_vectorized_loop(&v4, &v2, &result, 8);
}


// Function: param_link_time_optimization at 0x400ed4
int param_link_time_optimization(unsigned int a0)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return lto_target_func(a0);
}


// Function: lto_target_func at 0x400ef8
int lto_target_func(unsigned int a0)
{
    return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: call_link_time_optimization at 0x400f14
int call_link_time_optimization()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_link_time_optimization(5);
}


// Function: div_zero_handler at 0x400f2c
extern unsigned int $d.4;
extern unsigned long long jmp_buffer;

long long div_zero_handler(unsigned int a0)
{
    unsigned long long v4;  // x30
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v1 = &v3;
    v2 = v4;
    v0 = a0;
    $d.4 = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x400f54
extern unsigned long long jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
    {
        v1 = 4294967295;
        return v1;
    }
    v0 = 10 / a0;
    v1 = v0;
    return v1;
}


// Function: call_division_by_zero at 0x400fc0
int call_division_by_zero()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = param_division_by_zero(5);
    v0 = param_division_by_zero(0);
    signal(8, NULL);
    return v1 + v0;
}


// Function: segv_handler at 0x401008
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;

long long segv_handler(unsigned int a0)
{
    unsigned long long v4;  // x30
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v1 = &v3;
    v2 = v4;
    v0 = a0;
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x401030
extern unsigned long long segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *ptr)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    signal(11, segv_handler);
    if (_setjmp(&segv_buffer))
    {
        v1 = 4294967295;
        return v1;
    }
    v0 = *(ptr);
    v1 = v0;
    return v1;
}


// Function: call_null_pointer_deref at 0x401098
int call_null_pointer_deref()
{
    sighandler_t result;  // [bp-0x28]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    char *v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v4 = &v5;
    v3 = 42;
    v2 = param_null_pointer_deref(&v3);
    result = NULL;
    v1 = param_null_pointer_deref(NULL);
    signal(11, result);
    return v2 + v1;
}


// Function: param_buffer_overflow_stack at 0x4010ec
unsigned int param_buffer_overflow_stack(unsigned int a0)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int i;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0xc]

    v2 = 305419896;
    for (i = 0; 16 >= i; i += 1)
    {
        *((char *)&v3 + i) = 65;
    }
    if (v2 != 305419896)
    {
        v0 = 4294967295;
        return v0;
    }
    v0 = a0;
    return v0;
}


// Function: param_buffer_overflow_heap at 0x40117c
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
    unsigned int i;  // [bp-0x24]
    void* ptr;  // [bp-0x20]
    unsigned int v2;  // [bp-0x14]
    char *v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    ptr = malloc(16);
    if (!ptr)
    {
        v2 = 4294967294;
        return v2;
    }
    for (i = 0; 32 >= i; i += 1)
    {
        *((char *)ptr + i) = 66;
    }
    free(ptr);
    v2 = a0;
    return v2;
}


// Function: call_buffer_overflow at 0x401214
int call_buffer_overflow()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = param_buffer_overflow_stack(10);
    v0 = param_buffer_overflow_heap(20);
    return v1 + v0;
}


// Function: param_integer_overflow at 0x401250
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0x4]

    v1 = a0 + a1;
    v0 = a0 + a1;
    if (a0 > 0 && a1 > 0 && 0 > v1)
    {
        v2 = 4294967295;
        return v2;
    }
    if (0 > a0 && 0 > a1 && v1 > 0)
    {
        v2 = 4294967294;
        return v2;
    }
    v2 = v0;
    return v2;
}


// Function: call_integer_overflow at 0x40131c
int call_integer_overflow()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
    v0 = param_integer_overflow(4294967295, 1);
    return v1 + v0;
}


// Function: param_undefined_behavior at 0x401364
unsigned int param_undefined_behavior(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x401384
int call_undefined_behavior()
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = param_undefined_behavior(5);
    return v0;
}


// Function: param_implementation_defined at 0x4013ac
long long param_implementation_defined()
{
    unsigned int v4;  // w9
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x5]
    unsigned int v3;  // [bp-0x4]

    v3 = 0;
    v2 = 255;
    if (0 <= v2)
        v4 = 2;
    else
        v4 = 1;
    v3 += v4;
    v1 = 0xfffffff8;
    v3 += v1 >> 1;
    v0 = v0 & 0xfffffff8 | 7;
    v0 = v0 & 4294967047 | 248;
    v0 = (char)v0 | 0x12345600;
    v3 += (v0 & 7) + ((v0 * 0x20000000 | v0 >> 3) & 536870911 & 31);
    v3 += 12;
    return v3;
}


// Function: call_implementation_defined at 0x401460
unsigned long long call_implementation_defined()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = param_implementation_defined();
    return param_implementation_defined();
}


// Function: test_obf_opt_edge at 0x401474
extern char g_4015f1;
extern char g_40161f;
extern char g_40163b;
extern char g_401657;
extern char g_401674;
extern char g_401690;
extern char g_4016ba;
extern char g_4016df;
extern char g_401705;
extern char g_401725;
extern char g_401741;
extern char g_40175e;
extern char g_40177b;
extern char g_4017ac;
extern char g_4017c9;

int test_obf_opt_edge()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    printf(&g_4015f1);
    printf(&g_40161f, call_fake_branch() & 4294967295);
    printf(&g_40163b, call_opaque_predicate() & 4294967295);
    printf(&g_401657, call_instruction_substitution() & 4294967295);
    printf(&g_401674, call_string_encryption() & 4294967295);
    printf(&g_401690, call_tail_call_optimized() & 4294967295);
    printf(&g_4016ba, call_non_tail_call() & 4294967295);
    printf(&g_4016df, call_vectorized_loop() & 4294967295);
    printf(&g_401705, call_link_time_optimization() & 4294967295);
    printf(&g_401725, call_division_by_zero() & 4294967295);
    printf(&g_401741, call_null_pointer_deref() & 4294967295);
    printf(&g_40175e, call_buffer_overflow() & 4294967295);
    printf(&g_40177b, call_integer_overflow() & 4294967295);
    printf(&g_4017ac, call_undefined_behavior() & 4294967295);
    return printf(&g_4017c9, call_implementation_defined() & 4294967295);
}


// Function: main at 0x4015a8
unsigned int main()
{
    unsigned int result;  // [bp-0x18]
    unsigned int flag1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    result = 0;
    flag1 = 0;
    test_obf_opt_edge();
    return result;
}


// Function: _fini at 0x4015d4
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

