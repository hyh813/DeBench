// Angr Decompilation of 2_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
    struct struct_0 *field_8;
    char padding_0[252];
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

struct_0 *g_405ff0 = NULL;

/* Forward declarations for CRT and utility functions */
void frame_dummy(void);
void __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int);

/* Forward declarations for process functions */
int process_char(unsigned int);
int process_short(unsigned short, unsigned short);
int process_int(unsigned int);
unsigned int process_long(unsigned int);
int process_ll(unsigned int, unsigned int);
int process_float(unsigned int);
int process_double();
void process_ld(void);
unsigned int process_bool(char);
int const_param(unsigned int*);
unsigned int volatile_access(unsigned int*);
int test_data_types_l1(void);

/* Forward declarations for array functions */
unsigned int array_1d_stack(unsigned int, unsigned int);
unsigned int array_string(unsigned int);
int array_2d_stack(unsigned int*);
unsigned int array_3d(unsigned int);
unsigned int array_vla(unsigned int, unsigned int);
unsigned int array_pointer(unsigned int*, unsigned int);
unsigned int pointer_array(unsigned int, unsigned int);
unsigned int array_complex_index(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int array_oob(unsigned int, unsigned int);
int test_array_types(void);

/* Forward declarations for pointer functions */
int ptr_single(unsigned int*);
int ptr_double(void*);
int ptr_triple(struct_1**);
unsigned int ptr_increment(unsigned int*, unsigned int);
int ptr_offset(unsigned int, unsigned int);
unsigned int ptr_diff(unsigned int, unsigned int);
unsigned int ptr_void(void*, unsigned int);
unsigned int ptr_const();
int ptr_const_ptr();
int ptr_func_simple();
int ptr_func_complex();
int ptr_cast();
int opaque_handle_create();
unsigned int opaque_handle_op();
int test_pointer_types(void);

/* Forward declarations for struct/union functions */
int struct_simple();
unsigned int struct_array();
int struct_nested();
int struct_deep();
int struct_with_ptr();
int struct_bitfields();
int union_type();
unsigned int union_array();
unsigned int enum_type();
unsigned int enum_switch();
int struct_func_ptr();
unsigned int linked_list();
unsigned int doubly_linked_list();
unsigned int binary_tree_sum();
unsigned int binary_tree();
unsigned int graph_traverse();
int test_composite_types(void);

/* Common struct definitions for linked data structures */
typedef struct list_node {
    unsigned int field_0;
    struct list_node *field_4;
} list_node;

typedef struct binary_tree_node {
    unsigned int field_0;
    struct binary_tree_node *field_4;
    struct binary_tree_node *field_8;
} binary_tree_node;

/* CRT stub function _init removed by preprocessor */


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
}


// Function: sub_4010ac at 0x4010ac
void sub_4010ac()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010b0
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



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void)
{
 return;
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
unsigned int register_tm_clones(void)
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

void __do_global_dtors_aux()
{
 deregister_tm_clones();
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void)
{
 return;
}

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


// Function: process_char at 0x401200
int process_char(unsigned int a0)
{
 if (!((char)a0 >= 'A' && (char)a0 <= 'Z'))
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

int process_float(unsigned int a0)
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
 return a0 & 0xffffff00 | !(a0 & 1) & a0;
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
 volatile_access(&a0);
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
 return 0;
}


char g_4035bf[] = "Testing data types:";

// Function: test_data_types_l1 at 0x401300
int test_data_types_l1()
{
 unsigned int v2;

 puts(&g_4035bf);
 printf("DT-L1-01 (process_char): %c\n", (char)97);
 printf("DT-L1-01 (process_char): %c\n", (char)98);
 printf("DT-L1-02 (process_short): %d\n", 300);
 printf("DT-L1-03 (process_int): %d\n", 11);
 printf("DT-L1-04 (process_long): %ld\n", 200L);
 printf("DT-L1-05 (process_ll): %lld\n", 10000LL);
 printf("DT-L1-06 (process_float): %.2f\n", 2.5f);
 printf("DT-L1-07 (process_double): %.2f\n", 3.14);
 printf("DT-L1-08 (process_ld): %.2Lf\n", 0.0L);
 printf("DT-L1-09 (process_bool): %d\n", 1);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-09 (process_bool): %d\n", 0);
 printf("DT-L1-10 (const_param): %d\n", 15);
 v2 = 10;
 printf("DT-L1-11 (volatile_access): %d\n", v2 * 2);
 return 0;
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
 array_string(a0);
 return;
}


// Function: array_string at 0x4014a0
unsigned int array_string(unsigned int a0)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax

 v0 = 4294967295;
 v1 = 0;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 v1 = v0;
 } while (*((char *)(a0 + v1 + 1)));
 return v1 + 1;
}


// Function: sub_4014bb at 0x4014bb
void sub_4014bb(unsigned int a0)
{
 array_2d_stack((unsigned int *)a0);
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
 array_3d(a0);
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
 v1 = 0;
 i += 100;
 } while (i != 500);
 return v1;
}


// Function: sub_40157f at 0x40157f
void sub_40157f(unsigned int a0)
{
 array_vla(a0, 0);
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
void sub_4015ed()
{
 unsigned int *a0;
 unsigned int a1;
 array_pointer(a0, a1);
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
 ptr = &ptr[10];
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
void sub_40165e()
{
 unsigned int a0, a1;
 pointer_array(a0, a1);
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
 if (((char)result & 1) && *((int *)(a0 + idx * 4)))
 cur += *((int *)*((int *)(a0 + idx * 4)));
 return cur;
}


// Function: sub_4016a6 at 0x4016a6
void sub_4016a6()
{
}


// Function: sub_4016cc at 0x4016cc
void sub_4016cc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 array_complex_index(a0, a1, a2, a3, 0);
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
 array_oob(a0, a1);
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
 return 0;
}


// Function: test_array_types at 0x401780
char g_4035e0[] = "Testing array types:";

int test_array_types()
{
 unsigned int i; // eax
 unsigned int v0; // [bp-0x398]
 unsigned int result; // [bp-0x388]
 unsigned int flag1; // [bp-0x384]
 unsigned int flag2; // [bp-0x380]
 unsigned int flag3; // [bp-0x37c]
 unsigned int flag4; // [bp-0x378]
 unsigned int flag5; // [bp-0x374]
 unsigned int flag6; // [bp-0x370]
 unsigned int flag7; // [bp-0x36c]
 unsigned int flag8; // [bp-0x368]
 unsigned int flag9; // [bp-0x364]
 unsigned int flag10; // [bp-0x360]
 unsigned int flag11; // [bp-0x35c]
 unsigned int flag12; // [bp-0x358]
 unsigned int flag13; // [bp-0x354]
 unsigned int flag14; // [bp-0x350]
 unsigned int flag15; // [bp-0x34c]
 unsigned int flag16; // [bp-0x348]
 unsigned int flag17; // [bp-0x344]
 unsigned int flag18; // [bp-0x340]
 unsigned int flag19; // [bp-0x33c]
 unsigned int flag20; // [bp-0x338]
 unsigned int flag21; // [bp-0x334]
 unsigned int v23; // [bp-0x330]
 unsigned int flag22; // [bp-0x32c]
 unsigned int flag23; // [bp-0x328]
 unsigned int flag24; // [bp-0x324]
 unsigned int flag25; // [bp-0x320]
 unsigned int flag26; // [bp-0x31c]
 unsigned int flag27; // [bp-0x318]
 unsigned int flag28; // [bp-0x314]
 unsigned int flag29; // [bp-0x310]
 unsigned int flag30; // [bp-0x30c]
 unsigned int flag31; // [bp-0x308]
 unsigned int v34; // [bp-0x304]
 char v35; // [bp-0x300]
 unsigned int flag32; // [bp-0x2dc]
 unsigned int v37; // [bp-0x2d8]
 unsigned int flag33; // [bp-0x2d4]
 unsigned int flag34; // [bp-0x2d0]
 unsigned int flag35; // [bp-0x2cc]
 unsigned int flag36; // [bp-0x2c8]
 unsigned int flag37; // [bp-0x2c4]
 unsigned int flag38; // [bp-0x2c0]
 unsigned int flag39; // [bp-0x2bc]
 unsigned int flag40; // [bp-0x2b8]
 unsigned int flag41; // [bp-0x2b4]
 unsigned int flag42; // [bp-0x2b0]
 unsigned int v48; // [bp-0x2ac]
 unsigned int flag43; // [bp-0x2a8]
 unsigned int flag44; // [bp-0x2a4]
 unsigned int flag45; // [bp-0x2a0]
 unsigned int flag46; // [bp-0x29c]
 unsigned int flag47; // [bp-0x298]
 unsigned int flag48; // [bp-0x294]
 unsigned int flag49; // [bp-0x290]
 unsigned int flag50; // [bp-0x28c]
 unsigned int flag51; // [bp-0x288]
 unsigned int flag52; // [bp-0x284]
 unsigned int v59; // [bp-0x280]
 unsigned int flag53; // [bp-0x27c]
 unsigned int flag54; // [bp-0x278]
 unsigned int flag55; // [bp-0x274]
 unsigned int flag56; // [bp-0x270]
 unsigned int flag57; // [bp-0x26c]
 unsigned int flag58; // [bp-0x268]
 unsigned int flag59; // [bp-0x264]
 unsigned int flag60; // [bp-0x260]
 unsigned int flag61; // [bp-0x25c]
 unsigned int flag62; // [bp-0x258]
 unsigned int v70; // [bp-0x254]
 unsigned int flag63; // [bp-0x250]
 unsigned int flag64; // [bp-0x24c]
 unsigned int flag65; // [bp-0x248]
 unsigned int flag66; // [bp-0x244]
 unsigned int flag67; // [bp-0x240]
 unsigned int flag68; // [bp-0x23c]
 unsigned int flag69; // [bp-0x238]
 unsigned int flag70; // [bp-0x234]
 unsigned int flag71; // [bp-0x230]
 unsigned int flag72; // [bp-0x22c]
 unsigned int v81; // [bp-0x228]
 unsigned int flag73; // [bp-0x224]
 unsigned int flag74; // [bp-0x220]
 unsigned int flag75; // [bp-0x21c]
 unsigned int flag76; // [bp-0x218]
 unsigned int flag77; // [bp-0x214]
 unsigned int flag78; // [bp-0x210]
 unsigned int flag79; // [bp-0x20c]
 unsigned int flag80; // [bp-0x208]
 unsigned int flag81; // [bp-0x204]
 unsigned int flag82; // [bp-0x200]
 unsigned int v92; // [bp-0x1fc]
 unsigned int v93; // [bp-0x1f8]
 unsigned int v97; // [bp-0x1f4]
 unsigned int v98; // [bp-0x1f0]
 unsigned int v99; // [bp-0x1ec]
 unsigned int v100; // [bp-0x1e8]
 unsigned int v101; // [bp-0x1e4]
 unsigned int v102; // [bp-0x1e0]
 unsigned int v103; // [bp-0x1dc]
 unsigned int v104; // [bp-0x1d8]
 unsigned int v105; // [bp-0x1d4]
 unsigned int v106; // [bp-0x1d0]
 unsigned int v107; // [bp-0x1cc]
 unsigned int v108; // [bp-0x1c8]
 unsigned int v109; // [bp-0x1c4]
 unsigned int v110; // [bp-0x1c0]
 unsigned int v111; // [bp-0x1bc]
 unsigned int v112; // [bp-0x1b8]
 unsigned int v113; // [bp-0x1b4]
 unsigned int v114; // [bp-0x1b0]
 unsigned int v115; // [bp-0x1ac]
 unsigned int v116; // [bp-0x1a8]
 unsigned int v117; // [bp-0x1a4]
 unsigned int v118; // [bp-0x1a0]
 unsigned int v119; // [bp-0x19c]
 char v94; // [bp-0x198]

 puts(&g_4035e0);
 v0 = 15;
 printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
 v0 = 5;
 printf("ARR-L1-02 (array_string): %d\n", v0);
 result = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 0;
 flag4 = 0;
 flag5 = 0;
 flag6 = 0;
 flag7 = 0;
 flag8 = 0;
 flag9 = 0;
 flag10 = 0;
 flag11 = 1;
 flag12 = 0;
 flag13 = 0;
 flag14 = 0;
 flag15 = 0;
 flag16 = 0;
 flag17 = 0;
 flag18 = 0;
 flag19 = 0;
 flag20 = 0;
 flag21 = 0;
 v23 = 2;
 flag22 = 0;
 flag23 = 0;
 flag24 = 0;
 flag25 = 0;
 flag26 = 0;
 flag27 = 0;
 flag28 = 0;
 flag29 = 0;
 flag30 = 0;
 flag31 = 0;
 v34 = 3;
 memset(&v35, 0, 36);
 flag32 = 0;
 v37 = 4;
 flag33 = 0;
 flag34 = 0;
 flag35 = 0;
 flag36 = 0;
 flag37 = 0;
 flag38 = 0;
 flag39 = 0;
 flag40 = 0;
 flag41 = 0;
 flag42 = 0;
 v48 = 5;
 flag43 = 0;
 flag44 = 0;
 flag45 = 0;
 flag46 = 0;
 flag47 = 0;
 flag48 = 0;
 flag49 = 0;
 flag50 = 0;
 flag51 = 0;
 flag52 = 0;
 v59 = 6;
 flag53 = 0;
 flag54 = 0;
 flag55 = 0;
 flag56 = 0;
 flag57 = 0;
 flag58 = 0;
 flag59 = 0;
 flag60 = 0;
 flag61 = 0;
 flag62 = 0;
 v70 = 7;
 flag63 = 0;
 flag64 = 0;
 flag65 = 0;
 flag66 = 0;
 flag67 = 0;
 flag68 = 0;
 flag69 = 0;
 flag70 = 0;
 flag71 = 0;
 flag72 = 0;
 v81 = 8;
 flag73 = 0;
 flag74 = 0;
 flag75 = 0;
 flag76 = 0;
 flag77 = 0;
 flag78 = 0;
 flag79 = 0;
 flag80 = 0;
 flag81 = 0;
 flag82 = 0;
 v92 = 9;
 v0 = flag11 + result + v23 + v34 + v37 + v48 + v59 + v70 + 17;
 printf("ARR-L1-03 (array_2d_stack): %d\n", v0);
 i = 0;
 do
 {
 *((unsigned int *)((char *)&v93 + i)) = 1;
 *((unsigned int *)((char *)&v97 + i)) = 1;
 *((unsigned int *)((char *)&v98 + i)) = 1;
 *((unsigned int *)((char *)&v99 + i)) = 1;
 *((unsigned int *)((char *)&v100 + i)) = 1;
 *((unsigned int *)((char *)&v101 + i)) = 1;
 *((unsigned int *)((char *)&v102 + i)) = 1;
 *((unsigned int *)((char *)&v103 + i)) = 1;
 *((unsigned int *)((char *)&v104 + i)) = 1;
 *((unsigned int *)((char *)&v105 + i)) = 1;
 *((unsigned int *)((char *)&v106 + i)) = 1;
 *((unsigned int *)((char *)&v107 + i)) = 1;
 *((unsigned int *)((char *)&v108 + i)) = 1;
 *((unsigned int *)((char *)&v109 + i)) = 1;
 *((unsigned int *)((char *)&v110 + i)) = 1;
 *((unsigned int *)((char *)&v111 + i)) = 1;
 *((unsigned int *)((char *)&v112 + i)) = 1;
 *((unsigned int *)((char *)&v113 + i)) = 1;
 *((unsigned int *)((char *)&v114 + i)) = 1;
 *((unsigned int *)((char *)&v115 + i)) = 1;
 *((unsigned int *)((char *)&v116 + i)) = 1;
 *((unsigned int *)((char *)&v117 + i)) = 1;
 *((unsigned int *)((char *)&v118 + i)) = 1;
 *((unsigned int *)((char *)&v119 + i)) = 1;
 *((unsigned int *)&(&v94)[i]) = 1;
 i += 100;
 } while (i != 500);
 v0 = array_3d(&v93);
 printf("ARR-L1-04 (array_3d): %d\n", v0);
 v0 = 60;
 printf("ARR-L2-01 (array_vla): %d\n", v0);
 v0 = 100;
 printf("ARR-L2-02 (array_pointer): %d\n", v0);
 v0 = 60;
 printf("ARR-L2-03 (pointer_array): %d\n", v0);
 v0 = 17;
 return printf("ARR-L2-04 (array_complex_index): %d\n", v0);
}


// Function: sub_401db2 at 0x401db2
void sub_401db2(unsigned int a0)
{
 ptr_single((unsigned int *)a0);
 return;
}


// Function: ptr_single at 0x401dc0
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: sub_401dca at 0x401dca
void sub_401dca(unsigned int a0)
{
 ptr_double((void *)a0);
 return;
}


// Function: ptr_double at 0x401dd0
int ptr_double(void *a0)
{
 return ((struct_0**)a0)[0]->field_0 + 5;
}


// Function: sub_401ddc at 0x401ddc
void sub_401ddc(unsigned int a0)
{
 ptr_triple((struct_1 **)a0);
 return;
}


// Function: ptr_triple at 0x401de0
int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: sub_401dee at 0x401dee
void sub_401dee(unsigned int a0, unsigned int a1)
{
 ptr_increment((unsigned int *)a0, a1);
 return;
}


// Function: ptr_increment at 0x401df0
unsigned int ptr_increment(unsigned int *a0, unsigned int a1)
{
 unsigned int *cur;
 unsigned int result;
 unsigned int v2;
 unsigned int i;
 unsigned int index;

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


// Function: sub_401e5c at 0x401e5c
void sub_401e5c(unsigned int a0, unsigned int a1)
{
 ptr_offset(a0, a1);
 return;
}


// Function: ptr_offset at 0x401e60
int ptr_offset(unsigned int a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: sub_401e6c at 0x401e6c
void sub_401e6c(unsigned int a0, unsigned int a1)
{
 ptr_diff(a0, a1);
 return;
}


// Function: ptr_diff at 0x401e70
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
 return (a0 - a1) >> 2;
}


// Function: sub_401e7c at 0x401e7c
void sub_401e7c(unsigned int a0, unsigned int a1)
{
 ptr_void((void *)a0, a1);
 return;
}


// Function: ptr_void at 0x401e80
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


// Function: sub_401e9d at 0x401e9d
void sub_401e9d(unsigned int a0)
{
 ptr_const((unsigned int*)a0);
 return;
}


// Function: ptr_const at 0x401ea0
unsigned int ptr_const(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401ea9 at 0x401ea9
void sub_401ea9(unsigned int a0)
{
 ptr_const_ptr((unsigned int*)a0);
 return;
}


// Function: ptr_const_ptr at 0x401eb0
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: sub_401ebc at 0x401ebc
void sub_401ebc()
{
 unsigned int a0, a1;
 ptr_func_simple(&a0, a1);
 return;
}


// Function: ptr_func_simple at 0x401ec0
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
 typedef int (*func_ptr_t)(unsigned int);
 return ((func_ptr_t)a0)(a1);
}


// Function: ptr_func_complex at 0x401ee0
unsigned int g_405f10 = 0;
unsigned int g_405f14 = 0;

int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = g_405f14;
 v0 = g_405f10;
 typedef int (*func_ptr_t)(unsigned int, unsigned int*);
 return ((func_ptr_t)a0)(a1, &v0);
}


// Function: sub_401f19 at 0x401f19
void sub_401f19(unsigned int a0)
{
 ptr_cast((unsigned int*)a0);
 return;
}


// Function: ptr_cast at 0x401f20
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: sub_401f27 at 0x401f27
void sub_401f27(unsigned int a0)
{
 opaque_handle_create(a0);
 return;
}


// Function: opaque_handle_create at 0x401f30
int opaque_handle_create(unsigned int a0)
{
 return a0;
}


// Function: sub_401f35 at 0x401f35
void sub_401f35(unsigned int a0)
{
 opaque_handle_op(a0);
 return;
}


// Function: opaque_handle_op at 0x401f40
unsigned int opaque_handle_op(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401f47 at 0x401f47
int sub_401f47()
{
 test_pointer_types();
 return 0;
}


// Function: test_pointer_types at 0x401f50
char g_4035fb[] = "Testing pointer types:";

int test_pointer_types()
{
 unsigned int v0; // [bp-0x18]

 puts(&g_4035fb);
 v0 = 15;
 printf("PTR-L2-01 (ptr_single): %d\n", v0);
 v0 = 15;
 printf("PTR-L2-02 (ptr_double): %d\n", v0);
 v0 = 6;
 printf("PTR-L2-03 (ptr_triple): %d\n", v0);
 v0 = 15;
 printf("PTR-L2-04 (ptr_increment): %d\n", v0);
 v0 = 30;
 printf("PTR-L2-05 (ptr_offset): %d\n", v0);
 v0 = 4;
 printf("PTR-L2-06 (ptr_diff): %d\n", v0);
 v0 = 42;
 printf("PTR-L2-07 (ptr_void): %d\n", v0);
 v0 = 65;
 printf("PTR-L2-07 (ptr_void): %d\n", v0);
 v0 = 20;
 printf("PTR-L2-08 (ptr_const): %d\n", v0);
 v0 = 15;
 printf("PTR-L2-09 (ptr_const_ptr): %d\n", v0);
 v0 = 10;
 printf("PTR-L2-10 (ptr_func_simple): %d\n", v0);
 v0 = 1;
 printf("PTR-L2-11 (ptr_func_complex): %d\n", v0);
 v0 = 305419896;
 printf("PTR-L2-12 (ptr_cast): 0x%x\n", v0);
 v0 = 20;
 return printf("PTR-L2-13 (opaque_handle_op): %d\n", v0);
}


// Function: sub_4020a3 at 0x4020a3
void sub_4020a3(unsigned int a0)
{
 struct_simple((unsigned int*)a0);
 return;
}


// Function: struct_simple at 0x4020b0
int struct_simple(unsigned int *a0)
{
 return a0[1] + *(a0) + a0[2];
}


// Function: sub_4020bd at 0x4020bd
void sub_4020bd()
{
 unsigned int *a0;
 unsigned int a1;
 struct_array(a0, a1);
 return;
}


// Function: struct_array at 0x4020c0
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int i; // esi
 unsigned int v1; // eax
 unsigned int *cur; // edi
 unsigned int v3; // edx

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
 if (((char)a1 & 1))
 {
 v3 = i * 3;
 return v1 + a0[v3] + a0[1 + v3] + a0[2 + 3 * i];
 }
 return v1;
}


// Function: sub_402122 at 0x402122
void sub_402122(unsigned int a0)
{
 struct_nested((unsigned int*)a0);
 return;
}


// Function: struct_nested at 0x402130
int struct_nested(unsigned int *a0)
{
 return a0[3] + *(a0);
}


// Function: sub_40213a at 0x40213a
void sub_40213a(unsigned int a0)
{
 struct_deep((unsigned int*)a0);
 return;
}


// Function: struct_deep at 0x402140
int struct_deep(unsigned int *a0)
{
 return a0[5] + a0[2];
}


// Function: sub_40214b at 0x40214b
void sub_40214b(unsigned int a0)
{
 struct_with_ptr((struct_0*)a0);
 return;
}


// Function: struct_with_ptr at 0x402150
int struct_with_ptr(struct_0 *a0)
{
 if (!a0->field_4)
 return 0 + a0->field_0;
 return a0->field_4->field_0 + a0->field_0;
}


// Function: sub_402167 at 0x402167
void sub_402167(unsigned int a0)
{
 struct_bitfields((unsigned short*)a0);
 return;
}


// Function: struct_bitfields at 0x402170
int struct_bitfields(unsigned short *ptr)
{
 unsigned int v0; // eax

 v0 = *(ptr);
 return (v0 >> 6) + (v0 & 1) + (v0 >> 1 & 3) + (v0 >> 3 & 7);
}


// Function: sub_402197 at 0x402197
void sub_402197(unsigned int a0, unsigned int a1)
{
 union_type((void*)a0, a1);
 return;
}


// Function: union_type at 0x4021a0
int union_type(void* a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

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


// Function: sub_4021e7 at 0x4021e7
void sub_4021e7(unsigned int a0, unsigned int a1)
{
 union_array(a0, a1);
 return;
}


// Function: union_array at 0x4021f0
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


// Function: sub_40225d at 0x40225d
void sub_40225d(unsigned int a0)
{
 enum_type(a0);
 return;
}


// Function: enum_type at 0x402260
unsigned int enum_type(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_40226a at 0x40226a
void sub_40226a(unsigned int a0)
{
 enum_switch(a0);
 return;
}


// Function: enum_switch at 0x402270
unsigned int enum_switch(unsigned int a0)
{
 switch (a0)
 {
 case 0: return 0;
 case 1: return 10;
 case 2: return 20;
 case 3: return 30;
 default: return 4294967197;
 }
}


// Function: sub_402292 at 0x402292
void sub_402292()
{
 struct_func_ptr(0);
 return;
}


// Function: struct_func_ptr at 0x4022a0
int struct_func_ptr(struct_0 *a0)
{
 typedef int (*func_ptr_t)(unsigned int);
 func_ptr_t fp = (func_ptr_t)a0->field_4;
 return fp(a0->field_0);
}


// Function: sub_4022c1 at 0x4022c1
void sub_4022c1(unsigned int a0)
{
 linked_list((struct_0*)a0);
 return;
}


// Function: linked_list at 0x4022d0
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
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 return v1;
}


// Function: sub_4022ea at 0x4022ea
void sub_4022ea(unsigned int a0)
{
 doubly_linked_list((struct_0*)a0);
 return;
}


// Function: doubly_linked_list at 0x4022f0
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
 ptr = ptr->field_8;
 } while (ptr->field_8);
 }
 return v1;
}


// Function: sub_40230a at 0x40230a
void sub_40230a()
{
 binary_tree_sum(0);
 return;
}


// Function: binary_tree_sum at 0x402310
unsigned int binary_tree_sum(struct_0 *a0)
{
 struct_0 *result; // edi
 unsigned int v1; // esi
 struct_0 *ptr; // edi
 unsigned int v3; // eax
 struct_0 *v4; // edi

 result = a0;
 v1 = 0;
 if (!result)
 return 0;
 do
 {
 ptr = result;
 v3 = binary_tree_sum(ptr->field_4);
 v4 = ptr->field_8;
 v1 = v1 + ptr->field_0 + v3;
 result = v4;
 } while (ptr->field_8);
 return v1;
}


// Function: sub_40234f at 0x40234f
void sub_40234f()
{
 binary_tree(0);
 return;
}


// Function: binary_tree at 0x402350
unsigned int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: sub_402371 at 0x402371
void sub_402371()
{
 graph_traverse(0);
 return;
}


typedef struct graph_node {
 unsigned int field_0;
 struct graph_node *field_4;
} graph_node;

typedef struct graph_struct {
 graph_node *field_0[10];
 unsigned int field_28;
} graph_struct;

// Function: graph_traverse at 0x402380
unsigned int graph_traverse(void *a0)
{
 unsigned int result;
 unsigned int idx;
 unsigned int cur;
 graph_node *p;
 graph_node *ptr3;
 graph_node *addr;
 graph_struct *ptr;

 ptr = (graph_struct *)a0;
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
 p = ptr->field_0[0];
 if (!ptr->field_0[0])
 goto LABEL_4023f9;
 do
 {
LABEL_4023f0:
 cur += p->field_0;
 p = p->field_4;
 } while (p->field_4);
 while (1)
 {
LABEL_4023f9:
 ptr3 = ptr->field_0[idx];
 if (ptr->field_0[idx])
 {
 do
 {
 cur += ptr3->field_0;
 ptr3 = ptr3->field_4;
 } while (ptr3->field_4);
 }
 idx += 1;
 if (idx >= result)
 break;
 p = ptr->field_0[idx];
 if (ptr->field_0[idx])
 goto LABEL_4023f0;
 }
 }
 return cur;
}


// Function: sub_4023d5 at 0x4023d5
void sub_4023d5()
{
}


// Function: sub_40241b at 0x40241b
int sub_40241b()
{
 return test_composite_types();
}


typedef struct test_node0 {
 char field_0[4];
 struct test_node0 *field_4;
} test_node0;

typedef struct test_node1 {
 char field_0[4];
 struct test_node1 *field_4;
} test_node1;

typedef struct test_node2 {
 unsigned int field_0;
 struct test_node2 *field_4;
} test_node2;

char g_403616[] = "Testing composite types:";

// Function: test_composite_types at 0x402420

int test_composite_types()
{
 test_node0 *ptr;
 unsigned int v19;
 test_node1 *p;
 unsigned int v22;
 unsigned int v24;
 test_node2 *addr;
 unsigned int v0;
 test_node0 node0, node1, node2;
 test_node1 dnode0, dnode1;
 unsigned int result;
 unsigned int v7;
 unsigned int flag4;
 unsigned int flag3;
 unsigned int v11;
 unsigned int flag1;
 unsigned int v14;
 unsigned int flag2;

 puts(&g_403616);
 v0 = 6;
 printf("CMP-L2-01 (struct_simple): %d\n", v0);
 v0 = 9;
 printf("CMP-L2-02 (struct_array): %d\n", v0);
 v0 = 105;
 printf("CMP-L2-03 (struct_nested): %d\n", v0);
 v0 = 258;
 printf("CMP-L2-04 (struct_deep): %d\n", v0);
 v0 = 30;
 printf("CMP-L2-05 (struct_with_ptr): %d\n", v0);
 v0 = 106;
 printf("CMP-L2-06 (struct_bitfields): %d\n", v0);
 v0 = 305419896;
 printf("CMP-L2-07 (union_type): %d\n", v0);
 v0 = 60;
 printf("CMP-L2-08 (union_array): %d\n", v0);
 v0 = 10;
 printf("CMP-L2-09 (enum_type): %d\n", v0);
 v0 = 50;
 printf("CMP-L2-10 (enum_switch): %d\n", v0);
 v0 = 21;
 printf("CMP-L2-11 (struct_func_ptr): %d\n", v0);
 
 /* linked list test */
 *(unsigned int *)&node0.field_0 = 10;
 node0.field_4 = &node1;
 *(unsigned int *)&node1.field_0 = 20;
 node1.field_4 = &node2;
 *(unsigned int *)&node2.field_0 = 30;
 node2.field_4 = 0;
 
 ptr = &node0;
 v19 = 0;
 do
 {
 v19 += *(unsigned int *)&ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr);
 v0 = v19;
 printf("CMP-L2-12 (linked_list): %d\n", v0);
 
 /* doubly linked list test */
 *(unsigned int *)&dnode0.field_0 = 10;
 dnode0.field_4 = &dnode1;
 *(unsigned int *)&dnode1.field_0 = 20;
 dnode1.field_4 = 0;
 
 p = &dnode0;
 v22 = 0;
 do
 {
 v22 += *(unsigned int *)&p->field_0;
 p = p->field_4;
 } while (p);
 v0 = v22;
 printf("CMP-L2-13 (doubly_linked_list): %d\n", v0);
 
 flag3 = 0;
 flag4 = 0;
 v0 = 100;
 printf("CMP-L2-14 (binary_tree): %d\n", v0);
 v24 = 1;
 addr = 0;
 v0 = v24;
 return printf("CMP-L2-15 (graph_traverse): %d\n", v0);
}


// Function: sub_402652 at 0x402652
int sub_402652()
{
 return main();
}


// Function: main at 0x402660
int main()
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_40268b at 0x40268b
void sub_40268b()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 4294967295;
}


// Function: sub_4026d2 at 0x4026d2
void sub_4026d2()
{
}



/* CRT stub function _fini removed by preprocessor */


