// Angr Decompilation of 3_clang_O0_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <sys/wait.h>

/* External global variables */
extern unsigned int global_counter;
extern unsigned int global_array[4];
extern unsigned int static_local_counter;
extern unsigned int extern_global_var;
extern unsigned int bss_var;
extern char bss_buffer;
extern unsigned int global_point;
extern unsigned int g_4060d4;
extern unsigned int file_scope_static;
extern unsigned long long (*global_func_ptr)(unsigned int);
extern unsigned int global_heap_value;
extern unsigned int complex_init;
extern unsigned int g_4060e8;
extern unsigned int g_4060f0;
extern unsigned int init_depends_on_static_depends;
extern struct struct_10 *const_string;

/* Forward struct declarations */
struct struct_10;
struct struct_14;

/* Forward typedef declarations */
typedef struct struct_14 struct_14;

extern struct struct_14 *global_heap_ptr;

/* External functions */
extern unsigned int extern_function(unsigned int a0);
extern unsigned long long double_value(unsigned int a0);

/* Forward function declarations */
unsigned int local_vars(unsigned int a0);

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_3;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_4 *field_8;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_5;

typedef struct struct_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_7 *field_8;
 struct struct_8 *field_10;
} struct_6;

typedef struct struct_7 {
 unsigned int field_0;
} struct_7;

typedef struct struct_8 {
 unsigned int field_0;
} struct_8;

typedef struct struct_9 {
 char padding_0[8];
 void* field_8;
} struct_9;

typedef struct struct_10 {
 char padding_0[4];
 char field_4;
} struct_10;

typedef struct struct_11 {
 char padding_0[1];
 char field_1;
} struct_11;

typedef struct struct_12 {
 char padding_0[1];
 unsigned int field_1;
} struct_12;

typedef struct struct_13 {
 unsigned long long field_0;
} struct_13;

typedef struct struct_14 {
 unsigned int field_0;
} struct_14;

extern struct_0 *g_405fe8;

/* Forward function declarations */
unsigned int local_vars(unsigned int a0);
unsigned int local_array(unsigned int a0);
int local_struct(unsigned int a0);
unsigned int address_of_local(void *ptr);
int address_of_array(unsigned int *a0);
int large_stack_frame();
unsigned int vla_stack(unsigned int a0);
unsigned int alloca_usage(unsigned int a0);
unsigned int stack_alias(unsigned long long *a0, unsigned long long *a1);
int test_stack_memory();
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc();
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned int heap_nested(struct_1 **ptr);
unsigned int linked_list_heap();
struct_6 * create_tree_node(unsigned int a0);
unsigned int tree_heap_traversal();
unsigned int memory_leak(unsigned int a0);
unsigned int dangling_pointer();
unsigned int double_free(unsigned int *p);
unsigned int heap_overflow();
unsigned int test_heap_memory();
int global_var_access();
unsigned int global_var_read();
unsigned int global_array_access(unsigned int a0);
unsigned int static_local(unsigned int a0);
int call_static_func(unsigned int a0);
unsigned int static_helper(unsigned int a0);
int access_extern_global();
void call_extern_func();
int read_const_data();
int access_bss_var();
int access_bss_buffer();
int global_struct_access();
int set_file_static(unsigned int a0);
int get_file_static();
long long set_global_callback(unsigned long long (*a0)(unsigned int));
unsigned int call_global_callback(unsigned int a0);
unsigned int global_heap_store(unsigned long a0);
int static_complex_init();
unsigned int tls_access(unsigned int a0);
unsigned int init_order_test();
long long init_depends_on(unsigned int *v1);
int test_static_global();
unsigned long long double_value(unsigned int a0);
unsigned int memop_memset(char *ptr, unsigned long n, unsigned int a2);
unsigned int memop_memcpy(void* ptr, void* a1, unsigned long n);
unsigned int memop_memmove(void *ptr, unsigned long a1);
unsigned int memop_memcmp(void* a0, void* a1, unsigned long a2);
unsigned int memop_bzero(char *ptr, unsigned long n);
unsigned int memop_bcopy(void* a0, char *ptr, unsigned long a2);
unsigned int memop_unaligned_access(struct_12 *ptr);
unsigned int memop_memory_barrier(unsigned int *ptr);
int test_memory_op_functions();
unsigned int main();
unsigned int extern_function(unsigned int a0);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 v1 = (unsigned long long *)g_405fe8->field_8;
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 (void)v0;
 return;
}


// Function: sub_40102c at 0x40102c
void sub_40102c()
{
 void* v1 = NULL; // rdi

 free(v1);
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
}


// Function: sub_401146 at 0x401146
void sub_401146()
{
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401179 at 0x401179
void sub_401179()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011b9 at 0x4011b9
void sub_4011b9()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4011f5 at 0x4011f5
void sub_4011f5()
{
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 local_vars(a0);
 return;
}


// Function: local_vars at 0x401210
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a0 * 2;
 v0 = v1 + 10;
 return v0;
}


// Function: sub_401234 at 0x401234
void sub_401234(unsigned long a0)
{
 local_array(a0);
 return;
}


// Function: local_array at 0x401240
unsigned int local_array(unsigned int a0)
{
 unsigned int i; // [bp-0x3c]
 unsigned long v3; // [bp-0x38]
 char v1; // [bp-0x24]

 for (i = 0; i < 10; i += 1)
 {
 *((unsigned int *)((char *)&v3 + 4 * i)) = a0 * i;
 }
 return *((int *)&v1);
}


// Function: sub_40127a at 0x40127a
void sub_40127a(unsigned long a0)
{
 local_struct(a0);
 return;
}


// Function: local_struct at 0x401280
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]

 v0 = a0 * 2;
 return a0 + v0;
}


// Function: sub_40129e at 0x40129e
void sub_40129e(unsigned long a0)
{
 address_of_local(a0);
 return;
}


// Function: address_of_local at 0x4012a0
unsigned int address_of_local(void *ptr)
{
 unsigned int v0; // [bp-0x14]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: sub_4012bd at 0x4012bd
void sub_4012bd(unsigned long a0)
{
 address_of_array((unsigned int *)a0);
 return;
}


// Function: address_of_array at 0x4012c0
int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0x20]
 unsigned int *v1; // [bp-0x18]

 v1 = a0;
 v0 = a0;
 return *(v1) + *(v0);
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x4012f0
int large_stack_frame()
{
 unsigned int i; // [bp-0x80c]
 unsigned long v3; // [bp-0x808]
 char v1; // [bp-0x408]

 for (i = 0; i < 0x800; i += 1)
 {
 *((char *)&v3 + i) = i;
 }
 return v1;
}


// Function: sub_401354 at 0x401354
void sub_401354(unsigned long a0)
{
 vla_stack(a0);
 return;
}


// Function: vla_stack at 0x401360
unsigned int vla_stack(unsigned int a0)
{
 unsigned long v7; // rax
 char v0; // [bp-0x38]
 char *ptr; // [bp-0x30]
 unsigned int i; // [bp-0x24]
 unsigned long v3; // [bp-0x20]
 char *v4; // [bp-0x18]
 unsigned int v5; // [bp-0xc]

 if (a0 > 0 && a0 <= 1000)
 {
 v7 = a0;
 v4 = &v0;
 ptr = &(&v0)[-1 * (v7 * 4 + 15 & 0xfffffffffffffff0)];
 v3 = v7;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)&ptr[4 * i]) = i * 2;
 }
 v5 = *((int *)&ptr[4 * (a0 / 2)]);
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: alloca_usage at 0x401410
unsigned int alloca_usage(unsigned int a0)
{
 char stack_var; // [bp-0x28]
 char *ptr; // [bp-0x28]
 unsigned int i; // [bp-0x1c]
 char *p; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 if (a0 <= 0)
 {
 v3 = 4294967295;
 return v3;
 }
 p = (char *)&stack_var - (a0 * 4 + 15 & 0xfffffffffffffff0);
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)&p[4 * i]) = i * 3;
 }
 ptr = p;
 v3 = *((int *)&ptr[4 * (a0 / 2)]);
 return v3;
}


// Function: sub_4014a8 at 0x4014a8
void sub_4014a8(unsigned long a0, unsigned long a1)
{
 stack_alias((unsigned long long *)a0, (unsigned long long *)a1);
 return;
}


// Function: stack_alias at 0x4014b0
unsigned int stack_alias(unsigned long long *a0, unsigned long long *a1)
{
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x20], Other Possible Types: unsigned long long
 char *v2; // [bp-0x18], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0xc]

 v2 = (char *)a0;
 v1 = (char *)a1;
 v0 = 10;
 v2 = &v0;
 v1 = &v0;
 if (v2 == v1 && v2)
 {
 v0 = 20;
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: test_stack_memory at 0x401510
extern char g_403004[];

int test_stack_memory()
{
 unsigned long long flag1; // [bp-0x3c]
 unsigned int result[10]; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 unsigned int v4; // [bp-0x30]
 char v5; // [bp-0xc]

 printf("%s", g_403004);
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5) & 4294967295);
 printf("MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(5) & 4294967295);
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v5) & 4294967295);
 memset(result, 0, 40);
 result[0] = 1;
 v3 = 2;
 v4 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(&result) & 4294967295);
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 flag1 = 0;
 return printf("MEM-L2-04 (stack_alias): %d\n", stack_alias((unsigned long long *)&flag1, (unsigned long long *)&flag1) & 4294967295);
}


// Function: sub_40163d at 0x40163d
void sub_40163d(unsigned long a0)
{
 heap_basic(a0);
 return;
}


// Function: heap_basic at 0x401640
unsigned int heap_basic(unsigned int a0)
{
 void* p; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 unsigned int i; // [bp-0x1c]
 void* ptr; // [bp-0x18]
 unsigned int v4; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * i)) = i * 2;
 }
 p = ptr;
 v1 = *((int *)((char *)p + 4 * (a0 / 2)));
 free(ptr);
 v4 = v1;
 return v4;
}


// Function: sub_4016df at 0x4016df
void sub_4016df(unsigned long a0)
{
 heap_calloc(a0);
 return;
}


// Function: heap_calloc at 0x4016e0
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int i; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 void* ptr; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 ptr = calloc(a0, 4);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 v1 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v1 += *((int *)((char *)ptr + 4 * i));
 }
 free(ptr);
 v3 = v1;
 return v3;
}


// Function: sub_401765 at 0x401765
void sub_401765()
{
 heap_realloc();
 return;
}


// Function: heap_realloc at 0x401770
unsigned int heap_realloc()
{
 unsigned int v0; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 unsigned int j; // [bp-0x2c]
 unsigned int *ptr; // [bp-0x28]
 unsigned int v4; // [bp-0x20]
 unsigned int i; // [bp-0x1c]
 unsigned int v7; // [bp-0xc]

 ptr = malloc(20);
 if (!ptr)
 {
 v7 = 4294967295;
 return v7;
 }
 for (i = 0; i < 5; i += 1)
 {
 ptr[i] = i + 1;
 }
 v4 = ptr[2];
 ptr = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 v7 = 4294967294;
 return v7;
 }
 for (j = 5; j < 10; j += 1)
 {
 ptr[j] = j * 10;
 }
 v0 = (ptr[2] == v4 ? ptr[5] : 4294967293);
 v1 = v0;
 free(ptr);
 v7 = v1;
 return v7;
}


// Function: sub_401889 at 0x401889
void sub_401889(unsigned long a0)
{
 heap_array(a0);
 return;
}


// Function: heap_array at 0x401890
unsigned int heap_array(unsigned int a0)
{
 void* p; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 unsigned int i; // [bp-0x1c]
 void* ptr; // [bp-0x18]
 unsigned int v4; // [bp-0xc]

 ptr = malloc(a0 * 4);
 if (!ptr)
 {
 v4 = 4294967295;
 return v4;
 }
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * i)) = i * 3;
 }
 p = ptr;
 v1 = *((int *)((char *)p + 4 * (a0 / 2)));
 free(ptr);
 v4 = v1;
 return v4;
}


// Function: sub_40192d at 0x40192d
void sub_40192d(unsigned long a0)
{
 heap_struct(a0);
 return;
}


// Function: heap_struct at 0x401930
unsigned int heap_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 void *ptr; // [bp-0x18]
 unsigned int v2; // [bp-0xc]

 ptr = malloc(8);
 if (ptr)
 {
 ((unsigned int *)ptr)[0] = a0;
 ((unsigned int *)ptr)[1] = a0 * 2;
 v0 = ((unsigned int *)ptr)[0] + ((unsigned int *)ptr)[1];
 free(ptr);
 v2 = v0;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_40199e at 0x40199e
void sub_40199e(unsigned long a0)
{
 heap_nested((struct_1 **)a0);
 return;
}

// Function: heap_nested at 0x4019a0
unsigned int heap_nested(struct_1 **ptr)
{
 struct_2 *ptr2; // rax
 unsigned int v0; // [bp-0xc]

 *ptr = malloc(16);
 if (!*ptr)
 {
 v0 = 4294967295;
 return v0;
 }
 (*ptr)->field_0 = 10;
 ptr2 = malloc(16);
 (*ptr)->field_8 = ptr2;
 if ((*ptr)->field_8)
 {
 (*ptr)->field_8->field_0 = 20;
 (*ptr)->field_8->field_8 = 0;
 v0 = 0;
 return v0;
 }
 free(*ptr);
 v0 = 4294967294;
 return v0;
}


// Function: sub_401a5d at 0x401a5d
void sub_401a5d()
{
 linked_list_heap();
 return;
}

// Function: linked_list_heap at 0x401a60
unsigned int linked_list_heap()
{
 struct_4 *addr; // [bp-0x50]
 struct_4 *iter; // [bp-0x48]
 unsigned int v2; // [bp-0x3c]
 struct_4 *p; // [bp-0x38]
 struct_4 *ptr; // [bp-0x30]
 char i; // [bp-0x24], Other Possible Types: unsigned int
 struct_4 *ptr5; // [bp-0x20]
 struct_4 *cur = NULL; // [bp-0x18]
 unsigned int v8; // [bp-0xc]

 memset(&i, 0, 20);
 for (; i < 5; i += 1)
 {
 ptr = malloc(16);
 if (!ptr)
 {
 while (cur)
 {
 p = cur;
 cur = cur->field_8;
 free(p);
 }
 v8 = 4294967295;
 return v8;
 }
 ptr->field_0 = i * 10;
 ptr->field_8 = NULL;
 if (!cur)
 {
 cur = ptr;
 ptr5 = ptr;
 }
 else
 {
 ptr5->field_8 = ptr;
 ptr5 = ptr;
 }
 }
 v2 = 0;
 for (iter = cur; iter; iter = iter->field_8)
 {
 v2 += iter->field_0;
 }
 while (cur)
 {
 addr = cur;
 cur = cur->field_8;
 free(addr);
 }
 v8 = v2;
 return v8;
}


// Function: sub_401bb5 at 0x401bb5
void sub_401bb5(unsigned long a0)
{
 create_tree_node(a0);
 return;
}

// Function: create_tree_node at 0x401bc0
struct_6 * create_tree_node(unsigned int a0)
{
 struct_6 *ptr; // [bp-0x18]

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: sub_401c0f at 0x401c0f
void sub_401c0f()
{
 tree_heap_traversal();
 return;
}

// Function: tree_heap_traversal at 0x401c10
unsigned int tree_heap_traversal()
{
 unsigned int v0; // [bp-0x1c]
 struct_6 *ptr; // [bp-0x18]
 unsigned int v2; // [bp-0xc]

 ptr = create_tree_node(10);
 if (!ptr)
 {
 v2 = 4294967295;
 return v2;
 }
 ptr->field_8 = (struct_7 *)create_tree_node(20);
 ptr->field_10 = (struct_8 *)create_tree_node(30);
 if (ptr->field_8 && ptr->field_10)
 {
 v0 = ptr->field_0 + ptr->field_8->field_0 + ptr->field_10->field_0;
 free(ptr->field_8);
 free(ptr->field_10);
 free(ptr);
 v2 = v0;
 return v2;
 }
 if (ptr->field_8)
 free(ptr->field_8);
 if (ptr->field_10)
 free(ptr->field_10);
 free(ptr);
 v2 = 4294967294;
 return v2;
}


// Function: sub_401d21 at 0x401d21
void sub_401d21(unsigned long a0)
{
 memory_leak(a0);
 return;
}


// Function: memory_leak at 0x401d30
unsigned int memory_leak(unsigned int a0)
{
 void *ptr; // [bp-0x28]
 unsigned int i; // [bp-0x1c]
 void *p; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 p = malloc(a0 * 4);
 if (!p)
 {
 v3 = 4294967295;
 return v3;
 }
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)(p + i * 4)) = i;
 }
 ptr = p;
 v3 = *((int *)((char *)ptr + (a0 / 2) * 4));
 return v3;
}


// Function: sub_401dbd at 0x401dbd
void sub_401dbd()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401dc0
unsigned int dangling_pointer()
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 42;
 v1 = *(ptr);
 printf("value before free: %d\n", v1);
 free(ptr);
 v0 = *(ptr);
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_401e32 at 0x401e32
void sub_401e32(unsigned long a0)
{
 double_free((unsigned int *)a0);
 return;
}


// Function: double_free at 0x401e40
unsigned int double_free(unsigned int *p)
{
 unsigned int *ptr; // [bp-0x20]
 unsigned int v1; // [bp-0xc]

 if (p)
 {
 v1 = *(p);
 return v1;
 }
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 10;
 free(ptr);
 free(ptr);
 v1 = 4294967294;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_401eb6 at 0x401eb6
void sub_401eb6()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x401ec0
unsigned int heap_overflow()
{
 unsigned int v0; // [bp-0x20]
 unsigned int i; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 ptr = malloc(40);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (i = 0; i <= 10; i += 1)
 {
 ptr[i] = i * 100;
 }
 v0 = *(ptr);
 free(ptr);
 v3 = v0;
 return v3;
}


// Function: sub_401f3c at 0x401f3c
void sub_401f3c()
{
 test_heap_memory();
 return;
}

// Function: test_heap_memory at 0x401f40
extern char g_40314e[];
extern char g_4032a7[];
extern char g_4032b7[];
extern char g_4032dc[];
extern char g_40331d[];

unsigned int test_heap_memory()
{
 unsigned int v14; // eax
 int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 struct_1 *result; // [bp-0x10]

 printf("%s", g_40314e);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested((struct_1 **)&result) & 4294967295);
 if (result)
 {
 free(result->field_8);
 free(result);
 }
 printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5) & 4294967295);
 printf("HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
  v1 = dangling_pointer();
  printf("%s", g_4032a7, v1);
  exit(0); /* do not return */
 }
 else if (flag1 > 0)
 {
 waitpid(flag1, &v0, 0);
 if (!((char)(v0) & 127))
 {
  v14 = printf("%s", g_4032b7, ((v0) & 0xff00) >> 8);
 }
 else
 {
  v14 = ((v0) & 127) + 1 >> 1;
  if (v14 > 0)
  v14 = printf("%s", g_4032dc, (v0) & 127);
 }
 return v14;
 }
 else
 {
 perror(&g_40331d);
 return 4294967295;
 }
}


// Function: sub_40212c at 0x40212c
void sub_40212c()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x402130
extern unsigned int global_counter;

int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter;
}


// Function: sub_40214b at 0x40214b
void sub_40214b()
{
 global_var_read();
 return;
}


// Function: global_var_read at 0x402150
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_40215f at 0x40215f
void sub_40215f(unsigned long a0)
{
 global_array_access(a0);
 return;
}


// Function: global_array_access at 0x402160
extern unsigned int global_array[4];

unsigned int global_array_access(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (a0 >= 0 && a0 < 10)
 {
 v0 = global_array[a0];
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_40219d at 0x40219d
void sub_40219d(unsigned long a0)
{
 static_local(a0);
 return;
}


// Function: static_local at 0x4021a0
extern unsigned int static_local_counter;

unsigned int static_local(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 if (!a0)
 {
 static_local_counter = static_local_counter + 1;
 v0 = static_local_counter;
 return v0;
 }
 static_local_counter = 0;
 v0 = 0;
 return v0;
}


// Function: sub_4021e4 at 0x4021e4
void sub_4021e4(unsigned long a0)
{
 call_static_func(a0);
 return;
}


// Function: call_static_func at 0x4021f0
int call_static_func(unsigned int a0)
{
 return static_helper(a0) + 1;
}


// Function: sub_40220c at 0x40220c
void sub_40220c(unsigned long a0)
{
 static_helper(a0);
 return;
}


// Function: static_helper at 0x402210
unsigned int static_helper(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40221f at 0x40221f
void sub_40221f()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x402220
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_402232 at 0x402232
void sub_402232()
{
 call_extern_func();
 return;
}


// Function: call_extern_func at 0x402240
void call_extern_func()
{
 extern_function(5);
 return;
}

extern struct_10 *const_string;

// Function: read_const_data at 0x402250
int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: sub_402264 at 0x402264
void sub_402264()
{
 access_bss_var();
 return;
}


// Function: access_bss_var at 0x402270
extern unsigned int bss_var;

int access_bss_var()
{
 return bss_var;
}


// Function: sub_40227c at 0x40227c
void sub_40227c()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x402280
extern char bss_buffer;

int access_bss_buffer()
{
 return bss_buffer;
}


// Function: sub_40228d at 0x40228d
void sub_40228d()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x402290
extern unsigned int g_4060d4;
extern unsigned int global_point;

int global_struct_access()
{
 return global_point + g_4060d4;
}


// Function: sub_4022a2 at 0x4022a2
void sub_4022a2(unsigned long a0)
{
 set_file_static(a0);
 return;
}


// Function: set_file_static at 0x4022b0
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: sub_4022c2 at 0x4022c2
void sub_4022c2()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x4022d0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4022dc at 0x4022dc
void sub_4022dc(unsigned long a0)
{
 set_global_callback((unsigned long long (*)(unsigned int))a0);
 return;
}


// Function: set_global_callback at 0x4022e0
extern unsigned long long (*global_func_ptr)(unsigned int);

long long set_global_callback(unsigned long long (*a0)(unsigned int))
{
 global_func_ptr = a0;
 return (long long)a0;
}


// Function: sub_4022f5 at 0x4022f5
void sub_4022f5(unsigned long a0)
{
 call_global_callback(a0);
 return;
}

// Function: call_global_callback at 0x402300
extern unsigned long long (*global_func_ptr)(unsigned int);

unsigned int call_global_callback(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!global_func_ptr ? 4294967295 : (unsigned int)global_func_ptr(a0));
 return v0;
}


// Function: sub_40233d at 0x40233d
void sub_40233d(unsigned long a0)
{
 global_heap_store(a0);
 return;
}

// Function: global_heap_store at 0x402340
extern struct_14 *global_heap_ptr;
extern unsigned int global_heap_value;

unsigned int global_heap_store(unsigned long a0)
{
 unsigned int v0; // [bp-0xc]

 global_heap_value = a0;
 v0 = (!global_heap_ptr ? 4294967295 : global_heap_value);
 return v0;
}


// Function: sub_40237e at 0x40237e
void sub_40237e()
{
 static_complex_init();
 return;
}


// Function: static_complex_init at 0x402380
extern unsigned int complex_init;
extern unsigned int g_4060e8;
extern unsigned int g_4060f0;

int static_complex_init()
{
 return complex_init + g_4060e8 + g_4060f0;
}


// Function: sub_402398 at 0x402398
void sub_402398(unsigned long a0)
{
 tls_access(a0);
 return;
}


// Function: tls_access at 0x4023a0
unsigned int tls_access(unsigned int a0)
{
 unsigned long ptr = 0; // fs
 unsigned char *addr = (unsigned char *)(18446744073709551612UL + (unsigned long long)ptr);

 *((unsigned int *)addr) = a0;
 return *((int *)addr) * 2;
}


// Function: sub_4023bf at 0x4023bf
void sub_4023bf()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x4023c0
extern unsigned int init_depends_on_static_depends;

unsigned int init_order_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 20;
 init_depends_on(&v0);
 return v0;
}


// Function: sub_4023de at 0x4023de
void sub_4023de(unsigned long a0)
{
 init_depends_on((unsigned int *)a0);
 return;
}


// Function: init_depends_on at 0x4023e0
extern unsigned int init_depends_on_static_depends;

long long init_depends_on(unsigned int *v1)
{
 if (v1)
 init_depends_on_static_depends = *(v1);
 return init_depends_on_static_depends;
}


// Function: sub_402407 at 0x402407
void sub_402407()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x402410
extern char g_403333[];

int test_static_global()
{
 unsigned int v0; // [bp-0xc]

 printf("%s", &g_403333);
 printf("STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
 printf("STM-L1-01 (global_var_read): %d\n", global_var_read() & 4294967295);
 printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5) & 4294967295);
 static_local(1);
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 printf("STM-L1-04 (call_static_func): %d\n", call_static_func(5) & 4294967295);
 printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global() & 4294967295);
 call_extern_func();
 printf("STM-L2-02 (call_extern_func): %d\n", 0 & 4294967295);
 printf("STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
 printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var() & 4294967295);
 printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer() & 4294967295);
 printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
 set_file_static(50);
 printf("STM-L2-06 (file_static): %d\n", get_file_static() & 4294967295);
 set_global_callback(double_value);
 printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5) & 4294967295);
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(v0) & 4294967295);
 printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
 printf("STM-L3-01 (tls_access): %d\n", tls_access(10) & 4294967295);
 return printf("STM-L3-02 (init_order_test): %d\n", (unsigned long long)init_order_test() & 4294967295);
}


// Function: sub_4025e9 at 0x4025e9
void sub_4025e9(unsigned long a0)
{
 double_value(a0);
 return;
}


// Function: double_value at 0x4025f0
unsigned long long double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4025ff at 0x4025ff
void sub_4025ff(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_memset((char *)a0, a1, a2);
 return;
}


// Function: memop_memset at 0x402600
unsigned int memop_memset(char *ptr, unsigned long n, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 if (ptr && n)
 {
 memset(ptr, a2, n);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_40265b at 0x40265b
void sub_40265b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_memcpy((void *)a0, (void *)a1, a2);
 return;
}


// Function: memop_memcpy at 0x402660
unsigned int memop_memcpy(void* ptr, void* a1, unsigned long n)
{
 unsigned int v0; // [bp-0xc]

 if (ptr && a1 && n)
 {
 memcpy(ptr, a1, n);
 v0 = *((int *)(-4 + (char *)ptr + 4 * (n >> 2)));
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_4026d1 at 0x4026d1
void sub_4026d1(unsigned long a0, unsigned long a1)
{
 memop_memmove((void *)a0, a1);
 return;
}

// Function: memop_memmove at 0x4026e0
unsigned int memop_memmove(void *ptr, unsigned long a1)
{
 unsigned int v0; // [bp-0xc]

 if (ptr && a1 >= 2)
 {
 memmove((void *)((char *)ptr + 4), (const void *)ptr, a1 - 1);
 v0 = *((unsigned int *)ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_40273f at 0x40273f
void sub_40273f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_memcmp((void *)a0, (void *)a1, a2);
 return;
}


// Function: memop_memcmp at 0x402740
unsigned int memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v0; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 unsigned int v2; // [bp-0xc]

 if (a0 && a1 && a2)
 {
 v1 = memcmp(a0, a1, a2);
 if (v1 > 0)
 v0 = 1;
 else
 v0 = (v1 < 0 ? 4294967295 : 0);
 v2 = v0;
 return v2;
 }
 v2 = 0;
 return v2;
}


// Function: sub_4027ce at 0x4027ce
void sub_4027ce(unsigned long a0, unsigned long a1)
{
 memop_bzero((char *)a0, a1);
 return;
}


// Function: memop_bzero at 0x4027d0
unsigned int memop_bzero(char *ptr, unsigned long n)
{
 unsigned int v0; // [bp-0xc]

 if (ptr)
 {
 memset(ptr, 0, n);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_402819 at 0x402819
void sub_402819(unsigned long a0, unsigned long a1, unsigned long a2)
{
 memop_bcopy((void *)a0, (char *)a1, a2);
 return;
}


// Function: memop_bcopy at 0x402820
extern void bcopy(const void *src, void *dest, unsigned long n);

unsigned int memop_bcopy(void* a0, char *ptr, unsigned long a2)
{
 unsigned int v0; // [bp-0xc]

 if (a0 && ptr && a2)
 {
 bcopy(a0, ptr, a2);
 v0 = *(ptr);
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_402885 at 0x402885
void sub_402885(unsigned long a0)
{
 memop_unaligned_access((struct_0 *)a0);
 return;
}

// Function: memop_unaligned_access at 0x402890
unsigned int memop_unaligned_access(struct_12 *ptr)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 if (ptr)
 {
 v0 = *((int *)&(&ptr->padding_0)[1]);
 v1 = v0;
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_4028c4 at 0x4028c4
void sub_4028c4(unsigned long a0)
{
 memop_memory_barrier((unsigned int *)a0);
 return;
}


// Function: memop_memory_barrier at 0x4028d0
unsigned int memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 if (ptr)
 {
 v0 = *(ptr);
 __asm__ __volatile__("" ::: "memory");
 v1 = v0 + *(ptr);
 return v1;
 }
 v1 = 4294967295;
 return v1;
}


// Function: sub_40290e at 0x40290e
void sub_40290e()
{
 test_memory_op_functions();
 return;
}


// Function: test_memory_op_functions at 0x402910
extern char g_403596[];

int test_memory_op_functions()
{
 unsigned int v0[1]; // [bp-0x18c]
 unsigned long v1; // [bp-0x186]
 char v2; // [bp-0x17e]
 unsigned int v3; // [bp-0x17a]
 char v4[10]; // [bp-0x176]
 unsigned long v5; // [bp-0x16c]
 unsigned int v6; // [bp-0x164]
 unsigned long v7; // [bp-0x160]
 unsigned int v8; // [bp-0x158]
 char v9[10]; // [bp-0x153]
 char v10; // [bp-0x148]
 unsigned long v11[10]; // [bp-0x128]
 unsigned long long v12; // [bp-0x120]
 unsigned int v13; // [bp-0x118]
 char v14[256]; // [bp-0x108]

 printf("%s", g_403596);
 {
  unsigned long long temp_val = 85899345930ULL;
  memcpy(v11, &temp_val, 8);
 }
 v11[8] = 0;
 v11[9] = 0;
 v12 = 171798691870;
 v13 = 50;
 memset(&v10, 0, 20);
 printf("MEMOP-L2-01: %d\n", memop_memset(&v14, 10, 65) & 4294967295);
 printf("MEMOP-L2-02: %d\n", memop_memcpy((void*)&v10, (void*)&v11, 20) & 4294967295);
 strncpy(v9, "HelloWorld", 10);
 printf("MEMOP-L2-03: %c\n", memop_memmove((void *)&v9, 10) & 4294967295);
 v7 = 8589934593;
 v8 = 3;
 v5 = 8589934593;
 v6 = 4;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&v7, &v5, 12) & 4294967295);
 printf("MEMOP-L2-05: %d\n", memop_bzero(&v4, 10) & 4294967295);
 v3 = 67305985;
 memset(&v2, 0, 4);
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v3, &v2, 4) & 4294967295);
 v1 = 0x706050403020100;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v1) & 4294967295);
 v0[0] = 5;
 return printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&v0) & 4294967295);
}


// Function: sub_402b18 at 0x402b18
void sub_402b18()
{
 main();
 return;
}


// Function: main at 0x402b20
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_402b4b at 0x402b4b
void sub_402b4b(unsigned long a0)
{
 extern_function(a0);
 return;
}


// Function: extern_function at 0x402b50
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


