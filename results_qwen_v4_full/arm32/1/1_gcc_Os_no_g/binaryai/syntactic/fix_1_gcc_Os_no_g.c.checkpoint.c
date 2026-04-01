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
typedef unsigned int uint;
typedef int bool;

// Missing macro definitions
#define LZCOUNT(x) ((x) == 0 ? 32 : __builtin_clz(x))
#define SBORROW4(a, b) ((int)(a) < (int)(b))

// Global variables
static int completed_0 = 0;
static char DAT_000119c0[] = "Control Flow Tests - Level 1";
static char DAT_00011c2d[] = "Control Flow Tests - Level 2";
static char DAT_00011e20[] = "Control Flow Tests - Level 3";
static char jump_buffer[256];
static char CSWTCH_56[4] = {0, 1, 2, 3};
static int DAT_000114dc = 0;
static int DAT_000114fc = 0;
static int DAT_00011504 = 0;
#define true 1
#define false 0

// Decompiled by BinaryAI
// SHA256: 23e5694befb2085e914d89c2f81e20cc92c9e095562e9b68882be96c38a6c568

// Function: <EXTERNAL>::raise @ 0x10468
int raise(int __sig)
{
 int iVar1;
 iVar1 = raise(__sig);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10474
int __libc_start_main(int (*main)(void), int argc, void **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 int iVar1;
 iVar1 = __libc_start_main(main, argc, argv, init, fini, rtld_fini, stack_end);
 return iVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x10480
typedef struct { char buf[256]; } __jmp_buf_tag;
int _setjmp(__jmp_buf_tag *__env)
{
 int iVar1;
 iVar1 = _setjmp(__env);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1048c
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10498
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x104b0
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x104bc
extern int __printf_chk(int __flag, const char *__format, ...);

// External ARM division functions
extern unsigned int __aeabi_idiv(unsigned int param_1,int param_2);
extern unsigned int __aeabi_idivmod(unsigned int param_1,int param_2);

// Function: <EXTERNAL>::__gmon_start__ @ 0x104a4
extern void __gmon_start__(void);

// Function: <EXTERNAL>::__longjmp_chk @ 0x104c8
void __longjmp_chk(__jmp_buf_tag *__env, int __val)
{
 __longjmp_chk(__env, __val);
}

// Function: <EXTERNAL>::abort @ 0x104d4
void abort(void)
{
 abort();
}

// Function: main @ 0x104e0
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: recursion_factorial @ 0x105f0
int recursion_factorial(int param_1)
{
 int iVar1;
 iVar1 = 1;
 for (; 1 < param_1; param_1 = param_1 + -1) {
 iVar1 = param_1 * iVar1;
 }
 return iVar1;
}

// Function: double_value @ 0x1060c
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10614
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x1061c
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x10624
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x1062c
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x10634
unsigned int op_div(unsigned int param_1,int param_2)
{
 unsigned int uVar1;
 if (param_2 != 0) {
 uVar1 = __aeabi_idiv(param_1, param_2);
 return uVar1;
 }
 return 0;
}

// Function: op_mod @ 0x10650
unsigned int op_mod(unsigned int param_1,int param_2)
{
 unsigned int uVar1;
 if (param_2 != 0) {
 uVar1 = __aeabi_idivmod(param_1, param_2);
 return uVar1;
 }
 return 0;
}

// Function: op_and @ 0x10670
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x10678
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x10680
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x10688
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x10690
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: state_idle @ 0x10698
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x106a8
unsigned int state_processing(int param_1)
{
 unsigned int uVar1;
 if (param_1 != 2) {
 if (param_1 == 99) {
 uVar1 = 3;
 }
 else {
 uVar1 = 1;
 }
 return uVar1;
 }
 return 2;
}

// Function: state_done @ 0x106c0
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x106c8
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x106d4
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x106e0
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}

// Function: if_else @ 0x106ec
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x106fc
int nested_if_2(int param_1,int param_2)
{
 if (0 < param_1) {
 if (0 < param_2) {
 param_1 = param_1 + param_2;
 }
 return param_1;
 }
 return 0;
}

// Function: nested_if_deep @ 0x10718
unsigned int nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int uVar1;
 if (param_1 < 1) {
 return 0;
 }
 if (param_2 < 1) {
 return 1;
 }
 if (param_3 < 1) {
 return 2;
 }
 if (param_4 < 1) {
 return 3;
 }
 if (param_5 < 1) {
 uVar1 = 4;
 }
 else {
 uVar1 = 5;
 }
 return uVar1;
}

// Function: if_elseif_chain @ 0x1076c
unsigned int if_elseif_chain(int param_1)
{
 unsigned int uVar1;
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 if (param_1 == 2) {
 uVar1 = 0x1e;
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: if_elseif_long @ 0x1079c
int if_elseif_long(uint param_1)
{
 int iVar1;
 if (param_1 < 5) {
 iVar1 = param_1 * 100 + 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x107b0
int switch_small(uint param_1)
{
 int iVar1;
 if (param_1 < 4) {
 iVar1 = (int)(char)(&CSWTCH_56)[param_1];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_large @ 0x107c8
int switch_large(uint param_1)
{
 int iVar1;
 if (param_1 < 10) {
 iVar1 = param_1 * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_default @ 0x107dc
int switch_default(int param_1)
{
 if (param_1 - 1U < 3) {
 param_1 = param_1 * 100;
 }
 else {
 param_1 = 0;
 }
 return param_1;
}

// Function: switch_fallthrough @ 0x107f4
int switch_fallthrough(int param_1)
{
 int iVar1;
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 != 1) {
 return -1;
 }
 iVar1 = 0;
 goto LAB_0001081c;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_0001081c:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x10834
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 }
 return iVar1;
}

// Function: loop_while @ 0x10854
int loop_while(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; param_1 != 0; param_1 = param_1 / 10) {
 iVar1 = iVar1 + 1;
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x1088c
int loop_dowhile(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
}

// Function: loop_nested @ 0x108b4
int loop_nested(int param_1,uint param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + (param_2 & ~((int)param_2 >> 0x1f));
 }
 return iVar1;
}

// Function: loop_break @ 0x108d8
void loop_break(int param_1)
{
 int iVar1;
 int *piVar2;
 int local_20 [4];
 unsigned int local_10;
 unsigned int local_c;
 local_c = 0;
 local_20[0] = 10;
 local_20[1] = 0x14;
 local_20[2] = 0x1e;
 local_20[3] = 0x28;
 iVar1 = 0;
 local_10 = 0x32;
 piVar2 = local_20;
 do {
 if (*piVar2 == param_1) {
 return;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return;
}

// Function: loop_continue @ 0x1095c
int loop_continue(int param_1)
{
 int iVar1;
 uint uVar2;
 iVar1 = 0;
 for (uVar2 = 1; (int)uVar2 <= param_1; uVar2 = uVar2 + 1) {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 }
 return iVar1;
}

// Function: goto_forward @ 0x10980
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}

// Function: goto_backward @ 0x10994
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 1;
 if (param_1 < 1) {
 return iVar1;
 }
 iVar2 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 <= param_1);
 return iVar1;
}

// Function: ternary_op @ 0x109b8
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x109c4
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 puts(&DAT_000119c0);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n", 1);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
 __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
 __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
 __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
 __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
 __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
 __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
 __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
 __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
 uVar1 = loop_for_fixed(10);
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
 uVar1 = loop_while(0x3039);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
 uVar1 = loop_dowhile(0x2694);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
 uVar1 = loop_nested(3,4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
 loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",0);
 loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",0);
 uVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x10c34
int loop_multi_exit(int param_1)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned int local_c;
 local_c = 0;
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 local_1c = 9;
 uStack_18 = 10;
 uStack_14 = 0xb;
 uStack_10 = 0xc;
 iVar3 = 0;
 piVar2 = &local_3c;
 do {
 iVar4 = 0;
 piVar1 = piVar2;
 do {
 if (*piVar1 == param_1) {
 return 0;
 }
 iVar4 = iVar4 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar4 != 4);
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 4;
 } while (iVar3 != 3);
 return 0;
}

// Function: infinite_loop @ 0x10ce4
int infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return 0;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0;
}

// Function: multi_return @ 0x10d18
int multi_return(uint param_1)
{
 int iVar1;
 if ((int)param_1 < 0) {
 return -1;
 }
 iVar1 = param_1 * 2;
 if (iVar1 < 0x65) {
 if ((param_1 & 1) != 0) {
 iVar1 = param_1 + 1;
 }
 return iVar1;
 }
 return -2;
}

// Function: conditional_return @ 0x10d48
int conditional_return(int param_1)
{
 if (0 < param_1) {
 return param_1 << 1;
 }
 if (param_1 != 0) {
 param_1 = -param_1;
 }
 return param_1;
}

// Function: duffs_device @ 0x10d60
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int *puVar4;
 unsigned int *puVar5;
 if ((int)param_3 < 1) {
 return 0xffffffff;
 }
 iVar3 = (int)(param_3 + 7) >> 3;
 puVar2 = param_2;
 puVar1 = param_2;
 puVar5 = param_1;
 puVar4 = param_1;
 switch(param_3 & 7) {
 case 1:
 break;
 case 2:
 goto switchD_00010d80_caseD_2;
 case 3:
 goto switchD_00010d80_caseD_3;
 case 4:
 goto switchD_00010d80_caseD_4;
 case 5:
 goto switchD_00010d80_caseD_5;
 case 6:
 goto switchD_00010d80_caseD_6;
 case 7:
 goto switchD_00010d80_caseD_7;
 default:
 goto switchD_00010d80_caseD_7;
 }
switchD_00010d80_caseD_1:
 iVar3 = iVar3 + -1;
 *param_1 = *param_2;
 if (iVar3 == 0) {
 return param_3;
 }
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00010d80_caseD_7:
 puVar1 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d80_caseD_6_label:
 puVar2 = puVar1 + 1;
 puVar5 = puVar4 + 1;
 *puVar4 = *puVar1;
switchD_00010d80_caseD_6:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
switchD_00010d80_caseD_5:
 puVar2 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d80_caseD_4:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
switchD_00010d80_caseD_3:
 puVar2 = param_2 + 1;
 puVar5 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010d80_caseD_2:
 param_2 = puVar2 + 1;
 param_1 = puVar5 + 1;
 *puVar5 = *puVar2;
 goto switchD_00010d80_caseD_1;
}

// Function: loop_complex_cond @ 0x10e00
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 bool bVar4;
 iVar3 = 0;
 while( true ) {
 iVar2 = param_1 - iVar3;
 bVar4 = SBORROW4(iVar3,9);
 iVar1 = iVar3 + -9;
 if (iVar3 < 10) {
 bVar4 = SBORROW4(iVar3 * 2,iVar2);
 iVar1 = iVar3 * 2 - iVar2;
 }
 if (iVar1 < 0 == bVar4) break;
 iVar3 = iVar3 + 1;
 }
 return iVar3 * 3 + iVar2;
}

// Function: loop_modify_var @ 0x10e2c
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + iVar2;
 if (5 < iVar2) {
 iVar2 = iVar2 + 2;
 }
 }
 return iVar1;
}

// Function: loop_external_state @ 0x10e54
int loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return 0;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return 0;
}

// Function: tail_recursion @ 0x10e78
int tail_recursion(int param_1,int param_2)
{
 for (; 1 < param_1; param_1 = param_1 + -1) {
 param_2 = param_1 * param_2;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x10e94
uint indirect_recursion_a(uint param_1,int param_2)
{
 do {
 if (param_2 < 1) {
 return param_1;
 }
 if ((param_1 & 1) == 0) {
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 else {
 if (param_2 == 1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 }
 param_2 = param_2 + -2;
 } while( true );
}

// Function: call_func_ptr @ 0x10edc
typedef unsigned int (*func_ptr_uint)(unsigned int);
unsigned int call_func_ptr(func_ptr_uint func,unsigned int param_2)
{
 unsigned int uVar1;
 uVar1 = func(param_2);
 return uVar1;
}

// Function: call_func_ptr_array @ 0x10ee8
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 func_ptr_uint apcStack_18 [4];
 apcStack_18[3] = (func_ptr_uint)0x0;
 apcStack_18[0] = (func_ptr_uint)double_value;
 apcStack_18[1] = (func_ptr_uint)triple_value;
 apcStack_18[2] = (func_ptr_uint)recursion_factorial;
 if (param_1 < 3) {
 uVar1 = apcStack_18[param_1](param_2);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: call_virtual_func @ 0x10f80
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x10f88
int process_with_callback(int param_1,int param_2,func_ptr_uint param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar3 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = param_3(*(unsigned int *)(param_1 + iVar2 * 4));
 iVar3 = iVar3 + iVar1;
 }
 return iVar3;
}

// Function: test_control_flow_l2 @ 0x10fc4
void test_control_flow_l2(void)
{
 unsigned int uVar1;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int uStack_64;
 unsigned int uStack_60;
 unsigned int uStack_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int uStack_50;
 unsigned int uStack_4c;
 unsigned int uStack_48;
 unsigned int local_44;
 unsigned int uStack_40;
 unsigned int uStack_3c;
 unsigned int uStack_38;
 char auStack_34 [32];
 int local_14;
 local_14 = 0;
 puts(&DAT_00011c2d);
 uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_70 = 0;
 uVar1 = infinite_loop(&local_70);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
 __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
 __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
 local_54 = 1;
 uStack_50 = 2;
 uStack_4c = 3;
 uStack_48 = 4;
 local_44 = 5;
 uStack_40 = 6;
 uStack_3c = 7;
 uStack_38 = 8;
 memset(auStack_34,0,0x20);
 uVar1 = duffs_device(auStack_34,&local_54,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
 uVar1 = loop_complex_cond(10);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
 uVar1 = loop_modify_var(10);
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
 local_6c = 0;
 uVar1 = loop_external_state(&local_6c);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",uVar1);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 uVar1 = indirect_recursion_a(6,1);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
 uVar1 = call_func_ptr(double_value,5);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
 uVar1 = call_func_ptr_array(0,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 uVar1 = call_func_ptr_array(2,5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
 local_68 = 1;
 uStack_64 = 2;
 uStack_60 = 3;
 uStack_5c = 4;
 local_58 = 5;
 uVar1 = process_with_callback(&local_68,5,double_value);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: non_local_jump @ 0x1123c
int non_local_jump(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
 if (iVar1 != 0) {
 return -1;
 }
 if (param_1 < 0) {
 uVar2 = 1;
 }
 else {
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 uVar2 = 2;
 }
 __longjmp_chk(&jump_buffer,uVar2);
}

// Function: cpp_exception @ 0x11294
int cpp_exception(int param_1)
{
 if (param_1 < 0) {
 return -1;
 }
 if (param_1 < 0x65) {
 return param_1 << 1;
 }
 return -2;
}

// Function: large_jump_table @ 0x112bc
typedef unsigned int (*func_ptr_two)(unsigned int, unsigned int);
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 func_ptr_two apcStack_3c [10];
 unsigned int local_14;
 local_14 = 0;
 apcStack_3c[0] = (func_ptr_two)op_add;
 apcStack_3c[1] = (func_ptr_two)op_sub;
 apcStack_3c[2] = (func_ptr_two)op_mul;
 apcStack_3c[3] = (func_ptr_two)op_div;
 apcStack_3c[4] = (func_ptr_two)op_mod;
 apcStack_3c[5] = (func_ptr_two)op_and;
 apcStack_3c[6] = (func_ptr_two)op_or;
 apcStack_3c[7] = (func_ptr_two)op_xor;
 apcStack_3c[8] = (func_ptr_two)op_shl;
 apcStack_3c[9] = (func_ptr_two)op_shr;
 if (param_1 < 10) {
 uVar1 = apcStack_3c[param_1](param_2,param_3);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: conditional_func_ptr @ 0x1136c
unsigned int conditional_func_ptr(int param_1,unsigned int param_2)
{
 unsigned int (*UNRECOVERED_JUMPTABLE)(unsigned int);
 unsigned int uVar1;
 if (param_1 == 0) {
 UNRECOVERED_JUMPTABLE = double_value;
 }
 else {
 UNRECOVERED_JUMPTABLE = triple_value;
 if (param_1 != 1) {
 UNRECOVERED_JUMPTABLE = recursion_factorial;
 }
 }
 uVar1 = UNRECOVERED_JUMPTABLE(param_2);
 return uVar1;
}

// Function: state_machine @ 0x113a0
uint state_machine(int param_1,uint param_2)
{
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 if (param_1 != 2) {
 if (param_1 == 99) {
 param_2 = 3;
 }
 return param_2;
 }
 param_2 = 2;
switchD_000113ac_caseD_2:
 return param_2;
 case 2:
 goto switchD_000113ac_caseD_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
}

// Function: fsm_func_table @ 0x11404
typedef unsigned int (*func_ptr_state)(unsigned int);
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 func_ptr_state apcStack_1c [4];
 unsigned int local_c;
 local_c = 0;
 apcStack_1c[0] = (func_ptr_state)state_idle;
 apcStack_1c[1] = (func_ptr_state)state_processing;
 apcStack_1c[2] = (func_ptr_state)state_done;
 apcStack_1c[3] = (func_ptr_state)state_error;
 if (param_2 < 4) {
 uVar1 = apcStack_1c[param_2](param_1);
 return uVar1;
 }
 return 3;
}

// Function: computed_goto @ 0x1149c
unsigned int computed_goto(unsigned int *param_1,uint param_2)
{
 unsigned int uVar1;
 if (3 < param_2) {
 return 0;
 }
 uVar1 = param_1[param_2];
 return uVar1;
}

// Function: obfuscated_cf @ 0x11524
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x1152c
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x11534
int overlapped_code(uint param_1)
{
 int iVar1;
 if ((param_1 & 1) == 0) {
 iVar1 = (int)param_1 / 2;
 }
 else {
 iVar1 = param_1 * 3 + 1;
 }
 return iVar1;
}

// Function: test_control_flow_l3 @ 0x1154c
void test_control_flow_l3
 (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 iVar2 = 0;
 local_1c = param_2;
 uStack_18 = param_3;
 uStack_14 = param_4;
 puts(&DAT_00011e20);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = large_jump_table(0,10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 uVar1 = conditional_func_ptr(0,5);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
 uVar1 = state_machine(2,1);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",uVar1);
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 uVar1 = computed_goto(&local_1c,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (iVar2 != 0) {
 __stack_chk_fail();
 }
 return;
}



// Function: __aeabi_idiv0 @ 0x11914
void __aeabi_idiv0(void)
{
 raise(8);
 return;
}

