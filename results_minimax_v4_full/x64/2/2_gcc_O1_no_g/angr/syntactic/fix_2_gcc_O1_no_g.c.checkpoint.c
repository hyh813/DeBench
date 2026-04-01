// Angr Decompilation of 2_gcc_O1_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>

// Global struct definitions
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
 unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_3;

typedef struct struct_4 {
 struct struct_0 *field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_4;

typedef struct struct_node {
 unsigned int field_0;
 char padding_4[4];
 struct struct_node *field_8;
} struct_node;

// External declarations
extern struct_0 *g_405fe8;
extern unsigned long long g_405fb0;
extern unsigned long long g_405fb8;

// Global variable definitions
unsigned long long g_405fb0 = 0;
unsigned long long g_405fb8 = 0;
char g_403008[] = "Data Types Test Level 1\n";
char g_403454[] = "Pointer Types Test Level 2\n";
char g_4033e1[] = "Array Types Test Level 1\n";
char g_40354a[] = "Composite Types Test Level 2\n";

// CRT stub functions
void deregister_tm_clones() {}
void register_tm_clones() {}

// Helper function for enum_switch
static int _ccall(int a0, int a1, unsigned int a2, int a3, unsigned long a4)
{
 return 0;
}


// Function: sub_401020 at 0x401020

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405fb0;
 g_405fb8 = v0;
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



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010c5 at 0x4010c5
void sub_4010c5()
{
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x401189
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_int at 0x401191
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: complex_callback at 0x40119a
char complex_callback(unsigned int *ptr, unsigned long long *a1)
{
 *(ptr) = *(ptr) + 10;
 return *(a1);
}


// Function: process_char at 0x4011ac
long long process_char(unsigned int a0)
{
 return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: process_short at 0x4011bd
int process_short(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: process_long at 0x4011c5
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x4011ce
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x4011da
double process_float()
{
 return 1.5;
}


// Helper functions for floating point
static double MulV(double a, unsigned long long b)
{
 return a * *(double *)&b;
}

static double AddV(double a, unsigned long long b)
{
 return a + *(double *)&b;
}

// Function: process_double at 0x4011ef
double process_double()
{
 int v1; // xmm0

 return AddV(MulV(v1, 0x3fe0000000000000), 4591870180066957722);
}


// Function: process_ld at 0x401204
void process_ld()
{
}


// Function: process_bool at 0x401213
long long process_bool(unsigned int a0)
{
 return (a0 <= 0 ? 0 : ~(a0) & 1) & 1;
}


// Function: const_param at 0x40122c
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x401236
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x401241
extern char g_403008[];

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


// Function: array_1d_stack at 0x4013f1
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int *ptr; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 += *(ptr);
 ptr += 1;
 } while (ptr != &a0[1 + a1 + 1]);
 return v1;
}


// Function: array_string at 0x40141e
unsigned int array_string(char *a0)
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
 return v2;
}


// Function: array_2d_stack at 0x401443
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


// Function: array_3d at 0x40145f
unsigned long long array_3d(unsigned int *a0)
{
 unsigned int *i; // rcx
 unsigned long long v2; // rax
 unsigned int *cur; // rdx

 i = a0 + 25;
 v2 = 0;
 do
 {
 cur = i + 5;
 do
 {
 v2 = (unsigned int)v2 + cur[0] + cur[1] + cur[2] + cur[3] + cur[4];
 cur += 1;
 } while (cur != i);
 i += 5;
 } while (i != a0 + 150);
 return v2;
}


// Function: array_vla at 0x401498
unsigned int array_vla(unsigned int a0, unsigned int *a1)
{
 unsigned int v1; // edx
 unsigned int *ptr; // rax

 if (a0 <= 0)
 return 0;
 v1 = 0;
 ptr = a1;
 do
 {
 v1 += *(ptr);
 ptr += 1;
 } while (ptr != &a1[1 + a0 + 1]);
 return v1;
}


// Function: array_pointer at 0x4014c5
unsigned int array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int *ptr; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 += *(ptr);
 ptr += 10;
 } while (ptr != &a0[10 + 10 * a1 + 10]);
 return v1;
}


// Function: pointer_array at 0x4014f6
unsigned int pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned long long idx; // rax
 unsigned int v2; // ecx

 if (a1 <= 0)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 if (*((long long *)(a0 + idx * 8)))
 v2 += *((int *)*((long long *)(a0 + idx * 8)));
 } while ((idx += 1, (a1 <= 10 ? a1 : 10) > (unsigned int)idx));
 return v2;
}


// Function: array_complex_index at 0x401535
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


// Function: array_oob at 0x401565
unsigned int array_oob(unsigned int *a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int *ptr; // rax

 if (a1 < 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 += *(ptr);
 ptr += 1;
 } while (ptr != &a0[a1 + 1]);
 return v1;
}


// Function: test_array_types at 0x401591
extern char g_4033e1[];

long long test_array_types()
{
 unsigned long long index; // rax
 unsigned long v41; // fs
 char *iter; // rsi
 unsigned int i; // ecx
 unsigned long long pos; // rax
 void* j; // rdx
 void* cur; // rax
 unsigned int v0; // [bp-0x550]
 unsigned int v1; // [bp-0x54c]
 unsigned int v2; // [bp-0x548]
 unsigned int *v3; // [bp-0x544]
 unsigned int v4; // [bp-0x540]
 unsigned int v5; // [bp-0x53c]
 unsigned int result[10]; // [bp-0x538]
 unsigned int v7; // [bp-0x534]
 unsigned int v8; // [bp-0x530]
 unsigned int v9; // [bp-0x52c]
 unsigned int v10; // [bp-0x528]
 char *v11; // [bp-0x518]
 char *v12; // [bp-0x510]
 char *v13; // [bp-0x508]
 char v14[14]; // [bp-0x500]
 unsigned long v42; // [bp-0x4c8]
 unsigned int v15; // [bp-0x484]
 unsigned int v16; // [bp-0x480]
 unsigned int v17; // [bp-0x47c]
 unsigned int v18; // [bp-0x478]
 unsigned int flag1[10]; // [bp-0x470]
 unsigned int v19; // [bp-0x450]
 unsigned int v20; // [bp-0x428]
 unsigned int v19_b; // [bp-0x400]
 unsigned int v20_b; // [bp-0x3d8]
 unsigned int v21[100]; // [bp-0x3a8]
 unsigned int v22[25]; // [bp-0x218]
 char v23; // [bp-0x1b4]
 char v24[6]; // [bp-0x16]
 unsigned long v25; // [bp-0x10]
 char v27; // [bp+0x40]

 puts(&g_4033e1);
 result[0] = 1;
 v8 = 3;
 v9 = 4;
 v10 = 5;
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&result, 5) & 4294967295);
 strncpy(v24, "hello", 5);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", array_string(&v24) & 4294967295);
 iter = &v21;
 i = 0;
 do
 {
 pos = 0;
 do
 {
 } while ((*((unsigned int *)&iter[4 * pos]) = (i == (unsigned int)pos ? (unsigned int)pos : 0), pos += 1, pos != 10));
 i += 1;
 iter += 40;
 } while (i != 10);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v21) & 4294967295);
 j = &v23;
 do
 {
 cur = j - 100;
 do
 {
 *((unsigned int *)cur) = 1;
 *((unsigned int *)&cur[4]) = 1;
 *((unsigned int *)&cur[8]) = 1;
 *((unsigned int *)&cur[12]) = 1;
 *((unsigned int *)&cur[16]) = 1;
 cur += 20;
 } while (cur != j);
 j += 100;
 } while (j != &v27);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v22) & 4294967295);
 *((unsigned int *)v3) = 10;
 v4 = 20;
 v5 = 30;
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v3) & 4294967295);
 flag1[0] = 0;
 v17 = 10;
 v18 = 20;
 v19 = 30;
 v20 = 40;
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(flag1, 5) & 4294967295);
 v0 = 10;
 v1 = 20;
 v2 = 30;
 memset(v14, 0, 56);
 v11 = &v0;
 v12 = &v1;
 v13 = &v2;
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array(&v11, 3) & 4294967295);
 index = 0;
 do
 {
 *((unsigned int *)((char *)&v42 + 4 * index)) = index;
 index += 1;
 } while (index != 20);
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v15));
 return v25 - *((long long *)(40 + v41));
}


// Function: ptr_single at 0x4018a6
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x4018b0
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x4018bd
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: ptr_increment at 0x4018cd
unsigned long long ptr_increment(unsigned int *a0, unsigned int a1)
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
 ptr += 1;
 } while (ptr != &a0[a1]);
 return v1;
}


// Function: ptr_offset at 0x4018f2
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x4018fd
int ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x40190b
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


// Function: ptr_const at 0x401925
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x40192e
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40193a
long long ptr_func_simple(long long (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: ptr_func_complex at 0x40194e
long long ptr_func_complex(long long (*a0)(unsigned int, char *, unsigned int, char *), unsigned long a1)
{
 unsigned long v0; // [bp-0x28]
 unsigned long long result; // [bp-0x20]

 v0 = "test";
 result = 0;
 return a0(a1, (char *)&v0, 0, "test");
}


// Function: ptr_cast at 0x40199f
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x4019a6
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x4019ae
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x4019b6
extern char g_403454[];

long long test_pointer_types()
{
 unsigned long v15; // fs
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 char *v2; // [bp-0x38]
 struct_0 **v3; // [bp-0x30]
 unsigned int result; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned long v9; // [bp-0x10]

 puts(&g_403454);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v0 = 5;
 v2 = &v0;
 v3 = &v2;
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple(&v3) & 4294967295);
 result = 1;
 v5 = 2;
 v6 = 3;
 v7 = 4;
 v8 = 5;
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, 5) & 4294967295);
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
 return v9 - *((long long *)(40 + v15));
}


// Function: struct_simple at 0x401bea
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x401bf7
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned long long v1; // rcx
 unsigned int *ptr; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 += ptr[1] + ptr[0] + ptr[2];
 ptr += 1;
 } while (ptr != &a0[3 + 3 * a1 + 3]);
 return v1;
}


// Function: struct_nested at 0x401c30
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x401c3a
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401c45
int struct_with_ptr(struct_0 *idx)
{
 unsigned int v1; // edx

 v1 = 0;
 if (idx->field_8)
 v1 = idx->field_8->field_0;
 return idx->field_0 + v1;
}


// Function: struct_bitfields at 0x401c5e
int struct_bitfields(void* ptr)
{
 char v1; // dl
 unsigned int v2; // ecx

 v1 = *((char *)ptr);
 v2 = v1;
 return (v1 & 1) + ((v2 & 0xffffff00 | (char)v2 >> 1) & 3) + (v1 >> 3 & 7) + (*((short *)ptr) >> 6);
}


// Function: union_type at 0x401c88
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


// Function: union_array at 0x401ca1
unsigned int union_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v1; // edx
 unsigned int *ptr; // rax

 if (a1 <= 0)
 return 0;
 v1 = 0;
 ptr = a0;
 do
 {
 v1 += *(ptr);
 ptr += 1;
 } while (ptr != &a0[1 + a1 + 1]);
 return v1;
}


// Function: enum_type at 0x401cce
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x401cd8
unsigned long long enum_switch(unsigned long a0)
{
 unsigned long v1; // cc_ndep

 if ((unsigned int)a0 == 2)
 {
 return 50;
 }
 else if ((char)_ccall(6, 7, a0 & 4294967295, 2, v1))
 {
 return -(0 < (unsigned int)a0) & 100;
 }
 else if ((unsigned int)a0 == 3)
 {
 return 4294967295;
 }
 else
 {
 return 4294967197;
 }
}


// Function: struct_func_ptr at 0x401d02
long long struct_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: linked_list at 0x401d17
unsigned long long linked_list(struct_0 *ptr)
{
 unsigned long long v1; // rax

 if (!ptr)
 return 0;
 v1 = 0;
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 return v1;
}


// Function: doubly_linked_list at 0x401d37
unsigned long long doubly_linked_list(struct_0 *ptr)
{
 unsigned long long v1; // rax

 if (!ptr)
 return 0;
 v1 = 0;
 do
 {
 v1 = (unsigned int)v1 + ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 return v1;
}


// Function: binary_tree_sum at 0x401d57
unsigned long long binary_tree_sum(struct_0 *a0)
{
 unsigned long long v2; // rbx
 unsigned int v3; // eax
 unsigned long long v4; // rax
 unsigned long long v0; // [bp-0x10]

 if (!a0)
 return 0;
 v0 = v2;
 v3 = binary_tree_sum(a0->field_8);
 v4 = binary_tree_sum(a0->field_10);
 return v4 + v3 + a0->field_0;
}


// Function: binary_tree at 0x401d8e
unsigned long long binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401da0
unsigned int graph_traverse(struct_4 *a0)
{
 unsigned int v1; // edx
 struct_4 *v2; // rcx
 struct_4 *p; // rcx
 struct_2 *ptr; // rax
 struct_4 *v6; // rcx

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


// Function: test_composite_types at 0x401de1
extern char g_40354a[];

long long test_composite_types()
{
 unsigned long v50; // fs
 char v0; // [bp-0x160]
 unsigned short v1; // [bp-0x160]
 unsigned short v2; // [bp-0x160]
 unsigned int v3; // [bp-0x15c]
 unsigned int v4; // [bp-0x158]
 unsigned long long flag4; // [bp-0x150]
 unsigned int v6; // [bp-0x148]
 char *v7; // [bp-0x140]
 unsigned int v8; // [bp-0x138]
 unsigned long long v9; // [bp-0x130]
 unsigned int result; // [bp-0x128]
 unsigned long long flag10; // [bp-0x120]
 unsigned int v12; // [bp-0x118]
 unsigned long long flag8; // [bp-0x110]
 unsigned long long flag9; // [bp-0x108]
 unsigned int v15; // [bp-0xf4]
 unsigned int v16; // [bp-0xf0]
 unsigned int v17; // [bp-0xec]
 unsigned int flag1; // [bp-0xe8]
 unsigned int flag2; // [bp-0xe4]
 unsigned int flag3; // [bp-0xe0]
 unsigned int v21; // [bp-0xdc]
 unsigned int v22; // [bp-0xd8]
 unsigned int v23; // [bp-0xd4]
 unsigned int v24; // [bp-0xc8]
 char *v25; // [bp-0xc0]
 char v26; // [bp-0xb8], Other Possible Types: unsigned int
 char *v27; // [bp-0xb0]
 char v28; // [bp-0xa8], Other Possible Types: unsigned int
 unsigned long long flag5; // [bp-0xa0]
 unsigned int v30; // [bp-0x98]
 char *v31; // [bp-0x90]
 unsigned long long flag6; // [bp-0x88]
 char v33; // [bp-0x80], Other Possible Types: unsigned int
 unsigned long long flag7; // [bp-0x78]
 char *v35; // [bp-0x70]
 char *v36; // [bp-0x68]
 char v37; // [bp-0x60]
 unsigned int v38; // [bp-0x18]
 unsigned long v39; // [bp-0x10]

 puts(&g_40354a);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 *((unsigned int *)flag1) = 1;
 flag2 = 1;
 flag3 = 1;
 v21 = 2;
 v22 = 2;
 v23 = 2;
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", struct_array(&flag1, 2) & 4294967295);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v4 = 20;
 flag4 = 0;
 v6 = 10;
 v7 = &v4;
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v6) & 4294967295);
 *((char *)&v2) = v0 & 4294967233 | 29;
 v2 = v1 & 63 & 255 | ((char)((v1 & 63) >> 8) | 25) * 0x100;
 v3 &= 0xfff00000;
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v2) & 4294967295);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v15 = 10;
 v16 = 20;
 v17 = 30;
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", union_array(&v15, 3) & 4294967295);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v8 = 10;
 v9 = process_int;
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(process_int, v8) & 4294967295);
 v24 = 10;
 v25 = &v26;
 v26 = 20;
 v27 = &v28;
 v28 = 30;
 flag5 = 0;
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", linked_list(&v24) & 4294967295);
 v30 = 10;
 v31 = &v33;
 flag6 = 0;
 v33 = 20;
 flag7 = 0;
 v35 = &v30;
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v30) & 4294967295);
 v12 = 100;
 flag8 = 0;
 flag9 = 0;
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v12) & 4294967295);
 result = 1;
 flag10 = 0;
 memset(&v37, 0, 80);
 v36 = &result;
 v38 = 2;
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v36) & 4294967295);
 return v39 - *((long long *)(40 + v50));
}


// Function: main at 0x40221b
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


