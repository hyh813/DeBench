// Angr Decompilation of 3_clang_O0_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdint.h>

// Define bcopy as memcpy for portability
#define bcopy(src, dst, n) memcpy(dst, src, n)

/* CRT stub function _init removed by preprocessor */

// Forward declarations
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
unsigned int *__do_global_dtors_aux(void);
unsigned int local_vars(unsigned int a0);
unsigned int local_array(unsigned int a0);
int local_struct(unsigned int a0);
unsigned int address_of_local(unsigned int ptr);
unsigned int address_of_array(unsigned int *a0);
int large_stack_frame();
unsigned int vla_stack(unsigned int a0);
unsigned int alloca_usage(unsigned int a0);
unsigned int stack_alias();

// Stub function definitions
void frame_dummy(void) { }

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_1;
    struct struct_0 *field_4;
    unsigned int field_8;
    char padding_0[256];
    char padding_5dd7[256];
    char field_5e37[256];
    char padding_5e37[256];
} struct_0;

extern struct_0 *g_406ff4;
void (*g_406ff4_func)() = NULL;
extern unsigned char _GLOBAL_OFFSET_TABLE_[];
extern unsigned int extern_global_var;
extern unsigned int global_counter;

// Unified struct definitions to avoid redefinition errors
typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct tree_node {
 unsigned int field_0;
 struct tree_node *field_4;
 struct tree_node *field_8;
} tree_node;

static int _init()
{
 if (g_406ff4_func)
 g_406ff4_func();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 ptr[0] = 0;
 ptr[1] = 0;
 ptr[2] = 0;
 v0 = ptr[1];
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 void* v1; // ebx

 v1 = NULL;
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
 // deregister_tm_clones();
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
 // register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */


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

unsigned int * __do_global_dtors_aux()
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



// Function: __x86_get_pc_thunk_dx at 0x4012a9
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4012ad
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
 address_of_local(a0);
 return;
}


// Function: address_of_local at 0x401360
unsigned int address_of_local(unsigned int ptr)
{
 unsigned int v0; // [bp-0x8]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: sub_40137e at 0x40137e
void sub_40137e(unsigned int a0)
{
 address_of_array(a0);
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




// Additional forward declarations
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc();
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned int heap_nested(struct_0 **p_ptr);
unsigned int linked_list_heap();
tree_node* create_tree_node(unsigned int a0);
unsigned int tree_heap_traversal();
unsigned int memory_leak(unsigned int a0);
unsigned int dangling_pointer();
unsigned int double_free(unsigned int *p);
unsigned int heap_overflow();
int global_var_access();
unsigned int global_var_read();
unsigned int global_array_access(unsigned int a0);
unsigned int static_local(unsigned int a0);
int static_helper(int a0, int a1, void *a2);
int call_static_func(unsigned int a0);
int access_extern_global();
void call_extern_func();
int read_const_data();
int access_bss_var();
int access_bss_buffer();
int global_struct_access();
int set_file_static(unsigned int a0);
int get_file_static();
int set_global_callback(unsigned int a0);
unsigned int call_global_callback(unsigned int a0);
unsigned int global_heap_store(unsigned int a0);
int static_complex_init();
unsigned int tls_access(unsigned int a0);
int init_order_test();
int init_depends_on(unsigned int val);
unsigned int double_value(unsigned int a0);
unsigned int memop_memset(char *ptr, unsigned int n, char a2);
unsigned int memop_memcpy(void* ptr, void* a1, unsigned int n);
unsigned int memop_memmove(void *ptr, void *src, unsigned int n);
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2);
unsigned int memop_bzero(char *ptr, unsigned int n);
unsigned int memop_bcopy(void* a0, char *ptr, unsigned int a2);
unsigned int memop_unaligned_access(struct_0 *ptr);
unsigned int memop_memory_barrier(unsigned int *ptr);
int extern_function(int a0, int a1, void *a2);
unsigned int test_heap_memory();
int test_memory_op_functions();


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
 ptr = &v0;
 v3 = a0;
 for (idx = 0; idx < a0; idx += 1)
 {
 ((unsigned int *)ptr)[idx] = idx * 2;
 }
 v5 = ((unsigned int *)ptr)[a0 / 2];
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: sub_4014ac at 0x4014ac
void sub_4014ac(unsigned int a0)
{
 alloca_usage(a0);
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
 p = &v0;
 for (idx = 0; idx < a0; idx += 1)
 {
 ((unsigned int *)p)[idx] = idx * 3;
 }
 ptr = p;
 v4 = ((unsigned int *)ptr)[a0 / 2];
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
 v2 = (char *)&v0;
 v3 = (char *)&v0;
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
 return test_stack_memory();
}


// Function: test_stack_memory at 0x4015a0
char g_404008 = 0;

int test_stack_memory()
{
 unsigned int *v0; // [bp-0x3c]
 unsigned int flag1; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 unsigned int v5; // [bp-0x2c]
 char v6; // [bp-0xc]

 v0 = _GLOBAL_OFFSET_TABLE_;
 printf("%s", &g_404008);
 local_vars(5);
 printf("%s", (char*)v0 + 12249);
 local_array(2);
 printf("%s", (char*)v0 + 12221);
 local_struct(5);
 printf("%s", (char*)v0 + 12192);
 address_of_local((unsigned int)&v6);
 printf("%s", (char*)v0 + 12162);
 memset(&result, 0, 40);
 result = 1;
 v4 = 2;
 v5 = 3;
 address_of_array(&result);
 printf("%s", (char*)v0 + 12128);
 large_stack_frame();
 printf("%s", (char*)v0 + 12094);
 vla_stack(10);
 printf("%s", (char*)v0 + 12059);
 alloca_usage(10);
 printf("%s", (char*)v0 + 0x2f00);
 flag1 = 0;
 stack_alias();
 return printf("%s", (char*)v0 + 12002);
}


// Function: sub_401744 at 0x401744
int sub_401744()
{
 return heap_basic(10);
}


// Function: heap_basic at 0x401750
unsigned int heap_basic(unsigned int a0)
{
 void* p; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 ((unsigned int *)ptr)[idx] = idx * 2;
 }
 p = ptr;
 v2 = ((unsigned int *)p)[a0 / 2];
 free(ptr);
 v5 = v2;
 return v5;
}


// Function: sub_4017f9 at 0x4017f9
int sub_4017f9()
{
 return heap_calloc(5);
}


// Function: heap_calloc at 0x401800
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int idx; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = calloc(a0, 4);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 v2 = 0;
 for (idx = 0; idx < a0; idx += 1)
 {
 v2 += ((int *)ptr)[idx];
 }
 free(ptr);
 v4 = v2;
 return v4;
}


// Function: sub_401899 at 0x401899
int sub_401899()
{
 heap_realloc();
 return 0;
}


// Function: heap_realloc at 0x4018a0
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

 v1 = &_GLOBAL_OFFSET_TABLE_;
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
 ptr = (unsigned int *)realloc(ptr, 40);
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
int sub_4019ce()
{
 heap_array(10);
 return 0;
}


// Function: heap_array at 0x4019d0
unsigned int heap_array(unsigned int a0)
{
 void* p; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 for (v3 = 0; v3 < a0; v3 += 1)
 {
 ((unsigned int *)ptr)[v3] = v3 * 3;
 }
 p = ptr;
 v2 = ((int *)p)[a0 / 2];
 free(ptr);
 v5 = v2;
 return v5;
}


// Function: sub_401a77 at 0x401a77
int sub_401a77()
{
 heap_struct(5);
 return 0;
}


// Function: heap_struct at 0x401a80
unsigned int heap_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = (unsigned int *)malloc(8);
 if (ptr)
 {
 ptr[0] = a0;
 ptr[1] = a0 * 2;
 v1 = ptr[0] + ptr[1];
 free(ptr);
 v3 = v1;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_401afd at 0x401afd
int sub_401afd()
{
 struct_0 *result = NULL;
 heap_nested(&result);
 return 0;
}


// Function: heap_nested at 0x401b00
unsigned int heap_nested(struct_0 **p_ptr)
{
 struct_0 *ptr; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 *p_ptr = (struct_0 *)malloc(8);
 if (!(*p_ptr))
 {
 v1 = 4294967295;
 return v1;
 }
 (*p_ptr)->field_0 = 10;
 ptr = (struct_0 *)malloc(8);
 (*p_ptr)->field_4 = ptr;
 if ((*p_ptr)->field_4)
 {
 (*p_ptr)->field_4->field_0 = 20;
 (*p_ptr)->field_4->field_4 = 0;
 v1 = 0;
 return v1;
 }
 free(*p_ptr);
 v1 = 4294967294;
 return v1;
}


// Function: linked_list_heap at 0x401bc0
unsigned int linked_list_heap()
{
 unsigned int v0; // [bp-0x30]
 struct_0 *addr; // [bp-0x2c]
 struct_0 *iter; // [bp-0x28]
 unsigned int v3; // [bp-0x24]
 struct_0 *p; // [bp-0x20]
 struct_0 *ptr; // [bp-0x1c]
 unsigned int i; // [bp-0x18]
 struct_0 *ptr5; // [bp-0x14]
 struct_0 *cur; // [bp-0x10]
 unsigned int v9; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 cur = NULL;
 ptr5 = NULL;
 for (i = 0; i < 5; i += 1)
 {
 ptr = (struct_0 *)malloc(8);
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
int sub_401d0e()
{
 create_tree_node(10);
 return 0;
}


// Function: create_tree_node at 0x401d10
tree_node* create_tree_node(unsigned int a0)
{
 tree_node *ptr; // [bp-0xc]

 ptr = (tree_node *)malloc(12);
 if (!ptr)
 return NULL;
 ptr->field_0 = a0;
 ptr->field_4 = NULL;
 ptr->field_8 = NULL;
 return ptr;
}


// Function: sub_401d64 at 0x401d64
int sub_401d64()
{
 tree_heap_traversal();
 return 0;
}


// Function: tree_heap_traversal at 0x401d70
unsigned int tree_heap_traversal()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 tree_node *ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = create_tree_node(10);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 ptr->field_4 = (struct struct_1 *)create_tree_node(20);
 ptr->field_8 = (struct struct_2 *)create_tree_node(30);
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
 unsigned int *ptr; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int *p; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 p = (unsigned int *)malloc(a0 * 4);
 if (!p)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 p[idx] = idx;
 }
 ptr = p;
 v3 = ptr[a0 / 2];
 return v3;
}


// Function: sub_401f2f at 0x401f2f
int sub_401f2f()
{
 dangling_pointer();
 return 0;
}


// Function: dangling_pointer at 0x401f30
unsigned int dangling_pointer()
{
 unsigned int v0; // [bp-0x28]
 char *v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v1 = &_GLOBAL_OFFSET_TABLE_;
 ptr = (unsigned int *)malloc(4);
 if (ptr)
 {
 *ptr = 42;
 v3 = *ptr;
 v0 = v3;
 printf("%s", v1 + 11973);
 free(ptr);
 v2 = *ptr;
 v5 = v2;
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: sub_401fb9 at 0x401fb9
int sub_401fb9()
{
 double_free(NULL);
 return 0;
}


// Function: double_free at 0x401fc0
unsigned int double_free(unsigned int *p)
{
 unsigned int v0; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (p)
 {
 v2 = *p;
 return v2;
 }
 ptr = (unsigned int *)malloc(4);
 if (ptr)
 {
 *ptr = 10;
 free(ptr);
 free(ptr);
 v2 = 4294967294;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_40204d at 0x40204d
int sub_40204d()
{
 heap_overflow();
 return 0;
}


// Function: heap_overflow at 0x402050
unsigned int heap_overflow()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 ptr = (unsigned int *)malloc(40);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 for (idx = 0; idx <= 10; idx += 1)
 {
 ptr[idx] = idx * 100;
 }
 v1 = *ptr;
 free(ptr);
 v4 = v1;
 return v4;
}


// Function: sub_4020dc at 0x4020dc
int sub_4020dc()
{
 test_heap_memory();
 return 0;
}


// Function: test_heap_memory at 0x4020e0
char g_404152 = 0;

unsigned int test_heap_memory()
{
 unsigned int v6; // eax
 unsigned int *v0; // [bp-0x1c]
 unsigned int v1[1]; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int pid; // [bp-0x10]
 struct_0 *result; // [bp-0xc]

 v0 = _GLOBAL_OFFSET_TABLE_;
 printf("%s", &g_404152);
 heap_basic(10);
 printf("%s", (char*)v0 + 11919);
 heap_calloc(5);
 printf("%s", (char*)v0 + 11890);
 heap_realloc();
 printf("%s", (char*)v0 + 11860);
 heap_array(10);
 printf("%s", (char*)v0 + 11829);
 heap_struct(5);
 printf("%s", (char*)v0 + 11800);
 result = NULL;
 heap_nested(&result);
 printf("%s", (char*)v0 + 11770);
 if (result)
 {
 free(result->field_4);
 free(result);
 }
 linked_list_heap();
 printf("%s", (char*)v0 + 11740);
 tree_heap_traversal();
 printf("%s", (char*)v0 + 11705);
 memory_leak(5);
 printf("%s", (char*)v0 + 11667);
 printf("%s", (char*)v0 + 11637);
 pid = fork();
 if (!pid)
 {
 v2 = dangling_pointer();
 printf("%s", (char*)v0 + 11605);
 exit(0); /* do not return */
 }
 else if (pid > 0)
 {
 waitpid(pid, (int *)v1, 0);
 if (!((char)*(v1) & 127))
 {
 v6 = printf("%s", (char*)v0 + 11589);
 }
 else
 {
 v6 = ((*(v1) & 127) + 1 & 255) >> 1;
 if (v6 > 0)
 v6 = printf("%s", (char*)v0 + 11552);
 }
 return v6;
 }
 else
 {
 perror((char*)v0 + 11487);
 return 0;
 }
}


// Function: sub_402372 at 0x402372
void sub_402372()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x402380
unsigned int global_counter = 0;

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
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_4023ca at 0x4023ca
void sub_4023ca(unsigned int a0)
{
 global_array_access(a0);
 return;
}


// Function: global_array_access at 0x4023d0
unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (a0 >= 0 && a0 < 10)
 {
 v1 = ((int *)(v0 + a0 * 4 + 80))[0];
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: static_local at 0x402420
unsigned int static_local(unsigned int a0)
{
 static unsigned int counter = 0;
 unsigned int v1; // [bp-0x8]

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
int sub_40247e()
{
 call_static_func(5);
 return 0;
}


// Function: call_static_func at 0x402480
int call_static_func(unsigned int a0)
{
 return static_helper(a0, 0, NULL) + 1;
}


// Function: sub_4024a8 at 0x4024a8
void sub_4024a8(unsigned int a0)
{
 static_helper(a0, 0, NULL);
 return;
}


// Function: static_helper at 0x4024b0
int static_helper(int a0, int a1, void *a2)
{
 return a0 * 2;
}


// Function: sub_4024be at 0x4024be
void sub_4024be()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x4024c0
unsigned int extern_global_var = 0;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_4024e2 at 0x4024e2
int sub_4024e2()
{
 call_extern_func();
 return 0;
}


// Function: call_extern_func at 0x4024f0
void call_extern_func()
{
 extern_function(5, 0, NULL);
 return;
}


// Function: sub_402513 at 0x402513
void sub_402513()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x402520
struct_0 _const_string_data = {0, 0, NULL, 0, {0}, {0}, {0}, {0}};
struct_0 *const_string = &_const_string_data;

int read_const_data()
{
 return (unsigned int)const_string->field_4 + 42;
}


// Function: sub_40253e at 0x40253e
void sub_40253e()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x402540
unsigned int bss_var = 0;

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
char bss_buffer = 0;

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
unsigned int g_407080 = 0;
unsigned int global_point = 0;

int global_struct_access()
{
 return global_point + g_407080;
}


// Function: sub_40259d at 0x40259d
void sub_40259d(unsigned int a0)
{
 set_file_static(a0);
 return;
}


// Function: set_file_static at 0x4025a0
unsigned int file_scope_static = 0;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return (int)_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_4025bd at 0x4025bd
void sub_4025bd()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x4025c0
int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4025d7 at 0x4025d7
void sub_4025d7(unsigned int a0)
{
 set_global_callback(a0);
 return;
}


// Function: set_global_callback at 0x4025e0
unsigned int global_func_ptr = 0;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return (int)_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_4025fd at 0x4025fd
int sub_4025fd()
{
 call_global_callback(5);
 return 0;
}


// Function: call_global_callback at 0x402600
unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)_GLOBAL_OFFSET_TABLE_;
 v1 = (!global_func_ptr ? 4294967295 : global_func_ptr);
 return v1;
}


// Function: sub_40264f at 0x40264f
void sub_40264f(unsigned int a0)
{
 global_heap_store(a0);
 return;
}


// Function: global_heap_store at 0x402650
unsigned int global_heap_ptr = 0;

unsigned int global_heap_store(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v0 = (unsigned int)_GLOBAL_OFFSET_TABLE_;
 global_heap_ptr = a0;
 v1 = (!global_heap_ptr ? 4294967295 : a0);
 return v1;
}


// Function: static_complex_init at 0x4026a0
unsigned int complex_init = 0;
unsigned int g_407090 = 0;
unsigned int g_407098 = 0;

int static_complex_init()
{
 return complex_init + g_407090 + g_407098;
}


// Function: sub_4026c3 at 0x4026c3
void sub_4026c3(unsigned int a0)
{
 tls_access(a0);
 return;
}


// Function: tls_access at 0x4026d0
unsigned int tls_access(unsigned int a0)
{
 static unsigned int tls_var = 0;
 tls_var = a0;
 return tls_var * 2;
}


// Function: sub_4026ea at 0x4026ea
int sub_4026ea()
{
 init_order_test();
 return 0;
}


// Function: init_order_test at 0x4026f0
int init_order_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 20;
 return init_depends_on(v0);
}


// Function: sub_40271b at 0x40271b
void sub_40271b(unsigned int a0)
{
 init_depends_on(a0);
 return;
}


// Function: init_depends_on at 0x402720
int init_depends_on(unsigned int val)
{
 static unsigned int stored_val = 0;
 stored_val = val;
 return stored_val;
}


// Function: sub_40275c at 0x40275c
int sub_40275c()
{
 test_static_global();
 return 0;
}


// Function: test_static_global at 0x402760
char g_404337 = 0;

int test_static_global()
{
 unsigned int count; // [bp-0x18]
 unsigned int *v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v1 = _GLOBAL_OFFSET_TABLE_;
 printf("%s", &g_404337);
 count = global_var_access();
 printf("%s", (char*)v1 + 11428);
 count = global_var_read();
 printf("%s", (char*)v1 + 11393);
 count = global_array_access(5);
 printf("%s", (char*)v1 + 11360);
 static_local(1);
 count = static_local(0);
 printf("%s", (char*)v1 + 11323);
 count = static_local(0);
 printf("%s", (char*)v1 + 11323);
 count = call_static_func(5);
 printf("%s", (char*)v1 + 11293);
 count = access_extern_global();
 printf("%s", (char*)v1 + 11259);
 call_extern_func();
 printf("%s", (char*)v1 + 11221);
 count = read_const_data();
 printf("%s", (char*)v1 + 11187);
 count = access_bss_var();
 printf("%s", (char*)v1 + 11154);
 count = access_bss_buffer();
 printf("%s", (char*)v1 + 11122);
 count = global_struct_access();
 printf("%s", (char*)v1 + 11087);
 set_file_static(50);
 count = get_file_static();
 printf("%s", (char*)v1 + 11049);
 set_global_callback((unsigned int)((char*)v1 + 0x4600));
 count = call_global_callback(5);
 printf("%s", (char*)v1 + 11020);
 v2 = 100;
 count = global_heap_store(v2);
 printf("%s", (char*)v1 + 10987);
 count = static_complex_init();
 printf("%s", (char*)v1 + 10952);
 count = tls_access(10);
 printf("%s", (char*)v1 + 10915);
 count = init_order_test();
 return printf("%s", (char*)v1 + 10887);
}


// Function: sub_4029fe at 0x4029fe
void sub_4029fe(unsigned int a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x402a00
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402a0e at 0x402a0e
int sub_402a0e()
{
 char buf[10];
 memop_memset(buf, 10, 65);
 return 0;
}


// Function: memop_memset at 0x402a10
unsigned int memop_memset(char *ptr, unsigned int n, char a2)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (ptr && n)
 {
 memset(ptr, a2, n);
 v1 = *(unsigned char *)ptr;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402a82 at 0x402a82
int sub_402a82()
{
 char src[20], dst[20];
 memop_memcpy(dst, src, 20);
 return 0;
}


// Function: memop_memcpy at 0x402a90
unsigned int memop_memcpy(void* ptr, void* a1, unsigned int n)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (ptr && a1 && n)
 {
 memcpy(ptr, a1, n);
 v1 = ((unsigned int *)ptr)[(n >> 2) - 1];
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: memop_memmove at 0x402b10
unsigned int memop_memmove(void *ptr, void *src, unsigned int n)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v0 = (unsigned int)&_GLOBAL_OFFSET_TABLE_;
 if (ptr && src && n >= 2)
 {
 memmove((char *)ptr + 4, (char *)src, n - 1);
 v1 = *(unsigned char *)((char *)ptr + 4);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402b82 at 0x402b82
int sub_402b82()
{
 char a[10], b[10];
 memop_memcmp(a, b, 10);
 return 0;
}


// Function: memop_memcmp at 0x402b90
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v1 = &_GLOBAL_OFFSET_TABLE_;
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
unsigned int memop_bzero(char *ptr, unsigned int n)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (ptr)
 {
 memset(ptr, 0, n);
 v1 = *(unsigned char *)ptr;
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
unsigned int memop_bcopy(void* a0, char *ptr, unsigned int a2)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 if (a0 && ptr && a2)
 {
 bcopy(a0, ptr, a2);
 v1 = *(unsigned char *)ptr;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402d27 at 0x402d27
void sub_402d27(unsigned int a0)
{
 struct_0 s;
 memop_unaligned_access(&s);
 return;
}


// Function: memop_unaligned_access at 0x402d30

unsigned int memop_unaligned_access(struct_0 *ptr)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 if (ptr)
 {
 v0 = ptr->field_1;
 v1 = v0;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402d66 at 0x402d66
void sub_402d66(unsigned int a0)
{
 unsigned int val = a0;
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
 v0 = *ptr;
 v1 = v0 + *ptr;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_402db1 at 0x402db1
int sub_402db1()
{
 test_memory_op_functions();
 return 0;
}


// Function: test_memory_op_functions at 0x402dc0
char g_40459a = 0;

int test_memory_op_functions()
{
 char* p; // ebx
 char* ptr; // ebx
 char* addr; // ebx
 char* ptr3; // [bp-0x178]
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

 ptr3 = (char*)_GLOBAL_OFFSET_TABLE_;
 printf("%s", &g_40459a);
 memcpy(&v18, ptr3 - 10676, 20);
 memset(&v17, 0, 20);
 memop_memset(&v19, 10, 65);
 printf("%s", ptr3 - 10820);
 memop_memcpy(&v17, &v18, 20);
 printf("%s", ptr3 - 10803);
 p = (char*)ptr3;
 v13 = (int)*((unsigned int*)(p + 11476 * 4));
 v14 = (int)*((unsigned int*)(p + 11472 * 4));
 v15 = (short)*((unsigned short*)(p + 11468 * 2));
 v16 = (char)*((unsigned char*)(p + 11466));
 memop_memmove(&v13, &v14, 10);
 printf("%s", ptr3 - 10786);
 ptr = (char*)ptr3;
 v10 = (int)*((unsigned int*)(ptr + 10656 * 4));
 v11 = (int)*((unsigned int*)(ptr + 10652 * 4));
 v12 = (int)*((unsigned int*)(ptr + 10648 * 4));
 v7 = (int)*((unsigned int*)(ptr + 10644 * 4));
 v8 = (int)*((unsigned int*)(ptr + 10640 * 4));
 v9 = (int)*((unsigned int*)(ptr + 10636 * 4));
 memop_memcmp(&v10, &v7, 12);
 printf("%s", ptr3 - 10769);
 memop_bzero(&v6, 10);
 printf("%s", ptr3 - 0x2a00);
 v5 = *((unsigned int*)((char*)ptr3 + 10632 * 4));
 memset(&v4, 0, 4);
 memop_bcopy(&v5, &v4, 4);
 printf("%s", ptr3 - 10735);
 addr = (char*)ptr3;
 v2 = (int)*((unsigned int*)(addr + 10628 * 4));
 v3 = (int)*((unsigned int*)(addr + 10624 * 4));
 memop_unaligned_access(&v2);
 printf("%s", ptr3 - 10718);
 v1[0] = 5;
 memop_memory_barrier(&v1[0]);
 return printf("%s", ptr3 - 10699);
}


// Function: sub_4030c3 at 0x4030c3
int sub_4030c3()
{
 return main();
}


// Function: main at 0x4030d0
int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_403112 at 0x403112
void sub_403112(unsigned int a0)
{
 extern_function(a0, 0, NULL);
 return;
}


// Function: extern_function at 0x403120
static int extern_function(int a0, int a1, void *a2)
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


unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_403172 at 0x403172
void sub_403172()
{
}



/* CRT stub function _fini removed by preprocessor */





