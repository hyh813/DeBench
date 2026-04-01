// Angr Decompilation of 3_gcc_O0_no_g
// Platform: AMD64

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

// Definition of g_405fe8 (was extern, now properly defined)
struct_0 *g_405fe8 = NULL;

// Forward declaration of struct_5
typedef struct struct_5 {
 char padding_0[4];
 char field_4;
} struct_5;

typedef struct struct_1 {
 unsigned int field_0;
 unsigned int field_4;
} struct_1;

typedef struct struct_1_nested {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_1_nested;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 void *field_8;
 void *field_10;
} struct_3;

typedef struct struct_4 {
 char padding_0[8];
 void* field_8;
} struct_4;

typedef struct struct_8 {
 char padding_0[1];
 char field_1;
} struct_8;

typedef struct struct_9 {
 char padding_0[1];
 unsigned int field_1;
} struct_9;

// Define missing global variables
char bss_buffer = 0;
unsigned int global_counter = 0;
char g_403008[] = "Testing stack memory operations\n";
char g_403610[] = "Testing memory operation functions\n";
unsigned int g_40604c = 0;
char g_403160[] = "Testing heap memory operations\n";
char g_403341[] = "fork error";
char g_4032c8[] = "dangling_pointer returned: %d\n";
char g_4032d8[] = "normal exit status: %d\n";
char g_403300[] = "signal %d\n";
char g_403360[] = "Testing static and global memory\n";
unsigned int static_depends_0 = 0;
unsigned int global_point = 0;
unsigned int file_scope_static = 0;
unsigned int counter_1 = 0;
unsigned int extern_global_var = 0;
static void extern_function(unsigned int a0) { }
struct_5 *const_string = NULL;
unsigned int bss_var = 0;
unsigned long long heap_nested_var = 0;

// Definition of global_array - expanded to 10 elements based on actual usage
static unsigned int global_array[10] = {0};




// Function: sub_401020 at 0x401020
static unsigned long long g_405f50;
static unsigned long long g_405f58;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405f50;
 g_405f58 = v0;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_401020();
 return;
}


// Function: sub_40108f at 0x40108f
void sub_40108f()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_401020();
 return;
}


// Function: sub_40109f at 0x40109f
void sub_40109f()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_401020();
 return;
}


// Function: sub_4010af at 0x4010af
void sub_4010af()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_401020();
 return;
}


// Function: sub_4010bf at 0x4010bf
void sub_4010bf()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_401020();
 return;
}


// Function: sub_4010cf at 0x4010cf
void sub_4010cf()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
void sub_4010d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_401020();
 return;
}


// Function: sub_4010df at 0x4010df
void sub_4010df()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_401020();
 return;
}


// Function: sub_4010ef at 0x4010ef
void sub_4010ef()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
void sub_4010f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_401020();
 return;
}


// Function: sub_4010ff at 0x4010ff
void sub_4010ff()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
void sub_401100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_401020();
 return;
}


// Function: sub_40110f at 0x40110f
void sub_40110f()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
void sub_401110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_401020();
 return;
}


// Function: sub_40111f at 0x40111f
void __cxa_finalize(void *dso_handle) { }

/* CRT stub function _start removed by preprocessor */



// Function: sub_401245 at 0x401245
void sub_401245()
{
}


/* CRT stub functions removed by preprocessor */



// Function: double_value at 0x401309
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x40131b
unsigned int local_vars(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = a0 * 2;
 v1 = v0 + 10;
 return v1;
}


// Function: local_array at 0x401342
long long local_array(unsigned int a0)
{
 unsigned int i; // [bp-0x3c]
 unsigned long v3; // [bp-0x38]
 char v1; // [bp-0x24]

 for (i = 0; i <= 9; i += 1)
 {
 *((unsigned int *)((char *)&v3 + 4 * i)) = a0 * i;
 }
 return *((int *)&v1);
}


// Function: local_struct at 0x40139e
int local_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0 * 2;
 return v0 + a0;
}


// Function: address_of_local at 0x4013c1
unsigned int address_of_local(unsigned long ptr)
{
 unsigned int v0; // [bp-0xc]

 v0 = 42;
 *((unsigned int *)ptr) = v0;
 return v0;
}


// Function: address_of_array at 0x4013e2
int address_of_array(unsigned int *a0)
{
 unsigned int *v0; // [bp-0x18]
 unsigned int *v1; // [bp-0x10]

 v0 = a0;
 v1 = a0;
 return *(v1) + *(v0);
}


// Function: large_stack_frame at 0x40140e
long long large_stack_frame()
{
 unsigned int i; // [bp-0x81c]
 unsigned long v3; // [bp-0x818]
 char v1; // [bp-0x418]

 for (i = 0; i <= 2047; i += 1)
 {
 *((char *)&v3 + i) = i;
 }
 return v1;
}


// Function: vla_stack at 0x401482
unsigned long long vla_stack(unsigned int a0)
{
 unsigned long long v5; // rax
 unsigned long v6; // [bp-0x1048]
 char v0; // [bp-0x48]
 unsigned int i; // [bp-0x34]
 unsigned long v2; // [bp-0x30]
 unsigned long long ptr; // [bp-0x28]

 if (a0 > 0 && a0 <= 1000)
 {
 v2 = a0 - 1;
 v5 = ((unsigned long long)(((15 + a0 * 4) % 16) | (((15 + a0 * 4) / 16) << 32))) * 16;
 while (&v6 != &(&v0)[-1 * (v5 & 0xfffffffffffff000)])
 ;
 unsigned long long *vla_ptr = (unsigned long long *)((char *)&v6 - ((unsigned int)v5 & 4095));
 if (((unsigned short)v5 & 4095))
 *((long long *)(((unsigned int)v5 & 4095) - 8 + (unsigned long long)vla_ptr)) = *((long long *)(((unsigned int)v5 & 4095) - 8 + (unsigned long long)vla_ptr));
 ptr = ((unsigned long long)vla_ptr + 3 >> 2) * 4;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)(ptr + i * 4)) = i * 2;
 }
 return *((int *)(ptr + ((a0 + (a0 >> 31) & 4294967295) >> 1 & 4294967295) * 4));
 }
 return 4294967295;
}


// Function: alloca_usage at 0x4015cd
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long long v4; // rax
 unsigned long v5; // [bp-0x1038]
 char v0; // [bp-0x38]
 unsigned int i; // [bp-0x1c]
 unsigned long long v2; // [bp-0x18]

 if (a0 <= 0)
 return 4294967295;
 v4 = ((unsigned long long)(((15 + a0 * 4 + 8) % 16) | (((15 + a0 * 4 + 8) / 16) << 32))) * 16;
 while (&v5 != &(&v0)[-1 * (v4 & 0xfffffffffffff000)])
 ;
 unsigned long long *alloca_ptr = (unsigned long long *)((char *)&v5 - ((unsigned int)v4 & 4095));
 if (((unsigned short)v4 & 4095))
 *((long long *)(((unsigned int)v4 & 4095) - 8 + (unsigned long long)alloca_ptr)) = *((long long *)(((unsigned int)v4 & 4095) - 8 + (unsigned long long)alloca_ptr));
 v2 = ((unsigned long long)alloca_ptr + 15 >> 4) * 16;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)(i * 4 + v2)) = i * 3;
 }
 return *((int *)(v2 + ((a0 + (a0 >> 31) & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: stack_alias at 0x4016f3
unsigned long long stack_alias(unsigned long long a0, unsigned long long a1)
{
 char *v0; // [bp-0x28], Other Possible Types: unsigned long long
 char *v1; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned int v2; // [bp-0x14]

 v1 = a0;
 v0 = a1;
 v2 = 10;
 v1 = &v2;
 v0 = &v2;
 if (v1 == v0 && v1)
 {
 v2 = 20;
 return v2;
 }
 return 4294967295;
}


// Function: test_stack_memory at 0x40176b
long long test_stack_memory()
{
 unsigned long v19; // fs
 char v0; // [bp-0x40]
 unsigned int result; // [bp-0x3c]
 unsigned int v2; // [bp-0x38], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0x34]
 unsigned int v4; // [bp-0x30], Other Possible Types: unsigned long long
 unsigned long long flag1; // [bp-0x28]
 unsigned long long flag2; // [bp-0x20]
 unsigned long long flag3; // [bp-0x18]
 unsigned long v8; // [bp-0x10]

 puts(&g_403008);
 printf("MEM-L1-01 (local_vars): %d\n", local_vars(5) & 4294967295);
 printf("MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 printf("MEM-L1-03 (local_struct): %d\n", local_struct(5) & 4294967295);
 printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&v0) & 4294967295);
 v2 = 0;
 v4 = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 0;
 v2 = 1;
 v3 = 2;
 v4 = 3;
 printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(&v2) & 4294967295);
 printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 result = 0;
 printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&result, &result) & 4294967295);
 return v8 - *((long long *)(40 + v19));
}


// Function: heap_basic at 0x40191d
unsigned long long heap_basic(unsigned int a0)
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 void* ptr; // [bp-0x10]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)((char *)ptr + 4 * i)) = i * 2;
 }
 v1 = *((int *)((char *)ptr + 4 * ((a0 + (a0 >> 31) & 4294967295) >> 1 & 4294967295)));
 free(ptr);
 return v1;
}


// Function: heap_calloc at 0x4019b2
unsigned long long heap_calloc(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 void* ptr; // [bp-0x10]

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 v0 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v0 += *((int *)((char *)ptr + 4 * i));
 }
 free(ptr);
 return v0;
}


// Function: heap_realloc at 0x401a2b
unsigned long long heap_realloc()
{
 unsigned int i; // [bp-0x28]
 unsigned int j; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x10]

 *((void* *)&ptr[0]) = malloc(20);
 if (!ptr)
 return 4294967295;
 for (i = 0; i <= 4; i += 1)
 {
 ptr[i] = i + 1;
 }
 v2 = ptr[2];
 *((void* *)&ptr[0]) = realloc(ptr, 40);
 if (!ptr)
 {
 free(ptr);
 return 4294967294;
 }
 for (j = 5; j <= 9; j += 1)
 {
 ptr[j] = j * 10;
 }
 v3 = (v2 == ptr[2] ? ptr[5] : 4294967293);
 free(ptr);
 return v3;
}


// Function: heap_array at 0x401b2d
unsigned long long heap_array(unsigned int a0)
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 void* ptr; // [bp-0x10]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)(4 * i + (char *)ptr)) = i * 3;
 }
 v1 = *((int *)((char *)ptr + 4 * ((a0 + (a0 >> 31) & 4294967295) >> 1 & 4294967295)));
 free(ptr);
 return v1;
}


// Function: heap_struct at 0x401bc7
unsigned long long heap_struct(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 struct_1 *ptr; // [bp-0x10]

 ptr = malloc(8);
 if (ptr)
 {
 ptr->field_0 = a0;
 ptr->field_4 = a0 * 2;
 v0 = ptr->field_4 + ptr->field_0;
 free(ptr);
 return v0;
 }
 return 4294967295;
}


// Function: heap_nested at 0x401c2b
unsigned long long heap_nested(struct_1_nested **outer_ptr)
{
 struct_0 *inner_ptr;
 struct_1_nested *temp_ptr;

 *(outer_ptr) = malloc(16);
 if (!*(outer_ptr))
 return 4294967295;
 temp_ptr = *(outer_ptr);
 temp_ptr->field_0 = 10;
 inner_ptr = malloc(16);
 temp_ptr->field_8 = inner_ptr;
 if (inner_ptr)
 {
 inner_ptr->field_0 = 20;
 inner_ptr->field_8 = 0;
 return 0;
 }
 free(*(outer_ptr));
 return 4294967294;
}


// Function: linked_list_heap at 0x401cda

unsigned long long linked_list_heap()
{
 unsigned int i; // [bp-0x40]
 unsigned int v1; // [bp-0x3c]
 struct_0 *cur; // [bp-0x38]
 struct_0 *p; // [bp-0x30]
 struct_0 *iter; // [bp-0x28]
 struct_0 *ptr5; // [bp-0x20]
 struct_0 *ptr; // [bp-0x18]
 struct_0 *addr; // [bp-0x10]

 cur = NULL;
 p = NULL;
 for (i = 0; i <= 4; i += 1)
 {
 ptr = malloc(16);
 if (!ptr)
 {
 while (cur)
 {
 addr = cur;
 cur = (struct_0 *)(unsigned long)cur->field_8;
 free(addr);
 }
 return 4294967295;
 }
 ptr->field_0 = i * 10;
 ptr->field_8 = 0;
 if (!cur)
 {
 cur = ptr;
 p = ptr;
 }
 else
 {
 p->field_8 = ptr;
 p = ptr;
 }
 }
 v1 = 0;
 for (iter = cur; iter; iter = iter->field_8)
 {
 v1 += iter->field_0;
 }
 while (cur)
 {
 ptr5 = cur;
 cur = cur->field_8;
 free(ptr5);
 }
 return v1;
}


// Function: create_tree_node at 0x401e00

struct_3 * create_tree_node(unsigned int a0)
{
 struct_3 *ptr; // [bp-0x10]

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401e4b

unsigned long long tree_heap_traversal()
{
 unsigned int v0; // [bp-0x14]
 struct_3 *ptr; // [bp-0x10]

 ptr = create_tree_node(10);
 if (!ptr)
 return 4294967295;
 ptr->field_8 = create_tree_node(20);
 ptr->field_10 = create_tree_node(30);
if (ptr->field_8 && ptr->field_10)
 {
  v0 = ((struct_3 *)ptr->field_10)->field_0 + ptr->field_0 + ((struct_3 *)ptr->field_8)->field_0;
  free(ptr->field_8);
  free(ptr->field_10);
  free(ptr);
  return v0;
 }
 if (ptr->field_8)
 free(ptr->field_8);
 if (ptr->field_10)
 free(ptr->field_10);
 free(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x401f53
unsigned long long memory_leak(unsigned int a0)
{
 unsigned int i; // [bp-0x14]
 unsigned long long ptr; // [bp-0x10]

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 for (i = 0; i < a0; i += 1)
 {
 *((unsigned int *)(i * 4 + ptr)) = i;
 }
 return *((int *)(ptr + ((a0 + (a0 >> 31) & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: dangling_pointer at 0x401fd4
unsigned long long dangling_pointer()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]

 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 42;
 v0 = *(ptr);
 printf("value before free: %d\n", v0);
 free(ptr);
 v1 = *(ptr);
 return v1;
 }
 return 4294967295;
}


// Function: double_free at 0x402042
unsigned long long double_free(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0x10]

 if (a0)
 return *(a0);
 ptr = malloc(4);
 if (ptr)
 {
 *(ptr) = 10;
 free(ptr);
 free(ptr);
 return 4294967294;
 }
 return 4294967295;
}


// Function: heap_overflow at 0x4020a6
unsigned long long heap_overflow()
{
 unsigned int i; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 for (i = 0; i <= 10; i += 1)
 {
 ptr[i] = i * 100;
 }
 v1 = *(ptr);
 free(ptr);
 return v1;
}


// Function: test_heap_memory at 0x402117

long long test_heap_memory()
{
 unsigned long v15; // fs
 unsigned int v0[1]; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 struct_4 *result; // [bp-0x18]
 unsigned long v4; // [bp-0x10]

 puts(&g_403160);
 printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 result = NULL;
 printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result) & 4294967295);
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
 v2 = dangling_pointer();
 printf(&g_4032c8, v2);
 exit(0); /* do not return */
 }
 if (flag1 > 0)
 {
 waitpid(flag1, &v0, 0);
 if (!((char)*(v0) & 127))
 {
 printf(&g_4032d8, *(v0) >> 8);
 }
 else if ((char)(((*(v0) & 127) + 1 & 255) >> 1) > 0)
 {
 printf(&g_403300, *(v0) & 127);
 }
 }
 else
 {
 perror(&g_403341);
 }
 return v4 - *((long long *)(40 + v15));
}


// Function: global_var_access at 0x40237c
int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter;
}


// Function: global_var_read at 0x40239b
unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x4023ad
unsigned long long global_array_access(unsigned int a0)
{
 if (a0 >= 0 && a0 <= 9)
 return global_array[a0];
 return 4294967295;
}


// Function: static_local at 0x4023e4
unsigned long long static_local(unsigned int a0)
{
 if (!a0)
 {
 counter_1 = counter_1 + 1;
 return counter_1;
 }
 counter_1 = 0;
 return 0;
}


// Function: static_helper at 0x40241d
unsigned int static_helper(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_static_func at 0x40242f
int call_static_func(unsigned int a0)
{
 return static_helper(a0) + 1;
}


// Function: access_extern_global at 0x40244d
int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x402460
void call_extern_func()
{
 extern_function(5);
}


// Function: read_const_data at 0x402474
int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x402496
int access_bss_var()
{
 return bss_var;
}


// Function: access_bss_buffer at 0x4024a6
int access_bss_buffer()
{
 return bss_buffer;
}


// Function: global_struct_access at 0x4024ba
int global_struct_access()
{
 return g_40604c + global_point;
}


// Function: set_file_static at 0x4024d2
int set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: get_file_static at 0x4024e9
int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x4024f9
typedef unsigned long long (*global_func_ptr_t)(unsigned int);

global_func_ptr_t global_func_ptr = NULL;

long long set_global_callback(unsigned long a0)
{
 global_func_ptr = (global_func_ptr_t)a0;
 return a0;
}


// Function: call_global_callback at 0x402513
unsigned long long call_global_callback(unsigned int a0)
{
 return (!global_func_ptr ? 4294967295 : global_func_ptr(a0));
}


typedef struct struct_7 {
 unsigned int field_0;
} struct_7;

struct_7 *global_heap_ptr = NULL;

// Function: global_heap_store at 0x402545
unsigned long long global_heap_store(unsigned int *a0)
{
 global_heap_ptr = (struct_7 *)a0;
 return (!global_heap_ptr ? 4294967295 : a0 ? *(a0) : 4294967295);
}


// Function: tls_access at 0x40259a
unsigned int tls_access(unsigned int a0)
{
 unsigned long ptr; // fs

 *((unsigned int *)(18446744073709551612 + ptr)) = a0;
 return *((int *)(18446744073709551612 + ptr)) * 2;
}


// Function: init_depends_on at 0x4025bc
int init_depends_on(unsigned int *a0)
{
 if (a0)
 static_depends_0 = *(a0);
 return static_depends_0;
}


// Function: init_order_test at 0x4025e3
int init_order_test()
{
 unsigned int v0; // [bp-0x14]

 v0 = 20;
 return init_depends_on(&v0);
}


// Function: test_static_global at 0x402627

long long test_static_global()
{
 unsigned long v21; // fs
 unsigned int v0; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 puts(&g_403360);
 printf("STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
 printf("STM-L1-01 (global_var_read): %d\n", global_var_read() & 4294967295);
 printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5) & 4294967295);
 static_local(1);
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 printf("STM-L1-03 (static_local): %d\n", static_local(0) & 4294967295);
 printf("STM-L1-04 (call_static_func): %d\n", call_static_func(5) & 4294967295);
 printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global() & 4294967295);
 printf("STM-L2-02 (call_extern_func): %d\n", 0);
 printf("STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
 printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var() & 4294967295);
 printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer() & 4294967295);
 printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
 set_file_static(50);
 printf("STM-L2-06 (file_static): %d\n", get_file_static() & 4294967295);
 set_global_callback(double_value);
 printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5) & 4294967295);
 v0 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&v0) & 4294967295);
 printf("STM-L2-09 (static_complex_init): %d\n", 0);
 printf("STM-L3-01 (tls_access): %d\n", tls_access(10) & 4294967295);
 printf("STM-L3-02 (init_order_test): %d\n", init_order_test() & 4294967295);
 return v1 - *((long long *)(40 + v21));
}


// Function: memop_memset at 0x4028d4
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 if (a0 && n)
 {
 memset(a0, a2, n);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_memcpy at 0x402921
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 if (a0 && a1 && n)
 {
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x402983
unsigned long long memop_memmove(struct_8 *a0, unsigned long a1)
{
 if (a0 && a1 > 1)
 {
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
 }
 return 4294967295;
}


// Function: memop_memcmp at 0x4029db
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v0; // [bp-0xc]

 if (a0 && a1 && a2)
 {
 v0 = memcmp(a0, a1, a2);
 return (v0 <= 0 ? (v0 < 0 ? 4294967295 : 0) : 1);
 }
 return 0;
}


// Function: memop_bzero at 0x402a4a
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 if (a0)
 {
 memset(a0, 0, n);
 return *(a0);
 }
 return 4294967295;
}


// Function: memop_bcopy at 0x402a93
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
{
 if (a0 && a1 && n)
 {
 memmove(a1, a0, n);
 return *(a1);
 }
 return 4294967295;
}


// Function: memop_unaligned_access at 0x402aea
unsigned long long memop_unaligned_access(void *raw_ptr)
{
 unsigned int v0; // [bp-0x14]

 if (raw_ptr)
 {
 v0 = *((unsigned int *)((char *)raw_ptr + 1));
 return v0;
 }
 return 4294967295;
}


// Function: memop_memory_barrier at 0x402b3d
unsigned long long memop_memory_barrier(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]
 char v1; // [bp-0x8]

 if (ptr)
 {
 v0 = *(ptr);
 __sync_synchronize();
 return v0 + *(ptr);
 }
 return 4294967295;
}


// Function: test_memory_op_functions at 0x402b73
long long test_memory_op_functions()
{
 unsigned long v29; // fs
 unsigned int v0[1]; // [bp-0x194]
 unsigned int result; // [bp-0x190]
 unsigned int v2; // [bp-0x18c]
 unsigned int v3; // [bp-0x188]
 unsigned int flag1; // [bp-0x184]
 unsigned int v5; // [bp-0x180]
 unsigned int v6; // [bp-0x17c]
 unsigned int v7; // [bp-0x178]
 unsigned int v8; // [bp-0x174]
 unsigned int v9; // [bp-0x170]
 unsigned int v10; // [bp-0x16c]
 unsigned int v11; // [bp-0x168]
 char v12; // [bp-0x158]
 unsigned int v13; // [bp-0x13d]
 char flag2[4]; // [bp-0x139]
 unsigned long v15; // [bp-0x135]
 char v16[10]; // [bp-0x12d]
 char v17; // [bp-0x123]
 char v18[264]; // [bp-0x118]
 unsigned long v19; // [bp-0x10]
 unsigned int v0_value = 5;

 puts(&g_403610);
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 memset(&v12, 0, 20);
 printf("MEMOP-L2-01: %d\n", memop_memset(&v18, 10, 65) & 4294967295);
 printf("MEMOP-L2-02: %d\n", memop_memcpy(&v12, &v7, 20) & 4294967295);
 strncpy(&v17, "HelloWorld", 10);
 printf("MEMOP-L2-03: %c\n", memop_memmove(&v17, 10) & 4294967295);
 result = 1;
 v2 = 2;
 v3 = 3;
 flag1 = 1;
 v5 = 2;
 v6 = 4;
 printf("MEMOP-L2-04: %d\n", memop_memcmp(&result, &flag1, 12) & 4294967295);
 printf("MEMOP-L2-05: %d\n", memop_bzero(&v16, 10) & 4294967295);
 v13 = 67305985;
 *((unsigned int *)&flag2) = 0;
 printf("MEMOP-L2-06: %d\n", memop_bcopy(&v13, &flag2, 4) & 4294967295);
 v15 = 0x706050403020100;
 printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(&v15) & 4294967295);
 printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&v0_value) & 4294967295);
 return v19 - *((long long *)(40 + v29));
}


// Function: main at 0x402dfe
int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


/* CRT stub function _fini removed by preprocessor */


