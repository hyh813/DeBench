// Angr Decompilation of 3_gcc_O3_g
// Platform: AMD64

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_0;

struct_0 *g_405fe8 = NULL;

// Global variable definitions
unsigned int counter_1 = 0;
char g_4033c8[] = "Exited with code %d\n";
unsigned long long global_func_ptr = 0;
char g_403198[] = "value after free: %d\n";
char g_403004[] = "=== Stack Memory Tests ===";
char g_403438[] = "=== Static/Global Memory Tests ===";
unsigned int global_array[4] = {1, 2, 3, 4};

// Additional global variable definitions
char g_4030e6[] = "=== Heap Memory Tests ===";
char g_4033f0[] = "Signal %d\n";
unsigned int file_scope_static = 0;
struct_0 *const_string = NULL;
unsigned int global_counter = 0;
char g_403688[] = "=== Memory Operation Tests ===";
char g_4031a8[] = "Error";

// SIMD intrinsic stubs
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
static inline unsigned long long ShlNV(unsigned long long a, int b) { return a << b; }
static inline unsigned long long InterleaveHIV(unsigned long long a, unsigned long long b) { return a; }
static inline unsigned long long InterleaveLOV(unsigned long long a, unsigned long long b) { return b; }
static inline unsigned long long QNarrowBinV(unsigned long long a, unsigned long long b) { return a & b; }

// Atomic operation stub
static inline unsigned long long atomic_exchange(void* ptr, unsigned long long val) { return val; }

// External function declarations
void __cxa_finalize(void);
void _start(void);

// Stub definitions for CRT functions
static void _start_stub(void) { }
void __cxa_finalize(void) { }

// Forward declarations
typedef struct struct_1 struct_1;
void sub_401020(void);
void sub_40102d(void);
void sub_401030(void);
void sub_40103f(void);
void sub_401040(void);
void sub_40104f(void);
void sub_401050(void);
void sub_40105f(void);
void sub_401060(void);
void sub_40106f(void);
void sub_401070(void);
void sub_40107f(void);
void sub_401080(void);
void sub_40108f(void);
void sub_401090(void);
void sub_40109f(void);
void sub_4010a0(void);
void sub_4010af(void);
void sub_4010b0(void);
void sub_4010bf(void);
void sub_4010c0(void);
void sub_4010cf(void);
void sub_4010d0(void);
void sub_4010df(void);
void sub_4010e0(void);
void sub_4010ef(void);
void sub_4010f0(void);
void sub_4010ff(void);
void sub_401100(void);
void sub_40110f(void);
void sub_401110(void);
void sub_40111f(void);
void sub_40124b(unsigned long a0, unsigned long a1, unsigned long a2);
void sub_401275(void);
void sub_401325(void);
void sub_401339(unsigned long a0);
unsigned int double_value(unsigned int a0);
unsigned long long alloca_usage_constprop_0(void);
int local_vars(unsigned int a0);
int local_array(unsigned int a0);
unsigned int local_struct(unsigned int a0);
unsigned long long address_of_local(unsigned int *ptr);
unsigned int address_of_array(unsigned int *a0);
long long large_stack_frame(void);
unsigned long long vla_stack(unsigned int a0);
unsigned long long alloca_usage(unsigned int a0);
unsigned long long stack_alias(void);
unsigned int heap_basic(unsigned int a0);
unsigned int heap_calloc(unsigned int a0);
unsigned int heap_realloc(void);
unsigned int heap_array(unsigned int a0);
unsigned int heap_struct(unsigned int a0);
unsigned long long heap_nested(struct_1 **addr);
unsigned int linked_list_heap(void);
struct_0 *create_tree_node(unsigned int a0);
unsigned long long tree_heap_traversal(void);
unsigned long long memory_leak(unsigned int a0);
unsigned long long dangling_pointer(void);
unsigned long long double_free(unsigned int *a0);
unsigned long long heap_overflow(void);
unsigned long long test_heap_memory(void);
int test_stack_memory(void);
unsigned int global_var_access(void);
unsigned int global_var_read(void);
unsigned long long global_array_access(unsigned int a0);
unsigned long long static_local(unsigned int a0);
int call_static_func(unsigned int a0);
int access_extern_global(void);
void call_extern_func(void);
int read_const_data(void);
unsigned long long access_bss_var(void);
unsigned long long access_bss_buffer(void);
unsigned long long global_struct_access(void);
void set_file_static(unsigned int a0);
int get_file_static(void);
void set_global_callback(unsigned long a0);
unsigned long long call_global_callback(void);
unsigned long long global_heap_store(unsigned int *a0);
unsigned long long static_complex_init(void);
unsigned int tls_access(unsigned int a0);
unsigned long long init_order_test(void);
unsigned long long memop_memset(void* a0, unsigned long a1, unsigned int a2);
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long a2);
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1);
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2);
unsigned long long memop_bzero(void* a0, unsigned long a1);
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2);
unsigned long long memop_unaligned_access(struct_0 *a0);
unsigned long long memop_memory_barrier(unsigned int *a0);
unsigned int test_memory_op_functions(void);
unsigned int extern_function(unsigned int a0);
int test_static_global(void);

typedef struct struct_1 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_1;

typedef struct struct_2 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
 unsigned int field_20;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_3;

typedef struct struct_4 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_4;

typedef struct struct_5 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_5;

typedef struct struct_6 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_6;

typedef struct struct_7 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned int field_10;
} struct_7;




// Function: sub_401020 at 0x401020
unsigned long long g_405f50 = 0;
unsigned long long g_405f58 = 0;

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


// Function: main at 0x401220
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}


// Function: sub_40124b at 0x40124b
void sub_40124b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start_stub(); /* do not return */
}







// Function: sub_401275 at 0x401275
void sub_401275()
{
}














// Function: sub_401325 at 0x401325
void sub_401325()
{
}






// Function: sub_401339 at 0x401339
void sub_401339(unsigned long a0);


// Function: double_value at 0x401340
unsigned int double_value(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401348 at 0x401348
void sub_401348(void);


// Function: alloca_usage_constprop_0 at 0x401350
unsigned long long alloca_usage_constprop_0()
{
 return 15;
}


// Function: sub_401356 at 0x401356
void sub_401356(unsigned long a0);


// Function: local_vars at 0x401360
int local_vars(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401369 at 0x401369
void sub_401369(unsigned long a0);


// Function: local_array at 0x401370
int local_array(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401398 at 0x401398
void sub_401398(unsigned long a0);


// Function: local_struct at 0x4013a0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_4013a8 at 0x4013a8
void sub_4013a8(unsigned long a0)
{
 unsigned int local_val = 0;
 address_of_local(&local_val);
 return;
}


// Function: address_of_local at 0x4013b0
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x4013c0
unsigned int address_of_array(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: sub_4013c9 at 0x4013c9
void sub_4013c9(void);


// Function: large_stack_frame at 0x4013d0
long long large_stack_frame()
{
 unsigned long long v3; // xmm3
 void* cur; // rax
 unsigned long long v5; // xmm3
 char v0; // [bp-0x818]
 char v1; // [bp-0x418]
 unsigned long v6; // [bp-0x18]

 v3 = 0x3000000020000000100000000;
 cur = &v0;
 do
 {
 cur += 16;
 v5 = AddV(v3, 1267650600523377306744775507984);
 *((unsigned long long *)&cur[16]) = QNarrowBinV(InterleaveLOV(InterleaveHIV(InterleaveHIV(AddV(v3, 950737950392532980058581630988), AddV(v3, 633825300261688653372387753992)), InterleaveLOV(AddV(v3, 950737950392532980058581630988), AddV(v3, 633825300261688653372387753992))), InterleaveLOV(InterleaveHIV(AddV(v3, 950737950392532980058581630988), AddV(v3, 633825300261688653372387753992)), InterleaveLOV(AddV(v3, 950737950392532980058581630988), AddV(v3, 633825300261688653372387753992)))) & 1324055902416102970674609367438786815, InterleaveLOV(InterleaveHIV(InterleaveHIV(AddV(v3, 316912650130844326686193876996), v3), InterleaveLOV(AddV(v3, 316912650130844326686193876996), v3)), InterleaveLOV(InterleaveHIV(AddV(v3, 316912650130844326686193876996), v3), InterleaveLOV(AddV(v3, 316912650130844326686193876996), v3))) & 1324055902416102970674609367438786815);
 v3 = v5;
 } while (&v6 != cur);
 return v1;
}


// Function: sub_4014cb at 0x4014cb
void sub_4014cb(unsigned long a0);


// Function: vla_stack at 0x4014d0
unsigned long long vla_stack(unsigned int a0)
{
 unsigned int v3; // edi
 unsigned long v4; // rax
 unsigned int v13; // eax
 unsigned int v14; // ecx
 unsigned int *ptr; // rdi
 char *i; // rsi
 unsigned long long v6; // rcx
 unsigned long v7; // rsi
 char v8[16]; // rsi
 unsigned long long v9; // xmm1
 char *j; // rax
 char *p; // rax
 unsigned long v16; // [bp-0x2018]
 char v0; // [bp-0x1018]
 char v1; // [bp-0x18]

 v3 = a0 - 1;
 if (v3 > 999)
 return 4294967295;
 v4 = a0 * 4 + 15;
 i = &(&v1)[-1 * (v4 & 0xfffffffffffff000)];
 if (&v1 != i)
 {
 do
 {
 } while (&v16 != i);
 }
 v6 = (unsigned int)v4 & 0xfffffff0 & 4095;
 if (v6)
 *((long long *)(v7 + v6 - 8)) = *((long long *)(v7 + v6 - 8));
 v7 = &(&v0)[-1 * v6];
 if (v3 > 2)
 {
 v9 = 0x3000000020000000100000000;
 j = v8;
 do
 {
 p = j + 1;
 *((unsigned long long *)&p[1]) = ShlNV(v9, 1);
 j = p;
 v9 = AddV(v9, 316912650130844326686193876996);
 } while (j != &v8[a0 >> 2]);
 v13 = a0 & 0xfffffffc;
 if (!((char)a0 & 3))
 return *((int *)&v8[4 * (a0 >> 1)]);
 }
 else
 {
 v13 = 0;
 }
 v14 = v13 * 2;
 ptr = (unsigned int *)&v8[4 * v13];
 ptr[0] = v14;
 if (a0 <= v13 + 1)
 return *((int *)&v8[4 * (a0 >> 1)]);
 ptr[1] = v14 + 2;
 if (a0 > v13 + 2)
 ptr[2] = v14 + 4;
 return *((int *)&v8[4 * (a0 >> 1)]);
}


// Function: sub_4015df at 0x4015df
void sub_4015df(void);


// Function: sub_4015fb at 0x4015fb
void sub_4015fb(unsigned long a0);


// Function: alloca_usage at 0x401600
unsigned long long alloca_usage(unsigned int a0)
{
 unsigned long v3; // rax
 char *i; // rsi
 unsigned int v13; // ecx
 unsigned long long v14; // r8
 unsigned long long v5; // rcx
 unsigned long long ptr; // rsi
 unsigned long long v7; // xmm1
 unsigned long long *addr; // rax
 unsigned long long *p; // rax
 unsigned int v11; // eax
 unsigned long idx; // rdi
 unsigned long v15; // [bp-0x2018]
 char v0; // [bp-0x1018]
 char v1; // [bp-0x18]

 if (a0 <= 0)
 return 4294967295;
 v3 = a0 * 4 + 23;
 i = &(&v1)[-1 * (v3 & 0xfffffffffffff000)];
 if (&v1 != i)
 {
 do
 {
 } while (&v15 != i);
 }
 v5 = (unsigned int)v3 & 0xfffffff0 & 4095;
 void* vvar_97 = &(&v0)[-1 * v5];
 if (v5)
 *((long long *)((char*)vvar_97 + v5 - 8)) = *((long long *)((char*)vvar_97 + v5 - 8));
 ptr = (unsigned long long)((char*)vvar_97 + 15) & 0xfffffffffffffff0;
 if (a0 - 1 > 2)
 {
 v7 = 0x3000000020000000100000000;
 addr = ptr;
 do
 {
 p = addr + 1;
 p[1] = AddV(ShlNV(v7, 1), v7);
 addr = p;
 v7 = AddV(v7, 316912650130844326686193876996);
 } while (addr != (a0 >> 2) * 16 + ptr);
 v11 = a0 & 0xfffffffc;
 if (!((char)a0 & 3))
 return *((int *)(ptr + (a0 >> 1) * 4));
 }
 else
 {
 v11 = 0;
 }
 idx = v11;
 v13 = v11 * 3;
 *((unsigned int *)(ptr + idx * 4)) = v13;
 v14 = idx * 4;
 if (a0 <= v11 + 1)
 return *((int *)(ptr + (a0 >> 1) * 4));
 *((unsigned int *)(ptr + v14 + 4)) = v13 + 3;
 if (a0 > v11 + 2)
 *((unsigned int *)(ptr + v14 + 8)) = v13 + 6;
 return *((int *)(ptr + (a0 >> 1) * 4));
}


// Function: sub_40171c at 0x40171c
void sub_40171c(void);


// Function: sub_40173b at 0x40173b
void sub_40173b(void);


// Function: stack_alias at 0x401740
unsigned long long stack_alias()
{
 return 20;
}


// Function: sub_40174a at 0x40174a
void sub_40174a(void);


// Function: test_stack_memory at 0x401750
extern char g_403004[];

int test_stack_memory()
{
 unsigned int v2; // edi
 char *v3; // rsi

 puts(&g_403004);
 printf(1, "MEM-L1-01 (local_vars): %d\n", 20);
 printf(1, "MEM-L1-02 (local_array): %d\n", 10);
 printf(1, "MEM-L1-03 (local_struct): %d\n", 15);
 printf(1, "MEM-L1-04 (address_of_local): %d\n", 42);
 printf(1, "MEM-L1-05 (address_of_array): %d\n", 2);
 printf(1, "MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame() & 4294967295);
 printf(1, "MEM-L2-02 (vla_stack): %d\n", 10);
 alloca_usage_constprop_0();
 printf(v2, v3);
 return printf(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: sub_401846 at 0x401846
void sub_401846(unsigned long a0);


// Function: heap_basic at 0x401850
unsigned int heap_basic(unsigned int a0)
{
 unsigned long v1; // rdi
 unsigned int v2; // ebx
 unsigned int v11; // edx
 unsigned long long v12; // rsi
 unsigned long long *ptr; // rax
 unsigned long long v5; // xmm1
 unsigned long long *addr; // rax
 unsigned long long *p; // rax
 unsigned int v9; // eax
 unsigned long idx; // rcx

 v1 = a0;
 v2 = v1;
 ptr = malloc(v1 * 4);
 if (!ptr)
 return 4294967295;
 if (v2 > 0)
 {
 if (v2 - 1 > 2)
 {
 v5 = 0x3000000020000000100000000;
 addr = ptr;
 do
 {
 p = addr + 1;
 p[1] = ShlNV(v5, 1);
 addr = p;
 v5 = AddV(v5, 316912650130844326686193876996);
 } while (addr != &ptr[v2 >> 2]);
 v9 = v2 & 0xfffffffc;
 if (!((char)v2 & 3))
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
 }
 }
 else
 {
 v9 = 0;
 }
 idx = v9;
 v11 = v9 * 2;
 *((unsigned int *)((char *)ptr + 4 * idx)) = v11;
 v12 = idx * 4;
 if (v9 + 1 < v2)
 {
 *((unsigned int *)(4 + (char *)ptr + v12)) = v11 + 2;
 if (v2 > v9 + 2)
 *((unsigned int *)(8 + (char *)ptr + v12)) = v11 + 4;
 }
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
}


// Function: sub_401922 at 0x401922
void sub_401922(unsigned long a0);


// Function: heap_calloc at 0x401930
unsigned int heap_calloc(unsigned int a0)
{
 unsigned long long *ptr; // rax
 unsigned long long v3; // xmm0
 unsigned long long *p; // rdx
 unsigned int v6; // eax
 int v7; // xmm0
 unsigned int cur; // r12d
 unsigned long idx; // rdx
 unsigned long long v10; // rcx

 ptr = calloc(a0, 4);
 if (!ptr)
 return 4294967295;
 if (a0 > 0)
 {
 if (a0 - 1 > 2)
 {
 v3 = 0;
 p = ptr;
 do
 {
 v3 = AddV(v3, *(p));
 p += 1;
 } while (p != &ptr[a0 >> 2]);
 v6 = a0 & 0xfffffffc;
 v7 = v3;
 cur = (unsigned int)(v7);
 if (!((char)a0 & 3))
 {
 free(ptr);
 return (unsigned int)(v7);
 }
 }
 else
 {
 v6 = 0;
 cur = 0;
 }
 idx = v6;
 v10 = idx * 4;
 cur += *((int *)((char *)ptr + 4 * idx));
 if (a0 > v6 + 1)
 {
 cur += *((int *)(4 + (char *)ptr + v10));
 if (a0 > v6 + 2)
 cur += *((int *)(8 + (char *)ptr + v10));
 }
 }
 else
 {
 cur = 0;
 }
 free(ptr);
 return cur;
}


// Function: sub_4019f1 at 0x4019f1
void sub_4019f1(void);


// Function: sub_401a0a at 0x401a0a
void sub_401a0a(void);


// Function: heap_realloc at 0x401a10
unsigned int heap_realloc()
{
 struct_0 *ptr; // rax
 struct_1 *p; // rax
 unsigned long v3; // 4129

 ptr = malloc(20);
 if (!ptr)
 return 4294967295;
 ptr->field_10 = 5;
 ptr->field_0 = 316912650112397582603894390785;
 p = realloc(ptr, 40);
 if (!p)
 {
 free(ptr);
 return 4294967294;
 }
 v3 = p->field_8;
 p->field_8 = 6338253002432419092900882677810;
 free(p);
 return ((unsigned int)v3 != 3 ? 4294967293 : 50);
}


// Function: sub_401a99 at 0x401a99
void sub_401a99(unsigned long a0);


// Function: heap_array at 0x401aa0
unsigned int heap_array(unsigned int a0)
{
 unsigned long v1; // rdi
 unsigned int v2; // ebx
 unsigned int v11; // edx
 unsigned long long v12; // rsi
 unsigned long long *ptr; // rax
 unsigned long long v5; // xmm1
 unsigned long long *addr; // rax
 unsigned long long *p; // rax
 unsigned int v9; // eax
 unsigned long idx; // rcx

 v1 = a0;
 v2 = v1;
 ptr = malloc(v1 * 4);
 if (!ptr)
 return 4294967295;
 if (v2 > 0)
 {
 if (v2 - 1 > 2)
 {
 v5 = 0x3000000020000000100000000;
 addr = ptr;
 do
 {
 p = addr + 1;
 p[1] = AddV(ShlNV(v5, 1), v5);
 addr = p;
 v5 = AddV(v5, 316912650130844326686193876996);
 } while (addr != &ptr[v2 >> 2]);
 v9 = v2 & 0xfffffffc;
 if (!((char)v2 & 3))
 {
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
 }
 }
 else
 {
 v9 = 0;
 }
 idx = v9;
 v11 = v9 * 3;
 *((unsigned int *)((char *)ptr + 4 * idx)) = v11;
 v12 = idx * 4;
 if (v2 > v9 + 1)
 {
 *((unsigned int *)(4 + (char *)ptr + v12)) = v11 + 3;
 if (v2 > v9 + 2)
 *((unsigned int *)(8 + (char *)ptr + v12)) = v11 + 6;
 }
 }
 free(ptr);
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
}


// Function: sub_401b82 at 0x401b82
void sub_401b82(unsigned long a0);


// Function: heap_struct at 0x401b90
unsigned int heap_struct(unsigned int a0)
{
 void* ptr; // rax

 ptr = malloc(8);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return a0 * 3;
}


// Function: sub_401bc9 at 0x401bc9
void sub_401bc9(unsigned long a0);


// Function: heap_nested at 0x401bd0
unsigned long long heap_nested(struct_1 **addr)
{
 struct_3 *ptr3; // rax
 struct_3 *ptr; // rbp
 struct_4 *p; // rax

 ptr3 = malloc(16);
 *(addr) = ptr3;
 if (!ptr3)
 return 4294967295;
 ptr3->field_0 = 10;
 ptr = ptr3;
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


// Function: sub_401c36 at 0x401c36
void sub_401c36(void);


// Function: linked_list_heap at 0x401c40
unsigned int linked_list_heap()
{
 struct_0 *v1; // r12
 unsigned int cur; // ebp
 struct_0 *addr; // rbx
 struct_0 *v11; // rbx
 struct_0 *v12; // rbx
 struct_0 *ptr3; // rbx
 struct_0 *v14; // rbx
 struct_0 *ptr; // rax
 struct_0 *p; // rax
 struct_0 *ptr4; // r12
 unsigned int v7; // r12d

 v1 = NULL;
 cur = 0;
 v12 = NULL;
 ptr = malloc(16);
 if (ptr)
 {
 do
 {
 p = ptr;
 ptr4 = v1;
 p->field_0 = cur;
 p->field_8 = NULL;
 if (v12)
 {
 cur += 10;
 ptr4->field_8 = p;
 if (cur != 50)
 continue;
 goto LABEL_401cbb;
 }
 else
 {
 v12 = p;
 if (cur + 10 == 50)
 {
LABEL_401cbb:
 v7 = 0;
 ptr = v12;
 do
 {
 v7 += ptr->field_0;
 ptr = ptr->field_8;
 } while (ptr->field_8);
 do
 {
 addr = v12;
 v11 = addr->field_8;
 free(addr);
 v12 = v11;
 } while (addr->field_8);
 return v7;
 }
 }
 } while ((ptr = malloc(16), v1 = p, ptr = malloc(16), ptr));
 }
 if (v12)
 {
 do
 {
 ptr3 = v12;
 v14 = ptr3->field_8;
 free(ptr3);
 v12 = v14;
 } while (ptr3->field_8);
 }
 return 4294967295;
}


// Function: sub_401ceb at 0x401ceb
void sub_401ceb(unsigned long a0);


// Function: create_tree_node at 0x401cf0
struct_0 * create_tree_node(unsigned int a0)
{
 struct_0 *ptr; // rax

 ptr = malloc(24);
 if (!ptr)
 return ptr;
 ptr->field_0 = a0;
 ptr->field_8 = 0;
 return ptr;
}


// Function: sub_401d12 at 0x401d12
void sub_401d12(void);


// Function: tree_heap_traversal at 0x401d20
unsigned long long tree_heap_traversal()
{
 void* ptr1; // rax
 void* p; // rbp
 void* ptr2; // r12
 void* ptr3; // r13
 void* ptr4; // rax

 ptr1 = malloc(24);
 if (!ptr1)
 return 4294967295;
 p = ptr1;
 ptr2 = malloc(24);
 if (ptr2)
 {
 ptr3 = malloc(24);
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
 ptr4 = malloc(24);
 if (ptr4)
 free(ptr4);
 }
 free(p);
 return 4294967294;
}


// Function: sub_401db2 at 0x401db2
void sub_401db2(unsigned long a0);


// Function: memory_leak at 0x401dc0
unsigned long long memory_leak(unsigned int a0)
{
 unsigned long v1; // rdi
 unsigned int v2; // ebx
 unsigned long long v11; // rsi
 unsigned int v12; // edx
 unsigned int v13; // eax
 unsigned long long *ptr; // rax
 unsigned long long v5; // xmm0
 unsigned long long *addr; // rax
 unsigned long long *p; // rax
 unsigned int v9; // eax
 unsigned long idx; // rdx

 v1 = a0;
 v2 = v1;
 ptr = malloc(v1 * 4);
 if (!ptr)
 return 4294967295;
 if (v2 <= 0)
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
 if (v2 - 1 > 2)
 {
 v5 = 0x3000000020000000100000000;
 addr = ptr;
 do
 {
 p = addr + 1;
 p[1] = v5;
 addr = p;
 v5 = AddV(v5, 316912650130844326686193876996);
 } while (addr != &ptr[v2 >> 2]);
 v9 = v2 & 0xfffffffc;
 if (!((char)v2 & 3))
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
 }
 else
 {
 v9 = 0;
 }
 idx = v9;
 *((unsigned int *)((char *)ptr + 4 * idx)) = v9;
 v11 = idx * 4;
 v12 = v9 + 1;
 if (v2 > v12)
 {
 v13 = v9 + 2;
 *((unsigned int *)(4 + (char *)ptr + v11)) = v12;
 if (v2 > v13)
 *((unsigned int *)(8 + (char *)ptr + v11)) = v13;
 }
 return *((int *)((char *)ptr + 4 * (((v2 >> 31) + v2 & 4294967295) >> 1 & 4294967295)));
}


// Function: sub_401e6c at 0x401e6c
void sub_401e6c(void);


// Function: dangling_pointer at 0x401e70
unsigned long long dangling_pointer()
{
 unsigned int *ptr; // rax

 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 printf(1, "value before free: %d\n", 42);
 free(ptr);
 return *(ptr);
}


// Function: double_free at 0x401eb0
unsigned long long double_free(unsigned int *a0)
{
 void* ptr; // rax

 if (a0)
 return *(a0);
 ptr = malloc(4);
 if (!ptr)
 return 4294967295;
 free(ptr);
 free(ptr);
 return 4294967294;
}


// Function: sub_401ebc at 0x401ebc
void sub_401ebc(void);


// Function: sub_401eef at 0x401eef
void sub_401eef(void);


// Function: heap_overflow at 0x401ef0
unsigned long long heap_overflow()
{
 void* ptr; // rax

 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return 0;
}


// Function: sub_401f1b at 0x401f1b
void sub_401f1b(void);


// Function: test_heap_memory at 0x401f20
extern char g_4030e6[];
extern char g_403198[];
extern char g_4031a8[];
extern char g_4033c8[];
extern char g_4033f0[];

unsigned long long test_heap_memory()
{
 struct_0 *ptr3; // rax
 int v4; // ymm0
 void* ptr; // rax
 unsigned long long v14; // rdx
 struct_4 *ptr4; // r12
 struct_5 *ptr5; // rax
 unsigned long long v17; // rdx
 unsigned int cur; // ebx
 struct_6 *ptr11; // r13
 struct_6 *v20; // r12
 struct_6 *ptr7; // rax
 unsigned int v22; // r13d
 unsigned long long v5; // ymm0
 struct_6 *p; // rax
 struct_6 *ptr8; // r12
 struct_6 *v26; // r12
 struct_6 *ptr10; // r12
 struct_6 *v28; // r12
 struct_7 *ptr6; // rax
 unsigned long long v6; // rdx
 unsigned long long v31; // rdx
 unsigned int result; // eax
 unsigned int v33; // edx
 unsigned long v34; // fs
 unsigned int *ptr9; // rbx
 unsigned long v36; // rdx
 struct_1 *ptr1; // rax
 int v8; // xmm0
 unsigned int v9; // r12d
 struct_2 *addr; // rax
 unsigned long long v12; // rdx
 unsigned int v0[1]; // [bp-0x24]
 unsigned long v1; // [bp-0x20]

 puts(&g_4030e6);
 ptr3 = malloc(40);
 if (ptr3)
 {
 v5 = v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 1109194275421061655237079597064;
 ptr3->field_10 = 1109194275421061655237079597064;
 ptr3->field_10 = 77309411344;
 free(ptr3);
 v6 = 10;
 }
 else
 {
 v6 = 4294967295;
 }
 printf(1, "HEAP-L2-01 (heap_basic): %d\n", v6);
 struct_0 *ptr_struct = calloc(5, 4);
 if (ptr_struct)
 {
  v8 = ptr_struct->field_0;
  v9 = (unsigned int)(v8) + ptr_struct->field_10;
 free(ptr);
 }
 else
 {
 v9 = 4294967295;
 }
 printf(1, "HEAP-L2-02 (heap_calloc): %d\n", v9);
 printf(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
 addr = malloc(40);
 if (addr)
 {
 addr->field_10 = 1663791413131592482855619395596;
 addr->field_20 = 115964117016;
 free(addr);
 v12 = 15;
 }
 else
 {
 v12 = 4294967295;
 }
 printf(1, "HEAP-L2-04 (heap_array): %d\n", v12);
 ptr = malloc(8);
 if (ptr)
 {
 free(ptr);
 v14 = 15;
 }
 else
 {
 v14 = 4294967295;
 }
 printf(1, "HEAP-L2-05 (heap_struct): %d\n", v14);
 ptr4 = malloc(16);
 if (ptr4)
 {
 ptr5 = malloc(16);
 ptr4->field_8 = ptr5;
 if (ptr5)
 {
 ptr5->field_0 = 20;
 v17 = 0;
 ptr5->field_8 = 0;
 }
 else
 {
 free(ptr4);
 v17 = 4294967294;
 }
 printf(1, "HEAP-L2-06 (heap_nested): %d\n", v17);
 free(ptr4->field_8);
 free(ptr4);
 }
 else
 {
 printf(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
 cur = 0;
 ptr11 = NULL;
 v20 = NULL;
 ptr7 = malloc(16);
 if (ptr7)
 {
 do
 {
 ptr7->field_0 = cur;
 ptr7->field_8 = NULL;
 if (v20)
 {
 cur += 10;
 ptr11->field_8 = ptr7;
 if (cur != 50)
 continue;
 goto LABEL_40224f;
 }
 else
 {
 v20 = ptr7;
 if (cur + 10 == 50)
 {
LABEL_40224f:
 v22 = 0;
 p = v20;
 do
 {
 v22 += p->field_0;
 p = p->field_8;
 } while (p->field_8);
 do
 {
 ptr8 = v20;
 v26 = ptr8->field_8;
 free(ptr8);
 v20 = v26;
 } while (ptr8->field_8);
 }
 }
 } while ((ptr11 = ptr7, ptr7 = malloc(16), ptr7));
 }
 if (v20)
 {
 do
 {
 ptr10 = v20;
 v28 = ptr10->field_8;
 free(ptr10);
 v20 = v28;
 } while (ptr10->field_8);
 }
 v22 = 4294967295;
 printf(1, "HEAP-L3-01 (linked_list_heap): %d\n", v22);
 printf(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr6 = malloc(20);
 if (ptr6)
 {
 ptr6->field_10 = 4;
 v31 = 2;
 ptr6->field_0 = 0x3000000020000000100000000;
 }
 else
 {
 v31 = 4294967295;
 }
 printf(1, "HEAP-L3-03 (memory_leak): %d\n", v31);
 printf(1, "HEAP-L3-04 (dangling_pointer): ");
 result = fork();
 if (!result)
 {
 ptr9 = malloc(4);
 if (ptr9)
 {
 printf(1, "value before free: %d\n", 42);
 free(ptr9);
 v36 = *(ptr9);
 }
 else
 {
 v36 = 4294967295;
 }
 printf(1, &g_403198, v36);
 exit(0); /* do not return */
 }
 else if (result > 0)
 {
 waitpid(result, &v0, 0);
 v33 = *(v0) & 127;
 if (!((char)*(v0) & 127))
 {
 printf(1, &g_4033c8, *(v0) >> 8);
 }
 else if ((char)v33 + 1 > 1)
 {
 printf(1, &g_4033f0, v33);
 }
 return v1 - *((long long *)(40 + v34));
 }
 else
 {
 perror(&g_4031a8);
 return 4294967295;
 }
}


// Function: sub_40223b at 0x40223b
void sub_40223b(void);


// Function: sub_40227f at 0x40227f
void sub_40227f(void);


// Function: sub_4022a9 at 0x4022a9
void sub_4022a9(void);


// Function: sub_402302 at 0x402302
void sub_402302(void);


// Function: sub_40239e at 0x40239e
void sub_40239e(void);


// Function: global_var_access at 0x4023a0
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: sub_4023b4 at 0x4023b4
void sub_4023b4(void);


// Function: global_var_read at 0x4023c0
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return global_counter * 2;
}


// Function: sub_4023cd at 0x4023cd
void sub_4023cd(unsigned long a0);


// Function: global_array_access at 0x4023d0
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (a0 > 9)
 return 4294967295;
 return global_array[a0];
}


// Function: sub_4023e7 at 0x4023e7
void sub_4023e7(void);


// Function: sub_4023f6 at 0x4023f6
void sub_4023f6(unsigned long a0);


// Function: static_local at 0x402400
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


// Function: sub_40241a at 0x40241a
void sub_40241a(unsigned long a0);


// Function: call_static_func at 0x402420
int call_static_func(unsigned int a0)
{
 return a0 * 2 + 1;
}


// Function: sub_402429 at 0x402429
void sub_402429(void);


// Function: access_extern_global at 0x402430
unsigned int extern_global_var = 0;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: sub_40243e at 0x40243e
void sub_40243e(void);


// Function: call_extern_func at 0x402440
void call_extern_func()
{
 extern_function(5);
 return;
}


// Function: sub_40244e at 0x40244e
void sub_40244e(void);


// Function: read_const_data at 0x402450
extern struct_0 *const_string;

int read_const_data()
{
 return const_string->field_0 + 42;
}


// Function: sub_402463 at 0x402463
void sub_402463(void);


// Function: access_bss_var at 0x402470
unsigned long long access_bss_var()
{
 return 0;
}


// Function: sub_402477 at 0x402477
void sub_402477(void);


// Function: access_bss_buffer at 0x402480
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: sub_402487 at 0x402487
void sub_402487(void);


// Function: global_struct_access at 0x402490
unsigned long long global_struct_access()
{
 return 30;
}


// Function: sub_40249a at 0x40249a
void sub_40249a(unsigned long a0);


// Function: set_file_static at 0x4024a0
extern unsigned int file_scope_static;

void set_file_static(unsigned int a0)
{
 file_scope_static = a0;
 return;
}


// Function: sub_4024ab at 0x4024ab
void sub_4024ab(void);


// Function: get_file_static at 0x4024b0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_4024bb at 0x4024bb
void sub_4024bb(unsigned long a0);


// Function: set_global_callback at 0x4024c0
extern unsigned long long global_func_ptr;

void set_global_callback(unsigned long a0)
{
 global_func_ptr = a0;
 return;
}


// Function: sub_4024cc at 0x4024cc
void sub_4024cc(void);


// Function: call_global_callback at 0x4024d0
extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
 if (!global_func_ptr)
  return 4294967295;
 return ((unsigned long (*)(void))global_func_ptr)();
}


// Function: sub_4024ee at 0x4024ee
void sub_4024ee(unsigned long a0);


// Function: global_heap_store at 0x4024f0
unsigned long long global_heap_store(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0);
}


// Function: sub_4024fc at 0x4024fc
void sub_4024fc(void);


// Function: sub_402506 at 0x402506
void sub_402506(void);


// Function: static_complex_init at 0x402510
unsigned long long static_complex_init()
{
 return 15;
}


// Function: sub_40251a at 0x40251a
void sub_40251a(unsigned long a0);


// Function: tls_access at 0x402520
unsigned int tls_access(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_402528 at 0x402528
void sub_402528(void);


// Function: init_order_test at 0x402530
unsigned long long init_order_test()
{
 return 20;
}


// Function: sub_40253a at 0x40253a
void sub_40253a(void);


// Function: test_static_global at 0x402540
extern struct_0 *const_string;
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_403438[];
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;

int test_static_global()
{
 unsigned long v1; // rdx
 unsigned long v2; // rdx

 puts(&g_403438);
 v1 = global_counter + 1;
 global_counter = global_counter + 1;
 printf(1, "STM-L1-01 (global_var_access): %d\n", v1);
 printf(1, "STM-L1-01 (global_var_read): %d\n", global_counter * 2);
 printf(1, "STM-L1-02 (global_array_access): %d\n", global_array_access(0));
 counter_1 = 1;
 printf(1, "STM-L1-03 (static_local): %d\n", static_local(0));
 v2 = counter_1 + 1;
 counter_1 = counter_1 + 1;
 printf(1, "STM-L1-03 (static_local): %d\n", static_local(1));
 printf(1, "STM-L1-04 (call_static_func): %d\n", call_static_func(0));
 printf(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
 printf(1, "STM-L2-02 (call_extern_func): %d\n", extern_function(5) & 4294967295);
 printf(1, "STM-L2-03 (read_const_data): %d\n", const_string->field_0 + 42);
 printf(1, "STM-L2-04 (access_bss_var): %d\n", 0);
 printf(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
 printf(1, "STM-L2-05 (global_struct_access): %d\n", 30);
 file_scope_static = 50;
 printf(1, "STM-L2-06 (file_static): %d\n", 50);
 global_func_ptr = double_value;
 printf(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
 printf(1, "STM-L2-08 (global_heap_store): %d\n", 100);
 printf(1, "STM-L2-09 (static_complex_init): %d\n", 15);
 printf(1, "STM-L3-01 (tls_access): %d\n", 20);
 return printf(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


// Function: sub_402749 at 0x402749
void sub_402749(unsigned long a0);


// Function: memop_memset at 0x402750
unsigned long long memop_memset(void* a0, unsigned long a1, unsigned int a2)
{
 if (!a0)
 {
 return 4294967295;
 }
 else if (a1)
 {
 return *((char *)memset(a0, a2, a1));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_402777 at 0x402777
void sub_402777(void);


// Function: sub_402786 at 0x402786
void sub_402786(unsigned long a0, unsigned long a1, unsigned long a2);


// Function: memop_memcpy at 0x402790
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long a2)
{
 if (!(a1 && a2))
 {
 return 4294967295;
 }
 else if (a0)
 {
 return *((int *)(-4 + (char *)memcpy(a0, a1, a2) + (a2 & 18446744073709551612)));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4027bf at 0x4027bf
void sub_4027bf(void);


// Function: sub_4027c7 at 0x4027c7
void sub_4027c7(unsigned long a0);


// Function: memop_memmove at 0x4027d0
unsigned long long memop_memmove(struct_0 *a0, unsigned long a1)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if (!a0)
 {
 return 4294967295;
 }
 else if (a1 > 1)
 {
 v0 = v2;
 memmove(&a0->field_8, a0, a1 - 1);
 return a0->field_8;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4027f9 at 0x4027f9
void sub_4027f9(void);


// Function: sub_402806 at 0x402806
void sub_402806(unsigned long a0, unsigned long a1, unsigned long a2);


// Function: memop_memcmp at 0x402810
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v1; // r8d

 if (!(a1 && a2))
 {
 return 0;
 }
 else if (a0)
 {
 v1 = memcmp(a0, a1, a2);
 return (v1 > 0 ? 1 : -(v1));
 }
 else
 {
 return 0;
 }
}


// Function: sub_40284f at 0x40284f
void sub_40284f(void);


// Function: sub_402853 at 0x402853
void sub_402853(unsigned long a0);


// Function: memop_bzero at 0x402860
unsigned long long memop_bzero(void* a0, unsigned long a1)
{
 if (!a0)
 return 4294967295;
 return *((char *)memset(a0, 0, a1));
}


// Function: sub_402885 at 0x402885
void sub_402885(unsigned long a0, unsigned long a1, unsigned long a2);


// Function: memop_bcopy at 0x402890
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2)
{
 if (!(a1 && a2))
 {
 return 4294967295;
 }
 else if (a0)
 {
 return *((char *)memmove(a1, a0, a2));
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4028c5 at 0x4028c5
void sub_4028c5(void);


// Function: sub_4028ce at 0x4028ce
void sub_4028ce(unsigned long a0);


// Function: memop_unaligned_access at 0x4028d0
unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return a0->field_8;
}


// Function: sub_4028e3 at 0x4028e3
void sub_4028e3(unsigned long a0);


// Function: memop_memory_barrier at 0x4028f0
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 char v0; // [bp+0x0]

 if (!a0)
 return 4294967295;
 atomic_exchange(&v0, *((long long *)&v0));
 return *(a0) * 2;
}


// Function: sub_40290c at 0x40290c
void sub_40290c(void);


// Function: test_memory_op_functions at 0x402910
extern char g_403688[];

unsigned int test_memory_op_functions()
{
 unsigned int v14; // eax
 unsigned long long v15; // rdx
 char v0; // [bp-0x158]
 unsigned int v1; // [bp-0x154]
 unsigned long long v2; // [bp-0x150]
 unsigned int v3; // [bp-0x148]
 unsigned long long v4; // [bp-0x140]
 unsigned int v5; // [bp-0x138]
 unsigned long long flag2; // [bp-0x12d]
 unsigned short result; // [bp-0x125]
 char v8; // [bp-0x123]
 char v9; // [bp-0x122]
 unsigned short v10; // [bp-0x11b]
 char flag1; // [bp-0x119]
 char v12[264]; // [bp-0x118]

 puts(&g_403688);
 strncpy(v12, "AAAAAAAAAA", 10);
 printf(1, "MEMOP-L2-01: %d\n", 65);
 printf(1, "MEMOP-L2-02: %d\n", 50);
 v10 = 25708;
 strncpy(&v8, "HelloWor", 8);
 flag1 = 0;
 memmove(&v9, &v8, 9);
 printf(1, "MEMOP-L2-03: %c\n", 72);
 v3 = 3;
 v2 = 8589934593;
 v4 = 8589934593;
 v5 = 4;
 v14 = memcmp(&v2, &v4, 12);
 v15 = (v14 > 0 ? 1 : -(v14));
 printf(1, "MEMOP-L2-04: %d\n", (v14 > 0 ? 1 : -(v14)));
 result = 0;
 flag2 = 0;
 printf(1, "MEMOP-L2-05: %d\n", 0);
 printf(1, "MEMOP-L2-06: %d\n", 1);
 printf(1, "MEMOP-L3-01: 0x%x\n", 67305985);
 v1 = 5;
 atomic_exchange(&v0, *((long long *)&v0));
 return printf(1, "MEMOP-L3-02: %d\n", v1 * 2);
}


// Function: sub_402ac7 at 0x402ac7
void sub_402ac7(unsigned long a0);


// Function: extern_function at 0x402ad0
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


