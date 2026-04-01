// Angr Decompilation of 2_clang_Os_g
// Platform: ARMEL

#ifndef NULL
#define NULL 0
#endif

/* CRT stub function _init removed by preprocessor */


// Forward declarations for structs used throughout the file
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_0;

// Forward declarations for floating point helper functions
unsigned int __muldf3(void);
int __adddf3(int a0, int a1, int a2, int a3);
int __addsf3(int a0, int a1, int a2, int a3);
unsigned int __mulsf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int __fixsfsi(unsigned int a0);
unsigned int sub_401594(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int armg_calculate_flag_c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int armg_calculate_flag_v(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
unsigned int Clz(unsigned int a0);

typedef struct struct_1 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_1;


// Function: sub_4003f8 at 0x4003f8
extern unsigned int g_413008;

int sub_4003f8()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_413008;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400498 at 0x400498
void sub_400498()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: process_char at 0x4005c8
unsigned int process_char(unsigned int a0)
{
 if ((a0 - 65 & 255) < 26)
 a0 += 32;
 return a0 & 255;
}


// Function: process_short at 0x4005e0
unsigned int process_short(unsigned short a0, unsigned short a1)
{
 return a1 + a0 & 65535;
}


// Function: process_int at 0x4005f0
unsigned int process_int(unsigned int a0)
{
 return 1 | a0 * 2;
}


// Function: process_long at 0x4005fc
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: process_ll at 0x400604
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: process_float at 0x40061c
void process_float()
{
 unsigned int v2; // r0
 unsigned int v3; // r2
 unsigned int v4; // r3
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __mulsf3(0, 0, 0, 0);
 __addsf3(v2, 0x3f000000, v3, v4);
 return;
}


// Function: process_double at 0x400638
void process_double()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __muldf3();
 __adddf3(v2, v3, 2576980378, 1069128089);
 return;
}


// Function: process_ld at 0x400668
void process_ld(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r0
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 v2 = __muldf3();
 __adddf3(v2, a1, 0, 0x3ff00000);
 return;
}


// Function: process_bool at 0x400690
unsigned int process_bool(unsigned int a0)
{
 unsigned int v0; // r1

 v0 = a0 & 1;
 return (0 < a0 ? 1 : 0) & v0 + -(v0) + (v0 <= 0);
}


// Function: const_param at 0x4006b0
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x4006bc
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4006cc
extern char g_402453;

int test_data_types_l1()
{
 unsigned int v1; // r1
 unsigned int v2; // r0
 unsigned int v0; // [bp-0xc]

 puts(&g_402453);
 printf("DT-L1-01 (process_char): %c\n", 97);
 printf("DT-L1-01 (process_char): %c\n", 98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200);
 printf("DT-L1-05 (process_ll): %lld\n", v1);
 printf("DT-L1-06 (process_float): %.2f\n", v1);
 printf("DT-L1-07 (process_double): %.2f\n", v1);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v0 = 10;
 v2 = printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
 return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: array_1d_stack at 0x400828
unsigned int array_1d_stack(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: array_string at 0x400854
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // r1
 unsigned int v1; // r1
 unsigned int v2; // r1

 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 } while (*((char *)(a0 + v1)));
 return v1 - 0;
}


// Function: array_2d_stack at 0x400870
unsigned int array_2d_stack(unsigned int a0)
{
 unsigned int i; // r2
 unsigned int v1; // r1
 unsigned int v2; // r2

 i = 0;
 v1 = 0;
 do
 {
 v2 = i + 44;
 v1 += *((int *)(a0 + i));
 i = v2;
 } while (i != 440);
 return v1;
}


// Function: array_3d at 0x400894
unsigned int array_3d(unsigned int *a0)
{
 unsigned int i; // r12
 unsigned int v1; // r1
 unsigned int *v2; // r3
 unsigned int *ptr; // r3
 unsigned int k; // r2
 unsigned int v5; // r2
 unsigned int j; // loop counter

 i = 0;
 v1 = 0;
 do
 {
 j = 0;
 v2 = a0;
 do
 {
 ptr = v2;
 k = 0;
 do
 {
 v5 = k - 1;
 v1 += ptr[-1 * k];
 k = v5;
 } while (k != 4294967291);
 j = j + 1;
 v2 = ptr + 5;
 } while (j != 5);
 i += 1;
 a0 += 25;
 } while (i != 5);
 return v1;
}


// Function: array_vla at 0x4008ec
unsigned int array_vla(unsigned int i, unsigned int *a1)
{
 unsigned int v0; // r0
 unsigned int *ptr; // r1
 unsigned int v2; // r0
 unsigned int *v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v2 = v0;
 v3 = a1 + 1;
 v4 = i - 1;
 v5 = *(a1) + v2;
 i = v4;
 v0 = v5;
 a1 = v3;
 } while (i != 1);
 return *(ptr) + v2;
}


// Function: array_pointer at 0x400918
unsigned int array_pointer(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 10;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: pointer_array at 0x400944
typedef struct struct_pointer_array_0 {
 unsigned int field_0;
} struct_pointer_array_0;

unsigned int pointer_array(struct_pointer_array_0 **a0, unsigned int a1)
{
 unsigned int v0; // r2
 struct_pointer_array_0 **v1; // r0
 unsigned int result; // r1
 struct_pointer_array_0 **v3; // r0
 unsigned int v4; // r1

 if (a1 < 1)
 return 0;
 v0 = 0;
 if (10 <= a1)
 a1 = 10;
 do
 {
 v1 = a0;
 result = a1;
 v3 = v1 + 1;
 if (*(v1))
 v0 += (*v1)->field_0;
 } while ((v4 = result - 1, a1 = result - 1, a0 = v3, result != 1));
 return v0;
}


// Function: array_complex_index at 0x400984
unsigned int array_complex_index(unsigned int *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 char v0; // [bp+0x0]
 unsigned int vvar_26; // r64

 if ((char)armg_calculate_condition(66, a3, 0, 0))
 return 4294967295;
 vvar_26 = *((int *)&v0);
 if (v0 < a2)
 {
 if ((char)armg_calculate_condition(162, a3, a1, 0))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(162, a3, a1, 0))
 return 4294967295;
 }
 if (!armg_calculate_condition(82, (unsigned int)v0, 0, 0))
 return a0[1073741823];
 return a0[v0 * a1 + a3];
}


// Function: array_oob at 0x4009bc
unsigned int array_oob(unsigned int *ptr, unsigned int a1)
{
 unsigned int result; // r2
 unsigned int v1; // r1
 unsigned int *v2; // r0
 unsigned int v3; // r2

 if ((char)armg_calculate_condition(66, a1, 0, 0))
 return 0;
 result = a1 + 1;
 v1 = 0;
 do
 {
 v2 = ptr + 1;
 v3 = result - 1;
 v1 += *(ptr);
 result = v3;
 ptr = v2;
 } while (result != 1);
 return v1;
}


// Function: test_array_types at 0x4009ec
extern char g_402474;

int test_array_types()
{
 unsigned int i; // r0
 char *iter; // r1
 char *cur; // r3
 unsigned int i1; // r5
 unsigned int i3; // r4
 unsigned int l; // r12
 char *v25; // r2
 unsigned int v26; // r1
 unsigned int i2; // r4
 char *v28; // r3
 char *ptr; // r3
 unsigned int pos; // r2
 unsigned int i4; // r5
 unsigned int v31; // r5
 unsigned int idx; // r1
 unsigned int n; // r2
 unsigned int v35; // r1
 unsigned int v36; // r2
 char *p; // r5
 unsigned int off; // r4
 unsigned int v39; // r1
 unsigned int v14; // r3
 unsigned int index; // r0
 unsigned int v41; // r0
 unsigned int j; // r0
 unsigned int v17; // r1
 unsigned int v18; // r0
 unsigned int k; // r0
 char *v20; // r1
 unsigned long v42; // [bp-0x4e8]
 char v0; // [bp-0x4a4]
 char *v1; // [bp-0x498]
 char *v2; // [bp-0x494]
 char *v3; // [bp-0x490]
 char v4; // [bp-0x48c]
 unsigned int v5; // [bp-0x470]
 unsigned int v6; // [bp-0x46c]
 unsigned int v8; // [bp-0x468]
 unsigned long v43; // [bp-0x464]
 char v9; // [bp-0x39c]
 char v10; // [bp-0x1a8]

 puts(&g_402474);
 printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
 printf("ARR-L1-02 (array_string): %d\n", 5);
 i = 0;
 iter = &v10;
 do
 {
 pos = 0;
 do
 {
 if (i == pos)
 v14 = i;
 else
 v14 = 0;
 } while ((*((unsigned int *)&iter[4 * pos]) = v14, pos += 1, pos != 10));
 i += 1;
 iter += 40;
 } while (i != 10);
 j = 0;
 v17 = 0;
 do
 {
 v18 = j + 44;
 v17 += *((int *)&(&v10)[j]);
 j = v18;
 } while (j != 440);
 printf("ARR-L1-03 (array_2d_stack): %d\n", v17);
 k = 0;
 v20 = &v9;
 do
 {
 cur = v20;
 i1 = 0;
 do
 {
 i3 = 0;
 do
 {
 *((unsigned int *)&cur[-4 * i3]) = 1;
 i3 -= 1;
 } while (i3 != 4294967291);
 i1 += 1;
 cur += 20;
 } while (i1 != 5);
 k += 1;
 v20 += 100;
 } while (k != 5);
 l = 0;
 v25 = (char*)&v9;
 v26 = 0;
 do
 {
 i2 = 0;
 v28 = v25;
 do
 {
 ptr = v28;
 i4 = 0;
 do
 {
 v31 = i4 - 1;
 v26 += *((int *)&ptr[-1 * i4]);
 i4 = v31;
 } while (i4 != 4294967291);
 i2 += 1;
 v28 = ptr + 5;
 } while (i2 != 5);
 l += 1;
 v25 += 25;
 } while (l != 5);
 printf("ARR-L1-04 (array_3d): %d\n", v26);
 printf("ARR-L2-01 (array_vla): %d\n", 60);
 idx = 0;
 do
 {
 (&v43)[idx] = idx;
 idx += 10;
 } while (idx != 50);
 n = 0;
 v35 = 0;
 do
 {
 v36 = n + 40;
 v35 += *((int *)((char *)&v43 + n));
 n = v36;
 } while (n != 200);
 printf("ARR-L2-02 (array_pointer): %d\n", v35);
 p = (char*)&v8;
 off = 0;
 v8 = 10;
 v1 = &v8;
 v6 = 20;
 v5 = 30;
 v3 = &v5;
 v2 = &v6;
 memset(&v4, 0, 28);
 v39 = 0;
 while (1)
 {
 if (p)
 v39 += *(p);
 if (off == 2)
 break;
 p = (&v2)[off];
 off += 1;
 }
 printf("ARR-L2-03 (pointer_array): %d\n", v39);
 index = 0;
 do
 {
 (&v42)[index] = index;
 index += 1;
 } while (index != 20);
 v41 = printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)&v0));
 return printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)&v0));
}


// Function: ptr_single at 0x400c48
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x400c54
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x400c64
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0 + 1;
}


// Function: ptr_increment at 0x400c78
unsigned int ptr_increment(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: ptr_offset at 0x400ca4
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x400cac
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: ptr_void at 0x400cb8
int ptr_void(void* a0, unsigned int a1)
{
 if (a1 == 1)
 return *((char *)a0);
 if (a1)
 goto LABEL_400cd4;
 return *((int *)a0);
LABEL_400cd4:
 return *((int *)a0);
}


// Function: ptr_const at 0x400ce0
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x400cec
unsigned int ptr_const_ptr(unsigned int *ptr)
{
 unsigned int v0; // r1

 v0 = *(ptr) + 5;
 *(ptr) = v0;
 return v0;
}


// Function: ptr_func_simple at 0x400d00
int ptr_func_simple(unsigned int a0, unsigned int a1)
{
 return ((int (*)(unsigned int, unsigned int))a0)(a0, a1);
}


// Function: ptr_func_complex at 0x400d0c
extern unsigned int g_412f08;
extern unsigned int g_412f0c;

int ptr_func_complex(int (*a0)(unsigned int, char*, unsigned int*, unsigned int, unsigned int, unsigned int, char*, int), unsigned int a1)
{
 unsigned int v3; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v3 = a0(a1, &v0, (unsigned int*)a0, a1, g_412f08, g_412f0c, &v2, *((int *)&v1));
 return a0(a1, &v0, (unsigned int*)a0, a1, g_412f08, g_412f0c, &v2, *((int *)&v1));
}


// Function: ptr_cast at 0x400d5c
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x400d64
int opaque_handle_create()
{
 unsigned int v0; // r0

 return v0;
}


// Function: opaque_handle_op at 0x400d68
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: test_pointer_types at 0x400d70
extern char g_40248f;

int test_pointer_types()
{
 unsigned int v5; // r1
 unsigned int idx; // r2
 unsigned int v7; // r2
 unsigned int v8; // r0
 unsigned int result; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]

 puts(&g_40248f);
 printf("PTR-L2-01 (ptr_single): %d\n", 15);
 printf("PTR-L2-02 (ptr_double): %d\n", 15);
 printf("PTR-L2-03 (ptr_triple): %d\n", 6);
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 1;
 idx = 0;
 do
 {
 v7 = idx + 1;
 v5 += (&v1)[idx];
 idx = v7;
 } while (idx != 4);
 printf("PTR-L2-04 (ptr_increment): %d\n", v5);
 printf("PTR-L2-05 (ptr_offset): %d\n", 30);
 printf("PTR-L2-06 (ptr_diff): %d\n", 4);
 printf("PTR-L2-07 (ptr_void): %d\n", 42);
 printf("PTR-L2-07 (ptr_void): %d\n", 65);
 printf("PTR-L2-08 (ptr_const): %d\n", 20);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
 printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 v8 = printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x400ee0
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x400ef4
unsigned int struct_array(unsigned int *a0, unsigned int i)
{
 unsigned int *ptr; // r2
 unsigned int v1; // r0
 unsigned int *v2; // r2
 unsigned int v3; // r1

 if (i < 1)
 return 0;
 ptr = a0 + 1;
 v1 = 0;
 do
 {
 v2 = ptr + 1;
 v3 = i - 1;
 v1 = ptr[1] + v1 + ptr[0] + ptr[1];
 ptr = v2;
 i = v3;
 } while (i != 1);
 return v1;
}


// Function: struct_nested at 0x400f38
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: struct_deep at 0x400f48
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x400f58
int struct_with_ptr(struct_0 *idx)
{
 unsigned int v0; // r0

 if (!idx->field_4)
 v0 = 0;
 else
 v0 = idx->field_4->field_0;
 return v0 + idx->field_0;
}


// Function: struct_bitfields at 0x400f74
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // r0

 v0 = *(ptr);
 return (v0 & 1) + (v0 >> 6) + (3 & v0 >> 1) + (7 & v0 >> 3);
}


// Function: union_type at 0x400f9c
unsigned int union_type(void* a0, unsigned int a1)
{
 return (a1 == 1 ? __fixsfsi(*((int *)a0)) : *((int *)*((char *)a0)));
}


// Function: union_array at 0x400fc8
unsigned int union_array(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: enum_type at 0x400ff4
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: enum_switch at 0x401000
extern unsigned int g_4024f8;

int enum_switch(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = 5344;
 if (a0 <= 3)
 v0 = &g_4024f8;
 return *((int *)(v0 + a0 * 4));
}


// Function: struct_func_ptr at 0x401020
typedef struct struct_func_ptr_0 {
 char padding_0[4];
 unsigned int field_4;
} struct_func_ptr_0;

int struct_func_ptr(struct_func_ptr_0 *a0)
{
 return ((int (*)(void))a0->field_4)();
}


// Function: linked_list at 0x40102c
typedef struct struct_linked_list_0 {
 unsigned int field_0;
 struct struct_linked_list_0 *field_4;
} struct_linked_list_0;

struct_linked_list_0 * linked_list(struct_linked_list_0 *a0)
{
 struct_linked_list_0 *result; // r0
 struct_linked_list_0 *v1; // r0
 unsigned int v2; // r0
 struct_linked_list_0 *ptr; // r1
 unsigned int v4; // r0
 struct_linked_list_0 *v5; // r1
 unsigned int v6; // r0

 if (!a0)
 {
 result = NULL;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401038;
 return NULL;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401038;
 return a0;
 }
LABEL_401038:
 v2 = 0;
 do
 {
 ptr = v1;
 v4 = v2;
 v5 = ptr->field_4;
 v6 = ptr->field_0 + v4;
 v2 = v6;
 v1 = v5;
 } while (ptr->field_4);
 return ptr->field_0 + v4;
}


// Function: doubly_linked_list at 0x401058
typedef struct struct_doubly_linked_list_0 {
 unsigned int field_0;
 struct struct_doubly_linked_list_0 *field_4;
} struct_doubly_linked_list_0;

struct_doubly_linked_list_0 * doubly_linked_list(struct_doubly_linked_list_0 *a0)
{
 struct_doubly_linked_list_0 *result; // r0
 struct_doubly_linked_list_0 *v1; // r0
 unsigned int v2; // r0
 struct_doubly_linked_list_0 *ptr; // r1
 unsigned int v4; // r0
 struct_doubly_linked_list_0 *v5; // r1
 unsigned int v6; // r0

 if (!a0)
 {
 result = NULL;
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401064;
 return NULL;
 }
 else
 {
 if (!((char)armg_calculate_condition(2, a0, 0, 0)))
 goto LABEL_401064;
 return a0;
 }
LABEL_401064:
 v2 = 0;
 do
 {
 ptr = v1;
 v4 = v2;
 v5 = ptr->field_4;
 v6 = ptr->field_0 + v4;
 v2 = v6;
 v1 = v5;
 } while (ptr->field_4);
 return ptr->field_0 + v4;
}


// Function: binary_tree_sum at 0x401084
typedef struct struct_binary_tree_0 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_binary_tree_0 *field_8;
} struct_binary_tree_0;

unsigned int binary_tree_sum(struct_binary_tree_0 *a0)
{
 unsigned int v0; // r0
 struct_binary_tree_0 *ptr; // r4
 unsigned int v2; // r0
 struct_binary_tree_0 *v3; // r4

 if (!a0)
 return 0;
 v0 = 0;
 do
 {
 ptr = a0;
 v2 = binary_tree_sum(ptr->field_4);
 v3 = ptr->field_8;
 v0 = ptr->field_0 + v0 + v2;
 a0 = v3;
 } while (ptr->field_8);
 return v0;
}


// Function: binary_tree at 0x4010cc
unsigned int binary_tree(void* a0)
{
 unsigned int v0; // r0

 v0 = binary_tree_sum(a0);
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x4010d0
typedef struct struct_graph_traverse_1 {
 struct struct_graph_traverse_0 *field_0;
 char padding_4[36];
 unsigned int field_28;
} struct_graph_traverse_1;

typedef struct struct_graph_traverse_0 {
 unsigned int field_0;
 struct struct_graph_traverse_0 *field_4;
} struct_graph_traverse_0;

unsigned int graph_traverse(struct_graph_traverse_1 *p)
{
 unsigned int v0; // r1
 unsigned int v1; // r2
 unsigned int ptr; // r2
 unsigned int v3; // r2
 unsigned int idx; // loop counter

 if (p->field_28 < 1)
 return 0;
 v0 = 0;
 idx = 0;
 do
 {
 v1 = (&p->field_0)[idx];
 while (1)
 {
 ptr = v1;
 if (!ptr)
 break;
 v3 = *((int *)(ptr + 4));
 v0 += *((int *)ptr);
 v1 = v3;
 }
 idx = idx + 1;
 } while (idx != p->field_28);
 return v0;
}


// Function: test_composite_types at 0x401124
typedef struct struct_composite_0 {
 char field_0[4];
 struct struct_composite_0 *field_4;
} struct_composite_0;

typedef struct struct_composite_1 {
 char field_0[4];
 struct struct_composite_1 *field_4;
} struct_composite_1;

extern char g_4024aa;

int test_composite_types()
{
 unsigned int v19; // r1
 struct_composite_0 *ptr; // r0
 unsigned int addr; // r0
 unsigned int v30; // r0
 unsigned int v31; // r0
 struct_composite_0 *v21; // r0
 struct_1 *p; // r0
 unsigned int v23; // r1
 struct_1 *v24; // r0
 unsigned int idx; // r5
 unsigned int v27; // r1
 unsigned int v28; // r0
 char *v0; // [bp-0x84]
 char v1[40]; // [bp-0x80]
 unsigned int flag6; // [bp-0x58]
 unsigned int flag5; // [bp-0x54]
 unsigned int v4; // [bp-0x4c]
 unsigned int flag3; // [bp-0x48]
 unsigned int flag4; // [bp-0x44]
 char v7; // [bp-0x40], Other Possible Types: unsigned int
 char *v8; // [bp-0x3c]
 unsigned int flag2; // [bp-0x38]
 unsigned int v10; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 char *v12; // [bp-0x2c]
 unsigned int v13; // [bp-0x28]
 char *v14; // [bp-0x24]
 unsigned int v15; // [bp-0x20]
 char *v16; // [bp-0x1c]
 unsigned int v17; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 puts(&g_4024aa);
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
 v19 = 0;
 v13 = 10;
 v17 = 30;
 ptr = (struct_composite_0*)&v13;
 result = 0;
 v16 = (char*)&v17;
 v15 = 20;
 v14 = (char*)&v15;
 do
 {
 v21 = ptr->field_4;
 v19 += *((unsigned int*)ptr->field_0);
 ptr = v21;
 } while (ptr->field_4);
 printf("CMP-L2-12 (linked_list): %d\n", v19);
 p = (struct_composite_1*)&v7;
 v23 = 0;
 v10 = 20;
 v12 = (char*)&v7;
 flag1 = 0;
 flag2 = 0;
 v7 = 10;
 v8 = (char*)&v10;
 do
 {
 v24 = p->field_4;
 v23 += *((unsigned int*)p->field_0);
 p = v24;
 } while (p->field_4);
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v23);
 v4 = 100;
 flag3 = 0;
 flag4 = 0;
 printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v4));
 idx = 0;
 flag5 = 0;
 flag6 = 1;
 memset(&v1, 0, 36);
 v27 = 0;
 v0 = &flag6;
 do
 {
 v28 = (&v0)[idx];
 while (1)
 {
 addr = v28;
 if (!addr)
 break;
 v30 = *((int *)(addr + 4));
 v27 += *((int *)addr);
 v28 = v30;
 }
 idx += 1;
 } while (idx != 2);
 v31 = printf("CMP-L2-15 (graph_traverse): %d\n", v27);
 return printf("CMP-L2-15 (graph_traverse): %d\n", v27);
}


// Function: main at 0x401394
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: __muldf3 at 0x4013b4
unsigned int __muldf3()
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
 unsigned long long vvar_204;
 unsigned long long vvar_209;
 unsigned long long vvar_221;
 unsigned long long vvar_74;
 unsigned long long vvar_73;
 unsigned long long vvar_86;
 unsigned long long vvar_314;

 unsigned int a0 = 0, a1 = 0, a2 = 0, a3 = 0;
 v2 = 2047 & a1 >> 20;
 if ((2047 & a1 >> 20))
 {
 v3 = 2047 & a3 >> 20;
 v4 = 0; v5 = 0; v6 = 0; v7 = 0;
 v8 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 5 : v4);
 v9 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? 2047 & a3 >> 20 : v5);
 v10 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? a3 >> 19 & 1 : v6);
 v11 = (armg_calculate_condition(v4 | 16, v5, v6, v7) ? armg_calculate_flag_v(v4, v5, v6, v7) : v7);
 if (!armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_4013ca;
LABEL_4013c9:
 v21 = 5;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (!armg_calculate_condition(21, v22, v23, v24))
 goto LABEL_4013ce;
LABEL_4013cd:
 v33 = 5;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(5, v34, v35, v36))
 {
 v93 = sub_401594(0, 0, 0, 0, 0, 0, 0, 0);
 return sub_401594(0, 0, 0, 0, 0, 0, 0, 0);
 }
 }
 else
 {
 v3 = v12;
 v13 = 0; v14 = 0; v15 = 0; v16 = 0;
 v8 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 5 : v13);
 v9 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? 2047 & a3 >> 20 : v14);
 v10 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? a3 >> 19 & 1 : v15);
 v11 = (armg_calculate_condition(v13 | 16, v14, v15, v16) ? armg_calculate_flag_v(v13, v14, v15, v16) : v16);
 if (armg_calculate_condition(v8 | 16, v9, v10, v11))
 goto LABEL_4013c9;
LABEL_4013ca:
 v21 = v8;
 v22 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? v2 ^ 2047 : v9);
 v23 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_c(v8, v9, v10, v11) : v10);
 v24 = (armg_calculate_condition(v8 | 16, v9, v10, v11) ? armg_calculate_flag_v(v8, v9, v10, v11) : v11);
 if (armg_calculate_condition(v21 | 16, v22, v23, v24))
 goto LABEL_4013cd;
LABEL_4013ce:
 v33 = v21;
 v34 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? v3 ^ 2047 : v22);
 v35 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_c(v21, v22, v23, v24) : v23);
 v36 = (armg_calculate_condition(v21 | 16, v22, v23, v24) ? armg_calculate_flag_v(v21, v22, v23, v24) : v24);
 if ((char)armg_calculate_condition(v33, v34, v35, v36))
 {
 v93 = sub_401594(0, 0, 0, 0, 0, 0, 0, 0);
 return sub_401594(0, 0, 0, 0, 0, 0, 0, 0);
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
 v56 = (v55 CONCAT v55) + a0 * v54 >> 32;
 v57 = (0 CONCAT v56) + v53 * v54 >> 32;
 v58 = (0 CONCAT v56) + v53 * v54;
 v60 = 0;
 v61 = v45 - 1023 - (0x200 > v57);
 v62 = v57;
 v63 = v58;
 v64 = v57;
 v65 = 0x200;
 if (0x200 > v62)
 {
 v60 = 0;
 v62 = v57 * 2;
 v63 = v58 * 2;
 v64 = v58;
 v65 = v58;
 }
 v67 = v64;
 v68 = v46 & 0x80000000 | v62 * 0x800 | v63 >> 21;
 v69 = v63 * 0x800;
 v70 = v61 - 253;
 if (253 < v61)
 {
 v71 = (armg_calculate_condition(130, v67, v65, v60) ? v70 : v67);
 v72 = (armg_calculate_condition(130, v67, v65, v60) ? 0x700 : v65);
 v73 = (armg_calculate_condition(130, v67, v65, v60) ? 0 : v60);
 if ((char)armg_calculate_condition(130, v71, v72, v73))
 goto LABEL_401498;
LABEL_401458:
 if (0 == 0x80000000)
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
 goto LABEL_401458;
LABEL_401498:
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
 goto LABEL_401486;
LABEL_401485:
 v78 |= v79 * 0x100000;
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_40148c;
 return a0 | a2;
 }
 else
 {
 v80 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2 : v49);
 v81 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 2047 : v50);
 v82 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? v79 : v51);
 v83 = (armg_calculate_condition(v49 | 192, v50, v51, v52) ? 0 : v52);
 if (armg_calculate_condition(v80 | 192, v81, v82, v83))
 goto LABEL_401485;
LABEL_401486:
 if (!((char)armg_calculate_condition(v80 | 192, v81, v82, v83)))
 goto LABEL_40148c;
 return a0 | a2;
 }
LABEL_40148c:
 v68 = v78 | 0x100000;
 v61 = v0 - 1;
 if ((char)armg_calculate_condition(194, v0, 1, 0))
 return 0;
 }
 if (armg_calculate_condition(209, v61, 54, 0))
 {
 v84 = 0;
 if (!armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_4014a6;
LABEL_4014a5:
 v68 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_4014ac;
 return v84;
 }
 else
 {
 v84 = v69;
 if (armg_calculate_condition(209, v61, 54, 0))
 goto LABEL_4014a5;
LABEL_4014a6:
 if (!((char)armg_calculate_condition(209, v61, 54, 0)))
 goto LABEL_4014ac;
 return v84;
 }
LABEL_4014ac:
 v85 = -(v1);
 v86 = v85 - 32;
 if (32 > v85)
 {
 v87 = v86 + 12;
 if (!((char)armg_calculate_condition(193, v86, 12, 0)))
 {
 v88 = (char)v87 + 20;
 if (0 || (v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) * 2)
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 return (v84 >> ((char)v87 + 20 & 31) & (v87 + 20 & 255) - 32 >> 31 | v68 << ((char)(32 - v88) & 31) & (char)(32 - v88) - 32 >> 31) + ((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31) & ~((v84 << ((char)(32 - (v87 + 20)) & 31) & (char)(32 - (v87 + 20)) - 32 >> 31) >> 31);
 }
 else
 {
 if (!0 && !(v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) * 2)
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31) & ~((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 return (v84 >> ((char)(32 - (12 - v87)) & 31) & (32 - (12 - v87 & 255) & 255) - 32 >> 31 | v68 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) + ((v84 << ((char)(12 - v87) & 31) & (char)(12 - v87) - 32 >> 31) >> 31);
 }
 }
 else if (!0 && !(v84 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) && !(v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) * 2)
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31) & ~((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
 else
 {
 return (v68 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 & ~((v68 & 0x80000000) >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31)) + ((v84 >> ((char)v86 & 31) & (v86 & 255) - 32 >> 31 | v68 << ((char)(32 - v86) & 31) & (char)(32 - v86) - 32 >> 31) >> 31);
 }
}


// Function: sub_401594 at 0x401594
unsigned int sub_401594(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
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
 goto LABEL_4015c0;
 }
 else
 {
 v6 = (armg_calculate_condition(21, v9, v10, v11) ? flag3 ^ v0 : v9);
 v7 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_c(5, v9, v10, v11) : v10);
 v8 = (armg_calculate_condition(21, v9, v10, v11) ? armg_calculate_flag_v(5, v9, v10, v11) : v11);
 if ((char)armg_calculate_condition(5, v6, v7, v8))
 {
LABEL_4015c0:
 v31 = a0 | a1 * 2;
 v32 = a1 >> 31 & 1;
 v33 = armg_calculate_flag_v(5, v6, v7, v8);
 if (!a0 && !a1 * 2)
 {
 v34 = a2;
 if (!armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_4015ca;
LABEL_4015c9:
 v35 = a3;
 if (!armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_4015ce;
LABEL_4015cd:
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
 goto LABEL_4015c9;
LABEL_4015ca:
 v35 = a1;
 if (armg_calculate_condition(21, v31, v32, v33))
 goto LABEL_4015cd;
LABEL_4015ce:
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
 goto LABEL_4015f6;
LABEL_4015f5:
 if ((char)armg_calculate_condition(21, v47, v48, v49))
 return v50;
 }
 else
 {
 v50 = v34;
 if (armg_calculate_condition(21, v47, v48, v49))
 goto LABEL_4015f5;
LABEL_4015f6:
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
 while (1)
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
 goto LABEL_401574;
 return a0;
 v22 = flag3;
 }
LABEL_401574:
 while (1)
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
 return 0;
}


// Function: __mulsf3 at 0x401620
extern unsigned int g_800000;

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
 v2 = 0; v3 = 0; v4 = 0; v5 = 0;
 v6 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 5 : v2);
 v7 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? 255 & a1 >> 23 : v3);
 v8 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? a1 >> 22 & 1 : v4);
 v9 = (armg_calculate_condition(v2 | 16, v3, v4, v5) ? armg_calculate_flag_v(v2, v3, v4, v5) : v5);
 if (!armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_40162e;
LABEL_40162d:
 v18 = 5;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (!armg_calculate_condition(21, v19, v20, v21))
 goto LABEL_401632;
LABEL_401631:
 v30 = 5;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(5, v31, v32, v33))
 goto LABEL_401734;
 }
 else
 {
 v1 = a3;
 v10 = 0; v11 = 0; v12 = 0; v13 = 0;
 v6 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 5 : v10);
 v7 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? 255 & a1 >> 23 : v11);
 v8 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? a1 >> 22 & 1 : v12);
 v9 = (armg_calculate_condition(v10 | 16, v11, v12, v13) ? armg_calculate_flag_v(v10, v11, v12, v13) : v13);
 if (armg_calculate_condition(v6 | 16, v7, v8, v9))
 goto LABEL_40162d;
LABEL_40162e:
 v18 = v6;
 v19 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? v0 ^ 255 : v7);
 v20 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_c(v6, v7, v8, v9) : v8);
 v21 = (armg_calculate_condition(v6 | 16, v7, v8, v9) ? armg_calculate_flag_v(v6, v7, v8, v9) : v9);
 if (armg_calculate_condition(v18 | 16, v19, v20, v21))
 goto LABEL_401631;
LABEL_401632:
 v30 = v18;
 v31 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? v1 ^ 255 : v19);
 v32 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_c(v18, v19, v20, v21) : v20);
 v33 = (armg_calculate_condition(v18 | 16, v19, v20, v21) ? armg_calculate_flag_v(v18, v19, v20, v21) : v21);
 if ((char)armg_calculate_condition(v30, v31, v32, v33))
 {
LABEL_401734:
 v1 = 255 & a1 >> 23;
 if ((v0 ^ 255))
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 goto LABEL_40175c;
 }
 else
 {
 v42 = (armg_calculate_condition(21, v31, v32, v33) ? v1 ^ 255 : v31);
 v43 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_c(5, v31, v32, v33) : v32);
 v44 = (armg_calculate_condition(21, v31, v32, v33) ? armg_calculate_flag_v(5, v31, v32, v33) : v33);
 if ((char)armg_calculate_condition(5, v42, v43, v44))
 {
LABEL_40175c:
 if (a0)
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? a0 ^ 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (!armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_401766;
LABEL_401765:
 v89 = a1;
 if (!armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_40176a;
LABEL_401769:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 goto LABEL_40176e;
 }
 else
 {
 v86 = (armg_calculate_condition(21, v42, v43, v44) ? 0x80000000 : v42);
 v87 = (armg_calculate_condition(21, v42, v43, v44) ? 1 : v43);
 v88 = (armg_calculate_condition(21, v42, v43, v44) ? armg_calculate_flag_v(5, v42, v43, v44) : v44);
 if (armg_calculate_condition(5, v86, v87, v88))
 goto LABEL_401765;
LABEL_401766:
 v89 = a0;
 if (armg_calculate_condition(21, v86, v87, v88))
 goto LABEL_401769;
LABEL_40176a:
 v90 = (armg_calculate_condition(21, v86, v87, v88) ? a1 : v86);
 v91 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_c(5, v86, v87, v88) : v87);
 v92 = (armg_calculate_condition(21, v86, v87, v88) ? armg_calculate_flag_v(5, v86, v87, v88) : v88);
 if (!armg_calculate_condition(21, v90, v91, v92))
 {
LABEL_40176e:
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
LABEL_401774:
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
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | *((unsigned int*)&g_800000);
 v103 = a1 * 0x200;
 v104 = a1 >> 23 & 1;
 v105 = armg_calculate_flag_v(5, v1 ^ 255, armg_calculate_flag_c(5, v99, v100, v98), armg_calculate_flag_v(5, v99, v100, v98));
 if (a1 * 0x200)
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (a1 ^ a1) & 0x80000000 | 0x7f000000 | *((unsigned int*)&g_800000);
 return a1 | 0x7f000000 | 0xc00000;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v103, v104, v105)))
 return (v89 ^ a1) & 0x80000000 | 0x7f000000 | *((unsigned int*)&g_800000);
 return v89 | 0x7f000000 | 0xc00000;
 }
 }
 }
 v93 = (armg_calculate_condition(21, v90, v91, v92) ? a1 ^ 0x80000000 : v90);
 v94 = (armg_calculate_condition(21, v90, v91, v92) ? 1 : v91);
 v95 = (armg_calculate_condition(21, v90, v91, v92) ? armg_calculate_flag_v(5, v90, v91, v92) : v92);
 if ((char)armg_calculate_condition(5, v93, v94, v95))
 return v89 | 0x7f000000 | 0xc00000;
 goto LABEL_401774;
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
 while (1)
 {
 v54 = v53;
 v49 = 5;
 v50 = (armg_calculate_condition(v49, v50, v51, v52) ? v54 & *((unsigned int*)&g_800000) : v50);
 v51 = (armg_calculate_condition(v49, v50, v51, v52) ? 0 : v51);
 v52 = (armg_calculate_condition(v49, v50, v51, v52) ? armg_calculate_flag_v(v49, v50, v51, v52) : v52);
 if (!((char)armg_calculate_condition(v49, v50, v51, v52)))
 break;
 v0 -= 1;
 }
 a0 = v54 | a0 & 0x80000000;
 v30 = 5;
 v31 = v1;
 v32 = armg_calculate_flag_c(v49, v50, v51, v52);
 v33 = armg_calculate_flag_v(v49, v50, v51, v52);
 v55 = a1;
 while (1)
 {
 v56 = v55;
 v30 = 5;
 v31 = (armg_calculate_condition(v30, v31, v32, v33) ? v56 & *((unsigned int*)&g_800000) : v31);
 v32 = (armg_calculate_condition(v30, v31, v32, v33) ? 0 : v32);
 v33 = (armg_calculate_condition(v30, v31, v32, v33) ? armg_calculate_flag_v(v30, v31, v32, v33) : v33);
 if (!((char)armg_calculate_condition(v30, v31, v32, v33)))
 break;
 v1 -= 1;
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
 goto LABEL_401690;
LABEL_40164c:
 v71 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5) >> 32;
 v72 = (0x8000000 | result >> 5) * (0x8000000 | v64 >> 5);
 if (v71 < *((unsigned int*)&g_800000))
 {
 v73 = v71 * 2;
 if (!armg_calculate_condition(50, v71, *((unsigned int*)&g_800000), 0))
 goto LABEL_40166a;
LABEL_401669:
 v74 = v73 | v72 >> 31;
 if (!armg_calculate_condition(50, v71, *((unsigned int*)&g_800000), 0))
 goto LABEL_40166e;
LABEL_40166d:
 v72 *= 2;
 }
 else
 {
 v73 = v71;
 if (armg_calculate_condition(50, v71, *((unsigned int*)&g_800000), 0))
 goto LABEL_401669;
LABEL_40166a:
 v74 = v73;
 if (armg_calculate_condition(50, v71, *((unsigned int*)&g_800000), 0))
 goto LABEL_40166d;
LABEL_40166e:
 }
 v75 = v62 & 0x80000000 | v74;
 v76 = v61 - 127 - (armg_calculate_flag_c(2, v71, *((unsigned int*)&g_800000), 0) ^ 1);
 if (253 >= v76)
 {
 if (v72 == 0x80000000)
 return (v62 & 0x80000000 | v74) + v76 * *((unsigned int*)&g_800000) + (0x80000000 <= v72) & 4294967294;
 return (v62 & 0x80000000 | v74) + v76 * *((unsigned int*)&g_800000) + (0x80000000 <= v72);
 }
 else
 {
 if ((char)armg_calculate_condition(194, v76, 253, 0))
 return (v62 & 0x80000000 | v74) & 0x80000000 | 0x7f000000 | *((unsigned int*)&g_800000);
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
 goto LABEL_40164c;
LABEL_401690:
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
 goto LABEL_4016ae;
LABEL_4016ad:
 v80 |= v81 * *((unsigned int*)&g_800000);
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_4016b4;
 return v80 | v81 * *((unsigned int*)&g_800000);
 }
 else
 {
 v82 = (armg_calculate_condition(197, v77, v78, v79) ? 2 : 5);
 v83 = (armg_calculate_condition(197, v77, v78, v79) ? 255 : v77);
 v84 = (armg_calculate_condition(197, v77, v78, v79) ? v81 : v78);
 v85 = (armg_calculate_condition(197, v77, v78, v79) ? 0 : v79);
 if (armg_calculate_condition(v82 | 192, v83, v84, v85))
 goto LABEL_4016ad;
LABEL_4016ae:
 if (!((char)armg_calculate_condition(v82 | 192, v83, v84, v85)))
 goto LABEL_4016b4;
 return v80;
 }
LABEL_4016b4:
 v75 = v80 | *((unsigned int*)&g_800000);
 v72 = 0;
 v76 = v81 - 1;
 if ((char)armg_calculate_condition(194, v81, 1, 0))
 return (v80 | *((unsigned int*)&g_800000)) & 0x80000000 | 0x7f000000 | *((unsigned int*)&g_800000);
 }
 if (armg_calculate_condition(209, v76, 25, 0))
 {
 v75 &= 0x80000000;
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_4016d0;
 return v75 & 0x80000000;
 }
 else
 {
 if (!((char)armg_calculate_condition(209, v76, 25, 0)))
 goto LABEL_4016d0;
 return v75;
 }
LABEL_4016d0:
 if (v72 || (v75 << ((char)(32 - -(v76)) & 31) & (32 - (!(v76) & 255) & 255) - 32 >> 31) * 2)
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1);
 return ((v75 >> 31 & 1) * 0x80000000 | (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31) >> 1) + (v75 * 2 >> ((char)-(v76) & 31) & (char)-(v76) - 32 >> 31 & 1) & ~((v75 << ((char)(32 - -(v76)) & 31) & (32 - (-(v76) & 255) & 255) - 32 >> 31) >> 31);
}


// Function: __aeabi_drsub at 0x4017b8
extern int __aeabi_drsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);

// Function: __subdf3 at 0x4017c0
extern int __subdf3(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);


// Function: __adddf3 at 0x4017c4
extern unsigned int g_400000;

int __adddf3(int a0, int a1, int a2, int a3)
{
 unsigned int v1; // r4
 unsigned int v2; // r5
 unsigned int result; // r0
 unsigned int v11; // cc_ndep
 unsigned int v93; // cc_dep2
 unsigned int v94; // cc_dep1
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
 unsigned int v0; // [bp-0xc]
 unsigned int vvar_286;

 v1 = a1 * 2;
 v2 = a3 * 2;
 v3 = 0; v4 = 0; v5 = 0;
 if (!(v1 ^ v2))
 {
 v6 = a0 ^ a2;
 v7 = armg_calculate_flag_c(5, v3, v4, v5);
 v8 = armg_calculate_flag_v(5, v3, v4, v5);
 if (!armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_4017da;
LABEL_4017d9:
 v15 = 5;
 v16 = v1 | a0;
 v17 = armg_calculate_flag_c(5, v6, v7, v8);
 v18 = armg_calculate_flag_v(5, v6, v7, v8);
 }
 else
 {
 v9 = 0; v10 = 0; v11 = 0;
 v6 = a0 ^ a2;
 v7 = armg_calculate_flag_c(5, v9, v10, v11);
 v8 = armg_calculate_flag_v(5, v9, v10, v11);
 if (armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_4017d9;
LABEL_4017da:
 v15 = 5;
 v16 = v1 | a0;
 v17 = armg_calculate_flag_c(5, v6, v7, v8);
 v18 = armg_calculate_flag_v(5, v6, v7, v8);
 }
 return 0;
}


// Function: __aeabi_ui2d at 0x401a70
extern unsigned int __aeabi_ui2d(unsigned int a0);


// Function: __floatsidf at 0x401a94
extern unsigned int __floatsidf(unsigned int a0);


// Function: __extendsfdf2 at 0x401abc
extern unsigned int __extendsfdf2(unsigned int a0);


// Function: __floatundidf at 0x401b04
extern unsigned int __floatundidf(unsigned int a0, unsigned int a1);


// Function: __aeabi_l2d at 0x401b18
extern unsigned int __aeabi_l2d(unsigned int a0, unsigned int a1);


// Function: __aeabi_frsub at 0x401b78
int __aeabi_frsub(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = __addsf3(a0 ^ 0x80000000, 0, 0, 0);
 return __addsf3(a0 ^ 0x80000000, 0, 0, 0);
}



/* CRT stub function __aeabi_fsub removed by preprocessor */



// Function: __addsf3 at 0x401b84
extern unsigned int g_400000;
extern unsigned int g_800000;

int __addsf3(int a0, int a1, int a2, int a3)
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
 v17 = 5;
 v18 = 0;
 v19 = 0;
 v20 = 0;
 if ((char)armg_calculate_condition(5, v17, v18, v19))
 {
 v59 = a1 * 2;
 if ((~(result >> 24)) != 0)
 {
 v60 = 5;
 v61 = (~(v59 >> 24));
 v62 = v59 >> 23 & 1;
 v63 = armg_calculate_flag_v(v17, v18, v19, v20);
 if ((char)armg_calculate_condition(v60, v61, v62, v63))
 {
 v70 = a1;
 return a0 | g_400000;
 }
 }
 v64 = result ^ v59;
 v65 = armg_calculate_flag_c(v60, v61, v62, v63);
 v66 = armg_calculate_flag_v(v60, v61, v62, v63);
 if ((result ^ v59) != 0)
 {
 if (!result)
 return a1;
 return a0;
 }
 else
 {
 v67 = a0 ^ a1;
 v68 = armg_calculate_flag_c(5, v64, v65, v66);
 v69 = armg_calculate_flag_v(5, v64, v65, v66);
 if ((a0 ^ a1) != 0)
 {
 a0 = 0;
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_401cc0;
 return 0;
 }
 else
 {
 if (!((char)armg_calculate_condition(21, v67, v68, v69)))
 goto LABEL_401cc0;
 return a0;
 }
 }
LABEL_401cc0:
 if (!(result & 0xff000000))
 {
 if (armg_calculate_condition(37, a0 * 2, a0 >> 31 & 1, armg_calculate_flag_v(5, result & 0xff000000, 1, armg_calculate_flag_v(5, v67, v68, v69))))
 return a0 * 2 | 0x80000000;
 return a0 * 2;
 }
 if (armg_calculate_condition(49, result, 0x2000000, 0))
 {
 a0 = g_800000;
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_401ce0;
 return g_800000;
 }
 else
 {
 if (!((char)armg_calculate_condition(49, result, 0x2000000, 0)))
 goto LABEL_401ce0;
 return a0;
 }
 }
LABEL_401ce0:
 v41 = a0 & 0x80000000;
LABEL_401ce4:
 return v41 | 0x7f000000 | 0x800000;
}


// Function: __aeabi_ui2f at 0x401d14
extern unsigned int g_800000;

unsigned int __aeabi_ui2f(unsigned int a0)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v2; // r3

 if (a0)
 goto LABEL_401d2c;
 return a0;
LABEL_401d2c:
 v0 = (!a0 ? 32 : Clz(a0));
 v1 = v0 - 8;
 v2 = 0x4a800000 - v1 * *((unsigned int*)&g_800000);
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


// Function: __floatsisf at 0x401d1c
int __floatsisf(unsigned int a0)
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


// Function: __floatundisf at 0x401d3c
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
 unsigned int result; // r0

 v0 = a0 | a1;
 v5 = armg_calculate_flag_c(v1, v2, v3, v4);
 v6 = armg_calculate_flag_v(v1, v2, v3, v4);
 if (a0 || a1)
 goto LABEL_401d44;
 return a0;
LABEL_401d44:
 v7 = armg_calculate_flag_c(5, v0, v5, v6);
 v8 = armg_calculate_flag_v(5, v0, v5, v6);
 if (!a1)
 {
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_401d6e;
LABEL_401d6d:
 if (!armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_401d72;
LABEL_401d71:
 }
 else
 {
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_401d6d;
LABEL_401d6e:
 if (armg_calculate_condition(5, a1, v7, v8))
 goto LABEL_401d71;
LABEL_401d72:
 }
 result = 0;
 return result;
}


// Function: __aeabi_l2f at 0x401d4c
unsigned int __aeabi_l2f(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 if (a0 || a1)
 goto LABEL_401d54;
 return a0;
LABEL_401d54:
 if (!(a1 & 0x80000000) >> 31)
 goto LABEL_0x401d64;
LABEL_0x401d64:
 v0 = 0;
 return v0;
}


// Function: __fixsfsi at 0x401dc8
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


