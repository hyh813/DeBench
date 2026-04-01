// Angr Decompilation of 1_clang_O1_g
// Platform: AARCH64

#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/* Helper macros and functions */
#define __ROL__(value, shift) (((value) << (shift)) | ((value) >> (32 - (shift))))

static inline int arm64g_calculate_condition(int cond, unsigned long long arg1, unsigned long long arg2, unsigned long long arg3)
{
    switch (cond) {
        case 9:  /* NE/NotEqual */
            return arg1 != 0;
        case 36: /* VS/OverflowSet */
            return (int)arg1 < (int)arg2;
        default:
            return 0;
    }
}

/* Forward declarations for CRT stub functions */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* CRT stub function _init removed by preprocessor */
void _init(void) {
    return;
}

int main(void);

/* CRT stub function _start - program entry point */
void _start(void) {
    int ret = main();
    _Exit(ret);
}

/* External CRT function declarations - functions defined below */

/* Additional function prototypes */
unsigned int recursion_factorial_uint(unsigned int a0);
unsigned int double_value(unsigned int a0);
unsigned int triple_value(unsigned int a0);

/* Global data definitions */
unsigned int __dollar_d_5[4] = {10, 20, 30, 40};
char g_401e71[] = "Testing Control Flow Level 1";
char g_4018ec[16] = {0};
unsigned long long g_4018f0[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
unsigned int __dollar_d_1[8] = {0, 1, 2, 3, 4, 5, 6, 7};
void *g_401028 = (void *)0x401028;
unsigned int g_401b78[5] = {0, 1, 2, 3, 4};
char g_401e95[] = "Testing Control Flow Level 2";
jmp_buf __dollar_d_4;
char g_401eb9[] = "Testing Control Flow Level 3";




// Function: sub_400894 at 0x400894
int sub_400894()
{
 int v0; // x0
 jmp_buf jb;

 v0 = setjmp(jb);
 return setjmp(jb);
}



// Function: sub_400970 at 0x400970
void sub_400970()
{
 _Exit(1); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */
void call_weak_fn(void) {
    return;
}



// Function: sub_400988 at 0x400988
void sub_400988()
{
 (void)deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {
    return;
}




/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void) {
    return;
}



// Function: sub_4009fc at 0x4009fc
void sub_4009fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {
    return;
}



// Function: sub_400a48 at 0x400a48
long long sub_400a48()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {
    return;
}



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

unsigned long long switch_small(unsigned int a0)
{
 if (3 < a0)
 return 4294967295;
 return __dollar_d_5[a0];
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
 unsigned int result; // w8

 result = 0;
 if (a0)
 {
 do
 {
 result += 1;
 a0 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) + (__ROL__(a0 * 1717986919, 1) & 1);
 } while (18 < a0 + 9);
 }
 if (!result)
 return 1;
 return result;
}


// Function: loop_dowhile at 0x400c00
long long loop_dowhile(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v2; // w0

 v0 = 0;
 do
 {
 v2 = v0 + 1;
 a0 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) + (__ROL__(a0 * 1717986919, 1) & 1);
 v0 = v2;
 } while (18 < a0 + 9);
 return v0 + 1;
}


// Function: loop_nested at 0x400c38
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x8

 if (0 < a1)
 v0 = a1;
 else
 v0 = 0;
 if (0 >= (unsigned int)a0)
 return 0;
 return a0 * v0 & 4294967295;
}


// Function: loop_break at 0x400c50
unsigned long long loop_break(unsigned int i)
{
 unsigned long long v0; // x0

 v0 = 0;
 while (g_401b78[v0] != i)
 {
 v0 += 1;
 if (v0 == 5)
 return 4294967295;
 }
 return v0;
}


// Function: loop_continue at 0x400c80
unsigned long long loop_continue(unsigned int i)
{
 unsigned int v0; // w9
 unsigned long long v1; // x8
 unsigned long long v2; // x8
 unsigned long long v3; // x8

 if (i < 1)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v0 += 1;
 v3 = ((v0 & 1 & 4294967294 | v0 & 1) & v0) + v1;
 v1 = v3;
 } while (i != v0);
 return ((v0 & 1 & 4294967294 | v0 & 1) & v0) + v2 & 4294967295;
}


// Function: goto_forward at 0x400cbc
long long goto_forward(unsigned int a0)
{
 unsigned int v0; // w8

 if (1 < a0)
 v0 = a0;
 else
 v0 = 1;
 return (v0 * a0 * 2 | v0 * a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x400cd0
unsigned long long goto_backward(unsigned int i)
{
 unsigned long long v0; // x9
 unsigned long long v1; // x0
 unsigned long long v3; // x0

 if (i < 1)
 return 1;
 v0 = 0;
 v1 = 1;
 do
 {
 v0 = (unsigned int)v0 + 1;
 v3 = v1 * v0;
 v1 = v3;
 } while (i != (unsigned int)v0);
 return v1 * v0;
}


// Function: ternary_op at 0x400d00
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a1 >= a0)
 return a1;
 return a0;
}


// Function: test_control_flow_l1 at 0x400d0c
int test_control_flow_l1()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401e71);
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


// Function: loop_multi_exit at 0x400edc
unsigned long long loop_multi_exit(unsigned int a0)
{
 unsigned long long v0; // x8
 unsigned long long v1; // x10
 unsigned int v2; // w12
 unsigned long long v3; // x14
 unsigned int result; // w13
 unsigned long long v5; // x14
 unsigned long long v6; // x14
 unsigned int v7; // w14
 unsigned int flag1; // w13

 v0 = 0;
 v1 = (unsigned long long)&g_4018f0;
 do
 {
 if (*((int *)&(&g_4018ec)[__ROL__(v0, 4) & 0xfffffffffffffff0]) == a0)
 {
 v3 = 0;
 result = 1;
 }
 else
 {
 v5 = 0;
 do
 {
 v6 = v5;
 if (v6 == 3)
 {
 if ((char)arm64g_calculate_condition(36, v6, 3, 0))
 flag1 = 0;
 else
 flag1 = 1;
 v7 = 5;
 if (flag1)
 goto LABEL_400f68;
 }
 } while ((v3 = v6 + 1, v5 = v3, *((int *)(v1 + v6 * 4)) != a0));
 if (3 <= v3 - 1)
 result = 0;
 else
 result = 1;
 }
 v2 = (unsigned int)v3 + 10 * (unsigned int)v0;
 v7 = 1;
 if (result)
 goto LABEL_400f68;
 } while ((v0 += 1, v1 += 16, v0 != 3));
 v7 = 2;
LABEL_400f68:
 if (v7 == 2)
 return 4294967295;
 return v2;
}


// Function: infinite_loop at 0x400f74
unsigned long long infinite_loop(unsigned long ptr)
{
 unsigned long long v0; // x0

 v0 = 0;
 while (*((int *)ptr) != 1)
 {
 v0 = (unsigned int)v0 + 1;
 if ((unsigned int)v0 == 1001)
 {
 *((unsigned int *)ptr) = 1;
 return v0;
 }
 }
 return v0;
}


// Function: multi_return at 0x400fa0
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


// Function: conditional_return at 0x400fc8
long long conditional_return(unsigned int a0)
{
 if (0 >= a0)
 return -(a0);
 return __ROL__(a0, 1) & 4294967294;
}


// Function: duffs_device at 0x400fd8

unsigned int duffs_device(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned int v0; // w8
 unsigned int count;

 if ((unsigned int)a2 < 1)
 return 4294967295;
 v0 = (unsigned int)a2 + 7;
 if ((unsigned int)a2 >= 0)
 v0 = a2;
 if (7 < (unsigned int)(a2 - (v0 & 0xfffffff8)))
 return a2;
 
 /* Replaced computed goto with switch for portability */
 count = a2;
 switch (__dollar_d_1[(a2 - 1) & 7]) {
 case 0: do { *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 7:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 6:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 5:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 4:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 3:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 2:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 case 1:      *((char *)a1) = *((char *)a0); a0++; a1++; count--;
 } while (count > 0);
 }
 return a2;
}


// Function: loop_complex_cond at 0x40107c
int loop_complex_cond(unsigned int cur)
{
 unsigned int v0; // w10
 unsigned int v1; // w8
 unsigned int v2; // w10
 unsigned int v3; // w9

 if (cur >= 1)
 {
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += 2;
 cur -= 1;
 v3 = v0 + 1;
 } while (cur >= 2 && cur > v1 && (v0 = v3, cur = cur, v2 < 9));
 }
 else
 {
 v1 = 0;
 v3 = 0;
 }
 return cur + v1 + v3;
}


// Function: loop_modify_var at 0x4010d0
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


// Function: loop_external_state at 0x401110
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v0; // x0

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != 101));
 return v0;
}


// Function: recursion_factorial at 0x401130
unsigned long long recursion_factorial(unsigned long a0)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if (2 <= (unsigned int)a0)
 {
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 return (a0 & 4294967295) * recursion_factorial((unsigned int)a0 - 1);
 }
 return 1;
}

/* Wrapper for compatibility with function pointers expecting unsigned int */
unsigned int recursion_factorial_uint(unsigned int a0)
{
 return (unsigned int)recursion_factorial(a0);
}


// Function: tail_recursion at 0x401168
int tail_recursion(unsigned long long a0, unsigned long a1)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if ((unsigned int)a0 < 2)
 return a1;
 v0 = &v2;
 v1 = v3;
 return tail_recursion((unsigned int)a0 - 1, a0 * a1);
}


// Function: indirect_recursion_a at 0x401194
long long indirect_recursion_a(unsigned long a0, unsigned int a1)
{
 unsigned int v3; // w8
 unsigned long long v4; // x0
 unsigned long long v5; // x30
 unsigned long long v6; // x0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a1 < 1)
 return a0;
 if (!((char)a0 & 1))
 {
 if (0 <= (unsigned int)a0)
 v3 = a0;
 else
 v3 = (unsigned int)a0 + 1;
 if (a1 < 2)
 return v3 >> 31 & 0x80000000 | (v3 * 0x80000000 | v3 >> 1) & 2147483647;
 v4 = (v3 >> 31 & 0x80000000 | (v3 * 0x80000000 | v3 >> 1) & 2147483647) + 1;
 }
 else
 {
 if (2 > a1)
 return (unsigned int)a0 * 3 + 1;
 v4 = (unsigned int)a0 * 3 + 2;
 }
 v0 = &v2;
 v1 = v5;
 return indirect_recursion_a(v4, a1 - 2);
}


// Function: call_func_ptr at 0x4011ec
int call_func_ptr(int (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (*a0)(a1);
}


// Function: call_func_ptr_array at 0x401208

unsigned long long call_func_ptr_array(unsigned long a0, unsigned int a1)
{
 switch ((unsigned int)a0)
 {
 case 0:
 return 0;
 case 1:
 return 10;
 case 2:
 return 120;
 default:
 return 4294967295;
 }
}


// Function: double_value at 0x40123c
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x401244
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: call_virtual_func at 0x40124c
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x401254
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned int (*a2)(unsigned int))
{
 unsigned long long v2; // x20
 unsigned long v3; // x22
 unsigned int *v4; // x21
 unsigned long v7; // x22
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a1 < 1)
 return 0;
 v2 = 0;
 v3 = a1;
 do
 {
 v4 = a0;
 v7 = v3 - 1;
 v2 += a2(*v4);
 v3 = v7;
 a0 = v4 + 1;
 } while (v7 > 0);
 return v2;
}


// Function: test_control_flow_l2 at 0x4012ac
int test_control_flow_l2()
{
 unsigned long long v4; // x8
 unsigned long long v5; // x9
 unsigned int flag1; // w13
 unsigned long v14; // x1
 unsigned long long v15; // x1
 unsigned int v16; // w21
 unsigned int v17; // w19
 unsigned int v18; // w8
 unsigned int v19; // w19
 unsigned long long v20; // x1
 unsigned long long v6; // x10
 unsigned int v7; // w11
 unsigned long long v8; // x12
 unsigned long long v9; // x12
 unsigned long long v10; // x12
 unsigned int flag2; // w13
 unsigned int v12; // w12
 char *v0; // [bp-0x30]
 unsigned int result; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 char v3; // [bp+0x0]

 v0 = &v3;
 puts(g_401e95);
 v4 = 0;
 v5 = 0;
 v14 = 0;
 v6 = (unsigned long long)&g_4018f0;
 while (true)
 {
 v8 = 0;
 do
 {
 v9 = v8;
 if (v9 == 3)
 {
 if ((char)arm64g_calculate_condition(36, v9, 3, 0))
 flag1 = 0;
 else
 flag1 = 1;
 v12 = 5;
 if (flag1)
 goto LABEL_401334;
 goto LABEL_40131c;
 }
 } while ((v10 = v9 + 1, v8 = v10, *((int *)(v6 + v9 * 4)) != 7));
 v7 = v10 - v4;
 if (3 <= v10 - 1)
 flag2 = 0;
 else
 flag2 = 1;
 v12 = 1;
 if (flag2)
 goto LABEL_401334;
LABEL_40131c:
 v5 += 1;
 v4 -= 10;
 v6 += 16;
 if (v5 == 3)
 {
 v12 = 2;
LABEL_401334:
 if (v12 != 2)
 v14 = v7;
 else
 v14 = 4294967295;
 printf("CF-L2-01 (loop_multi_exit): %d\n", v14);
 v15 = 0;
 v2 = 0;
 do
 {
 if (v2 == 1)
 goto LABEL_401370;
 } while ((v15 = (unsigned long long)((unsigned int)v15 + 1), (unsigned int)v15 != 1001));
 v2 = 1;
LABEL_401370:
 printf("CF-L2-02 (infinite_loop): %d\n", v15);
 v16 = 4294967295;
 printf("CF-L2-03 (multi_return): %d\n", 4294967295);
 printf("CF-L2-03 (multi_return): %d\n", 4294967294);
 printf("CF-L2-03 (multi_return): %d\n", 4);
 v17 = 10;
 printf("CF-L2-04 (conditional_return): %d\n", 10);
 printf("CF-L2-04 (conditional_return): %d\n", 5);
 v18 = 11;
 do
 {
 v19 = v17 + 2;
 } while (v18 - 2 > v17 - 8 && (v16 += 1, v18 -= 1, v17 = v19, v16 < 9));
 printf("CF-L2-06 (loop_complex_cond): %d\n", v19);
 printf("CF-L2-07 (loop_modify_var): %d\n", 30);
 v20 = 0;
 result = 0;
 do
 {
 } while (!result && (v20 = (unsigned long long)((unsigned int)v20 + 1), (unsigned int)v20 != 101));
 printf("CF-L2-08 (loop_external_state): %d\n", v20);
 printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
 printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
 printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
 printf("CF-L2-12 (call_func_ptr): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
 printf("CF-L2-13 (call_func_ptr_array): %d\n", recursion_factorial(5) & 4294967295);
 return printf("CF-L2-15 (process_with_callback): %d\n", 30);
 }
 }
}


// Function: non_local_jump at 0x4014f8

unsigned long long non_local_jump(unsigned int a0)
{
 unsigned long v2; // x19
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 if (setjmp(__dollar_d_4))
 {
 return 4294967295;
 }
 else if (((char)(v2 >> 31) & 1))
 {
 longjmp(__dollar_d_4, 1); /* do not return */
 }
 else if (101 > (unsigned int)v2)
 {
 return ((unsigned int)v2 * 2 | (unsigned int)v2 >> 31) & 4294967294;
 }
 else
 {
 longjmp(__dollar_d_4, 2); /* do not return */
 }
}


// Function: cpp_exception at 0x40155c
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


// Function: large_jump_table at 0x401578

unsigned long long large_jump_table(unsigned long a0, unsigned int a1, unsigned int a2)
{
 switch ((unsigned int)a0)
 {
 case 0:
 return 0;
 case 1:
 return 15;
 case 2:
 return 30;
 default:
 return 4294967295;
 }
}


// Function: op_add at 0x4015b0
int op_add(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: op_sub at 0x4015b8
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x4015c0
int op_mul(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: op_div at 0x4015c8
unsigned long long op_div(unsigned long a0, unsigned long a1)
{
 if (!(unsigned int)a1)
 return 0;
 return a0 / a1;
}


// Function: op_mod at 0x4015dc
unsigned long long op_mod(unsigned int a0, unsigned int a1)
{
 if (!a1)
 return 0;
 return a0 - a1 * a0 / a1;
}


// Function: op_and at 0x4015f4
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a1 & a0;
}


// Function: op_or at 0x4015fc
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a1 | a0;
}


// Function: op_xor at 0x401604
int op_xor(unsigned int a0, unsigned int a1)
{
 return a1 ^ a0;
}


// Function: op_shl at 0x40160c
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x401614
int op_shr(unsigned int a0, int a1)
{
 return a0 >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x40161c
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned int (*v2)(unsigned int); // x8
 unsigned long long v3; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = recursion_factorial_uint;
 if (a0 == 1)
 v2 = triple_value;
 if (!a0)
 v2 = double_value;
 v3 = v2(a1);
 return v2(a1);
}


// Function: state_machine at 0x40165c

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
 return 3;
 }
}


// Function: fsm_func_table at 0x4016c0

unsigned long long fsm_func_table(unsigned long a0, unsigned long a1)
{
 switch ((unsigned int)a1)
 {
 case 0:
 return 0;
 case 1:
 return 1;
 case 2:
 return 2;
 default:
 return 3;
 }
}


// Function: state_idle at 0x4016f0
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: state_processing at 0x4016fc
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


// Function: state_done at 0x401714
unsigned long long state_done()
{
 return 2;
}


// Function: state_error at 0x40171c
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return 0;
}


// Function: computed_goto at 0x40172c

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


// Function: obfuscated_cf at 0x40176c
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: opaque_predicate at 0x401774
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x40177c
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


// Function: test_control_flow_l3 at 0x401798
int test_control_flow_l3()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401eb9);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 printf("CF-L3-02 (cpp_exception): %d\n", 10);
 printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
 printf("CF-L3-03 (large_jump_table): %d\n", 15);
 printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
 printf("CF-L3-05 (state_machine): %d\n", 1);
 printf("CF-L3-06 (fsm_func_table): %d\n", 2);
 printf("CF-L3-07 (computed_goto): %d\n", computed_goto(0, 2) & 4294967295);
 printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
 printf("CF-L3-09 (opaque_predicate): %d\n", 10);
 return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: main at 0x401894
int main()
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
void _fini(void) {
    return;
}



