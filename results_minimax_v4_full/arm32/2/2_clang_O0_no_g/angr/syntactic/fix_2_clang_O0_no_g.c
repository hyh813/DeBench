// Angr Decompilation of 2_clang_O0_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_4003e0 at 0x4003e0

int sub_4003e0()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400474 at 0x400474
void sub_400474()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x4005a4
int process_char(char a0)
{
 char v0; // [bp-0x1]

 if (a0 >= 65 && 90 >= a0)
 {
 v0 = a0 + 32;
 return v0;
 }
 v0 = a0;
 return v0;
}


// Function: process_short at 0x4005f4
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return (a0 + a1) & 65535;
}


// Function: process_int at 0x40061c
unsigned int process_int(unsigned int a0)
{
 return 1 | a0 * 2;
}


// Function: process_long at 0x400638
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x400650
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x400678
int process_float(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v3; // r0

 v0 = __mulsf3(a0, 0x3fc00000, 0, 0);
 v3 = __addsf3(v0, 0x3f000000, v1, v2);
 return __addsf3(v0, 0x3f000000, v1, v2);
}


// Function: process_double at 0x4006a8
int process_double(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 unsigned int v3; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __divdf3(a0, a1, 0, 0x40000000, a0, a1, &v1, *((int *)&v0));
 v3 = __adddf3(v2, a1, 2576980378, 1069128089, a0, a1, &v1, *((int *)&v0));
 return __adddf3(v2, a1, 2576980378, 1069128089, a0, a1, &v1, *((int *)&v0));
}


// Function: process_ld at 0x4006f0
int process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 unsigned int v3; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __muldf3(a0, a1, a0, a1, a0, a1, &v1, *((int *)&v0));
 v3 = __adddf3(v2, a1, 0, 0x3ff00000, a0, a1, &v1, *((int *)&v0));
 return __adddf3(v2, a1, 0, 0x3ff00000, a0, a1, &v1, *((int *)&v0));
}


// Function: process_bool at 0x400734
unsigned int process_bool(unsigned int a0)
{
 unsigned int v1; // r0
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 if (a0 >= 1)
 {
 v1 = a0 - (a0 + (a0 >> 31) & 4294967294);
 v0 = v1 + -(v1) + (v1 <= 0);
 }
 return v0 & 1;
}


// Function: const_param at 0x400784
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x4007a0
int volatile_access(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = *(ptr);
 v0 = *(ptr);
 return v1 + v0;
}


// Function: test_data_types_l1 at 0x4007d4
extern char g_40306c;

int test_data_types_l1()
{
 unsigned int v17; // r0
 unsigned int v18; // r0
 unsigned int v11; // r1
 unsigned int v13; // r2
 unsigned int v14; // r3
 char *v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int result; // [bp-0x1c]
 char *v3; // [bp-0x18]
 unsigned int v4[1]; // [bp-0x14]
 unsigned int v5[1]; // [bp-0x10]
 unsigned int v6[1]; // [bp-0xc]

 printf(&g_40306c);
 v0 = "DT-L1-01 (process_char): %c\n";
 printf("DT-L1-01 (process_char): %c\n", process_char(65));
 process_char(98);
 printf(v0);
 v1 = 100;
 printf("DT-L1-02 (process_short): %d\n", process_short(100, 200));
 *(v4) = 5;
 printf("DT-L1-03 (process_int): %d\n", process_int(5));
 printf("DT-L1-04 (process_long): %ld\n", process_long(v1));
 result = 0;
 process_ll(v1, 0);
 printf("DT-L1-05 (process_ll): %lld\n", v11);
 __extendsfdf2(process_float(0x40000000), v11, v13, v14);
 printf("DT-L1-06 (process_float): %.2f\n", v11);
 process_double(result, 0x40100000);
 printf("DT-L1-07 (process_double): %.2f\n", v11);
 process_ld(result, 0x40080000);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 v3 = "DT-L1-09 (process_bool): %d\n";
 printf("DT-L1-09 (process_bool): %d\n", process_bool(4));
 process_bool(3);
 printf(v3);
 process_bool(4294967294);
 printf(v3);
 *(v6) = *(v4);
 printf("DT-L1-10 (const_param): %d\n", const_param(&v6));
 *v5 = 10;
 v17 = volatile_access(&v5);
 v18 = printf("DT-L1-11 (volatile_access): %d\n", v17);
 return printf("DT-L1-11 (volatile_access): %d\n", v17);
}


// Function: array_1d_stack at 0x4009bc
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (idx = 0; a1 > idx; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: array_string at 0x400a24
unsigned int array_string(unsigned int a0)
{
 unsigned int i; // [bp-0x8]

 for (i = 0; *((char *)(a0 + i)); i += 1);
 return i;
}


// Function: array_2d_stack at 0x400a6c
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int idx; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (idx = 0; 9 >= idx; idx += 1)
 {
 v1 += *((int *)(a0 + idx * 40 + idx * 4));
 }
 return v1;
}


// Function: array_3d at 0x400ad4
unsigned int array_3d(unsigned int a0)
{
 unsigned int idx; // [bp-0x14]
 unsigned int j; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 for (v2 = 0; 4 >= v2; v2 += 1)
 {
 for (j = 0; 4 >= j; j += 1)
 {
 for (idx = 0; 4 >= idx; idx += 1)
 {
 v3 += *((int *)(a0 + v2 * 100 + j * 20 + idx * 4));
 }
 }
 }
 return v3;
}


// Function: array_vla at 0x400bac
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (v0 = 0; a0 > v0; v0 += 1)
 {
 v1 += *((int *)(ptr + v0 * 4));
 }
 return v1;
}


// Function: array_pointer at 0x400c14
unsigned int array_pointer(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (v0 = 0; a1 > v0; v0 += 1)
 {
 v1 += *((int *)(ptr + v0 * 40));
 }
 return v1;
}


// Function: pointer_array at 0x400c80
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = 0;
 v0 = (9 < a1 ? 10 : a1);
 v2 = v0;
 for (idx = 0; v2 > idx; idx += 1)
 {
 if (*((int *)(a0 + idx * 4)))
 v3 += *((int *)*((int *)(a0 + idx * 4)));
 }
 return v3;
}


// Function: array_complex_index at 0x400d3c
unsigned int array_complex_index(unsigned int ptr, unsigned int a1)
{
 unsigned int v2; // r3
 unsigned int v3; // r2
 unsigned int v0; // [bp-0x4]
 char v1; // [bp+0x0]

 if (!((char)armg_calculate_condition(66, v2, 0, 0)) && a1 > v2 && !((char)armg_calculate_condition(66, *((int *)&v1), 0, 0)) && *((int *)&v1) < v3)
 {
 v0 = *((int *)(ptr + (v2 + *((int *)&v1) * a1) * 4));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: array_oob at 0x400dd4
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (idx = 0; a1 >= idx; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: test_array_types at 0x400e3c
extern char g_4031d8;

int test_array_types()
{
 unsigned int v41; // r0
 unsigned int v42; // r0
 unsigned int v0; // [bp-0x540]
 char *l; // [bp-0x53c]
 char *v2; // [bp-0x538]
 char *ptr; // [bp-0x534]
 unsigned int v4; // [bp-0x530]
 unsigned int idx; // [bp-0x52c]
 unsigned long v6; // [bp-0x528]
 char *v7; // [bp-0x4d8]
 char *v8; // [bp-0x4d4]
 char *v9; // [bp-0x4d0]
 unsigned int result; // [bp-0x4cc]
 char v11; // [bp-0x4c8]
 unsigned int v12; // [bp-0x4b0]
 unsigned int v13; // [bp-0x4ac]
 unsigned int v14; // [bp-0x4a8]
 unsigned int index; // [bp-0x4a4]
 unsigned long v16; // [bp-0x4a0]
 unsigned int v17; // [bp-0x3d8]
 unsigned int v18; // [bp-0x3d4]
 unsigned int v19; // [bp-0x3d0]
 unsigned int pos; // [bp-0x3cc]
 unsigned int i0; // [bp-0x3c8]
 unsigned int j; // [bp-0x3c4]
 unsigned long v23; // [bp-0x3c0]
 unsigned int off; // [bp-0x1cc]
 unsigned int i; // [bp-0x1c8]
 unsigned long v26; // [bp-0x1c4]
 char v27; // [bp-0x34]
 char v28[4]; // [bp-0x30]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v30; // [bp-0x28]
 unsigned int v31; // [bp-0x24]
 unsigned int v32; // [bp-0x20]
 unsigned int v33; // [bp-0x1c]

 printf(&g_4031d8);
 flag1 = 1;
 v30 = 2;
 v31 = 3;
 v32 = 4;
 v33 = 5;
 printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&flag1, 5));
 strncpy(v28, "hello", 5);
 printf("ARR-L1-02 (array_string): %d\n", array_string(&v27));
 for (i = 0; 9 >= i; i += 1)
 {
 for (off = 0; 9 >= off; off += 1)
 {
 v4 = (i != off ? 0 : i);
 (&v26)[10 * i + off] = v4;
 }
 }
 printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v26));
 for (j = 0; 4 >= j; j += 1)
 {
 for (i0 = 0; 4 >= i0; i0 += 1)
 {
 for (pos = 0; 4 >= pos; pos += 1)
 {
 (&v23)[25 * j + 5 * i0 + pos] = 1;
 }
 }
 }
 printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v23));
 v19 = 30;
 v18 = 20;
 v17 = 10;
 printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, &v17));
 for (index = 0; 4 >= index; index += 1)
 {
 (&v16)[10 * index] = index * 10;
 }
 printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(&v16, 5));
 v14 = 10;
 v13 = 20;
 v12 = 30;
 v7 = &v14;
 v8 = &v13;
 v9 = &v12;
 result = 0;
 v2 = &v12;
 ptr = &v11;
 do
 {
 *((unsigned int *)&ptr) = 0;
 l = ptr + 4;
 ptr = l;
 } while (l != v2);
 printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(&v7, 3));
 for (idx = 0; 19 >= idx; idx += 1)
 {
 (&v6)[idx] = idx;
 }
 v0 = 3;
 v41 = array_complex_index(&v6, 5);
 v42 = printf("ARR-L2-04 (array_complex_index): %d\n", v41);
 return printf("ARR-L2-04 (array_complex_index): %d\n", v41);
}


// Function: ptr_single at 0x40121c
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Forward declarations for structs
typedef struct struct_0_inner {
 unsigned int field_0;
} struct_0_t;

typedef struct struct_1_inner_inner {
 struct struct_0_inner *field_0;
} struct_1_t;

// Function: ptr_double at 0x401238

int ptr_double(struct_0_t **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401258
int ptr_triple(struct_1_t **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x40127c
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int *cur; // [bp-0x4]

 cur = a0;
 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *(cur);
 cur += 1;
 }
 return v1;
}


// Function: ptr_offset at 0x4012ec
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x40130c
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x401330
unsigned int ptr_void(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 v0 = (a1 ? (a1 != 1 ? 4294967295 : *((char *)a0)) : *((int *)a0));
 return v0;
}


// Function: ptr_const at 0x401398
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x4013b4
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr);
}


// Forward declarations
unsigned int __dollar_a_10(unsigned int a0);
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1);

// Forward declarations
unsigned int __dollar_a_10(unsigned int a0);
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1);

// Function: ptr_func_simple at 0x4013dc
typedef int (*func_ptr_t)(unsigned int, unsigned int*);

int ptr_func_simple(func_ptr_t a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int ptr;

 v0 = a0(a1, &ptr);
 return a0(a1, &ptr);
}


// Function: ptr_func_complex at 0x40140c
extern unsigned int g_413f00;
extern unsigned int g_413f04;

typedef int (*func_ptr_complex_t)(unsigned int, unsigned int*, unsigned int*);

int ptr_func_complex(func_ptr_complex_t a0, unsigned int a1)
{
 unsigned int v2; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = g_413f04;
 v0 = g_413f00;
 v2 = a0(a1, &v0, &v1);
 return a0(a1, &v0, &v1);
}


// Function: ptr_cast at 0x401464
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401494
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: opaque_handle_op at 0x4014a8
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x4014c0
// Forward declarations for structs
typedef struct struct_2_inner {
 char field_0;
} struct_2_inner;

typedef struct struct_3_inner {
 char field_0;
} struct_3_inner;

typedef struct struct_1_inner struct_1;
typedef struct struct_2_inner struct_2;
typedef struct struct_3_inner struct_3;

extern char g_4032f5;

int test_pointer_types()
{
 unsigned int v45; // r0
 unsigned int v46; // r0
 char *v0; // [bp-0x9c]
 unsigned int v1; // [bp-0x98]
 unsigned int v2[1]; // [bp-0x94]
 unsigned int v3; // [bp-0x90]
 unsigned int v4[1]; // [bp-0x8c]
 unsigned int v5; // [bp-0x88]
 unsigned int v6[1]; // [bp-0x84]
 unsigned int v7[1]; // [bp-0x80]
 char v8; // [bp-0x79]
 unsigned int v9; // [bp-0x78]
 unsigned int flag1; // [bp-0x74]
 unsigned int v11; // [bp-0x70]
 unsigned int v12; // [bp-0x6c]
 unsigned int v13; // [bp-0x68]
 unsigned int v14; // [bp-0x64]
 unsigned int v15; // [bp-0x60]
 unsigned int v16; // [bp-0x5c]
 unsigned int v17; // [bp-0x58]
 unsigned int v18; // [bp-0x54]
 unsigned int v19; // [bp-0x50]
 unsigned int result; // [bp-0x4c]
 unsigned int v21; // [bp-0x48]
 unsigned int v22; // [bp-0x44]
 unsigned int v23; // [bp-0x40]
 unsigned int v24; // [bp-0x3c]
 struct_1 **v25; // [bp-0x38]
 struct_2 **v26; // [bp-0x34]
 char *v27; // [bp-0x30]
 unsigned int v28; // [bp-0x2c]
 struct_3 **v29; // [bp-0x28]
 char *v30; // [bp-0x24]
 unsigned int v31; // [bp-0x20]
 unsigned int v32[1]; // [bp-0x1c]

 printf(&g_4032f5);
 v1 = 5;
 v32[0] = 5;
 printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&v32));
 *(v2) = 10;
 v31 = 10;
 v30 = &v31;
 v29 = &v30;
 printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(v29));
 v28 = v1;
 v27 = &v28;
 v26 = &v27;
 v25 = &v26;
 printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(v25));
 result = 1;
 v21 = 2;
 v22 = 3;
 v23 = 4;
 v24 = 5;
 printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, v1));
 v15 = 10;
 v16 = 20;
 v17 = 30;
 v18 = 40;
 v19 = 50;
 printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(&v15, 2));
 flag1 = 0;
 v11 = 10;
 v12 = 20;
 v13 = 30;
 v14 = 40;
 printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&v14, &flag1));
 v9 = 42;
 v8 = 65;
 v0 = "PTR-L2-07 (ptr_void): %d\n";
 printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&v9, 0));
 ptr_void(&v8, 1);
 printf(v0);
 *(v7) = *(v2);
 printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&v7));
 *(v6) = *(v2);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&v6));
 printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(__dollar_a_10, v1));
 v5 = v1;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v5));
 v4[0] = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&v4));
 v3 = opaque_handle_create(*(v2));
 v45 = opaque_handle_op(v3);
 v46 = printf("PTR-L2-13 (opaque_handle_op): %d\n", v45);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", v45);
}


// Function: __dollar_a_10 at 0x401768
unsigned int __dollar_a_10(unsigned int a0)
{
 return a0 * 2;
}


// Function: complex_callback at 0x401780
unsigned int complex_callback(unsigned int *ptr, unsigned int *a1)
{
 *(ptr) = *(ptr) + 10;
 return (*(a1) ? 1 : 0);
}


// Function: struct_simple at 0x4017b4
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x4017dc
unsigned int struct_array(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (idx = 0; a1 > idx; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 12)) + *((int *)(ptr + idx * 12 + 4)) + *((int *)(ptr + idx * 12 + 8));
 }
 return v1;
}


// Function: struct_nested at 0x401858
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x401878
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401898
typedef struct struct_1_inner {
 unsigned int field_0;
} struct_1_inner;

typedef struct struct_0_inner {
 unsigned int field_0;
 struct struct_1_inner *field_4;
} struct_0_inner;

int struct_with_ptr(struct_0_inner *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = ptr->field_0;
 v0 = (!ptr->field_4 ? 0 : ptr->field_4->field_0);
 return v1 + v0;
}


// Function: struct_bitfields at 0x4018f0
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // r1

 v0 = *(ptr);
 return (v0 & 1) + (3 & v0 >> 1) + (7 & v0 >> 3) + (v0 >> 6);
}


// Function: union_type at 0x401928
unsigned int union_type(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a1 ? (a1 != 1 ? *((char *)a0) : __fixsfsi(*((int *)a0))) : *((int *)a0));
 return v0;
}


// Function: union_array at 0x4019a0
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (v0 = 0; a1 > v0; v0 += 1)
 {
 v1 += *((int *)(ptr + v0 * 4));
 }
 return v1;
}


// Function: enum_type at 0x401a08
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x401a24
typedef struct struct_0_enum {
 char padding_0[2];
 unsigned short field_2;
} struct_0_enum_t;

extern unsigned int __dollar_d_11[4];

unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (3 >= a0)
 goto (unsigned int *)((char *)&__dollar_d_11[0] + __dollar_d_11[a0]);
 v0 = 4294967197;
}


// Function: sub_401a89 at 0x401a89
int sub_401a89(unsigned int a0)
{
}


// Function: struct_func_ptr at 0x401aa4
int struct_func_ptr(unsigned int *a0)
{
 unsigned int v1; // r0
 char v0; // [bp-0xc]

 v1 = (*((int *)(*((int *)&v0) + 4)))(*(a0), a0[1]);
 return (*((int *)(*((int *)&v0) + 4)))(*(a0), a0[1]);
}


// Function: linked_list at 0x401ad4
typedef struct struct_0_ll {
 unsigned int field_0;
 struct struct_0_ll *field_4;
} struct_0_ll;

unsigned int linked_list(struct_0_ll *a0)
{
 struct_0_ll *cur; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (cur = a0; cur; cur = cur->field_4)
 {
 v1 += cur->field_0;
 }
 return v1;
}


// Function: doubly_linked_list at 0x401b30
typedef struct struct_0_dll {
 unsigned int field_0;
 struct struct_0_dll *field_4;
} struct_0_dll;

unsigned int doubly_linked_list(struct_0_dll *a0)
{
 struct_0_dll *v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = 0;
 for (v0 = a0; v0; v0 = v0->field_4)
 {
 v1 += v0->field_0;
 }
 return v1;
}


// Function: binary_tree_sum at 0x401b8c
unsigned int binary_tree_sum(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 if (ptr)
 {
 v0 = *(ptr);
 v1 = v0 + binary_tree_sum(ptr[1]);
 v2 = v1 + binary_tree_sum(ptr[2]);
 return v2;
 }
 v2 = 0;
 return v2;
}


// Function: binary_tree at 0x401c0c
unsigned int binary_tree(unsigned int *a0)
{
 unsigned int v0; // r0

 v0 = binary_tree_sum(a0);
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401c30
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int graph_traverse(struct_0 **ptr)
{
 unsigned int cur; // [bp-0x10]
 unsigned int index; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = 0;
 for (index = 0; ptr[10] > index; index += 1)
 {
 for (cur = ptr[index]; cur; cur = *((int *)(cur + 4)))
 {
 v2 += *((int *)cur);
 }
 }
 return v2;
}


// Forward declarations for structs used in test_composite_types
typedef struct struct_0_ll {
 unsigned int field_0;
 struct struct_0_ll *field_4;
} struct_0_ll;

typedef struct struct_0_dll {
 unsigned int field_0;
 struct struct_0_dll *field_4;
} struct_0_dll;

// Function: test_composite_types at 0x401cc8
extern char g_40348f;
extern unsigned int g_413f08[1];
extern unsigned int g_413f0c;

unsigned int test_composite_types()
{
 unsigned int v75; // r2
 unsigned int v78; // r0
 unsigned int v79; // r0
 unsigned int v0; // [bp-0x134]
 unsigned int v1; // [bp-0x130]
 unsigned int flag12; // [bp-0x12c]
 unsigned int v3; // [bp-0x128]
 char *v4; // [bp-0x124]
 char *v5; // [bp-0x120], Other Possible Types: char
 unsigned int v6; // [bp-0xf8]
 unsigned int flag16; // [bp-0xf4]
 unsigned int flag15; // [bp-0xf0]
 unsigned int v9[1]; // [bp-0xec]
 unsigned int flag14; // [bp-0xe8]
 unsigned int flag13; // [bp-0xe4]
 unsigned int v12; // [bp-0xe0]
 char *v13; // [bp-0xdc]
 unsigned int v14; // [bp-0xd8]
 unsigned int v16; // [bp-0xd4]
 unsigned int v17; // [bp-0xd0]
 char *v18; // [bp-0xcc]
 unsigned int v19; // [bp-0xc8]
 char *v20; // [bp-0xc4]
 char v21; // [bp-0xc0], Other Possible Types: unsigned int
 char *v22; // [bp-0xbc]
 char v23; // [bp-0xb8], Other Possible Types: unsigned int
 unsigned int v24; // [bp-0xb4]
 unsigned int v25[1]; // [bp-0xb0]
 unsigned int v26; // [bp-0xac]
 unsigned int v27; // [bp-0xa8]
 unsigned int v28; // [bp-0xa4]
 unsigned int v29; // [bp-0xa0]
 unsigned int v30; // [bp-0x9c]
 unsigned short v31[2]; // [bp-0x98]
 unsigned int flag1; // [bp-0x94]
 unsigned int v33; // [bp-0x90]
 char *v34; // [bp-0x8c]
 unsigned int v35; // [bp-0x88]
 unsigned int result; // [bp-0x84]
 unsigned int flag7; // [bp-0x80]
 unsigned int v38; // [bp-0x7c]
 unsigned int v39; // [bp-0x78]
 unsigned int v40; // [bp-0x74]
 unsigned int v41; // [bp-0x70]
 unsigned int v42; // [bp-0x6c]
 unsigned int flag8; // [bp-0x68]
 unsigned int flag9; // [bp-0x64]
 unsigned int flag10; // [bp-0x60]
 unsigned int flag11; // [bp-0x5c]
 unsigned int v47; // [bp-0x58]
 unsigned int v48; // [bp-0x54]
 unsigned int v49; // [bp-0x50]
 unsigned int v50; // [bp-0x4c]
 unsigned int flag6; // [bp-0x48]
 unsigned int v52; // [bp-0x44]
 unsigned int v53; // [bp-0x40]
 unsigned int flag3; // [bp-0x3c]
 unsigned int flag4; // [bp-0x38]
 unsigned int flag5; // [bp-0x34]
 unsigned int v57; // [bp-0x30]
 unsigned int v58; // [bp-0x2c]
 unsigned int v59; // [bp-0x28]
 unsigned int flag2[1]; // [bp-0x24]
 unsigned int v61; // [bp-0x20]
 unsigned int v62; // [bp-0x1c]

 printf(&g_40348f);
 v62 = 3;
 v61 = 2;
 flag2[0] = 1;
 printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&flag2));
 flag3[0] = 1;
 flag4[0] = 1;
 flag5[0] = 1;
 v57 = 2;
 v58 = 2;
 v59 = 2;
 v3 = 2;
 printf("CMP-L2-02 (struct_array): %d\n", struct_array(&flag3, 2));
 v49 = 5;
 v50 = 10;
 flag6 = 0;
 v52 = 100;
 v53 = 200;
 printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&v49));
 flag7 = 1;
 v38 = 2;
 v39 = 3;
 v40 = 10;
 v41 = 20;
 v42 = 255;
 flag8 = 0;
 flag9 = 0;
 flag10 = 0;
 flag11 = 0;
 v47 = 255;
 v48 = 42;
 printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&flag7));
 result = 0;
 v35 = 20;
 v1 = 10;
 v33 = 10;
 v34 = &v35;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v33));
 flag1 = 0;
 *(&v31) = 6429;
 printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v31));
 v30 = 305419896;
 flag12 = 0;
 printf("CMP-L2-07 (union_type): %d\n", union_type(&v30, 0));
 v29 = 30;
 v28 = 20;
 v27 = 10;
 printf("CMP-L2-08 (union_array): %d\n", union_array(&v27, 3));
 printf("CMP-L2-09 (enum_type): %d\n", enum_type(1));
 printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(v3));
 v26 = g_413f0c;
 *(v25) = g_413f08;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v25));
 v19 = v1;
 v20 = &v21;
 v0 = 20;
 v21 = 20;
 v22 = &v23;
 v23 = 30;
 v24 = flag12;
 printf("CMP-L2-12 (linked_list): %d\n", linked_list((struct_0_ll*)&v19));
 v75 = flag12;
 v12 = v1;
 v13 = &v16;
 v14 = flag12;
 v16 = v0;
 v17 = v14;
 v18 = &v12;
 v13 = &v16;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list((struct_0_dll*)&v12));
 flag13 = 0;
 flag14 = 0;
 *(v9) = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&v9));
 flag15 = 0;
 flag16 = 1;
 v4 = &v5;
 memset(&v5, flag12, 44);
 v5 = (char*)&flag16;
 v6 = v3;
 v5 = (char*)&flag16;
 v78 = graph_traverse((struct_0**)v4);
 v79 = printf("CMP-L2-15 (graph_traverse): %d\n", v78);
 return printf("CMP-L2-15 (graph_traverse): %d\n", v78);
}


// Function: main at 0x4020b8
unsigned int main()
{
 unsigned int result; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]

 result = 0;
 flag1 = 0;
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return result;
}


// Function: sub_4020f1 at 0x4020f1
void sub_4020f1(unsigned int a0)
{
}


// Function: sub_4020f5 at 0x4020f5
void sub_4020f5(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 unsigned int v2; // r6
 unsigned int v3; // r7

 *((unsigned int *)(a0 & 0xfffffffc)) = a0;
 *((unsigned int *)((a0 & 0xfffffffc) + 4)) = a1;
 *((unsigned int *)((a0 & 0xfffffffc) + 8)) = a2;
 *((unsigned int *)((a0 & 0xfffffffc) + 12)) = a3;
 *((unsigned int *)((a0 & 0xfffffffc) + 16)) = v0;
 *((unsigned int *)((a0 & 0xfffffffc) + 20)) = v1;
 *((unsigned int *)((a0 & 0xfffffffc) + 24)) = v2;
 *((unsigned int *)((a0 & 0xfffffffc) + 28)) = v3;
}


// Function: sub_4020f9 at 0x4020f9
void sub_4020f9()
{
}


// Function: sub_4020fd at 0x4020fd
int sub_4020fd()
{
}


// Function: sub_402101 at 0x402101
void sub_402101(unsigned int a0, unsigned int a1)
{
}


// Function: sub_402115 at 0x402115
int sub_402115(unsigned int *ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
 *(ptr) = a3;
}


// Function: sub_402119 at 0x402119
int sub_402119(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_40211d at 0x40211d
int sub_40211d(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_402121 at 0x402121
int sub_402121(unsigned int a0)
{
}


// Function: sub_402125 at 0x402125
int sub_402125(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_40212d at 0x40212d
int sub_40212d()
{
}


// Function: sub_402131 at 0x402131
int sub_402131(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r7

 *((unsigned int *)(a2 & 0xfffffffc)) = a3;
 *((unsigned int *)((a2 & 0xfffffffc) + 4)) = v0;
}


// Function: sub_402139 at 0x402139
int sub_402139(unsigned int a0)
{
 *((unsigned int *)(a0 * 2)) = a0;
}


// Function: sub_40213d at 0x40213d
int sub_40213d()
{
}


// Function: sub_40213f at 0x40213f
int sub_40213f()
{
}


// Function: sub_402141 at 0x402141
int sub_402141()
{
}


// Function: sub_402145 at 0x402145
int sub_402145()
{
}


// Function: sub_402147 at 0x402147
int sub_402147()
{
}


// Function: sub_402149 at 0x402149
typedef struct struct_0_ll_simple {
 struct struct_0_ll_simple *field_0;
} struct_0_ll_simple_t;

int sub_402149(struct_0_ll_simple_t **ptr)
{
 *(ptr) = ptr;
}


// Function: sub_40214d at 0x40214d
int sub_40214d(unsigned int a0, unsigned short a1, unsigned int a2)
{
 unsigned int v0; // r6

 *((unsigned short *)(a2 + v0)) = a1;
}


// Function: sub_402153 at 0x402153
int sub_402153()
{
}


// Function: sub_402155 at 0x402155
int sub_402155()
{
 sub_40215b(); /* do not return */
}


// Function: sub_402157 at 0x402157
int sub_402157(unsigned int a0, unsigned int a1)
{
 sub_40215b(); /* do not return */
}


// Function: sub_40215b at 0x40215b
int sub_40215b()
{
}


// Function: sub_402161 at 0x402161
int sub_402161()
{
}


// Function: sub_402165 at 0x402165
int sub_402165(unsigned int a0)
{
}


// Function: sub_40216b at 0x40216b
int sub_40216b()
{
}


// Function: sub_40216d at 0x40216d
int sub_40216d(unsigned int a0)
{
 unsigned int v0; // r5

 *((unsigned int *)(a0 * 2)) = v0;
}


// Function: sub_402175 at 0x402175
int sub_402175(unsigned int a0)
{
}


// Function: sub_402179 at 0x402179
int sub_402179(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_40217d at 0x40217d
int sub_40217d(unsigned int a0)
{
}


// Function: sub_402181 at 0x402181
int sub_402181()
{
}


// Function: sub_402189 at 0x402189
void sub_402189(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 unsigned int v2; // r6
 unsigned int v3; // r7

 *((unsigned int *)(a0 & 0xfffffffc)) = a0;
 *((unsigned int *)((a0 & 0xfffffffc) + 4)) = a2;
 *((unsigned int *)((a0 & 0xfffffffc) + 8)) = a3;
 *((unsigned int *)((a0 & 0xfffffffc) + 12)) = v0;
 *((unsigned int *)((a0 & 0xfffffffc) + 16)) = v1;
 *((unsigned int *)((a0 & 0xfffffffc) + 20)) = v2;
 *((unsigned int *)((a0 & 0xfffffffc) + 24)) = v3;
}


// Function: sub_40218d at 0x40218d
typedef struct struct_0_sub_40218d {
 char padding_0[26];
 unsigned short field_1a;
} struct_0_sub_40218d_t;

void sub_40218d(unsigned int a0, unsigned int a1, unsigned int a2, struct_0 *ptr)
{
 unsigned short v0; // r4

 ptr->field_1a = v0;
}


// Function: sub_402199 at 0x402199
int sub_402199()
{
}


// Function: sub_40219b at 0x40219b
void sub_40219b()
{
}


// Function: sub_4021a1 at 0x4021a1
int sub_4021a1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
}


// Function: sub_4021a4 at 0x4021a4
int sub_4021a4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0;
}


// Function: sub_4021a9 at 0x4021a9
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

int sub_4021a9(struct_0 *ptr, unsigned int a1, unsigned int a2)
{
 ptr->field_10 = a2;
}


// Function: sub_4021ad at 0x4021ad
int sub_4021ad(unsigned int a0)
{
}


// Function: sub_4021b1 at 0x4021b1
int sub_4021b1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_4021b4 at 0x4021b4
int sub_4021b4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_4021b9 at 0x4021b9
int sub_4021b9()
{
}


// Function: sub_4021bd at 0x4021bd
typedef struct struct_0 {
 char padding_0[2];
 unsigned short field_2;
} struct_0;

void sub_4021bd(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // r4
 unsigned int v1; // r5
 struct_0 *ptr; // r6
 unsigned int v3; // r0
 unsigned int v4; // r7

 *((unsigned int *)(a1 + a0)) = v0;
 *((unsigned int *)(a0 & 0xfffffffc)) = a2;
 *((unsigned int *)((a0 & 0xfffffffc) + 4)) = v0;
 *((unsigned int *)((a0 & 0xfffffffc) + 8)) = v1;
 *((struct_0 **)((a0 & 0xfffffffc) + 12)) = ptr;
 v3 = a0 + 16;
 *((unsigned int *)(a1 & 0xfffffffc)) = v3;
 *((unsigned int *)((a1 & 0xfffffffc) + 4)) = v4;
 ptr->field_2 = v3;
}


// Function: sub_4021cd at 0x4021cd
int sub_4021cd(unsigned int a0, unsigned int a1)
{
 sub_4021d1(); /* do not return */
}


// Function: sub_4021cf at 0x4021cf
int sub_4021cf()
{
}


// Function: sub_4021d1 at 0x4021d1
int sub_4021d1(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4021d5 at 0x4021d5
void sub_4021d5(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_4021d9 at 0x4021d9
int sub_4021d9()
{
}


// Function: sub_4021df at 0x4021df
typedef struct struct_0 {
 char padding_0[2];
 unsigned short field_2;
} struct_0;

int sub_4021df(unsigned int a0)
{
 unsigned int v0; // cc_op
 unsigned int v1; // cc_dep1
 unsigned int v2; // cc_dep2
 unsigned int v3; // cc_ndep
 struct_0 *ptr; // r6

 if ((char)armg_calculate_condition(v0 | 48, v1, v2, v3))
 goto LABEL_0x402123;
 if (!((char)armg_calculate_condition(37, a0 >> 4, a0 >> 3 & 1, armg_calculate_flag_v(v0, v1, v2, v3))))
 {
 ptr->field_2 = a0;
 if ((char)armg_calculate_condition(133, a0 >> 4, a0 >> 3 & 1, armg_calculate_flag_v(v0, v1, v2, v3)))
 sub_402165(a0); /* do not return */
 }
}


// Function: sub_4021ed at 0x4021ed
void sub_4021ed(unsigned int a0)
{
}


// Function: sub_4021f1 at 0x4021f1
void sub_4021f1(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
}


// Function: sub_4021f9 at 0x4021f9
int sub_4021f9(unsigned int a0, unsigned int a1)
{
}


// Function: sub_4021fc at 0x4021fc
int sub_4021fc(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40222d at 0x40222d
int sub_40222d(unsigned int a0, unsigned int a1)
{
}


// Function: sub_402231 at 0x402231
int sub_402231(unsigned int a0)
{
 unsigned int v0; // r4

 *((unsigned int *)(v0 + a0)) = a0;
}


// Function: sub_402235 at 0x402235
int sub_402235()
{
}


// Function: sub_402239 at 0x402239
void sub_402239()
{
}


// Function: sub_40223d at 0x40223d
int sub_40223d(unsigned int a0, unsigned int a1, unsigned int a2)
{
}


// Function: sub_402241 at 0x402241
int sub_402241(unsigned int a0)
{
}


// Function: sub_402245 at 0x402245
int sub_402245()
{
 sub_402247(); /* do not return */
}


// Function: sub_402247 at 0x402247
int sub_402247()
{
}


// Function: sub_402249 at 0x402249
void sub_402249(unsigned int a0)
{
}


// Function: sub_40224d at 0x40224d
int sub_40224d()
{
}


// Function: sub_40224f at 0x40224f
int sub_40224f()
{
}


// Function: sub_402251 at 0x402251
int sub_402251()
{
}


// Function: sub_40225d at 0x40225d
int sub_40225d()
{
}


// Function: sub_40225f at 0x40225f
int sub_40225f()
{
}


// Function: sub_402261 at 0x402261
int sub_402261()
{
}


// Function: sub_402265 at 0x402265
int sub_402265()
{
}


// Function: sub_402269 at 0x402269
int sub_402269()
{
}


// Function: sub_40226d at 0x40226d
int sub_40226d(unsigned int a0)
{
}


// Function: sub_402271 at 0x402271
int sub_402271()
{
}


// Function: sub_402275 at 0x402275
int sub_402275()
{
}


// Function: sub_402279 at 0x402279
int sub_402279()
{
}


// Function: sub_40227b at 0x40227b
void sub_40227b(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
}


// Function: sub_40227c at 0x40227c
unsigned int sub_40227c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // cc_op
 unsigned int v1; // cc_dep1
 unsigned int v2; // cc_dep2
 unsigned int v3; // cc_ndep

 if (!armg_calculate_condition(v0, v1, v2, v3))
 return a0;
 return a0 & ~(a3 >> 31);
}


// Function: sub_4022d0 at 0x4022d0
unsigned int sub_4022d0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r12
 unsigned int flag3; // r5
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v15; // cc_op
 unsigned int v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 unsigned int v19; // cc_dep1
 unsigned int flag2; // r4
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep1
 unsigned int flag1; // cc_dep2
 unsigned int v25; // r2
 unsigned int v26; // cc_dep1
 unsigned int result; // cc_dep2
 unsigned int v3; // cc_dep1
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v34; // r0
 unsigned int v35; // r1
 unsigned int v36; // cc_op
 unsigned int v4; // cc_dep2
 unsigned int v37; // cc_dep1
 unsigned int v38; // cc_dep2
 unsigned int v39; // cc_ndep
 unsigned int v40; // cc_dep1
 unsigned int v41; // cc_dep2
 unsigned int v42; // cc_ndep
 unsigned int v43; // cc_dep1
 unsigned int v44; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v47; // cc_dep1
 unsigned int v48; // cc_dep2
 unsigned int v49; // cc_ndep
 unsigned int v50; // r0
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1

 flag3 = v0 & a3 >> 20;
 if ((flag2 ^ v0))
 {
 v6 = (armg_calculate_condition(21, v3, v4, v5) ? flag3 ^ v0 : v3);
 v7 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_4022fc;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_4022fc:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402306;
LABEL_402305:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_40230a;
LABEL_402309:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 else
 {
 v34 = a0;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402305;
LABEL_402306:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_402309;
LABEL_40230a:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 v40 = flag2 ^ v0;
 v41 = armg_calculate_flag_c(v36, v37, v38, v39);
 v42 = armg_calculate_flag_v(v36, v37, v38, v39);
 v43 = v40;
 v44 = v41;
 if (!(flag2 ^ v0))
 {
 v42 = armg_calculate_flag_v(5, v40, v41, v42);
 v43 = v34 | v35 * 0x1000;
 v44 = v35 >> 20 & 1;
 if (v34 || v35 * 0x1000)
 return v34;
 }
 if (!(flag3 ^ v0))
 {
 v47 = a2 | a3 * 0x1000;
 v48 = a3 >> 20 & 1;
 v49 = armg_calculate_flag_v(5, flag3 ^ v0, armg_calculate_flag_c(5, v43, v44, v42), armg_calculate_flag_v(5, v43, v44, v42));
 if (a2 || a3 * 0x1000)
 {
 v50 = a2;
 if (!armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_402332;
LABEL_402331:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_402331;
LABEL_402332:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 }
 }
 }
 if (a0 || a1 * 2)
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 else
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 v19 = flag2;
 v20 = armg_calculate_flag_c(v15, v16, v17, v18);
 v21 = armg_calculate_flag_v(v15, v16, v17, v18);
 v22 = v19;
 if (!flag2)
 {
 while (true)
 {
 a0 *= 2;
 a1 = a1 * 2 + (a0 >> 31 & 1);
 v23 = a1 & 0x100000;
 flag1 = 0;
 v21 = armg_calculate_flag_v(5, v19, v20, v21);
 if (!(a1 & 0x100000))
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 else
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 }
 v20 = armg_calculate_flag_c(5, v23, 0, v21);
 v21 = armg_calculate_flag_v(5, v23, 0, v21);
 if (!flag3)
 goto LABEL_4022b0;
 return a0;
 v22 = flag3;
 }
LABEL_4022b0:
 while (true)
 {
 v25 = a2 * 2;
 a3 = a3 * 2 + (a2 >> 31 & 1);
 v26 = a3 & 0x100000;
 result = 0;
 v21 = armg_calculate_flag_v(5, v22, v20, v21);
 if (!(a3 & 0x100000))
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 else
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 }
}


// Function: sub_40233d at 0x40233d
int sub_40233d(unsigned int a0)
{
}


// Function: sub_402341 at 0x402341
int sub_402341()
{
}


// Function: sub_402345 at 0x402345
int sub_402345(unsigned int a0, unsigned int a1)
{
}


// Function: sub_40234b at 0x40234b
int sub_40234b()
{
}


// Function: sub_40234d at 0x40234d
typedef struct struct_0 {
 char padding_0[2];
 unsigned short field_2;
} struct_0;

int sub_40234d(unsigned short a0)
{
 struct_0 *ptr; // r6

 ptr->field_2 = a0;
}


// Function: __mulsf3 at 0x40235c
extern char g_800000;

unsigned int __mulsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2
 unsigned int v1; // r3
 unsigned int v10; // cc_op
 unsigned int v79; // cc_ndep
 unsigned int v80; // r0
 unsigned int v81; // r2
 unsigned int v82; // cc_op
 unsigned int v83; // cc_dep1
 unsigned int v84; // cc_dep2
 unsigned int v85; // cc_ndep
 unsigned int v86; // cc_dep1
 unsigned int v87; // cc_dep2
 unsigned int v88; // cc_ndep
 unsigned int v11; // cc_dep1
 unsigned int v89; // r0
 unsigned int v90; // cc_dep1
 unsigned int v91; // cc_dep2
 unsigned int v92; // cc_ndep
 unsigned int v93; // cc_dep1
 unsigned int v94; // cc_dep2
 unsigned int v12; // cc_dep2
 unsigned int v95; // cc_ndep
 unsigned int v96; // cc_dep1
 unsigned int v97; // cc_dep2
 unsigned int v98; // cc_ndep
 unsigned int v99; // cc_dep1
 unsigned int v100; // cc_dep2
 unsigned int v103; // cc_dep1
 unsigned int v104; // cc_dep2
 unsigned int v13; // cc_ndep
 unsigned int v105; // cc_ndep
 unsigned int v18; // cc_op
 unsigned int v19; // cc_dep1
 unsigned int v2; // cc_op
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v30; // cc_op
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v4; // cc_dep2
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_dep2
 unsigned int v44; // cc_ndep
 unsigned int v45; // cc_op
 unsigned int v46; // cc_dep1
 unsigned int v47; // cc_dep2
 unsigned int v48; // cc_ndep
 unsigned int v49; // cc_op
 unsigned int v5; // cc_ndep
 unsigned int v50; // cc_dep1
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r0
 unsigned int v54; // r0
 unsigned int v6; // cc_op
 unsigned int v55; // r1
 unsigned int v7; // cc_dep1
 unsigned int v56; // r1
 unsigned int v8; // cc_dep2
 unsigned int v61; // r2
 unsigned int v62; // r12
 unsigned int result; // r0
 unsigned int v64; // r1
 unsigned int v65; // cc_op
 unsigned int v66; // cc_dep1
 unsigned int v67; // cc_dep2
 unsigned int v68; // cc_ndep
 unsigned int v9; // cc_ndep
 unsigned int v71; // r1
 unsigned int v72; // r3
 unsigned int v73; // r1
 unsigned int v74; // r1
 unsigned int v75; // r0
 unsigned int v76; // r2
 unsigned int v77; // cc_dep1
 unsigned int v78; // cc_dep2

 v0 = 255 & a0 >> 23;
 if ((255 & a0 >> 23))
 {
 v1 = 255 & a1 >> 23;
 v6 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 5 : v2);
 v7 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 255 & a1 >> 23 : v3);
 v8 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? a1 >> 22 & 1 : v4);
 v9 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? armg_calculate_flag_v(v2, v3, v4, v5) : v5);
 if (!armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_40236a;
LABEL_402369:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_40236e;
LABEL_40236d:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402470;
 }
 else
 {
 v1 = a3;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_402369;
LABEL_40236a:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_40236d;
LABEL_40236e:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_402470:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_402498;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_402498:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_4024a2;
LABEL_4024a1:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_4024a6;
LABEL_4024a5:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_4024aa;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_4024a1;
LABEL_4024a2:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_4024a5;
LABEL_4024a6:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_4024aa:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_4024b0:
 v96 = v0 ^ 255;
 v97 = armg_calculate_flag_c(5, v93, v94, v95);
 v98 = armg_calculate_flag_v(5, v93, v94, v95);
 v99 = v96;
 v100 = v97;
 if (!(v0 ^ 255))
 {
 v98 = armg_calculate_flag_v(5, v96, v97, v98);
 v99 = v89 * 0x200;
 v100 = v89 >> 23 & 1;
 if (v89 * 0x200)
 return v89 | 0x7f000000 | 0xc00000;
 }
 if ((v1 ^ 255))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | &g_800000;
 v103 = a1 * 0x200;
 v104 = a1 >> 23 & 1;
 v105 = armg_calculate_flag_v(5, v1 ^ 255, armg_calculate_flag_c(5, v99, v100, v98), armg_calculate_flag_v(5, v99, v100, v98));
 if (a1 * 0x200)
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (a1 ^ a1) & 0x80000000 | 0x7f000000 | &g_800000;
 return a1 | 0x7f000000 | 0xc00000;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | &g_800000;
 return v89 | 0x7f000000 | 0xc00000;
 }
 }
 }
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
 goto LABEL_4024b0;
 }
 }
 if ((a0 & 2147483647))
 {
 v45 = (armg_calculate_condition(21, v42, v43, v44) ? 5 : 5);
 v46 = (armg_calculate_condition(21, v42, v43, v44) ? a1 & 2147483647 : v42);
 v47 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v48 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 return (a0 ^ a1) & 0x80000000;
 }
 else
 {
 v45 = (armg_calculate_condition(21, v42, v43, v44) ? 5 : 5);
 v46 = (armg_calculate_condition(21, v42, v43, v44) ? a1 & 2147483647 : v42);
 v47 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v48 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!((char)armg_calculate_condition(v45 | 16, v46, v47, v48)))
 return (a0 ^ a1) & 0x80000000;
 }
 v49 = 5;
 v50 = v0;
 v51 = armg_calculate_flag_c(v45, v46, v47, v48);
 v52 = armg_calculate_flag_v(v45, v46, v47, v48);
 v53 = a0;
 if (armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_40243d;
 else
 goto LABEL_40243e;
 while (true)
 {
 v53 = v54;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_40243d:
 v54 = v53 * 2;
 if (!armg_calculate_condition(v49, v50, v51, v52))
 goto LABEL_402442;
 goto LABEL_402441;
 }
 else
 {
LABEL_40243e:
 v54 = v53;
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_402441:
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & &g_800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!armg_calculate_condition(5, v50, v51, v52))
 goto LABEL_402446;
 goto LABEL_402445;
 }
 else
 {
LABEL_402442:
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & &g_800000 : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (armg_calculate_condition(v49, v50, v51, v52))
 {
LABEL_402445:
 v0 -= 1;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 else
 {
LABEL_402446:
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 }
 }
 }
 }
 a0 = v54 | a0 & 0x80000000;
 v30 = 5;
 v31 = v1;
 v32 = armg_calculate_flag_c(v49, v50, v51, v52);
 v33 = armg_calculate_flag_v(v49, v50, v51, v52);
 v55 = a1;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402459;
 else
 goto LABEL_40245a;
 while (true)
 {
 v55 = v56;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_402459:
 v56 = v55 * 2;
 if (!armg_calculate_condition(v30, v31, v32, v33))
 goto LABEL_40245e;
 goto LABEL_40245d;
 }
 else
 {
LABEL_40245a:
 v56 = v55;
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_40245d:
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & &g_800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402462;
 goto LABEL_402461;
 }
 else
 {
LABEL_40245e:
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & &g_800000 : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_402461:
 v1 -= 1;
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 else
 {
LABEL_402462:
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 }
 }
 }
 }
 a1 = v56 | a1 & 0x80000000;
 }
 }
 v61 = v0 + v1;
 v62 = a0 ^ a1;
 result = a0 * 0x200;
 if (a0 * 0x200)
 {
 v64 = a1 * 0x200;
 v65 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? 5 : v30);
 v66 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 * 0x200 : v31);
 v67 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 >> 23 & 1 : v32);
 v68 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v65, v66, v67, v68))
 goto LABEL_4023cc;
LABEL_402388:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < &g_800000)
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_4023a6;
LABEL_4023a5:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_4023aa;
LABEL_4023a9:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_4023a5;
LABEL_4023a6:
 v74 = v73;
 if (armg_calculate_condition(50, v71, &g_800000, 0))
 goto LABEL_4023a9;
LABEL_4023aa:
 }
 v75 = v62 & 0x80000000 | v74;
 v76 = v61 - 127 - (armg_calculate_flag_c(2, v71, &g_800000, 0) ^ 1);
 if (253 >= v76)
 {
 if (v72 == 0x80000000)
 return (v62 & 0x80000000 | v74) + v76 * &g_800000 + (0x80000000 <= v72) & 4294967294;
 return (v62 & 0x80000000 | v74) + v76 * &g_800000 + (0x80000000 <= v72);
 }
 else
 {
 if ((char)armg_calculate_condition(194, v76, 253, 0))
 return (v62 & 0x80000000 | v74) & 0x80000000 | 0x7f000000 | &g_800000;
 }
 }
 else
 {
 v64 = a1;
 v65 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? 5 : v30);
 v66 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 * 0x200 : v31);
 v67 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? a1 >> 23 & 1 : v32);
 v68 = (armg_calculate_condition(v30 | 16, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!((char)armg_calculate_condition(v65, v66, v67, v68)))
 goto LABEL_402388;
LABEL_4023cc:
 v77 = result;
 v78 = armg_calculate_flag_c(v65, v66, v67, v68);
 v79 = armg_calculate_flag_v(v65, v66, v67, v68);
 if (!result)
 v64 *= 0x200;
 v80 = v62 & 0x80000000 | result >> 9 | v64 >> 9;
 v81 = v61 - 127;
 if (127 < v61)
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (!armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_4023ea;
LABEL_4023e9:
 v80 |= v81 * &g_800000;
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_4023f0;
 return v80 | v81 * &g_800000;
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_4023e9;
LABEL_4023ea:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_4023f0;
 return v80;
 }
LABEL_4023f0:
 v75 = v80 | &g_800000;
 v72 = 0;
 v76 = v81 - 1;
 if ((char)armg_calculate_condition(194, v81, 1, 0))
 return (v80 | &g_800000) & 0x80000000 | 0x7f000000 | &g_800000;
 }
 if (armg_calculate_condition(209, v76, 25, 0))
 {
 v75 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_40240c;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_40240c;
 return v75;
 }
LABEL_40240c:
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
}


// Function: __aeabi_drsub at 0x4024f4
int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = (unsigned int)&__adddf3;
 return (unsigned int)&__adddf3;
}


// Function: __subdf3 at 0x4024fc
int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __adddf3(a0, a1, a2, a3, 0, 0, 0, 0, 0, 0);
 return __adddf3(a0, a1, a2, a3, 0, 0, 0, 0, 0, 0);
}


// Function: __adddf3 at 0x402500
extern unsigned int g_400000;

unsigned int __adddf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
 unsigned int v1; // r4
 unsigned int v2; // r5
 unsigned int v11; // cc_ndep
 unsigned int v95; // r2
 unsigned int v96; // r2
 unsigned int v97; // r0
 unsigned int v98; // r1
 unsigned int v100; // r1
 unsigned int v101; // r4
 unsigned int v102; // r4
 char v103; // r4
 unsigned int v104; // cc_op
 unsigned int v105; // cc_dep1
 unsigned int v106; // cc_dep2
 unsigned int v107; // cc_ndep
 unsigned int v108; // cc_dep1
 unsigned int v109; // cc_dep2
 unsigned int v110; // cc_ndep
 unsigned int v111; // cc_dep1
 unsigned int v112; // cc_dep2
 unsigned int v113; // cc_ndep
 unsigned int v114; // cc_dep1
 unsigned int v115; // cc_dep2
 unsigned int v116; // cc_ndep
 unsigned int v117; // r1
 unsigned int v15; // cc_op
 unsigned int v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v25; // cc_op
 unsigned int v26; // cc_dep1
 unsigned int v27; // cc_dep2
 unsigned int v28; // cc_ndep
 unsigned int v29; // r4
 unsigned int v30; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v31; // r5
 unsigned int v32; // r5
 unsigned int v33; // r2
 unsigned int v34; // r3
 unsigned int v35; // cc_op
 unsigned int v36; // cc_dep1
 unsigned int v38; // cc_ndep
 unsigned int v39; // r1
 unsigned int v40; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v41; // r0
 unsigned int v43; // cc_op
 unsigned int v44; // cc_dep1
 unsigned int v46; // cc_ndep
 unsigned int v47; // r3
 unsigned int v48; // cc_dep2
 unsigned int v49; // r2
 unsigned int v6; // cc_dep1
 unsigned int v51; // cc_dep1
 unsigned int v52; // cc_dep2
 unsigned int v53; // cc_ndep
 unsigned int v54; // cc_dep2
 unsigned int v55; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v56; // r4
 unsigned int v57; // cc_dep2
 unsigned int v58; // r12
 unsigned int v59; // r0
 unsigned int v60; // r1
 unsigned int v61; // cc_dep2
 unsigned int v62; // cc_ndep
 char v63; // r5
 unsigned int v64; // r12
 unsigned int v8; // cc_ndep
 unsigned int v65; // r0
 unsigned int v66; // r1
 unsigned int v70; // r1
 unsigned int v71; // cc_dep1
 unsigned int v72; // cc_op
 unsigned int v73; // cc_dep2
 unsigned int v74; // cc_ndep
 unsigned int v9; // cc_dep1
 unsigned int v75; // r12
 unsigned int v76; // r0
 unsigned int v78; // r12
 unsigned int v79; // r0
 unsigned int flag3; // r1
 unsigned int v81; // r4
 unsigned int v82; // cc_op
 unsigned int v83; // cc_dep1
 unsigned int v84; // cc_dep2
 unsigned int v10; // cc_dep2
 unsigned int v85; // cc_ndep
 unsigned int v86; // cc_dep2
 unsigned int v87; // cc_ndep
 unsigned int flag2; // r1
 unsigned int v89; // r3
 unsigned int v90; // r3
 unsigned int v91; // r2
 unsigned int v92; // cc_op
 unsigned int v93; // cc_dep2
 unsigned int v94; // cc_dep1
 unsigned int v0; // [bp-0xc]

 v1 = a1 * 2;
 v2 = a3 * 2;
 if (!(v1 ^ v2))
 {
 v6 = (armg_calculate_condition(5, v3, v4, v5) ? a0 ^ a2 : v3);
 v7 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if (!armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_402516;
LABEL_402515:
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? v1 | a0 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_c(5, v6, v7, v8) : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 }
 else
 {
 v6 = (armg_calculate_condition(5, v9, v10, v11) ? a0 ^ a2 : v9);
 v7 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if (armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_402515;
LABEL_402516:
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? v1 | a0 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_c(5, v6, v7, v8) : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 }
 v25 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)));
 v26 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? ~(v2 >> 21) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)));
 v27 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? v2 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)));
 v28 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)));
 if (!((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? ~(v2 >> 21) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? v2 >> 20 & 1 : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)) | 16, (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? 5 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? ~(v1 >> 21) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? v1 >> 20 & 1 : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17)), (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))) : (armg_calculate_condition((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15) | 16, (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) ? armg_calculate_flag_v((armg_calculate_condition(v15 | 16, v16, v17, v18) ? 5 : v15), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? v2 | a2 : v16), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_c(v15, v16, v17, v18) : v17), (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18)) : (armg_calculate_condition(v15 | 16, v16, v17, v18) ? armg_calculate_flag_v(v15, v16, v17, v18) : v18))))))
 {
 v29 = v1 >> 21;
 v30 = v2 >> 21;
 if (v2 >> 21 < v29)
 {
 v32 = -(v31);
 if (!((char)armg_calculate_condition(210, v30, v29, 0)))
 goto LABEL_402538;
 }
 else
 {
 v31 = (v2 >> 21) - v29;
 if (!((char)armg_calculate_condition(210, v30, v29, 0)))
 {
LABEL_402538:
 v29 += v32;
 v33 = a0 ^ a2;
 v34 = a1 ^ a3;
 a0 ^= v33;
 a1 ^= v34;
 a2 = a0 ^ v33;
 a3 = a1 ^ v34;
 }
 }
 if (54 >= v32)
 goto LABEL_40255c;
 return a0;
LABEL_40255c:
 v35 = 5;
 v36 = a1 & 0x80000000;
 v38 = armg_calculate_flag_v(2, v32, 54, 0);
 v39 = 0x100000 | a1 & 1048575;
 v40 = 1;
 v41 = a0;
 if ((a1 & 0x80000000))
 {
 v35 = 2;
 v36 = 0;
 v38 = 0;
 v39 = -(v39) - (a0 > 0);
 v40 = a0;
 v41 = -(a0);
 }
 v43 = 5;
 v44 = a3 & 0x80000000;
 v46 = armg_calculate_flag_v(v35, v36, v40, v38);
 v47 = 0x100000 | a3 & 1048575;
 v48 = 1;
 v49 = a2;
 if ((a3 & 0x80000000))
 {
 v43 = 2;
 v44 = 0;
 v46 = 0;
 v47 = -(v47) - (a2 > 0);
 v48 = a2;
 v49 = -(a2);
 }
 v51 = v29 ^ v32;
 v52 = armg_calculate_flag_c(v43, v44, v48, v46);
 v53 = armg_calculate_flag_v(v43, v44, v48, v46);
 if (!(v29 ^ v32))
 {
 v54 = armg_calculate_flag_c(5, v51, v52, v53);
 v55 = armg_calculate_flag_v(5, v51, v52, v53);
 v47 ^= 0x100000;
 if (!v29)
 {
 v39 ^= 0x100000;
 if (!armg_calculate_condition(5, v29, v54, v55))
 goto LABEL_402706;
LABEL_402705:
 v29 += 1;
 if (!armg_calculate_condition(21, v29, v54, v55))
 goto LABEL_40270a;
LABEL_402709:
 v32 -= 1;
 }
 else
 {
 v39 = v39;
 if (armg_calculate_condition(5, v29, v54, v55))
 goto LABEL_402705;
LABEL_402706:
 if (armg_calculate_condition(21, v29, v54, v55))
 goto LABEL_402709;
LABEL_40270a:
 }
 }
 v56 = v29 - 1;
 vvar_292{r64|1b} = (char)(32 - v32);
 v57 = v32;
 if (32 >= v32)
 {
 v58 = v49 << (vvar_292{r64|1b} & 31) & vvar_292{r64|1b} - 32 >> 31;
 v39 += armg_calculate_flag_c(1, v41, v49 >> ((char)v32 & 31) & (v32 & 255) - 32 >> 31, 0);
 v59 = v41 + (v49 >> ((char)v32 & 31) & (v32 & 255) - 32 >> 31) + (v47 << (vvar_292{r64|1b} & 31) & vvar_292{r64|1b} - 32 >> 31);
 if ((v32 & 255) < 32)
 {
 v60 = v39 + (v47 >> (char)v32) + armg_calculate_flag_c(2, 32, v57, 0);
 v61 = v47 >> (char)v32;
 v62 = armg_calculate_flag_c(2, 32, v57, 0);
 }
 else
 {
 v60 = v39 + (v47 >> 31) + armg_calculate_flag_c(2, 32, v57, 0);
 v61 = v47 >> 31;
 v62 = armg_calculate_flag_c(2, 32, v57, 0);
 }
 }
 else
 {
 v63 = v32 - 32;
 v58 = (1 <= v49 ? v47 << (vvar_292{r64|1b} + 32 & 31) & vvar_292{r64|1b} - 0 >> 31 | 2 : v47 << (vvar_292{r64|1b} + 32 & 31) & vvar_292{r64|1b} - 0 >> 31);
 v59 = v41 + (v47 >> (char)(v63 < 32 ? v63 : 31));
 v60 = v39 + (v47 >> 31) + armg_calculate_flag_c(1, v41, v47 >> (char)(v63 < 32 ? v63 : 31), 0);
 v61 = v47 >> 31;
 v62 = armg_calculate_flag_c(1, v41, v47 >> (char)(v63 < 32 ? v63 : 31), 0);
 }
 v64 = v58;
 v65 = v59;
 v66 = v60;
 if (!((char)armg_calculate_condition(83, v39, v61, v62)))
 {
 v64 = -(v58);
 v65 = -(v59) - (v58 > 0);
 v66 = -(v60) - ((v58 <= 0 ? v59 <= 0 : v59 < 0) ^ 1);
 }
 v70 = v66;
 v71 = v70;
 if (v70 >= 0x100000)
 {
 v72 = 2;
 v73 = 0x200000;
 v74 = 0;
 v75 = v64;
 v76 = v65;
 if (v70 >= 0x200000)
 {
 v75 = (v65 & 1) * 0x80000000 | v64 >> 1;
 v70 = (v56 + 1) * 0x200000;
 v72 = 1;
 v73 = &g_400000;
 v74 = 0;
 v76 = (v70 & 1) * 0x80000000 | v65 >> 1;
 if ((char)armg_calculate_condition(33, v70, &g_400000, 0))
 return 0;
 }
 }
 else
 {
 v78 = v64 * 2;
 v79 = v65 * 2 + (v64 >> 31 & 1);
 flag3 = v70 * 2 + armg_calculate_flag_c(3, v65, v65, v64 >> 31 & 1);
 v81 = v56 - 1;
 if (1 <= v56)
 {
 v72 = 2;
 v70 = (armg_calculate_condition(34, v71, 0x100000, 0) ? flag3 : v71);
 v73 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0x100000 : 0x100000);
 v74 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0 : 0);
 v75 = v78;
 v76 = v79;
 if (!((char)armg_calculate_condition(34, v70, v73, v74)))
 goto LABEL_402648;
 }
 else
 {
 v72 = 2;
 v70 = (armg_calculate_condition(34, v71, 0x100000, 0) ? flag3 : v71);
 v73 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0x100000 : 0x100000);
 v74 = (armg_calculate_condition(34, v71, 0x100000, 0) ? 0 : 0);
 v75 = v78;
 v76 = v79;
 if (!((char)armg_calculate_condition(34, v70, v73, v74)))
 {
LABEL_402648:
 v86 = armg_calculate_flag_c(2, v70, v73, v74);
 v87 = armg_calculate_flag_v(2, v70, v73, v74);
 if (!flag3)
 {
 flag2 = v79;
 if (!armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_402652;
LABEL_402651:
 v79 = 0;
 }
 else
 {
 flag2 = flag3;
 if (armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_402651;
LABEL_402652:
 }
 if (!flag2)
 {
 v89 = 32;
 if (!armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_40265a;
LABEL_402659:
 v89 += 32;
 }
 else
 {
 v89 = Clz(flag2);
 if (armg_calculate_condition(5, flag3, v86, v87))
 goto LABEL_402659;
LABEL_40265a:
 }
 v90 = v89 - 11;
 v91 = v90 - 32;
 v92 = 2;
 v93 = 32;
 v94 = v90;
 v95 = v91;
 if (32 > v94)
 {
 v96 = v91 + 12;
 v92 = 1;
 v93 = 12;
 if (!((char)armg_calculate_condition(209, v91, 12, 0)))
 {
 v97 = flag2 << ((char)v96 + 20 & 31) & (char)v96 - 12 >> 31;
 v98 = flag2 >> ((char)(12 - v96) & 31) & (12 - v96 & 255) - 32 >> 31;
 goto LABEL_402698;
 }
 else
 {
 v94 = v91;
 v95 = v96 + 20;
 }
 }
 v98 = (armg_calculate_condition(v92 | 208, v94, v93, 0) ? flag2 << ((char)v95 & 31) & (v95 & 255) - 32 >> 31 | v79 >> ((char)(armg_calculate_condition(v92 | 208, v94, v93, 0) ? 32 - v95 : v78) & 31) & ((armg_calculate_condition(v92 | 208, v94, v93, 0) ? 32 - v95 : v78) & 255) - 32 >> 31 : flag2 << ((char)v95 & 31) & (v95 & 255) - 32 >> 31);
 v97 = (armg_calculate_condition(v92 | 208, v94, v93, 0) ? v79 << ((char)v95 & 31) & (v95 & 255) - 32 >> 31 : v79);
LABEL_402698:
 if (v90 <= v81)
 {
 v100 = v98 + (v81 - v90) * 0x100000;
 if (!armg_calculate_condition(162, v81, v90, 0))
 goto LABEL_4026a2;
LABEL_4026a1:
 v100 |= v60 & 0x80000000;
 if (!((char)armg_calculate_condition(162, v81, v90, 0)))
 goto LABEL_4026a8;
 return v97;
 }
 else
 {
 v100 = v98;
 if (armg_calculate_condition(162, v81, v90, 0))
 goto LABEL_4026a1;
LABEL_4026a2:
 if (!((char)armg_calculate_condition(162, v81, v90, 0)))
 goto LABEL_4026a8;
 return v97;
 }
LABEL_4026a8:
 v101 = ~(v0);
 v102 = v101 - 31;
 if (31 <= v101)
 {
 return v100 >> ((char)v102 & 31) & (v102 & 255) - 32 >> 31;
 }
 else if (!((char)armg_calculate_condition(193, v102, 12, 0)))
 {
 v103 = (char)v102 + 32;
 return v97 >> (v103 & 31) & v103 - 32 >> 31 | v100 << ((char)(32 - v103) & 31) & (32 - v103 & 255) - 32 >> 31;
 }
 else
 {
 return v97 >> ((char)(32 - (12 - (v102 + 12))) & 31) & (32 - (12 - (v102 + 12)) & 255) - 32 >> 31 | v100 << ((char)(12 - (v102 + 12)) & 31) & (12 - (v102 + 12) & 255) - 32 >> 31;
 }
 }
 }
 }
 if (v75 == 0x80000000)
 {
 v82 = (armg_calculate_condition(v72, v70, v73, v74) ? 5 : v72);
 v83 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 >> 1 : v70);
 v84 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 & 1 : v73);
 v85 = (armg_calculate_condition(v72, v70, v73, v74) ? armg_calculate_flag_v(v72, v70, v73, v74) : v74);
 }
 else
 {
 v82 = (armg_calculate_condition(v72, v70, v73, v74) ? 5 : v72);
 v83 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 >> 1 : v70);
 v84 = (armg_calculate_condition(v72, v70, v73, v74) ? v76 & 1 : v73);
 v85 = (armg_calculate_condition(v72, v70, v73, v74) ? armg_calculate_flag_v(v72, v70, v73, v74) : v74);
 }
 return v76 + armg_calculate_flag_c(v82, v83, v84, v85);
 }
 else
 {
 if (~(v1 >> 21))
 {
 v104 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? 5 : v25);
 v105 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? ~(v2 >> 21) : v26);
 v106 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? v2 >> 20 & 1 : v27);
 v107 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_v(v25, v26, v27, v28) : v28);
 if ((char)armg_calculate_condition(v104, v105, v106, v107))
 goto LABEL_402780;
 }
 else
 {
 v104 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? 5 : v25);
 v105 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? ~(v2 >> 21) : v26);
 v106 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? v2 >> 20 & 1 : v27);
 v107 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_v(v25, v26, v27, v28) : v28);
 if ((char)armg_calculate_condition(v104, v105, v106, v107))
 {
LABEL_402780:
 return (armg_calculate_condition(21, ~(v1 >> 21), v1 >> 20 & 1, armg_calculate_flag_v(v104, v105, v106, v107)) ? a0 : a2);
 }
 }
 if (!(v1 ^ v2))
 {
 v108 = (armg_calculate_condition(5, v105, v106, v107) ? a0 ^ a2 : v105);
 v109 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_c(5, v105, v106, v107) : v106);
 v110 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_v(5, v105, v106, v107) : v107);
 if ((char)armg_calculate_condition(5, v108, v109, v110))
 goto LABEL_402738;
 }
 else
 {
 v108 = (armg_calculate_condition(5, v105, v106, v107) ? a0 ^ a2 : v105);
 v109 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_c(5, v105, v106, v107) : v106);
 v110 = (armg_calculate_condition(5, v105, v106, v107) ? armg_calculate_flag_v(5, v105, v106, v107) : v107);
 if ((char)armg_calculate_condition(5, v108, v109, v110))
 {
LABEL_402738:
 v114 = a1 ^ a3;
 v115 = armg_calculate_flag_c(5, v108, v109, v110);
 v116 = armg_calculate_flag_v(5, v108, v109, v110);
 if ((a1 ^ a3))
 {
 v117 = 0;
 if (!armg_calculate_condition(21, v114, v115, v116))
 goto LABEL_402742;
LABEL_402741:
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v114, v115, v116)))
 goto LABEL_402748;
 return 0;
 }
 else
 {
 v117 = a1;
 if (armg_calculate_condition(21, v114, v115, v116))
 goto LABEL_402741;
LABEL_402742:
 if (!((char)armg_calculate_condition(21, v114, v115, v116)))
 goto LABEL_402748;
 return a0;
 }
LABEL_402748:
 if (!v0 >> 21)
 return a0 * 2;
 if (armg_calculate_condition(49, v0, &g_400000, 0))
 {
 if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
 goto LABEL_40276c;
 return a0;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, v0, &g_400000, 0)))
 goto LABEL_40276c;
 return a0;
 }
LABEL_40276c:
 return 0;
 }
 }
 v111 = v1 | a0;
 v112 = armg_calculate_flag_c(5, v108, v109, v110);
 v113 = armg_calculate_flag_v(5, v108, v109, v110);
 if (!v1 && !a0)
 {
 if (!armg_calculate_condition(5, v111, v112, v113))
 return a0;
 }
 else
 {
 if (!armg_calculate_condition(5, v111, v112, v113))
 return a0;
 }
 return a2;
 }
}


// Function: __aeabi_ui2d at 0x4027ac
unsigned int __aeabi_ui2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_4027b8;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_4027b8;
 return a0;
 }
LABEL_4027b8:
 v2 = vvar_4{r64|4b};
 v1 = v9;
 v0 = v10;
}


// Function: __floatsidf at 0x4027d0
unsigned int __floatsidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // cc_op
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // r5
 unsigned int v10; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v7 = armg_calculate_flag_c(v3, v4, v5, v6);
 v8 = armg_calculate_flag_v(v3, v4, v5, v6);
 if (!a0)
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_4027dc;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, a0, v7, v8)))
 goto LABEL_4027dc;
 return a0;
 }
LABEL_4027dc:
 v2 = vvar_4{r64|4b};
 v1 = v9;
 v0 = v10;
}


// Function: __extendsfdf2 at 0x4027f8
unsigned int __extendsfdf2(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v3; // r2
 unsigned int v4; // r0
 unsigned int v13; // cc_ndep
 unsigned int v14; // cc_op
 unsigned int v15; // cc_dep1
 unsigned int v16; // cc_dep2
 unsigned int v17; // cc_ndep
 unsigned int v22; // cc_op
 unsigned int v5; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // cc_dep2
 unsigned int v25; // cc_ndep
 unsigned int v6; // cc_op
 unsigned int v7; // cc_dep1
 unsigned int v42; // cc_dep1
 unsigned int v43; // cc_ndep
 unsigned int v44; // r5
 unsigned int v45; // r4
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 unsigned int v10; // cc_op
 unsigned int v11; // cc_dep1
 unsigned int v12; // cc_dep2
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v3 = a0 * 2;
 v4 = v3 * 0x10000000;
 if (a0 * 2)
 {
 v5 = v3 & 0xff000000;
 v10 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 5 : v6);
 v11 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v3 & 0xff000000 : v7);
 v12 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? 1 : v8);
 v13 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_40280e;
LABEL_40280d:
 v22 = 5;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (!armg_calculate_condition(21, v23, v24, v25))
 goto LABEL_402812;
LABEL_402811:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_402818;
 return v4;
 }
 else
 {
 v5 = a3;
 v10 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 5 : v14);
 v11 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? v3 & 0xff000000 : v15);
 v12 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? 1 : v16);
 v13 = (armg_calculate_condition(v14 | 16, v15, v16, v17) ? armg_calculate_flag_v(v14, v15, v16, v17) : v17);
 if (armg_calculate_condition(v10 | 16, v11, v12, v13))
 goto LABEL_40280d;
LABEL_40280e:
 v22 = v10;
 v23 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? v5 ^ 0xff000000 : v11);
 v24 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 1 : v12);
 v25 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v22 | 16, v23, v24, v25))
 goto LABEL_402811;
LABEL_402812:
 if (!((char)armg_calculate_condition(v22 | 16, v23, v24, v25)))
 goto LABEL_402818;
 return v4;
 }
LABEL_402818:
 if ((v3 & 16777215))
 goto LABEL_402820;
 return v4;
LABEL_402820:
 v42 = v5 ^ 0xff000000;
 v43 = armg_calculate_flag_v(5, v3 & 16777215, 1, armg_calculate_flag_v(v22, v23, v24, v25));
 if (!(v5 ^ 0xff000000))
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_40282c;
 return v4;
 }
 else
 {
 if (!((char)armg_calculate_condition(5, v42, 1, v43)))
 goto LABEL_40282c;
 return v4;
 }
LABEL_40282c:
 v2 = vvar_32{r64|4b};
 v1 = v44;
 v0 = v45;
}


// Function: __floatundidf at 0x402840
unsigned int __floatundidf(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r12
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_402848;
 return a0;
LABEL_402848:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a1 >> 22;
 if (!a1 >> 22)
 goto LABEL_0x4025ec;
}


// Function: __aeabi_l2d at 0x402854
unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1)
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 if (a0 || a1)
 goto LABEL_40285c;
 return a0;
LABEL_40285c:
 v2 = v3;
 v1 = v4;
 v0 = v5;
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x402870;
}


// Function: __muldf3 at 0x4028b4
int __muldf3(int a0, int a1, int a2, int a3, int a4, int a5)
{
 unsigned int v2; // r4
 unsigned int v3; // r5
 unsigned int v12; // r5
 unsigned int v13; // cc_op
 unsigned int v14; // cc_dep1
 unsigned int v15; // cc_dep2
 unsigned int v16; // cc_ndep
 unsigned int v21; // cc_op
 unsigned int v4; // cc_op
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep2
 unsigned int v24; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v33; // cc_op
 unsigned int v34; // cc_dep1
 unsigned int v35; // cc_dep2
 unsigned int v36; // cc_ndep
 unsigned int v6; // cc_dep2
 unsigned int v45; // r4
 unsigned int v46; // r6
 unsigned int v47; // r1
 unsigned int v48; // r3
 unsigned int v49; // cc_op
 unsigned int v50; // cc_dep1
 unsigned int v7; // cc_ndep
 unsigned int v51; // cc_dep2
 unsigned int v52; // cc_ndep
 unsigned int v53; // r1
 unsigned int v54; // r3
 unsigned int v55; // r5
 unsigned int v56; // r5
 unsigned int v57; // r6
 unsigned int v58; // r5
 unsigned int v60; // cc_ndep
 unsigned int v8; // cc_op
 unsigned int v61; // r4
 unsigned int v62; // r6
 unsigned int v63; // r5
 unsigned int v64; // cc_dep1
 unsigned int v65; // cc_dep2
 unsigned int v67; // cc_dep1
 unsigned int v68; // r1
 unsigned int v69; // r0
 unsigned int v70; // r12
 unsigned int v9; // cc_dep1
 unsigned int v71; // cc_dep1
 unsigned int v72; // cc_dep2
 unsigned int v73; // cc_ndep
 unsigned int v74; // cc_op
 unsigned int v75; // cc_dep1
 unsigned int v76; // cc_dep2
 unsigned int v77; // cc_ndep
 unsigned int v78; // r1
 unsigned int v79; // r4
 unsigned int v80; // cc_op
 unsigned int v10; // cc_dep2
 unsigned int v81; // cc_dep1
 unsigned int v82; // cc_dep2
 unsigned int v83; // cc_ndep
 unsigned int v84; // r0
 unsigned int v85; // r4
 unsigned int v86; // r4
 unsigned int v87; // r4
 char v88; // r4
 unsigned int v11; // cc_ndep
 unsigned int v93; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x10]

 v2 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v3 = 2047 & a3 >> 20;
 v8 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 5 : v4);
 v9 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 2047 & a3 >> 20 : v5);
 v10 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? a3 >> 19 & 1 : v6);
 v11 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? armg_calculate_flag_v(v4, v5, v6, v7) : v7);
 if (!armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_4028ca;
LABEL_4028c9:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_4028ce;
LABEL_4028cd:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_402a94();
 return sub_402a94();
 }
 }
 else
 {
 v3 = v12;
 v8 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 5 : v13);
 v9 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 2047 & a3 >> 20 : v14);
 v10 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? a3 >> 19 & 1 : v15);
 v11 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_v(v13, v14, v15, v16) : v16);
 if (armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_4028c9;
LABEL_4028ca:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_4028cd;
LABEL_4028ce:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_402a94();
 return sub_402a94();
 }
 }
 v45 = v2 + v3;
 v46 = a1 ^ a3;
 v47 = a1 & ~(0xffe00000);
 v48 = a3 & ~(0xffe00000);
 if (a0 || v47 * 0x1000)
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a2 | v48 * 0x1000 : v34);
 v51 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? v48 >> 20 & 1 : v35);
 v52 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? armg_calculate_flag_v(v33, v34, v35, v36) : v36);
 }
 else
 {
 v49 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? 5 : v33);
 v50 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? a2 | v48 * 0x1000 : v34);
 v51 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? v48 >> 20 & 1 : v35);
 v52 = (armg_calculate_condition(v33 | 16, v34, v35, v36) ? armg_calculate_flag_v(v33, v34, v35, v36) : v36);
 }
 v53 = v47 | 0x100000;
 v54 = v48 | 0x100000;
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 {
 v55 = (0 CONCAT a0 * a2 >> 32) + v53 * a2 >> 32;
 vvar_198{r64|4b} = (0 CONCAT a0 * a2 >> 32) + v53 * a2;
 v56 = (v55 CONCAT vvar_198{r64|4b}) + a0 * v54 >> 32;
 vvar_203{r64|4b} = (v55 CONCAT vvar_198{r64|4b}) + a0 * v54;
 v57 = (0 CONCAT v56) + v53 * v54 >> 32;
 v58 = (0 CONCAT v56) + v53 * v54;
 if (a0 * a2)
 vvar_215{r64|4b} = vvar_203{r64|4b} | 1;
 v60 = 0;
 v61 = v45 - 1023 - (0x200 > v57);
 vvar_68{r64|4b} = vvar_67{r64|4b};
 v62 = v57;
 v63 = v58;
 v64 = v57;
 v65 = 0x200;
 if (0x200 > v62)
 {
 v60 = vvar_67{r64|4b} >> 31 & 1;
 v62 = v57 * 2 + armg_calculate_flag_c(3, v58, v58, vvar_67{r64|4b} >> 31 & 1);
 vvar_466{r64|4b} = vvar_67{r64|4b} * 2;
 v63 = v58 * 2 + (vvar_67{r64|4b} >> 31 & 1);
 v64 = v58;
 v65 = v58;
 }
 v67 = v64;
 v68 = v46 & 0x80000000 | v62 * 0x800 | v63 >> 21;
 v69 = v63 * 0x800 | vvar_68{r64|4b} >> 21;
 vvar_241{r64|4b} = vvar_68{r64|4b} * 0x800;
 v70 = v61 - 253;
 if (253 < v61)
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if ((char)armg_calculate_condition(130, v71, v72, v73))
 goto LABEL_402998;
LABEL_402958:
 if (vvar_80{r64|4b} == 0x80000000)
 {
 v74 = (armg_calculate_condition(2, v71, v72, v73) ? 5 : 2);
 v75 = (armg_calculate_condition(2, v71, v72, v73) ? v69 >> 1 : v71);
 v76 = (armg_calculate_condition(2, v71, v72, v73) ? v69 & 1 : v72);
 v77 = (armg_calculate_condition(2, v71, v72, v73) ? armg_calculate_flag_v(2, v71, v72, v73) : v73);
 }
 else
 {
 v74 = (armg_calculate_condition(2, v71, v72, v73) ? 5 : 2);
 v75 = (armg_calculate_condition(2, v71, v72, v73) ? v69 >> 1 : v71);
 v76 = (armg_calculate_condition(2, v71, v72, v73) ? v69 & 1 : v72);
 v77 = (armg_calculate_condition(2, v71, v72, v73) ? armg_calculate_flag_v(2, v71, v72, v73) : v73);
 }
 return v69 + armg_calculate_flag_c(v74, v75, v76, v77);
 }
 else
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if (!((char)armg_calculate_condition(130, v71, v72, v73)))
 goto LABEL_402958;
LABEL_402998:
 if ((char)armg_calculate_condition(194, v71, v72, v73))
 return 0;
 }
 }
 else
 {
 v69 = a0 | a2;
 v78 = (v46 & 0x80000000 | v53) ^ v54;
 v79 = v45 - 1023;
 if (1023 < v45)
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (!armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_402986;
LABEL_402985:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_40298c;
 return a0 | a2;
 v1 = v0;
 }
 else
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_402985;
LABEL_402986:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_40298c;
 return a0 | a2;
 v1 = v0;
 }
LABEL_40298c:
 v68 = v78 | 0x100000;
 vvar_308{r64|4b} = 0;
 v61 = v0 - 1;
LABEL_402998:
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 }
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_4029a6;
LABEL_4029a5:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_4029ac;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_4029a5;
LABEL_4029a6:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_4029ac;
 return v84;
 }
LABEL_4029ac:
 v85 = -(v1);
 v86 = v85 - 32;
 if (32 > v85)
 {
 v87 = v86 + 12;
 if (!((char)armg_calculate_condition(193, v86, 12, 0)))
 {
 v88 = (char)v87 + 20;
 if (vvar_80{r64|4b} || (v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) * 2)
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31) & ~((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 }
 else
 {
 if (!vvar_80{r64|4b} && !(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) * 2)
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31) & ~((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 }
 }
 else if (!vvar_80{r64|4b} && !(v84 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) && !(v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) * 2)
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31) & ~((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
 else
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
}


// Function: sub_402a94 at 0x402a94
unsigned int sub_402a94(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r12
 unsigned int flag3; // r5
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v15; // cc_op
 unsigned int v16; // cc_dep1
 unsigned int v17; // cc_dep2
 unsigned int v18; // cc_ndep
 unsigned int v19; // cc_dep1
 unsigned int flag2; // r4
 unsigned int v20; // cc_dep2
 unsigned int v21; // cc_ndep
 unsigned int v22; // cc_dep1
 unsigned int v23; // cc_dep1
 unsigned int flag1; // cc_dep2
 unsigned int v25; // r2
 unsigned int v26; // cc_dep1
 unsigned int result; // cc_dep2
 unsigned int v3; // cc_dep1
 unsigned int v31; // cc_dep1
 unsigned int v32; // cc_dep2
 unsigned int v33; // cc_ndep
 unsigned int v34; // r0
 unsigned int v35; // r1
 unsigned int v36; // cc_op
 unsigned int v4; // cc_dep2
 unsigned int v37; // cc_dep1
 unsigned int v38; // cc_dep2
 unsigned int v39; // cc_ndep
 unsigned int v40; // cc_dep1
 unsigned int v41; // cc_dep2
 unsigned int v42; // cc_ndep
 unsigned int v43; // cc_dep1
 unsigned int v44; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v47; // cc_dep1
 unsigned int v48; // cc_dep2
 unsigned int v49; // cc_ndep
 unsigned int v50; // r0
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1

 flag3 = v0 & a3 >> 20;
 if ((flag2 ^ v0))
 {
 v6 = (armg_calculate_condition(21, v3, v4, v5) ? flag3 ^ v0 : v3);
 v7 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(21, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_402ac0;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_402ac0:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402aca;
LABEL_402ac9:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_402ace;
LABEL_402acd:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 else
 {
 v34 = a0;
 if (armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_402ac9;
LABEL_402aca:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_402acd;
LABEL_402ace:
 v36 = (armg_calculate_condition(21, v31, v32, v33) ? 5 : 5);
 v37 = (armg_calculate_condition(21, v31, v32, v33) ? a2 | a3 * 2 : v31);
 v38 = (armg_calculate_condition(21, v31, v32, v33) ? a3 >> 31 & 1 : v32);
 v39 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(v36, v37, v38, v39))
 return v34;
 }
 v40 = flag2 ^ v0;
 v41 = armg_calculate_flag_c(v36, v37, v38, v39);
 v42 = armg_calculate_flag_v(v36, v37, v38, v39);
 v43 = v40;
 v44 = v41;
 if (!(flag2 ^ v0))
 {
 v42 = armg_calculate_flag_v(5, v40, v41, v42);
 v43 = v34 | v35 * 0x1000;
 v44 = v35 >> 20 & 1;
 if (v34 || v35 * 0x1000)
 return v34;
 }
 if (!(flag3 ^ v0))
 {
 v47 = a2 | a3 * 0x1000;
 v48 = a3 >> 20 & 1;
 v49 = armg_calculate_flag_v(5, flag3 ^ v0, armg_calculate_flag_c(5, v43, v44, v42), armg_calculate_flag_v(5, v43, v44, v42));
 if (a2 || a3 * 0x1000)
 {
 v50 = a2;
 if (!armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_402af6;
LABEL_402af5:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_402af5;
LABEL_402af6:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 }
 }
 }
 if (a0 || a1 * 2)
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 else
 {
 v15 = (armg_calculate_condition(21, v6, v7, v8) ? 5 : 5);
 v16 = (armg_calculate_condition(21, v6, v7, v8) ? a2 | a3 * 2 : v6);
 v17 = (armg_calculate_condition(21, v6, v7, v8) ? a3 >> 31 & 1 : v7);
 v18 = (armg_calculate_condition(21, v6, v7, v8) ? armg_calculate_flag_v(5, v6, v7, v8) : v8);
 if (!((char)armg_calculate_condition(v15 | 16, v16, v17, v18)))
 return 0;
 }
 v19 = flag2;
 v20 = armg_calculate_flag_c(v15, v16, v17, v18);
 v21 = armg_calculate_flag_v(v15, v16, v17, v18);
 v22 = v19;
 if (!flag2)
 {
 while (true)
 {
 a0 *= 2;
 a1 = a1 * 2 + (a0 >> 31 & 1);
 v23 = a1 & 0x100000;
 flag1 = 0;
 v21 = armg_calculate_flag_v(5, v19, v20, v21);
 if (!(a1 & 0x100000))
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 else
 {
 v19 = v23;
 v20 = flag1;
 if (!((char)armg_calculate_condition(5, v19, 0, v21)))
 break;
 }
 }
 v20 = armg_calculate_flag_c(5, v23, 0, v21);
 v21 = armg_calculate_flag_v(5, v23, 0, v21);
 if (!flag3)
 goto LABEL_402a74;
 return a0;
 v22 = flag3;
 }
LABEL_402a74:
 while (true)
 {
 v25 = a2 * 2;
 a3 = a3 * 2 + (a2 >> 31 & 1);
 v26 = a3 & 0x100000;
 result = 0;
 v21 = armg_calculate_flag_v(5, v22, v20, v21);
 if (!(a3 & 0x100000))
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 else
 {
 v22 = v26;
 v20 = result;
 a2 = v25;
 if (!((char)armg_calculate_condition(5, v22, 0, v21)))
 return a0;
 }
 }
}


// Function: __divdf3 at 0x402b20
int __divdf3(int a0, int a1, int a2, int a3, int a4, int a5)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v13; // cc_op
 unsigned int v97; // cc_ndep
 unsigned int v98; // cc_op
 unsigned int v99; // cc_dep1
 unsigned int v100; // cc_dep2
 unsigned int v101; // cc_ndep
 unsigned int v102; // cc_op
 unsigned int v103; // cc_dep1
 unsigned int v104; // cc_dep2
 unsigned int v105; // cc_ndep
 unsigned int v106; // r4
 unsigned int v14; // cc_dep1
 unsigned int v107; // cc_op
 unsigned int v108; // cc_dep1
 unsigned int v109; // cc_dep2
 unsigned int v110; // cc_ndep
 unsigned int v115; // r0
 unsigned int v15; // cc_dep2
 unsigned int v16; // cc_ndep
 unsigned int v17; // cc_op
 unsigned int v18; // cc_dep1
 unsigned int v19; // cc_dep2
 unsigned int v20; // cc_ndep
 unsigned int v6; // r5
 unsigned int v25; // cc_op
 unsigned int v26; // cc_dep1
 unsigned int v27; // cc_dep2
 unsigned int v28; // cc_ndep
 unsigned int v7; // r4
 unsigned int v37; // r5
 unsigned int v38; // cc_op
 unsigned int v39; // cc_dep1
 unsigned int v40; // cc_dep2
 unsigned int v41; // cc_ndep
 unsigned int v8; // r4
 unsigned int v50; // r4
 unsigned int v51; // cc_dep1
 unsigned int v52; // cc_dep2
 unsigned int v53; // cc_ndep
 unsigned int v54; // r3
 unsigned int v55; // r2
 unsigned int v56; // r5
 unsigned int v57; // r6
 unsigned int v58; // r1
 unsigned int v59; // cc_dep1
 unsigned int v60; // cc_dep2
 unsigned int v61; // cc_ndep
 unsigned int v62; // r4
 unsigned int v9; // cc_op
 unsigned int v63; // r3
 unsigned int v65; // r6
 unsigned int v66; // r5
 unsigned int v67; // r3
 unsigned int v68; // r2
 unsigned int v69; // r0
 unsigned int v70; // r12
 unsigned int v71; // r12
 unsigned int v72; // cc_ndep
 unsigned int v10; // cc_dep1
 unsigned int v73; // r6
 unsigned int v74; // r5
 unsigned int v75; // r3
 unsigned int v76; // r2
 unsigned int v77; // cc_ndep
 unsigned int v78; // r6
 unsigned int v79; // r5
 unsigned int v11; // cc_dep2
 unsigned int v80; // r3
 unsigned int v81; // r2
 unsigned int v82; // cc_ndep
 unsigned int v83; // r6
 unsigned int v84; // r5
 unsigned int v85; // cc_dep1
 unsigned int v86; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v87; // cc_ndep
 unsigned int v88; // cc_dep1
 unsigned int v89; // cc_dep2
 unsigned int v90; // cc_ndep
 unsigned int v92; // cc_dep1
 unsigned int v93; // cc_ndep
 unsigned int v94; // r12
 unsigned int v95; // cc_dep1
 unsigned int v96; // cc_dep2
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 v8 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v37 = 2047 & a3 >> 20;
 v13 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? 5 : v9);
 v14 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? 2047 & a3 >> 20 : v10);
 v15 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a3 >> 19 & 1 : v11);
 v16 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? armg_calculate_flag_v(v9, v10, v11, v12) : v12);
 if (!armg_calculate_condition(v13 | 16, v14, v15, v16))
 goto LABEL_402b36;
LABEL_402b35:
 v25 = 5;
 v26 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? v8 ^ 2047 : v14);
 v27 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_c(v13, v14, v15, v16) : v15);
 v28 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_v(v13, v14, v15, v16) : v16);
 if (!armg_calculate_condition(21, v26, v27, v28))
 goto LABEL_402b3a;
LABEL_402b39:
 v38 = 5;
 v39 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? v37 ^ 2047 : v26);
 v40 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_c(v25, v26, v27, v28) : v27);
 v41 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_v(v25, v26, v27, v28) : v28);
 if ((char)armg_calculate_condition(5, v39, v40, v41))
 {
 v115 = sub_402cb4();
 return sub_402cb4();
 }
 }
 else
 {
 v37 = v6;
 v13 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v14 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 2047 & a3 >> 20 : v18);
 v15 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? a3 >> 19 & 1 : v19);
 v16 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if (armg_calculate_condition(v13 | 16, v14, v15, v16))
 goto LABEL_402b35;
LABEL_402b36:
 v25 = v13;
 v26 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? v8 ^ 2047 : v14);
 v27 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_c(v13, v14, v15, v16) : v15);
 v28 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_v(v13, v14, v15, v16) : v16);
 if (armg_calculate_condition(v25 | 16, v26, v27, v28))
 goto LABEL_402b39;
LABEL_402b3a:
 v38 = v25;
 v39 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? v37 ^ 2047 : v26);
 v40 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_c(v25, v26, v27, v28) : v27);
 v41 = (armg_calculate_condition(v25 | 16, v26, v27, v28) ? armg_calculate_flag_v(v25, v26, v27, v28) : v28);
 if ((char)armg_calculate_condition(v38, v39, v40, v41))
 {
 v115 = sub_402cb4();
 return sub_402cb4();
 }
 }
 v50 = v8 - v37;
 v51 = a2 | a3 * 0x1000;
 v52 = a3 >> 20 & 1;
 v53 = armg_calculate_flag_v(v38, v39, v40, v41);
 if (a2 || a3 * 0x1000)
 {
 v54 = 0x10000000 | a3 * 0x1000 >> 4 | a2 >> 24;
 v55 = a2 * 0x100;
 v56 = 0x10000000 | a1 * 0x1000 >> 4 | a0 >> 24;
 v57 = a0 * 0x100;
 v58 = (a1 ^ a3) & 0x80000000;
 if (v56 == v54)
 {
 v59 = (armg_calculate_condition(2, v51, v52, v53) ? v57 : v51);
 v60 = (armg_calculate_condition(2, v51, v52, v53) ? v55 : v52);
 v61 = (armg_calculate_condition(2, v51, v52, v53) ? 0 : v53);
 }
 else
 {
 v59 = (armg_calculate_condition(2, v51, v52, v53) ? v57 : v51);
 v60 = (armg_calculate_condition(2, v51, v52, v53) ? v55 : v52);
 v61 = (armg_calculate_condition(2, v51, v52, v53) ? 0 : v53);
 }
 v62 = v50 + 253 + armg_calculate_flag_c(2, v59, v60, v61) + 0x300;
 v63 = v54;
 if (!((char)armg_calculate_condition(34, v59, v60, v61)))
 {
 v55 = (v54 & 1) * 0x80000000 | v55 >> 1;
 v63 = v54 >> 1;
 }
 v65 = v57 - v55;
 v66 = v56 - v63 - (v55 > v57);
 v67 = v63 >> 1;
 v68 = (v63 & 1) * 0x80000000 | v55 >> 1;
 v69 = 0x100000;
 v70 = 0x80000;
 while (true)
 {
 v71 = v70;
 v72 = v68 <= v65;
 if (v68 <= v65)
 {
 v73 = v65 - v68;
 if (!armg_calculate_condition(36, v66, v67, v72))
 goto LABEL_402bba;
 goto LABEL_402bb9;
 }
 else
 {
 v73 = v65;
 if (armg_calculate_condition(36, v66, v67, v72))
 {
LABEL_402bb9:
 v74 = v66 - v67 - (v68 > v65);
 if (!armg_calculate_condition(36, v66, v67, v72))
 goto LABEL_402bbe;
 goto LABEL_402bbd;
 }
 else
 {
LABEL_402bba:
 v74 = v66;
 if (armg_calculate_condition(36, v66, v67, v72))
 {
LABEL_402bbd:
 v69 |= v71;
 goto LABEL_402bc0;
 }
 else
 {
LABEL_402bbe:
LABEL_402bc0:
 v75 = v67 >> 1;
 v76 = (v67 & 1) * 0x80000000 | v68 >> 1;
 v77 = v76 <= v73;
 if (v76 <= v73)
 {
 v78 = v73 - v76;
 if (!armg_calculate_condition(36, v74, v75, v77))
 goto LABEL_402bd6;
 goto LABEL_402bd5;
 }
 else
 {
 v78 = v73;
 if (armg_calculate_condition(36, v74, v75, v77))
 {
LABEL_402bd5:
 v79 = v74 - v75 - (v76 > v73);
 if (!armg_calculate_condition(36, v74, v75, v77))
 goto LABEL_402bda;
 goto LABEL_402bd9;
 }
 else
 {
LABEL_402bd6:
 v79 = v74;
 if (armg_calculate_condition(36, v74, v75, v77))
 {
LABEL_402bd9:
 v69 |= v71 >> 1;
 goto LABEL_402bdc;
 }
 else
 {
LABEL_402bda:
LABEL_402bdc:
 v80 = v75 >> 1;
 v81 = (v75 & 1) * 0x80000000 | v76 >> 1;
 v82 = v81 <= v78;
 if (v81 <= v78)
 {
 v83 = v78 - v81;
 if (!armg_calculate_condition(36, v79, v80, v82))
 goto LABEL_402bf2;
 goto LABEL_402bf1;
 }
 else
 {
 v83 = v78;
 if (armg_calculate_condition(36, v79, v80, v82))
 {
LABEL_402bf1:
 v84 = v79 - v80 - (v81 > v78);
 if (!armg_calculate_condition(36, v79, v80, v82))
 goto LABEL_402bf6;
 goto LABEL_402bf5;
 }
 else
 {
LABEL_402bf2:
 v84 = v79;
 if (armg_calculate_condition(36, v79, v80, v82))
 {
LABEL_402bf5:
 v69 |= v71 >> 2;
 goto LABEL_402bf8;
 }
 else
 {
LABEL_402bf6:
LABEL_402bf8:
 v67 = v80 >> 1;
 v68 = (v80 & 1) * 0x80000000 | v81 >> 1;
 v85 = v84;
 v86 = v67;
 v87 = v68 <= v83;
 if (v68 <= v83)
 {
 v65 = v83 - v68;
 if (!armg_calculate_condition(36, v85, v86, v87))
 goto LABEL_402c0e;
 goto LABEL_402c0d;
 }
 else
 {
 v65 = v83;
 if (armg_calculate_condition(36, v85, v86, v87))
 {
LABEL_402c0d:
 v66 = v84 - v67 - (v68 > v83);
 if (!armg_calculate_condition(36, v85, v86, v87))
 goto LABEL_402c12;
 goto LABEL_402c11;
 }
 else
 {
LABEL_402c0e:
 v66 = v84;
 if (armg_calculate_condition(36, v85, v86, v87))
 {
LABEL_402c11:
 v69 |= v71 >> 3;
 goto LABEL_402c14;
 }
 else
 {
LABEL_402c12:
LABEL_402c14:
 v88 = v66 | v65;
 v89 = armg_calculate_flag_c(4, v85, v86, v87);
 v90 = armg_calculate_flag_v(4, v85, v86, v87);
 if (v66 || v65)
 {
 v66 = v66 * 16 | v65 >> 28;
 v65 *= 16;
 v67 = v67 * 8 | v68 >> 29;
 v68 *= 8;
 v70 = v71 >> 4;
 if (v71 >> 4)
 continue;
 v92 = v58 & 0x100000;
 v93 = armg_calculate_flag_v(5, v71 >> 4, v71 >> 3 & 1, armg_calculate_flag_v(5, v88, v89, v90));
 if ((v58 & 0x100000))
 break;
 v58 |= v69;
 v69 = 0;
 v70 = 0x80000000;
 }
 else
 {
 v92 = v58 & 0x100000;
 v93 = armg_calculate_flag_v(5, v88, v89, v90);
 if (!(v58 & 0x100000))
 {
 if (!armg_calculate_condition(5, v92, 0, v93))
 goto LABEL_402c5e;
 goto LABEL_402c5d;
 }
 else if (armg_calculate_condition(5, v92, 0, v93))
 {
LABEL_402c5d:
 v69 = 0;
 break;
 }
 else
 {
LABEL_402c5e:
 break;
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 }
 v94 = v62 - 253;
 if (253 < v62)
 {
 v95 = (armg_calculate_condition(130, v92, 0, v93) ? v94 : v92);
 v96 = (armg_calculate_condition(130, v92, 0, v93) ? 0x700 : 0);
 v97 = (armg_calculate_condition(130, v92, 0, v93) ? 0 : v93);
 if ((char)armg_calculate_condition(130, v95, v96, v97))
 goto LABEL_0x402998;
 else
 goto LABEL_402c6c;
 }
 else
 {
 v95 = (armg_calculate_condition(130, v92, 0, v93) ? v94 : v92);
 v96 = (armg_calculate_condition(130, v92, 0, v93) ? 0x700 : 0);
 v97 = (armg_calculate_condition(130, v92, 0, v93) ? 0 : v93);
 if ((char)armg_calculate_condition(130, v95, v96, v97))
 goto LABEL_0x402998;
 else
 goto LABEL_402c6c;
 }
LABEL_402c6c:
 if (v66 == v67)
 {
 v98 = (armg_calculate_condition(2, v95, v96, v97) ? 2 : 2);
 v99 = (armg_calculate_condition(2, v95, v96, v97) ? v65 : v95);
 v100 = (armg_calculate_condition(2, v95, v96, v97) ? v68 : v96);
 v101 = (armg_calculate_condition(2, v95, v96, v97) ? 0 : v97);
 if (!armg_calculate_condition(v98, v99, v100, v101))
 goto LABEL_402c76;
LABEL_402c75:
 v102 = (armg_calculate_condition(v98, v99, v100, v101) ? 5 : v98);
 v103 = (armg_calculate_condition(v98, v99, v100, v101) ? v69 >> 1 : v99);
 v104 = (armg_calculate_condition(v98, v99, v100, v101) ? v69 & 1 : v100);
 v105 = (armg_calculate_condition(v98, v99, v100, v101) ? armg_calculate_flag_v(v98, v99, v100, v101) : v101);
 }
 else
 {
 v98 = (armg_calculate_condition(2, v95, v96, v97) ? 2 : 2);
 v99 = (armg_calculate_condition(2, v95, v96, v97) ? v65 : v95);
 v100 = (armg_calculate_condition(2, v95, v96, v97) ? v68 : v96);
 v101 = (armg_calculate_condition(2, v95, v96, v97) ? 0 : v97);
 if (armg_calculate_condition(v98, v99, v100, v101))
 goto LABEL_402c75;
LABEL_402c76:
 v102 = (armg_calculate_condition(v98, v99, v100, v101) ? 5 : v98);
 v103 = (armg_calculate_condition(v98, v99, v100, v101) ? v69 >> 1 : v99);
 v104 = (armg_calculate_condition(v98, v99, v100, v101) ? v69 & 1 : v100);
 v105 = (armg_calculate_condition(v98, v99, v100, v101) ? armg_calculate_flag_v(v98, v99, v100, v101) : v101);
 }
 return v69 + armg_calculate_flag_c(v102, v103, v104, v105);
 }
 v106 = v50 + 1023;
 if (armg_calculate_condition(193, v50, 1023, 0))
 {
 v107 = (armg_calculate_condition(197, v51, v52, v53) ? 2 : 5);
 v108 = (armg_calculate_condition(197, v51, v52, v53) ? 2047 : v51);
 v109 = (armg_calculate_condition(197, v51, v52, v53) ? v106 : v52);
 v110 = (armg_calculate_condition(197, v51, v52, v53) ? 0 : v53);
 if (!armg_calculate_condition(v107 | 192, v108, v109, v110))
 goto LABEL_402c96;
LABEL_402c95:
 if (!((char)armg_calculate_condition(v107 | 192, v108, v109, v110)))
 goto LABEL_402c9c;
 return a0;
 }
 else
 {
 v107 = (armg_calculate_condition(197, v51, v52, v53) ? 2 : 5);
 v108 = (armg_calculate_condition(197, v51, v52, v53) ? 2047 : v51);
 v109 = (armg_calculate_condition(197, v51, v52, v53) ? v106 : v52);
 v110 = (armg_calculate_condition(197, v51, v52, v53) ? 0 : v53);
 if (armg_calculate_condition(v107 | 192, v108, v109, v110))
 goto LABEL_402c95;
LABEL_402c96:
 if (!((char)armg_calculate_condition(v107 | 192, v108, v109, v110)))
 goto LABEL_402c9c;
 return a0;
 }
LABEL_402c9c:
}


// Function: sub_402cac at 0x402cac
int sub_402cac()
{
}


// Function: sub_402cb4 at 0x402cb4
int sub_402cb4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r12
 unsigned int v1; // r5
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v15; // cc_dep1
 unsigned int v16; // cc_dep2
 unsigned int v17; // cc_ndep
 unsigned int v18; // cc_dep1
 unsigned int v19; // cc_dep2
 unsigned int v2; // r4
 unsigned int v20; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1

 v1 = v0 & a3 >> 20;
 if (!(v2 ^ v0))
 {
 v6 = (armg_calculate_condition(5, v3, v4, v5) ? v1 ^ v0 : v3);
 v7 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_c(5, v3, v4, v5) : v4);
 v8 = (armg_calculate_condition(5, v3, v4, v5) ? armg_calculate_flag_v(5, v3, v4, v5) : v5);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_0x402b14;
 else
 goto LABEL_402cc4;
 }
 else
 {
 v6 = (armg_calculate_condition(5, v9, v10, v11) ? v1 ^ v0 : v9);
 v7 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(5, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_0x402b14;
 else
 goto LABEL_402cc4;
 }
LABEL_402cc4:
 v15 = v2 ^ v0;
 v16 = armg_calculate_flag_c(5, v6, v7, v8);
 v17 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!(v2 ^ v0))
 {
 if (a0 || a1 * 0x1000)
 goto LABEL_0x402b14;
 if ((v1 ^ v0))
 goto LABEL_0x402afc;
 }
 else
 {
 v18 = v1 ^ v0;
 v19 = armg_calculate_flag_c(5, v15, v16, v17);
 v20 = armg_calculate_flag_v(5, v15, v16, v17);
 if (!(v1 ^ v0))
 {
 if (!a2 && !a3 * 0x1000)
 goto LABEL_0x402ab0;
 }
 else if (a0 || a1 * 2)
 {
 if ((char)armg_calculate_condition((armg_calculate_condition(21, v18, v19, v20) ? 5 : 5) | 16, (armg_calculate_condition(21, v18, v19, v20) ? a2 | a3 * 2 : v18), (armg_calculate_condition(21, v18, v19, v20) ? a3 >> 31 & 1 : v19), (armg_calculate_condition(21, v18, v19, v20) ? armg_calculate_flag_v(5, v18, v19, v20) : v20)))
 goto LABEL_0x402a48;
 if (a0 || a1 * 2)
 goto LABEL_0x402afc;
 if (a2 || a3 * 2)
 goto LABEL_0x402ab0;
 }
 else
 {
 if ((char)armg_calculate_condition((armg_calculate_condition(21, v18, v19, v20) ? 5 : 5) | 16, (armg_calculate_condition(21, v18, v19, v20) ? a2 | a3 * 2 : v18), (armg_calculate_condition(21, v18, v19, v20) ? a3 >> 31 & 1 : v19), (armg_calculate_condition(21, v18, v19, v20) ? armg_calculate_flag_v(5, v18, v19, v20) : v20)))
 goto LABEL_0x402a48;
 if (a0 || a1 * 2)
 goto LABEL_0x402afc;
 if (a2 || a3 * 2)
 goto LABEL_0x402ab0;
 }
 }
}


// Function: __aeabi_frsub at 0x402d24
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000);
 return __addsf3(a0 ^ 0x80000000);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x402d30
extern char g_400000;
extern char g_800000;

unsigned int __addsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int result; // r2
 unsigned int v1; // cc_op
 unsigned int v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v17; // cc_op
 unsigned int v18; // cc_dep1
 unsigned int v19; // cc_dep2
 unsigned int v2; // cc_dep1
 unsigned int v20; // cc_ndep
 unsigned int v21; // r2
 unsigned int v22; // r3
 unsigned int v23; // cc_dep1
 unsigned int v24; // r2
 unsigned int v25; // r1
 unsigned int v26; // r0
 unsigned int v27; // r1
 unsigned int v3; // cc_dep2
 unsigned int v28; // r0
 unsigned int v29; // cc_dep1
 unsigned int v30; // cc_ndep
 unsigned int v31; // r1
 unsigned int v32; // cc_dep1
 unsigned int v33; // cc_dep2
 unsigned int v34; // cc_ndep
 unsigned int v35; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v36; // cc_ndep
 unsigned int v37; // r2
 unsigned int v38; // r0
 unsigned int v39; // cc_dep2
 unsigned int v40; // r1
 unsigned int v41; // r3
 unsigned int v42; // r1
 unsigned int v43; // r0
 unsigned int v5; // cc_op
 unsigned int v46; // r0
 unsigned int v47; // r2
 unsigned int v48; // r1
 unsigned int v49; // r0
 unsigned int v51; // r1
 unsigned int v52; // r0
 unsigned int v53; // r2
 unsigned int v6; // cc_dep1
 unsigned int v54; // r0
 unsigned int v55; // r12
 unsigned int v56; // r2
 unsigned int v57; // r0
 unsigned int v58; // r0
 unsigned int v59; // r3
 unsigned int v60; // cc_op
 unsigned int v61; // cc_dep1
 unsigned int v62; // cc_dep2
 unsigned int v7; // cc_dep2
 unsigned int v63; // cc_ndep
 unsigned int v64; // cc_dep1
 unsigned int v65; // cc_dep2
 unsigned int v66; // cc_ndep
 unsigned int v67; // cc_dep1
 unsigned int v68; // cc_dep2
 unsigned int v69; // cc_ndep
 unsigned int v70; // r1
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_op

 result = a0 * 2;
 if (a0 * 2)
 {
 a3 = a1 * 2;
 v5 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? 5 : v1);
 v6 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? a1 * 2 : v2);
 v7 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? a1 >> 31 & 1 : v3);
 v8 = (armg_calculate_condition(v1 | 16, v2, v3, v4) ? armg_calculate_flag_v(v1, v2, v3, v4) : v4);
 }
 else
 {
 v5 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? 5 : v9);
 v6 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a1 * 2 : v10);
 v7 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? a1 >> 31 & 1 : v11);
 v8 = (armg_calculate_condition(v9 | 16, v10, v11, v12) ? armg_calculate_flag_v(v9, v10, v11, v12) : v12);
 }
 v17 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)));
 v18 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? ~(a3 >> 24) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)));
 v19 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? a3 >> 23 & 1 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)));
 v20 = (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)));
 if ((char)armg_calculate_condition((armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? 5 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? ~(a3 >> 24) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? a3 >> 23 & 1 : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7))), (armg_calculate_condition((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)) | 16, (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) ? armg_calculate_flag_v((armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? 5 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? ~(result >> 24) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? result >> 23 & 1 : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7)), (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8))) : (armg_calculate_condition((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5) | 16, (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) ? armg_calculate_flag_v((armg_calculate_condition(v5 | 16, v6, v7, v8) ? 5 : v5), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? result ^ a3 : v6), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_c(v5, v6, v7, v8) : v7), (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)) : (armg_calculate_condition(v5 | 16, v6, v7, v8) ? armg_calculate_flag_v(v5, v6, v7, v8) : v8)))))
 {
 v59 = a1 * 2;
 if (~(result >> 24))
 {
 v60 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v61 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? ~(v59 >> 24) : v18);
 v62 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? v59 >> 23 & 1 : v19);
 v63 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = ((!~(result >> 24) ? ~(v59 >> 24) : ~(result >> 24)) ? (~(result >> 24) ? a1 : a0) : a1);
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | &g_400000);
 }
 }
 else
 {
 v60 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? 5 : v17);
 v61 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? ~(v59 >> 24) : v18);
 v62 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? v59 >> 23 & 1 : v19);
 v63 = (armg_calculate_condition(v17 | 16, v18, v19, v20) ? armg_calculate_flag_v(v17, v18, v19, v20) : v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = ((!~(result >> 24) ? ~(v59 >> 24) : ~(result >> 24)) ? (~(result >> 24) ? a1 : a0) : a1);
 return ((!(!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) ? (!(~(result >> 24) ? a0 : a1) * 0x200 ? (~(result >> 24) ? a0 : a1) * 0x200 : v70 * 0x200) : (~(result >> 24) ? a0 : a1) ^ v70) ? (~(result >> 24) ? a0 : a1) : (~(result >> 24) ? a0 : a1) | &g_400000);
 }
 }
 v64 = result ^ v59;
 v65 = armg_calculate_flag_c(v60, v61, v62, v63);
 v66 = armg_calculate_flag_v(v60, v61, v62, v63);
 if ((result ^ v59))
 {
 if (!result)
 return a1;
 return a0;
 }
 v67 = a0 ^ a1;
 v68 = armg_calculate_flag_c(5, v64, v65, v66);
 v69 = armg_calculate_flag_v(5, v64, v65, v66);
 if ((a0 ^ a1))
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_402e6c;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_402e6c;
 return a0;
 }
LABEL_402e6c:
 if (!(result & 0xff000000))
 {
 if (armg_calculate_condition(37, a0 * 2, a0 >> 31 & 1, armg_calculate_flag_v(5, result & 0xff000000, 1, armg_calculate_flag_v(5, v67, v68, v69))))
 return a0 * 2 | 0x80000000;
 return a0 * 2;
 }
 if (armg_calculate_condition(49, result, 0x2000000, 0))
 {
 a0 = &(&g_800000)[a0];
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_402e8c;
 return &(&g_800000)[a0];
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_402e8c;
 return a0;
 }
LABEL_402e8c:
 v41 = a0 & 0x80000000;
LABEL_402e90:
 return v41 | 0x7f000000 | &g_800000;
 }
 v21 = result >> 24;
 v22 = (a3 >> 24) - v21;
 v23 = a3 >> 24;
 if (v21 < a3 >> 24)
 {
 v24 = v21 + v22;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_402d56;
LABEL_402d55:
 v25 = a0 ^ a1;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_402d5a;
LABEL_402d59:
 v26 = v25 ^ a0;
 if (!armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_402d5e;
LABEL_402d5d:
 v27 = v26 ^ v25;
 if (!armg_calculate_condition(178, v23, v21, 0))
 goto LABEL_402d62;
 goto LABEL_402d61;
 }
 else
 {
 v24 = v21;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_402d55;
LABEL_402d56:
 v25 = a1;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_402d59;
LABEL_402d5a:
 v26 = a0;
 if (armg_calculate_condition(194, v23, v21, 0))
 goto LABEL_402d5d;
LABEL_402d5e:
 v27 = v25;
 if (armg_calculate_condition(178, v23, v21, 0))
 {
LABEL_402d61:
 v22 = -(v22);
 }
 else
 {
LABEL_402d62:
 }
 }
 if (25 >= v22)
 goto LABEL_402d6c;
 return v26;
LABEL_402d6c:
 v28 = (v26 | &g_800000) & 16777215;
 if ((v26 & 0x80000000))
 v28 = -(v28);
 v29 = v27 & 0x80000000;
 v30 = armg_calculate_flag_v(5, v26 & 0x80000000, 1, armg_calculate_flag_v(2, v22, 25, 0));
 v31 = (v27 | &g_800000) & 16777215;
 if ((v27 & 0x80000000))
 v31 = -(v31);
 v32 = v24 ^ v22;
 v33 = armg_calculate_flag_c(5, v29, 1, v30);
 v34 = armg_calculate_flag_v(5, v29, 1, v30);
 if (!(v24 ^ v22))
 {
 v35 = armg_calculate_flag_c(5, v32, v33, v34);
 v36 = armg_calculate_flag_v(5, v32, v33, v34);
 v31 ^= &g_800000;
 if (!v24)
 {
 v28 ^= &g_800000;
 if (!armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_402e32;
LABEL_402e31:
 v24 += 1;
 if (!armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_402e36;
LABEL_402e35:
 v22 -= 1;
 }
 else
 {
 v28 = v28;
 if (armg_calculate_condition(5, v24, v35, v36))
 goto LABEL_402e31;
LABEL_402e32:
 if (armg_calculate_condition(21, v24, v35, v36))
 goto LABEL_402e35;
LABEL_402e36:
 }
 }
 v37 = v24 - 1;
 if ((v22 & 255) < 32)
 {
 v38 = v28 + (v31 >> (char)v22);
 v39 = v31 >> (char)v22;
 }
 else
 {
 v38 = v28 + (v31 >> 31);
 v39 = v31 >> 31;
 }
 v40 = v31 << ((char)(32 - v22) & 31) & (32 - v22 & 255) - 32 >> 31;
 v41 = v38 & 0x80000000;
 v42 = v40;
 v43 = v38;
 if (!((char)armg_calculate_condition(81, v28, v39, 0)))
 {
 v42 = -(v40);
 v43 = -(v38) - (v40 > 0);
 }
 v46 = v43;
 if (v46 >= &g_800000)
 {
 v47 = v37;
 v48 = v42;
 v49 = v46;
 if (v49 >= 0x1000000 && (v48 = (v46 & 1) * 0x80000000 | v42 >> 1, v47 = v37 + 1, v49 = v46 >> 1, 254 <= v47))
 goto LABEL_402e90;
 }
 else
 {
 v51 = v42 * 2;
 v52 = v46 * 2 + (v42 >> 31 & 1);
 v53 = v37 - 1;
 if (1 <= v37)
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, &g_800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, &g_800000, 0) ? &g_800000 : &g_800000), (armg_calculate_condition(34, v46, &g_800000, 0) ? 0 : 0))))
 goto LABEL_402e00;
 }
 else
 {
 v47 = v53;
 v48 = v51;
 v49 = v52;
 if (!((char)armg_calculate_condition(34, (armg_calculate_condition(34, v46, &g_800000, 0) ? v49 : v46), (armg_calculate_condition(34, v46, &g_800000, 0) ? &g_800000 : &g_800000), (armg_calculate_condition(34, v46, &g_800000, 0) ? 0 : 0))))
 {
LABEL_402e00:
 v55 = (!v52 ? 32 : Clz(v52)) - 8;
 v56 = v53 - v55;
 if (v55 <= v53)
 {
 v58 = v57 + v56 * &g_800000;
 if (!armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_402e16;
LABEL_402e15:
 v56 = -(v56);
 }
 else
 {
 v57 = v52 << ((char)v55 & 31) & (v55 & 255) - 32 >> 31;
 if (armg_calculate_condition(178, v53, v55, 0))
 goto LABEL_402e15;
LABEL_402e16:
 }
 return (armg_calculate_condition(178, v53, v55, 0) ? (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) : v38 & 0x80000000 | (armg_calculate_condition(162, v53, v55, 0) ? v58 : v58 | v38 & 0x80000000) >> ((char)v56 & 31) & (v56 & 255) - 32 >> 31);
 }
 }
 }
 v54 = v49 + v47 * &g_800000 + (0x80000000 <= v48);
 if (v48 == 0x80000000)
 v54 &= 4294967294;
 return v54 | v38 & 0x80000000;
}


// Function: __aeabi_ui2f at 0x402ec0
extern char g_800000;

unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_402ed8;
 return a0;
LABEL_402ed8:
 v0 = (!a0 ? 32 : Clz(a0));
 v1 = v0 - 8;
 v2 = 0x4a800000 - v1 * &g_800000;
 if (v0 >= 8)
 {
 if ((0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) == 0x80000000)
 return v2 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) + (0 >> ((char)(32 - v1) & 31) & (32 - v1 & 255) - 32 >> 31) + (0x80000000 <= (0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31)) & 4294967294;
 return v2 + (a0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31) + (0 >> ((char)(32 - v1) & 31) & (32 - v1 & 255) - 32 >> 31) + (0x80000000 <= (0 << ((char)v1 & 31) & (v1 & 255) - 32 >> 31));
 }
 else
 {
 if (!(a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) * 2)
 return v2 + (a0 >> ((char)(32 - ((char)v1 + 32)) & 31) & (32 - ((char)v1 + 32) & 255) - 32 >> 31) + ((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31 & 1) & ~((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31);
 return v2 + (a0 >> ((char)(32 - ((char)v1 + 32)) & 31) & (32 - ((char)v1 + 32) & 255) - 32 >> 31) + ((a0 << ((char)v1 + 32 & 31) & (char)v1 - 0 >> 31) >> 31 & 1);
 }
}


// Function: __floatsisf at 0x402ec8
int __floatsisf(unsigned int a0)
{
}


// Function: __floatundisf at 0x402ee8
unsigned int __floatundisf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // cc_dep1
 unsigned int v1; // cc_op
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep

 v0 = a0 | a1;
 v5 = armg_calculate_flag_c(v1, v2, v3, v4);
 v6 = armg_calculate_flag_v(v1, v2, v3, v4);
 if (a0 || a1)
 goto LABEL_402ef0;
 return a0;
LABEL_402ef0:
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 if (!a1)
 {
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_402f1a;
LABEL_402f19:
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_402f1e;
LABEL_402f1d:
 }
 else
 {
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_402f19;
LABEL_402f1a:
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_402f1d;
LABEL_402f1e:
 }
}


// Function: __aeabi_l2f at 0x402ef8
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 if (a0 || a1)
 goto LABEL_402f00;
 return a0;
LABEL_402f00:
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x402f10;
}


// Function: __fixsfsi at 0x402f74
unsigned int __fixsfsi(unsigned int a0)
{
 unsigned int v0; // r2

 v0 = a0 * 2;
 if (v0 < 0x7f000000)
 {
 return 0;
 }
 else if (158 <= v0 >> 24)
 {
 if (158 - (v0 >> 24) == 4294967199 && a0 * 0x200)
 return 0;
 if ((a0 & 0x80000000))
 return a0 & 0x80000000;
 return 2147483647;
 }
 else if ((a0 & 0x80000000))
 {
 return -((a0 * 0x100 | 0x80000000) >> ((char)(158 - (v0 >> 24)) & 31) & (158 - (v0 >> 24) & 255) - 32 >> 31);
 }
 else
 {
 return (a0 * 0x100 | 0x80000000) >> ((char)(158 - (v0 >> 24)) & 31) & (158 - (v0 >> 24) & 255) - 32 >> 31;
 }
}



/* CRT stub function _fini removed by preprocessor */


