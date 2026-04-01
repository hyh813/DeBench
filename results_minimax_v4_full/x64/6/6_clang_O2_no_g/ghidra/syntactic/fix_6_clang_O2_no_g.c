/* Auto-injected type definitions by preprocessor */
/* Note: Using fixed-width types that avoid conflicts with system headers */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t_t
typedef unsigned long uint64_t_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
#ifndef int64_t
typedef long int64_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
/* ptrdiff_t is defined by system headers, skipping custom definition */
#ifndef intmax_t
typedef long intmax_t;
#endif
/* Note: uintmax_t is defined by system headers, skipping custom definition */
#ifndef byte
typedef uint8_t byte;
#endif

#ifndef bool
typedef int bool;
#endif
#define true 1
#define false 0
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <time.h>

/* Data references from binary */
char DAT_001040d9[] = "HelloLib";
undefined1 _DAT_00104040[16] = {0};
char DAT_0010441f[] = "\n========== Standard Library Function Tests ==========\n";
char DAT_00104127[] = "\nstrlen: %zu\n";
char DAT_00104142[] = "\nstrcmp: %d\n";
char DAT_0010415d[] = "\nstrcmp result: %d\n";
char DAT_00104179[] = "\nstrcmp (call): %d\n";
char DAT_00104195[] = "\nstrcmp (param): %d\n";
char DAT_001041b1[] = "\nprintf return: %lu\n";
char DAT_001041cd[] = "\nsscanf result: %lu\n";
char DAT_001041ea[] = "\nfopen/fileno: %lu\n";
char DAT_00104206[] = "\nfread/fwrite: %lu\n";
char DAT_00104222[] = "\nmalloc/free (call): %lu\n";
char DAT_0010423e[] = "\nmalloc/free (param): %lu\n";
char DAT_00104259[] = "\nstrchr/strstr: %lu\n";
char DAT_001042a8[] = "\nsyscall: %lu\n";
char DAT_001042c4[] = "\nstat: %lu\n";
char DAT_001042e0[] = "\nfork/exec: %lu\n";
char DAT_001042fc[] = "\npipe: %lu\n";
char DAT_00104318[] = "\nsocket: %lu\n";
char DAT_00104334[] = "\nshmget/shmat: %lu\n";
char DAT_00104350[] = "\nsignal: %lu\n";
char DAT_00104376[] = "\npthread_create (call): %lu\n";
char DAT_00104392[] = "\npthread_join (param): %lu\n";
char DAT_001043af[] = "\npthread_mutex: %lu\n";
char DAT_001043cb[] = "\npthread_cond: %lu\n";
char DAT_001043e7[] = "\natomic_ops: %lu\n";
char DAT_00104403[] = "\nthread_local: %lu\n";
char DAT_00104443[] = "\n========== System Call Tests ==========\n";
char DAT_0010445e[] = "\n========== Thread Concurrency Tests ==========\n";

/* Ghidra helper functions for structure/union operations */
#define SUB161(x, shift) (((x) >> (shift)) & 1)
#define SUB162(x, shift) (((x) >> (shift)) & 3)
#define SUB164(x, shift) (((x) >> (shift)) & 0xf)
#define SUB137(x, shift) (((x) << (shift)) & 0xfffffffffffffffe)

/* Ghidra macros for concatenating/splitting values */
#define CONCAT44(high, low) (((ulong)(high) << 32) | (ulong)(uint)(low))
#define CONCAT32(low, high) (((uint)(high) << 16) | ((uint)(low) & 0xffff))
#define CONCAT13(high, low) (((ushort)(high) << 8) | (unsigned char)(low))
#define CONCAT72(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))
#define CONCAT12(low, high) (((unsigned short)(high) << 8) | (unsigned char)(low))
#define ZEXT712(x) ((unsigned long long)(x) & 0xffffffff)
#define ZEXT812(x) ((unsigned long long)(x) & 0xffffffffffff)

/* ISO C99 sscanf (for compatibility) */
int __isoc99_sscanf(const char *str, const char *format, ...);

/* Global variables */
int signal_received;
int signal_number;
int shared_counter;
pthread_mutex_t counter_mutex;
int atomic_counter;
char data;
char ready;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

/* Function prototypes */
void signal_handler(int param_1);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 001024b0 */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 001024d0 */

void call_strcpy(void)

{
 char local_28 [40];
 
 strncpy(local_28,"HelloLib",9);
 strlen(local_28);
 return;
}



/* Function: param_strcmp @ 00102500 */

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



/* Function: call_strcmp @ 00102520 */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: call_strlen @ 00102540 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00102550 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00102560 */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00102570 */

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



/* Function: call_memcmp @ 00102590 */

undefined8 call_memcmp(void)

{
 return 0xffffffff;
}



/* Function: param_printf @ 001025a0 */

void param_printf(ulong param_1,undefined8 param_2)

{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}



/* Function: call_printf @ 001025c0 */

void call_printf(void)

{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return;
}



/* Function: param_scanf @ 001025e0 */

int param_scanf(undefined8 param_1)

{
 int iVar1;
 int iVar2;
 int local_8;
 int local_4;
 
 iVar1 = __isoc99_sscanf((char*)(ulong)param_1,"%d,%d",&local_4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_8 + local_4;
 }
 return iVar2;
}



/* Function: call_scanf @ 00102610 */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_8 + local_c;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00102650 */

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



/* Function: call_fopen_fclose @ 00102690 */

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



/* Function: param_fread_fwrite @ 001026e0 */

 undefined8 param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined8 uVar2;
 uint auVar3;
 uint auVar4;
 char local_38 [0x12];
 char local_38_check [0x12];
 
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
 auVar4 = 0;
 auVar4 = auVar4 | ((local_38[3] == 'B') << 0);
 auVar4 = auVar4 | ((local_38[4] == 'e') << 1);
 auVar4 = auVar4 | ((local_38[5] == 'n') << 2);
 auVar4 = auVar4 | ((local_38[6] == 'c') << 3);
 auVar4 = auVar4 | ((local_38[7] == 'h') << 4);
 auVar4 = auVar4 | ((local_38[8] == ' ') << 5);
 auVar4 = auVar4 | ((local_38[9] == 'T') << 6);
 auVar4 = auVar4 | ((local_38[10] == 'e') << 7);
 auVar4 = auVar4 | ((local_38[11] == 's') << 8);
 auVar4 = auVar4 | ((local_38[12] == 't') << 9);
 auVar4 = auVar4 | ((local_38[13] == ' ') << 10);
 auVar4 = auVar4 | ((local_38[14] == 'D') << 11);
 auVar4 = auVar4 | ((local_38[15] == 'a') << 12);
 auVar4 = auVar4 | ((local_38[16] == 't') << 13);
 auVar4 = auVar4 | ((local_38[17] == 'a') << 14);
 auVar4 = auVar4 | ((local_38[17] == '\0') << 15);
 auVar3 = 0;
 auVar3 = auVar3 | ((local_38[0] == 'B') << 0);
 auVar3 = auVar3 | ((local_38[1] == 'i') << 1);
 auVar3 = auVar3 | ((local_38[2] == 'n') << 2);
 auVar3 = auVar3 | ((local_38[3] == 'B') << 3);
 auVar3 = auVar3 | ((local_38[4] == 'e') << 4);
 auVar3 = auVar3 | ((local_38[5] == 'n') << 5);
 auVar3 = auVar3 | ((local_38[6] == 'c') << 6);
 auVar3 = auVar3 | ((local_38[7] == 'h') << 7);
 auVar3 = auVar3 | ((local_38[8] == ' ') << 8);
 auVar3 = auVar3 | ((local_38[9] == 'T') << 9);
 auVar3 = auVar3 | ((local_38[10] == 'e') << 10);
 auVar3 = auVar3 | ((local_38[11] == 's') << 11);
 auVar3 = auVar3 | ((local_38[12] == 't') << 12);
 auVar3 = auVar3 | ((local_38[13] == ' ') << 13);
 auVar3 = auVar3 | ((local_38[14] == 'D') << 14);
 auVar3 = auVar3 | ((local_38[15] == 'a') << 15);
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
 (ushort)(byte)(auVar3 >> 0x77) << 0xf) == 0xffff) {
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



/* Function: call_fread_fwrite @ 001027c0 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 001027d0 */

/* WARNING: Removing unreachable block (ram,0x00102945) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_malloc_free(ulong param_1)

{
 int *piVar1;
 int *__ptr;
 ulong uVar2;
 int iVar3;
 ulong uVar4;
 int unaff_EBP;
 long lVar5;
 ulong uVar6;
 int iVar9;
 union { uint u32[4]; uint64_t u64[2]; undefined1 b[16]; } auVar7;
 int iVar10;
 union { uint u32[4]; uint64_t u64[2]; undefined1 b[16]; } auVar8;
 int iVar11;
 int iVar12;
 int iVar14;
 union { uint u32[4]; uint64_t u64[2]; undefined1 b[16]; } auVar13;

 auVar7.b[0] = 0;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 == 0) goto LAB_00102921;
 if (param_1 < 8) {
 uVar2 = 0;
LAB_00102904:
 iVar3 = (int)uVar2 * 10;
 do {
 __ptr[uVar2] = iVar3;
 uVar2 = uVar2 + 1;
 iVar3 = iVar3 + 10;
 } while (param_1 != uVar2);
 }
 else {
 uVar2 = param_1 & 0xfffffffffffffff8;
 uVar4 = (uVar2 - 8 >> 3) + 1;
 if (uVar2 - 8 == 0) {
 iVar3 = 0;
 iVar10 = 10;
 iVar9 = 0x14;
 iVar11 = 0x1e;
 lVar5 = 0;
LAB_001028e8:
 piVar1 = __ptr + lVar5;
 *piVar1 = iVar3;
 piVar1[1] = iVar10;
 piVar1[2] = iVar9;
 piVar1[3] = iVar11;
 piVar1 = __ptr + lVar5 + 4;
 *piVar1 = iVar3 + 0x28;
 piVar1[1] = iVar10 + 0x28;
 piVar1[2] = iVar9 + 0x28;
 piVar1[3] = iVar11 + 0x28;
 }
 else {
 uVar6 = uVar4 & 0xfffffffffffffffe;
 lVar5 = 0;
 memcpy(auVar7.b, _DAT_00104040, 16);
 do {
 iVar9 = auVar7.u32[0] * 10;
 iVar11 = (int)((auVar7.u64[1] & 0xffffffff) * 10);
 iVar3 = auVar7.u32[1];
 iVar10 = auVar7.u32[3];
 auVar13.u32[1] = iVar3;
 auVar13.u32[0] = iVar3;
 auVar13.u32[2] = iVar10;
 auVar13.u32[3] = iVar10;
 iVar12 = iVar3 * 10;
 iVar14 = (int)((auVar13.u64[1] & 0xffffffff) * 10);
 piVar1 = __ptr + lVar5;
 *(ulong *)piVar1 = CONCAT44(iVar12,iVar9);
 piVar1[4] = iVar11;
 piVar1[5] = iVar14;
 piVar1 = __ptr + lVar5 + 4;
 *piVar1 = iVar9 + 0x28;
 piVar1[1] = iVar12 + 0x28;
 piVar1[2] = iVar11 + 0x28;
 piVar1[3] = iVar14 + 0x28;
 piVar1 = __ptr + lVar5 + 8;
 *piVar1 = iVar9 + 0x50;
 piVar1[1] = iVar12 + 0x50;
 piVar1[2] = iVar11 + 0x50;
 piVar1[3] = iVar14 + 0x50;
 piVar1 = __ptr + lVar5 + 0xc;
 *piVar1 = iVar9 + 0x78;
 piVar1[1] = iVar12 + 0x78;
 piVar1[2] = iVar11 + 0x78;
 piVar1[3] = iVar14 + 0x78;
 lVar5 = lVar5 + 0x10;
 auVar8.u32[0] = auVar7.u32[0] + 0x10;
 auVar8.u32[1] = iVar3 + 0x10;
 auVar8.u32[2] = auVar7.u32[2] + 0x10;
 auVar8.u32[3] = iVar10 + 0x10;
 uVar6 = uVar6 - 2;
 auVar7 = auVar8;
 } while (uVar6 != 0);
 auVar7.u32[1] = auVar8.u32[1];
 auVar7.u32[0] = auVar8.u32[1];
 auVar7.u32[2] = auVar8.u32[3];
 auVar7.u32[3] = auVar8.u32[3];
 iVar3 = auVar8.u32[0] * 10;
 iVar9 = (int)((auVar8.u64[1] & 0xffffffff) * 10);
 iVar10 = auVar8.u32[1] * 10;
 iVar11 = (int)((auVar7.u64[1] & 0xffffffff) * 10);
 if ((uVar4 & 1) != 0) goto LAB_001028e8;
 }
 if (uVar2 != param_1) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar3 = __ptr[param_1 - 1];
 free(__ptr);
 /* WARNING: Read-only address (ram,0x00104040) is written */
 return unaff_EBP + iVar3;
}



/* Function: call_malloc_free @ 00102950 */

undefined8 call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 00102960 */

/* WARNING: Removing unreachable block (ram,0x00102a95) */

int param_memset(void *param_1,size_t param_2)

{
 undefined4 uVar1;
 undefined4 uVar2;
 uint uVar3;
 uint uVar25;
 uint uVar33;
 undefined1 uVar34;
 int iVar31;
 int iVar35;
 int iVar36;
 int iVar37;
 int iVar38;
 int iVar39;
 int iVar40;
 int iVar41;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar3;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar4;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar5;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar6;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar7;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar8;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar9;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar10;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar11;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar12;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar13;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar14;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar15;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar16;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar17;
 union { uint u32[3]; uint64_t u64[1]; undefined1 b[12]; } auVar18;
 ulong uVar19;
 ulong uVar20;
 undefined1 auVar21 [12];
 undefined1 auVar22 [12];
 undefined1 auVar23 [12];
 undefined1 auVar24 [12];
 undefined1 auVar26 [12];
 undefined1 auVar27 [12];
 ulong uVar28;
 ulong uVar29;
 long lVar30;
 ulong uVar32;
 
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 return 0;
 }
 if (param_2 < 8) {
 uVar28 = 0;
 iVar31 = 0;
 goto LAB_00102a70;
 }
 uVar28 = param_2 & 0xfffffffffffffff8;
 uVar29 = (uVar28 - 8 >> 3) + 1;
 if (uVar28 - 8 == 0) {
 iVar31 = 0;
 iVar35 = 0;
 iVar36 = 0;
 iVar37 = 0;
 lVar30 = 0;
 iVar38 = 0;
 iVar39 = 0;
 iVar40 = 0;
 iVar41 = 0;
LAB_00102a26:
 uVar33 = *(uint *)((long)param_1 + lVar30);
 uVar1 = *(undefined4 *)((long)param_1 + lVar30 + 4);
 auVar15.b[11] = (char)(uVar33 >> 0x18);
 auVar15.u32[0] = ZEXT712(0);
 uVar25 = CONCAT32(auVar15.b[10],(ushort)(byte)(uVar33 >> 0x10));
 auVar27.b[4] = 0;
 auVar27.u32[0] = uVar25;
 iVar31 = iVar31 + (uVar33 & 0xff);
 iVar35 = iVar35 + (int)CONCAT72(SUB137(auVar27.u64[0] << 0x40,6),(ushort)(byte)(uVar33 >> 8));
 iVar36 = iVar36 + (int)uVar25;
 iVar37 = iVar37 + (uint)(auVar15.b[10] >> 0x10);
 uVar34 = (undefined1)((uint)uVar1 >> 8);
 uVar29 = (ulong)CONCAT12(uVar34,(short)uVar1) & 0xffffffffffff00ff;
 auVar16.u32[1] = 0;
 auVar16.u64[0] = uVar29;
 auVar16.b[12] = (char)((uint)uVar1 >> 0x18);
 auVar17.b[8] = (char)((uint)uVar1 >> 0x10);
 auVar17.u64[0] = uVar29;
 auVar17.b[9] = 0;
 auVar17.b[10] = auVar15.b[10];
 auVar17.b[11] = auVar15.b[11];
 auVar26.b[4] = 0;
 auVar26.u32[0] = auVar17.u32[1];
 auVar18.b[4] = uVar34;
 auVar18.u32[0] = (uint)uVar29;
 auVar18.b[5] = 0;
 auVar18.b[6] = SUB137(auVar26.u64[0] << 0x40,6);
 iVar38 = iVar38 + ((uint)uVar29 & 0xffff);
 iVar39 = iVar39 + auVar18.u32[1];
 iVar40 = iVar40 + auVar17.u32[1];
 iVar41 = iVar41 + (uint)(auVar16.b[10] >> 0x16);
 }
 else {
 uVar32 = uVar29 & 0xfffffffffffffffe;
 lVar30 = 0;
 iVar31 = 0;
 iVar35 = 0;
 iVar36 = 0;
 iVar37 = 0;
 iVar38 = 0;
 iVar39 = 0;
 iVar40 = 0;
 iVar41 = 0;
 do {
 uVar1 = *(undefined4 *)((long)param_1 + lVar30);
 uVar2 = *(undefined4 *)((long)param_1 + lVar30 + 4);
 uVar34 = (undefined1)((uint)uVar1 >> 8);
 uVar19 = (ulong)CONCAT12(uVar34,(short)uVar1) & 0xffffffffffff00ff;
 auVar3.u32[1] = 0;
 auVar3.u64[0] = uVar19;
 auVar3.b[12] = (char)((uint)uVar1 >> 0x18);
 auVar4.b[8] = (char)((uint)uVar1 >> 0x10);
 auVar4.u64[0] = uVar19;
 auVar4.b[9] = 0;
 auVar4.b[10] = auVar3.b[10];
 auVar4.b[11] = auVar3.b[11];
 auVar4.b[12] = auVar3.b[12];
 auVar21[8] = 0;
 auVar21[0] = auVar4.u32[2] & 0xffffffff;
 auVar5.b[4] = uVar34;
 auVar5.u32[0] = (uint)uVar19;
 auVar5.b[5] = 0;
 auVar5.b[6] = SUB137(auVar21[8] << 0x40,6);
 auVar5.b[7] = 0;
 uVar34 = (undefined1)((uint)uVar2 >> 8);
 uVar20 = (ulong)CONCAT12(uVar34,(short)uVar2) & 0xffffffffffff00ff;
 auVar6.u32[1] = 0;
 auVar6.u64[0] = uVar20;
 auVar6.b[12] = (char)((uint)uVar2 >> 0x18);
 auVar7.b[8] = (char)((uint)uVar2 >> 0x10);
 auVar7.u64[0] = uVar20;
 auVar7.b[9] = 0;
 auVar7.b[10] = auVar6.b[10];
 auVar22[4] = 0;
 auVar22[0] = auVar7.u32[1];
 auVar8.b[4] = uVar34;
 auVar8.u32[0] = (uint)uVar20;
 auVar8.b[5] = 0;
 auVar8.b[6] = SUB137(auVar22[8] << 0x40,6);
 uVar1 = *(undefined4 *)((long)param_1 + lVar30 + 8);
 uVar2 = *(undefined4 *)((long)param_1 + lVar30 + 0xc);
 uVar34 = (undefined1)((uint)uVar1 >> 8);
 auVar9.b[11] = (char)((uint)uVar1 >> 0x18);
 auVar9.u32[0] = ZEXT812(0);
 auVar10.b[10] = auVar9.b[10];
 auVar10.u64[0] = (unsigned long long)(byte)((uint)uVar1 >> 0x10) << 0x40;
 auVar23[4] = 0;
 auVar23[0] = auVar10.u32[1];
 uVar33 = CONCAT13(0,CONCAT12(uVar34,(ushort)(byte)uVar1));
 auVar11.b[4] = uVar34;
 auVar11.u32[0] = uVar33;
 auVar11.b[5] = 0;
 auVar11.b[6] = SUB137(auVar23[8] << 0x40,6);
 iVar31 = (uVar33 & 0xffff) + ((uint)uVar19 & 0xffff) + iVar31;
 iVar35 = auVar11.u32[1] + auVar5.u32[1] + iVar35;
 iVar36 = auVar10.u32[1] + auVar4.u32[1] + iVar36;
 iVar37 = (uint)(auVar9.b[10] >> 0x10) + (uint)(auVar3.b[10] >> 0x10) + iVar37;
 uVar34 = (undefined1)((uint)uVar2 >> 8);
 uVar19 = (ulong)CONCAT12(uVar34,(short)uVar2) & 0xffffffffffff00ff;
 auVar12.u32[1] = 0;
 auVar12.u64[0] = uVar19;
 auVar12.b[12] = (char)((uint)uVar2 >> 0x18);
 auVar13.b[8] = (char)((uint)uVar2 >> 0x10);
 auVar13.u64[0] = uVar19;
 auVar13.b[9] = 0;
 auVar13.b[10] = auVar12.b[10];
 auVar24[4] = 0;
 auVar24[0] = auVar13.u32[1];
 auVar14.b[4] = uVar34;
 auVar14.u32[0] = (uint)uVar19;
 auVar14.b[5] = 0;
 auVar14.b[6] = SUB137(auVar24[8] << 0x40,6);
 iVar38 = ((uint)uVar19 & 0xffff) + ((uint)uVar20 & 0xffff) + iVar38;
 iVar39 = auVar14.u32[1] + auVar8.u32[1] + iVar39;
 iVar40 = auVar13.u32[1] + auVar7.u32[1] + iVar40;
 iVar41 = (uint)(auVar12.b[10] >> 0x10) + (uint)(auVar6.b[10] >> 0x10) + iVar41;
 lVar30 = lVar30 + 0x10;
 uVar32 = uVar32 - 2;
 } while (uVar32 != 0);
 if ((uVar29 & 1) != 0) goto LAB_00102a26;
 }
 iVar31 = iVar37 + iVar41 + iVar35 + iVar39 + iVar36 + iVar40 + iVar31 + iVar38;
 if (uVar28 == param_2) {
 return iVar31;
 }
LAB_00102a70:
 do {
 iVar31 = iVar31 + (uint)*(byte *)((long)param_1 + uVar28);
 uVar28 = uVar28 + 1;
 } while (param_2 != uVar28);
 return iVar31;
}



/* Function: call_memset @ 00102aa0 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00102ab0 */

int param_strchr_strstr(char *param_1,int param_2,char *param_3)

{
 char *pcVar1;
 char *pcVar2;
 
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}



/* Function: call_strchr_strstr @ 00102af0 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 00102b00 */

void test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_3c;
 int local_38 [2];
 undefined1 local_30;
 
 puts(&DAT_0010441f);
 local_38[0] = 0x6c6c6548;
 local_38[1] = 0x62694c6f;
 local_30 = 0;
 sVar3 = strlen((char *)local_38);
 printf(&DAT_00104127,sVar3 & 0xffffffff);
 printf(&DAT_00104142,0);
 printf(&DAT_0010415d,0xc);
 printf(&DAT_00104179,0x5a);
 uVar4 = 0xffffffff;
 printf(&DAT_00104195,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 printf(&DAT_001041b1,(ulong)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_38,&local_3c);
 uVar1 = local_3c + local_38[0];
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(ulong)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_001041ea,(ulong)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104206,(ulong)uVar1);
 printf(&DAT_00104222,0x5a);
 printf(&DAT_0010423e,0);
 printf(&DAT_00104259,0xf);
 return;
}



/* Function: param_linux_syscall @ 00102c90 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (ulong)(uint)-*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}



/* Function: call_linux_syscall @ 00102cd0 */

uint call_linux_syscall(void)

{
 ulong uVar1;
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



/* Function: param_win32_api @ 00102d20 */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 stat local_90;
 
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



/* Function: call_win32_api @ 00102d60 */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 stat local_90;
 
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



/* Function: param_fork_exec @ 00102da0 */

uint param_fork_exec(char *param_1,undefined8 param_2)

{
 __pid_t _Var1;
 uint uVar2;
 undefined8 in_RAX;
 uint local_14;
 
 local_14 = (uint)((ulong)in_RAX >> 0x20);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_14 & 0x7f) == 0) {
 uVar2 = local_14 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00102e10 */

uint call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 
 _Var1 = fork();
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 00102e80 */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined8 uVar4;
 int local_30;
 int local_2c;
 undefined1 local_28 [32];
 
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
 /* WARNING: Subroutine does not return */
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



/* Function: param_socket_create @ 00102f40 */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 undefined4 local_24;
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
 local_20.sa_data[0xb] = '\0';
 local_20.sa_data[0xc] = '\0';
 local_20.sa_data[0xd] = '\0';
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



/* Function: param_shmget_shmat @ 00103010 */

ulong param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
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
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}



/* Function: call_shmget_shmat @ 001030e0 */

undefined8 call_shmget_shmat(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 00103100 */

undefined8 param_signal_handling(void)

{
 bool bVar1;
 __sighandler_t p_Var2;
 undefined8 uVar3;
 uint uVar4;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var2 = signal(0xe,signal_handler);
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



/* Function: signal_handler @ 00103230 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: test_system_calls @ 00103260 */

void test_system_calls(void)

{
 int iVar1;
 __pid_t _Var2;
 uint uVar3;
 ulong uVar4;
 int *piVar5;
 uint uVar6;
 stat local_a0;
 
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
 printf(&DAT_001042a8,(ulong)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar3 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar3 = 0x2a;
 }
 uVar6 = 0xffffffff;
 if (iVar1 < 0) {
 uVar3 = uVar6;
 }
 printf(&DAT_001042c4,(ulong)uVar3);
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if ((_Var2 < 0) || (((uint)local_a0.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (ulong)(-(uint)(((uint)local_a0.st_dev & 0xff00) != 0) | 0x2a);
 }
 }
 printf(&DAT_001042e0,uVar4);
 uVar3 = param_pipe_communication();
 printf(&DAT_001042fc,(ulong)uVar3);
 uVar3 = param_socket_create();
 printf(&DAT_00104318,(ulong)uVar3);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar6 = 0x2a;
 }
 printf(&DAT_00104334,(ulong)uVar6);
 uVar3 = param_signal_handling();
 printf(&DAT_00104350,(ulong)uVar3);
 return;
}



/* Function: thread_compute @ 001033d0 */

void thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}



/* Function: param_pthread_create @ 001033f0 */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 undefined4 *local_18;
 pthread_t local_10;
 
 local_1c = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}



/* Function: call_pthread_create @ 00103440 */

undefined4 call_pthread_create(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 local_1c;
 undefined4 *local_18;
 pthread_t local_10;
 
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}



/* Function: thread_sum @ 001034a0 */

undefined8 thread_sum(uint *param_1)

{
 uint uVar1;
 uint uVar2;
 
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((ulong)(uVar2 - uVar1) * (ulong)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}



/* Function: param_pthread_join @ 001034e0 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined8 local_68;
 undefined8 uStack_60;
 undefined4 local_58;
 int iStack_54;
 undefined8 uStack_50;
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28 [2];
 
 local_48 = 0;
 local_68 = 0xa00000001;
 uStack_60 = 0xb00000000;
 local_58 = 0x14;
 iStack_54 = 0;
 uStack_50 = 0x1e00000015;
 iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_68);
 iVar4 = -1;
 if (iVar2 == 0) {
 iVar2 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,(void *)((long)&uStack_60 + 4)
 );
 if (iVar2 == 0) {
 iVar2 = pthread_create(local_28,(pthread_attr_t *)0x0,thread_sum,&uStack_50);
 if (iVar2 == 0) {
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar2 == 0) {
 iVar2 = (int)uStack_60;
 iVar3 = pthread_join(local_30,(void **)0x0);
 iVar1 = iStack_54;
 if (iVar3 == 0) {
 iVar3 = pthread_join(local_28[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar1 + iVar2 + local_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: thread_increment @ 001035f0 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}



/* Function: param_mutex_lock @ 00103630 */

undefined8 param_mutex_lock(uint param_1,int param_2)

{
 int iVar1;
 undefined8 in_RAX;
 void *__ptr;
 undefined8 uVar2;
 ulong uVar3;
 ulong uVar4;
 long lVar5;
 int local_38;
 uint local_34;
 
 local_34 = (uint)((ulong)in_RAX >> 0x20);
 local_38 = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
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



/* Function: call_mutex_lock @ 00103720 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 00103730 */

void consumer_thread(void)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
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
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return;
}



/* Function: producer_thread @ 001037b0 */

undefined8 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}



/* Function: param_condition_variable @ 001037f0 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_20;
 undefined4 *local_18;
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



/* Function: thread_atomic_increment @ 00103890 */

undefined8 thread_atomic_increment(uint *param_1)

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



/* Function: thread_atomic_load_store @ 00103950 */

undefined8 thread_atomic_load_store(void)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}



/* Function: param_atomic_ops @ 00103970 */

undefined8 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 void *__ptr;
 undefined8 uVar2;
 ulong uVar3;
 long lVar4;
 undefined4 local_3c;
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
 } while ((ulong)param_1 * 8 - lVar4 != 0);
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



/* Function: call_atomic_ops @ 00103a80 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: thread_tls_test @ 00103a90 */

void thread_tls_test(char *param_1)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 
 lVar2 = in_FS_OFFSET[-6];
 iVar1 = (int)lVar2 + 0x32;
 *(int *)(in_FS_OFFSET + -6) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = malloc(8);
 *piVar3 = (int)lVar2;
 piVar3[1] = iVar1;
 return;
}



/* Function: param_thread_local_storage @ 00103ae0 */

undefined8 param_thread_local_storage(uint param_1)

{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 undefined8 uVar2;
 ulong uVar3;
 pthread_t *__newthread;
 ulong uVar4;
 int iVar5;
 int *local_38;
 
 __ptr = malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
 uVar3 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((long)__ptr_00 + uVar3 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 if (0 < (int)param_1) {
 uVar3 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + uVar3 * 8));
 if (iVar1 != 0) {
 uVar4 = 0xffffffffffffffff;
 do {
 free(*(void **)((long)__ptr_00 + uVar4 * 8 + 8));
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 uVar3 = uVar3 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar3);
 if ((int)param_1 < 1) {
 iVar1 = 0;
 iVar5 = 0;
 }
 else {
 uVar3 = 0;
 iVar5 = 0;
 iVar1 = 0;
 do {
 pthread_join(__ptr[uVar3],&local_38);
 iVar1 = iVar1 + *local_38;
 iVar5 = iVar5 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar3 * 8));
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 goto LAB_00103c0c;
 }
 }
 iVar1 = 0;
 iVar5 = 0;
LAB_00103c0c:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (param_1 * 0x96 == iVar5 && param_1 * 100 == iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: call_thread_local_storage @ 00103ca0 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 00103cb0 */

void test_thread_concurrency(void)

{
 int iVar1;
 uint uVar2;
 undefined4 local_1c;
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
 printf(&DAT_00104376,(ulong)uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00104392,(ulong)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_001043af,(ulong)uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_001043cb,(ulong)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001043e7,(ulong)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00104403,(ulong)uVar2);
 return;
}



/* Function: main @ 00103da0 */

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 64 */
