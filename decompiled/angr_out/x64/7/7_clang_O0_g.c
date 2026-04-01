// Angr Decompilation of 7_clang_O0_g
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
void sub_40102c()
{
    void* v1;  // rdi

    free(v1);
    return;
}


// Function: _start at 0x4010d0
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_4010f5 at 0x4010f5
void sub_4010f5()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198645()
}


// Function: sub_4010f6 at 0x4010f6
void sub_4010f6()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401100
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_401129 at 0x401129
void sub_401129()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401130

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401169 at 0x401169
void sub_401169()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401170
extern unsigned long long __dso_handle;
extern char completed.0;
extern unsigned long long g_403ff8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (completed.0)
        return v2;
    if (g_403ff8)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    completed.0 = 1;
    return v1;
}


// Function: sub_4011a5 at 0x4011a5
void sub_4011a5()
{
}


// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4011b0
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9(unsigned long a0)
{
    param_fake_branch();
    return;
}


// Function: param_fake_branch at 0x4011c0
unsigned int param_fake_branch(unsigned int a0)
{
    char *v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x10]

    v1 = a0;
    if (a0 * a0 < 0)
        v1 = v1 * 2 - 559038737;
    v0 = "test";
    if (strlen(v0) >= 0)
        return v1;
    v1 += 1000;
    return v1;
}


// Function: sub_401221 at 0x401221
void sub_401221()
{
    call_fake_branch();
    return;
}


// Function: call_fake_branch at 0x401230
int call_fake_branch()
{
    return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x401240
int param_opaque_predicate(unsigned int a0)
{
    unsigned int flag1;  // [bp-0x28]
    unsigned int result;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int flag2;  // [bp-0x1c]
    unsigned int i;  // [bp-0x18]
    unsigned int flag3;  // [bp-0x14]
    unsigned int v6;  // [bp-0xc]

    flag3 = a0 * a0 + a0 * 2 + 1 == (a0 + 1) * (a0 + 1);
    i = a0;
    for (flag2 = a0 + 1; flag2; i = v2)
    {
        v2 = flag2;
        flag2 = ((int)((i >> 31 CONCAT i) % flag2) CONCAT (int)((i >> 31 CONCAT i) / flag2)) >> 32;
    }
    result = i == 1;
    flag1 = (a0 ^ 2863311530 ^ 2863311530) == a0;
    if (flag3 && result && flag1)
    {
        v6 = a0 * 2 + 10;
        return v6;
    }
    v6 = a0 * 3 + 20;
    return v6;
}


// Function: sub_401311 at 0x401311
void sub_401311()
{
    call_opaque_predicate();
    return;
}


// Function: call_opaque_predicate at 0x401320
int call_opaque_predicate()
{
    return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x401330
int param_instruction_substitution(unsigned int a0)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]

    v3 = a0 * 6;
    v2 = a0 >> 1;
    v1 = a0 & 15;
    v0 = a0 * 15;
    return v3 + v2 + v1 + v0;
}


// Function: call_instruction_substitution at 0x401380
int call_instruction_substitution()
{
    return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x401390
char * decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
    char *cur;  // [bp-0x30]

    strncpy(a1, a0, n);
    a1[1 + n] = 0;
    for (cur = a1; *(cur); cur += 1)
    {
        *(cur) = *(cur) ^ a3;
    }
    return a1;
}


// Function: sub_401409 at 0x401409
void sub_401409()
{
    param_string_encryption();
    return;
}


// Function: param_string_encryption at 0x401410
extern char param_string_encryption.encrypted;

long long param_string_encryption()
{
    char v0[32];  // [bp-0x28]

    decrypt_string(&param_string_encryption.encrypted, &v0, 32, 90);
    return strlen(&v0) + (long long)(int256_t)v0;
}


// Function: sub_401449 at 0x401449
void sub_401449()
{
    call_string_encryption();
    return;
}


// Function: call_string_encryption at 0x401450
unsigned long long call_string_encryption()
{
    return param_string_encryption();
}


// Function: sub_40145b at 0x40145b
void sub_40145b(unsigned long a0, unsigned long a1)
{
    param_tail_call_optimized();
    return;
}


// Function: param_tail_call_optimized at 0x401460
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    v0 = (a0 <= 0 ? a1 : (unsigned int)param_tail_call_optimized(a0 - 1, a1 + a0));
    return v0;
}


// Function: call_tail_call_optimized at 0x4014a0
int call_tail_call_optimized()
{
    return param_tail_call_optimized(1000, 0);
}


// Function: sub_4014b2 at 0x4014b2
void sub_4014b2(unsigned long a0)
{
    param_non_tail_call();
    return;
}


// Function: param_non_tail_call at 0x4014c0
unsigned int param_non_tail_call(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    if (a0 > 0)
    {
        v0 = a0 + param_non_tail_call(a0 - 1);
        return v0;
    }
    v0 = 0;
    return v0;
}


// Function: sub_401505 at 0x401505
void sub_401505()
{
    call_non_tail_call();
    return;
}


// Function: call_non_tail_call at 0x401510
int call_non_tail_call()
{
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x401520
unsigned int param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3)
{
    unsigned int j;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned int i;  // [bp-0x28]

    for (i = 0; i < a3; i += 1)
    {
        *((int *)(ptr + i * 4)) = *((int *)(a0 + i * 4)) + *((int *)(a1 + i * 4));
    }
    v1 = 0;
    for (j = 0; j < a3; j += 1)
    {
        v1 += *((int *)(ptr + j * 4));
    }
    return v1;
}


// Function: sub_4015b3 at 0x4015b3
void sub_4015b3()
{
    call_vectorized_loop();
    return;
}


// Function: call_vectorized_loop at 0x4015c0
int call_vectorized_loop()
{
    char v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]

    v5 = 8589934593;
    v6 = 17179869187;
    v7 = 25769803781;
    v8 = 34359738375;
    v1 = 30064771080;
    v2 = 21474836486;
    v3 = 12884901892;
    v4 = 4294967298;
    memset(&v0, 0, 32);
    return param_vectorized_loop(&v5, &v1, &v0, 8);
}


// Function: sub_40164c at 0x40164c
void sub_40164c(unsigned long a0)
{
    param_link_time_optimization();
    return;
}


// Function: param_link_time_optimization at 0x401650
void param_link_time_optimization(unsigned int a0)
{
    lto_target_func(a0);
    return;
}


// Function: sub_401669 at 0x401669
void sub_401669(unsigned long a0)
{
    lto_target_func();
    return;
}


// Function: lto_target_func at 0x401670
int lto_target_func(unsigned int a0)
{
    return a0 * 2 + 10;
}


// Function: sub_401682 at 0x401682
void sub_401682()
{
    call_link_time_optimization();
    return;
}


// Function: call_link_time_optimization at 0x401690
void call_link_time_optimization()
{
    param_link_time_optimization(5);
    return;
}


// Function: div_zero_handler at 0x4016a0
extern unsigned int div_zero_caught;
extern unsigned long long jmp_buffer;

void div_zero_handler(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    div_zero_caught = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned long a0)
{
    param_division_by_zero();
    return;
}


// Function: param_division_by_zero at 0x4016d0
extern unsigned long long jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0xc]

    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
    {
        v1 = 4294967295;
        return v1;
    }
    v0 = (int)((0 CONCAT 10) % a0) CONCAT (int)((0 CONCAT 10) / a0);
    v1 = v0;
    return v1;
}


// Function: sub_401728 at 0x401728
void sub_401728()
{
    call_division_by_zero();
    return;
}


// Function: call_division_by_zero at 0x401730
int call_division_by_zero()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = param_division_by_zero(5);
    v0 = param_division_by_zero(0);
    signal(8, NULL);
    return v1 + v0;
}


// Function: sub_401769 at 0x401769
void sub_401769(unsigned long a0)
{
    segv_handler(); /* do not return */
}


// Function: segv_handler at 0x401770
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;

void segv_handler(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: sub_401796 at 0x401796
void sub_401796(unsigned long a0)
{
    param_null_pointer_deref();
    return;
}


// Function: param_null_pointer_deref at 0x4017a0
extern unsigned long long segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *ptr)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0xc]

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


// Function: sub_4017f6 at 0x4017f6
void sub_4017f6()
{
    call_null_pointer_deref();
    return;
}


// Function: call_null_pointer_deref at 0x401800
int call_null_pointer_deref()
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2[1];  // [bp-0xc]

    *((unsigned int [1])v2) = 42;
    v1 = param_null_pointer_deref(&v2);
    v0 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    return v1 + v0;
}


// Function: sub_401841 at 0x401841
void sub_401841(unsigned long a0)
{
    param_buffer_overflow_stack();
    return;
}


// Function: param_buffer_overflow_stack at 0x401850
unsigned int param_buffer_overflow_stack(unsigned int a0)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int i;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned long v4;  // [bp-0x14]

    v2 = 305419896;
    for (i = 0; i <= 16; i += 1)
    {
        *((char *)&v4 + i) = 65;
    }
    v0 = (v2 == 305419896 ? a0 : 4294967295);
    return v0;
}


// Function: param_buffer_overflow_heap at 0x4018b0
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
    unsigned int i;  // [bp-0x1c]
    void* ptr;  // [bp-0x18]
    unsigned int v2;  // [bp-0xc]

    ptr = malloc(16);
    if (!ptr)
    {
        v2 = 4294967294;
        return v2;
    }
    for (i = 0; i <= 32; i += 1)
    {
        *((char *)ptr + i) = 66;
    }
    free(ptr);
    v2 = a0;
    return v2;
}


// Function: sub_401923 at 0x401923
void sub_401923()
{
    call_buffer_overflow();
    return;
}


// Function: call_buffer_overflow at 0x401930
int call_buffer_overflow()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = param_buffer_overflow_stack(10);
    v0 = param_buffer_overflow_heap(20);
    return v1 + v0;
}


// Function: sub_40195e at 0x40195e
void sub_40195e(unsigned long a0, unsigned long a1)
{
    param_integer_overflow();
    return;
}


// Function: param_integer_overflow at 0x401960
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0xc]

    v1 = a0 + a1;
    v0 = a0 + a1;
    if (a0 > 0 && a1 > 0 && v1 < 0)
    {
        v2 = 4294967295;
        return v2;
    }
    if (a0 < 0 && a1 < 0 && v1 > 0)
    {
        v2 = 4294967294;
        return v2;
    }
    v2 = v0;
    return v2;
}


// Function: sub_4019e7 at 0x4019e7
void sub_4019e7()
{
    call_integer_overflow();
    return;
}


// Function: call_integer_overflow at 0x4019f0
int call_integer_overflow()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
    v0 = param_integer_overflow(4294967295, 1);
    return v1 + v0;
}


// Function: sub_401a25 at 0x401a25
void sub_401a25(unsigned long a0)
{
    param_undefined_behavior();
    return;
}


// Function: param_undefined_behavior at 0x401a30
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401a46 at 0x401a46
void sub_401a46()
{
    call_undefined_behavior();
    return;
}


// Function: call_undefined_behavior at 0x401a50
int call_undefined_behavior()
{
    unsigned int v0;  // [bp-0xc]

    v0 = param_undefined_behavior(5);
    return v0;
}


// Function: sub_401a6e at 0x401a6e
void sub_401a6e()
{
    param_implementation_defined();
    return;
}


// Function: param_implementation_defined at 0x401a70
long long param_implementation_defined()
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    char v2;  // [bp-0xd]
    unsigned int v3;  // [bp-0xc]

    v3 = 0;
    v2 = 255;
    v3 += (v2 < 0 ? 1 : 2);
    v1 = 0xfffffff8;
    v3 += v1 >> 1;
    v0 = v0 & 0xfffffff8 | 7;
    v0 = v0 & 4294967047 | 248;
    v0 = v0 & 255 | 0x12345600;
    v3 += (v0 & 7) + (v0 >> 3 & 31);
    v3 += 12;
    return v3;
}


// Function: sub_401aff at 0x401aff
void sub_401aff()
{
    call_implementation_defined();
    return;
}


// Function: call_implementation_defined at 0x401b00
unsigned long long call_implementation_defined()
{
    return param_implementation_defined();
}


// Function: sub_401b0b at 0x401b0b
void sub_401b0b()
{
    test_obf_opt_edge();
    return;
}


// Function: test_obf_opt_edge at 0x401b10
extern char g_402009;
extern char g_402037;
extern char g_402053;
extern char g_40206f;
extern char g_40208c;
extern char g_4020a8;
extern char g_4020d2;
extern char g_4020f7;
extern char g_40211d;
extern char g_40213d;
extern char g_402159;
extern char g_402176;
extern char g_402193;
extern char g_4021c4;
extern char g_4021e1;

int test_obf_opt_edge()
{
    printf(&g_402009);
    printf(&g_402037, call_fake_branch() & 4294967295);
    printf(&g_402053, call_opaque_predicate() & 4294967295);
    printf(&g_40206f, call_instruction_substitution() & 4294967295);
    printf(&g_40208c, call_string_encryption() & 4294967295);
    printf(&g_4020a8, call_tail_call_optimized() & 4294967295);
    printf(&g_4020d2, call_non_tail_call() & 4294967295);
    printf(&g_4020f7, call_vectorized_loop() & 4294967295);
    printf(&g_40211d, (unsigned long long)call_link_time_optimization() & 4294967295);
    printf(&g_40213d, call_division_by_zero() & 4294967295);
    printf(&g_402159, call_null_pointer_deref() & 4294967295);
    printf(&g_402176, call_buffer_overflow() & 4294967295);
    printf(&g_402193, call_integer_overflow() & 4294967295);
    printf(&g_4021c4, call_undefined_behavior() & 4294967295);
    return printf(&g_4021e1, call_implementation_defined() & 4294967295);
}


// Function: sub_401c4a at 0x401c4a
void sub_401c4a()
{
    main();
    return;
}


// Function: main at 0x401c50
unsigned int main()
{
    unsigned int result;  // [bp-0xc]

    result = 0;
    test_obf_opt_edge();
    return 0;
}


// Function: _fini at 0x401c6c
void _fini()
{
    return;
}

