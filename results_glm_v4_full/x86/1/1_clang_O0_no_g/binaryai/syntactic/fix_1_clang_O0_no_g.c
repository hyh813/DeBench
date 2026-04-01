/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int bool;
#define true 1
#define false 0

/* jmp_buf structure for setjmp/longjmp */
typedef struct __jmp_buf_tag {
    unsigned long __jmpbuf[8];
} __jmp_buf_tag;

/* Forward declarations for recursive functions */
int indirect_recursion_b(int param_1, int param_2);
int indirect_recursion_a(int param_1, int param_2);
int tail_recursion(int param_1, int param_2);
int double_value(int param_1);
int triple_value(int param_1);
int recursion_factorial(int param_1);

/* Forward declarations for functions used before definition */
unsigned int main(void);
void __do_global_dtors_aux(void);
int __x86_get_pc_thunk_di(void);
void FUN_000110a0(unsigned int param_1);
unsigned int state_idle(int param_1);
unsigned int state_processing(int param_1);
unsigned int state_done(int param_1);
unsigned int state_error(int param_1);
int __do_global_ctors_aux(void);
int op_add(int param_1, int param_2);
int op_sub(int param_1, int param_2);
int op_mul(int param_1, int param_2);
int op_div(int param_1, int param_2);
int op_mod(int param_1, int param_2);
unsigned int op_and(unsigned int param_1, unsigned int param_2);
unsigned int op_or(unsigned int param_1, unsigned int param_2);
unsigned int op_xor(unsigned int param_1, unsigned int param_2);
int op_shl(int param_1, byte param_2);
int op_shr(int param_1, byte param_2);

/* External function declarations */
void __gmon_start__(void);
void frame_dummy(void);
void __libc_start_main_real(int (*main_func)(), int argc, char **argv, void (*init)(), void (*fini)(), void (*rtld_fini)(), void *stack_end);

/* Global data declarations */
char DAT_00014070[20] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 100, 200, 300, 400, 500, 1000, 2000, 3000, 4000, 5000};
char DAT_00014084[48] = {0};
char DAT_000140b4[20] = {1, 2, 3, 4, 5, 10, 20, 30, 40, 50, 100, 200, 300, 400, 500, 1000, 2000, 3000, 4000, 5000};
char DAT_000140c8[64] = "=== Control Flow Level 1 Tests ===\n";
char DAT_00014336[64] = "=== Control Flow Level 2 Tests ===\n";
char DAT_0001452a[64] = "=== Control Flow Level 3 Tests ===\n";
char DAT_0001468c[32] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
extern void *PTR_op_add_00016ed4[];
extern char DAT_00012f8b[];
extern char DAT_00012f97[];
extern char DAT_00012fa3[];
extern char DAT_00012faf[];

/* Stack and buffer variables */
extern char stack0x00000004[];
__jmp_buf_tag jump_buffer[1];

// Decompiled by BinaryAI
// SHA256: fe05cd254754b94471ab07ba72e0bea638b5a976ecf9b457d62ae547dc9c7c10







// Function: <EXTERNAL>::printf @ 0x11050
extern int printf(char *__format,...);

// Function: <EXTERNAL>::longjmp @ 0x11060
extern void longjmp(__jmp_buf_tag *__env,int __val);

// Function: <EXTERNAL>::_setjmp @ 0x11070
extern int _setjmp(__jmp_buf_tag *__env);

// Function: <EXTERNAL>::memcpy @ 0x11080
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::memset @ 0x11090
extern void * memset(void *__s,int __c,size_t __n);

/* Function pointer types for callbacks */
typedef int (*int_callback_t)(int);
typedef int (*uint_callback_t)(int, int);

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(unsigned int param_1)
{
 unsigned int unaff_EBX = param_1;
 if (unaff_EBX - 0x10 != 0) {
 ((void (*)(void))*(void **)(uintptr_t)(unaff_EBX + -0x10))();
 }
 return;
}







// Function: deregister_tm_clones @ 0x110f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11130
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11180
void __do_global_dtors_aux(void)
{
 uint uVar1;
 char *base_ptr;
 base_ptr = (char *)0;
 __x86_get_pc_thunk_di();
 if (*(char *)(base_ptr + 0x5e9f) == '\0') {
 if (*(int *)(base_ptr + 0x5e63) != 0) {
 FUN_000110a0(*(unsigned int *)(base_ptr + 0x5e9b));
 }
 uVar1 = *(uint *)(base_ptr + 0x5ea3);
 while (uVar1 < ((unsigned int)((base_ptr + 0x5d37) - (base_ptr + 0x5d33)) >> 2) - 1U) {
 *(uint *)(base_ptr + 0x5ea3) = uVar1 + 1;
 ((void (*)(void))*(void **)(base_ptr + 0x5d33 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(base_ptr + 0x5ea3);
 }
 deregister_tm_clones();
 *(char *)(base_ptr + 0x5e9f) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11219
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc.thunk.di @ 0x1121d
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: sequential_ops @ 0x11230
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x11270
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}

// Function: if_else @ 0x11290
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x112c0
int nested_if_2(int param_1,int param_2)
{
 int local_8;
 if (param_1 < 1) {
 local_8 = 0;
 }
 else if (param_2 < 1) {
 local_8 = param_1;
 }
 else {
 local_8 = param_1 + param_2;
 }
 return local_8;
}

// Function: nested_if_deep @ 0x11310
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int local_8;
 if (param_1 < 1) {
 local_8 = 0;
 }
 else if (param_2 < 1) {
 local_8 = 1;
 }
 else if (param_3 < 1) {
 local_8 = 2;
 }
 else if (param_4 < 1) {
 local_8 = 3;
 }
 else if (param_5 < 1) {
 local_8 = 4;
 }
 else {
 local_8 = 5;
 }
 return local_8;
}

// Function: if_elseif_chain @ 0x113a0
unsigned int if_elseif_chain(int param_1)
{
 unsigned int local_8;
 if (param_1 == 0) {
 local_8 = 10;
 }
 else if (param_1 == 1) {
 local_8 = 0x14;
 }
 else if (param_1 == 2) {
 local_8 = 0x1e;
 }
 else {
 local_8 = 0xffffffff;
 }
 return local_8;
}

// Function: if_elseif_long @ 0x11400
unsigned int if_elseif_long(int param_1)
{
 unsigned int local_8;
 if (param_1 == 0) {
 local_8 = 100;
 }
 else if (param_1 == 1) {
 local_8 = 200;
 }
 else if (param_1 == 2) {
 local_8 = 300;
 }
 else if (param_1 == 3) {
 local_8 = 400;
 }
 else if (param_1 == 4) {
 local_8 = 500;
 }
 else {
 local_8 = 0xffffffff;
 }
 return local_8;
}

// Function: switch_small @ 0x11490
unsigned int switch_small(unsigned int param_1)
{
 unsigned int local_8;
 switch(param_1) {
 case 0:
 local_8 = 0xf;
 break;
 case 1:
 local_8 = 5;
 break;
 case 2:
 local_8 = 0x32;
 break;
 case 3:
 local_8 = 2;
 break;
 default:
 local_8 = 0xffffffff;
 }
 return local_8;
}

// Function: switch_large @ 0x11520
unsigned int switch_large(unsigned int param_1)
{
 unsigned int local_8;
 switch(param_1) {
 case 0:
 local_8 = 0;
 break;
 case 1:
 local_8 = 10;
 break;
 case 2:
 local_8 = 0x14;
 break;
 case 3:
 local_8 = 0x1e;
 break;
 case 4:
 local_8 = 0x28;
 break;
 case 5:
 local_8 = 0x32;
 break;
 case 6:
 local_8 = 0x3c;
 break;
 case 7:
 local_8 = 0x46;
 break;
 case 8:
 local_8 = 0x50;
 break;
 case 9:
 local_8 = 0x5a;
 break;
 default:
 local_8 = 0xffffffff;
 }
 return local_8;
}

// Function: switch_default @ 0x115e0
unsigned int switch_default(int param_1)
{
 unsigned int local_8;
 if (param_1 == 1) {
 local_8 = 100;
 }
 else if (param_1 == 2) {
 local_8 = 200;
 }
 else if (param_1 == 3) {
 local_8 = 300;
 }
 else {
 local_8 = 0;
 }
 return local_8;
}

// Function: switch_fallthrough @ 0x11660
int switch_fallthrough(int param_1)
{
 int local_8;
 local_8 = 0;
 if (param_1 != 1) {
 if (param_1 != 2) {
 if (param_1 != 3) {
 return -1;
 }
 local_8 = 0xc;
 }
 local_8 = param_1 * 2 + local_8;
 }
 return param_1 + local_8;
}

// Function: loop_for_fixed @ 0x116e0
int loop_for_fixed(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = local_c + local_8;
 }
 return local_8;
}

// Function: loop_while @ 0x11730
int loop_while(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (; param_1 != 0; param_1 = param_1 / 10) {
 local_8 = local_8 + 1;
 }
 if (local_8 < 1) {
 local_c = 1;
 }
 else {
 local_c = local_8;
 }
 return local_c;
}

// Function: loop_dowhile @ 0x11790
int loop_dowhile(int param_1)
{
 int local_8;
 local_8 = 0;
 do {
 param_1 = param_1 / 10;
 local_8 = local_8 + 1;
 } while (param_1 != 0);
 return local_8;
}

// Function: loop_nested @ 0x117d0
int loop_nested(int param_1,int param_2)
{
 int local_10;
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_8 = local_8 + 1;
 }
 }
 return local_8;
}

// Function: loop_break @ 0x11840
int loop_break(int param_1)
{
 int local_28;
 int local_20 [6];
 memcpy(local_20,&DAT_00014070,0x14);
 local_28 = 0;
 while( true ) {
 if (4 < local_28) {
 return -1;
 }
 if (local_20[local_28] == param_1) break;
 local_28 = local_28 + 1;
 }
 return local_28;
}

// Function: loop_continue @ 0x118d0
int loop_continue(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 1; local_c <= param_1; local_c = local_c + 1) {
 if (local_c % 2 != 0) {
 local_8 = local_c + local_8;
 }
 }
 return local_8;
}

// Function: goto_forward @ 0x11930
int goto_forward(int param_1)
{
 int local_8;
 if (param_1 < 1) {
 local_8 = param_1;
 }
 else {
 local_8 = param_1 * param_1;
 }
 return local_8 << 1;
}

// Function: goto_backward @ 0x11970
int goto_backward(int param_1)
{
 int local_10;
 int local_c;
 int local_8;
 if (param_1 < 1) {
 local_8 = 1;
 }
 else {
 local_c = 1;
 for (local_10 = 1; local_10 <= param_1; local_10 = local_10 + 1) {
 local_c = local_10 * local_c;
 }
 local_8 = local_c;
 }
 return local_8;
}

// Function: ternary_op @ 0x119e0
int ternary_op(int param_1,int param_2)
{
 int local_8;
 if (param_2 < param_1) {
 local_8 = param_1;
 }
 else {
 local_8 = param_2;
 }
 return local_8;
}

// Function: test_control_flow_l1 @ 0x11a10
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 printf(&DAT_000140c8);
 uVar1 = sequential_ops(5,7,3);
 printf("CF-L1-01 (sequential_ops): %d\n",uVar1);
 uVar1 = single_if(10);
 printf("CF-L1-02 (single_if): %d\n",uVar1);
 uVar1 = single_if(0xfffffffb);
 printf("CF-L1-02 (single_if): %d\n",uVar1);
 uVar1 = if_else(5);
 printf("CF-L1-03 (if_else): %d\n",uVar1);
 uVar1 = if_else(0xfffffffd);
 printf("CF-L1-03 (if_else): %d\n",uVar1);
 uVar1 = nested_if_2(10,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_2(10,0xfffffffb);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_2(0xfffffff6,5);
 printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
 uVar1 = nested_if_deep(1,1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",uVar1);
 uVar1 = switch_small(2);
 printf("CF-L1-08 (switch_small): %d\n",uVar1);
 uVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 printf("CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 printf("CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 printf("CF-L1-15 (loop_nested): %d\n",uVar1);
 uVar1 = loop_break(0x1e);
 printf("CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 printf("CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 printf("CF-L1-17 (loop_continue): %d\n",uVar1);
 uVar1 = goto_forward(5);
 printf("CF-L1-18 (goto_forward): %d\n",uVar1);
 uVar1 = goto_forward(0xfffffffd);
 printf("CF-L1-18 (goto_forward): %d\n",uVar1);
 uVar1 = goto_backward(5);
 printf("CF-L1-19 (goto_backward): %d\n",uVar1);
 uVar1 = ternary_op(10,5);
 printf("CF-L1-20 (ternary_op): %d\n",uVar1);
 uVar1 = ternary_op(3,8);
 printf("CF-L1-20 (ternary_op): %d\n",uVar1);
 return;
}

// Function: loop_multi_exit @ 0x11e70
int loop_multi_exit(int param_1)
{
 int local_44;
 int local_40;
 int local_3c [13];
 memcpy(local_3c,&DAT_00014084,0x30);
 local_40 = 0;
 do {
 if (2 < local_40) {
 return -1;
 }
 for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
 if (local_3c[local_40 * 4 + local_44] == param_1) {
 return local_40 * 10 + local_44;
 }
 }
 local_40 = local_40 + 1;
 } while( true );
}

// Function: infinite_loop @ 0x11f30
int infinite_loop(int *param_1)
{
 int local_8;
 local_8 = 0;
 do {
 if (*param_1 == 1) {
 return local_8;
 }
 local_8 = local_8 + 1;
 } while (local_8 < 0x3e9);
 *param_1 = 1;
 return local_8;
}

// Function: multi_return @ 0x11f90
int multi_return(int param_1)
{
 int local_8;
 if (param_1 < 0) {
 local_8 = -1;
 }
 else {
 local_8 = param_1 << 1;
 if (local_8 < 0x65) {
 if (param_1 % 2 != 0) {
 local_8 = param_1 + 1;
 }
 }
 else {
 local_8 = -2;
 }
 }
 return local_8;
}

// Function: conditional_return @ 0x12000
int conditional_return(int param_1)
{
 int local_c;
 int local_8;
 if (param_1 < 1) {
 if (param_1 < 0) {
 local_c = -param_1;
 }
 else {
 local_c = 0;
 }
 local_8 = local_c;
 }
 else {
 local_8 = param_1 << 1;
 }
 return local_8;
}

// Function: duffs_device @ 0x12050
int duffs_device(unsigned int *param_1,unsigned int *param_2,int param_3)
{
 int local_c;
 int local_8;
 if (param_3 < 1) {
 local_8 = -1;
 }
 else {
 local_c = param_3 + 7;
 if (param_3 + 7 < 0) {
 local_c = param_3 + 0xe;
 }
 local_c = local_c >> 3;
 if ((uint)(param_3 % 8) < 8) {
 switch(param_3 % 8) {
 case 0:
 break;
 case 1:
 goto switchD_000120c9_caseD_1;
 case 2:
 goto switchD_000120c9_caseD_2;
 case 3:
 goto switchD_000120c9_caseD_3;
 case 4:
 goto switchD_000120c9_caseD_4;
 case 5:
 goto switchD_000120c9_caseD_5;
 case 6:
 goto switchD_000120c9_caseD_6;
 case 7:
 goto switchD_000120c9_caseD_7;
 }
 do {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_7:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_6:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_5:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_4:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_3:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_2:
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
switchD_000120c9_caseD_1:
 *param_1 = *param_2;
 local_c = local_c + -1;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 } while (0 < local_c);
 }
 local_8 = param_3;
 }
 return local_8;
}

// Function: loop_complex_cond @ 0x121d0
int loop_complex_cond(int param_1)
{
 bool bVar1;
 int local_10;
 int local_c;
 int local_8;
 local_8 = 0;
 local_c = param_1;
 local_10 = 0;
 while( true ) {
 bVar1 = false;
 if ((local_8 < local_c) && (local_10 < 10)) {
 bVar1 = 0 < local_c;
 }
 if (!bVar1) break;
 local_8 = local_8 + 2;
 local_c = local_c + -1;
 local_10 = local_10 + 1;
 }
 return local_8 + local_c + local_10;
}

// Function: loop_modify_var @ 0x12260
int loop_modify_var(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = local_c + local_8;
 if (5 < local_c) {
 local_c = local_c + 2;
 }
 }
 return local_8;
}

// Function: loop_external_state @ 0x122c0
int loop_external_state(int *param_1)
{
 int local_8;
 local_8 = 0;
 do {
 if (*param_1 != 0) {
 return local_8;
 }
 local_8 = local_8 + 1;
 } while (local_8 < 0x65);
 return local_8;
}

// Function: recursion_factorial @ 0x12310
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

// Function: tail_recursion @ 0x12370
int tail_recursion(int param_1,int param_2)
{
 int local_c;
 if (param_1 < 2) {
 local_c = param_2;
 }
 else {
 local_c = tail_recursion(param_1 + -1,param_1 * param_2);
 }
 return local_c;
}

// Function: indirect_recursion_a @ 0x123d0
int indirect_recursion_a(int param_1,int param_2)
{
 int local_c;
 if (param_2 < 1) {
 local_c = param_1;
 }
 else if (param_1 % 2 == 0) {
 local_c = indirect_recursion_b(param_1 / 2,param_2 + -1);
 }
 else {
 local_c = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
 }
 return local_c;
}

// Function: indirect_recursion_b @ 0x12470
int indirect_recursion_b(int param_1,int param_2)
{
 int local_c;
 if (param_2 < 1) {
 local_c = param_1;
 }
 else {
 local_c = indirect_recursion_a(param_1 + 1,param_2 + -1);
 }
 return local_c;
}

// Function: call_func_ptr @ 0x124d0
int call_func_ptr(void *param_1,unsigned int param_2)
{
 return ((int_callback_t)param_1)((int)param_2);
}

// Function: call_func_ptr_array @ 0x12500
unsigned int call_func_ptr_array(int param_1,unsigned int param_2)
{
 int_callback_t local_18 [4];
 local_18[0] = double_value;
 local_18[1] = triple_value;
 local_18[2] = recursion_factorial;
 if ((param_1 < 0) || (2 < param_1)) {
 return 0xffffffff;
 }
 else {
 return (unsigned int)local_18[param_1]((int)param_2);
 }
}

// Function: double_value @ 0x12580
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x12590
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: call_virtual_func @ 0x125a0
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x125c0
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 iVar1 = ((int_callback_t)param_3)(*(int *)(param_1 + local_10 * 4));
 local_c = iVar1 + local_c;
 }
 return local_c;
}

// Function: test_control_flow_l2 @ 0x12630
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 char local_64 [20];
 unsigned int local_50;
 char local_4c [32];
 char local_2c [32];
 unsigned int local_c;
 printf(&DAT_00014336);
 uVar1 = loop_multi_exit(7);
 printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_c = 0;
 uVar1 = infinite_loop(&local_c);
 printf("CF-L2-02 (infinite_loop): %d\n",uVar1);
 uVar1 = multi_return(0xfffffffb);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",uVar1);
 uVar1 = conditional_return(5);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1);
 uVar1 = conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): %d\n",uVar1);
 memcpy(local_2c,&DAT_0001468c,0x20);
 memset(local_4c,0,0x20);
 uVar1 = duffs_device(local_4c,local_2c,8);
 printf("CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 printf("CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_50 = 0;
 uVar1 = loop_external_state(&local_50);
 printf("CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 printf("CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 printf("CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
 printf("CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 printf("CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 memcpy(local_64,&DAT_000140b4,0x14);
 uVar1 = process_with_callback(local_64,5,double_value);
 printf("CF-L2-15 (process_with_callback): %d\n",uVar1);
 return;
}

// Function: non_local_jump @ 0x129a0
int non_local_jump(int param_1)
{
 int iVar1;
 int local_c;
 iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 longjmp((__jmp_buf_tag *)jump_buffer,1);
 }
 if (100 < param_1) {
 longjmp((__jmp_buf_tag *)jump_buffer,2);
 }
 local_c = param_1 << 1;
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: cpp_exception @ 0x12a40
int cpp_exception(int param_1)
{
 int local_8;
 if (param_1 < 0) {
 local_8 = -1;
 }
 else if (param_1 < 0x65) {
 local_8 = param_1 << 1;
 }
 else {
 local_8 = -2;
 }
 return local_8;
}

// Function: large_jump_table @ 0x12a90
unsigned int large_jump_table(int param_1,unsigned int param_2,unsigned int param_3)
{
 uint_callback_t local_34 [10];
 local_34[0] = (uint_callback_t)op_add;
 local_34[1] = (uint_callback_t)op_sub;
 local_34[2] = (uint_callback_t)op_mul;
 local_34[3] = (uint_callback_t)op_div;
 local_34[4] = (uint_callback_t)op_mod;
 local_34[5] = (uint_callback_t)op_and;
 local_34[6] = (uint_callback_t)op_or;
 local_34[7] = (uint_callback_t)op_xor;
 local_34[8] = (uint_callback_t)op_shl;
 local_34[9] = (uint_callback_t)op_shr;
 if ((param_1 < 0) || (9 < param_1)) {
 return 0xffffffff;
 }
 else {
 return local_34[param_1](param_2,param_3);
 }
}

// Function: op_add @ 0x12b20
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x12b40
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x12b60
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x12b80
int op_div(int param_1,int param_2)
{
 int local_8;
 if (param_2 == 0) {
 local_8 = 0;
 }
 else {
 local_8 = param_1 / param_2;
 }
 return local_8;
}

// Function: op_mod @ 0x12bc0
int op_mod(int param_1,int param_2)
{
 int local_8;
 if (param_2 == 0) {
 local_8 = 0;
 }
 else {
 local_8 = param_1 % param_2;
 }
 return local_8;
}

// Function: op_and @ 0x12c00
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x12c20
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x12c40
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x12c60
int op_shl(int param_1,byte param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x12c80
int op_shr(int param_1,byte param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x12ca0
int conditional_func_ptr(int param_1,unsigned int param_2)
{
 int (*local_c)(int);
 if (param_1 == 0) {
 local_c = double_value;
 }
 else if (param_1 == 1) {
 local_c = triple_value;
 }
 else {
 local_c = recursion_factorial;
 }
 return local_c(param_2);
}

// Function: state_machine @ 0x12d20
unsigned int state_machine(int param_1,unsigned int param_2)
{
 unsigned int local_8;
 switch(param_2) {
 case 0:
 if (param_1 == 1) {
 local_8 = 1;
 }
 else {
 local_8 = 0;
 }
 break;
 case 1:
 if (param_1 == 2) {
 local_8 = 2;
 }
 else if (param_1 == 99) {
 local_8 = 3;
 }
 else {
 local_8 = 1;
 }
 break;
 case 2:
 local_8 = 2;
 break;
 case 3:
 if (param_1 == 0) {
 local_8 = 0;
 }
 else {
 local_8 = 3;
 }
 break;
 default:
 local_8 = 3;
 }
 return local_8;
}

// Function: fsm_func_table @ 0x12e00
typedef unsigned int (*state_func_t)(int);

unsigned int fsm_func_table(unsigned int param_1,int param_2)
{
 state_func_t local_1c [4];
 unsigned int local_c;
 local_1c[0] = state_idle;
 local_1c[1] = state_processing;
 local_1c[2] = state_done;
 local_1c[3] = state_error;
 if ((param_2 < 0) || (3 < param_2)) {
 local_c = 3;
 }
 else {
 local_c = local_1c[param_2](param_1);
 }
 return local_c;
}

// Function: state_idle @ 0x12e80
unsigned int state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x12ea0
unsigned int state_processing(int param_1)
{
 unsigned int local_8;
 if (param_1 == 2) {
 local_8 = 2;
 }
 else if (param_1 == 99) {
 local_8 = 3;
 }
 else {
 local_8 = 1;
 }
 return local_8;
}

// Function: state_done @ 0x12ef0
unsigned int state_done(int param_1)
{
 return 2;
}

// Function: state_error @ 0x12f00
unsigned int state_error(int param_1)
{
 unsigned int uVar1;
 uVar1 = 3;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: computed_goto @ 0x12f20
unsigned int computed_goto(unsigned int param_1,int param_2)
{
 unsigned int uVar1;
 uint_callback_t local_18 [5];
 local_18[0] = (uint_callback_t)op_add;
 local_18[1] = (uint_callback_t)op_sub;
 local_18[2] = (uint_callback_t)op_mul;
 local_18[3] = (uint_callback_t)op_div;
 if ((-1 < param_2) && (param_2 < 4)) {
 uVar1 = local_18[param_2](param_1, param_2);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: obfuscated_cf @ 0x12fd0
int obfuscated_cf(int param_1)
{
 int local_8;
 local_8 = param_1;
 if (param_1 * param_1 + 1 < 0) {
 local_8 = param_1 * 2 + 1;
 }
 return local_8 << 1;
}

// Function: opaque_predicate @ 0x13010
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x13050
int overlapped_code(uint param_1)
{
 int local_8;
 if ((param_1 & 1) == 0) {
 local_8 = (int)param_1 / 2;
 }
 else {
 local_8 = param_1 * 3 + 1;
 }
 return local_8;
}

// Function: test_control_flow_l3 @ 0x13090
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 printf(&DAT_0001452a);
 uVar1 = non_local_jump(5);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = cpp_exception(5);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
 uVar1 = cpp_exception(0xfffffffb);
 printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",uVar1);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_18 = 0;
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 uVar1 = computed_goto(&local_18,2);
 printf("CF-L3-07 (computed_goto): %d\n",uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",uVar1);
 uVar1 = overlapped_code(5);
 printf("CF-L3-10 (overlapped_code): %d\n",uVar1);
 return;
}

// Function: main @ 0x132d0
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x13310
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: my_fini @ 0x1335c
void my_fini(void)
{
 __do_global_dtors_aux();
 return;
}

