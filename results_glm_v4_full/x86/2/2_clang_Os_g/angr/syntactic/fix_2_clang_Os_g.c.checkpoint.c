// Angr Decompilation of 2_clang_Os_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */

typedef void (*func_ptr_t)(void);

/* Forward declaration of struct_0 */
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

/* Forward declaration for complex function pointer type */
typedef int (*complex_func_t)(unsigned int, void*);

extern func_ptr_t g_404ff0;

/* String constants */
char g_4025bf[] = "Testing data types L1";
char g_4025e0[] = "Testing array types L1";
char g_4025fb[] = "Testing pointer types L2";
char g_402616[] = "Testing composite types L1";

/* Global function pointers */
func_ptr_t g_404ff0 = NULL;
complex_func_t g_404f10 = NULL;

/* Function declarations */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_ctors_aux(void);

void __init_user()
{
 if (g_404ff0)
 g_404ff0();
 return;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401076 at 0x401076
void sub_401076()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010ab at 0x4010ab
void sub_4010ab()
{
 return;
}


// Function: sub_4010ac at 0x4010ac
void sub_4010ac()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4010b0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4010b4 at 0x4010b4
void sub_4010b4()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones()
{
}



// Function: sub_4010f3 at 0x4010f3
void sub_4010f3()
{
}


// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void register_tm_clones()
{
}


// Function: sub_401147 at 0x401147
void sub_401147()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4011e9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4011ed
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4011f1 at 0x4011f1
void sub_4011f1(unsigned int a0)
{
 process_char(a0);
 return;
}


// Function: process_char at 0x4011f4
int process_char(unsigned int a0)
{
 char c = (char)a0;
 if (c >= 'A' && c <= 'Z')
 return c + 32;
 return a0;
}


// Function: process_short at 0x40120a
int process_short(unsigned short a0, unsigned short a1)
{
 return a1 + a0;
}


// Function: process_int at 0x401215
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: process_long at 0x40121d
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x401224
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x40123a
float process_float(float a0)
{
 return a0 * 2.0f;
}


// Function: process_double at 0x401257
double process_double(double a0)
{
 return a0 * 2.0;
}


// Function: process_ld at 0x401274
long double process_ld(long double a0)
{
 return a0 * 2.0L;
}


// Function: process_bool at 0x40127f
unsigned int process_bool(char a0)
{
 return !a0;
}


// Function: const_param at 0x401290
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x40129a
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4012a3
int test_data_types_l1()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x10]

 puts(&g_4025bf);
 v0 = process_char('A');
 printf("DT-L1-01 (process_char): %c\n", (char)v0);
 v0 = process_char('B');
 printf("DT-L1-01 (process_char): %c\n", (char)v0);
 v0 = process_short(100, 200);
 printf("DT-L1-02 (process_short): %d\n", v0);
 v0 = process_int(11);
 printf("DT-L1-03 (process_int): %d\n", v0);
 v0 = process_long(200);
 printf("DT-L1-04 (process_long): %ld\n", v0);
 v0 = process_ll(10000, 0);
 printf("DT-L1-05 (process_ll): %lld\n", (long long)v0);
 printf("DT-L1-06 (process_float): %.2f\n", process_float(2.5f));
 printf("DT-L1-07 (process_double): %.2f\n", process_double(3.5));
 printf("DT-L1-08 (process_ld): %.2Lf\n", process_ld(1.5L));
 v0 = process_bool(1);
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = process_bool(0);
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = process_bool(0);
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v2 = 15;
 v0 = const_param(&v2);
 printf("DT-L1-10 (const_param): %d\n", v0);
 v2 = 10;
 v0 = volatile_access(&v2);
 return printf("DT-L1-11 (volatile_access): %d\n", v0);
}


// Function: array_1d_stack at 0x4013d6
unsigned int array_1d_stack(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: array_string at 0x4013f5
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax

 v0 = 4294967295;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 } while (*((char *)(a0 + v1 + 1)));
 return v1 + 1;
}


// Function: array_2d_stack at 0x401407
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int i; // ecx
 unsigned int v1; // eax

 i = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(a0 + i));
 i += 44;
 } while (i != 440);
 return v1;
}


// Function: array_3d at 0x40141e
unsigned int array_3d(unsigned int a0)
{
 unsigned int i; // ecx
 unsigned int v1; // eax
 unsigned int j; // edi
 unsigned int v3; // esi
 unsigned int ptr; // esi
 unsigned int idx; // ebx

 i = 0;
 v1 = 0;
 do
 {
 j = 0;
 v3 = a0;
 do
 {
 ptr = v3;
 idx = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (idx != 5);
 j += 1;
 v3 = ptr + 20;
 } while (j != 5);
 i += 1;
 a0 += 100;
 } while (i != 5);
 return v1;
}


// Function: array_vla at 0x40144e
unsigned int array_vla(unsigned int i, unsigned int ptr)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: array_pointer at 0x40146d
unsigned int array_pointer(unsigned int *cur, unsigned int a1)
{
 unsigned int i; // ecx
 unsigned int v1; // eax

 i = a1;
 if (i <= 0)
 return 0;
 v1 = 0;
 do
 {
 v1 += *(cur);
 cur += 10;
 i -= 1;
 } while (i != 1);
 return v1;
}


// Function: pointer_array at 0x401487
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int idx; // esi
 unsigned int v2; // eax

 v0 = a1;
 if (v0 <= 0)
 return 0;
 if (v0 >= 10)
 v0 = 10;
 idx = 0;
 v2 = 0;
 do
 {
 if (*((int *)(a0 + idx * 4)))
 v2 += *((int *)*((int *)(a0 + idx * 4)));
 } while ((idx += 1, v0 != idx));
 return v2;
}


// Function: array_complex_index at 0x4014b9
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a3 >= 0 && a4 < a2 && a3 < a1 && a4 >= 0)
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
}


// Function: array_oob at 0x4014e9
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (a1 < 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (a1 + 1 != idx);
 return v1;
}


// Function: test_array_types at 0x401509
int test_array_types()
{
 unsigned int i; // eax
 char *iter; // ecx
 unsigned int i1; // esi
 unsigned int idx; // edi
 unsigned int l; // eax
 char *v26; // edx
 unsigned int v27; // ecx
 unsigned int i2; // edi
 char *v29; // esi
 char *ptr; // esi
 unsigned int index; // ebp
 unsigned int idx5; // edx
 unsigned int pos; // eax
 unsigned int n; // ecx
 unsigned int v35; // eax
 char *p; // ecx
 unsigned int off; // eax
 unsigned int v38; // edx
 unsigned int idx4; // eax
 unsigned int v16; // esi
 unsigned int j; // ecx
 unsigned int v19; // eax
 unsigned int k; // eax
 char *v21; // ecx
 char *cur; // edx
 unsigned int v0; // [bp-0x4e8]
 char *v1; // [bp-0x4e0]
 char *v2; // [bp-0x4dc]
 char *v3; // [bp-0x4d8]
 char v4; // [bp-0x4d4]
 unsigned int v5; // [bp-0x4b8]
 unsigned int v6; // [bp-0x4b4]
 unsigned int v8; // [bp-0x4b0]
 unsigned long v40; // [bp-0x4ac]
 char v9; // [bp-0x468]
 unsigned long v41; // [bp-0x45c]
 char v10; // [bp-0x394]
 char v11; // [bp-0x204]

 puts(&g_4025e0);
 v0 = 15;
 printf("ARR-L1-01 (array_1d_stack): %d\n");
 v0 = 5;
 printf("ARR-L1-02 (array_string): %d\n");
 i = 0;
 iter = &v10;
 do
 {
 idx5 = 0;
 do
 {
 if (i == idx5)
 v16 = i;
 else
 v16 = 0;
 } while ((*((unsigned int *)&iter[4 * idx5]) = v16, idx5 += 1, idx5 != 10));
 i += 1;
 iter += 40;
 } while (i != 10);
 j = 0;
 v19 = 0;
 do
 {
 v19 += *((int *)&(&v10)[j]);
 j += 44;
 } while (j != 440);
 v0 = v19;
 printf("ARR-L1-03 (array_2d_stack): %d\n");
 k = 0;
 v21 = &v11;
 do
 {
 cur = v21;
 i1 = 0;
 do
 {
 idx = 0;
 do
 {
 *((unsigned int *)&cur[4 * idx]) = 1;
 idx += 1;
 } while (idx != 5);
 i1 += 1;
 cur += 20;
 } while (i1 != 5);
 k += 1;
 v21 += 100;
 } while (k != 5);
 l = 0;
 v26 = &v11;
 v27 = 0;
 do
 {
 i2 = 0;
 v29 = v26;
 do
 {
 ptr = v29;
 index = 0;
 do
 {
 v27 += *((int *)&ptr[4 * index]);
 index += 1;
 } while (index != 5);
 i2 += 1;
 v29 = ptr + 20;
 } while (i2 != 5);
 l += 1;
 v26 += 100;
 } while (l != 5);
 v0 = v27;
 printf("ARR-L1-04 (array_3d): %d\n");
 v0 = 60;
 printf("ARR-L2-01 (array_vla): %d\n");
 pos = 0;
 do
 {
 (&v41)[pos] = pos;
 pos += 10;
 } while (pos != 50);
 n = 0;
 v35 = 0;
 do
 {
 v35 += *((int *)((char *)&v41 + n));
 n += 40;
 } while (n != 200);
 v0 = v35;
 printf("ARR-L2-02 (array_pointer): %d\n");
 p = &v8;
 v8 = 10;
 v6 = 20;
 v5 = 30;
 v1 = &v8;
 v2 = &v6;
 v3 = &v5;
 off = 0;
 memset(&v4, 0, 28);
 v38 = 0;
 while (true)
 {
 if (p)
 v38 += *(p);
 if (off == 2)
 break;
 p = (&v2)[off];
 off += 1;
 }
 v0 = v38;
 printf("ARR-L2-03 (pointer_array): %d\n");
 idx4 = 0;
 do
 {
 (&v40)[idx4] = idx4;
 idx4 += 1;
 } while (idx4 != 20);
 v0 = *((int *)&v9);
 return printf("ARR-L2-04 (array_complex_index): %d\n");
}


// Function: ptr_single at 0x401701
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x40170b
int ptr_double(struct_0 **a0)
{
 return (*(a0))->field_0 + 5;
}


// Function: ptr_triple at 0x401717
int ptr_triple(struct_1 **a0)
{
 return (*(a0))->field_0 + 1;
}


// Function: ptr_increment at 0x401723
unsigned int ptr_increment(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: ptr_offset at 0x401742
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x40174e
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x40175a
unsigned int ptr_void(void* a0, unsigned int a1)
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


// Function: ptr_const at 0x401776
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x40177f
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40178b
typedef int (*int_func_ptr_t)(unsigned int);
int ptr_func_simple(int_func_ptr_t a0, unsigned int a1)
{
 return a0(a1);
}


// Function: ptr_func_complex at 0x4017ab
typedef int (*complex_func_t)(unsigned int, void*);

extern complex_func_t g_404f10;
extern unsigned int g_404f14;

int ptr_func_complex(complex_func_t a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = g_404f14;
 v0 = g_404f10;
 return a0(a1, &v0);
}


// Function: ptr_cast at 0x4017e4
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x4017eb
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x4017f0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x4017f7
extern unsigned int g_402634;

int test_pointer_types()
{
 unsigned int *i; // esi
 char *cur; // edi
 unsigned int result; // ecx
 unsigned int v7; // eax
 unsigned int idx; // ecx
 unsigned int v0; // [bp-0x28]
 char v1; // [bp-0x20]
 char v2; // [bp-0x1c]

 puts(&g_4025fb);
 v0 = 15;
 printf("PTR-L2-01 (ptr_single): %d\n");
 v0 = 15;
 printf("PTR-L2-02 (ptr_double): %d\n");
 v0 = 6;
 printf("PTR-L2-03 (ptr_triple): %d\n");
 i = &g_402634;
 cur = &v2;
 for (result = 5; result; i += 1)
 {
 result -= 1;
 *((unsigned int *)cur) = *(i);
 cur += 4;
 }
 v7 = 1;
 idx = 0;
 cur = &v2;
 do
 {
 v7 += *((int *)cur);
 cur += 4;
 idx += 1;
 } while (idx != 4);
 v0 = v7;
 printf("PTR-L2-04 (ptr_increment): %d\n");
 v0 = 30;
 printf("PTR-L2-05 (ptr_offset): %d\n");
 v0 = 4;
 printf("PTR-L2-06 (ptr_diff): %d\n");
 v0 = 42;
 printf("PTR-L2-07 (ptr_void): %d\n");
 v0 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n");
 v0 = 20;
 printf("PTR-L2-08 (ptr_const): %d\n");
 v0 = 15;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n");
 v0 = 10;
 printf("PTR-L2-10 (ptr_func_simple): %d\n");
 v0 = 1;
 printf("PTR-L2-11 (ptr_func_complex): %d\n");
 v0 = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n");
 v0 = 20;
 return printf("PTR-L2-13 (opaque_handle_op): %d\n");
}


// Function: struct_simple at 0x401962
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x40196f
unsigned int struct_array(unsigned int *a0, unsigned int i)
{
 unsigned int v1; // eax
 unsigned int *cur; // edx

 if (i <= 0)
 return 0;
 cur = (unsigned int *)(a0 + 2);
 v1 = 0;
 do
 {
 v1 = v1 + cur[2] + cur[1] + cur[0];
 cur += 1;
 i -= 1;
 } while (i != 1);
 return v1;
}


// Function: struct_nested at 0x401992
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x40199c
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x4019a7
int struct_with_ptr(struct_0 *a0)
{
 return a0->field_0 + (a0->field_4 ? a0->field_4->field_0 : 0);
}


// Function: struct_bitfields at 0x4019bd
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // eax

 v0 = *(ptr);
 return (v0 >> 6) + (v0 & 1) + (v0 >> 1 & 3) + (v0 >> 3 & 7);
}


// Function: union_type at 0x4019e4
int union_type(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return *(float*)a0;
 }
 return (!a1 ? *((int *)a0) : *((char *)a0));
}


// Function: union_array at 0x401a27
unsigned int union_array(unsigned int ptr, unsigned int i)
{
 unsigned int idx; // esi
 unsigned int v1; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + idx * 4));
 idx += 1;
 } while (i != idx);
 return v1;
}


// Function: enum_type at 0x401a46
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x401a50
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967197;
 if (a0 <= 3)
 v0 = *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10668 + 4 * a0]);
 return v0;
}


// Function: struct_func_ptr at 0x401a72
int struct_func_ptr(struct_0 *a0)
{
 typedef int (*field_4_t)(unsigned int);
 return ((field_4_t)a0->field_4)(a0->field_0);
}


// Function: linked_list at 0x401a93
typedef struct node_struct {
 unsigned int field_0;
 struct node_struct *field_4;
} node_struct;

unsigned int linked_list(node_struct *i)
{
 unsigned int v0; // eax

 for (v0 = 0; i; i = i->field_4)
 {
 v0 += i->field_0;
 }
 return v0;
}


// Function: doubly_linked_list at 0x401aa5
typedef struct dnode_struct {
 unsigned int field_0;
 struct dnode_struct *field_4;
} dnode_struct;

unsigned int doubly_linked_list(dnode_struct *i)
{
 unsigned int v0; // eax

 for (v0 = 0; i; i = i->field_4)
 {
 v0 += i->field_0;
 }
 return v0;
}


// Function: binary_tree_sum at 0x401ab7
typedef struct tree_node {
 unsigned int field_0;
 unsigned int field_4;
 struct tree_node *field_8;
} tree_node;

unsigned int binary_tree_sum(tree_node *a0)
{
 unsigned int v0; // esi
 tree_node *ptr; // edi
 unsigned int v2; // eax
 tree_node *v3; // edi

 v0 = 0;
 while (true)
 {
 ptr = a0;
 if (!ptr)
 break;
 v2 = binary_tree_sum(ptr->field_4);
 v3 = ptr->field_8;
 v0 = v0 + ptr->field_0 + v2;
 a0 = v3;
 }
 return v0;
}


// Function: binary_tree at 0x401af0
unsigned int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401b11
typedef struct graph_node {
 unsigned int field_0;
 struct graph_node *field_4;
} graph_node;

typedef struct graph_struct {
 graph_node *field_0;
 graph_node *field_4;
 graph_node *field_8;
 graph_node *field_12;
 graph_node *field_16;
 graph_node *field_20;
 graph_node *field_24;
 unsigned int field_28;
} graph_struct;

unsigned int graph_traverse(graph_struct *ptr)
{
 unsigned int index; // esi
 unsigned int v1; // eax
 graph_node *cur; // edi

 if (ptr->field_28 <= 0)
 return 0;
 index = 0;
 v1 = 0;
 do
 {
 for (cur = ((graph_node **)&ptr->field_0)[index]; cur; cur = cur->field_4)
 {
 v1 += cur->field_0;
 }
 index += 1;
 } while (index != ptr->field_28);
 return v1;
}


// Function: test_composite_types at 0x401b3c
typedef struct list_node {
 unsigned int field_0;
 struct list_node *field_4;
} list_node;

typedef struct dlist_node {
 unsigned int field_0;
 struct dlist_node *field_4;
} dlist_node;

typedef struct glist_node {
 unsigned int field_0;
 struct glist_node *field_4;
} glist_node;

int test_composite_types()
{
 list_node *ptr; // eax
 unsigned int v22; // ecx
 unsigned int v31; // eax
 dlist_node *p; // ecx
 unsigned int v25; // eax
 glist_node *cur; // esi
 unsigned int idx; // edx
 unsigned int *iter; // edi
 unsigned int flag6; // ecx
 unsigned int v0; // [bp-0x88]
 unsigned int v1; // [bp-0x84]
 unsigned int flag3; // [bp-0x80]
 list_node v3; // [bp-0x7c]
 list_node *v4; // [bp-0x78]
 list_node v5; // [bp-0x74]
 list_node *v6; // [bp-0x70]
 list_node v7; // [bp-0x6c]
 unsigned int result; // [bp-0x68]
 unsigned int v9; // [bp-0x64]
 unsigned int flag5; // [bp-0x60]
 unsigned int flag4; // [bp-0x5c]
 dlist_node v13; // [bp-0x54]
 dlist_node *v14; // [bp-0x50]
 unsigned int flag1; // [bp-0x4c]
 dlist_node v16; // [bp-0x48]
 unsigned int flag2; // [bp-0x44]
 dlist_node *v18; // [bp-0x40]
 unsigned int v19[44]; // [bp-0x400] - array for graph traversal
 puts(&g_402616);
 printf("CMP-L2-01 (struct_simple): %d\n", v0 = 6);
 printf("CMP-L2-02 (struct_array): %d\n", v0 = 9);
 printf("CMP-L2-03 (struct_nested): %d\n", v0 = 105);
 printf("CMP-L2-04 (struct_deep): %d\n", v0 = 258);
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v0 = 30);
 printf("CMP-L2-06 (struct_bitfields): %d\n", v0 = 106);
 printf("CMP-L2-07 (union_type): %d\n", v0 = 305419896);
 printf("CMP-L2-08 (union_array): %d\n", v0 = 60);
 printf("CMP-L2-09 (enum_type): %d\n", v0 = 10);
 printf("CMP-L2-10 (enum_switch): %d\n", v0 = 50);
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v0 = 21);
 ptr = &v3;
 v3.field_0 = 10;
 v3.field_4 = &v5;
 v5.field_0 = 20;
 v5.field_4 = &v7;
 v7.field_0 = 30;
 v7.field_4 = NULL;
 result = 0;
 v22 = 0;
 do
 {
 v22 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr);
 v0 = v22;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 p = &v13;
 v13.field_0 = 10;
 v25 = 0;
 flag1 = 0;
 v16.field_0 = 20;
 flag2 = 0;
 v18 = &v13;
 v14 = &v16;
 do
 {
 v25 += p->field_0;
 p = p->field_4;
 } while (p);
 v0 = v25;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v0);
 flag4 = 0;
 flag5 = 0;
 v9 = 100;
 v0 = binary_tree_sum((tree_node*)&v9);
 printf("CMP-L2-14 (binary_tree): %d\n", v0);
 cur = (glist_node*)&v1;
 flag3 = 0;
 v1 = 1;
 idx = 0;
 iter = &v19;
 for (flag6 = 11; flag6; iter += 1)
 {
 flag6 -= 1;
 *(iter) = 0;
 }
 while (true)
 {
 v31 = 0;
 glist_node *cur_ptr = (glist_node*)(((unsigned char*)&v19) + idx * sizeof(glist_node));
 for (; cur_ptr; cur_ptr = cur_ptr->field_4)
 {
 v31 += cur_ptr->field_0;
 }
 idx += 1;
 if (idx == 2)
 break;
 }
 v0 = v31;
 return printf("CMP-L2-15 (graph_traverse): %d\n", v0);
}


// Function: main at 0x401d68
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_401d93 at 0x401d93
void sub_401d93()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux()
{
 return;
}


// Function: sub_401de2 at 0x401de2
void sub_401de2()
{
}



/* CRT stub function _fini removed by preprocessor */


