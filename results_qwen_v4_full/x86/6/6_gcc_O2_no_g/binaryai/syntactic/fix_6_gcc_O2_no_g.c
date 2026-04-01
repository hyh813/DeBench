// Decompiled by BinaryAI
// SHA256: 6ab8779ae5cadd16922efb9bf93c39739f70f08719d487420b93c20ed28e79a2

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <signal.h>

typedef unsigned int uint;
typedef unsigned char byte;

// Global variables
unsigned int data;
unsigned int ready;
unsigned int signal_received;
unsigned int signal_number;
int shared_counter;
int atomic_counter;
int counter_mutex;
int cond;
int cond_mutex;

// Data references
char DAT_00014030[];
char DAT_0001401d[];
char DAT_0001403e[];
char DAT_00014390[];
char DAT_0001406b[];
char DAT_00014086[];
char DAT_000140a1[];
char DAT_000140bd[];
char DAT_000140d9[];
char DAT_000140f5[];
char DAT_00014111[];
char DAT_0001412e[];
char DAT_0001414a[];
char DAT_00014166[];
char DAT_00014182[];
char DAT_0001419d[];
char DAT_000141df[];
char DAT_000141fa[];
char DAT_00014216[];
char DAT_00014232[];
char DAT_0001424e[];
char DAT_0001426a[];
char DAT_00014286[];
char DAT_000142a2[];
char DAT_000142c8[];
char DAT_000142e6[];
char DAT_00014302[];
char DAT_0001431f[];
char DAT_0001433b[];
char DAT_00014357[];
char DAT_00014373[];
char UNK_0001289b;

// Function declarations
void *__gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void FUN_00011030(void);
void FUN_000113e0(unsigned int);
void FUN_000113f0(int, int, int, void *, int);
int FUN_00011400(int);
int FUN_00011410(int);
int FUN_00011420(unsigned int, int, int, int, char *, int);
int FUN_00011430(unsigned int, unsigned int);
int FUN_00011440(unsigned int, unsigned int);
int FUN_00011450(void *, unsigned int, void *, int, int, unsigned int, char *);
int FUN_00011460(void);
int FUN_00011470(int);
void FUN_00011480(void *);
int FUN_00011490(unsigned int, unsigned int, unsigned int);
int FUN_000114a0(int, int, int);
int FUN_000114b0(int);
int FUN_000114c0(int, int);
int FUN_000114d0(int, void *);
int FUN_000114e0(unsigned int, unsigned int, unsigned int);
int FUN_000114f0(int);
int FUN_00011500(int);
int FUN_00011510(unsigned int, unsigned int);
int FUN_00011520(void);
int FUN_00011530(int);
int FUN_00011540(void);
int FUN_00011550(int, int, int);
int FUN_00011560(int);
int FUN_00011570(unsigned int);
int FUN_00011580(char *, int, int, int);
int FUN_00011590(int, unsigned int *, int);
int FUN_000115a0(int);
int FUN_000115b0(char *, int, int, int);
int FUN_000115c0(int, int, int);
int FUN_000115d0(int);
void *FUN_000115e0(unsigned int);
int FUN_000115f0(char *);
int FUN_00011600(char *, char *);
int FUN_00011610(char *, int, int);
int FUN_00011620(unsigned int, int);
int FUN_00011630(unsigned int);
int FUN_00011640(void);
int FUN_00011650(int, unsigned int *, int);
int FUN_00011660(char *, char *, int *, int *);
void *FUN_00011670(char *, char *);
int FUN_00011680(void *, int, int, unsigned int);
void *FUN_00011690(unsigned int);
int FUN_000116a0(int, unsigned int, int, unsigned int);
int FUN_000116b0(int, char *, int);
int FUN_000116c0(int);
int FUN_000116d0(char *, char *, char *, int);
int FUN_000116e0(void);
int FUN_000116f0(int, char *, ...);
int FUN_00011700(void *);
int FUN_00011710(unsigned int *, void *, void *, void *);
int FUN_00011720(void);
int FUN_00011730(int, int);
int FUN_00011740(char *, int);
int FUN_00011750(int, int, int);
int FUN_00011760(unsigned int, void **);
int FUN_00011770(unsigned int);
int FUN_00011780(int);
void LOCK(void);
void UNLOCK(void);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_cx(void);
unsigned int __x86_get_pc_thunk_ax(void);
void __stack_chk_fail_local(void);

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000113e0 @ 0x113e0
void FUN_000113e0(unsigned int param_1)
{
 ((void (*)(unsigned int))(param_1 + 0xf8))(param_1);
 return;
}

// Function: FUN_000113f0 @ 0x113f0
void FUN_000113f0(int param_1, int param_2, int param_3, void *param_4, int param_5)
{
 ((void (*)(int, int, int, void *, int))(param_1 + 0xc))(param_1, param_2, param_3, param_4, param_5);
 return;
}

// Function: FUN_00011400 @ 0x11400
int FUN_00011400(int param_1)
{
 ((void (*)(void))(param_1 + 0x10))();
 return 0;
}

// Function: FUN_00011410 @ 0x11410
int FUN_00011410(int param_1)
{
 ((void (*)(void))(param_1 + 0x14))();
 return 0;
}

// Function: FUN_00011420 @ 0x11420
int FUN_00011420(unsigned int param_1, int param_2, int param_3, int param_4, char *param_5, int param_6)
{
 (void)param_1;
 (void)param_2;
 (void)param_3;
 (void)param_4;
 (void)param_5;
 (void)param_6;
 return 0;
}

// Function: FUN_00011430 @ 0x11430
int FUN_00011430(unsigned int param_1, unsigned int param_2)
{
 ((void (*)(void))(param_1 + 0x1c))();
 return 0;
}

// Function: FUN_00011440 @ 0x11440
int FUN_00011440(unsigned int param_1, unsigned int param_2)
{
 ((void (*)(void))(param_1 + 0x20))();
 return 0;
}

// Function: FUN_00011450 @ 0x11450
int FUN_00011450(void *param_1, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 ((void (*)(void))(param_1 + 0x24))();
 return 0;
}

// Function: FUN_00011460 @ 0x11460
int FUN_00011460(void)
{
 return 0;
}

// Function: FUN_00011470 @ 0x11470
int FUN_00011470(int param_1)
{
 return 0;
}

// Function: FUN_00011480 @ 0x11480
void FUN_00011480(void *param_1)
{
 (void)param_1;
 return;
}

// Function: FUN_00011490 @ 0x11490
int FUN_00011490(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
 return 0;
}

// Function: FUN_000114a0 @ 0x114a0
int FUN_000114a0(int param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_000114b0 @ 0x114b0
int FUN_000114b0(int param_1)
{
 return 0;
}

// Function: FUN_000114c0 @ 0x114c0
int FUN_000114c0(int param_1, int param_2)
{
 return 0;
}

// Function: FUN_000114d0 @ 0x114d0
int FUN_000114d0(int param_1, void *param_2)
{
 return 0;
}

// Function: FUN_000114e0 @ 0x114e0
int FUN_000114e0(unsigned int param_1, unsigned int param_2, unsigned int param_3)
{
 return 0;
}

// Function: FUN_000114f0 @ 0x114f0
int FUN_000114f0(int param_1)
{
 return 0;
}

// Function: FUN_00011500 @ 0x11500
int FUN_00011500(int param_1)
{
 return 0;
}

// Function: FUN_00011510 @ 0x11510
int FUN_00011510(unsigned int param_1, unsigned int param_2)
{
 return 0;
}

// Function: FUN_00011520 @ 0x11520
int FUN_00011520(void)
{
 return 0;
}

// Function: FUN_00011530 @ 0x11530
int FUN_00011530(int param_1)
{
 return 0;
}

// Function: FUN_00011540 @ 0x11540
int FUN_00011540(void)
{
 return 0;
}

// Function: FUN_00011550 @ 0x11550
int FUN_00011550(int param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_00011560 @ 0x11560
int FUN_00011560(int param_1)
{
 return 0;
}

// Function: FUN_00011570 @ 0x11570
int FUN_00011570(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011580 @ 0x11580
int FUN_00011580(char *param_1, int param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_00011590 @ 0x11590
int FUN_00011590(int param_1, unsigned int *param_2, int param_3)
{
 return 0;
}

// Function: FUN_000115a0 @ 0x115a0
int FUN_000115a0(int param_1)
{
 return 0;
}

// Function: FUN_000115b0 @ 0x115b0
int FUN_000115b0(char *param_1, int param_2, int param_3, int param_4)
{
 return 0;
}

// Function: FUN_000115c0 @ 0x115c0
int FUN_000115c0(int param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_000115d0 @ 0x115d0
int FUN_000115d0(int param_1)
{
 return 0;
}

// Function: FUN_000115e0 @ 0x115e0
void *FUN_000115e0(unsigned int param_1)
{
 return (void *)0;
}

// Function: FUN_000115f0 @ 0x115f0
int FUN_000115f0(char *param_1)
{
 return 0;
}

// Function: FUN_00011600 @ 0x11600
int FUN_00011600(char *param_1, char *param_2)
{
 return 0;
}

// Function: FUN_00011610 @ 0x11610
int FUN_00011610(char *param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_00011620 @ 0x11620
int FUN_00011620(unsigned int param_1, int param_2)
{
 return 0;
}

// Function: FUN_00011630 @ 0x11630
int FUN_00011630(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011640 @ 0x11640
int FUN_00011640(void)
{
 return 0;
}

// Function: FUN_00011650 @ 0x11650
int FUN_00011650(int param_1, unsigned int *param_2, int param_3)
{
 return 0;
}

// Function: FUN_00011660 @ 0x11660
int FUN_00011660(char *param_1, char *param_2, int *param_3, int *param_4)
{
 return 0;
}

// Function: FUN_00011670 @ 0x11670
void *FUN_00011670(char *param_1, char *param_2)
{
 return (void *)0;
}

// Function: FUN_00011680 @ 0x11680
int FUN_00011680(void *param_1, int param_2, int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_00011690 @ 0x11690
void *FUN_00011690(unsigned int param_1)
{
 (void)param_1;
 return malloc(1);
}

// Function: FUN_000116a0 @ 0x116a0
int FUN_000116a0(int param_1, unsigned int param_2, int param_3, unsigned int param_4)
{
 return 0;
}

// Function: FUN_000116b0 @ 0x116b0
int FUN_000116b0(int param_1, char *param_2, int param_3)
{
 return 0;
}

// Function: FUN_000116c0 @ 0x116c0
int FUN_000116c0(int param_1)
{
 return 0;
}

// Function: FUN_000116d0 @ 0x116d0
int FUN_000116d0(char *param_1, char *param_2, char *param_3, int param_4)
{
 return 0;
}

// Function: FUN_000116e0 @ 0x116e0
int FUN_000116e0(void)
{
 return 0;
}

// Function: FUN_000116f0 @ 0x116f0
int FUN_000116f0(int param_1, char *param_2, ...)
{
 (void)param_1;
 (void)param_2;
 return 0;
}

// Function: FUN_00011700 @ 0x11700
int FUN_00011700(void *param_1)
{
 return 0;
}

// Function: FUN_00011710 @ 0x11710
int FUN_00011710(unsigned int *param_1, void *param_2, void *param_3, void *param_4)
{
 return 0;
}

// Function: FUN_00011720 @ 0x11720
int FUN_00011720(void)
{
 return 0;
}

// Function: FUN_00011730 @ 0x11730
int FUN_00011730(int param_1, int param_2)
{
 return 0;
}

// Function: FUN_00011740 @ 0x11740
int FUN_00011740(char *param_1, int param_2)
{
 return 0;
}

// Function: FUN_00011750 @ 0x11750
int FUN_00011750(int param_1, int param_2, int param_3)
{
 return 0;
}

// Function: FUN_00011760 @ 0x11760
int FUN_00011760(unsigned int param_1, void **param_2)
{
 if (param_2 != 0) {
  *param_2 = (void *)param_1;
 }
 return 0;
}

// Function: FUN_00011770 @ 0x11770
int FUN_00011770(unsigned int param_1)
{
 (void)param_1;
 return 0;
}

// Function: FUN_00011780 @ 0x11780
int FUN_00011780(int param_1)
{
 return 0;
}

// Function: main @ 0x11790
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _start @ 0x117b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 int stack_4;
 FUN_00011450(main,param_2,&stack_4,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x117dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x117e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x117f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11830
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11880
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x5793) == '\0') {
 if (*(int *)(unaff_EDI + 0x5763) != 0) {
 FUN_000113e0(*(unsigned int *)(unaff_EDI + 0x5777));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x5797);
 while (uVar1 < ((unaff_EDI + 0x558f) - (unaff_EDI + 0x558b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x5797) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x558b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x5797);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x5793) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11919
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1191d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: signal_handler @ 0x11930
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x11960
unsigned int thread_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 param_1[2] = 0;
 if (iVar1 <= param_1[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != param_1[1] + 1);
 param_1[2] = iVar2;
 }
 return 0;
}

// Function: thread_compute @ 0x11990
int thread_compute(int *param_1)
{
 int iVar1;
 void *pvVar2;
 iVar1 = *param_1;
 pvVar2 = FUN_00011690(4);
 if (pvVar2 != (void *)0) {
  *(int *)pvVar2 = iVar1 * iVar1;
  FUN_00011480(pvVar2);
 }
 return 0;
}

// Function: thread_increment @ 0x119c0
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 FUN_00011560(counter_mutex);
 shared_counter = shared_counter + 1;
 FUN_00011400(counter_mutex);
 FUN_000115a0(1000);
 } while (iVar1 != iVar2);
 }
 return 0;
}

// Function: consumer_thread @ 0x11a30
unsigned int consumer_thread(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 FUN_00011560(cond_mutex);
 uVar1 = data;
 while ((data == uVar1) && (ready == 0)) {
  FUN_000114c0(cond,cond_mutex);
  uVar1 = data;
 }
 FUN_00011400(cond_mutex);
 puVar2 = (unsigned int *)FUN_000115e0(4);
 if (puVar2 != 0) {
  *puVar2 = uVar1;
 }
 return 0;
}

// Function: producer_thread @ 0x11ab0
unsigned int producer_thread(void)
{
 FUN_000114f0(1);
 FUN_00011560(cond_mutex);
 data = 0x2a;
 ready = 1;
 FUN_000115d0(cond);
 FUN_00011400(cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x11b10
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *param_1) {
 iVar2 = 0;
 do {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = iVar2 + 1000;
 LOCK();
 if (iVar2 != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (*param_1 != iVar2);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x11b60
unsigned int thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: thread_tls_test @ 0x11b90
void thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 FUN_000116a0(*in_GS_OFFSET + -0x20,param_1,0x1f,0x11bb0);
 piVar3 = (int *)FUN_000115e0(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_strcpy @ 0x11bf0
int param_strcpy(int param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = FUN_00011510(param_1,param_2);
 return iVar1 - param_1;
}

// Function: call_strcpy @ 0x11c20
unsigned int call_strcpy(void)
{
 return 8;
}

// Function: param_strcmp @ 0x11c30
int param_strcmp(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011440(param_1,param_2);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x11c70
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11c80
void param_strlen(unsigned int param_1)
{
 FUN_00011630(param_1);
 return;
}

// Function: call_strlen @ 0x11cb0
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11cc0
unsigned int param_memcpy(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 FUN_00011490(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11cf0
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11d00
int param_memcmp(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_000114e0(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x11d40
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 local_28 = 1;
 local_24 = 2;
 local_20 = 4;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 iVar1 = FUN_000114e0(&local_34,&local_28,0xc);
 iVar3 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar1 = FUN_000114e0(&local_34,&local_1c,0xc);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_printf @ 0x11e20
void param_printf(unsigned int param_1,unsigned int param_2)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11e50
void call_printf(void)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",0x2a,&DAT_0001401d);
 return;
}

// Function: param_scanf @ 0x11e80
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x11e8a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011660(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 __stack_chk_fail_local();
}

// Function: call_scanf @ 0x11ef0
int call_scanf(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x11efa;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011660("123,456","%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 __stack_chk_fail_local();
}

// Function: param_fopen_fclose @ 0x11f60
unsigned int param_fopen_fclose(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011670(param_1,&DAT_00014030);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 }
 return uVar2;
}

// Function: call_fopen_fclose @ 0x11fb0
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011670("/etc/passwd",&DAT_00014030);
 if (iVar1 != 0) {
 iVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 if (-1 < iVar2) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x12010
int param_fread_fwrite(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x1201d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011670(param_1,&DAT_0001403e);
 if (iVar1 == 0) {
 iVar1 = -1;
 }
 else {
 iVar2 = FUN_00011580("BinBench Test Data",1,0x12,iVar1);
 if (iVar2 == 0x12) {
 FUN_00011530(iVar1);
 iVar2 = FUN_000115b0(local_40,1,0x12,iVar1);
 local_40[iVar2] = 0;
 FUN_000114b0(iVar1);
 FUN_00011570(param_1);
 if (iVar2 == 0x12) {
 iVar1 = FUN_00011440(local_40,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 FUN_000114b0(iVar1);
 iVar1 = -2;
 }
 }
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: call_fread_fwrite @ 0x12110
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x12140
int param_malloc_free(int param_1)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 piVar1 = (int *)FUN_000115e0(param_1 * 4);
 if (piVar1 == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar2 = 0;
 piVar3 = piVar1;
 do {
 *piVar3 = iVar2;
 iVar2 = iVar2 + 10;
 piVar3 = piVar3 + 1;
 } while (param_1 * 10 != iVar2);
 }
 iVar2 = *piVar1 + piVar1[param_1 + -1];
 FUN_00011480(piVar1);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x121b0
int call_malloc_free(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 piVar1 = (int *)FUN_000115e0(0x28);
 if (piVar1 == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 100);
 iVar3 = piVar1[9] + *piVar1;
 FUN_00011480(piVar1);
 }
 return iVar3;
}

// Function: param_memset @ 0x12210
int param_memset(byte *param_1,int param_2)
{
 byte *pbVar1;
 byte bVar2;
 int iVar3;
 FUN_00011680(param_1,0,param_2,0x12220);
 if (param_2 != 0) {
 iVar3 = 0;
 pbVar1 = param_1 + param_2;
 do {
 bVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + (uint)bVar2;
 } while (param_1 != pbVar1);
 return iVar3;
 }
 return 0;
}

// Function: call_memset @ 0x12270
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x12280
int param_strchr_strstr(int param_1,char param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = FUN_00011620(param_1,(int)param_2);
 iVar3 = iVar1 - param_1;
 if (iVar1 == 0) {
 iVar3 = -1;
 }
 iVar2 = FUN_00011430(param_1,param_3);
 iVar1 = -1;
 if (iVar2 != 0) {
 iVar1 = iVar2 - param_1;
 }
 return iVar1 + iVar3;
}

// Function: call_strchr_strstr @ 0x122e0
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x122f0
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int *piVar5;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000115f0(&DAT_00014390);
 FUN_000116f0(1,&DAT_0001406b,8);
 uVar1 = call_strcmp();
 FUN_000116f0(1,&DAT_00014086,uVar1);
 FUN_000116f0(1,&DAT_000140a1,0xc);
 FUN_000116f0(1,&DAT_000140bd,0x5a);
 uVar1 = call_memcmp();
 FUN_000116f0(1,&DAT_000140d9,uVar1);
 uVar1 = FUN_000116f0(1,"Value: %d, Name: %s\n",0x2a,&DAT_0001401d);
 FUN_000116f0(1,&DAT_000140f5,uVar1);
 iVar2 = FUN_00011660("123,456","%d,%d",&local_18,&local_14);
 if (iVar2 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 FUN_000116f0(1,&DAT_00014111,local_14);
 iVar2 = FUN_00011670("/etc/passwd",&DAT_00014030);
 if (iVar2 != 0) {
 iVar3 = FUN_000116c0(iVar2);
 FUN_000114b0(iVar2);
 uVar1 = 0x2a;
 if (-1 < iVar3) goto LAB_00012435;
 }
 uVar1 = 0xffffffff;
LAB_00012435:
 FUN_000116f0(1,&DAT_0001412e,uVar1);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 FUN_000116f0(1,&DAT_0001414a,uVar1);
 piVar4 = (int *)FUN_000115e0(0x28);
 if (piVar4 == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0;
 piVar5 = piVar4;
 do {
 *piVar5 = iVar2;
 iVar2 = iVar2 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar2 != 100);
 iVar2 = piVar4[9] + *piVar4;
 FUN_00011480(piVar4);
 }
 FUN_000116f0(1,&DAT_00014166,iVar2);
 uVar1 = call_memset();
 FUN_000116f0(1,&DAT_00014182,uVar1);
 FUN_000116f0(1,&DAT_0001419d,0xf);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_linux_syscall @ 0x12520
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x1252b;
 uVar3 = 0;
 iVar1 = FUN_000116b0(5,param_1,0);
 if (-1 < iVar1) {
 FUN_000116b0(6,iVar1,uVar3);
 return iVar1;
 }
 piVar2 = (int *)FUN_00011690(0);
 return -*piVar2;
}

// Function: call_linux_syscall @ 0x12580
unsigned int call_linux_syscall(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar3 = 0;
 iVar1 = FUN_000116b0(5,"/etc/passwd",0);
 if (-1 < iVar1) {
 FUN_000116b0(6,iVar1,uVar3);
 return 0x2a;
 }
 piVar2 = (int *)FUN_00011690(0);
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x125f0
unsigned int param_win32_api(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x125fa;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011600(param_1,local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_3c < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_win32_api @ 0x12660
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1266a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011600("/etc/passwd",local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_3c < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_fork_exec @ 0x126d0
uint param_fork_exec(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 uint uVar2;
 int in_GS_OFFSET;
 uint local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (iVar1 == 0) {
 FUN_000116d0(param_1,param_1,param_2,0);
 FUN_00011470(0x7f);
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
 }
 iVar1 = FUN_00011590(iVar1,&local_14,0);
 uVar2 = 0xfffffffe;
 if ((-1 < iVar1) && (uVar2 = local_14 >> 8 & 0xff, (local_14 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_fork_exec @ 0x12770
int call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}

// Function: param_pipe_communication @ 0x127a0
unsigned int param_pipe_communication(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_10;
 unsigned int uStack_c;
 uStack_c = 0x127ab;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000116e0();
 if (iVar1 < 0) {
  uVar2 = 0xffffffff;
 }
 else {
  iVar1 = FUN_00011720();
  if (iVar1 < 0) {
   uVar2 = 0xfffffffe;
  }
  else {
   if (iVar1 == 0) {
    FUN_00011780(0);
    FUN_00011640();
    FUN_00011780(0);
    FUN_00011470(0);
   }
   FUN_00011780(0);
   FUN_00011460();
   iVar1 = 0;
   FUN_00011780(0);
   FUN_00011540();
   uVar2 = 0x2a;
  }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
  return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_socket_create @ 0x128b0
unsigned int param_socket_create(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int in_GS_OFFSET;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x128bb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011750(2,1,0);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar2 = FUN_000113f0(iVar1,1,2,&local_24,4);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffe;
 }
 else {
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_20 = 2;
 iVar2 = FUN_00011650(iVar1,&local_20,0x10);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffd;
 }
 else {
 iVar2 = FUN_00011730(iVar1,5);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffc;
 }
 else {
 FUN_00011780(iVar1);
 uVar3 = 0x2a;
 }
 }
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_shmget_shmat @ 0x129f0
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = FUN_00011610("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 FUN_00011780(iVar1);
 iVar1 = FUN_00011740("/tmp/binbench_shm",0x2a);
 if (-1 < iVar1) {
 iVar1 = FUN_000114a0(iVar1,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 puVar2 = (unsigned int *)FUN_00011550(iVar1,0,0);
 if (puVar2 != (unsigned int *)0xffffffff) {
 *puVar2 = 0x72616853;
 puVar2[1] = 0x654d6465;
 puVar2[2] = 0x79726f6d;
 *(char *)(puVar2 + 3) = 0;
 FUN_00011700(puVar2);
 FUN_000115c0(iVar1,0,0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x12ad0
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

// Function: param_signal_handling @ 0x12af0
unsigned int param_signal_handling(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_000114d0(10,signal_handler);
 if (iVar1 == -1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = FUN_000114d0(0xe,signal_handler);
 if (iVar1 == -1) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 FUN_00011410(10);
 if (signal_received == 0) {
 iVar1 = 1000;
 do {
 FUN_000115a0(1000);
 if (signal_received != 0) break;
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 FUN_00011500(1);
 if (signal_received == 0) {
 iVar1 = 2000;
 do {
 FUN_000115a0(1000);
 if (signal_received != 0) break;
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar2 = 0xfffffffb;
 }
 else {
 FUN_000114d0(10,0);
 FUN_000114d0(0xe,0);
 uVar2 = 0x2a;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}

// Function: test_system_calls @ 0x12c60
void test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 int in_GS_OFFSET;
 unsigned int uVar3;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12c6b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000115f0(&DAT_000141df);
 uVar3 = 0;
 iVar1 = FUN_000116b0(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = (int *)FUN_00011690(0);
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 }
 else {
 FUN_000116b0(6,iVar1,uVar3);
 uVar3 = 0x2a;
 }
 FUN_000116f0(1,&DAT_000141fa,uVar3);
 iVar1 = FUN_00011600("/etc/passwd",local_68);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar3 = 0x2a;
 if (local_3c < 1) {
 uVar3 = 0xfffffffe;
 }
 }
 FUN_000116f0(1,&DAT_00014216,uVar3);
 iVar1 = param_fork_exec("/bin/true",0);
 FUN_000116f0(1,&DAT_00014232,(-(uint)(iVar1 == 0) & 0x2b) - 1);
 uVar3 = param_pipe_communication();
 FUN_000116f0(1,&DAT_0001424e,uVar3);
 uVar3 = param_socket_create();
 FUN_000116f0(1,&DAT_0001426a,uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0x2a;
 if (iVar1 < 1) {
 uVar3 = 0xffffffff;
 }
 FUN_000116f0(1,&DAT_00014286,uVar3);
 uVar3 = param_signal_handling();
 FUN_000116f0(1,&DAT_000142a2,uVar3);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_pthread_create @ 0x12df0
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
 uStack_c = 0x12dfb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = param_1;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
 FUN_00011760(local_1c,&local_14);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_pthread_create @ 0x12e80
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12e8b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 7;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
 FUN_00011760(local_1c,&local_14);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_pthread_join @ 0x12f10
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int in_GS_OFFSET;
 int local_50 [4];
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20 [3];
 unsigned int uStack_14;
 uStack_14 = 0x12f1d;
 local_20[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar6 = local_50 + 3;
 local_50[3] = 1;
 piVar3 = local_50;
 local_40 = 10;
 local_3c = 0;
 local_38 = 0xb;
 local_34 = 0x14;
 local_30 = 0;
 local_2c = 0x15;
 local_28 = 0x1e;
 local_24 = 0;
 piVar4 = piVar3;
 piVar5 = piVar6;
 do {
 iVar1 = FUN_00011710(piVar4,0,thread_sum,piVar5);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00012fe3;
 }
 piVar4 = piVar4 + 1;
 piVar5 = piVar5 + 3;
 } while (piVar5 != local_20);
 iVar1 = 0;
 do {
 iVar2 = FUN_00011760(*piVar3,0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + piVar6[2];
 piVar3 = piVar3 + 1;
 piVar6 = piVar6 + 3;
 } while (piVar6 != local_20);
LAB_00012fe3:
 if (local_20[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_mutex_lock @ 0x13030
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 bool bVar6;
 iVar1 = FUN_000115e0(param_1 << 2);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar2 = 0;
 iVar5 = iVar1;
 do {
 iVar4 = iVar2;
 iVar2 = FUN_00011710(iVar5,0,thread_increment,&param_2);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 return 0xfffffffe;
 }
 iVar2 = iVar4 + 1;
 iVar5 = iVar5 + 4;
 } while (param_1 != iVar2);
 iVar2 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar2 * 4),0);
 bVar6 = iVar4 != iVar2;
 iVar2 = iVar2 + 1;
 } while (bVar6);
 }
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (shared_counter != param_1 * param_2) {
 uVar3 = 0xfffffffd;
 }
 }
 return uVar3;
}

// Function: call_mutex_lock @ 0x13140
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x13160
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
 uStack_c = 0x1316b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = FUN_00011710(&local_18,0,consumer_thread,0);
 if (iVar1 == 0) {
 iVar1 = FUN_00011710(&local_1c,0,producer_thread,0);
 if (iVar1 == 0) {
 FUN_00011760(local_18,&local_14);
 FUN_00011760(local_1c,0);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xfffffffe;
 FUN_00011770(local_18);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_atomic_ops @ 0x13250
unsigned int param_atomic_ops(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int in_GS_OFFSET;
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x1325d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 << 2);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (param_1 < 1) {
 iVar5 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 if (iVar5 == 0) {
 FUN_00011760(local_24,0);
 }
 }
 else {
 iVar4 = 0;
 iVar5 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar5,0,thread_atomic_increment,(void *)&param_1);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_000132f4;
 }
 iVar4 = iVar4 + 1;
 iVar5 = iVar5 + 4;
 } while (param_1 != iVar4);
 iVar4 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 iVar5 = 0;
 if (iVar4 == 0) {
 FUN_00011760(local_24,0);
 }
 do {
 iVar4 = iVar5 * 4;
 iVar5 = iVar5 + 1;
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4),0);
 } while (iVar5 < param_1);
 }
 iVar5 = atomic_counter;
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (iVar5 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_000132f4:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: call_atomic_ops @ 0x133e0
void call_atomic_ops(void)
{
 param_atomic_ops(4);
 return;
}

// Function: param_thread_local_storage @ 0x13400
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 unsigned int *puVar6;
 int iVar7;
 int iVar8;
 int in_GS_OFFSET;
 bool bVar9;
 int *local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x1340d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 * 4);
 puVar2 = (unsigned int *)FUN_000115e0(param_1 * 4);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar8 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 do {
  iVar7 = iVar5;
  puVar2[iVar7] = (unsigned int)(uintptr_t)FUN_00011690(0x10);
  FUN_00011420(0,0x10,1,0x10,"Thread-%d",iVar7);
  iVar5 = iVar7 + 1;
 } while (param_1 != iVar7 + 1);
 iVar5 = iVar1;
 iVar8 = 0;
 do {
 iVar4 = FUN_00011710(iVar5,0,thread_tls_test,puVar2[iVar8]);
 if (iVar4 != 0) {
 puVar6 = puVar2;
 do {
 uVar3 = *puVar6;
 puVar6 = puVar6 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar8 + 1 != puVar6);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_0001352b;
 }
 iVar5 = iVar5 + 4;
 bVar9 = iVar7 != iVar8;
 iVar8 = iVar8 + 1;
 } while (bVar9);
 iVar8 = 0;
 iVar5 = 0;
 iVar4 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&local_24);
 iVar5 = iVar5 + *local_24;
 iVar8 = iVar8 + local_24[1];
 FUN_00011480(local_24);
 FUN_00011480(puVar2[iVar4]);
 bVar9 = iVar7 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar9);
 }
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((param_1 * 100 - iVar5 == 0) && (param_1 * 0x96 - iVar8 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_0001352b:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x13610
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x13630
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x1363b;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000115f0(&DAT_000142c8);
 local_18 = 7;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
  FUN_00011760(local_1c,&local_14);
  uVar2 = *local_14;
  FUN_00011480(local_14);
 }
 else {
  uVar2 = 0xffffffff;
 }
 FUN_000116f0(1,&DAT_000142e6,uVar2);
 uVar2 = param_pthread_join();
 FUN_000116f0(1,&DAT_00014302,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 FUN_000116f0(1,&DAT_0001431f,uVar2);
 param_condition_variable();
 uVar2 = param_atomic_ops(4);
 FUN_000116f0(1,&DAT_00014357,uVar2);
 uVar2 = param_thread_local_storage(4);
 FUN_000116f0(1,&DAT_00014373,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
  return;
 }
 __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.ax @ 0x1376f
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 (void)unaff_retaddr;
 return 0;
}

// Function: __x86.get_pc_thunk.cx @ 0x13773
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x13780
void __stack_chk_fail_local(void)
{
 FUN_00011520();
 return;
}

// Function: __do_global_ctors_aux @ 0x137a0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x137ec
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

