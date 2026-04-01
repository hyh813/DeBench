// Angr Decompilation of 3_gcc_Os_no_g
// Platform: X86

#include <stddef.h>
#include <stdbool.h>

/* CRT stub function _init removed by preprocessor */

// Forward declarations
unsigned int sub_4011c0(void *ptr);
int sub_4011e0(int stream, const char *fmt, ...);
int sub_4011f0(int stream, const char *fmt, ...);
unsigned int __x86_get_pc_thunk_ax(void);
unsigned int __x86_get_pc_thunk_cx(void);
unsigned int extern_function(unsigned int a0);

typedef void (*init_func_t)(void);
extern init_func_t g_405ff4;

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
 /* goto ptr[2]; - invalid jump table removed */
 return v0;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return 0;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return 0;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return 0;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return 0;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
 sub_401080();
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
 sub_401030(32);
 return 0;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
 sub_401090();
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
 sub_401030(40);
 return 0;
}


// Function: sub_40109e at 0x40109e
void sub_40109e()
{
 sub_4010a0();
}


// Function: sub_4010a0 at 0x4010a0
int sub_4010a0()
{
 sub_401030(48);
 return 0;
}


// Function: sub_4010ae at 0x4010ae
void sub_4010ae()
{
 sub_4010b0();
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 sub_401030(56);
 return 0;
}


// Function: sub_4010be at 0x4010be
void sub_4010be()
{
 sub_4010c0();
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 sub_401030(64);
 return 0;
}


// Function: sub_4010ce at 0x4010ce
void sub_4010ce()
{
 sub_4010d0();
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 sub_401030(72);
 return 0;
}


// Function: sub_4010de at 0x4010de
void sub_4010de()
{
 sub_4010e0();
}


// Function: sub_4010e0 at 0x4010e0
int sub_4010e0()
{
 sub_401030(80);
 return 0;
}


// Function: sub_4010ee at 0x4010ee
void sub_4010ee()
{
 sub_4010f0();
}


// Function: sub_4010f0 at 0x4010f0
int sub_4010f0()
{
 sub_401030(88);
 return 0;
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe()
{
 sub_401100();
}


// Function: sub_401100 at 0x401100
int sub_401100()
{
 sub_401030(96);
 return 0;
}


// Function: sub_40110e at 0x40110e
void sub_40110e()
{
 sub_401110();
}


// Function: sub_1_110 at 0x401110
int sub_401110()
{
 sub_401030(104);
 return 0;
}


// Function: sub_40111e at 0x40111e
int sub_40111e()
{
 sub_401120();
 return 0;
}


// Function: sub_401120 at 0x401120
int sub_401120()
{
 return 0;
}


// Function: sub_40112a at 0x40112a
int sub_40112a()
{
 sub_401130();
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 return 0;
}


// Function: sub_40113a at 0x40113a
int sub_40113a()
{
 sub_401140();
 return 0;
}


// Function: sub_401140 at 0x401140
int sub_401140()
{
 return 0;
}


// Function: sub_40114a at 0x40114a
int sub_40114a()
{
 sub_401150();
 return 0;
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
 return 0;
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
 return 0;
}


// Function: sub_401170 at 0x401170
int sub_401170()
{
 return 0;
}


// Function: sub_40117a at 0x40117a
int sub_40117a()
{
 sub_401180();
 return 0;
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
 return 0;
}


// Function: sub_401190 at 0x401190
int sub_401190()
{
 return 0;
}


// Function: sub_40119a at 0x40119a
int sub_40119a()
{
 sub_4011a0();
 return 0;
}


// Function: sub_4011a0 at 0x4011a0
int sub_4011a0()
{
 return 0;
}


// Function: sub_4011aa at 0x4011aa
int sub_4011aa()
{
 sub_4011b0();
 return 0;
}


// Function: sub_4011b0 at 0x4011b0
typedef struct struct_0 {
 char padding_0[44];
 unsigned int field_2c;
} struct_0;

int sub_4011b0()
{
 struct_0 *v1; // ebx

 /* goto v1->field_2c; - invalid jump table removed */
 return 0;
}


// Function: sub_4011ba at 0x4011ba
int sub_4011ba()
{
 sub_4011c0(0);
 return 0;
}


// Function: sub_4011c0 at 0x4011c0
unsigned int sub_4011c0(void *ptr)
{
 return 0;
}


// Function: sub_4011ca at 0x4011ca
int sub_4011ca()
{
 sub_4011d0(0);
 return 0;
}


// Function: sub_4011d0 at 0x4011d0
int sub_4011d0(int flush)
{
 return 0;
}

// Function: sub_4011da at 0x4011da
int sub_4011da()
{
 sub_4011e0(1, "");
 return 0;
}


// Function: sub_4011e0 at 0x4011e0
int sub_4011e0(int stream, const char *fmt, ...)
{
 return 0;
}


// Function: sub_4011ea at 0x4011ea
int sub_4011ea()
{
 sub_4011f0(1, "");
 return 0;
}


// Function: sub_4011f0 at 0x4011f0
int sub_4011f0(int stream, const char *fmt, ...)
{
 return 0;
}


// Function: sub_4011fa at 0x4011fa
int sub_4011fa()
{
 sub_401200();
 return 0;
}


// Function: sub_401200 at 0x401200
int sub_401200()
{
 return 0;
}


// Function: sub_40120a at 0x40120a
void sub_40120a()
{
 main();
}


// Function: main at 0x401210
int main()
{
 char v0; // [bp+0x0]

 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_401232 at 0x401232
void sub_401232()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40126c at 0x40126c
void sub_40126c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401270
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401274 at 0x401274
void sub_401274()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

typedef struct struct_1_deregister_tm_clones {
 unsigned int field_0;
} struct_1_deregister_tm_clones;

void deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return;
}


// Function: sub_4012b3 at 0x4012b3
void sub_4012b3()
{
}


// Function: sub_4012b9 at 0x4012b9
void sub_4012b9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1_register_tm_clones {
 char padding_0[200];
} struct_1_register_tm_clones;

int register_tm_clones()
{
 struct struct_1_register_tm_clones *v2; // edx
 struct struct_1_register_tm_clones *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 (void)0;
 v3 = (struct struct_1_register_tm_clones*)((char*)&v2->padding_0[19683]);
 v0 = v4;
 if (!0)
 {
 return 0;
 }
 else if (*((int *)&v3->padding_0[84]))
 {
 int (*func)(void *, int) = (int (*)(void *, int))*((int)*)&v3->padding_0[84]);
 return func(&v3->padding_0[108], ((unsigned long)&v3->padding_0[108] - (unsigned long)&v3->padding_0[108] >> 31) + ((unsigned long)&v3->padding_0[108] - (unsigned long)&v3->padding_0[108] >> 2) >> 1);
 }
 else
 {
 return ((unsigned long)&v3->padding_0[108] - (unsigned long)&v3->padding_0[108] >> 31) + ((unsigned long)&v3->padding_0[108] - (unsigned long)&v3->padding_0[108] >> 2) >> 1;
 }
}


// Function: sub_401307 at 0x401307
void sub_401307()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

typedef struct struct_0_do_global_dtors_aux {
 char padding_0[220];
} struct_0_do_global_dtors_aux;

void __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0_do_global_dtors_aux *v6; // edi
 struct_0_do_global_dtors_aux *ptr; // edi
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

 *((int *)&v2) = __x86_get_pc_thunk_di();
 ptr = (struct_0_do_global_dtors_aux*)((char*)v6 + 19595);
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[108])
 return;
 if (*((int *)&ptr->padding_0[72]))
 {
 int (*func)(int) = (int (*)(int))(&ptr->padding_0[92]);
 if (func)
 func(*((int *)&ptr->padding_0[92]));
 }
 v10 = (struct_0 *)&ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[112]);
 i = ((unsigned long)&ptr->padding_0[220] - (unsigned long)v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[112]) = v13;
 ((void (*)())*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[112]);
 } while (*((int *)&ptr->padding_0[112]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[108] = 1;
 return;
}


// Function: sub_40139a at 0x40139a
void sub_40139a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4013a9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4013ad
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: double_value at 0x4013b1
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x4013bf
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x4013d0
unsigned int local_array(unsigned int a0)
{
 unsigned int v2; // edx
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int idx; // eax
 unsigned int v7; // eax
 unsigned long v8; // [bp-0x38]
 char v0; // [bp-0x24]
 unsigned int v1; // [bp-0x10]

 v2 = 0;
 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 idx = 0;
 do
 {
 (&v8)[idx] = v2;
 idx += 1;
 v2 += a0;
 } while (idx != 10);
 v7 = *((int *)&v0);
 if (v1 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: local_struct at 0x40140a
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x401417
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x40142e
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x40143e
int large_stack_frame()
{
 unsigned long v3; // ldt
 unsigned long v4; // gdt
 unsigned short v5; // gs
 unsigned int i; // eax
 unsigned int v7; // eax
 unsigned long v8; // [bp-0x810]
 char v0; // [bp-0x410]
 unsigned int v1; // [bp-0x10]

 v1 = *((int *)_ccall(v3, v4, (unsigned int)v5, 20));
 i = 0;
 do
 {
 *((char *)&v8 + i) = i;
 i += 1;
 } while (i != 0x800);
 v7 = v0;
 if (v1 != *((int *)_ccall(v3, v4, (unsigned int)v5, 20)))
 v7 = __stack_chk_fail_local();
 return v7;
}


// Function: vla_stack at 0x40147f
extern char g_401507;

unsigned int vla_stack(unsigned int i)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v5; // edx
 unsigned int v6; // ecx
 unsigned int result; // edx
 unsigned int ptr; // ecx
 unsigned int idx; // edx
 unsigned long v10; // [bp-0x101c]
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]

 /* vvar removed */
 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 v5 = 4294967295;
 if (i - 1 <= 999)
 {
 v6 = i * 4 + 15;
 while (&v10 != (char *)((unsigned long)(&v0) - (v6 & 0xfffff000)))
 ;
 result = (unsigned int)((v6 & 0xfffffff0) & 4095);
 /* vvar removed */
 if (result)
 *((int *)(((char *)&v10 - result) + result - 4)) = *((int *)(((char *)&v10 - result) + result - 4));
 ptr = (char *)&v10 - result;
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 2;
 idx += 1;
 } while (i != idx);
 v5 = *((int *)(ptr + (i >> 1) * 4));
 }
 if (v1 != *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 {
 *((char **)(((char *)&v10 - result) - 4)) = &g_401507;
 __stack_chk_fail_local();
 }
 return v5;
}


// Function: alloca_usage at 0x40150e
extern char g_401594;

unsigned int alloca_usage(unsigned int i)
{
 unsigned long v2; // ldt
 unsigned long v3; // gdt
 unsigned short v4; // gs
 unsigned int v5; // edx
 unsigned int v6; // ecx
 unsigned int result; // edx
 unsigned int idx; // edx
 unsigned int ptr; // ecx
 unsigned long v10; // [bp-0x101c]
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x10]

 /* vvar removed */
 v1 = *((int *)_ccall(v2, v3, (unsigned int)v4, 20));
 v5 = 4294967295;
 if (i > 0)
 {
 v6 = i * 4 + 27;
 while (&v10 != &(&v0)[-1 * (v6 & 0xfffff000)])
 ;
 result = v6 & 0xfffffff0 & 4095;
 /* vvar removed */
 if (result)
 *((int *)(((char *)&v10 - result) + result - 4)) = *((int *)(((char *)&v10 - result) + result - 4));
 idx = 0;
 ptr = (char *)(((unsigned int)((char *)&v10 - result) + 15) & 0xfffffff0);
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 idx += 1;
 } while (i != idx);
 v5 = *((int *)(ptr + (i >> 1) * 4));
 }
 if (v1 != *((int *)_ccall(v2, v3, (unsigned int)v4, 20)))
 {
 *((char **)(((char *)&v10 - result) - 4)) = &g_401594;
 __stack_chk_fail_local();
 }
 return v5;
}


// Function: stack_alias at 0x40159b
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x4015a5
extern unsigned int g_403008;

int test_stack_memory()
{
 (void)&g_403008;
 sub_4011e0(1, "MEM-L1-01 (local_vars): %d\n", 20);
 sub_4011e0(1, "MEM-L1-02 (local_array): %d\n", local_array(2));
 sub_4011e0(1, "MEM-L1-03 (local_struct): %d\n", 15);
 sub_4011e0(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 sub_4011e0(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 sub_4011e0(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 sub_4011e0(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10));
 sub_4011e0(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 sub_4011e0(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return 0;
}


// Function: heap_basic at 0x40169f
unsigned int heap_basic(unsigned int a0)
{
 unsigned int ptr; // ecx
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x20]

 ptr = sub_4011b0(a0 * 4);
 if (ptr == 0)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 2;
 }
 v0 = *((int *)(ptr + (a0 / 2) * 4));
 sub_401150(ptr);
 return v0;
}


// Function: heap_calloc at 0x40170b
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int ptr; // eax
 unsigned int idx; // edx
 unsigned int v2; // edi

 ptr = sub_401200(a0, 4);
 if (ptr == 0)
 return 4294967295;
 idx = 0;
 for (v2 = 0; idx < a0; idx += 1)
 {
 v2 += *((int *)(ptr + idx * 4));
 }
 sub_401150(ptr);
 return v2;
}


// Function: heap_realloc at 0x40175c
typedef struct struct_0_heap_realloc {
 char padding_0[8];
 unsigned int field_8;
} struct_0_heap_realloc;

unsigned int heap_realloc()
{
 unsigned int *ptr; // esi
 struct_0_heap_realloc *result; // eax
 unsigned int v0; // [bp-0x10]

 ptr = sub_4011b0(20);
 if (!ptr)
 return 4294967295;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 result = sub_4011a0(ptr, 40, 4294967295, 4294967295);
 if (!result)
 {
 sub_401150(ptr);
 return 4294967294;
 }
 v0 = (result->field_8 == 3 ? 50 : 4294967293);
 sub_401150(result);
 return v0;
}


// Function: heap_array at 0x4017f8
unsigned int heap_array(unsigned int a0)
{
 unsigned int ptr; // ecx
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x20]

 ptr = sub_4011b0(a0 * 4);
 if (ptr == 0)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx * 3;
 }
 v0 = *((int *)(ptr + (a0 / 2) * 4));
 sub_401150(ptr);
 return v0;
}


// Function: heap_struct at 0x401864
unsigned int heap_struct(unsigned int a0)
{
 unsigned int result; // eax

 result = sub_4011b0(8);
 if (result == 0)
 return 4294967295;
 sub_401150(result);
 return a0 * 3;
}


// Function: heap_nested at 0x4018a5
typedef struct struct_0_heap_nested {
 unsigned int field_0;
 struct struct_1_heap_nested *field_4;
} struct_0_heap_nested;

typedef struct struct_2_heap_nested {
 unsigned int field_0;
 struct struct_3_heap_nested *field_4;
} struct_2_heap_nested;

typedef struct struct_1_heap_nested {
 unsigned int field_0;
 unsigned int field_4;
} struct_1_heap_nested;

typedef struct struct_3_heap_nested {
 unsigned int field_0;
 unsigned int field_4;
} struct_3_heap_nested;

unsigned int heap_nested(struct_2_heap_nested **addr)
{
 struct_0_heap_nested *ptr; // esi
 unsigned int *p; // eax

 ptr = sub_4011b0(8);
 *(addr) = ptr;
 if (ptr == 0)
 return 4294967295;
 ptr->field_0 = 10;
 p = sub_4011b0(8);
 ptr->field_4 = p;
 if (p != 0)
 {
 p[0] = 20;
 p[1] = 0;
 return 0;
 }
 sub_401150(ptr);
 return 4294967294;
}


// Function: linked_list_heap at 0x401917
typedef struct struct_0_linked_list {
 unsigned int field_0;
 struct struct_0_linked_list *field_4;
} struct_0_linked_list;

unsigned int linked_list_heap()
{
 struct_0_linked_list *p; // eax
 unsigned int v3; // edi
 struct_0_linked_list *result; // esi
 struct_0_linked_list *ptr3; // esi
 struct_0_linked_list *v6; // esi
 unsigned int cur; // eax
 struct_0_linked_list *ptr; // edx
 struct_0_linked_list *ptr4; // esi
 struct_0_linked_list *v11; // esi
 struct_0_linked_list *addr; // [bp-0x20]

 p = NULL;
 v3 = 0;
 result = NULL;
 while (true)
 {
 addr = p;
 p = sub_4011b0(8);
 if (!p)
 {
 while (true)
 {
 ptr3 = result;
 if (!ptr3)
 break;
 v6 = ptr3->field_4;
 sub_401150(ptr3);
 result = v6;
 }
 return 4294967295;
 }
 else
 {
 p->field_0 = v3;
 p->field_4 = 0;
 if (result)
 addr->field_4 = p;
 else
 result = p;
 v3 += 10;
 if (v3 == 50)
 {
 cur = 0;
 ptr = result;
 do
 {
 cur += ptr->field_0;
 ptr = ptr->field_4;
 } while (ptr->field_4);
 do
 {
 ptr4 = result;
 v11 = ptr4->field_4;
 sub_401150(ptr4);
 result = v11;
 } while (ptr4->field_4);
 return cur;
 }
 }
 }
}


// Function: create_tree_node at 0x4019b4
void create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // eax

 ptr = sub_4011b0(12);
 if (!ptr)
 return;
 ptr[1] = 0;
 ptr[2] = 0;
 ptr[0] = a0;
 return;
}


// Function: tree_heap_traversal at 0x4019f0
typedef struct struct_0_tree_traversal {
 unsigned int field_0;
 struct struct_1_tree_traversal *field_4;
 struct struct_2_tree_traversal *field_8;
} struct_0_tree_traversal;

typedef struct struct_1_tree_traversal {
 unsigned int field_0;
} struct_1_tree_traversal;

typedef struct struct_2_tree_traversal {
 unsigned int field_0;
} struct_2_tree_traversal;

unsigned int tree_heap_traversal()
{
 struct_0_tree_traversal *ptr; // esi
 unsigned int *addr; // eax
 unsigned int *p; // edx
 unsigned int v0; // [bp-0x10]

 ptr = (unsigned int)create_tree_node(10);
 if (ptr == 0)
 return 4294967295;
 ptr->field_4 = (unsigned int)create_tree_node(20);
 addr = (unsigned int)create_tree_node(30);
 p = ptr->field_4;
 ptr->field_8 = addr;
 if (p != 0)
 {
 if (addr == 0)
 {
 sub_401150(p);
 }
 else
 {
 v0 = *(p) + ptr->field_0 + *(addr);
 sub_401150(p);
 sub_401150(ptr->field_8);
 sub_401150(ptr);
 return v0;
 }
 }
 if (ptr->field_8 != 0)
 sub_401150(ptr->field_8);
 sub_401150(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x401aac
unsigned int memory_leak(unsigned int a0)
{
 unsigned int ptr; // ecx
 unsigned int idx; // eax
 unsigned int v0; // [bp-0x20]

 ptr = sub_4011b0(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 }
 v0 = *((int *)(ptr + (a0 / 2) * 4));
 sub_401150(ptr);
 return v0;
}


// Function: dangling_pointer at 0x401b01
unsigned int dangling_pointer()
{
 unsigned int *result; // esi

 result = sub_4011b0(4);
 if (result == 0)
 return 4294967295;
 sub_4011e0(1, "value before free: %d\n", 42, 4294967295);
 *(result) = 42;
 sub_401150(result);
 return 42;
}


// Function: double_free at 0x401b50
unsigned int double_free(unsigned int *a0)
{
 unsigned int result; // esi

 if (a0 != 0)
 return *(a0);
 result = sub_4011b0(4);
 if (result == 0)
 return 4294967295;
 sub_401150(result);
 sub_401150(result);
 return 4294967294;
}


// Function: heap_overflow at 0x401ba5
unsigned int heap_overflow()
{
 unsigned int *ptr; // eax
 unsigned int idx; // edx

 ptr = sub_4011b0(40);
 if (ptr == 0)
 return 4294967295;
 idx = 0;
 do
 {
 ptr[idx] = idx * 100;
 idx += 1;
 } while (idx != 11);
 sub_401150(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x401bf2
typedef struct struct_0_test_heap {
 char padding_0[4];
 unsigned int field_4;
} struct_0_test_heap;

extern unsigned int g_403151;
extern unsigned int g_4032a9;
extern unsigned int g_4032b9;
extern unsigned int g_4032de;
extern unsigned int g_40331f;

void test_heap_memory()
{
 unsigned long v4; // ldt
 unsigned long v5; // gdt
 unsigned int v14; // ecx
 unsigned int flag1; // eax
 unsigned int v19; // edx
 unsigned int v21; // eax
 unsigned int v22; // eax
 unsigned int v23; // eax
 unsigned short v6; // gs
 struct_0_test_heap *result; // [bp-0x18]
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x10]

 v2 = 0;
 sub_4011c0(&g_403151);
 sub_4011e0(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 sub_4011e0(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));
 sub_4011e0(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 sub_4011e0(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 sub_4011e0(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));
 result = NULL;
 sub_4011e0(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result));
 if (result)
 {
 sub_401150(result->field_4);
 sub_401150(result);
 }
 sub_4011e0(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 sub_4011e0(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 sub_4011e0(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));
 sub_4011e0(1, "HEAP-L3-04 (dangling_pointer): %d\n", dangling_pointer());
 __stack_chk_fail_local();
return;
}


// Function: global_var_access at 0x401de4
typedef struct struct_0_global_var_access {
 char padding_0[16951];
 unsigned int field_4237;
} struct_0_global_var_access;

int global_var_access()
{
 struct_0_global_var_access *v1; // edx
 struct_0_global_var_access *ptr; // edx
 unsigned int v3; // eax

 __x86_get_pc_thunk_dx();
 ptr = &v1->padding_0[16827];
 v3 = *((int *)&ptr->padding_0[124]);
 *((unsigned int *)&ptr->padding_0[124]) = v3 + 1;
 return v3 + 1;
}


// Function: global_var_read at 0x401e01
unsigned int global_var_read()
{
 return 0;
}


// Function: global_array_access at 0x401e18
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // ecx

 __x86_get_pc_thunk_cx();
 if (a0 > 9)
 return 4294967295;
 return *((int *)(v0 + 16775 + a0 * 4 - 10536));
}


// Function: static_local at 0x401e3e
typedef struct struct_0_static_local {
 char padding_0[16853];
 unsigned int field_41d5;
} struct_0_static_local;

unsigned int static_local(unsigned int a0)
{
 struct_0_static_local *v0; // edx
 struct_0_static_local *ptr; // edx
 unsigned int v2; // eax

 __x86_get_pc_thunk_dx();
 ptr = (struct_0_static_local*)((char*)v0 + 16737);
 v2 = 0;
 if (!a0)
 v2 = *((int *)&ptr->padding_0[116]) + 1;
 *((unsigned int *)&ptr->padding_0[116]) = v2;
 return v2;
}


// Function: call_static_func at 0x401e67
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x401e76
int access_extern_global()
{
 return 100;
}


// Function: call_extern_func at 0x401e90
unsigned int call_extern_func()
{
 return extern_function(5);
}


// Function: read_const_data at 0x401eb2
typedef struct struct_1 {
 char padding_0[16721];
 struct struct_0_read_const *field_4151;
} struct_1;

typedef struct struct_0_read_const {
 char padding_0[4];
 char field_4;
} struct_0_read_const;

int read_const_data()
{
 struct_1 *v1; // eax
 unsigned int v2;

 v2 = __x86_get_pc_thunk_cx();
 return 42;
}


// Function: access_bss_var at 0x401ece
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401ed5
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401edc
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401ee6
typedef struct struct_0_set_file_static {
 char padding_0[16665];
 unsigned int field_4119;
} struct_0_set_file_static;

struct_0_set_file_static * set_file_static(unsigned int a0)
{
 return (struct_0_set_file_static *)0;
}


// Function: get_file_static at 0x401f02
int get_file_static()
{
 return 0;
}


// Function: set_global_callback at 0x401f17
typedef struct struct_0_set_global_callback {
 char padding_0[16640];
 unsigned int field_4100;
} struct_0_set_global_callback;

struct_0_set_global_callback * set_global_callback(unsigned int a0)
{
 return (struct_0_set_global_callback *)0;
}


// Function: call_global_callback at 0x401f33
unsigned int call_global_callback(unsigned int a0)
{
 return a0 * 2;
}


// Function: global_heap_store at 0x401f5c
unsigned int global_heap_store(unsigned int *ptr)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (ptr)
 v0 = *(ptr);
 return v0;
}


// Function: static_complex_init at 0x401f71
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401f7b
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401f89
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x401f93
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int g_40332a;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

int test_static_global()
{
 sub_4011c0(&g_40332a);
 sub_4011e0(1, "STM-L1-01 (global_var_access): %d\n", global_var_access());
 sub_4011e0(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 sub_4011e0(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 sub_4011e0(1, "STM-L1-03 (static_local): %d\n", 1);
 counter_1 = counter_1 + 1;
 sub_4011e0(1, "STM-L1-03 (static_local): %d\n", counter_1);
 sub_4011e0(1, "STM-L1-04 (call_static_func): %d\n", 11);
 sub_4011e0(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 sub_4011e0(1, "STM-L2-02 (call_extern_func): %d\n", (unsigned int)call_extern_func());
 sub_4011e0(1, "STM-L2-03 (read_const_data): %d\n", read_const_data());
 sub_4011e0(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 sub_4011e0(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 sub_4011e0(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access());
 file_scope_static = 50;
 sub_4011e0(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 sub_4011e0(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));
 sub_4011e0(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 sub_4011e0(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init());
 sub_4011e0(1, "STM-L3-01 (tls_access): %d\n", 20);
 return sub_4011e0(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: memop_memset at 0x40216c
unsigned int memop_memset(char *a0, unsigned int a1, char a2)
{
 char *result; // edx
 char *cur; // edi

 result = a0;
 if (result && a1)
 {
 for (cur = result; a1; cur += 1)
 {
 a1 -= 1;
 *(cur) = a2;
 }
 return *(result);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x402194
unsigned int memop_memcpy(char *a0, char *a1, unsigned int a2)
{
 unsigned int v0; // edx
 char *flag1; // eax
 char *i; // esi
 char *cur; // edi
 unsigned int result; // ecx

 v0 = a2;
 flag1 = a0;
 i = a1;
 if (v0 && i && flag1)
 {
 cur = flag1;
 for (result = v0; result; i += 1)
 {
 result -= 1;
 *(cur) = *(i);
 cur += 1;
 }
 return *((int *)&flag1[4 + (v0 & 0xfffffffc)]);
 }
 return 4294967295;
}


// Function: memop_memmove at 0x4021d0
typedef struct struct_0_memmove {
 char padding_0[1];
 char field_1;
} struct_0_memmove;

unsigned int memop_memmove(struct_0_memmove *a0, unsigned int a1)
{
 unsigned int v0; // edx

 if (a0 && a1 > 1)
 {
 sub_401140((char *)&a0->field_1, (char *)a0, a1 - 1, v0);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x402213
unsigned int memop_memcmp(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v1; // ecx
 unsigned int v2; // edx
 char v0; // [bp-0xd]

 v0 = !a1;
 if (a2 && !v0 && a0)
 {
 v2 = sub_401160(a0, a1, a2, v1 & 0xffffff00 | !a2 | v0);
 if (v2 > 0)
 return 1;
 return -(_ccall(5, 15, v2, 0, 0) & 255);
 }
 return 0;
}


// Function: memop_bzero at 0x402271
unsigned int memop_bzero(char *a0, unsigned int a1)
{
 char *result; // edx
 char *cur; // edi

 result = a0;
 if (!result)
 return 4294967295;
 for (cur = result; a1; cur += 1)
 {
 a1 -= 1;
 *(cur) = 0;
 }
 return *(result);
}


// Function: memop_bcopy at 0x402292
unsigned int memop_bcopy(unsigned int a0, char *a1, unsigned int a2)
{
 unsigned int v0; // edx

 if (a2 && a1 && a0)
 {
 sub_401140(a1, a0, a2, v0 & 0xffffff00 | !a2 | !a1);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x4022e1
typedef struct struct_0_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_0_unaligned;

unsigned int memop_unaligned_access(struct_0_unaligned *ptr)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (ptr)
 v0 = *((int *)&(&ptr->padding_0)[1]);
 return v0;
}


// Function: memop_memory_barrier at 0x4022f7
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v1; // eax

 v1 = 4294967295;
 if (ptr)
 {
 __asm__ __volatile__ ("mfence" ::: "memory");
 v1 = *(ptr) * 2;
 }
 return v1;
}


// Function: test_memory_op_functions at 0x402315
extern unsigned int g_40358c;

int test_memory_op_functions()
{
 char v13[256];
 char v7[20] = "Test data";
 char v8[23];
 char v11[10];
 char v12;
 unsigned int v9;
 unsigned int result;
 unsigned int v0[1];
 int v30, v31;
 unsigned int flag1, flag2, v2, v3, v5, v6;

 sub_4011e0(1, "MEMOP-L2-01: %d\n", memop_memset(&v13, 10, 65));
 sub_4011e0(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v8, &v7, 20));
 sub_4011e0(1, "MEMOP-L2-03: %c\n", v12);
 flag1 = 1;
 v2 = 2;
 v3 = 3;
 flag2 = 1;
 v5 = 2;
 v6 = 4;
 v30 = 0;
 v31 = (v30 > 0) ? 1 : 0;
 sub_4011e0(1, "MEMOP-L2-04: %d\n", v31);
 sub_4011e0(1, "MEMOP-L2-05: %d\n", memop_bzero(&v11, 10));
 v9 = 67305985;
 result = 0;
 sub_4011e0(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v9, &result, 4));
 sub_4011e0(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v0[0] = 5;
 sub_4011e0(1, "MEMOP-L3-02: %d\n", memop_memory_barrier((unsigned int *)v0));
 return 0;
}


// Function: __x86.get_pc_thunk_ax at 0x402523
unsigned int __x86_get_pc_thunk_ax(void)
{
 return 0;
}


// Function: __x8686.get_pc_thunk_cx at 0x402527
unsigned int __x86_get_pc_thunk_cx()
{
 return 0;
}


// Function: extern_function at 0x40252b
extern unsigned int extern_function(unsigned int a0);


// Function: sub_402538 at 0x402538
int sub_402538()
{
 __stack_chk_fail_local();
 return 0;
}


// Function: __stack_chk_fail_local at 0x402540
void __stack_chk_fail_local()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4];
 __asm__ volatile ("int $0x03");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */




// Function: sub_4025a2 at 0x4025a2
void sub_4025a2()
{
}



/* CRT stub function _fini removed by preprocessor */


