// Decompiled by BinaryAI
// SHA256: 769e17cef5ee655e047803772bf30a88fec91241f9db273f8354d583931c0f25

typedef unsigned int uint;
typedef unsigned long ulong;

/* C++ compatibility */
#ifndef __cplusplus
#define true 1
#define false 0
#endif

/* Global variables */
int unaff_EBX = 0;
int signal_received = 0;
int signal_number = 0;
void *counter_mutex = 0;
void *cond_mutex = 0;
int data = 0;
int ready = 0;
void *cond = 0;
int shared_counter = 0;
int atomic_counter = 0;
int stack0x00000008 = 500;

/* Atomic operation macros */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

/* Data labels */
char DAT_00014027[] = "BinBench";
char DAT_0001403a[] = "r";
char DAT_00014048[] = "w";
char DAT_00014075[] = "";
char DAT_00014090[] = "";
char DAT_000140ab[] = "";
char DAT_000140c7[] = "";
char DAT_000140e3[] = "";
char DAT_000140ff[] = "";
char DAT_0001411b[] = "";
char DAT_00014138[] = "";
char DAT_00014154[] = "";
char DAT_00014170[] = "";
char DAT_0001418c[] = "";
char DAT_000141a7[] = "";
char DAT_000141e9[] = "";
char DAT_00014204[] = "";
char DAT_00014220[] = "";
char DAT_0001423c[] = "";
char DAT_00014258[] = "";
char DAT_00014274[] = "";
char DAT_00014290[] = "";
char DAT_000142ac[] = "";
char DAT_000142c8[] = "";
char DAT_000142e6[] = "";
char DAT_00014302[] = "";
char DAT_0001431f[] = "";
char DAT_0001433b[] = "";
char DAT_00014357[] = "";
char DAT_00014373[] = "";
char DAT_00014390[] = "";
char UNK_00012d5b[] = "";

#include <stdarg.h>
#include <stddef.h>

/* Function prototypes */
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern void __do_global_ctors_aux(void);
extern void __stack_chk_fail(void);
extern void __stack_chk_fail_local(void);
extern void *_GLOBAL_OFFSET_TABLE_;
extern void *FUN_000115e0(size_t);
extern void FUN_00011480(int);
extern int FUN_000116f0(int, const char *, int, const char *, ...);
extern int FUN_000116b0(int, const char *, int);
extern int FUN_00011690(unsigned int);
extern int FUN_00011600(const char *, char *);
extern int FUN_00011720(void);
extern int FUN_00011590(int, void *, int);
extern int FUN_000116e0(void);

extern void FUN_00011470(void);
extern void FUN_00011460(void);
extern void FUN_00011540(void);
extern int FUN_000114a0(int, int, int);
extern int FUN_00011750(int, int, int);
extern int FUN_000113f0(int, int, int, const void *, unsigned int);
extern int FUN_00011650(int, const void *, unsigned int);
extern int FUN_00011730(int, int);
extern unsigned int FUN_00011610(const char *, int, int);
extern int FUN_00011700(int);
extern int FUN_000115c0(int, const void *, int);
extern int FUN_00011550(int, const void *, int);
extern int FUN_000114d0(int, void (*)(int));
extern int FUN_00011410(int);
extern int FUN_00011500(int);
extern int FUN_00011710(int, int, void (*)(unsigned int), int);
extern int FUN_00011760(int, void **);
extern int FUN_00011770(int);
extern int FUN_000115f0(const char *);
extern void FUN_00011680(void *, int, int, unsigned int);
extern int FUN_00011620(int, int);
extern int FUN_00011430(int, unsigned int);
extern int FUN_00011510(int, unsigned int);
extern int FUN_00011440(int, int);
extern int FUN_00011630(int);
extern int FUN_00011490(int, int, int);
extern int FUN_000114e0(int, int, int);
extern int FUN_00011660(const char *, const char *, ...);
extern int FUN_00011670(const char *, const char *);
extern int FUN_000116c0(int);
extern int FUN_000114b0(int);
extern int FUN_000114c0(void *, void *);
extern int FUN_00011580(const char *, int, int, int);
extern int FUN_00011530(int);
extern int FUN_000115b0(void *, int, int, int);
extern int FUN_00011570(int);
extern int FUN_00011420(int, int, int, int, const char *, ...);
extern void FUN_000116d0(void);
extern int FUN_000116a0(int, int, int, unsigned int);
extern int FUN_000115d0(void *);
extern int FUN_000114f0(int);
extern int FUN_00011560(int);
extern int FUN_00011400(int);
extern int FUN_000115a0(int);
extern void FUN_000113e0(unsigned int);
extern int FUN_00011450(void *, ...);
extern unsigned int test_system_calls(void);


// Function: _init @ 0x11000
void _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000113e0 @ 0x113e0
void FUN_000113e0(unsigned int param_1)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0xf8)))();
}

// Function: FUN_000113f0 @ 0x113f0
int FUN_000113f0(int param_1, int param_2, int param_3, const void *param_4, unsigned int param_5)
{
 int unaff_EBX;
 return ((int (*)(int, int, int, const void *, unsigned int))(*(void **)(unaff_EBX + 0xc)))(param_1, param_2, param_3, param_4, param_5);
}

// Function: FUN_00011400 @ 0x11400
int FUN_00011400(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x10)))(param_1);
}

// Function: FUN_00011410 @ 0x11410
int FUN_00011410(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x14)))(param_1);
}

// Function: FUN_00011420 @ 0x11420
int FUN_00011420(int param_1, int param_2, int param_3, int param_4, const char *param_5, ...)
{
 int unaff_EBX;
 va_list args;
 va_start(args, param_5);
 int result = ((int (*)(int, int, int, int, const char *, va_list))(*(void **)(unaff_EBX + 0x18)))(param_1, param_2, param_3, param_4, param_5, args);
 va_end(args);
 return result;
}

// Function: FUN_00011430 @ 0x11430
int FUN_00011430(int param_1, unsigned int param_2)
{
 int unaff_EBX;
 return ((int (*)(int, unsigned int))(*(void **)(unaff_EBX + 0x1c)))(param_1, param_2);
}

// Function: FUN_00011440 @ 0x11440
int FUN_00011440(int param_1, int param_2)
{
 int unaff_EBX;
 return ((int (*)(int, int))(*(void **)(unaff_EBX + 0x20)))(param_1, param_2);
}

// Function: FUN_00011450 @ 0x11450
int FUN_00011450(void *param_1, ...)
{
 int unaff_EBX;
 va_list args;
 va_start(args, param_1);
 int result = ((int (*)(void *, va_list))(*(void **)(unaff_EBX + 0x24)))(param_1, args);
 va_end(args);
 return result;
}

// Function: FUN_00011460 @ 0x11460
void FUN_00011460(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0x28)))();
}

// Function: FUN_00011470 @ 0x11470
void FUN_00011470(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0x2c)))();
}

// Function: FUN_00011480 @ 0x11480
void FUN_00011480(int param_1)
{
 int unaff_EBX;
 ((void (*)(int))(*(void **)(unaff_EBX + 0x30)))(param_1);
}

// Function: FUN_00011490 @ 0x11490
int FUN_00011490(int param_1, int param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, int, int))(*(void **)(unaff_EBX + 0x34)))(param_1, param_2, param_3);
}

// Function: FUN_000114a0 @ 0x114a0
int FUN_000114a0(int param_1, int param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, int, int))(*(void **)(unaff_EBX + 0x38)))(param_1, param_2, param_3);
}

// Function: FUN_000114b0 @ 0x114b0
int FUN_000114b0(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x3c)))(param_1);
}

// Function: FUN_000114c0 @ 0x114c0
int FUN_000114c0(void *param_1, void *param_2)
{
 int unaff_EBX;
 return ((int (*)(void *, void *))(*(void **)(unaff_EBX + 0x40)))(param_1, param_2);
}

// Function: FUN_000114d0 @ 0x114d0
int FUN_000114d0(int param_1, void (*param_2)(int))
{
 int unaff_EBX;
 return ((int (*)(int, void (*)(int)))(*(void **)(unaff_EBX + 0x44)))(param_1, param_2);
}

// Function: FUN_000114e0 @ 0x114e0
int FUN_000114e0(int param_1, int param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, int, int))(*(void **)(unaff_EBX + 0x48)))(param_1, param_2, param_3);
}

// Function: FUN_000114f0 @ 0x114f0
int FUN_000114f0(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x4c)))(param_1);
}

// Function: FUN_00011500 @ 0x11500
int FUN_00011500(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x50)))(param_1);
}

// Function: FUN_00011510 @ 0x11510
int FUN_00011510(int param_1, unsigned int param_2)
{
 int unaff_EBX;
 return ((int (*)(int, unsigned int))(*(void **)(unaff_EBX + 0x54)))(param_1, param_2);
}

// Function: FUN_00011520 @ 0x11520
void FUN_00011520(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0x58)))();
}

// Function: FUN_00011530 @ 0x11530
int FUN_00011530(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x5c)))(param_1);
}

// Function: FUN_00011540 @ 0x11540
void FUN_00011540(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0x60)))();
}

// Function: FUN_00011550 @ 0x11550
int FUN_00011550(int param_1, const void *param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, const void *, int))(*(void **)(unaff_EBX + 100)))(param_1, param_2, param_3);
}

// Function: FUN_00011560 @ 0x11560
int FUN_00011560(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x68)))(param_1);
}

// Function: FUN_00011570 @ 0x11570
int FUN_00011570(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x6c)))(param_1);
}

// Function: FUN_00011580 @ 0x11580
int FUN_00011580(const char *param_1, int param_2, int param_3, int param_4)
{
 int unaff_EBX;
 return ((int (*)(const char *, int, int, int))(*(void **)(unaff_EBX + 0x70)))(param_1, param_2, param_3, param_4);
}

// Function: FUN_00011590 @ 0x11590
int FUN_00011590(int param_1, void *param_2, int param_3)
{
 int unaff_EBX = 0;
 return ((int (*)(int, void *, int))(*(void **)(unaff_EBX + 0x74)))(param_1, param_2, param_3);
}

// Function: FUN_000115a0 @ 0x115a0
int FUN_000115a0(int param_1)
{
 int unaff_EBX = 0;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x78)))(param_1);
}

// Function: FUN_000115b0 @ 0x115b0
int FUN_000115b0(void *param_1, int param_2, int param_3, int param_4)
{
 int unaff_EBX;
 return ((int (*)(void *, int, int, int))(*(void **)(unaff_EBX + 0x7c)))(param_1, param_2, param_3, param_4);
}

// Function: FUN_000115c0 @ 0x115c0
int FUN_000115c0(int param_1, const void *param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, const void *, int))(*(void **)(unaff_EBX + 0x80)))(param_1, param_2, param_3);
}

// Function: FUN_000115d0 @ 0x115d0
int FUN_000115d0(void *param_1)
{
 int unaff_EBX;
 return ((int (*)(void *))(*(void **)(unaff_EBX + 0x84)))(param_1);
}

// Function: FUN_000115e0 @ 0x115e0
void *FUN_000115e0(size_t param_1)
{
 int unaff_EBX;
 return ((void *(*)(size_t))(*(void **)(unaff_EBX + 0x88)))(param_1);
}

// Function: FUN_000115f0 @ 0x115f0
int FUN_000115f0(const char *param_1)
{
 int unaff_EBX;
 return ((int (*)(const char *))(*(void **)(unaff_EBX + 0x8c)))(param_1);
}

// Function: FUN_00011600 @ 0x11600
int FUN_00011600(const char *param_1, char *param_2)
{
 int unaff_EBX;
 return ((int (*)(const char *, char *))(*(void **)(unaff_EBX + 0x90)))(param_1, param_2);
}

// Function: FUN_00011610 @ 0x11610
unsigned int FUN_00011610(const char *param_1, int param_2, int param_3)
{
 int unaff_EBX;
 return ((unsigned int (*)(const char *, int, int))(*(void **)(unaff_EBX + 0x94)))(param_1, param_2, param_3);
}

// Function: FUN_00011620 @ 0x11620
int FUN_00011620(int param_1, int param_2)
{
 int unaff_EBX;
 return ((int (*)(int, int))(*(void **)(unaff_EBX + 0x98)))(param_1, param_2);
}

// Function: FUN_00011630 @ 0x11630
int FUN_00011630(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0x9c)))(param_1);
}

// Function: FUN_00011640 @ 0x11640
void FUN_00011640(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0xa0)))();
}

// Function: FUN_00011650 @ 0x11650
int FUN_00011650(int param_1, const void *param_2, unsigned int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, const void *, unsigned int))(*(void **)(unaff_EBX + 0xa4)))(param_1, param_2, param_3);
}

// Function: FUN_00011660 @ 0x11660
int FUN_00011660(const char *param_1, const char *param_2, ...)
{
 int unaff_EBX;
 va_list args;
 va_start(args, param_2);
 int result = ((int (*)(const char *, const char *, va_list))(*(void **)(unaff_EBX + 0xa8)))(param_1, param_2, args);
 va_end(args);
 return result;
}

// Function: FUN_00011670 @ 0x11670
int FUN_00011670(const char *param_1, const char *param_2)
{
 int unaff_EBX;
 return ((int (*)(const char *, const char *))(*(void **)(unaff_EBX + 0xac)))(param_1, param_2);
}

// Function: FUN_00011680 @ 0x11680
void FUN_00011680(void *param_1, int param_2, int param_3, unsigned int param_4)
{
 int unaff_EBX;
 ((void (*)(void *, int, int, unsigned int))(*(void **)(unaff_EBX + 0xb0)))(param_1, param_2, param_3, param_4);
}

// Function: FUN_00011690 @ 0x11690
int FUN_00011690(unsigned int param_1)
{
 int unaff_EBX;
 return ((int (*)(unsigned int))(*(void **)(unaff_EBX + 0xb4)))(param_1);
}

// Function: FUN_000116a0 @ 0x116a0
int FUN_000116a0(int param_1, int param_2, int param_3, unsigned int param_4)
{
 int unaff_EBX;
 return ((int (*)(int, int, int, unsigned int))(*(void **)(unaff_EBX + 0xb8)))(param_1, param_2, param_3, param_4);
}

// Function: FUN_000116b0 @ 0x116b0
int FUN_000116b0(int param_1, const char *param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, const char *, int))(*(void **)(unaff_EBX + 0xbc)))(param_1, param_2, param_3);
}

// Function: FUN_000116c0 @ 0x116c0
int FUN_000116c0(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0xc0)))(param_1);
}

// Function: FUN_000116d0 @ 0x116d0
void FUN_000116d0(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + 0xc4)))();
}

// Function: FUN_000116e0 @ 0x116e0
int FUN_000116e0(void)
{
 int unaff_EBX;
 return ((int (*)(void))(*(void **)(unaff_EBX + 200)))();
}

// Function: FUN_000116f0 @ 0x116f0
int FUN_000116f0(int param_1, const char *param_2, int param_3, const char *param_4, ...)
{
 int unaff_EBX;
 va_list args;
 va_start(args, param_4);
 int result = ((int (*)(int, const char *, int, const char *, va_list))(*(void **)(unaff_EBX + 0xcc)))(param_1, param_2, param_3, param_4, args);
 va_end(args);
 return result;
}

// Function: FUN_00011700 @ 0x11700
int FUN_00011700(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0xd0)))(param_1);
}

// Function: FUN_00011710 @ 0x11710
int FUN_00011710(int param_1, int param_2, void *param_3, int param_4)
{
 int unaff_EBX;
 return ((int (*)(int, int, void *, int))(*(void **)(unaff_EBX + 0xd4)))(param_1, param_2, param_3, param_4);
}

// Function: FUN_00011720 @ 0x11720
int FUN_00011720(void)
{
 int unaff_EBX;
 return ((int (*)(void))(*(void **)(unaff_EBX + 0xd8)))();
}

// Function: FUN_00011730 @ 0x11730
int FUN_00011730(int param_1, int param_2)
{
 int unaff_EBX;
 return ((int (*)(int, int))(*(void **)(unaff_EBX + 0xdc)))(param_1, param_2);
}

// Function: FUN_00011740 @ 0x11740
int FUN_00011740(const char *param_1, int param_2)
{
 int unaff_EBX;
 return ((int (*)(const char *, int))(*(void **)(unaff_EBX + 0xe0)))(param_1, param_2);
}

// Function: FUN_00011750 @ 0x11750
int FUN_00011750(int param_1, int param_2, int param_3)
{
 int unaff_EBX;
 return ((int (*)(int, int, int))(*(void **)(unaff_EBX + 0xe4)))(param_1, param_2, param_3);
}

// Function: FUN_00011760 @ 0x11760
int FUN_00011760(int param_1, void **param_2)
{
 int unaff_EBX;
 return ((int (*)(int, void **))(*(void **)(unaff_EBX + 0xe8)))(param_1, param_2);
}

// Function: FUN_00011770 @ 0x11770
int FUN_00011770(int param_1)
{
 int unaff_EBX;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0xec)))(param_1);
}

// Function: FUN_00011780 @ 0x11780
int FUN_00011780(int param_1)
{
 int unaff_EBX = 0;
 return ((int (*)(int))(*(void **)(unaff_EBX + 0xf0)))(param_1);
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
 FUN_00011450(main,param_2,&stack0x00000008,0,0,param_1,auStack_4);
 do {
 } while( 1 );
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
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x5793) == '\0') {
 if (*(int *)(unaff_EDI + 0x5763) != 0) {
 ((void (*)(void))(*(void **)(unaff_EDI + 0xf8)))();
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x5797);
 while (uVar1 < ((unaff_EDI + 0x558f) - (unaff_EDI + 0x558b) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x5797) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x558b + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x5797);
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
 } while (param_1[1] + 1 != iVar1);
 param_1[2] = iVar2;
 }
 return 0;
}

// Function: thread_compute @ 0x11990
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)FUN_000115e0(4);
 *piVar2 = iVar1 * iVar1;
 return;
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
void consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 FUN_00011560(cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 FUN_000114c0(cond,cond_mutex);
 uVar1 = data;
 }
 FUN_00011400(cond_mutex);
 puVar2 = (unsigned int *)FUN_000115e0(4);
 *puVar2 = uVar1;
 return;
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

// Function: param_fork_exec.part.0 @ 0x11bf0
unsigned int param_fork_exec_part_0(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 unsigned int *puVar7;
 int in_GS_OFFSET;
 int *piStack_40;
 int iStack_3c;
 unsigned int uStack_30;
 char **ppuStack_2c;
 ppuStack_2c = &_GLOBAL_OFFSET_TABLE_;
 FUN_000116d0();
 FUN_00011470();
 uStack_30 = 0x11c29;
 iStack_3c = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(0x10);
 puVar2 = (unsigned int *)FUN_000115e0(0x10);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar6] = uVar3;
 iVar5 = iVar6 + 1;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar6);
 iVar6 = iVar5;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar6 = iVar1;
 do {
 iVar4 = FUN_00011710(iVar6,0,thread_tls_test,puVar2[iVar5]);
 if (iVar4 != 0) {
 puVar7 = puVar2;
 do {
 uVar3 = *puVar7;
 puVar7 = puVar7 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar5 + 1 != puVar7);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011d63;
 }
 iVar5 = iVar5 + 1;
 iVar6 = iVar6 + 4;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar4 = 0;
 iVar6 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&piStack_40);
 iVar6 = iVar6 + *piStack_40;
 iVar5 = iVar5 + piStack_40[1];
 FUN_00011480(piStack_40);
 puVar7 = puVar2 + iVar4;
 iVar4 = iVar4 + 1;
 FUN_00011480(*puVar7);
 } while (iVar4 != 4);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((iVar6 == 400) && (iVar5 == 600)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011d63:
 if (iStack_3c == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_thread_local_storage.constprop.0 @ 0x11c20
unsigned int param_thread_local_storage_constprop_0(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 unsigned int *puVar7;
 int in_GS_OFFSET;
 int *local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11c29;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(0x10);
 puVar2 = (unsigned int *)FUN_000115e0(0x10);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar6 = 0;
 do {
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar6] = uVar3;
 iVar5 = iVar6 + 1;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar6);
 iVar6 = iVar5;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar6 = iVar1;
 do {
 iVar4 = FUN_00011710(iVar6,0,thread_tls_test,puVar2[iVar5]);
 if (iVar4 != 0) {
 puVar7 = puVar2;
 do {
 uVar3 = *puVar7;
 puVar7 = puVar7 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar5 + 1 != puVar7);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011d63;
 }
 iVar5 = iVar5 + 1;
 iVar6 = iVar6 + 4;
 } while (iVar5 != 4);
 iVar5 = 0;
 iVar4 = 0;
 iVar6 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&local_24);
 iVar6 = iVar6 + *local_24;
 iVar5 = iVar5 + local_24[1];
 FUN_00011480(local_24);
 puVar7 = puVar2 + iVar4;
 iVar4 = iVar4 + 1;
 FUN_00011480(*puVar7);
 } while (iVar4 != 4);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((iVar6 == 400) && (iVar5 == 600)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011d63:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_atomic_ops.constprop.0 @ 0x11de0
unsigned int param_atomic_ops_constprop_0(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int in_GS_OFFSET;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11de9;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = 500;
 iVar1 = FUN_000115e0(0x10);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 iVar4 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar4,0,thread_atomic_increment,&local_28);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011ec0;
 }
 iVar4 = iVar4 + 4;
 } while (iVar4 != iVar1 + 0x10);
 iVar2 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 iVar4 = 0;
 if (iVar2 == 0) {
 FUN_00011760(local_24,0);
 }
 do {
 iVar2 = iVar4 * 4;
 iVar4 = iVar4 + 1;
 FUN_00011760(*(unsigned int *)(iVar1 + iVar2),0);
 iVar2 = atomic_counter;
 } while (iVar4 != 4);
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (iVar2 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011ec0:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_mutex_lock.constprop.0 @ 0x11f10
unsigned int param_mutex_lock_constprop_0(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int in_GS_OFFSET;
 int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11f19;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 1000;
 iVar1 = FUN_000115e0(0x10);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 iVar4 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar4,0,thread_increment,&local_24);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00011fdf;
 }
 iVar4 = iVar4 + 4;
 } while (iVar1 + 0x10 != iVar4);
 iVar4 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),0);
 iVar4 = iVar4 + 1;
 } while (iVar4 != 4);
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (local_24 << 2 != shared_counter) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00011fdf:
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_strcpy @ 0x12020
int param_strcpy(int param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = FUN_00011510(param_1,param_2);
 return iVar1 - param_1;
}

// Function: call_strcpy @ 0x12050
unsigned int call_strcpy(void)
{
 return 8;
}

// Function: param_strcmp @ 0x12060
int param_strcmp(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011440(param_1,param_2);
 iVar2 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x120a0
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x120b0
void param_strlen(unsigned int param_1)
{
 FUN_00011630(param_1);
 return;
}

// Function: call_strlen @ 0x120e0
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x120f0
unsigned int param_memcpy(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 FUN_00011490(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x12120
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x12130
int param_memcmp(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_000114e0(param_1,param_2,param_3);
 iVar2 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x12170
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
 iVar3 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar1 = FUN_000114e0(&local_34,&local_1c,0xc);
 iVar2 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar3;
 }
 __stack_chk_fail_local();
}

// Function: param_printf @ 0x12250
void param_printf(unsigned int param_1,unsigned int param_2)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x12280
void call_printf(void)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",0x2a,&DAT_00014027);
 return;
}

// Function: param_scanf @ 0x122b0
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x122ba;
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

// Function: call_scanf @ 0x12320
int call_scanf(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1232a;
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

// Function: param_fopen_fclose @ 0x12390
unsigned int param_fopen_fclose(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011670(param_1,&DAT_0001403a);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 }
 return uVar2;
}

// Function: call_fopen_fclose @ 0x123e0
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011670("/etc/passwd",&DAT_0001403a);
 if (iVar1 != 0) {
 iVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 if (-1 < iVar2) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x12440
int param_fread_fwrite(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x1244d;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011670(param_1,&DAT_00014048);
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
 iVar1 = (-(unsigned int)(iVar1 == 0) & 0x2d) - 3;
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

// Function: call_fread_fwrite @ 0x12540
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x12570
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

// Function: call_malloc_free @ 0x125e0
unsigned int call_malloc_free(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_000115e0(0x28);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 FUN_00011480(iVar1);
 uVar2 = 0x5a;
 }
 return uVar2;
}

// Function: param_memset @ 0x12620
int param_memset(unsigned char *param_1,int param_2)
{
 unsigned char *pbVar1;
 unsigned char bVar2;
 int iVar3;
 FUN_00011680(param_1,0,param_2,0x12630);
 if (param_2 != 0) {
 iVar3 = 0;
 pbVar1 = param_1 + param_2;
 do {
 bVar2 = *param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + (unsigned int)bVar2;
 } while (pbVar1 != param_1);
 return iVar3;
 }
 return 0;
}

// Function: call_memset @ 0x12680
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x12690
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

// Function: call_strchr_strstr @ 0x126f0
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x12700
void test_standard_library_functions(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int in_GS_OFFSET;
 int local_3c;
 int local_38;
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
 FUN_000115f0(&DAT_00014390);
 FUN_000116f0(1,&DAT_00014075,0,"",0,0);
 FUN_000116f0(1,&DAT_00014090,0,"",0,0);
 FUN_000116f0(1,&DAT_000140ab,0,"",0,0);
 FUN_000116f0(1,&DAT_000140c7,0,"",0,0);
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
 iVar4 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar4 = 1;
 }
 iVar1 = FUN_000114e0(&local_34,&local_1c,0xc);
 iVar2 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 FUN_000116f0(1,&DAT_000140e3,0,"",iVar2 + iVar4,0);
 uVar3 = FUN_000116f0(1,"Value: %d, Name: %s\n",0,"",0x2a,&DAT_00014027);
 FUN_000116f0(1,&DAT_000140ff,0,"",uVar3,0);
 iVar1 = FUN_00011660("123,456","%d,%d",&local_3c,&local_38);
 if (iVar1 == 2) {
 local_38 = local_38 + local_3c;
 }
 else {
 local_38 = -1;
 }
 FUN_000116f0(1,&DAT_0001411b,0,"",local_38);
 iVar1 = FUN_00011670("/etc/passwd",&DAT_0001403a);
 if (iVar1 != 0) {
 iVar4 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 uVar3 = 0x2a;
 if (-1 < iVar4) goto LAB_000128d4;
 }
 uVar3 = 0xffffffff;
LAB_000128d4:
 FUN_000116f0(1,&DAT_00014138,0,"",uVar3);
 uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
 FUN_000116f0(1,&DAT_00014154,0,"",uVar3);
 iVar1 = FUN_000115e0(0x28);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 FUN_00011480(iVar1);
 uVar3 = 0x5a;
 }
 FUN_000116f0(1,&DAT_00014170,0,"",uVar3);
 FUN_000116f0(1,&DAT_0001418c,0,"",0);
 FUN_000116f0(1,&DAT_000141a7,0,"",0xf);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_linux_syscall @ 0x129a0
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x129ab;
 uVar3 = 0;
 FUN_000116b0(5,param_1,0);
 iVar1 = FUN_00011690(0);
 if (-1 < iVar1) {
 FUN_000116b0(6,iVar1,0);
 return iVar1;
 }
 piVar2 = (int *)FUN_00011690(uVar4);
 return -*piVar2;
}

// Function: call_linux_syscall @ 0x12a00
unsigned int call_linux_syscall(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar3 = 0;
 FUN_000116b0(5,"/etc/passwd",0);
 iVar1 = FUN_00011690(0);
 if (-1 < iVar1) {
 FUN_000116b0(6,iVar1,0);
 return 0x2a;
 }
 piVar2 = (int *)FUN_00011690(0);
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x12a70
unsigned int param_win32_api(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x12a7a;
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

// Function: call_win32_api @ 0x12ae0
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x12aea;
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

// Function: param_fork_exec @ 0x12b50
unsigned int param_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int uStack_30;
 int iStack_2c;
 unsigned int *puStack_28;
 unsigned int uStack_24;
 char **ppuStack_20;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ppuStack_20 = (char **)0x12b7e;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
LAB_00012bb4:
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 ppuStack_20 = (char **)0x12bd4;
 __stack_chk_fail_local();
 }
 if (iVar1 != 0) {
 uStack_24 = 0;
 puStack_28 = &local_14;
 uStack_30 = 0x12b94;
 iStack_2c = iVar1;
 iVar1 = FUN_00011590(iVar1,&uStack_30,0);
 uVar2 = 0xfffffffe;
 if ((-1 < iVar1) && (uVar2 = local_14 >> 8 & 0xff, (local_14 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 goto LAB_00012bb4;
 }
 ppuStack_20 = (char **)0x12bdd;
 (void)param_fork_exec_part_0();
 uStack_24 = 0x12bea;
 iStack_2c = *(int *)(in_GS_OFFSET + 0x14);
 ppuStack_20 = &_GLOBAL_OFFSET_TABLE_;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
LAB_00012c29:
 uVar2 = 0xffffffff;
 }
 else {
 if (iVar1 == 0) {
 param_fork_exec_part_0();
 goto LAB_00012c59;
 }
 iVar1 = FUN_00011590(iVar1,&uStack_30,0);
 if (((iVar1 < 0) || ((uStack_30 & 0x7f) != 0)) || ((char)(uStack_30 >> 8) != '\0'))
 goto LAB_00012c29;
 uVar2 = 0x2a;
 }
 if (iStack_2c == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
LAB_00012c59:
 __stack_chk_fail_local();
}

// Function: call_fork_exec @ 0x12be0
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_14;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x12bea;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
LAB_00012c29:
 uVar2 = 0xffffffff;
 }
 else {
 if (iVar1 == 0) {
 param_fork_exec_part_0();
 goto LAB_00012c59;
 }
 iVar1 = FUN_00011590(iVar1,&local_14,0);
 if (((iVar1 < 0) || ((local_14 & 0x7f) != 0)) || ((char)(local_14 >> 8) != '\0'))
 goto LAB_00012c29;
 uVar2 = 0x2a;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
LAB_00012c59:
 __stack_chk_fail_local();
}

// Function: param_pipe_communication @ 0x12c60
unsigned int param_pipe_communication(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int **ppuVar3;
 char *puVar4;
 int in_GS_OFFSET;
 unsigned int **local_4c;
 char *pcStack_48;
 unsigned int local_44;
 unsigned int local_40;
 char auStack_3c [4];
 unsigned int *local_38;
 unsigned int *local_34;
 unsigned int local_10;
 unsigned int uStack_c;
 uStack_c = 0x12c6b;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 local_4c = &local_38;
 iVar1 = FUN_000116e0();
 ppuVar3 = (unsigned int **)auStack_3c;
 puVar4 = auStack_3c;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_40 = 0x12c9a;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 puVar4 = auStack_3c;
 }
 else {
 if (iVar1 == 0) {
 local_4c = (unsigned int **)local_38;
 FUN_00011780(0);
 pcStack_48 = "HelloPipe";
 local_44 = 9;
 local_4c = (unsigned int **)local_34;
 FUN_00011640();
 ppuVar3 = &local_4c;
 local_4c = (unsigned int **)local_34;
 FUN_00011780(0);
 local_4c = (unsigned int **)0x0;
 FUN_00011470();
 }
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 8);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12cec;
 FUN_00011780(0);
 *(unsigned int *)((int)ppuVar3 + -8) = 0x1f;
 *(char **)((int)ppuVar3 + -0xc) = (char *)((int)ppuVar3 + 0xc);
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 4);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12cff;
 iVar1 = FUN_00011460();
 *(char *)((int)ppuVar3 + iVar1 + 0xc) = 0;
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 4);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12d10;
 FUN_00011780(0);
 *(unsigned int *)((int)ppuVar3 + -0x10) = 0;
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12d1c;
 FUN_00011540();
 uVar2 = 0x2a;
 puVar4 = (char *)ppuVar3;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 }
 if (*(int *)(puVar4 + 0x2c) == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 *(char **)(puVar4 + -4) = &UNK_00012d5b;
 __stack_chk_fail_local();
}

// Function: param_socket_create @ 0x12d70
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
 uStack_c = 0x12d7b;
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

// Function: param_shmget_shmat @ 0x12eb0
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

// Function: call_shmget_shmat @ 0x12f90
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

// Function: param_signal_handling @ 0x12fb0
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

// Function: test_system_calls @ 0x13120
unsigned int test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 int in_GS_OFFSET;
 unsigned int uStack_88;
 unsigned int uStack_84;
 unsigned int *puStack_80;
 char *pcStack_7c;
 unsigned int *puStack_78;
 char **ppuStack_74;
 unsigned int *puStack_70;
 unsigned int local_68 [11];
 int local_3c;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000115f0(&DAT_00014390);
 iVar1 = FUN_000116b0(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = (int *)FUN_00011690(0);
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar3 = 0x2a;
 }
 }
 else {
 FUN_000116b0(6,iVar1,0);
 uVar3 = 0x2a;
 }
 FUN_000116f0(1,&DAT_00014204,0,"%s",uVar3);
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
 FUN_000116f0(1,&DAT_00014220,0,"%s",uVar3);
 iVar1 = FUN_00011720();
 if (-1 < iVar1) {
 if (iVar1 == 0) {
 param_fork_exec_part_0();
 }
 uStack_84 = local_68[0];
 iVar1 = FUN_00011710(&uStack_88,0,thread_compute,&uStack_84);
 if (iVar1 == 0) {
 FUN_00011760(uStack_88,&puStack_80);
 uVar3 = *puStack_80;
 FUN_00011480(puStack_80);
 }
 else {
 uVar3 = 0xffffffff;
 }
 return uVar3;
 }
 iVar1 = FUN_00011590(iVar1,local_68,0);
 if (((-1 < iVar1) && ((local_68[0] & 0x7f) == 0)) && ((char)(local_68[0] >> 8) == '\0')) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xffffffff;
 }
 FUN_000116f0(1,&DAT_0001423c,0,"%s",uVar3);
 uVar3 = param_pipe_communication();
 FUN_000116f0(1,&DAT_00014258,0,"%s",uVar3);
 uVar3 = param_socket_create();
 FUN_000116f0(1,&DAT_00014274,0,"%s",uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0x2a;
 if (iVar1 < 1) {
 uVar3 = 0xffffffff;
 }
 FUN_000116f0(1,&DAT_00014290,0,"%s",uVar3);
 uVar3 = param_signal_handling();
 FUN_000116f0(1,&DAT_000142ac,0,"%s",uVar3);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0;
}

// Function: param_pthread_create @ 0x132f0
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
 uStack_c = 0x132fb;
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

// Function: call_pthread_create @ 0x13380
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
 uStack_c = 0x1338b;
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

// Function: param_pthread_join @ 0x13410
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
 uStack_14 = 0x1341d;
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
 goto LAB_000134e3;
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
LAB_000134e3:
 if (local_20[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_mutex_lock @ 0x13530
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int bVar6;
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

// Function: param_condition_variable @ 0x13650
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
 uStack_c = 0x1365b;
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

// Function: param_atomic_ops @ 0x13740
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
 uStack_14 = 0x1374d;
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
 iVar2 = FUN_00011710(iVar5,0,thread_atomic_increment,&stack0x00000008);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_000137e4;
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
LAB_000137e4:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: param_thread_local_storage @ 0x138e0
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
 int bVar9;
 int *local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x138ed;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 * 4);
 puVar2 = (unsigned int *)FUN_000115e0(param_1 * 4);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar7 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 do {
 iVar8 = iVar5;
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar8] = uVar3;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar8);
 iVar5 = iVar8 + 1;
 } while (param_1 != iVar8 + 1);
 iVar5 = iVar1;
 iVar7 = 0;
 do {
 iVar4 = FUN_00011710(iVar5,0,thread_tls_test,puVar2[iVar7]);
 if (iVar4 != 0) {
 puVar6 = puVar2;
 do {
 uVar3 = *puVar6;
 puVar6 = puVar6 + 1;
 FUN_00011480(uVar3);
 } while (puVar2 + iVar7 + 1 != puVar6);
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00013a0b;
 }
 iVar5 = iVar5 + 4;
 bVar9 = iVar8 != iVar7;
 iVar7 = iVar7 + 1;
 } while (bVar9);
 iVar7 = 0;
 iVar5 = 0;
 iVar4 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&local_24);
 iVar5 = iVar5 + *local_24;
 iVar7 = iVar7 + local_24[1];
 FUN_00011480(local_24);
 FUN_00011480(puVar2[iVar4]);
 bVar9 = iVar8 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar9);
 }
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((param_1 * 100 - iVar5 == 0) && (param_1 * 0x96 - iVar7 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00013a0b:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: test_thread_concurrency @ 0x13af0
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
 uStack_c = 0x13afb;
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
 FUN_000116f0(1,&DAT_000142e6,0,"",uVar2);
 uVar2 = param_pthread_join();
 FUN_000116f0(1,&DAT_00014302,0,"",uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 FUN_000116f0(1,&DAT_0001431f,0,"",uVar2);
 uVar2 = param_condition_variable();
 FUN_000116f0(1,&DAT_0001433b,0,"",uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 FUN_000116f0(1,&DAT_00014357,0,"",uVar2);
 uVar2 = param_thread_local_storage_constprop_0();
 FUN_000116f0(1,&DAT_00014373,0,"",uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.ax @ 0x13c17
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x13c1b
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x13c20
void __stack_chk_fail_local(void)
{
 FUN_00011520();
 return;
}

// Function: __do_global_ctors_aux @ 0x13c40
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x13c8c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

