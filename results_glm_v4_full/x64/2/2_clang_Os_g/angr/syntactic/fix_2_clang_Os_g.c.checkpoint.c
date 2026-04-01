// Angr Decompilation of 2_clang_Os_gng_Os_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

/* Type definitions for vector operations */
typedef unsigned __int128 uint128_t;

/* Union to extract high/low 64-bit parts of 128-bit values */
typedef union {
    unsigned __int128 u128;
    struct {
        unsigned long long lo;
        unsigned long long hi;
    } u64;
} uint128_u;

typedef struct {
    uint128_t lo;
    uint128_t hi;
} uint256_t;

/* Vector comparison helpers */
static inline uint256_t CmpGTV(uint256_t a, uint256_t b) {
    uint256_t result;
    uint128_u a_lo = {a.lo};
    uint128_u a_hi = {a.hi};
    uint128_u b_lo = {b.lo};
    uint128_u b_hi = {b.hi};
    
    if (a_hi.u64.hi > b_hi.u64.hi || 
        (a_hi.u64.hi == b_hi.u64.hi && a_hi.u64.lo > b_hi.u64.lo) ||
        (a_hi.u128 == b_hi.u128 && 
         (a_lo.u64.hi > b_lo.u64.hi || 
          (a_lo.u64.hi == b_lo.u64.hi && a_lo.u64.lo > b_lo.u64.lo)))) {
        result.lo = result.hi = ~0ULL;
    } else {
        result.lo = result.hi = 0;
    }
    return result;
}

static inline uint256_t CmpEQV(uint256_t a, uint256_t b) {
    uint256_t result;
    uint128_u a_lo = {a.lo};
    uint128_u a_hi = {a.hi};
    uint128_u b_lo = {b.lo};
    uint128_u b_hi = {b.hi};
    
    if (a_lo.u128 == b_lo.u128 && a_hi.u128 == b_hi.u128) {
        result.lo = result.hi = ~0ULL;
    } else {
        result.lo = result.hi = 0;
    }
    return result;
}

static inline uint256_t AddV(uint256_t a, unsigned long long b) {
    uint256_t result;
    uint128_u a_lo = {a.lo};
    uint128_u a_hi = {a.hi};
    uint128_u res_lo, res_hi;
    
    unsigned long long new_lo = a_lo.u64.lo + b;
    unsigned long long carry = (new_lo < a_lo.u64.lo) ? 1 : 0;
    
    res_lo.u64.lo = new_lo;
    res_lo.u64.hi = a_lo.u64.hi;
    
    res_hi.u64.lo = a_hi.u64.lo + carry;
    res_hi.u64.hi = a_hi.u64.hi;
    
    result.lo = res_lo.u128;
    result.hi = res_hi.u128;
    return result;
}

static inline uint256_t CONCAT_V(uint128_t hi, unsigned long long lo) {
    uint256_t result;
    uint128_u hi_u;
    uint128_u lo_u;
    hi_u.u128 = hi;
    lo_u.u64.lo = lo;
    lo_u.u64.hi = 0;
    
    result.hi = hi_u.u128;
    result.lo = lo_u.u128;
    return result;
}

static inline unsigned long long CONCAT_4(unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long d) {
    return ((a & 0xFFFFFFFFULL) << 48) | ((b & 0xFFFFFFFFULL) << 32) | ((c & 0xFFFFFFFFULL) << 16) | (d & 0xFFFFFFFFULL);
}

static inline unsigned long long CONCAT_2(unsigned long long a, unsigned long long b) {
    return ((a & 0xFFFFFFFFULL) << 16) | (b & 0xFFFFFFFFULL);
}

/* Argument counting macro for CONCAT dispatch */
#define CONCAT_NARGS(...) CONCAT_NARGS_(__VA_ARGS__, 4, 3, 2, 1)
#define CONCAT_NARGS_(_1, _2, _3, _4, N, ...) N

#define CONCAT(...) CONCAT_DISPATCH_(CONCAT_NARGS(__VA_ARGS__), __VA_ARGS__)
#define CONCAT_DISPATCH_(N, ...) CONCAT_DISPATCH_N__(N, __VA_ARGS__)
#define CONCAT_DISPATCH_N__(N, ...) CONCAT_DISPATCH_##N(__VA_ARGS__)
#define CONCAT_DISPATCH_2(...) CONCAT_2(__VA_ARGS__)
#define CONCAT_DISPATCH_4(...) CONCAT_4(__VA_ARGS__)

// Function: sub_401020 at 0x401020
unsigned long long g_405008 = 0;
unsigned long long g_405010 = 0;

void sub_401020()
{
 unsigned long v0;

 v0 = g_405008;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return puts("");
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
 __builtin_trap();
}


// Function: sub_401086 at 0x401086
void deregister_tm_clones(void) {
    return;
}
void sub_401086()
{
 deregister_tm_clones();
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010b9 at 0x4010b9
void register_tm_clones(void) {
    return;
}
void sub_4010b9()
{
 register_tm_clones();
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void __do_global_dtors_aux(void) {
    return;
}
void sub_4010f9()
{
 __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401135 at 0x401135
void sub_401135()
{
}


// Function: sub_401139 at 0x401139
void frame_dummy(void) {
    return;
}
void sub_401139()
{
 frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401149 at 0x401149
long long process_char(unsigned int a0);
void sub_401149(unsigned long a0)
{
 process_char(a0);
}


// Function: process_char at 0x40114c
long long process_char(unsigned int a0)
{
 return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: process_short at 0x40115b
int process_short(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: process_int at 0x40115f
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: process_long at 0x401165
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x40116a
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x401172
double process_float()
{
 return 0.5f;
}


// Function: process_double at 0x401183
double process_double()
{
 return 0.5;
}


// Function: process_ld at 0x401194
long double process_ld()
{
 return 1.0L;
}


// Function: process_bool at 0x40119f
char process_bool(unsigned int a0)
{
 return (a0 & 1) ? (a0 > 0) : 0;
}


// Function: const_param at 0x4011ae
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x4011b4
unsigned int volatile_access(unsigned int volatile *a0)
{
 return (*a0) * 2;
}


// Function: test_data_types_l1 at 0x4011b9
char g_40266f[1] = "";

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_40266f);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 v2 = 0;
 printf("DT-L1-06 (process_float): %.2f\n", (double)v2);
 printf("DT-L1-07 (process_double): %.2f\n", (double)v2);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 1.0L);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: array_1d_stack at 0x4012e2
unsigned long long array_1d_stack(unsigned long ptr, unsigned long a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if ((unsigned int)a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while ((a1 & 4294967295) != i);
 return v2;
}


// Function: array_string at 0x4012fb
long long array_string(char *a0)
{
 unsigned int v1; // eax

 v1 = 0;
 do
 {
 v1++;
 a0 += 1;
 } while (*(a0));
 return v1 + 1;
}


// Function: array_2d_stack at 0x40130c
unsigned long long array_2d_stack(unsigned long a0)
{
 unsigned long long i; // rcx
 unsigned long long v2; // rax

 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(a0 + i));
 i += 44;
 } while (i != 440);
 return v2;
}


// Function: array_3d at 0x401321
unsigned long long array_3d(unsigned long long a0)
{
 unsigned long long i; // r8
 unsigned long long v2; // rax
 unsigned long long j; // rsi
 unsigned long long v4; // rdx
 unsigned long long ptr; // rdx
 unsigned long long k; // rcx

 i = 0;
 v2 = 0;
 do
 {
 j = 0;
 v4 = a0;
 do
 {
 ptr = v4;
 k = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + k * 4));
 k += 1;
 } while (k != 5);
 j += 1;
 v4 = ptr + 20;
 } while (j != 5);
 i += 1;
 a0 += 100;
 } while (i != 5);
 return v2;
}


// Function: array_vla at 0x401354
unsigned long long array_vla(unsigned long a0, unsigned long ptr)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if ((unsigned int)a0 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while ((a0 & 4294967295) != i);
 return v2;
}


// Function: array_pointer at 0x40136d
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if (a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(a0 + i));
 i += 40;
 } while (a1 * 40 != i);
 return v2;
}


// Function: pointer_array at 0x40138f
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned long long v1; // rdx
 unsigned long long v2; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 if (*((long long *)(a0 + v1 * 8)))
 v2 = (unsigned int)v2 + *((int *)*((long long *)(a0 + v1 * 8)));
 } while ((v1 += 1, (a1 < 10 ? (unsigned long long)a1 : 10) != v1));
 return v2;
}


// Function: array_complex_index at 0x4013b9
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a3 >= 0 && (unsigned int)a4 < a2 && a3 < (unsigned int)a1 && (unsigned int)a4 >= 0)
 v1 = *((int *)(ptr + (a1 * a4 + a3 & 4294967295) * 4));
 return v1;
}


// Function: array_oob at 0x4013de
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long i; // rcx
 unsigned long long v2; // rax

 if (a1 < 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while (a1 + 1 != i);
 return v2;
}


// Function: test_array_types at 0x4013f7
char g_402690[1] = "";

int test_array_types()
{
 unsigned long long i; // rbx
 char *iter; // rax
 uint256_t v22; // ymm0
 uint256_t v23; // ymm1
 uint256_t v24; // ymm2
 unsigned long long v25; // xmm5
 unsigned long long v26; // xmm5
 unsigned long long j; // rax
 unsigned int v28; // esi
 unsigned long long k; // rbx
 char *v30; // rax
 char *cur; // rcx
 unsigned long long i1; // rdx
 unsigned long long pos; // rsi
 unsigned long long l; // rax
 char *v35; // rcx
 unsigned int v36; // esi
 unsigned long long i2; // rdi
 char *v38; // rdx
 char *ptr; // rdx
 unsigned long long off; // rbx
 unsigned long long idx; // rbx
 unsigned long long n; // rax
 uint256_t v18; // ymm5
 unsigned int v44; // esi
 unsigned long long index; // rbx
 char *p; // rax
 unsigned long long v47; // rsi
 unsigned long long idx4; // rdx
 uint256_t v20; // xmm4
 unsigned long long v21; // xmm5
 int v22_int; // xmm5
 int v23_int; // xmm6
 int v24_int; // xmm5
 unsigned int v0; // [bp-0x514]
 unsigned int v1; // [bp-0x510]
 unsigned int v3; // [bp-0x50c]
 char *v4; // [bp-0x508]
 char *v5; // [bp-0x500]
 char *v6; // [bp-0x4f8]
 char v7; // [bp-0x4f0]
 uint256_t v8; // [bp-0x4b8]
 uint256_t v9; // [bp-0x4a8]
 uint256_t v10; // [bp-0x498]
 uint256_t v11; // [bp-0x488]
 uint256_t v12; // [bp-0x478]
 unsigned long v48; // [bp-0x468]
 unsigned int v49; // [bp-0x398]
 char v13; // [bp-0x394]
 char v14; // [bp-0x208]

 puts(&g_402690);
 i = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 iter = &v13;
 do
 {
 idx4 = 0;
 v20 = CONCAT_V(1, 0);
 do
 {
 uint128_u v20_u;
 v20_u.u128 = v20.hi;
 v21 = v20_u.u64.lo;
 {
 uint128_u tmp1_lo, tmp1_hi, v22_u;
 tmp1_lo.u64.lo = v20_u.u64.lo ^ 0x8000000080000000ULL;
 tmp1_lo.u64.hi = 0;
 tmp1_hi.u64.lo = v20_u.u64.hi ^ 0x8000000080000000ULL;
 tmp1_hi.u64.hi = 0;
 v22.hi = tmp1_hi.u128;
 v22.lo = tmp1_lo.u128;
 }
 v23 = CmpGTV(CONCAT_V((uint128_t)0x8000000000000000ULL, 0x8000000000000000ULL), v22);
 v24 = CmpEQV(v22, CONCAT_V((uint128_t)0x8000000000000000ULL, 0x8000000000000000ULL));
 {
 uint128_u v23_lo_u;
 v23_lo_u.u128 = v23.lo;
 v25 = CONCAT_4((unsigned int)v23_lo_u.u64.hi, (unsigned int)v23_lo_u.u64.hi, (unsigned int)(v23_lo_u.u64.lo >> 32), (unsigned int)v23_lo_u.u64.lo);
 }
 {
 uint128_u v24_lo_u;
 v24_lo_u.u128 = v24.lo;
 uint128_u v23_lo_u;
 v23_lo_u.u128 = v23.lo;
 v26 = v25 | (CONCAT_4((unsigned int)v24_lo_u.u64.hi, (unsigned int)v24_lo_u.u64.hi, (unsigned int)(v24_lo_u.u64.lo >> 32), (unsigned int)v24_lo_u.u64.lo) & v23_lo_u.u64.lo);
 }
v18 = v22;
{
 uint128_u v18_u;
 v18_u.u128 = v18.lo;
 if (((char)v18_u.u64.lo & 1))
 *((unsigned int *)&iter[4 + 4 * idx4]) = (i == idx4 ? (unsigned int)i : 0);
 }
 if (((char)(v26 >> 32) & 1))
 *((unsigned int *)&iter[4 * idx4]) = (i - 1 == idx4 ? (unsigned int)i : 0);
 idx4 += 2;
 v20 = AddV(v20, 2);
 } while (idx4 != 10);
 i += 1;
 iter += 40;
 } while (i != 10);
 j = 0;
 v28 = 0;
 do
 {
 v28 += *((int *)((char *)&v49 + j));
 j += 44;
 } while (j != 440);
 k = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n", v28);
 v30 = &v14;
 do
 {
 cur = v30;
 i1 = 0;
 do
 {
 pos = 0;
 do
 {
 *((unsigned int *)&cur[4 * pos]) = 1;
 pos += 1;
 } while (pos != 5);
 i1 += 1;
 cur += 20;
 } while (i1 != 5);
 k += 1;
 v30 += 100;
 } while (k != 5);
 l = 0;
 v35 = &v14;
 v36 = 0;
 do
 {
 i2 = 0;
 v38 = v35;
 do
 {
 ptr = v38;
 off = 0;
 do
 {
 v36 += *((int *)&ptr[4 * off]);
 off += 1;
 } while (off != 5);
 i2 += 1;
 v38 = ptr + 20;
 } while (i2 != 5);
 l += 1;
 v35 += 100;
 } while (l != 5);
 idx = 0;
 printf("ARR-L1-04 (array_3d): %d\n", v36);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 do
 {
 *((unsigned int *)((char *)&v48 + 4 * idx)) = idx;
 idx += 10;
 } while (idx != 50);
 n = 0;
 v44 = 0;
 do
 {
 v44 += *((int *)((char *)&v48 + n));
 n += 40;
 } while (n != 200);
 index = 0;
 printf("ARR-L2-02 (array_pointer): %d\n", v44);
 p = &v3;
 v3 = 10;
 v1 = 20;
 v0 = 30;
 v4 = &v3;
 v5 = &v1;
 v6 = &v0;
 memset(&v7, 0, 56);
 v47 = 0;
 while (true)
 {
 if (p)
 v47 = (unsigned long long)((unsigned int)v47 + *(p));
 if (index == 2)
 break;
 p = (&v5)[index];
 index += 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v47);
v8 = CONCAT_V((uint128_t)0x3000000020000000ULL, 0x100000000ULL);
	v9 = CONCAT_V((uint128_t)0x76b8b64a9f5c4eULL, 0x88b59f605c4ULL);
	v10 = CONCAT_V((uint128_t)0xc1274a3b7f8d5cULL, 0x8d781f878ULL);
	v11 = CONCAT_V((uint128_t)0x106d8e5c9a7b64ULL, 0x94a82e9c4ULL);
	v12 = CONCAT_V((uint128_t)0x14a9f75d8b6c72ULL, 0x9a934ed80ULL);
 return printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)((char *)&v12 + 4)));
}


// Function: ptr_single at 0x4016a5
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x4016ab
typedef struct struct_double {
 unsigned int field_0;
} struct_double;

int ptr_double(struct_double **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x4016b4
typedef struct struct_triple_inner {
 unsigned int field_0;
} struct_triple_inner;

typedef struct struct_triple {
 struct struct_triple_inner *field_0;
} struct_triple;

int ptr_triple(struct_triple **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x4016bf
unsigned long long ptr_increment(unsigned long ptr, unsigned int i)
{
 unsigned long long v1; // rdx
 unsigned long long v2; // rax

 if (i <= 0)
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + v1 * 4));
 v1 += 1;
 } while (i != (unsigned int)v1);
 return v2;
}


// Function: ptr_offset at 0x4016d7
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x4016de
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x4016e9
unsigned long long ptr_void(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return *((char *)a0);
 }
 else if (!a1)
 {
 return *((int *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: ptr_const at 0x4016fe
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x401703
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40170b
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 long long (*func)(unsigned long) = (long long (*)(unsigned long))a0;
 return func(a1);
}


// Function: ptr_func_complex at 0x401712
unsigned long long g_404de0 = 0;

long long ptr_func_complex(long long (*a0)(unsigned long, void*), unsigned long a1)
{
 int v0; // [bp-0x18]

 *((unsigned long long *)&v0) = g_404de0;
 return a0(a1, &v0);
}


// Function: ptr_cast at 0x401733
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401736
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x40173a
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x40173e
char g_4026ab[1] = "";

int test_pointer_types()
{
 puts(&g_4026ab);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 printf("PTR-L2-04 (ptr_increment): %d\n", 15);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x401855
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x40185e
unsigned long long struct_array(unsigned long a0, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if (a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(a0 + i)) + *((int *)(a0 + i + 4)) + *((int *)(a0 + i + 8));
 i += 12;
 } while (a1 * 12 != i);
 return v2;
}


// Function: struct_nested at 0x401888
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x40188e
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401895
typedef struct struct_with_ptr_inner {
 unsigned int field_0;
} struct_with_ptr_inner;

typedef struct struct_with_ptr_struct {
 unsigned int field_0;
 char padding_4[4];
 struct struct_with_ptr_inner *field_8;
} struct_with_ptr_struct;

int struct_with_ptr(struct_with_ptr_struct *a0)
{
 return (!a0->field_8 ? 0 : a0->field_8->field_0) + a0->field_0;
}


// Function: struct_bitfields at 0x4018a9
int struct_bitfields(unsigned short *ptr)
{
 unsigned short v1; // ax

 v1 = *(ptr);
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: union_type at 0x4018ca
int union_type(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return *((int *)a0);
 }
 else if (!a1)
 {
 return *((int *)a0);
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x4018df
unsigned long long union_array(unsigned long ptr, unsigned long a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax

 if ((unsigned int)a1 <= 0)
 return 0;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
 i += 1;
 } while ((a1 & 4294967295) != i);
 return v2;
}


// Function: enum_type at 0x4018f8
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x4018fe
unsigned int g_4020d0[4] = {0};

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_4020d0[a0];
 return v1;
}


// Function: struct_func_ptr at 0x401916
typedef struct struct_func_ptr_struct {
 char padding_0[8];
 unsigned long long field_8;
} struct_func_ptr_struct;

long long struct_func_ptr(struct_func_ptr_struct *a0)
{
 long long (*func)() = (long long (*)())a0->field_8;
 return func();
}


// Function: linked_list at 0x40191e
typedef struct struct_linked_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_linked_list *field_8;
} struct_linked_list;

unsigned long long linked_list(struct_linked_list *cur)
{
 unsigned long long v1; // rax

 for (v1 = 0; cur; cur = cur->field_8)
 {
 v1 = (unsigned int)v1 + cur->field_0;
 }
 return v1;
}


// Function: doubly_linked_list at 0x40192e
typedef struct struct_doubly_linked_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_doubly_linked_list *field_8;
} struct_doubly_linked_list;

unsigned long long doubly_linked_list(struct_doubly_linked_list *cur)
{
 unsigned long long v1; // rax

 for (v1 = 0; cur; cur = cur->field_8)
 {
 v1 = (unsigned int)v1 + cur->field_0;
 }
 return v1;
}


// Function: binary_tree_sum at 0x40193e
typedef struct struct_binary_tree {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_binary_tree *field_10;
} struct_binary_tree;

unsigned int binary_tree_sum(struct_binary_tree *a0)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 struct_binary_tree *ptr; // r14
 unsigned int v5; // eax
 struct_binary_tree *v6; // r14
 unsigned long long v0; // [bp-0x18]

 v2 = 0;
 v0 = v2;
 if (!a0)
 return 0;
 v3 = 0;
 do
 {
 ptr = a0;
 v5 = binary_tree_sum((struct_binary_tree *)ptr->field_8);
 v6 = ptr->field_10;
 v3 = v3 + ptr->field_0 + v5;
 a0 = v6;
 } while (ptr->field_10);
 return v3;
}


// Function: binary_tree at 0x401971
int binary_tree(void* a0)
{
 return binary_tree_sum((struct_binary_tree *)a0);
}


// Function: graph_traverse at 0x401976
typedef struct struct_graph_node {
 unsigned int field_0;
 char padding_4[4];
 struct struct_graph_node *field_8;
} struct_graph_node;

typedef struct struct_graph {
 struct struct_graph_node *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_graph;

unsigned long long graph_traverse(struct_graph *ptr)
{
 unsigned long v1; // rcx
 unsigned long index; // rdx
 unsigned long long v3; // rax
 unsigned long cur; // rsi

 v1 = ptr->field_50;
 if ((unsigned int)v1 <= 0)
 return 0;
 index = 0;
 v3 = 0;
 do
 {
 for (cur = ((unsigned long *)&ptr->field_0)[index]; cur; cur = *((long long *)(cur + 8)))
 {
 v3 = (unsigned int)v3 + *((int *)cur);
 }
 index += 1;
 } while (index != v1);
 return v3;
}


// Function: test_composite_types at 0x40199e
typedef struct struct_ll_node {
 char field_0[4];
 char padding_4[4];
 struct struct_ll_node *field_8;
} struct_ll_node;

typedef struct struct_dll_node {
 char field_0[4];
 char padding_4[4];
 struct struct_dll_node *field_8;
} struct_dll_node;

typedef struct struct_g_node {
 char field_0[4];
 char padding_4[4];
 struct struct_g_node *field_8;
} struct_g_node;

char g_4026c6[1] = "";

int test_composite_types()
{
 unsigned int v20; // ebp
 struct_ll_node *ptr; // rax
 unsigned int v23; // ebx
 struct_dll_node *p; // rax
 unsigned long long idx; // rbp
 struct_g_node *cur; // rax
 unsigned long long v29; // rsi
 char *v0; // [bp-0x100]
 char v1; // [bp-0xf8]
 unsigned long long flag3; // [bp-0xa8]
 char v4; // [bp-0x98], Other Possible Types: unsigned int
 char *v5; // [bp-0x90]
 char v6; // [bp-0x88], Other Possible Types: unsigned int
 char *v7; // [bp-0x80]
 char v8; // [bp-0x78], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x70]
 unsigned long long v10; // [bp-0x68]
 unsigned long long flag4; // [bp-0x58]
 unsigned int v13; // [bp-0x48]
 char *v14; // [bp-0x40]
 unsigned long long result; // [bp-0x38]
 unsigned int v16; // [bp-0x30]
 unsigned long long flag1; // [bp-0x28]
 char *v18; // [bp-0x20]

 puts(&g_4026c6);
 flag1 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(NULL));
 printf("CMP-L2-01 (struct_simple): %d\n", 6);
 printf("CMP-L2-02 (struct_array): %d\n", 9);
 printf("CMP-L2-03 (struct_nested): %d\n", 105);
 printf("CMP-L2-04 (struct_deep): %d\n", 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
 printf("CMP-L2-07 (union_type): %d\n", 305419896);
 printf("CMP-L2-08 (union_array): %d\n", 60);
 printf("CMP-L2-09 (enum_type): %d\n", 10);
 printf("CMP-L2-10 (enum_switch): %d\n", 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
 {
 unsigned int node_val1 = 10;
 unsigned int node_val2 = 20;
 unsigned int node_val3 = 30;
 struct struct_ll_node node1, node2, node3;
 memcpy(&node1.field_0, &node_val1, 4);
 memcpy(&node2.field_0, &node_val2, 4);
 memcpy(&node3.field_0, &node_val3, 4);
 node1.field_8 = &node2;
 node2.field_8 = &node3;
 node3.field_8 = 0;
 ptr = &node1;
 do
 {
 v20 += *(unsigned int *)&ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 v23 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v20);
 {
 unsigned int dnode_val1 = 10;
 unsigned int dnode_val2 = 20;
 struct struct_dll_node dnode1, dnode2;
 memcpy(&dnode1.field_0, &dnode_val1, 4);
 memcpy(&dnode2.field_0, &dnode_val2, 4);
 dnode1.field_8 = &dnode2;
 dnode2.field_8 = 0;
 p = &dnode1;
 result = 0;
 do
 {
 v23 += *(unsigned int *)&p->field_0;
 p = p->field_8;
 } while (p->field_8);
 }
 
 {
 struct struct_g_node node1, node2, node3;
 memcpy(&node1.field_0, &(unsigned int){100}, 4);
 memcpy(&node2.field_0, &(unsigned int){200}, 4);
 memcpy(&node3.field_0, &(unsigned int){300}, 4);
 node1.field_8 = &node2;
 node2.field_8 = &node3;
 node3.field_8 = 0;
 struct struct_graph g;
 memset(&g, 0, sizeof(g));
 g.field_50 = 3;
 ((struct struct_graph_node **)&g.field_0)[0] = (struct struct_graph_node *)&node1;
 ((struct struct_graph_node **)&g.field_0)[1] = (struct struct_graph_node *)&node2;
 ((struct struct_graph_node **)&g.field_0)[2] = (struct struct_graph_node *)&node3;
 v29 = graph_traverse(&g);
 }
 return printf("CMP-L2-15 (graph_traverse): %d\n", v29);
}


// Function: main at 0x401bbc
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


