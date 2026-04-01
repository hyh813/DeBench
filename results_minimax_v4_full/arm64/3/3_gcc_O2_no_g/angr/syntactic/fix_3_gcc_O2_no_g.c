// Angr Decompilation of 3_gcc_O2_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */


// Forward declarations for all structs - must come before function prototypes
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;
typedef struct struct_2 struct_2;
typedef struct struct_3 struct_3;
typedef struct struct_4 struct_4;

// Function prototypes for implicit declaration fixes
void *memcpy(void *dest, const void *src, unsigned long n);
int test_stack_memory(void);
int test_static_global(void);
unsigned long long test_heap_memory(void);
long long test_memory_op_functions(void);
void _start(void);
void abort(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
unsigned int double_value(unsigned int a0);
int local_vars(unsigned int a0);
long long local_array(unsigned long a0);
void __stack_chk_fail(void);
unsigned long long address_of_local(unsigned int *ptr);
long long large_stack_frame(void);
long long vla_stack(unsigned long a0);
unsigned long long stack_alias(void);
int puts(const char *s);
void *malloc(unsigned long size);
void free(void *ptr);
unsigned int heap_basic(unsigned long a0);
void *calloc(unsigned long nmemb, unsigned long size);
void *realloc(void *ptr, unsigned long size);
unsigned int heap_overflow(void);
unsigned long long dangling_pointer(void);
unsigned long long double_free(unsigned int *a0);
unsigned long long memory_leak(unsigned long a0);
unsigned long long linked_list_heap(void);
void *create_tree_node(unsigned int a0);
unsigned long long tree_heap_traversal(void);
unsigned int heap_calloc(unsigned long a0);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned long a0);
unsigned int heap_struct(unsigned int a0);
unsigned long long heap_nested(struct_1 **addr);
unsigned int global_var_access(void);
unsigned int global_var_read(void);
unsigned long long global_array_access(unsigned int a0);
unsigned long long static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global(void);
long long call_extern_func(void);
int read_const_data(void);
unsigned long long access_bss_var(void);
unsigned long long access_bss_buffer(void);
unsigned long long global_struct_access(void);
long long set_file_static(unsigned long a0);
int get_file_static(void);
long long set_global_callback(unsigned long a0);
unsigned long long call_global_callback(void);
unsigned long long global_heap_store(unsigned int *a0);
unsigned long long static_complex_init(void);
unsigned int tls_access(unsigned int a0);
unsigned long long init_order_test(void);
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2);
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n);
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1);
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2);
unsigned long long memop_bzero(char *a0, unsigned long n);
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2);
unsigned long long memop_unaligned_access(struct_0 *a0);
unsigned long long memop_memory_barrier(unsigned int *a0);
int fork(void);
int waitpid(int pid, int *status, int options);
int arm64g_calculate_condition(unsigned long op, unsigned long flags, unsigned long flags2, unsigned long flags3);
int __printf_chk(int flag, const char *format, ...);
void *memset(void *s, int c, unsigned long n);
void *memmove(void *dest, const void *src, unsigned long n);
int memcmp(const void *s1, const void *s2, unsigned long n);
int strncpy(char *dest, const char *src, unsigned long n);
void exit(int status);
int perror(const char *s);
unsigned int extern_function(unsigned int a0);

// Forward declarations for all structs - must come before function prototypes
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;
typedef struct struct_2 struct_2;
typedef struct struct_3 struct_3;
typedef struct struct_4 struct_4;

// Function prototypes for implicit declaration fixes
void *memcpy(void *dest, const void *src, unsigned long n);
unsigned long long heap_nested(struct_1 **addr);
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1);
unsigned long long memory_leak(unsigned long a0);
unsigned long long dangling_pointer(void);

// Define NULL if not available
#ifndef NULL
#define NULL ((void*)0)
#endif

// __ROL__ macro for rotate left
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))


// Function: __dollar_x at 0x4009b0
extern unsigned long long g_413f20;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_413f20;
}


// Function: sub_4009c4 at 0x4009c4
long long sub_4009c4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: main at 0x400b00
unsigned int main()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = test_stack_memory();
 v3 = test_static_global(test_heap_memory(v2));
 test_memory_op_functions(v3);
 return 0;
}


// Function: sub_400b24 at 0x400b24
void sub_400b24(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400b70 at 0x400b70
void sub_400b70()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400b88 at 0x400b88
void sub_400b88()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400bfc at 0x400bfc
void sub_400bfc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400c48 at 0x400c48
long long sub_400c48()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_400c54 at 0x400c54
void sub_400c54(unsigned long a0)
{
 double_value();
 return;
}


// Function: double_value at 0x400c60
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_400c68 at 0x400c68
void sub_400c68(unsigned long a0)
{
 local_vars();
 return;
}


// Function: local_vars at 0x400c70
int local_vars(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: sub_400c7c at 0x400c7c
long long sub_400c7c()
{
 unsigned long long v0; // x0

 v0 = local_array();
 return local_array();
}


// Function: local_array at 0x400c80
extern char __stack_chk_guard;

long long local_array(unsigned long a0)
{
 char *cur; // x2
 unsigned long long v6; // x1
 char *v0; // [bp-0x40]
 char v1; // [bp-0x30]
 char v2; // [bp-0x1c]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 cur = &v1;
 v6 = 0;
 v3 = *((long long *)&__stack_chk_guard);
 do
 {
 *((unsigned int *)cur) = v6;
 cur += 1;
 v6 += a0;
 } while (cur != (char *)v3);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v2);
}


// Function: local_struct at 0x400ce4
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_400cec at 0x400cec
void sub_400cec(unsigned long a0)
{
 address_of_local();
 return;
}


// Function: address_of_local at 0x400cf0
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400d00
unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: sub_400d0c at 0x400d0c
void sub_400d0c()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x400d10
extern char __stack_chk_guard;

long long large_stack_frame()
{
 char *cur; // x1
 unsigned int i; // w0
 char *v0; // [bp-0x820]
 char v1; // [bp-0x808]
 char v2; // [bp-0x408]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 cur = &v1;
 i = 0;
 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 do
 {
 *(cur) = i;
 cur += 1;
 i += 1;
 } while (i != 0x800);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v2;
}


// Function: sub_400d78 at 0x400d78
long long sub_400d78(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = vla_stack();
 return vla_stack();
}


// Function: vla_stack at 0x400d80
extern char __stack_chk_guard;

long long vla_stack(unsigned long a0)
{
 unsigned long v6; // x1
 char *i; // x2
 unsigned long long v8; // x1
 unsigned long long ptr; // x3
 unsigned long long idx; // x1
 unsigned long v11; // x0
 unsigned long v12; // [bp-0x20030]
 unsigned long long result; // [bp-0x1fc30]
 char v1; // [bp-0x10030]
 char v2; // [bp-0x30]
 char *v3; // [bp-0x20]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]
 char *vvar_57;

 v3 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 if (999 >= (unsigned int)a0 - 1)
 {
 v6 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15;
 i = &(&v2)[-1 * (v6 & 0xffffffffffff0000)];
 if (&v2 != i)
 {
 do
 {
 result = 0;
 } while (&v12 != i);
 }
 v8 = v6 & 0xfffffffffffffff0 & 65535;
 vvar_57 = &(&v1)[-1 * v8];
 *((unsigned long long *)vvar_57) = 0;
 if (0x400 <= v8)
 *((unsigned long *)(vvar_57 + 0x400)) = 0;
 ptr = vvar_57 + 16;
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = __ROL__((unsigned int)idx, 1) & 4294967294;
 idx += 1;
 } while ((unsigned int)idx < (unsigned int)a0);
 v11 = *((int *)(ptr + ((unsigned int)a0 >> 31 & 0x80000000 | __ROL__((unsigned int)a0, 31) & 2147483647) * 4));
 }
 else
 {
 v11 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v11;
}


// Function: alloca_usage at 0x400e50
extern char __stack_chk_guard;

long long alloca_usage(unsigned long a0)
{
 unsigned long v6; // x1
 char *i; // x2
 unsigned long long v8; // x1
 struct_0 *p; // x4
 unsigned int j; // w1
 struct_0 *ptr; // x2
 unsigned long v13; // x0
 unsigned long v14; // [bp-0x20030]
 unsigned long long result; // [bp-0x1fc30]
 char v1; // [bp-0x10030]
 char v2; // [bp-0x30]
 char *v3; // [bp-0x20]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v3 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 if ((unsigned int)a0 > 0)
 {
 v6 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15;
 i = &(&v2)[-1 * (v6 & 0xffffffffffff0000)];
 if (&v2 != i)
 {
 do
 {
 result = 0;
 } while (&v14 != i);
 }
 v8 = v6 & 0xfffffffffffffff0 & 65535;
 char *vvar_57;
 vvar_57 = &(&v1)[-1 * v8];
 *((unsigned long long *)vvar_57) = 0;
 if (0x400 <= v8)
 *((unsigned long *)(vvar_57 + 0x400)) = 0;
 p = vvar_57 + 16;
 j = 0;
 ptr = p;
 do
 {
 *((unsigned int *)&ptr->padding_0[0]) = j;
 j += 3;
 ptr = &ptr->padding_0[4];
 } while (j != (unsigned int)a0 * 3);
 v13 = *((int *)&p->padding_0[4 * ((unsigned int)a0 >> 31 & 0x80000000 | __ROL__((unsigned int)a0, 31) & 2147483647)]);
 }
 else
 {
 v13 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v13;
}


// Function: sub_400f1c at 0x400f1c
void sub_400f1c()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x400f20
unsigned long long stack_alias()
{
 return 20;
}


// Function: sub_400f28 at 0x400f28
void sub_400f28()
{
 test_stack_memory();
 return;
}


// Function: test_stack_memory at 0x400f30
extern char __dollar_d;

int test_stack_memory()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&__dollar_d);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_401008 at 0x401008
void sub_401008(unsigned long a0)
{
 heap_basic();
 return;
}


// Function: heap_basic at 0x401010
unsigned int heap_basic(unsigned long a0)
{
 unsigned int i; // w19
 void* ptr; // x0
 unsigned long long idx; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = __ROL__((unsigned int)idx, 1) & 4294967294;
 idx += 1;
 } while ((unsigned int)idx < i);
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * (i + (i >> 31) >> 31 & 0x80000000 | __ROL__(i + (i >> 31), 31) & 2147483647)));
}


// Function: heap_calloc at 0x401074
unsigned int heap_calloc(unsigned long a0)
{
 unsigned int i; // w20
 void* ptr; // x0
 unsigned long long v4; // x1
 unsigned long long v5; // x19
 unsigned long long v6; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = a0;
 ptr = calloc(a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295, 4);
 if (!ptr)
 return 4294967295;
 if (i > 0)
 {
 v4 = 0;
 v5 = 0;
 do
 {
 v6 = v4 + 1;
 v5 += *((int *)((char *)ptr + 4 * v4));
 v4 = v6;
 } while ((unsigned int)v4 < i);
 }
 else
 {
 v5 = 0;
 }
 free(ptr);
 return v5;
}


// Function: heap_realloc at 0x4010e0
unsigned int heap_realloc()
{
 struct_0 *ptr; // x0
 unsigned int v4; // w19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr->field_0 = 8589934593;
 ptr->field_8 = 17179869187;
 ptr->field_10 = 5;
 ptr = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 return 4294967294;
 }
 if (ptr->field_8 == 3)
 v4 = 50;
 else
 v4 = 4294967293;
 free(ptr);
 return v4;
}


// Function: heap_array at 0x401164
unsigned int heap_array(unsigned long a0)
{
 unsigned int v2; // w19
 unsigned int *ptr; // x0
 unsigned int i; // w1
 unsigned int *ptr; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if (v2 > 0)
 {
 i = 0;
 ptr = ptr;
 do
 {
 *(ptr) = i;
 i += 3;
 ptr += 1;
 } while (i != v2 * 3);
 }
 free(ptr);
 return ptr[v2 + (v2 >> 31) >> 31 & 0x80000000 | __ROL__(v2 + (v2 >> 31), 31) & 2147483647];
}


// Function: heap_struct at 0x4011d0
unsigned int heap_struct(unsigned int a0)
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: sub_40120c at 0x40120c
void sub_40120c(unsigned long a0)
{
 heap_nested();
 return;
}


// Function: heap_nested at 0x401210

unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr1; // x0
 struct_3 *ptr2; // x19
 struct_4 *ptr3; // x0
 struct_4 *p; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr1 = malloc(16);
 *(addr) = ptr1;
 if (!ptr1)
 return 4294967295;
 ptr2 = ptr1;
 ptr2->field_0 = 10;
 ptr3 = malloc(16);
 ptr3->field_8 = ptr3;
 p = ptr3;
 if (!p)
 {
 free(ptr3);
 return 4294967294;
 }
 p->field_0 = 20;
 p->field_8 = 0;
 return 0;
}


// Function: linked_list_heap at 0x401284
unsigned int linked_list_heap()
{
 struct_0 *v2; // x0
 unsigned int v3; // w20
 struct_0 *ptr3; // x19
 struct_0 *v11; // x19
 struct_0 *addr; // x19
 struct_0 *v13; // x19
 struct_0 *v4; // x19
 struct_0 *ptr4; // x0
 struct_0 *p; // x0
 unsigned long long v7; // x20
 struct_0 *ptr; // x0
 struct_0 *v9; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = NULL;
 v3 = 0;
 v4 = NULL;
 while (true)
 {
 ptr4 = v2;
 p = malloc(16);
 if (!p)
 break;
 p->field_0 = v3;
 p->field_8 = NULL;
 if (v4)
 ptr4->field_8 = p;
 else
 v4 = p;
 v3 += 10;
 v2 = p;
 if (v3 == 50)
 {
 v7 = 0;
 ptr = v4;
 do
 {
 v9 = ptr->field_8;
 v7 += ptr->field_0;
 ptr = v9;
 } while (ptr->field_8);
 do
 {
 ptr3 = v4;
 v11 = ptr3->field_8;
 free(ptr3);
 v4 = v11;
 } while (ptr3->field_8);
 return v7;
 }
 }
 if (v4)
 {
 do
 {
 addr = v4;
 v13 = addr->field_8;
 free(addr);
 v4 = v13;
 } while (addr->field_8);
 }
 return 4294967295;
}


// Function: create_tree_node at 0x401330
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0;

struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401360
unsigned long long tree_heap_traversal()
{
 void* ptr; // x0
 unsigned long long v6; // x19
 unsigned long long v7; // x20
 void* p; // x19
 void* ptr; // x20
 unsigned long long v10; // x21
 void* ptr; // x0
 void* ptr; // x0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned long long v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v0 = &v4;
 ptr = malloc(24);
 if (!ptr)
 return 4294967295;
 v1 = v6;
 v2 = v7;
 p = ptr;
 ptr = malloc(24);
 if (ptr)
 {
 v3 = v10;
 ptr = malloc(24);
 if (ptr)
 {
 free(ptr);
 free(ptr);
 free(p);
 return 60;
 }
 free(ptr);
 }
 else
 {
 ptr = malloc(24);
 if (ptr)
 free(ptr);
 }
 free(p);
 return 4294967294;
}


// Function: sub_401408 at 0x401408
void sub_401408(unsigned long a0)
{
 memory_leak();
 return;
}


// Function: memory_leak at 0x401410
unsigned long long memory_leak(unsigned long a0)
{
 unsigned int i; // w19
 unsigned long long ptr; // x0
 unsigned long long idx; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 i = a0;
 ptr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return *((int *)(ptr + (i + (i >> 31) >> 31 & 0x80000000 | __ROL__(i + (i >> 31), 31) & 2147483647) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while ((unsigned int)idx < i);
 return *((int *)(ptr + (i + (i >> 31) >> 31 & 0x80000000 | __ROL__(i + (i >> 31), 31) & 2147483647) * 4));
}


// Function: sub_401468 at 0x401468
void sub_401468()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401470
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // x0
 unsigned long long v4; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 v1 = v4;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x4014c0
unsigned long long double_free(unsigned int *a0)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 void* ptr; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (a0)
 return *(a0);
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: sub_40150c at 0x40150c
void sub_40150c()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x401510
unsigned int heap_overflow()
{
 unsigned int *ptr; // x0
 unsigned int i; // w1
 unsigned int *ptr; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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


// Function: test_heap_memory at 0x401560
typedef struct struct_1 {
 char padding_0[8];
 struct struct_0 *field_8;
} struct_1;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_3;

typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

extern char __stack_chk_guard;
extern char g_402118;
extern char g_402268;
extern char g_402278;
extern char g_4022a0;
extern char g_4022e8;

unsigned long long test_heap_memory()
{
 unsigned int p[6]; // x0
 unsigned long long off; // x1
 unsigned int ptr5[6]; // x2
 unsigned int v16; // w19
 void* ptr; // x0
 unsigned long long v18; // x2
 struct_1 *addr; // x19
 struct_2 *ptr3; // x0
 unsigned long long v21; // x2
 unsigned int v6; // w19
 struct_3 *ptr; // x0
 unsigned long long v25; // x2
 unsigned long long pid; // x0
 unsigned long long msg; // x0
 unsigned int *ptr4; // x19
 unsigned long v29; // x2
 unsigned int *ptr; // x0
 unsigned long long v8; // x19
 unsigned int *ptr7; // x1
 unsigned int *v10; // x1
 unsigned int ptr6[6]; // x0
 unsigned int k; // w1
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 puts(&g_402118);
 p = malloc(40);
 if (p)
 {
 off = 0;
 do
 {
 p[off] = __ROL__((unsigned int)off, 1) & 4294967294;
 off += 1;
 } while (off != 10);
 v6 = p[5];
 free(p);
 }
 else
 {
 v6 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v6);
 ptr = calloc(5, 4);
 if (ptr)
 {
 v8 = 0;
 ptr7 = ptr;
 do
 {
 v10 = ptr7 + 1;
 v8 += *(ptr7);
 ptr7 = v10;
 } while (ptr + 5 != ptr7);
 free(ptr);
 }
 else
 {
 v8 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v8 & 4294967295);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 ptr6 = malloc(40);
 if (ptr6)
 {
 k = 0;
 ptr5 = ptr6;
 do
 {
 ptr5[0] = k;
 k += 3;
 ptr5 = &ptr5[1];
 } while (k != 30);
 v16 = ptr6[5];
 free(ptr6);
 }
 else
 {
 v16 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v16);
 ptr = malloc(8);
 if (ptr)
 {
 free(ptr);
 v18 = 15;
 }
 else
 {
 v18 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v18);
 addr = malloc(16);
 if (addr)
 {
 ptr3 = malloc(16);
 addr->field_8 = ptr3;
 if (ptr3)
 {
 v21 = 0;
 ptr3->field_0 = 20;
 ptr3->field_8 = 0;
 }
 else
 {
 free(addr);
 v21 = 4294967294;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v21);
 free(addr->field_8);
 free(addr);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr = malloc(20);
 if (ptr)
 {
 v25 = 2;
 ptr->field_0 = 0x100000000;
 ptr->field_8 = 12884901890;
 ptr->field_10 = 4;
 }
 else
 {
 v25 = 4294967295;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v25);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ((unsigned int)pid)
 {
 if (!((char)arm64g_calculate_condition(211, pid & 4294967295, 0, 0)))
 {
 waitpid(pid, &v1, 0);
 if (!((char)arm64g_calculate_condition(9, (unsigned long long)(*(v1) & 127), 0, 0)))
 {
 if (0 < ((unsigned int)(((*(v1) & 127) + 1) * 0x100000000000000 >> 63) & 4294967168 | (unsigned int)(__ROL__((*(v1) & 127) + 1, 63)) & 127))
 __printf_chk(1, &g_4022a0, *(v1) & 127);
 }
 else
 {
 __printf_chk(1, &g_402278, (*(v1) * 0x100000000000000 | *(v1) >> 8) & 18374686479671623935 & 255);
 }
 if (v2 == *((long long *)&__stack_chk_guard))
 return &__stack_chk_guard;
 }
 else if (v2 == *((long long *)&__stack_chk_guard))
 {
 msg = (unsigned long long)perror(&g_4022e8);
 return (unsigned long long)perror(&g_4022e8);
 }
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 ptr4 = malloc(4);
 if (ptr4)
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr4);
 v29 = *(ptr4);
 }
 else
 {
 v29 = 4294967295;
 }
 __printf_chk(1, &g_402268, v29);
 exit(0); /* do not return */
 }
}


// Function: global_var_access at 0x4018c0
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x4018d4
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return (global_counter * 2 | global_counter >> 31) & 4294967294;
}


// Function: global_array_access at 0x4018e4
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (9 < a0)
 return 4294967295;
 return global_array[a0];
}


// Function: static_local at 0x401904
extern unsigned int counter_1;

unsigned long long static_local(unsigned int a0)
{
 if (a0)
 {
 counter_1 = 0;
 return 0;
 }
 counter_1 = counter_1 + 1;
 return counter_1 + 1;
}


// Function: sub_401938 at 0x401938
void sub_401938(unsigned long a0)
{
 call_static_func();
 return;
}


// Function: call_static_func at 0x401940
int call_static_func(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: sub_40194c at 0x40194c
void sub_40194c()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x401950
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401964
long long call_extern_func()
{
 unsigned long long v0; // x0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: sub_40196c at 0x40196c
void sub_40196c()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x401970
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern struct_0 *const_string;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401984
unsigned long long access_bss_var()
{
 return 0;
}


// Function: sub_40198c at 0x40198c
void sub_40198c()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x401990
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: sub_401998 at 0x401998
void sub_401998()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x4019a0
unsigned long long global_struct_access()
{
 return 30;
}


// Function: sub_4019a8 at 0x4019a8
long long sub_4019a8(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = set_file_static();
 return set_file_static();
}


// Function: set_file_static at 0x4019b0
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: sub_4019bc at 0x4019bc
void sub_4019bc()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x4019c0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4019cc at 0x4019cc
long long sub_4019cc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = set_global_callback();
 return set_global_callback();
}


// Function: set_global_callback at 0x4019d0
extern unsigned long long global_func_ptr;

long long set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: sub_4019dc at 0x4019dc
long long sub_4019dc()
{
 unsigned long long v0; // x0

 v0 = call_global_callback();
 return call_global_callback();
}


// Function: call_global_callback at 0x4019e0
extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 goto global_func_ptr;
}


// Function: sub_4019fc at 0x4019fc
long long sub_4019fc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = global_heap_store();
 return global_heap_store();
}


// Function: global_heap_store at 0x401a00
unsigned long long global_heap_store(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x401a14
unsigned long long static_complex_init()
{
 return 15;
}


// Function: sub_401a1c at 0x401a1c
void sub_401a1c(unsigned long a0)
{
 tls_access();
 return;
}


// Function: tls_access at 0x401a20
unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_401a28 at 0x401a28
void sub_401a28()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x401a30
unsigned long long init_order_test()
{
 return 20;
}


// Function: sub_401a38 at 0x401a38
void sub_401a38()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x401a40
typedef struct struct_0 {
 char padding_0[4];
 char field_4;
} struct_0;

extern struct_0 *const_string;
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402318;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;

int test_static_global()
{
 unsigned long v2; // x2
 unsigned long v3; // x2
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_402318);
 v2 = global_counter + 1;
 global_counter = global_counter + 1;
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v2);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", (global_counter * 2 | global_counter >> 31) & 4294967294);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v3 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v3);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", extern_function(5) & 4294967295);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string->field_4 + 42);
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
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: sub_401c28 at 0x401c28
long long sub_401c28(unsigned long a0, unsigned long a1)
{
 unsigned long long dst; // x0

 dst = memop_memset();
 return memop_memset();
}


// Function: memop_memset at 0x401c30
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long long v16; // x30
 unsigned long long v17; // x19
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned long v8; // cc_op
 unsigned long v9; // cc_dep1
 unsigned long v10; // cc_dep2
 unsigned long v11; // cc_ndep
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (a0)
 {
 if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? n : 0x40000000), 0, 0))
 return 4294967295;
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v8 | 16, v9, v10, v11) ? n : 0x40000000), 0, 0))
 return 4294967295;
 }
 v0 = &v3;
 v1 = v16;
 v2 = v17;
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x401c74
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 unsigned long long v5; // cc_op
 unsigned long v6; // cc_op
 unsigned long v7; // cc_dep1
 unsigned long long v27; // x30
 unsigned long long v28; // x19
 unsigned long long v29; // x20
 unsigned long v8; // cc_dep2
 unsigned long v9; // cc_ndep
 unsigned long v10; // cc_dep1
 unsigned long v11; // cc_op
 unsigned long v12; // cc_dep1
 unsigned long v13; // cc_dep2
 unsigned long v14; // cc_ndep
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 unsigned long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 if (a1)
 {
 v5 = 4;
 v10 = ((char)arm64g_calculate_condition(v6 | 16, v7, v8, v9) ? n : 0x40000000);
 if (!((char)arm64g_calculate_condition(20, v10, 0, 0)))
 goto LABEL_401c7e;
LABEL_401c7d:
 if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v5 | 16, v10, 0, 0) ? a0 : 0x40000000), 0, 0))
 return 4294967295;
 }
 else
 {
 v5 = 0;
 v10 = ((char)arm64g_calculate_condition(v11 | 16, v12, v13, v14) ? n : 0x40000000);
 if ((char)arm64g_calculate_condition(16, v10, 0, 0))
 goto LABEL_401c7d;
LABEL_401c7e:
 if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v5 | 16, v10, 0, 0) ? a0 : 0x40000000), 0, 0))
 return 4294967295;
 }
 v0 = &v4;
 v1 = v27;
 v2 = v28;
 v3 = v29;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
}


// Function: sub_401cbc at 0x401cbc
long long sub_401cbc(unsigned long a0, unsigned long a1)
{
 unsigned long long dst; // x0

 dst = memop_memmove();
 return memop_memmove();
}


// Function: memop_memmove at 0x401cc0
typedef struct struct_0 {
 char padding_0[1];
 char field_1;
} struct_0;

unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long long v16; // x30
 unsigned long long v17; // x19
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned long v8; // cc_op
 unsigned long v9; // cc_dep1
 unsigned long v10; // cc_dep2
 unsigned long v11; // cc_ndep
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (a0)
 {
 if ((char)arm64g_calculate_condition(148, ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? a1 : 0), ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? 1 : 0), 0))
 return 4294967295;
 }
 else
 {
 if ((char)arm64g_calculate_condition(144, ((char)arm64g_calculate_condition(v8 | 16, v9, v10, v11) ? a1 : 0), ((char)arm64g_calculate_condition(v8 | 16, v9, v10, v11) ? 1 : 0), 0))
 return 4294967295;
 }
 v0 = &v3;
 v1 = v16;
 v2 = v17;
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
}


// Function: memop_memcmp at 0x401d04
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // cc_op
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long long v25; // x30
 unsigned int result; // w0
 unsigned long v27; // cc_dep1
 unsigned int v28; // w0
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned long v8; // cc_dep1
 unsigned long v9; // cc_op
 unsigned long v10; // cc_dep1
 unsigned long v11; // cc_dep2
 unsigned long v12; // cc_ndep
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a1)
 {
 v3 = 4;
 v8 = ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? a2 : 0x40000000);
 if (!((char)arm64g_calculate_condition(20, v8, 0, 0)))
 goto LABEL_401d0e;
LABEL_401d0d:
 if (!((char)arm64g_calculate_condition(20, ((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? a0 : 0x40000000), 0, 0)))
 return 0;
 }
 else
 {
 v3 = 0;
 v8 = ((char)arm64g_calculate_condition(v9 | 16, v10, v11, v12) ? a2 : 0x40000000);
 if ((char)arm64g_calculate_condition(16, v8, 0, 0))
 goto LABEL_401d0d;
LABEL_401d0e:
 if (!((char)arm64g_calculate_condition(16, ((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? a0 : 0x40000000), 0, 0)))
 return 0;
 }
 v0 = &v2;
 v1 = v25;
 result = memcmp(a0, a1, a2);
 v27 = result;
 if (!result)
 {
 v28 = 0;
 if (!((char)arm64g_calculate_condition(211, v27, 0, 0)))
 return 1;
 }
 else
 {
 v28 = 4294967295;
 if (!((char)arm64g_calculate_condition(211, v27, 0, 0)))
 return 1;
 }
 return v28;
}


// Function: sub_401d3c at 0x401d3c
long long sub_401d3c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = memop_bzero();
 return memop_bzero();
}


// Function: memop_bzero at 0x401d40
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (!a0)
 return 4294967295;
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 memset(a0, 0, n);
 return *(a0);
}


// Function: sub_401d78 at 0x401d78
long long sub_401d78(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long v0; // x0

 v0 = memop_bcopy();
 return memop_bcopy();
}


// Function: memop_bcopy at 0x401d80
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // cc_op
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long long v25; // x30
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned long v8; // cc_dep1
 unsigned long v9; // cc_op
 unsigned long v10; // cc_dep1
 unsigned long v11; // cc_dep2
 unsigned long v12; // cc_ndep
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a1)
 {
 v3 = 4;
 v8 = ((char)arm64g_calculate_condition(v4 | 16, v5, v6, v7) ? a2 : 0x40000000);
 if (!((char)arm64g_calculate_condition(20, v8, 0, 0)))
 goto LABEL_401d8a;
LABEL_401d89:
 if ((char)arm64g_calculate_condition(4, ((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? a0 : 0x40000000), 0, 0))
 return 4294967295;
 }
 else
 {
 v3 = 0;
 v8 = ((char)arm64g_calculate_condition(v9 | 16, v10, v11, v12) ? a2 : 0x40000000);
 if ((char)arm64g_calculate_condition(16, v8, 0, 0))
 goto LABEL_401d89;
LABEL_401d8a:
 if ((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? a0 : 0x40000000), 0, 0))
 return 4294967295;
 }
 v0 = &v2;
 v1 = v25;
 return *((char *)memmove(a1, a0, a2));
}


// Function: sub_401dbc at 0x401dbc
long long sub_401dbc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = memop_unaligned_access();
 return memop_unaligned_access();
}


// Function: memop_unaligned_access at 0x401dc0
typedef struct struct_0 {
 char padding_0[1];
 unsigned int field_1;
} struct_0;

unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x401dd4
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x401df4
extern char __stack_chk_guard;
extern char g_4025c8;

long long test_memory_op_functions()
{
 unsigned long long v15; // x0
 unsigned int v16; // w2
 unsigned long v17; // x2
 unsigned long long v18; // x0
 char *v0; // [bp-0x170]
 unsigned int v1; // [bp-0x14c]
 unsigned long long v2; // [bp-0x148]
 unsigned int v3; // [bp-0x140]
 unsigned long long v4; // [bp-0x138]
 unsigned int v5; // [bp-0x130]
 unsigned long long flag1; // [bp-0x128]
 unsigned short result; // [bp-0x120]
 char v8; // [bp-0x118]
 char v9; // [bp-0x117]
 char v10[9]; // [bp-0x111]
 unsigned long v11; // [bp-0x108]
 unsigned short v12; // [bp-0x100]
 unsigned long v13; // [bp-0x8]
 char v14; // [bp+0x0]

 v0 = &v14;
 v13 = *((long long *)&__stack_chk_guard);
 puts(&g_4025c8);
 v11 = 4702111234474983745 CONCAT 4702111234474983745;
 v12 = v11;
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strncpy(&v8, "HelloWor", 8);
 strncpy(v10, "rld", 3);
 memmove(&v9, &v8, 9);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 v2 = 8589934593;
 v3 = 3;
 v4 = 8589934593;
 v5 = 4;
 v15 = memcmp(&v2, &v4, 12);
 if (!(unsigned int)v15)
 v16 = 0;
 else
 v16 = 4294967295;
 if ((char)arm64g_calculate_condition(211, v15 & 4294967295, 0, 0))
 v17 = v16;
 else
 v17 = 1;
 __printf_chk(1, "MEMOP-L2-04: %d\n", v17);
 flag1 = 0;
 result = 0;
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v1 = 5;
 if (v13 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v18 = __printf_chk(1, "MEMOP-L3-02: %d\n", v1 * 2);
 return __printf_chk(1, "MEMOP-L3-02: %d\n", v1 * 2);
}


// Function: sub_401f78 at 0x401f78
void sub_401f78(unsigned long a0)
{
 extern_function();
 return;
}


// Function: extern_function at 0x401f80
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


