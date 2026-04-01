/* Global variable declarations */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* String literal definitions */
static const char g_402004[] = "Test Data Types";
static const char g_40216f[] = "Test Array Types";
static const char g_402285[] = "Test Pointer Types";
static const char g_40241e[] = "Test Composite Types";
static const char CSWTCH_61[] = {50, 100, 150, 200};

/* Function prototypes */
long long test_pointer_types(unsigned long p1, unsigned long p2, unsigned long p3, unsigned long p4, unsigned long p5, unsigned long p6);
long long test_composite_types(unsigned long p1, unsigned long p2, unsigned long p3, unsigned long p4, unsigned long p5, unsigned long p6);

/* Struct definitions */
typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_8;
 struct struct_0 *field_10;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

void *(*g_403fe8)(void);

extern unsigned long g_403fb8;

static unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_403fe8;
 if (g_403fe8)
 v1 = g_403fe8();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403fb0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403fb0;
 return;
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
 unsigned long long v7; // rax

 test_data_types_l1();
 test_array_types(v1, v2, v3, v4, v5, v6, v7);
 test_pointer_types(v1, v2, v3, v4, v5, v6);
 test_composite_types(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_4010c5 at 0x4010c5
void sub_4010c5(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010f5 at 0x4010f5
void sub_4010f5()
{
 /* unsupported instruction */
}


// Function: sub_4010f6 at 0x4010f6
void sub_4010f6()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */











// Function: sub_4011a5 at 0x4011a5
void sub_4011a5()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x4011b9
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_int at 0x4011c1
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: complex_callback at 0x4011ca
long long complex_callback(unsigned int *ptr, unsigned long long *a1)
{
 *(ptr) = *(ptr) + 10;
 return *(a1);
}


// Function: process_char at 0x4011db
long long process_char(unsigned int a0)
{
 unsigned long v1; // rax

 v1 = a0;
 if ((a0 - 65 & 255) <= 25)
 v1 = a0 + 32;
 return v1;
}


// Function: process_short at 0x4011ed
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: process_long at 0x4011f5
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x4011fe
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x40120a
double process_float()
{
 return 1.5;
}


// Function: process_double at 0x40121f
double process_double()
{
 return 1.5;
}


// Function: process_ld at 0x401234
void process_ld()
{
 // VEX IR instructions removed - original implementation not decompilable
 return;
}


// Function: process_bool at 0x401243
unsigned int process_bool(unsigned int a0)
{
 unsigned int v1; // eax

 v1 = 0;
 if (a0 > 0)
 v1 = ~(a0) & 1;
 return v1 & 1;
}


// Function: const_param at 0x401258
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x401262
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x40126d
int test_data_types_l1()
{
 unsigned long v6; // rdx
 unsigned long long v0; // [bp-0x38]
 unsigned long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 char v3; // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 puts(&g_402004);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", v6);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", v6);

 v1 = *((int *)&v3);
 v0 = v2;
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n");
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 v4 = 10;
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v4 * 2);
}


// Function: array_1d_stack at 0x4013ec
unsigned int array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 idx = 0;
 for (v2 = 0; a1 > (unsigned int)idx; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 return v2;
}


// Function: array_string at 0x401406
int array_string(unsigned long a0)
{
 unsigned long long v1; // rax
 unsigned long long v2; // rax
 unsigned long long v3; // rax

 v1 = 0;
 do
 {
 v3 = v1 + 1;
 v1 = v3;
 } while (*((char *)(a0 + v1 - 1)));
 return v2;
}


// Function: array_2d_stack at 0x40141d
unsigned long long array_2d_stack(unsigned int *a0)
{
 unsigned long long v1; // rax
 unsigned int *ptr; // rdi

 v1 = 0;
 ptr = a0;
 do
 {
 v1 = (unsigned int)v1 + *(ptr);
 ptr += 11;
 } while (ptr != a0 + 110);
 return v1;
}


// Function: array_3d at 0x401436
unsigned long long array_3d(unsigned int *a0)
{
 unsigned long long v1; // rax
 unsigned int *i; // rdi
 unsigned int *v3; // rdi
 unsigned int *p; // rdi
 unsigned int *ptr; // rdi

 v1 = 0;
 i = a0;
 do
 {
 v3 = i;
 p = v3;
 do
 {
 ptr = p + 1;
 v1 = (unsigned int)v1 + p[0] + ptr[4] + ptr[3] + ptr[2] + ptr[1];
 p = ptr;
 } while (p != v3 + 5);
 i = ptr;
 } while (a0 + 125 != i);
 return v1;
}


// Function: array_vla at 0x401464
unsigned int array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 idx = 0;
 for (v2 = 0; a0 > (unsigned int)idx; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 return v2;
}


// Function: array_pointer at 0x40147e
unsigned int array_pointer(unsigned long ptr, unsigned int a1)
{
 unsigned long long v1; // rax
 unsigned int v2; // r8d
 unsigned long long idx; // rax
 unsigned long long v4; // rax

 v1 = 0;
 v2 = 0;
 while (true)
 {
 idx = v1;
 if (a1 <= (unsigned int)idx)
 break;
 v4 = idx + 1;
 v2 += *((int *)(ptr + idx * 40));
 v1 = v4;
 }
 return v2;
}


// Function: pointer_array at 0x40149c
unsigned int pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 idx = 0;
 for (v2 = 0; (10 < a1 ? 10 : a1) > (unsigned int)idx; idx += 1)
 {
 if (*((long long *)(a0 + idx * 8)))
 v2 += *((int *)*((long long *)(a0 + idx * 8)));
 }
 return v2;
}


// Function: array_complex_index at 0x4014c8
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


// Function: array_oob at 0x4014ef
unsigned int array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 idx = 0;
 for (v2 = 0; a1 >= (unsigned int)idx; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 return v2;
}


// Function: test_array_types at 0x401509
int test_array_types()
{
 char *v25; // rsi
 unsigned int v34; // ebx
 unsigned int *cur; // rdi
 unsigned long long v39; // rcx
 unsigned long long idx; // rax
 unsigned long v42; // fs
 char *iter; // rcx
 unsigned int i; // edx
 unsigned long long index; // rax
 unsigned int *j; // rdx
 unsigned int m; // ebx
 unsigned int *p; // rax
 unsigned int *ptr; // rax
 char v0; // [bp-0x534], Other Possible Types: unsigned int
 char v1; // [bp-0x530], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x52c]
 unsigned long long v3; // [bp-0x528]
 unsigned int v4; // [bp-0x520]
 unsigned long long v5; // [bp-0x51c]
 unsigned long long v6; // [bp-0x514]
 unsigned int v7; // [bp-0x50c]
 char *v8; // [bp-0x508]
 char *v9; // [bp-0x500]
 char *v10; // [bp-0x4f8]
 unsigned int v11; // [bp-0x4f0]
 unsigned long v43; // [bp-0x4b4]
 char v12; // [bp-0x470]
 unsigned int result; // [bp-0x464]
 unsigned int v14; // [bp-0x43c]
 unsigned int v15; // [bp-0x414]
 unsigned int v16; // [bp-0x3ec]
 unsigned int v17; // [bp-0x3c4]
 unsigned int v18[100]; // [bp-0x39c]
 unsigned int v19; // [bp-0x20c]
 char v20; // [bp-0x18]
 char v21[6]; // [bp-0x16]
 unsigned long v22; // [bp-0x10]

 puts(&g_40216f);
 v5 = 8589934593;
 v6 = 17179869187;
 v7 = 5;
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&v5, 5) & 4294967295);
 strncpy(v21, "hello", 5);
 array_string(&v21);
 __printf_chk(1, v25);
 iter = &v18;
 i = 0;
 do
 {
 index = 0;
 do
 {
 } while ((*((unsigned int *)&iter[4 * index]) = (i != (unsigned int)index ? 0 : (unsigned int)index), index += 1, index != 10));
 i += 1;
 iter += 40;
 } while (i != 10);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v18) & 4294967295);
 p = &v19;
 do
 {
 m = 5;
 do
 {
 p[0] = 1;
 ptr = p + 1;
 ptr[4] = 1;
 ptr[3] = 1;
 ptr[2] = 1;
 ptr[1] = 1;
 m -= 1;
 p = ptr;
 } while (m != 1);
 j += 5;
 } while (&v20 != j);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v19) & 4294967295);
 v3 = 85899345930;
 v4 = 30;
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v3) & 4294967295);
 result = 0;
 v14 = 10;
 v15 = 20;
 v16 = 30;
 v17 = 40;
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(&result, 5) & 4294967295);
 cur = &v11;
 for (v39 = 14; v39; cur += 1)
 {
 v39 -= 1;
 *(cur) = v34;
 }
 v8 = &v0;
 v9 = &v1;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v10 = &v2;
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array(&v8, 3) & 4294967295);
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v43 + 4 * idx)) = idx;
 idx += 1;
 } while (idx != 20);
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v12));
 return v22 - *((long long *)(40 + v42));
}


// Function: ptr_single at 0x4017b6
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x4017c0
int ptr_double(struct_0 *a0)
{
 return a0->field_0 + 5;
}


// Function: ptr_triple at 0x4017cd
int ptr_triple(struct_0 *a0)
{
 return a0->field_0 + 1;
}


// Function: ptr_increment at 0x4017dc
unsigned int ptr_increment(unsigned long ptr, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 idx = 0;
 for (v2 = 0; a1 > (unsigned int)idx; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 return v2;
}


// Function: ptr_offset at 0x4017f6
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x401801
int ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x40180f
unsigned long long ptr_void(void* ptr, unsigned int a1)
{
 unsigned long long v1; // rax

 if (!a1)
 return *((int *)ptr);
 v1 = 4294967295;
 if (a1 == 1)
 v1 = *((char *)ptr);
 return v1;
}


// Function: ptr_const at 0x401825
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x40182e
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40183a
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
 typedef long long (*func_t)(unsigned long, unsigned long);
 return ((func_t)a0)(a0, a1);
}


// Function: ptr_func_complex at 0x401845
typedef long long (*func_t)(unsigned int *, unsigned long long *);
long long ptr_func_complex(func_t a0, unsigned long a1)
{
 unsigned long long v0; // [bp-0x20]
 unsigned long long result; // [bp-0x18]

 result = 0;
 v0 = "test";
 return a0((unsigned int *)a1, &v0);
}


// Function: ptr_cast at 0x401898
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x40189f
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x4018a7
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x4018af
long long test_pointer_types(unsigned long p1, unsigned long p2, unsigned long p3, unsigned long p4, unsigned long p5, unsigned long p6)
{
 char *v9; // rsi
 unsigned long v13; // fs
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 char *v2; // [bp-0x38]
 struct_0 **v3; // [bp-0x30]
 unsigned long long v4; // [bp-0x24]
 unsigned long long v5; // [bp-0x1c]
 unsigned int v6; // [bp-0x14]
 unsigned long v7; // [bp-0x10]

 (void)p1; (void)p2; (void)p3; (void)p4; (void)p5; (void)p6;

 puts(&g_402285);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v0 = 5;
 v2 = &v0;
 v3 = &v2;
 ptr_triple(&v3);
 __printf_chk(1, v9);
 v4 = 8589934593;
 v5 = 17179869187;
 v6 = 5;
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&v4, 5) & 4294967295);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5) & 4294967295);
 v1 = 5;
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v1) & 4294967295);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return v7 - *((long long *)(40 + v13));
}


// Function: struct_simple at 0x401ab7
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x401ac4
int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned long long v2; // r8
 unsigned int *ptr; // rdi
 unsigned int *p; // rdi

 v1 = 0;
 v2 = 0;
 while (true)
 {
 ptr = a0;
 if (v1 >= a1)
 break;
 v1 += 1;
 p = ptr + 1;
 v2 += ptr[1] + ptr[0] + p[1];
 a0 = p;
 }
 return v2;
}


// Function: struct_nested at 0x401ae8
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x401af2
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401afd
int struct_with_ptr(struct_0 *idx)
{
 unsigned int v1; // edx

 v1 = 0;
 if (idx->field_10)
   v1 = idx->field_10->field_0;
 return idx->field_0 + v1;
}


// Function: struct_bitfields at 0x401b13
int struct_bitfields(void* ptr)
{
 unsigned int v1; // edx
 unsigned int v2; // ecx

 v2 = v1 & 0xffffff00 | *((char *)ptr);
 return (v2 & 1) + ((v2 & 0xffffff00 | (char)v2 >> 1) & 3) + ((v2 & 0xffffff00 | *((char *)ptr) >> 3) & 7) + ((short)*((int *)ptr) >> 6);
}


// Function: union_type at 0x401b3b
int union_type(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((int *)a0);
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x401b53
unsigned int union_array(unsigned long ptr, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d

 idx = 0;
 for (v2 = 0; a1 > (unsigned int)idx; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 return v2;
}


// Function: enum_type at 0x401b6d
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x401b75
unsigned long long enum_switch(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 4294967197;
 if (a0 <= 3)
 v1 = (&CSWTCH_61)[a0];
 return v1;
}


// Function: struct_func_ptr at 0x401b91
long long struct_func_ptr(unsigned int *a0)
{
 // field_8 is used as a function pointer in the original code
 return ((long long (*)(unsigned int *))a0[2])(a0);
}


// Function: linked_list at 0x401b9d
unsigned long long linked_list(struct_0 *cur)
{
 unsigned long long v1; // rax

 for (v1 = 0; cur; cur = cur->field_8)
 {
 v1 = (unsigned int)v1 + cur->field_0;
 }
 return v1;
}


// Function: doubly_linked_list at 0x401bb1
unsigned long long doubly_linked_list(struct_0 *cur)
{
 unsigned long long v1; // rax

 for (v1 = 0; cur; cur = cur->field_8)
 {
 v1 = (unsigned int)v1 + cur->field_0;
 }
 return v1;
}


// Function: binary_tree_sum at 0x401bc5
int binary_tree_sum(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
 unsigned long long v2; // r12
 struct_0 *ptr; // rbx
 unsigned int v4; // eax
 struct_0 *v5; // rbx
 unsigned long long v0; // [bp-0x18]

 v2 = 0;
 v0 = a3;
 while (true)
 {
 ptr = a0;
 if (!ptr)
 break;
 v4 = binary_tree_sum(ptr->field_8, a1, a2, a3);
 v5 = ptr->field_10;
 v2 += v4 + ptr->field_0;
 a0 = v5;
 }
 return v2;
}


// Function: binary_tree at 0x401bf4
int binary_tree(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
 return binary_tree_sum(a0, a1, a2, a3);
}


// Function: graph_traverse at 0x401bfa
unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned long long idx; // rax
 unsigned int v2; // r8d
 unsigned long cur; // rdx

 idx = 0;
 for (v2 = 0; (int)ptr[10] > (unsigned int)idx; idx += 1)
 {
 for (cur = ptr[idx]; cur; cur = *((long long *)(cur + 8)))
 {
 v2 += *((int *)cur);
 }
 }
 return v2;
}


// Function: test_composite_types at 0x401c25
long long test_composite_types(unsigned long p1, unsigned long p2, unsigned long p3, unsigned long p4, unsigned long p5, unsigned long p6)
{
 char *v35; // rsi
 unsigned long long v38; // rdx
 unsigned long long v39; // rcx
 unsigned int *cur; // rdi
 unsigned long long v41; // rcx
 unsigned long v42; // fs
 unsigned long v0; // [bp-0x150], Other Possible Types: unsigned long long
 unsigned int v1; // [bp-0x148]
 unsigned long long flag1; // [bp-0x140]
 unsigned int v3; // [bp-0x138]
 char *v4; // [bp-0x130]
 unsigned int v5; // [bp-0x128]
 unsigned long long v6; // [bp-0x120]
 unsigned int result; // [bp-0x118]
 unsigned long long flag7; // [bp-0x110]
 unsigned int v9; // [bp-0x108]
 unsigned long long flag5; // [bp-0x100]
 unsigned long long flag6; // [bp-0xf8]
 unsigned long long v12; // [bp-0xec]
 unsigned int v13; // [bp-0xe4]
 unsigned long long v14; // [bp-0xe0]
 unsigned long long v15; // [bp-0xd8]
 unsigned long long v16; // [bp-0xd0]
 unsigned int v17; // [bp-0xc8]
 char *v18; // [bp-0xc0]
 char v19; // [bp-0xb8], Other Possible Types: unsigned int
 char *v20; // [bp-0xb0]
 char v21; // [bp-0xa8], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0xa0]
 unsigned int v23; // [bp-0x98]
 char *v24; // [bp-0x90]
 unsigned long long flag3; // [bp-0x88]
 char v26; // [bp-0x80], Other Possible Types: unsigned int
 unsigned long long flag4; // [bp-0x78]
 char *v28; // [bp-0x70]
 char *v29; // [bp-0x68]
 unsigned int v30; // [bp-0x60]
 unsigned int v31; // [bp-0x18]
 unsigned long v32; // [bp-0x10]

 puts(&g_40241e);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 v14 = 4294967297;
 v15 = 8589934593;
 v16 = 8589934594;
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", struct_array(&v14, 2) & 4294967295);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v1 = 20;
 flag1 = 0;
 v3 = 10;
 v4 = &v1;
 struct_with_ptr(&v3);
 __printf_chk(1, v35);
 v0 = 0xfff00000ffff0000 & v0 | 6429;
 struct_bitfields(&v0);
 __printf_chk(1, v35);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v12 = 85899345930;
 v13 = 30;
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", union_array(&v12, 3) & 4294967295);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v5 = 10;
 v6 = process_int;
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v5) & 4294967295);
 v17 = 10;
 v18 = &v19;
 v19 = 20;
 v20 = &v21;
 v21 = 30;
 flag2 = 0;
 linked_list(&v17);
 __printf_chk(1, v35);
 v23 = 10;
 v28 = &v23;
 v24 = &v26;
 flag3 = 0;
 v26 = 20;
 flag4 = 0;
 doubly_linked_list(&v23);
 __printf_chk(1, v35);
 v9 = 100;
 flag5 = 0;
 flag6 = 0;
 binary_tree_sum(&v9, "CMP-L2-14 (binary_tree): %d\n", v38, v39);
 __printf_chk(1, v35);
 cur = &v30;
 for (v41 = 20; v41; cur += 1)
 {
 v41 -= 1;
 *(cur) = 0;
 }
 result = 1;
 flag7 = 0;
 v29 = &result;
 v31 = 2;
 graph_traverse(&v29);
 __printf_chk(1, v35);
 return v32 - *((long long *)(40 + v42));
}



/* CRT stub function _fini removed by preprocessor */


