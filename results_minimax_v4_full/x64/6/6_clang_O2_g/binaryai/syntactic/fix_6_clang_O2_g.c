/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <errno.h>
#include <stdint.h>

// Fix: Define __isoc99_sscanf if not available (for older systems)
#ifndef __isoc99_sscanf
#define __isoc99_sscanf sscanf
#endif

// Decompiler artifact macros - define as needed
#define CONCAT44(a,b) (((unsigned long)(a) << 32) | (unsigned long)(b))
#define CONCAT32(a,b) (((unsigned int)(a) << 16) | (unsigned int)(b))
#define CONCAT72(a,b) (((unsigned int)(a) << 16) | (unsigned short)(b))
#define CONCAT14(a,b) (((unsigned short)(a) << 8) | (unsigned char)(b))
#define SUB161(a,b) (((a) >> (b)) & 1)
#define SUB1612(a,b) (((a) >> (b)) & 0xFFFF)
#define SUB137(a,b) (((a) << (64 - (b))) | ((a) >> (b)))
#define ZEXT816(x) (x)
#define ZEXT712(x) (x)
#define ZEXT812(x) (x)
typedef unsigned short unkuint10;

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

// Missing type definitions
typedef int bool;
typedef long __off_t;
typedef unsigned long __ino_t;
typedef unsigned short __uid16_t;
typedef unsigned short __gid16_t;
typedef unsigned long __blksize_t;
typedef unsigned long __blkcnt_t;
typedef unsigned long __caddr_t;

// socket types - use standard headers
// sa_family_t, socklen_t, key_t already defined in headers

// Use types from headers - no need to redefine struct stat, sockaddr, shmid_ds, FILE

// pthread types - use proper definitions
typedef unsigned long pthread_t;
typedef unsigned long pthread_attr_t;
typedef unsigned long pthread_mutex_t;
typedef unsigned long pthread_cond_t;

// signal types - use standard signal.h
// Define __sighandler_t for signal handler functions
typedef void (*__sighandler_t)(int);

// Additional type definitions
typedef unsigned int uint5;
typedef unsigned int uint6;
typedef unsigned int uint10;
typedef unsigned int uint3;

// LOCK/UNLOCK macros for atomic operations
#define LOCK()   __asm__ __volatile__("lock" ::: "memory")
#define UNLOCK() __asm__ __volatile__("" ::: "memory")

// Global variables
char completed_0 = 0;
void *__dso_handle = NULL;
int __gmon_start__(void) { return 0; }
void *signal_received_ptr = NULL;
void *signal_number_ptr = NULL;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = 0;
pthread_cond_t cond = 0;
pthread_mutex_t cond_mutex = 0;
char data = 0;
char ready = 0;
int atomic_counter = 0;

// Data constants
char DAT_001040d9[] = "Hello";
char DAT_001040f0[] = "BenchTestData";
char DAT_00104100[] = "BinBench Test Data";
char s_Bench_Test_Data_00104010[] = "BenchTestData";
unsigned long long _DAT_00104040 = 0x0a00000014000000;
char DAT_00104127[] = "strlen: %lu\n";
char DAT_00104142[] = "strcmp: %d\n";
char DAT_0010415d[] = "strchr: %d\n";
char DAT_00104179[] = "memcmp: 0x%x\n";
char DAT_00104195[] = "memcpy: 0x%x\n";
char DAT_001041b1[] = "printf returned: %lu\n";
char DAT_001041cd[] = "scanf result: %lu\n";
char DAT_001041ea[] = "fopen/fileno: %lu\n";
char DAT_00104206[] = "fread/fwrite: %lu\n";
char DAT_00104222[] = "malloc/free: 0x%x\n";
char DAT_0010423e[] = "memset: %lu\n";
char DAT_00104259[] = "strchr/strstr: %lu\n";
char DAT_001042a8[] = "syscall result: %lu\n";
char DAT_001042c4[] = "stat result: %lu\n";
char DAT_001042e0[] = "fork/exec result: %lu\n";
char DAT_001042fc[] = "pipe result: %lu\n";
char DAT_00104318[] = "socket result: %lu\n";
char DAT_00104334[] = "shm result: %lu\n";
char DAT_00104350[] = "signal result: %lu\n";
char DAT_00104376[] = "thread_compute: %lu\n";
char DAT_00104392[] = "pthread_join: %d\n";
char DAT_001043af[] = "mutex_lock: %lu\n";
char DAT_001043cb[] = "condition_var: %lu\n";
char DAT_001043e7[] = "atomic_ops: %lu\n";
char DAT_00104403[] = "thread_local: %lu\n";
char DAT_0010441f[] = "=== Standard Library Tests ===";
char DAT_00104443[] = "=== System Call Tests ===";
char DAT_0010445e[] = "=== Thread Concurrency Tests ===";

// Stub for signal handler (used by param_signal_handling)
void signal_handler_stub(int sig) {
 signal_received = 1;
 signal_number = sig;
}

// libc start main stub
void __libc_start_main(void *main_func, void *argc, void *argv, void *init, void *fini, void *stack_end, void *rtld_fini) {
 ((int (*)(void))main_func)();
}

// Decompiled by BinaryAI
// SHA256: 36e844e01511dd9b321b4bf390e0050833a8d031b7d50414adb6a725f4bc19f5

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Note: External functions (raise, free, etc.) are already included via headers
// The functions below are from the binary's plt - they just call through to libc

// Function: _start @ 0x1023c0

// Function: _start @ 0x1023c0
void _start(unsigned long long param_1, unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main, param_2, &auStack_8, 0, 0, param_1, auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1023f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102420
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102460
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

// Function: param_strcpy @ 0x1024b0
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x1024d0
void call_strcpy(void)
{
 unsigned long long local_28;
 char local_20;
 local_28 = 0x62694c6f6c6c6548;
 local_20 = 0;
 strlen((char *)&local_28);
 return;
}

// Function: param_strcmp @ 0x102500
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_strcmp @ 0x102520
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x102530
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x102540
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102550
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102560
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x102570
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_memcmp @ 0x102590
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x1025a0
void param_printf(unsigned long param_1,unsigned long long param_2)
{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}

// Function: call_printf @ 0x1025c0
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 int val1 = 0;
 int val2 = 0;
 iVar1 = __isoc99_sscanf((const char*)param_1,"%d,%d",&val1,&val2);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = val1 + val2;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int val1, val2;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&val1,&val2);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = val1 + val2;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
int param_fopen_fclose(char *param_1)
{
 int iVar1;
 FILE *__stream;
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}

// Function: call_fopen_fclose @ 0x102690
uint call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 uint uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = iVar1 >> 0x1f | 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x1026e0
unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 char auVar3 [16];
 char auVar4 [16];
 char local_38 [4];
 char cStack_34;
 char cStack_33;
 char cStack_32;
 char cStack_31;
 char cStack_30;
 char cStack_2f;
 char cStack_2e;
 char cStack_2d;
 char cStack_2c;
 char cStack_2b;
 char cStack_2a;
 char cStack_29;
 char cStack_28;
 char cStack_27;
 char cStack_26;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_38,1,0x12,__s);
 local_38[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 auVar4[0] = -(local_38[3] == s_Bench_Test_Data_00104010[0]);
 auVar4[1] = -(cStack_34 == s_Bench_Test_Data_00104010[1]);
 auVar4[2] = -(cStack_33 == s_Bench_Test_Data_00104010[2]);
 auVar4[3] = -(cStack_32 == s_Bench_Test_Data_00104010[3]);
 auVar4[4] = -(cStack_31 == s_Bench_Test_Data_00104010[4]);
 auVar4[5] = -(cStack_30 == s_Bench_Test_Data_00104010[5]);
 auVar4[6] = -(cStack_2f == s_Bench_Test_Data_00104010[6]);
 auVar4[7] = -(cStack_2e == s_Bench_Test_Data_00104010[7]);
 auVar4[8] = -(cStack_2d == s_Bench_Test_Data_00104010[8]);
 auVar4[9] = -(cStack_2c == s_Bench_Test_Data_00104010[9]);
 auVar4[10] = -(cStack_2b == s_Bench_Test_Data_00104010[10]);
 auVar4[11] = -(cStack_2a == s_Bench_Test_Data_00104010[11]);
 auVar4[12] = -(cStack_29 == s_Bench_Test_Data_00104010[12]);
 auVar4[13] = -(cStack_28 == s_Bench_Test_Data_00104010[13]);
 auVar4[14] = -(cStack_27 == s_Bench_Test_Data_00104010[14]);
 auVar4[15] = -(cStack_26 == s_Bench_Test_Data_00104010[15]);
 auVar3[0] = -(local_38[0] == 'B');
 auVar3[1] = -(local_38[1] == 'i');
 auVar3[2] = -(local_38[2] == 'n');
 auVar3[3] = -(local_38[3] == 'B');
 auVar3[4] = -(cStack_34 == 'e');
 auVar3[5] = -(cStack_33 == 'n');
 auVar3[6] = -(cStack_32 == 'c');
 auVar3[7] = -(cStack_31 == 'h');
 auVar3[8] = -(cStack_30 == ' ');
 auVar3[9] = -(cStack_2f == 'T');
 auVar3[10] = -(cStack_2e == 'e');
 auVar3[11] = -(cStack_2d == 's');
 auVar3[12] = -(cStack_2c == 't');
 auVar3[13] = -(cStack_2b == ' ');
 auVar3[14] = -(cStack_2a == 'D');
 auVar3[15] = -(cStack_29 == 'a');
 auVar3 = auVar3 & auVar4;
 uVar2 = 0xfffffffd;
 if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
 (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
 (ushort)(byte)(auVar3[15] >> 7) << 0xf) == 0xffff) {
 uVar2 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x1027c0
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1027d0
int param_malloc_free(unsigned long param_1)
{
 unsigned long long *puVar1;
 int *piVar2;
 int *__ptr;
 unsigned long uVar3;
 int iVar4;
 unsigned long uVar5;
 int unaff_EBP;
 long lVar6;
 unsigned long uVar7;
 int iVar10;
 unsigned int auVar8[4];
 int iVar11;
 unsigned int auVar9[4];
 int iVar12;
 int iVar13;
 int iVar15;
 unsigned int auVar14[4];
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 == 0) goto LAB_00102921;
 if (param_1 < 8) {
 uVar3 = 0;
LAB_00102904:
 iVar4 = (int)uVar3 * 10;
 do {
 __ptr[uVar3] = iVar4;
 uVar3 = uVar3 + 1;
 iVar4 = iVar4 + 10;
 } while (param_1 != uVar3);
 }
 else {
 uVar3 = param_1 & 0xfffffffffffffff8;
 uVar5 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar4 = 0;
 iVar11 = 10;
 iVar10 = 0x14;
 iVar12 = 0x1e;
 lVar6 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffffffffffe;
 lVar6 = 0;
 auVar8[0] = (unsigned int)(_DAT_00104040 & 0xFFFFFFFF);
 auVar8[1] = (unsigned int)((_DAT_00104040 >> 32) & 0xFFFFFFFF);
 auVar8[2] = (unsigned int)((_DAT_00104040 >> 32) & 0xFFFFFFFF);
 auVar8[3] = (unsigned int)((_DAT_00104040 >> 32) & 0xFFFFFFFF);
 do {
 iVar10 = auVar8[0] * 10;
 iVar12 = auVar8[2] * 10;
 iVar4 = auVar8[1];
 iVar11 = auVar8[3];
 auVar14[1] = iVar4;
 auVar14[0] = iVar4;
 auVar14[2] = iVar11;
 auVar14[3] = iVar11;
 iVar13 = iVar4 * 10;
 iVar15 = auVar14[2] * 10;
 puVar1 = (unsigned long long *)(__ptr + lVar6);
 *puVar1 = ((unsigned long long)iVar13 << 32) | (unsigned long long)(unsigned int)iVar10;
 *(int *)(puVar1 + 2) = iVar12;
 *(int *)((long)puVar1 + 0x14) = iVar15;
 piVar2 = __ptr + lVar6 + 4;
 *piVar2 = iVar10 + 0x28;
 piVar2[1] = iVar13 + 0x28;
 piVar2[2] = iVar12 + 0x28;
 piVar2[3] = iVar15 + 0x28;
 piVar2 = __ptr + lVar6 + 8;
 *piVar2 = iVar10 + 0x50;
 piVar2[1] = iVar13 + 0x50;
 piVar2[2] = iVar12 + 0x50;
 piVar2[3] = iVar15 + 0x50;
 piVar2 = __ptr + lVar6 + 0xc;
 *piVar2 = iVar10 + 0x78;
 piVar2[1] = iVar13 + 0x78;
 piVar2[2] = iVar12 + 0x78;
 piVar2[3] = iVar15 + 0x78;
 lVar6 = lVar6 + 0x10;
 auVar9[0] = auVar8[0] + 0x10;
 auVar9[1] = iVar4 + 0x10;
 auVar9[2] = auVar8[2] + 0x10;
 auVar9[3] = iVar11 + 0x10;
 uVar7 = uVar7 - 2;
 auVar8[0] = auVar9[0];
 auVar8[1] = auVar9[1];
 auVar8[2] = auVar9[2];
 auVar8[3] = auVar9[3];
 } while (uVar7 != 0);
 auVar8[1] = auVar9[1];
 auVar8[0] = auVar9[1];
 auVar8[2] = auVar9[3];
 auVar8[3] = auVar9[3];
 iVar4 = auVar9[0] * 10;
 iVar10 = auVar9[2] * 10;
 iVar11 = auVar9[1] * 10;
 iVar12 = auVar8[2] * 10;
 }
 if ((uVar5 & 1) != 0) {
 piVar2 = __ptr + lVar6;
 *piVar2 = iVar4;
 piVar2[1] = iVar11;
 piVar2[2] = iVar10;
 piVar2[3] = iVar12;
 piVar2 = __ptr + lVar6 + 4;
 *piVar2 = iVar4 + 0x28;
 piVar2[1] = iVar11 + 0x28;
 piVar2[2] = iVar10 + 0x28;
 piVar2[3] = iVar12 + 0x28;
 }
 if (uVar3 != param_1) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar4 = __ptr[param_1 - 1];
 free(__ptr);
 return unaff_EBP + iVar4;
}

// Function: call_malloc_free @ 0x102950
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x102960
int param_memset(void *param_1,size_t param_2)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uint uVar3;
 char auVar4 [13];
 char auVar5 [13];
 char auVar6 [13];
 char auVar7 [13];
 char auVar8 [13];
 char auVar9 [13];
 char auVar10 [13];
 char auVar11 [13];
 char auVar12 [13];
 char auVar13 [13];
 char auVar14 [13];
 char auVar15 [13];
 char auVar16 [13];
 char auVar17 [13];
 char auVar18 [13];
 char auVar19 [13];
 unsigned long uVar20;
 unsigned long uVar21;
 char auVar22 [13];
 char auVar23 [13];
 char auVar24 [13];
 char auVar25 [13];
 uint5 uVar26;
 char auVar27 [13];
 char auVar28 [13];
 unsigned long uVar29;
 unsigned long uVar30;
 long lVar31;
 int iVar32;
 unsigned long uVar33;
 int iVar34;
 int iVar35;
 int iVar36;
 int iVar37;
 int iVar38;
 int iVar39;
 int iVar40;
 iVar32 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 if (param_2 < 8) {
 uVar29 = 0;
 iVar32 = 0;
 }
 else {
 uVar29 = param_2 & 0xfffffffffffffff8;
 uVar30 = (uVar29 - 8 >> 3) + 1;
 if (uVar29 - 8 == 0) {
 iVar32 = 0;
 iVar34 = 0;
 iVar35 = 0;
 iVar36 = 0;
 lVar31 = 0;
 iVar37 = 0;
 iVar38 = 0;
 iVar39 = 0;
 iVar40 = 0;
 }
 else {
 uVar33 = uVar30 & 0xfffffffffffffffe;
 lVar31 = 0;
 iVar32 = 0;
 iVar34 = 0;
 iVar35 = 0;
 iVar36 = 0;
 iVar37 = 0;
 iVar38 = 0;
 iVar39 = 0;
 iVar40 = 0;
 do {
 uVar1 = *(unsigned int *)((long)param_1 + lVar31);
 uVar2 = *(unsigned int *)((long)param_1 + lVar31 + 4);
 uVar20 = (unsigned long)(ushort)uVar1 & 0xffffffffffff00ff;
 auVar4._8_4_ = 0;
 auVar4._0_8_ = uVar20;
 auVar4[12] = (char)((uint)uVar1 >> 0x18);
 auVar5[8] = (char)((uint)uVar1 >> 0x10);
 auVar5._0_8_ = uVar20;
 auVar5[9] = 0;
 auVar5._10_3_ = auVar4._10_3_;
 auVar22._5_8_ = 0;
 auVar22._0_5_ = auVar5._8_5_;
 auVar6[4] = (char)((uint)uVar1 >> 8);
 auVar6._0_4_ = (int)uVar20;
 auVar6[5] = 0;
 auVar6._6_7_ = SUB137(auVar22 << 0x40,6);
 uVar21 = (unsigned long)(ushort)uVar2 & 0xffffffffffff00ff;
 auVar7._8_4_ = 0;
 auVar7._0_8_ = uVar21;
 auVar7[12] = (char)((uint)uVar2 >> 0x18);
 auVar8[8] = (char)((uint)uVar2 >> 0x10);
 auVar8._0_8_ = uVar21;
 auVar8[9] = 0;
 auVar8._10_3_ = auVar7._10_3_;
 auVar23._5_8_ = 0;
 auVar23._0_5_ = auVar8._8_5_;
 auVar9[4] = (char)((uint)uVar2 >> 8);
 auVar9._0_4_ = (int)uVar21;
 auVar9[5] = 0;
 auVar9._6_7_ = SUB137(auVar23 << 0x40,6);
 uVar3 = *(uint *)((long)param_1 + lVar31 + 8);
 uVar1 = *(unsigned int *)((long)param_1 + lVar31 + 0xc);
 auVar10[12] = (char)(uVar3 >> 0x18);
 auVar10._0_12_ = ZEXT812(0);
 auVar11._10_3_ = auVar10._10_3_;
 auVar11._0_10_ = (unkuint10)(byte)(uVar3 >> 0x10) << 0x40;
 auVar24._5_8_ = 0;
 auVar24._0_5_ = auVar11._8_5_;
 auVar12._6_7_ = SUB137(auVar24 << 0x40,6);
 auVar12._0_6_ = (uint6)CONCAT14((char)(uVar3 >> 8),uVar3) & 0xffff000000ff;
 iVar32 = (uVar3 & 0xff) + (int)uVar20 + iVar32;
 iVar34 = auVar12._4_4_ + auVar6._4_4_ + iVar34;
 iVar35 = auVar11._8_4_ + auVar5._8_4_ + iVar35;
 iVar36 = (uint)(uint3)(auVar10._10_3_ >> 0x10) +
 (uint)(uint3)(auVar4._10_3_ >> 0x10) + iVar36;
 uVar20 = (unsigned long)(ushort)uVar1 & 0xffffffffffff00ff;
 auVar13._8_4_ = 0;
 auVar13._0_8_ = uVar20;
 auVar13[12] = (char)((uint)uVar1 >> 0x18);
 auVar14[8] = (char)((uint)uVar1 >> 0x10);
 auVar14._0_8_ = uVar20;
 auVar14[9] = 0;
 auVar14._10_3_ = auVar13._10_3_;
 auVar25._5_8_ = 0;
 auVar25._0_5_ = auVar14._8_5_;
 auVar15[4] = (char)((uint)uVar1 >> 8);
 auVar15._0_4_ = (int)uVar20;
 auVar15[5] = 0;
 auVar15._6_7_ = SUB137(auVar25 << 0x40,6);
 iVar37 = (int)uVar20 + (int)uVar21 + iVar37;
 iVar38 = auVar15._4_4_ + auVar9._4_4_ + iVar38;
 iVar39 = auVar14._8_4_ + auVar8._8_4_ + iVar39;
 iVar40 = (uint)(uint3)(auVar13._10_3_ >> 0x10) +
 (uint)(uint3)(auVar7._10_3_ >> 0x10) + iVar40;
 lVar31 = lVar31 + 0x10;
 uVar33 = uVar33 - 2;
 } while (uVar33 != 0);
 }
 if ((uVar30 & 1) != 0) {
 uVar3 = *(uint *)((long)param_1 + lVar31);
 uVar1 = *(unsigned int *)((long)param_1 + lVar31 + 4);
 auVar16[12] = (char)(uVar3 >> 0x18);
 auVar16._0_12_ = ZEXT712(0);
 uVar26 = CONCAT32(auVar16._10_3_,(ushort)(byte)(uVar3 >> 0x10));
 auVar28._5_8_ = 0;
 auVar28._0_5_ = uVar26;
 iVar32 = iVar32 + (uVar3 & 0xff);
 iVar34 = iVar34 + (int)CONCAT72(SUB137(auVar28 << 0x40,6),(ushort)(byte)(uVar3 >> 8));
 iVar35 = iVar35 + (int)uVar26;
 iVar36 = iVar36 + (uint)(uint3)(auVar16._10_3_ >> 0x10);
 uVar30 = (unsigned long)(ushort)uVar1 & 0xffffffffffff00ff;
 auVar17._8_4_ = 0;
 auVar17._0_8_ = uVar30;
 auVar17[12] = (char)((uint)uVar1 >> 0x18);
 auVar18[8] = (char)((uint)uVar1 >> 0x10);
 auVar18._0_8_ = uVar30;
 auVar18[9] = 0;
 auVar18._10_3_ = auVar17._10_3_;
 auVar27._5_8_ = 0;
 auVar27._0_5_ = auVar18._8_5_;
 auVar19[4] = (char)((uint)uVar1 >> 8);
 auVar19._0_4_ = (int)uVar30;
 auVar19[5] = 0;
 auVar19._6_7_ = SUB137(auVar27 << 0x40,6);
 iVar37 = iVar37 + (int)uVar30;
 iVar38 = iVar38 + auVar19._4_4_;
 iVar39 = iVar39 + auVar18._8_4_;
 iVar40 = iVar40 + (uint)(uint3)(auVar17._10_3_ >> 0x10);
 }
 iVar32 = iVar36 + iVar40 + iVar34 + iVar38 + iVar35 + iVar39 + iVar32 + iVar37;
 if (uVar29 == param_2) {
 return iVar32;
 }
 }
 do {
 iVar32 = iVar32 + (uint)*(byte *)((long)param_1 + uVar29);
 uVar29 = uVar29 + 1;
 } while (param_2 != uVar29);
 }
 return iVar32;
}

// Function: call_memset @ 0x102aa0
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x102ab0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102af0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102b00
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_3c = 0;
 unsigned long long local_38 = 0;
 char local_30;
 puts(&DAT_0010441f);
 local_38 = 0x62694c6f6c6c6548;
 local_30 = 0;
 sVar3 = strlen((char *)&local_38);
 printf(&DAT_00104127,(unsigned long)sVar3);
 printf(&DAT_00104142,0);
 printf(&DAT_0010415d,0xc);
 printf(&DAT_00104179,0x5a);
 uVar4 = 0xffffffff;
 printf(&DAT_00104195,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 printf(&DAT_001041b1,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%llu,%d",&local_38,&local_3c);
 uVar1 = local_3c + (int)local_38;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_001041ea,(unsigned long)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104206,(unsigned long)uVar1);
 printf(&DAT_00104222,0x5a);
 printf(&DAT_0010423e,0);
 printf(&DAT_00104259,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102c90
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x102cd0
uint call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 int iVar3;
 uVar1 = syscall(2,"/etc/passwd",0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x102d20
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_90;
 iVar1 = stat(param_1,&local_90);
 uVar3 = 0xfffffffe;
 if (0 < local_90.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x102d60
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_90;
 iVar1 = stat("/etc/passwd",&local_90);
 uVar3 = 0xfffffffe;
 if (0 < local_90.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x102da0
unsigned int param_fork_exec(char *param_1, char *param_2)
{
 pid_t _Var1;
 unsigned int uVar2;
 int local_14;
 local_14 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffffU;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1, param_1, param_2, NULL);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1, &local_14, 0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffeU;
 }
 else {
 uVar2 = 0xfffffffdU;
 if ((local_14 & 0x7f) == 0) {
 uVar2 = (local_14 >> 8) & 0xff;
 }
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x102e10
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 int local_c;
 _Var1 = fork();
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",NULL);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x102e80
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 int local_30;
 int local_2c;
 char local_28 [32];
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 uVar4 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x102f40
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_24;
 sockaddr local_20;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_20.sa_data[6] = '\0';
 local_20.sa_data[7] = '\0';
 local_20.sa_data[8] = '\0';
 local_20.sa_data[9] = '\0';
 local_20.sa_data[10] = '\0';
 local_20.sa_data[11] = '\0';
 local_20.sa_data[12] = '\0';
 local_20.sa_data[13] = '\0';
 local_20.sa_family = 2;
 local_20.sa_data[0] = '\0';
 local_20.sa_data[1] = '\0';
 local_20.sa_data[2] = '\0';
 local_20.sa_data[3] = '\0';
 local_20.sa_data[4] = '\0';
 local_20.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_20,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 }
 }
 }
 return uVar2;
}

// Function: param_shmget_shmat @ 0x103010
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
 size_t sVar2;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 sVar2 = 0xffffffff;
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 sVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1030e0
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x103100
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned long long uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler_stub);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var2 = signal(0xe,signal_handler_stub);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 uVar4 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 uVar3 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 uVar4 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 uVar3 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar3 = 0x2a;
 }
 }
 return uVar3;
}

// Function: signal_handler @ 0x103230
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x103260
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 uint uVar3;
 unsigned long uVar4;
 int *piVar5;
 unsigned long long uVar6;
 struct stat local_a0;
 int local_a0_status;
 puts(&DAT_00104443);
 uVar4 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar4;
 if (iVar1 < 0) {
 piVar5 = __errno_location();
 iVar1 = -*piVar5;
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 }
 printf(&DAT_001042a8,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_001042c4,uVar6);
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",NULL);
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,&local_a0_status,0);
 if ((_Var2 < 0) || ((local_a0_status & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (unsigned long)(-(uint)((local_a0_status & 0xff00) != 0) | 0x2a);
 }
 }
 printf(&DAT_001042e0,uVar4);
 uVar3 = param_pipe_communication();
 printf(&DAT_001042fc,(unsigned long)uVar3);
 uVar3 = param_socket_create();
 printf(&DAT_00104318,(unsigned long)uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0xffffffff;
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00104334,(unsigned long)uVar3);
 uVar3 = param_signal_handling();
 printf(&DAT_00104350,(unsigned long)uVar3);
 return;
}

// Function: thread_compute @ 0x1033d0
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1033f0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 void *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *(unsigned int *)local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x103440
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 void *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *(unsigned int *)local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: thread_sum @ 0x1034a0
unsigned long long thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x1034e0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 uint local_68;
 uint uStack_5c;
 uint local_58;
 uint auStack_54;
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28 [2];
 local_48 = 0;
 local_68 = 0xa00000001;
 uStack_5c = 0xb;
 auStack_54 = 0;
 local_58 = 0x14;
 auStack_54 = 0x1e00000015;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_68);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_5c);
 if (iVar1 == 0) {
 iVar1 = pthread_create(local_28,(pthread_attr_t *)0x0,thread_sum,((char *)&auStack_54) + 4);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar1 == 0) {
 // Extract bits 8-11 from local_68 (the decompiler artifact _8_4_)
 iVar1 = (local_68 >> 8) & 0xF;
 iVar2 = pthread_join(local_30,(void **)0x0);
 if (iVar2 == 0) {
 // Extract lower 4 bits from auStack_54 (the decompiler artifact _0_4_)
 iVar2 = auStack_54 & 0xF;
 iVar3 = pthread_join(local_28[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar2 + iVar1 + local_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}

// Function: thread_increment @ 0x1035f0
unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x103630
unsigned long long param_mutex_lock(uint param_1,int param_2)
{
 int iVar1;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 long lVar5;
 int local_38;
 uint local_34;
 local_34 = 0;
 local_38 = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (unsigned long)param_1;
 lVar5 = 0;
 local_34 = param_1;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 param_1 = local_34;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (uVar4 * 8 - lVar5 != 0);
 if (0 < (int)local_34) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * local_38) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103720
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103730
void consumer_thread(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x1037b0
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1037f0
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 unsigned int *local_18;
 pthread_t local_10;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: thread_atomic_increment @ 0x103890
unsigned long long thread_atomic_increment(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uVar1 = *param_1;
 if (0 < (int)uVar1) {
 uVar5 = uVar1 & 3;
 uVar4 = 0;
 if (2 < uVar1 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3e9;
 if (uVar4 + 1 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3ea;
 if (uVar4 + 2 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 0x3eb;
 if (uVar4 + 3 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar1 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar1 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar1 = atomic_counter;
 }
 atomic_counter = uVar1;
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x103950
unsigned long long thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x103970
unsigned long long param_atomic_ops(uint param_1,unsigned int param_2)
{
 int iVar1;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 long lVar4;
 unsigned int local_3c;
 pthread_t local_38;
 local_3c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while ((unsigned long)param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (param_1 != uVar3);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x103a80
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103a90
void thread_tls_test(char *param_1)
{
 int iVar1;
 int *piVar3;
 // Thread local storage simulation using a static variable
 static int tls_value = 0;
 iVar1 = tls_value + 0x32;
 tls_value = iVar1;
 piVar3 = (int *)malloc(8);
 *piVar3 = tls_value - 0x32;
 piVar3[1] = iVar1;
 return;
}

// Function: param_thread_local_storage @ 0x103ae0
unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 unsigned long long uVar2;
 uint uVar3;
 unsigned long uVar4;
 pthread_t *__newthread;
 unsigned long uVar5;
 uint uVar6;
 int *local_38;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 uVar5 = (unsigned long)param_1;
 uVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((long)__ptr_00 + uVar4 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 if (0 < (int)param_1) {
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + uVar4 * 8));
 if (iVar1 != 0) {
 uVar5 = 0xffffffffffffffff;
 do {
 free(*(void **)((long)__ptr_00 + uVar5 * 8 + 8));
 uVar5 = uVar5 + 1;
 } while (uVar4 != uVar5);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar4);
 if ((int)param_1 < 1) {
 uVar3 = 0;
 uVar6 = 0;
 }
 else {
 uVar4 = 0;
 uVar6 = 0;
 uVar3 = 0;
 do {
 pthread_join(__ptr[uVar4],&local_38);
 uVar3 = uVar3 + *local_38;
 uVar6 = uVar6 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar4 * 8));
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 goto LAB_00103c0c;
 }
 }
 uVar3 = 0;
 uVar6 = 0;
LAB_00103c0c:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar6 | param_1 * 100 ^ uVar3) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103ca0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103cb0
void test_thread_concurrency(void)
{
 int iVar1;
 uint uVar2;
 unsigned int local_1c;
 uint *local_18;
 pthread_t local_10;
 puts(&DAT_0010445e);
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 printf(&DAT_00104376,(unsigned long)uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00104392,(unsigned long)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_001043af,(unsigned long)uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_001043cb,(unsigned long)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001043e7,(unsigned long)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00104403,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x103da0
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x103db4
void _fini(void)
{
 return;
}

