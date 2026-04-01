// Angr Decompilation of 2_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

// Helper macros to replace decompiler artifacts
#define AddV(a, b) ((a) + (b))
#define InterleaveLOV(a, b) ((a) + (b))
#define CONCAT(a, b) (((unsigned long long)(a) << 32) | (unsigned int)(b))
#define CONCAT4(a, b, c, d) ((((unsigned long long)(a)) << 32) | ((unsigned long long)(b)))

// Forward declarations for CRT stub functions
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Forward declarations for helper functions
long long process_char(unsigned int a0);
int process_short(unsigned int a0, unsigned int a1);
int process_int(unsigned int a0);
unsigned long long process_long(unsigned long a0);
long long process_ll(unsigned long a0);
double process_float();
double process_double();
long double process_ld();
char process_bool(unsigned int a0);
int const_param(unsigned int *a0);
unsigned int volatile_access(unsigned int *a0);

// Forward declarations for test functions
int test_data_types_l1();
int test_array_types();
int test_pointer_types();
int test_composite_types();

/* CRT stub function _init removed by preprocessor */
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

typedef struct struct_3 {
 struct struct_2 *field_0;
} struct_3;

typedef struct struct_5 {
 unsigned int field_0;
} struct_5;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_5 *field_8;
} struct_4;

typedef struct struct_9 {
 char padding_0[8];
 unsigned long long field_8;
} struct_9;

typedef struct struct_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_6 *field_8;
} struct_6;

typedef struct struct_7 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_7 *field_8;
} struct_7;

typedef struct struct_8 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_8 *field_8;
 struct struct_8 *field_10;
} struct_8;

typedef struct struct_10 {
 struct struct_11 *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_10;

typedef struct struct_11 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_11 *field_8;
} struct_11;

typedef struct struct_12 {
 char field_0[4];
 char padding_4[4];
 struct struct_12 *field_8;
} struct_12;

typedef struct struct_0 {
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
} struct_0;

struct_0 *g_404fe0 = NULL;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_404fe0;
 return v1;
}


// Function: sub_401020 at 0x401020
unsigned long long g_405008 = 0;
unsigned long long g_405010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405008;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return puts("test");
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401085 at 0x401085
void sub_401085()
{
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
 process_char(a0);
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
 process_short(a0, a1);
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
 process_int(a0);
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
 process_long(a0);
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
 process_ll(a0);
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
 return 1.5;
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4011e0
long double process_ld()
{
 return 1.5L;
}


// Function: sub_4011eb at 0x4011eb
void sub_4011eb(unsigned long a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x4011f0
char process_bool(unsigned int a0)
{
 return !((char)a0 & 1) & a0 > 0;
}


// Function: sub_4011ff at 0x4011ff
void sub_4011ff(unsigned long a0)
{
 const_param((unsigned int *)a0);
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
 volatile_access((unsigned int *)a0);
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
char g_4035df = 0;

int test_data_types_l1()
{
 unsigned long v2; // rsi
 unsigned int v0; // [bp-0xc]

 puts(&g_4035df);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 1.5);
 printf("DT-L1-07 (process_double): %.2f\n", 1.5);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 1.5L);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}





// Function: array_1d_stack at 0x401350
unsigned long long array_1d_stack(unsigned long a0, unsigned long a1)
{
 unsigned char *ptr = (unsigned char *)a0;
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned char *v10; // rax
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
 v10 = NULL;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v3 = 0;

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
 v12 = AddV(*((unsigned long long *)(ptr + idx * 4 + 96)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 64)), *((unsigned long long *)(ptr + idx * 4 + 32))), AddV(*((unsigned long long *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((unsigned long long *)(ptr + idx * 4 + 112)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 80)), *((unsigned long long *)(ptr + idx * 4 + 48))), AddV(*((unsigned long long *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((unsigned long long *)(v10 + j - 16)));
 v13 = AddV(v13, *((unsigned long long *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(v12, v13);
 v3 = v14;
 if (v2 == k)
 return v14;
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}





// Function: array_string at 0x401470
long long array_string(unsigned long a0)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = 4294967295;
 v2 = 0;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 a0 += 1;
 } while (*((char *)a0));
 return v2 + 1;
}





// Function: array_2d_stack at 0x401490
int array_2d_stack(unsigned long a0)
{
 return ((int *)a0)[11] + ((int *)a0)[0] + ((int *)a0)[22] + ((int *)a0)[33] + ((int *)a0)[44] + ((int *)a0)[55] + ((int *)a0)[66] + ((int *)a0)[77] + ((int *)a0)[88] + ((int *)a0)[99];
}





// Function: array_3d at 0x4014d0
int array_3d(unsigned long a0)
{
 struct_0 *ptr = (struct_0 *)a0;
 return ptr->field_0 + ptr->field_64 + ptr->field_c8 + ptr->field_12c + ptr->field_190;
}





// Function: array_vla at 0x401700
unsigned long long array_vla(unsigned long a0)
{
 unsigned char *ptr = (unsigned char *)a0;
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned char *v10; // rax
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
 v10 = NULL;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v3 = 0;

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
 v12 = AddV(*((unsigned long long *)(ptr + idx * 4 + 96)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 64)), *((unsigned long long *)(ptr + idx * 4 + 32))), AddV(*((unsigned long long *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((unsigned long long *)(ptr + idx * 4 + 112)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 80)), *((unsigned long long *)(ptr + idx * 4 + 48))), AddV(*((unsigned long long *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((unsigned long long *)(v10 + j - 16)));
 v13 = AddV(v13, *((unsigned long long *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(v12, v13);
 v3 = v14;
 if (v2 == k)
 return v14;
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}





// Function: array_pointer at 0x401820
unsigned long long array_pointer(unsigned long a0, unsigned long a1)
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
 v7 = AddV(v6, v4);
 v3 = v7;
 if (v2 == v1)
 return v7;
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





// Function: pointer_array at 0x401910
unsigned long long pointer_array(unsigned long a0, unsigned long a1)
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








// Function: array_complex_index at 0x401980
unsigned long long array_complex_index(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 unsigned long long v1; // rax
 unsigned char *ptr = (unsigned char *)a0;

 v1 = 4294967295;
 if (a3 >= 0 && (unsigned int)a4 < a2 && a3 < (unsigned int)a1 && (unsigned int)a4 >= 0)
 v1 = *((int *)(ptr + (a1 * a4 + a3 & 4294967295) * 4));
 return v1;
}





// Function: array_oob at 0x4019b0
unsigned long long array_oob(unsigned long a0, unsigned long a1)
{
 unsigned char *ptr = (unsigned char *)a0;
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned char *v10; // rax
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
 v10 = NULL;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v3 = 0;

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
 v12 = AddV(*((unsigned long long *)(ptr + idx * 4 + 96)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 64)), *((unsigned long long *)(ptr + idx * 4 + 32))), AddV(*((unsigned long long *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((unsigned long long *)(ptr + idx * 4 + 112)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 80)), *((unsigned long long *)(ptr + idx * 4 + 48))), AddV(*((unsigned long long *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((unsigned long long *)(v10 + j - 16)));
 v13 = AddV(v13, *((unsigned long long *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(v12, v13);
 v3 = v14;
 if (v2 == k)
 return v14;
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}





// Function: test_array_types at 0x401ad0
char g_403600 = 0;

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





// Function: ptr_single at 0x401dd0
int ptr_single(unsigned long a0)
{
 return *((int *)a0) + 10;
}





// Function: ptr_double at 0x401de0
int ptr_double(unsigned long a0)
{
 return ((struct_1 **)a0)[0]->field_0 + 5;
}





// Function: ptr_triple at 0x401df0
int ptr_triple(unsigned long a0)
{
 return ((struct_3 **)a0)[0]->field_0->field_0 + 1;
}





// Function: ptr_increment at 0x401e00
unsigned long long ptr_increment(unsigned long a0, unsigned long a1)
{
 unsigned char *cur = (unsigned char *)a0;
 unsigned long v1; // r8
 unsigned long long v2; // r9
 unsigned long long i; // rax
 unsigned char *v10; // rax
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
 v10 = NULL;
 v11 = 0;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 v16 = 0;
 v3 = 0;

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
 v13 = AddV(*((unsigned long long *)(cur + idx * 4 + 96)), AddV(AddV(*((unsigned long long *)(cur + idx * 4 + 64)), *((unsigned long long *)(cur + idx * 4 + 32))), AddV(*((unsigned long long *)(cur + idx * 4)), v13)));
 v14 = AddV(*((unsigned long long *)(cur + idx * 4 + 112)), AddV(AddV(*((unsigned long long *)(cur + idx * 4 + 80)), *((unsigned long long *)(cur + idx * 4 + 48))), AddV(*((unsigned long long *)(cur + idx * 4 + 16)), v14)));
 idx += 32;
 i -= 4;
 } while (i != 4);
 }
 if (v7)
 {
 v10 = cur + idx * 4 + 16;
 j = 0;
 do
 {
 v13 = AddV(v13, *((unsigned long long *)(v10 + j - 16)));
 v14 = AddV(v14, *((unsigned long long *)(v10 + j)));
 j += 32;
 } while (v7 * 32 != j);
 }
 v15 = AddV(v13, v14);
 v3 = v15;
 if (v4 == v2)
 return v15;
 cur = cur + v2 * 4;
 }
 v16 = 0;
 do
 {
 v3 = (unsigned int)v3 + *((int *)(cur + v16 * 4));
 v16 += 1;
 } while ((unsigned int)(a1 - v2) != (unsigned int)v16);
 return v3;
}





// Function: ptr_offset at 0x401f30
int ptr_offset(unsigned long a0, unsigned long a1)
{
 return *((int *)(a0 + a1 * 4));
}





// Function: ptr_diff at 0x401f40
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}





// Function: ptr_void at 0x401f50
unsigned long long ptr_void(unsigned long a0, unsigned long a1)
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





// Function: ptr_const at 0x401f70
unsigned int ptr_const(unsigned long a0)
{
 return *((unsigned int *)a0) * 2;
}





// Function: ptr_const_ptr at 0x401f80
int ptr_const_ptr(unsigned long a0)
{
 unsigned int *ptr = (unsigned int *)a0;
 *ptr = *ptr + 5;
 return *ptr + 5;
}





// Function: ptr_func_simple at 0x401f90
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return a0;
}





// Function: ptr_func_complex at 0x401fa0
unsigned long long g_404de0 = 0;

typedef long long (*func_ptr_t)(unsigned long, void*);

long long ptr_func_complex(unsigned long a0, unsigned long a1)
{
 unsigned long long v0;

 v0 = g_404de0;
 return ((func_ptr_t)a0)(a1, (void*)&v0);
}





// Function: ptr_cast at 0x401fd0
int ptr_cast(unsigned long a0)
{
 return *((int *)a0);
}





// Function: opaque_handle_create at 0x401fe0
int opaque_handle_create(unsigned long a0)
{
 return a0;
}





// Function: opaque_handle_op at 0x401ff0
unsigned int opaque_handle_op(unsigned long a0)
{
 return a0 * 2;
}





// Function: test_pointer_types at 0x402000
char g_40361b = 0;

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





// Function: struct_simple at 0x402120
int struct_simple(unsigned long a0)
{
 return ((int *)a0)[1] + ((int *)a0)[0] + ((int *)a0)[2];
}





// Function: struct_array at 0x402130
unsigned long long struct_array(unsigned long a0, unsigned long a1)
{
 unsigned long long i; // rdx
 unsigned long long v2; // rax
 unsigned int *cur; // rcx
 unsigned int *ptr = (unsigned int *)a0;

 if (a1 <= 0)
 return 0;
 cur = NULL;
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





// Function: struct_nested at 0x4021a0
int struct_nested(unsigned long a0)
{
 return ((int *)a0)[3] + ((int *)a0)[0];
}





// Function: struct_deep at 0x4021b0
int struct_deep(unsigned long a0)
{
 return ((int *)a0)[5] + ((int *)a0)[2];
}





// Function: struct_with_ptr at 0x4021c0
int struct_with_ptr(unsigned long a0)
{
 struct_4 *ptr = (struct_4 *)a0;
 if (!ptr->field_8)
 return 0 + ptr->field_0;
 return ptr->field_8->field_0 + ptr->field_0;
}





// Function: struct_bitfields at 0x4021e0
int struct_bitfields(unsigned long a0)
{
 unsigned short v1; // ax
 unsigned short *ptr = (unsigned short *)a0;

 v1 = *ptr;
 return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}





// Function: union_type at 0x402210
int union_type(unsigned long a0, unsigned long a1)
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





// Function: union_array at 0x402230
unsigned long long union_array(unsigned long a0, unsigned long a1)
{
 unsigned char *ptr = (unsigned char *)a0;
 unsigned long k; // rcx
 unsigned long v2; // rdx
 unsigned char *v10; // rax
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
 v10 = NULL;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v3 = 0;

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
 v12 = AddV(*((unsigned long long *)(ptr + idx * 4 + 96)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 64)), *((unsigned long long *)(ptr + idx * 4 + 32))), AddV(*((unsigned long long *)(ptr + idx * 4)), v12)));
 v13 = AddV(*((unsigned long long *)(ptr + idx * 4 + 112)), AddV(AddV(*((unsigned long long *)(ptr + idx * 4 + 80)), *((unsigned long long *)(ptr + idx * 4 + 48))), AddV(*((unsigned long long *)(ptr + idx * 4 + 16)), v13)));
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
 v12 = AddV(v12, *((unsigned long long *)(v10 + j - 16)));
 v13 = AddV(v13, *((unsigned long long *)(v10 + j)));
 j += 32;
 } while (v6 * 32 != j);
 }
 v14 = AddV(v12, v13);
 v3 = v14;
 if (v2 == k)
 return v14;
 }
 do
 {
 v3 = (unsigned int)v3 + *((int *)(ptr + v2 * 4));
 v2 += 1;
 } while (k != v2);
 return v3;
}





// Function: enum_type at 0x402350
unsigned int enum_type(unsigned long a0)
{
 return a0 * 10;
}





// Function: enum_switch at 0x402360
unsigned int g_403040[4] = {0};

unsigned long long enum_switch(unsigned long a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = g_403040[a0];
 return v1;
}





// Function: struct_func_ptr at 0x402380
long long struct_func_ptr(unsigned long a0)
{
 return ((struct_9 *)a0)->field_8;
}





// Function: linked_list at 0x402390
unsigned long long linked_list(unsigned long a0)
{
 unsigned long long v1;
 struct_6 *ptr = (struct_6 *)a0;

 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr && ptr->field_8);
 }
 return v1;
}





// Function: doubly_linked_list at 0x4023b0
unsigned long long doubly_linked_list(unsigned long a0)
{
 unsigned long long v1;
 struct_7 *ptr = (struct_7 *)a0;

 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr && ptr->field_8);
 }
 return v1;
}





// Function: binary_tree_sum at 0x4023d0
unsigned int binary_tree_sum(struct_8 *a0)
{
 unsigned int v3;
 struct_8 *ptr;
 unsigned int v5;
 struct_8 *v6;

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





// Function: binary_tree at 0x402410
int binary_tree(unsigned long a0)
{
 return binary_tree_sum((struct_8 *)a0);
}





// Function: graph_traverse at 0x402420
unsigned long long graph_traverse(unsigned long a0)
{
 unsigned int result;
 unsigned long long idx;
 unsigned long long v3;
 struct_11 *addr;
 struct_11 *ptr3;
 struct_10 *ptr = (struct_10 *)a0;

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
 addr = ptr->field_0;
 if (addr)
 {
 do
 {
 v3 = (unsigned int)v3 + addr->field_0;
 addr = addr->field_8;
 } while (addr && addr->field_8);
 }
 idx += 2;
 if (idx == (result & 4294967294))
 break;
 }
 }
 if (((char)result & 1))
 {
 ptr3 = ptr->field_0;
 if (ptr3)
 {
 do
 {
 v3 = (unsigned int)v3 + ptr3->field_0;
 ptr3 = ptr3->field_8;
 } while (ptr3 && ptr3->field_8);
 }
 }
 return v3;
}





// Function: test_composite_types at 0x4024c0
char g_403636 = 0;

int test_composite_types()
{
 unsigned int v16; // ebx
 unsigned int v19; // ebp
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
 v16 = 60;
 v19 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", v16);
 v19 = 30;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v19);
 flag3 = 0;
 v13 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", 100);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
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


