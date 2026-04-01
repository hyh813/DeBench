// Decompiled by BinaryAI
// SHA256: ca4d85f3aca02214007f9e4e426d66b674b9f2bc650165f78ccfb6d966ca01f3

#include <stdbool.h>

#define __regparm1
#define __regparm2
#define __regparm3

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long long ulonglong;

// Global variables
int signal_received;
int signal_number;
int counter_mutex;
int shared_counter;
int cond_mutex;
int cond;
int atomic_counter;
int data;
int ready;
int DAT_00014015;
int DAT_00014011;
int DAT_00014019;
int DAT_00014021;
int DAT_0001401d;
int DAT_00014048;
int DAT_00014056;
int DAT_0001409d;
int DAT_000140c1;
int DAT_000140dc;
int DAT_000140f7;
int DAT_00014113;
int DAT_0001412f;
int DAT_0001414b;
int DAT_00014167;
int DAT_00014184;
int DAT_000141a0;
int DAT_000141bc;
int DAT_000141d8;
int DAT_000141f3;
int DAT_00014242;
int DAT_0001425d;
int DAT_00014279;
int DAT_00014295;
int DAT_000142b1;
int DAT_000142cd;
int DAT_000142e9;
int DAT_00014305;
int DAT_0001432b;
int DAT_00014349;
int DAT_00014365;
int DAT_00014382;
int DAT_0001439e;
int DAT_000143ba;
int DAT_000143d6;
int DAT_00014400;
int DAT_00014414;
int DAT_00014420;
int DAT_00014440;

// Function: frame_dummy @ 0x11000
void frame_dummy(void)
{
 return;
}

// Function: __do_global_ctors_aux_impl @ 0x13030
void __do_global_ctors_aux_impl(void);

// Function: __do_global_ctors @ 0x11000
void __do_global_ctors(void)
{
 frame_dummy();
 __do_global_ctors_aux_impl();
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: FUN_000113c0 @ 0x113c0
void FUN_000113c0(void)
{
 return;
}

// Function: FUN_000113d0 @ 0x113d0
int FUN_000113d0(int param_1, int param_2, int param_3, void *param_4, int param_5)
{
 return 0;
}

// Function: FUN_000113e0 @ 0x113e0
unsigned int FUN_000113e0(int param_1)
{
 return 0;
}

// Function: FUN_000113f0 @ 0x113f0
unsigned int FUN_000113f0(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011400 @ 0x11400
void FUN_00011400(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4, char *param_5, int param_6)
{
 return;
}

// Function: FUN_00011410 @ 0x11410
unsigned int FUN_00011410(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_00011420 @ 0x11420
int FUN_00011420(unsigned int param_1, unsigned int param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011430 @ 0x11430
void FUN_00011430(void)
{
 return;
}

// Function: FUN_00011440 @ 0x11440
int FUN_00011440(void)
{
 return 0;
}

// Function: FUN_00011450 @ 0x11450
void FUN_00011450(void)
{
 return;
}

// Function: FUN_00011460 @ 0x11460
unsigned int FUN_00011460(void *param_1)
{
 return 0;
}

// Function: FUN_00011470 @ 0x11470
int FUN_00011470(int param_1, int param_2, int param_3, char *param_4)
{
 return 0;
}

// Function: FUN_00011480 @ 0x11480
unsigned int FUN_00011480(int param_1)
{
 return 0;
}

// Function: FUN_00011490 @ 0x11490
unsigned int FUN_00011490(int param_1, int param_2, unsigned int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_000114a0 @ 0x114a0
int FUN_000114a0(unsigned int param_1, void *param_2, unsigned int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_000114b0 @ 0x114b0
int FUN_000114b0(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
 return 0;
}

// Function: FUN_000114c0 @ 0x114c0
unsigned int FUN_000114c0(int param_1)
{
 return 0;
}

// Function: FUN_000114d0 @ 0x114d0
unsigned int FUN_000114d0(int param_1)
{
 return 0;
}

// Function: FUN_000114e0 @ 0x114e0
unsigned int FUN_000114e0(void)
{
 return 0;
}

// Function: FUN_000114f0 @ 0x114f0
unsigned int FUN_000114f0(int param_1)
{
 return 0;
}

// Function: FUN_00011500 @ 0x11500
void FUN_00011500(unsigned int param_1)
{
 return;
}

// Function: FUN_00011510 @ 0x11510
int FUN_00011510(int param_1, int param_2, int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_00011520 @ 0x11520
unsigned int FUN_00011520(int param_1)
{
 return 0;
}

// Function: FUN_00011530 @ 0x11530
unsigned int FUN_00011530(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011540 @ 0x11540
int FUN_00011540(char *param_1, int param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011550 @ 0x11550
int FUN_00011550(void)
{
 return 0;
}

// Function: FUN_00011560 @ 0x11560
unsigned int FUN_00011560(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011570 @ 0x11570
int FUN_00011570(char *param_1, int param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011580 @ 0x11580
unsigned int FUN_00011580(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_00011590 @ 0x11590
unsigned int FUN_00011590(int param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_000115a0 @ 0x115a0
unsigned int FUN_000115a0(int param_1)
{
 return 0;
}

// Function: FUN_000115b0 @ 0x115b0
unsigned int FUN_000115b0(int param_1)
{
 return 0;
}

// Function: FUN_000115c0 @ 0x115c0
unsigned int FUN_000115c0(void *param_1)
{
 return 0;
}

// Function: FUN_000115d0 @ 0x115d0
int FUN_000115d0(unsigned int param_1, char *param_2)
{
 return 0;
}

// Function: FUN_000115e0 @ 0x115e0
int FUN_000115e0(char *param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_000115f0 @ 0x115f0
unsigned int FUN_000115f0(int param_1, int param_2)
{
 return 0;
}

// Function: FUN_00011600 @ 0x11600
unsigned int FUN_00011600(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011610 @ 0x11610
void FUN_00011610(unsigned int param_1)
{
 return;
}

// Function: FUN_00011620 @ 0x11620
int FUN_00011620(int param_1, void *param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011630 @ 0x11630
int FUN_00011630(unsigned int param_1, char *param_2, int *param_3, int *param_4)
{
 return 0;
}

// Function: FUN_00011640 @ 0x11640
int FUN_00011640(unsigned int param_1, char *param_2)
{
 return 0;
}

// Function: FUN_00011650 @ 0x11650
int *FUN_00011650(void)
{
 return (int *)0;
}

// Function: FUN_00011660 @ 0x11660
void FUN_00011660(int param_1, unsigned int param_2, unsigned int param_3)
{
 return;
}

// Function: FUN_00011670 @ 0x11670
int FUN_00011670(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_00011680 @ 0x11680
unsigned int FUN_00011680(int param_1)
{
 return 0;
}

// Function: FUN_00011690 @ 0x11690
void FUN_00011690(unsigned int param_1)
{
 return;
}

// Function: FUN_000116a0 @ 0x116a0
int FUN_000116a0(void)
{
 return 0;
}

// Function: FUN_000116b0 @ 0x116b0
unsigned int FUN_000116b0(int param_1, char *param_2, unsigned int param_3)
{
 return 0;
}

// Function: FUN_000116c0 @ 0x116c0
void FUN_000116c0(unsigned int param_1)
{
 return;
}

// Function: FUN_000116d0 @ 0x116d0
int FUN_000116d0(unsigned int *param_1, void *param_2, void *param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_000116e0 @ 0x116e0
unsigned long long FUN_000116e0(void)
{
 return 0;
}

// Function: FUN_000116f0 @ 0x116f0
int FUN_000116f0(int param_1, int param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011700 @ 0x11700
int FUN_00011700(char *param_1, int param_2)
{
 return 0;
}

// Function: FUN_00011710 @ 0x11710
int FUN_00011710(int param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_00011720 @ 0x11720
int FUN_00011720(unsigned int param_1, unsigned int **param_2, unsigned int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_00011730 @ 0x11730
unsigned int FUN_00011730(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011740 @ 0x11740
void FUN_00011740(unsigned int param_1)
{
 return;
}

// Function: main @ 0x11750
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _start @ 0x11770
static void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011430();
 do {
 } while( 1 );
}

// Function: __i686.get_pc_thunk.bx @ 0x1179c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x117a0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x117b0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x117f0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11840
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x57d3) == '\0') {
 if (*(int *)(unaff_EDI + 0x57a3) != 0) {
 FUN_000113c0();
 }
 uVar1 = *(uint *)(unaff_EDI + 0x57d7);
 while (uVar1 < ((unaff_EDI + 0x55d7) - (unaff_EDI + 0x55d3) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x57d7) = uVar1 + 1;
 ((void (*)(void))*(void **)(unaff_EDI + 0x55d3 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x57d7);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x57d3) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x118d9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x118dd
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: signal_handler @ 0x118e1
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x11907
unsigned int thread_sum(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 param_1[2] = 0;
 for (; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
 param_1[2] = param_1[2] + iVar1;
 }
 return 0;
}

// Function: thread_compute @ 0x1192b
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)FUN_000115b0(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: thread_increment @ 0x1195a
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 FUN_00011520(counter_mutex);
 shared_counter = shared_counter + 1;
 FUN_000113e0(counter_mutex);
 FUN_00011560(1000);
 }
 return 0;
}

// Function: consumer_thread @ 0x119c1
void consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 uVar2 = FUN_00011520(cond_mutex);
 while (uVar1 = data, ready == 0) {
 uVar2 = FUN_00011490(cond,cond_mutex,uVar2,uVar2);
 }
 FUN_000113e0(cond_mutex);
 puVar3 = (unsigned int *)FUN_000115b0(4);
 *puVar3 = uVar1;
 return;
}

// Function: producer_thread @ 0x11a2a
unsigned int producer_thread(void)
{
 FUN_000114c0(1);
 FUN_00011520(cond_mutex);
 data = 0x2a;
 ready = 1;
 FUN_000115a0(cond);
 FUN_000113e0(cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x11a89
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
 iVar1 = atomic_counter + 1;
 atomic_counter = iVar2 + 1000;
 if (iVar2 != iVar1) {
 atomic_counter = iVar1;
 }
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x11ac8
unsigned int thread_atomic_load_store(void)
{
 atomic_counter = atomic_counter + 100;
 return 0;
}

// Function: thread_tls_test @ 0x11ae9
void thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 FUN_00011660(*in_GS_OFFSET + -0x20,param_1,0x1f);
 piVar3 = (int *)FUN_000115b0(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_strcpy @ 0x11b43
void __regparm1 param_strcpy(unsigned int param_1_00,unsigned int param_1,unsigned int param_2)
{
 FUN_00011580(param_1,param_2,param_1_00,param_1_00);
 FUN_00011600(param_1);
 return;
}

// Function: call_strcpy @ 0x11b77
void call_strcpy(void)
{
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
  param_strcpy(local_30,"HelloLib",8);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_strcmp @ 0x11bba
int param_strcmp(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011420(param_1,param_2,0,0);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_strcmp @ 0x11bf6
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00014015,&DAT_00014011);
 iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
 iVar3 = param_strcmp(&DAT_00014021,&DAT_0001401d);
 return iVar3 + iVar1 + iVar2;
}

// Function: param_strlen @ 0x11c58
void param_strlen(unsigned int param_1)
{
 FUN_00011600(param_1);
 return;
}

// Function: call_strlen @ 0x11c7e
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11c88
void param_memcpy(char *param_1,char *param_2,int param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 }
 return;
}

// Function: call_memcpy @ 0x11ca2
int call_memcpy(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 int *piVar4;
 int in_GS_OFFSET;
 unsigned int local_38 [5];
 int local_24 [4];
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar2 = &DAT_00014400;
 puVar3 = local_38;
 for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 piVar4 = local_24;
 for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar4 = 0;
 piVar4 = piVar4 + 1;
 }
 param_memcpy(local_24,local_38,0x14);
 local_14 = local_24[2] + local_24[0] + local_14;
if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
}
return local_14;
}

// Function: param_memcmp @ 0x11d10
int param_memcmp(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_000114b0(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_memcmp @ 0x11d4f
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int local_34 [10];
 local_34[9] = *(int *)(in_GS_OFFSET + 0x14);
 piVar3 = &DAT_00014414;
 piVar4 = local_34;
 for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = &DAT_00014420;
 piVar4 = local_34 + 3;
 for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = &DAT_00014414;
 piVar4 = local_34 + 6;
 for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 iVar2 = param_memcmp(local_34,local_34 + 3,0xc);
 iVar1 = param_memcmp(local_34,local_34 + 6,0xc);
 iVar1 = iVar1 + iVar2;
if (local_34[9] != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
}
return iVar1;
}

// Function: param_printf @ 0x11ddc
void __regparm1 param_printf(unsigned int param_1_00,unsigned int param_1,unsigned int param_2)
{
 FUN_000116b0(1,"Value: %d, Name: %s\n",param_1);
 return;
}

// Function: call_printf @ 0x11e09
void call_printf(void)
{
 param_printf(0x2a,0x2a,0);
 return;
}

// Function: param_scanf @ 0x11e2d
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x11e3a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011630(param_1,"%d,%d",&local_18,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_18;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: call_scanf @ 0x11e8e
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x11eb0
unsigned int param_fopen_fclose(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 uVar2 = 0xffffffff;
 iVar1 = FUN_00011640(param_1,&DAT_00014048);
 if (iVar1 != 0) {
 uVar2 = FUN_00011680(iVar1);
 FUN_00011480(iVar1);
 }
 return uVar2;
}

// Function: call_fopen_fclose @ 0x11f03
uint call_fopen_fclose(void)
{
 int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x11f2e
int param_fread_fwrite(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11f3d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011640(param_1,&DAT_00014056);
 iVar2 = -1;
 if (iVar1 != 0) {
 iVar2 = FUN_00011540("BinBench Test Data",1,0x12,iVar1);
 if (iVar2 == 0x12) {
 FUN_000114f0(iVar1);
 iVar3 = FUN_00011570(local_40,1,0x12,iVar1);
 local_40[iVar3] = 0;
 FUN_00011480(iVar1);
 FUN_00011530(param_1);
 iVar2 = -3;
 if (iVar3 == 0x12) {
 iVar1 = FUN_00011420(local_40,"BinBench Test Data",0,0);
 iVar2 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 }
 else {
 FUN_00011480(iVar1);
 iVar2 = -2;
 }
 }
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: call_fread_fwrite @ 0x12016
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x12038
int param_malloc_free(int param_1)
{
 int *piVar1;
 int iVar2;
 piVar1 = (int *)FUN_000115b0(param_1 * 4);
 iVar2 = 0;
 if (piVar1 == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 for (; iVar2 != param_1; iVar2 = iVar2 + 1) {
 piVar1[iVar2] = iVar2 * 10;
 }
 iVar2 = *piVar1 + piVar1[param_1 + -1];
 FUN_00011460(piVar1);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x1209d
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x120b0
int param_memset(byte *param_1,int param_2, int param_3, int param_4)
{
 int iVar1;
 byte *pbVar2;
 iVar1 = 0;
 pbVar2 = param_1;
 for (; param_2 != 0; param_2 = param_2 + -1) {
 *pbVar2 = 0;
 pbVar2 = pbVar2 + 1;
 }
 for (; param_1 != pbVar2; param_1 = param_1 + 1) {
 iVar1 = iVar1 + (uint)*param_1;
 }
 return iVar1;
}

// Function: call_memset @ 0x120d8
int call_memset(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_38 [10];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 local_38[iVar1] = 0xff;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 param_memset(local_38,0x28,0,0);
 local_38[9] = local_38[9] + local_38[0];
if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
}
return local_38[9];
}

// Function: param_strchr_strstr @ 0x12120
int param_strchr_strstr(int param_1,char param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = FUN_000115f0(param_1,(int)param_2);
 iVar3 = -1;
 if (iVar1 != 0) {
 iVar1 = iVar1 - param_1;
 iVar3 = iVar1;
 }
 iVar1 = FUN_00011410(param_1,param_3,iVar1,iVar1);
 iVar2 = -1;
 if (iVar1 != 0) {
 iVar2 = iVar1 - param_1;
 }
 return iVar3 + iVar2;
}

// Function: call_strchr_strstr @ 0x12178
void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x121a6
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 FUN_000115c0(&DAT_0001409d);
 call_strcpy();
 FUN_000116b0(1,&DAT_000140c1,0);
 call_strcmp();
 FUN_000116b0(1,&DAT_000140dc,uVar1);
 FUN_000116b0(1,&DAT_000140f7,0xc);
 call_memcpy();
 FUN_000116b0(1,&DAT_00014113,uVar1);
 call_memcmp();
 FUN_000116b0(1,&DAT_0001412f,uVar1);
 call_printf();
 FUN_000116b0(1,&DAT_0001414b,uVar1);
 call_scanf();
 FUN_000116b0(1,&DAT_00014167,uVar1);
 call_fopen_fclose();
 FUN_000116b0(1,&DAT_00014184,uVar1);
 call_fread_fwrite();
 FUN_000116b0(1,&DAT_000141a0,uVar1);
 call_malloc_free();
 FUN_000116b0(1,&DAT_000141bc,uVar1);
 call_memset();
 FUN_000116b0(1,&DAT_000141d8,uVar1);
 call_strchr_strstr();
 FUN_000116b0(1,&DAT_000141f3,uVar1);
 return;
}

// Function: param_linux_syscall @ 0x122e0
int __regparm2 param_linux_syscall(unsigned int param_1_00,unsigned int param_2,unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = FUN_00011670(5,param_1,0,param_2);
 if (iVar1 < 0) {
 piVar2 = (int *)FUN_00011650();
 iVar1 = -*piVar2;
 }
 else {
 FUN_00011670(6,iVar1,iVar1,iVar1);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1232b
uint call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall(0, "/etc/passwd", 0);
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x12356
unsigned int param_win32_api(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12363;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115d0(param_1,local_68);
 uVar2 = 0xffffffff;
 if ((-1 < iVar1) && (uVar2 = 0x2a, local_3c < 1)) {
 uVar2 = 0xfffffffe;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x123b6
unsigned int call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x123d8
uint param_fork_exec(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 uint uVar2;
 unsigned int *puVar3;
 int in_GS_OFFSET;
 unsigned long long uVar4;
 unsigned int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 char auStack_2c [8];
 uint local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x123e7;
 puVar3 = (unsigned int *)auStack_2c;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 uStack_30 = 0x12406;
 uVar4 = FUN_000116e0();
 if ((int)uVar4 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 puVar3 = (unsigned int *)auStack_2c;
 if ((int)uVar4 == 0) {
 uStack_30 = 0;
 uStack_34 = param_2;
 uStack_38 = param_1;
 puVar3 = &local_3c;
 local_3c = param_1;
 FUN_00011690(0);
 local_3c = 0x7f;
 FUN_00011450();
 }
 *(int *)((int)puVar3 + -4) = 0;
 *(unsigned int *)((int)puVar3 + -8) = 0;
 *(uint **)((int)puVar3 + -0xc) = &local_24;
 *(int *)((int)puVar3 + -0x10) = (int)uVar4;
 *(unsigned int *)((int)puVar3 + -0x14) = 0x1242f;
 iVar1 = FUN_00011550();
 uVar2 = 0xfffffffe;
 if (-1 < iVar1) {
 uVar2 = 0xfffffffd;
 if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 }
 }
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)((int)puVar3 + -4) = 0x12463;
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x1246b
int call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}

// Function: param_pipe_communication @ 0x1249b
unsigned int param_pipe_communication(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int ***pppuVar3;
 int in_GS_OFFSET;
 unsigned int **local_4c;
 char *pcStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 char auStack_3c [4];
 unsigned int **local_38;
 unsigned int **local_34;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_4c = &local_38;
 iVar1 = FUN_000116a0();
 pppuVar3 = (unsigned int ***)auStack_3c;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uStack_40 = 0x124d6;
 iVar1 = FUN_000116e0();
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 pppuVar3 = (unsigned int ***)auStack_3c;
 }
 else {
 pppuVar3 = (unsigned int ***)auStack_3c;
 if (iVar1 == 0) {
 local_4c = local_38;
 FUN_00011740(0);
 pcStack_48 = "HelloPipe";
 uStack_44 = 9;
 local_4c = local_34;
 FUN_00011610(0);
 pppuVar3 = &local_4c;
 local_4c = local_34;
 FUN_00011740(0);
 local_4c = (unsigned int **)0x0;
 FUN_00011450();
 }
 *(unsigned int ***)((int)pppuVar3 + -0x10) = local_34;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x1251f;
 FUN_00011740(0);
 *(unsigned int *)((int)pppuVar3 + -8) = 0x1f;
 *(char **)((int)pppuVar3 + -0xc) = local_30;
 *(unsigned int ***)((int)pppuVar3 + -0x10) = local_38;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x12530;
 FUN_00011440();
 local_30[0] = 0;
 *(unsigned int ***)((int)pppuVar3 + -0x10) = local_38;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x12540;
 FUN_00011740(0);
 *(unsigned int *)((int)pppuVar3 + -0x10) = 0;
 *(unsigned int *)((int)pppuVar3 + -0x14) = 0x1254c;
 FUN_00011500(0);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 }
if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(unsigned int *)((int)pppuVar3 + -4) = 0x1257b;
 __stack_chk_fail_local();
}
return uVar2;
}

// Function: param_socket_create @ 0x1258b
unsigned int param_socket_create(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int *puVar4;
 int in_GS_OFFSET;
 byte bVar5;
 unsigned int local_34;
 unsigned short local_30;
 int local_20;
 unsigned int uStack_14;
 bVar5 = 0;
 uStack_14 = 0x1259a;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011710(2,1,0);
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 local_34 = 1;
 iVar3 = FUN_000113d0(iVar1,1,2,&local_34,4);
 if (iVar3 < 0) {
 FUN_00011740(iVar1);
 uVar2 = 0xfffffffe;
 }
 else {
 puVar4 = (unsigned int *)&local_30;
 for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
 *puVar4 = 0;
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 local_30 = 2;
 iVar3 = FUN_00011620(iVar1,&local_30,0x10,0);
 if (iVar3 < 0) {
 FUN_00011740(iVar1);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar3 = FUN_000116f0(iVar1,5,iVar3,iVar3);
 if (iVar3 < 0) {
 FUN_00011740(iVar1);
 uVar2 = 0xfffffffc;
 }
 else {
 FUN_00011740(iVar1);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: param_shmget_shmat @ 0x1268c
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 unsigned int extraout_ECX;
 iVar1 = FUN_000115e0("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 FUN_00011740(iVar1);
 iVar1 = FUN_00011700("/tmp/binbench_shm",0x2a);
 if (-1 < iVar1) {
 iVar1 = FUN_00011470(iVar1,0x1000,0x3b6,"/tmp/binbench_shm");
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 iVar2 = FUN_00011510(iVar1,0,0,extraout_ECX);
 if (iVar2 == -1) {
 return 0xfffffffd;
 }
 FUN_00011580(iVar2,"SharedMemory",iVar2,iVar2);
 uVar3 = FUN_00011600(iVar2);
 FUN_000116c0(iVar2);
 FUN_00011590(iVar1,0,0);
 return uVar3;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x12758
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x12778
unsigned int __regparm3 param_signal_handling(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_000114a0(10,signal_handler,param_1,param_1);
 uVar2 = 0xffffffff;
 if (iVar1 != -1) {
 iVar1 = FUN_000114a0(0xe,signal_handler,0xffffffff,0xffffffff);
 uVar2 = 0xfffffffe;
 if (iVar1 != -1) {
 iVar1 = 0x3e9;
 signal_received = 0;
 FUN_000113f0(10);
 while ((signal_received == 0 && (iVar1 = iVar1 + -1, iVar1 != 0))) {
 FUN_00011560(1000);
 }
 uVar2 = 0xfffffffd;
 if ((signal_received != 0) && (uVar2 = 0xfffffffc, signal_number == 10)) {
 iVar1 = 0x7d1;
 signal_received = 0;
 FUN_000114d0(1);
 while ((signal_received == 0 && (iVar1 = iVar1 + -1, iVar1 != 0))) {
 FUN_00011560(1000);
 }
 uVar2 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 FUN_000114a0(10,0,0xfffffffb,0xfffffffb);
 FUN_000114a0(0xe,0,0,0);
 }
 }
 }
 }
 return uVar2;
}

// Function: test_system_calls @ 0x128a7
void test_system_calls(void)
{
 unsigned int uVar1;
 FUN_000115c0(&DAT_00014242);
 uVar1 = call_linux_syscall();
 FUN_000116b0(1,&DAT_0001425d,uVar1);
 uVar1 = call_win32_api();
 FUN_000116b0(1,&DAT_00014279,uVar1);
 uVar1 = call_fork_exec();
 FUN_000116b0(1,&DAT_00014295,uVar1);
 uVar1 = param_pipe_communication();
 FUN_000116b0(1,&DAT_000142b1,uVar1);
 uVar1 = param_socket_create();
 FUN_000116b0(1,&DAT_000142cd,uVar1);
 uVar1 = call_shmget_shmat();
 FUN_000116b0(1,&DAT_000142e9,uVar1);
 uVar1 = param_signal_handling(0);
 FUN_000116b0(1,&DAT_00014305,uVar1);
 return;
}

// Function: param_pthread_create @ 0x12972
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1297f;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = param_1;
 iVar1 = FUN_000116d0(&local_1c,0,thread_compute,&local_18);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 FUN_00011720(local_1c,&local_14,0xffffffff,0xffffffff);
 uVar2 = *local_14;
 FUN_00011460(local_14);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar2 = __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x129f3
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x12a06
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int in_GS_OFFSET;
 int local_50 [12];
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x12a20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 piVar3 = &DAT_00014440;
 piVar4 = local_50 + 3;
 for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = local_50 + 3;
 piVar4 = local_50;
 do {
 iVar2 = FUN_000116d0(piVar4,0,thread_sum,piVar3);
 if (iVar2 != 0) {
 iVar2 = -1;
 goto LAB_00012aa6;
 }
 piVar4 = piVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (piVar4 != local_50 + 3);
 iVar1 = 0;
 iVar2 = 0;
 iVar5 = 0;
 do {
 iVar1 = FUN_00011720(local_50[iVar5],0,iVar1,iVar1);
 if (iVar1 != 0) {
 iVar2 = -2;
 break;
 }
 iVar1 = iVar5 * 0xc;
 iVar6 = iVar5 + 1;
 iVar2 = iVar2 + local_50[iVar5 * 3 + 5];
 iVar5 = iVar6;
 } while (iVar6 != 3);
LAB_00012aa6:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: param_mutex_lock @ 0x12aca
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 iVar1 = FUN_000115b0(param_1 * 4);
 uVar2 = 0xffffffff;
 if (iVar1 != 0) {
 shared_counter = 0;
 for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
 iVar3 = FUN_000116d0(iVar1 + iVar4 * 4,0,thread_increment,&param_2);
 if (iVar3 != 0) {
 FUN_00011460(iVar1);
 return 0xfffffffe;
 }
 uVar2 = 0;
 }
 for (iVar4 = 0; iVar4 < param_1; iVar4 = iVar4 + 1) {
 uVar2 = FUN_00011720(*(unsigned int *)(iVar1 + iVar4 * 4),0,uVar2,uVar2);
 }
 FUN_00011460(iVar1);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * param_2) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12b9c
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x12bb4
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12bc1;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = FUN_000116d0(&local_18,0,consumer_thread,0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = FUN_000116d0(&local_1c,0,producer_thread,0);
 if (iVar1 == 0) {
 FUN_00011720(local_18,&local_14,0,0);
 FUN_00011720(local_1c,0,0,0);
 uVar2 = *local_14;
 FUN_00011460(local_14);
 }
 else {
 FUN_00011730(local_18);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar2;
}

// Function: param_atomic_ops @ 0x12c88
unsigned int param_atomic_ops(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int in_GS_OFFSET;
 unsigned long long uVar6;
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 int stack0x00000008;
 uStack_14 = 0x12c97;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = FUN_000115b0(param_1 << 2);
 uVar3 = 0xffffffff;
 if (iVar2 != 0) {
 atomic_counter = 0;
 for (iVar5 = 0; iVar5 < param_1; iVar5 = iVar5 + 1) {
 iVar4 = FUN_000116d0(iVar2 + iVar5 * 4,0,thread_atomic_increment,&stack0x00000008);
 if (iVar4 != 0) {
 FUN_00011460(iVar2);
 uVar3 = 0xfffffffe;
 goto LAB_00012d71;
 }
 }
 FUN_000116d0(&local_24,0,thread_atomic_load_store,0);
 uVar3 = 0;
 iVar5 = 0;
 if (iVar5 == 0) {
 iVar5 = FUN_00011720(local_24,0,uVar3,uVar3);
 }
 for (iVar4 = 0; iVar1 = atomic_counter, iVar4 < param_1; iVar4 = iVar4 + 1) {
 iVar5 = FUN_00011720(*(unsigned int *)(iVar2 + iVar4 * 4),0,iVar5,iVar5);
 }
 FUN_00011460(iVar2);
 uVar3 = 0x2a;
 if (iVar1 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00012d71:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: call_atomic_ops @ 0x12d8a
void call_atomic_ops(void)
{
 param_atomic_ops(4);
 return;
}

// Function: param_thread_local_storage @ 0x12da2
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 void *pcVar5;
 void *extraout_EDX;
 unsigned int extraout_EDX_00;
 int iVar6;
 int in_GS_OFFSET;
 int local_38;
 int local_34;
 int *local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x12db1;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115b0(param_1 * 4);
 iVar2 = FUN_000115b0(param_1 * 4);
 if ((iVar1 == 0) || (iVar2 == 0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (iVar6 = 0; iVar6 < param_1; iVar6 = iVar6 + 1) {
 uVar3 = FUN_000115b0(0x10);
 *(unsigned int *)(iVar2 + iVar6 * 4) = uVar3;
 FUN_00011400(uVar3,0x10,1,0x10,"Thread-%d",iVar6);
 }
 pcVar5 = thread_tls_test;
 for (iVar6 = 0; iVar6 < param_1; iVar6 = iVar6 + 1) {
 iVar4 = FUN_000116d0(iVar1 + iVar6 * 4,0,thread_tls_test,*(unsigned int *)(iVar2 + iVar6 * 4));
 if (iVar4 != 0) {
 iVar4 = 0;
 do {
 FUN_00011460(*(unsigned int *)(iVar2 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (iVar4 <= iVar6);
 FUN_00011460(iVar2);
 FUN_00011460(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00012f17;
 }
 }
 local_38 = 0;
 local_34 = 0;
 for (iVar6 = 0; iVar6 < param_1; iVar6 = iVar6 + 1) {
 FUN_00011720(*(unsigned int *)(iVar1 + iVar6 * 4),&local_24,pcVar5,pcVar5);
 local_34 = local_34 + *local_24;
 local_38 = local_38 + local_24[1];
 FUN_00011460(local_24);
 FUN_00011460(*(unsigned int *)(iVar2 + iVar6 * 4));
 }
 FUN_00011460(iVar2);
 FUN_00011460(iVar1);
 if ((param_1 * 100 - local_34 != 0) || (uVar3 = 0x2a, param_1 * 0x96 - local_38 != 0)) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00012f17:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x12f32
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x12f45
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 FUN_000115c0(&DAT_0001432b);
 call_pthread_create();
 FUN_000116b0(1,&DAT_00014349,0);
 uVar1 = param_pthread_join();
 FUN_000116b0(1,&DAT_00014365,uVar1);
 call_mutex_lock();
 FUN_000116b0(1,&DAT_00014382,0);
 uVar1 = param_condition_variable();
 FUN_000116b0(1,&DAT_0001439e,uVar1);
 call_atomic_ops();
 FUN_000116b0(1,&DAT_000143ba,0);
 call_thread_local_storage();
 FUN_000116b0(1,&DAT_000143d6,0);
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x12ff9
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x12ffd
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x13001
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x13010
int __stack_chk_fail_local(void)
{
 FUN_000114e0();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x13030
void __do_global_ctors_aux(void);

void __do_global_ctors_aux_impl(void)
{
 return;
}

// Function: _fini @ 0x1307c
static void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

