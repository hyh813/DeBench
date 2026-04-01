/* Auto-injected type definitions by preprocessor */
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uint32_tptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uint32_tmax_t;

// Standard types for setjmp/longjmp
typedef unsigned char byte;

typedef struct __jmp_buf_tag {
    long __jb[22];
    long __fl;
    long __ss[64];
    int __sv[8];
    int __mask;
    int __flags;
} __jmp_buf_tag[1];

// Define bool type
typedef int bool;
#define true 1
#define false 0

// External symbols
extern int __gmon_start__(void);
extern void *__dso_handle;
extern int __libc_start_main(int (*main)(void), void *argc, void *argv, void (*destructor)(void), void *stack_end, unsigned long rtld_fini, void *stack_start);
extern int _setjmp(void *);
extern void __cxa_finalize(void *);
extern void longjmp(void *__env, int __val);
extern void *memcpy(void *__dest, const void *__src, size_t __n);

// Global variables
char completed_0 = 0;
__jmp_buf_tag jump_buffer;

// Function prototypes
int main(void);

// Forward declarations for operator functions
int op_add(int param_1, int param_2);
int op_sub(int param_1, int param_2);
int op_mul(int param_1, int param_2);
unsigned int op_div(int param_1, int param_2);
int op_mod(int param_1, int param_2);
uint32_t op_and(uint32_t param_1, uint32_t param_2);
uint32_t op_or(uint32_t param_1, uint32_t param_2);
uint32_t op_xor(uint32_t param_1, uint32_t param_2);
int op_shl(int param_1, int param_2);
int op_shr(int param_1, int param_2);

// Forward declarations for state functions
bool state_idle(int param_1);
unsigned int state_processing(int param_1);
unsigned long long state_done(void);
unsigned long long state_error(int param_1);

// Forward declarations for functions used before definition
int indirect_recursion_b(int param_1, int param_2);
int double_value(int param_1);
int triple_value(int param_1);

// Data symbols (format strings and constant arrays)
char DAT_001030e4[] = "Control Flow Tests - Level 1\n";
char DAT_00103352[] = "Control Flow Tests - Level 2\n";
char DAT_00103546[] = "Control Flow Tests - Level 3\n";
char DAT_001030a0[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

// Data symbols for computed_goto (function pointers)
unsigned long long (*DAT_00102b39)(void);
unsigned long long (*DAT_00102b45)(void);
unsigned long long (*DAT_00102b51)(void);
unsigned long long (*DAT_00102b5d)(void);

// Decompiled by BinaryAI
// SHA256: 602e296222cdb926e21948e7d6d865c4c9fdecfbcce073211c00bf05af2321d7

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Empty function - was calling NULL
 return;
}

// External printf declaration
extern int printf(char *__format, ...);

// External memset declaration
extern void * memset(void *__s, int __c, size_t __n);

// Function: <EXTERNAL>::memset @ 0x101040
// External memset declaration - properly declared at top

// Function: <EXTERNAL>::_setjmp @ 0x101050
// External _setjmp declaration - properly declared at top

// Function: <EXTERNAL>::memcpy @ 0x101060
// Uses extern declaration at top - no local implementation needed

// Function: <EXTERNAL>::longjmp @ 0x101070
// Uses extern declaration at top - no local implementation needed

// Function: <EXTERNAL>::__cxa_finalize @ 0x101080
// Uses extern declaration at top - no local implementation needed

// Function: _start @ 0x101090
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,(void *)param_2,&auStack_8,0,&auStack_8,param_1,&auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1010c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1010f0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101130
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
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

// Structure for switch_small return value
typedef struct {
    uint32_t field_0;
    uint32_t field_4;
    uint64_t field_8;
} switch_small_ret_t;

// Function: switch_small @ 0x1013d0
switch_small_ret_t switch_small(unsigned int param_1,unsigned long long param_2,unsigned long long param_3)
{
 switch_small_ret_t auVar1;
 uint32_t local_c;
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
 param_3 = 0;
 break;
 default:
 local_c = 0xffffffff;
 }
 auVar1.field_4 = 0;
 auVar1.field_0 = local_c;
 auVar1.field_8 = param_3;
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

// Structure for loop_while return value
typedef struct {
    uint32_t field_0;
    uint32_t field_4;
    uint64_t field_8;
} loop_while_ret_t;

// Function: loop_while @ 0x101630
loop_while_ret_t loop_while(int param_1,unsigned long long param_2,unsigned long param_3)
{
 loop_while_ret_t auVar1;
 uint32_t local_14;
 uint32_t local_10;
 int local_c;
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
 auVar1.field_4 = 0;
 auVar1.field_0 = local_14;
 auVar1.field_8 = param_3;
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
 local_14 = param_2;
 if (param_2 < param_1) {
 local_14 = param_1;
 }
 return local_14;
}

// Function: test_control_flow_l1 @ 0x1018f0
void test_control_flow_l1(void)
{
 uint32_t uVar1;
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
 uVar1 = nested_if_deep(1,1,1,1);
 printf("CF-L1-05 (nested_if_deep): %d\n",(unsigned long)uVar1);
 uVar1 = if_elseif_chain(1);
 printf("CF-L1-06 (if_elseif_chain): %d\n",(unsigned long)uVar1);
 uVar1 = if_elseif_long(3);
 printf("CF-L1-07 (if_elseif_long): %d\n",(unsigned long)uVar1);
 switch_small_ret_t switch_small_result = switch_small(2, 0, 0);
 printf("CF-L1-08 (switch_small): %d\n",(unsigned long)switch_small_result.field_0);
 uVar1 = switch_large(7);
 printf("CF-L1-09 (switch_large): %d\n",(unsigned long)uVar1);
 uVar1 = switch_default(5);
 printf("CF-L1-10 (switch_default): %d\n",(unsigned long)uVar1);
 uVar1 = switch_fallthrough(3);
 printf("CF-L1-11 (switch_fallthrough): %d\n",(unsigned long)uVar1);
 uVar1 = loop_for_fixed(10);
 printf("CF-L1-12 (loop_for_fixed): %d\n",(unsigned long)uVar1);
 loop_while_ret_t loop_while_result = loop_while(0x3039, 0, 0);
 printf("CF-L1-13 (loop_while): %d\n",(unsigned long)loop_while_result.field_0);
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
 if ((uint32_t)(param_3 % 8) < 8) {
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
 local_c = indirect_recursion_b
 ((long)param_1 / 2 & 0xffffffff,param_2 + -1);
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
void call_func_ptr(int (*param_1)(int),unsigned int param_2)
{
 (*param_1)(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x102220
typedef int (*func_ptr_t)(int);
unsigned int call_func_ptr_array(int param_1,unsigned int param_2)
{
 func_ptr_t local_38 [3];
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
int process_with_callback(int *param_1,int param_2,void *param_3)
{
 int iVar1;
 int local_28;
 int local_24;
 local_24 = 0;
 for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
 iVar1 = (*param_3)(*(unsigned int *)(param_1 + (long)local_28 * 4));
 local_24 = iVar1 + local_24;
 }
 return local_24;
}

// Function: test_control_flow_l2 @ 0x102330
void test_control_flow_l2(void)
{
 uint32_t uVar1;
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
 int local_c = 0;
 uVar1 = infinite_loop(&local_c);
 printf("CF-L2-02 (infinite_loop): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(0xfffffffb);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(100);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 uVar1 = multi_return(3);
 printf("CF-L2-03 (multi_return): %d\n",(unsigned long)uVar1);
 conditional_return(5);
 printf("CF-L2-04 (conditional_return): called\n");
 conditional_return(0xfffffffb);
 printf("CF-L2-04 (conditional_return): called\n");
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
 call_func_ptr((void *)double_value,5);
 printf("CF-L2-12 (call_func_ptr): called\n");
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
 int (*local_68[10])(int, int);
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 unsigned int local_c;
 local_18 = param_3;
 local_14 = param_2;
 local_10 = param_1;
 local_68[0] = op_add;
 local_68[1] = op_sub;
 local_68[2] = op_mul;
 local_68[3] = (int (*)(int, int))op_div;
 local_68[4] = op_mod;
 local_68[5] = (int (*)(int, int))op_and;
 local_68[6] = (int (*)(int, int))op_or;
 local_68[7] = (int (*)(int, int))op_xor;
 local_68[8] = (int (*)(int, int))op_shl;
 local_68[9] = (int (*)(int, int))op_shr;
 if ((local_10 < 0) || (9 < local_10)) {
 local_c = 0xffffffff;
 }
 else {
 local_c = (*local_68[local_10])(local_14,local_18);
 }
 return local_c;
}

// Function: op_add @ 0x102700
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x102720
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x102740
int op_mul(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: op_div @ 0x102760
unsigned int op_div(int param_1,int param_2)
{
 uint32_t local_14;
 if (param_2 == 0) {
 local_14 = 0;
 }
 else {
 local_14 = param_1 / param_2;
 }
 return local_14;
}

// Function: op_mod @ 0x1027a0
int op_mod(int param_1,int param_2)
{
 int local_14;
 if (param_2 == 0) {
 local_14 = 0;
 }
 else {
 local_14 = param_1 % param_2;
 }
 return local_14;
}

// Function: op_and @ 0x1027e0
uint32_t op_and(uint32_t param_1,uint32_t param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x102800
uint32_t op_or(uint32_t param_1,uint32_t param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x102820
uint32_t op_xor(uint32_t param_1,uint32_t param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x102840
int op_shl(int param_1,int param_2)
{
 return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x102860
int op_shr(int param_1,int param_2)
{
 return param_1 >> (param_2 & 0x1f);
}

// Function: conditional_func_ptr @ 0x102880
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *local_18;
 if (param_1 == 0) {
 local_18 = double_value;
 }
 else if (param_1 == 1) {
 local_18 = triple_value;
 }
 else {
 local_18 = recursion_factorial;
 }
 (*local_18)(param_2);
 return;
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
 void *local_38 [4];
 int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_10 = param_1;
 local_14 = param_2;
 local_38[0] = state_idle;
 local_38[1] = state_processing;
 local_38[2] = state_done;
 local_38[3] = state_error;
 if ((param_2 < 0) || (3 < param_2)) {
 local_c = 3;
 }
 else {
 local_c = (*local_38[param_2])(param_1);
 }
 return local_c;
}

// Function: state_idle @ 0x102a40
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x102a60
unsigned int state_processing(int param_1)
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
unsigned long long state_done(void)
{
 return 2;
}

// Function: state_error @ 0x102ab0
unsigned long long state_error(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 3;
 if (param_1 == 0) {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: computed_goto @ 0x102ad0
unsigned long long computed_goto(unsigned long long param_1,int param_2)
{
 unsigned long long uVar1;
 unsigned long long (*local_48[4])(void);
 int local_1c;
 unsigned long long local_18;
 local_18 = param_1;
 local_1c = param_2;
 local_48[0] = (unsigned long long (*)(void))&DAT_00102b39;
 local_48[1] = (unsigned long long (*)(void))&DAT_00102b45;
 local_48[2] = (unsigned long long (*)(void))&DAT_00102b51;
 local_48[3] = (unsigned long long (*)(void))&DAT_00102b5d;
 if ((-1 < param_2) && (param_2 < 4)) {
 uVar1 = (*local_48[param_2])();
 return uVar1;
 }
 return 0xffffffff;
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

// Structure for overlapped_code return value
typedef struct {
    uint32_t field_0;
    uint32_t field_4;
    uint64_t field_8;
} overlapped_code_ret_t;

// Function: overlapped_code @ 0x102bf0
overlapped_code_ret_t overlapped_code(uint32_t param_1,unsigned long long param_2,unsigned long param_3)
{
 overlapped_code_ret_t auVar1;
 uint32_t local_c;
 if ((param_1 & 1) == 0) {
 local_c = (int)param_1 / 2;
 param_3 = (long)(int)param_1 % 2 & 0xffffffff;
 }
 else {
 local_c = param_1 * 3 + 1;
 }
 auVar1.field_4 = 0;
 auVar1.field_0 = local_c;
 auVar1.field_8 = param_3;
 return auVar1;
}

// Function: test_control_flow_l3 @ 0x102c30
void test_control_flow_l3(void)
{
 uint32_t uVar1;
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
 uVar1 = large_jump_table(0,10,5);
 printf("CF-L3-03 (large_jump_table): %d\n",(unsigned long)uVar1);
 uVar1 = conditional_func_ptr(0,5);
 printf("CF-L3-04 (conditional_func_ptr): %d\n",(unsigned long)uVar1);
 uVar1 = state_machine(1,0);
 printf("CF-L3-05 (state_machine): %d\n",(unsigned long)uVar1);
 uVar1 = fsm_func_table(2,1);
 printf("CF-L3-06 (fsm_func_table): %d\n",(unsigned long)uVar1);
 local_18 = 0x100000000;
 local_10 = 0x300000002;
 uVar1 = computed_goto(&local_18,2);
 printf("CF-L3-07 (computed_goto): %d\n",(unsigned long)uVar1);
 uVar1 = obfuscated_cf(5);
 printf("CF-L3-08 (obfuscated_cf): %d\n",(unsigned long)uVar1);
 uVar1 = opaque_predicate(5);
 printf("CF-L3-09 (opaque_predicate): %d\n",(unsigned long)uVar1);
 overlapped_code_ret_t overlapped_code_result = overlapped_code(5, 0, 0, 0);
 printf("CF-L3-10 (overlapped_code): %d\n",(unsigned long)overlapped_code_result.field_0);
 return;
}

// Function: main @ 0x102db0
unsigned long long main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _fini @ 0x102dd8
void _fini(void)
{
 return;
}

