// Angr Decompilation of 3_gcc_O2_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */


// Struct type definitions
typedef struct struct_0 {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
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

typedef struct struct_4 {
 unsigned int field_0;
 struct struct_1 *field_4;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
 struct struct_5 *field_4;
} struct_5;

typedef struct struct_6 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_6;

// Global variable definitions
unsigned int file_scope_static = 0;
unsigned int counter_1 = 0;
struct_6 *const_string = 0;
unsigned int global_func_ptr = 0;
unsigned int global_counter = 0;
extern unsigned int extern_global_var;

// External declarations
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_24008;
extern char g_128e8[];
extern char g_12a44[];
extern char g_12b90[];
extern char g_12ba0[];
extern char g_12bc8[];
extern char g_12c0c[];
extern char g_12c38[];
extern char g_12ebc[];
extern unsigned int global_array[4];

// Forward declarations
static unsigned int extern_function(unsigned int a0);
static unsigned int Clz(unsigned int v);
static unsigned int double_value(unsigned int a0);
static int local_vars(unsigned int a0);
static unsigned int local_array(unsigned int a0);
static unsigned int local_struct(unsigned int a0);
static unsigned int address_of_local(unsigned int *ptr);
static unsigned int address_of_array(unsigned int *a0);
static int large_stack_frame();
static unsigned int vla_stack(unsigned int a0);
static unsigned int alloca_usage(unsigned int a0);
static unsigned int stack_alias();
static unsigned int heap_basic(unsigned int a0);
static unsigned int heap_calloc(unsigned int a0);
static unsigned int heap_realloc();
static unsigned int heap_array(unsigned int a0);
static unsigned int heap_struct(unsigned int a0);
static unsigned int heap_nested(struct_4 **addr);
static unsigned int linked_list_heap();
static unsigned int *create_tree_node(unsigned int a0);
static unsigned int tree_heap_traversal();
static unsigned int memory_leak(unsigned int i);
static unsigned int dangling_pointer();
static unsigned int double_free(unsigned int *a0);
static unsigned int heap_overflow();
static unsigned int test_heap_memory(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
static unsigned int test_stack_memory();
static unsigned int test_memory_op_functions();
static int test_static_global(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
static unsigned int global_var_access();
static unsigned int global_var_read();
static unsigned int global_array_access(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
static int static_local(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
static int call_static_func(unsigned int a0);
static int call_extern_func();
static int access_extern_global();
static int read_const_data();
static unsigned int access_bss_var();
static unsigned int access_bss_buffer();
static unsigned int global_struct_access();
static int set_file_static(unsigned int a0);
static int get_file_static();
static int set_global_callback(unsigned int a0);
static unsigned int call_global_callback();
static unsigned int global_heap_store(unsigned int *a0);
static unsigned int static_complex_init();
static unsigned int tls_access(unsigned int a0);
static unsigned int init_order_test();
static unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2);
static unsigned int memop_memcpy(void* a0, void* a1, unsigned int n, unsigned int a3);
static unsigned int memop_memmove(char *a0, unsigned int a1);
static unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2, unsigned int a3);
static unsigned int memop_bzero(char *a0, unsigned int n);
static unsigned int memop_bcopy(void* a0, char *a1, unsigned int n, unsigned int a3);
static unsigned int memop_unaligned_access(void* a0);
static unsigned int memop_memory_barrier(unsigned int a0);

// Define extern_function
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 2;
}

// Function: Clz (count leading zeros)
static unsigned int Clz(unsigned int v)
{
 if (v == 0) return 32;
 unsigned int count = 0;
 while (!(v & 0x80000000))
 {
  v <<= 1;
  count++;
 }
 return count;
}

// Standard library function declarations
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern void *malloc(unsigned int size);
extern void free(void *ptr);
extern void *calloc(unsigned int nmemb, unsigned int size);
extern void *realloc(void *ptr, unsigned int size);
extern void *memset(void *s, int c, unsigned int n);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern void *memmove(void *dest, const void *src, unsigned int n);
extern int memcmp(const void *s1, const void *s2, unsigned int n);
extern char *strncpy(char *dest, const char *src, unsigned int n);
extern int fork(void);
extern int waitpid(int pid, int *status, int options);
extern void perror(const char *s);
extern void exit(int status);
extern void __stack_chk_fail(void);
extern void abort(void);
extern void __sync_synchronize(void);

// Function: armg_calculate_condition (VEX helper)
static unsigned int armg_calculate_condition(unsigned int cond, unsigned int arg1, unsigned int arg2, unsigned int arg3)
{
 // Stub implementation for ARM condition codes
 switch (cond)
 {
  case 0: return 0; // EQ
  case 1: return 1; // NE
  case 2: return (arg1 == 0) ? 1 : 0; // CS/HS
  case 3: return (arg1 != 0) ? 1 : 0; // CC/LO
  case 4: return (arg1 & 0x80000000) ? 1 : 0; // MI
  case 5: return !(arg1 & 0x80000000) ? 1 : 0; // PL
  case 6: return (arg1 & 1) ? 1 : 0; // VS
  case 7: return !(arg1 & 1) ? 1 : 0; // VC
  case 8: return (arg1 > arg2) ? 1 : 0; // HI
  case 9: return (arg1 <= arg2) ? 1 : 0; // LS
  case 10: return ((int)arg1 >= (int)arg2) ? 1 : 0; // GE
  case 11: return ((int)arg1 < (int)arg2) ? 1 : 0; // LT
  case 12: return ((int)arg1 > (int)arg2) ? 1 : 0; // GT
  case 13: return ((int)arg1 <= (int)arg2) ? 1 : 0; // LE
  case 14: return 1; // AL
  case 15: return 0; // NV
  case 18: return (arg1 == arg2) ? 1 : 0;
  case 146: return (arg1 >= arg2) ? 1 : 0;
  case 194: return (arg1 <= arg2) ? 1 : 0;
  case 210: return (arg1 != 0) ? 1 : 0;
  default: return 1;
 }
}





// Function: main at 0x10684
int main()
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
 test_memory_op_functions();
 return 0;
}



/* CRT stub function _start removed by preprocessor */







/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: double_value at 0x10798
static unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x107a0
static int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x107ac
static unsigned int local_array(unsigned int a0)
{
 unsigned int v5; // lr
 unsigned int v6; // r2
 struct_0 *ptr; // r3
 struct_0 *v8; // r3
 char v0; // [bp-0x38]
 char v1; // [bp-0x20]
 char v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 v6 = 0;
 ptr = (struct_0 *)&v0;
 do
 {
 v8 = (struct_0 *)((char *)ptr + 4);
 ptr->field_4 = v6;
 v6 += a0;
 ptr = v8;
 } while ((char *)ptr != &v2);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v1);
}


// Function: local_struct at 0x1080c
static unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x10814
static unsigned int address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x10824
static unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x10830
static int large_stack_frame()
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


// Function: vla_stack at 0x108a0
static unsigned int vla_stack(unsigned int a0)
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


// Function: alloca_usage at 0x10930
static unsigned int alloca_usage(unsigned int a0)
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


// Function: stack_alias at 0x109c0
static unsigned int stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x109c8
static unsigned int test_stack_memory()
{
 unsigned int v2; // r0

 puts(0x128e8);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));
 v2 = __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
 return v2;
}


// Function: heap_basic at 0x10a9c
static unsigned int heap_basic(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int i; // r3
 unsigned int *ptr2; // r2
 unsigned int *v3; // r2

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 i = 0;
 ptr2 = ptr + 1;
 do
 {
 v3 = ptr2 + 1;
 ptr2[1] = i;
 i += 2;
 ptr2 = v3;
 } while (i != a0 * 2);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_calloc at 0x10af8
static unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *ptr; // r0
 unsigned int v1; // r4
 unsigned int *ptr2; // r3
 unsigned int *v3; // r3

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v1 = 0;
 if (a0 > 0)
 {
 ptr2 = ptr + 1;
 do
 {
 v3 = ptr2 + 1;
 v1 += ptr2[1];
 ptr2 = v3;
 } while (ptr2 != &ptr[a0 + 1]);
 }
 free(ptr);
 return v1;
}


// Function: heap_realloc at 0x10b4c
static unsigned int heap_realloc()
{
 unsigned int *ptr; // r4
 unsigned int *ptr2; // r3

 ptr = malloc(20);
 if (!ptr)
 return 0xffffffff;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[4] = 5;
 ptr[3] = 4;
 ptr[2] = 3;
 ptr2 = realloc(ptr, 40);
 if (!ptr2)
 {
 free(ptr);
 return 0xfffffffe;
 }
 if (ptr2[2] == 3)
 {
 ptr2 = (unsigned int *)0x32;
 if (!armg_calculate_condition(18, ptr2[2], 3, 0))
 goto LABEL_10ba2;
LABEL_10ba1:
 ptr2 = (unsigned int *)0xfffffffd;
 }
 else
 {
 if (armg_calculate_condition(18, ptr2[2], 3, 0))
 goto LABEL_10ba1;
LABEL_10ba2:
 ;
 }
 free(ptr2);
 return (unsigned int)ptr2;
}


// Function: heap_array at 0x10bc8
static unsigned int heap_array(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v2; // r2
 unsigned int *ptr2; // r3
 unsigned int *v4; // r3

 v0 = a0 * 4;
 ptr = malloc(v0);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 v2 = 0;
 ptr2 = ptr + 1;
 do
 {
 v4 = ptr2 + 1;
 ptr2[1] = v2;
 v2 += 3;
 ptr2 = v4;
 } while (ptr2 != -4 + (char *)ptr + v0);
 }
 free(ptr);
 return ptr[a0 + (a0 >> 31) >> 1];
}


// Function: heap_struct at 0x10c2c
static unsigned int heap_struct(unsigned int a0)
{
 unsigned int *ptr2; // r0

 ptr2 = malloc(8);
 if (!ptr2)
 return 4294967295;
 free(ptr2);
 return a0 * 3;
}


// Function: heap_nested at 0x10c5c
static unsigned int heap_nested(struct_4 **addr)
{
 struct_2 *ptr; // r0
 struct_2 *ptr2; // r4
 unsigned int *p; // r3

 ptr = malloc(8);
 *(addr) = (struct_4 *)ptr;
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 ptr2->field_0 = 10;
 p = malloc(8);
 ptr2->field_4 = (struct struct_1 *)p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p[0] = 20;
 p[1] = 0;
 return 0;
}


// Function: linked_list_heap at 0x10cc8
static unsigned int linked_list_heap()
{
 unsigned int v0; // r5
 struct_5 *v1; // r3
 struct_5 *p; // r3
 struct_5 *v11; // r3
 struct_5 *addr; // r4
 struct_5 *v13; // r4
 struct_5 *ptr3; // r4
 struct_5 *v15; // r4
 struct_5 *v2; // r4
 struct_5 *ptr4; // r3
 struct_5 *result; // r4
 struct_5 *ptr; // r3
 struct_5 *v7; // r4
 struct_5 *v8; // r4
 unsigned int v9; // r5

 v0 = 0;
 v1 = 0;
 v2 = 0;
 while (1)
 {
 ptr4 = v1;
 result = v2;
 ptr = malloc(8);
 if (!ptr)
 break;
 ptr->field_0 = v0;
 ptr->field_4 = 0;
 v0 += 10;
 if (!result)
 v7 = ptr;
 else
 v7 = result;
 v8 = v7;
 if (ptr4) ptr4->field_4 = ptr;
 v2 = v8;
 v1 = ptr;
 if (v0 == 50)
 {
 v9 = 0;
 p = v8;
 do
 {
 v11 = p->field_4;
 v9 += p->field_0;
 p = v11;
 } while (p && p->field_4);
 do
 {
 addr = v8;
 v13 = addr->field_4;
 free(addr);
 v8 = v13;
 } while (addr && addr->field_4);
 return v9;
 }
 }
 if (result)
 {
 do
 {
 ptr3 = result;
 v15 = ptr3->field_4;
 free(ptr3);
 result = v15;
 } while (ptr3 && ptr3->field_4);
 }
 return 4294967295;
}


// Function: create_tree_node at 0x10d64
static unsigned int *create_tree_node(unsigned int a0)
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
 else
 v5 = 0;
 ptr[0] = a0;
 ptr[1] = v5;
 ptr[2] = v5;
 return ptr;
}


// Function: tree_heap_traversal at 0x10d8c
static unsigned int tree_heap_traversal()
{
 unsigned int *p; // r4
 unsigned int *ptr2; // r5
 unsigned int *ptr3; // r6
 unsigned int *ptr4; // r0

 p = malloc(12);
 if (!p)
 return 4294967295;
 ptr2 = malloc(12);
 if (ptr2)
 {
 ptr3 = malloc(12);
 if (ptr3)
 {
 free(ptr3);
 free(ptr2);
 free(p);
 return 60;
 }
 free(ptr2);
 }
 else
 {
 ptr4 = malloc(12);
 if (ptr4)
 free(ptr4);
 }
 free(p);
 return 4294967294;
}


// Function: memory_leak at 0x10e14
static unsigned int memory_leak(unsigned int i)
{
 unsigned int *ptr; // r0
 unsigned int v1; // r3
 unsigned int *ptr2; // r2
 unsigned int *v3; // r2

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i <= 0)
 return ptr[i + (i >> 31) >> 1];
 v1 = 0;
 ptr2 = ptr + 1;
 do
 {
 v3 = ptr2 + 1;
 ptr2[1] = v1;
 v1 += 1;
 ptr2 = v3;
 } while (i != v1);
 return ptr[i + (i >> 31) >> 1];
}


// Function: dangling_pointer at 0x10e64
static unsigned int dangling_pointer()
{
 unsigned int *ptr; // r0
 unsigned int val;

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 val = *ptr;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return val;
}


// Function: double_free at 0x10ea4
static unsigned int double_free(unsigned int *a0)
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


// Function: heap_overflow at 0x10ee4
static unsigned int heap_overflow()
{
 unsigned int *ptr; // r0
 unsigned int i; // r3
 unsigned int *ptr2; // r2
 unsigned int *v3; // r2
 unsigned int result;

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 ptr2 = ptr + 1;
 do
 {
 v3 = ptr2 + 1;
 ptr2[1] = i;
 i += 100;
 ptr2 = v3;
 } while (i != 1100);
 result = *ptr;
 free(ptr);
 return result;
}


// Function: test_heap_memory at 0x10f30
static unsigned int test_heap_memory(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 unsigned int *ptr4; // r0
 unsigned int i; // r3
 unsigned int *ptr5; // r0
 unsigned int k; // r3
 unsigned int *ptr7; // r2
 unsigned int *v15; // r2
 unsigned int v16; // r4
 unsigned int *ptr; // r0
 unsigned int v18; // r2
 struct_6 *p; // r4
 unsigned int *addr; // r0
 unsigned int v21; // r2
 unsigned int *ptr6; // r2
 unsigned int *ptr2; // r0
 unsigned int v25; // r2
 unsigned int pid; // r0
 unsigned int v27; // r0
 unsigned int v28; // r3
 unsigned int msg; // r0
 unsigned int *ptr3; // r4
 unsigned int v31; // r2
 unsigned int *v5; // r2
 unsigned int v6; // r4
 unsigned int *ptr9; // r0
 unsigned int v8; // r4
 unsigned int *ptr8; // r3
 unsigned int *v10; // r3
 unsigned int v0[1]; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 puts(0x12a44);
 ptr4 = malloc(40);
 if (ptr4)
 {
 i = 0;
 ptr6 = &ptr4[1];
 do
 {
 v5 = &ptr6[1];
 ptr6[1] = i;
 i += 2;
 ptr6 = v5;
 } while (i != 20);
 v6 = ptr4[5];
 free(ptr4);
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
 ptr8 = ptr + 1;
 do
 {
 v10 = ptr8 + 1;
 v8 += ptr8[1];
 ptr8 = v10;
 } while (ptr + 4 != ptr8);
 free(ptr);
 }
 else
 {
 v8 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v8);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());
 ptr5 = malloc(40);
 if (ptr5)
 {
 k = 0;
 ptr7 = &ptr5[1];
 do
 {
 v15 = &ptr7[1];
 ptr7[1] = k;
 k += 3;
 ptr7 = v15;
 } while (k != 30);
 v16 = ptr5[5];
 free(ptr5);
 }
 else
 {
 v16 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v16);
 ptr2 = malloc(8);
 if (ptr2)
 {
 free(ptr2);
 v18 = 15;
 }
 else
 {
 v18 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v18);
 p = malloc(8);
 if (p)
 {
 addr = malloc(8);
 p->field_4 = (struct struct_1 *)addr;
 if (addr)
 {
 v21 = 0;
 addr[0] = 20;
 addr[1] = 0;
 }
 else
 {
 free(p);
 v21 = 4294967294;
 }
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v21);
 free(p->field_4);
 free(p);
 }
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());
 ptr9 = malloc(20);
 if (ptr9)
 {
 ptr9[1] = 1;
 v25 = 2;
 ptr9[4] = 4;
 ptr9[0] = 0;
 ptr9[2] = 2;
 ptr9[3] = 3;
 }
 else
 {
 v25 = 4294967295;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v25);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if (pid)
 {
 if (!((char)armg_calculate_condition(210, pid, 0, 0)))
 {
 v27 = waitpid(pid, &v0, 0);
 v28 = *(v0);
 if (((char)v28 & 127))
 {
 if (0x2000000 <= ((v28 & 127) + 1) * 0x1000000)
 v27 = __printf_chk(1, 0x12bc8, v28 & 127);
 }
 else
 {
 v27 = __printf_chk(1, 0x12ba0, v28 >> 8 & 255);
 }
 if (!(v1 ^ __glibc___stack_chk_guard))
 {
 return v27;
 }
 }
 else if (!(v1 ^ __glibc___stack_chk_guard))
 {
 perror(0x12c0c);
 return 0;
 }
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 ptr3 = malloc(4);
 if (ptr3)
 {
 v31 = *ptr3;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr3);
 }
 else
 {
 v31 = 4294967295;
 }
 __printf_chk(1, 0x12b90, v31);
 exit(0); /* do not return */
 }
}


// Function: global_var_access at 0x1129c
static unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x112b4
static unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x112c8
static unsigned int global_array_access(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 if (9 >= a0)
 return *((int *)(77708 + a0 * 4));
 return 4294967295;
}


// Function: static_local at 0x112e0
static int static_local(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = counter_1;
 if (armg_calculate_condition(2, a0, 0, 0))
 v0 = counter_1 + 1;
 counter_1 = v0;
 return v0;
}


// Function: call_static_func at 0x11304
static int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x11310
static int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x11324
static int call_extern_func()
{
 unsigned int v0; // r0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: read_const_data at 0x1132c
static int read_const_data()
{
 return ((struct_6 *)const_string)->field_4 + 42;
}


// Function: access_bss_var at 0x11344
static unsigned int access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x1134c
static unsigned int access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x11354
static unsigned int global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x1135c
static int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x1136c
static int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x1137c
static int set_global_callback(unsigned int a0)
{
 global_func_ptr = a0;
 return a0;
}


// Function: call_global_callback at 0x1138c
static unsigned int call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((unsigned int (*)(void))global_func_ptr)();
}


// Function: global_heap_store at 0x113ac
static unsigned int global_heap_store(unsigned int *a0)
{
 if (a0)
 return *(a0);
 return 4294967295;
}


// Function: static_complex_init at 0x113bc
static unsigned int static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x113c4
static unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x113cc
static unsigned int init_order_test()
{
 return 20;
}


// Function: test_static_global at 0x113d4
static int test_static_global(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r2
 unsigned int v1; // r2
 unsigned int v3; // r0

 puts(0x12c38);
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
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", ((struct_6 *)const_string)->field_4 + 42);
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
 v3 = __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
 return v3;
}


// Function: memop_memset at 0x115a8
static unsigned int memop_memset(char *a0, unsigned int n, unsigned int a2)
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


// Function: memop_memcpy at 0x115dc
static unsigned int memop_memcpy(void* a0, void* a1, unsigned int n, unsigned int a3)
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
 goto LABEL_115e6;
LABEL_115e5:
 a3 = 1;
 if (!armg_calculate_condition(18, v7, v8, v9))
 goto LABEL_115ea;
LABEL_115e9:
 a3 = 0;
 }
 else
 {
 v7 = (armg_calculate_condition(18, v10, v11, v12) ? a1 : v10);
 v8 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v11);
 v9 = (armg_calculate_condition(18, v10, v11, v12) ? 0 : v12);
 if (armg_calculate_condition(2, v7, v8, v9))
 goto LABEL_115e5;
LABEL_115e6:
 if (armg_calculate_condition(18, v7, v8, v9))
 goto LABEL_115e9;
LABEL_115ea:
 { }
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


// Function: memop_memmove at 0x11624
static unsigned int memop_memmove(char *a0, unsigned int a1)
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
 memmove(&a0[1], a0, a1 - 1);
 return a0[1];
 ;
}


// Function: memop_memcmp at 0x1165c
static unsigned int memop_memcmp(void* a0, void* a1, unsigned int a2, unsigned int a3)
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
 goto LABEL_11666;
LABEL_11665:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_1166a;
LABEL_11669:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_11665;
LABEL_11666:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_11669;
LABEL_1166a:
 { }
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


// Function: memop_bzero at 0x116a8
static unsigned int memop_bzero(char *a0, unsigned int n)
{
 if (!a0)
 return 4294967295;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x116d0
static unsigned int memop_bcopy(void* a0, char *a1, unsigned int n, unsigned int a3)
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
 goto LABEL_116da;
LABEL_116d9:
 a3 = 1;
 if (!armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_116de;
LABEL_116dd:
 a3 = 0;
 }
 else
 {
 v5 = (armg_calculate_condition(18, v8, v9, v10) ? a1 : v8);
 v6 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9);
 v7 = (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10);
 if (armg_calculate_condition(2, v5, v6, v7))
 goto LABEL_116d9;
LABEL_116da:
 if (armg_calculate_condition(18, v5, v6, v7))
 goto LABEL_116dd;
LABEL_116de:
 { }
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


// Function: memop_unaligned_access at 0x11714
static unsigned int memop_unaligned_access(void* a0)
{
 unsigned int v3; // lr
 unsigned int v4; // r0
 char v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 v4 = 0;
 if (a0)
 memcpy(&v0, a0 + 1, 4);
 else
 v4 = 4294967295;
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: memop_memory_barrier at 0x11778
static unsigned int memop_memory_barrier(unsigned int a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return 0;
}


// Function: test_memory_op_functions at 0x117a0
static unsigned int test_memory_op_functions()
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
 puts(0x12ebc);
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
 goto LABEL_11869;
LABEL_1186a:
 { }
 if (armg_calculate_condition(2, v15, 0, 0))
 goto LABEL_1186d;
LABEL_1186e:
 { }
 }
 }
 else
 {
 v16 = v17;
 if (!((char)armg_calculate_condition(194, v15, 0, 0)))
 {
 if (!armg_calculate_condition(18, v15, 0, 0))
 goto LABEL_1186a;
LABEL_11869:
 { }
 v16 = 4294967295;
 if (!armg_calculate_condition(2, v15, 0, 0))
 goto LABEL_1186e;
LABEL_1186d:
 { }
 v16 = 0;
 }
 }
 __printf_chk(1, "MEMOP-L2-04: %d\n", v16);
 memset(&v6, 0, 10);
 __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
 __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
 __sync_synchronize();
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
}




































/* CRT stub function _fini removed by preprocessor */


