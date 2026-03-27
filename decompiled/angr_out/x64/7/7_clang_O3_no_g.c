// Angr Decompilation of 7_clang_O3_no_g
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
long long sub_40102c()
{
    char *v1;  // rdi
    char *v2;  // rsi
    unsigned long v3;  // rdx

    return strncpy(v1, v2, v3);
}


// Function: _start at 0x4010b0
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198613()
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4010e0
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_401109 at 0x401109
void sub_401109()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401110

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401150
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


// Function: sub_401185 at 0x401185
void sub_401185()
{
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401190
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
    param_fake_branch();
    return;
}


// Function: param_fake_branch at 0x4011a0
int param_fake_branch(unsigned int a0)
{
    return a0;
}


// Function: sub_4011a3 at 0x4011a3
void sub_4011a3()
{
    call_fake_branch();
    return;
}


// Function: call_fake_branch at 0x4011b0
unsigned long long call_fake_branch()
{
    return 10;
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6(unsigned long a0)
{
    param_opaque_predicate();
    return;
}


// Function: param_opaque_predicate at 0x4011c0
long long param_opaque_predicate(unsigned int a0)
{
    unsigned int v1;  // r8d
    unsigned long long v2;  // rcx
    unsigned int result;  // esi
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned int v8;  // eax

    v1 = a0 * 2;
    v2 = 4294967295;
    result = a0 + 1;
    if (!((char)_ccall(4, 23, (unsigned long long)(a0 + 1), 0, _ccall(v4, v5, v6, v7))))
    {
        v8 = a0;
        do
        {
            v2 = result;
            result = ((int)((v8 >> 31 CONCAT v8) % (v2 & 4294967295)) CONCAT (int)((v8 >> 31 CONCAT v8) / (v2 & 4294967295))) >> 32;
            v8 = v2;
        } while (result);
    }
    return (!((unsigned int)v2 ^ 1) && !((a0 + 1) * (a0 + 1) ^ (v1 | 1) + a0 * a0) ? v1 + 10 : a0 * 3 + 20);
}


// Function: sub_401211 at 0x401211
void sub_401211()
{
    call_opaque_predicate();
    return;
}


// Function: call_opaque_predicate at 0x401220
unsigned long long call_opaque_predicate()
{
    unsigned int result;  // edx
    unsigned int v2;  // eax
    unsigned long v3;  // rcx

    result = 6;
    v2 = 5;
    do
    {
        v3 = result;
        result = ((int)((v2 >> 31 CONCAT v2) % (v3 & 4294967295)) CONCAT (int)((v2 >> 31 CONCAT v2) / (v3 & 4294967295))) >> 32;
        v2 = v3;
    } while (result);
    if ((unsigned int)v3 != 1)
        return 35;
    return 20;
}


// Function: sub_40124c at 0x40124c
void sub_40124c(unsigned long a0)
{
    param_instruction_substitution();
    return;
}


// Function: param_instruction_substitution at 0x401250
int param_instruction_substitution(unsigned int a0)
{
    return a0 * 21 + (a0 >> 1) + (a0 & 15);
}


// Function: sub_401264 at 0x401264
void sub_401264()
{
    call_instruction_substitution();
    return;
}


// Function: call_instruction_substitution at 0x401270
unsigned long long call_instruction_substitution()
{
    return 225;
}


// Function: sub_401276 at 0x401276
void sub_401276(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    decrypt_string();
    return;
}


// Function: decrypt_string at 0x401280
char [2] decrypt_string(char *a0, char *p, unsigned long a2, char a3)
{
    char *dst;  // rax
    char v2;  // al
    char ptr[2];  // rcx

    dst = strncpy(p, a0, a2);
    p[1 + a2] = 0;
    v2 = *(p);
    if (!*(p))
        return p;
    ptr = p + 1;
    do
    {
        ptr[1] = v2 ^ a3;
        v2 = ptr[0];
        ptr = &ptr[1];
    } while (ptr[0]);
    return p;
}


// Function: sub_4012c9 at 0x4012c9
void sub_4012c9()
{
    param_string_encryption();
    return;
}


// Function: param_string_encryption at 0x4012d0
int param_string_encryption()
{
    void* ptr;  // rcx
    char v5;  // al
    unsigned int v8;  // ebx
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
        v8 = flag1;
    }
    else
    {
        v8 = 0;
    }
    return (unsigned int)strlen(&flag1) + v8;
}


// Function: sub_401329 at 0x401329
void sub_401329()
{
    call_string_encryption();
    return;
}


// Function: call_string_encryption at 0x401330
int call_string_encryption()
{
    void* ptr;  // rcx
    char v5;  // al
    unsigned int v8;  // ebx
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x27]
    char result;  // [bp-0x9]

    result = 0;
    if (v0)
    {
        ptr = &v1;
        v5 = v0;
        do
        {
            *((char *)&ptr[1]) = v5 ^ 90;
            v5 = *((char *)ptr);
            ptr += 1;
        } while (*((char *)ptr));
        v8 = v0;
    }
    else
    {
        v8 = 0;
    }
    return (unsigned int)strlen(&v0) + v8;
}


// Function: sub_401389 at 0x401389
void sub_401389(unsigned long a0, unsigned long a1)
{
    param_tail_call_optimized();
    return;
}


// Function: param_tail_call_optimized at 0x401390
long long param_tail_call_optimized(unsigned long a0, unsigned int a1)
{
    unsigned long v1;  // rax

    v1 = a1;
    if ((unsigned int)a0 > 0)
        v1 = v1 + a0 + (a0 - 1 & 4294967295) * (a0 - 1 & 4294967295) - ((a0 - 1 & 4294967295) * (a0 - 2 & 4294967295) >> 1);
    return v1;
}


// Function: sub_4013ad at 0x4013ad
void sub_4013ad()
{
    call_tail_call_optimized();
    return;
}


// Function: call_tail_call_optimized at 0x4013b0
unsigned long long call_tail_call_optimized()
{
    return 500500;
}


// Function: sub_4013b6 at 0x4013b6
void sub_4013b6(unsigned long a0)
{
    param_non_tail_call();
    return;
}


// Function: param_non_tail_call at 0x4013c0
unsigned long long param_non_tail_call(unsigned long a0)
{
    unsigned long long v1;  // rax

    if ((unsigned int)a0 <= 0)
        return 0;
    v1 = a0 - 1 & 4294967295;
    return v1 * v1 + a0 - (v1 * (a0 - 2 & 4294967295) >> 1);
}


// Function: sub_4013dc at 0x4013dc
void sub_4013dc()
{
    call_non_tail_call();
    return;
}


// Function: call_non_tail_call at 0x4013e0
unsigned long long call_non_tail_call()
{
    return 5050;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
    param_vectorized_loop();
    return;
}


// Function: param_vectorized_loop at 0x4013f0
unsigned long long param_vectorized_loop(unsigned long long a0, unsigned long long a1, unsigned long ptr, unsigned int a3)
{
    unsigned long long j;  // r8
    unsigned long long v2;  // rax
    int v11;  // xmm0
    unsigned long long v12;  // r10
    unsigned long long i;  // r10
    unsigned long long v14;  // rax
    unsigned long long index;  // rax
    unsigned long long v16;  // rax
    unsigned long long pos;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rax
    unsigned long long v3;  // r10
    unsigned long long v21;  // rsi
    unsigned long v22;  // rdi
    unsigned long long v23;  // rax
    uint128_t v24;  // xmm0
    unsigned long long off;  // rsi
    uint128_t v26;  // xmm1
    unsigned long long l;  // rdi
    unsigned long long v29;  // rsi
    unsigned long long m;  // rdi
    unsigned long long v4;  // rbx
    unsigned long v31;  // xmm1lq
    unsigned long v5;  // r9
    unsigned long long k;  // r11
    unsigned long long idx;  // r10
    int v8;  // xmm0
    int v9;  // xmm0

    if (a3 <= 0)
        return 0;
    j = a3;
    if (a3 < 8)
    {
        v2 = 0;
    }
    else
    {
        v3 = ptr + j * 4;
        v2 = 0;
        if (!(v3 > a0 & a0 + j * 4 > ptr) && !(a1 + j * 4 > ptr & v3 > a1))
        {
            v2 = (unsigned int)j & 0xfffffff8;
            v4 = v2 - 8;
            v5 = (v4 >> 3) + 1;
            if (v4)
            {
                k = 4611686018427387902 & v5;
                idx = 0;
                do
                {
                    v8 = AddV(*((int128_t *)(a1 + idx * 4 + 16)), *((int128_t *)(a0 + idx * 4 + 16)));
                    *((int128_t *)(ptr + idx * 4)) = AddV(*((int128_t *)(a1 + idx * 4)), *((int128_t *)(a0 + idx * 4)));
                    *((void*)(ptr + idx * 4 + 16)) = v8;
                    v9 = AddV(*((int128_t *)(a1 + idx * 4 + 48)), *((int128_t *)(a0 + idx * 4 + 48)));
                    *((int128_t *)(ptr + idx * 4 + 32)) = AddV(*((int128_t *)(a1 + idx * 4 + 32)), *((int128_t *)(a0 + idx * 4 + 32)));
                    *((void*)(ptr + idx * 4 + 48)) = v9;
                    idx += 16;
                    k -= 2;
                } while (k != 2);
                if (((char)v5 & 1))
                    goto LABEL_401561;
            }
            else
            {
                idx = 0;
                if (((char)v5 & 1))
                {
LABEL_401561:
                    v11 = AddV(*((int128_t *)(a1 + idx * 4 + 16)), *((int128_t *)(a0 + idx * 4 + 16)));
                    *((int128_t *)(ptr + idx * 4)) = AddV(*((int128_t *)(a1 + idx * 4)), *((int128_t *)(a0 + idx * 4)));
                    *((void*)(ptr + idx * 4 + 16)) = v11;
                }
            }
            if (v2 == j)
                goto LABEL_401599;
        }
    }
    v12 = j;
    i = v12 & 3;
    v14 = v2;
    index = v2;
    if (((char)v12 & 3))
    {
        do
        {
            *((int *)(ptr + index * 4)) = *((int *)(a1 + index * 4)) + *((int *)(a0 + index * 4));
            v16 = index + 1;
            v14 = v16;
            index = v16;
            i -= 1;
        } while (i != 1);
    }
    pos = v14;
    if (~(v2) + j >= 3)
    {
        do
        {
            *((int *)(ptr + pos * 4)) = *((int *)(a1 + pos * 4)) + *((int *)(a0 + pos * 4));
            *((int *)(ptr + pos * 4 + 4)) = *((int *)(a1 + pos * 4 + 4)) + *((int *)(a0 + pos * 4 + 4));
            *((int *)(ptr + pos * 4 + 8)) = *((int *)(a1 + pos * 4 + 8)) + *((int *)(a0 + pos * 4 + 8));
            *((int *)(ptr + pos * 4 + 12)) = *((int *)(a1 + pos * 4 + 12)) + *((int *)(a0 + pos * 4 + 12));
            pos += 4;
        } while (j != pos);
    }
LABEL_401599:
    if (a3 <= 0)
        return 0;
    if (a3 < 8)
    {
        v19 = 0;
        v20 = 0;
    }
    else
    {
        v19 = (unsigned int)j & 0xfffffff8;
        v21 = v19 - 8;
        v22 = (v21 >> 3) + 1;
        v23 = (unsigned int)v22 & 3;
        if (v21 < 24)
        {
            v24 = 0;
            off = 0;
            v26 = 0;
        }
        else
        {
            l = v22 & 18446744073709551612;
            v24 = 0;
            off = 0;
            v26 = 0;
            do
            {
                v24 = AddV(*((int128_t *)(ptr + off * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + off * 4 + 64)), *((int128_t *)(ptr + off * 4 + 32))), AddV(*((int128_t *)(ptr + off * 4)), v24)));
                v26 = AddV(*((int128_t *)(ptr + off * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + off * 4 + 80)), *((int128_t *)(ptr + off * 4 + 48))), AddV(*((int128_t *)(ptr + off * 4 + 16)), v26)));
                off += 32;
                l -= 4;
            } while (l != 4);
        }
        if (v23)
        {
            v29 = ptr + off * 4 + 16;
            m = 0;
            do
            {
                v24 = AddV(v24, *((int128_t *)(v29 + m - 16)));
                v26 = AddV(v26, *((int128_t *)(v29 + m)));
                m += 32;
            } while (v23 * 32 != m);
        }
        v31 = AddV((unsigned int)(AddV(v24, v26) >> 96) CONCAT (unsigned int)(AddV(v24, v26) >> 64) CONCAT (unsigned int)(AddV(v24, v26) >> 96) CONCAT (unsigned int)(AddV(v24, v26) >> 64), AddV(v24, v26));
        v20 = AddV(((unsigned int)(v31 >> 32) CONCAT (unsigned int)(v31 >> 32) CONCAT (unsigned int)(v31 >> 32) CONCAT (unsigned int)(v31 >> 32)) & 18446744073709551615, v31);
        if (v19 == j)
            return AddV(((unsigned int)(v31 >> 32) CONCAT (unsigned int)(v31 >> 32) CONCAT (unsigned int)(v31 >> 32) CONCAT (unsigned int)(v31 >> 32)) & 18446744073709551615, v31);
    }
    do
    {
        v20 = (unsigned int)v20 + *((int *)(ptr + v19 * 4));
        v19 += 1;
    } while (j != v19);
    return v20;
}


// Function: call_vectorized_loop at 0x4016c0
unsigned long long call_vectorized_loop()
{
    return 72;
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned long a0)
{
    param_link_time_optimization();
    return;
}


// Function: param_link_time_optimization at 0x4016d0
int param_link_time_optimization(unsigned int a0)
{
    return a0 * 2 + 10;
}


// Function: sub_4016d7 at 0x4016d7
void sub_4016d7()
{
    call_link_time_optimization();
    return;
}


// Function: call_link_time_optimization at 0x4016e0
unsigned long long call_link_time_optimization()
{
    return 20;
}


// Function: sub_4016e6 at 0x4016e6
void sub_4016e6()
{
    div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x4016f0
extern unsigned int div_zero_caught;
extern unsigned long long jmp_buffer;

void div_zero_handler()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    div_zero_caught = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: sub_40170c at 0x40170c
void sub_40170c(unsigned long a0)
{
    param_division_by_zero();
    return;
}


// Function: param_division_by_zero at 0x401710
extern unsigned long long jmp_buffer;

unsigned int param_division_by_zero(unsigned long a0)
{
    signal(8, div_zero_handler);
    if (!_setjmp(&jmp_buffer))
        return (int)((0 CONCAT 10) % (a0 & 4294967295)) CONCAT (int)((0 CONCAT 10) / (a0 & 4294967295));
    return 4294967295;
}


// Function: sub_40174c at 0x40174c
void sub_40174c()
{
    call_division_by_zero();
    return;
}


// Function: call_division_by_zero at 0x401750
int call_division_by_zero()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned long long v0;  // [bp-0x18]

    v0 = v2;
    v3 = param_division_by_zero(5);
    v4 = param_division_by_zero(0);
    signal(8, NULL);
    return v4 + v3;
}


// Function: sub_40177f at 0x40177f
void sub_40177f()
{
    segv_handler(); /* do not return */
}


// Function: segv_handler at 0x401780
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;

void segv_handler()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: sub_40179c at 0x40179c
void sub_40179c(unsigned long a0)
{
    param_null_pointer_deref();
    return;
}


// Function: param_null_pointer_deref at 0x4017a0
extern unsigned long long segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
    signal(11, segv_handler);
    if (!_setjmp(&segv_buffer))
        return *(a0);
    return 4294967295;
}


// Function: sub_4017d4 at 0x4017d4
void sub_4017d4()
{
    call_null_pointer_deref();
    return;
}


// Function: call_null_pointer_deref at 0x4017e0
int call_null_pointer_deref()
{
    unsigned long v3;  // rax
    unsigned int v4;  // eax
    unsigned int v5;  // eax
    unsigned long v0;  // [bp-0x18]
    unsigned int v1[1];  // [bp-0x14]

    v0 = v3;
    *((unsigned int [1])v1) = 42;
    v4 = param_null_pointer_deref(&v1);
    v5 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    return v5 + v4;
}


// Function: sub_401817 at 0x401817
void sub_401817(unsigned long a0)
{
    param_buffer_overflow_stack();
    return;
}


// Function: param_buffer_overflow_stack at 0x401820
int param_buffer_overflow_stack(unsigned int a0)
{
    return a0;
}


// Function: sub_401823 at 0x401823
void sub_401823(unsigned long a0)
{
    param_buffer_overflow_heap();
    return;
}


// Function: param_buffer_overflow_heap at 0x401830
int param_buffer_overflow_heap(unsigned int a0)
{
    return a0;
}


// Function: sub_401833 at 0x401833
void sub_401833()
{
    call_buffer_overflow();
    return;
}


// Function: call_buffer_overflow at 0x401840
unsigned long long call_buffer_overflow()
{
    return 30;
}


// Function: sub_401846 at 0x401846
void sub_401846(unsigned long a0, unsigned long a1)
{
    param_integer_overflow();
    return;
}


// Function: param_integer_overflow at 0x401850
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
    if (a0 > 0 && a1 > 0 && a1 + a0 < 0)
        return 4294967295;
    return ((a0 & a1) >= 0 ? a1 + a0 : (a1 + a0 <= 0 ? a1 + a0 : 4294967294));
}


// Function: sub_401875 at 0x401875
void sub_401875()
{
    call_integer_overflow();
    return;
}


// Function: call_integer_overflow at 0x401880
unsigned long long call_integer_overflow()
{
    return 0x77359400;
}


// Function: sub_401886 at 0x401886
void sub_401886(unsigned long a0)
{
    param_undefined_behavior();
    return;
}


// Function: param_undefined_behavior at 0x401890
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401894 at 0x401894
void sub_401894()
{
    call_undefined_behavior();
    return;
}


// Function: call_undefined_behavior at 0x4018a0
unsigned long long call_undefined_behavior()
{
    return 10;
}


// Function: sub_4018a6 at 0x4018a6
void sub_4018a6()
{
    param_implementation_defined();
    return;
}


// Function: param_implementation_defined at 0x4018b0
unsigned long long param_implementation_defined()
{
    return 47;
}


// Function: sub_4018b6 at 0x4018b6
void sub_4018b6()
{
    call_implementation_defined();
    return;
}


// Function: call_implementation_defined at 0x4018c0
unsigned long long call_implementation_defined()
{
    return 47;
}


// Function: sub_4018c6 at 0x4018c6
void sub_4018c6()
{
    test_obf_opt_edge();
    return;
}


// Function: test_obf_opt_edge at 0x4018d0
extern char g_402004;
extern char g_402020;
extern char g_40203c;
extern char g_402059;
extern char g_402075;
extern char g_40209f;
extern char g_4020c4;
extern char g_4020ea;
extern char g_40210a;
extern char g_402126;
extern char g_402143;
extern char g_402160;
extern char g_402191;
extern char g_4021ae;
extern char g_4021d5;
extern char param_string_encryption.encrypted;

int test_obf_opt_edge()
{
    unsigned int flag1;  // edx
    unsigned int v5;  // eax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long v6;  // rcx
    unsigned int v7;  // ebx
    void* ptr;  // rcx
    char v9;  // al
    unsigned long long v13;  // rax
    char v0[1];  // [bp-0x38]
    char v1;  // [bp-0x37]
    char result;  // [bp-0x19]

    puts(&g_4021d5);
    printf(&g_402004, 10);
    flag1 = 6;
    v5 = 5;
    do
    {
        v6 = flag1;
        flag1 = ((int)((v5 >> 31 CONCAT v5) % (v6 & 4294967295)) CONCAT (int)((v5 >> 31 CONCAT v5) / (v6 & 4294967295))) >> 32;
        v5 = v6;
    } while (flag1);
    v7 = 0;
    printf(&g_402020, ((unsigned int)v6 == 1 ? 20 : 35));
    printf(&g_40203c, 225);
    strncpy(&v0, &param_string_encryption.encrypted, 32);
    result = 0;
    if (v0)
    {
        ptr = &v1;
        v9 = v0;
        do
        {
            *((char *)&ptr[1]) = v9 ^ 90;
            v9 = *((char *)ptr);
            ptr += 1;
        } while (*((char *)ptr));
        v7 = (unsigned int)v0;
    }
    printf(&g_402059, v7 + (strlen(&v0) & 4294967295) & 4294967295);
    printf(&g_402075, 500500);
    printf(&g_40209f, 5050);
    printf(&g_4020c4, 72);
    printf(&g_4020ea, 20);
    v13 = param_division_by_zero(5);
    v14 = param_division_by_zero(0);
    signal(8, NULL);
    printf(&g_40210a, (v14 & 4294967295) + (v13 & 4294967295) & 4294967295);
    *((unsigned int *)&v0) = 42;
    v15 = param_null_pointer_deref(&v0);
    v16 = param_null_pointer_deref(NULL);
    signal(11, NULL);
    printf(&g_402126, (v16 & 4294967295) + (v15 & 4294967295) & 4294967295);
    printf(&g_402143, 30);
    printf(&g_402160, 0x77359400);
    printf(&g_402191, 10);
    return printf(&g_4021ae, 47);
}


// Function: sub_401aa9 at 0x401aa9
void sub_401aa9()
{
    main();
    return;
}


// Function: main at 0x401ab0
unsigned int main()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    test_obf_opt_edge();
    return 0;
}


// Function: _fini at 0x401abc
void _fini()
{
    return;
}

