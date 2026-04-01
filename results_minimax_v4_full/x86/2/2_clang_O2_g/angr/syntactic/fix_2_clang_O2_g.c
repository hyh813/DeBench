// Angr Decompilation of 2_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

/* Function declarations for undeclared functions */
int _ccall(int a, int b, unsigned int c, int d, int e)
{
 return 0;
}

/* Function declarations for test functions */
int test_data_types_l1(void);
int test_array_types(void);
int test_pointer_types(void);
int test_composite_types(void);

/* Function declarations for data type functions */
int process_char(unsigned int a0);
int process_short(unsigned short a0, unsigned short a1);
int process_int(unsigned int a0);
unsigned int process_long(unsigned int a0);
int process_ll(unsigned int a0, unsigned int a1);
unsigned int process_float(unsigned int a0);
int process_double(void);
void process_ld(void);
unsigned int process_bool(char a0);
int const_param(unsigned int *a0);
unsigned int volatile_access(unsigned int *a0);

/* Function declarations for array functions */
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1);
unsigned int array_string(unsigned int a0);
int array_2d_stack(unsigned int *a0);
unsigned int array_3d(unsigned int a0);
unsigned int array_vla(unsigned int a0, unsigned int ptr);
unsigned int array_pointer(unsigned int *a0, unsigned int a1);
unsigned int pointer_array(unsigned int a0, unsigned int a1);
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
unsigned int array_oob(unsigned int ptr, unsigned int a1);

/* Function declarations for pointer functions */
int ptr_single(unsigned int *a0);
int ptr_double(struct_0 **a0);
int ptr_triple(struct_1 **a0);
unsigned int ptr_increment(unsigned int *a0, unsigned int a1);
int ptr_offset(unsigned int a0, unsigned int a1);
unsigned int ptr_diff(unsigned int a0, unsigned int a1);
unsigned int ptr_void(void* a0, unsigned int a1);
unsigned int ptr_const(unsigned int *a0);
int ptr_const_ptr(unsigned int *ptr);
int ptr_func_simple(unsigned int *a0, unsigned int a1);
int ptr_cast(unsigned int *a0);
int opaque_handle_create(unsigned int a0);
unsigned int opaque_handle_op(unsigned int a0);

/* Function declarations for composite type functions */
int struct_simple(unsigned int *a0);
unsigned int struct_array(unsigned int *a0, unsigned int a1);
int struct_nested(unsigned int *a0);
int struct_deep(unsigned int *a0);
int struct_with_ptr(struct_0 *a0);
int struct_bitfields(unsigned short *ptr);
int union_type(void* a0, unsigned int a1);
unsigned int union_array(unsigned int ptr, unsigned int a1);
unsigned int enum_type(unsigned int a0);
unsigned int enum_switch(unsigned int a0);
int struct_func_ptr(struct_0 *a0);
unsigned int linked_list(struct_0 *a0);
unsigned int doubly_linked_list(struct_0 *a0);
unsigned int binary_tree_sum(struct_0 *a0);
unsigned int binary_tree(void* a0);
unsigned int graph_traverse(void* a0);

/* External variables */
extern char g_4035bf[];
extern char g_4035e0[];
extern char g_4035fb[];
extern char g_403616[];

/* CRT stub function _init removed by preprocessor */
/* Forward struct declarations */
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;

struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
};

struct struct_1 {
    unsigned int field_0;
    struct struct_0 *field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
};

struct struct_2 {
    unsigned int field_0;
    struct struct_2 *field_4;
};

typedef struct struct_3 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 struct struct_4 *field_4;
} struct_4;

extern struct_0 *g_405ff0;

/* CRT stub function declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
unsigned int *deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);

int _init()
{
 if (g_405ff0)
 g_405ff0();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return v0;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 return;
}


// Function: sub_401076 at 0x401076
void sub_401076()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010ab at 0x4010ab
void sub_4010ab()
{
}


// Function: sub_4010ac at 0x4010ac
void sub_4010ac()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010b0
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_4010b4 at 0x4010b4
void sub_4010b4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



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

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401147 at 0x401147
void sub_401147()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_4e93[15];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[32])
 return v5;
 if (*((int *)&ptr->padding_0[20]))
 sub_401070(*((int *)&ptr->padding_0[28]));
 v10 = &ptr->padding_0[248];
 v11 = *((int *)&ptr->padding_0[36]);
 i = (&ptr->padding_0[244] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[36]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[36]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[36]);
 } while (*((int *)&ptr->padding_0[36]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[32] = 1;
 return v14;
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4011e9
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4011ed
int __x86.get_pc_thunk_di(int a0)
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


// Function: process_char at 0x401200
int process_char(unsigned int a0)
{
 if (!((char)_ccall(3, 4, (unsigned int)((char)a0 - 65), 26, 0)))
 return (char)a0 + 32;
 return a0;
}


// Function: sub_401216 at 0x401216
void sub_401216(unsigned short a0, unsigned short a1)
{
 process_short(a0, a1);
 return;
}


// Function: process_short at 0x401220
int process_short(unsigned short a0, unsigned short a1)
{
 return a1 + a0;
}


// Function: sub_40122b at 0x40122b
void sub_40122b(unsigned int a0)
{
 process_int(a0);
 return;
}


// Function: process_int at 0x401230
int process_int(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_40123a at 0x40123a
void sub_40123a(unsigned int a0)
{
 process_long(a0);
 return;
}


// Function: process_long at 0x401240
unsigned int process_long(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401247 at 0x401247
void sub_401247(unsigned int a0, unsigned int a1)
{
 process_ll(a0, a1);
 return;
}


// Function: process_ll at 0x401250
int process_ll(unsigned int a0, unsigned int a1)
{
 return a0 * a0;
}


// Function: sub_401266 at 0x401266
void sub_401266(unsigned int a0)
{
 process_float(a0);
 return;
}


// Function: process_float at 0x401270
unsigned int process_float(unsigned int a0)
{
 return a0;
}


// Function: sub_40128d at 0x40128d
void sub_40128d()
{
 process_double();
 return;
}


// Function: process_double at 0x401290
int process_double()
{
 return 0;
}


// Function: sub_4012ad at 0x4012ad
void sub_4012ad()
{
 process_ld();
 return;
}


// Function: process_ld at 0x4012b0
void process_ld()
{
 // Decompilation incomplete - placeholder
 return;
}


// Function: sub_4012bb at 0x4012bb
void sub_4012bb(unsigned int a0)
{
 process_bool(a0);
 return;
}


// Function: process_bool at 0x4012c0
unsigned int process_bool(char a0)
{
 return a0 & 0xffffff00 | !(a0 & 1) & (char)_ccall(15, 15, (unsigned int)a0, 0, 0);
}


// Function: sub_4012d1 at 0x4012d1
void sub_4012d1(unsigned int a0)
{
 const_param(&a0);
 return;
}


// Function: const_param at 0x4012e0
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_4012ea at 0x4012ea
void sub_4012ea(unsigned int a0)
{
 volatile_access();
 return;
}


// Function: volatile_access at 0x4012f0
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4012f9 at 0x4012f9
int sub_4012f9()
{
 test_data_types_l1();
 return;
}


// Function: test_data_types_l1 at 0x401300
extern char g_4035bf;

int test_data_types_l1()
{
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v4;
 puts(&g_4035bf);
 v0 = 97;
 printf("DT-L1-01 (process_char): %c\n", (char)v0);
 v0 = 98;
 printf("DT-L1-01 (process_char): %c\n", (char)v0);
 v0 = 300;
 printf("DT-L1-02 (process_short): %d\n", v0);
 v0 = 11;
 printf("DT-L1-03 (process_int): %d\n", v0);
 v0 = 200;
 printf("DT-L1-04 (process_long): %u\n", v0);
 v1 = 0;
 v0 = 10000;
 printf("DT-L1-05 (process_ll): %u\n", v0);
 v1 = 0x400c0000;
 v0 = 0;
 printf("DT-L1-06 (process_float): %.2f\n", *(float*)&v0);
 v1 = 1073794252;
 v0 = 3435973837;
 printf("DT-L1-07 (process_double): %.2f\n", *(double*)&v0);
 // DT-L1-08: process_ld test - placeholder
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 v0 = 1;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 0;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 0;
 printf("DT-L1-09 (process_bool): %d\n", v0);
 v0 = 15;
 printf("DT-L1-10 (const_param): %d\n", v0);
 v2 = 10;
 v0 = v2 * 2;
 return printf("DT-L1-11 (volatile_access): %d\n", v0);
}


// Function: sub_40142e at 0x40142e
void sub_40142e(unsigned int a0, unsigned int a1)
{
 array_1d_stack(a0, a1);
 return;
}


// Function: array_1d_stack at 0x401430
unsigned int array_1d_stack(unsigned int ptr, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v2; // eax
 unsigned int idx; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 7;
 if (a1 - 1 < 7)
 {
 index = 0;
 v2 = 0;
 }
 else
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 = v2 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((a1 & 0xfffffff8) != index);
 }
 if (!result)
 return v2;
 idx = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v2;
}


// Function: sub_40149d at 0x40149d
void sub_40149d(unsigned int a0)
{
 array_string();
 return;
}


// Function: array_string at 0x4014a0
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


// Function: sub_4014bb at 0x4014bb
void sub_4014bb(unsigned int a0)
{
 array_2d_stack();
 return;
}


// Function: array_2d_stack at 0x4014c0
int array_2d_stack(unsigned int *a0)
{
 return a0[11] + *(a0) + a0[22] + a0[33] + a0[44] + a0[55] + a0[66] + a0[77] + a0[88] + a0[99];
}


// Function: sub_4014f7 at 0x4014f7
void sub_4014f7(unsigned int a0)
{
 array_3d();
 return;
}


// Function: array_3d at 0x401500
unsigned int array_3d(unsigned int a0)
{
 unsigned int i; // edx
 unsigned int v1; // eax

 i = 0;
 v1 = 0;
 do
 {
 v1 = v1 + 1;
 i += 100;
 } while (i != 500);
 return v1;
}


// Function: sub_40157f at 0x40157f
void sub_40157f(unsigned int a0)
{
 array_vla();
 return;
}


// Function: array_vla at 0x401580
unsigned int array_vla(unsigned int a0, unsigned int ptr)
{
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v2; // eax
 unsigned int idx; // esi

 if (a0 <= 0)
 return 0;
 result = a0 & 7;
 if (a0 - 1 < 7)
 {
 index = 0;
 v2 = 0;
 }
 else
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 = v2 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((a0 & 0xfffffff8) != index);
 }
 if (!result)
 return v2;
 idx = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v2;
}


// Function: sub_4015ed at 0x4015ed
int sub_4015ed()
{
 array_pointer();
 return;
}


// Function: array_pointer at 0x4015f0
unsigned int array_pointer(unsigned int *a0, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int i; // esi
 unsigned int v2; // eax
 unsigned int *ptr; // ebx
 unsigned int j; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 3;
 if (a1 - 1 < 3)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 i = 0;
 v2 = 0;
 ptr = a0;
 do
 {
 v2 = v2 + ptr[0] + ptr[10] + ptr[20] + ptr[30];
 i += 4;
 ptr = &ptr[1 + 9];
 } while ((a1 & 0xfffffffc) != i);
 }
 if (!result)
 return v2;
 j = 0;
 do
 {
 v2 += *((int *)((char *)&a0[10 * i] + j));
 j += 40;
 } while (result * 40 != j);
 return v2;
}


// Function: sub_40165e at 0x40165e
int sub_40165e()
{
 pointer_array();
 return;
}


// Function: pointer_array at 0x401660
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
 unsigned int result; // eax
 unsigned int idx; // esi
 unsigned int cur; // eax

 result = a1;
 if (result <= 0)
 return 0;
 if (result >= 10)
 result = 10;
 if (result == 1)
 {
 idx = 0;
 cur = 0;
 }
 else
 {
 idx = 0;
 cur = 0;
 do
 {
 if (*((int *)(a0 + idx * 4)))
 cur += *((int *)*((int *)(a0 + idx * 4)));
 if (*((int *)(a0 + idx * 4 + 4)))
 cur += *((int *)*((int *)(a0 + idx * 4 + 4)));
 idx += 2;
 } while ((result & 14) != idx);
 }
 return cur;
}


// Function: sub_4016a4 at 0x4016a4
void sub_4016a4()
{
}


// Function: sub_4016cc at 0x4016cc
void sub_4016cc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 array_complex_index();
 return;
}


// Function: array_complex_index at 0x4016d0
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a3 >= 0 && a4 < a2 && a3 < a1 && a4 >= 0)
 v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
 return v0;
}


// Function: sub_401702 at 0x401702
void sub_401702(unsigned int a0, unsigned int a1)
{
 array_oob();
 return;
}


// Function: array_oob at 0x401710
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // edi
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v3; // eax
 unsigned int idx; // esi

 if (a1 < 0)
 return 0;
 v0 = a1 + 1;
 result = v0 & 7;
 if (a1 < 7)
 {
 index = 0;
 v3 = 0;
 }
 else
 {
 index = 0;
 v3 = 0;
 do
 {
 v3 = v3 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((v0 & 0xfffffff8) != index);
 }
 if (!result)
 return v3;
 idx = 0;
 do
 {
 v3 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v3;
}


// Function: sub_40177d at 0x40177d
int sub_40177d()
{
 test_array_types();
 return;
}


// Function: test_array_types at 0x401780
extern char g_4035e0;

int test_array_types()
{
 unsigned int v13; // eax
 unsigned int i; // eax
 unsigned int v0; // [bp-0x398]
 unsigned int v1; // [bp-0x38c]
 unsigned int v15; // [bp-0x388]
 unsigned int v16; // [bp-0x384]
 unsigned int v17; // [bp-0x380]
 unsigned int v18; // [bp-0x37c]
 unsigned int v19; // [bp-0x378]
 unsigned int v20; // [bp-0x374]
 unsigned int v21; // [bp-0x370]
 unsigned int v22; // [bp-0x36c]
 unsigned int v23; // [bp-0x368]
 unsigned int v24; // [bp-0x364]
 unsigned int v25; // [bp-0x360]
 unsigned int v26; // [bp-0x35c]
 unsigned int v27; // [bp-0x358]
 unsigned int v28; // [bp-0x354]
 unsigned int v29; // [bp-0x350]
 unsigned int v30; // [bp-0x34c]
 unsigned int v31; // [bp-0x348]
 unsigned int v32; // [bp-0x344]
 unsigned int v33; // [bp-0x340]
 unsigned int v34; // [bp-0x33c]
 unsigned int v35; // [bp-0x338]
 unsigned int v36; // [bp-0x334]
 unsigned int v37; // [bp-0x330]
 unsigned long v38; // [bp-0x32c]
 unsigned int v2; // [bp-0x198]
 unsigned int v39; // [bp-0x194]
 unsigned int v40; // [bp-0x190]
 unsigned int v41; // [bp-0x18c]
 unsigned int v42; // [bp-0x188]
 unsigned int v43; // [bp-0x184]
 unsigned int v44; // [bp-0x180]
 unsigned int v45; // [bp-0x17c]
 unsigned int v46; // [bp-0x178]
 unsigned long v47; // [bp-0x174]
 char v3; // [bp-0x16c]
 char v4; // [bp-0x140]
 char v5; // [bp-0x114]
 char v6; // [bp-0xe8]
 char v7; // [bp-0xbc]
 char v8; // [bp-0x90]
 char v9; // [bp-0x64]
 char v10; // [bp-0x38]
 char v11; // [bp-0xc]

 puts(&g_4035e0);
 v0 = 15;
 printf("ARR-L1-01 (array_1d_stack): %d\n");
 v0 = 5;
 printf("ARR-L1-02 (array_string): %d\n");
 v13 = 0;
 do
 {
 *((unsigned int *)((char *)&v2 + v13)) = 0;
 *((unsigned int *)((char *)&v39 + v13)) = v13 == 40;
 *((unsigned int *)((char *)&v40 + v13)) = (v13 == 80) * 2;
 *((unsigned int *)((char *)&v41 + v13)) = (v13 == 120) * 3;
 *((unsigned int *)((char *)&v42 + v13)) = (v13 == 160) * 4;
 *((unsigned int *)((char *)&v43 + v13)) = (v13 == 200) * 5;
 } while ((*((unsigned int *)((char *)&v44 + v13)) = (v13 == 240 ? 6 : 0), *((unsigned int *)((char *)&v45 + v13)) = (v13 == 280 ? 7 : 0), *((unsigned int *)((char *)&v46 + v13)) = (unsigned int)(char)(v13 == 320) * 8, *((unsigned int *)((char *)&v47 + v13)) = (unsigned int)(char)(v13 == 360) * 9, v13 += 40, v13 != 400));
 v0 = *((int *)&v3) + v2 + *((int *)&v4) + *((int *)&v5) + *((int *)&v6) + *((int *)&v7) + *((int *)&v8) + *((int *)&v9) + *((int *)&v10) + *((int *)&v11);
 printf("ARR-L1-03 (array_2d_stack): %d\n");
 i = 0;
 do
 {
 *((unsigned int *)((char *)&v1 + i)) = 1;
 *((unsigned int *)((char *)&v15 + i)) = 1;
 *((unsigned int *)((char *)&v16 + i)) = 1;
 *((unsigned int *)((char *)&v17 + i)) = 1;
 *((unsigned int *)((char *)&v18 + i)) = 1;
 *((unsigned int *)((char *)&v19 + i)) = 1;
 *((unsigned int *)((char *)&v20 + i)) = 1;
 *((unsigned int *)((char *)&v21 + i)) = 1;
 *((unsigned int *)((char *)&v22 + i)) = 1;
 *((unsigned int *)((char *)&v23 + i)) = 1;
 *((unsigned int *)((char *)&v24 + i)) = 1;
 *((unsigned int *)((char *)&v25 + i)) = 1;
 *((unsigned int *)((char *)&v26 + i)) = 1;
 *((unsigned int *)((char *)&v27 + i)) = 1;
 *((unsigned int *)((char *)&v28 + i)) = 1;
 *((unsigned int *)((char *)&v29 + i)) = 1;
 *((unsigned int *)((char *)&v30 + i)) = 1;
 *((unsigned int *)((char *)&v31 + i)) = 1;
 *((unsigned int *)((char *)&v32 + i)) = 1;
 *((unsigned int *)((char *)&v33 + i)) = 1;
 *((unsigned int *)((char *)&v34 + i)) = 1;
 *((unsigned int *)((char *)&v35 + i)) = 1;
 *((unsigned int *)((char *)&v36 + i)) = 1;
 *((unsigned int *)((char *)&v37 + i)) = 1;
 *((unsigned int *)((char *)&v38 + i)) = 1;
 i += 100;
 } while (i != 500);
 v0 = array_3d(&v1);
 printf("ARR-L1-04 (array_3d): %d\n");
 v0 = 60;
 printf("ARR-L2-01 (array_vla): %d\n");
 v0 = 100;
 printf("ARR-L2-02 (array_pointer): %d\n");
 v0 = 60;
 printf("ARR-L2-03 (pointer_array): %d\n");
 v0 = 17;
 return printf("ARR-L2-04 (array_complex_index): %d\n");
}


// Function: sub_401a55 at 0x401a55
void sub_401a55(unsigned int a0)
{
 ptr_single();
 return;
}


// Function: ptr_single at 0x401a60
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401a6a at 0x401a6a
void sub_401a6a(unsigned int a0)
{
 ptr_double();
 return;
}


// Function: ptr_double at 0x401a70
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: sub_401a7c at 0x401a7c
void sub_401a7c(unsigned int a0)
{
 ptr_triple();
 return;
}


// Function: ptr_triple at 0x401a80
int ptr_triple(struct_1 **a0)
{
 // struct_1 has field_0 (unsigned int) and field_4 (struct_0*)
 // For a triple pointer, we need to dereference and access field_0 of the pointed-to struct_1
 // Since it's struct_1**, we dereference to get struct_1*, then access field_0
 return (*a0)->field_0 + 1;
}


// Function: sub_401a8e at 0x401a8e
void sub_401a8e(unsigned int a0, unsigned int a1)
{
 ptr_increment();
 return;
}


// Function: ptr_increment at 0x401a90
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur; // ecx
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned int i; // esi
 unsigned int index; // esi

 if (a1 <= 0)
 return 0;
 cur = a0;
 result = a1 & 7;
 if (a1 - 1 < 7)
 {
 v2 = 0;
 }
 else
 {
 i = a1 & 0xfffffff8;
 v2 = 0;
 do
 {
 v2 = v2 + cur[0] + cur[1] + cur[2] + cur[3] + cur[4] + cur[5] + cur[6] + cur[7];
 cur += 1;
 i -= 8;
 } while (i != 8);
 }
 if (!result)
 return v2;
 index = 0;
 do
 {
 v2 += cur[index];
 index += 1;
 } while (result != index);
 return v2;
}


// Function: sub_401afc at 0x401afc
void sub_401afc(unsigned int a0, unsigned int a1)
{
 ptr_offset();
 return;
}


// Function: ptr_offset at 0x401b00
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401b0c at 0x401b0c
void sub_401b0c(unsigned int a0, unsigned int a1)
{
 ptr_diff();
 return;
}


// Function: ptr_diff at 0x401b10
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return a0 - a1 >> 2;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c(unsigned int a0, unsigned int a1)
{
 ptr_void();
 return;
}


// Function: ptr_void at 0x401b20
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


// Function: sub_401b3d at 0x401b3d
void sub_401b3d(unsigned int a0)
{
 ptr_const();
 return;
}


// Function: ptr_const at 0x401b40
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401b49 at 0x401b49
void sub_401b49(unsigned int a0)
{
 ptr_const_ptr();
 return;
}


// Function: ptr_const_ptr at 0x401b50
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401b5c at 0x401b5c
int sub_401b5c()
{
 ptr_func_simple();
 return;
}


// Function: ptr_func_simple at 0x401b60
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
 return a0(a1);
}


// Function: ptr_func_complex at 0x401b80
extern unsigned int g_405f10;
extern unsigned int g_405f14;

int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = g_405f14;
 v0 = g_405f10;
 return a0(a1, &v0);
}


// Function: sub_401bb9 at 0x401bb9
void sub_401bb9(unsigned int a0)
{
 ptr_cast();
 return;
}


// Function: ptr_cast at 0x401bc0
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401bc7 at 0x401bc7
void sub_401bc7(unsigned int a0)
{
 opaque_handle_create();
 return;
}


// Function: opaque_handle_create at 0x401bd0
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401bd5 at 0x401bd5
void sub_401bd5(unsigned int a0)
{
 opaque_handle_op();
 return;
}


// Function: opaque_handle_op at 0x401be0
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401be7 at 0x401be7
int sub_401be7()
{
 test_pointer_types();
 return;
}


// Function: test_pointer_types at 0x401bf0
extern char g_4035fb;

int test_pointer_types()
{
 unsigned int v0; // [bp-0x18]

 puts(&g_4035fb);
 v0 = 15;
 printf("PTR-L2-01 (ptr_single): %d\n");
 v0 = 15;
 printf("PTR-L2-02 (ptr_double): %d\n");
 v0 = 6;
 printf("PTR-L2-03 (ptr_triple): %d\n");
 v0 = 15;
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


// Function: sub_401d43 at 0x401d43
void sub_401d43(unsigned int a0)
{
 struct_simple();
 return;
}


// Function: struct_simple at 0x401d50
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_401d5d at 0x401d5d
int sub_401d5d()
{
 struct_array();
 return;
}


// Function: struct_array at 0x401d60
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // esi
 unsigned int v1; // eax
 unsigned int cur[6]; // edi

 if (a1 <= 0)
 return 0;
 if (a1 == 1)
 {
 i = 0;
 v1 = 0;
 }
 else
 {
 cur = a0 + 5;
 i = 0;
 v1 = 0;
 do
 {
 v1 = v1 + cur[5] + cur[4] + cur[3] + cur[2] + cur[1] + cur[0];
 i += 2;
 cur += 1;
 } while ((a1 & 4294967294) != i);
 }
 return v1 + a0[3 * i] + a0[1 + 3 * i] + a0[2 + 3 * i];
}


// Function: sub_401dc2 at 0x401dc2
void sub_401dc2(unsigned int a0)
{
 struct_nested();
 return;
}


// Function: struct_nested at 0x401dd0
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_401dda at 0x401dda
void sub_401dda(unsigned int a0)
{
 struct_deep();
 return;
}


// Function: struct_deep at 0x401de0
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_401deb at 0x401deb
void sub_401deb(unsigned int a0)
{
 struct_with_ptr();
 return;
}


// Function: struct_with_ptr at 0x401df0
int struct_with_ptr(struct_0 *a0)
{
 if (!a0->field_4)
 return 0 + a0->field_0;
 return a0->field_4->field_0 + a0->field_0;
}


// Function: sub_401e07 at 0x401e07
void sub_401e07(unsigned int a0)
{
 struct_bitfields();
 return;
}


// Function: struct_bitfields at 0x401e10
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // eax

 v0 = *(ptr);
 return (v0 >> 6) + (v0 & 1) + (v0 >> 1 & 3) + (v0 >> 3 & 7);
}


// Function: sub_401e37 at 0x401e37
void sub_401e37(unsigned int a0, unsigned int a1)
{
 union_type();
 return;
}


// Function: union_type at 0x401e40
int union_type(void* a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return 0;
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


// Function: sub_401e87 at 0x401e87
void sub_401e87(unsigned int a0, unsigned int a1)
{
 union_array();
 return;
}


// Function: union_array at 0x401e90
unsigned int union_array(unsigned int ptr, unsigned int a1)
{
 unsigned int result; // ecx
 unsigned int index; // esi
 unsigned int v2; // eax
 unsigned int idx; // esi

 if (a1 <= 0)
 return 0;
 result = a1 & 7;
 if (a1 - 1 < 7)
 {
 index = 0;
 v2 = 0;
 }
 else
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 = v2 + *((int *)(ptr + index * 4)) + *((int *)(ptr + index * 4 + 4)) + *((int *)(ptr + index * 4 + 8)) + *((int *)(ptr + index * 4 + 12)) + *((int *)(ptr + index * 4 + 16)) + *((int *)(ptr + index * 4 + 20)) + *((int *)(ptr + index * 4 + 24)) + *((int *)(ptr + index * 4 + 28));
 index += 8;
 } while ((a1 & 0xfffffff8) != index);
 }
 if (!result)
 return v2;
 idx = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4 + idx * 4));
 idx += 1;
 } while (result != idx);
 return v2;
}


// Function: sub_401efd at 0x401efd
void sub_401efd(unsigned int a0)
{
 enum_type();
 return;
}


// Function: enum_type at 0x401f00
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401f0a at 0x401f0a
void sub_401f0a(unsigned int a0)
{
 enum_switch();
 return;
}


// Function: enum_switch at 0x401f10
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int enum_switch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967197;
 if (a0 <= 3)
 v0 = *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10688 + 4 * a0]);
 return v0;
}


// Function: sub_401f32 at 0x401f32
int sub_401f32()
{
 struct_func_ptr();
 return;
}


// Function: struct_func_ptr at 0x401f40
int struct_func_ptr(struct_0 *a0)
{
 return a0->field_4(a0->field_0);
}


// Function: sub_401f61 at 0x401f61
void sub_401f61(unsigned int a0)
{
 linked_list();
 return;
}


// Function: linked_list at 0x401f70
unsigned int linked_list(struct_0 *a0)
{
 struct_0 *ptr; // ecx
 unsigned int v1; // eax

 ptr = a0;
 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 return v1;
}


// Function: sub_401f8a at 0x401f8a
void sub_401f8a(unsigned int a0)
{
 doubly_linked_list();
 return;
}


// Function: doubly_linked_list at 0x401f90
unsigned int doubly_linked_list(struct_0 *a0)
{
 struct_0 *ptr; // ecx
 unsigned int v1; // eax

 ptr = a0;
 v1 = 0;
 if (ptr)
 {
 do
 {
 v1 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 }
 return v1;
}


// Function: sub_401faa at 0x401faa
int sub_401faa()
{
 binary_tree_sum();
 return;
}


// Function: binary_tree_sum at 0x401fb0
unsigned int binary_tree_sum(struct_0 *a0)
{
 struct_0 *result; // edi
 unsigned int v1; // esi
 struct_0 *ptr; // edi
 unsigned int v3; // eax
 struct_0 *v4; // edi

 // Use field_4 for the tree traversal (binary tree has left/right children)
 result = a0;
 v1 = 0;
 if (!result)
 return 0;
 do
 {
 ptr = result;
 v3 = binary_tree_sum(ptr->field_4);
 // Assume field_4 is used for traversal (the second member after field_0)
 v4 = ptr->field_4;
 v1 = v1 + ptr->field_0 + v3;
 result = v4;
 } while (ptr->field_4);
 return v1;
}


// Function: sub_401fef at 0x401fef
int sub_401fef()
{
 binary_tree();
 return;
}


// Function: binary_tree at 0x401ff0
unsigned int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_402011 at 0x402011
int sub_402011()
{
 graph_traverse();
 return;
}


// Function: graph_traverse at 0x402020
// Note: struct_1, struct_2, struct_3, struct_4 are defined earlier in the file

unsigned int graph_traverse(struct_1 *ptr)
{
 unsigned int result; // edx
 unsigned int idx; // esi
 unsigned int cur; // eax
 struct_2 *p; // edi
 struct_4 *addr; // edi
 struct_3 *ptr4; // ecx

 result = ptr->field_28;
 if (result <= 0)
 return 0;
 if (result == 1)
 {
 idx = 0;
 cur = 0;
 }
 else
 {
 idx = 0;
 cur = 0;
 do
 {
 p = (&ptr->field_0)[idx];
 if ((&ptr->field_0)[idx])
 {
 do
 {
 cur += p->padding_0;
 p = p->field_4;
 } while (p->field_4);
 }
 addr = *((int *)((char *)ptr + (idx * 4 | 4)));
 if (*((int *)((char *)ptr + (idx * 4 | 4))))
 {
 do
 {
 cur += addr->padding_0;
 addr = addr->field_4;
 } while (addr->field_4);
 }
 idx += 2;
 } while (idx != (result & 4294967294));
 }
 if (!((char)result & 1))
 return cur;
 ptr4 = (&ptr->field_0)[idx];
 if ((&ptr->field_0)[idx])
 {
 do
 {
 ptr4 = ptr4->field_4;
 } while (ptr4->field_4);
 }
 return cur;
}


// Function: sub_40206c at 0x40206c
void sub_40206c()
{
}


// Function: sub_4020ab at 0x4020ab
int sub_4020ab()
{
 test_composite_types();
 return;
}


// Function: test_composite_types at 0x4020b0
/* Note: struct_0, struct_1 are defined at the beginning of the file */
/* struct_2 is defined at the beginning of the file */

typedef struct struct_3 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 struct struct_4 *field_4;
} struct_4;

extern char g_403616;

int test_composite_types()
{
 struct_0 *ptr; // eax
 unsigned int v19; // ecx
 struct_1 *p; // eax
 unsigned int v22; // ecx
 unsigned int v24; // eax
 struct_2 *addr; // ecx
 unsigned int v0; // [bp-0x48]
 char v1; // [bp-0x44], Other Possible Types: unsigned int
 char *v2; // [bp-0x40]
 char v3; // [bp-0x3c], Other Possible Types: unsigned int
 char *v4; // [bp-0x38]
 char v5; // [bp-0x34], Other Possible Types: unsigned int
 unsigned int result; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int flag4; // [bp-0x28]
 unsigned int flag3; // [bp-0x24]
 unsigned int v11; // [bp-0x1c]
 char *v12; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 unsigned int v14; // [bp-0x10]
 unsigned int flag2; // [bp-0xc]
 char *v16; // [bp-0x8]

 puts(&g_403616);
 v0 = 6;
 printf("CMP-L2-01 (struct_simple): %d\n");
 v0 = 9;
 printf("CMP-L2-02 (struct_array): %d\n");
 v0 = 105;
 printf("CMP-L2-03 (struct_nested): %d\n");
 v0 = 258;
 printf("CMP-L2-04 (struct_deep): %d\n");
 v0 = 30;
 printf("CMP-L2-05 (struct_with_ptr): %d\n");
 v0 = 106;
 printf("CMP-L2-06 (struct_bitfields): %d\n");
 v0 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n");
 v0 = 60;
 printf("CMP-L2-08 (union_array): %d\n");
 v0 = 10;
 printf("CMP-L2-09 (enum_type): %d\n");
 v0 = 50;
 printf("CMP-L2-10 (enum_switch): %d\n");
 v0 = 21;
 printf("CMP-L2-11 (struct_func_ptr): %d\n");
 ptr = &v1;
 v1 = 10;
 v2 = &v3;
 v3 = 20;
 v4 = &v5;
 v5 = 30;
 result = 0;
 v19 = 0;
 do
 {
 v19 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 v0 = v19;
 printf("CMP-L2-12 (linked_list): %d\n");
 p = &v11;
 v11 = 10;
 flag1 = 0;
 v14 = 20;
 flag2 = 0;
 v16 = &v11;
 v12 = &v14;
 v22 = 0;
 do
 {
 v22 += p->field_0;
 p = p->field_4;
 } while (p->field_4);
 v0 = v22;
 printf("CMP-L2-13 (doubly_linked_list): %d\n");
 flag3 = 0;
 flag4 = 0;
 v7 = 100;
 v0 = binary_tree_sum(&v7);
 printf("CMP-L2-14 (binary_tree): %d\n");
 v24 = 1;
 addr = 0;
 v0 = v24;
 return printf("CMP-L2-15 (graph_traverse): %d\n");
}


// Function: sub_4022e2 at 0x4022e2
int sub_4022e2()
{
 main();
 return;
}


// Function: main at 0x4022f0
unsigned int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_40231b at 0x40231b
void sub_40231b()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 ptr = &v2->padding_0[251];
 v4 = *((int *)&ptr->padding_0[0x100]);
 if (*((int *)&ptr->padding_0[0x100]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[0x100];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_402362 at 0x402362
void sub_402362()
{
}



/* CRT stub function _fini removed by preprocessor */


