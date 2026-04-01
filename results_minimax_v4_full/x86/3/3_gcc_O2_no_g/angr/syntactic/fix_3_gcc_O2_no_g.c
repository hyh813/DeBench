// Angr Decompilation of 3_gcc_O2_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */
#include <stddef.h>  // for NULL

typedef struct struct_0 {
 char padding_0[80];
 unsigned int field_50;
} struct_0;

extern struct_0 *g_405ff4;

/* GCC built-in functions for getting PC */
static inline void *get_pc_thunk_bx(void) { return &&lbl; lbl:; }
static inline void *get_pc_thunk_dx(void) { return &&lbl; lbl:; }
static inline void *get_pc_thunk_di(void) { return &&lbl; lbl:; }
static inline void *get_pc_thunk_ax(void) { return &&lbl; lbl:; }

/* Compatibility macros for old naming */
#define __x86.get_pc_thunk_bx get_pc_thunk_bx
#define __x86.get_pc_thunk_dx get_pc_thunk_dx
#define __x86.get_pc_thunk_di get_pc_thunk_di
#define __x86.get_pc_thunk_ax get_pc_thunk_ax

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 goto ptr[2];
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return;
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 sub_401030(88);
 return;
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 sub_401030(96);
 return;
}


// Function: sub_40110e at 0x40110e
void sub_40110e()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return;
}


// Function: sub_40111e at 0x40111e
void sub_40111e()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 sub_401030(112);
 return;
}


// Function: sub_40112e at 0x40112e
void sub_40112e()
{
 sub_401130();
 return;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 sub_401030(120);
 return;
}


// Function: sub_40113e at 0x40113e
int sub_40113e()
{
 sub_401140();
 return;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 sub_401030(128);
 return;
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return;
}


// Function: sub_401150 at 0x401150
int sub_401150()
{
 return 0;
}


// Function: sub_40115a at 0x40115a
int sub_40115a()
{
 sub_401160();
 return;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 return 0;
}


// Function: sub_40116a at 0x40116a
int sub_40116a()
{
 sub_401170();
 return;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 // Jump table case - switch on index
 return 0;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return;
}


// Function: sub_401180 at 0x401180
int sub_401180()
{
 return 0;
}


// Function: sub_40118a at 0x40118a
int sub_40118a()
{
 sub_401190();
 return;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 unsigned int v1; // ebx

 switch (v1) {
 }
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 struct_0 *v1; // ebx

 return v1->field_20;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0();
 return;
}


// Function: sub_4011b0 at 0x4011b0
int sub_4011b0()
{
 struct_0 *v1; // ebx

 return v1->field_24;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0();
 return;
}


// Function: sub_4011c0 at 0x4011c0
int sub_4011c0()
{
 struct_0 *v1; // ebx

 return v1->field_28;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0();
 return;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0()
{
 struct_0 *v1; // ebx

 return v1->field_2c;
}


// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0();
 return;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0()
{
 struct_0 *v1; // ebx

 return v1->field_30;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0();
 return;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0()
{
 struct_0 *v1; // ebx

 return v1->field_34;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 struct_0 *v1; // ebx

 return v1->field_38;
}


// Function: sub_40120a at 0x40120a
int sub_40120a()
{
 sub_401210();
 return;
}


// Function: sub_401210 at 0x401210
int sub_401210()
{
 struct_0 *v1; // ebx

 return v1->field_3c;
}


// Function: sub_40121a at 0x40121a
int sub_40121a()
{
 sub_401220();
 return;
}


// Function: sub_401220 at 0x401220
int sub_401220()
{
 struct_0 *v1; // ebx

 return v1->field_40;
}


// Function: sub_40122a at 0x40122a
int sub_40122a()
{
 sub_401230();
 return;
}


// Function: sub_401230 at 0x401230
int sub_401230()
{
 struct_0 *v1; // ebx

 return v1->field_44;
}


// Function: sub_40123a at 0x40123a
int sub_40123a()
{
 sub_401240();
 return;
}


// Function: sub_401240 at 0x401240
int sub_401240()
{
 struct_0 *v1; // ebx

 return v1->field_48;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 main();
 return;
}


// Function: main at 0x401250
unsigned int main()
{
 char v0; // [bp+0x0]

 test_stack_memory(&v0);
 test_heap_memory(&v0);
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_401272 at 0x401272
void sub_401272()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4012ac at 0x4012ac
void sub_4012ac()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4012b0
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_4012b4 at 0x4012b4
void sub_4012b4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86.get_pc_thunk_dx();
 return (char *)&ptr[4947] + 3;
}


// Function: sub_4012f3 at 0x4012f3
void sub_4012f3()
{
}


// Function: sub_4012f9 at 0x4012f9
void sub_4012f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 v3 = &v2->padding_0[19611];
 v0 = v4;
 if (!(&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1)
 {
 return (&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[92]))
 {
 return (*((int *)&v3->padding_0[92]))(&v3->padding_0[116], (&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[116] - &v3->padding_0[116] >> 31) + (&v3->padding_0[116] - &v3->padding_0[116] >> 2) >> 1;
 }
}


// Function: sub_401347 at 0x401347
void sub_401347()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
 struct_0;

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
 ptr = &v6->padding_0[19523];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[116])
 return v5;
 if (*((int *)&ptr->padding_0[80]))
 sub_401140(*((int *)&ptr->padding_0[100]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[120]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[120]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[120]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[120]);
 } while (*((int *)&ptr->padding_0[120]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[116] = 1;
 return v14;
}


// Function: sub_4013da at 0x4013da
void sub_4013da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4013e9
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4013ed
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4013f1 at 0x4013f1
void sub_4013f1(unsigned int a0)
{
 double_value();
 return;
}


// Function: double_value at 0x401400
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40140b at 0x40140b
void sub_40140b(unsigned int a0)
{
 local_vars();
 return;
}


// Function: local_vars at 0x401410
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_40141d at 0x40141d
int sub_40141d()
{
 local_array();
 return;
}


// Function: local_array at 0x401420
unsigned int local_array(unsigned int a0)
{
 unsigned int v3; // edx
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned short v6; // gs
 unsigned int *cur; // eax
 unsigned int v0; // [bp-0x38]
 char v1; // [bp-0x24]
 unsigned int v2; // [bp-0x10]

 v3 = 0;
 v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
 cur = &v0;
 do
 {
 *(cur) = v3;
 cur += 1;
 v3 += a0;
 } while (cur != &v2);
 if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
 {
 __stack_chk_fail_local();
 return local_struct();
 }
 return *((int *)&v1);
}


// Function: local_struct at 0x401470
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_40147c at 0x40147c
void sub_40147c(unsigned int a0)
{
 address_of_local();
 return;
}


// Function: address_of_local at 0x401480
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: sub_401494 at 0x401494
void sub_401494(unsigned int a0)
{
 address_of_array();
 return;
}


// Function: address_of_array at 0x4014a0
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4014ad at 0x4014ad
void sub_4014ad()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x4014b0
int large_stack_frame()
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int i; // eax
 unsigned long v6; // [bp-0x810]
 unsigned int v0; // [bp-0x10]

 v0 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 i = 0;
 do
 {
 *((char *)&v6 + i) = i;
 i += 1;
 } while (i != 0x800);
 if (v0 != *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 {
 __stack_chk_fail_local();
 vla_stack();
 }
 return;
}


// Function: vla_stack at 0x401510
extern char g_4015b3;

unsigned int vla_stack(unsigned int a0)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char *i; // ecx
 unsigned int result; // edx
 unsigned int ptr; // edx
 unsigned int idx; // eax
 unsigned int v11; // eax
 unsigned long v12; // [bp-0x201c]
 char v0; // [bp-0x101c]
 char v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x10]
 char *vvar_42;
 char *vvar_70;
 char *vvar_12;

 vvar_42 = &v1;
 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 if (a0 - 1 <= 999)
 {
 v6 = a0 * 4 + 15;
 i = &(&v1)[-1 * (v6 & 0xfffff000)];
 if (&v1 != i)
 {
 do
 {
 } while (&v12 != i);
 }
 result = v6 & 0xfffffff0 & 4095;
 vvar_70 = &(&v0)[-1 * result];
 if (result)
 *((int *)(vvar_12 + result - 4)) = *((int *)(vvar_12 + result - 4));
 ptr = vvar_12;
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 2)) = idx;
 idx += 2;
 } while (idx != a0 * 2);
 v11 = *((int *)(ptr + (a0 >> 1) * 4));
 }
 else
 {
 v11 = 4294967295;
 }
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 {
 *((char **)(vvar_12 - 4)) = &g_4015b3;
 __stack_chk_fail_local();
 return alloca_usage();
 }
 return v11;
}


// Function: sub_401598 at 0x401598
void sub_401598()
{
}


// Function: alloca_usage at 0x4015c0
extern char g_40165b;

unsigned int alloca_usage(unsigned int j)
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int v6; // eax
 char *i; // ebx
 unsigned int result; // edx
 unsigned int idx; // eax
 unsigned int ptr; // ebx
 unsigned int v11; // eax
 unsigned long v12; // [bp-0x201c]
 char v0; // [bp-0x101c]
 char v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x10]
 char *vvar_43;
 char *vvar_70;
 char *vvar_2;

 vvar_43 = &v1;
 v2 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 if (j > 0)
 {
 v6 = j * 4 + 27;
 i = &(&v1)[-1 * (v6 & 0xfffff000)];
 if (&v1 != i)
 {
 do
 {
 } while (&v12 != i);
 }
 result = v6 & 0xfffffff0 & 4095;
 vvar_70 = &(&v0)[-1 * result];
 if (result)
 *((int *)(vvar_2 + result - 4)) = *((int *)(vvar_2 + result - 4));
 idx = 0;
 ptr = (unsigned int *)(vvar_70 + 15 & 0xfffffff0);
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 idx += 1;
 } while (j != idx);
 v11 = *((int *)(ptr + (j >> 1) * 4));
 }
 else
 {
 v11 = 4294967295;
 }
 if (v2 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 {
 *((char **)(vvar_2 - 4)) = &g_40165b;
 __stack_chk_fail_local();
 return stack_alias();
 }
 return v11;
}


// Function: sub_401643 at 0x401643
void sub_401643()
{
}


// Function: stack_alias at 0x401660
unsigned int stack_alias()
{
 return 20;
}


// Function: sub_40166a at 0x40166a
int sub_40166a()
{
 test_stack_memory();
 return;
}


// Function: test_stack_memory at 0x401670
extern unsigned int g_403008;

int test_stack_memory()
{
 sub_4011f0(&g_403008);
 sub_401220(1, "MEM-L1-01 (local_vars): %d\n", 20);
 sub_401220(1, "MEM-L1-02 (local_array): %d\n", 10);
 sub_401220(1, "MEM-L1-03 (local_struct): %d\n", 15);
 sub_401220(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 sub_401220(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 sub_401220(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame(1, "MEM-L1-05 (address_of_array): %d\n", 2));
 sub_401220(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 sub_401220(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 return sub_401220(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_40174e at 0x40174e
int sub_40174e()
{
 heap_basic();
 return;
}


// Function: heap_basic at 0x401750
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // esi
 unsigned int result; // eax
 unsigned int ptr; // edx
 unsigned int idx; // eax

 v0 = a0;
 result = sub_4011e0(v0 * 4);
 if (!result)
 return 4294967295;
 ptr = result;
 if (v0 > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 2)) = idx;
 idx += 2;
 } while (idx != v0 * 2);
 }
 sub_401170(ptr);
 return *((int *)(ptr + ((v0 >> 31) + v0 >> 1) * 4));
}


// Function: sub_4017bf at 0x4017bf
int sub_4017bf()
{
 heap_calloc();
 return;
}


// Function: heap_calloc at 0x4017c0
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *result; // eax
 unsigned int v1; // esi
 unsigned int *ptr; // edx

 result = sub_401240(a0, 4);
 if (!result)
 return 4294967295;
 if (a0 > 0)
 {
 v1 = 0;
 ptr = result;
 do
 {
 v1 += *(ptr);
 ptr += 1;
 } while (ptr != &result[a0]);
 }
 else
 {
 v1 = 0;
 }
 sub_401170(result);
 return v1;
}


// Function: sub_401815 at 0x401815
void sub_401815()
{
}


// Function: sub_401821 at 0x401821
int sub_401821()
{
 heap_realloc();
 return;
}


// Function: heap_realloc at 0x401830
unsigned int heap_realloc()
{
 unsigned int *ptr; // eax
 unsigned int result; // eax

 ptr = sub_4011e0(20);
 if (!ptr)
 return 4294967295;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 result = sub_4011d0(ptr, 40);
 if (!result)
 {
 sub_401170(ptr);
 return 4294967294;
 }
 sub_401170();
 return (result->field_8 != 3 ? 4294967293 : 50);
}


// Function: sub_4018c5 at 0x4018c5
int sub_4018c5()
{
 heap_array();
 return;
}


// Function: heap_array at 0x4018d0
unsigned int heap_array(unsigned int a0)
{
 unsigned int i; // esi
 unsigned int result; // eax
 unsigned int ptr; // ecx
 unsigned int idx; // eax

 i = a0;
 result = sub_4011e0(i * 4);
 if (!result)
 return 4294967295;
 ptr = result;
 if (i > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 idx += 1;
 } while (i != idx);
 }
 sub_401170(ptr);
 return *((int *)(ptr + ((i >> 31) + i >> 1) * 4));
}


// Function: sub_40193a at 0x40193a
int sub_40193a()
{
 heap_struct();
 return;
}


// Function: heap_struct at 0x401940
unsigned int heap_struct(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_4011e0(8);
 if (!result)
 return 4294967295;
 sub_401170(result);
 return a0 * 3;
}


// Function: sub_401982 at 0x401982
int sub_401982()
{
 heap_nested();
 return;
}


// Function: heap_nested at 0x401990
typedef struct struct_2_nested {
 unsigned int field_0;
 struct struct_3_nested *field_4;
} struct_2_nested;

typedef struct struct_3_nested {
 unsigned int field_0;
 unsigned int field_4;
} struct_3_nested;

unsigned int heap_nested(struct_2_nested **addr)
{
 struct_2_nested *ptr; // esi
 struct_3_nested *p; // eax

 ptr = sub_4011e0(8);
 *(addr) = ptr;
 if (!ptr)
 return 4294967295;
 ptr->field_0 = 10;
 p = sub_4011e0(8);
 ptr->field_4 = p;
 if (!p)
 {
 sub_401170(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: sub_401a01 at 0x401a01
int sub_401a01()
{
 linked_list_heap();
 return;
}


// Function: linked_list_heap at 0x401a10
typedef struct struct_linked {
 unsigned int field_0;
 struct struct_linked *field_4;
} struct_linked;

unsigned int linked_list_heap()
{
 struct_linked *v1; // eax
 unsigned int v2; // ebp
 struct_linked *ptr3; // esi
 struct_linked *v10; // esi
 struct_linked *ptr4; // esi
 struct_linked *v12; // esi
 struct_linked *v3; // esi
 struct_linked *addr; // eax
 struct_linked *p; // eax
 unsigned int v6; // edi
 struct_linked *ptr; // eax

 v1 = 0;
 v2 = 0;
 v3 = 0;
 while (1)
 {
 addr = v1;
 p = sub_4011e0(8);
 if (!p)
 break;
 p->field_0 = v2;
 p->field_4 = NULL;
 if (v3)
 addr->field_4 = p;
 else
 v3 = p;
 v2 += 10;
 v1 = p;
 if (v2 == 50)
 {
 v6 = 0;
 ptr = v3;
 do
 {
 v6 += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 do
 {
 ptr3 = v3;
 v10 = ptr3->field_4;
 sub_401170(ptr3);
 v3 = v10;
 } while (ptr3->field_4);
 return v6;
 }
 }
 if (v3)
 {
 do
 {
 ptr4 = v3;
 v12 = ptr4->field_4;
 sub_401170(ptr4);
 v3 = v12;
 } while (ptr4->field_4);
 }
 return 4294967295;
}


// Function: sub_401a8f at 0x401a8f
void sub_401a8f()
{
}


// Function: sub_401ab4 at 0x401ab4
int sub_401ab4()
{
 create_tree_node();
 return;
}


// Function: create_tree_node at 0x401ac0
void create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // eax

 ptr = sub_4011e0(12);
 if (!ptr)
 return;
 ptr[1] = 0;
 ptr[2] = 0;
 ptr[0] = a0;
 return;
}


// Function: sub_401afa at 0x401afa
int sub_401afa()
{
 tree_heap_traversal();
 return;
}


// Function: tree_heap_traversal at 0x401b00
unsigned int tree_heap_traversal()
{
 unsigned int result; // eax
 unsigned int v2; // esi
 unsigned int flag3; // edi
 unsigned int flag2; // eax
 unsigned int flag1; // eax

 result = sub_4011e0(12);
 if (!result)
 return 4294967295;
 v2 = result;
 flag3 = sub_4011e0(12);
 if (flag3)
 {
 flag2 = sub_4011e0(12);
 if (flag2)
 {
 sub_401170(flag3);
 sub_401170(flag2);
 sub_401170(v2);
 return 60;
 }
 sub_401170(flag3);
 }
 else
 {
 flag1 = sub_4011e0(12);
 if (flag1)
 sub_401170(flag1);
 }
 sub_401170(v2);
 return 4294967294;
}


// Function: sub_401b79 at 0x401b79
void sub_401b79()
{
}


// Function: sub_401bc3 at 0x401bc3
int sub_401bc3()
{
 memory_leak();
 return;
}


// Function: memory_leak at 0x401bd0
unsigned int memory_leak(unsigned int a0)
{
 unsigned int i; // esi
 unsigned int ptr; // eax
 unsigned int idx; // edx

 i = a0;
 ptr = sub_4011e0(i * 4);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (i != idx);
 }
 return *((int *)(ptr + ((i >> 31) + i >> 1) * 4));
}


// Function: sub_401c29 at 0x401c29
int sub_401c29()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401c30
unsigned int dangling_pointer()
{
 unsigned int *result; // eax

 result = sub_4011e0(4);
 if (!result)
 return 4294967295;
 sub_401220(1, "value before free: %d\n", 42);
 sub_401170(result);
 return *(result);
}


// Function: sub_401c7f at 0x401c7f
int sub_401c7f()
{
 double_free();
 return;
}


// Function: double_free at 0x401c80
unsigned int double_free(unsigned int *a0)
{
 unsigned int result; // eax

 if (a0)
 return *(a0);
 result = sub_4011e0(4);
 if (!result)
 return 4294967295;
 sub_401170(result);
 sub_401170(result);
 return 4294967294;
}


// Function: sub_401ca4 at 0x401ca4
void sub_401ca4()
{
}


// Function: sub_401cdf at 0x401cdf
int sub_401cdf()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x401ce0
unsigned int heap_overflow()
{
 unsigned int *result; // eax
 unsigned int i; // edx
 unsigned int *ptr; // ecx

 result = sub_4011e0(40);
 if (!result)
 return 4294967295;
 i = 0;
 ptr = result;
 do
 {
 *(ptr) = i;
 i += 100;
 ptr += 1;
 } while (i != 1100);
 sub_401170(result);
 return *(result);
}


// Function: sub_401d3b at 0x401d3b
int sub_401d3b()
{
 test_heap_memory();
 return;
}


// Function: test_heap_memory at 0x401d40
// struct_0 already defined at top

extern unsigned int g_4030ea;
extern unsigned int g_40319c;
extern unsigned int g_4031ac;
extern unsigned int g_4033bc;
extern unsigned int g_4033e4;

int test_heap_memory()
{
 unsigned int v6; // esi
 unsigned int v7; // ebx
 unsigned int *ptr5; // edx
 unsigned int ptr3[6]; // eax
 unsigned int idx4; // edx
 unsigned int v21; // esi
 unsigned int flag1; // eax
 unsigned int v23; // eax
 struct_0 *ptr6; // esi
 unsigned int p[2]; // eax
 unsigned long v8; // ldt
 unsigned int v26; // eax
 unsigned int ptr[5]; // eax
 unsigned int v30; // eax
 unsigned int flag2; // eax
 unsigned int v32; // eax
 unsigned int v33; // edx
 unsigned int v34; // edx
 unsigned int *ptr4; // esi
 unsigned long v9; // gdt
 unsigned int v36; // eax
 unsigned short v10; // gs
 unsigned int addr[6]; // eax
 unsigned int off; // edx
 unsigned int v13; // esi
 unsigned int *result; // eax
 unsigned int v15; // esi
 unsigned int l; // [bp-0x20]
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = v6;
 v3 = v7;
 v2 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
 sub_4011f0(&g_4030ea);
 addr = sub_4011e0(40);
 if (addr)
 {
 off = 0;
 do
 {
 *((unsigned int *)((char *)addr + 2 * off)) = off;
 off += 2;
 } while (off != 20);
 v13 = addr[5];
 sub_401170(addr);
 }
 else
 {
 v13 = 4294967295;
 }
 sub_401220(1, "HEAP-L2-01 (heap_basic): %d\n", v13);
 result = sub_401240(5, 4);
 if (result)
 {
 v15 = 0;
 ptr5 = result;
 do
 {
 v15 += *(ptr5);
 ptr5 += 1;
 } while (ptr5 != result + 5);
 sub_401170(result);
 }
 else
 {
 v15 = 4294967295;
 }
 sub_401220(1, "HEAP-L2-02 (heap_calloc): %d\n", v15);
 sub_401220(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 ptr3 = sub_4011e0(40);
 if (ptr3)
 {
 idx4 = 0;
 do
 {
 ptr3[idx4] = idx4 * 3;
 idx4 += 1;
 } while (idx4 != 10);
 v21 = ptr3[5];
 sub_401170(ptr3);
 }
 else
 {
 v21 = 4294967295;
 }
 sub_401220(1, "HEAP-L2-04 (heap_array): %d\n", v21);
 flag1 = sub_4011e0(8);
 if (flag1)
 {
 sub_401170(flag1);
 v23 = 15;
 }
 else
 {
 v23 = 4294967295;
 }
 sub_401220(1, "HEAP-L2-05 (heap_struct): %d\n", v23);
 ptr6 = sub_4011e0(8);
 if (ptr6)
 {
 p = sub_4011e0(8);
 ptr6->field_4 = p;
 if (p)
 {
 p[0] = 20;
 p[1] = 0;
 v26 = 0;
 }
 else
 {
 sub_401170(ptr6);
 v26 = 4294967294;
 }
 sub_401220(1, "HEAP-L2-06 (heap_nested): %d\n", v26);
 sub_401170(ptr6->field_4);
 sub_401170(ptr6);
 }
 else
 {
 sub_401220(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295, 0);
 }
 sub_401220(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 sub_401220(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 ptr = sub_4011e0(20);
 if (ptr)
 {
 ptr[0] = 0;
 ptr[1] = 1;
 ptr[2] = 2;
 ptr[3] = 3;
 ptr[4] = 4;
 v30 = 2;
 }
 else
 {
 v30 = 4294967295;
 }
 sub_401220(1, "HEAP-L3-03 (memory_leak): %d\n", v30);
 sub_401220(1, "HEAP-L3-04 (dangling_pointer): ");
 flag2 = sub_401230(1, "HEAP-L3-04 (dangling_pointer): ");
 if (!flag2)
 {
 ptr4 = sub_4011e0(4);
 if (ptr4)
 {
 sub_401220(1, "value before free: %d\n", 42);
 sub_401170(ptr4);
 v36 = *(ptr4);
 goto LABEL_402043;
 }
 }
 else if (!((char)_ccall(14, 15, flag2, 0, 0)))
 {
 sub_4011c0(flag2, &v1, 0);
 v32 = v1;
 v33 = v32;
 v34 = v33 & 127;
 if (((char)v33 & 127) && (char)v34 + 1 > 1)
 sub_401220(1, &g_4033e4, v34);
 }
 else
 {
 sub_4011b0(&g_4031ac);
 }
 while (l != *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
 {
 __stack_chk_fail_local();
 v36 = 4294967295;
LABEL_402043:
 sub_401220(1, &g_40319c, v36);
 v32 = sub_401200(0);
 sub_401220(1, &g_4033bc, v32 >> 8 & 255);
 }
 return l - *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
}


// Function: sub_401fdb at 0x401fdb
void sub_401fdb()
{
}


// Function: sub_402009 at 0x402009
void sub_402009()
{
}


// Function: sub_4020e6 at 0x4020e6
void sub_4020e6()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x4020f0
typedef struct struct_global_inner {
 char padding_0[16171];
 unsigned int field_3f2b;
} struct_global_inner;

int global_var_access()
{
 struct_0 *v1; // edx
 struct_0 *ptr; // edx
 unsigned int v3; // eax

 __x86.get_pc_thunk_dx();
 ptr = &v1->padding_0[16039];
 v3 = *((int *)&ptr->padding_0[132]);
 *((unsigned int *)&ptr->padding_0[132]) = v3 + 1;
 return v3 + 1;
}


// Function: sub_40210f at 0x40210f
void sub_40210f()
{
 global_var_read();
 return;
}


// Function: global_var_read at 0x402110
unsigned int global_var_read()
{
 return *((int *)(__x86.get_pc_thunk_ax() + 16139)) * 2;
}


// Function: sub_402127 at 0x402127
void sub_402127()
{
 global_array_access();
 return;
}


// Function: global_array_access at 0x402130
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // edx

 __x86.get_pc_thunk_dx();
 if (a0 > 9)
 return 4294967295;
 return *((int *)(v0 + 15975 + a0 * 4 - 0x2900));
}


// Function: sub_402156 at 0x402156
void sub_402156()
{
 static_local();
 return;
}


// Function: static_local at 0x402160
typedef struct struct_static_local {
 char padding_0[16051];
 unsigned int field_3eb3;
} struct_static_local;

unsigned int static_local(unsigned int a0)
{
 struct_0 *v0; // edx
 struct_0 *ptr; // edx
 unsigned int v2; // eax

 __x86.get_pc_thunk_dx();
 ptr = &v0->padding_0[15927];
 v2 = 0;
 if (!a0)
 v2 = *((int *)&ptr->padding_0[124]) + 1;
 *((unsigned int *)&ptr->padding_0[124]) = v2;
 return v2;
}


// Function: sub_402189 at 0x402189
void sub_402189(unsigned int a0)
{
 call_static_func();
 return;
}


// Function: call_static_func at 0x402190
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_40219d at 0x40219d
void sub_40219d()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x4021a0
int access_extern_global()
{
 return *((int *)(__x86.get_pc_thunk_ax() + 15975)) + 100;
}


// Function: sub_4021ba at 0x4021ba
int sub_4021ba()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x4021c0
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: sub_4021df at 0x4021df
void sub_4021df()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x4021e0
typedef struct struct_1_read_inner {
 char padding_0[15907];
 struct struct_0_read_inner *field_3e23;
} struct_1_read_inner;

typedef struct struct_0_read_inner {
 char padding_0[4];
 char field_4;
} struct_0_read_inner;

int read_const_data()
{
 struct_1_read_inner *v1; // eax

 v1 = __x86.get_pc_thunk_ax();
 return *((char *)(*((int *)&(&v1->padding_0)[1]) + 4)) + 42;
}


// Function: sub_4021fc at 0x4021fc
void sub_4021fc()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x402200
unsigned int access_bss_var()
{
 return 0;
}


// Function: sub_402207 at 0x402207
void sub_402207()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x402210
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: sub_402217 at 0x402217
void sub_402217()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x402220
unsigned int global_struct_access()
{
 return 30;
}


// Function: sub_40222a at 0x40222a
void sub_40222a()
{
 set_file_static();
 return;
}


// Function: set_file_static at 0x402230
typedef struct struct_file_static {
 char padding_0[15823];
 unsigned int field_3dcf;
} struct_file_static;

struct_file_static * set_file_static(unsigned int a0)
{
 *((unsigned int *)(__x86.get_pc_thunk_ax() + 15823)) = a0;
 return __x86.get_pc_thunk_ax() + 15719;
}


// Function: sub_402249 at 0x402249
void sub_402249()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x402250
int get_file_static()
{
 return *((int *)(__x86.get_pc_thunk_ax() + 15791));
}


// Function: sub_402265 at 0x402265
void sub_402265()
{
 set_global_callback();
 return;
}


// Function: set_global_callback at 0x402270
typedef struct struct_global_callback {
 char padding_0[15783];
 unsigned int field_3da7;
} struct_global_callback;

struct_global_callback * set_global_callback(unsigned int a0)
{
 *((unsigned int *)(__x86.get_pc_thunk_ax() + 15783)) = a0;
 return __x86.get_pc_thunk_ax() + 15655;
}


// Function: sub_402289 at 0x402289
void sub_402289()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x402290
unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86.get_pc_thunk_ax();
 if (!*((int *)(__x86.get_pc_thunk_ax() + 15751)))
 return 4294967295;
 goto *((int *)(__x86.get_pc_thunk_ax() + 15751));
}


// Function: sub_4022be at 0x4022be
void sub_4022be(unsigned int a0)
{
 global_heap_store();
 return;
}


// Function: global_heap_store at 0x4022c0
unsigned int global_heap_store(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: sub_4022cf at 0x4022cf
void sub_4022cf()
{
}


// Function: sub_4022d6 at 0x4022d6
void sub_4022d6()
{
 static_complex_init();
 return;
}


// Function: static_complex_init at 0x4022e0
unsigned int static_complex_init()
{
 return 15;
}


// Function: sub_4022ea at 0x4022ea
void sub_4022ea(unsigned int a0)
{
 tls_access();
 return;
}


// Function: tls_access at 0x4022f0
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4022fb at 0x4022fb
void sub_4022fb()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x402300
unsigned int init_order_test()
{
 return 20;
}


// Function: sub_40230a at 0x40230a
int sub_40230a()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x402310
typedef struct struct_test_static {
 char padding_0[4];
 char field_4;
} struct_test_static;

extern struct_0 *const_string;
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int g_403428;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

int test_static_global()
{
 sub_4011f0(&g_403428);
 global_counter = global_counter + 1;
 sub_401220(1, "STM-L1-01 (global_var_access): %d\n", global_counter);
 sub_401220(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 sub_401220(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 sub_401220(1, "STM-L1-03 (static_local): %d\n", 1);
 counter_1 = counter_1 + 1;
 sub_401220(1, "STM-L1-03 (static_local): %d\n", counter_1);
 sub_401220(1, "STM-L1-04 (call_static_func): %d\n", 11);
 sub_401220(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 sub_401220(1, "STM-L2-02 (call_extern_func): %d\n", extern_function(5));
 sub_401220(1, "STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
 sub_401220(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 sub_401220(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 sub_401220(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 sub_401220(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 sub_401220(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 sub_401220(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 sub_401220(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 sub_401220(1, "STM-L3-01 (tls_access): %d\n", 20);
 return sub_401220(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: sub_4024ea at 0x4024ea
int sub_4024ea()
{
 memop_memset();
 return;
}


// Function: memop_memset at 0x4024f0
unsigned int memop_memset(char *a0, unsigned int a1, unsigned int a2)
{
 if (a0 && a1)
 {
 sub_401210(a0, a2, a1);
 return *(a0);
 }
 return 4294967295;
}


// Function: sub_40252e at 0x40252e
void sub_40252e()
{
}


// Function: sub_402537 at 0x402537
int sub_402537()
{
 memop_memcpy();
 return;
}


// Function: memop_memcpy at 0x402540
unsigned int memop_memcpy(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a1 && a2 && a0)
 {
 sub_401180(a0, a1, a2);
 return *((int *)(a0 + (a2 & 0xfffffffc) - 4));
 }
 return 4294967295;
}


// Function: sub_402589 at 0x402589
void sub_402589()
{
}


// Function: sub_402597 at 0x402597
int sub_402597()
{
 memop_memmove();
 return;
}


// Function: memop_memmove at 0x4025a0
typedef struct struct_memmove {
 char padding_0[1];
 char field_1;
} struct_memmove;

unsigned int memop_memmove(struct_memmove *a0, unsigned int a1)
{
 if (a0 && a1 > 1)
 {
 sub_401160((struct struct_0 *)&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: sub_4025e3 at 0x4025e3
void sub_4025e3()
{
}


// Function: sub_4025ef at 0x4025ef
int sub_4025ef()
{
 memop_memcmp();
 return;
}


// Function: memop_memcmp at 0x4025f0
unsigned int memop_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // edx

 if (!(a1 && a2))
 {
 return 0;
 }
 else if (a0)
 {
 v0 = sub_401190(a0, a1, a2);
 if (!((char)_ccall(15, 15, v0, 0, 0)))
 return -(v0);
 return 1;
 }
 else
 {
 return 0;
 }
}


// Function: sub_402647 at 0x402647
void sub_402647()
{
}


// Function: sub_402656 at 0x402656
int sub_402656()
{
 memop_bzero();
 return;
}


// Function: memop_bzero at 0x402660
unsigned int memop_bzero(char *a0, unsigned int a1)
{
 if (!a0)
 return 4294967295;
 sub_401210(a0, 0, a1);
 return *(a0);
}


// Function: sub_40269e at 0x40269e
void sub_40269e()
{
 memop_bcopy();
 return;
}


// Function: memop_bcopy at 0x4026a0
unsigned int memop_bcopy(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned int v3; // esi
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 char v2; // [bp-0x4]

 __x86.get_pc_thunk_di(*((int *)&v2));
 v1 = v3;
 v0 = v4;
 if (a1 && a2 && a0)
 {
 sub_401160(a1, a0, a2);
 return *(a1);
 }
 return 4294967295;
}


// Function: sub_4026e7 at 0x4026e7
void sub_4026e7()
{
}


// Function: sub_4026f7 at 0x4026f7
void sub_4026f7(unsigned int a0)
{
 memop_unaligned_access();
 return;
}


// Function: memop_unaligned_access at 0x402700
typedef struct struct_0 {
 char padding_0[1];
 unsigned int field_1;
} struct_0;

unsigned int memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: sub_402716 at 0x402716
void sub_402716(unsigned int a0)
{
 memop_memory_barrier();
 return;
}


// Function: memop_memory_barrier at 0x402720
unsigned int memop_memory_barrier(unsigned int *a0)
{
 char v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 atomic_exchange(&v0, *((int *)&v0));
 return *(a0) * 2;
}


// Function: sub_40273e at 0x40273e
int sub_40273e()
{
 test_memory_op_functions();
 return;
}


// Function: test_memory_op_functions at 0x402740
extern unsigned int g_403650;

int test_memory_op_functions()
{
 unsigned long v17; // ldt
 unsigned long v18; // gdt
 unsigned short v19; // gs
 unsigned int result; // [bp-0x15c]
 char v1[16]; // [bp-0x154]
 unsigned int v2; // [bp-0x144]
 unsigned int flag1; // [bp-0x140]
 unsigned int v4; // [bp-0x13c]
 unsigned int v5; // [bp-0x138]
 unsigned int flag2; // [bp-0x134]
 unsigned int v7; // [bp-0x130]
 unsigned int v8; // [bp-0x12c]
 char v9; // [bp-0x125]
 char v10[1]; // [bp-0x11b]
 char v11; // [bp-0x11a]
 char v12[1]; // [bp-0x111]
 char v13[8]; // [bp-0x110]
 char v14[248]; // [bp-0x108]
 unsigned int v15; // [bp-0x10]

 v15 = *((int *)_ccall(v17, v18, (unsigned int)v19, 20));
 sub_4011f0(&g_403650);
 strncpy(v13, "AAAA", 4);
 strncpy(v14, "AAAAAA", 6);
 sub_401220(1, "MEMOP-L2-01: %d\n", 65);
 sub_401220(1, "MEMOP-L2-02: %d\n", 50);
 strncpy(v12, "oWorld", 6);
 strncpy(&v10, "Hell", 4);
 strncpy(v1, "\t", 1);
 sub_401160(&v11, &v10, 9);
 sub_401220(1, "MEMOP-L2-03: %c\n", 72);
 flag1 = 1;
 v4 = 2;
 v5 = 3;
 flag2 = 1;
 v7 = 2;
 v8 = 4;
 sub_401220();
 memset(&v9, 0, 10);
 sub_401220(1, "MEMOP-L2-05: %d\n", 0);
 sub_401220(1, "MEMOP-L2-06: %d\n", 1);
 result = 1;
 sub_401220(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v2 = 5;
 atomic_exchange(&result, result);
 sub_401220(1, "MEMOP-L3-02: %d\n", v2 * 2);
 if (v15 == *((int *)_ccall(v17, v18, (unsigned int)v19, 20)))
 return v15 - *((int *)_ccall(v17, v18, (unsigned int)v19, 20));
 __stack_chk_fail_local();
}


// Function: __x86.get_pc_thunk_ax at 0x4028ff
unsigned int __x86.get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_402903 at 0x402903
void sub_402903(unsigned int a0)
{
 extern_function();
 return;
}


// Function: extern_function at 0x402910
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_40291c at 0x40291c
int sub_40291c()
{
 __stack_chk_fail_local();
 return;
}


// Function: __stack_chk_fail_local at 0x402920
int __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 sub_4011a0();
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
 struct_0;

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
 ptr = &v2[1]_padding_0[227];
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_402982 at 0x402982
void sub_402982()
{
}



/* CRT stub function _fini removed by preprocessor */


