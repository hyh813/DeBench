// Angr Decompilation of 3_clang_O1_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdatomic.h>
#include <strings.h>

/* CRT stub function _init removed by preprocessor */

extern void *g_405ff4;
unsigned int global_counter;
unsigned int static_local_counter;
unsigned int extern_global_var;
unsigned int file_scope_static;
void *global_func_ptr;
void *global_heap_ptr;
char _GLOBAL_OFFSET_TABLE_[20000];

/* Forward declaration for struct_0 before use in ptr */
typedef struct {
 char padding_0[500];
 char padding_4dd7[500];
} struct_0;

struct_0 *ptr;

/* Global extern declarations */
extern char g_401563;
extern char g_401579;
extern char g_4035c1;
extern char g_40326d;
extern char g_40327d;
extern char g_4032a2;
extern char g_4032e3;
extern char g_4035df;
extern char g_4035fd;
extern char g_403621;
extern void *const_string;

/* Forward function declarations */
unsigned int __do_global_ctors_aux(void);
int __do_global_dtors_aux(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
unsigned int frame_dummy(void);
int local_vars(unsigned int a0);
unsigned int local_array(unsigned int a0);
unsigned int local_struct(unsigned int a0);
unsigned int address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
int large_stack_frame(void);
unsigned int vla_stack(unsigned int a0);
unsigned int alloca_usage(unsigned int i);
unsigned int stack_alias(void);
int test_stack_memory(void);
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int i);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned int i);
unsigned int heap_struct(unsigned int a0);
unsigned int heap_nested(struct_heap_nested_outer **addr);
unsigned int linked_list_heap(void);
unsigned int* create_tree_node(unsigned int a0);
unsigned int tree_heap_traversal(void);
unsigned int memory_leak(unsigned int i);
unsigned int dangling_pointer(void);
unsigned int double_free(unsigned int *a0);
unsigned int heap_overflow(void);
unsigned int test_heap_memory(void);
unsigned int global_var_access(void);
unsigned int global_var_read(void);
unsigned int global_array_access(unsigned int a0);
unsigned int static_local(unsigned int a0);
unsigned int call_static_func(unsigned int a0);
unsigned int access_extern_global(void);
void call_extern_func(void);
int read_const_data(void);
unsigned int access_bss_var(void);
unsigned int access_bss_buffer(void);
unsigned int global_struct_access(void);
unsigned int set_file_static(unsigned int a0);
unsigned int get_file_static(void);
unsigned int set_global_callback(unsigned int a0);
unsigned int call_global_callback(unsigned int a0);
unsigned int global_heap_store(unsigned int *a0);
unsigned int static_complex_init(void);
unsigned int tls_access(unsigned int a0);
unsigned int init_order_test(void);
unsigned int test_static_global(void);
unsigned int double_value(unsigned int a0);
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2);
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n);
unsigned int memop_memmove(void *a0, unsigned int a1);
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2);
unsigned int memop_bzero(char* a0, unsigned int n);
unsigned int memop_bcopy(void* a0, char* a1, unsigned int n);
unsigned int memop_unaligned_access(void *a0);
unsigned int memop_memory_barrier(unsigned int *a0);
unsigned int test_memory_op_functions(void);
unsigned int extern_function(unsigned int a0);
int main(void);

/* Unique struct definitions to avoid typedef conflicts */
/* struct_0 already defined above */

/* Used by __do_global_dtors_aux and __do_global_ctors_aux - CRT frame */
typedef struct {
 char padding_0[300];
} struct_crt_frame;

/* Used by register_tm_clones */
typedef struct {
 unsigned int field_0;
} struct_register_tm;

/* Used by test_stack_memory */
typedef struct {
 char padding_0[16];
 unsigned int field_10;
} struct_test_stack_memory;

/* Used by heap_nested */
typedef struct struct_heap_nested_inner {
 unsigned int field_0;
 unsigned int field_4;
} struct_heap_nested_inner;

typedef struct {
 unsigned int field_0;
 struct_heap_nested_inner *field_4;
} struct_heap_nested_outer;

/* Used by linked_list_heap */
typedef struct struct_linked_list_node {
 unsigned int field_0;
 struct struct_linked_list_node *field_4;
} struct_linked_list_node;

/* Used by tree_heap_traversal */
typedef struct {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
} struct_tree_child;

typedef struct {
 unsigned int field_0;
 struct_tree_child *field_4;
 struct_tree_child *field_8;
} struct_tree_node;

/* Used by test_heap_memory */
typedef struct {
 unsigned int field_0;
 unsigned int field_4;
} struct_heap_field;

typedef struct {
 unsigned int field_0;
 struct_heap_field *field_4;
} struct_heap_node;

/* Used by read_const_data and test_static_global */
typedef struct {
 char padding_0[4];
 char field_4;
} struct_const_data;

/* Used by call_global_callback */
typedef struct {
 unsigned int field_0;
} struct_func_wrapper;

/* Used by memop_memmove */
typedef struct {
 char padding_0[1];
 char field_1;
} struct_memmove_data;

/* Used by memop_unaligned_access */
typedef struct {
 char padding_0[1];
 unsigned int field_1;
} struct_unaligned_data;

int _init()
{
 if (g_405ff4)
 ((void(*)())g_405ff4)();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
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


// Function: __x86.get_pc_thunk_bx at 0x401170
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



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 return;
}

// Function: subr_4011b3 at 0x4011b3
void sub_4011b3()
{
}


// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 register_tm_clones();
 return;
}

/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401207 at 0x401207
void sub_401207()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

int __do_global_dtors_aux()
{
 return 0;
}


// Function: sub_40129a at 0x40129a
void sub_40129a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

unsigned int frame_dummy()
{
 return 0;
}

// Function: __x86.get_pc_thunk_dx at 0x4012a9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4012ad
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned int a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x4012c0
unsigned int local_vars(unsigned int a0)
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
 unsigned int v1; // ecx
 unsigned int idx; // edx
 unsigned long v3; // [bp-0x28]
 char v0; // [bp-0x14]

 v1 = 0;
 idx = 0;
 do
 {
 (&v3)[idx] = v1;
 idx += 1;
 v1 += a0;
 } while (idx != 10);
 return *((int *)&v0);
}


// Function: sub_4012f5 at 0x4012f5
void sub_4012f5(unsigned int a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x401300
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401308 at 0x401308
void sub_401308(unsigned int a0)
{
 unsigned int dummy = 0;
 address_of_local(&dummy);
 return;
}


// Function: address_of_local at 0x401310
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x401320
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_401329 at 0x401329
void sub_401329()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x401330
int large_stack_frame()
{
 unsigned int i; // eax
 unsigned long v3; // [bp-0x800]
 char v0; // [bp-0x400]

 i = 0;
 do
 {
 *((char *)&v3 + i) = i;
 i += 1;
 } while (i != 0x800);
 return v0;
}


// Function: sub_40135c at 0x40135c
void sub_40135c(unsigned int a0)
{
 vla_stack(a0);
 return;
}


// Function: vla_stack at 0x401360
unsigned int vla_stack(unsigned int a0)
{
 unsigned int v1; // ecx
 unsigned int idx; // esi
 unsigned int i; // edi
 char v0; // [bp-0xc]

 v1 = a0;
 if (v1 - 1001 < 4294966296)
 return 4294967295;
 if (v1 <= 0)
 return *((int *)&(&v0)[2 * ((v1 >> 31) + v1 & 4294967294) + -1 * (v1 * 4 + 15 & 0xfffffff0)]);
 idx = 0;
 i = v1;
 do
 {
 *((unsigned int *)&(&v0)[2 * idx + -1 * (v1 * 4 + 15 & 0xfffffff0)]) = idx;
 idx += 2;
 i -= 1;
 } while (i != 1);
 return *((int *)&(&v0)[2 * ((v1 >> 31) + v1 & 4294967294) + -1 * (v1 * 4 + 15 & 0xfffffff0)]);
}


// Function: sub_4013c1 at 0x4013c1
void sub_4013c1(unsigned int a0)
{
 alloca_usage(a0);
 return;
}


// Function: alloca_usage at 0x4013d0
unsigned int alloca_usage(unsigned int i)
{
 unsigned int v0; // edx
 unsigned int idx; // esi
 char vvar_24[1024]; // Stack allocation

 if (i <= 0)
 return 4294967295;
 v0 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&vvar_24 - (i * 4 + 15 & 0xfffffff0) + 4 * idx)) = v0;
 idx += 1;
 v0 += 3;
 } while (i != idx);
 return *((int *)((char *)&vvar_24 - (i * 4 + 15 & 0xfffffff0) + 2 * ((i >> 31) + i & 4294967294)));
}


// Function: sub_401417 at 0x401417
void sub_401417()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x401420
unsigned int stack_alias()
{
 return 20;
}


// Function: sub_401426 at 0x401426
int sub_401426()
{
 test_stack_memory();
 return;
}


// Function: test_stack_memory at 0x401430
int test_stack_memory(void)
{
 unsigned int v11; // ebx
 unsigned int idx; // eax
 unsigned int j; // eax
 unsigned int index; // ecx
 unsigned int l; // eax
 struct_0 *cur; // ecx
 unsigned int v0; // [bp-0x828]
 unsigned int v1; // [bp-0x824]
 unsigned int v2; // [bp-0x820]
 unsigned int v3; // [bp-0x81c]
 unsigned int v4; // [bp-0x818]
 unsigned long v17; // [bp-0x80c]
 unsigned int v6; // [bp-0x7fc]
 char v7; // [bp-0x7f8]
 char v8; // [bp-0x40c]
 unsigned int v9; // [bp-0x4]
 char v10; // [bp+0x0]

 v9 = v11;
 puts(&g_4035c1);
 v4 = 20;
 printf("MEM-L1-01 (local_vars): %d\n");
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v17 + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 v4 = *((int *)&v7);
 printf("MEM-L1-02 (local_array): %d\n");
 v4 = 15;
 printf("MEM-L1-03 (local_struct): %d\n");
 v4 = 42;
 printf("MEM-L1-04 (address_of_local): %d\n");
 v4 = 2;
 printf("MEM-L1-05 (address_of_array): %d\n");
 j = 0;
 do
 {
 *((char *)&v17 + j) = j;
 j += 1;
 } while (j != 0x800);
 v4 = v8;
 printf("MEM-L2-01 (large_stack_frame): %d\n");
 index = 0;
 do
 {
 *((unsigned int *)((char *)&v17 + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 v4 = *((int *)&v7);
 alloca_usage(10);
 printf("MEM-L2-02 (alloca_usage): %d\n");
 l = 0;
 cur = (struct_0 *)&v17;
 do
 {
 *((unsigned int *)&cur->padding_0[0]) = l;
 l += 3;
 cur = &cur->padding_0[4];
 } while (l != 30);
 v3 = v6;
 v2 = 30;
 printf("MEM-L2-03 (alloca_usage): %d\n");
 v1 = 20;
 printf("MEM-L2-04 (stack_alias): %d\n");
 return 0;
}


// Function: sub_401581 at 0x401581
int sub_401581()
{
 heap_basic();
 return;
}


// Function: heap_basic at 0x401590
unsigned int heap_basic(unsigned int a0)
{
 unsigned int v0; // esi
 void* ptr; // eax
 unsigned int idx; // ecx
 unsigned int i; // edx

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 if (v0 > 0)
 {
 idx = 0;
 i = v0;
 do
 {
 *((unsigned int *)((char *)ptr + 2 * idx)) = idx;
 idx += 2;
 i -= 1;
 } while (i != 1);
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((v0 >> 31) + v0 & 4294967294)));
}


// Function: sub_4015ef at 0x4015ef
int sub_4015ef()
{
 heap_calloc();
 return;
}


// Function: heap_calloc at 0x4015f0
unsigned int heap_calloc(unsigned int i)
{
 void* ptr; // eax
 unsigned int idx; // ecx
 unsigned int v2; // esi

 ptr = calloc(i, 4);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 idx = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)((char *)ptr + 4 * idx));
 idx += 1;
 } while (i != idx);
 }
 else
 {
 v2 = 0;
 }
 free(ptr);
 return v2;
}


// Function: sub_401656 at 0x401656
int sub_401656()
{
 heap_realloc();
 return;
}


// Function: heap_realloc at 0x401660
unsigned int heap_realloc()
{
 unsigned int *ptr; // eax
 unsigned int *ptr2; // esi
 unsigned int i; // eax
 unsigned int v4; // ebp
 unsigned int *p; // eax
 unsigned int *cur; // ecx
 unsigned int j; // edx
 unsigned int v8; // edi

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 i = 1;
 do
 {
 ptr2[1 + i] = i;
 i += 1;
 } while (i != 6);
 v4 = ptr2[2];
 p = realloc(ptr2, 40);
 if (p)
 {
 cur = &p[5];
 j = 50;
 do
 {
 cur[0] = j;
 j += 10;
 cur = &cur[1];
 } while (j != 100);
 v8 = 4294967293;
 if (p[2] == v4)
 v8 = p[5];
 ptr = p;
 }
 else
 {
 v8 = 4294967294;
 }
 free(ptr);
 return v8;
}


// Function: sub_4016fc at 0x4016fc
int sub_4016fc()
{
 heap_array();
 return;
}


// Function: heap_array at 0x401700
unsigned int heap_array(unsigned int i)
{
 void* ptr; // eax
 unsigned int v1; // ecx
 unsigned int idx; // edx

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 v1 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = v1;
 idx += 1;
 v1 += 3;
 } while (i != idx);
 }
 free(ptr);
 return *((int *)((char *)ptr + 2 * ((i >> 31) + i & 4294967294)));
}


// Function: sub_401761 at 0x401761
void sub_401761(unsigned int a0)
{
 heap_struct(a0);
 return;
}


// Function: heap_struct at 0x401770
unsigned int heap_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_401778 at 0x401778
int sub_401778()
{
 struct_heap_nested_outer *temp;
 heap_nested(&temp);
 return 0;
}


// Function: heap_nested at 0x401780
unsigned int heap_nested(struct_heap_nested_outer **addr)
{
 struct_heap_nested_outer *p; // eax
 unsigned int *ptr; // eax
 unsigned int *ptr2; // ecx

 p = malloc(8);
 *(addr) = p;
 if (!p)
 return 4294967295;
 p->field_0 = 10;
 ptr2 = malloc(8);
 *(addr)->field_4 = ptr2;
 ptr = *(addr)->field_4;
 if (!ptr)
 {
 free(*(addr));
 return 4294967294;
 }
 ptr[0] = 20;
 ptr[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x4017f0
unsigned int linked_list_heap()
{
 struct_linked_list_node *v4; // esi
 struct_linked_list_node *ptr; // edi
 struct_linked_list_node *ptr4; // esi
 unsigned int v6; // ecx
 struct_linked_list_node *addr; // ebp
 unsigned int v8; // ecx
 struct_linked_list_node *ptr3; // esi
 unsigned int v11; // edi
 struct_linked_list_node *p; // eax
 char v0; // [bp-0x19]
 unsigned int v1; // [bp-0x18]
 struct_linked_list_node *v2; // [bp-0x14]

 v4 = NULL;
 v0 = 1;
 ptr = NULL;
 v6 = 0;
 do
 {
 v1 = v6;
 addr = malloc(8);
 if (addr)
 {
 addr->field_0 = v1 * 10;
 addr->field_4 = NULL;
 if (!v4)
 {
 ptr = addr;
 v4 = addr;
 if (!addr)
 break;
 }
 else
 {
 ptr->field_4 = addr;
 ptr = addr;
 if (!addr)
 break;
 }
 }
 else
 {
 if (v4)
 {
 v2 = ptr;
 do
 {
 ptr3 = v4;
 free(ptr3);
 v4 = ptr3->field_4;
 } while (ptr3->field_4);
 v4 = NULL;
 ptr = v2;
 }
 else
 {
 v4 = NULL;
 }
 v8 = v1;
 if (!addr)
 break;
 }
 } while ((v6 = v8 + 1, v0 = (char)(char)(v8 < 4), v6 != 5));
 if ((v0 & 1))
 return 4294967295;
 v11 = 0;
 if (v4)
 {
 p = v4;
 do
 {
 v11 += p->field_0;
 p = p->field_4;
 } while (p->field_4);
 }
 if (!v4)
 return v11;
 do
 {
 ptr4 = v4;
 free(ptr4);
 v4 = ptr4->field_4;
 } while (ptr4->field_4);
 return v11;
}


// Function: sub_401867 at 0x401867
void sub_401867()
{
}


// Function: sub_4018eb at 0x4018eb
int sub_4018eb()
{
 create_tree_node(10);
 return 0;
}


// Function: create_tree_node at 0x4018f0
unsigned int* create_tree_node(unsigned int a0)
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


// Function: sub_401929 at 0x401929
int sub_401929()
{
 tree_heap_traversal();
 return;
}


// Function: tree_heap_traversal at 0x401930
unsigned int tree_heap_traversal()
{
 struct_tree_node *ptr3; // eax
 struct_tree_node *p; // esi
 struct_tree_child *ptr_child; // edi
 struct_tree_child *addr_child; // ebp
 unsigned int v5; // edi

 ptr3 = malloc(12);
 if (!ptr3)
 return 4294967295;
 p = ptr3;
 ptr3->field_0 = 10;
 ptr3->field_4 = NULL;
 ptr3->field_8 = NULL;
 ptr_child = malloc(12);
 if (ptr_child)
 {
 ptr_child->field_0 = 20;
 ptr_child->field_4 = 0;
 ptr_child->field_8 = 0;
 }
 p->field_4 = ptr_child;
 addr_child = malloc(12);
 if (addr_child)
 {
 addr_child->field_0 = 30;
 addr_child->field_4 = 0;
 addr_child->field_8 = 0;
 }
 p->field_8 = addr_child;
 if (ptr_child && addr_child)
 {
 v5 = ptr_child->field_0 + p->field_0 + addr_child->field_0;
 free(ptr_child);
 addr_child = p->field_8;
 }
 else
 {
 if (ptr_child)
 free(ptr_child);
 v5 = 4294967294;
 if (!addr_child)
 {
 free(p);
 return 4294967294;
 }
 }
 free(addr_child);
 free(p);
 return v5;
}


// Function: sub_401a14 at 0x401a14
int sub_401a14()
{
 memory_leak();
 return;
}


// Function: memory_leak at 0x401a20
unsigned int memory_leak(unsigned int i)
{
 unsigned int ptr; // eax
 unsigned int idx; // ecx

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return *((int *)(ptr + ((i >> 31) + i & 4294967294) * 2));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (i != idx);
 return *((int *)(ptr + ((i >> 31) + i & 4294967294) * 2));
}


// Function: sub_401a74 at 0x401a74
int sub_401a74()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401a80
unsigned int dangling_pointer()
{
 unsigned int *ptr; // eax
 unsigned int v0; // [bp-0x18]

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 *(ptr) = 42;
 v0 = 42;
 printf("value before free: %d\n", v0);
 free(ptr);
 return *(ptr);
}


// Function: sub_401ad6 at 0x401ad6
void sub_401ad6(unsigned int a0)
{
 double_free(&a0);
 return;
}


// Function: double_free at 0x401ae0
unsigned int double_free(unsigned int *a0)
{
 if (!a0)
 return 4294967294;
 return *(a0);
}


// Function: sub_401af1 at 0x401af1
int sub_401af1()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x401b00
unsigned int heap_overflow()
{
 unsigned int *ptr; // eax
 unsigned int i; // ecx
 unsigned int *ptr2; // edx

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 ptr2 = ptr;
 do
 {
 *(ptr) = i;
 i += 100;
 ptr += 1;
 } while (i != 1100);
 free(ptr);
 return *(ptr);
}


// Function: sub_401b59 at 0x401b59
int sub_401b59()
{
 test_heap_memory();
 return;
}


// Function: test_heap_memory at 0x401b60
unsigned int test_heap_memory()
{
 void* addr; // eax
 unsigned int idx; // ecx
 unsigned int l; // edx
 unsigned int *ptr; // eax
 unsigned int m; // ecx
 unsigned int *ptr5; // edx
 struct_heap_node *struct_ptr; // esi
 unsigned int *p; // eax
 unsigned int ptr6; // eax
 unsigned int pos; // ecx
 unsigned int pid; // eax
 void* void_ptr; // eax
 unsigned int v23; // eax
 unsigned int j; // ecx
 unsigned int *heap_ptr; // eax
 unsigned int *heap_ptr4; // esi
 unsigned int k; // eax
 unsigned int v10; // ebp
 unsigned int *heap_ptr2; // eax
 unsigned int *heap_cur; // ecx
 char *v0; // [bp-0x2c]
 unsigned int v1[1]; // [bp-0x14]

 puts(&g_4035df);
 addr = malloc(40);
 if (addr)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)addr + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 free(addr);
 }
 printf("HEAP-L2-01 (heap_basic): %d\n");
 ptr = calloc(5, 4);
 if (ptr)
 {
 j = 0;
 do
 {
 j += 1;
 } while (j != 5);
 free(ptr);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n");
 heap_ptr2 = malloc(20);
 if (heap_ptr2)
 {
 heap_ptr4 = heap_ptr2;
 k = 1;
 do
 {
 heap_ptr4[1 + k] = k;
 k += 1;
 } while (k != 6);
 v10 = heap_ptr4[2];
 heap_ptr = realloc(heap_ptr4, 40);
 if (heap_ptr)
 {
 heap_cur = &heap_ptr[5];
 l = 50;
 do
 {
 heap_cur[0] = l;
 l += 10;
 heap_cur = &heap_cur[1];
 } while (l != 100);
 heap_ptr4 = heap_ptr;
 }
 free(heap_ptr4);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n");
 ptr = malloc(40);
 if (ptr)
 {
 m = 0;
 ptr5 = ptr;
 do
 {
 *(ptr5) = m;
 m += 3;
 ptr5 += 1;
 } while (m != 30);
 free(ptr);
 }
 printf("HEAP-L2-04 (heap_array): %d\n");
 printf("HEAP-L2-05 (heap_struct): %d\n");
 struct_ptr = malloc(8);
 if (struct_ptr)
 {
 struct_ptr->field_0 = 10;
 p = malloc(8);
 struct_ptr->field_4 = p;
 if (p)
 {
 p[0] = 20;
 p[1] = 0;
 }
 else
 {
 free(struct_ptr);
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n");
 if (struct_ptr)
 {
 free(struct_ptr->field_4);
 free(struct_ptr);
 }
 linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n");
 tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n");
 ptr6 = malloc(20);
 if (ptr6)
 {
 pos = 0;
 do
 {
 *((unsigned int *)(ptr6 + pos * 4)) = pos;
 pos += 1;
 } while (pos != 5);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n");
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 dangling_pointer();
 printf(&g_40326d);
 exit(0); /* do not return */
 }
 else if (waitpid(pid, NULL, 0) == pid)
 {
 waitpid(pid, &v1, 0);
 v23 = v1 & 127;
 if (!((char)v1 & 127))
 {
 v0 = &g_40327d;
 }
 else if (v23 * 0x1000000 + 0x1000000 >= 0x2000000)
 {
 v0 = &g_4032a2;
 }
 else
 {
 return v23;
 }
 return printf(v0);
 }
 else
 {
 return (unsigned int)perror(&g_4032e3);
 }
}


// Function: sub_401ea5 at 0x401ea5
void sub_401ea5()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x401eb0
unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: sub_401ecc at 0x401ecc
void sub_401ecc()
{
 global_var_read();
 return;
}


// Function: global_var_read at 0x401ed0
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_401ee5 at 0x401ee5
void sub_401ee5(unsigned int a0)
{
 global_array_access();
 return;
}


// Function: global_array_access at 0x401ef0
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 9)
 v0 = *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10684 + 4 * a0]);
 return v0;
}


// Function: sub_401f12 at 0x401f12
void sub_401f12(unsigned int a0)
{
 static_local();
 return;
}


// Function: static_local at 0x401f20
int static_local(unsigned int a0)
{
 unsigned int v0; // edx

 v0 = static_local_counter + 1;
 if (a0)
 v0 = 0;
 static_local_counter = v0;
 return v0;
}


// Function: sub_401f46 at 0x401f46
void sub_401f46(unsigned int a0)
{
 call_static_func();
 return;
}


// Function: call_static_func at 0x401f50
unsigned int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_401f5a at 0x401f5a
void sub_401f5a()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x401f60
unsigned int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_401f78 at 0x401f78
int sub_401f78()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x401f80
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: sub_401fa1 at 0x401fa1
void sub_401fa1()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x401fb0
unsigned int read_const_data()
{
 return ((struct_const_data *)const_string)->field_4 + 42;
}


// Function: sub_401fca at 0x401fca
void sub_401fca()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x401fd0
int access_bss_var()
{
 return 0;
}


// Function: sub_401fd3 at 0x401fd3
void sub_401fd3()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x401fe0
int access_bss_buffer()
{
 return 0;
}


// Function: sub_401fe3 at 0x401fe3
void sub_401fe3()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x401ff0
int global_struct_access()
{
 return 30;
}


// Function: sub_401ff6 at 0x401ff6
void sub_401ff6(unsigned int a0)
{
 set_file_static(a0);
 return;
}


// Function: set_file_static at 0x402000
unsigned int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return 0;
}


// Function: sub_402017 at 0x402017
void sub_402017()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x402020
unsigned int get_file_static()
{
 return file_scope_static;
}


// Function: sub_402033 at 0x402033
void sub_402033(unsigned int a0)
{
 set_global_callback(a0);
 return;
}


// Function: set_global_callback at 0x402040
unsigned int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return 0;
}


// Function: sub_402057 at 0x402057
int sub_402057()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x402060
unsigned int call_global_callback(unsigned int a0)
{
 typedef unsigned int (*func_ptr_t)(unsigned int);
 return (!global_func_ptr ? 4294967295 : ((func_ptr_t)global_func_ptr)(a0));
}


// Function: sub_40208f at 0x40208f
void sub_40208f(unsigned int a0)
{
 global_heap_store(&a0);
 return;
}


// Function: global_heap_store at 0x402090
unsigned int global_heap_store(unsigned int *a0)
{
 global_heap_ptr = a0;
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: sub_4020b3 at 0x4020b3
void sub_4020b3()
{
 static_complex_init();
 return;
}


// Function: static_complex_init at 0x4020c0
int static_complex_init()
{
 return 15;
}


// Function: sub_4020c6 at 0x4020c6
void sub_4020c6(unsigned int a0)
{
 tls_access();
 return;
}


// Function: tls_access at 0x4020d0
int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4020d7 at 0x4020d7
void sub_4020d7()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x4020e0
int init_order_test()
{
 return 20;
}


// Function: sub_4020e6 at 0x4020e6
int sub_4020e6()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x4020f0
unsigned int test_static_global()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 puts(&g_4035fd);
 global_counter = global_counter + 1;
 v0 = global_counter;
 printf("STM-L1-01 (global_var_access): %d\n");
 v0 = global_counter * 2;
 printf("STM-L1-01 (global_var_read): %d\n");
 v0 = 5;
 printf("STM-L1-02 (global_array_access): %d\n");
 static_local_counter = 1;
 v0 = 1;
 printf("STM-L1-03 (static_local): %d\n");
 static_local_counter = static_local_counter + 1;
 v0 = static_local_counter;
 printf("STM-L1-03 (static_local): %d\n");
 v0 = 11;
 printf("STM-L1-04 (call_static_func): %d\n");
 v0 = extern_global_var + 100;
 printf("STM-L2-01 (access_extern_global): %d\n");
 v0 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n");
 v0 = ((struct_const_data *)ptr)->field_4 + 42;
 printf("STM-L2-03 (read_const_data): %d\n");
 v0 = 0;
 printf("STM-L2-04 (access_bss_var): %d\n");
 v0 = 0;
 printf("STM-L2-04 (access_bss_buffer): %d\n");
 v0 = 30;
 printf("STM-L2-05 (global_struct_access): %d\n");
 file_scope_static = 50;
 v0 = 50;
 printf("STM-L2-06 (file_static): %d\n");
 global_func_ptr = double_value;
 v0 = 10;
 printf("STM-L2-07 (global_func_ptr): %d\n");
 v1 = 100;
 global_heap_ptr = &v1;
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n");
 v0 = 15;
 printf("STM-L2-09 (static_complex_init): %d\n");
 v0 = 20;
 printf("STM-L3-01 (tls_access): %d\n");
 v0 = 20;
 return printf("STM-L3-02 (init_order_test): %d\n");
}


// Function: sub_4022ff at 0x4022ff
void sub_4022ff(unsigned int a0)
{
 double_value();
 return;
}


// Function: double_value at 0x402300
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402307 at 0x402307
int sub_402307()
{
 char buf[10];
 memop_memset(buf, 10, 0);
 return 0;
}


// Function: memop_memset at 0x402310
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


// Function: sub_40234e at 0x40234e
int sub_40234e()
{
 char src[10], dst[10];
 memop_memcpy(dst, src, 10);
 return 0;
}


// Function: memop_memcpy at 0x402350
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


// Function: sub_402395 at 0x402395
int sub_402395()
{
 char buf[10];
 memop_memmove(buf, 10);
 return 0;
}


// Function: memop_memmove at 0x4023a0

unsigned int memop_memmove(void *a0, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
  memmove((char *)a0 + 1, a0, a1 - 1);
 return *((char *)a0 + 1);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4023e3 at 0x4023e3
int sub_4023e3()
{
 char buf1[10], buf2[10];
 memop_memcmp(buf1, buf2, 10);
 return 0;
}


// Function: memop_memcmp at 0x4023f0
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


// Function: memop_bzero at 0x402440
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


// Function: sub_402479 at 0x402479
int sub_402479()
{
 char src[10], dst[10];
 memop_bcopy(src, dst, 10);
 return 0;
}


// Function: memop_bcopy at 0x402480
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


// Function: sub_4024c3 at 0x4024c3
void sub_4024c3(unsigned int a0)
{
 char buf[10];
 memop_unaligned_access(buf);
 return;
}


// Function: memop_unaligned_access at 0x4024d0

unsigned int memop_unaligned_access(void *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)((char *)a0 + 1));
}


// Function: sub_4024e2 at 0x4024e2
void sub_4024e2(unsigned int a0)
{
 unsigned int val = 10;
 memop_memory_barrier(&val);
 return;
}


// Function: memop_memory_barrier at 0x4024f0
unsigned int memop_memory_barrier(unsigned int *a0)
{
 int v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 atomic_exchange(&v0, v0);
 return *(a0) * 2;
}


// Function: sub_402508 at 0x402508
int sub_402508()
{
 test_memory_op_functions();
 return;
}


// Function: test_memory_op_functions at 0x402510
extern char g_403621;

unsigned int test_memory_op_functions()
{
 int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 char v2[4]; // [bp-0x10]
 char v3[10]; // [bp-0xf]
 char v4[4]; // [bp-0xc]
 unsigned short v5; // [bp-0x8]

 puts(&g_403621);
 printf("MEMOP-L2-01: %d\n");
 printf("MEMOP-L2-02: %d\n");
 strncpy(&v4, "oWor", 4);
 strncpy(&v2, "Hell", 4);
 v5 = 25708;
 strncpy(&v3, "HelloWorl", 9);
 printf("MEMOP-L2-03: %c\n");
 printf("MEMOP-L2-04: %d\n");
 printf("MEMOP-L2-05: %d\n");
 printf("MEMOP-L2-06: %d\n");
 printf("MEMOP-L3-01: 0x%x\n");
 v1 = 5;
 atomic_exchange(&v0, v0);
 return printf("MEMOP-L3-02: %d\n");
}


// Function: sub_402632 at 0x402632
int sub_402632()
{
 main();
 return;
}


// Function: main at 0x402640
int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_40266b at 0x40266b
void sub_40266b(unsigned int a0)
{
 extern_function(a0);
 return;
}


// Function: extern_function at 0x402670
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_402678 at 0x402678
void sub_402678()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

typedef struct struct_ctors_helper_1 {
 unsigned int field_0;
} struct_ctors_helper_1;

typedef struct struct_ctors_helper_0 {
 char padding_0[300];
} struct_ctors_helper_0;

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_4026c2 at 0x4026c2
void sub_4026c2()
{
}



/* CRT stub function _fini removed by preprocessor */


