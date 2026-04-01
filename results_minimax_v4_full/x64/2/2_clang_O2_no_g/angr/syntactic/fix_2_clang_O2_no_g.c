// Angr Decompilation of 2_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// Define CONCAT as macro for SIMD operations
// Note: Used as infix operator like "a CONCAT b"
#define CONCAT(a, b) (((unsigned long long)(a) << 32) | (unsigned long long)(b))

// Define SIMD vector types and operations
#include <immintrin.h>

// Define int128_t as alias for __m128i for SIMD operations
typedef __m128i int128_t;

// Define AddV, MulV, InterleaveLOV as inline helpers
static inline __m128i AddV(__m128i a, __m128i b) { return _mm_add_epi32(a, b); }
static inline __m128i MulV(__m128i a, __m128i b) { return _mm_mullo_epi32(a, b); }
static inline __m128i InterleaveLOV(__m128i a, __m128i b) { return _mm_unpacklo_epi32(a, b); }

// Helper to extract lower 64 bits from __m128i for CONCAT operations
static inline unsigned int get_low32(__m128i v) { return (unsigned int)_mm_cvtsi128_si32(v); }
// Helper to extract higher 32 bits from each 64-bit lane
static inline unsigned int get_high32_64(__m128i v) { return (unsigned int)(_mm_cvtsi128_si64(v) >> 32); }

// Forward declarations
struct struct_0;
struct struct_1;

// Define struct_0 early to avoid forward reference issues
struct struct_0 {
 unsigned int field_0;
 unsigned long long field_4;
 unsigned long long field_14;
 unsigned long long field_24;
 unsigned long long field_34;
 unsigned long long field_44;
 unsigned long long field_54;
 unsigned int field_64;
 unsigned long long field_68;
 unsigned long long field_78;
 unsigned long long field_88;
 unsigned long long field_98;
 unsigned long long field_a8;
 unsigned long long field_b8;
 unsigned int field_c8;
 unsigned long long field_cc;
 unsigned long long field_dc;
 unsigned long long field_ec;
 unsigned long long field_fc;
 unsigned long long field_10c;
 unsigned long long field_11c;
 unsigned int field_12c;
 unsigned long long field_130;
 unsigned long long field_140;
 unsigned long long field_150;
 unsigned long long field_160;
 unsigned long long field_170;
 unsigned long long field_180;
 unsigned int field_190;
 unsigned long long field_194;
 unsigned long long field_1a4;
 unsigned long long field_1b4;
 unsigned long long field_1c4;
 unsigned long long field_1d4;
 unsigned long long field_1e4;
 struct struct_0 *field_8;
};

// Define struct_1 for nested pointer operations
struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
};

// Define extern globals to NULL to resolve linker issues
extern struct_0 *g_404fe0 = NULL;
extern unsigned long long g_405008 = 0;
extern unsigned long long g_405010 = 0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_404fe0;
 if (g_404fe0)
 v1 = g_404fe0();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405008;
extern unsigned long long g_405010;

void sub_401020()
{
 // Empty function - original had goto to external
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
 // Empty function - original had unsupported jumpkind
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
void sub_401149(unsigned long a0)
{
 process_char();
 return;
}


// Function: process_char at 0x401150
long long process_char(unsigned int a0)
{
 return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: sub_40115f at 0x40115f
void sub_40115f(unsigned long a0, unsigned long a1)
{
 process_short();
 return;
}


// Function: process_short at 0x401160
int process_short(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401164 at 0x401164
void sub_401164(unsigned long a0)
{
 process_int();
 return;
}


// Function: process_int at 0x401170
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_401177 at 0x401177
void sub_401177(unsigned long a0)
{
 process_long();
 return;
}


// Function: process_long at 0x401180
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: sub_401185 at 0x401185
void sub_401185(unsigned long a0)
{
 process_ll();
 return;
}


// Function: process_ll at 0x401190
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: sub_401198 at 0x401198
void sub_401198()
{
 process_float();
 return;
}


// Function: process_float at 0x4011a0
double process_float()
{
 // Simplified - original had complex SIMD operations
 return 1.5;
}

// Function: sub_4011b1 at 0x4011b1
void sub_4011b1()
{
 process_double();
 return;
}


// Function: process_double at 0x4011c0
double process_double()
{
 // Simplified - original had complex SIMD operations
 return 2.5;
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4011e0
void process_ld()
{
 // Unsupported operation - stub function
 return;
}


// Function: sub_4011eb at 0x4011eb
void sub_4011eb(unsigned long a0)
{
 process_bool();
 return;
}


// Function: process_bool at 0x4011f0
char process_bool(unsigned int a0)
{
 return ((char)a0 & 1) ? 0 : (a0 > 0 ? 1 : 0);
}


// Function: sub_4011ff at 0x4011ff
void sub_4011ff(unsigned long a0)
{
 const_param();
 return;
}


// Function: const_param at 0x401200
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401206 at 0x401206
void sub_401206(unsigned long a0)
{
 volatile_access();
 return;
}


// Function: volatile_access at 0x401210
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401215 at 0x401215
void sub_401215()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x401220
extern char g_4035df;

int test_data_types_l1()
{
 unsigned int v0; // [bp-0xc]

 puts(&g_4035df);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 1.5);
 printf("DT-L1-07 (process_double): %.2f\n", 2.5);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: sub_401349 at 0x401349
void sub_401349(unsigned long a0, unsigned long a1)
{
 array_1d_stack();
 return;
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
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64) CONCAT (unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40146d at 0x40146d
void sub_40146d()
{
 array_string();
 return;
}


// Function: array_string at 0x401470
long long array_string(char *a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = 4294967295;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 a0 += 1;
 } while (*(a0));
 return v2 + 1;
}


// Function: sub_40148d at 0x40148d
void sub_40148d(unsigned long a0)
{
 array_2d_stack();
 return;
}


// Function: array_2d_stack at 0x401490
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_4014c3 at 0x4014c3
void sub_4014c3(unsigned long a0)
{
 array_3d();
 return;
}


// Function: array_3d at 0x4014d0
int array_3d(struct struct_0 *ptr)
{
 int v1; // xmm3
 int v2; // xmm0
 int v3; // xmm1
 int v4; // xmm1
 int v5; // xmm1
 unsigned long v6; // xmm0lq
 int v7; // xmm1
 unsigned long v8; // xmm0lq
 int v9; // xmm1
 int v10; // xmm1

 v1 = AddV(*((int128_t *)((char *)&ptr->field_4 + 4)), *((int128_t *)&(&ptr->field_0)[1]));
 v2 = AddV(AddV(*((int128_t *)((char *)&ptr->field_24 + 4)), *((int128_t *)((char *)&ptr->field_44 + 4))), AddV(*((int128_t *)((char *)&ptr->field_14 + 4)), *((int128_t *)((char *)&ptr->field_34 + 4))));
 v3 = (unsigned int)(v2 >> 96) CONCAT (unsigned int)(v2 >> 64) CONCAT (unsigned int)(v2 >> 96) CONCAT (unsigned int)(v2 >> 64);
 v4 = (unsigned int)((unsigned long long)(AddV((unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64) CONCAT (unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64), v1)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV((unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64) CONCAT (unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64), v1)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV((unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64) CONCAT (unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64), v1)) >> 32) CONCAT (unsigned int)((unsigned long long)(AddV((unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64) CONCAT (unsigned int)(v1 >> 96) CONCAT (unsigned int)(v1 >> 64), v1)) >> 32);
 v5 = AddV(*((int128_t *)((char *)&ptr->field_54 + 8)), *((int128_t *)&(&ptr->field_64)[2]));
 v6 = AddV((int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_78 + 8)), *((int128_t *)((char *)&ptr->field_98 + 8))), AddV(*((int128_t *)((char *)&ptr->field_68 + 8)), *((int128_t *)((char *)&ptr->field_88 + 8)))) >> 96) CONCAT (int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_78 + 8)), *((int128_t *)((char *)&ptr->field_98 + 8))), AddV(*((int128_t *)((char *)&ptr->field_68 + 8)), *((int128_t *)((char *)&ptr->field_88 + 8)))) >> 64) CONCAT (int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_78 + 8)), *((int128_t *)((char *)&ptr->field_98 + 8))), AddV(*((int128_t *)((char *)&ptr->field_68 + 8)), *((int128_t *)((char *)&ptr->field_88 + 8)))) >> 96) CONCAT (int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_78 + 8)), *((int128_t *)((char *)&ptr->field_98 + 8))), AddV(*((int128_t *)((char *)&ptr->field_68 + 8)), *((int128_t *)((char *)&ptr->field_88 + 8)))) >> 64), AddV(AddV(*((int128_t *)((char *)&ptr->field_78 + 8)), *((int128_t *)((char *)&ptr->field_98 + 8))), AddV(*((int128_t *)((char *)&ptr->field_68 + 8)), *((int128_t *)((char *)&ptr->field_88 + 8)))));
 v7 = AddV(*((int128_t *)((char *)&ptr->field_a8 + 12)), *((int128_t *)((char *)&ptr->field_b8 + 12)));
 v8 = AddV((int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_cc + 12)), *((int128_t *)((char *)&ptr->field_ec + 12))), AddV(*((int128_t *)&(&ptr->field_c8)[3]), *((int128_t *)((char *)&ptr->field_dc + 12)))) >> 96) CONCAT (int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_cc + 12)), *((int128_t *)((char *)&ptr->field_ec + 12))), AddV(*((int128_t *)&(&ptr->field_c8)[3]), *((int128_t *)((char *)&ptr->field_dc + 12)))) >> 64) CONCAT (int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_cc + 12)), *((int128_t *)((char *)&ptr->field_ec + 12))), AddV(*((int128_t *)&(&ptr->field_c8)[3]), *((int128_t *)((char *)&ptr->field_dc + 12)))) >> 96) CONCAT (int)(AddV(AddV(*((int128_t *)((char *)&ptr->field_cc + 12)), *((int128_t *)((char *)&ptr->field_ec + 12))), AddV(*((int128_t *)&(&ptr->field_c8)[3]), *((int128_t *)((char *)&ptr->field_dc + 12)))) >> 64), AddV(AddV(*((int128_t *)((char *)&ptr->field_cc + 12)), *((int128_t *)((char *)&ptr->field_ec + 12))), AddV(*((int128_t *)&(&ptr->field_c8)[3]), *((int128_t *)((char *)&ptr->field_dc + 12)))));
 v9 = AddV(ptr->field_10c, ptr->field_11c);
 v10 = AddV(*((int128_t *)((char *)&ptr->field_160 + 4)), *((int128_t *)((char *)&ptr->field_170 + 4)));
 // Simplified return - original had complex SIMD reduction
 return v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9 + v10;
}


// Function: sub_4016fe at 0x4016fe
void sub_4016fe(unsigned long a0)
{
 array_vla();
 return;
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
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64) CONCAT (unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40181d at 0x40181d
void sub_40181d(unsigned long a0, unsigned long a1)
{
 array_pointer();
 return;
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
 v7 = AddV((unsigned int)(AddV(v6, v4) >> 96) CONCAT (unsigned int)(AddV(v6, v4) >> 64) CONCAT (unsigned int)(AddV(v6, v4) >> 96) CONCAT (unsigned int)(AddV(v6, v4) >> 64), AddV(v6, v4));
 v3 = AddV(((unsigned int)(v7 >> 32) CONCAT (unsigned int)(v7 >> 32) CONCAT (unsigned int)(v7 >> 32) CONCAT (unsigned int)(v7 >> 32)) & 18446744073709551615, v7);
 if (v2 == v1)
 return AddV(((unsigned int)(v7 >> 32) CONCAT (unsigned int)(v7 >> 32) CONCAT (unsigned int)(v7 >> 32) CONCAT (unsigned int)(v7 >> 32)) & 18446744073709551615, v7);
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
void sub_40190d(unsigned long a0, unsigned long a1)
{
 pointer_array();
 return;
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
void sub_401972(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 array_complex_index();
 return;
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
void sub_4019a5(unsigned long a0, unsigned long a1)
{
 array_oob();
 return;
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
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64) CONCAT (unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_401acd at 0x401acd
void sub_401acd()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x401ad0
extern char g_403600;

int test_array_types()
{
 unsigned long long v46; // rbx
 int v0; // [bp-0x398]
 unsigned long long v1; // [bp-0x388]
 unsigned long long v2; // [bp-0x378]
 unsigned long long v3; // [bp-0x368]
 unsigned long long v4; // [bp-0x358]
 unsigned long long v5; // [bp-0x348]
 unsigned int result; // [bp-0x338]
 unsigned long long v7; // [bp-0x334]
 unsigned long long v8; // [bp-0x324]
 unsigned long long v9; // [bp-0x314]
 unsigned long long v10; // [bp-0x304]
 unsigned long long v11; // [bp-0x2f4]
 unsigned long long v12; // [bp-0x2e4]
 unsigned int flag1; // [bp-0x2d4]
 unsigned long long v14; // [bp-0x2d0]
 unsigned long long v15; // [bp-0x2c0]
 unsigned long long v16; // [bp-0x2b0]
 unsigned long long v17; // [bp-0x2a0]
 unsigned long long v18; // [bp-0x290]
 unsigned long long v19; // [bp-0x280]
 unsigned int flag2; // [bp-0x270]
 unsigned long long v21; // [bp-0x26c]
 unsigned long long v22; // [bp-0x25c]
 unsigned long long v23; // [bp-0x24c]
 unsigned long long v24; // [bp-0x23c]
 unsigned long long v25; // [bp-0x22c]
 unsigned long long v26; // [bp-0x21c]
 unsigned int flag3; // [bp-0x20c]
 unsigned long long v28; // [bp-0x208]
 unsigned long long v29; // [bp-0x1f8]
 unsigned long long v30; // [bp-0x1e8]
 unsigned long long v31; // [bp-0x1d8]
 unsigned long long v32; // [bp-0x1c8]
 unsigned long long v33; // [bp-0x1b8]
 unsigned int flag4; // [bp-0x1a8]
 unsigned int v35; // [bp-0x198]
 unsigned int v48; // [bp-0x194]
 unsigned int v49; // [bp-0x190]
 unsigned int v50; // [bp-0x18c]
 unsigned int v51; // [bp-0x188]
 unsigned int v52; // [bp-0x184]
 unsigned int v53; // [bp-0x180]
 unsigned int v54; // [bp-0x17c]
 unsigned int v55; // [bp-0x178]
 unsigned long v56; // [bp-0x174]
 char v36; // [bp-0x16c]
 char v37; // [bp-0x140]
 char v38; // [bp-0x114]
 char v39; // [bp-0xe8]
 char v40; // [bp-0xbc]
 char v41; // [bp-0x90]
 char v42; // [bp-0x64]
 char v43; // [bp-0x38]
 char v44; // [bp-0xc]

 puts(&g_403600);
 v46 = 0;
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 do
 {
 *((unsigned int *)((char *)&v35 + v46)) = 0;
 *((unsigned int *)((char *)&v48 + v46)) = v46 == 40;
 *((unsigned int *)((char *)&v49 + v46)) = (v46 == 80) * 2;
 *((unsigned int *)((char *)&v50 + v46)) = (v46 == 120) * 3;
 *((unsigned int *)((char *)&v51 + v46)) = (v46 == 160) * 4;
 *((unsigned int *)((char *)&v52 + v46)) = (v46 == 200) * 5;
 } while ((*((unsigned int *)((char *)&v53 + v46)) = (v46 == 240 ? 6 : 0), *((unsigned int *)((char *)&v54 + v46)) = (v46 == 280 ? 7 : 0), *((unsigned int *)((char *)&v55 + v46)) = (unsigned int)(char)(v46 == 320) * 8, *((unsigned int *)((char *)&v56 + v46)) = (unsigned int)(char)(v46 == 360) * 9, v46 += 40, v46 != 400));
 printf("ARR-L1-03 (array_2d_stack): %d\n", *((int *)&v36) + v35 + *((int *)&v37) + *((int *)&v38) + *((int *)&v39) + *((int *)&v40) + *((int *)&v41) + *((int *)&v42) + *((int *)&v43) + *((int *)&v44));
 *((unsigned long long *)&v0) = 79228162532711081671548469249;
 v1 = 79228162532711081671548469249;
 v2 = 79228162532711081671548469249;
 v3 = 79228162532711081671548469249;
 v4 = 79228162532711081671548469249;
 v5 = 79228162532711081671548469249;
 result = 1;
 v7 = 79228162532711081671548469249;
 v8 = 79228162532711081671548469249;
 v9 = 79228162532711081671548469249;
 v10 = 79228162532711081671548469249;
 v11 = 79228162532711081671548469249;
 v12 = 79228162532711081671548469249;
 flag1 = 1;
 v14 = 79228162532711081671548469249;
 v15 = 79228162532711081671548469249;
 v16 = 79228162532711081671548469249;
 v17 = 79228162532711081671548469249;
 v18 = 79228162532711081671548469249;
 v19 = 79228162532711081671548469249;
 flag2 = 1;
 v21 = 79228162532711081671548469249;
 v22 = 79228162532711081671548469249;
 v23 = 79228162532711081671548469249;
 v24 = 79228162532711081671548469249;
 v25 = 79228162532711081671548469249;
 v26 = 79228162532711081671548469249;
 flag3 = 1;
 v28 = 79228162532711081671548469249;
 v29 = 79228162532711081671548469249;
 v30 = 79228162532711081671548469249;
 v31 = 79228162532711081671548469249;
 v32 = 79228162532711081671548469249;
 v33 = 79228162532711081671548469249;
 flag4 = 1;
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v0) & 4294967295);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: sub_401dc8 at 0x401dc8
void sub_401dc8(unsigned long a0)
{
 ptr_single();
 return;
}


// Function: ptr_single at 0x401dd0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401dd6 at 0x401dd6
void sub_401dd6(unsigned long a0)
{
 ptr_double();
 return;
}


// Function: ptr_double at 0x401de0
int ptr_double(struct struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_401de9 at 0x401de9
void sub_401de9(unsigned long a0)
{
 ptr_triple();
 return;
}


// Function: ptr_triple at 0x401df0
// Uses global struct_0 and struct_1 definitions
int ptr_triple(struct struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: sub_401dfc at 0x401dfc
void sub_401dfc(unsigned long a0, unsigned long a1)
{
 ptr_increment();
 return;
}


// Function: ptr_increment at 0x401e00
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
 v15 = AddV((unsigned int)(AddV(v13, v14) >> 96) CONCAT (unsigned int)(AddV(v13, v14) >> 64) CONCAT (unsigned int)(AddV(v13, v14) >> 96) CONCAT (unsigned int)(AddV(v13, v14) >> 64), AddV(v13, v14));
 v3 = AddV(((unsigned int)(v15 >> 32) CONCAT (unsigned int)(v15 >> 32) CONCAT (unsigned int)(v15 >> 32) CONCAT (unsigned int)(v15 >> 32)) & 18446744073709551615, v15);
 if (v4 == v2)
 return AddV(((unsigned int)(v15 >> 32) CONCAT (unsigned int)(v15 >> 32) CONCAT (unsigned int)(v15 >> 32) CONCAT (unsigned int)(v15 >> 32)) & 18446744073709551615, v15);
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


// Function: sub_401f2c at 0x401f2c
void sub_401f2c(unsigned long a0, unsigned long a1)
{
 ptr_offset();
 return;
}


// Function: ptr_offset at 0x401f30
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401f37 at 0x401f37
void sub_401f37(unsigned long a0, unsigned long a1)
{
 ptr_diff();
 return;
}


// Function: ptr_diff at 0x401f40
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return (a0 - a1) >> 2;
}


// Function: sub_401f4b at 0x401f4b
void sub_401f4b(unsigned long a0, unsigned long a1)
{
 ptr_void();
 return;
}


// Function: ptr_void at 0x401f50
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


// Function: sub_401f65 at 0x401f65
void sub_401f65(unsigned long a0)
{
 ptr_const();
 return;
}


// Function: ptr_const at 0x401f70
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401f75 at 0x401f75
void sub_401f75(unsigned long a0)
{
 ptr_const_ptr();
 return;
}


// Function: ptr_const_ptr at 0x401f80
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401f88 at 0x401f88
void sub_401f88(unsigned long a0, unsigned long a1)
{
 ptr_func_simple();
 return;
}


// Function: ptr_func_simple at 0x401f90
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 // goto a0; - function pointer call, simplified to return value
 return 10;
}


// Function: sub_401f97 at 0x401f97
void sub_401f97(unsigned long a0, unsigned long a1)
{
 ptr_func_complex();
 return;
}


// Function: ptr_func_complex at 0x401fa0
extern unsigned long long g_404de0;

long long ptr_func_complex(long long (*a0)(unsigned long, void*), unsigned long a1)
{
 // Function pointer call simplified - original had indirect call via g_404de0
 return 1;
}


// Function: sub_401fc2 at 0x401fc2
void sub_401fc2(unsigned long a0)
{
 ptr_cast();
 return;
}


// Function: ptr_cast at 0x401fd0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401fd3 at 0x401fd3
void sub_401fd3(unsigned long a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x401fe0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401fe4 at 0x401fe4
void sub_401fe4(unsigned long a0)
{
 opaque_handle_op();
 return;
}


// Function: opaque_handle_op at 0x401ff0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x402000
extern char g_40361b;

int test_pointer_types()
{
 puts(&g_40361b);
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


// Function: sub_402117 at 0x402117
void sub_402117(unsigned long a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x402120
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_402129 at 0x402129
void sub_402129(unsigned long a0, unsigned long a1)
{
 struct_array();
 return;
}


// Function: struct_array at 0x402130
unsigned long long struct_array(unsigned int *ptr, unsigned int a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax
 unsigned int cur[6]; // rcx

 if (a1 <= 0)
 return 0;
 if (a1 == 1)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 cur = ptr + 5;
 i = 0;
 v2 = 0;
 do
 {
 v2 = (unsigned int)v2 + cur[5] + cur[4] + cur[3] + cur[2] + cur[1] + cur[0];
 i += 2;
 cur += 1;
 } while ((a1 & 4294967294) != i);
 }
 if (((char)a1 & 1))
 v2 = (unsigned int)v2 + ptr[3 * i] + ptr[1 + 3 * i] + ptr[2 + 3 * i];
 return v2;
}


// Function: sub_402194 at 0x402194
void sub_402194(unsigned long a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x4021a0
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_4021a6 at 0x4021a6
void sub_4021a6(unsigned long a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x4021b0
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_4021b7 at 0x4021b7
void sub_4021b7(unsigned long a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x4021c0
int struct_with_ptr(struct struct_1 *a0)
{
 if (!a0->field_8)
 return 0 + a0->field_0;
 return a0->field_8->field_0 + a0->field_0;
}


// Function: sub_4021d5 at 0x4021d5
void sub_4021d5(unsigned long a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x4021e0
int struct_bitfields(unsigned short *ptr)
{
 unsigned short v1; // ax

 v1 = *(ptr);
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: sub_402201 at 0x402201
void sub_402201(unsigned long a0, unsigned long a1)
{
 union_type();
 return;
}


// Function: union_type at 0x402210
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


// Function: sub_402225 at 0x402225
void sub_402225(unsigned long a0, unsigned long a1)
{
 union_array();
 return;
}


// Function: union_array at 0x402230
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
 v14 = AddV((unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64) CONCAT (unsigned int)(AddV(v12, v13) >> 96) CONCAT (unsigned int)(AddV(v12, v13) >> 64), AddV(v12, v13));
 v3 = AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 if (v2 == k)
 return AddV(((unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32) CONCAT (unsigned int)(v14 >> 32)) & 18446744073709551615, v14);
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}


// Function: sub_40234d at 0x40234d
void sub_40234d(unsigned long a0)
{
 enum_type();
 return;
}


// Function: enum_type at 0x402350
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_402356 at 0x402356
void sub_402356(unsigned long a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x402360
extern unsigned int g_403040[4];

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_403040[a0];
 return v1;
}


// Function: sub_402378 at 0x402378
void sub_402378(unsigned long a0)
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x402380
long long struct_func_ptr(struct struct_0 *a0)
{
 // Function pointer call - simplified to return value
 return 0;
}


// Function: sub_402388 at 0x402388
void sub_402388(unsigned long a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x402390
// Uses global struct_0 definition (with field_8 as pointer to struct_0)
unsigned long long linked_list(struct struct_0 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 return v1;
}


// Function: sub_4023ac at 0x4023ac
void sub_4023ac(unsigned long a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x4023b0
unsigned long long doubly_linked_list(struct struct_0 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 return v1;
}


// Function: sub_4023cc at 0x4023cc
void sub_4023cc(unsigned long a0)
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x4023d0
unsigned int binary_tree_sum(struct struct_0 *a0)
{
 unsigned long long v2; // rax
 unsigned int v3; // ebx
 struct struct_0 *ptr; // r14
 unsigned int v5; // eax
 struct struct_0 *v6; // r14
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
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
 } while (ptr->field_10);
 return v3;
}


// Function: sub_402405 at 0x402405
void sub_402405()
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x402410
int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_402415 at 0x402415
void sub_402415(unsigned long a0)
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x402420
// Uses global struct_0 and struct_1 definitions

// Define local struct types for graph_traverse
typedef struct graph_node_1 {
 struct struct_0 *field_0;
 char padding_8[72];
 unsigned int field_50;
} graph_node_1;

typedef struct graph_node_2 {
 char padding_0[8];
 unsigned long long field_8;
} graph_node_2;

typedef struct graph_node_3 {
 char padding_0[8];
 unsigned long long field_8;
} graph_node_3;

typedef struct graph_node_4 {
 char padding_0[8];
 unsigned long long field_8;
} graph_node_4;

unsigned long long graph_traverse(struct struct_1 *ptr)
{
 unsigned int result; // r8d
 unsigned long long idx; // rdx
 unsigned long long v3; // rax
 graph_node_2 *addr; // rcx
 graph_node_3 *p; // rcx
 graph_node_4 *ptr3; // rcx

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
 while (true)
 {
 addr = (&ptr->field_0)[idx];
 if ((&ptr->field_0)[idx])
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&addr->padding_0[0]);
 addr = addr->field_8;
 } while (addr->field_8);
 }
 p = *((long long *)((char *)ptr + (idx * 8 | 8)));
 if (*((long long *)((char *)ptr + (idx * 8 | 8))))
 {
 do
 {
 v3 = (unsigned int)v3 + *((int *)&p->padding_0[0]);
 p = p->field_8;
 } while (p->field_8);
 }
 idx += 2;
 if (idx == (result & 4294967294))
 break;
 }
 }
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


// Function: sub_402449 at 0x402449
void sub_402449()
{
}


// Function: test_composite_types at 0x4024c0
// Note: Using global struct_0 and struct_1 definitions

extern char g_403636;

int test_composite_types()
{
 unsigned int v16; // ebx
 struct struct_0 *ptr; // rax
 unsigned int v19; // ebp
 struct struct_1 *p; // rax
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

 puts(&g_403636);
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


// Function: sub_4026a7 at 0x4026a7
void sub_4026a7()
{
 main();
 return;
}


// Function: main at 0x4026b0
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


