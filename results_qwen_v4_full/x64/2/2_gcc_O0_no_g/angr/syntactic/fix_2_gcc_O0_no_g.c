// Angr Decompilation of 2_gcc_O0_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned int field_0;
 void *field_8;
 void *field_10;
} struct_0;

typedef struct struct_1 {
 struct_0 *field_0;
} struct_1;

typedef struct struct_2 {
 struct_0 *field_0;
} struct_2;

typedef struct struct_3 {
 struct_0 *field_0;
} struct_3;

extern struct_0 *g_405fe8;
struct_0 *g_405fe8 = 0;

// Floating point helper stubs
unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
unsigned long long MulV(unsigned long long a, unsigned long long b) { return a * b; }
unsigned long long DivV(unsigned long long a, unsigned long long b) { return b ? a / b : 0; }

// Global string variables
char g_403010[] = "Testing data types L1";
char g_403180[] = "Testing array types";
char g_4032a2[] = "Testing pointer types";
char g_403452[] = "Testing composite types";






/* CRT stub function _start removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x401189
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_char at 0x40119b
int process_char(char a0)
{
 if (a0 > 64 && a0 <= 90)
 return a0 + 32;
 return a0;
}


// Function: process_short at 0x4011c3
int process_short(unsigned short a0, unsigned short a1)
{
 return a1 + a0;
}


// Function: process_int at 0x4011e3
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: process_long at 0x4011f8
unsigned long long process_long(unsigned long a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x40120d
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x401223
double process_float()
{
 int v1; // xmm0

 return (unsigned long long)(AddV(0x3f000000, MulV(v1, 0x3fc00000)));
}


// Function: process_double at 0x40124f
long long process_double()
{
 int v1; // xmm0

 return (unsigned long long)(AddV(4591870180066957722, DivV(v1 & 18446744073709551615, 0x4000000000000000)));
}


// Function: process_ld at 0x401289
void process_ld()
{
}


// Function: process_bool at 0x40129e
unsigned int process_bool(unsigned int a0)
{
 unsigned int v1; // eax

 if (a0 > 0 && !((char)a0 & 1))
 v1 = 1;
 else
 v1 = 0;
 return v1 & 1;
}


// Function: const_param at 0x4012ca
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x4012e1
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = *(ptr);
 v1 = *(ptr);
 return v1 + v0;
}


// Function: test_data_types_l1 at 0x401309
extern char g_403010[];

long long test_data_types_l1()
{
 unsigned long v16; // fs
 unsigned long v10; // rsi
 unsigned int v0[1]; // [bp-0x18]
 unsigned int v1[1]; // [bp-0x14]
 unsigned long v2; // [bp-0x10]

 puts(&g_403010);
 printf("DT-L1-01 (process_char): %c\n", process_char(65) & 4294967295);
 printf("DT-L1-01 (process_char): %c\n", process_char(98) & 4294967295);
 printf("DT-L1-02 (process_short): %d\n", process_short(100, 200) & 4294967295);
 printf("DT-L1-03 (process_int): %d\n", process_int(5) & 4294967295);
 printf("DT-L1-04 (process_long): %ld\n", process_long(100));
 printf("DT-L1-05 (process_ll): %lld\n", process_ll(100));
 process_float();
 printf("DT-L1-06 (process_float): %.2f\n", v10);
 process_double();
 printf("DT-L1-07 (process_double): %.2f\n", v10);


 process_ld();
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4) & 4294967295);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(3) & 4294967295);
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4294967294) & 4294967295);
 *((unsigned int *)v0) = 5;
 printf("DT-L1-10 (const_param): %d\n", const_param(&v0) & 4294967295);
 *((unsigned int *)v1) = 10;
 printf("DT-L1-11 (volatile_access): %d\n", volatile_access(&v1) & 4294967295);
 return v2 - *((long long *)(40 + v16));
}


// Function: array_1d_stack at 0x40156e
unsigned int array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(ptr + i * 4));
 }
 return v0;
}


// Function: array_string at 0x4015b7
unsigned int array_string(char *a0)
{
 unsigned int i; // [bp-0xc]

 for (i = 0; a0[i]; i += 1);
 return i;
}


// Function: array_2d_stack at 0x4015e9
unsigned int array_2d_stack(unsigned long a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i <= 9; i += 1)
 {
 v0 += *((int *)(i * 40 + a0 + i * 4));
 }
 return v0;
}


// Function: array_3d at 0x40163d
unsigned int array_3d(unsigned long a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int j; // [bp-0x10]
 unsigned int k; // [bp-0xc]

 v0 = 0;
 for (i = 0; i <= 4; i += 1)
 {
 for (j = 0; j <= 4; j += 1)
 {
 for (k = 0; k <= 4; k += 1)
 {
 v0 += *((int *)(i * 100 + a0 + (j * 5 + k) * 4));
 }
 }
 }
 return v0;
}


// Function: array_vla at 0x4016d7
unsigned int array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += *((int *)(ptr + i * 4));
 }
 return v0;
}


// Function: array_pointer at 0x401720
unsigned int array_pointer(unsigned long ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 0;
 for (v1 = 0; v1 < a1; v1 += 1)
 {
 v0 += *((int *)(ptr + v1 * 40));
 }
 return v0;
}


// Function: pointer_array at 0x401773
unsigned int pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = 0;
 v2 = (10 < a1 ? 10 : a1);
 for (i = 0; i < v2; i += 1)
 {
 if (*((long long *)(a0 + i * 8)))
 v0 += *((int *)*((long long *)(a0 + i * 8)));
 }
 return v0;
}


// Function: array_complex_index at 0x4017eb
unsigned long long array_complex_index(unsigned long a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a3 >= 0 && a3 < a1 && a4 >= 0 && a4 < a2)
 return *((int *)(a0 + (a3 + a1 * a4 & 4294967295) * 4));
 return 4294967295;
}


// Function: array_oob at 0x40184a
unsigned int array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i <= a1; i += 1)
 {
 v0 += *((int *)(ptr + i * 4));
 }
 return v0;
}


// Function: test_array_types at 0x401893
extern char g_403180[];

long long test_array_types()
{
 unsigned long v37; // fs
 unsigned int v0; // [bp-0x56c]
 unsigned int v1; // [bp-0x568]
 unsigned int v2; // [bp-0x564]
 unsigned int i; // [bp-0x560]
 unsigned int m; // [bp-0x55c]
 unsigned int j; // [bp-0x558]
 unsigned int n; // [bp-0x554]
 unsigned int i0; // [bp-0x550]
 unsigned int k; // [bp-0x54c]
 unsigned int l; // [bp-0x548]
 unsigned int v10; // [bp-0x544]
 unsigned int v11; // [bp-0x540]
 unsigned int v12; // [bp-0x53c]
 unsigned int result; // [bp-0x538]
 unsigned int v14; // [bp-0x534]
 unsigned int v15; // [bp-0x530]
 unsigned int v16; // [bp-0x52c]
 unsigned int v17; // [bp-0x528]
 char *v19; // [bp-0x518]
 char *v20; // [bp-0x510]
 char *v21; // [bp-0x508]
 unsigned long v22; // [bp-0x4c8]
 unsigned long v23; // [bp-0x478]
 unsigned long v24; // [bp-0x3a8]
 unsigned long v25; // [bp-0x218]
 char v26[6]; // [bp-0x16]
 unsigned long v27; // [bp-0x10]

 puts(&g_403180);
 result = 1;
 v14 = 2;
 v15 = 3;
 v16 = 4;
 v17 = 5;
 printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&result, 5) & 4294967295);
 strncpy(v26, "hello", 5);
 printf("ARR-L1-02 (array_string): %d\n", array_string(&v26) & 4294967295);
 for (i = 0; i <= 9; i += 1)
 {
 for (m = 0; m <= 9; m += 1)
 {
 *((unsigned int *)((char *)&(&v24)[5 * i] + 4 * m)) = (i == m ? i : 0);
 }
 }
 printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v24) & 4294967295);
 for (j = 0; j <= 4; j += 1)
 {
 for (n = 0; n <= 4; n += 1)
 {
 for (i0 = 0; i0 <= 4; i0 += 1)
 {
 *((unsigned int *)((char *)&v25 + 100 * j + 20 * n + 4 * i0)) = 1;
 }
 }
 }
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v25) & 4294967295);
 v10 = 10;
 v11 = 20;
 v12 = 30;
 printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v10) & 4294967295);
 for (k = 0; k <= 4; k += 1)
 {
 *((unsigned int *)&(&v23)[5 * k]) = k * 10;
 }
 printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v23, 5) & 4294967295);
 v0 = 10;
 v1 = 20;
 v2 = 30;
 memset(&v19, 0, 80);
 v19 = &v0;
 v20 = &v1;
 v21 = &v2;
 printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(&v19, 3) & 4294967295);
 for (l = 0; l <= 19; l += 1)
 {
 *((unsigned int *)((char *)&v22 + 4 * l)) = l;
 }
 printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(&v22, 5, 4, 2, 3) & 4294967295);
 return v27 - *((long long *)(40 + v37));
}


// Function: ptr_single at 0x401cda
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x401cf1
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401d0b
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x401d28
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 cur = a0;
 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x401d66
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x401d8d
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x401dab
long long ptr_void(void* a0, unsigned int a1)
{
 return (!a1 ? *((int *)a0) : (a1 == 1 ? *((char *)a0) : 4294967295));
}


// Function: ptr_const at 0x401de1
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x401df7
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Function: ptr_func_simple at 0x401e1a
int ptr_func_simple(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1);
}


// Function: ptr_func_complex at 0x401e3a
long long ptr_func_complex(char (*a0)(unsigned int *, unsigned long long *), unsigned long a1)
{
 unsigned long v0; // [bp-0x28]
 unsigned long long result; // [bp-0x20]

 v0 = (unsigned long)"test";
 result = 0;
 return a0((unsigned int *)&a1, (unsigned long long *)&v0);
}


// Function: ptr_cast at 0x401e9a
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401ec6
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x401ed8
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: complex_callback at 0x401eec
char complex_callback(unsigned int *ptr, unsigned long long *a1)
{
 *(ptr) = *(ptr) + 10;
 return *(a1);
}


// Function: test_pointer_types at 0x401f1d
extern char g_4032a2[];

long long test_pointer_types()
{
 unsigned long v46; // fs
 char v0; // [bp-0xb9]
 unsigned int v1[1]; // [bp-0xb8]
 unsigned int v2; // [bp-0xb4]
 unsigned int v3; // [bp-0xb0]
 unsigned int v4; // [bp-0xac]
 unsigned int v5[1]; // [bp-0xa8]
 unsigned int v6[1]; // [bp-0xa4]
 unsigned int v7; // [bp-0xa0]
 unsigned int v8[1]; // [bp-0x9c]
 char *v9; // [bp-0x98]
 char *v10; // [bp-0x90]
 struct_3 **v11; // [bp-0x88]
 struct_0 **v12; // [bp-0x80]
 struct_2 **v13; // [bp-0x78]
 unsigned long long v14; // [bp-0x70]
 unsigned int result[1]; // [bp-0x68]
 unsigned int v16; // [bp-0x64]
 unsigned int v17; // [bp-0x60]
 unsigned int v18; // [bp-0x5c]
 unsigned int v19; // [bp-0x58]
 unsigned int v20; // [bp-0x48]
 unsigned int v21; // [bp-0x44]
 unsigned int v22; // [bp-0x40]
 unsigned int v23; // [bp-0x3c]
 unsigned int v24; // [bp-0x38]
 unsigned int flag1; // [bp-0x28]
 unsigned int v26; // [bp-0x24]
 unsigned int v27; // [bp-0x20]
 unsigned int v28; // [bp-0x1c]
 unsigned int v29; // [bp-0x18]
 unsigned long v30; // [bp-0x10]

 puts(&g_4032a2);
 *((unsigned int *)v1) = 5;
 printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&v1) & 4294967295);
 v2 = 10;
 v9 = &v2;
 v12 = &v9;
 printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(v12) & 4294967295);
 v3 = 5;
 v10 = &v3;
 v11 = &v10;
 v13 = &v11;
 printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(v13) & 4294967295);
 *((unsigned int *)result) = 1;
 v16 = 2;
 v17 = 3;
 v18 = 4;
 v19 = 5;
 printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, 5) & 4294967295);
 v20 = 10;
 v21 = 20;
 v22 = 30;
 v23 = 40;
 v24 = 50;
 printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v20, 2) & 4294967295);
 flag1 = 0;
 v26 = 10;
 v27 = 20;
 v28 = 30;
 v29 = 40;
 printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v29, &flag1) & 4294967295);
 v4 = 42;
 v0 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v4, 0) & 4294967295);
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v0, 1) & 4294967295);
 *((unsigned int *)v5) = 10;
 printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&v5) & 4294967295);
 *((unsigned int *)v6) = 10;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&v6) & 4294967295);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5) & 4294967295);
 v7 = 5;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v7) & 4294967295);
 *((unsigned int *)v8) = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v8) & 4294967295);
 v14 = opaque_handle_create(10);
 printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(v14) & 4294967295);
 return v30 - *((long long *)(40 + v46));
}


// Function: struct_simple at 0x40228b
int struct_simple(unsigned int *a0)
{
 return a0[2] + *(a0) + a0[1];
}


// Function: struct_array at 0x4022b1
unsigned int struct_array(unsigned long ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int i; // [bp-0xc]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(ptr + i * 12 + 8)) + *((int *)(ptr + i * 12)) + *((int *)(ptr + i * 12 + 4));
 }
 return v0;
}


// Function: struct_nested at 0x402347
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x402364
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x402382
int struct_with_ptr(struct_0 *a0)
{
 return (!a0->field_8 ? 0 : ((struct_0 *)a0->field_8)->field_0) + a0->field_0;
}


// Function: struct_bitfields at 0x4023b6
int struct_bitfields(void* a0)
{
 return (*((short *)a0) >> 6) + (*((char *)a0) & 1) + (*((char *)a0) >> 1 & 3) + (*((char *)a0) >> 3 & 7);
}


// Function: union_type at 0x402404
int union_type(void* a0, unsigned int a1)
{
 return (!a1 ? *((int *)a0) : (a1 == 1 ? (unsigned int)*((int *)a0) : *((char *)a0)));
}


// Function: union_array at 0x402441
unsigned int union_array(unsigned long ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 0;
 for (v1 = 0; v1 < a1; v1 += 1)
 {
 v0 += *((int *)(ptr + v1 * 4));
 }
 return v0;
}


// Function: enum_type at 0x40248a
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x4024a3
unsigned long long enum_switch(unsigned int a0)
{
 if (a0 == 3)
 return 4294967295;
 if (a0 > 3)
 return 4294967197;
 if (a0 == 2)
 {
 return 50;
 }
 else if (a0 <= 2)
 {
 if (!a0)
 {
 return 0;
 }
 else if (a0 == 1)
 {
 return 100;
 }
 }
 return 4294967197;
}


// Function: struct_func_ptr at 0x4024f7
int struct_func_ptr(struct_0 *a0)
{
 return ((int (*)(unsigned int))a0->field_8)(a0->field_0);
}


// Function: linked_list at 0x40251b
unsigned int linked_list(struct_0 *a0)
{
 unsigned int v0; // [bp-0x14]
 struct_0 *cur; // [bp-0x10]

 v0 = 0;
 for (cur = a0; cur; cur = (struct_0 *)cur->field_8)
 {
 v0 += cur->field_0;
 }
 return v0;
}


// Function: doubly_linked_list at 0x402559
unsigned int doubly_linked_list(struct_0 *a0)
{
 unsigned int v0; // [bp-0x14]
 struct_0 *cur; // [bp-0x10]

 v0 = 0;
 for (cur = a0; cur; cur = (struct_0 *)cur->field_8)
 {
 v0 += cur->field_0;
 }
 return v0;
}


// Function: binary_tree_sum at 0x402597
unsigned long long binary_tree_sum(struct_0 *ptr)
{
 unsigned long long v1; // rax
 unsigned long long v2; // rax

 if (ptr)
 {
 v1 = binary_tree_sum((struct_0 *)ptr->field_8);
 v2 = binary_tree_sum((struct_0 *)ptr->field_10) + ptr->field_0 + v1;
 return v2;
 }
 return 0;
}


// Function: binary_tree at 0x4025e6
unsigned long long binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x402604
unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 struct_0 *cur; // [bp-0x10]

 v0 = 0;
 for (i = 0; i < (int)ptr[10]; i += 1)
 {
 for (cur = ptr[i]; cur; cur = (struct_0 *)cur->field_8)
 {
 v0 += cur->field_0;
 }
 }
 return v0;
}


// Function: test_composite_types at 0x402665
extern char g_403452[];

long long test_composite_types()
{
 unsigned long long v78; // rcx
 unsigned long long *cur; // rdi
 unsigned long v81; // fs
 char v0; // [bp-0x1bc]
 unsigned short v1; // [bp-0x1bc]
 unsigned short v2; // [bp-0x1bc]
 unsigned int v3; // [bp-0x1b8]
 unsigned int flag1[1]; // [bp-0x1b4]
 unsigned int v5; // [bp-0x1b0]
 unsigned int v6; // [bp-0x1ac]
 unsigned int v7; // [bp-0x1a8]
 unsigned long long flag12; // [bp-0x1a0]
 unsigned int v9; // [bp-0x198]
 char *v10; // [bp-0x190]
 unsigned int v11; // [bp-0x188]
 unsigned long long v12; // [bp-0x180]
 unsigned int result; // [bp-0x178]
 unsigned long long flag11; // [bp-0x170]
 unsigned int v15[1]; // [bp-0x168]
 unsigned int v16; // [bp-0x164]
 unsigned int flag2; // [bp-0x160]
 unsigned int v18; // [bp-0x15c]
 unsigned int v19; // [bp-0x158]
 unsigned int v20; // [bp-0x148]
 unsigned long long flag16; // [bp-0x140]
 unsigned long long flag17; // [bp-0x138]
 unsigned int flag3[1]; // [bp-0x128]
 unsigned int v24; // [bp-0x124]
 unsigned int v25; // [bp-0x120]
 unsigned int v26; // [bp-0x11c]
 unsigned int v27; // [bp-0x118]
 unsigned int v28; // [bp-0x114]
 unsigned int flag4; // [bp-0x110]
 unsigned int flag5; // [bp-0x10c]
 unsigned int flag6; // [bp-0x108]
 unsigned int flag7; // [bp-0x104]
 unsigned int v33; // [bp-0x100]
 unsigned int v34; // [bp-0xfc]
 unsigned int v35; // [bp-0xf8]
 unsigned int v36; // [bp-0xf4]
 unsigned int v37; // [bp-0xf0]
 unsigned int v38; // [bp-0xec]
 unsigned int flag8; // [bp-0xe8]
 unsigned int flag9; // [bp-0xe4]
 unsigned int flag10; // [bp-0xe0]
 unsigned int v42; // [bp-0xdc]
 unsigned int v43; // [bp-0xd8]
 unsigned int v44; // [bp-0xd4]
 unsigned int v45; // [bp-0xc8]
 char *v46; // [bp-0xc0]
 char v47; // [bp-0xb8], Other Possible Types: unsigned int
 char *v48; // [bp-0xb0]
 char v49; // [bp-0xa8], Other Possible Types: unsigned int
 unsigned long long flag13; // [bp-0xa0]
 unsigned int v51; // [bp-0x98]
 char *v52; // [bp-0x90]
 unsigned long long flag14; // [bp-0x88]
 unsigned int v55; // [bp-0x80]
 unsigned long long flag15; // [bp-0x78]
 char *v57; // [bp-0x70]
 void* v60[10]; // [bp-0x68]
 unsigned int v61; // [bp-0x18]
 unsigned long v62; // [bp-0x10]

 puts(&g_403452);
 *((unsigned int *)flag1) = 1;
 v5 = 2;
 v6 = 3;
 printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&flag1) & 4294967295);
 flag8 = 1;
 flag9 = 1;
 flag10 = 1;
 v42 = 2;
 v43 = 2;
 v44 = 2;
 printf("CMP-L2-02 (struct_array): %d\n", struct_array(&flag8, 2) & 4294967295);
 *((unsigned int *)v15) = 5;
 v16 = 10;
 flag2 = 0;
 v18 = 100;
 v19 = 200;
 printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v15) & 4294967295);
 *((unsigned int *)flag3) = 1;
 v24 = 2;
 v25 = 3;
 v26 = 10;
 v27 = 20;
 v28 = 255;
 flag4 = 0;
 flag5 = 0;
 flag6 = 0;
 flag7 = 0;
 v33 = 255;
 v34 = 42;
 printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&flag3) & 4294967295);
 v7 = 20;
 flag12 = 0;
 v9 = 10;
 v10 = &v7;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v9) & 4294967295);
 v0 |= 1;
 v0 = v0 & 4294967289 | 4;
 *((char *)&v2) = v0 & 4294967239 | 24;
 v2 = v1 & 63 & 255 | ((char)((v1 & 63) >> 8) | 25) * 0x100;
 v3 &= 0xfff00000;
 printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v2) & 4294967295);
 v35 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n", union_type(&v35, 0) & 4294967295);
 v36 = 10;
 v37 = 20;
 v38 = 30;
 printf("CMP-L2-08 (union_array): %d\n", union_array(&v36, 3) & 4294967295);
 printf("CMP-L2-09 (enum_type): %d\n", enum_type(1) & 4294967295);
 printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(2) & 4294967295);
 v11 = 10;
 v12 = process_int;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v11) & 4294967295);
 v45 = 10;
 v46 = &v47;
 v47 = 20;
 v48 = &v49;
 v49 = 30;
 flag13 = 0;
 printf("CMP-L2-12 (linked_list): %d\n", linked_list(&v45) & 4294967295);
 v51 = 10;
 v52 = &v55;
 flag14 = 0;
 v55 = 20;
 flag15 = 0;
 v57 = &v51;
 v52 = &v55;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v51) & 4294967295);
 v20 = 100;
 flag16 = 0;
 flag17 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&v20) & 4294967295);
 result = 1;
 flag11 = 0;
 v78 = 11;
 for (cur = &v60; v78; cur += 1)
 {
 v78 -= 1;
 *(cur) = 0;
 }
 *(v60) = &result;
 v61 = 2;
 *(v60) = &result;
 printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v60) & 4294967295);
 return v62 - *((long long *)(40 + v81));
}


// Function: main at 0x402ba5
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


