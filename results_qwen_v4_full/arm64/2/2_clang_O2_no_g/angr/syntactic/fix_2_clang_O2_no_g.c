// Angr Decompilation of 2_clang_O2_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>

// Helper macros and declarations
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern unsigned long long frame_dummy();
extern unsigned long long arm64g_calculate_condition(unsigned int, unsigned long long, unsigned long long, unsigned long long);
extern unsigned long long arm64g_calculate_flag_c(unsigned int, unsigned long long, unsigned long long, unsigned long long);
extern int __libc_start_main();
extern void abort();
extern void deregister_tm_clones();
extern void __do_global_dtors_aux();
extern unsigned long long __addtf3(unsigned long long a, unsigned long long b);
extern unsigned long long __multf3(unsigned long long a, unsigned long long b);


// Global variable definitions
unsigned long long g_413ff8 = 0;
char g_4031ef = 0;
char g_403210 = 0;
char g_40322b = 0;
char g_403246 = 0;
unsigned int g_402c50[4] = {50, 0, 0, 0};
unsigned long long g_400000 = 0;
char g_800000 = 0;
unsigned long long g_413ff0 = 0;
unsigned long long __dollar_d_4 = 0;
unsigned long long __dollar_x_var = 0;

// Struct definitions
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
 unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
 struct struct_0 *field_0;
} struct_2;

typedef struct struct_3 {
 struct struct_0 *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_3;

typedef struct struct_4 {
 char padding_0[8];
 unsigned long long field_8;
} struct_4;

// Stub implementation for Clz (count leading zeros)
unsigned int Clz(unsigned long long x)
{
 if (x == 0) return 64;
 unsigned int count = 0;
 while (!(x & 0x8000000000000000ULL))
 {
  x <<= 1;
  count++;
 }
 return count;
}

// Stub implementation for arm64g_calculate_condition
unsigned long long arm64g_calculate_condition(unsigned int cond, unsigned long long a, unsigned long long b, unsigned long long c)
{
 return 0;
}

// Stub implementation for arm64g_calculate_flag_c
unsigned long long arm64g_calculate_flag_c(unsigned int cond, unsigned long long a, unsigned long long b, unsigned long long c)
{
 return 0;
}

// Stub implementation for frame_dummy
unsigned long long frame_dummy()
{
 return 0;
}

// Stub implementation for deregister_tm_clones
void deregister_tm_clones()
{
 return;
}

// Stub implementation for __do_global_dtors_aux
void __do_global_dtors_aux()
{
 return;
}

// Stub implementation for __libc_start_main
int __libc_start_main()
{
 return 0;
}



/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400620
long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return v0;
}


// Function: sub_400634 at 0x400634
extern int __libc_start_main();
long long sub_400634()
{
 __libc_start_main(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4006f0 at 0x4006f0
extern void abort();
void sub_4006f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400708 at 0x400708
extern void deregister_tm_clones();
void sub_400708()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40077c at 0x40077c
extern void __do_global_dtors_aux();
void sub_40077c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4007c8 at 0x4007c8
long long sub_4007c8()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x4007d4
long long process_char(unsigned int a0)
{
 if ((a0 - 65 & 255) >= 26)
 return a0;
 return a0 + 32;
}


// Function: process_short at 0x4007ec
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: process_int at 0x4007f4
unsigned int process_int(unsigned int a0)
{
 return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: process_long at 0x400804
unsigned long long process_long(unsigned long a0)
{
 return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x40080c
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x400814
long long process_float()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_double at 0x400824
long long process_double()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_ld at 0x40083c
void process_ld()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __addtf3(0, 0);
 return;
}


// Function: process_bool at 0x40085c
long long process_bool(unsigned int a0)
{
 unsigned int v0; // w8
 unsigned int v1; // w9

 if (a0 <= 0)
 v0 = 0;
 else
 v0 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(a0 & 1), 0, 0))
 v1 = 0;
 else
 v1 = 1;
 return v0 & v1;
}


// Function: const_param at 0x400874
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x400880
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x400890
int test_data_types_l1()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 puts(&g_4031ef);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", 10000);
 printf("DT-L1-06 (process_float): %.2f\n", 10000);
 printf("DT-L1-07 (process_double): %.2f\n", 10000);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v1 = 10;
 return printf("DT-L1-11 (volatile_access): %d\n", v1 * 2);
}


// Function: array_1d_stack at 0x4009a4
unsigned long long array_1d_stack(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long v2; // x8
 unsigned long long i; // x11
 unsigned long long v5; // d0
 unsigned int *ptr; // x11
 unsigned long long j; // x9

 if (a1 < 1)
 return 0;
 v0 = a1;
 if (8 > a1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 0xfffffff8;
 i = v1;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = 0;
 if (v1 == v0)
 return v5 & 4294967295;
 }
 ptr = (unsigned int *)((unsigned long)(a0 + v1 * 4));
 j = v0 - v1;
 do
 {
 v2 += *(ptr);
 j -= 1;
 ptr += 1;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: array_string at 0x400a2c
unsigned int array_string(char *a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v3; // w0

 v0 = 4294967295;
 do
 {
 v3 = v0 + 1;
 a0 += 1;
 v0 = v3;
 } while (*(a0));
 return v1 + 1;
}


// Function: array_2d_stack at 0x400a44
int array_2d_stack(unsigned int *a0)
{
 return a0[99] + a0[88] + a0[77] + a0[66] + a0[55] + a0[44] + a0[33] + a0[22] + a0[11] + *(a0);
}


// Function: array_3d at 0x400a94
int array_3d(unsigned int *a0)
{
 unsigned int v0; // s0
 unsigned int v1; // s4
 unsigned int v2; // s2
 unsigned int v3; // s1
 unsigned int v4; // s0

 v0 = 0;
 v1 = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 return v4 + a0[100] + v3 + a0[75] + v2 + a0[50] + v1 + a0[25] + v0 + *(a0);
}


// Function: array_vla at 0x400bcc
unsigned long long array_vla(unsigned int a0, unsigned long a1)
{
 unsigned long v0; // x8
 unsigned long long v1; // x9
 unsigned long long v2; // x0
 unsigned long long i; // x11
 unsigned int *ptr; // x10
 unsigned long long j; // x8
 unsigned int *v7; // x10
 unsigned long long v8; // x8

 if (a0 < 1)
 return 0;
 v0 = a0;
 if (8 > a0)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 0xfffffff8;
 i = v1;
 do
 {
 i -= 8;
 } while (i != 8);
 v2 = 0;
 if (v1 == v0)
 return v2;
 }
 ptr = (unsigned int *)(a1 + v1 * 4);
 j = v0 - v1;
 do
 {
 v7 = ptr + 1;
 v8 = j - 1;
 v2 += *(ptr);
 j = v8;
 ptr = v7;
 } while (j != 1);
 return v2;
}


// Function: array_pointer at 0x400c50
unsigned long long array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned int *p; // x11
 unsigned long long v2; // x8
 unsigned long long v3; // x8
 unsigned long long v4; // x11
 unsigned long long i; // x12
 unsigned int *ptr; // x13
 unsigned long long j; // x9

 if (a1 < 1)
 return 0;
 v0 = a1;
 if (a1 == 1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 4294967294;
 v3 = 0;
 v4 = 0;
 i = v1;
 ptr = a0;
 do
 {
 v3 += ptr[0];
 v4 += ptr[10];
 i -= 2;
 ptr = &ptr[1 + 9];
 } while (i != 2);
 v2 = v4 + v3;
 if (v1 == v0)
 return v4 + v3 & 4294967295;
 }
 j = v0 - v1;
 p = &a0[10 * v1];
 do
 {
 v2 += *(p);
 j -= 1;
 p += 10;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: pointer_array at 0x400cd8
unsigned long long pointer_array(struct_0 **a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long v1; // x9
 unsigned long v2; // x9
 unsigned long v3; // x9

 if (a1 < 1)
 return 0;
 v0 = 0;
 if (a1 < 10)
 v1 = a1;
 else
 v1 = 10;
 do
 {
 v2 = v1;
 if (*(a0))
 v0 += (*a0)->field_0;
 } while ((a0 += 8, v3 = v2 - 1, v1 = v2 - 1, v2 != 1));
 return v0;
}


// Function: array_complex_index at 0x400d20
unsigned long long array_complex_index(unsigned long ptr, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4)
{
 unsigned long long v0; // x0

 if (((char)(a3 >> 31) & 1))
 return 4294967295;
 v0 = 4294967295;
 if (a2 > (unsigned int)a4 && a1 > (unsigned int)a3 && !((char)(a4 >> 31) & 1))
 v0 = *((int *)(ptr + ((unsigned int)a3 + a1 * (unsigned int)a4) * 4));
 return v0;
}


// Function: array_oob at 0x400d54
unsigned long long array_oob(unsigned long a0, unsigned long a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long v2; // x8
 unsigned long long i; // x11
 unsigned long long v5; // d0
 unsigned int *ptr; // x11
 unsigned long long j; // x9

 if (((char)(a1 >> 31) & 1))
 return 0;
 v0 = (unsigned int)a1 + 1;
 if (7 > (unsigned int)a1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 0xfffffff8;
 i = v1;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = 0;
 if (v1 == v0)
 return v5 & 4294967295;
 }
 ptr = (unsigned int *)(a0 + v1 * 4);
 j = v0 - v1;
 do
 {
 v2 += *(ptr);
 j -= 1;
 ptr += 1;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: test_array_types at 0x400dd8
int test_array_types()
{
 unsigned long long v67; // q0
 unsigned long long v0; // [bp-0x3d0]
 unsigned long long v1; // [bp-0x3c0]
 unsigned long long v2; // [bp-0x3b0]
 unsigned long long v3; // [bp-0x3a0]
 unsigned long long v4; // [bp-0x390]
 unsigned long long v5; // [bp-0x380]
 unsigned int result; // [bp-0x370]
 unsigned long long v7; // [bp-0x36c]
 unsigned long long v8; // [bp-0x35c]
 unsigned long long v9; // [bp-0x34c]
 unsigned long long v10; // [bp-0x33c]
 unsigned long long v11; // [bp-0x32c]
 unsigned long long v12; // [bp-0x31c]
 unsigned int flag2; // [bp-0x30c]
 unsigned long long v14; // [bp-0x308]
 unsigned long long v15; // [bp-0x2f8]
 unsigned long long v16; // [bp-0x2e8]
 unsigned long long v17; // [bp-0x2d8]
 unsigned long long v18; // [bp-0x2c8]
 unsigned long long v19; // [bp-0x2b8]
 unsigned int flag1; // [bp-0x2a8]
 unsigned long long v21; // [bp-0x2a4]
 unsigned long long v22; // [bp-0x294]
 unsigned long long v23; // [bp-0x284]
 unsigned long long v24; // [bp-0x274]
 unsigned long long v25; // [bp-0x264]
 unsigned long long v26; // [bp-0x254]
 unsigned int flag3; // [bp-0x244]
 unsigned long long v28; // [bp-0x240]
 unsigned long long v29; // [bp-0x230]
 unsigned long long v30; // [bp-0x220]
 unsigned long long v31; // [bp-0x210]
 unsigned long long v32; // [bp-0x200]
 unsigned long long v33; // [bp-0x1f0]
 unsigned int flag4; // [bp-0x1e0]
 unsigned long long flag5; // [bp-0x1d0]
 unsigned long long flag7; // [bp-0x1c8]
 unsigned long long flag8; // [bp-0x1b8]
 unsigned long long v38; // [bp-0x1a8]
 unsigned long long flag9; // [bp-0x1a0]
 unsigned long long flag10; // [bp-0x190]
 unsigned long long flag6; // [bp-0x180]
 int v42; // [bp-0x178]
 unsigned long long flag13; // [bp-0x168]
 unsigned long long flag14; // [bp-0x158]
 unsigned long long v45; // [bp-0x150]
 unsigned long long flag11; // [bp-0x140]
 unsigned long long flag17; // [bp-0x130]
 unsigned long long v48; // [bp-0x128]
 unsigned long long flag16; // [bp-0x118]
 unsigned long long flag19; // [bp-0x108]
 unsigned long long v51; // [bp-0x100]
 unsigned long long flag21; // [bp-0xf0]
 unsigned long long flag22; // [bp-0xe0]
 unsigned long long flag20; // [bp-0xd8]
 unsigned long long v55; // [bp-0xc8]
 unsigned long long flag23; // [bp-0xb8]
 unsigned long long flag15; // [bp-0xb0]
 unsigned long long v58; // [bp-0xa0]
 unsigned long long flag24; // [bp-0x90]
 unsigned long long flag12; // [bp-0x88]
 unsigned long long v61; // [bp-0x78]
 unsigned long long flag25; // [bp-0x68]
 unsigned long long flag18; // [bp-0x60]
 unsigned long long v64; // [bp-0x50]
 char *v65; // [bp-0x40]
 char v66; // [bp+0x0]

 v65 = &v66;
 puts(&g_403210);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 flag5 = 0;
 flag6 = 0;
 v38 = 0x100000000;
 v42 = 2;
 flag7 = 0;
 v48 = 0x40000000000000000;
 v51 = 0x5000000000000000000000000;
 flag8 = 0;
 v55 = 6;
 flag9 = 0;
 flag10 = 0;
 v45 = 0x300000000;
 flag11 = 0;
 flag12 = 0;
 v61 = 0x80000000000000000;
 flag13 = 0;
 flag14 = 0;
 flag15 = 0;
 v58 = 0x700000000;
 flag16 = 0;
 flag17 = 0;
 flag18 = 0;
 v64 = 0x9000000000000000000000000;
 flag19 = 0;
 flag20 = 0;
 flag21 = 0;
 flag22 = 0;
 flag23 = 0;
 flag24 = 0;
 flag25 = 0;
 printf("ARR-L1-03 (array_2d_stack): %d\n", *((int *)((char *)&v38 + 4)) + (unsigned int)flag5 + (int)v42 + *((int *)((char *)&v45 + 4)) + *((int *)((char *)&v48 + 8)) + *((int *)((char *)&v51 + 12)) + (unsigned int)v55 + *((int *)((char *)&v58 + 4)) + *((int *)((char *)&v61 + 8)) + *((int *)((char *)&v64 + 12)));
 v67 = (4294967297ULL << 32) | 4294967297ULL;
 result = 1;
 v0 = v67;
 v1 = v67;
 v2 = v67;
 v3 = v67;
 v4 = v67;
 v5 = v67;
 v7 = v67;
 v8 = v67;
 v9 = v67;
 v10 = v67;
 v11 = v67;
 v12 = v67;
 v14 = v67;
 v15 = v67;
 v16 = v67;
 v17 = v67;
 v18 = v67;
 v19 = v67;
 flag1 = 1;
 v21 = v67;
 v22 = v67;
 v23 = v67;
 v24 = v67;
 v25 = v67;
 v26 = v67;
 flag2 = 1;
 flag3 = 1;
 v28 = v67;
 v29 = v67;
 v30 = v67;
 v31 = v67;
 v32 = v67;
 v33 = v67;
 flag4 = 1;
 printf("ARR-L1-04 (array_3d): %d\n", array_3d((unsigned int *)&v0) & 4294967295);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 printf("ARR-L2-02 (array_pointer): %d\n", 100);
 printf("ARR-L2-03 (pointer_array): %d\n", 60);
 return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: ptr_single at 0x40101c
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x401028
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401038
int ptr_triple(struct_2 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x40104c
unsigned long long ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned int *cur; // x8
 unsigned long long v2; // x10
 unsigned long long v3; // x0
 unsigned long v4; // x11
 unsigned long long i; // x12
 unsigned int result; // w8
 unsigned int *v8; // x9
 unsigned int v9; // w8

 v0 = a1 - 1;
 if (a1 < 1)
 return 0;
 cur = a0;
 if (7 > (unsigned int)v0)
 {
 v2 = 0;
 v3 = 0;
 }
 else
 {
 v4 = v0 + 1;
 v2 = v4 & 8589934584;
 cur = &cur[v2];
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 v3 = 0;
 if (v4 == v2)
 return v3;
 }
 result = a1 - v2;
 do
 {
 v8 = cur + 1;
 v9 = result - 1;
 v3 += *(cur);
 cur = v8;
 result = v9;
 } while (result != 1);
 return v3;
}


// Function: ptr_offset at 0x4010d8
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x4010e0
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return __ROL__(a0 - a1, 62) & 4611686018427387903;
}


// Function: ptr_void at 0x4010ec
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


// Function: ptr_const at 0x401110
unsigned int ptr_const(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x40111c
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x401130
int ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return ((int (*)(unsigned long))a0)(a1);
}


// Function: ptr_func_complex at 0x40113c
long long ptr_func_complex(unsigned long long (*a0)(unsigned long, void*), unsigned long a1)
{
 unsigned long long v3; // x0
 int v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 *((unsigned long long *)&v0) = __dollar_d_4;
 v3 = a0(a1, &v0);
 return a0(a1, &v0);
}


// Function: ptr_cast at 0x401178
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401180
unsigned long long opaque_handle_create(unsigned long a0)
{
 return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: opaque_handle_op at 0x401188
unsigned int opaque_handle_op(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: test_pointer_types at 0x401190
int test_pointer_types()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_40322b);
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


// Function: struct_simple at 0x401294
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x4012a8
unsigned long long struct_array(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long v2; // x8
 unsigned long long i; // x8
 unsigned long long v5; // d0
 unsigned long long j; // x9
 unsigned int *ptr; // x11

 if (a1 < 1)
 return 0;
 v0 = a1;
 if (8 > a1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 0xfffffff8;
 i = v1;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = 0;
 if (v1 == v0)
 return v5 & 4294967295;
 }
 j = v0 - v1;
 ptr = (unsigned int *)(a0 + 12 * v1 + 4);
 do
 {
 v2 = ptr[1] + v2 + ptr[0] + ptr[1];
 j -= 1;
 ptr += 1;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: struct_nested at 0x401360
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x401370
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401380

int struct_with_ptr(struct_0 *p)
{
 unsigned int *ptr; // x9

 ptr = (unsigned int *)p->field_8;
 if (ptr)
 ptr = *(unsigned int **)ptr;
 return (unsigned int)ptr + p->field_0;
}


// Function: struct_bitfields at 0x401398
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // w8

 v0 = *(ptr);
 return (v0 & 1) + (v0 >> 6) + (__ROL__(v0, 31) & 2147483651 & 3) + (__ROL__(v0, 29) & 3758096391 & 7);
}


// Function: union_type at 0x4013b8
long long union_type(void* a0, unsigned int a1)
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


// Function: union_array at 0x4013e0
unsigned long long union_array(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long v2; // x8
 unsigned long long i; // x11
 unsigned long long v5; // d0
 unsigned int *ptr; // x11
 unsigned long long j; // x9

 if (a1 < 1)
 return 0;
 v0 = a1;
 if (8 > a1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 0xfffffff8;
 i = v1;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = 0;
 if (v1 == v0)
 return v5 & 4294967295;
 }
 ptr = (unsigned int *)(a0 + v1 * 4);
 j = v0 - v1;
 do
 {
 v2 += *(ptr);
 j -= 1;
 ptr += 1;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: enum_type at 0x401468
unsigned int enum_type(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: enum_switch at 0x401474
unsigned long long enum_switch(unsigned int a0)
{
 if (3 < a0)
 return 4294967197;
 return g_402c50[a0];
}


// Function: struct_func_ptr at 0x401494
int struct_func_ptr(struct_0 *a0)
{
 return ((int (*)())a0->field_8)();
}


// Function: linked_list at 0x4014a4
int linked_list(struct_0 *ptr)
{
 unsigned long long v0; // x8
 struct_0 *v1; // x0

 v0 = 0;
 if (ptr)
 {
 do
 {
 v1 = ptr->field_8;
 v0 += ptr->field_0;
 ptr = (struct_0 *)((unsigned long)v1);
 } while (ptr && ptr->field_8);
 }
 return v0;
}


// Function: doubly_linked_list at 0x4014c4
int doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v0; // x8
 struct_0 *v1; // x0

 v0 = 0;
 if (ptr)
 {
 do
 {
 v1 = ptr->field_8;
 v0 += ptr->field_0;
 ptr = v1;
 } while (ptr->field_8);
 }
 return v0;
}


// Function: binary_tree_sum at 0x4014e4
unsigned int binary_tree_sum(struct_0 *a0)
{
 unsigned long long v2; // x20
 struct_0 *ptr; // x19
 unsigned long long v4; // x0
 struct_0 *v5; // x19
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (!a0)
 return 0;
 v2 = 0;
 do
 {
 ptr = a0;
 v4 = binary_tree_sum(ptr->field_8);
 v5 = (struct_0 *)ptr->field_10;
 v2 = ptr->field_0 + v2 + v4;
 a0 = v5;
 } while (ptr->field_10);
 return v2;
}


// Function: binary_tree at 0x401538
int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x40153c
unsigned int graph_traverse(struct_3 *p)
{
 unsigned long v0; // x9
 unsigned long idx; // x10
 unsigned long long v2; // x8
 struct_4 *ptr; // x11
 unsigned long v4; // x11

 v0 = p->field_50;
 if ((unsigned int)v0 < 1)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 ptr = (struct_4 *)(&p->field_0)[idx];
 if ((&p->field_0)[idx])
 {
 do
 {
 v4 = ptr->field_8;
 v2 += *((int *)&ptr->padding_0[0]);
 ptr = (struct_4 *)v4;
 } while (ptr->field_8);
 }
 } while ((idx += 1, idx != v0));
 return v2;
}


// Function: test_composite_types at 0x401588
int test_composite_types()
{
 struct_0 *ptr; // x8
 unsigned long long v18; // x1
 struct_0 *v19; // x8
 struct_1 *p; // x8
 unsigned long long v21; // x1
 struct_1 *v22; // x8
 unsigned long long v0; // [bp-0xa0]
 unsigned long long flag3; // [bp-0x90]
 unsigned int v2; // [bp-0x80]
 char *v4; // [bp-0x78]
 unsigned long long flag2; // [bp-0x70]
 unsigned int v6; // [bp-0x68]
 unsigned long long flag1; // [bp-0x60]
 char *v8; // [bp-0x58]
 char v9; // [bp-0x50], Other Possible Types: unsigned int
 char *v10; // [bp-0x48]
 unsigned int v11; // [bp-0x40]
 char *v12; // [bp-0x38]
 unsigned int v13; // [bp-0x30]
 unsigned long long result; // [bp-0x28]
 char *v15; // [bp-0x20]
 char v16; // [bp+0x0]

 v15 = &v16;
 puts(&g_403246);
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
 ptr = (struct_0 *)&v9;
 v18 = 0;
 v9 = 10;
 v13 = 30;
 v11 = 20;
 v10 = (char *)&v11;
 v12 = (char *)&v13;
 result = 0;
 ptr = (struct_0 *)&v9;
 do
 {
 v19 = ptr->field_8;
 v18 += (unsigned long long)ptr->field_0;
 ptr = v19;
 } while (ptr && ptr->field_8);
 printf("CMP-L2-12 (linked_list): %d\n", v18);
 p = (struct_1 *)&v2;
 v21 = 0;
 v2 = 10;
 v6 = 20;
 flag1 = 0;
 v8 = (char *)&v2;
 v4 = (char *)&v6;
 flag2 = 0;
 do
 {
 v22 = (struct_1 *)((unsigned long long)p->field_8);
 v21 += (unsigned long long)p->field_0;
 p = v22;
 } while ((unsigned long long)p->field_8);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v21);
 p = (struct_1 *)&v2;
 v21 = 0;
 v2 = 10;
 v6 = 20;
 flag1 = 0;
 v8 = (char *)&v2;
 v4 = (char *)&v6;
 flag2 = 0;
 do
 {
 v22 = (struct_1 *)((unsigned long long)p->field_8);
 v21 += (unsigned long long)p->field_0;
 p = v22;
 } while ((unsigned long long)p->field_8);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v21);
 v0 = 100;
 flag3 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum((struct_0 *)&v0) & 4294967295);
 return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


// Function: main at 0x401738
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_40175c at 0x40175c
void sub_40175c()
{
 __addtf3(0, 0);
 return;
}


// Function: __addtf3 at 0x401760
unsigned long long __addtf3(unsigned long long a, unsigned long long b)
{
 return 0;
}





// Function: sub_4022f4 at 0x4022f4
void sub_4022f4()
{
 __multf3(0, 0);
 return;
}


// Function: __multf3 at 0x402300
unsigned long long __multf3(unsigned long long a, unsigned long long b)
{
 return 0;
}





// Function: __sfp_handle_exceptions at 0x402b00
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
 unsigned long long v0 = 0;

 if (((char)(a0 >> 4) & 1))
 a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
 return a0;
}


// Function: _fini at 0x402b70
long long _fini()
{
 unsigned long v0; // x0

 return v0;
}

