// Angr Decompilation of 3_clang_O1_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdatomic.h>

/* Forward declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
unsigned int * __do_global_dtors_aux(void);
unsigned int __x86.get_pc_thunk_di(void);

/* External function declarations */
unsigned int extern_function(unsigned int a0);
unsigned int double_value(unsigned int a0);
unsigned int _ccall(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);

/* Function prototypes for tests */
void local_vars(unsigned int a0);
void local_array(void);
void local_struct(void);
void address_of_local(unsigned int *ptr);
void address_of_array(unsigned int *a0);
void large_stack_frame(void);
void vla_stack(unsigned int a0);
void alloca_usage(unsigned int i);
void stack_alias(void);
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int i);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned int i);
unsigned int heap_struct(unsigned int a0);
unsigned int heap_nested(void **addr);
unsigned int linked_list_heap(void);
unsigned int* create_tree_node(unsigned int a0);
unsigned int tree_heap_traversal(void);
unsigned int memory_leak(unsigned int i);
unsigned int dangling_pointer(void);
unsigned int double_free(unsigned int *a0);
unsigned int heap_overflow(void);
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
int memop_memset(char *a0, unsigned int n, unsigned int a2);
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n);
unsigned int memop_memmove(void *a0, unsigned int a1);
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2);
unsigned int memop_bzero(char *a0, unsigned int n);
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n);
unsigned int memop_unaligned_access(void *a0);
unsigned int memop_memory_barrier(unsigned int *a0);
unsigned int test_memory_op_functions(void);
unsigned int static_local_counter;
unsigned int extern_global_var;
unsigned int file_scope_static;
unsigned int global_counter;
unsigned int global_func_ptr;
unsigned int global_heap_ptr;

/* Struct definitions */
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

/* Forward declaration for global struct_0 pointer */
struct_0 *g_405ff4;
unsigned int static_local_counter = 0;
unsigned int extern_global_var = 0;
unsigned int file_scope_static = 0;
unsigned int global_counter = 0;
unsigned int global_func_ptr = 0;
unsigned int global_heap_ptr = 0;

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030(unsigned int *ptr)
{
 unsigned int v0;

 v0 = ptr[1];
 return v0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 // Original assembly had indirect jump, simplified to return
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
 // Unsupported jumpkind - placeholder
}


// Function: sub_40116c at 0x40116c
void sub_40116c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401170
void __x86.get_pc_thunk_bx()
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



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones()
{
 return;
}


// Function: sub_401207 at 0x401207
void sub_401207()
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
 ptr = &v6->padding_4dd7[11];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[92])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_401130(*((int *)&ptr->padding_0[76]));
 v10 = &ptr->padding_0[236];
 v11 = *((int *)&ptr->padding_0[96]);
 i = (&ptr->padding_0[232] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[96]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[96]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[96]);
 } while (*((int *)&ptr->padding_0[96]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[92] = 1;
 return v14;
}


// Function: sub_40129a at 0x40129a
void sub_40129a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4012a9
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x4012ad
unsigned int __x86.get_pc_thunk_di(void)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned int a0)
{
 (void)local_vars(a0);
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
 local_array();
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
 local_struct();
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
 address_of_local();
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
 vla_stack();
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
 alloca_usage();
 return;
}


// Function: alloca_usage at 0x4013d0
unsigned int alloca_usage(unsigned int i)
{
 unsigned int v0; // edx
 unsigned int idx; // esi
 char vstack[64]; // manually allocated stack space

 if (i <= 0)
 return 4294967295;
 v0 = 0;
 idx = 0;
 do
 {
 *((unsigned int *)(vstack + 4 * idx)) = v0;
 idx += 1;
 v0 += 3;
 } while (i != idx);
 return *((int *)(vstack + 2 * ((i >> 31) + i & 4294967294)));
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
extern char g_401563;
extern char g_401579;
extern char g_4035c1;

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
 struct_0 *v91; // stack alias variable
 struct_0 *v107; // stack alias variable

 v9 = v11;
 puts(&g_4035c1);
 v4 = 20;
 printf("MEM-L1-01 (local_vars): %d\n", v4);
 idx = 0;
 do
 {
 *((unsigned int *)((char *)&v17 + 2 * idx)) = idx;
 idx += 2;
 } while (idx != 20);
 v4 = *((int *)&v7);
 printf("MEM-L1-02 (local_array): %d\n", v4);
 v4 = 15;
 printf("MEM-L1-03 (local_struct): %d\n", v4);
 v4 = 42;
 printf("MEM-L1-04 (address_of_local): %d\n", v4);
 v4 = 2;
 printf("MEM-L1-05 (address_of_array): %d\n", v4);
 j = 0;
 do
 {
 *((char *)&v17 + j) = j;
 j += 1;
 } while (j != 0x800);
 v4 = v8;
 printf("MEM-L2-01 (large_stack_frame): %d\n", v4);
 index = 0;
 do
 {
 *((unsigned int *)((char *)&v17 + 2 * index)) = index;
 index += 2;
 } while (index != 20);
 v4 = *((int *)&v7);
 v91 = (struct_0 *)((char *)&v2 - 16);
 printf("MEM-L2-02 (vla_stack): %d\n", v4);
 l = 0;
 cur = v91 + 16;
 do
 {
 *((unsigned int *)&cur->padding_0[0]) = l;
 l += 3;
 cur = &cur->padding_0[4];
 } while (l != 30);
 v3 = v6;
 v2 = "MEM-L2-03 (alloca_usage): %d\n";
 v107 = v91 - 4;
 v1 = &g_401563;
 printf(*((int *)&v10));
 v1 = "MEM-L2-04 (stack_alias): %d\n";
 v2 = 20;
 v0 = &g_401579;
 return printf(*((int *)&v10));
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
 unsigned int *p; // eax
 unsigned int *cur; // ecx
 unsigned int i; // eax
 unsigned int v4; // ebp
 unsigned int j; // edx
 unsigned int v8; // edi

 ptr = (unsigned int*)malloc(20);
 if (!ptr)
 return 4294967295;
 i = 1;
 do
 {
 ptr[1 + i] = i;
 i += 1;
 } while (i != 6);
 v4 = ptr[2];
 p = (unsigned int*)realloc(ptr, 40);
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
 heap_struct();
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
 heap_nested();
 return;
}


// Function: heap_nested at 0x401780
typedef struct heap_nested_inner_struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} heap_nested_inner_struct_1;

unsigned int heap_nested(heap_nested_inner_struct_1 **addr)
{
 heap_nested_inner_struct_1 *p; // eax
 heap_nested_inner_struct_1 *ptr; // ecx

 p = (heap_nested_inner_struct_1 *)malloc(8);
 *(addr) = p;
 if (!p)
 return 4294967295;
 p->field_0 = 10;
 ptr = (heap_nested_inner_struct_1 *)malloc(8);
 (*addr)->field_4 = ptr;
 ptr = (*addr)->field_4;
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
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

unsigned int linked_list_heap()
{
 struct_0 *v4; // esi
 struct_0 *ptr; // edi
 struct_0 *ptr4; // esi
 unsigned int v6; // ecx
 struct_0 *addr; // ebp
 unsigned int v8; // ecx
 struct_0 *ptr3; // esi
 unsigned int v11; // edi
 struct_0 *p; // eax
 char v0; // [bp-0x19]
 unsigned int v1; // [bp-0x18]
 struct_0 *v2; // [bp-0x14]

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
 create_tree_node();
 return;
}


// Function: create_tree_node at 0x4018f0
unsigned int* create_tree_node(unsigned int a0)
{
 unsigned int* ptr; // eax

 ptr = (unsigned int*)malloc(12);
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
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
 struct struct_2 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
} struct_2;

unsigned int tree_heap_traversal()
{
 struct_0 *ptr3; // eax
 struct_0 *p; // esi
 unsigned int *ptr; // edi
 unsigned int *addr; // ebp
 unsigned int v5; // edi

 ptr3 = malloc(12);
 if (!ptr3)
 return 4294967295;
 p = ptr3;
 ptr3->field_0 = 10;
 ptr3->field_4 = NULL;
 ptr3->field_8 = NULL;
 ptr = malloc(12);
 if (ptr)
 {
 ptr[0] = 20;
 ptr[1] = 0;
 ptr[2] = 0;
 }
 p->field_4 = ptr;
 addr = malloc(12);
 if (addr)
 {
 addr[0] = 30;
 addr[1] = 0;
 addr[2] = 0;
 }
 p->field_8 = addr;
 if (ptr && addr)
 {
 v5 = ptr[0] + p->field_0 + addr[0];
 free(ptr);
 addr = p->field_8;
 }
 else
 {
 if (ptr)
 free(ptr);
 v5 = 4294967294;
 if (!addr)
 {
 free(p);
 return 4294967294;
 }
 }
 free(addr);
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
 printf("value before free: %d\n", *(ptr));
 free(ptr);
 return *(ptr);
}


// Function: sub_401ad6 at 0x401ad6
void sub_401ad6(unsigned int a0)
{
 double_free();
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

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 ptr = ptr;
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
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_1;

extern char g_40326d;
extern char g_40327d;
extern char g_4032a2;
extern char g_4032e3;
extern char g_4035df;

unsigned int test_heap_memory()
{
 void* addr;
 unsigned int idx;
 unsigned int l;
 unsigned int *heap_ptr1;
 unsigned int m;
 unsigned int *ptr5;
 struct_0 *struct_ptr;
 struct_1 *p;
 unsigned int *ptr6;
 unsigned int pos;
 unsigned int pid;
 void* heap_ptr2;
 unsigned int v23;
 unsigned int j;
 unsigned int *ptr_array;
 unsigned int *ptr4;
 unsigned int k;
 unsigned int v10;
 unsigned int *ptr_new;
 unsigned int *cur;
 struct_0 *ptr;
 char *v0;
 unsigned int v1;

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
 printf("HEAP-L2-01 (heap_basic): %d\n", 0);
 heap_ptr1 = calloc(5, 4);
 if (heap_ptr1)
 {
  j = 0;
  do
  {
   j += 1;
  } while (j != 5);
  free(heap_ptr1);
 }
 printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
 ptr = (struct_0 *)malloc(20);
 if (ptr)
 {
 ptr4 = (unsigned int *)ptr;
 k = 1;
 do
 {
 ptr4[1 + k] = k;
 k += 1;
 } while (k != 6);
 v10 = ptr4[2];
 ptr = (struct_0 *)realloc(ptr4, 40);
 if (ptr)
 {
 cur = &((unsigned int *)ptr)[5];
 l = 50;
 do
 {
 cur[0] = l;
 l += 10;
 cur = &cur[1];
 } while (l != 100);
 ptr4 = (unsigned int *)ptr;
 }
 free(ptr4);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n", 0);
 ptr = (struct_0 *)malloc(40);
 if (ptr)
 {
 m = 0;
 ptr5 = (unsigned int *)ptr;
 do
 {
 *(ptr5) = m;
 m += 3;
 ptr5 += 1;
 } while (m != 30);
 free(ptr);
 }
 printf("HEAP-L2-04 (heap_array): %d\n", 0);
 printf("HEAP-L2-05 (heap_struct): %d\n", 0);
 ptr = (struct_0 *)malloc(8);
 if (ptr)
 {
 ptr->field_0 = 10;
 p = (struct_1 *)malloc(8);
 ptr->field_4 = p;
 if (p)
 {
 p[0] = 20;
 p[1] = 0;
 }
 else
 {
 free(ptr);
 }
 }
 printf("HEAP-L2-06 (heap_nested): %d\n", 0);
 if (ptr)
 {
 free(ptr->field_4);
 free(ptr);
 }
 linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n", 0);
 tree_heap_traversal();
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 0);
 ptr6 = (unsigned int *)malloc(20);
 if (ptr6)
 {
 pos = 0;
 do
 {
 ptr6[pos] = pos;
 pos += 1;
 } while (pos != 5);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n", 0);
 printf("HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (!pid)
 {
 dangling_pointer();
 printf(&g_40326d);
 exit(0); /* do not return */
 }
 else if (!((char)_ccall(14, 15, pid, 0, 0)))
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
extern unsigned int global_counter;

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
extern unsigned int global_counter;

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
extern char _GLOBAL_OFFSET_TABLE_;

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
extern unsigned int static_local_counter;

unsigned int static_local(unsigned int a0)
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
int call_static_func(unsigned int a0)
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
extern unsigned int extern_global_var;

int access_extern_global()
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
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: sub_401fca at 0x401fca
void sub_401fca()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x401fd0
unsigned int access_bss_var()
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
unsigned int access_bss_buffer()
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
unsigned int global_struct_access()
{
 return 30;
}


// Function: sub_401ff6 at 0x401ff6
void sub_401ff6(unsigned int a0)
{
 set_file_static();
 return;
}


// Function: set_file_static at 0x402000
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return &_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_402017 at 0x402017
void sub_402017()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x402020
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_402033 at 0x402033
void sub_402033(unsigned int a0)
{
 set_global_callback();
 return;
}


// Function: set_global_callback at 0x402040
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return &_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_402057 at 0x402057
int sub_402057()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x402060
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

extern struct_0 *global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
 return (!global_func_ptr ? 4294967295 : global_func_ptr(a0));
}


// Function: sub_40208f at 0x40208f
void sub_40208f(unsigned int a0)
{
 global_heap_store();
 return;
}


// Function: global_heap_store at 0x402090
extern unsigned int global_heap_ptr;

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
unsigned int static_complex_init()
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
unsigned int tls_access(unsigned int a0)
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
unsigned int init_order_test()
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
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_4035fd;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;
extern unsigned int global_heap_ptr;
extern struct_0 *ptr;
extern unsigned int static_local_counter;

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
 v0 = ptr->field_4 + 42;
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
 memop_memset();
 return;
}


// Function: memop_memset at 0x402310
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

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
 memop_memcpy();
 return;
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
 memop_memmove();
 return;
}


// Function: memop_memmove at 0x4023a0
typedef struct struct_0 {
 char padding_0[1];
 char field_1;
} struct_0;

unsigned int memop_memmove(struct_0 *a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 >= 2)
 {
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4023e3 at 0x4023e3
int sub_4023e3()
{
 memop_memcmp();
 return;
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
 memop_bcopy();
 return;
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
 memop_unaligned_access();
 return;
}


// Function: memop_unaligned_access at 0x4024d0
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


// Function: sub_4024e2 at 0x4024e2
void sub_4024e2(unsigned int a0)
{
 memop_memory_barrier();
 return;
}


// Function: memop_memory_barrier at 0x4024f0
unsigned int memop_memory_barrier(unsigned int *a0)
{
 char v0 = 0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 atomic_store(&v0, 1);
 (void)v0;
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
 char v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 char v2[1]; // [bp-0x10]
 char v3[3]; // [bp-0xf]
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
 {
  char temp = v0;
  atomic_store(&v0, 1);
  (void)temp;
 }
 return printf("MEMOP-L3-02: %d\n");
}


// Function: sub_402632 at 0x402632
int sub_402632()
{
 main();
 return;
}


// Function: main at 0x402640
unsigned int main()
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

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_4026c2 at 0x4026c2
void sub_4026c2()
{
}



/* CRT stub function _fini removed by preprocessor */


