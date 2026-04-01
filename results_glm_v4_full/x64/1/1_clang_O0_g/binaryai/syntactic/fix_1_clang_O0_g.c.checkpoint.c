/* Auto-injected type definitions by preprocessor */
#ifndef __ASSEMBLER__
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
/* uint64_t, int64_t, size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t, intmax_t, uintmax_t defined by system headers */
#endif

/* Standard headers */
#include <stdio.h>
#include <string.h>
#include <setjmp.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>

/* Additional type definitions */
typedef uint32_t uint;
typedef uint8_t byte;

/* Structure for 16-byte array returns */
typedef struct {
    uint _0_4_;
    uint _4_4_;
    unsigned long long _8_8_;
} array16_t;

/* Structure definitions */
typedef struct __jmp_buf_tag __jmp_buf_tag;

/* External function declarations */
extern int __gmon_start__(void);
extern int printf(const char *__format, ...);
extern void *memset(void *__s, int __c, size_t __n);
extern int _setjmp(__jmp_buf_tag *__env);
extern void longjmp(__jmp_buf_tag *__env, int __val);
extern void *__cxa_finalize(void *dso_handle);
extern void __libc_start_main(int (*main)(void), unsigned long long argc, char **argv, int (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void *memcpy(void *__dest, const void *__src, size_t __n);

/* Global variable declarations */
char completed_0 = 0;
extern void *__dso_handle;

/* Global data definitions */
char DAT_001030e4[] = "\n=== Control Flow Level 1 Tests ===\n";
char DAT_001030a0[48];
char DAT_00103352[] = "\n=== Control Flow Level 2 Tests ===\n";
char DAT_00103546[] = "\n=== Control Flow Level 3 Tests ===\n";
__jmp_buf_tag jump_buffer;
unsigned char DAT_00102b39 = 1;
unsigned char DAT_00102b45 = 3;
unsigned char DAT_00102b51 = 5;
unsigned char DAT_00102b5d = 7;

/* Function pointer typedef */
typedef int (*func_ptr_int)(int);
typedef int (*func_ptr_int_int)(int, int);
typedef unsigned int (*func_ptr_uint_uint)(unsigned int, unsigned int);
typedef unsigned long long (*func_ptr_void)(void);

/* Forward declarations for function pointer arrays */
array16_t op_add(int param_1, int param_2);
array16_t op_sub(int param_1, int param_2);
array16_t op_mul(int param_1, int param_2);
array16_t op_div(int param_1, int param_2);
array16_t op_mod(int param_1, int param_2);
array16_t op_and(int param_1, int param_2);
array16_t op_or(int param_1, int param_2);
array16_t op_xor(int param_1, int param_2);
array16_t op_shl(int param_1, int param_2);
array16_t op_shr(int param_1, int param_2);

/* Function pointer table for jump table operations */
array16_t (*PTR_op_add_00105d60[10])(int, int) = {
    op_add,
    op_sub,
    op_mul,
    op_div,
    op_mod,
    op_and,
    op_or,
    op_xor,
    op_shl,
    op_shr
};

/* Forward declarations for callback functions */
int double_value(int param_1);
int triple_value(int param_1);

/* Forward declarations for indirect recursion */
int indirect_recursion_a(int param_1, int param_2);
int indirect_recursion_b(int param_1, int param_2);

/* Forward declarations for state machine functions */
unsigned int state_idle(unsigned int param_1);
unsigned int state_processing(unsigned int param_1);
unsigned int state_done(unsigned int param_1);
unsigned int state_error(unsigned int param_1);

// Decompiled by BinaryAI
// SHA256: 602e296222cdb926e21948e7d6d865c4c9fdecfbcce073211c00bf05af2321d7



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}



// Forward declaration
int main(void);







// Function: __do_global_dtors_aux @ 0x101130
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 completed_0 = 1;
 return;
}

// Function: sequential_ops @ 0x101180
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x1011b0
int single_if(int param_1)
{
 int local_c;
 local_c = param_1;
 if (0 < param_1) {
 local_c = param_1 << 1;
 }
 return local_c;
}

// Function: if_else @ 0x1011d0
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x101200
int nested_if_2(int param_1,int param_2)
{
 int local_c;
 if (param_1 < 1) {
 local_c = 0;
 }
 else {
 local_c = param_1;
 if (0 < param_2) {
 local_c = param_1 + param_2;
 }
 }
 return local_c;
}

// Function: nested_if_deep @ 0x101250
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int local_c;
 if (param_1 < 1) {
 local_c = 0;
 }
 else if (param_2 < 1) {
 local_c = 1;
 }
 else if (param_3 < 1) {
 local_c = 2;
 }
 else if (param_4 < 1) {
 local_c = 3;
 }
 else if (param_5 < 1) {
 local_c = 4;
 }
 else {
 local_c = 5;
 }
 return local_c;
}

// Function: if_elseif_chain @ 0x1012e0
unsigned int if_elseif_chain(int param_1)
{
 unsigned int local_c;
 if (param_1 == 0) {
 local_c = 10;
 }
 else if (param_1 == 1) {
 local_c = 0x14;
 }
 else if (param_1 == 2) {
 local_c = 0x1e;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: if_elseif_long @ 0x101340
unsigned int if_elseif_long(int param_1)
{
 unsigned int local_c;
 if (param_1 == 0) {
 local_c = 100;
 }
 else if (param_1 == 1) {
 local_c = 200;
 }
 else if (param_1 == 2) {
 local_c = 300;
 }
 else if (param_1 == 3) {
 local_c = 400;
 }
 else if (param_1 == 4) {
 local_c = 500;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: switch_small @ 0x1013d0
array16_t switch_small(unsigned int param_1)
{
 array16_t auVar1;
 unsigned int local_c;
 unsigned long long local_8 = 0;
 switch(param_1) {
 case 0:
 local_c = 0xf;
 break;
 case 1:
 local_c = 5;
 break;
 case 2:
 local_c = 0x32;
 break;
 case 3:
 local_c = 2;
 local_8 = 0;
 break;
 default:
 local_c = 0xffffffff;
 }
 auVar1._4_4_ = 0;
 auVar1._0_4_ = local_c;
 auVar1._8_8_ = local_8;
 return auVar1;
}

// Function: switch_large @ 0x101450
unsigned int switch_large(unsigned int param_1)
{
 unsigned int local_c;
 switch(param_1) {
 case 0:
 local_c = 0;
 break;
 case 1:
 local_c = 10;
 break;
 case 2:
 local_c = 0x14;
 break;
 case 3:
 local_c = 0x1e;
 break;
 case 4:
 local_c = 0x28;
 break;
 case 5:
 local_c = 0x32;
 break;
 case 6:
 local_c = 0x3c;
 break;
 case 7:
 local_c = 0x46;
 break;
 case 8:
 local_c = 0x50;
 break;
 case 9:
 local_c = 0x5a;
 break;
 default:
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: switch_default @ 0x101500
unsigned int switch_default(int param_1)
{
 unsigned int local_c;
 if (param_1 == 1) {
 local_c = 100;
 }
 else if (param_1 == 2) {
 local_c = 200;
 }
 else if (param_1 == 3) {
 local_c = 300;
 }
 else {
 local_c = 0;
 }
 return local_c;
}

// Function: switch_fallthrough @ 0x101570
int switch_fallthrough(int param_1)
{
 int local_10;
 local_10 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 local_10 = 0xc;
 }
 local_10 = param_1 * 2 + local_10;
 }
 return param_1 + local_10;
}

// Function: loop_for_fixed @ 0x1015f0
int loop_for_fixed(int param_1)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 local_10 = local_14 + local_10;
 }
 return local_10;
}

// Function: loop_while @ 0x101630
array16_t loop_while(unsigned int param_1,unsigned long long param_2,unsigned long param_3)
{
 array16_t auVar1;
 uint local_14;
 uint local_10;
 uint local_c;
 local_10 = 0;
 for (local_c = param_1; local_c != 0; local_c = local_c / 10) {
 param_3 = (long)local_c % 10 & 0xffffffff;
 local_10 = local_10 + 1;
 }
 if ((int)local_10 < 1) {
 local_14 = 1;
 }
 else {
 local_14 = local_10;
 }
 auVar1._4_4_ = 0;
 auVar1._0_4_ = local_14;
 auVar1._8_8_ = param_3;
 return auVar1;
}

// Function: loop_dowhile @ 0x101690
int loop_dowhile(int param_1)
{
 int local_10;
 int local_c;
 local_10 = 0;
 local_c = param_1;
 do {
 local_c = local_c / 10;
 local_10 = local_10 + 1;
 } while (local_c != 0);
 return local_10;
}

// Function: loop_nested @ 0x1016d0
int loop_nested(int param_1,int param_2)
{
 int local_1c;
 int local_18;
 int local_14;
 local_14 = 0;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
 local_14 = local_14 + 1;
 }
 }
 return local_14;
}

// Function: loop_break @ 0x101740
int loop_break(int param_1)
{
 int local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned int local_18;
 int local_10;
 local_10 = param_1;
 local_28 = 0x140000000a;
 local_20 = 0x280000001e;
 local_18 = 0x32;
 local_30 = 0;
 while( true ) {
 if (4 < local_30) {
 return -1;
 }
 if (*(int *)((long)&local_28 + (long)local_30 * 4) == param_1) break;
 local_30 = local_30 + 1;
 }
 return local_30;
}

// Function: loop_continue @ 0x1017c0
int loop_continue(int param_1)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 1; local_14 <= param_1; local_14 = local_14 + 1) {
 if (local_14 % 2 != 0) {
 local_10 = local_14 + local_10;
 }
 }
 return local_10;
}

// Function: goto_forward @ 0x101820
int goto_forward(int param_1)
{
 int local_10;
 local_10 = param_1;
 if (0 < param_1) {
 local_10 = param_1 * param_1;
 }
 return local_10 << 1;
}

// Function: goto_backward @ 0x101860
int goto_backward(int param_1)
{
 int local_18;
 int local_14;
 int local_c;
 if (param_1 < 1) {
 local_c = 1;
 }
 else {
 local_14 = 1;
 for (local_18 = 1; local_18 <= param_1; local_18 = local_18 + 1) {
 local_14 = local_18 * local_14;
 }
 local_c = local_14;
 }
 return local_c;
}

// Function: ternary_op @ 0x1018c0
int ternary_op(int param_1,int param_2)
{
 int local_14;
 local_14 = (param_2 < param_1) ? param_1 : param_2;
 return local_14;
}

// Function: test_control_flow_l1 @ 0x1018f0
void test_control_flow_l1(void)
{
 uint uVar1;
 printf(&DAT_001030e4);
 uVar1 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",(unsigned long)uVar1);
 uVar1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",(unsigned long)uVar1);
 uVar1 = single_if(0xfffffffb);
 printf("CF-L1-02 (single_if): %d\n",(unsigned long)uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",(unsigned long)uVar1);
 uVar1 = if_else(0xfffffffd);
 printf("CF-L1-03 (if_else): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",(unsigned long)uVar1);
 uVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",(unsigned long)uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",(unsigned long)uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",(unsigned long)uVar1);
 {
 uVar1 = switch_small((unsigned int)2)._0_4_;
 }
 printf("CF-L1-08 (switch_small): %d\n",(unsigned long)uVar1);
 {
 unsigned int tmp = switch_large(7);
 uVar1 = tmp;
 }
 printf("CF-L1-09 (switch_large): %d\n",(unsigned long)uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",(unsigned long)uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",(unsigned long)uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",(unsigned long)uVar1);
 {
 array16_t tmp = loop_while(0x3039, 0, 0);
 uVar1 = tmp._0_4_;
 }
 printf("CF-L1-13 (loop_while): %d\n",(unsigned long)uVar1);
 uVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",(unsigned long)uVar1);
 uVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",(unsigned long)uVar1);
 uVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",(unsigned long)uVar1);
 uVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",(unsigned long)uVar1);
 uVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",(unsigned long)uVar1);
 uVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",(unsigned long)uVar1);
 uVar1 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",(unsigned long)uVar1);
 uVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",(unsigned long)uVar1);
 uVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",(unsigned long)uVar1);
 uVar1 = ternary_op(3,8);
 printf("CF-L1-20 (ternary_op): %d\n",(unsigned long)uVar1);
 return;
}

// Function: loop_multi_exit @ 0x101c00
int loop_multi_exit(int param_1)
{
 int local_50;
 int local_4c;
 int local_48 [14];
 int local_10;
 local_10 = param_1;
 memcpy(local_48,&DAT_001030a0,0x30);
 local_4c = 0;
 do {
 if (2 < local_4c) {
 return -1;
 }
 for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
 if (local_48[(long)local_4c * 4 + (long)local_50] == local_10) {
 return local_4c * 10 + local_50;
 }
 }
 local_4c = local_4c + 1;
 } while( true );
}

// Function: infinite_loop @ 0x101cb0
int infinite_loop(int *param_1)
{
 int local_14;
 local_14 = 0;
 do {
 if (*param_1 == 1) {
 return local_14;
 }
 local_14 = local_14 + 1;
 } while (local_14 < 0x3e9);
 *param_1 = 1;
 return local_14;
}

// Function: multi_return @ 0x101d10
int multi_return(int param_1)
{
 int local_c;
 if (param_1 < 0) {
 local_c = -1;
 }
 else {
 local_c = param_1 << 1;
 if (local_c < 0x65) {
 if (param_1 % 2 != 0) {
 local_c = param_1 + 1;
 }
 }
 else {
 local_c = -2;
 }
 }
 return local_c;
}

// Function: conditional_return @ 0x101d80
int conditional_return(int param_1)
{
 int local_14;
 int local_10;
 if (param_1 < 1) {
 if (param_1 < 0) {
 local_14 = -param_1;
 }
 else {
 local_14 = 0;
 }
 local_10 = local_14;
 }
 else {
 local_10 = param_1 << 1;
 }
 return local_10;
}

// Function: duffs_device @ 0x101dd0
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 int local_28;
 unsigned int *local_20;
 unsigned int *local_18;
 int local_c;
 if (param_3 < 1) {
 local_c = -1;
 }
 else {
 local_28 = param_3 + 7;
 if (param_3 + 7 < 0) {
 local_28 = param_3 + 0xe;
 }
 local_28 = local_28 >> 3;
 local_c = param_3;
 if ((uint)(param_3 % 8) < 8) {
 local_20 = param_2;
 local_18 = param_1;
 switch(param_3 % 8) {
 case 0:
 local_20 = param_2;
 local_18 = param_1;
 break;
 case 1:
 goto switchD_00101e40_caseD_1;
 case 2:
 goto switchD_00101e40_caseD_2;
 case 3:
 goto switchD_00101e40_caseD_3;
 case 4:
 goto switchD_00101e40_caseD_4;
 case 5:
 goto switchD_00101e40_caseD_5;
 case 6:
 goto switchD_00101e40_caseD_6;
 case 7:
 goto switchD_00101e40_caseD_7;
 }
 do {
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_7:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_6:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_5:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_4:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_3:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_2:
 *local_18 = *local_20;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
switchD_00101e40_caseD_1:
 *local_18 = *local_20;
 local_28 = local_28 + -1;
 local_20 = local_20 + 1;
 local_18 = local_18 + 1;
 } while (0 < local_28);
 }
 }
 return local_c;
}

// Function: loop_complex_cond @ 0x101f80
int loop_complex_cond(int param_1)
{
 bool bVar1;
 int local_18;
 int local_14;
 int local_10;
 local_10 = 0;
 local_18 = 0;
 local_14 = param_1;
 while( true ) {
 bVar1 = false;
 if ((local_10 < local_14) && (bVar1 = false, local_18 < 10)) {
 bVar1 = 0 < local_14;
 }
 if (!bVar1) break;
 local_10 = local_10 + 2;
 local_14 = local_14 + -1;
 local_18 = local_18 + 1;
 }
 return local_10 + local_14 + local_18;
}

// Function: loop_modify_var @ 0x102000
int loop_modify_var(int param_1)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
 local_10 = local_14 + local_10;
 if (5 < local_14) {
 local_14 = local_14 + 2;
 }
 }
 return local_10;
}

// Function: loop_external_state @ 0x102060
int loop_external_state(int *param_1)
{
 int local_14;
 local_14 = 0;
 do {
 if (*param_1 != 0) {
 return local_14;
 }
 local_14 = local_14 + 1;
 } while (local_14 < 0x65);
 return local_14;
}

// Function: recursion_factorial @ 0x1020a0
int recursion_factorial(int param_1)
{
 int local_c;
 if (param_1 < 2) {
 local_c = 1;
 }
 else {
 local_c = recursion_factorial(param_1 + -1);
 local_c = param_1 * local_c;
 }
 return local_c;
}

// Function: tail_recursion @ 0x1020f0
int tail_recursion(int param_1,int param_2)
{
 int local_c;
 local_c = param_2;
 if (1 < param_1) {
 local_c = tail_recursion(param_1 + -1,param_1 * param_2);
 }
 return local_c;
}

// Function: indirect_recursion_a @ 0x102140
int indirect_recursion_a(int param_1,int param_2)
{
 int local_c;
 local_c = param_1;
 if (0 < param_2) {
 if (param_1 % 2 == 0) {
 local_c = indirect_recursion_b((int)((long)param_1 / 2 & 0xffffffff),param_2 + -1);
 }
 else {
 local_c = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 }
 return local_c;
}

// Function: indirect_recursion_b @ 0x1021c0
int indirect_recursion_b(int param_1,int param_2)
{
 int local_c;
 local_c = param_1;
 if (0 < param_2) {
 local_c = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return local_c;
}

// Function: call_func_ptr @ 0x102200
void call_func_ptr(void *param_1,unsigned int param_2)
{
 int (*func)(int) = (int (*)(int))param_1;
 (void)func(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x102220
unsigned int call_func_ptr_array(int param_1,unsigned int param_2)
{
 int (*local_38 [4])(int);
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_10 = param_1;
 local_14 = param_2;
 local_38[0] = double_value;
 local_38[1] = triple_value;
 local_38[2] = recursion_factorial;
 if ((param_1 < 0) || (2 < param_1)) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*local_38[param_1])(param_2);
 }
 return local_c;
}

// Function: double_value @ 0x102290
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x1022a0
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x1022b0
int call_virtual_func(unsigned long long param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x1022d0
int process_with_callback(long param_1,int param_2,void *param_3)
{
 int iVar1;
 int local_28;
 int local_24;
 int (*callback)(int) = (int (*)(int))param_3;
 local_24 = 0;
 for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
 iVar1 = callback(*(unsigned int *)(param_1 + (long)local_28 * 4));
 local_24 = iVar1 + local_24;
 }
 return local_24;
}

// Function: test_control_flow_l2 @ 0x102330
void test_control_flow_l2(void)
{
 uint uVar1;
 unsigned long long local_78;
 unsigned long long local_70;
 unsigned int local_68;
 unsigned int local_5c;
 char local_58 [32];
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned int local_c;
 printf(&DAT_00103352);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",(unsigned long)uVar1);
 local_c = 0;
 uVar1 = infinite_loop(&local_c);
 printf("CF-L2-02 (infinite_loop): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(0xfffffffb);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",(unsigned long)uVar1);
 uVar1 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",(unsigned long)uVar1);
 local_38 = 0x200000001;
 local_30 = 0x400000003;
 local_28 = 0x600000005;
 local_20 = 0x800000007;
 memset(local_58,0,0x20);
 uVar1 = duffs_device(local_58,&local_38,8);
 printf("CF-L2-05 (duffs_device): %d\n",(unsigned long)uVar1);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",(unsigned long)uVar1);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",(unsigned long)uVar1);
 local_5c = 0;
 uVar1 = loop_external_state(&local_5c);
 printf("CF-L2-08 (loop_external_state): %d\n",(unsigned long)uVar1);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",(unsigned long)uVar1);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",(unsigned long)uVar1);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",(unsigned long)uVar1);
 uVar1 = double_value(5);
 call_func_ptr((void *)double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",(unsigned long)uVar1);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(unsigned long)uVar1);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",(unsigned long)uVar1);
 local_78 = 0x200000001;
 local_70 = 0x400000003;
 local_68 = 5;
 uVar1 = process_with_callback((long)&local_78,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",(unsigned long)uVar1);
 return;
}

// Function: non_local_jump @ 0x1025c0
int non_local_jump(int param_1)
{
 int iVar1;
 int local_c;
 iVar1 = _setjmp(&jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 longjmp(&jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp(&jump_buffer,2);
 }
 local_c = param_1 << 1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: cpp_exception @ 0x102640
int cpp_exception(int param_1)
{
 int local_c;
 if (param_1 < 0) {
 local_c = -1;
 }
 else if (param_1 < 0x65) {
 local_c = param_1 << 1;
 }
 else {
 local_c = -2;
 }
 return local_c;
}

// Function: large_jump_table @ 0x102690
unsigned int large_jump_table(int param_1,unsigned int param_2,unsigned int param_3)
{
 array16_t (*local_68 [10])(int, int);
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_18 = param_3;
 local_14 = param_2;
 local_10 = param_1;
 memcpy(local_68,&PTR_op_add_00105d60,0x50);
 if ((local_10 < 0) || (9 < local_10)) {
 local_c = 0xffffffff;
 }
 else {
 array16_t tmp = (*local_68[local_10])((int)local_14,(int)local_18);
 local_c = tmp._0_4_;
 }
 return local_c;
}

// Function: op_add @ 0x102700
array16_t op_add(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 + param_2;
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_sub @ 0x102720
array16_t op_sub(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 - param_2;
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_mul @ 0x102740
array16_t op_mul(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 * param_2;
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_div @ 0x102760
array16_t op_div(int param_1,int param_2)
{
 array16_t auVar1;
 uint local_14;
 unsigned long local_8;
 if (param_2 == 0) {
 local_14 = 0;
 local_8 = 0;
 }
 else {
 local_14 = param_1 / param_2;
 local_8 = (long)param_1 % (long)param_2 & 0xffffffff;
 }
 auVar1._4_4_ = 0;
 auVar1._0_4_ = local_14;
 auVar1._8_8_ = local_8;
 return auVar1;
}

// Function: op_mod @ 0x1027a0
array16_t op_mod(int param_1,int param_2)
{
 array16_t auVar1;
 if (param_2 == 0) {
 auVar1._0_4_ = 0;
 }
 else {
 auVar1._0_4_ = param_1 % param_2;
 }
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_and @ 0x1027e0
array16_t op_and(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 & param_2;
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_or @ 0x102800
array16_t op_or(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 | param_2;
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_xor @ 0x102820
array16_t op_xor(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 ^ param_2;
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_shl @ 0x102840
array16_t op_shl(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 << (param_2 & 0x1f);
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: op_shr @ 0x102860
array16_t op_shr(int param_1,int param_2)
{
 array16_t auVar1;
 auVar1._0_4_ = param_1 >> (param_2 & 0x1f);
 auVar1._4_4_ = 0;
 auVar1._8_8_ = 0;
 return auVar1;
}

// Function: conditional_func_ptr @ 0x102880
int conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*local_18)(int);
 if (param_1 == 0) {
 local_18 = double_value;
 }
 else if (param_1 == 1) {
 local_18 = triple_value;
 }
 else {
 local_18 = (int (*)(int))recursion_factorial;
 }
 return local_18(param_2);
}

// Function: state_machine @ 0x1028f0
unsigned int state_machine(int param_1,unsigned int param_2)
{
 unsigned int local_c;
 switch(param_2) {
 case 0:
 if (param_1 == 1) {
 local_c = 1;
 }
 else {
 local_c = 0;
 }
 break;
 case 1:
 if (param_1 == 2) {
 local_c = 2;
 }
 else if (param_1 == 99) {
 local_c = 3;
 }
 else {
 local_c = 1;
 }
 break;
 case 2:
 local_c = 2;
 break;
 case 3:
 if (param_1 == 0) {
 local_c = 0;
 }
 else {
 local_c = 3;
 }
 break;
 default:
 local_c = 3;
 }
 return local_c;
}

// Function: fsm_func_table @ 0x1029c0
unsigned int fsm_func_table(unsigned int param_1,int param_2)
{
 unsigned int (*local_38 [4])(unsigned int);
 int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_10 = param_1;
 local_14 = param_2;
 local_38[0] = (unsigned int (*)(unsigned int))state_idle;
 local_38[1] = state_processing;
 local_38[2] = (unsigned int (*)(unsigned int))state_done;
 local_38[3] = (unsigned int (*)(unsigned int))state_error;
 if ((param_2 < 0) || (3 < param_2)) {
 local_c = 3;
 }
 else {
 local_c = (*local_38[param_2])(param_1);
 }
 return local_c;
}

// Function: state_idle @ 0x102a40
unsigned int state_idle(unsigned int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x102a60
unsigned int state_processing(unsigned int param_1)
{
 unsigned int local_c;
 if (param_1 == 2) {
 local_c = 2;
 }
 else if (param_1 == 99) {
 local_c = 3;
 }
 else {
 local_c = 1;
 }
 return local_c;
}

// Function: state_done @ 0x102aa0
unsigned int state_done(unsigned int param_1)
{
 return 2;
}

// Function: state_error @ 0x102ab0
unsigned int state_error(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = 3;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: computed_goto @ 0x102ad0
array16_t computed_goto(unsigned long long param_1,int param_2)
{
 array16_t result;
 int local_1c;
 local_1c = param_2;
 if ((-1 < param_2) && (param_2 < 4)) {
 switch(param_2) {
 case 0:
 result._0_4_ = DAT_00102b39;
 result._4_4_ = 0;
 result._8_8_ = 0;
 break;
 case 1:
 result._0_4_ = DAT_00102b45;
 result._4_4_ = 0;
 result._8_8_ = 0;
 break;
 case 2:
 result._0_4_ = DAT_00102b51;
 result._4_4_ = 0;
 result._8_8_ = 0;
 break;
 case 3:
 result._0_4_ = DAT_00102b5d;
 result._4_4_ = 0;
 result._8_8_ = 0;
 break;
 default:
 result._0_4_ = 0xffffffff;
 result._4_4_ = 0;
 result._8_8_ = 0;
 break;
 }
 return result;
 }
 result._0_4_ = 0xffffffff;
 result._4_4_ = 0;
 result._8_8_ = 0;
 return result;
}

// Function: obfuscated_cf @ 0x102b70
int obfuscated_cf(int param_1)
{
 int local_10;
 local_10 = param_1;
 if (param_1 * param_1 + 1 < 0) {
 local_10 = param_1 * 2 + 1;
 }
 return local_10 << 1;
}

// Function: opaque_predicate @ 0x102bb0
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x102bf0
array16_t overlapped_code(uint param_1,unsigned long long param_2,unsigned long param_3)
{
 array16_t auVar1;
 uint local_c;
 if ((param_1 & 1) == 0) {
 local_c = (int)param_1 / 2;
 param_3 = (long)(int)param_1 % 2 & 0xffffffff;
 }
 else {
 local_c = param_1 * 3 + 1;
 }
 auVar1._4_4_ = 0;
 auVar1._0_4_ = local_c;
 auVar1._8_8_ = param_3;
 return auVar1;
}

// Function: test_control_flow_l3 @ 0x102c30
void test_control_flow_l3(void)
{
 uint uVar1;
 unsigned long long local_18;
 unsigned long long local_10;
 printf(&DAT_00103546);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",(unsigned long)uVar1);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",(unsigned long)uVar1);
 uVar1 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",(unsigned long)uVar1);
 {
 uVar1 = large_jump_table((int)0,(unsigned int)10,(unsigned int)5);
 }
 printf("CF-L3-03 (large_jump_table): %d\n",(unsigned long)uVar1);
 {
 int tmp = conditional_func_ptr(0,5);
 uVar1 = tmp;
 }
 printf("CF-L3-04 (conditional_func_ptr): %d\n",(unsigned long)uVar1);
 {
 unsigned int tmp = state_machine(1,0);
 uVar1 = tmp;
 }
 printf("CF-L3-05 (state_machine): %d\n",(unsigned long)uVar1);
 {
 unsigned int tmp = fsm_func_table(2,1);
 uVar1 = tmp;
 }
 printf("CF-L3-06 (fsm_func_table): %d\n",(unsigned long)uVar1);
 local_18 = 0x100000000;
 local_10 = 0x300000002;
 {
 array16_t tmp = computed_goto(local_18,2);
 uVar1 = tmp._0_4_;
 }
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",(unsigned long)uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",(unsigned long)uVar1);
 {
 array16_t tmp = overlapped_code(5,0,0);
 uVar1 = tmp._0_4_;
 }
 printf("CF-L3-10 (overlapped_code): %d\n",(unsigned long)uVar1);
 return;
}

// Function: main @ 0x102db0
int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}



