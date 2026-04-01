// Angr Decompilation of 3_gcc_O1_g
// Platform: AMD64

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_0;

extern struct_0 *g_405fe8;
struct_0 *g_405fe8 = NULL;

static unsigned int extern_function(unsigned int a0);

/* Global variable definitions */
char g_403438[] = "Static/Global Test";
unsigned long long global_func_ptr = 0;
unsigned int file_scope_static = 0;
char g_4033c8[] = "Exit code: %d\n";
unsigned int global_counter = 0;
char g_4030e6[] = "Heap Memory Test";
char g_4033f0[] = "Signal: %d\n";
unsigned int counter_1 = 0;
unsigned int global_array[4] = {1, 2, 3, 4};
char g_403004[] = "Stack Memory Test";
char g_4031b6[] = "%d\n";
char g_4031c6[] = "fork failed";


// Function: sub_401020 at 0x401020
extern unsigned long long g_405f50;
extern unsigned long long g_405f58;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_405f50;
 return;
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
void sub_40111f()
{
 __cxa_finalize();
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401245 at 0x401245
void sub_401245()
{
}














// Function: sub_4012f5 at 0x4012f5
void sub_4012f5()
{
}






// Function: double_value at 0x401309
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: local_vars at 0x401311
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: local_array at 0x40131a
long long local_array(unsigned long a0)
{
 char *cur; // rax
 unsigned long long v5; // rdx
 char v0; // [bp-0x38]
 char v1; // [bp-0x24]
 char v2; // [bp-0x10]

 cur = &v0;
 v5 = 0;
 do
 {
 *((unsigned int *)cur) = v5;
 v5 += a0;
 cur += 1;
 } while (cur != &v2);
 return *((int *)&v1);
}


// Function: local_struct at 0x40136a
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: address_of_local at 0x401372
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x401382
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: large_stack_frame at 0x40138b
long long large_stack_frame()
{
 unsigned long long i; // rax
 unsigned long v3; // [bp-0x818]
 char v0; // [bp-0x418]

 i = 0;
 do
 {
 *((char *)&v3 + i) = i;
 i += 1;
 } while (i != 0x800);
 return v0;
}


// Function: vla_stack at 0x4013e0
unsigned long long vla_stack(unsigned int a0)
{
 unsigned int v2; // ecx
 unsigned long v3; // rax
 unsigned long long v4; // rax
 unsigned long idx; // rax
 unsigned long v7; // [bp-0x1018]
 char v0; // [bp-0x18]
 unsigned long *vvar_54;

 v2 = a0 - 1;
 if (v2 > 999)
 return 4294967295;
 v3 = a0 * 4 + 15;
 v4 = (unsigned int)v3 & 0xfffffff0 & 4095;
 vvar_54 = (unsigned long *)((char *)&v7 - v4);
 if (v4)
 *((long long *)(vvar_54 + v4 - 8)) = *((long long *)(vvar_54 + v4 - 8));
 idx = 0;
 do
 {
 *((unsigned int *)(vvar_54 + idx * 4)) = (unsigned int)idx * 2;
 idx += 1;
 } while (idx != v2);
 return *((int *)(vvar_54 + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: alloca_usage at 0x40149c
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long v2; // rax
 unsigned long long v3; // rax
 unsigned int *cur; // rdi
 unsigned int i; // eax
 unsigned long v6; // [bp-0x1018]
 char v0; // [bp-0x18]
 unsigned long *vvar_55;

 if (a0 <= 0)
 return 4294967295;
 v2 = a0 * 4 + 23;
 v3 = (unsigned int)v2 & 0xfffffff0 & 4095;
 vvar_55 = (unsigned long *)((char *)&v6 - v3);
 if (v3)
 *((long long *)(vvar_55 + v3 - 8)) = *((long long *)(vvar_55 + v3 - 8));
 cur = (unsigned int *)(((unsigned long long)vvar_55 + 15) & 0xfffffffffffffff0);
 i = 0;
 do
 {
 *(cur) = i;
 i += 3;
 cur += 1;
 } while (i != a0 * 3);
 return *((int *)((((unsigned long long)vvar_55 + 15) & 0xfffffffffffffff0) + (((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: stack_alias at 0x401558
unsigned long long stack_alias()
{
 return 20;
}


// Function: test_stack_memory at 0x401562
extern char g_403004[];

int test_stack_memory()
{
 puts(&g_403004);
 __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
 __printf_chk(1, "MEM-L1-02 (local_array): %d\n", local_array(2) & 4294967295);
 __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
 __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", vla_stack(10) & 4294967295);
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10) & 4294967295);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x40168a
unsigned int heap_basic(unsigned int a0)
{
 unsigned long v1; // rbx
 void* ptr; // rax
 unsigned long long idx; // rdx

 v1 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v1 > 0)
 {
 idx = 0;
 do
 {
 *((unsigned int *)((char *)ptr + 4 * idx)) = (unsigned int)idx * 2;
 idx += 1;
 } while (idx != (v1 & 4294967295));
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * ((((v1 & 4294967295) >> 31 & 4294967295) + v1 & 4294967295) >> 1 & 4294967295)));
}


// Function: heap_calloc at 0x4016dd
unsigned int heap_calloc(unsigned int a0)
{
 unsigned int *ptr; // rax
 unsigned int v2; // ebx
 unsigned int *cur; // rdx

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 v2 = 0;
 cur = ptr;
 do
 {
 v2 += *(cur);
 cur += 1;
 } while (cur != &ptr[a0]);
 }
 else
 {
 v2 = 0;
 }
 free(ptr);
 return v2;
}


// Function: heap_realloc at 0x40172d
unsigned int heap_realloc()
{
 unsigned int *ptr; // rax
 unsigned int *p; // rax
 unsigned int v3; // ebx

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[1] = 3;
 ptr[1 + 1] = 4;
 ptr[2] = 5;
 p = realloc(ptr, 40);
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p[5] = 50;
 p[6] = 60;
 p[7] = 70;
 p[8] = 80;
 p[9] = 90;
 v3 = 4294967293;
 if (p[2] == 3)
 v3 = 50;
 free(p);
 return v3;
}


// Function: heap_array at 0x4017d3
unsigned int heap_array(unsigned int a0)
{
 unsigned int *ptr; // rax
 unsigned int i; // edx

 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 i = 0;
 do
 {
 *(ptr + i) = i;
 i += 3;
 } while (i != a0 * 3);
 }
 free(ptr);
 return ptr[((a0 >> 31) + a0 & 4294967295) >> 1 & 4294967295];
}


// Function: heap_struct at 0x401829
unsigned int heap_struct(unsigned int a0)
{
 void* ptr; // rax

 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: heap_nested at 0x401855
typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_2 *field_8;
} struct_3;

typedef struct struct_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_0 *field_8;
} struct_1;

typedef struct struct_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_4;

typedef struct struct_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_2;

unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr3; // rax
 struct_3 *ptr; // rbx
 struct_4 *p; // rax

 ptr3 = malloc(16);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 ptr = ptr3;
 ptr3->field_0 = 10;
 p = malloc(16);
 ptr->field_8 = p;
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 p->field_0 = 20;
 p->field_8 = 0;
 return 0;
}


// Function: linked_list_heap at 0x4018c1

unsigned int linked_list_heap()
{
 unsigned int i; // ebp
 struct_0 *v2; // rax
 struct_0 *v10; // rbx
 struct_0 *ptr3; // rbx
 struct_0 *v12; // rbx
 struct_0 *ptr4; // rax
 struct_0 *p; // rax
 struct_0 *addr; // rbx
 struct_0 *v6; // rbx
 unsigned int v7; // ebp
 struct_0 *ptr; // rax

 i = 0;
 v2 = NULL;
 v10 = NULL;
 do
 {
 ptr4 = v2;
 p = malloc(16);
 if (!p)
 {
 if (v10)
 {
 do
 {
 addr = v10;
 v6 = (struct_0 *)addr->field_8;
 free(addr);
 v10 = v6;
 } while (v6);
 return 4294967295;
 }
 else
 {
 return 4294967295;
 }
 }
 p->field_0 = i;
 p->field_8 = NULL;
 if (!v10)
 v10 = p;
 else
 ptr4->field_8 = p;
 i += 10;
 v2 = p;
 } while (i != 50);
 if (!v10)
 return 0;
 v7 = 0;
 ptr = v10;
 do
 {
 v7 += ptr->field_0;
 ptr = (struct_0 *)ptr->field_8;
 } while (ptr != NULL);
 do
 {
 ptr3 = v10;
 v12 = (struct_0 *)ptr3->field_8;
 free(ptr3);
 v10 = v12;
 } while (v12 != NULL);
 return v7;
}


// Function: create_tree_node at 0x401968
typedef struct struct_5 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_5;

struct_5 * create_tree_node(unsigned int a0)
{
 struct_5 *ptr; // rax

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 ptr->field_10 = 0;
 return ptr;
}


// Function: tree_heap_traversal at 0x401992
typedef struct struct_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
 struct struct_2 *field_10;
} struct_6;

unsigned int tree_heap_traversal()
{
 struct_5 *v1; // rax
 struct_5 *ptr; // rbx
 struct_5 *v3; // rax
 struct_5 *p; // rdi

 v1 = create_tree_node(10);
 if (!v1)
 return 4294967295;
 ptr = v1;
 ptr->field_8 = (unsigned long long)create_tree_node(20);
 v3 = create_tree_node(30);
 ptr->field_10 = (unsigned long long)v3;
 p = (struct_5 *)ptr->field_8;
 if (v3 && p)
 {
 free(p);
 free((void *)ptr->field_10);
 free(ptr);
 return p->field_0 + ptr->field_0 + v3->field_0;
 }
 if (p)
 free(p);
 if (ptr->field_10)
 free((void *)ptr->field_10);
 free(ptr);
 return 4294967294;
}


// Function: memory_leak at 0x401a2b
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v1; // rbx
 unsigned long long ptr; // rax
 unsigned long long idx; // rdx

 v1 = a0;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 if ((unsigned int)v1 <= 0)
 return *((int *)(ptr + ((((v1 & 4294967295) >> 31 & 4294967295) + v1 & 4294967295) >> 1 & 4294967295) * 4));
 idx = 0;
 do
 {
 *((unsigned int *)(ptr + idx * 4)) = idx;
 idx += 1;
 } while (idx != (v1 & 4294967295));
 return *((int *)(ptr + ((((v1 & 4294967295) >> 31 & 4294967295) + v1 & 4294967295) >> 1 & 4294967295) * 4));
}


// Function: dangling_pointer at 0x401a72
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x401ab7
unsigned long long double_free(unsigned int *a0)
{
 unsigned long long v2; // rbx
 void* ptr; // rax
 unsigned long long v0; // [bp-0x8]

 if (a0)
 return *(a0);
 v0 = v2;
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: heap_overflow at 0x401af4
unsigned int heap_overflow()
{
 unsigned int *ptr; // rax
 unsigned int i; // edx

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 i = 0;
 do
 {
 *(ptr) = i;
 i += 100;
 ptr += 1;
 } while (i != 1100);
 free(ptr);
 return *(ptr);
}


// Function: test_heap_memory at 0x401b36
typedef struct struct_7 {
 char padding_0[8];
 void* field_8;
} struct_7;

extern char g_4030e6[];
extern char g_4031b6[];
extern char g_4031c6[];
extern char g_4033c8[];
extern char g_4033f0[];

long long test_heap_memory()
{
 unsigned long v14; // fs
 unsigned int flag1; // eax
 unsigned int v0[1]; // [bp-0x1c]
 struct_0 *result; // [bp-0x18]
 unsigned long v2; // [bp-0x10]

 puts(&g_4030e6);
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", heap_basic(10) & 4294967295);
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5) & 4294967295);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", heap_array(10) & 4294967295);
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", heap_struct(5) & 4294967295);
 result = NULL;
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", heap_nested(&result) & 4294967295);
 if (result)
 {
 free(result->field_8);
 free(result);
 }
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap() & 4294967295);
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", memory_leak(5) & 4294967295);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 flag1 = fork();
 if (!flag1)
 {
 __printf_chk(1, &g_4031b6, dangling_pointer() & 4294967295);
 exit(0); /* do not return */
 }
 if (flag1 > 0)
 {
 waitpid(flag1, &v0, 0);
 if (!((char)*(v0) & 127))
 {
 __printf_chk(1, &g_4033c8, *(v0) >> 8);
 }
 else if (((char)*(v0) & 127) + 1 > 1)
 {
 __printf_chk(1, &g_4033f0, *(v0) & 127);
 }
 }
 else
 {
 perror(&g_4031c6);
 }
 return v2 - *((long long *)(40 + v14));
}


// Function: global_var_access at 0x401d80
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401d94
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: global_array_access at 0x401da1
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 > 9)
 return 4294967295;
 return global_array[a0];
}


// Function: static_local at 0x401dbe
extern unsigned int counter_1;

unsigned long long static_local(unsigned int a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 if (!a0)
 v1 = counter_1 + 1;
 counter_1 = v1;
 return v1;
}


// Function: call_static_func at 0x401ddb
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: access_extern_global at 0x401de4
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401df2
unsigned int call_extern_func()
{
 return extern_function(5);
}


// Function: read_const_data at 0x401e09
typedef struct struct_8 {
 char padding_0[4];
 char field_4;
} struct_8;

extern struct_8 *const_string;
struct_8 *const_string = NULL;

int read_const_data()
{
 return const_string->field_4 + 42;
}


// Function: access_bss_var at 0x401e1c
unsigned long long access_bss_var()
{
 return 0;
}


// Function: access_bss_buffer at 0x401e26
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: global_struct_access at 0x401e30
unsigned long long global_struct_access()
{
 return 30;
}


// Function: set_file_static at 0x401e3a
extern unsigned int file_scope_static;

void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}


// Function: get_file_static at 0x401e45
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: set_global_callback at 0x401e50
extern unsigned long long global_func_ptr;

void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}


// Function: call_global_callback at 0x401e5c
typedef struct struct_9 {
 unsigned long long field_0;
} struct_9;

extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
 return 4294967295;
 return ((unsigned long long (*)(void))global_func_ptr)();
}


// Function: global_heap_store at 0x401e7d
unsigned long long global_heap_store(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: static_complex_init at 0x401e8f
unsigned long long static_complex_init()
{
 return 15;
}


// Function: tls_access at 0x401e99
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: init_order_test at 0x401ea1
extern unsigned int static_depends_0;
unsigned int static_depends_0 = 0;

unsigned long long init_order_test()
{
 static_depends_0 = 20;
 return 20;
}


// Function: test_static_global at 0x401eb5
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_403438[];
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;

int test_static_global()
{
 unsigned long v2; // rdx

 puts(&g_403438);
 __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", global_var_access() & 4294967295);
 __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
 counter_1 = 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
 v2 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 __printf_chk(1, "STM-L1-03 (static_local): %d\n", v2);
 __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
 __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", (unsigned long long)call_extern_func() & 4294967295);
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", read_const_data() & 4294967295);
 __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", global_struct_access() & 4294967295);
 file_scope_static = 50;
 __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", call_global_callback() & 4294967295);
 __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", static_complex_init() & 4294967295);
 __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
 return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", init_order_test() & 4294967295);
}


// Function: memop_memset at 0x402112
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 return 4294967295;
 v0 = v2;
 if (!n)
 return 4294967295;
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x402143
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n)
{
 if (a1 && n && a0)
 {
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
 }
 return 4294967295;
}


// Function: memop_memmove at 0x402186
typedef struct struct_10 {
 char padding_0[1];
 char field_1;
} struct_10;

unsigned long long memop_memmove(struct_10 *a0, unsigned long a1)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 return 4294967295;
 v0 = v2;
 if (a1 <= 1)
 return 4294967295;
 memmove(&a0->field_1, a0, a1 - 1);
 return a0->field_1;
}


// Function: memop_memcmp at 0x4021bc
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v1; // eax

 if (!(a1 && a2))
 {
 return 0;
 }
 else if (a0)
 {
 v1 = memcmp(a0, a1, a2);
 return (v1 <= 0 ? v1 >> 31 : 1);
 }
 else
 {
 return 0;
 }
}


// Function: memop_bzero at 0x4021f4
unsigned long long memop_bzero(char *a0, unsigned long n)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 return 4294967295;
 v0 = v2;
 memset(a0, 0, n);
 return *(a0);
}


// Function: memop_bcopy at 0x402219
unsigned long long memop_bcopy(void* a0, char *a1, unsigned long n)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a1 || !n)
 return 4294967295;
 v0 = v2;
 if (!a0)
 return 4294967295;
 memmove(a1, a0, n);
 return *(a1);
}


// Function: memop_unaligned_access at 0x402253
typedef struct struct_11 {
 char padding_0[1];
 unsigned int field_1;
} struct_11;

unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_4)[1]);
}


// Function: memop_memory_barrier at 0x402266
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 char v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 v0 = *((char *)&v0);
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x402282
char g_403688[32] = "Memory Op Functions Test";

long long test_memory_op_functions()
{
 unsigned long v27; // fs
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
 unsigned int v13; // [bp-0x135]
 char flag2[4]; // [bp-0x131]
 char v15[10]; // [bp-0x12d]
 char v16; // [bp-0x123]
 char v17[264]; // [bp-0x118]
 unsigned long v18; // [bp-0x10]

 puts(&g_403688);
 v7 = 10;
 v8 = 20;
 v9 = 30;
 v10 = 40;
 v11 = 50;
 memset(&v12, 0, 20);
 __printf_chk(1, "MEMOP-L2-01: %d\n", memop_memset(&v17, 10, 65) & 4294967295);
 __printf_chk(1, "MEMOP-L2-02: %d\n", memop_memcpy(&v12, &v7, 20) & 4294967295);
 strncpy(&v16, "HelloWorld", 10);
 __printf_chk(1, "MEMOP-L2-03: %c\n", memop_memmove(&v16, 10) & 4294967295);
 result = 1;
 v2 = 2;
 v3 = 3;
 flag1 = 1;
 v5 = 2;
 v6 = 4;
 __printf_chk(1, "MEMOP-L2-04: %d\n", memop_memcmp(&result, &flag1, 12) & 4294967295);
 __printf_chk(1, "MEMOP-L2-05: %d\n", memop_bzero(&v15, 10) & 4294967295);
 v13 = 67305985;
 flag2[0] = 0;
 __printf_chk(1, "MEMOP-L2-06: %d\n", memop_bcopy(&v13, &flag2, 4) & 4294967295);
 __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v0[0] = 5;
 __printf_chk(1, "MEMOP-L3-02: %d\n", memop_memory_barrier((unsigned int *)v0) & 4294967295);
 return v18 - *((long long *)(40 + v27));
}


// Function: main at 0x4024af
unsigned int main()
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: extern_function at 0x4024e9
static unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


