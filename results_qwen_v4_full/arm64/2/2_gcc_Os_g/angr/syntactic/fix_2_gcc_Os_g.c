// Angr Decompilation of 2_gcc_Os_g
// Platform: AARCH64

#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

// Macro for rotate left
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

// Forward declarations
extern int __libc_start_main();
extern void __stack_chk_fail();
extern unsigned long long __multf3();
extern unsigned long long __addtf3(unsigned long long*);
extern unsigned long long __sfp_handle_exceptions();
extern int arm64g_calculate_condition(int, unsigned long long, unsigned long long, unsigned long long);
extern int arm64g_calculate_flag_c(unsigned long long, unsigned long long, unsigned long long, unsigned long long);
extern unsigned int Clz(unsigned long long);

// Stub implementations for ARM helper functions
int arm64g_calculate_condition(int cond, unsigned long long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2) {
    return 0;
}

int arm64g_calculate_flag_c(unsigned long long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long long cc_ndep) {
    return 0;
}

unsigned int Clz(unsigned long long x) {
    if (x == 0) return 64;
    unsigned int count = 0;
    while ((x & (1ULL << 63)) == 0) {
        count++;
        x <<= 1;
    }
    return count;
}
extern int __printf_chk(int, const char*, ...);
extern char *strncpy(char *dest, const char *src, unsigned long n);
extern void *memset(void *s, int c, unsigned long n);
extern int puts(const char*);
extern int test_data_types_l1();
extern unsigned long long test_array_types();
extern unsigned long long test_pointer_types();
extern unsigned long long test_composite_types();
extern void _start();
extern void abort();

extern void __do_global_dtors_aux();

unsigned long long vvar_785 = 0;
extern unsigned long long vvar_458;
extern unsigned int vvar_536;

// Struct definitions
typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
 struct struct_0 *field_8;
 struct struct_0 *field_10;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

// Function: __dollar_x at 0x4006d0
unsigned long long g_413f88 = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return ((long long (*)())g_413f88)();
}


// Function: sub_4006e4 at 0x4006e4
long long sub_4006e4()
{
 __libc_start_main(); /* do not return */
}


// Function: main at 0x400780
unsigned int main()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = test_data_types_l1();
 v3 = test_pointer_types();
 test_composite_types();
 return 0;
}


// Function: sub_4007a4 at 0x4007a4
void sub_4007a4(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4007f0 at 0x4007f0
void sub_4007f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */








/* CRT stub function register_tm_clones removed by preprocessor */











// Function: double_value at 0x4008d4
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: process_int at 0x4008dc
int process_int(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 1;
}


// Function: complex_callback at 0x4008e8
unsigned long long complex_callback(unsigned int *ptr, unsigned long long *a1)
{
 *(ptr) = *(ptr) + 10;
 if (*(a1))
 return 1;
 return 0;
}


// Function: process_char at 0x400904
unsigned long long process_char(unsigned int a0)
{
 unsigned long long v0; // x0

 v0 = a0 & 255;
 if (25 >= ((unsigned int)v0 - 65 & 255))
 v0 = (unsigned int)v0 + 32 & 255;
 return v0;
}


// Function: process_short at 0x400924
int process_short(unsigned int a0, unsigned int a1)
{
 return (a1 * 0x10000 >> 31 & 0xffff0000 | a1 & 65535) + (a0 & 65535);
}


// Function: process_long at 0x400930
unsigned long long process_long(unsigned long a0)
{
 return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x400938
long long process_ll(unsigned long a0)
{
 return a0 * a0;
}


// Function: process_float at 0x400940
long long process_float()
{
 unsigned long v0; // x0

 return v0;
}


// Function: process_double at 0x400950
long long process_double()
{
 return 0;
}


// Function: process_ld at 0x400964
unsigned long long __dollar_d[100] = {0};

long long process_ld()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __multf3();
 v2 = __addtf3(__dollar_d);
 return __addtf3(__dollar_d);
}


// Function: process_bool at 0x40098c
unsigned long long process_bool(unsigned int a0)
{
 if (0 >= a0)
 return 0;
 return ~(a0) & 1;
}


// Function: const_param at 0x4009a0
int const_param(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: volatile_access at 0x4009ac
unsigned int volatile_access(unsigned int *a0)
{
 return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4009bc
char g_402b24[] = "Data Types Test";

int test_data_types_l1()
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 puts(g_402b24);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
 __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
 __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
 __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
 __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
 __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
 __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 10000);
 __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 10000);
 __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n");
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
 __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
 v1 = 10;
 return __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", v1 * 2);
}


// Function: array_1d_stack at 0x400b0c
unsigned long long array_1d_stack(unsigned long ptr, unsigned int a1)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 >= a1)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + v2 * 4));
 v0 = v3;
 }
 return v1;
}


// Function: array_string at 0x400b34
int array_string(unsigned long a0)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x1
 unsigned long long v2; // x1

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 v0 = v2;
 } while (*((char *)(a0 - 1 + v0)));
 return v1;
}


// Function: array_2d_stack at 0x400b50
long long array_2d_stack(unsigned int *a0)
{
 unsigned long long v0; // x0
 unsigned int *ptr; // x1
 unsigned long long v2; // x0
 unsigned long v3; // x3
 unsigned long long v5; // x0

 v0 = 0;
 ptr = a0;
 do
 {
 v2 = v0;
 v5 = v2 + *(ptr);
 ptr += 11;
 v0 = v5;
 } while (ptr != a0 + 110);
 return v2 + v3;
}


// Function: array_3d at 0x400b70
unsigned long long array_3d(unsigned int *a0)
{
 unsigned long long v0; // x0
 unsigned int *i; // x1
 unsigned int *v2; // x1
 unsigned int *p; // x1
 unsigned int *ptr; // x1

 v0 = 0;
 i = a0;
 do
 {
 v2 = i;
 p = v2;
 do
 {
 ptr = p + 1;
 v0 = v0 + p[0] + ptr[4] + ptr[3] + ptr[2] + ptr[1];
 p = ptr;
 } while (p != v2 + 5);
 i = ptr;
 } while (a0 + 125 != i);
 return v0;
}


// Function: array_vla at 0x400bc0
unsigned long long array_vla(unsigned int a0, unsigned long ptr)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 >= a0)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + v2 * 4));
 v0 = v3;
 }
 return v1;
}


// Function: array_pointer at 0x400be8
unsigned long long array_pointer(unsigned long ptr, unsigned int a1)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 >= a1)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + 40 * v2));
 v0 = v3;
 }
 return v1;
}


// Function: pointer_array at 0x400c18
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
 unsigned long long i; // x2
 unsigned long long v1; // x0

 i = 0;
 if (a1 > 10)
 a1 = 10;
 for (v1 = 0; (unsigned int)i < a1; i += 1)
 {
 if (*((long long *)(a0 + i * 8)))
 v1 += *((int *)*((long long *)(a0 + i * 8)));
 }
 return v1;
}


// Function: array_complex_index at 0x400c54
unsigned long long array_complex_index(unsigned long a0, unsigned long a1, unsigned int a2, unsigned long a3, unsigned int a4)
{
 unsigned long v0; // cc_op
 unsigned long v1; // cc_dep1
 unsigned long v2; // cc_dep2
 unsigned long v3; // cc_ndep
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep

 if (0 <= ((unsigned int)a3 | a4))
 {
 if (!((char)arm64g_calculate_condition(163, ((char)arm64g_calculate_condition(v0 | 160, v1, v2, v3) ? a3 & 4294967295 : 0), ((char)arm64g_calculate_condition(v0 | 160, v1, v2, v3) ? a1 & 4294967295 : 0), 0)))
 goto LABEL_400c64;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(160, ((char)arm64g_calculate_condition(v4 | 160, v5, v6, v7) ? a3 & 4294967295 : 0), ((char)arm64g_calculate_condition(v4 | 160, v5, v6, v7) ? a1 & 4294967295 : 0), 0)))
 {
LABEL_400c64:
 if (a2 > a4)
 return *((int *)(a0 + ((unsigned int)a3 + a4 * (unsigned int)a1) * 4));
 }
 }
 return 4294967295;
}


// Function: array_oob at 0x400c80
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 > a1)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + v2 * 4));
 v0 = v3;
 }
 return v1;
}


// Function: test_array_types at 0x400ca8
extern unsigned long long __stack_chk_guard;
char g_402c8f[] = "Array Types Test";

unsigned long long test_array_types()
{
 unsigned int flag3; // w4
 unsigned int *ptr; // x1
 unsigned int v38; // w4
 unsigned int *p; // x1
 unsigned int v40; // w5
 unsigned long long index; // x0
 char *cur; // x3
 unsigned int i; // w2
 unsigned long long pos; // x1
 unsigned int v31; // w4
 unsigned int *v33; // x3
 unsigned int v34; // w5
 unsigned int flag2; // w5
 char *v0; // [bp-0x570]
 unsigned int v1; // [bp-0x534]
 unsigned int v2; // [bp-0x530]
 unsigned int v3; // [bp-0x52c]
 unsigned long long v4; // [bp-0x528]
 unsigned int v5; // [bp-0x520]
 unsigned long long v6; // [bp-0x518]
 unsigned long long v7; // [bp-0x510]
 unsigned int v8; // [bp-0x508]
 char *v9; // [bp-0x500]
 char *v10; // [bp-0x4f8]
 char *v11; // [bp-0x4f0]
 char v12; // [bp-0x4e8]
 unsigned long long flag1; // [bp-0x4b8]
 unsigned long v46; // [bp-0x4b0]
 char v14; // [bp-0x46c]
 unsigned int result; // [bp-0x460]
 unsigned int v16; // [bp-0x438]
 unsigned int v17; // [bp-0x410]
 unsigned int v18; // [bp-0x3e8]
 unsigned int v19; // [bp-0x3c0]
 unsigned int v20[100]; // [bp-0x398]
 unsigned int v21[126]; // [bp-0x208]
 char v22; // [bp-0x10]
 char v23[4]; // [bp-0xc]
 unsigned long v24; // [bp-0x8]
 char v25; // [bp+0x0]

 v0 = &v25;
 v24 = *((long long *)&__stack_chk_guard);
 puts(g_402c8f);
 v6 = 8589934593;
 v7 = 17179869187;
 v8 = 5;
 __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack((unsigned long)&v6, 5) & 4294967295);
 strncpy(v23, "hello", 5);
 __printf_chk(1, "ARR-L1-02 (array_string): %d\n", array_string((unsigned long)&v22) & 4294967295);
 cur = (char *)&v20;
 i = 0;
 do
 {
 pos = 0;
 do
 {
 if (i == (unsigned int)pos)
 v31 = pos;
 else
 v31 = 0;
 } while ((*((unsigned int *)&cur[4 * pos]) = v31, pos += 1, pos != 10));
 i += 1;
 cur += 40;
 } while (i != 10);
 __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(v20) & 4294967295);
 v33 = v21;
 v34 = 5;
 do
 {
 flag2 = v34;
 flag3 = 5;
 ptr = v33;
 do
 {
 ptr[0] = 1;
 ptr[1] = 1;
 v38 = flag3 - 1;
 ptr[2] = 1;
 ptr[3] = 1;
 p = ptr + 1;
 p[1] = 1;
 ptr = p;
 flag3 = v38;
 } while (flag3 != 1);
 v33 += 5;
 v40 = flag2 - 1;
 v34 = v40;
 } while (flag2 != 1);
 __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", array_3d(v21) & 4294967295);
 v4 = 85899345930;
 v5 = 30;
 __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, (unsigned long)&v4) & 4294967295);
 result = 0;
 v16 = 10;
 v17 = 20;
 v18 = 30;
 v19 = 40;
 __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer((unsigned long)&result, 5) & 4294967295);
 flag1 = 0;
 v1 = 10;
 v2 = 20;
 v3 = 30;
 memset(&v12, 0, 48);
 v9 = (char *)&v1;
 v10 = (char *)&v2;
 v11 = (char *)&v3;
 __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array((unsigned long)&v9, 3) & 4294967295);
 index = 0;
 do
 {
 *((unsigned int *)((char *)&v46 + 4 * index)) = index;
 index += 1;
 } while (index != 20);
 __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v14));
 if (v24 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_single at 0x400f14
int ptr_single(unsigned int *a0)
{
 return *(a0) + 10;
}


// Function: ptr_double at 0x400f20
int ptr_double(struct_0 **a0)
{
 return (*a0)->field_0 + 5;
}


// Function: ptr_triple at 0x400f30
extern int ptr_triple(struct_1 **a0);

int ptr_triple(struct_1 **a0)
{
 return (*a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x400f44
unsigned long long ptr_increment(unsigned long ptr, unsigned int a1)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 >= a1)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + v2 * 4));
 v0 = v3;
 }
 return v1;
}


// Function: ptr_offset at 0x400f6c
int ptr_offset(unsigned long a0, unsigned int a1)
{
 return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x400f74
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
 return ((a0 - a1) * 0x4000000000000000 | a0 - a1 >> 2) & 13835058059577131007 & 4294967295;
}


// Function: ptr_void at 0x400f80
unsigned long long ptr_void(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((char *)a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: ptr_const at 0x400fa4
unsigned int ptr_const(unsigned int *a0)
{
 return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x400fb0
int ptr_const_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) + 5;
 return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x400fc4
int ptr_func_simple(unsigned long a0, unsigned long a1)
{
 return ((int (*)(unsigned long))a0)(a1);
}


// Function: ptr_func_complex at 0x400fd0
extern unsigned long long __stack_chk_guard;

unsigned long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
 unsigned long long v5; // x0
 char *v0; // [bp-0x30]
 unsigned long v1; // [bp-0x18]
 unsigned long long result; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v1 = (unsigned long)"test";
 result = 0;
 v5 = ((unsigned long long (*)(unsigned long, void*, unsigned long long*, unsigned int))a0)(a1, &v1, a0, 0);
 if (v3 == *((long long *)&__stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: ptr_cast at 0x401030
int ptr_cast(unsigned int *a0)
{
 return *(a0);
}


// Function: opaque_handle_create at 0x401038
unsigned long long opaque_handle_create(unsigned long a0)
{
 return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: opaque_handle_op at 0x401040
unsigned int opaque_handle_op(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: test_pointer_types at 0x401048
extern unsigned long long __stack_chk_guard;
char g_402dab[] = "Pointer Types Test";

unsigned long long test_pointer_types()
{
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 char *v3; // [bp-0x30]
 struct_0 **v4; // [bp-0x28]
 unsigned long long v5; // [bp-0x20]
 unsigned long long v6; // [bp-0x18]
 unsigned int v7; // [bp-0x10]
 unsigned long v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 v8 = *((long long *)&__stack_chk_guard);
 puts(g_402dab);
 __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
 __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
 v1 = 5;
 v3 = (char *)&v1;
 v4 = (struct_0 **)&v3;
 __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple((struct_1 **)&v4) & 4294967295);
 v5 = 8589934593;
 v6 = 17179869187;
 v7 = 5;
 __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment((unsigned long)&v5, 5) & 4294967295);
 __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
 __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
 __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
 __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
 __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
 __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple((unsigned long)double_value, 5) & 4294967295);
 v2 = 5;
 __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex((unsigned long long *)complex_callback, (unsigned long)&v2) & 4294967295);
 __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
 __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
 if (v8 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: struct_simple at 0x401224
int struct_simple(unsigned int *a0)
{
 return *(a0) + a0[1] + a0[2];
}


// Function: struct_array at 0x401238
unsigned long long struct_array(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // w4
 unsigned long long v1; // x0
 unsigned int *ptr; // x2
 unsigned int *p; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 ptr = a0;
 if (v0 >= a1)
 break;
 v0 += 1;
 p = ptr + 1;
 v1 += ptr[0] + ptr[1] + p[1];
 a0 = p;
 }
 return v1;
}


// Function: struct_nested at 0x401270
int struct_nested(unsigned int *a0)
{
 return *(a0) + a0[3];
}


// Function: struct_deep at 0x401280
int struct_deep(unsigned int *a0)
{
 return a0[2] + a0[5];
}


// Function: struct_with_ptr at 0x401290
int struct_with_ptr(struct_0 *idx)
{
 unsigned int v0; // w0

 if (idx->field_8)
 v0 = idx->field_8->field_0;
 else
 v0 = 0;
 return idx->field_0 + v0;
}


// Function: struct_bitfields at 0x4012b0
int struct_bitfields(unsigned int *ptr)
{
 unsigned long v0; // x1

 v0 = *(ptr);
 return ((unsigned int)v0 & 1) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 1)) & 3) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 3)) & 7) + (((unsigned int)v0 * 0 | (unsigned int)(v0 >> 6)) & 1023);
}


// Function: union_type at 0x4012d4
long long union_type(void* a0, unsigned int a1)
{
 if (!a1)
 {
 return *((int *)a0);
 }
 else if (a1 == 1)
 {
 return *((int *)a0);
 }
 else
 {
 return *((char *)a0);
 }
}


// Function: union_array at 0x4012fc
unsigned long long union_array(unsigned long ptr, unsigned int a1)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 >= a1)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + v2 * 4));
 v0 = v3;
 }
 return v1;
}


// Function: enum_type at 0x401324
unsigned int enum_type(unsigned int a0)
{
 return 10 * a0;
}


// Function: enum_switch at 0x401330

unsigned long long enum_switch(unsigned long a0)
{
 if (3 < (unsigned int)a0)
 return 4294967197;
 return __dollar_d[20 + (a0 & 4294967295)];
}


// Function: struct_func_ptr at 0x401354
int struct_func_ptr(struct_0 *a0)
{
 return ((int (*)(void))a0->field_8)();
}


// Function: linked_list at 0x401364
unsigned long long linked_list(struct_0 *a0)
{
 unsigned long long v0; // x0
 struct_0 *ptr; // x1
 struct_0 *v2; // x1

 v0 = 0;
 while (true)
 {
 ptr = a0;
 if (!ptr)
 break;
 v2 = ptr->field_8;
 v0 += ptr->field_0;
 a0 = v2;
 }
 return v0;
}


// Function: doubly_linked_list at 0x401384
unsigned long long doubly_linked_list(struct_0 *a0)
{
 unsigned long long v0; // x0
 struct_0 *ptr; // x1
 struct_0 *v2; // x1

 v0 = 0;
 while (true)
 {
 ptr = a0;
 if (!ptr)
 break;
 v2 = ptr->field_8;
 v0 += ptr->field_0;
 a0 = v2;
 }
 return v0;
}


// Function: binary_tree_sum at 0x4013a4
int binary_tree_sum(struct_0 *a0)
{
 unsigned long long v2; // x20
 struct_0 *ptr; // x19
 unsigned long long v4; // x0
 struct_0 *v5; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = 0;
 while (true)
 {
 ptr = a0;
 if (!ptr)
 break;
 v4 = binary_tree_sum(ptr->field_8);
 v5 = ptr->field_10;
 v2 += v4 + ptr->field_0;
 a0 = v5;
 }
 return v2;
}


// Function: binary_tree at 0x4013e8
int binary_tree(void* a0)
{
 return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x4013ec
unsigned long long graph_traverse(struct_0 **p)
{
 unsigned long long index; // x1
 unsigned long long v1; // x0
 unsigned long v2; // x3
 unsigned long ptr; // x3
 unsigned long v4; // x3

 index = 0;
 for (v1 = 0; (unsigned int)index < (int)p[10]; index += 1)
 {
 v2 = (unsigned long)p[index];
 while (true)
 {
 ptr = v2;
 if (!ptr)
 break;
 v4 = *((long long *)(ptr + 8));
 v1 += *((int *)ptr);
 v2 = v4;
 }
 }
 return v1;
}


// Function: test_composite_types at 0x401428
extern unsigned long long __stack_chk_guard;
char g_402f44[] = "Composite Types Test";

unsigned long long test_composite_types()
{
 char *v0; // [bp-0x180]
 unsigned int *v1; // [bp-0x148]
 unsigned int v2; // [bp-0x140]
 unsigned long long flag1; // [bp-0x138]
 unsigned int v4; // [bp-0x130]
 char *v5; // [bp-0x128]
 unsigned int v6; // [bp-0x120]
 unsigned long long v7; // [bp-0x118]
 unsigned int result; // [bp-0x110]
 unsigned long long flag7; // [bp-0x108]
 unsigned int v10; // [bp-0x100]
 unsigned long long flag3; // [bp-0xf8]
 unsigned long long flag4; // [bp-0xf0]
 unsigned long long v13; // [bp-0xe8]
 unsigned int v14; // [bp-0xe0]
 unsigned long long v15; // [bp-0xd8]
 unsigned long long v16; // [bp-0xd0]
 unsigned long long v17; // [bp-0xc8]
 unsigned int v18; // [bp-0xc0]
 char *v19; // [bp-0xb8]
 char v20; // [bp-0xb0], Other Possible Types: unsigned int
 char *v21; // [bp-0xa8]
 char v22; // [bp-0xa0], Other Possible Types: unsigned int
 unsigned long long flag2; // [bp-0x98]
 unsigned int v24; // [bp-0x90]
 char *v25; // [bp-0x88]
 unsigned long long flag5; // [bp-0x80]
 char v27; // [bp-0x78], Other Possible Types: unsigned int
 unsigned long long flag6; // [bp-0x70]
 char *v29; // [bp-0x68]
 char *v30; // [bp-0x60]
 char v31; // [bp-0x58]
 unsigned int v32; // [bp-0x10]
 unsigned long v33; // [bp-0x8]
 char v34; // [bp+0x0]

 v0 = &v34;
 v33 = *((long long *)&__stack_chk_guard);
 puts(g_402f44);
 __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
 v15 = 4294967297;
 v16 = 8589934593;
 v17 = 8589934594;
 __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", struct_array((unsigned int *)&v15, 2) & 4294967295);
 __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
 __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
 v2 = 20;
 flag1 = 0;
 v4 = 10;
 v5 = (char *)&v2;
 __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr((struct_0 *)&v4) & 4294967295);
 *((unsigned long long *)v1) = *((unsigned long long *)v1) & 0xffffffffffff0000 & 18442240478377148415 | 6429;
 __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(v1) & 4294967295);
 __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
 v13 = 85899345930;
 v14 = 30;
 __printf_chk(1, "CMP-L2-08 (union_array): %d\n", union_array((unsigned long)&v13, 3) & 4294967295);
 __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
 __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
 v6 = 10;
 v7 = (unsigned long long)process_int;
 __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr((struct_0 *)&v6) & 4294967295);
 v19 = (char *)&v20;
 v21 = (char *)&v22;
 v18 = 10;
 v20 = 20;
 v22 = 30;
 flag2 = 0;
 __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", linked_list((struct_0 *)&v18) & 4294967295);
 v24 = 10;
 v25 = (char *)&v27;
 flag5 = 0;
 v27 = 20;
 flag6 = 0;
 v29 = (char *)&v24;
 __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list((struct_0 *)&v24) & 4294967295);
 v10 = 100;
 flag3 = 0;
 flag4 = 0;
 __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum((struct_0 *)&v10) & 4294967295);
 flag7 = 0;
 result = 1;
 memset(&v31, 0, 80);
 v30 = (char *)&result;
 v32 = 2;
 __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse((struct_0 **)&v30) & 4294967295);
 if (v33 == *((long long *)&__stack_chk_guard))
 return 0;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_4016e8 at 0x4016e8
void sub_4016e8()
{
 unsigned long long v0;
 __addtf3(&v0);
 return;
}


// Function: __addtf3 at 0x4016f0
unsigned long long g_400000 = 0x400000;
char g_800000 = 0x80;

unsigned long long __addtf3(unsigned long long* a0)
{
 unsigned long long v5; // x4
 unsigned long long v6; // x2
 unsigned long long flag6; // x7
 unsigned long long result; // x15
 unsigned int v16; // w14
 unsigned long long iter; // x2
 unsigned long long flag10; // x9
 unsigned long long v19; // x1
 unsigned long long flag9; // x11
 unsigned long long v21; // x0
 unsigned long v7; // x5
 char v23; // x4
 unsigned long long v24; // x1
 unsigned long long v25; // x0
 unsigned long long v26; // x0
 unsigned long long v27; // x9
 char v28; // x2
 unsigned long long v29; // x5
 unsigned long long v30; // x0
 unsigned long long cur; // x3
 unsigned long long v32; // x0
 unsigned long long v8; // x1
 unsigned long long flag8; // x4
 unsigned long long v34; // x9
 unsigned long long v35; // x1
 unsigned long long flag2; // x7
 unsigned long long flag3; // x6
 unsigned long long v38; // x6
 unsigned long long v39; // x0
 unsigned int flag4; // w4
 unsigned long long v41; // x9
 unsigned long long v42; // x2
 unsigned int v9; // fpcr
 unsigned long long v43; // x1
 unsigned long long v45; // x1
 unsigned int v46; // w1
 unsigned long v47; // x1
 unsigned int v48; // w0
 unsigned long long v50; // x0
 unsigned long long v51; // x3
 unsigned int v52; // w1
 unsigned long v10; // x16
 unsigned int v53; // w7
 char v54; // x1
 unsigned long long v55; // x1
 unsigned long long v56; // x9
 unsigned long long v57; // x0
 char v59; // x4
 unsigned long long v60; // x4
 unsigned long long v61; // x0
 unsigned long long v62; // x0
 unsigned long long v11; // x6
 char v63; // x2
 unsigned long long v64; // x5
 unsigned long long v65; // x0
 unsigned long long v66; // x0
 unsigned long long v67; // x1
 unsigned int v68; // w2
 unsigned long long v69; // x7
 unsigned long long flag1; // x7
 unsigned long long flag7; // x6
 unsigned long long flag11; // x1
 unsigned long long v12; // x0
 unsigned long long v73; // x4
 unsigned long long v74; // x1
 unsigned long long v75; // x1
 unsigned long long v76; // x1
 unsigned long v77; // x3
 unsigned long long v78; // x1
 unsigned int v80; // w2
 unsigned int v81; // w1
 unsigned long long v83; // x0
 unsigned long long flag5; // x8
 char *v0; // [bp-0x30]
 int v1; // [bp-0x20], Other Possible Types: char
 unsigned long long v2; // [bp-0x18]
 char v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v5 = *((long long *)&v1);
 v6 = v2;
 v7 = *((long long *)&vvar_785);
 v8 = *((long long *)&v3);
 v10 = v9;
 v11 = __ROL__(v6, 1) & 1;
 v12 = __ROL__(v8, 1) & 1;
 cur = (v6 * 8 | v6 >> 61) & 2251799813685240 & 2251799813685247 | v5 >> 61;
 flag5 = (v6 * 0x10000 | v6 >> 48) & 18446744073709518847 & 32767;
 flag6 = (v8 * 0x10000 | v8 >> 48) & 18446744073709518847 & 32767;
 result = __ROL__(v6, 1) & 1;
 v16 = (unsigned int)result & 255;
 cur = (v8 * 8 | v8 >> 61) & 2251799813685240 & 2251799813685247 | v7 >> 61;
 iter = flag5;
 flag10 = __ROL__(v5, 3) & 18446744073709551608;
 v19 = flag6;
 flag9 = __ROL__(v7, 3) & 18446744073709551608;
 if (result != v12)
 {
 result = v12;
 v21 = flag5 - flag6;
 if ((unsigned int)v21 > 0)
 {
 if (flag6)
 {
 cur |= 0x8000000000000;
 goto LABEL_401768;
 }
 if (cur || flag9)
 {
 v21 = (unsigned int)v21 - 1;
 if ((unsigned int)v21 != 1)
 {
LABEL_401768:
 if (iter == 32767)
 goto LABEL_401bb4;
 if (116 >= (unsigned int)v21)
 {
 if (63 >= (unsigned int)v21)
 {
 v23 = 64 - (unsigned int)v21;
 if (!flag9 << (v23 & 63))
 v24 = 0;
 else
 v24 = 1;
 v25 = cur << (v23 & 63) | flag9 >> ((char)v21 & 63) | v24;
 cur -= cur >> ((char)v21 & 63);
 }
 else
 {
 if ((unsigned int)v21 != 64)
 flag9 |= cur << ((char)(128 - (unsigned int)v21) & 63);
 if (!flag9)
 v26 = 0;
 else
 v26 = 1;
 v25 = v26 | cur >> ((char)((unsigned int)v21 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag9)
 v25 = 0;
 else
 v25 = 1;
 }
 v27 = flag10 - v25;
 cur -= arm64g_calculate_flag_c(4, flag10, v25, 0) ^ 1;
 goto LABEL_4017bc;
 }
 else
 {
 v27 = flag10 - flag9;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 goto LABEL_4017bc;
 }
 }
 v27 = flag10;
 if (flag5 == 32767 && (cur || flag10))
 {
LABEL_401a04:
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag10;
 goto LABEL_401a10;
 }
 }
 else if (!((char)arm64g_calculate_condition(3, v21 & 4294967295, 0, 0)))
 {
 if (!flag5)
 {
 if (cur || flag10)
 {
 v21 = ~((unsigned int)v21);
 if ((unsigned int)v21)
 goto LABEL_401c38;
 v27 = flag9 - flag10;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 iter = flag6;
 goto LABEL_4017bc;
 }
 if (flag6 != 32767)
 {
 v27 = flag9;
 iter = flag6;
 }
 else if (cur || flag9)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag9;
 goto LABEL_401a10;
 }
 else
 {
 goto LABEL_401cc4;
 }
 }
 else
 {
 v21 = -((unsigned int)v21);
 cur |= 0x8000000000000;
LABEL_401c38:
 if (v19 != 32767)
 {
 if (116 >= (unsigned int)v21)
 {
 if (63 >= (unsigned int)v21)
 {
 v28 = 64 - (unsigned int)v21;
 if (!flag10 << (v28 & 63))
 v29 = 0;
 else
 v29 = 1;
 v30 = cur << (v28 & 63) | flag10 >> ((char)v21 & 63) | v29;
 cur -= cur >> ((char)v21 & 63);
 }
 else
 {
 if ((unsigned int)v21 != 64)
 flag10 |= cur << ((char)(128 - (unsigned int)v21) & 63);
 if (!flag10)
 v32 = 0;
 else
 v32 = 1;
 v30 = v32 | cur >> ((char)((unsigned int)v21 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag10)
 v30 = 0;
 else
 v30 = 1;
 }
 v27 = flag9 - v30;
 cur -= arm64g_calculate_flag_c(4, flag9, v30, 0) ^ 1;
 iter = v19;
LABEL_4017bc:
 flag8 = cur & 2251799813685247;
 if ((cur >> 51 & 1))
 goto LABEL_4017c4;
 }
 else
 {
 if (!cur && !flag9)
 return v21;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 goto LABEL_401bd4;
 goto LABEL_401bd4;
 }
 }
 }
 else
 {
 if (!((char)arm64g_calculate_condition(26, flag5 + 1 & 32766, 0, 0)))
 {
 flag2 = cur | flag10;
 flag3 = cur | flag9;
 if (!flag5)
 {
 if (!flag2)
 {
 if (!flag3)
 goto LABEL_402030;
 v27 = flag9;
 goto LABEL_401f58;
 }
 v27 = flag10;
 if (!flag3)
 goto LABEL_401f58;
 v27 = flag10 - flag9;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 if (((char)(cur >> 51) & 1))
 {
 v27 = flag9 - flag10;
 cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 v38 = v27 | cur;
LABEL_40182c:
 if (!v38)
 goto LABEL_401980;
 goto LABEL_401830;
 }
 if (!v27 && !cur)
 {
LABEL_402030:
 v34 = 0;
 goto LABEL_40198c;
 }
 else
 {
 v39 = v27 & 7;
 flag4 = 1;
 goto LABEL_40183c;
 }
 }
 else
 {
 if (iter != 32767)
 {
 if (v19 != 32767)
 {
 if (!flag2)
 goto LABEL_401e98;
 goto LABEL_401e68;
 }
 }
 else
 {
 if (flag2)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 if (v19 != 32767)
 goto LABEL_401e68;
 }
 else if (v19 != 32767)
 {
LABEL_401e98:
 if (!flag3)
 goto LABEL_401e9c;
 goto LABEL_40215c;
 }
 }
 if (flag3)
 {
 if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
 v21 &= 4294967295;
 else
 v21 = 1;
 if (flag2)
 {
 v41 = __ROL__(cur, 61) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
LABEL_4020f8:
 v42 = v5 & 2305843009213693951 | v41;
 v43 = v35;
 if (((char)(v43 >> 47) & 1))
 {
 v43 = v35;
 if (!((char)(cur >> 50) & 1))
 {
 v42 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v43 = __ROL__(cur, 61) & 2305843009213693951;
 }
 }
 v45 = v43 * 8 | v42 >> 61;
 v35 = __ROL__(v45, 61) & 2305843009213693951;
 v34 = v42 & 2305843009213693951 | (v45 * 0x2000000000000000 | v45 >> 3) & 0xe000000000000000;
 goto LABEL_401bd4;
 }
 else
 {
LABEL_40215c:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 goto LABEL_401bd4;
 }
 }
 else if (flag2)
 {
LABEL_401e68:
 v41 = __ROL__(cur, 61) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 if (flag3)
 goto LABEL_4020f8;
 v34 = v5 & 2305843009213693951 | v41;
 goto LABEL_401bd4;
 }
 else
 {
LABEL_401e9c:
 v34 = 18446744073709551615;
 v21 = 1;
LABEL_401bdc:
 goto LABEL_401888;
 }
 }
 }
 else
 {
 v27 = flag10 - flag9;
 flag8 = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
 if (((char)(flag8 >> 51) & 1))
 {
 v27 = flag9 - flag10;
 flag8 = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
 goto LABEL_4017c4;
 }
 if (!v27 && !flag8)
 {
 v34 = 0;
 goto LABEL_40198c;
 }
 else
 {
 result = result;
LABEL_4017c4:
 if (flag8)
 {
 if (!flag8)
 v46 = 64;
 else
 v46 = Clz(flag8);
 v47 = v46 - 12;
LABEL_4017d0:
 v50 = v27 >> ((char)-((unsigned int)v47) & 63) | flag8 << ((char)v47 & 63);
 v27 <<= (char)v47 & 63;
 }
 else
 {
 if (!v27)
 v48 = 64;
 else
 v48 = Clz(v27);
 v47 = v48 + 52;
 if ((unsigned int)v47 <= 63)
 goto LABEL_4017d0;
 v50 = v27 << ((char)(v48 - 12) & 63);
 v27 = flag8;
 }
 v51 = v47 * 0x100000000 >> 63 & 0xffffffff00000000 | v47 & 4294967295;
 if (v51 >= iter)
 {
 v52 = v47 - iter;
 v53 = v52 + 1;
 if (63 >= v53)
 {
 v54 = 64 - v53;
 if (!v27 << (v54 & 63))
 v55 = 0;
 else
 v55 = 1;
 cur = v50 >> ((char)v53 & 63);
 v27 = v50 << (v54 & 63) | v27 >> ((char)v53 & 63) | v55;
 goto LABEL_401828;
 }
 else
 {
 if (v53 != 64)
 v27 |= v50 << ((char)(128 - v53) & 63);
 cur = 0;
 if (!v27)
 v56 = 0;
 else
 v56 = 1;
 v27 = v56 | v50 >> ((char)(v52 - 63) & 63);
 v38 = v27;
 goto LABEL_40182c;
 }
 }
 else
 {
 iter -= v51;
 cur = v50 & 18444492273895866367;
 }
 }
 }
 }
 }
 else
 {
 v21 = flag5 - flag6;
 if ((unsigned int)v21 <= 0)
 {
 if ((char)arm64g_calculate_condition(3, v21 & 4294967295, 0, 0))
 {
 v69 = flag5 + 1;
 if (!((char)arm64g_calculate_condition(26, v69 & 32766, 0, 0)))
 {
 flag1 = cur | flag10;
 if (!flag5)
 {
 flag7 = cur | flag9;
 if (flag1)
 {
 v27 = flag10;
 if (!flag7)
 goto LABEL_401f58;
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 if (!((char)(cur >> 51) & 1))
 {
LABEL_401828:
 v38 = v27 | cur;
 goto LABEL_40182c;
 }
 else
 {
 cur &= 18444492273895866367;
 v39 = v27 & 7;
 flag4 = 0;
 iter = 1;
 goto LABEL_40183c;
 }
 }
 else
 {
 if (!flag7)
 {
 v34 = 0;
 goto LABEL_40198c;
 }
 else
 {
 v27 = flag9;
LABEL_401f58:
 flag11 = 0;
 iter = 0;
 goto LABEL_401f60;
 }
 }
 }
 else
 {
 if (iter != 32767)
 {
 if (v19 != 32767)
 {
 if (flag1)
 goto LABEL_402188;
 goto LABEL_401fe0;
 }
 if (cur || flag9)
 goto LABEL_40224c;
 if (!flag1)
 return v21;
 goto LABEL_402220;
 }
 else
 {
 if (flag1)
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 if (v19 != 32767)
 {
LABEL_402188:
 if (cur || flag9)
 goto LABEL_402190;
 }
 else
 {
 if (cur || flag9)
 goto LABEL_40224c;
 }
LABEL_402220:
 v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 goto LABEL_401bd4;
 }
 else
 {
 if (v19 != 32767)
 goto LABEL_401fe0;
 if (!cur && !flag9)
 return v21;
LABEL_40224c:
 if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
 v21 &= 4294967295;
 else
 v21 = 1;
 if (!flag1)
 {
LABEL_401fe0:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 goto LABEL_401bd4;
 }
 else
 {
LABEL_402190:
 v73 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v74 = __ROL__(cur, 61) & 2305843009213693951;
 if (((char)(cur >> 50) & 1) && !((char)(cur >> 50) & 1))
 {
 v73 = v7 & 2305843009213693951 | cur * 0x2000000000000000;
 v74 = __ROL__(cur, 61) & 2305843009213693951;
 }
 v75 = v74 * 8 | v73 >> 61;
 v34 = v73 & 2305843009213693951 | (v75 * 0x2000000000000000 | v75 >> 3) & 0xe000000000000000;
 v35 = __ROL__(v75, 61) & 2305843009213693951;
 goto LABEL_401bd4;
 }
 }
 }
 }
 }
 else
 {
 if (v69 != 32767)
 {
 v76 = flag10 + flag9;
 v77 = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 flag4 = 0;
 v39 = (v76 * 0x8000000000000000 | v76 >> 1) & 9223372036854775815 & 7;
 cur = __ROL__(v77, 63) & 9223372036854775807;
 v27 = v77 * 0x8000000000000000 | v76 >> 1;
 iter = v69;
 }
 else
 {
 v67 = v10 & 0xc00000;
 if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
 {
LABEL_401f84:
 goto LABEL_402230;
 }
 if (v67 != &g_400000)
 v80 = 0;
 else
 v80 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v80 & (v16 ^ 1)), 0, 0))
 {
LABEL_402230:
 v1 = 0;
 v83 = __sfp_handle_exceptions();
 return __sfp_handle_exceptions();
 }
 if (v67 == &g_800000)
 {
 if (!result)
 goto LABEL_4021cc;
 goto LABEL_402098;
 }
LABEL_401ef4:
 v21 = 20;
 if (v67 == &g_400000)
 {
 cur = 18446744073709551615;
 iter = 32766;
 v27 = 18446744073709551615;
 flag4 = 0;
 v21 = 20;
 if (!result)
 {
LABEL_401b64:
 v27 += 8;
 if (!((char)arm64g_calculate_condition(50, v27, 8, 0)))
 cur += 1;
 }
LABEL_401b6c:
 flag11 = cur & 0x8000000000000;
 if (flag4)
 {
 v21 = (unsigned int)v21 | 8;
 goto LABEL_401868;
 }
 }
LABEL_401a38:
 switch (v67)
 {
 case 0:
LABEL_401a70:
 break;
 case 4194304:
 if (!result)
 goto LABEL_401a70;
LABEL_401a54:
 v34 = 18446744073709551615;
 v21 = (unsigned int)v21 | 20;
 goto LABEL_40198c;
 case 8388608:
 v81 = 1;
LABEL_401a4c:
 if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v81 & (unsigned int)result), 0, 0)))
 goto LABEL_401a54;
 break;
 default:
 v81 = 0;
 goto LABEL_401a4c;
 }
 goto LABEL_40198c;
 }
LABEL_40183c:
 if (!v39)
 {
 flag11 = cur & 0x8000000000000;
 v21 = 0;
 if (flag4)
 {
LABEL_401f60:
 v21 = 0;
 if (((char)(v10 >> 11) & 1))
 v21 = 8;
 }
LABEL_401868:
 if (flag11)
 goto LABEL_40186c;
 goto LABEL_401a18;
 }
 switch (v78)
 {
 case 4194304:
 v21 = 16;
 if (!result)
 goto LABEL_401b64;
 break;
 case 8388608:
 v21 = 16;
 if (result)
 goto LABEL_401b64;
 break;
 case 0:
 v21 = 16;
 if (((char)v27 & 15) != 4)
 {
 if (!((char)arm64g_calculate_condition(50, v27, 4, 0)))
 cur += 1;
 v27 += 4;
 break;
 }
 break;
 default:
 flag11 = cur & 0x8000000000000;
 v21 = 16;
 if (flag4)
 {
 v21 = 24;
 goto LABEL_401868;
 }
 }
 goto LABEL_401b6c;
 }
 }
 if (flag5)
 {
 v21 = -((unsigned int)v21);
 cur |= 0x8000000000000;
 goto LABEL_401ad0;
 }
 if (cur || flag10)
 {
 v21 = ~((unsigned int)v21);
 if ((unsigned int)v21)
 {
LABEL_401ad0:
 if (v19 != 32767)
 {
 if (116 >= (unsigned int)v21)
 {
 if (63 >= (unsigned int)v21)
 {
 v63 = 64 - (unsigned int)v21;
 if (!flag10 << (v63 & 63))
 v64 = 0;
 else
 v64 = 1;
 v65 = cur << (v63 & 63) | flag10 >> ((char)v21 & 63) | v64;
 cur += cur >> ((char)v21 & 63);
 }
 else
 {
 if ((unsigned int)v21 != 64)
 flag10 |= cur << ((char)(128 - (unsigned int)v21) & 63);
 if (!flag10)
 v66 = 0;
 else
 v66 = 1;
 v65 = v66 | cur >> ((char)((unsigned int)v21 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag10)
 v65 = 0;
 else
 v65 = 1;
 }
 v27 = v65 + flag9;
 if ((char)arm64g_calculate_condition(50, v65, flag9, 0))
 {
 iter = v19;
 goto LABEL_401b28;
 }
 else
 {
 cur += 1;
 iter = v19;
 goto LABEL_401b28;
 }
 }
 else
 {
 if (!cur && !flag9)
 return (unsigned long long)v21;
 v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 goto LABEL_401bd4;
 }
 }
 else
 {
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 iter = flag6;
LABEL_401b28:
 if (((char)(cur >> 51) & 1))
 {
 iter += 1;
 if (iter != 32767)
 {
 flag4 = 0;
 v27 = v27 & 1 | v27 >> 1 | cur * 0x8000000000000000;
 cur = __ROL__(cur & 18444492273895866367, 63) & 9223372036854775807;
 v39 = v27 & 7;
 goto LABEL_40183c;
 }
 else
 {
 v67 = v10 & 0xc00000;
 if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
 goto LABEL_401f84;
 if (v67 != &g_400000)
 v68 = 0;
 else
 v68 = 1;
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v68 & (v16 ^ 1)), 0, 0))
 goto LABEL_402230;
 if (v67 != &g_800000)
 goto LABEL_401ef4;
 if (result)
 {
LABEL_402098:
 goto LABEL_402230;
 }
 else
 {
LABEL_4021cc:
 cur = 18446744073709551615;
 v27 = 18446744073709551615;
 iter = 32766;
 v21 = 20;
LABEL_40186c:
 if (iter + 1 != 32767)
 {
 v34 = cur * 0x2000000000000000 | v27 >> 3;
 }
 else
 {
 v67 = v10 & 0xc00000;
 goto LABEL_401a38;
 }
 }
LABEL_401888:
 if ((unsigned int)v21)
 {
 *((unsigned long long *)&v1) = v34;
 v83 = __sfp_handle_exceptions();
 return __sfp_handle_exceptions();
 }
 return v21;
 }
 }
 }
 }
 else
 {
 if (flag6 != 32767)
 {
 v27 = flag9;
 iter = flag6;
 }
 else
 {
 if (!cur && !flag9)
 {
LABEL_401cc4:
 v34 = 0;
 v35 = 0;
 v21 = 0;
 }
 else
 {
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 v27 = flag9;
LABEL_401a10:
 iter = 32767;
LABEL_401a18:
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v34 = cur * 0x2000000000000000 | v27 >> 3;
 if (iter != 32767)
 {
LABEL_40198c:
 goto LABEL_401888;
 }
 }
LABEL_401bd4:
 if (v35 || v34)
 goto LABEL_401bdc;
 v34 = 0;
 goto LABEL_401888;
 }
 }
 }
 else if (flag6)
 {
 cur |= 0x8000000000000;
 v57 = v21;
 if (flag5 != 32767)
 goto LABEL_401900;
LABEL_401bb4:
 if (!cur && !flag10)
 return v21;
 v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
 v35 = __ROL__(cur, 61) & 2305843009213693951;
 v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
 goto LABEL_401bd4;
 }
 else
 {
 if (cur || flag9)
 {
 if ((unsigned int)v21 != 1)
 {
 v57 = (unsigned int)v21 - 1;
 if (flag5 == 32767)
 {
 if (!cur && !flag10)
 return cur | flag10;
 goto LABEL_401a04;
 }
LABEL_401900:
 if (116 >= (unsigned int)v57)
 {
 if (63 >= (unsigned int)v57)
 {
 v59 = 64 - (unsigned int)v57;
 if (!flag9 << (v59 & 63))
 v60 = 0;
 else
 v60 = 1;
 v61 = cur << (v59 & 63) | flag9 >> ((char)v57 & 63) | v60;
 cur += cur >> ((char)v57 & 63);
 }
 else
 {
 if ((unsigned int)v57 != 64)
 flag9 |= cur << ((char)(128 - (unsigned int)v57) & 63);
 if (!flag9)
 v62 = 0;
 else
 v62 = 1;
 v61 = v62 | cur >> ((char)((unsigned int)v57 - 64) & 63);
 }
 }
 else
 {
 if (!cur && !flag9)
 v61 = 0;
 else
 v61 = 1;
 }
LABEL_401ce0:
 v27 = v61 + flag10;
 if (!((char)arm64g_calculate_condition(50, v61, flag10, 0)))
 cur += 1;
 goto LABEL_401ce0;
 }
 else
 {
 v27 = flag10 + flag9;
 cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
 goto LABEL_401b28;
 }
 }
 v27 = flag10;
 if (flag5 == 32767 && (cur || flag10))
 {
 v21 = (unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1;
 v27 = flag10;
 goto LABEL_401a10;
 }
 }
 }
 v39 = v27 & 7;
 flag4 = 0;
 if (!iter)
 {
 if (v27 || cur)
 {
LABEL_401830:
 v39 = v27 & 7;
 iter = 0;
 flag4 = 1;
 goto LABEL_40183c;
 }
 else
 {
LABEL_401980:
 v34 = 0;
 v21 = 0;
 goto LABEL_40198c;
 }
 }
}


// Function: sub_402284 at 0x402284
void sub_402284()
{
 __multf3();
 return;
}


// Function: __multf3 at 0x402290

unsigned long long __multf3()
{
 unsigned long long v8; // x1
 unsigned long long v9; // x0
 unsigned long long v17; // x3
 unsigned long long v98; // x7
 unsigned long long iter; // x12
 unsigned long long v18; // x8
 unsigned long long v19; // x17
 unsigned long long v20; // x1
 unsigned int flag1; // w0
 unsigned long long v22; // x8
 unsigned long long v23; // x8
 unsigned long long v24; // x0
 unsigned long long v25; // x3
 unsigned long long v26; // x0
 char v27; // x8
 unsigned long long v28; // x4
 char v29; // x16
 unsigned long long v30; // x5
 unsigned int flag5; // w13
 unsigned long long v10; // x2
 unsigned int v11; // fpcr
 unsigned long v12; // x6
 unsigned long long result; // x9
 char v15; // x15
 unsigned int flag6; // w3
 char *v0; // [bp-0x50]
 char v4; // [bp-0x20]
 unsigned long long v5; // [bp-0x18]
 char v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v8 = *((long long *)&v4);
 v9 = v5;
 v98 = *((long long *)&vvar_458);
 v10 = *((long long *)&v6);
 v12 = v11;
 result = v9 & 281474976710655;
 v15 = (char)(__ROL__(v9, 1)) & 1;
 flag6 = ((unsigned int)v9 * 0x10000 | (unsigned int)(v9 >> 48)) & 4294934527 & 32767;
 switch (flag6)
 {
 case 0:
 v23 = v8 | result;
 if (v23)
 {
 if (result)
 {
 if (!result)
 v24 = 64;
 else
 v24 = Clz(result);
 v25 = v24 - 15;
LABEL_4026e8:
 v27 = (char)v25 + 3;
 result = v8 >> ((char)(61 - v25) & 63) | result << (v27 & 63);
 v18 = v8 << (v27 & 63);
 }
 else
 {
 if (!v8)
 v26 = 64;
 else
 v26 = Clz(v8);
 v25 = v26 + 49;
 v24 = v26 + 64;
 if (v25 <= 60)
 goto LABEL_4026e8;
 v18 = 0;
 result = v8 << ((char)((unsigned int)v25 - 61) & 63);
 }
 v20 = 0;
 v17 = 18446744073709535249 - v24;
 v19 = 0;
 flag1 = 0;
 break;
 }
 else
 {
 result = 0;
 v20 = 4;
 v17 = 0;
 v19 = 1;
 flag1 = 0;
 v18 = v23;
 break;
 }
 case 32767:
 v22 = v8 | result;
 if (!v22)
 {
 result = 0;
 v20 = 8;
 v17 = 32767;
 v19 = 2;
 flag1 = 0;
 v18 = v22;
 break;
 }
 else
 {
 v20 = 12;
 flag1 = ((unsigned int)(__ROL__(result, 17)) & 131071 ^ 1) & 1;
 v17 = 32767;
 v19 = 3;
 v18 = v8;
 break;
 }
 default:
 result = result * 8 | v8 >> 61 | 0x8000000000000;
 v17 = (flag6 & 65535) + 18446744073709535233;
 v18 = __ROL__(v8, 3) & 18446744073709551608;
 v19 = 0;
 v20 = 0;
 flag1 = 0;
 break;
 }
 v28 = __ROL__(v10, 1) & 1;
 iter = v10 & 281474976710655;
 v29 = v28;
 v30 = v28;
 flag5 = ((unsigned int)v10 * 0x10000 | (unsigned int)(v10 >> 48)) & 4294934527 & 32767;
 return 0;
}


// Function: __sfp_handle_exceptions at 0x402a90
unsigned long long __sfp_handle_exceptions()
{
 unsigned long long v0; // qcflag

 return 0;
}



/* CRT stub function _fini removed by preprocessor */


