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
#define true 1
#define false 0

// Forward declarations
unsigned int main(void);

// Standard jmp_buf definition
typedef unsigned long jmp_buf[40];

// External library function declarations
int puts(const char *__s);
void *memset(void *__s, int __c, size_t __n);
int _setjmp(jmp_buf *__env);
void __longjmp_chk(jmp_buf __env, int __val);
void __stack_chk_fail(void);
int raise(int __sig);
void abort(void);
int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
unsigned int __aeabi_idiv(unsigned int param_1, unsigned int param_2);
unsigned int __aeabi_idivmod(unsigned int param_1, unsigned int param_2);
void __aeabi_idiv0(int param_1);
void __gmon_start__(void);
int __printf_chk(int __flag, const char *__fmt, ...);
int LZCOUNT(unsigned int x);
int SBORROW4(int a, int b);

// Global variables
char completed_0 = 0;
char jump_buffer[160];  // 40 * sizeof(long) for jmp_buf
void *stack0x00000004 = 0;  // Stack pointer placeholder

// Data labels
char DAT_00011ba4[] = "Control Flow Tests - Level 1\n";
char DAT_00011e2c[] = "Control Flow Tests - Level 2\n";
char DAT_00012030[] = "Control Flow Tests - Level 3\n";

// Function pointers for computed_goto
void (*DAT_00011694)(void) = (void (*)(void))0x11694;
void (*DAT_000116b8)(void) = (void (*)(void))0x116b8;
void (*DAT_000116c0)(void) = (void (*)(void))0x116c0;
void (*DAT_000116c8)(void) = (void (*)(void))0x116c8;

// Decompiled by BinaryAI
// SHA256: 105ccac26bdea94dbb394e09f9c309c110513a334eceb6c84fd2450dbf1dfe42

// Function: _init @ 0x10448
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// External library function stubs (no implementations - provided by libc)
extern int raise(int __sig);
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int _setjmp(jmp_buf *__env);
extern void __stack_chk_fail(void);
extern int puts(const char *__s);
extern void *memset(void *__s, int __c, size_t __n);
extern int __printf_chk(int __flag, const char *__fmt, ...);
int SBORROW4(int a, int b);
int LZCOUNT(unsigned int x);
extern void __longjmp_chk(jmp_buf __env, int __val);
extern void abort(void);

// Function: _start @ 0x104e0
void _start(unsigned int param_1, unsigned int param_2)
{
 __libc_start_main(main, param_2, &stack0x00000004, 0, 0, 0, param_1);
 abort();
}

// Function: call_weak_fn @ 0x10524
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10548
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10574
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x105ac
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: recursion_factorial @ 0x105d8
int recursion_factorial(int param_1)
{
 int iVar1;
 if (1 < param_1) {
 iVar1 = recursion_factorial(param_1 + -1);
 return param_1 * iVar1;
 }
 return 1;
}

// Function: double_value @ 0x10600
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10608
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x10610
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x10618
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x10620
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x10628
unsigned int op_div(unsigned int param_1, unsigned int param_2)
{
 if (param_2 != 0) {
 return __aeabi_idiv(param_1, param_2);
 }
 return 0;
}

// Function: op_mod @ 0x10644
unsigned int op_mod(unsigned int param_1,unsigned int param_2)
{
 unsigned int quotient;
 if (param_2 != 0) {
 quotient = __aeabi_idiv(param_1, param_2);
 return param_1 - quotient * param_2;
 }
 return 0;
}

// Function: op_and @ 0x10664
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x1066c
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x10674
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x1067c
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x10684
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: state_idle @ 0x1068c
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x1069c
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

// Function: state_done @ 0x106b4
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x106bc
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x106c8
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x106d4
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}

// Function: if_else @ 0x106e0
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x106f0
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

// Function: nested_if_deep @ 0x1070c
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

// Function: if_elseif_chain @ 0x10760
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

// Function: if_elseif_long @ 0x10790
unsigned int if_elseif_long(unsigned int param_1)
{
 switch(param_1) {
 case 0:
 return 100;
 case 1:
 return 200;
 case 2:
 return 300;
 case 3:
 return 400;
 case 4:
 return 500;
 default:
 return 0xffffffff;
 }
}

// Function: switch_small @ 0x107e0
unsigned int switch_small(unsigned int param_1)
{
 switch(param_1) {
 case 0:
 return 0xf;
 case 1:
 return 5;
 case 2:
 return 0x32;
 case 3:
 return 2;
 default:
 return 0xffffffff;
 }
}

// Function: switch_large @ 0x10824
unsigned int switch_large(unsigned int param_1)
{
 switch(param_1) {
 case 0:
 break;
 case 1:
 return 10;
 case 2:
 return 0x14;
 case 3:
 return 0x1e;
 case 4:
 return 0x28;
 case 5:
 return 0x32;
 case 6:
 return 0x3c;
 case 7:
 return 0x46;
 case 8:
 return 0x50;
 case 9:
 return 0x5a;
 default:
 param_1 = 0xffffffff;
 }
 return param_1;
}

// Function: switch_default @ 0x108a8
unsigned int switch_default(int param_1)
{
 unsigned int uVar1;
 if (param_1 == 2) {
 return 200;
 }
 if (param_1 == 3) {
 return 300;
 }
 if (param_1 == 1) {
 uVar1 = 100;
 }
 else {
 uVar1 = 0;
 }
 return uVar1;
}

// Function: switch_fallthrough @ 0x108d8
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
 goto LAB_00010908;
 }
 iVar1 = 0xc;
 }
 iVar1 = iVar1 + param_1 * 2;
LAB_00010908:
 return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x10918
int loop_for_fixed(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + iVar2;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: loop_while @ 0x10944
int loop_while(int param_1)
{
 int iVar1;
 if (param_1 == 0) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 }
 if (iVar1 < 1) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: loop_dowhile @ 0x10980
int loop_dowhile(int param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 param_1 = param_1 / 10;
 } while (param_1 != 0);
 return iVar1;
}

// Function: loop_nested @ 0x109a8
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 int iVar3;
 if (0 < param_1) {
 iVar1 = 0;
 iVar2 = iVar1;
 do {
 if (0 < param_2) {
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (param_2 != iVar3);
 iVar1 = iVar3 + iVar1;
 }
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 return iVar1;
 }
 return 0;
}

// Function: loop_break @ 0x109ec
int loop_break(int param_1)
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
 local_10 = 0x32;
 iVar1 = 0;
 piVar2 = local_20;
 do {
 if (*piVar2 == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return iVar1;
}

// Function: loop_continue @ 0x10a70
int loop_continue(int param_1)
{
 int iVar1;
 uint uVar2;
 if (0 < param_1) {
 uVar2 = 1;
 iVar1 = 0;
 do {
 if ((uVar2 & 1) != 0) {
 iVar1 = iVar1 + uVar2;
 }
 uVar2 = uVar2 + 1;
 } while (uVar2 != param_1 + 1U);
 return iVar1;
 }
 return 0;
}

// Function: goto_forward @ 0x10aa4
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}

// Function: goto_backward @ 0x10ab8
int goto_backward(int param_1)
{
 int iVar1;
 int iVar2;
 if (0 < param_1) {
 iVar2 = 1;
 iVar1 = 1;
 do {
 iVar1 = iVar2 * iVar1;
 iVar2 = iVar2 + 1;
 } while (iVar2 != param_1 + 1);
 return iVar1;
 }
 return 1;
}

// Function: ternary_op @ 0x10ae8
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10af4
void test_control_flow_l1(void)
{
 unsigned int uVar1;
 puts(&DAT_00011ba4);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",if_else(5) != 0);
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
 uVar1 = loop_break(0x1e);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_break(99);
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
 uVar1 = loop_continue(10);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 uVar1 = goto_backward(5);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",uVar1);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
}

// Function: loop_multi_exit @ 0x10d6c
void loop_multi_exit(int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
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
 piVar4 = &local_3c;
 iVar1 = 0;
 do {
 iVar3 = 0;
 piVar2 = piVar4;
 do {
 if (*piVar2 == param_1) {
 return;
 }
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 4);
 iVar1 = iVar1 + 1;
 piVar4 = piVar4 + 4;
 } while (iVar1 != 3);
 return;
}

// Function: infinite_loop @ 0x10e1c
void infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return;
}

// Function: multi_return @ 0x10e50
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

// Function: conditional_return @ 0x10e80
int conditional_return(int param_1)
{
 if (param_1 < 1) {
 if (param_1 < 0) {
 param_1 = -param_1;
 }
 else {
 param_1 = 0;
 }
 return param_1;
 }
 return param_1 << 1;
}

// Function: duffs_device @ 0x10ea0
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int iVar5;
 uint uVar6;
 if (0 < (int)param_3) {
 iVar5 = param_3 + 7;
 if (iVar5 < 0) {
 iVar5 = param_3 + 0xe;
 }
 iVar5 = iVar5 >> 3;
 uVar6 = param_3 & 7;
 if ((int)param_3 < 1) {
 uVar6 = -(-param_3 & 7);
 }
 puVar1 = param_2;
 puVar2 = param_2;
 puVar3 = param_1;
 puVar4 = param_1;
 switch(uVar6) {
 case 0:
 goto switchD_00010ed0_caseD_0;
 case 1:
 goto switchD_00010ed0_caseD_1;
 case 2:
 goto switchD_00010ed0_caseD_2;
 case 3:
 goto switchD_00010ed0_caseD_3;
 case 4:
 goto switchD_00010ed0_caseD_4;
 case 5:
 goto switchD_00010ed0_caseD_5;
 case 6:
 goto switchD_00010ed0_caseD_6;
 case 7:
 goto switchD_00010ed0_caseD_7;
 default:
 return param_3;
 }
 }
 return 0xffffffff;
switchD_00010ed0_caseD_0:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ed0_caseD_7:
 puVar2 = puVar1 + 1;
 puVar4 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010ed0_caseD_6:
 param_2 = puVar2 + 1;
 param_1 = puVar4 + 1;
 *puVar4 = *puVar2;
switchD_00010ed0_caseD_5:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ed0_caseD_4:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010ed0_caseD_3:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010ed0_caseD_2:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010ed0_caseD_1:
 *param_1 = *param_2;
 iVar5 = iVar5 + -1;
 if (iVar5 < 1) {
 return param_3;
 }
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 goto switchD_00010ed0_caseD_0;
}

// Function: loop_complex_cond @ 0x10f5c
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 bool bVar5;
 if (param_1 < 1) {
 iVar3 = 0;
 iVar4 = iVar3;
 }
 else {
 iVar4 = 0;
 iVar2 = 0;
 do {
 iVar4 = iVar4 + 2;
 param_1 = param_1 + -1;
 iVar3 = iVar2 + 1;
 bVar5 = SBORROW4(iVar3,9);
 iVar1 = iVar2 + -8;
 if (iVar3 < 10) {
 bVar5 = SBORROW4(iVar4,param_1);
 iVar1 = iVar4 - param_1;
 }
 iVar2 = iVar3;
 } while (0 < param_1 && iVar1 < 0 != bVar5);
 }
 return iVar4 + param_1 + iVar3;
}

// Function: loop_modify_var @ 0x10fb4
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 if (param_1 < 1) {
 return 0;
 }
 iVar2 = 0;
 iVar3 = iVar2;
 while (iVar4 = iVar3 + 1, iVar4 < param_1) {
 iVar2 = iVar2 + iVar4;
 iVar1 = iVar3 + -4;
 if (5 < iVar4) {
 iVar3 = iVar3 + 3;
 }
 if (iVar4 == 5 || iVar1 < 0 != SBORROW4(iVar4,5)) {
 iVar3 = iVar4;
 }
 }
 return iVar2;
}

// Function: loop_external_state @ 0x10fec
void loop_external_state(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 != 0) {
 return;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x65);
 return;
}

// Function: tail_recursion @ 0x11010
int tail_recursion(int param_1,int param_2)
{
 int iVar1;
 if (1 < param_1) {
 iVar1 = tail_recursion(param_1 + -1,param_1 * param_2);
 return iVar1;
 }
 return param_2;
}

// Function: indirect_recursion_a @ 0x11034
uint indirect_recursion_a(uint param_1,int param_2)
{
 uint uVar1;
 if (param_2 < 1) {
 return param_1;
 }
 if ((param_1 & 1) != 0) {
 if (1 < param_2) {
 uVar1 = indirect_recursion_a(param_1 * 3 + 2,param_2 + -2);
 return uVar1;
 }
 return param_1 * 3 + 1;
 }
 if (param_2 < 2) {
 return (int)param_1 / 2;
 }
 uVar1 = indirect_recursion_a((int)param_1 / 2 + 1,param_2 + -2);
 return uVar1;
}

// Function: call_func_ptr @ 0x1108c
unsigned int call_func_ptr(unsigned int (*param_1)(int), unsigned int param_2)
{
 return param_1(param_2);
}

// Function: call_func_ptr_array @ 0x110a0
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 int (*apcStack_18 [3])(int);
 int local_c;
 local_c = 0;
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 if (param_1 < 3) {
 uVar1 = (*apcStack_18[param_1])(param_2);
 }
 else {
 uVar1 = 0x10608ffffffff;
 }
 if (local_c == 0) {
 return (unsigned int)uVar1;
 }
 __stack_chk_fail();
 return (unsigned int)uVar1;
}

// Function: call_virtual_func @ 0x11120
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x11128
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 unsigned int *puVar3;
 int iVar4;
 if (param_2 < 1) {
 iVar4 = 0;
 }
 else {
 puVar3 = (unsigned int *)(param_1 + -4);
 iVar2 = 0;
 iVar4 = 0;
 do {
 puVar3 = puVar3 + 1;
 iVar1 = (*param_3)(*puVar3);
 iVar4 = iVar4 + iVar1;
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar4;
}

// Function: test_control_flow_l2 @ 0x1116c
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
 puts(&DAT_00011e2c);
 uVar1 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
 local_70 = 0;
 infinite_loop(&local_70);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",local_70);
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
 loop_external_state(&local_6c);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",local_6c);
 uVar1 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
 uVar1 = tail_recursion(5,1);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",uVar1);
 uVar1 = indirect_recursion_a(10,3);
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
 if (local_14 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: non_local_jump @ 0x11404
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp((jmp_buf *)&jump_buffer);
 if (iVar1 == 0) {
 if (param_1 < 0) {
 __longjmp_chk(&jump_buffer,1);
 }
 if (100 < param_1) {
 __longjmp_chk(&jump_buffer,2);
 }
 param_1 = param_1 << 1;
 }
 else {
 param_1 = -1;
 }
 return param_1;
}

// Function: cpp_exception @ 0x1146c
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

// Function: large_jump_table @ 0x11494
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 unsigned int (*apcStack_3c[10])(unsigned int, unsigned int);
 int local_14;
 local_14 = 0;
 apcStack_3c[0] = op_add;
 apcStack_3c[1] = op_sub;
 apcStack_3c[2] = op_mul;
 apcStack_3c[3] = op_div;
 apcStack_3c[4] = op_mod;
 apcStack_3c[5] = op_and;
 apcStack_3c[6] = op_or;
 apcStack_3c[7] = op_xor;
 apcStack_3c[8] = op_shl;
 apcStack_3c[9] = op_shr;
 if (param_1 < 10) {
 uVar1 = (*apcStack_3c[param_1])(param_2,param_3);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: conditional_func_ptr @ 0x1152c
void conditional_func_ptr(int param_1,unsigned int param_2)
{
 void *pcVar1;
 if (param_1 == 0) {
 pcVar1 = double_value;
 }
 else {
 pcVar1 = triple_value;
 if (param_1 != 1) {
 pcVar1 = recursion_factorial;
 }
 }
 (*pcVar1)(param_2);
 return;
}

// Function: state_machine @ 0x1156c
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
switchD_00011578_caseD_2:
 return param_2;
 case 2:
 goto switchD_00011578_caseD_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
}

// Function: fsm_func_table @ 0x115d8
void fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned long long uVar1;
 void *apcStack_1c [4];
 int local_c;
 local_c = 0;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if (param_2 < 4) {
 uVar1 = (*apcStack_1c[param_2])(param_1);
 }
 else {
 uVar1 = 0x1069c00000003;
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: computed_goto @ 0x11654
void computed_goto(unsigned int param_1,uint param_2)
{
 void *apcStack_1c [4];
 unsigned int local_c;
 local_c = 0;
 apcStack_1c[0] = (void *)&DAT_00011694;
 apcStack_1c[1] = (void *)&DAT_000116b8;
 apcStack_1c[2] = (void *)&DAT_000116c0;
 apcStack_1c[3] = (void *)&DAT_000116c8;
 if (3 < param_2) {
 return;
 }
 (*apcStack_1c[param_2])();
 return;
}

// Function: obfuscated_cf @ 0x116e4
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x116ec
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x116f4
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

// Function: test_control_flow_l3 @ 0x1170c
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00012030);
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
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
 uVar1 = fsm_func_table(2,1);
 __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
 local_1c = 0;
 uStack_18 = 1;
 uStack_14 = 2;
 uStack_10 = 3;
 uVar1 = computed_goto(&local_1c,2);
 __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
 __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
 __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
 __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
 if (local_c == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: main @ 0x118a0
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: __aeabi_idiv @ 0x118b8
uint __aeabi_idiv(uint param_1,uint param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 if (param_2 == 0) {
 bVar5 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar5) {
 param_1 = 0x80000000;
 }
 __aeabi_idiv0((int)param_1);
 return 0;
 }
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if ((int)param_2 < 0) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 uVar1 = (*(void *)(iVar2 * 0xc + 0x11908))();
 return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x118c0
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 bool in_NG;
 bool bVar5;
 bool bVar6;
 bool bVar7;
 bool bVar8;
 bool bVar9;
 bool bVar10;
 bool bVar11;
 bool bVar12;
 bool bVar13;
 bool bVar14;
 bool bVar15;
 bool bVar16;
 bool bVar17;
 bool bVar18;
 bool bVar19;
 bool bVar20;
 bool bVar21;
 bool bVar22;
 bool bVar23;
 bool bVar24;
 bool bVar25;
 bool bVar26;
 bool bVar27;
 bool bVar28;
 bool bVar29;
 bool bVar30;
 bool bVar31;
 bool bVar32;
 bool bVar33;
 bool bVar34;
 bool bVar35;
 uVar4 = param_1 ^ param_2;
 uVar1 = param_2;
 if (in_NG) {
 uVar1 = -param_2;
 }
 if (uVar1 - 1 == 0) {
 if ((int)param_2 < 0) {
 param_1 = -param_1;
 }
 return param_1;
 }
 uVar3 = param_1;
 if ((int)param_1 < 0) {
 uVar3 = -param_1;
 }
 if (uVar3 <= uVar1) {
 if (uVar3 < uVar1) {
 param_1 = 0;
 }
 if (uVar3 == uVar1) {
 param_1 = (int)uVar4 >> 0x1f | 1;
 }
 return param_1;
 }
 if ((uVar1 & uVar1 - 1) == 0) {
 uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
 if ((int)uVar4 < 0) {
 uVar3 = -uVar3;
 }
 return uVar3;
 }
 iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
 if (iVar2 == 0) {
 bVar5 = uVar1 << 0x1f <= uVar3;
 if (bVar5) {
 uVar3 = uVar3 + uVar1 * -0x80000000;
 }
 bVar6 = uVar1 << 0x1e <= uVar3;
 if (bVar6) {
 uVar3 = uVar3 + uVar1 * -0x40000000;
 }
 bVar7 = uVar1 << 0x1d <= uVar3;
 if (bVar7) {
 uVar3 = uVar3 + uVar1 * -0x20000000;
 }
 bVar8 = uVar1 << 0x1c <= uVar3;
 if (bVar8) {
 uVar3 = uVar3 + uVar1 * -0x10000000;
 }
 bVar9 = uVar1 << 0x1b <= uVar3;
 if (bVar9) {
 uVar3 = uVar3 + uVar1 * -0x8000000;
 }
 bVar10 = uVar1 << 0x1a <= uVar3;
 if (bVar10) {
 uVar3 = uVar3 + uVar1 * -0x4000000;
 }
 bVar11 = uVar1 << 0x19 <= uVar3;
 if (bVar11) {
 uVar3 = uVar3 + uVar1 * -0x2000000;
 }
 bVar12 = uVar1 << 0x18 <= uVar3;
 if (bVar12) {
 uVar3 = uVar3 + uVar1 * -0x1000000;
 }
 bVar13 = uVar1 << 0x17 <= uVar3;
 if (bVar13) {
 uVar3 = uVar3 + uVar1 * -0x800000;
 }
 bVar14 = uVar1 << 0x16 <= uVar3;
 if (bVar14) {
 uVar3 = uVar3 + uVar1 * -0x400000;
 }
 bVar15 = uVar1 << 0x15 <= uVar3;
 if (bVar15) {
 uVar3 = uVar3 + uVar1 * -0x200000;
 }
 bVar16 = uVar1 << 0x14 <= uVar3;
 if (bVar16) {
 uVar3 = uVar3 + uVar1 * -0x100000;
 }
 bVar17 = uVar1 << 0x13 <= uVar3;
 if (bVar17) {
 uVar3 = uVar3 + uVar1 * -0x80000;
 }
 bVar18 = uVar1 << 0x12 <= uVar3;
 if (bVar18) {
 uVar3 = uVar3 + uVar1 * -0x40000;
 }
 bVar19 = uVar1 << 0x11 <= uVar3;
 if (bVar19) {
 uVar3 = uVar3 + uVar1 * -0x20000;
 }
 bVar20 = uVar1 << 0x10 <= uVar3;
 if (bVar20) {
 uVar3 = uVar3 + uVar1 * -0x10000;
 }
 bVar21 = uVar1 << 0xf <= uVar3;
 if (bVar21) {
 uVar3 = uVar3 + uVar1 * -0x8000;
 }
 bVar22 = uVar1 << 0xe <= uVar3;
 if (bVar22) {
 uVar3 = uVar3 + uVar1 * -0x4000;
 }
 bVar23 = uVar1 << 0xd <= uVar3;
 if (bVar23) {
 uVar3 = uVar3 + uVar1 * -0x2000;
 }
 bVar24 = uVar1 << 0xc <= uVar3;
 if (bVar24) {
 uVar3 = uVar3 + uVar1 * -0x1000;
 }
 bVar25 = uVar1 << 0xb <= uVar3;
 if (bVar25) {
 uVar3 = uVar3 + uVar1 * -0x800;
 }
 bVar26 = uVar1 << 10 <= uVar3;
 if (bVar26) {
 uVar3 = uVar3 + uVar1 * -0x400;
 }
 bVar27 = uVar1 << 9 <= uVar3;
 if (bVar27) {
 uVar3 = uVar3 + uVar1 * -0x200;
 }
 bVar28 = uVar1 << 8 <= uVar3;
 if (bVar28) {
 uVar3 = uVar3 + uVar1 * -0x100;
 }
 bVar29 = uVar1 << 7 <= uVar3;
 if (bVar29) {
 uVar3 = uVar3 + uVar1 * -0x80;
 }
 bVar30 = uVar1 << 6 <= uVar3;
 if (bVar30) {
 uVar3 = uVar3 + uVar1 * -0x40;
 }
 bVar31 = uVar1 << 5 <= uVar3;
 if (bVar31) {
 uVar3 = uVar3 + uVar1 * -0x20;
 }
 bVar32 = uVar1 << 4 <= uVar3;
 if (bVar32) {
 uVar3 = uVar3 + uVar1 * -0x10;
 }
 bVar33 = uVar1 << 3 <= uVar3;
 if (bVar33) {
 uVar3 = uVar3 + uVar1 * -8;
 }
 bVar34 = uVar1 << 2 <= uVar3;
 if (bVar34) {
 uVar3 = uVar3 + uVar1 * -4;
 }
 bVar35 = uVar1 << 1 <= uVar3;
 if (bVar35) {
 uVar3 = uVar3 + uVar1 * -2;
 }
 uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
 (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
 (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
 (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
 (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
 * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
 (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
 (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
 (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
 if ((int)uVar4 < 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 uVar1 = (*(void *)(iVar2 * 0xc + 0x11908))();
 return uVar1;
}

// Function: __aeabi_idivmod @ 0x11ad8
unsigned int __aeabi_idivmod(unsigned int param_1, unsigned int param_2)
{
 bool bVar1;
 if (param_2 != 0) {
 return _divsi3_skip_div0_test(param_1, param_2);
 }
 bVar1 = (int)param_1 < 0;
 if (0 < (int)param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = 0x80000000U;
 }
 __aeabi_idiv0((int)param_1);
 return 0;
}

// Function: __aeabi_idiv0 @ 0x11af8
void __aeabi_idiv0(int param_1)
{
 raise(8);
 return;
}

// Function: _fini @ 0x11b08
void _fini(void)
{
 return;
}

