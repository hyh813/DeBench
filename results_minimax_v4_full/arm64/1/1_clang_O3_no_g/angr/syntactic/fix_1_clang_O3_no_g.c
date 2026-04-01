// Angr Decompilation of 1_clang_O3_no_g
// Platform: AARCH64

#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

/* CRT stub function _init removed by preprocessor */

/* Define __ROL__ (rotate left) macro */
#define __ROL__(x, n) (((x) << ((n) & 31)) | ((x) >> (32 - ((n) & 31))))

/* Declare CRT stub functions */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Declare external functions from angr/Valgrind */
extern int arm64g_calculate_condition(int cond, unsigned long long rs, unsigned long long rt, unsigned long long rn);

/* Forward declaration for double_value */
unsigned long long double_value(unsigned int);

/* Forward declaration for triple_value */
unsigned int triple_value(unsigned int);

/* Forward declaration for recursion_factorial */
unsigned long long recursion_factorial(unsigned long);

/* Define external global variables */
unsigned int g_401a20[4] = {0, 1, 2, 3};
char g_401f85[] = "Test";
int g_40199c = 0;
int g_4019cc = 0;
char g_401fa9[] = "Test";
char g_401fcd[] = "Test";
jmp_buf __dollar_d_5;

/* Define function pointer - points to double_value */
unsigned long long (*g_412ff8)(unsigned int) = &double_value;

/* Stub for arm64g_calculate_condition */
int arm64g_calculate_condition(int cond, unsigned long long rs, unsigned long long rt, unsigned long long rn)
{
    return 0;
}



// Function: __dollar_x at 0x400880
long long __dollar_x(unsigned long long a0, unsigned long long a1)
{
 return g_412ff8((unsigned int)a0);
}


// Function: sub_400894 at 0x400894
int sub_400894()
{
 jmp_buf env;
 int v0; // x0

 v0 = _setjmp(env);
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400970 at 0x400970
void sub_400970()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400988 at 0x400988
void sub_400988()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {}




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4009fc at 0x4009fc
void sub_4009fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {}



// Function: sub_400a48 at 0x400a48
void sub_400a48()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {}



// Function: sequential_ops at 0x400a54
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400a64
long long single_if(unsigned int a0)
{
 char v0; // x8

 if (a0 <= 0)
 v0 = 0;
 else
 v0 = 1;
 return a0 << (v0 & 31);
}


// Function: if_else at 0x400a74
unsigned long long if_else(unsigned int a0)
{
 if (a0 > 0)
 return 1;
 return 0;
}


// Function: nested_if_2 at 0x400a80
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
 if (0 >= a0)
 return 0;
 return (a1 & ~(a1 >> 31)) + a0 & 4294967295;
}


// Function: nested_if_deep at 0x400a94
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 if (a0 < 1)
 {
 return 0;
 }
 else if (a1 < 1)
 {
 return 1;
 }
 else if (a2 < 1)
 {
 return 2;
 }
 else if (a3 < 1)
 {
 return 3;
 }
 else if (a4 <= 0)
 {
 return 4;
 }
 else
 {
 return 5;
 }
}


// Function: if_elseif_chain at 0x400ae4
unsigned long long if_elseif_chain(unsigned int a0)
{
 if (a0 >= 3)
 return 4294967295;
 return 10 * a0 + 10;
}


// Function: if_elseif_long at 0x400afc
unsigned long long if_elseif_long(unsigned int a0)
{
 if (a0 >= 5)
 return 4294967295;
 return 100 * a0 + 100;
}


// Function: switch_small at 0x400b14
extern unsigned int g_401a20[4];

unsigned long long switch_small(unsigned int a0)
{
 if (3 < a0)
 return 4294967295;
 return g_401a20[a0];
}


// Function: switch_large at 0x400b34
unsigned long long switch_large(unsigned int a0)
{
 if (a0 >= 10)
 return 4294967295;
 return __ROL__(a0 * 5, 1) & 4294967294;
}


// Function: switch_default at 0x400b48
unsigned long long switch_default(unsigned int a0)
{
 if (a0 - 1 >= 3)
 return 0;
 return 100 * (a0 - 1) + 100;
}


// Function: switch_fallthrough at 0x400b64
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned long long v0; // x8

 v0 = 0;
 if ((unsigned int)a0 != 1)
 {
 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 == 3)
 v0 = 12;
 else
 return 4294967295;
 }
 v0 = (unsigned int)v0 + (unsigned int)a0 * 2;
 }
 return v0 + a0;
}


// Function: loop_for_fixed at 0x400b98
unsigned long long loop_for_fixed(unsigned int a0)
{
 if (a0 < 1)
 return 0;
 return __ROL__((a0 - 1) * (a0 - 2), 63) + a0 - 1;
}


// Function: loop_while at 0x400bc0
unsigned long long loop_while(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0

 if (!a0)
 return 1;
 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) + (__ROL__(a0 * 1717986919, 1) & 1);
 v0 = v2;
 } while (18 < a0 + 9);
 return v1 + 1;
}


// Function: loop_dowhile at 0x400c04
long long loop_dowhile(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) + (__ROL__(a0 * 1717986919, 1) & 1);
 v0 = v2;
 } while (18 < a0 + 9);
 return v1 + 1;
}


// Function: loop_nested at 0x400c3c
unsigned long long loop_nested(unsigned long a0, unsigned long a1)
{
 unsigned long v0; // cc_op
 unsigned long v1; // cc_dep1
 unsigned long v2; // cc_dep2
 unsigned long v3; // cc_ndep
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep

 if (0 < (unsigned int)a1)
 {
 if (!((char)arm64g_calculate_condition(195, ((char)arm64g_calculate_condition(v0 | 192, v1, v2, v3) ? a0 & 4294967295 : 0x40000000), 0, 0)))
 return 0;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(192, ((char)arm64g_calculate_condition(v4 | 192, v5, v6, v7) ? a0 & 4294967295 : 0x40000000), 0, 0)))
 return 0;
 }
 return a0 * a1 & 4294967295;
}


// Function: loop_break at 0x400c50

unsigned long long loop_break(unsigned int a0)
{
 unsigned long long v0; // x0

 switch (a0)
 {
 case 20:
 return 1;
 case 30:
 return 2;
 case 40:
 return 3;
 case 50:
 v0 = 4;
 case 10:
 return v0;
 default:
 return 4294967295;
 }
}


// Function: loop_continue at 0x400ca0
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v0; // x8
 unsigned int j; // w9
 unsigned int v2; // w10
 unsigned int i; // w8

 if (a0 < 1)
 return 0;
 if (8 > a0)
 {
 v0 = 0;
 j = 1;
 }
 else
 {
 v2 = a0 & 0xfffffff8;
 j = v2 | 1;
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 if (v2 == a0)
 return 0;
 }
 do
 {
 v0 += (j & 1 & 4294967294 | j & 1) & j;
 j += 1;
 } while (a0 + 1 != j);
 return v0 & 4294967295;
}


// Function: goto_forward at 0x400d4c
long long goto_forward(unsigned int a0)
{
 unsigned int v0; // w8

 if (1 < a0)
 v0 = a0;
 else
 v0 = 1;
 return (v0 * a0 * 2 | v0 * a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x400d60
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v0; // x9
 unsigned long long v1; // x8
 unsigned int v2; // w10
 unsigned int i; // w8
 unsigned long v5; // d0
 unsigned int v6; // 324

 if (a0 < 1)
 return 1;
 if (8 > a0)
 {
 v0 = 1;
 v1 = 1;
 }
 else
 {
 v2 = a0 & 0xfffffff8;
 v0 = v2 | 1;
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = 0;
 v1 = v6 * v5;
 if (v2 == a0)
 return v6 * v5 & 4294967295;
 }
 do
 {
 v1 *= v0;
 v0 = (unsigned int)v0 + 1;
 } while (a0 + 1 != (unsigned int)v0);
 return v1 & 4294967295;
}


// Function: ternary_op at 0x400dfc
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x400e08
extern char g_401f85[];

int test_control_flow_l1()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401f85);
 printf("CF-L1-01 (sequential_ops): %d\n", 21);
 printf("CF-L1-02 (single_if): %d\n", 20);
 printf("CF-L1-02 (single_if): %d\n", 4294967291);
 printf("CF-L1-03 (if_else): %d\n", 1);
 printf("CF-L1-03 (if_else): %d\n", 0);
 printf("CF-L1-04 (nested_if_2): %d\n", 15);
 printf("CF-L1-04 (nested_if_2): %d\n", 10);
 printf("CF-L1-04 (nested_if_2): %d\n", 0);
 printf("CF-L1-05 (nested_if_deep): %d\n", 5);
 printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
 printf("CF-L1-07 (if_elseif_long): %d\n", 400);
 printf("CF-L1-08 (switch_small): %d\n", 50);
 printf("CF-L1-09 (switch_large): %d\n", 70);
 printf("CF-L1-10 (switch_default): %d\n", 0);
 printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
 printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
 printf("CF-L1-13 (loop_while): %d\n", 5);
 printf("CF-L1-14 (loop_dowhile): %d\n", 4);
 printf("CF-L1-15 (loop_nested): %d\n", 12);
 printf("CF-L1-16 (loop_break): %d\n", 2);
 printf("CF-L1-16 (loop_break): %d\n", 4294967295);
 printf("CF-L1-17 (loop_continue): %d\n", 25);
 printf("CF-L1-18 (goto_forward): %d\n", 50);
 printf("CF-L1-18 (goto_forward): %d\n", 4294967290);
 printf("CF-L1-19 (goto_backward): %d\n", 120);
 printf("CF-L1-20 (ternary_op): %d\n", 10);
 return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x400fd4
extern int g_40199c;
extern int g_4019cc;

unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned long v0; // x8
 unsigned long long v1; // x8

 v0 = a0 - 1;
 if (11 < (unsigned int)v0)
 return 4294967295;
 v1 = v0 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v0, 2) & 17179869180 & 17179869183;
 return (unsigned long long)g_4019cc + (unsigned long long)g_40199c;
}


// Function: infinite_loop at 0x40100c
unsigned long long infinite_loop(unsigned int *ptr)
{
 unsigned long long v0; // x0

 v0 = 0;
 while (*(ptr) != 1)
 {
 v0 = (unsigned int)v0 + 1;
 if ((unsigned int)v0 == 1001)
 {
 *(ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x401038
unsigned long long multi_return(unsigned long a0)
{
 unsigned int v0; // w9

 if (((char)(a0 >> 31) & 1))
 return 4294967295;
 if ((char)arm64g_calculate_condition(9, (unsigned long long)((unsigned int)a0 & 1), 0, 0))
 v0 = ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 else
 v0 = (unsigned int)a0 + 1;
 if (50 >= (unsigned int)a0)
 return v0;
 return 4294967294;
}


// Function: conditional_return at 0x401060
long long conditional_return(unsigned int a0)
{
 if (0 >= a0)
 return -(a0);
 return __ROL__(a0, 1) & 4294967294;
}


// Function: duffs_device at 0x401070

unsigned int duffs_device(unsigned int *cur, unsigned int *iter, unsigned int a2)
{
 unsigned int v0; // w8
 unsigned int *v1; // x1
 unsigned int *v4; // x1
 unsigned int *ptr; // x0

 switch (a2)
 {
 case 2:
 goto LABEL_4010e0;
 case 3:
 goto LABEL_4010d8;
 case 4:
 goto LABEL_4010d0;
 case 5:
 goto LABEL_4010c8;
 case 6:
 goto LABEL_4010c0;
 case 7:
 break;
 case 1:
 *(cur) = *(iter);
 cur += 1;
 v0 -= 1;
 v1 = iter + 1;
 if (v0 <= 1)
 return a2;
 case 0:
 do
 {
 v1 = &v1[1];
 *(cur) = v1[0];
 cur += 1;
 break;
 v1 += 1;
 *(cur) = *(v1);
 cur += 1;
LABEL_4010c0:
 v1 += 1;
 *(cur) = *(v1);
 cur += 1;
LABEL_4010c8:
 v1 += 1;
 *(cur) = *(v1);
 cur += 1;
LABEL_4010d0:
 v1 += 1;
 *(cur) = *(v1);
 cur += 1;
LABEL_4010d8:
 v1 += 1;
 *(cur) = *(v1);
 cur += 1;
LABEL_4010e0:
 v4 = v1 + 1;
 *(cur) = *(v1);
 ptr = cur + 1;
 v1 = &v4[1];
 v0 -= 1;
 ptr[0] = v4[0];
 cur = &ptr[1];
 } while (1 < v0);
 return a2;
 default:
 return 4294967295;
 }
}


// Function: loop_complex_cond at 0x401104
unsigned int loop_complex_cond(unsigned int a0)
{
 unsigned int v0; // w10
 unsigned int v1; // w8
 unsigned int v2; // w10
 unsigned int v3; // w0
 unsigned int v4; // w10

 if (a0 < 1)
 return a0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v0;
 v1 += 2;
 v3 = a0 - 1;
 } while (a0 >= 2 && v3 > v1 && (v4 = v2 + 1, v0 = v2 + 1, a0 = v3, v2 < 9));
 return v3 + v1 + v2 + 1;
}


// Function: loop_modify_var at 0x401160
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long v0; // x9
 unsigned long long v1; // x8
 unsigned long long v2; // x8
 unsigned long long v3; // x9
 unsigned int v4; // w10
 unsigned long long v5; // x8
 unsigned long v6; // x9

 if (a0 < 1)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v3 = v0;
 if (5 < (unsigned int)v3)
 v4 = (unsigned int)v3 + 2;
 else
 v4 = v3;
 } while ((v5 = v3 + v2, v6 = (unsigned long long)(v4 + 1), v0 = (unsigned long long)(v4 + 1), v1 = v3 + v2, (unsigned int)v0 < a0));
 return v3 + v2 & 4294967295;
}


// Function: loop_external_state at 0x4011a0
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v0; // x0

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != 101));
 return v0;
}


// Function: recursion_factorial at 0x4011c0
unsigned long long recursion_factorial(unsigned long a0)
{
 unsigned int v0; // w9
 unsigned long long v1; // x8
 unsigned long long v10; // x0
 unsigned long long v11; // x0
 unsigned int v2; // w9
 unsigned long long v3; // x0
 unsigned long v4; // x10
 unsigned int i; // w11
 unsigned long v7; // d0
 unsigned int v8; // 324
 unsigned long long v9; // x8

 if (2 > (unsigned int)a0)
 return 1;
 if ((char)arm64g_calculate_condition(51, a0 & 4294967295, 2, 0))
 v0 = 0;
 else
 v0 = (unsigned int)a0 - 2;
 v1 = a0 & 4294967295;
 v2 = v0 + 1;
 if (8 > v2)
 {
 v3 = 1;
 }
 else
 {
 v4 = v2 & 0xfffffff8;
 v1 -= v4;
 i = v4;
 do
 {
 i -= 8;
 } while (i != 8);
 v7 = 0;
 v3 = v8 * v7;
 if (v2 == (unsigned int)v4)
 return v8 * v7;
 }
 do
 {
 v9 = v1;
 v11 = v3 * v9;
 v3 = v11;
 v1 = (unsigned int)v9 - 1;
 } while (2 < (unsigned int)v9);
 return v10 * v9;
}


// Function: tail_recursion at 0x401268
int tail_recursion(unsigned long long a0, unsigned long long a1)
{
 unsigned int v0; // w8
 unsigned int v1; // w8
 unsigned long v2; // x9
 unsigned int i; // w10
 unsigned long v5; // d0
 unsigned int v6; // 324
 unsigned long long v7; // x1
 unsigned long long v8; // x0
 unsigned long long v9; // x1

 if ((unsigned int)a0 < 2)
 return a1;
 if ((char)arm64g_calculate_condition(51, a0 & 4294967295, 2, 0))
 v0 = 0;
 else
 v0 = (unsigned int)a0 - 2;
 v1 = v0 + 1;
 if (v1 >= 8)
 {
 v2 = v1 & 0xfffffff8;
 a0 -= v2;
 i = v2;
 do
 {
 i -= 8;
 } while (i != 8);
 v5 = 0;
 a1 = v6 * v5;
 if (v1 == (unsigned int)v2)
 return v6 * (unsigned int)v5;
 }
 do
 {
 v8 = a0;
 v9 = v8 * a1;
 a0 = (unsigned int)v8 - 1;
 a1 = v9;
 } while (2 < (unsigned int)v8);
 return (unsigned int)v8 * (unsigned int)v7;
}


// Function: indirect_recursion_a at 0x401304
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // w8
 unsigned int v1; // w9

 if (a1 < 1)
 return a0;
 v0 = a1 + 2;
 while (true)
 {
 if (!((char)a0 & 1))
 {
 if (0 <= (unsigned int)a0)
 v1 = a0;
 else
 v1 = (unsigned int)a0 + 1;
 if (v0 == 3)
 return v1 >> 31 & 0x80000000 | (v1 * 0x80000000 | v1 >> 1) & 2147483647;
 a0 = (v1 >> 31 & 0x80000000 | (v1 * 0x80000000 | v1 >> 1) & 2147483647) + 1;
 }
 else if (v0 != 3)
 {
 a0 = (unsigned int)a0 * 3 + 2;
 }
 else
 {
 return (unsigned int)a0 * 3 + 1;
 }
 v0 -= 2;
 if (v0 < 3)
 return a0;
 }
}


// Function: call_func_ptr at 0x40135c
int call_func_ptr(unsigned long a0, unsigned long a1)
{
 unsigned long long (*func_ptr)(unsigned long) = (unsigned long long (*)(unsigned long))a0;
 return func_ptr(a1);
}


// Function: call_func_ptr_array at 0x401368
unsigned long long call_func_ptr_array(unsigned int a0)
{
 switch (a0)
 {
 case 0:
 return 0;
 case 10:
 return 10;
 case 120:
 return 120;
 default:
 return 4294967295;
 }
}


// Function: double_value at 0x40138c
unsigned long long double_value(unsigned int a0)
{
 return (unsigned long long)((a0 * 2 | a0 >> 31) & 4294967294);
}


// Function: triple_value at 0x401394
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x40139c
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x4013a4
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int))
{
 unsigned long long v2; // x20
 unsigned long v3; // x22
 unsigned long long v4; // x20
 unsigned long i; // x22
 unsigned int *v6; // x21
 unsigned long long v7; // x0
 unsigned long v8; // x22
 unsigned long long v9; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a1 < 1)
 return 0;
 v2 = 0;
 v3 = a1;
 do
 {
 v4 = v2;
 i = v3;
 v6 = a0 + 1;
 v8 = i - 1;
 v9 = a2(*(a0)) + v4;
 v3 = v8;
 a0 = v6;
 v2 = v9;
 } while (i != 1);
 return v7 + v4 & 4294967295;
}


// Function: test_control_flow_l2 at 0x40140c
extern char g_401fa9[];

int test_control_flow_l2()
{
 unsigned long long v4; // x1
 unsigned int v5; // w21
 unsigned int v6; // w19
 unsigned int v7; // w8
 unsigned int v8; // w19
 unsigned long long v9; // x1
 char *v0; // [bp-0x30]
 unsigned int result; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 char v3; // [bp+0x0]

 v0 = &v3;
 puts(g_401fa9);
 printf("CF-L2-01 (loop_multi_exit): %d\n", 12);
 v4 = 0;
 v2 = 0;
 do
 {
 if (v2 == 1)
 goto LABEL_401460;
 } while ((v4 = (unsigned long long)((unsigned int)v4 + 1), (unsigned int)v4 != 1001));
 v2 = 1;
LABEL_401460:
 printf("CF-L2-02 (infinite_loop): %d\n", v4);
 v5 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v6 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 printf("CF-L2-05 (duffs_device): %d\n", 8);
 v7 = 11;
 do
 {
 v8 = v6 + 2;
 } while (v7 - 2 > v6 - 8 && (v5 += 1, v7 -= 1, v6 = v8, v5 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v9 = 0;
 result = 0;
 do
 {
 } while (!result && (v9 = (unsigned long long)((unsigned int)v9 + 1), (unsigned int)v9 != 101));
 printf("CF-L2-08 (loop_external_state): %d\n", v9);
 printf("CF-L2-09 (recursion_factorial): %d\n", 120);
 printf("CF-L2-10 (tail_recursion): %d\n", 120);
 printf("CF-L2-11 (indirect_recursion): %d\n", 3);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 120);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
}


// Function: non_local_jump at 0x4015bc
extern jmp_buf __dollar_d_5;

unsigned long long non_local_jump(unsigned int a0)
{
 unsigned long v2; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 if (_setjmp(__dollar_d_5))
 {
 return 4294967295;
 }
 else if (((char)(v2 >> 31) & 1))
 {
 longjmp(__dollar_d_5, 1); /* do not return */
 }
 else if (101 > (unsigned int)v2)
 {
 return ((unsigned int)v2 * 2 | (unsigned int)v2 >> 31) & 4294967294;
 }
 else
 {
 longjmp(__dollar_d_5, 2); /* do not return */
 }
}


// Function: cpp_exception at 0x401628
unsigned long long cpp_exception(unsigned int a0)
{
 unsigned int v0; // w8

 if (100 < a0)
 v0 = 4294967294;
 else
 v0 = __ROL__(a0, 1) & 4294967294;
 if (0 > a0)
 return 4294967295;
 return v0;
}


// Function: large_jump_table at 0x401644

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
 switch (a0)
 {
 case 0:
 break;
 default:
 return 4294967295;
 }
}


// Function: op_add at 0x40166c
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x401674
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x40167c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x401684
unsigned long long op_div(unsigned long a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return a0 / a1;
}


// Function: op_mod at 0x401698
unsigned long long op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 - a1 * a0 / a1;
}


// Function: op_and at 0x4016b0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x4016b8
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x4016c0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x4016c8
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x4016d0
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x4016d8
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned long long (*func_ptr)(unsigned long long); // function pointer

 if (a0 == 1)
 func_ptr = (unsigned long long (*)(unsigned long long))triple_value;
 else
 func_ptr = (unsigned long long (*)(unsigned long long))recursion_factorial;

 if (!a0)
 return double_value(a1);
 return func_ptr(a1);
}


// Function: state_machine at 0x401708

unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w8

 switch (a1)
 {
 case 0:
 if (a0 != 1)
 return 0;
 return 1;
 case 1:
 if (a0 == 99)
 v0 = 3;
 else
 v0 = 1;
 if (a0 != 2)
 return v0;
 return a0;
 case 2:
 return a1;
 case 3:
 if (!a0)
 return 0;
 return 3;
 default:
 a1 = 3;
 break;
 }
}


// Function: fsm_func_table at 0x40176c

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 break;
 default:
 return 3;
 }
}


// Function: state_idle at 0x40178c
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: state_processing at 0x401798
long long state_processing(unsigned int a0)
{
 unsigned int v0; // w8

 if (a0 == 99)
 v0 = 3;
 else
 v0 = 1;
 if (a0 != 2)
 return v0;
 return a0;
}


// Function: state_done at 0x4017b0
unsigned long long state_done()
{
 return 2;
}


// Function: state_error at 0x4017b8
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return 0;
}


// Function: computed_goto at 0x4017c8

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 switch (a1)
 {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 20;
 case 3:
 return 30;
 default:
 return 4294967295;
 }
}


// Function: obfuscated_cf at 0x401808
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: opaque_predicate at 0x401810
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x401818
long long overlapped_code(unsigned int a0)
{
 unsigned int v0; // w8
 unsigned int v2; // w8

 if (0 <= a0)
 v0 = a0;
 else
 v0 = a0 + 1;
 v2 = v0;
 if (!((char)arm64g_calculate_condition(9, (unsigned long long)(a0 & 1), 0, 0)))
 return a0 * 3 + 1;
 return v2 >> 31 & 0x80000000 | __ROL__(v2, 31) & 2147483647;
}


// Function: test_control_flow_l3 at 0x401834
extern char g_401fcd[];

int test_control_flow_l3()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401fcd);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(printf("CF-L3-06 (fsm_func_table): %d\n", 2), 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: main at 0x40192c
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


