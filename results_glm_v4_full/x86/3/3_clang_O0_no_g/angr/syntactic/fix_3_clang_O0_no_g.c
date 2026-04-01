// Angr Decompilation of 3_clang_O0_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdatomic.h>

/* CRT stub function _init removed by preprocessor */

extern void *g_406ff4;

/* Global variable definitions */
unsigned int global_counter = 0;
unsigned int extern_global_var = 0;
unsigned int bss_var = 0;
char bss_buffer = 0;
unsigned int file_scope_static = 0;
unsigned int global_func_ptr = 0;
unsigned int global_heap_ptr = 0;
unsigned int complex_init = 0;
unsigned int g_407080 = 0;
unsigned int global_point = 0;
unsigned int g_407090 = 0;
unsigned int g_407098 = 0;
char *const_string = "test";
extern char g_404008;
extern char g_404152;
extern char g_404337;
extern char g_40459a;

/* Forward declarations */
extern void *_GLOBAL_OFFSET_TABLE_;
void frame_dummy(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void __do_global_ctors_aux(void);
void __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int);
void __x86_get_pc_thunk_bx(void);
unsigned int local_vars(unsigned int);
unsigned int local_array(unsigned int);
int local_struct(unsigned int);
unsigned int address_of_local(unsigned int);
unsigned int address_of_array(unsigned int *);
int large_stack_frame(void);
unsigned int vla_stack(unsigned int);
unsigned int alloca_usage(unsigned int);
unsigned int stack_alias(void);
int test_stack_memory(void);
unsigned int heap_basic(unsigned int);
unsigned int heap_calloc(unsigned int);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned int);
unsigned int heap_struct(unsigned int);
unsigned int heap_nested(void);
unsigned int linked_list_heap(void);
unsigned int *create_tree_node(unsigned int);
unsigned int tree_heap_traversal(void);
unsigned int memory_leak(unsigned int);
unsigned int dangling_pointer(void);
unsigned int double_free(unsigned int *);
unsigned int heap_overflow(void);
unsigned int test_heap_memory(void);
int global_var_access(void);
unsigned int global_var_read(void);
unsigned int global_array_access(unsigned int);
unsigned int static_local(unsigned int);
int call_static_func(int);
int static_helper(int, int);
void access_extern_global(void);
void call_extern_func(void);
int read_const_data(void);
void access_bss_var(void);
void access_bss_buffer(void);
int global_struct_access(void);
int set_file_static(unsigned int);
int get_file_static(void);
int set_global_callback(unsigned int a0);
unsigned int call_global_callback(unsigned int);
unsigned int call_global_callback_noarg(void);
unsigned int global_heap_store(void);
int static_complex_init(void);
unsigned int tls_access(void);
int init_order_test(void);
int init_depends_on(void);
int test_static_global(void);
void double_value(unsigned int);
unsigned int memop_memset(char *, unsigned int, char);
unsigned int memop_memcpy(void *, void *, unsigned int);
unsigned int memop_memmove(void *, void *, unsigned int);
unsigned int memop_memcmp(void *, void *, unsigned int);
unsigned int memop_bzero(char *, unsigned int);
unsigned int memop_bcopy(const void *, void *, unsigned int);
unsigned int memop_unaligned_access(void *);
unsigned int memop_memory_barrier(unsigned int *);
int test_memory_op_functions(void);
int main(void);
int extern_function(int, int);
void sub_4012b1(unsigned int);
void sub_4012e9(unsigned int);
void sub_40132e(unsigned int);
void sub_401353(unsigned int);
void sub_40137e(unsigned int);
void sub_4013a4(void);
void sub_4014ac(unsigned int);
void sub_401536(void);
void sub_40159a(void);
int sub_401744(void);
int sub_4017f9(void);
int sub_401899(void);
int sub_4019ce(void);
int sub_401a77(void);
int sub_401afd(void);
int sub_401d0e(void);
int sub_401d64(void);
int sub_401f2f(void);
int sub_401fb9(void);
int sub_40204d(void);
int sub_4020dc(void);
void sub_402372(void);
void sub_4023a6(void);
void sub_4023ca(void);
void sub_40247e(int);
void sub_4024a8(unsigned int);
int sub_4024be(void);
void sub_4024e2(void);
void sub_402513(void);
void sub_40253e(void);
void sub_402557(void);
void sub_402578(void);
void sub_40259d(void);
void sub_4025bd(void);
void sub_4025d7(void);
int sub_4025fd(void);
void sub_40264f(void);
void sub_4026c3(void);
int sub_4026ea(void);
void sub_40271b(void);
int sub_40275c(void);
void sub_4029fe(unsigned int);
int sub_402a0e(void);
int sub_402a82(void);
int sub_402b82(void);
int sub_402c32(void);
int sub_402ca3(void);
void sub_402d27(void);
void sub_402d66(void);
int sub_402db1(void);
int sub_4030c3(void);
void sub_403112(void);
void sub_40312c(void);

void _init(void)
{
 if (g_406ff4)
 g_406ff4();
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 /* Indirect jump - not representable in C */
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 void* v1; // ebx

 /* Indirect jump - not representable in C */
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
 __builtin_trap();
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

typedef struct struct_tm_clones {
 char padding_0[256];
} struct_tm_clones;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

void register_tm_clones(void)
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

void __do_global_dtors_aux(void)
{
 return;
}


// Function: sub_40129a at 0x40129a
void sub_40129a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4012a9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4012ad
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 v0 = (unsigned int)a0;
 return v0;
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
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = a0 * 2;
 v0 = v1 + 10;
 return v0;
}


// Function: sub_4012e9 at 0x4012e9
void sub_4012e9(unsigned int a0)
{
 local_array(a0);
 return;
}


// Function: local_array at 0x4012f0
unsigned int local_array(unsigned int a0)
{
 unsigned int idx; // [bp-0x30]
 unsigned long v2; // [bp-0x2c]
 char v1; // [bp-0x18]

 for (idx = 0; idx < 10; idx += 1)
 {
 (&v2)[idx] = a0 * idx;
 }
 return *((int *)&v1);
}


// Function: sub_40132e at 0x40132e
void sub_40132e(unsigned int a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x401330
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0 * 2;
 return a0 + v0;
}


// Function: sub_401353 at 0x401353
void sub_401353(unsigned int a0)
{
 unsigned int v0;
 address_of_local(&v0);
 return;
}


// Function: address_of_local at 0x401360
unsigned int address_of_local(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x8]

 v0 = 42;
 *ptr = v0;
 return v0;
}


// Function: sub_40137e at 0x40137e
void sub_40137e(unsigned int a0)
{
 unsigned int arr[1];
 arr[0] = 10;
 address_of_array(arr);
 return;
}


// Function: address_of_array at 0x401380
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4013a4 at 0x4013a4
void sub_4013a4()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x4013b0
int large_stack_frame()
{
 unsigned int i; // [bp-0x808]
 unsigned long v3; // [bp-0x804]
 char v1; // [bp-0x404]

 for (i = 0; i < 0x800; i += 1)
 {
 *((char *)&v3 + i) = i;
 }
 return v1;
}


// Function: vla_stack at 0x401410
unsigned int vla_stack(unsigned int a0)
{
 char v0; // [bp-0x1c]
 char *ptr; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 char *v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]

 if (a0 > 0 && a0 <= 1000)
 {
 v4 = &v0;
 ptr = &(&v0)[-1 * (a0 * 4 + 15 & 0xfffffff0)];
 v3 = a0;
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)&ptr[4 * idx]) = idx * 2;
 }
 v5 = *((int *)&ptr[4 * ((int)(((a0 >> 31) + a0) % 2) + (int)(((a0 >> 31) + a0) / 2))]);
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: sub_4014ac at 0x4014ac
void sub_4014ac(unsigned int a0)
{
 alloca_usage();
 return;
}


// Function: alloca_usage at 0x4014b0
unsigned int alloca_usage(unsigned int a0)
{
 char v0; // [bp-0x1c]
 char *ptr; // [bp-0x14]
 unsigned int idx; // [bp-0x10]
 char *p; // [bp-0xc]
 unsigned int v4; // [bp-0x8]

 if (a0 <= 0)
 {
 v4 = 4294967295;
 return v4;
 }
 p = &(&v0)[-1 * (a0 * 4 + 15 & 0xfffffff0)];
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)&p[4 * idx]) = idx * 3;
 }
 ptr = p;
 v4 = *((int *)&ptr[4 * ((int)((a0 >> 31) ^ a0) % 2) + (int)((a0 >> 31) ^ a0) / 2)]);
 return v4;
}


// Function: sub_401536 at 0x401536
void sub_401536()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x401540
unsigned int stack_alias()
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 char *v2; // [bp+0x4]
 char *v3; // [bp+0x8]

 v0 = 10;
 v2 = &v0;
 v3 = &v0;
 if (v2 == v3 && v2)
 {
 v0 = 20;
 v1 = v0;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_40159a at 0x40159a
int sub_40159a()
{
 test_stack_memory();
 return;
}


// Function: test_stack_memory at 0x4015a0
extern void *_GLOBAL_OFFSET_TABLE_;
extern char g_404008;

int test_stack_memory()
{
 char *v0; // [bp-0x3c]
 unsigned int flag1; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 char v6; // [bp-0xc]

 v0 = (char *)&_GLOBAL_OFFSET_TABLE_;
 printf(&g_404008);
 local_vars(5);
 printf(v0 + 12249);
 local_array(2);
 printf(v0 + 12221);
 local_struct(5);
 printf(v0 + 12192);
 address_of_local(&v6);
 printf(v0 + 12162);
 memset(&result, 0, 40);
 result = 1;
 v4 = 2;
 v5 = 3;
 address_of_array(&result);
 printf(v0 + 12128);
 large_stack_frame();
 printf(v0 + 12094);
 vla_stack(10);
 printf(v0 + 12059);
 alloca_usage(10);
 printf(v0 + 0x2f00);
 flag1 = 0;
 stack_alias();
 return printf(v0 + 12002);
}


// Function: sub_401744 at 0x401744
int sub_401744(void)
{
 heap_basic(10);
 return 0;
}


// Function: heap_basic at 0x401750
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_basic(unsigned int a0)
{
 void* p; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v1 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = idx * 2;
 }
 p = ptr;
 v2 = *((int *)((char *)p + 4 * ((int)((a0 >> 31) ^ a0) % 2) + (int)((a0 >> 31) ^ a0) / 2)]);
 free(ptr);
 v5 = v2;
 return v5;
}


// Function: sub_4017f9 at 0x4017f9
int sub_4017f9(void)
{
 heap_calloc(5);
 return 0;
}


// Function: heap_calloc at 0x401800
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_calloc(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int idx; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr = calloc(a0, 4);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 v2 = 0;
 for (idx = 0; idx < a0; idx += 1)
 {
 v2 += *((int *)((char *)ptr + 4 * idx));
 }
 free(ptr);
 v4 = v2;
 return v4;
}


// Function: sub_401899 at 0x401899
int sub_401899(void)
{
 heap_realloc();
 return 0;
}


// Function: heap_realloc at 0x4018a0
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_realloc()
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int index; // [bp-0x20]
 unsigned int *ptr; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int v8; // [bp-0xc]

 v1 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr = (unsigned int *)malloc(20);
 if (!ptr)
 {
 v8 = 4294967295;
 return v8;
 }
 for (idx = 0; idx < 5; idx += 1)
 {
 ptr[idx] = idx + 1;
 }
 v5 = ptr[2];
 ptr = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 v8 = 4294967294;
 return v8;
 }
 for (index = 5; index < 10; index += 1)
 {
 ptr[index] = index * 10;
 }
 v0 = (ptr[2] == v5 ? ptr[5] : 4294967293);
 v2 = v0;
 free(ptr);
 v8 = v2;
 return v8;
}


// Function: sub_4019ce at 0x4019ce
int sub_4019ce(void)
{
 heap_array(10);
 return 0;
}


// Function: heap_array at 0x4019d0
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_array(unsigned int a0)
{
 void* p; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v1 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 for (v3 = 0; v3 < a0; v3 += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * v3)) = v3 * 3;
 }
 p = ptr;
 v2 = *((int *)((char *)p + 4 * ((int)(((a0 >> 31) + a0) % 2) + (int)(((a0 >> 31) + a0) / 2))));
 free(ptr);
 v5 = v2;
 return v5;
}


// Function: sub_401a77 at 0x401a77
int sub_401a77(void)
{
 heap_struct(5);
 return 0;
}


// Function: heap_struct at 0x401a80
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int ptr[2]; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr[0] = (unsigned int)malloc(8);
 if ((void *)ptr[0])
 {
 *(unsigned int *)ptr[0] = a0;
 ptr[1] = a0 * 2;
 v1 = ptr[0] + ptr[1];
 free((void *)ptr[0]);
 v3 = v1;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


typedef struct struct_nested_0 {
 unsigned int field_0;
 struct struct_nested_1 *field_4;
} struct_nested_0;

typedef struct struct_nested_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_nested_1;

// Function: sub_401afd at 0x401afd
int sub_401afd(void)
{
 struct struct_nested_0 *result = NULL;
 heap_nested(&result);
 if (result) {
 free(result->field_4);
 free(result);
 }
 return 0;
}


// Function: heap_nested at 0x401b00
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_nested(struct_nested_0 **ptr)
{
 unsigned int local_ptr[2]; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 *ptr = malloc(8);
 if (!*ptr)
 {
 v1 = 4294967295;
 return v1;
 }
 (*ptr)->field_0 = 10;
 local_ptr[0] = (unsigned int)malloc(8);
 (*ptr)->field_4 = (struct_nested_1 *)local_ptr[0];
 if ((*ptr)->field_4)
 {
 (*ptr)->field_4->field_0 = 20;
 (*ptr)->field_4->field_4 = 0;
 v1 = 0;
 return v1;
 }
 free(*ptr);
 v1 = 4294967294;
 return v1;
}


// Function: linked_list_heap at 0x401bc0
typedef struct struct_list_node {
 unsigned int field_0;
 struct struct_list_node *field_4;
} struct_list_node;

extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int linked_list_heap()
{
 unsigned int v0; // [bp-0x30]
 struct_list_node *addr; // [bp-0x2c]
 struct_list_node *iter; // [bp-0x28]
 unsigned int v3; // [bp-0x24]
 struct_list_node *p; // [bp-0x20]
 struct_list_node *ptr; // [bp-0x1c]
 char i; // [bp-0x18], Other Possible Types: unsigned int
 struct_list_node *ptr5; // [bp-0x14]
 struct_list_node *cur; // [bp-0x10]
 unsigned int v9; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 memset(&i, 0, 12);
 for (; i < 5; i += 1)
 {
 ptr = malloc(8);
 if (!ptr)
 {
 while (cur)
 {
 p = cur;
 cur = cur->field_4;
 free(p);
 }
 v9 = 4294967295;
 return v9;
 }
 ptr->field_0 = i * 10;
 ptr->field_4 = NULL;
 if (!cur)
 {
 cur = ptr;
 ptr5 = ptr;
 }
 else
 {
 ptr5->field_4 = ptr;
 ptr5 = ptr;
 }
 }
 v3 = 0;
 for (iter = cur; iter; iter = iter->field_4)
 {
 v3 += iter->field_0;
 }
 while (cur)
 {
 addr = cur;
 cur = cur->field_4;
 free(addr);
 }
 v9 = v3;
 return v9;
}


// Function: sub_401d0e at 0x401d0e
int sub_401d0e(void)
{
 unsigned int *node = create_tree_node(10);
 if (node) free(node);
 return 0;
}


// Function: create_tree_node at 0x401d10
unsigned int *create_tree_node(unsigned int a0)
{
 unsigned int *ptr; // [bp-0xc]

 ptr = (unsigned int *)malloc(12);
 if (!ptr)
 return 0;
 ptr[0] = a0;
 ptr[1] = 0;
 ptr[2] = 0;
 return ptr;
}


// Function: sub_401d64 at 0x401d64
int sub_401d64(void)
{
 tree_heap_traversal();
 return 0;
}


// Function: tree_heap_traversal at 0x401d70
typedef struct struct_tree_node {
 unsigned int field_0;
 struct struct_tree_child1 *field_4;
 struct struct_tree_child2 *field_8;
} struct_tree_node;

typedef struct struct_tree_child1 {
 unsigned int field_0;
} struct_tree_child1;

typedef struct struct_tree_child2 {
 unsigned int field_0;
} struct_tree_child2;

extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int tree_heap_traversal()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 struct_tree_node *ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr = (struct_tree_node *)create_tree_node(10);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 ptr->field_4 = (struct struct_tree_child1 *)create_tree_node(20);
 ptr->field_8 = (struct struct_tree_child2 *)create_tree_node(30);
 if (ptr->field_4 && ptr->field_8)
 {
 v1 = ptr->field_0 + ptr->field_4->field_0 + ptr->field_8->field_0;
 free(ptr->field_4);
 free(ptr->field_8);
 free(ptr);
 v3 = v1;
 return v3;
 }
 if (ptr->field_4)
 free(ptr->field_4);
 if (ptr->field_8)
 free(ptr->field_8);
 free(ptr);
 v3 = 4294967294;
 return v3;
}


// Function: memory_leak at 0x401ea0
unsigned int memory_leak(unsigned int a0)
{
 unsigned int ptr; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int p; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 p = malloc(a0 * 4);
 if (!p)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 *((unsigned int *)(p + idx * 4)) = idx;
 }
 ptr = p;
 v3 = *((int *)(ptr + ((int)((a0 >> 31) ^ a0) % 2) + (int)((a0 >> 31) ^ a0) / 2) * 4));
 return v3;
}


// Function: sub_401f2f at 0x401f2f
int sub_401f2f(void)
{
 dangling_pointer();
 return 0;
}


// Function: dangling_pointer at 0x401f30
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int dangling_pointer()
{
 unsigned int v0; // [bp-0x28]
 char *v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v1 = (char *)&_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 42;
 v3 = *(ptr);
 v0 = v3;
 printf(v1 + 11973);
 free(ptr);
 v2 = *(ptr);
 v5 = v2;
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: sub_401fb9 at 0x401fb9
int sub_401fb9(void)
{
 unsigned int *p = malloc(4);
 if (p) *p = 10;
 double_free(p);
 return 0;
}


// Function: double_free at 0x401fc0
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int double_free(unsigned int *p)
{
 unsigned int v0; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (p)
 {
 v2 = *(p);
 return v2;
 }
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 10;
 free(ptr);
 free(ptr);
 v2 = 4294967294;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_40204d at 0x40204d
int sub_40204d(void)
{
 heap_overflow();
 return 0;
}


// Function: heap_overflow at 0x402050
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int heap_overflow()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(40);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 for (idx = 0; idx <= 10; idx += 1)
 {
 ptr[idx] = idx * 100;
 }
 v1 = *(ptr);
 free(ptr);
 v4 = v1;
 return v4;
}


// Function: sub_4020dc at 0x4020dc
int sub_4020dc(void)
{
 test_heap_memory();
 return 0;
}


// Function: test_heap_memory at 0x4020e0
typedef struct struct_testheap_0 {
 char padding_0[4];
 void* field_4;
} struct_testheap_0;

extern void *_GLOBAL_OFFSET_TABLE_;
extern char g_404152;

unsigned int test_heap_memory()
{
 unsigned int v6; // eax
 char *v0; // [bp-0x1c]
 int v1[1]; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 pid_t pid; // [bp-0x10]
 struct_testheap_0 *result; // [bp-0xc]

 v0 = (char *)&_GLOBAL_OFFSET_TABLE_;
 printf(&g_404152);
 heap_basic(10);
 printf(v0 + 11919);
 heap_calloc(5);
 printf(v0 + 11890);
 heap_realloc();
 printf(v0 + 11860);
 heap_array(10);
 printf(v0 + 11829);
 heap_struct(5);
 printf(v0 + 11800);
 result = NULL;
 heap_nested(&result);
 printf(v0 + 11770);
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 linked_list_heap();
 printf(v0 + 11740);
 tree_heap_traversal();
 printf(v0 + 11705);
 memory_leak(5);
 printf(v0 + 11667);
 printf(v0 + 11637);
 pid = fork();
 if (!pid)
 {
 v2 = dangling_pointer();
 printf(v0 + 11605);
 exit(0); /* do not return */
 }
 else if (pid > 0)
 {
 waitpid(pid, &v1, 0);
 if (!((char)*(v1) & 127))
 {
 v6 = printf(v0 + 11589);
 }
 else
 {
 v6 = ((*(v1) & 127) + 1 & 255) >> 1;
 if (v6 > 0)
 v6 = printf(v0 + 11552);
 }
 return v6;
 }
 else
 {
 return (unsigned int)perror(v0 + 11487);
 }
}


// Function: sub_402372 at 0x402372
void sub_402372()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x402380
extern unsigned int global_counter;

int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter;
}


// Function: sub_4023a6 at 0x4023a6
void sub_4023a6()
{
 global_var_read();
 return;
}


// Function: global_var_read at 0x4023b0
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_4023ca at 0x4023ca
void sub_4023ca()
{
 global_array_access(5);
 return;
}


// Function: global_array_access at 0x4023d0
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (a0 >= 0 && a0 < 10)
 {
 v1 = *((int *)(v0 + a0 * 4 + 80));
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: static_local at 0x402420
unsigned int static_local(unsigned int a0)
{
 static unsigned int counter = 0;
 unsigned int v1; // [bp-0x8];

 if (!a0)
 {
 counter = counter + 1;
 v1 = counter;
 return v1;
 }
 counter = 0;
 v1 = 0;
 return v1;
}


// Function: sub_40247e at 0x40247e
void sub_40247e()
{
 call_static_func(0);
 return;
}


// Function: call_static_func at 0x402480
int call_static_func(int a0)
{
 return static_helper(a0, 0) + 1;
}


// Function: sub_4024a8 at 0x4024a8
void sub_4024a8(unsigned int a0)
{
 static_helper(a0, 0);
 return;
}


// Function: static_helper at 0x4024b0
int static_helper(int a0, int a1)
{
 return a0 * 2;
}


// Function: sub_4024be at 0x4024be
int sub_4024be()
{
 access_extern_global();
 return 0;
}


// Function: access_extern_global at 0x4024c0
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_4024e2 at 0x4024e2
void sub_4024e2()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x4024f0
int call_extern_func()
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 v0 = 0;
 extern_function(5, *((int *)&v0));
 return v0;
}


// Function: sub_402513 at 0x402513
void sub_402513()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x402520
extern char *const_string;

int read_const_data()
{
 return *const_string + 42;
}


// Function: sub_40253e at 0x40253e
void sub_40253e()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x402540
extern unsigned int bss_var;

int access_bss_var()
{
 return bss_var;
}


// Function: sub_402557 at 0x402557
void sub_402557()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x402560
extern char bss_buffer;

int access_bss_buffer()
{
 return bss_buffer;
}


// Function: sub_402578 at 0x402578
void sub_402578()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x402580
extern unsigned int g_407080;
extern unsigned int global_point;

int global_struct_access()
{
 return global_point + g_407080;
}


// Function: sub_40259d at 0x40259d
void sub_40259d(void)
{
 set_file_static(50);
 return;
}


// Function: set_file_static at 0x4025a0
extern void *_GLOBAL_OFFSET_TABLE_;
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return 0;
}


// Function: sub_4025bd at 0x4025bd
void sub_4025bd()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x4025c0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4025d7 at 0x4025d7
void sub_4025d7()
{
 set_global_callback((unsigned int)&_GLOBAL_OFFSET_TABLE_ + 0x4600);
 return;
}


// Function: set_global_callback at 0x4025e0
extern void *_GLOBAL_OFFSET_TABLE_;
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return 0;
}


// Function: sub_4025fd at 0x4025fd
int sub_4025fd()
{
 call_global_callback();
 return;
}


// Function: call_global_callback at 0x402600
extern unsigned int global_func_ptr;

unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v1; // [bp-0xc];

 if (global_func_ptr)
 {
 v1 = ((unsigned int (*)(unsigned int))global_func_ptr)(a0);
 }
 else
 {
 v1 = 4294967295;
 }
 return v1;
}

unsigned int call_global_callback_noarg(void)
{
 unsigned int v1; // [bp-0xc];

 if (global_func_ptr)
 {
 v1 = ((unsigned int (*)(void))global_func_ptr)();
 }
 else
 {
 v1 = 4294967295;
 }
 return v1;
}


// Function: sub_40264f at 0x40264f
void sub_40264f()
{
 global_heap_store();
 return;
}


// Function: global_heap_store at 0x402650
extern unsigned int global_heap_ptr;

unsigned int global_heap_store(void)
{
 unsigned int v1; // [bp-0x8]

 if (global_heap_ptr)
 {
 v1 = global_heap_ptr;
 }
 else
 {
 v1 = 4294967295;
 }
 return v1;
}


// Function: static_complex_init at 0x4026a0
extern unsigned int complex_init;
extern unsigned int g_407090;
extern unsigned int g_407098;

int static_complex_init()
{
 return complex_init + g_407090 + g_407098;
}


// Function: sub_4026c3 at 0x4026c3
void sub_4026c3()
{
 tls_access();
 return;
}


// Function: tls_access at 0x4026d0
unsigned int tls_access()
{
 static unsigned int tls_var;
 tls_var = 0;
 return tls_var * 2;
}


// Function: sub_4026ea at 0x4026ea
int sub_4026ea()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x4026f0
int init_order_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 20;
 init_depends_on();
 return 0;
}


// Function: sub_40271b at 0x40271b
void sub_40271b()
{
 init_depends_on();
 return;
}


// Function: init_depends_on at 0x402720
int init_depends_on()
{
 return 0;
}


// Function: sub_40275c at 0x40275c
int sub_40275c()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x402760
extern void *_GLOBAL_OFFSET_TABLE_;
extern char g_404337;

int test_static_global()
{
 unsigned int count; // [bp-0x18]
 char *v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_404337);
 count = global_var_access();
 printf(v1 + 11428);
 count = global_var_read();
 printf(v1 + 11393);
 count = global_array_access(5);
 printf(v1 + 11360);
 static_local(1);
 count = static_local(0);
 printf(v1 + 11323);
 count = static_local(0);
 printf(v1 + 11323);
 count = call_static_func(5);
 printf(v1 + 11293);
 count = access_extern_global();
 printf(v1 + 11259);
 count = (unsigned int)call_extern_func();
 printf(v1 + 11221);
 count = read_const_data();
 printf(v1 + 11187);
 count = access_bss_var();
 printf(v1 + 11154);
 count = access_bss_buffer();
 printf(v1 + 11122);
 count = global_struct_access();
 printf(v1 + 11087);
 set_file_static(50);
 count = get_file_static();
 printf(v1 + 11049);
 set_global_callback(0);
 count = call_global_callback(5);
 printf(v1 + 11020);
 v2 = 100;
 count = global_heap_store();
 printf(v1 + 10987);
 count = static_complex_init();
 printf(v1 + 10952);
 count = tls_access();
 printf(v1 + 10915);
 count = init_order_test();
 return printf(v1 + 10887);
}


// Function: sub_4029fe at 0x4029fe
void sub_4029fe(unsigned int unused_param)
{
 double_value();
 return;
}


// Function: double_value at 0x402a00
unsigned int double_value()
{
 return 10 * 2;
}


// Function: sub_402a0e at 0x402a0e
int sub_402a0e()
{
 char dummy[10];
 memop_memset(dummy, 10, 0);
 return 0;
}


// Function: memop_memset at 0x402a10
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int memop_memset(char *ptr, unsigned int n, char a2)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (ptr && n)
 {
 memset(ptr, a2, n);
 v1 = *(ptr);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402a82 at 0x402a82
int sub_402a82()
{
 char src[10], dst[10];
 memop_memcpy(dst, src, 10);
 return 0;
}


// Function: memop_memcpy at 0x402a90
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int memop_memcpy(void* ptr, void* a1, unsigned int n)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (ptr && a1 && n)
 {
 memcpy(ptr, a1, n);
 v1 = *((int *)(-4 + (char *)ptr + 4 * (n >> 2)));
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: memop_memmove at 0x402b10
typedef struct struct_memmove_0 {
 char padding_0[1];
 char field_1;
} struct_memmove_0;

extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int memop_memmove(void *ptr, void *a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (ptr && a1 && a2 >= 2)
 {
 struct_memmove_0 *p = (struct_memmove_0 *)ptr;
 memmove(&p->field_1, a1, a2 - 1);
 v1 = p->field_1;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402b82 at 0x402b82
int sub_402b82()
{
 char buf1[10], buf2[10];
 memop_memcmp(buf1, buf2, 10);
 return 0;
}


// Function: memop_memcmp at 0x402b90
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v1 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (a0 && a1 && a2)
 {
 v2 = memcmp(a0, a1, a2);
 if (v2 > 0)
 v0 = 1;
 else
 v0 = (v2 < 0 ? 4294967295 : 0);
 v3 = v0;
 return v3;
 }
 v3 = 0;
 return v3;
}


// Function: sub_402c32 at 0x402c32
int sub_402c32()
{
 char buf[10];
 memop_bzero(buf, 10);
 return 0;
}


// Function: memop_bzero at 0x402c40
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int memop_bzero(char *ptr, unsigned int n)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (ptr)
 {
 memset(ptr, 0, n);
 v1 = *(ptr);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402ca3 at 0x402ca3
int sub_402ca3()
{
 char src[10], dst[10];
 memop_bcopy(src, dst, 10);
 return 0;
}


// Function: memop_bcopy at 0x402cb0
extern void *_GLOBAL_OFFSET_TABLE_;

unsigned int memop_bcopy(void *ptr, const void *a0, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (a0 && ptr && a2)
 {
 bcopy(a0, ptr, a2);
 v1 = *(ptr);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402d27 at 0x402d27
void sub_402d27()
{
 unsigned int buf;
 memop_unaligned_access(&buf);
 return;
}


// Function: memop_unaligned_access at 0x402d30
typedef struct struct_unaligned_0 {
 char padding_0;
} struct_unaligned_0;

unsigned int memop_unaligned_access(void *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (ptr)
 {
 struct_unaligned_0 *p = (struct_unaligned_0 *)ptr;
 v0 = *((int *)&p->padding_0 + 1);
 v1 = v0;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402d66 at 0x402d66
void sub_402d66()
{
 unsigned int val = 42;
 memop_memory_barrier(&val);
 return;
}


// Function: memop_memory_barrier at 0x402d70
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (ptr)
 {
 v0 = *(ptr);
 atomic_exchange(&v0, v0);
 v1 = v0 + *(ptr);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402db1 at 0x402db1
int sub_402db1()
{
 test_memory_op_functions();
 return;
}


// Function: test_memory_op_functions at 0x402dc0
extern void *_GLOBAL_OFFSET_TABLE_;
extern char g_40459a;

int test_memory_op_functions()
{
 void* p; // ebx
 void* ptr; // ebx
 void* addr; // ebx
 void* ptr3; // [bp-0x178]
 unsigned int v1[1]; // [bp-0x174]
 unsigned int v2; // [bp-0x16e]
 unsigned int v3; // [bp-0x16a]
 char v4; // [bp-0x166]
 unsigned int v5; // [bp-0x162]
 char v6[10]; // [bp-0x15e]
 unsigned int v7; // [bp-0x154]
 unsigned int v8; // [bp-0x150]
 unsigned int v9; // [bp-0x14c]
 unsigned int v10; // [bp-0x148]
 unsigned int v11; // [bp-0x144]
 unsigned int v12; // [bp-0x140]
 unsigned int v13; // [bp-0x13b]
 unsigned int v14; // [bp-0x137]
 unsigned short v15; // [bp-0x133]
 char v16; // [bp-0x131]
 char v17; // [bp-0x130]
 char v18; // [bp-0x11c]
 char v19[256]; // [bp-0x108]

 ptr3 = &_GLOBAL_OFFSET_TABLE_;
 printf(&g_40459a);
 memcpy(&v18, ptr3 - 10676, 20);
 memset(&v17, 0, 20);
 memop_memset((char *)&v19, 10, 65);
 printf(ptr3 - 10820);
 memop_memcpy((void *)&v17, (void *)&v18, 20);
 printf(ptr3 - 10803);
 p = ptr3;
 v13 = *((int*)((char*)p + 11476));
 v14 = *((int*)((char*)p + 11472));
 v15 = *((short*)((char*)p + 11468));
 v16 = *((char*)((char*)p + 11466));
 memop_memmove(&v13, &v14, 10);
 printf(ptr3 - 10786);
 ptr = ptr3;
 v10 = *((int*)((char*)ptr + 10656));
 v11 = *((int*)((char*)ptr + 10652));
 v12 = *((int*)((char*)ptr + 10648));
 v7 = *((int*)((char*)ptr + 10644));
 v8 = *((int*)((char*)ptr + 10640));
 v9 = *((int*)((char*)ptr + 10636));
 memop_memcmp(&v10, &v7, 12);
 printf(ptr3 - 10769);
 memop_bzero(&v6, 10);
 printf(ptr3 - 0x2a00);
 v5 = *((int*)((char*)ptr3 + 10632));
 memset(&v4, 0, 4);
 memop_bcopy(&v4, &v5, 4);
 printf(ptr3 - 10735);
 addr = ptr3;
 v2 = *((int*)((char*)addr + 10628));
 v3 = *((int*)((char*)addr + 10624));
 memop_unaligned_access(&v2);
 printf(ptr3 - 10718);
 v1[0] = 5;
 memop_memory_barrier(&v1);
 return printf(ptr3 - 10699);
}


// Function: sub_4030c3 at 0x4030c3
int sub_4030c3()
{
 main();
 return;
}


// Function: main at 0x4030d0
extern void *_GLOBAL_OFFSET_TABLE_;

int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_403112 at 0x403112
void sub_403112(void)
{
 extern_function(0, 0);
 return;
}


// Function: extern_function at 0x403120
int extern_function(int a0, int a1)
{
 return a0 * 3;
}


// Function: sub_40312c at 0x40312c
void sub_40312c()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux(void)
{
 return;
}


// Function: sub_403172 at 0x403172
void sub_403172()
{
}



/* CRT stub function _fini removed by preprocessor */


