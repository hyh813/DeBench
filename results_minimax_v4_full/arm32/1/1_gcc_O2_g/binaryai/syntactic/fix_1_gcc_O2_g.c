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
// Jump buffer for non-local jumps - platform specific size
typedef unsigned long __jmp_buf_tag[22];

// Global variables
char completed_0 = 0;

// String constants (referenced from binary)
extern const char DAT_00011b10[];
extern const char DAT_00011d98[];
extern const char DAT_00011f9c[];

// Code addresses (referenced from binary)
extern void DAT_00011634(void);
extern void DAT_00011658(void);
extern void DAT_00011660(void);
extern void DAT_00011668(void);

// Jump buffer for non-local jumps
extern __jmp_buf_tag jump_buffer;

// Jump tables
extern const unsigned int CSWTCH_56[4];

// Builtin functions (GCC extensions)
#define LZCOUNT(x) __builtin_clz(x)
#define SBORROW4(x,y) __builtin_ssub_overflow(x,y,0)

// External functions
extern void __gmon_start__(void);
extern int raise(int __sig);
extern void __libc_start_main(int (*main)(int, char**), void *stack_end, void *arg3, void *arg4, void *arg5, void *rtld_fini);
extern int _setjmp(__jmp_buf_tag *__env);
extern void __stack_chk_fail(void);
extern int puts(char *__s);
extern void * memset(void *__s, int __c, size_t __n);
extern int __printf_chk(int __flag, char *__format, ...);
extern void __longjmp_chk(__jmp_buf_tag *__env, int __val);
extern void abort(void);
extern void __aeabi_idiv0(void);
extern uint __aeabi_idiv(uint param_1, uint param_2);
extern uint __aeabi_idivmod(int param_1, int param_2);

// Decompiled by BinaryAI
// SHA256: eb2b42ebd21b06db706d8992cf6c0293f4dd1d76d54909a4ad85efeac4d9acdf

// Function: _init @ 0x10448
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x10468
// Wrapper - actual implementation in libc

// Note: External functions are declared at the top and provided by libc

// Function: main @ 0x104e0
unsigned int main(void)
{
 test_control_flow_l1();
 test_control_flow_l2();
 test_control_flow_l3();
 return 0;
}

// Function: _start @ 0x104f8
void _start(unsigned int param_1,unsigned int param_2)
{
 // stack0x00000004 is likely argv pointer on stack - use param_2 as argc with argv at param_2+1
 __libc_start_main(main,param_2,(char **)(param_2 + 1),0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x1053c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10560
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1058c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x105c4
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: recursion_factorial @ 0x105f0
int recursion_factorial(int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = 1;
 if (param_1 < 2) {
 return iVar1;
 }
 do {
 iVar2 = param_1 + -1;
 iVar1 = param_1 * iVar1;
 param_1 = iVar2;
 } while (iVar2 != 1);
 return iVar1;
}

// Function: double_value @ 0x10618
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: triple_value @ 0x10620
int triple_value(int param_1)
{
 return param_1 * 3;
}

// Function: op_add @ 0x10628
int op_add(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: op_sub @ 0x10630
int op_sub(int param_1,int param_2)
{
 return param_1 - param_2;
}

// Function: op_mul @ 0x10638
int op_mul(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: op_div @ 0x10640
int op_div(unsigned int param_1, unsigned int param_2)
{
 int uVar1;
 if (param_2 != 0) {
 uVar1 = __aeabi_idiv(param_1, param_2);
 return uVar1;
 }
 return 0;
}

// Function: op_mod @ 0x1065c
unsigned int op_mod(unsigned int param_1, unsigned int param_2)
{
 unsigned int result;
 if (param_2 != 0) {
  // For ARM EABI, divmod result is returned in r0:r1 (r0=quotient, r1=remainder)
  // We need to compute remainder using division and multiplication
  result = __aeabi_idiv(param_1, param_2);
  return param_1 - (result * param_2);
 }
 return 0;
}

// Function: op_and @ 0x1067c
uint op_and(uint param_1,uint param_2)
{
 return param_1 & param_2;
}

// Function: op_or @ 0x10684
uint op_or(uint param_1,uint param_2)
{
 return param_1 | param_2;
}

// Function: op_xor @ 0x1068c
uint op_xor(uint param_1,uint param_2)
{
 return param_1 ^ param_2;
}

// Function: op_shl @ 0x10694
int op_shl(int param_1,uint param_2)
{
 return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x1069c
int op_shr(int param_1,uint param_2)
{
 return param_1 >> (param_2 & 0xff);
}

// Function: state_idle @ 0x106a4
bool state_idle(int param_1)
{
 return param_1 == 1;
}

// Function: state_processing @ 0x106b4
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

// Function: state_done @ 0x106cc
unsigned int state_done(void)
{
 return 2;
}

// Function: state_error @ 0x106d4
int state_error(int param_1)
{
 if (param_1 != 0) {
 param_1 = 3;
 }
 return param_1;
}

// Function: sequential_ops @ 0x106e0
int sequential_ops(int param_1,int param_2,int param_3)
{
 return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x106ec
int single_if(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 << 1;
 }
 return param_1;
}

// Function: if_else @ 0x106f8
bool if_else(int param_1)
{
 return 0 < param_1;
}

// Function: nested_if_2 @ 0x10708
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

// Function: nested_if_deep @ 0x10724
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

// Function: if_elseif_chain @ 0x10778
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

// Function: if_elseif_long @ 0x107a8
int if_elseif_long(uint param_1)
{
 int iVar1;
 if (param_1 < 5) {
 iVar1 = (param_1 + 1) * 100;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: switch_small @ 0x107c4
unsigned int switch_small(uint param_1)
{
 unsigned int uVar1;
 if (param_1 < 4) {
 uVar1 = *(unsigned int *)(&CSWTCH_56 + param_1 * 4);
 }
 else {
 uVar1 = 0xffffffff;
 }
 return uVar1;
}

// Function: switch_large @ 0x107dc
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

// Function: switch_default @ 0x107f0
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

// Function: switch_fallthrough @ 0x1080c
int switch_fallthrough(int param_1)
{
 int iVar1;
 if (param_1 == 2) {
 iVar1 = 0;
 }
 else {
 if (param_1 != 3) {
 if (param_1 == 1) {
 iVar1 = 1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 iVar1 = 0xc;
 }
 return iVar1 + param_1 * 3;
}

// Function: loop_for_fixed @ 0x10844
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

// Function: loop_while @ 0x10870
int loop_while(int param_1)
{
 int iVar1;
 if (param_1 != 0) {
 iVar1 = 0;
 do {
 param_1 = param_1 / 10;
 iVar1 = iVar1 + 1;
 } while (param_1 != 0);
 return iVar1;
 }
 return 1;
}

// Function: loop_dowhile @ 0x108a4
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

// Function: loop_nested @ 0x108cc
int loop_nested(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_1 < 1) {
 return 0;
 }
 iVar1 = 0;
 iVar2 = iVar1;
 do {
 iVar2 = iVar2 + 1;
 if (0 < param_2) {
 iVar1 = param_2 + iVar1;
 }
 } while (param_1 != iVar2);
 return iVar1;
}

// Function: loop_break @ 0x108fc
int loop_break(int param_1)
{
 int iVar1;
 int *piVar2;
 int local_28 [4];
 unsigned int local_18;
 unsigned int local_14;
 iVar1 = 0;
 local_14 = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_18 = 0x32;
 piVar2 = local_28;
 do {
 if (*piVar2 == param_1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 5);
 return -1;
}

// Function: loop_continue @ 0x10984
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

// Function: goto_forward @ 0x109b8
int goto_forward(int param_1)
{
 if (0 < param_1) {
 param_1 = param_1 * param_1;
 }
 return param_1 << 1;
}

// Function: goto_backward @ 0x109cc
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
 } while (param_1 + 1 != iVar2);
 return iVar1;
}

// Function: ternary_op @ 0x109f4
int ternary_op(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: test_control_flow_l1 @ 0x10a00
void test_control_flow_l1(void)
{
 int *piVar1;
 int iVar2;
 int local_28 [4];
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 puts(&DAT_00011b10);
 __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
 __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",if_else(5));
 __printf_chk(1,"CF-L1-03 (if_else): %d\n",if_else(0));
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
 __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
 __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
 __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
 __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
 iVar2 = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_18 = 0x32;
 piVar1 = local_28;
 do {
 if (*piVar1 == 0x1e) goto LAB_00010b8c;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 5);
 iVar2 = -1;
LAB_00010b8c:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar2);
 iVar2 = 0;
 local_28[0] = 10;
 local_28[1] = 0x14;
 local_28[2] = 0x1e;
 local_28[3] = 0x28;
 local_18 = 0x32;
 piVar1 = local_28;
 do {
 if (*piVar1 == 99) goto LAB_00010bd8;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 5);
 iVar2 = -1;
LAB_00010bd8:
 __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar2);
 __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
 __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
 __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
 if (local_14 == 0) {
 __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
 return;
 }
 __stack_chk_fail();
}

// Function: loop_multi_exit @ 0x10cc8
void loop_multi_exit(int param_1)
{
 int *piVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int local_44;
 unsigned int uStack_40;
 unsigned int uStack_3c;
 unsigned int uStack_38;
 unsigned int local_34;
 unsigned int uStack_30;
 unsigned int uStack_2c;
 unsigned int uStack_28;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned int local_14;
 iVar3 = 0;
 piVar4 = &local_44;
 local_14 = 0;
 local_44 = 1;
 uStack_40 = 2;
 uStack_3c = 3;
 uStack_38 = 4;
 local_34 = 5;
 uStack_30 = 6;
 uStack_2c = 7;
 uStack_28 = 8;
 local_24 = 9;
 uStack_20 = 10;
 uStack_1c = 0xb;
 uStack_18 = 0xc;
 do {
 iVar2 = 0;
 piVar1 = piVar4;
 do {
 if (*piVar1 == param_1) {
 return;
 }
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 4);
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 4;
 } while (iVar3 != 3);
 return;
}

// Function: infinite_loop @ 0x10d78
int infinite_loop(int *param_1)
{
 int iVar1;
 iVar1 = 0;
 do {
 if (*param_1 == 1) {
 return iVar1;
 }
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x3e9);
 *param_1 = 1;
 return 0x3e9;
}

// Function: multi_return @ 0x10db8
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

// Function: conditional_return @ 0x10de8
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

// Function: duffs_device @ 0x10e00
uint duffs_device(unsigned int *param_1,unsigned int *param_2,uint param_3)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 unsigned int *puVar4;
 int iVar5;
 if ((int)param_3 < 1) {
 return 0xffffffff;
 }
 iVar5 = (int)(param_3 + 7) >> 3;
 puVar1 = param_2;
 puVar2 = param_2;
 puVar3 = param_1;
 puVar4 = param_1;
 switch(param_3 & 7) {
 case 1:
 break;
 case 2:
 goto switchD_00010e24_caseD_2;
 case 3:
 goto switchD_00010e24_caseD_3;
 case 4:
 goto switchD_00010e24_caseD_4;
 case 5:
 goto switchD_00010e24_caseD_5;
 case 6:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
 goto switchD_00010e24_caseD_5;
 case 7:
 goto switchD_00010e24_caseD_7;
 default:
 goto switchD_00010e24_caseD_7b;
 }
switchD_00010e24_caseD_1:
 iVar5 = iVar5 + -1;
 *param_1 = *param_2;
 if (iVar5 == 0) {
 return param_3;
 }
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
switchD_00010e24_caseD_7:
 puVar2 = param_2 + 1;
 puVar4 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010e24_caseD_7b:
 *puVar4 = *puVar2;
 puVar1 = puVar2 + 2;
 puVar3 = puVar4 + 2;
 puVar4[1] = puVar2[1];
switchD_00010e24_caseD_5:
 puVar2 = puVar1 + 1;
 puVar4 = puVar3 + 1;
 *puVar3 = *puVar1;
switchD_00010e24_caseD_4:
 param_2 = puVar2 + 1;
 param_1 = puVar4 + 1;
 *puVar4 = *puVar2;
switchD_00010e24_caseD_3:
 puVar1 = param_2 + 1;
 puVar3 = param_1 + 1;
 *param_1 = *param_2;
switchD_00010e24_caseD_2:
 param_2 = puVar1 + 1;
 param_1 = puVar3 + 1;
 *puVar3 = *puVar1;
 goto switchD_00010e24_caseD_1;
}

// Function: loop_complex_cond @ 0x10eb8
int loop_complex_cond(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 bool bVar5;
 if (param_1 < 1) {
 return param_1;
 }
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
 } while (iVar1 < 0 != bVar5);
 return iVar4 + param_1 + iVar3;
}

// Function: loop_modify_var @ 0x10eec
int loop_modify_var(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar2 = 0;
 if (0 < param_1) {
 iVar3 = 0;
 while (iVar4 = iVar3 + 1, iVar4 < param_1) {
 iVar1 = iVar3 + -4;
 if (iVar4 < 6) {
 iVar3 = iVar4;
 }
 iVar2 = iVar2 + iVar4;
 if (iVar4 != 5 && iVar1 < 0 == SBORROW4(iVar4,5)) {
 iVar3 = iVar3 + 3;
 }
 }
 return iVar2;
 }
 return iVar2;
}

// Function: loop_external_state @ 0x10f1c
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

// Helper function to avoid void return in expression context
static void loop_external_state_helper(int *param_1)
{
 loop_external_state(param_1);
}

// Function: tail_recursion @ 0x10f44
int tail_recursion(int param_1,int param_2)
{
 int iVar1;
 if (param_1 < 2) {
 return param_2;
 }
 do {
 iVar1 = param_1 + -1;
 param_2 = param_1 * param_2;
 param_1 = iVar1;
 } while (iVar1 != 1);
 return param_2;
}

// Function: indirect_recursion_a @ 0x10f6c
uint indirect_recursion_a(uint param_1,int param_2)
{
 int iVar1;
 bool bVar2;
 if (param_2 < 1) {
 return param_1;
 }
 iVar1 = param_2 + -2;
 if ((param_1 & 1) == 0) goto LAB_00010fb0;
 do {
 if (param_2 == 1) {
 return param_1 * 3 + 1;
 }
 param_1 = param_1 * 3 + 2;
 while( true ) {
 bVar2 = iVar1 == 0;
 iVar1 = iVar1 + -2;
 param_2 = param_2 + -2;
 if (bVar2) {
 return param_1;
 }
 if ((param_1 & 1) != 0) break;
LAB_00010fb0:
 if (param_2 == 1) {
 return (int)param_1 / 2;
 }
 param_1 = (int)param_1 / 2 + 1;
 }
 } while( true );
}

// Function: call_func_ptr @ 0x10fd8
void call_func_ptr(int (*func)(int), int param_2)
{
 func(param_2);
 return;
}

// Function: call_func_ptr_array @ 0x10fe4
unsigned int call_func_ptr_array(uint param_1,unsigned int param_2)
{
 unsigned int uVar1;
 int (*apcStack_18[3])(int);
 apcStack_18[0] = double_value;
 apcStack_18[1] = triple_value;
 apcStack_18[2] = recursion_factorial;
 if (param_1 < 3) {
 uVar1 = (*apcStack_18[param_1])(param_2);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: call_virtual_func @ 0x11080
int call_virtual_func(unsigned int param_1,int param_2)
{
 return param_2 << 1;
}

// Function: process_with_callback @ 0x11088
int process_with_callback(int param_1,int param_2,void *param_3)
{
 int iVar1;
 int iVar2;
 unsigned int *puVar3;
 int iVar4;
 if (0 < param_2) {
 iVar2 = 0;
 iVar4 = 0;
 puVar3 = (unsigned int *)(param_1 + -4);
 do {
 puVar3 = puVar3 + 1;
 iVar1 = (*param_3)(*puVar3);
 iVar2 = iVar2 + 1;
 iVar4 = iVar4 + iVar1;
 } while (param_2 != iVar2);
 return iVar4;
 }
 return 0;
}

// Function: test_control_flow_l2 @ 0x110d0
void test_control_flow_l2(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int *piVar6;
 int local_68 [5];
 int local_54;
 unsigned int uStack_50;
 unsigned int uStack_4c;
 unsigned int uStack_48;
 unsigned int local_44;
 unsigned int uStack_40;
 unsigned int uStack_3c;
 unsigned int uStack_38;
 char auStack_34 [32];
 int local_14;
 int *piVar7;
 local_14 = 0;
 puts(&DAT_00011d98);
 uVar2 = loop_multi_exit(7);
 __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar2);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x3e9);
 __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",0x3e9,1,1);
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
 uVar2 = duffs_device(auStack_34,&local_54,8);
 __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar2);
 __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
 iVar4 = 0;
 iVar3 = 0;
 while (iVar5 = iVar3 + 1, iVar5 < 10) {
 iVar1 = iVar3 + -4;
 if (iVar5 < 6) {
 iVar3 = iVar5;
 }
 iVar4 = iVar4 + iVar5;
 if (iVar5 != 5 && iVar1 < 0 == SBORROW4(iVar5,5)) {
 iVar3 = iVar3 + 3;
 }
 }
 __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar4);
 iVar3 = 0;
 do {
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x65);
 __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",0x65);
 __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
 __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
 __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
 __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
 uVar2 = double_value(5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar2);
 uVar2 = recursion_factorial(5);
 __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar2);
 iVar3 = 0;
 local_68[0] = 1;
 local_68[1] = 2;
 local_68[2] = 3;
 local_68[3] = 4;
 local_68[4] = 5;
 piVar6 = local_68;
 do {
 piVar7 = piVar6 + 1;
 iVar3 = iVar3 + *piVar6 * 2;
 piVar6 = piVar7;
 } while (&local_54 != piVar7);
 __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar3);
 if (local_14 != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: non_local_jump @ 0x11380
int non_local_jump(int param_1)
{
 int iVar1;
 iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
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

// Function: cpp_exception @ 0x113ec
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

// Function: large_jump_table @ 0x11414
unsigned int large_jump_table(uint param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 unsigned int (*apcStack_3c [10])(unsigned int, unsigned int);
 unsigned int local_14;
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
 uVar1 = apcStack_3c[param_1](param_2,param_3);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: conditional_func_ptr @ 0x114c4
int conditional_func_ptr(int param_1,int param_2)
{
 int (*func)(int);
 if (param_1 == 0) {
 return param_2 << 1;
 }
 func = triple_value;
 if (param_1 != 1) {
 func = recursion_factorial;
 }
 return func(param_2);
}

// Function: state_machine @ 0x114f8
uint state_machine(int param_1,uint param_2)
{
 switch(param_2) {
 case 0:
 return (uint)(param_1 == 1);
 case 1:
 break;
 case 2:
 return param_2;
 case 3:
 if (param_1 == 0) {
 param_2 = 0;
 }
 return param_2;
 default:
 return 3;
 }
 if (param_1 != 2) {
 if (param_1 == 99) {
 param_2 = 3;
 }
 return param_2;
 }
 return 2;
}

// Function: fsm_func_table @ 0x1155c
unsigned int fsm_func_table(unsigned int param_1,uint param_2)
{
 unsigned int uVar1;
 void *apcStack_1c [4];
 unsigned int local_c;
 local_c = 0;
 apcStack_1c[0] = state_idle;
 apcStack_1c[1] = state_processing;
 apcStack_1c[2] = state_done;
 apcStack_1c[3] = state_error;
 if (param_2 < 4) {
 uVar1 = (*apcStack_1c[param_2])(param_1);
 return uVar1;
 }
 return 3;
}

// Function: computed_goto @ 0x115f4
void computed_goto(unsigned int param_1,uint param_2)
{
 void (*apcStack_1c [4])(void);
 unsigned int local_c;
 local_c = 0;
 apcStack_1c[0] = (void (*)(void))&DAT_00011668;
 apcStack_1c[1] = (void (*)(void))&DAT_00011660;
 apcStack_1c[2] = (void (*)(void))&DAT_00011658;
 apcStack_1c[3] = (void (*)(void))&DAT_00011634;
 if (3 < param_2) {
 return;
 }
 apcStack_1c[param_2]();
 return;
}

// Function: obfuscated_cf @ 0x11684
int obfuscated_cf(int param_1)
{
 return param_1 << 1;
}

// Function: opaque_predicate @ 0x1168c
int opaque_predicate(int param_1)
{
 return param_1 << 1;
}

// Function: overlapped_code @ 0x11694
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

// Function: test_control_flow_l3 @ 0x116ac
void test_control_flow_l3(void)
{
 unsigned int uVar1;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 int local_c;
 local_c = 0;
 puts(&DAT_00011f9c);
 uVar1 = non_local_jump(5);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 uVar1 = non_local_jump(0xfffffffb);
 __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
 __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
 uVar1 = op_add(10,5);
 __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
 __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
 __printf_chk(1,"CF-L3-05 (state_machine): %d\n",2);
 uVar1 = state_processing(2);
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

// Function: __aeabi_idiv @ 0x11824
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
 __aeabi_idiv0();
 return 0;
 }
 // Suppress unused variable warnings for the bool variables
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
 return 0;
}

// Global variable for division optimization
static bool in_NG = false;

// Function: .divsi3_skip_div0_test @ 0x1182c
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
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
 // Unreachable code - return 0 for compilation
 return 0;
}

// Function: __aeabi_idivmod @ 0x11a44
// Returns: quotient in r0, remainder in r1 (ARM EABI)
// Note: In ARM EABI, this returns quotient in r0. Remainder would need special handling.
uint __aeabi_idivmod(int param_1,int param_2)
{
 bool bVar1;
 if (param_2 != 0) {
 // For ARM EABI, the remainder is returned in r1
 // We compute both quotient and remainder
 uint quotient = _divsi3_skip_div0_test(param_1, param_2);
 uint remainder = param_1 - (quotient * param_2);
 (void)remainder;  // Suppress unused variable warning
 return quotient;
 }
 bVar1 = param_1 < 0;
 if (0 < param_1) {
 param_1 = 0x7fffffff;
 }
 if (bVar1) {
 param_1 = -0x80000000;
 }
 __aeabi_idiv0();
 return 0;
}

// Function: __aeabi_idiv0 @ 0x11a64
void __aeabi_idiv0(void)
{
 raise(8);
 return;
}

// Function: _fini @ 0x11a74
void _fini(void)
{
 return;
}

