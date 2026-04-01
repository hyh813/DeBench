// Angr Decompilation of 3_gcc_O3_g
// Platform: AARCH64

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/* CRT stub function _init removed by preprocessor */



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
 return 0;
}


// Function: sub_4009c4 at 0x4009c4
long long sub_4009c4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2

 memcpy(v0, v1, v2);
 return 0;
}


// Forward declarations
long long test_stack_memory();
long long test_static_global(long long);
long long test_heap_memory(long long);
void test_memory_op_functions(long long);
void _start(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
unsigned int double_value(unsigned int);
unsigned long long alloca_usage_constprop_0();
int local_vars(unsigned int);
int local_array(unsigned long);
unsigned int local_struct(unsigned int);
unsigned long long address_of_local(unsigned int *ptr);
long long large_stack_frame();
long long vla_stack(unsigned long a0);
void __stack_chk_fail(void);
unsigned long long __ROL__(unsigned long long value, int shift);
unsigned long long AddV(unsigned long long a, unsigned long long b);
unsigned long long ShlNV(unsigned long long value, int shift);
int arm64g_calculate_condition(int cond, unsigned long long op1, unsigned long long op2, unsigned long long op3);
unsigned long long stack_alias();
unsigned int heap_calloc(unsigned long);
unsigned int heap_array(unsigned long);
unsigned int heap_struct(unsigned int);
unsigned long long heap_nested(struct struct_1 **addr);
void linked_list_heap();
void sub_401578(unsigned long a0);
struct struct_0 * create_tree_node(unsigned int a0);
void sub_401658(unsigned long a0);
unsigned long long memory_leak(unsigned long a0);
void sub_40171c();
unsigned long long dangling_pointer();
unsigned long long double_free(unsigned int *a0);
void sub_4017bc();
unsigned long long heap_overflow();
void sub_4017ec();
void test_heap_memory();
void sub_401bcc();
unsigned int global_var_access();
unsigned int global_var_read();
int call_static_func(unsigned int);
int access_extern_global();
unsigned int extern_function(unsigned int);
int read_const_data();
unsigned long long access_bss_var();
unsigned long long access_bss_buffer();
unsigned long long global_struct_access();
long long set_file_static(unsigned long a0);
int get_file_static();
long long set_global_callback(unsigned long a0);
unsigned long long call_global_callback();
unsigned long long global_heap_store(unsigned int *a0);
unsigned int tls_access(unsigned int a0);
unsigned long long init_order_test();
unsigned long long memop_memset(char *a0, unsigned long n, unsigned int a2);
unsigned long long memop_memmove(struct struct_0 *a0, unsigned long a1);
unsigned long long memop_bzero(char *a0, unsigned long n);
unsigned long long memop_bcopy(void* a0, void* a1, unsigned long a2);
unsigned long long memop_unaligned_access(void* a0);
unsigned long long memop_memcpy(void* a0, void* a1, unsigned long n);
unsigned long long memop_memcmp(void* a0, void* a1, unsigned long a2);
unsigned long long memop_memory_barrier(unsigned int *a0);

// Additional struct definitions needed
typedef struct struct_0 {
 unsigned long long field_0;
 unsigned long long field_8;
 unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
 unsigned long long field_8;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
 unsigned long long field_8;
} struct_5;

typedef struct struct_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_6 *field_8;
 unsigned long long field_10;
} struct_6;

typedef struct struct_7 {
 unsigned long long field_0;
 unsigned int field_10;
} struct_7;

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
 frame_dummy();
 return 0;
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
void sub_400c68()
{
 alloca_usage_constprop_0();
 return;
}


// Function: alloca_usage_constprop_0 at 0x400c70
unsigned long long alloca_usage_constprop_0()
{
 return 15;
}


// Function: sub_400c78 at 0x400c78
void sub_400c78(unsigned long a0)
{
 local_vars();
 return;
}


// Function: local_vars at 0x400c80
int local_vars(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: sub_400c8c at 0x400c8c
void sub_400c8c(unsigned long a0)
{
 local_array();
 return;
}


// Function: local_array at 0x400c90
int local_array(unsigned long a0)
{
 unsigned int v0; // 324

 return v0;
}


// Function: sub_400ca8 at 0x400ca8
void sub_400ca8(unsigned long a0)
{
 local_struct();
 return;
}


// Function: local_struct at 0x400cb0
unsigned int local_struct(unsigned int a0)
{
 return a0 * 3;
}


// Function: sub_400cb8 at 0x400cb8
void sub_400cb8(unsigned long a0)
{
 address_of_local();
 return;
}


// Function: address_of_local at 0x400cc0
unsigned long long address_of_local(unsigned int *ptr)
{
 *(ptr) = 42;
 return 42;
}


// Function: address_of_array at 0x400cd0
unsigned int address_of_array(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: sub_400cdc at 0x400cdc
void sub_400cdc()
{
 large_stack_frame();
 return;
}


// Function: large_stack_frame at 0x400ce0
extern char __stack_chk_guard;

long long large_stack_frame()
{
 unsigned long long *cur; // x0
 unsigned long long *result; // x0
 char *v0; // [bp-0x820]
 unsigned long long v1; // [bp-0x810]
 char v2; // [bp-0x410]
 unsigned long long v7; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 cur = &v1;
 result = &v1;
 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 do
 {
 *cur = 0;
 cur += 1;
 } while (&v7 != cur);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v2;
}


// Function: sub_400d88 at 0x400d88
long long sub_400d88(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = vla_stack(a0);
 return vla_stack(a0);
}


// Function: vla_stack at 0x400d90
extern char __stack_chk_guard;

long long vla_stack(unsigned long a0)
{
 unsigned int v6; // w4
 unsigned long v7; // x1
 unsigned long long v16; // x1
 unsigned long long ptr3; // x4
 unsigned int v18; // w2
 unsigned long long *ptr; // x6
 unsigned long v20; // x0
 char *i; // x2
 unsigned long long v9; // x1
 unsigned long long v10; // x7
 unsigned long long addr; // x3
 unsigned long long v12; // q1
 unsigned long long *p; // x1
 unsigned long long v14; // q1
 unsigned long v21; // [bp-0x20030]
 unsigned long long result; // [bp-0x1fc30]
 char v1; // [bp-0x10030]
 char v2; // [bp-0x30]
 char *v3; // [bp-0x20]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]
 char *vvar_87;

 v3 = &v5;
 v6 = (unsigned int)a0 - 1;
 v4 = *((long long *)&__stack_chk_guard);
 if (999 >= v6)
 {
 v7 = (a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183) + 15;
 i = &(&v2)[-1 * (v7 & 0xffffffffffff0000)];
 if (&v2 != i)
 {
 do
 {
 *result = 0;
 result += 1;
 } while (&v21 != result);
 }
	v9 = (v7 & 0xfffffffffffffff0) & 65535;
	vvar_87 = (char *)&v1 - v9;
	*(unsigned long long *)vvar_87 = 0;
	if (0x400 <= v9)
		*(unsigned long long *)(vvar_87 + 0x400) = 0;
 v10 = (unsigned long long)(vvar_87 + 19);
 addr = v10 & 18446744073709551612;
	if (v6 > 2)
	{
		unsigned long long v12;
		v12 = 0x3000000020000000100000000;
		p = addr;
		do
		{
			unsigned long long v14;
			v14 = AddV(v12, 34359738376);
			*(p) = ShlNV(v12, 1);
			p += 1;
			v12 = v14;
		} while (p != (struct_0 *)((char *)addr + (((unsigned int)a0 * 0x40000000 | (unsigned int)a0 >> 2) & 1073741823) * 16));
		v16 = (unsigned int)a0 & 0xfffffffc;
 v16 = (unsigned int)a0 & 0xfffffffc;
 goto LABEL_400e84;
 }
 else
 {
 v16 = 0;
 }
 ptr3 = v16 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v16, 2) & 17179869180 & 17179869183;
	v18 = __ROL__((unsigned int)v16, 1) & 4294967294;
	ptr = (unsigned long long *)((char *)addr + (ptr3 & 0xfffffffffffffff0));
	*((unsigned int *)(((char *)ptr) + ((ptr3 & 0xfffffffffffffff0) + (__ROL__(v10, 62) & 4611686018427387903) * 4))) = v18;
 if ((unsigned int)a0 > (unsigned int)v16 + 1)
 {
 ptr[1] = v18 + 2;
 if ((unsigned int)a0 > (unsigned int)v16 + 2)
 ptr[2] = v18 + 4;
 }
LABEL_400e84:
 v20 = *((int *)(addr + ((unsigned int)a0 >> 31 & 0x80000000 | __ROL__((unsigned int)a0, 31) & 2147483647) * 4));
 }
 else
 {
 v20 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v20;
}


// Function: alloca_usage at 0x400ed0
typedef struct struct_2 {
 unsigned char padding_0[16];
 unsigned long long field_10;
 unsigned long long field_20;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_3;

extern char __stack_chk_guard;

long long alloca_usage(unsigned long a0)
{
 unsigned long v6; // x1
 char *i; // x2
 unsigned long long *p; // x4
 unsigned long v17; // x0
 unsigned long long v8; // x1
 struct_0 *ptr; // x3
 unsigned long long v10; // q1
 struct_0 *addr; // x1
 unsigned long long v12; // q1
 unsigned long long v14; // x1
 unsigned int v15; // w2
 unsigned long v18; // [bp-0x20030]
 unsigned long long result; // [bp-0x1fc30]
 char v1; // [bp-0x10030]
 char v2; // [bp-0x30]
 char *v3; // [bp-0x20]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]
 char *vvar_87;

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
 *result = 0;
 result += 1;
 } while (&v18 != result);
 }
 v8 = (v6 & 0xfffffffffffffff0) & 65535;
	vvar_87 = (char *)&v1 - v8;
	*(unsigned long long *)vvar_87 = 0;
	if (0x400 <= v8)
		*(unsigned long long *)(vvar_87 + 0x400) = 0;
	ptr = (struct_0 *)vvar_87;
	if ((unsigned int)a0 - 1 > 2)
	{
		unsigned long long v10;
		v10 = 0x3000000020000000100000000;
		addr = ptr;
		do
		{
			unsigned long long v12;
			v12 = AddV(v10, 34359738376);
			addr->field_0 = AddV(ShlNV(v10, 1), v10);
			addr = &addr->field_10;
			v10 = v12;
		} while (ptr != &addr[((unsigned int)a0 * 0x40000000 | (unsigned int)a0 >> 2) & 1073741823]);
 v14 = (unsigned int)a0 & 0xfffffffc;
 goto LABEL_400fc0;
 }
 else
 {
 v14 = 0;
 }
 v15 = (unsigned int)v14 * 3;
 *((unsigned int *)((char *)addr + 4 * (v14 & 4294967295))) = v15;
 if ((unsigned int)a0 > (unsigned int)v14 + 1)
 {
 p = (unsigned int *)((char *)addr + (v14 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v14, 2) & 17179869180 & 17179869183]);
 p[1] = v15 + 3;
 if ((unsigned int)a0 > (unsigned int)v14 + 2)
 p[2] = v15 + 6;
 }
LABEL_400fc0:
 v17 = *((int *)((char *)ptr + 4 * ((unsigned int)a0 >> 31 & 0x80000000 | __ROL__((unsigned int)a0, 31) & 2147483647)));
 }
 else
 {
 v17 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v17;
}


// Function: sub_40100c at 0x40100c
void sub_40100c()
{
 stack_alias();
 return;
}


// Function: stack_alias at 0x401010
unsigned long long stack_alias()
{
 return 20;
}


// Function: sub_401018 at 0x401018
void sub_401018()
{
 test_stack_memory();
 return;
}


// Function: test_stack_memory at 0x401020
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
 __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", alloca_usage_constprop_0() & 4294967295);
 return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


// Function: heap_basic at 0x4010f4
unsigned int heap_basic(unsigned long a0)
{
 unsigned long long v2; // x19
 unsigned long long *addr; // x0
 unsigned long long v4; // q1
 unsigned long long *p; // x1
 unsigned long long v8; // x1
 unsigned int v9; // w2
 unsigned int *ptr; // x3
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

	v0 = &v1;
	v2 = a0 & 4294967295;
	addr = (struct_0 *)malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
	if (!addr)
		return 4294967295;
	if ((unsigned int)v2 > 0)
	{
		if ((unsigned int)v2 - 1 > 2)
		{
			v4 = 0x3000000020000000100000000;
			p = addr;
			do
			{
			*p = ShlNV(v4, 1);
			p += 1;
			v4 = AddV(v4, 34359738376);
			} while (p != (unsigned long long *)((char *)addr + (((unsigned int)v2 * 0x40000000 | (unsigned int)v2 >> 2) & 1073741823) * 16));
 v8 = (unsigned int)v2 & 0xfffffffc;
 if ((char)arm64g_calculate_condition(10, v2 & 3, 0, 0))
 {
 free(addr);
 return *((int *)((char *)(addr) + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
 }
 }
 else
 {
 v8 = 0;
 }
 v9 = __ROL__((unsigned int)v8, 1) & 4294967294;
 *((unsigned int *)((char *)addr + 4 * (v8 & 4294967295))) = v9;
 if ((unsigned int)v2 > (unsigned int)v8 + 1)
 {
 ptr = (unsigned int *)((char *)addr + (v8 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v8, 2) & 17179869180 & 17179869183));
 ptr[1] = v9 + 2;
 if ((unsigned int)v2 > (unsigned int)v8 + 2)
 ptr[2] = v9 + 4;
 }
 }
 free(addr);
 return *((int *)((char *)(addr) + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
}


// Function: sub_4011cc at 0x4011cc
void sub_4011cc(unsigned long a0)
{
 heap_calloc();
 return;
}


// Function: heap_calloc at 0x4011d0
unsigned int heap_calloc(unsigned long a0)
{
 unsigned long long v2; // x20
 void* p; // x0
 void* i; // x1
 unsigned long long v6; // d0
 unsigned long long v7; // x1
 unsigned long long cur; // x19
 unsigned int *ptr; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
 p = calloc(a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295, 4);
 if (!p)
 return 4294967295;
 if ((unsigned int)v2 > 0)
 {
 if ((unsigned int)v2 - 1 > 2)
 {
 i = p;
 do
 {
 i += 16;
 } while (i != p + (((unsigned int)v2 * 0x40000000 | (unsigned int)v2 >> 2) & 1073741823) * 16);
 v6 = 0;
 v7 = (unsigned int)v2 & 0xfffffffc;
 {
 free(p);
 return v6;
 }
 }
 else
 {
 v7 = 0;
 cur = 0;
 }
 cur += *((int *)((char *)p + 4 * (v7 & 4294967295)));
 if ((unsigned int)v2 > (unsigned int)v7 + 1)
 {
 ptr = (unsigned int *)((char *)p + (v7 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v7, 2) & 17179869180 & 17179869183);
 cur += ptr[1];
 if ((unsigned int)v2 > (unsigned int)v7 + 2)
 cur += ptr[2];
 }
 }
 else
 {
 cur = 0;
 }
 free(p);
 return cur;
}


// Function: heap_realloc at 0x4012a4
typedef struct struct_realloc_0 {
 unsigned long long field_0;
 unsigned int field_10;
} struct_realloc_0;

typedef struct struct_realloc_1 {
 char padding_0[8];
 unsigned int field_8;
 char padding_c[8];
 unsigned long long field_14;
} struct_realloc_1;

unsigned int heap_realloc()
{
 struct_0 *ptr; // x0
 struct_1 *p; // x0
 unsigned int v4; // w19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
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
 if (*((unsigned int *)p) == 3)
 v4 = 50;
 else
 v4 = 4294967293;
 *((unsigned long long *)(((char *)p) + 8)) = 6338253002432419092900882677810;
 free(p);
 return v4;
}


// Function: sub_40132c at 0x40132c
void sub_40132c(unsigned long a0)
{
 heap_array();
 return;
}


// Function: heap_array at 0x401330
unsigned int heap_array(unsigned long a0)
{
 unsigned long long v2; // x19
 unsigned long long *addr; // x0
 unsigned long long v4; // q1
 unsigned long long *p; // x1
 unsigned long long v8; // x1
 unsigned int v9; // w2
 unsigned int *ptr; // x3
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

	v0 = &v1;
	v2 = a0 & 4294967295;
	addr = (struct_0 *)malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
	if (!addr)
		return 4294967295;
	if ((unsigned int)v2 > 0)
	{
		if ((unsigned int)v2 - 1 > 2)
		{
			v4 = 0x3000000020000000100000000;
			p = addr;
			do
			{
				*p = AddV(ShlNV(v4, 1), v4);
				p += 1;
				v4 = AddV(v4, 34359738376);
			} while (p != (unsigned long long *)((char *)addr + (((unsigned int)v2 * 0x40000000 | (unsigned int)v2 >> 2) & 1073741823) * 16));
 v8 = (unsigned int)v2 & 0xfffffffc;
 if ((char)arm64g_calculate_condition(10, v2 & 3, 0, 0))
 {
 free(addr);
 return *((int *)((char *)(addr) + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
 }
 }
 else
 {
 v8 = 0;
 }
 v9 = (unsigned int)v8 * 3;
 *((unsigned int *)((char *)addr + 4 * (v8 & 4294967295))) = v9;
 if ((unsigned int)v2 > (unsigned int)v8 + 1)
 {
 ptr = (unsigned int *)((char *)addr + (v8 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v8, 2) & 17179869180 & 17179869183));
 ptr[1] = v9 + 3;
 if ((unsigned int)v2 > (unsigned int)v8 + 2)
 ptr[2] = v9 + 6;
 }
 }
 free(addr);
 return *((int *)((char *)(addr) + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
}


// Function: sub_401408 at 0x401408
void sub_401408(unsigned long a0)
{
 heap_struct();
 return;
}


// Function: heap_struct at 0x401410
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


// Function: sub_40144c at 0x40144c
void sub_40144c(unsigned long a0)
{
 heap_nested();
 return;
}


// Function: heap_nested at 0x401450
typedef struct struct_nested_3 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_nested_2 *field_8;
} struct_nested_3;

typedef struct struct_nested_1 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_nested_0 *field_8;
} struct_nested_1;

typedef struct struct_nested_4 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_nested_4;

typedef struct struct_nested_2 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_nested_2;

typedef struct struct_nested_0 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_nested_0;

unsigned long long heap_nested(struct_1 **addr)
{
 unsigned long long *ptr; // x0
 unsigned long long *ptr2; // x19
 struct_4 *ptr3; // x0
 struct_4 *p; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
	*(addr) = (struct_1 *)(unsigned long long)ptr;
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 *ptr2 = 10;
 ptr3 = (struct_4 *)malloc(16);
 *(ptr2 + 1) = (unsigned long long)ptr3;
 p = ptr3;
 if (!p)
 {
 free(ptr2);
 return 4294967294;
 }
 p->field_0 = 20;
 p->field_8 = 0;
 return 0;
}


// Function: linked_list_heap at 0x4014c4
typedef struct struct_linked_list {
 unsigned int field_0;
 char padding_4[4];
 struct struct_linked_list *field_8;
} struct_linked_list;

unsigned int linked_list_heap()
{
 unsigned int cur; // w20
 unsigned long long *v3; // x19
 unsigned long long *ptr3; // x19
 unsigned long long *v11; // x19
 unsigned long long *addr; // x19
 unsigned long long *v13; // x19
 unsigned long long *v4; // x21
 unsigned long long *ptr5; // x21
 unsigned long long *p; // x0
 unsigned long long v7; // x20
 unsigned long long *ptr; // x0
 unsigned long long *v9; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 cur = 0;
 v3 = NULL;
 v4 = NULL;
 while (true)
 {
 ptr5 = v4;
 p = malloc(16);
 if (!p)
 {
 if (!v3)
 return 4294967295;
 do
 {
 addr = v3;
 v13 = (unsigned long long *)(*addr);
 free(addr);
 v3 = v13;
 } while (v13);
 return 4294967295;
 }
 p[0] = cur;
 p[1] = (unsigned long long)NULL;
 if (v3)
 {
 cur += 10;
 ptr5[1] = (unsigned long long)p;
 if (cur == 50)
 goto LABEL_401520;
 }
 else
 {
 cur += 10;
 v3 = p;
 if (cur == 50)
 {
LABEL_401520:
 v7 = 0;
 ptr = v3;
 do
 {
 v9 = (unsigned long long *)(ptr[1]);
 v7 += ptr[0];
 ptr = v9;
 } while (v9);
 do
 {
 ptr3 = v3;
 v11 = (unsigned long long *)(ptr3[1]);
 free(ptr3);
 v3 = v11;
 } while (v11);
 return v7;
 }
 }
 v4 = p;
 }
}


// Function: sub_401578 at 0x401578
void sub_401578(unsigned long a0)
{
 create_tree_node();
 return;
}


// Function: create_tree_node at 0x401580
typedef struct struct_tree_node {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
 unsigned long long field_10;
} struct_tree_node;

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


// Function: tree_heap_traversal at 0x4015b0
unsigned long long tree_heap_traversal()
{
 struct_0 *node1; // x0
 unsigned long long v6; // x19
 unsigned long long v7; // x20
 struct_0 *node2; // x19
 struct_0 *node3; // x20
 unsigned long long v10; // x21
 struct_0 *node4; // x0
 struct_0 *node5; // x0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned long long v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v0 = &v4;
 node1 = malloc(24);
 if (!node1)
 return 4294967295;
 v1 = 0;
 v2 = 0;
 node2 = node1;
 node3 = malloc(24);
 if (node3)
 {
 v3 = 0;
 node4 = malloc(24);
 if (node4)
 {
 free(node4);
 free(node3);
 free(node2);
 return 60;
 }
 free(node3);
 }
 else
 {
 node5 = malloc(24);
 if (node5)
 free(node5);
 }
 free(node2);
 return 4294967294;
}


// Function: sub_401658 at 0x401658
void sub_401658(unsigned long a0)
{
 memory_leak();
 return;
}


// Function: memory_leak at 0x401660
unsigned long long memory_leak(unsigned long a0)
{
 unsigned long long v2; // x19
 unsigned long long *addr; // x0
 unsigned long long v4; // q0
 unsigned long long *p; // x1
 unsigned long long v8; // x1
 unsigned int v9; // w3
 unsigned int ptr[3]; // x2
 unsigned int v11; // w1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

	v0 = &v1;
	v2 = a0 & 4294967295;
	addr = malloc(a0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(a0, 2) & 17179869180 & 17179869183);
	if (!addr)
		return 4294967295;
	if ((unsigned int)v2 <= 0)
		return *((int *)((char *)addr + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
	if ((unsigned int)v2 - 1 > 2)
	{
		unsigned long long v12;
		v12 = 0x3000000020000000100000000;
		p = addr;
		do
		{
			*p = v12;
			p += 1;
			v12 = AddV(v12, 34359738376);
		} while (p != (unsigned long long *)((char *)addr + (((unsigned int)v2 * 0x40000000 | (unsigned int)v2 >> 2) & 1073741823) * 16));
 v8 = (unsigned int)v2 & 0xfffffffc;
 return (unsigned int)*((int *)((char *)addr + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
 }
 else
 {
 v8 = 0;
 }
 v9 = (unsigned int)v8 + 1;
 *((unsigned int *)((char *)addr + 4 * (v8 & 4294967295))) = v8;
 if ((unsigned int)v2 > v9)
 {
 ptr = (unsigned int *)((char *)addr + (v8 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v8, 2) & 17179869180 & 17179869183));
 v11 = (unsigned int)v8 + 2;
 ptr[1] = v9;
 if ((unsigned int)v2 > v11)
 ptr[2] = v11;
 }
 return *((int *)((char *)addr + 4 * ((unsigned int)v2 + ((unsigned int)v2 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)v2 + ((unsigned int)v2 >> 31), 31) & 2147483647)));
}


// Function: sub_40171c at 0x40171c
void sub_40171c()
{
 dangling_pointer();
 return;
}


// Function: dangling_pointer at 0x401720
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


// Function: double_free at 0x401770
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


// Function: sub_4017bc at 0x4017bc
void sub_4017bc()
{
 heap_overflow();
 return;
}


// Function: heap_overflow at 0x4017c0
unsigned long long heap_overflow()
{
 void* ptr; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(40);
 if (!ptr)
 return 4294967295;
 free(ptr);
 return 0;
}


// Function: sub_4017ec at 0x4017ec
void sub_4017ec()
{
 test_heap_memory();
 return;
}


// Function: test_heap_memory at 0x4017f0
typedef struct struct_test_heap_0 {
 char padding_0[16];
 unsigned long long field_10;
 unsigned long long field_20;
} struct_test_heap_0;

typedef struct struct_test_heap_1 {
 char padding_0[16];
 unsigned int field_10;
} struct_test_heap_1;

typedef struct struct_test_heap_2 {
 char padding_0[16];
 unsigned long long field_10;
 unsigned long long field_20;
} struct_test_heap_2;

typedef struct struct_test_heap_4 {
 char padding_0[8];
 struct struct_test_heap_3 *field_8;
} struct_test_heap_4;

typedef struct struct_test_heap_5 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_test_heap_5;

typedef struct struct_test_heap_6 {
 unsigned int field_0;
 char padding_4[4];
 struct struct_test_heap_6 *field_8;
} struct_test_heap_6;

typedef struct struct_test_heap_7 {
 unsigned long long field_0;
 unsigned int field_10;
} struct_test_heap_7;

typedef struct struct_test_heap_3 {
 unsigned int field_0;
 char padding_4[4];
 unsigned long long field_8;
} struct_test_heap_3;

extern char __stack_chk_guard;
extern char g_402428;
extern char g_402578;
extern char g_402588;
extern char g_4025b0;
extern char g_4025f8;

unsigned long long test_heap_memory()
{
 struct_0 *ptr; // x0
 unsigned long long v5; // x2
 struct_4 *addr; // x19
 struct_5 *ptr3; // x0
 unsigned long long v16; // x2
 unsigned int v17; // w20
 struct_6 *ptr11; // x21
 struct_6 *v19; // x19
 struct_6 *ptr6; // x0
 unsigned long long v21; // x20
 struct_6 *ptr5; // x0
 struct_6 *v23; // x0
 struct_1 *ptr10; // x0
 struct_6 *ptr9; // x19
 struct_6 *v25; // x19
 struct_6 *ptr7; // x19
 struct_6 *v27; // x19
 struct_7 *ptr4; // x0
 unsigned long long v30; // x2
 unsigned long long pid; // x0
 unsigned int v7; // s0
 unsigned long long msg; // x0
 unsigned int *ptr8; // x19
 unsigned long v34; // x2
 unsigned int v8; // w19
 struct_2 *p; // x0
 unsigned long long v11; // x2
 void* ptr; // x0
 unsigned long long v13; // x2
 char *v0; // [bp-0x40]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
	v2 = *((long long *)&__stack_chk_guard);
	puts(&g_402428);
	ptr = malloc(40);
	if (ptr)
	{
	((struct struct_test_heap_0 *)ptr)->field_10 = 1109194275421061655237079597064;
	((struct struct_test_heap_0 *)ptr)->field_20 = 77309411344;
	free(ptr);
	v5 = 10;
	}
 else
 {
 v5 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v5);
 ptr10 = calloc(5, 4);
 if (ptr10)
 {
 v7 = 0;
 v8 = v7 + *(unsigned int *)ptr10;
 free(ptr10);
 }
 else
 {
 v8 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v8);
 __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", heap_realloc() & 4294967295);
	p = malloc(40);
	if (p)
	{
	((struct struct_test_heap_2 *)p)->field_10 = 1663791413131592482855619395596;
	((struct struct_test_heap_2 *)p)->field_20 = 115964117016;
	free(p);
	v11 = 15;
	}
 else
 {
 v11 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v11);
 ptr = malloc(8);
 if (ptr)
 {
 free(ptr);
 v13 = 15;
 }
 else
 {
 v13 = 4294967295;
 }
 __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v13);
	addr = malloc(16);
	if (addr)
	{
		ptr3 = malloc(16);
		addr->field_8 = (unsigned long long)ptr3;
		if (ptr3)
		{
			v16 = 0;
			ptr3->field_0 = 20;
			ptr3->field_8 = 0;
		}
		else
		{
			free(addr);
			v16 = 4294967294;
		}
		__printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v16);
		free((void *)addr->field_8);
		free(addr);
	}
 else
 {
 __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", 4294967295);
 }
	v17 = 0;
	ptr11 = NULL;
	v19 = NULL;
	while (true)
	{
	ptr6 = malloc(16);
	if (!ptr6)
	{
		if (v19)
		{
			do
			{
				ptr7 = v19;
				v27 = ptr7->field_8;
				free(ptr7);
				v19 = v27;
			} while (v27);
		}
		v21 = 4294967295;
		break;
	}
	ptr6->field_0 = v17;
	v17 += 10;
	ptr6->field_8 = NULL;
	if (v19)
	{
		ptr11->field_8 = ptr6;
		ptr11 = ptr6;
	}
	else
	{
		v19 = ptr6;
		ptr11 = ptr6;
	}
	if (v17 == 50)
	{
		v21 = 0;
		ptr5 = v19;
		do
		{
			v23 = ptr5->field_8;
			v21 += ptr5->field_0;
			ptr5 = v23;
		} while (v23);
		do
		{
			ptr9 = v19;
			v25 = ptr9->field_8;
			free(ptr9);
			v19 = v25;
		} while (v25);
		break;
	}
	}
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v21 & 4294967295);
 __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v21 & 4294967295);
 __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal() & 4294967295);
 ptr4 = malloc(20);
 if (ptr4)
 {
 v30 = 2;
 ptr4->field_10 = 4;
 ptr4->field_0 = 0x3000000020000000100000000;
 }
 else
 {
 v30 = 4294967295;
 }
 __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v30);
 __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
 pid = fork();
 if ((unsigned int)pid)
 {
	waitpid(pid, &v1, 0);
	if (!((char)arm64g_calculate_condition(9, (unsigned long long)(*(int *)&v1 & 127), 0, 0)))
	{
	if (0 < ((unsigned int)((( *(int *)&v1 & 127) + 1) * 0x100000000000000 >> 63) & 4294967168 | (unsigned int)(__ROL__(( *(int *)&v1 & 127) + 1, 63)) & 127))
 __printf_chk(1, (char *)&g_4025b0, *(int *)&v1 & 127);
	}
	else
 {
 __printf_chk(1, (char *)&g_402588, (unsigned long long)((*(int *)&v1 * 0x100000000000000 | *(int *)&v1 >> 8) & 18374686479671623935 & 255));
	}
	}
 if (v2 == *((long long *)&__stack_chk_guard))
 return (unsigned long long)&__stack_chk_guard;
 __stack_chk_fail(); /* do not return */
 }
 else
 {
 ptr8 = malloc(4);
 if (ptr8)
 {
 __printf_chk(1, "value before free: %d\n", 42);
 free(ptr8);
 v34 = *(ptr8);
 }
 else
 {
 v34 = 4294967295;
 }
 __printf_chk(1, (char *)&g_402578, v34);
 exit(0); /* do not return */
 }
}


// Function: sub_401bcc at 0x401bcc
void sub_401bcc()
{
 global_var_access();
 return;
}


// Function: global_var_access at 0x401bd0
extern unsigned int global_counter;

unsigned int global_var_access()
{
 global_counter = global_counter + 1;
 return global_counter + 1;
}


// Function: global_var_read at 0x401be4
extern unsigned int global_counter;

unsigned int global_var_read()
{
 return (global_counter * 2 | global_counter >> 31) & 4294967294;
}


// Function: global_array_access at 0x401bf4
extern unsigned int global_array[4];

unsigned long long global_array_access(unsigned int a0)
{
 if (9 < a0)
 return 4294967295;
 return global_array[a0];
}


// Function: static_local at 0x401c14
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


// Function: sub_401c48 at 0x401c48
void sub_401c48(unsigned long a0)
{
 call_static_func();
 return;
}


// Function: call_static_func at 0x401c50
int call_static_func(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: sub_401c5c at 0x401c5c
void sub_401c5c()
{
 access_extern_global();
 return;
}


// Function: access_extern_global at 0x401c60
extern unsigned int extern_global_var;

int access_extern_global()
{
 return extern_global_var + 100;
}


// Function: call_extern_func at 0x401c74
long long call_extern_func()
{
 unsigned long long v0; // x0

 v0 = extern_function(5);
 return extern_function(5);
}


// Function: sub_401c7c at 0x401c7c
void sub_401c7c()
{
 read_const_data();
 return;
}


// Function: read_const_data at 0x401c80
typedef struct struct_const_data {
 char padding_0[4];
 char field_4;
} struct_const_data;

extern struct_0 *const_string;

int read_const_data()
{
	return const_string->field_0 + 42;
}


// Function: access_bss_var at 0x401c94
unsigned long long access_bss_var()
{
 return 0;
}


// Function: sub_401c9c at 0x401c9c
void sub_401c9c()
{
 access_bss_buffer();
 return;
}


// Function: access_bss_buffer at 0x401ca0
unsigned long long access_bss_buffer()
{
 return 0;
}


// Function: sub_401ca8 at 0x401ca8
void sub_401ca8()
{
 global_struct_access();
 return;
}


// Function: global_struct_access at 0x401cb0
unsigned long long global_struct_access()
{
 return 30;
}


// Function: sub_401cb8 at 0x401cb8
long long sub_401cb8(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = set_file_static(a0);
 return set_file_static(a0);
}


// Function: set_file_static at 0x401cc0
extern unsigned int file_scope_static;

long long set_file_static(unsigned long a0)
{
 file_scope_static = a0;
 return a0;
}


// Function: sub_401ccc at 0x401ccc
void sub_401ccc()
{
 get_file_static();
 return;
}


// Function: get_file_static at 0x401cd0
extern unsigned int file_scope_static;

int get_file_static()
{
 return file_scope_static;
}


// Function: sub_401cdc at 0x401cdc
long long sub_401cdc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = set_global_callback(a0);
 return set_global_callback(a0);
}


// Function: set_global_callback at 0x401ce0
extern unsigned long long global_func_ptr;

long long set_global_callback(unsigned long a0)
{
	if (!a0)
		return 0;
	global_func_ptr = a0;
	return a0;
}


// Function: sub_401cec at 0x401cec
long long sub_401cec()
{
 unsigned long long v0; // x0

 v0 = call_global_callback();
 return call_global_callback();
}


// Function: call_global_callback at 0x401cf0
extern unsigned long long global_func_ptr;

unsigned long long call_global_callback()
{
 typedef unsigned long long (*callback_func_t)();
 callback_func_t func = (callback_func_t)global_func_ptr;
 if (!func)
 return 4294967295;
 return func();
}


// Function: sub_401d0c at 0x401d0c
long long sub_401d0c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = 100;
 return 100;
}


// Function: global_heap_store at 0x401d10
unsigned long long global_heap_store(unsigned int *a0)
{
	if (!a0)
		return 0;
	return *(a0);
}


// Function: static_complex_init at 0x401d24
unsigned long long static_complex_init()
{
 return 15;
}


// Function: sub_401d2c at 0x401d2c
void sub_401d2c(unsigned long a0)
{
 tls_access();
 return;
}


// Function: tls_access at 0x401d30
unsigned int tls_access(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_401d38 at 0x401d38
void sub_401d38()
{
 init_order_test();
 return;
}


// Function: init_order_test at 0x401d40
unsigned long long init_order_test()
{
 return 20;
}


// Function: sub_401d48 at 0x401d48
void sub_401d48()
{
 test_static_global();
 return;
}


// Function: test_static_global at 0x401d50

extern struct_0 *const_string;
extern unsigned int counter_1;
extern unsigned int extern_global_var;
extern unsigned int file_scope_static;
extern char g_402628;
extern unsigned int global_counter;
extern unsigned long long global_func_ptr;

int test_static_global()
{
 unsigned long v2; // x2
 unsigned long v3; // x2
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_402628);
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
 __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string->field_0 + 42);
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


// Function: sub_401f38 at 0x401f38
long long sub_401f38(unsigned long a0, unsigned long a1)
{
 unsigned long long dst; // x0

 dst = memop_memset();
 return memop_memset();
}


// Function: memop_memset at 0x401f40
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
 if ((char)arm64g_calculate_condition(4, n, 0, 0))
 return 4294967295;
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, n, 0, 0))
 return 4294967295;
 }
 v0 = &v3;
 v1 = v16;
 v2 = v17;
 memset(a0, a2, n);
 return *(a0);
}


// Function: memop_memcpy at 0x401f84
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
 v10 = n;
 if (!((char)arm64g_calculate_condition(20, (unsigned long long)v10, 0, 0)))
 goto LABEL_401f8e;
LABEL_401f8d:
 if ((char)arm64g_calculate_condition(4, (unsigned long long)a0, 0, 0))
 return 4294967295;
 }
 else
 {
 v5 = 0;
 v10 = n;
 if ((char)arm64g_calculate_condition(16, (unsigned long long)v10, 0, 0))
 goto LABEL_401f8d;
LABEL_401f8e:
 if ((char)arm64g_calculate_condition(0, (unsigned long long)a0, 0, 0))
 return 4294967295;
 }
 v0 = &v4;
 v1 = v27;
 v2 = v28;
 v3 = v29;
 memcpy(a0, a1, n);
 return *((int *)(-4 + (char *)a0 + (n & 18446744073709551612)));
}


// Function: sub_401fcc at 0x401fcc
long long sub_401fcc(unsigned long a0, unsigned long a1)
{
 memop_memmove((void*)a0, a1);
 return 0;
}


// Function: memop_memmove at 0x401fd0
typedef struct struct_memmove {
 char padding_0[1];
 char field_1;
} struct_memmove;

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
 if ((char)arm64g_calculate_condition(148, a1, 1, 0))
 return 4294967295;
 }
 else
 {
 if ((char)arm64g_calculate_condition(144, a1, 1, 0))
 return 4294967295;
 }
 v0 = &v3;
 v1 = v16;
 v2 = v17;
 memmove((char *)a0 + 1, a0, a1 - 1);
 return a0->field_1;
}


// Function: memop_memcmp at 0x402014
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
 goto LABEL_40201e;
LABEL_40201d:
 if (!((char)arm64g_calculate_condition(20, ((char)arm64g_calculate_condition(v3 | 16, v8, 0, 0) ? a0 : 0x40000000), 0, 0)))
 return 0;
 }
 else
 {
 v3 = 0;
 v8 = ((char)arm64g_calculate_condition(v9 | 16, v10, v11, v12) ? a2 : 0x40000000);
 if ((char)arm64g_calculate_condition(16, v8, 0, 0))
 goto LABEL_40201d;
LABEL_40201e:
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


// Function: sub_40204c at 0x40204c
long long sub_40204c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = memop_bzero();
 return memop_bzero();
}


// Function: memop_bzero at 0x402050
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
 return (unsigned long long)(unsigned char)*(a0);
}


// Function: sub_402088 at 0x402088
long long sub_402088(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long v0; // x0

 v0 = memop_bcopy();
 return memop_bcopy();
}


// Function: memop_bcopy at 0x402090
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
	v8 = a2;
 if (!((char)arm64g_calculate_condition(20, (unsigned long long)v8, 0, 0)))
 goto LABEL_40209a;
LABEL_402099:
 if ((char)arm64g_calculate_condition(4, (unsigned long long)a0, 0, 0))
 return 4294967295;
 }
 else
 {
 v3 = 0;
 v8 = a2;
 if ((char)arm64g_calculate_condition(16, (unsigned long long)v8, 0, 0))
 goto LABEL_402099;
LABEL_40209a:
 if ((char)arm64g_calculate_condition(0, (unsigned long long)a0, 0, 0))
 return 4294967295;
 }
 v0 = &v2;
 v1 = v25;
 return *((char *)memmove(a1, a0, a2));
}


// Function: sub_4020cc at 0x4020cc
long long sub_4020cc(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = memop_unaligned_access();
 return memop_unaligned_access();
}


// Function: memop_unaligned_access at 0x4020d0
typedef struct struct_unaligned {
 char padding_0[1];
 unsigned int field_1;
} struct_unaligned;

unsigned long long memop_unaligned_access(struct_0 *a0)
{
 if (!a0)
 return 4294967295;
 return *((int *)&(&a0->padding_0)[1]);
}


// Function: memop_memory_barrier at 0x4020e4
unsigned long long memop_memory_barrier(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 __sync_synchronize();
 return *(a0) * 2;
}


// Function: test_memory_op_functions at 0x402104
extern char __stack_chk_guard;
extern char g_4028d8;

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
 puts(&g_4028d8);
 v11 = 4702111234474983745;
 v12 = v11;
 __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
 __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
 strncpy(&v8, "HelloWor", 8);
 strncpy(v10, "rld", 3);
 memmove(&v9, &v8, 9);
 __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
 v3 = 3;
 v5 = 4;
 v2 = 8589934593;
 v4 = 8589934593;
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
 __sync_synchronize();
 if (v13 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v18 = __printf_chk(1, "MEMOP-L3-02: %d\n", v1 * 2);
 return __printf_chk(1, "MEMOP-L3-02: %d\n", v1 * 2);
}


// Function: sub_402288 at 0x402288
void sub_402288(unsigned long a0)
{
 extern_function();
 return;
}


// Function: extern_function at 0x402290
unsigned int extern_function(unsigned int a0)
{
 return a0 * 3;
}



/* CRT stub function _fini removed by preprocessor */


