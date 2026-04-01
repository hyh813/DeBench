// Angr Decompilation of 1_gcc_O1_g
// Platform: AARCH64

#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

// Helper function declarations
#define __ROL__(val, n) (((val) << (n)) | ((val) >> (32 - (n))))
extern int arm64g_calculate_condition(unsigned int cond, unsigned long long val1, unsigned long long val2, unsigned int flag);
extern void __stack_chk_fail(void);
extern void __longjmp_chk(jmp_buf env, int val);
extern int _setjmp(jmp_buf env);
extern void longjmp(jmp_buf env, int val);
extern void __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern void *memset(void *s, int c, size_t n);
extern void abort(void);
extern int vprintf(const char *format, va_list arg);
extern void exit(int status);

// Stub implementations for external functions
int arm64g_calculate_condition(unsigned int cond, unsigned long long val1, unsigned long long val2, unsigned int flag) {
    return 0;
}

// Stub for __printf_chk (glibc fortified printf)
void __printf_chk(int flag, const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

// Stub for __stack_chk_fail (stack protector)
void __stack_chk_fail(void) {
    abort();
}

// Stub for __longjmp_chk (checked longjmp)
void __longjmp_chk(jmp_buf env, int val) {
    longjmp(env, val);
}

// Global variable definitions
char __dollar_d[] = "";
unsigned long long __stack_chk_guard = 0;
typedef unsigned long long (*func_ptr_3args)(unsigned int, unsigned int, unsigned int);
typedef unsigned long long (*func_ptr_2args)(unsigned int, unsigned int);
unsigned long long g_413f78 = 0;
unsigned long long g_414018 = 0;
unsigned long long g_414020 = 0;

char g_4020e8[] = "";
jmp_buf jump_buffer;
unsigned long long (*g_414028)(unsigned int, unsigned int, unsigned int) = 0;
unsigned long long (*g_414038)(unsigned int, unsigned int, unsigned int) = 0;
unsigned long long (*g_414048)(unsigned int, unsigned int, unsigned int) = 0;
unsigned long long (*g_414058)(unsigned int, unsigned int, unsigned int) = 0;
unsigned long long (*g_414068)(unsigned int, unsigned int, unsigned int) = 0;
unsigned long long (*g_414078)(unsigned int, unsigned int) = 0;
unsigned long long (*g_414088)(unsigned int, unsigned int) = 0;
unsigned long long (*g_414098)(unsigned int, unsigned int) = 0;
unsigned long long (*g_4140a8)(unsigned int, unsigned int) = 0;
char g_402308[] = "";

/* CRT stub function _init removed by preprocessor */

// Forward declarations for CRT stub functions
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Stub implementations for CRT functions
void deregister_tm_clones(void) { }
void __do_global_dtors_aux(void) { }
void frame_dummy(void) { }

// Forward declaration for main
int main(void);

// Entry point _start (weak to avoid conflicts with CRT)
__attribute__((weak))
void _start(void) {
    exit(main());
}




// Function: sub_400954 at 0x400954
long long sub_400954()
{
 unsigned long long v0; // x0
 jmp_buf env;

 v0 = _setjmp(env);
 return v0;
}



// Function: sub_400a30 at 0x400a30
void sub_400a30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400a48 at 0x400a48
void sub_400a48()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400abc at 0x400abc
void sub_400abc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400b08 at 0x400b08
long long sub_400b08()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: recursion_factorial at 0x400b14
unsigned long long recursion_factorial(unsigned long a0)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if ((unsigned int)a0 <= 1)
 return 1;
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 return (a0 & 4294967295) * recursion_factorial((unsigned int)a0 - 1);
}


// Function: double_value at 0x400b4c
unsigned int double_value(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x400b54
unsigned int triple_value(unsigned int a0)
{
 return a0 * 3;
}


// Function: op_add at 0x400b5c
int op_add(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: op_sub at 0x400b64
int op_sub(unsigned int a0, unsigned int a1)
{
 return a0 - a1;
}


// Function: op_mul at 0x400b6c
int op_mul(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: op_div at 0x400b74
unsigned int op_div(unsigned long a0, unsigned int a1)
{
 if (a1)
 a1 = (a0 & 4294967295) / a1;
 return a1;
}


// Function: op_mod at 0x400b88
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w0

 v0 = a1;
 if (a1)
 v0 = a0 - v0 * a0 / a1;
 return v0;
}


// Function: op_and at 0x400ba0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
 return a0 & a1;
}


// Function: op_or at 0x400ba8
unsigned int op_or(unsigned int a0, unsigned int a1)
{
 return a0 | a1;
}


// Function: op_xor at 0x400bb0
int op_xor(unsigned int a0, unsigned int a1)
{
 return a0 ^ a1;
}


// Function: op_shl at 0x400bb8
int op_shl(unsigned int a0, char a1)
{
 return a0 << (a1 & 31);
}


// Function: op_shr at 0x400bc0
int op_shr(unsigned int a0, char a1)
{
 return a0 >> (a1 & 31);
}


// Function: state_idle at 0x400bc8
unsigned long long state_idle(unsigned int a0)
{
 if (a0 == 1)
 return 1;
 return 0;
}


// Function: state_processing at 0x400bd4
unsigned long long state_processing(unsigned long long a0)
{
 if ((unsigned int)a0 == 2)
 {
 return a0;
 }
 else if ((unsigned int)a0 == 99)
 {
 return 3;
 }
 else
 {
 return 1;
 }
}


// Function: state_done at 0x400bec
unsigned long long state_done()
{
 return 2;
}


// Function: state_error at 0x400bf4
unsigned long long state_error(unsigned int a0)
{
 if (a0)
 return 3;
 return a0;
}


// Function: sequential_ops at 0x400c04
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400c14
long long single_if(unsigned int a0)
{
 if (0 >= a0)
 return a0;
 return __ROL__(a0, 1) & 4294967294;
}


// Function: if_else at 0x400c24
unsigned long long if_else(unsigned int a0)
{
 if (a0 > 0)
 return 1;
 return 0;
}


// Function: nested_if_2 at 0x400c30
unsigned long long nested_if_2(unsigned int a0)
{
 unsigned int v0; // w1

 if (a0 <= 0)
 {
 return 0;
 }
 else if (0 < v0)
 {
 return a0 + v0 & 4294967295;
 }
 else
 {
 return a0;
 }
}


// Function: nested_if_deep at 0x400c50
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v0; // w0

 if (a0 <= 0)
 {
 return 0;
 }
 else if (a1 <= 0)
 {
 return 1;
 }
 else if (a2 <= 0)
 {
 return 2;
 }
 else if (a3 > 0)
 {
 if (a4 <= 0)
 v0 = 0;
 else
 v0 = 1;
 return v0 + 4;
 }
 else
 {
 return 3;
 }
}


// Function: if_elseif_chain at 0x400c9c
unsigned long long if_elseif_chain(unsigned int a0)
{
 if (!a0)
 {
 return 10;
 }
 else if (a0 == 1)
 {
 return 20;
 }
 else if (a0 == 2)
 {
 return 30;
 }
 else
 {
 return 4294967295;
 }
}


// Function: if_elseif_long at 0x400cc8
unsigned long long if_elseif_long(unsigned int a0)
{
 if (!a0)
 {
 return 100;
 }
 else if (a0 == 1)
 {
 return 200;
 }
 else if (a0 == 2)
 {
 return 300;
 }
 else if (a0 == 3)
 {
 return 400;
 }
 else if (a0 == 4)
 {
 return 500;
 }
 else
 {
 return 4294967295;
 }
}


// Function: switch_small at 0x400d14
unsigned long long switch_small(unsigned int a0)
{
 unsigned long long v0; // x0

 if (a0 == 2)
 {
 return 50;
 }
 else if ((char)arm64g_calculate_condition(195, (unsigned long long)a0, 2, 0))
 {
 if (a0 == 3)
 v0 = 2;
 else
 v0 = 4294967295;
 return v0;
 }
 else if (!a0)
 {
 return 15;
 }
 else if (a0 == 1)
 {
 return 5;
 }
 else
 {
 return 4294967295;
 }
}


// Function: switch_large at 0x400d54
unsigned long long switch_large(unsigned long long a0)
{
 unsigned int v0; // w1
 unsigned long long v1; // x0
 unsigned long long v2; // x0
 unsigned long long v3; // x0

 v0 = a0;
 if ((unsigned int)a0 == 5)
 {
 return 50;
 }
 else if (!((char)arm64g_calculate_condition(195, a0 & 4294967295, 5, 0)))
 {
 if ((unsigned int)a0 == 2)
 {
 return 20;
 }
 else if (!((char)arm64g_calculate_condition(211, a0 & 4294967295, 2, 0)))
 {
 if ((unsigned int)a0 != 3)
 v1 = 40;
 else
 v1 = 30;
 return v1;
 }
 else if (!(unsigned int)a0)
 {
 return a0;
 }
 else if ((unsigned int)a0 == 1)
 {
 return 10;
 }
 else
 {
 return 4294967295;
 }
 }
 else
 {
 if (v0 == 8)
 {
 return 80;
 }
 else if (!((char)arm64g_calculate_condition(211, (unsigned long long)v0, 8, 0)))
 {
 if (v0 == 9)
 v2 = 90;
 else
 v2 = 4294967295;
 return v2;
 }
 else if (v0 == 6)
 {
 return 60;
 }
 else
 {
 if (v0 == 7)
 v3 = 70;
 else
 v3 = 4294967295;
 return v3;
 }
 }
}


// Function: switch_default at 0x400de4
unsigned long long switch_default(unsigned int a0)
{
 if (a0 == 2)
 {
 return 200;
 }
 else if (a0 == 3)
 {
 return 300;
 }
 else if (a0 == 1)
 {
 return 100;
 }
 else
 {
 return 0;
 }
}


// Function: switch_fallthrough at 0x400e10
unsigned long long switch_fallthrough(unsigned long a0)
{
 unsigned long long v0; // x1
 unsigned int v1; // w1

 if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 != 3)
 {
 if ((unsigned int)a0 != 1)
 return 4294967295;
 v0 = 0;
 }
 else
 {
 v1 = 12;
LABEL_400e3c:
 v0 = v1 + (unsigned int)a0 * 2;
 }
 return v0 + a0;
 }
 v1 = 0;
 goto LABEL_400e3c;
}


// Function: loop_for_fixed at 0x400e50
unsigned long long loop_for_fixed(unsigned int i)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x0
 unsigned long long v2; // x0
 unsigned long long v3; // x1
 unsigned long long v4; // x0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v3 = v0;
 v4 = v1 + v3;
 v0 = (unsigned int)v3 + 1;
 v1 = v4;
 } while (i != (unsigned int)v0);
 return v2 + v3;
}


// Function: loop_while at 0x400e80
unsigned long long loop_while(unsigned int a0)
{
 unsigned int i; // w1
 unsigned int v1; // w0

 if (a0)
 {
 a0 = 0;
 do
 {
 a0 += 1;
 v1 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) - (a0 >> 31);
 a0 = v1;
 } while (i != a0 >> 31);
 }
 if (0 >= a0)
 return 1;
 return a0;
}


// Function: loop_dowhile at 0x400eb8
long long loop_dowhile(unsigned int a0)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int i; // w1
 unsigned int v3; // w0
 unsigned int v4; // w2

 v0 = 0;
 do
 {
 v3 = v0 + 1;
 v4 = (a0 * 1717986919 >> 63 & 0xc0000000 | (a0 * 1717986919 * 0x40000000 | a0 * 1717986919 >> 34) & 1073741823) - (a0 >> 31);
 a0 = v4;
 v0 = v3;
 } while (i != a0 >> 31);
 return v1 + 1;
}


// Function: loop_nested at 0x400ee0
unsigned long long loop_nested(unsigned int a0, unsigned int i)
{
 unsigned int v0; // w3
 unsigned long long v1; // x0
 unsigned long long v2; // x2

 v0 = 0;
 v1 = 0;
 if (0 >= a0)
 return 0;
 do
 {
 v2 = 0;
 if (0 < i)
 {
 do
 {
 v2 = (unsigned int)v2 + 1;
 } while (i != (unsigned int)v2);
 v1 += v2;
 }
 } while ((v0 += 1, a0 != v0));
 return v1;
}


// Function: loop_break at 0x400f24
unsigned long long loop_break(unsigned int i)
{
 char *v6; // x1
 unsigned long long v7; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp-0x20], Other Possible Types: unsigned long long
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v6 = &v1;
 v1 = 85899345930;
 v2 = 171798691870;
 v3 = 50;
 v7 = 0;
 while (*(v6) != i)
 {
 v6 += 1;
 if ((unsigned int)v7 + 1 == 5)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: loop_continue at 0x400fac
unsigned long long loop_continue(unsigned int a0)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x0

 if (a0 <= 0)
 return 0;
 v0 = 1;
 v1 = 0;
 do
 {
 if ((char)arm64g_calculate_condition(26, v0 & 1, 0, 0))
 v1 = v1 + v0 & 4294967295;
 else
 v1 &= 4294967295;
 } while ((v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != a0 + 1));
 return v1;
}


// Function: goto_forward at 0x400fe4
long long goto_forward(unsigned int a0)
{
 if (0 < a0)
 a0 *= a0;
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x400ff8
unsigned long long goto_backward(unsigned int a0)
{
 unsigned long long v0; // x1
 unsigned long long v1; // x0
 unsigned long long v2; // x0
 unsigned long long v3; // x1
 unsigned long long v4; // x0

 if (a0 <= 0)
 return 1;
 v0 = 1;
 v1 = 1;
 do
 {
 v3 = v0;
 v4 = v3 * v1;
 v0 = (unsigned int)v3 + 1;
 v1 = v4;
 } while ((unsigned int)v0 != a0 + 1);
 return v3 * v2;
}


// Function: ternary_op at 0x401028
long long ternary_op(unsigned int a0, unsigned int a1)
{
 if (a0 > a1)
 return a0;
 return a1;
}


// Function: test_control_flow_l1 at 0x401034
int test_control_flow_l1()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(__dollar_d);
 __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
 __printf_chk(1, "CF-L1-02 (single_if): %d\n", 4294967291);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
 __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
 __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
 __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
 __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
 __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
 __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
 __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
 __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
 __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
 __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10) & 4294967295);
 __printf_chk(1, "CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
 __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876) & 4294967295);
 __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4) & 4294967295);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
 __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(99) & 4294967295);
 __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", loop_continue(10) & 4294967295);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
 __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
 __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", goto_backward(5) & 4294967295);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
 __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
 return 0;
}


// Function: loop_multi_exit at 0x4012b4
unsigned long long loop_multi_exit(unsigned int a0)
{
 char *v6; // x2
 unsigned int v7; // w4
 unsigned long long v8; // x1
 char *v0; // [bp-0x50]
 char v1; // [bp-0x38], Other Possible Types: unsigned long long
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x18]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v6 = &v1;
 v1 = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 v3 = 950737950374086235976282144777;
 v7 = 0;
 while (true)
 {
 v8 = 0;
 do
 {
 if (*((int *)&v6[4 * v8]) == a0)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return (unsigned int)v8 + v7 * 10;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v8 += 1, v8 != 4));
 v7 += 1;
 v6 += 16;
 if (v7 == 3)
 {
 if (v4 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: infinite_loop at 0x401358
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


// Function: multi_return at 0x401384
unsigned long long multi_return(unsigned long a0)
{
 if (((char)(a0 >> 31) & 1))
 {
 return 4294967295;
 }
 else if (100 < (__ROL__((unsigned int)a0, 1) & 4294967294))
 {
 return 4294967294;
 }
 else if ((char)arm64g_calculate_condition(10, a0 & 4294967295 & 1, 0, 0))
 {
 return __ROL__((unsigned int)a0, 1) & 4294967294;
 }
 else
 {
 return (unsigned int)a0 + 1;
 }
}


// Function: conditional_return at 0x4013b4
unsigned int conditional_return(unsigned long a0)
{
 unsigned int v0; // w0

 if ((unsigned int)a0 > 0)
 return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 if ((char)arm64g_calculate_condition(163, a0 & 4294967295, 0, 0))
 v0 = 0;
 else
 v0 = -((unsigned int)a0);
 return v0;
}


// Function: duffs_device at 0x4013cc
unsigned long long duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2)
{
 unsigned int *cur; // x3
 unsigned long long v1; // x0
 unsigned int v2; // w2
 unsigned long v3; // x4

 cur = a0;
 v1 = a2;
 if (a2 <= 0)
 return 4294967295;
 v2 = ((char)arm64g_calculate_condition(65, v1 & 4294967295, 7, 0) ? a2 + 14 : (unsigned int)v1 + 7) >> 31 & 0xe0000000 | (((char)arm64g_calculate_condition(65, v1 & 4294967295, 7, 0) ? a2 + 14 : (unsigned int)v1 + 7) * 0x20000000 | ((char)arm64g_calculate_condition(65, v1 & 4294967295, 7, 0) ? a2 + 14 : (unsigned int)v1 + 7) >> 3) & 536870911;
 v3 = ((char)arm64g_calculate_condition(67, 0, v1 & 4294967295, 0) ? (unsigned int)v1 & 7 : -(-((unsigned int)v1) & 7));
 if ((unsigned int)v3 != 4)
 {
 if (!((char)arm64g_calculate_condition(195, v3 & 4294967295, 4, 0)))
 {
 if ((unsigned int)v3 != 2)
 {
 if (!((char)arm64g_calculate_condition(211, v3 & 4294967295, 2, 0)))
 {
 if ((unsigned int)v3 != 3)
 return v1;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(10, v1 & 7, 0, 0)) && (unsigned int)v3 != 1)
 return v1;
 }
 }
 }
 else
 {
 if ((unsigned int)v3 != 6 && (unsigned int)v3 != 7 && (unsigned int)v3 != 5)
 return v1;
 }
 }
 while (true)
 {
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 *(cur) = *(iter);
 v2 -= 1;
 if (v2 <= 0)
 break;
 iter += 1;
 cur += 1;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 iter += 1;
 *(cur) = *(iter);
 cur += 1;
 }
 return v1;
}


// Function: loop_complex_cond at 0x4014b0
int loop_complex_cond(unsigned long long a0)
{
 unsigned long long v0; // cc_op
 unsigned long long v1; // cc_dep1
 unsigned long long v2; // x2
 unsigned int v3; // w1
 unsigned long long v4; // cc_op
 unsigned long long v5; // cc_dep1
 unsigned long long v6; // cc_dep2

 v0 = 3;
 v1 = a0 & 4294967295;
 if ((unsigned int)a0 > 0)
 {
 v2 = 0;
 v3 = 0;
 while (true)
 {
 v3 += 2;
 a0 = (unsigned int)a0 - 1;
 v2 = (unsigned int)v2 + 1;
 if (v3 < (unsigned int)a0)
 {
 v4 = 3;
 v5 = ((char)arm64g_calculate_condition(v0 | 176, v1, 0, 0) ? v2 & 4294967295 : 0);
 v6 = ((char)arm64g_calculate_condition(v0 | 176, v1, 0, 0) ? 9 : 0);
 if (!((char)arm64g_calculate_condition(211, v5, v6, 0)))
 goto LABEL_4014d6;
 goto LABEL_4014d5;
 }
 else
 {
 v4 = 0;
 v5 = ((char)arm64g_calculate_condition(v0 | 176, v1, 0, 0) ? v2 & 4294967295 : 0);
 v6 = ((char)arm64g_calculate_condition(v0 | 176, v1, 0, 0) ? 9 : 0);
 if ((char)arm64g_calculate_condition(208, v5, v6, 0))
 {
LABEL_4014d5:
 v0 = 3;
 v1 = ((char)arm64g_calculate_condition(v4 | 208, v5, v6, 0) ? a0 & 4294967295 : 0x40000000);
 if (!((char)arm64g_calculate_condition(195, v1, 0, 0)))
 break;
 }
 else
 {
LABEL_4014d6:
 v0 = 0;
 v1 = ((char)arm64g_calculate_condition(v4 | 208, v5, v6, 0) ? a0 & 4294967295 : 0x40000000);
 if (!((char)arm64g_calculate_condition(192, v1, 0, 0)))
 break;
 }
 }
 }
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 return v3 + (unsigned int)a0 + (unsigned int)v2;
}


// Function: loop_modify_var at 0x4014f4
unsigned long long loop_modify_var(unsigned int a0)
{
 unsigned long long v0; // x0
 unsigned int v1; // w1
 unsigned long v2; // x2

 v0 = 0;
 v1 = 0;
 if (0 >= a0)
 return 0;
 while (true)
 {
 v2 = v1 + 1;
 if ((unsigned int)v2 >= a0)
 break;
 v0 += v2;
 if (5 < (unsigned int)v2)
 v1 += 3;
 else
 v1 = v2;
 }
 return v0;
}


// Function: loop_external_state at 0x40152c
unsigned long long loop_external_state(unsigned int *a0)
{
 unsigned long long v0; // x0

 v0 = 0;
 do
 {
 } while (!*(a0) && (v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != 101));
 return v0;
}


// Function: tail_recursion at 0x40154c
int tail_recursion(unsigned long a0, unsigned long long a1)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if ((unsigned int)a0 <= 1)
 return a1;
 v0 = &v2;
 v1 = v3;
 return tail_recursion((unsigned int)a0 - 1, a1 * a0);
}


// Function: indirect_recursion_a at 0x401578
long long indirect_recursion_a(unsigned long a0, unsigned int a1)
{
 unsigned long long v3; // x30
 unsigned long long v4; // x0
 unsigned long long v5; // x0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if (a1 <= 0)
 return a0;
 v0 = &v2;
 v1 = v3;
 if (((char)a0 & 1))
 {
 if (a1 > 1)
 {
 v4 = indirect_recursion_a((unsigned int)a0 * 3 + 2, a1 - 2);
 return indirect_recursion_a((unsigned int)a0 * 3 + 2, a1 - 2);
 }
 return (unsigned int)a0 * 3 + 1;
 }
 else
 {
 if (a1 <= 1)
 return (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647;
 v5 = indirect_recursion_a(((unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647) + 1, a1 - 2);
 return indirect_recursion_a(((unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | (((unsigned int)a0 + ((unsigned int)a0 >> 31)) * 0x80000000 | (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 1) & 2147483647) + 1, a1 - 2);
 }
}


// Function: call_func_ptr at 0x4015d8
int call_func_ptr(unsigned long long (*a0)(unsigned int), unsigned int a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return a0(a1);
}


// Function: call_func_ptr_array at 0x4015f4
unsigned long long call_func_ptr_array(unsigned int a0, unsigned int a1)
{
 unsigned long v6; // x3
 unsigned long long v7; // x0
 char *v0; // [bp-0x30]
 unsigned long v1; // [bp-0x20]
 unsigned long v2; // [bp-0x18]
 unsigned long v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v6 = a0;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = (unsigned long)__dollar_d;
 v2 = g_414018;
 v3 = g_414020;
 if (2 >= (unsigned int)v6)
 v7 = a1;
 else
 v7 = 4294967295;
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: call_virtual_func at 0x401674
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
 return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x40167c
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long (*a2)(unsigned int))
{
 unsigned long long v4; // x21
 unsigned long long v5; // x22
 unsigned long long v6; // x20
 unsigned int *i; // x19
 unsigned int *v8; // x19
 unsigned int *v9; // x19
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 if (a1 <= 0)
 return 0;
 v1 = v4;
 v2 = v5;
 v6 = 0;
 i = a0;
 do
 {
 v8 = i;
 v9 = v8 + 1;
 v6 += a2(*(v8));
 i = v9;
 } while (i != (char *)&a0[a1] + 3);
 return v6;
}


// Function: test_control_flow_l2 at 0x4016dc
unsigned long long test_control_flow_l2()
{
 char *v0; // [bp-0xa0]
 unsigned int result[1]; // [bp-0x68]
 unsigned int flag1[1]; // [bp-0x64]
 unsigned long long v3; // [bp-0x60]
 unsigned long long v4; // [bp-0x58]
 unsigned int v5; // [bp-0x50]
 unsigned long long v6; // [bp-0x48]
 unsigned long long v7; // [bp-0x38]
 char v8; // [bp-0x28]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 puts(g_4020e8);
 __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
 result[0] = 0;
 __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(result) & 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
 __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
 __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
 v6 = 316912650112397582603894390785;
 v7 = 633825300243241909290088267781;
 memset(&v8, 0, 32);
 __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device((unsigned int *)&v8, (unsigned int *)&v6, 8) & 4294967295);
 __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
 __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10) & 4294967295);
 flag1[0] = 0;
 __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state((unsigned int *)&flag1) & 4294967295);
 __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
 __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
 __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
 __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr((unsigned long long (*)(unsigned int))double_value, 5) & 4294967295);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5) & 4294967295);
 __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5) & 4294967295);
 v3 = 8589934593;
 v4 = 17179869187;
 v5 = 5;
 __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback((unsigned int *)&v3, 5, (unsigned long long (*)(unsigned int))double_value) & 4294967295);
 if (v9 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: non_local_jump at 0x401968
unsigned long long non_local_jump(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (_setjmp(jump_buffer))
 {
 return 4294967295;
 }
 else if (((char)(a0 >> 31) & 1))
 {
 __longjmp_chk(jump_buffer, 1); /* do not return */
 }
 else if (100 >= a0)
 {
 return __ROL__(a0, 1) & 4294967294;
 }
 else
 {
 __longjmp_chk(jump_buffer, 2); /* do not return */
 }
}


// Function: cpp_exception at 0x4019cc
unsigned long long cpp_exception(unsigned long a0)
{
 if (((char)(a0 >> 31) & 1))
 {
 return 4294967295;
 }
 else if (100 >= (unsigned int)a0)
 {
 return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
 }
 else
 {
 return 4294967294;
 }
}


// Function: large_jump_table at 0x4019f0
unsigned long long large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned long v8; // x5
 unsigned long long v9; // x0
 char *v0; // [bp-0x70]
 func_ptr_3args v1; // [bp-0x58]
 func_ptr_3args v2; // [bp-0x48]
 func_ptr_3args v3; // [bp-0x38]
 func_ptr_3args v4; // [bp-0x28]
 func_ptr_3args v5; // [bp-0x18]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v8 = a0;
 v6 = *((long long *)&__stack_chk_guard);
 v1 = g_414028;
 v2 = g_414038;
 v3 = g_414048;
 v4 = g_414058;
 v5 = g_414068;
 if (9 >= (unsigned int)v8)
 v9 = ((func_ptr_3args)(*((long long *)((char *)&v1 + 8 * (v8 & 4294967295)))))(a1, a2, a0);
 else
 v9 = 4294967295;
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v9;
}


// Function: conditional_func_ptr at 0x401a80
int conditional_func_ptr(unsigned int a0, unsigned long a1)
{
 unsigned int (*v2)(unsigned int); // x2
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (a0)
 {
 v2 = triple_value;
 if (a0 != 1)
 v2 = (unsigned int (*)(unsigned int))recursion_factorial;
 }
 else
 {
 v2 = double_value;
 }
 return v2(a1);
}


// Function: state_machine at 0x401ac4
unsigned long long state_machine(unsigned long long a0, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long long v1; // x0
 unsigned int v2; // w0
 unsigned int v4; // w0

 if (a1 == 2)
 {
 return a1;
 }
 else if ((char)arm64g_calculate_condition(195, (unsigned long long)a1, 2, 0))
 {
 if ((unsigned int)a0)
 v2 = a1;
 else
 v2 = a0;
 v4 = v2;
 if (a1 != 3)
 return 3;
 return v4;
 }
 else if (!a1)
 {
 if ((unsigned int)a0 != 1)
 v1 = 0;
 else
 v1 = 1;
 return v1;
 }
 else if (a1 != 1)
 {
 return 3;
 }
 else if ((unsigned int)a0 != 2)
 {
 if ((unsigned int)a0 != 99)
 v0 = a1;
 else
 v0 = 3;
 return v0;
 }
 else
 {
 return a0;
 }
}


// Function: fsm_func_table at 0x401b28
unsigned long long fsm_func_table(unsigned int a0, unsigned int a1)
{
 unsigned long long v5; // x0
 char *v0; // [bp-0x40]
 func_ptr_2args v1; // [bp-0x28]
 func_ptr_2args v2; // [bp-0x18]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v2 = g_414088;
 v1 = g_414078;
 v5 = 3;
 if (3 >= a1)
 v5 = ((func_ptr_2args)(*((long long *)((char *)&v1 + 8 * a1))))(a0, a1);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: computed_goto at 0x401ba4
unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
 unsigned long long v5; // x0
 char *v0; // [bp-0x40]
 func_ptr_2args v1; // [bp-0x28]
 func_ptr_2args v2; // [bp-0x18]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v2 = g_4140a8;
 v1 = g_414098;
 v5 = 3;
 if (3 >= a1)
 v5 = ((func_ptr_2args)(*((long long *)((char *)&v1 + 8 * a1))))(a0, a1);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: obfuscated_cf at 0x401c34
unsigned int obfuscated_cf(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: opaque_predicate at 0x401c3c
unsigned int opaque_predicate(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x401c44
unsigned int overlapped_code(unsigned long a0)
{
 if (!((char)arm64g_calculate_condition(10, a0 & 1, 0, 0)))
 return (unsigned int)a0 * 3 + 1;
 return (unsigned int)a0 + ((unsigned int)a0 >> 31) >> 31 & 0x80000000 | __ROL__((unsigned int)a0 + ((unsigned int)a0 >> 31), 31) & 2147483647;
}


// Function: test_control_flow_l3 at 0x401c5c
unsigned long long test_control_flow_l3()
{
 char *v0; // [bp-0x40]
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 puts(g_402308);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
 __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
 __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
 __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
 __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
 __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
 __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
 result = 0;
 flag1 = 1;
 v3 = 2;
 v4 = 3;
 __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(result, 2) & 4294967295);
 __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
 __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
 __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: main at 0x401e00
int main(void)
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


