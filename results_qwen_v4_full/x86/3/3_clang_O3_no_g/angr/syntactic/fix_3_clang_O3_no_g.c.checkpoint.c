// Angr Decompilation of 3_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdatomic.h>

/* CRT stub function _init removed by preprocessor */

/* CRT stub function implementations */
static void frame_dummy(void) { }
static void deregister_tm_clones(void) { }
static unsigned int register_tm_clones(void) { return 0; }
static unsigned int __do_global_ctors_aux(void) { return 0; }

/* Structure definitions - consolidated at top */
typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_1;
 struct struct_0 *field_4;
 char padding_0[256];
 char field_4e37[100];
 char padding_4dd7[256];
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 unsigned int field_4;
} struct_3;

/* External variable declarations */
extern unsigned int global_counter;
extern unsigned int static_local_counter;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int global_func_ptr;
extern unsigned int global_heap_ptr;
extern char g_4035c1[];
extern char g_40326d[];
extern char g_40327d[];
extern char g_4032a2[];
extern char g_4032e3[];
extern char g_4035df[];
extern char g_4035fd[];
extern char g_403621[];
extern int _GLOBAL_OFFSET_TABLE_[];
extern struct_0 *const_string;

/* Function declarations */
static void frame_dummy(void);
static void deregister_tm_clones(void);
static unsigned int register_tm_clones(void);
static unsigned int __do_global_ctors_aux(void);
unsigned int *__do_global_dtors_aux(void);
unsigned int double_value(unsigned int a0);
int sub_401030(void);
int sub_401130(int a0);
void sub_401136(void);
void sub_40116b(void);
void sub_40116c(void);
void __x86_get_pc_thunk_bx(void);
void sub_401174(void);
void sub_4011b3(void);
void sub_4011b9(void);
void sub_401207(void);
void sub_40129a(void);
struct_0 *__x86_get_pc_thunk_dx(void);
unsigned int *__x86_get_pc_thunk_di(int a0, char *a1);
void sub_4012b1(unsigned int a0);
int local_vars(unsigned int a0);
void sub_4012ca(unsigned int a0);
unsigned int local_array(unsigned int a0);
void sub_4012d8(unsigned int a0);
unsigned int local_struct(unsigned int a0);
void sub_4012e8(unsigned int a0);
unsigned int address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
void sub_401309(void);
int large_stack_frame(void);
unsigned int vla_stack(unsigned int a0);
unsigned int alloca_usage(unsigned int a0);
void sub_4014cc(void);
unsigned int stack_alias(void);
int test_stack_memory(void);
int sub_401631(void);
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned int heap_nested(struct_0 **ptr3);
unsigned int linked_list_heap(void);
void sub_401ac3(void);
void sub_401ae3(void);
void sub_401b03(void);

unsigned int *create_tree_node(unsigned int a0);
unsigned int tree_heap_traversal(void);
unsigned int memory_leak(unsigned int a0);
unsigned int dangling_pointer(void);
unsigned int double_free(unsigned int *a0);
unsigned int heap_overflow(void);
unsigned int test_heap_memory(void);
void sub_401f74(void);
unsigned int global_var_access(void);
unsigned int global_var_read(void);
unsigned int global_array_access(unsigned int a0);
unsigned int static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global(void);
void call_extern_func(void);
int read_const_data(void);
unsigned int access_bss_var(void);
unsigned int access_bss_buffer(void);
unsigned int global_struct_access(void);
int set_file_static(unsigned int a0);
int get_file_static(void);
int set_global_callback(unsigned int a0);
unsigned int call_global_callback(unsigned int a0);
unsigned int global_heap_store(unsigned int *a0);
unsigned int static_complex_init(void);
unsigned int tls_access(unsigned int a0);
unsigned int init_order_test(void);
unsigned int test_static_global(void);
void sub_4023df(unsigned int a0);
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2);
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n);
unsigned int memop_memmove(void *a0, void *a1, unsigned int n);
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2);
unsigned int memop_bzero(char *a0, unsigned int n);
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n);
unsigned int memop_unaligned_access(struct_0 *a0);
unsigned int memop_memory_barrier(unsigned int *a0);
unsigned int test_memory_op_functions(void);
int sub_402712(void);
unsigned int main(void);
void sub_4027a2(void);

extern void (*g_405ff4)(void);


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40116b at 0x40116b
void sub_40116b()
{
}


// Function: sub_40116c at 0x40116c
void sub_40116c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401170
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401174 at 0x401174
void sub_401174()
{
 deregister_tm_clones();
 return;
}



// Function: sub_4011b3 at 0x4011b3
void sub_4011b3()
{
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 register_tm_clones();
 return;
}






// Function: sub_401207 at 0x401207
void sub_401207()
{
 __do_global_dtors_aux();
 return;
}



// Function: __do_global_dtors_aux at 0x401210
unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 char *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = (char *)&v6->padding_4dd7[11];
 v1 = v8;
 v0 = v9;
 if (ptr[92])
 return v5;
 if (*((int *)&ptr[16]))
 sub_401130(*((int *)&ptr[76]));
 v10 = (struct_0 *)&ptr[236];
 v11 = *((int *)&ptr[96]);
 i = ((char *)&v10->padding_0[232] - ptr >> 2) - 1;
 if (*((int *)&ptr[96]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr[96]) = v13;
  ((void(*)())(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr[96]);
 } while (*((int *)&ptr[96]) < i);
 }
 deregister_tm_clones();
 ptr[92] = 1;
 return v5;
}


// Function: sub_40129a at 0x40129a
void sub_40129a()
{
 frame_dummy();
 return;
}



// Function: __x86_get_pc_thunk_dx at 0x4012a9
struct_0 *__x86_get_pc_thunk_dx()
{
 struct_0 *v0;
 return v0;
}


// Function: __x86_get_pc_thunk_di at 0x4012ad
unsigned int *__x86_get_pc_thunk_di(int a0, char *a1)
{
 unsigned int *v0; // eax

 return v0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned int a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x4012c0
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_4012ca at 0x4012ca
void sub_4012ca(unsigned int a0)
{
 local_array(a0);
 return;
}


// Function: local_array at 0x4012d0
unsigned int local_array(unsigned int a0)
{
 return a0 * 5;
}


// Function: sub_4012d8 at 0x4012d8
void sub_4012d8(unsigned int a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x4012e0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_4012e8 at 0x4012e8
void sub_4012e8(unsigned int a0)
{
 unsigned int val = 0;
 address_of_local(&val);
 return;
}


// Function: address_of_local at 0x4012f0
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x401300
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401309 at 0x401309
void sub_401309()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x401310
int large_stack_frame()
{
 unsigned int i; // eax
 char v3; // [bp-0x800]
 char v4; // [bp-0x7ff]
 char v5; // [bp-0x7fe]
 char v6; // [bp-0x7fd]
 char v7; // [bp-0x7fc]
 char v8; // [bp-0x7fb]
 char v9; // [bp-0x7fa]
 unsigned long v10; // [bp-0x7f9]
 char v0; // [bp-0x400]

 i = 0;
 do
 {
 (&v3)[i] = i;
 (&v4)[i] = (char)i + 1;
 (&v5)[i] = (char)i + 2;
 (&v6)[i] = (char)i + 3;
 (&v7)[i] = (char)i + 4;
 (&v8)[i] = (char)i + 5;
 (&v9)[i] = (char)i + 6;
 *((char *)&v10 + i) = (char)i + 7;
 i += 8;
 } while (i != 0x800);
 return v0;
}





// Function: vla_stack at 0x401380
unsigned int vla_stack(unsigned int a0)
{
 char *ptr; // eax
 unsigned int result; // esi
 unsigned int i; // edi
 unsigned int index; // edx
 unsigned int idx; // edi
 char v0; // [bp-0x1c]
 char *v1; // [bp-0x14]

 if (a0 - 1001 < 4294966296)
 return 4294967295;
 v1 = &v0;
 ptr = &(&v0)[-1 * (a0 * 4 + 15 & 0xfffffff0)];
 result = a0 & 3;
 i = 0;
 if (a0 - 1 >= 3)
 {
 i = 0;
 index = 4;
 do
 {
 *((unsigned int *)&ptr[8 + 2 * index]) = index - 4;
 *((unsigned int *)&ptr[4 + 2 * index]) = index - 2;
 *((unsigned int *)&ptr[2 * index]) = index;
 *((unsigned int *)&ptr[4 + 2 * index]) = index + 2;
 i += 4;
 index += 8;
 } while ((a0 & 0xfffffffc) != i);
 }
 if (!result)
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
 idx = i * 2;
 do
 {
 *((unsigned int *)&ptr[2 * idx]) = idx;
 idx += 2;
 result -= 1;
 } while (result != 1);
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
}





// Function: alloca_usage at 0x401430
unsigned int alloca_usage(unsigned int a0)
{
 char *ptr; // ecx
 unsigned int result; // edx
 unsigned int index; // esi
 unsigned int v4; // ebx
 unsigned int v5; // esi
 unsigned int idx; // ebx
 char v0; // [bp-0x1c]

 if (a0 <= 0)
 return 4294967295;
 ptr = &(&v0)[-1 * (a0 * 4 + 15 & 0xfffffff0)];
 result = a0 & 3;
 index = 0;
 if (a0 - 1 >= 3)
 {
 index = 0;
 v4 = 6;
 do
 {
 *((unsigned int *)&ptr[4 * index]) = v4 - 6;
 *((unsigned int *)&ptr[4 + 4 * index]) = v4 - 3;
 *((unsigned int *)&ptr[8 + 4 * index]) = v4;
 *((unsigned int *)&ptr[12 + 4 * index]) = v4 + 3;
 index += 4;
 v4 += 12;
 } while ((a0 & 0xfffffffc) != index);
 }
 if (!result)
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
 v5 = index * 3;
 idx = 0;
 do
 {
 *((unsigned int *)&ptr[4 * idx + 4 * index]) = v5;
 idx += 1;
 v5 += 3;
 } while (result != idx);
 return *((int *)&ptr[2 * ((a0 >> 31) + a0 & 4294967294)]);
}


// Function: sub_4014cc at 0x4014cc
void sub_4014cc()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x4014d0
unsigned int stack_alias()
{
 return 20;
}


// Function: sub_4014d6 at 0x4014d6
int sub_4014d6()
{
 return test_stack_memory();
}


// Function: test_stack_memory at 0x4014e0
int test_stack_memory()
{
 unsigned int i; // eax
 unsigned int v0; // [bp-0x808]
 char v4; // [bp-0x804]
 char v5; // [bp-0x803]
 char v6; // [bp-0x802]
 char v7; // [bp-0x801]
 char v8; // [bp-0x800]
 char v9; // [bp-0x7ff]
 char v10; // [bp-0x7fe]
 unsigned long v11; // [bp-0x7fd]
 char v1; // [bp-0x404]

 puts(&g_4035c1);
 v0 = 20;
 printf("MEM-L1-01 (local_vars): %d\n", v0);
 v0 = 10;
 printf("MEM-L1-02 (local_array): %d\n", v0);
 v0 = 15;
 printf("MEM-L1-03 (local_struct): %d\n", v0);
 v0 = 42;
 printf("MEM-L1-04 (address_of_local): %d\n", v0);
 v0 = 2;
 printf("MEM-L1-05 (address_of_array): %d\n", v0);
 i = 0;
 do
 {
 (&v4)[i] = i;
 (&v5)[i] = (char)i + 1;
 (&v6)[i] = (char)i + 2;
 (&v7)[i] = (char)i + 3;
 (&v8)[i] = (char)i + 4;
 (&v9)[i] = (char)i + 5;
 (&v10)[i] = (char)i + 6;
 *((char *)&v11 + i) = (char)i + 7;
 i += 8;
 } while (i != 0x800);
 v0 = v1;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v0);
 v0 = 10;
 printf("MEM-L2-02 (vla_stack): %d\n", v0);
 v0 = 15;
 printf("MEM-L2-03 (alloca_usage): %d\n", v0);
 v0 = 20;
 return printf("MEM-L2-04 (stack_alias): %d\n", v0);
}


// Function: sub_401631 at 0x401631
int sub_401631()
{
 return heap_basic(10);
}


// Function: heap_basic at 0x401640
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // esi
 void* ptr; // eax
 unsigned int v2; // esi
 unsigned int result; // ecx
 unsigned int i; // edx
 unsigned int index; // ebp
 unsigned int idx; // edx

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 v2 = v0;
 if (v2 > 0)
 {
 result = v0 & 3;
 i = 0;
 if (v0 - 1 >= 3)
 {
 i = 0;
 index = 4;
 do
 {
 *((unsigned int *)(-8 + (char *)ptr + 2 * index)) = index - 4;
 *((unsigned int *)(-4 + (char *)ptr + 2 * index)) = index - 2;
 *((unsigned int *)((char *)ptr + 2 * index)) = index;
 *((unsigned int *)(4 + (char *)ptr + 2 * index)) = index + 2;
 i += 4;
 index += 8;
 } while ((a0 & 0xfffffffc) != i);
 }
 v2 = a0;
 if (result)
 {
 idx = i * 2;
 do
 {
 *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
 idx += 2;
 result -= 1;
 v2 = a0;
 } while (result != 1);
 }
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((v2 >> 31) + v2 & 4294967294)));
}





// Function: heap_calloc at 0x401700
unsigned int heap_calloc(unsigned int a0)
{
 void* ptr; // eax
 unsigned int v1; // esi
 unsigned int v2; // edi
 unsigned int result; // ecx
 unsigned int v4; // edx
 unsigned int i; // edx
 unsigned int idx; // edi

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (a0 >= 2)
 {
 v2 = a0 - 1;
 result = v2 & 7;
 if (a0 - 2 < 7)
 {
 v1 = 0;
 v4 = 1;
 if (result)
 goto LABEL_40178e;
 }
 else
 {
 v1 = 0;
 i = 0;
 do
 {
 v1 = v1 + *((int *)(4 + (char *)ptr + 4 * i)) + *((int *)(8 + (char *)ptr + 4 * i)) + *((int *)(12 + (char *)ptr + 4 * i)) + *((int *)(16 + (char *)ptr + 4 * i)) + *((int *)(20 + (char *)ptr + 4 * i)) + *((int *)(24 + (char *)ptr + 4 * i)) + *((int *)(28 + (char *)ptr + 4 * i)) + *((int *)(32 + (char *)ptr + 4 * i));
 i += 8;
 } while ((v2 & 0xfffffff8) != i);
 v4 = i + 1;
 if (result)
 {
LABEL_40178e:
 idx = 0;
 do
 {
 v1 += *((int *)((char *)ptr + 4 * v4 + 4 * idx));
 idx += 1;
 } while (result != idx);
 }
 }
 }
 free(ptr);
 return v1;
}





// Function: heap_realloc at 0x4017c0
unsigned int heap_realloc()
{
 unsigned int *ptr; // eax
 unsigned int *addr; // esi
 unsigned int *p; // eax
 unsigned int v4; // edi

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 addr = ptr;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 p = realloc(ptr, 40);
 if (p)
 {
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 v4 = (p[2] == 3 ? 50 : 4294967293);
 addr = p;
 }
 else
 {
 v4 = 4294967294;
 }
 free(addr);
 return v4;
}





// Function: heap_array at 0x401870
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // esi
 void* ptr; // eax
 unsigned int v2; // esi
 unsigned int result; // ecx
 unsigned int index; // edx
 unsigned int v5; // ebp
 unsigned int v6; // edx
 unsigned int idx; // ebp

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 v2 = v0;
 if (v2 > 0)
 {
 result = v0 & 3;
 index = 0;
 if (v0 - 1 >= 3)
 {
 index = 0;
 v5 = 6;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index)) = v5 - 6;
 *((unsigned int *)(4 + (char *)ptr + 4 * index)) = v5 - 3;
 *((unsigned int *)(8 + (char *)ptr + 4 * index)) = v5;
 *((unsigned int *)(12 + (char *)ptr + 4 * index)) = v5 + 3;
 index += 4;
 v5 += 12;
 } while ((a0 & 0xfffffffc) != index);
 }
 v2 = a0;
 if (result)
 {
 v6 = index * 3;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * index + 4 * idx)) = v6;
 idx += 1;
 v6 += 3;
 v2 = a0;
 } while (result != idx);
 }
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((v2 >> 31) + v2 & 4294967294)));
}





// Function: heap_struct at 0x401940
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}





// Function: heap_nested at 0x401950
unsigned int heap_nested(struct_0 **ptr3)
{
 struct_2 *addr; // eax
 struct_2 *ptr; // esi
 unsigned int *p; // eax

 addr = malloc(8);
 *(ptr3) = addr;
 if (!addr)
 return 4294967295;
 ptr = addr;
 addr->field_0 = 10;
 p = malloc(8);
 ptr->field_4 = p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x4019c0
unsigned int linked_list_heap()
{
 struct_0 *ptr12; // eax
 struct_0 *ptr5; // edi
 struct_0 *ptr9; // edi
 struct_0 *ptr8; // edi
 struct_0 *ptr7; // edi
 struct_0 *ptr6; // edi
 struct_0 *ptr; // eax
 struct_0 *ptr4; // eax
 struct_0 *ptr3; // eax
 struct_0 *ptr10; // ebp
 struct_0 *addr; // eax
 unsigned int v9; // esi
 struct_0 *p; // eax
 struct_0 *ptr11; // [bp-0x14]

 ptr12 = malloc(8);
 if (!ptr12)
 return 4294967295;
 ptr5 = ptr12;
 ptr12->field_0 = 0;
 ptr = malloc(8);
 if (!ptr)
 {
 free(ptr5);
 return 4294967295;
 }
 ptr->field_0 = 10;
 ptr->field_4 = NULL;
 ptr5->field_4 = ptr;
 ptr4 = malloc(8);
 if (ptr4)
 {
 ptr4->field_0 = 20;
 ptr4->field_4 = NULL;
 ptr11 = ptr4;
 ptr->field_4 = ptr4;
 ptr3 = malloc(8);
 if (ptr3)
 {
 ptr10 = ptr3;
 ptr3->field_0 = 30;
 ptr3->field_4 = NULL;
 ptr11->field_4 = ptr10;
 addr = malloc(8);
 if (addr)
 {
 addr->field_0 = 40;
 addr->field_4 = NULL;
 ptr10->field_4 = addr;
 v9 = 0;
 p = ptr5;
 do
 {
 v9 += p->field_0;
 p = p->field_4;
 } while (p->field_4);
 do
 {
 ptr9 = ptr5;
 free(ptr9);
 ptr5 = ptr9->field_4;
 } while (ptr9->field_4);
 return v9;
 }
 else
 {
 do
 {
 ptr8 = ptr5;
 free(ptr8);
 ptr5 = ptr8->field_4;
 } while (ptr8->field_4);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr7 = ptr5;
 free(ptr7);
 ptr5 = ptr7->field_4;
 } while (ptr7->field_4);
 return 4294967295;
 }
 }
 else
 {
 do
 {
 ptr6 = ptr5;
 free(ptr6);
 ptr5 = ptr6->field_4;
 } while (ptr6->field_4);
 return 4294967295;
 }
}


// Function: sub_401ac3 at 0x401ac3
void sub_401ac3()
{
}


// Function: sub_401ae3 at 0x401ae3
void sub_401ae3()
{
}


// Function: sub_401b03 at 0x401b03
void sub_401b03()
{
}


// Function: create_tree_node at 0x401b40
unsigned int *create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(12);
 if (!ptr)
 return ptr;
 ptr[0] = a0;
 ptr[1] = 0;
 ptr[2] = 0;
 return ptr;
}





// Function: tree_heap_traversal at 0x401b80
unsigned int tree_heap_traversal()
{
 return 60;
}





// Function: memory_leak at 0x401b90
unsigned int memory_leak(unsigned int a0)
{
 unsigned int ptr; // eax
 unsigned int result; // ecx
 unsigned int cur; // edx

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 <= 0)
 return *((int *)(ptr + ((a0 >> 31) + a0 & 4294967294) * 2));
 result = a0 & 7;
 cur = 0;
 if (a0 - 1 >= 7)
 {
 cur = 0;
 do
 {
 *((unsigned int *)(ptr + cur * 4)) = cur;
 *((unsigned int *)(ptr + cur * 4 + 4)) = cur + 1;
 *((unsigned int *)(ptr + cur * 4 + 8)) = cur + 2;
 *((unsigned int *)(ptr + cur * 4 + 12)) = cur + 3;
 *((unsigned int *)(ptr + cur * 4 + 16)) = cur + 4;
 *((unsigned int *)(ptr + cur * 4 + 20)) = cur + 5;
 *((unsigned int *)(ptr + cur * 4 + 24)) = cur + 6;
 *((unsigned int *)(ptr + cur * 4 + 28)) = cur + 7;
 cur += 8;
 } while (cur != (a0 & 0xfffffff8));
 }
 if (result)
 {
 do
 {
 *((unsigned int *)(ptr + cur * 4)) = cur;
 cur += 1;
 result -= 1;
 } while (result != 1);
 }
 return *((int *)(ptr + ((a0 >> 31) + a0 & 4294967294) * 2));
}





// Function: dangling_pointer at 0x401c50
unsigned int dangling_pointer()
{
 unsigned int *ptr; // eax
 unsigned int v0; // [bp-0x18]

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 v0 = 42;
 printf("value before free: %d\n", v0);
 free(ptr);
 return *(ptr);
}





// Function: double_free at 0x401cb0
unsigned int double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}





// Function: heap_overflow at 0x401cd0
unsigned int heap_overflow()
{
 return 0;
}


// Function: test_heap_memory at 0x401ce0
unsigned int test_heap_memory()
{
 unsigned int *ptr; // eax
 unsigned int *ptr4; // esi
 unsigned int *p; // eax
 struct_0 *ptr5; // eax
 struct_0 *addr; // esi
 unsigned int *ptr3; // eax
 unsigned int pid; // eax
 unsigned int v10; // eax
 char *v0; // [bp-0x1c]
 int v1; // [bp-0x10]

 puts(&g_4035df);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(10));
 ptr = malloc(20);
 if (ptr)
 {
 ptr4 = ptr;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 p = realloc(ptr, 40);
 if (p)
 {
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 ptr4 = p;
 }
 free(ptr4);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10));
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(10));
 ptr5 = malloc(8);
 if (ptr5)
 {
 addr = ptr5;
 ptr5->field_0 = 10;
 ptr3 = malloc(8);
 addr->field_4 = ptr3;
 if (ptr3)
 {
 ptr3[0] = 20;
 ptr3[1] = 0;
 }
 else
 {
 free(addr);
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", 0);
 free(addr->field_4);
 free(addr);
 }
 else
 {
 printf("HEAP-L2-06 (heap_nested): %d\n", 0);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(10));
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 dangling_pointer();
 printf("%s", g_40326d);
 exit(0); /* do not return */
 }
 else
 {
 waitpid(pid, &v1, 0);
 v10 = v1 & 127;
 if (!((char)v1 & 127))
 {
 v0 = g_40327d;
 }
 else if (v10 * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v0 = g_4032a2;
 }
 else
 {
 return v10;
 }
 return printf("%s", v0);
 }
}


// Function: sub_401f74 at 0x401f74
void sub_401f74()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x401f80
unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}





// Function: global_var_read at 0x401fa0
unsigned int global_var_read()
{
 return global_counter * 2;
}





// Function: global_array_access at 0x401fc0
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 9)
 v0 = _GLOBAL_OFFSET_TABLE_[10684 + 4 * a0];
 return v0;
}





// Function: static_local at 0x401ff0
unsigned int static_local(unsigned int a0)
{
 unsigned int v0; // edx

 v0 = static_local_counter + 1;
 if (a0)
 v0 = 0;
 static_local_counter = v0;
 return v0;
}





// Function: call_static_func at 0x402020
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}





// Function: access_extern_global at 0x402030
int access_extern_global()
{
 return extern_global_var + 100;
}





// Function: call_extern_func at 0x402050
void call_extern_func()
{
 double_value(5);
 return;
}





// Function: read_const_data at 0x402080
int read_const_data()
{
 return const_string->field_4 + 42;
}





// Function: access_bss_var at 0x4020a0
unsigned int access_bss_var()
{
 return 0;
}





// Function: access_bss_buffer at 0x4020b0
unsigned int access_bss_buffer()
{
 return 0;
}





// Function: global_struct_access at 0x4020c0
unsigned int global_struct_access()
{
 return 30;
}





// Function: set_file_static at 0x4020d0
int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return (int)&_GLOBAL_OFFSET_TABLE_;
}





// Function: get_file_static at 0x4020f0
int get_file_static()
{
 return file_scope_static;
}





// Function: set_global_callback at 0x402110
int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return (int)&_GLOBAL_OFFSET_TABLE_;
}





// Function: call_global_callback at 0x402130
unsigned int call_global_callback(unsigned int a0)
{
 if (!global_func_ptr)
 return 4294967295;
 return double_value(a0);
}





// Function: global_heap_store at 0x402170
unsigned int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}





// Function: static_complex_init at 0x4021a0
unsigned int static_complex_init()
{
 return 15;
}





// Function: tls_access at 0x4021b0
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}





// Function: init_order_test at 0x4021c0
unsigned int init_order_test()
{
 return 20;
}





// Function: test_static_global at 0x4021d0
unsigned int test_static_global()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 puts(&g_4035fd);
 global_counter = global_counter + 1;
 v0 = global_counter;
 printf("STM-L1-01 (global_var_access): %d\n", v0);
 v0 = global_counter * 2;
 printf("STM-L1-01 (global_var_read): %d\n", v0);
 v0 = 5;
 printf("STM-L1-02 (global_array_access): %d\n", global_array_access(v0));
 static_local_counter = 1;
 v0 = 1;
 printf("STM-L1-03 (static_local): %d\n", static_local(v0));
 static_local_counter = static_local_counter + 1;
 v0 = static_local_counter;
 printf("STM-L1-03 (static_local): %d\n", v0);
 v0 = 11;
 printf("STM-L1-04 (call_static_func): %d\n", call_static_func(v0));
 v0 = extern_global_var + 100;
 printf("STM-L2-01 (access_extern_global): %d\n", v0);
 v0 = double_value(5);
 printf("STM-L2-02 (call_extern_func): %d\n", v0);
 v0 = const_string->field_4 + 42;
 printf("STM-L2-03 (read_const_data): %d\n", v0);
 v0 = 0;
 printf("STM-L2-04 (access_bss_var): %d\n", v0);
 v0 = 0;
 printf("STM-L2-04 (access_bss_buffer): %d\n", v0);
 v0 = 30;
 printf("STM-L2-05 (global_struct_access): %d\n", v0);
 file_scope_static = 50;
 v0 = 50;
 printf("STM-L2-06 (file_static): %d\n", v0);
 v0 = 10;
 printf("STM-L2-07 (global_func_ptr): %d\n", v0);
 v1 = 100;
 global_heap_ptr = &v1;
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", v0);
 v0 = 15;
 printf("STM-L2-09 (static_complex_init): %d\n", v0);
 v0 = 20;
 printf("STM-L3-01 (tls_access): %d\n", tls_access(v0));
 v0 = 20;
 return printf("STM-L3-02 (init_order_test): %d\n", v0);
}


// Function: sub_4023df at 0x4023df
void sub_4023df(unsigned int a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x4023e0
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}





// Function: memop_memset at 0x4023f0
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 {
 return 4294967295;
 }
 else if (n)
 {
 memset(a0, a2, n);
 return *(a0);
 }
 else
 {
 return 4294967295;
 }
}





// Function: memop_memcpy at 0x402430
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memcpy(a0, a1, n);
 return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
 }
 else
 {
 return 4294967295;
 }
}





// Function: memop_memmove at 0x402480
unsigned int memop_memmove(void *a0, void *a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memmove(a0, a1, n);
 return *((int *)(-4 + (n & 0xfffffffc) + (char *)a0));
 }
 else
 {
 return 4294967295;
 }
}





// Function: memop_memcmp at 0x4024d0
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 {
 return 0;
 }
 else if (!a1)
 {
 return 0;
 }
 else if (a2)
 {
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -(v2) : 1);
 }
 else
 {
 return 0;
 }
}


// Function: memop_bzero at 0x402520
unsigned int memop_bzero(char *a0, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}





// Function: memop_bcopy at 0x402560
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 {
 return 4294967295;
 }
 else if (!a1)
 {
 return 4294967295;
 }
 else if (n)
 {
 memmove(a1, a0, n);
 return *(a1);
 }
 else
 {
 return 4294967295;
 }
}





// Function: memop_unaligned_access at 0x4025b0
unsigned int memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}





// Function: memop_memory_barrier at 0x4025d0
unsigned int memop_memory_barrier(unsigned int *a0)
{
 unsigned int v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 return *(a0) * 2;
}





// Function: test_memory_op_functions at 0x4025f0
unsigned int test_memory_op_functions()
{
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 char v2[1]; // [bp-0x10]
 char v3[3]; // [bp-0xf]
 char v4[4]; // [bp-0xc]
 unsigned short v5; // [bp-0x8]

 puts(&g_403621);
 printf("MEMOP-L2-01: %d\n", memop_memset(v2, 10, 65));
 printf("MEMOP-L2-02: %d\n", memop_memcpy(v3, v2, 4));
 strncpy(&v4, "oWor", 4);
 strncpy(&v2, "Hell", 4);
 v5 = 25708;
 strncpy(&v3, "HelloWorl", 9);
 printf("MEMOP-L2-03: %c\n", v3[0]);
 printf("MEMOP-L2-04: %d\n", memop_memmove(v3, v2, 10));
 printf("MEMOP-L2-05: %d\n", memop_memcmp(v2, v3, 4));
 printf("MEMOP-L2-06: %d\n", memop_bzero(v2, 4));
 printf("MEMOP-L3-01: 0x%x\n", memop_memory_barrier(&v1));
 v1 = 5;
 return printf("MEMOP-L3-02: %d\n", v1);
}


// Function: sub_402712 at 0x402712
int sub_402712()
{
 return main();
}


// Function: main at 0x402720
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}








// Function: sub_4027a2 at 0x4027a2
void sub_4027a2()
{
}

/* CRT stub function _fini removed by preprocessor */

/* External function declarations */
extern int waitpid(int pid, int *status, int options);
extern int fork(void);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern void exit(int status);

/* Define global variables */
unsigned int global_counter = 0;
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned int global_func_ptr = 0;
unsigned int global_heap_ptr = 0;
char g_4035c1[] = "=== Stack Memory Tests ===";
char g_40326d[] = "Child process completed\n";
char g_40327d[] = "Normal exit\n";
char g_4032a2[] = "Signaled exit\n";
char g_4032e3[] = "Error in fork/wait\n";
char g_4035df[] = "=== Heap Memory Tests ===";
char g_4035fd[] = "=== Static/Global Tests ===";
char g_403621[] = "=== Memory Operation Tests ===";
struct_0 _const_string_obj = {0};
struct_0 *const_string = &_const_string_obj;
struct_0 _ptr_obj = {0};
void (*g_405ff4)(void) = NULL;

