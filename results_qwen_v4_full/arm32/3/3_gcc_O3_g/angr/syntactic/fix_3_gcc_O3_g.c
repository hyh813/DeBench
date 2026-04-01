// Angr Decompilation of 3_gcc_O3_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */


// Global variable definitions
typedef struct struct_const_0 {
 char padding_0[4];
 char field_4;
} struct_const_0;

unsigned int file_scope_static = 0;
unsigned int global_func_ptr = 0;
unsigned int __glibc___stack_chk_guard = 0;
unsigned int global_counter = 0;
unsigned int counter_1 = 0;
unsigned int extern_global_var = 0;
unsigned int global_array[4] = {0};
unsigned int g_24008 = 0;
unsigned int g_1297c = 0;
unsigned int g_12ad8 = 0;
unsigned int g_12c24 = 0;
unsigned int g_12c34 = 0;
unsigned int g_12c5c = 0;
unsigned int g_12ca0 = 0;
unsigned int g_12ccc = 0;
unsigned int g_12f50 = 0;
struct_const_0 *const_string = 0;

// Function stub for armg_calculate_condition
unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 1;
}

// Standard library function declarations
void abort(void);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
void *malloc(unsigned int size);
void free(void *ptr);
void *calloc(unsigned int nmemb, unsigned int size);
void *realloc(void *ptr, unsigned int size);
void *memset(void *s, int c, unsigned int n);
void *memcpy(void *dest, const void *src, unsigned int n);
void *memmove(void *dest, const void *src, unsigned int n);
int memcmp(const void *s1, const void *s2, unsigned int n);
char *strncpy(char *dest, const char *src, unsigned int n);
void __stack_chk_fail(void);
int fork(void);
int waitpid(int pid, int *status, int options);
void perror(const char *s);
void exit(int status);
void __sync_synchronize(void);


// Function: sub_10598 at 0x10598
extern unsigned int g_24008;

int sub_10598()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: main at 0x10684
int test_stack_memory();
unsigned int test_heap_memory(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
int test_static_global(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int test_memory_op_functions(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
static unsigned int extern_function(unsigned int a0);

unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3
 unsigned int v6; // r0
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_stack_memory();
 v6 = test_static_global(test_heap_memory(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1)), v3, v4, v5);
 test_memory_op_functions(v6, v3, v4, v5);
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_106d8 at 0x106d8
void sub_106d8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x10798
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: alloca_usage_constprop_0 at 0x107a0
unsigned int alloca_usage_constprop_0()
{
 return 15;
}


// Function: local_vars at 0x107a8
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x107b4
unsigned int local_array(unsigned int a0)
{
 return a0 * 5;
}


// Function: local_struct at 0x107bc
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x107c4
unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x107d4
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x107e0
extern unsigned int __glibc___stack_chk_guard;

int large_stack_frame()
{
 unsigned int v5; // r2
 unsigned int v6; // lr
 char *ptr; // r3
 char *v8; // r3
 char v0; // [bp-0x80d]
 char v1; // [bp-0x40c]
 char v2; // [bp-0xd]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v5 = 0;
 v4 = v6;
 v3 = __glibc___stack_chk_guard;
 ptr = &v0;
 do
 {
 v8 = &ptr[1];
 ptr[1] = v5;
 v5 += 1;
 ptr = v8;
 } while (ptr != &v2);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v1;
}


// Function: vla_stack at 0x10850
extern unsigned int __glibc___stack_chk_guard;

unsigned int vla_stack(unsigned int a0)
{
 unsigned int *ptr; // r12
 unsigned int i; // r3
 unsigned int *p; // r2
 unsigned int *v5; // r2
 unsigned int v6; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 if (1000 > a0 - 1)
 {
 ptr = &(&v0)[-1 * (a0 * 4 + 7 & 0xfffffff8)];
 i = 0;
 p = ptr + 1;
 do
 {
 v5 = p + 1;
 p[1] = i;
 i += 2;
 p = v5;
 } while (i != a0 * 2);
 v6 = ptr[a0 >> 1];
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: alloca_usage at 0x108e0
extern unsigned int __glibc___stack_chk_guard;

unsigned int alloca_usage(unsigned int a0)
{
 unsigned int v2; // r1
 unsigned int *ptr; // r12
 unsigned int v4; // r2
 unsigned int *p; // r3
 unsigned int *v6; // r3
 unsigned int v7; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 if (a0 > 0)
 {
 v2 = a0 * 4;
 ptr = &(&v0)[-1 * (v2 + 7 & 0xfffffff8)];
 v4 = 0;
 p = ptr + 1;
 do
 {
 v6 = p + 1;
 p[1] = v4;
 v4 += 3;
 p = v6;
 } while (p != -4 + (char *)ptr + v2);
 v7 = ptr[a0 >> 1];
 }
 else
 {
 v7 = 4294967295;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: stack_alias at 0x10970
unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x10978
extern unsigned int g_1297c;

int test_stack_memory()
{
 unsigned int v2; // r0

 puts(0x1297c);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage_constprop_0());
 v2 = __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x10a48
unsigned int heap_basic(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int i; // r3
 unsigned int *p; // r2
 unsigned int *v3; // r2

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 i = 0;
 p = ptr + 1;
 do
 {
 v3 = p + 1;
 p[1] = i;
 i += 2;
 p = v3;
 } while (i != a0 * 2);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_calloc at 0x10aa4
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int v1; // r4
 unsigned int *p; // r3
 unsigned int *v3; // r3

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (a0 > 0)
 {
 p = ptr + 1;
 do
 {
 v3 = p + 1;
 v1 += p[1];
 p = v3;
 } while (&p[a0 + 1] != p);
 }
 free(ptr);
 return v1;
}


// Function: heap_realloc at 0x10af8
typedef struct struct_realloc_0 {
 char padding_0[8];
 unsigned int field_8;
} struct_realloc_0;

unsigned int heap_realloc()
{
 unsigned int *ptr; // r4
 struct_realloc_0 *p; // r3

 ptr = malloc(20);
 if (!ptr)
 return 0xffffffff;
 ptr[4] = 5;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[0] = 1;
 ptr[1] = 2;
 p = realloc(ptr, 40);
 if (!p)
 {
 free(ptr);
 return 0xfffffffe;
 }
 if (p->field_8 == 3)
 {
 p = (struct_realloc_0 *)0x32;
 if (!armg_calculate_condition(18, p->field_8, 3, 0))
 goto LABEL_10b4e;
LABEL_10b4d:
 p = (struct_realloc_0 *)0xfffffffd;
 }
 else
 {
 if (armg_calculate_condition(18, p->field_8, 3, 0))
 goto LABEL_10b4d;
LABEL_10b4e:
 ;
 }
 free(p);
 return (unsigned int)p;
}


// Function: heap_array at 0x10b74
unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v2; // r2
 unsigned int *p; // r3
 unsigned int *v4; // r3

 v0 = a0 * 4;
 ptr = malloc(v0);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 v2 = 0;
 p = ptr + 1;
 do
 {
 v4 = p + 1;
 p[1] = v2;
 v2 += 3;
 p = v4;
 } while (p != -4 + (char *)ptr + v0);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_struct at 0x10bd8
unsigned int heap_struct(unsigned int a0)
{
 unsigned int *ptr; // r0

 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: heap_nested at 0x10c08
typedef struct struct_2 {
 unsigned int field_0;
 struct struct_3 *field_4;
} struct_2;

typedef struct struct_0 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_3 {
 unsigned int field_0;
 unsigned int field_4;
} struct_3;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_1;

unsigned int heap_nested(struct_0 **addr)
{
 struct_2 *ptr; // r0
 struct_2 *ptr2; // r4
 unsigned int *p; // r3

 ptr = malloc(8);
 *(addr) = ptr;
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 ptr2->field_0 = 10;
 p = malloc(8);
 ptr2->field_4 = p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x10c74
typedef struct struct_linked_list {
 unsigned int field_0;
 struct struct_linked_list *field_4;
} struct_linked_list;

unsigned int linked_list_heap()
{
 struct_linked_list *node; // r0
 unsigned int v1; // r5
 struct_linked_list *addr; // r4
 struct_linked_list *v10; // r4
 struct_linked_list *v11; // r4
 struct_linked_list *ptr3; // r4
 struct_linked_list *v13; // r4
 struct_linked_list *v2; // r6
 struct_linked_list *p; // r0
 struct_linked_list *ptr4; // r6
 struct_linked_list *cur; // r0
 unsigned int v6; // r5
 struct_linked_list *v8; // r3

 node = malloc(8);
 v1 = 0;
 v2 = 0;
 v11 = 0;
 if (node)
 {
 do
 {
 p = node;
 ptr4 = v2;
 p->field_0 = v1;
 p->field_4 = 0;
 v1 += 10;
 if (v11)
 {
 ptr4->field_4 = p;
 if (v1 != 50)
 continue;
 goto LABEL_10cfc;
 }
 else
 {
 v11 = p;
 if (v1 == 50)
 {
LABEL_10cfc:
 v6 = 0;
 cur = v11;
 do
 {
 v8 = cur->field_4;
 v6 += cur->field_0;
 cur = v8;
 } while (cur->field_4);
 do
 {
 addr = v11;
 v10 = addr->field_4;
 free(addr);
 v11 = v10;
 } while (addr->field_4);
 return v6;
 }
 }
 } while ((cur = malloc(8), v2 = p, node = malloc(8), node));
 }
 if (v11)
 {
 do
 {
 ptr3 = v11;
 v13 = ptr3->field_4;
 free(ptr3);
 v11 = v13;
 } while (ptr3->field_4);
 }
 return 4294967295;
}


// Function: create_tree_node at 0x10d2c
unsigned int *create_tree_node(unsigned int a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int *ptr; // r0
 unsigned int v5; // r3
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 ptr = malloc(12);
 if (ptr)
 v5 = 0;
 ptr[0] = a0;
 ptr[1] = v5;
 ptr[2] = v5;
 return ptr;
}


// Function: tree_heap_traversal at 0x10d54
unsigned int tree_heap_traversal()
{
 unsigned int *p; // r4
 unsigned int *ptr1; // r5
 unsigned int *ptr2; // r6
 unsigned int *ptr3; // r0

 p = malloc(12);
 if (!p)
 return 4294967295;
 ptr1 = malloc(12);
 if (ptr1)
 {
 ptr2 = malloc(12);
 if (ptr2)
 {
 ptr3 = malloc(12);
 if (ptr3)
 {
 free(ptr3);
 }
 free(ptr2);
 free(ptr1);
 free(p);
 return 60;
 }
 free(ptr1);
 }
 else
 {
 ptr2 = malloc(12);
 if (ptr2)
 free(ptr2);
 }
 free(p);
 return 4294967294;
}


// Function: memory_leak at 0x10ddc
unsigned int memory_leak(unsigned int i)
{
 unsigned int *ptr; // r0
 unsigned int v1; // r3
 unsigned int *p; // r2
 unsigned int *v3; // r2

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return ptr[i + (i >> 31) >> 1];
 v1 = 0;
 p = ptr + 1;
 do
 {
 v3 = p + 1;
 p[1] = v1;
 v1 += 1;
 p = v3;
 } while (i != v1);
 return ptr[i + (i >> 31) >> 1];
}


// Function: dangling_pointer at 0x10e2c
unsigned int dangling_pointer()
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x10e6c
unsigned int double_free(unsigned int *a0)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int *ptr; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0)
 return *(a0);
 v1 = v2;
 v0 = v3;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: heap_overflow at 0x10eac
unsigned int heap_overflow()
{
 unsigned int *ptr; // r0

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return 0;
}


// Function: test_heap_memory at 0x10ed4
typedef struct struct_heap_mem_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_heap_mem_0;

extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_12ad8;
extern unsigned int g_12c24;
extern unsigned int g_12c34;
extern unsigned int g_12c5c;
extern unsigned int g_12ca0;

unsigned int test_heap_memory(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int *arr; // r3
 unsigned int v3; // r2
 unsigned int *arr7; // r0
 unsigned int v13; // r2
 struct_2 *node6; // r0
 unsigned int v15; // r5
 struct_2 *node11; // r6
 struct_2 *v17; // r4
 unsigned int v18; // r5
 struct_2 *node4; // r3
 struct_2 *v20; // r3
 struct_2 *node8; // r4
 unsigned int *addr; // r0
 struct_2 *v22; // r4
 struct_2 *node10; // r4
 struct_2 *v24; // r4
 unsigned int *arr3; // r0
 unsigned int v27; // r2
 unsigned int pid; // r0
 unsigned int v29; // r0
 unsigned int v30; // r3
 unsigned int v5; // r4
 unsigned int msg; // r0
 unsigned int *ptr9; // r4
 unsigned int v33; // r2
 unsigned int *p; // r3
 unsigned int v8; // r2
 unsigned int *ptr; // r0
 unsigned int v10; // r2
 struct_heap_mem_0 *ptr5; // r4
 unsigned int v0[1]; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 struct_heap_mem_0 *ptr7; // [bp-0x18]

 v1 = __glibc___stack_chk_guard;
 puts(0x12ad8);
 ptr = malloc(40);
 if (ptr)
 {
 ptr[1] = 2;
 ptr[2] = 4;
 ptr[3] = 6;
 ptr[4] = 8;
 ptr[6] = 12;
 ptr[5] = 10;
 ptr[9] = 18;
 ptr[7] = 14;
 ptr[8] = 16;
 free(ptr);
 v3 = 10;
 }
 else
 {
 v3 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v3);
 addr = calloc(5, 4);
 if (addr)
 {
 v5 = addr[0] + addr[1] + addr[2] + addr[3] + addr[4];
 free(addr);
 }
 else
 {
 v5 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 p = malloc(40);
 if (p)
 {
 p[1] = 3;
 p[2] = 6;
 p[3] = 9;
 p[4] = 12;
 p[6] = 18;
 p[5] = 15;
 p[9] = 27;
 p[7] = 21;
 p[8] = 24;
 free(p);
 v8 = 15;
 }
 else
 {
 v8 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v8);
 ptr = malloc(8);
 if (ptr)
 {
 free(ptr);
 v10 = 15;
 }
 else
 {
 v10 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v10);
 ptr5 = malloc(8);
 if (ptr5)
 {
 ptr7 = malloc(8);
 ptr5->field_4 = (struct struct_1 *)ptr7;
 if (ptr7)
 {
 v13 = 0;
 ((unsigned int *)ptr7)[0] = 20;
 ((unsigned int *)ptr7)[1] = 0;
 }
 else
 {
 free(ptr5);
 v13 = 4294967294;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v13);
 free(ptr5->field_4);
 free(ptr5);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 node6 = malloc(8);
 v15 = 0;
 node11 = 0;
 v17 = 0;
 if (node6)
 {
 do
 {
 node6->field_0 = v15;
 node6->field_4 = 0;
 v15 += 10;
 if (v17)
 {
 node11->field_4 = node6;
 if (v15 != 50)
 continue;
 goto LABEL_111d4;
 }
 else
 {
 v17 = node6;
 if (v15 == 50)
 {
LABEL_111d4:
 v18 = 0;
 node4 = v17;
 do
 {
 v20 = node4->field_4;
 v18 += node4->field_0;
 node4 = v20;
 } while (node4->field_4);
 do
 {
 node8 = v17;
 v22 = node8->field_4;
 free(node8);
 v17 = v22;
 } while (node8->field_4);
 }
 }
 } while ((node11 = node6, node6 = malloc(8), node6));
 }
 if (v17)
 {
 do
 {
 node10 = v17;
 v24 = node10->field_4;
 free(node10);
 v17 = v24;
 } while (node10->field_4);
 }
 v18 = 4294967295;
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v18);
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 arr3 = malloc(20);
 if (arr3)
 {
 arr3[2] = 2;
 arr3[3] = 3;
 v27 = 2;
 arr3[0] = 0;
 arr3[1] = 1;
 arr3[4] = 4;
 }
 else
 {
 v27 = 4294967295;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v27);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (pid)
 {
 if (!((char)armg_calculate_condition(210, pid, 0, 0)))
 {
 v29 = waitpid(pid, &v0, 0);
 v30 = *(v0);
 if (((char)v30 & 127))
 {
 if (0x2000000 <= ((v30 & 127) + 1) * 0x1000000)
 v29 = __printf_chk(1, 0x12c5c, v30 & 127);
 }
 else
 {
 v29 = __printf_chk(1, 0x12c34, v30 >> 8 & 255);
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v29;
 }
 else if (!(v1 ^ __glibc___stack_chk_guard))
 {
 msg = (unsigned int)perror(0x12ca0);
 return (unsigned int)perror(0x12ca0);
 }
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 ptr9 = malloc(4);
 if (ptr9)
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr9);
 v33 = *(ptr9);
 }
 else
 {
 v33 = 4294967295;
 }
 __printf_chk(1, 0x12c24, v33);
 exit(0); /* do not return */
 }
}


// Function: global_var_access at 0x11330
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x11348
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x1135c
extern unsigned int global_array[4];

unsigned int global_array_access(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (9 >= a0)
 return *((int *)(77856 + a0 * 4));
 return 4294967295;
}


// Function: static_local at 0x11374
extern unsigned int counter_1;

int static_local(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = counter_1;
 if (armg_calculate_condition(2, a0, 0, 0))
 v0 = counter_1 + 1;
 counter_1 = v0;
 return v0;
}


// Function: call_static_func at 0x11398
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x113a4
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x113b8
int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}





// Function: access_bss_var at 0x113d8
unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x113e0
unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x113e8
unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x113f0
extern unsigned int file_scope_static;

int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x11400
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x11410
extern unsigned int global_func_ptr;

int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x11420
extern unsigned int global_func_ptr;

unsigned int call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((unsigned int (*)())global_func_ptr)();
}


// Function: global_heap_store at 0x11440
unsigned int global_heap_store(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x11450
unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x11458
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x11460
unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x11468
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern unsigned int g_12ccc;
extern unsigned int global_counter;
extern unsigned int global_func_ptr;

int test_static_global(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v3; // r0

 puts(0x12ccc);
 v0 = global_counter + 1;
 global_counter = global_counter + 1;
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2 & 1);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v1 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v1);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", extern_function(5));
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", 42);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 (void)__printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
 return 0;
}


// Function: memop_memset at 0x1163c
unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
{
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v12; // r4
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v11; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (n)
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v2, v3, v4) ? a0 : v2), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4)))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v5, v6, v7) ? a0 : v5), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v6), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7)))
 return 4294967295;
 }
 v1 = v11;
 v0 = v12;
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x11670
unsigned int memop_memcpy(void* a0, void* a1, unsigned int n, unsigned int a3)
{
 void* v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep
 unsigned int v28; // lr
 unsigned int v29; // r6
 unsigned int v30; // r5
 unsigned int v31; // r4
 void* v7; // cc_dep1
 unsigned int v8; // cc_dep2
 unsigned int v9; // cc_ndep
 void* v10; // cc_dep1
 unsigned int v11; // cc_dep2
 unsigned int v12; // cc_ndep
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 if (n)
 {
 v7 = (armg_calculate_condition(18, v4, v5, v6) ? a1 : v4);
 v8 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v5);
 v9 = (armg_calculate_condition(18, v4, v5, v6) ? 0 : v6);
 if (!armg_calculate_condition(2, v7, v8, v9))
 goto LABEL_1167a;
LABEL_11679:
 a3 = 1;
 if (!armg_calculate_condition(18, v7, v8, v9))
 goto LABEL_1167e;
LABEL_1167d:
 a3 = 0;
 }
 else
 {
 v7 = (armg_calculate_condition(18, v10, v11, v12) ? a1 : v10);
 v8 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v11);
 v9 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v12);
 if (armg_calculate_condition(2, v7, v8, v9))
 goto LABEL_11679;
LABEL_1167a:
 if (armg_calculate_condition(18, v7, v8, v9))
 goto LABEL_1167d;
LABEL_1167e:
 ;
 }
 if (!a0)
 a3 |= 1;
 if (a3)
 return 4294967295;
 v3 = v28;
 v2 = v29;
 v1 = v30;
 v0 = v31;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 0xfffffffc)));
}


// Function: memop_memmove at 0x116b8
typedef struct struct_memmove_0 {
 char padding_0[1];
 char field_1;
} struct_memmove_0;

unsigned int memop_memmove(struct_memmove_0 *a0, unsigned int a1)
{
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v12; // r4
 unsigned int v4; // cc_ndep
 unsigned int v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 unsigned int v11; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a0)
 {
 if ((char)armg_calculate_condition(146, (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2), (armg_calculate_condition(18, v2, v3, v4) ? 1 : v3), (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4)))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(146, (armg_calculate_condition(18, v5, v6, v7) ? a1 : v5), (armg_calculate_condition(18, v5, v6, v7) ? 1 : v6), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7)))
 return 4294967295;
 }
 v1 = v11;
 v0 = v12;
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
}








// Function: memop_memcmp at 0x116f0
unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2, unsigned int a3)
{
 void* v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v26; // lr
 unsigned int v27; // r4
 unsigned int v28; // r0
 unsigned int v30; // r0
 void* v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 void* v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (a2)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 if (!armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_116fa;
LABEL_116f9:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_116fe;
LABEL_116fd:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_116f9;
LABEL_116fa:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_116fd;
LABEL_116fe:
 ;
 }
 if (!a0)
 a3 |= 1;
 if (a3)
 return 0;
 v1 = v26;
 v0 = v27;
 v28 = memcmp(a0, a1, a2);
 if (v28 > 0)
 return 1;
 if (armg_calculate_condition(18, v28, 0, 0))
 {
 v30 = 4294967295;
 if (!armg_calculate_condition(2, v28, 0, 0))
 return v30;
 }
 else
 {
 v30 = v28;
 if (!armg_calculate_condition(2, v30, 0, 0))
 return v30;
 }
 return 0;
}


// Function: memop_bzero at 0x1173c
unsigned int memop_bzero(char *a0, unsigned int n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x11764
unsigned int memop_bcopy(void* a0, char *a1, unsigned int n, unsigned int a3)
{
 char *v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep
 unsigned int v26; // lr
 unsigned int v27; // r4
 char *v5; // cc_dep1
 unsigned int v6; // cc_dep2
 unsigned int v7; // cc_ndep
 char *v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 if (n)
 {
 v5 = (armg_calculate_condition(18, v2, v3, v4) ? a1 : v2);
 v6 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v3);
 v7 = (armg_calculate_condition(18, v2, v3, v4) ? 0 : v4);
 if (!armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_1176e;
LABEL_1176d:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_11772;
LABEL_11771:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_1176d;
LABEL_1176e:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_11771;
LABEL_11772:
 ;
 }
 if (!a0)
 a3 |= 1;
 if (a3)
 return 4294967295;
 v1 = v26;
 v0 = v27;
 memmove(a1, a0, n);
 return *(a1);
}


// Function: memop_unaligned_access at 0x117a8
extern unsigned int __glibc___stack_chk_guard;

unsigned int memop_unaligned_access(void* a0)
{
 unsigned int v3; // lr
 unsigned int v4; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 if (a0)
 memcpy(&v0, a0 + 1, 4);
 else
 v4 = 4294967295;
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: memop_memory_barrier at 0x1180c
unsigned int memop_memory_barrier(unsigned int a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize(); /* do not return */
 return 0;
}


// Function: test_memory_op_functions at 0x11834
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_12f50;

int test_memory_op_functions(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v13; // lr
 unsigned int v14; // r4
 unsigned int v15; // r0
 unsigned int v16; // r2
 unsigned int v17; // r2
 unsigned int v19; // r1
 unsigned int result; // [bp-0x13c]
 unsigned int v1; // [bp-0x138]
 unsigned int v2; // [bp-0x134]
 unsigned int flag1; // [bp-0x130]
 unsigned int v4; // [bp-0x12c]
 unsigned int v5; // [bp-0x128]
 char v6; // [bp-0x124]
 char v7; // [bp-0x118]
 char v8; // [bp-0x117]
 char v9; // [bp-0x10c]
 unsigned int v10; // [bp-0xc]
 unsigned int v11; // [bp-0x8]
 unsigned int v12; // [bp-0x4]

 v12 = v13;
 v11 = v14;
 v10 = __glibc___stack_chk_guard;
 puts(0x12f50);
 memset(&v9, 65, 10);
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strncpy(&v7, "HelloWorld", 10);
 memmove(&v8, &v7, 9);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 result = 1;
 v1 = 2;
 v2 = 3;
 flag1 = 1;
 v4 = 2;
 v5 = 4;
 v15 = memcmp(&result, &flag1, 12);
 if (0 < v15)
 {
 v16 = 1;
 if (!((char)armg_calculate_condition(194, v15, 0, 0)))
 {
 if (armg_calculate_condition(18, v15, 0, 0))
 goto LABEL_118fd;
LABEL_118fe:
 if (armg_calculate_condition(2, v15, 0, 0))
 goto LABEL_11901;
LABEL_11902:
 ;
 }
 }
 else
 {
 v16 = v17;
 if (!((char)armg_calculate_condition(194, v15, 0, 0)))
 {
 if (!armg_calculate_condition(18, v15, 0, 0))
 goto LABEL_118fe;
LABEL_118fd:
 v16 = 4294967295;
 if (!armg_calculate_condition(2, v15, 0, 0))
 goto LABEL_11902;
LABEL_11901:
 ;
 v16 = 0;
 }
 }
__printf_chk(1, "MEMOP-L2-04: %d\n", v16);
memset(&v6, 0, 10);
__printf_chk(1, "MEMOP-L2-05: %d\n", 0);
__printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __sync_synchronize();
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 return 0;
}


// Function: extern_function at 0x119cc
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}


// Function: __sync_fetch_and_add_4 at 0x119d4
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x11a0c
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x11a44
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x11a7c
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x11ab4
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x11aec
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x11b28
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x11b88
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x11be8
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x11c48
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x11ca8
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x11d08
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x11d6c
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x11dc8
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x11e24
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x11e80
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x11edc
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x11f38
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x11f98
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x11fd0
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x12008
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x12040
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x12078
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x120b0
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x120ec
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_sub_and_fetch_2 at 0x12154
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_or_and_fetch_2 at 0x121bc
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_and_and_fetch_2 at 0x12224
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_xor_and_fetch_2 at 0x1228c
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_nand_and_fetch_2 at 0x122f4
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_add_and_fetch_1 at 0x12360
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_sub_and_fetch_1 at 0x123c4
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_or_and_fetch_1 at 0x12428
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_and_and_fetch_1 at 0x1248c
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_xor_and_fetch_1 at 0x124f0
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_nand_and_fetch_1 at 0x12554
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 return 0;
}


// Function: __sync_val_compare_and_swap_4 at 0x125bc
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x1260c
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
 {
 if (!1)
 return a1;
 }
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x12684
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
 {
 if (!1)
 return a1;
 }
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x126f8
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x12724
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_1 at 0x12740
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_synchronize at 0x1275c
void __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x12768
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x127a0
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (1);
 return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x12800
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (1);
 return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x1285c
void __sync_lock_release_8(unsigned int *ptr)
{
 *(ptr) = 0;
 ptr[1] = 0;
}


// Function: __sync_lock_release_4 at 0x12880
void __sync_lock_release_4(unsigned int *ptr)
{
 *(ptr) = 0;
}


// Function: __sync_lock_release_2 at 0x128a0
void __sync_lock_release_2(unsigned short *ptr)
{
 *(ptr) = 0;
}


// Function: __sync_lock_release_1 at 0x128c0
void __sync_lock_release_1(char *ptr)
{
 *(ptr) = 0;
}



/* CRT stub function _fini removed by preprocessor */


