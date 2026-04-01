// Angr Decompilation of 2_gcc_O3_g
// Platform: AMD64

#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

// Define int128_t for 128-bit integer operations
typedef unsigned __int128 int128_t;

// Helper function for 128-bit addition (lower 64 bits)
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

// Helper function for 128-bit multiplication (lower 64 bits)
static inline unsigned long long MulV(unsigned long long a, unsigned long long b) {
    return a * b;
}

/* CRT stub function _init removed by preprocessor */

unsigned long long g_405fb0;
unsigned long long g_405fb8;

// Function pointer type for init
typedef unsigned long long (*init_func_t)(void);

unsigned long long * _init()
{
 unsigned long long *v1; // rax
 init_func_t init_fn;

 init_fn = (init_func_t)g_405fb0;
 if (init_fn)
 v1 = (unsigned long long *)init_fn();
 else
 v1 = NULL;
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405fb0;
extern unsigned long long g_405fb8;

void sub_401020()
{
 unsigned long long v0; // [bp-0x8]
 init_func_t init_fn;

 init_fn = (init_func_t)g_405fb0;
 if (init_fn)
   v0 = init_fn();
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x4010a0
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_data_types_l1();
 test_array_types(v1, v2, v3, v4, v5, v6);
 test_pointer_types(v1, v2, v3, v4, v5, v6);
 test_composite_types(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_4010cb at 0x4010cb
void sub_4010cb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010f5 at 0x4010f5
void sub_4010f5()
{
 // Empty function - original had unsupported operation
}


// Function: sub_4010f6 at 0x4010f6
void sub_4010f6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401129 at 0x401129
void sub_401129()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401169 at 0x401169
void sub_401169()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



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



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4011b9 at 0x4011b9
void sub_4011b9(unsigned long a0)
{
 process_char();
 return;
}


// Function: process_char at 0x4011c0
long long process_char(unsigned int a0)
{
 return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: sub_4011d1 at 0x4011d1
void sub_4011d1(unsigned long a0, unsigned long a1)
{
 process_short();
 return;
}


// Function: process_short at 0x4011e0
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_4011e8 at 0x4011e8
void sub_4011e8(unsigned long a0)
{
 process_int();
 return;
}


// Function: process_int at 0x4011f0
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9(unsigned long a0)
{
 process_long();
 return;
}


// Function: process_long at 0x401200
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 process_ll();
 return;
}


// Function: process_ll at 0x401210
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: sub_40121c at 0x40121c
void sub_40121c()
{
 process_float();
 return;
}


// Function: process_float at 0x401220
double process_float()
{
 union { float f; unsigned int i; } v1;
 v1.f = 1.5f;
 return v1.f * 2.0;
}


// Function: sub_401235 at 0x401235
void sub_401235()
{
 process_double();
 return;
}


// Function: process_double at 0x401240
double process_double()
{
 unsigned long long v1; // xmm0

 return (double)(v1 * 0x3fe0000000000000ULL + 4591870180066957722ULL);
}


// Function: sub_401255 at 0x401255
void sub_401255()
{
 process_ld();
 return;
}


// Function: process_ld at 0x401260
void process_ld()
{
 // Unsupported operation removed
 return;
}


// Function: sub_40126f at 0x40126f
void sub_40126f(unsigned long a0)
{
 process_bool();
 return;
}


// Function: process_bool at 0x401270
unsigned long long process_bool(unsigned int a0)
{
 if (a0 > 0)
 return ~(a0) & 1;
 return 0;
}


// Function: sub_401283 at 0x401283
void sub_401283(unsigned long a0)
{
 const_param();
 return;
}


// Function: const_param at 0x401290
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_40129a at 0x40129a
void sub_40129a(unsigned long a0)
{
 volatile_access();
 return;
}


// Function: volatile_access at 0x4012a0
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4012ab at 0x4012ab
void sub_4012ab()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x4012b0
extern char g_403008;

int test_data_types_l1()
{
 unsigned long v6; // rdx
 unsigned long long v0; // [bp-0x38]
 unsigned long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 char v3; // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 puts(&g_403008);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", v6);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", v6);
 // Float/double tests - using placeholder values
 v3 = 1.5;
 v2 = 2.5;
 v1 = *((int *)&v3);
 v0 = v2;
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 v4 = 10;
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v4 * 2);
}


// Function: sub_401435 at 0x401435
void sub_401435(unsigned long a0, unsigned long a1)
{
 array_1d_stack();
 return;
}


// Function: array_1d_stack at 0x401440
unsigned long long array_1d_stack(unsigned long long *p, unsigned int a1)
{
 unsigned long long v1; // xmm0
 unsigned long long *ptr; // rax
 unsigned long long *v3; // rax
 unsigned int v4; // ecx
 unsigned long long v5; // xmm0
 unsigned int v6; // eax
 unsigned long v7; // rdi
 unsigned long long v8; // rax
 unsigned long long v9; // rax

 if (a1 <= 0)
 return 0;
 if (a1 - 1 > 2)
 {
 v1 = 0;
 ptr = p;
 do
 {
 v3 = ptr + 1;
 v1 = v1 + *(ptr);
 ptr = v3;
 } while (ptr != &p[1 + (a1 >> 2) + 1]);
 v4 = a1 & 0xfffffffc;
 v5 = v1 + (unsigned long long)(v1 >> 64);
 v6 = (unsigned int)(v5 + (((v5 >> 32) | ((v5 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32));
 if (!((char)a1 & 3))
 return v6;
 }
 else
 {
 v4 = 0;
 v6 = 0;
 }
 v7 = v4;
 v8 = v6 + *((int *)((char *)p + 4 * v7));
 if (a1 <= v4 + 1)
 return v8;
 v9 = (unsigned int)v8 + *((int *)(4 + (char *)p + 4 * v7));
 if (a1 <= v4 + 2)
 return v9;
 return (unsigned int)v9 + *((int *)(8 + (char *)p + 4 * v7));
}


// Function: sub_4014d9 at 0x4014d9
void sub_4014d9()
{
}


// Function: sub_4014e3 at 0x4014e3
void sub_4014e3()
{
}


// Function: sub_4014ef at 0x4014ef
void sub_4014ef(unsigned long a0)
{
 array_string();
 return;
}


// Function: array_string at 0x4014f0
unsigned long long array_string(char *a0)
{
 unsigned long long v1; // rax
 unsigned long long v2; // rax
 unsigned long long v3; // rax

 if (!*(a0))
 return 0;
 v1 = 1;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 } while (a0[1 + v1]);
 return v2 & 4294967295;
}


// Function: sub_401512 at 0x401512
void sub_401512()
{
}


// Function: sub_40151f at 0x40151f
void sub_40151f(unsigned long a0)
{
 array_2d_stack();
 return;
}


// Function: array_2d_stack at 0x401520
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_401557 at 0x401557
void sub_401557(unsigned long a0)
{
 array_3d();
 return;
}


// Function: array_3d at 0x401560
typedef struct struct_0_array3d {
 unsigned long long field_0;
 unsigned long long field_10;
 unsigned long long field_20;
 unsigned long long field_30;
 unsigned long long field_40;
 unsigned long long field_50;
 unsigned long long field_60;
 unsigned long long field_70;
 unsigned long long field_80;
 unsigned long long field_90;
 unsigned long long field_a0;
 unsigned long long field_b0;
 unsigned long long field_c0;
 unsigned long long field_d0;
 unsigned long long field_e0;
 unsigned long long field_f0;
 unsigned long long field_100;
 unsigned long long field_110;
 unsigned long long field_120;
 unsigned long long field_130;
 unsigned long long field_140;
 unsigned long long field_150;
 unsigned long long field_160;
 unsigned long long field_170;
 unsigned long long field_180;
 unsigned int field_190;
 unsigned int field_194;
 unsigned int field_198;
 unsigned int field_19c;
 unsigned int field_1a0;
 unsigned int field_1a4;
 unsigned int field_1a8;
 unsigned int field_1ac;
 unsigned int field_1b0;
 unsigned int field_1b4;
 unsigned int field_1b8;
 unsigned int field_1bc;
 unsigned int field_1c0;
 unsigned int field_1c4;
 unsigned int field_1c8;
 unsigned int field_1cc;
 unsigned int field_1d0;
 unsigned int field_1d4;
 unsigned int field_1d8;
 unsigned int field_1dc;
 unsigned int field_1e0;
 unsigned int field_1e4;
 unsigned int field_1e8;
 unsigned int field_1ec;
 unsigned int field_1f0;
} struct_0_array3d;

int array_3d(struct_0_array3d *ptr)
{
 int v1; // xmm0

 v1 = ...;
 return ...;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 array_vla();
 return;
}


// Function: array_vla at 0x401730
unsigned long long array_vla(unsigned int a0, unsigned long long *p)
{
 unsigned long long v1; // xmm0
 unsigned long long *ptr; // rax
 unsigned long long *v3; // rax
 unsigned int v4; // ecx
 unsigned long long v5; // xmm0
 unsigned int v6; // eax
 unsigned long v7; // rdi
 unsigned long long v8; // rax
 unsigned long long v9; // rax

 if (a0 <= 0)
 return 0;
 if (a0 - 1 > 2)
 {
 v1 = 0;
 ptr = p;
 do
 {
 v3 = ptr + 1;
 v1 = v1 + *(ptr);
 ptr = v3;
 } while (ptr != &p[1 + (a0 >> 2) + 1]);
 v4 = a0 & 0xfffffffc;
 v5 = v1 + (unsigned long long)(v1 >> 64);
 v6 = (unsigned int)(v5 + (((v5 >> 32) | ((v5 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32));
 if (!((char)a0 & 3))
 return (unsigned long long)(v5 + (((v5 >> 32) | ((v5 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32)));
 }
 else
 {
 v4 = 0;
 v6 = 0;
 }
 v7 = v4;
 v8 = v6 + *((int *)((char *)p + 4 * v7));
 if (a0 <= v4 + 1)
 return v8;
 v9 = (unsigned int)v8 + *((int *)(4 + (char *)p + 4 * v7));
 if (a0 <= v4 + 2)
 return v9;
 return (unsigned int)v9 + *((int *)(8 + (char *)p + 4 * v7));
}


// Function: sub_4017c8 at 0x4017c8
void sub_4017c8()
{
}


// Function: sub_4017d3 at 0x4017d3
void sub_4017d3()
{
}


// Function: sub_4017df at 0x4017df
void sub_4017df(unsigned long a0, unsigned long a1)
{
 array_pointer();
 return;
}


// Function: array_pointer at 0x4017e0
unsigned long long array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 10;
 } while (ptr != &a0[10 + 10 * a1 + 10]);
 return v1;
}


// Function: sub_40180c at 0x40180c
void sub_40180c()
{
}


// Function: sub_401813 at 0x401813
void sub_401813(unsigned long a0, unsigned long a1)
{
 pointer_array();
 return;
}


// Function: pointer_array at 0x401820
typedef struct struct_ptr_arr_0 {
 struct struct_ptr_arr_1 *field_0;
 struct struct_ptr_arr_2 *field_8;
 struct struct_ptr_arr_3 *field_10;
 struct struct_ptr_arr_4 *field_18;
 struct struct_ptr_arr_5 *field_20;
 struct struct_ptr_arr_6 *field_28;
 struct struct_ptr_arr_7 *field_30;
 struct struct_ptr_arr_8 *field_38;
 struct struct_ptr_arr_9 *field_40;
 struct struct_ptr_arr_10 *field_48;
} struct_ptr_arr_0;

typedef struct struct_ptr_arr_1 {
 unsigned int field_0;
} struct_ptr_arr_1;

typedef struct struct_ptr_arr_2 {
 unsigned int field_0;
} struct_ptr_arr_2;

typedef struct struct_ptr_arr_3 {
 unsigned int field_0;
} struct_ptr_arr_3;

typedef struct struct_ptr_arr_4 {
 unsigned int field_0;
} struct_ptr_arr_4;

typedef struct struct_ptr_arr_5 {
 unsigned int field_0;
} struct_ptr_arr_5;

typedef struct struct_ptr_arr_6 {
 unsigned int field_0;
} struct_ptr_arr_6;

typedef struct struct_ptr_arr_7 {
 unsigned int field_0;
} struct_ptr_arr_7;

typedef struct struct_ptr_arr_8 {
 unsigned int field_0;
} struct_ptr_arr_8;

typedef struct struct_ptr_arr_9 {
 unsigned int field_0;
} struct_ptr_arr_9;

typedef struct struct_ptr_arr_10 {
 unsigned int field_0;
} struct_ptr_arr_10;

unsigned long long pointer_array(struct_ptr_arr_0 *a0, unsigned int a1)
{
 unsigned long long v1; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 if (a0->field_0)
 v1 = a0->field_0->field_0;
 if (a1 <= 1)
 return v1;
 if (a0->field_8)
 v1 = (unsigned int)v1 + a0->field_8->field_0;
 if (a1 == 2)
 return v1;
 if (a0->field_10)
 v1 = (unsigned int)v1 + a0->field_10->field_0;
 if (a1 == 3)
 return v1;
 if (a0->field_18)
 v1 = (unsigned int)v1 + a0->field_18->field_0;
 if (a1 == 4)
 return v1;
 if (a0->field_20)
 v1 = (unsigned int)v1 + a0->field_20->field_0;
 if (a1 == 5)
 return v1;
 if (a0->field_28)
 v1 = (unsigned int)v1 + a0->field_28->field_0;
 if (a1 == 6)
 return v1;
 if (a0->field_30)
 v1 = (unsigned int)v1 + a0->field_30->field_0;
 if (a1 == 7)
 return v1;
 if (a0->field_38)
 v1 = (unsigned int)v1 + a0->field_38->field_0;
 if (a1 == 8)
 return v1;
 if (a0->field_40)
 v1 = (unsigned int)v1 + a0->field_40->field_0;
 if (a1 <= 9)
 {
 return v1;
 }
 else if (a0->field_48)
 {
 return (unsigned int)v1 + a0->field_48->field_0;
 }
 else
 {
 return v1;
 }
}


// Function: sub_4018d1 at 0x4018d1
void sub_4018d1()
{
}


// Function: sub_4018db at 0x4018db
void sub_4018db(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 array_complex_index();
 return;
}


// Function: array_complex_index at 0x4018e0
unsigned long long array_complex_index(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
 if ((a3 | (unsigned int)a4) < 0)
 {
 return 4294967295;
 }
 else if (a3 >= (unsigned int)a1)
 {
 return 4294967295;
 }
 else if ((unsigned int)a4 < a2)
 {
 return *((int *)(a0 + (a4 * a1 + a3 & 4294967295) * 4));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401904 at 0x401904
void sub_401904()
{
}


// Function: sub_40190e at 0x40190e
void sub_40190e(unsigned long a0, unsigned long a1)
{
 array_oob();
 return;
}


// Function: array_oob at 0x401910
unsigned long long array_oob(unsigned long long *a0, unsigned int a1)
{
 unsigned long long *p; // rdx
 unsigned int v2; // edi
 unsigned long long v11; // rax
 unsigned long long v3; // xmm0
 unsigned long long *ptr; // rax
 unsigned long long *v5; // rax
 unsigned int v6; // ecx
 unsigned long long v7; // xmm0
 unsigned int v8; // eax
 unsigned long v9; // rdi
 unsigned long long v10; // rax

 p = a0;
 if (a1 < 0)
 return 0;
 v2 = a1 + 1;
 if (a1 > 2)
 {
 v3 = 0;
 ptr = p;
 do
 {
 v5 = ptr + 1;
 v3 = v3 + *(ptr);
 ptr = v5;
 } while (ptr != &p[1 + (v2 >> 2) + 1]);
 v6 = v2 & 0xfffffffc;
 v7 = v3 + (unsigned long long)(v3 >> 64);
 v8 = (unsigned int)(v7 + (((v7 >> 32) | ((v7 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32)));
 if (!((char)v2 & 3))
 return (unsigned long long)(v7 + (((v7 >> 32) | ((v7 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32));
 }
 else
 {
 v6 = 0;
 v8 = 0;
 }
 v9 = v6;
 v10 = v8 + *((int *)((char *)p + 4 * v9));
 if (a1 < v6 + 1)
 return v10;
 v11 = (unsigned int)v10 + *((int *)(4 + (char *)p + 4 * v9));
 if (a1 < v6 + 2)
 return v11;
 return (unsigned int)v11 + *((int *)(8 + (char *)p + 4 * v9));
}


// Function: sub_4019a8 at 0x4019a8
void sub_4019a8()
{
}


// Function: sub_4019b3 at 0x4019b3
void sub_4019b3()
{
}


// Function: sub_4019bf at 0x4019bf
void sub_4019bf()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x4019c0
extern char g_4033e1;

long long test_array_types()
{
 unsigned long long v3; // rax
 unsigned long long v4; // rax
 unsigned long long v5; // rax
 char v0; // [bp-0x17]
 char v1[6]; // [bp-0x16]

 puts(&g_4033e1);
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
 strncpy(v1, "hello", 5);
 v3 = 1;
 do
 {
 v5 = v3 + 1;
 v3 = v5;
 } while ((&v0)[v3]);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v4 & 4294967295);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", 45);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", 125);
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
 return __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: sub_401ae8 at 0x401ae8
void sub_401ae8(unsigned long a0)
{
 ptr_single();
 return;
}


// Function: ptr_single at 0x401af0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401afa at 0x401afa
void sub_401afa(unsigned long a0)
{
 ptr_double();
 return;
}


// Function: ptr_double at 0x401b00
typedef struct struct_ptr_double {
 unsigned int field_0;
} struct_ptr_double;

int ptr_double(struct_ptr_double **a0)
{
 return *(a0)->field_0 + 5;
}


// Function: sub_401b0d at 0x401b0d
void sub_401b0d(unsigned long a0)
{
 ptr_triple();
 return;
}


// Function: ptr_triple at 0x401b10
typedef struct struct_ptr_triple_inner {
 unsigned int field_0;
} struct_ptr_triple_inner;

typedef struct struct_ptr_triple {
 struct_ptr_triple_inner *field_0;
} struct_ptr_triple;

int ptr_triple(struct_ptr_triple **a0)
{
 return *(a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x401b20
unsigned long long ptr_increment(void* a0, unsigned int a1)
{
 void* cur; // rdx
 unsigned long long v2; // xmm0
 void* ptr; // rax
 void* v4; // rax
 unsigned int v5; // ecx
 unsigned long long v6; // xmm0
 unsigned int v7; // eax
 unsigned long long v8; // rax
 unsigned long long v9; // rax

 cur = a0;
 if (a1 <= 0)
 return 0;
 if (a1 - 1 > 2)
 {
 v2 = 0;
 ptr = a0;
 do
 {
 v4 = ptr + 16;
 v2 = v2 + *((unsigned long long *)ptr);
 ptr = v4;
 } while (a0 + ((a1 >> 2) - 1) * 16 + 16 != ptr);
 v5 = a1 & 0xfffffffc;
 v6 = v2 + (v2 >> 64);
 cur = (char*)cur + v5 * 4;
 v7 = (unsigned int)(v6 + (((v6 >> 32) | ((v6 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32)));
 if (a1 == v5)
 return (unsigned long long)(v6 + (((unsigned long long)(v6 >> 96) << 32) | ((v6 >> 64) & 0xFFFFFFFF) * 0x100000000ULL)));
 }
 else
 {
 v5 = 0;
 v7 = 0;
 }
 v8 = v7 + *((int *)cur);
 if (a1 <= v5 + 1)
 return v8;
 v9 = (unsigned int)v8 + *((int *)((char*)cur + 4));
 if (a1 <= v5 + 2)
 return v9;
 return (unsigned int)v9 + *((int *)((char*)cur + 8));
}


// Function: sub_401ba5 at 0x401ba5
void sub_401ba5()
{
}


// Function: sub_401bab at 0x401bab
void sub_401bab()
{
}


// Function: sub_401bb7 at 0x401bb7
void sub_401bb7(unsigned long a0, unsigned long a1)
{
 ptr_offset();
 return;
}


// Function: ptr_offset at 0x401bc0
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401bcb at 0x401bcb
void sub_401bcb(unsigned long a0, unsigned long a1)
{
 ptr_diff();
 return;
}


// Function: ptr_diff at 0x401bd0
int ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401bde at 0x401bde
void sub_401bde(unsigned long a0, unsigned long a1)
{
 ptr_void();
 return;
}


// Function: ptr_void at 0x401be0
unsigned long long ptr_void(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((char *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401bf1 at 0x401bf1
void sub_401bf1()
{
}


// Function: sub_401bfb at 0x401bfb
void sub_401bfb()
{
}


// Function: sub_401c06 at 0x401c06
void sub_401c06(unsigned long a0)
{
 ptr_const();
 return;
}


// Function: ptr_const at 0x401c10
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401c19 at 0x401c19
void sub_401c19(unsigned long a0)
{
 ptr_const_ptr();
 return;
}


// Function: ptr_const_ptr at 0x401c20
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401c2c at 0x401c2c
void sub_401c2c(unsigned long a0, unsigned long a1)
{
 ptr_func_simple();
 return;
}


// Function: ptr_func_simple at 0x401c30
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return a0 + a1;
}


// Function: sub_401c3b at 0x401c3b
void sub_401c3b(unsigned long a0, unsigned long a1)
{
 ptr_func_complex();
 return;
}


// Function: ptr_func_complex at 0x401c40
long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned long long v0; // [bp-0x28]
 unsigned long long result; // [bp-0x20]

 result = 0;
 v0 = "test";
 return a0(a1, &v0);
}


// Function: ptr_cast at 0x401c90
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401c97 at 0x401c97
void sub_401c97(unsigned long a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x401ca0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401ca8 at 0x401ca8
void sub_401ca8(unsigned long a0)
{
 opaque_handle_op();
 return;
}


// Function: opaque_handle_op at 0x401cb0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401cb8 at 0x401cb8
void sub_401cb8()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x401cc0
extern char g_403454;

int test_pointer_types()
{
 puts(&g_403454);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", 15);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 return __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: sub_401e21 at 0x401e21
void sub_401e21(unsigned long a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x401e30
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401e3d at 0x401e3d
void sub_401e3d(unsigned long a0, unsigned long a1)
{
 struct_array();
 return;
}


// Function: struct_array at 0x401e40
typedef struct {
 unsigned int field_0;
 unsigned int field_1;
 unsigned int field_2;
} struct_array_data;

unsigned long long struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // r8
 unsigned int *i; // rdi
 unsigned int *p; // rdi
 unsigned long long v4; // r8
 unsigned int *ptr; // rdi
 unsigned long long v6; // r8

 if (a1 <= 0)
 return 0;
 v1 = 0;
 i = a0;
 do
 {
 p = i;
 v4 = v1;
 ptr = p + 1;
 v6 = v4 + p[1] + ptr[1] + ptr[1];
 v1 = v6;
 i = ptr;
 } while (&a0[3 + 3 * a1 + 3] != i);
 return v4 + p[1] + ptr[1] + ptr[1] & 4294967295;
}


// Function: sub_401e79 at 0x401e79
void sub_401e79()
{
}


// Function: sub_401e87 at 0x401e87
void sub_401e87(unsigned long a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x401e90
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: sub_401e9a at 0x401e9a
void sub_401e9a(unsigned long a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x401ea0
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: sub_401eab at 0x401eab
void sub_401eab(unsigned long a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x401eb0
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

long long struct_with_ptr(struct_0 *ptr)
{
 unsigned long v1; // rax

 v1 = ptr->field_0;
 if (ptr->field_8)
 v1 = (unsigned int)v1 + ptr->field_8->field_0;
 return v1;
}


// Function: sub_401ec2 at 0x401ec2
void sub_401ec2(unsigned long a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x401ed0
int struct_bitfields(void* ptr)
{
 char v1; // dl
 unsigned int v2; // ecx

 v1 = *((char *)ptr);
 v2 = v1;
 return (v1 & 1) + ((v2 & 0xffffff00 | (char)v2 >> 1) & 3) + (v1 >> 3 & 7) + (*((short *)ptr) >> 6);
}


// Function: sub_401efa at 0x401efa
void sub_401efa(unsigned long a0, unsigned long a1)
{
 union_type();
 return;
}


// Function: union_type at 0x401f00
int union_type(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 != 1)
 {
 return *((char *)a0);
 }
 else
 {
 return *((int *)a0);
 }
}


// Function: sub_401f11 at 0x401f11
void sub_401f11()
{
}


// Function: sub_401f1b at 0x401f1b
void sub_401f1b()
{
}


// Function: sub_401f25 at 0x401f25
void sub_401f25(unsigned long a0, unsigned long a1)
{
 union_array();
 return;
}


// Function: union_array at 0x401f30
unsigned long long union_array(unsigned long long *p, unsigned int a1)
{
 unsigned long long v1; // xmm0
 unsigned long long *ptr; // rax
 unsigned long long *v3; // rax
 unsigned int v4; // ecx
 int v5; // xmm0
 unsigned int v6; // eax
 unsigned long v7; // rdi
 unsigned long long v8; // rax
 unsigned long long v9; // rax

 if (a1 <= 0)
 return 0;
 if (a1 - 1 > 2)
 {
 v1 = 0;
 ptr = p;
 do
 {
 v3 = ptr + 1;
 v1 = AddV(v1, *(ptr));
 ptr = v3;
 } while (ptr != &p[1 + (a1 >> 2) + 1]);
 v4 = a1 & 0xfffffffc;
 v5 = v1 + (unsigned long long)(v1 >> 64);
 v6 = (unsigned int)(v5 + (((v5 >> 32) | ((v5 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32));
 if (!((char)a1 & 3))
 return (unsigned long long)(v5 + (((v5 >> 32) | ((v5 >> 64) & 0xFFFFFFFF) * 0x100000000ULL) << 32)));
 }
 else
 {
 v4 = 0;
 v6 = 0;
 }
 v7 = v4;
 v8 = v6 + *((int *)((char *)p + 4 * v7));
 if (a1 <= v4 + 1)
 return v8;
 v9 = (unsigned int)v8 + *((int *)(4 + (char *)p + 4 * v7));
 if (a1 <= v4 + 2)
 return v9;
 return (unsigned int)v9 + *((int *)(8 + (char *)p + 4 * v7));
}


// Function: sub_401fc9 at 0x401fc9
void sub_401fc9()
{
}


// Function: sub_401fd3 at 0x401fd3
void sub_401fd3()
{
}


// Function: sub_401fdf at 0x401fdf
void sub_401fdf(unsigned long a0)
{
 enum_type();
 return;
}


// Function: enum_type at 0x401fe0
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401fea at 0x401fea
void sub_401fea(unsigned long a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x401ff0
extern unsigned int CSWTCH_61[4];

unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = CSWTCH_61[a0];
 return v1;
}


// Function: sub_40200b at 0x40200b
void sub_40200b(unsigned long a0)
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x402010
typedef struct struct_0 {
 char padding_0[8];
 unsigned long long field_8;
} struct_0;

long long struct_func_ptr(struct_0 *a0)
{
 goto a0->field_8;
}


// Function: sub_40201c at 0x40201c
void sub_40201c(unsigned long a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x402020
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

unsigned long long linked_list(struct_0 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (!ptr)
 return 0;
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 return v1;
}


// Function: sub_40203c at 0x40203c
void sub_40203c()
{
}


// Function: sub_402041 at 0x402041
void sub_402041(unsigned long a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x402050
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

unsigned long long doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (!ptr)
 return 0;
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 return v1;
}


// Function: sub_40206c at 0x40206c
void sub_40206c()
{
}


// Function: sub_402071 at 0x402071
void sub_402071(unsigned long a0)
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x402080
typedef struct struct_8 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_7 *field_8;
 struct struct_8 *field_10;
} struct_8;

typedef struct struct_7 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_6 *field_8;
 struct struct_7 *field_10;
} struct_7;

typedef struct struct_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_5 *field_8;
 struct struct_6 *field_10;
} struct_6;

typedef struct struct_5 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_4 *field_8;
 struct struct_5 *field_10;
} struct_5;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_3 *field_8;
 struct struct_4 *field_10;
} struct_4;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
 struct struct_3 *field_10;
} struct_3;

typedef struct struct_13 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_12 *field_8;
 struct struct_13 *field_10;
} struct_13;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
 struct struct_2 *field_10;
} struct_2;

typedef struct struct_17 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_16 *field_8;
 struct struct_17 *field_10;
} struct_17;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 struct struct_1 *field_10;
} struct_1;

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_0 *field_10;
} struct_0;

typedef struct struct_21 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_21 *field_10;
} struct_21;

typedef struct struct_29 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_28 *field_8;
 struct struct_29 *field_10;
} struct_29;

typedef struct struct_20 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_19 *field_8;
 struct struct_20 *field_10;
} struct_20;

typedef struct struct_27 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_26 *field_8;
 struct struct_27 *field_10;
} struct_27;

typedef struct struct_44 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_43 *field_8;
 struct struct_44 *field_10;
} struct_44;

typedef struct struct_37 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_36 *field_8;
 struct struct_37 *field_10;
} struct_37;

typedef struct struct_12 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_11 *field_8;
 struct struct_12 *field_10;
} struct_12;

typedef struct struct_16 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_15 *field_8;
 struct struct_16 *field_10;
} struct_16;

typedef struct struct_28 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_28 *field_10;
} struct_28;

typedef struct struct_19 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_18 *field_8;
 struct struct_19 *field_10;
} struct_19;

typedef struct struct_26 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_25 *field_8;
 struct struct_26 *field_10;
} struct_26;

typedef struct struct_43 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_42 *field_8;
 struct struct_43 *field_10;
} struct_43;

typedef struct struct_36 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_35 *field_8;
 struct struct_36 *field_10;
} struct_36;

typedef struct struct_11 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_10 *field_8;
 struct struct_11 *field_10;
} struct_11;

typedef struct struct_15 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_14 *field_8;
 struct struct_15 *field_10;
} struct_15;

typedef struct struct_18 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_18 *field_10;
} struct_18;

typedef struct struct_25 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_24 *field_8;
 struct struct_25 *field_10;
} struct_25;

typedef struct struct_42 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_41 *field_8;
 struct struct_42 *field_10;
} struct_42;

typedef struct struct_35 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_34 *field_8;
 struct struct_35 *field_10;
} struct_35;

typedef struct struct_10 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_9 *field_8;
 struct struct_10 *field_10;
} struct_10;

typedef struct struct_14 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_14 *field_10;
} struct_14;

typedef struct struct_24 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_23 *field_8;
 struct struct_24 *field_10;
} struct_24;

typedef struct struct_41 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_40 *field_8;
 struct struct_41 *field_10;
} struct_41;

typedef struct struct_34 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_33 *field_8;
 struct struct_34 *field_10;
} struct_34;

typedef struct struct_9 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_9 *field_10;
} struct_9;

typedef struct struct_23 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_22 *field_8;
 struct struct_23 *field_10;
} struct_23;

typedef struct struct_40 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_39 *field_8;
 struct struct_40 *field_10;
} struct_40;

typedef struct struct_33 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_32 *field_8;
 struct struct_33 *field_10;
} struct_33;

typedef struct struct_22 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_22 *field_10;
} struct_22;

typedef struct struct_39 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_38 *field_8;
 struct struct_39 *field_10;
} struct_39;

typedef struct struct_32 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_31 *field_8;
 struct struct_32 *field_10;
} struct_32;

typedef struct struct_38 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_38 *field_10;
} struct_38;

typedef struct struct_31 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_30 *field_8;
 struct struct_31 *field_10;
} struct_31;

typedef struct struct_30 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_30 *field_10;
} struct_30;

unsigned int binary_tree_sum(struct_8 *a0)
{
 struct_8 *p; // rax
 struct_7 *addr; // rax
 struct_13 *ptr7; // rbx, Other Possible Types: struct_4 *
 unsigned long long v28; // r10
 struct_2 *iter; // rsi
 unsigned long v30; // rcx
 unsigned long long v31; // r9
 unsigned long long v46; // r11
 struct_3 *ptr8; // rdx, Other Possible Types: struct_17 *
 struct_6 *ptr5; // rax
 struct_1 *v32; // rbp
 unsigned long long v33; // r15
 unsigned int v34; // r8d
 struct_1 *ptr; // rbp
 struct_0 *v36; // r12
 unsigned long v37; // r14
 unsigned long long v38; // rbx
 struct_0 *ptr6; // r12
 unsigned int v40; // eax
 struct_5 *cur; // r11
 struct_21 *v41; // r12
 unsigned long long v43; // r13
 struct_37 *v0; // [bp-0xa0], Other Possible Types: struct_7 *
 struct_7 *ptr12; // [bp-0xa0]
 struct_44 *v2; // [bp-0x98], Other Possible Types: struct_6 *
 struct_6 *ptr13; // [bp-0x98]
 struct_8 *v4; // [bp-0x90]
 struct_8 *ptr11; // [bp-0x90]
 unsigned int v6; // [bp-0x88]
 unsigned int v7; // [bp-0x84]
 unsigned int v8; // [bp-0x80]
 unsigned int v9; // [bp-0x7c]
 unsigned int v10; // [bp-0x78]
 unsigned int v11; // [bp-0x74]
 unsigned int v12; // [bp-0x70]
 unsigned int v13; // [bp-0x6c]
 struct_17 *v14; // [bp-0x60]
 unsigned int v15; // [bp-0x58]
 unsigned int v16; // [bp-0x54]
 struct_2 *v17; // [bp-0x50]
 unsigned int v18; // [bp-0x48]
 unsigned int v19; // [bp-0x44]
 unsigned int v20; // [bp-0x40]
 unsigned int v21; // [bp-0x3c]

 v4 = a0;
 v15 = 0;
 if (!a0)
 return v15;
 do
 {
 ptr11 = v4;
 p = ptr11;
 v9 = 0;
 v7 = p->field_0;
 v0 = p->field_8;
 if (p->field_8)
 {
 do
 {
 ptr12 = v0;
 addr = ptr12;
 v10 = 0;
 v8 = addr->field_0;
 v2 = addr->field_8;
 if (addr->field_8)
 {
 do
 {
 ptr13 = v2;
 ptr5 = ptr13;
 v11 = 0;
 cur = ptr5->field_8;
 v13 = ptr5->field_0;
 if (ptr5->field_8)
 {
 do
 {
 ptr7 = cur->field_8;
 v28 = 0;
 v12 = cur->field_0;
 if (cur->field_8)
 {
 cur = cur;
 do
 {
 ptr8 = ptr7->field_8;
 v43 = ptr7->field_0;
 v46 = 0;
 if (ptr7->field_8)
 {
 do
 {
 iter = ptr8->field_8;
 v30 = ptr8->field_0;
 v31 = 0;
 if (ptr8->field_8)
 {
 do
 {
 v32 = iter->field_8;
 v33 = 0;
 v6 = iter->field_0;
 if (iter->field_8)
 {
 v34 = v43;
 do
 {
 ptr = v32;
 v36 = ptr->field_8;
 v37 = ptr->field_0;
 v38 = 0;
 if (ptr->field_8)
 {
 do
 {
 ptr6 = v36;
 v21 = v34;
 v20 = v31;
 v19 = v46;
 v17 = iter;
 v18 = v30;
 v16 = v28;
 v14 = ptr8;
 v40 = binary_tree_sum(ptr6->field_8);
 v41 = ptr6->field_10;
 v38 += v40 + ptr6->field_0;
 ptr8 = v14;
 v28 = v16;
 v30 = v18;
 iter = v17;
 v46 = v19;
 v31 = v20;
 v34 = v21;
 v36 = v41;
 } while (ptr6->field_10);
 v37 += v38;
 }
 v33 += v37;
 v32 = ptr->field_10;
 } while (ptr->field_10);
 v6 += (unsigned int)v33;
 v43 = v34;
 }
 iter = iter->field_10;
 v31 = (unsigned int)v31 + v6;
 } while (iter->field_10);
 v30 += v31;
 }
 ptr8 = ptr8->field_10;
 v46 += v30;
 } while (ptr8->field_10);
 v43 += v46;
 }
 } while ((ptr7 = ptr7->field_10, v28 += v43, ptr7->field_10));
 v12 += (unsigned int)v28;
 }
 } while ((cur = cur->field_10, v11 += v12, cur->field_10));
 v13 += v11;
 }
 } while ((v10 += v13, v2 = (struct_44 *)ptr13->field_10, v2 = (struct_6 *)v2, ptr13->field_10));
 v8 += v10;
 }
 } while ((v9 += v8, v0 = (struct_37 *)ptr12->field_10, v0 = (struct_7 *)v0, ptr12->field_10));
 v7 += v9;
 }
 } while ((v15 += v7, v4 = (struct_8 *)ptr11->field_10, v4 = v4, ptr11->field_10));
 return v15;
}


// Function: sub_4022d8 at 0x4022d8
void sub_4022d8(unsigned long a0)
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x4022e0
typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 struct struct_1 *field_10;
} struct_1;

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 void* field_8;
 struct struct_0 *field_10;
} struct_0;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 struct struct_2 *field_10;
} struct_2;

unsigned int binary_tree(struct_1 *a0)
{
 unsigned long long v1; // r13
 struct_1 *ptr; // rbp
 unsigned long long v11; // r13
 unsigned long long v3; // r13
 struct_0 *v4; // rbx
 unsigned long v5; // r12
 unsigned long long v6; // r14
 struct_0 *p; // rbx
 unsigned int v8; // eax
 struct_2 *v9; // rbx
 struct_1 *v10; // rbp

 v1 = 0;
 if (!a0)
 return 0;
 do
 {
 ptr = a0;
 v3 = v1;
 v4 = ptr->field_8;
 v5 = ptr->field_0;
 v6 = 0;
 if (ptr->field_8)
 {
 do
 {
 p = v4;
 v8 = binary_tree_sum(p->field_8);
 v9 = p->field_10;
 v6 += v8 + p->field_0;
 v4 = v9;
 } while (p->field_10);
 v5 += v6;
 }
 } while ((v10 = ptr->field_10, v11 = v3 + v5, v1 = v3 + v5, a0 = ptr->field_10, ptr->field_10));
 return (unsigned int)v3 + (unsigned int)v5;
}


// Function: sub_402339 at 0x402339
void sub_402339(unsigned long a0)
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x402340
typedef struct struct_1 {
 struct struct_0 *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_1;

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_2;

unsigned long long graph_traverse(struct_1 *a0)
{
 unsigned int v1; // r8d
 struct_1 *v2; // rdi
 struct_1 *p; // rdi
 struct_0 *ptr; // rax
 struct_1 *v6; // rdi

 if (a0->field_50 <= 0)
 return 0;
 v1 = 0;
 v2 = a0;
 do
 {
 p = v2;
 ptr = p->field_0;
 if (p->field_0)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 } while ((v6 = p + 8, v2 = p + 8, v2 != a0 + (unsigned long long)(a0->field_50 - 1) * 8 + 8));
 return v1;
}


// Function: test_composite_types at 0x402390
typedef struct struct_0 {
 char field_0[4];
 char padding_4[4];
 struct struct_0 *field_8;
} struct_0;

typedef struct struct_1 {
 char field_0[4];
 char padding_4[4];
 struct struct_1 *field_8;
} struct_1;

extern char g_40354a;

long long test_composite_types()
{
 struct_0 *ptr; // rax
 unsigned long long v15; // rdx
 struct_0 *v16; // rax
 struct_1 *p; // rax
 unsigned int v18; // edx
 unsigned long v20; // fs
 unsigned int v0; // [bp-0x78]
 char *v1; // [bp-0x70]
 char v2; // [bp-0x68], Other Possible Types: unsigned int
 char *v3; // [bp-0x60]
 unsigned int v4; // [bp-0x58]
 unsigned long long result; // [bp-0x50]
 unsigned int v6; // [bp-0x48]
 char *v7; // [bp-0x40]
 unsigned long long flag1; // [bp-0x38]
 char v9; // [bp-0x30], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x28]
 char *v11; // [bp-0x20]
 unsigned long v12; // [bp-0x10]

 puts(&g_40354a);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
 ptr = &v2;
 v0 = 10;
 v1 = &v2;
 v2 = 20;
 v4 = 30;
 result = 0;
 v3 = &v4;
 v15 = 10;
 do
 {
 v16 = ptr->field_8;
 v15 += (unsigned long long)ptr->field_0;
 ptr = v16;
 } while (ptr->field_8);
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v15);
 p = &v9;
 v6 = 10;
 v7 = &v9;
 flag1 = 0;
 v9 = 20;
 flag2 = 0;
 v11 = &v6;
 v18 = 10;
 do
 {
 v18 += p->field_0;
 p = p->field_8;
 } while (p->field_8);
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v18);
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", 100);
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
 return v12 - *((long long *)(40 + v20));
}



/* CRT stub function _fini removed by preprocessor */


