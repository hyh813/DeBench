// Angr Decompilation of 2_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/* Ensure we have printf declaration */
extern int printf(const char *format, ...);

/* Use compiler builtins for 128-bit integers if available, otherwise fallback */
#if defined(__SIZEOF_INT128__)
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef uint128_t simd;
#else
/* Fallback when 128-bit integers are not available */
typedef struct {
    unsigned long long lo;
    unsigned long long hi;
} int128_t;
typedef struct {
    unsigned long long lo;
    unsigned long long hi;
} uint128_t;
/* Use unsigned long long for vector operations when 128-bit not available */
typedef unsigned long long simd;
#endif

/* Forward declarations for structures used throughout the code */
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_1;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_3 *field_8;
} struct_3;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_4 *field_8;
} struct_4;

/* Vector operation macros for decompiled SIMD instructions */
#define AddV(x, y) ((x) + (y))
#define MulV(x, y) ((x) * (y))
#define InterleaveLOV(x, y) ((x) + (y))
#if defined(__SIZEOF_INT128__)
#define CONCAT(a, b) ((((uint128_t)(a)) << 32) | (b))
#define CONCAT4(a, b, c, d) (CONCAT(CONCAT(a, b), CONCAT(c, d)))
/* Safe read of 128-bit value from memory */
#define READ_INT128(ptr) (*(const uint128_t *)(ptr))
#else
/* Fallback when 128-bit integers are not available */
#define CONCAT(a, b) ((((unsigned long long)(a)) << 32) | (unsigned long long)(b))
#define CONCAT4(a, b, c, d) ((unsigned long long)(CONCAT(CONCAT((unsigned long long)(a), (unsigned long long)(b)), CONCAT((unsigned long long)(c), (unsigned long long)(d))))
/* Safe read of 128-bit value from memory - read as unsigned long long when 128-bit not available */
#define READ_INT128(ptr) (*(const unsigned long long *)(ptr))
#endif

/* CRT stub functions */
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

/* Placeholder for unsupported operations */
#define amd64g_dirtyhelper_storeF80le(x, y) do {} while(0)
#define Reinterpret(t, x) (x)

/* CRT stub function _init removed by preprocessor */

extern struct_0 *g_405fe0;

struct_0 *g_405fe0 = NULL;
extern unsigned long long g_405de0;
unsigned long long g_405de0 = 0;
extern char *g_40366f;
char *g_40366f = "Data Types";
extern char *g_403690;
char *g_403690 = "Array Types";
extern char *g_4036ab;
char *g_4036ab = "Pointer Types";
extern char *g_4036c6;
char *g_4036c6 = "Composite Types";

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe0;
 if (g_405fe0)
 v1 = (unsigned long long *)(*(unsigned long long (*)())g_405fe0)();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

unsigned long long g_406008 = 0;
void *g_406010 = NULL;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 goto *g_406010;
}


// Function: sub_40102c at 0x40102c
int sub_40102c(char *v1)
{
 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
 /* Unsupported jumpkind Ijk_SigTRAP */
}


// Function: sub_401086 at 0x401086
void sub_401086()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010b9 at 0x4010b9
void sub_4010b9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401135 at 0x401135
void sub_401135()
{
}


// Function: sub_401139 at 0x401139
void sub_401139()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401149 at 0x401149
unsigned int sub_401149(unsigned long a0)
{
 return process_char(a0);
}


// Function: process_char at 0x401150
long long process_char(unsigned int a0)
{
 return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: sub_40115f at 0x40115f
int sub_40115f(unsigned long a0, unsigned long a1)
{
 return process_short(a0, a1);
}


// Function: process_short at 0x401160
int process_short(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401164 at 0x401164
int sub_401164(unsigned long a0)
{
 return process_int(a0);
}


// Function: process_int at 0x401170
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_401177 at 0x401177
unsigned long long sub_401177(unsigned long a0)
{
 return process_long(a0);
}


// Function: process_long at 0x401180
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: sub_401185 at 0x401185
long long sub_401185(unsigned long a0)
{
 return process_ll(a0);
}


// Function: process_ll at 0x401190
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: sub_401198 at 0x401198
double sub_401198()
{
 return process_float();
}


// Function: process_float at 0x4011a0
double process_float()
{
 int v1; // xmm0

 v1 = 0;
 return (unsigned long long)(AddV(MulV(v1, 0x3fc00000), 0x3f000000));
}


// Function: sub_4011b1 at 0x4011b1
double sub_4011b1()
{
 return process_double();
}


// Function: process_double at 0x4011c0
double process_double()
{
 int v1; // xmm0

 v1 = 0;
 return (unsigned long long)(AddV(MulV(v1, 0x3fe0000000000000), 4591870180066957722));
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1()
{
 process_ld();
}


// Function: process_ld at 0x4011e0
void process_ld()
{
 /* Unsupported SIMD operations */
 return;
}


// Function: sub_4011eb at 0x4011eb
char sub_4011eb(unsigned long a0)
{
 return process_bool(a0);
}


// Function: process_bool at 0x4011f0
char process_bool(unsigned int a0)
{
 return !((char)a0 & 1) & a0 > 0;
}


// Function: sub_4011ff at 0x4011ff
int sub_4011ff(unsigned long a0)
{
 return const_param((unsigned int *)a0);
}


// Function: const_param at 0x401200
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401206 at 0x401206
unsigned int sub_401206(unsigned long a0)
{
 return volatile_access((unsigned int *)a0);
}


// Function: volatile_access at 0x401210
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401215 at 0x401215
int sub_401215()
{
 return test_data_types_l1();
}


// Function: test_data_types_l1 at 0x401220
extern char *g_40366f;

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(g_40366f);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 0.0);
 printf("DT-L1-07 (process_double): %.2f\n", 0.0);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0L);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: sub_401349 at 0x401349
unsigned long long sub_401349(unsigned long a0, unsigned long a1)
{
 return array_1d_stack(a0, a1);
}


// Function: array_1d_stack at 0x401350
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rsi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rsi
 unsigned long long i; // rax

 if (a1 <= 0)
 return 0;
 k = a1;
 if (a1 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(CONCAT4((unsigned int)(AddV(v12, v13) >> 96), (unsigned int)(AddV(v12, v13) >> 64), (unsigned int)(AddV(v12, v13) >> 32), (unsigned int)(AddV(v12, v13))), AddV(v12, v13));
 v3 = AddV(CONCAT4((unsigned int)(v14 >> 96), (unsigned int)(v14 >> 64), (unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(CONCAT((unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40146d at 0x40146d
long long sub_40146d(unsigned long a0)
{
 return array_string((char *)a0);
}


// Function: array_string at 0x401470
long long array_string(char *a0)
{
 unsigned int v1; // eax

 v1 = 4294967295;
 do
 {
 v1 = v1 + 1;
 a0 += 1;
 } while (*(a0));
 return v1 + 1;
}


// Function: sub_40148d at 0x40148d
int sub_40148d(unsigned long a0)
{
 return array_2d_stack((unsigned int *)a0);
}


// Function: array_2d_stack at 0x401490
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_4014c3 at 0x4014c3
unsigned long long sub_4014c3(unsigned long a0)
{
 return array_3d((void *)a0);
}


// Function: array_3d at 0x4014d0
unsigned long long array_3d(void *ptr)
{
 return 0;
}


// Function: sub_4016fe at 0x4016fe
unsigned long long sub_4016fe(unsigned long a0, unsigned long a1)
{
 return array_vla((unsigned int)a0, a1);
}


// Function: array_vla at 0x401700
unsigned long long array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rdi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rdi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rdi
 unsigned long long i; // rax

 if (a0 <= 0)
 return 0;
 k = a0;
 if (a0 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(CONCAT4((unsigned int)(AddV(v12, v13) >> 96), (unsigned int)(AddV(v12, v13) >> 64), (unsigned int)(AddV(v12, v13) >> 32), (unsigned int)(AddV(v12, v13))), AddV(v12, v13));
 v3 = AddV(CONCAT((unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(CONCAT((unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40181d at 0x40181d
unsigned long long sub_40181d(unsigned long a0, unsigned long a1)
{
 return array_pointer(a0, a1);
}


// Function: array_pointer at 0x401820
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // rcx
 unsigned long v2; // rdx
 unsigned long long v3; // rax
 unsigned long long v4; // xmm0
 unsigned long long i; // rsi
 unsigned long long v6; // xmm1
 unsigned long v7; // xmm0lq
 unsigned int *cur; // rsi
 unsigned long long j; // rcx

 if (a1 <= 0)
 return 0;
 v1 = a1;
 if (a1 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)v1 & 0xfffffff8;
 v4 = 0;
 i = 0;
 v6 = 0;
 do
 {
 v4 = AddV(v4, InterleaveLOV(InterleaveLOV(*((int *)(a0 + i + 120)), *((int *)(a0 + i + 80))), InterleaveLOV(*((int *)(a0 + i + 40)), *((int *)(a0 + i)))));
 v6 = AddV(v6, InterleaveLOV(InterleaveLOV(*((int *)(a0 + i + 280)), *((int *)(a0 + i + 240))), InterleaveLOV(*((int *)(a0 + i + 200)), *((int *)(a0 + i + 160)))));
 i += 320;
 } while ((v1 * 8 & 18446744073709551552) * 5 != i);
 v7 = AddV(CONCAT4((unsigned int)(AddV(v6, v4) >> 96), (unsigned int)(AddV(v6, v4) >> 64), (unsigned int)(AddV(v6, v4) >> 32), (unsigned int)(AddV(v6, v4))), AddV(v6, v4));
 v3 = AddV(CONCAT4((unsigned int)(v7 >> 96), (unsigned int)(v7 >> 64), (unsigned int)(v7 >> 32), (unsigned int)v7) & 18446744073709551615, v7);
 if (v2 == v1)
 return AddV(CONCAT4((unsigned int)(v7 >> 96), (unsigned int)(v7 >> 64), (unsigned int)(v7 >> 32), (unsigned int)v7) & 18446744073709551615, v7);
 }
 cur = a0 + v2 * 40;
 j = v1 - v2;
 do
 {
 v3 = (unsigned int)v3 + *(cur);
 cur += 10;
 j -= 1;
 } while (j != 1);
 return v3;
}


// Function: sub_40190d at 0x40190d
unsigned long long sub_40190d(unsigned long a0, unsigned long a1)
{
 return pointer_array(a0, a1);
}


// Function: pointer_array at 0x401910
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int result; // r8d
 unsigned long long v2; // rdx
 unsigned long long v3; // rax

 if (a1 <= 0)
 return 0;
 result = (a1 < 10 ? a1 : 10);
 if (result == 1)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 while (true)
 {
 if (*((long long *)(a0 + v2 * 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8)));
 if (*((long long *)(a0 + v2 * 8 + 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8 + 8)));
 v2 += 2;
 if ((result & 14) == v2)
 break;
 }
 }
 if (((char)result & 1) && *((long long *)(a0 + v2 * 8)))
 v3 = (unsigned int)v3 + *((int *)*((long long *)(a0 + v2 * 8)));
 return v3;
}


// Function: sub_40194c at 0x40194c
void sub_40194c()
{
}


// Function: sub_401972 at 0x401972
unsigned long long sub_401972(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 return array_complex_index(a0, a1, a2, a3, a3);
}


// Function: array_complex_index at 0x401980
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (a3 >= 0 && (unsigned int)a4 < a2 && a3 < (unsigned int)a1 && (unsigned int)a4 >= 0)
 v1 = *((int *)(ptr + (a1 * a4 + a3 & 4294967295) * 4));
 return v1;
}


// Function: sub_4019a5 at 0x4019a5
unsigned long long sub_4019a5(unsigned long a0, unsigned long a1)
{
 return array_oob(a0, a1);
}


// Function: array_oob at 0x4019b0
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rsi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rsi
 unsigned long long i; // rax

 if (a1 < 0)
 return 0;
 k = a1 + 1;
 if (a1 < 7)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(CONCAT4((unsigned int)(AddV(v12, v13) >> 96), (unsigned int)(AddV(v12, v13) >> 64), (unsigned int)(AddV(v12, v13) >> 32), (unsigned int)(AddV(v12, v13))), AddV(v12, v13));
 v3 = AddV(CONCAT((unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(CONCAT((unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_401acd at 0x401acd
int sub_401acd()
{
 return test_array_types();
}


// Function: test_array_types at 0x401ad0
extern char *g_403690;

int test_array_types()
{
 int flag5; // [bp-0x388]
 unsigned long long flag6; // [bp-0x378]
 unsigned long long v2; // [bp-0x368]
 unsigned long long flag7; // [bp-0x358]
 unsigned long long flag8; // [bp-0x348]
 unsigned long long v5; // [bp-0x338]
 unsigned long long flag9; // [bp-0x328]
 unsigned long long flag10; // [bp-0x318]
 unsigned long long v8; // [bp-0x308]
 unsigned long long flag11; // [bp-0x2f8]
 unsigned long long flag12; // [bp-0x2e8]
 int v11; // [bp-0x2d8]
 unsigned long long flag13; // [bp-0x2c8]
 unsigned long long v13; // [bp-0x2b8]
 unsigned long long flag14; // [bp-0x2a8]
 unsigned long long flag15; // [bp-0x298]
 unsigned long long v16; // [bp-0x288]
 unsigned long long flag16; // [bp-0x278]
 unsigned long long flag17; // [bp-0x268]
 unsigned long long v19; // [bp-0x258]
 unsigned long long flag18; // [bp-0x248]
 unsigned long long flag19; // [bp-0x238]
 unsigned long long v22; // [bp-0x228]
 unsigned long long flag20; // [bp-0x218]
 unsigned long long v24; // [bp-0x208]
 int v25; // [bp-0x1f8]
 unsigned long long v26; // [bp-0x1e8]
 unsigned long long v27; // [bp-0x1d8]
 unsigned long long v28; // [bp-0x1c8]
 unsigned long long v29; // [bp-0x1b8]
 unsigned long long v30; // [bp-0x1a8]
 unsigned int result; // [bp-0x198]
 unsigned long long v32; // [bp-0x194]
 unsigned long long v33; // [bp-0x184]
 unsigned long long v34; // [bp-0x174]
 unsigned long long v35; // [bp-0x164]
 unsigned long long v36; // [bp-0x154]
 unsigned long long v37; // [bp-0x144]
 unsigned int flag1; // [bp-0x134]
 unsigned long long v39; // [bp-0x130]
 unsigned long long v40; // [bp-0x120]
 unsigned long long v41; // [bp-0x110]
 unsigned long long v42; // [bp-0x100]
 unsigned long long v43; // [bp-0xf0]
 unsigned long long v44; // [bp-0xe0]
 unsigned int flag2; // [bp-0xd0]
 unsigned long long v46; // [bp-0xcc]
 unsigned long long v47; // [bp-0xbc]
 unsigned long long v48; // [bp-0xac]
 unsigned long long v49; // [bp-0x9c]
 unsigned long long v50; // [bp-0x8c]
 unsigned long long v51; // [bp-0x7c]
 unsigned int flag3; // [bp-0x6c]
 unsigned long long v53; // [bp-0x68]
 unsigned long long v54; // [bp-0x58]
 unsigned long long v55; // [bp-0x48]
 unsigned long long v56; // [bp-0x38]
 unsigned long long v57; // [bp-0x28]
 unsigned long long v58; // [bp-0x18]
 unsigned int flag4; // [bp-0x8]

 puts(g_403690);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 *((unsigned long long *)&flag5) = 0;
 flag6 = 0;
 v2 = 0x1000000000000000ULL;
 flag7 = 0;
 flag8 = 0;
 v5 = 0x2000000000000000ULL;
 flag9 = 0;
 flag10 = 0;
 v8 = 0x300000000;
 flag11 = 0;
 flag12 = 0;
 v11 = 4;
 flag13 = 0;
 v13 = 0x5000000000000000ULL;
 flag14 = 0;
 flag15 = 0;
 v16 = 0x6000000000000000ULL;
 flag16 = 0;
 flag17 = 0;
 v19 = 0x700000000;
 flag18 = 0;
 flag19 = 0;
 v22 = 8;
 flag20 = 0;
 v24 = 0x9000000000000000ULL;
 printf("ARR-L1-03 (array_2d_stack): %d\n", *((int *)((char *)&v19 + 4)) + *((int *)((char *)&v2 + 12)) + (int)flag5 + *((int *)((char *)&v5 + 8)) + *((int *)((char *)&v8 + 4)) + (int)v11 + *((int *)((char *)&v13 + 12)) + *((int *)((char *)&v16 + 8)) + 17);
 *((unsigned long long *)&v25) = 0;
 v26 = 0;
 v27 = 0;
 v28 = 0;
 v29 = 0;
 v30 = 0;
 result = 1;
 v32 = 0;
 v33 = 0;
 v34 = 0;
 v35 = 0;
 v36 = 0;
 v37 = 0;
 flag1 = 1;
 v39 = 0;
 v40 = 0;
 v41 = 0;
 v42 = 0;
 v43 = 0;
 v44 = 0;
 flag2 = 1;
 v46 = 0;
 v47 = 0;
 v48 = 0;
 v49 = 0;
 v50 = 0;
 v51 = 0;
 flag3 = 1;
 v53 = 0;
 v54 = 0;
 v55 = 0;
 v56 = 0;
 v57 = 0;
 v58 = 0;
 flag4 = 1;
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v25) & 4294967295);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: sub_401ddb at 0x401ddb
int sub_401ddb(unsigned long a0)
{
 return ptr_single((unsigned int *)a0);
}


// Function: ptr_single at 0x401de0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401de6 at 0x401de6
int sub_401de6(unsigned long a0)
{
 return ptr_double((void **)a0);
}


// Function: ptr_double at 0x401df0
int ptr_double(void **a0)
{
 /* struct_0 field access - placeholder */
 return 10;
}


// Function: sub_401df9 at 0x401df9
int sub_401df9(unsigned long a0)
{
 return ptr_triple((void ***)a0);
}


// Function: ptr_triple at 0x401e00
int ptr_triple(void ***a0)
{
 /* triple pointer access - placeholder */
 return 5;
}


// Function: sub_401e0c at 0x401e0c
unsigned long long sub_401e0c(unsigned long long a0, unsigned long a1)
{
 return ptr_increment(a0, a1);
}


// Function: ptr_increment at 0x401e10
unsigned long long ptr_increment(unsigned long long cur, unsigned int a1)
{
 unsigned long v1; // r8
 unsigned long long v2; // r9
 unsigned long long i; // rax
 unsigned long long v11; // rax
 unsigned long long j; // rdx
 unsigned long long v13; // xmm0
 unsigned long long v14; // xmm1
 unsigned long v15; // xmm1lq
 unsigned long long v16; // rcx
 unsigned long long v3; // rax
 unsigned long v4; // r8
 unsigned long long v5; // rdx
 unsigned long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long idx; // rdx

 if (a1 <= 0)
 return 0;
 v1 = a1 - 1;
 v2 = 0;
 if ((unsigned int)v1 < 7)
 {
 v3 = 0;
 }
 else
 {
 v4 = v1 + 1;
 v2 = v4 & 18446744073709551608;
 v5 = v2 - 8;
 v6 = (v5 >> 3) + 1;
 v7 = (unsigned int)v6 & 3;
 if (v5 < 24)
 {
 v13 = 0;
 idx = 0;
 v14 = 0;
 }
 else
 {
 i = v6 & 18446744073709551612;
 v13 = 0;
 idx = 0;
 v14 = 0;
 do
 {
 v13 = AddV(*((int128_t *)(cur + idx * 4 + 96)), AddV(AddV(*((int128_t *)(cur + idx * 4 + 64)), *((int128_t *)(cur + idx * 4 + 32))), AddV(*((int128_t *)(cur + idx * 4)), v13)));
 v14 = AddV(*((int128_t *)(cur + idx * 4 + 112)), AddV(AddV(*((int128_t *)(cur + idx * 4 + 80)), *((int128_t *)(cur + idx * 4 + 48))), AddV(*((int128_t *)(cur + idx * 4 + 16)), v14)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v7)
 {
 v11 = cur + idx * 4 + 16;
 j = 0;
 do
 {
 v13 = AddV(v13, *((int128_t *)(v11 + j - 16)));
 v14 = AddV(v14, *((int128_t *)(v11 + j)));
 j += 32;
 } while (v7 * 32 != j);
 }
 v15 = AddV(CONCAT4((unsigned int)(AddV(v13, v14) >> 96), (unsigned int)(AddV(v13, v14) >> 64), (unsigned int)(AddV(v13, v14) >> 32), (unsigned int)(AddV(v13, v14))), AddV(v13, v14));
 v3 = AddV(CONCAT((unsigned int)(v15 >> 32), (unsigned int)v15) & 18446744073709551615, v15);
 if (v4 == v2)
 return AddV(CONCAT((unsigned int)(v15 >> 32), (unsigned int)v15) & 18446744073709551615, v15);
 cur += v2 * 4;
 }
 v16 = 0;
 do
 {
 v3 = (unsigned int)v3 + *((int *)(cur + v16 * 4));
 v16 += 1;
 } while ((unsigned int)(a1 - v2) != (unsigned int)v16);
 return v3;
}


// Function: sub_401f3c at 0x401f3c
int sub_401f3c(unsigned long a0, unsigned long a1)
{
 return ptr_offset(a0, a1);
}


// Function: ptr_offset at 0x401f40
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401f47 at 0x401f47
unsigned long long sub_401f47(unsigned long a0, unsigned long a1)
{
 return ptr_diff(a0, a1);
}


// Function: ptr_diff at 0x401f50
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401f5b at 0x401f5b
unsigned long long sub_401f5b(unsigned long a0, unsigned long a1)
{
 return ptr_void((void*)a0, a1);
}


// Function: ptr_void at 0x401f60
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


// Function: sub_401f75 at 0x401f75
unsigned int sub_401f75(unsigned long a0)
{
 return ptr_const((unsigned int *)a0);
}


// Function: ptr_const at 0x401f80
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401f85 at 0x401f85
int sub_401f85(unsigned long a0)
{
 return ptr_const_ptr((unsigned int *)a0);
}


// Function: ptr_const_ptr at 0x401f90
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401f98 at 0x401f98
long long sub_401f98(unsigned long a0, unsigned long a1)
{
 return ptr_func_simple(a0, a1);
}


// Function: ptr_func_simple at 0x401fa0
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 /* Function pointer call not supported */
 return 0;
}


// Function: sub_401fa7 at 0x401fa7
long long sub_401fa7(unsigned long a0, unsigned long a1)
{
 return ptr_func_complex((unsigned long long *)a0, a1);
}


// Function: ptr_func_complex at 0x401fb0
extern unsigned long long g_405de0;

long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 /* Function pointer call not supported */
 return 0;
}


// Function: sub_401fd2 at 0x401fd2
int sub_401fd2(unsigned long a0)
{
 return ptr_cast((unsigned int *)a0);
}


// Function: ptr_cast at 0x401fe0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401fe3 at 0x401fe3
int sub_401fe3(unsigned long a0)
{
 return opaque_handle_create(a0);
}


// Function: opaque_handle_create at 0x401ff0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401ff4 at 0x401ff4
unsigned int sub_401ff4(unsigned long a0)
{
 return opaque_handle_op(a0);
}


// Function: opaque_handle_op at 0x402000
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402004 at 0x402004
void sub_402004()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x402010
extern char *g_4036ab;

int test_pointer_types()
{
 puts(g_4036ab);
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


// Function: sub_402127 at 0x402127
void sub_402127(unsigned long a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x402130
int struct_simple()
{
 return 0;
}


// Function: sub_402139 at 0x402139
void sub_402139(unsigned long a0, unsigned long a1)
{
 struct_array();
 return;
}


// Function: struct_array at 0x402140
unsigned long long struct_array()
{
 return 0;
}


// Function: sub_4021a4 at 0x4021a4
void sub_4021a4(unsigned long a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x4021b0
int struct_nested()
{
 return 0;
}


// Function: sub_4021b6 at 0x4021b6
void sub_4021b6(unsigned long a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x4021c0
int struct_deep()
{
 return 0;
}


// Function: sub_4021c7 at 0x4021c7
void sub_4021c7(unsigned long a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x4021d0
typedef struct struct_1_withptr {
 unsigned int field_0;
} struct_1_withptr;

typedef struct struct_0_withptr_tag {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1_withptr *field_8;
} struct_0_withptr;

int struct_with_ptr(void *a0)
{
 struct_0_withptr *ptr = (struct_0_withptr *)a0;
 if (!ptr->field_8)
 return 0 + ptr->field_0;
 return ptr->field_8->field_0 + ptr->field_0;
}

typedef struct struct_2_withptr {
 unsigned int field_0;
} struct_2_withptr;


// Function: sub_4021e5 at 0x4021e5
void sub_4021e5(unsigned long a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x4021f0
int struct_bitfields(unsigned short *ptr)
{
 unsigned short v1; // ax

 v1 = *(ptr);
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: sub_402211 at 0x402211
void sub_402211(unsigned long a0, unsigned long a1)
{
 union_type();
 return;
}


// Function: union_type at 0x402220
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


// Function: sub_402235 at 0x402235
void sub_402235(unsigned long a0, unsigned long a1)
{
 union_array();
 return;
}


// Function: union_array at 0x402240
unsigned long long union_array(unsigned long ptr, unsigned int a1)
{
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned long long v10; // rax
 unsigned long long j; // rsi
 unsigned long long v12; // xmm0
 unsigned long long v13; // xmm1
 unsigned long v14; // xmm1lq
 unsigned long long v3; // rax
 unsigned long v4; // rsi
 unsigned long v5; // rax
 unsigned long long v6; // r8
 unsigned long long idx; // rsi
 unsigned long long i; // rax

 if (a1 <= 0)
 return 0;
 k = a1;
 if (a1 < 8)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v2 = (unsigned int)k & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 v6 = (unsigned int)v5 & 3;
 if (v4 < 24)
 {
 v12 = 0;
 idx = 0;
 v13 = 0;
 }
 else
 {
 i = v5 & 18446744073709551612;
 v12 = 0;
 idx = 0;
 v13 = 0;
 do
 {
 v12 = AddV(*((int128_t *)(ptr + idx * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 64)), *((int128_t *)(ptr + idx * 4 + 32))), AddV(*((int128_t *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((int128_t *)(ptr + idx * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + idx * 4 + 80)), *((int128_t *)(ptr + idx * 4 + 48))), AddV(*((int128_t *)(ptr + idx * 4 + 16)), v13)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v6)
 {
 v10 = ptr + idx * 4 + 16;
 j = 0;
 do
 {
 v12 = AddV(v12, *((int128_t *)(v10 + j - 16)));
 v13 = AddV(v13, *((int128_t *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(CONCAT4((unsigned int)(AddV(v12, v13) >> 96), (unsigned int)(AddV(v12, v13) >> 64), (unsigned int)(AddV(v12, v13) >> 32), (unsigned int)(AddV(v12, v13))), AddV(v12, v13));
 v3 = AddV(CONCAT4((unsigned int)(v14 >> 96), (unsigned int)(v14 >> 64), (unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(CONCAT((unsigned int)(v14 >> 32), (unsigned int)v14) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40235d at 0x40235d
void sub_40235d(unsigned long a0)
{
 enum_type();
 return;
}


// Function: enum_type at 0x402360
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_402366 at 0x402366
void sub_402366(unsigned long a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x402370
extern unsigned int g_4030d0[4];
unsigned int g_4030d0[4] = {50, 100, 150, 200};

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_4030d0[a0];
 return v1;
}


// Function: sub_402388 at 0x402388
void sub_402388(unsigned long a0)
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x402390
typedef struct struct_0_funcptr {
 char padding_0[8];
 unsigned long long field_8;
} struct_0_funcptr;

long long struct_func_ptr(struct_0_funcptr *a0)
{
 /* Function pointer call - using cast to proper function type */
 long long (*func)(struct_0_funcptr *) = (long long (*)(struct_0_funcptr *))a0->field_8;
 if (func)
 return func(a0);
 return 0;
}


// Function: sub_402398 at 0x402398
void sub_402398(unsigned long a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x4023a0
typedef struct struct_0_linkedlist {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_linkedlist *field_8;
} struct_0_linkedlist;

unsigned long long linked_list(void *ptr)
{
 struct_0_linkedlist *p = (struct_0_linkedlist *)ptr;
 unsigned long long v1; // rax

 v1 = 0;
 if (p)
 {
 do
 {
 v1 = (unsigned int)v1 + p->field_0;
 p = p->field_8;
 } while (p);
 }
 return v1;
}


// Function: sub_4023bc at 0x4023bc
void sub_4023bc(unsigned long a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x4023c0
typedef struct struct_0_doublylinked {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_doublylinked *field_8;
} struct_0_doublylinked;

unsigned long long doubly_linked_list(void *ptr)
{
 struct_0_doublylinked *p = (struct_0_doublylinked *)ptr;
 unsigned long long v1; // rax

 v1 = 0;
 if (p)
 {
 do
 {
 v1 = (unsigned int)v1 + p->field_0;
 p = p->field_8;
 } while (p);
 }
 return v1;
}


// Function: sub_4023dc at 0x4023dc
void sub_4023dc(unsigned long a0)
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x4023e0
unsigned int binary_tree_sum(void *a0)
{
 unsigned int v3; // ebx
 struct_0 *ptr; // r14
 unsigned int v5; // eax
 struct_0 *v6; // r14
 unsigned long long v0; // [bp-0x18]

 v0 = 0;
 if (!a0)
 return 0;
 v3 = 0;
 do
 {
 ptr = a0;
 v5 = binary_tree_sum(ptr->field_8);
 v6 = ptr->field_10;
 v3 = v3 + ptr->field_0 + v5;
 a0 = v6;
 } while (a0);
 return v3;
}


// Function: sub_402415 at 0x402415
void sub_402415()
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x402420
int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_402425 at 0x402425
void sub_402425(unsigned long a0)
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x402430
typedef struct struct_1_graph {
 struct struct_0_graph *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_1_graph;

typedef struct struct_0_graph {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0_graph *field_8;
} struct_0_graph;

typedef struct struct_2_graph {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2_graph *field_8;
} struct_2_graph;

typedef struct struct_4_graph {
 char padding_0[8];
 unsigned long long field_8;
} struct_4_graph;

typedef struct struct_3_graph {
 char padding_0[8];
 unsigned long long field_8;
} struct_3_graph;

unsigned long long graph_traverse(struct_1_graph *ptr)
{
 unsigned int result; // r8d
 unsigned long long idx; // rdx
 unsigned long long v3; // rax
 struct_0 *p; // rcx
 struct_4 *addr; // rcx
 struct_3 *ptr3; // rcx

 result = ptr->field_50;
 if (result <= 0)
 return 0;
 if (result == 1)
 {
 idx = 0;
 v3 = 0;
 }
 else
 {
 idx = 0;
 v3 = 0;
 p = ptr->field_0;
 if (!ptr->field_0)
 goto LABEL_40249b;
 while (true)
 {
 do
 {
 v3 = (unsigned int)v3 + p->field_0;
 p = p->field_8;
 } while (p->field_8);
 do
 {
LABEL_40249b:
 addr = *((long long *)((char *)ptr + (idx * 8 | 8)));
 if (*((long long *)((char *)ptr + (idx * 8 | 8))))
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&addr->padding_0[0]);
 addr = addr->field_8;
 } while (addr->field_8);
 }
 idx += 2;
 if (idx == (result & 4294967294))
 goto LABEL_402443;
 } while ((p = (&ptr->field_0)[idx], !(&ptr->field_0)[idx]));
 }
 }
LABEL_402443:
 if (((char)result & 1))
 {
 ptr3 = (&ptr->field_0)[idx];
 if ((&ptr->field_0)[idx])
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&ptr3->padding_0[0]);
 ptr3 = ptr3->field_8;
 } while (ptr3->field_8);
 }
 }
 return v3;
}


// Function: sub_402462 at 0x402462
void sub_402462()
{
}


// Function: test_composite_types at at 0x4024e0
typedef struct struct_0_testcomposite {
 char field_0[4];
 char padding_4[4];
 struct struct_0_testcomposite *field_8;
} struct_0_testcomposite;

typedef struct struct_1_testcomposite {
 char field_0[4];
 char padding_4[4];
 struct struct_1_testcomposite *field_8;
} struct_1_testcomposite;

extern char *g_4036c6;

int test_composite_types()
{
 unsigned int v16; // ebx
 struct_0 *ptr; // rax
 unsigned int v19; // ebp
 struct_1 *p; // rax
 char v0; // [bp-0x88], Other Possible Types: unsigned int
 char *v1; // [bp-0x80]
 char v2; // [bp-0x78], Other Possible Types: unsigned int
 char *v3; // [bp-0x70]
 char v4; // [bp-0x68], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x60]
 unsigned int v7; // [bp-0x58]
 char *v8; // [bp-0x50]
 unsigned long long result; // [bp-0x48]
 unsigned int v10; // [bp-0x40]
 unsigned long long flag1; // [bp-0x38]
 char *v12; // [bp-0x30]
 int v13; // [bp-0x28]
 unsigned long long flag3; // [bp-0x18]

 puts(g_4036c6);
 v16 = 0;
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
 ptr = &v0;
 v0 = 10;
 v1 = &v2;
 v2 = 20;
 v3 = &v4;
 v4 = 30;
 flag2 = 0;
 do
 {
 v16 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 v19 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v16);
 p = &v7;
 v7 = 10;
 result = 0;
 v10 = 20;
 flag1 = 0;
 v12 = &v7;
 v8 = &v10;
 do
 {
 v19 += p->field_0;
 p = p->field_8;
 } while (p->field_8);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v19);
 flag3 = 0;
 v13 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v13) & 4294967295);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


// Function: sub_4026c7 at 0x4026c7
void sub_4026c7()
{
 main();
 return;
}


// Function: main at 0x4026d0
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


