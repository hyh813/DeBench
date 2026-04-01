// Decompiled by BinaryAI
// SHA256: 51cedbcbb858351faeb8386f3ff717a1bc951899582eb64c35389866a3430161

#include <stdint.h>
#include <setjmp.h>

// Global variables
static jmp_buf div_zero_jmp_buf;
static jmp_buf segv_jmp_buf;
// Type alias
typedef unsigned char byte;

int div_zero_caught = 0;
int segv_caught = 0;
static jmp_buf segv_buffer;
static jmp_buf jmp_buffer;
byte encrypted_0[32] = {0};

// Data symbols
extern unsigned char DAT_00012008;
extern unsigned char DAT_0001212f;
extern unsigned char DAT_0001214b;
extern unsigned char DAT_00012167;
extern unsigned char DAT_00012184;
extern unsigned char DAT_00012038;
extern unsigned char DAT_00012064;
extern unsigned char DAT_0001208c;
extern unsigned char DAT_000120b4;
extern unsigned char DAT_000121a0;
extern unsigned char DAT_000121bc;
extern unsigned char DAT_000121d9;
extern unsigned char DAT_000120d4;
extern unsigned char DAT_000121f6;
extern unsigned char DAT_00012108;

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))(*(void **)0x0))();
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
 int unaff_EBX;
 ((void (*)(void))(*(void **)(unaff_EBX + 0x3c)))();
 return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(unsigned int p1, unsigned int p2, unsigned int p3, unsigned int p4, unsigned int p5, unsigned int p6, unsigned int p7)
{
 return;
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(jmp_buf env)
{
 unsigned int val = _setjmp(env);
 return;
}

// Function: FUN_00011120 @ 0x11120
void * FUN_00011120(void *param1)
{
 return param1;
}

// Forward declaration to match definition
void * FUN_00011120(void *);

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(unsigned int param1, void *param2)
{
 return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void)
{
 ((void (*)(void))(*(void **)0x1c))();
 return;
}

// Function: FUN_00011150 @ 0x11150
void * FUN_00011150(unsigned int param1)
{
 int unaff_EBX;
 return *(void **)(unaff_EBX + 0x20);
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void *param1)
{
 return;
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void *param1)
{
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void *param1, void *param2, int param3)
{
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(unsigned int param1, unsigned char *param2, unsigned int param3)
{
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void *param1, int param2)
{
 return;
}

// Function: main @ 0x111b0
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: _start @ 0x111d0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011100(main,param_2,&auStack_4,0,0,param_1,auStack_4);
 do {
 } while( 1 );
}

// Function: __i686.get_pc_thunk.bx @ 0x111fc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11200
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11210
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11250
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x112a0
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2d73) == '\0') {
 if (*(unsigned int *)(unaff_EDI + 0x2d43) != 0) {
 void (*func_ptr)(void) = (void (*)(void))(*(void **)(unaff_EDI + 0x3c));
 if (func_ptr != (void (*)(void))0) {
 func_ptr();
 }
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2d77);
 while (uVar1 < ((unaff_EDI + 0x2c2b) - (unaff_EDI + 0x2c27) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x2d77) = uVar1 + 1;
 (*(void (*)(void))(*(void **)(unaff_EDI + 0x2c27 + (uVar1 + 1) * 4)))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2d77);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2d73) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11339
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1133d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: div_zero_handler @ 0x11350
unsigned int div_zero_handler(void)
{
 div_zero_caught = 1;
 FUN_000111a0(div_zero_jmp_buf,1);
 segv_caught = 1;
 FUN_000111a0(segv_jmp_buf,0);
 return 1;
}

// Function: segv_handler @ 0x11380
unsigned int segv_handler(void)
{
 segv_caught = 1;
 FUN_000111a0(segv_jmp_buf,0);
 return 1;
}

// Function: param_fake_branch @ 0x113b0
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x113c0
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x113d0
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = param_1;
 iVar4 = iVar1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar1 * iVar1)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Fake branch function to satisfy calls
unsigned int fake_branch(unsigned int x)
{
 return x;
}

// Function: call_opaque_predicate @ 0x11430
unsigned int call_opaque_predicate(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 iVar1 = 5;
 iVar4 = 6;
 do {
 iVar3 = iVar4;
 iVar4 = iVar1 % iVar3;
 iVar1 = iVar3;
 } while (iVar4 != 0);
 uVar2 = 0x14;
 if (iVar3 != 1) {
 uVar2 = 0x23;
 }
 return uVar2;
}

// Function: param_instruction_substitution @ 0x11460
int param_instruction_substitution(unsigned int param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11490
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x114a0
byte * decrypt_string(unsigned int param_1,byte *param_2,int param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 FUN_00011180(param_2,param_1,param_3);
 param_2[param_3 - 1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x11500
int param_string_encryption(void)
{
 byte bVar1;
 byte *pbVar2;
 int iVar3;
 int in_GS_OFFSET;
 byte local_30 [31];
 char local_11;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1150b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011180(local_30,&encrypted_0,0x1f);
 local_11 = 0;
 pbVar2 = local_30;
 bVar1 = local_30[0];
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ 0x5a;
 bVar1 = pbVar2[1];
 pbVar2 = pbVar2 + 1;
 }
 FUN_00011170(local_30);
 iVar3 = 0;
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar3 + (char)local_30[0];
 }
 __stack_chk_fail_local();
}

// Function: param_tail_call_optimized @ 0x115b0
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 do {
 param_2 = param_2 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x115d0
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x115e0
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 iVar1 = iVar1 + param_1;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x11600
unsigned int call_non_tail_call(void)
{
 return 0x13ba;
}

// Function: param_vectorized_loop @ 0x11610
int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)
{
 int *piVar1;
 int iVar2;
 if (0 < param_4) {
 iVar2 = 0;
 do {
 param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 piVar1 = param_3 + param_4;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (piVar1 != param_3);
 return iVar2;
 }
 return 0;
}

// Function: call_vectorized_loop @ 0x11670
int call_vectorized_loop(void)
{
 unsigned int uVar1;
 int iVar2;
 int *piVar3;
 int iVar4;
 int iVar5;
 int in_GS_OFFSET;
 int local_70 [8];
 int local_50 [8];
 int local_30 [8];
 int local_10 [3];
 local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
 uVar1 = 0;
 local_70[0] = 1;
 local_70[1] = 2;
 local_70[2] = 3;
 local_70[3] = 4;
 local_70[4] = 5;
 local_70[5] = 6;
 local_70[6] = 7;
 local_70[7] = 8;
 local_50[0] = 8;
 local_50[1] = 7;
 local_50[2] = 6;
 local_50[3] = 5;
 local_50[4] = 4;
 local_50[5] = 3;
 local_50[6] = 2;
 local_50[7] = 1;
 do {
 *(unsigned int *)((int)local_30 + uVar1) = 0;
 uVar1 = uVar1 + 4;
 } while (uVar1 < 0x20);
 iVar5 = 8;
 iVar4 = 1;
 piVar3 = local_30;
 iVar2 = 0;
 while( 1 ) {
 piVar3[iVar2] = iVar4 + iVar5;
 iVar2 = iVar2 + 1;
 if (iVar2 == 8) break;
 iVar4 = local_70[iVar2];
 iVar5 = local_50[iVar2];
 }
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = piVar3 + 1;
 } while (local_10 != piVar3);
 if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar4;
 }
 __stack_chk_fail_local();
}

// Function: param_link_time_optimization @ 0x11770
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11780
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x11790
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (unsigned int)(10 / (long long)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x117f0
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 FUN_00011130(8,0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x11840
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(0xb,segv_handler);
 iVar1 = FUN_00011110(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x11890
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 FUN_00011130(0xb,0);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + iVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_buffer_overflow_stack @ 0x11900
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11910
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 void *ptr;
 ptr = FUN_00011150(0x10);
 if (ptr == 0) {
 param_1 = 0xfffffffe;
 }
 else {
 FUN_00011120(ptr);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x11950
unsigned int call_buffer_overflow(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011150(0x10);
 if (iVar1 == 0) {
 uVar2 = 8;
 }
 else {
 (void)FUN_00011120(iVar1);
 }
 return 0x1e;
}

// Function: param_integer_overflow @ 0x11990
int param_integer_overflow(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if ((0 < (int)param_1) && (0 < (int)param_2)) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
 }
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x119d0
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x119e0
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x119f0
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x11a00
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11a10
unsigned int call_implementation_defined(void)
{
 return 0x2b;
}

// Function: test_obf_opt_edge @ 0x11a20
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int in_GS_OFFSET;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011160(&DAT_00012008);
 FUN_00011190(1,&DAT_0001212f,10);
 iVar2 = 5;
 iVar4 = 6;
 do {
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 uVar1 = 0x14;
 if (iVar3 != 1) {
 uVar1 = 0x23;
 }
 FUN_00011190(1,&DAT_0001214b,uVar1);
 FUN_00011190(1,&DAT_00012167,0xe1);
 uVar1 = param_string_encryption();
 FUN_00011190(1,&DAT_00012184,uVar1);
 FUN_00011190(1,&DAT_00012038,0x7a314);
 FUN_00011190(1,&DAT_00012064,0x13ba);
 uVar1 = call_vectorized_loop();
 FUN_00011190(1,&DAT_0001208c,uVar1);
 FUN_00011190(1,&DAT_000120b4,0x14);
 iVar2 = param_division_by_zero(5);
 iVar4 = param_division_by_zero(0);
 FUN_00011130(8,0);
 FUN_00011190(1,&DAT_000121a0,iVar2 + iVar4);
 local_14 = 0x2a;
 iVar2 = param_null_pointer_deref(&local_14);
 iVar4 = param_null_pointer_deref(0);
 FUN_00011130(0xb,0);
 FUN_00011190(1,&DAT_000121bc,iVar2 + iVar4);
 iVar2 = FUN_00011150(0x10);
 if (iVar2 == 0) {
 uVar1 = 8;
 }
 else {
 (void)FUN_00011120(iVar2);
 uVar1 = 0x1e;
 }
 FUN_00011190(1,&DAT_000121d9,uVar1);
 FUN_00011190(1,&DAT_000120d4,2000000000);
 FUN_00011190(1,&DAT_000121f6,10);
 FUN_00011190(1,&DAT_00012108,0x2b);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __stack_chk_fail_local @ 0x11c40
void __stack_chk_fail_local(void)
{
 FUN_00011140();
 return;
}

// Function: __do_global_ctors_aux @ 0x11c60
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11cac
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

