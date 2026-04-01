/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* typedef unsigned long long uint64_t; */ /* Already defined in system headers */
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* typedef unsigned long size_t; */ /* Already defined in system headers */
/* typedef long ssize_t; */ /* Already defined in system headers */
/* typedef unsigned long uintptr_t; */ /* Already defined in system headers */
/* typedef long intptr_t; */ /* Already defined in system headers */
/* typedef unsigned long ptrdiff_t; */ /* Already defined in system headers */
/* typedef long long intmax_t; */ /* Already defined in system headers */
/* typedef unsigned long long uintmax_t; */ /* Already defined in system headers */

/* Additional type definitions for Ghidra decompiled code */
typedef unsigned int uint;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef void (*code)(void);
typedef unsigned short ushort;
/* typedef long time_t; */ /* Already defined in system headers */
typedef int pid_t;
typedef int key_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
/* struct shmid_ds already defined in sys/shm.h */

/* Ghidra helper macros */
#define SUB161(val, n) (((val)[(n)]) & 0xFF)
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))
#define CONCAT32(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))
#define CONCAT12(hi, lo) (((uint32_t)(hi) << 16) | (uint16_t)(lo))
#define CONCAT13(hi, lo) (((uint32_t)(hi) << 24) | (uint8_t)(lo))
#define ZEXT712(val) (val)
#define ZEXT812(val) (val)
#define SUB137(val, n) (((val) >> ((n) * 8)) & 0xFF)
#define CONCAT72(hi, lo) (((uint32_t)(hi) << 16) | (uint16_t)(lo))
#define SUB167(val, n) (((val) >> ((n) * 8)) & 0xFF)
#define unkuint10 unsigned long long
#define LOCK()
#define UNLOCK()

/* Standard library headers */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdbool.h>
#include <stdatomic.h>

/* External function declarations */
extern int __isoc99_sscanf(const char *restrict, const char *restrict, ...);

/* Global data definitions */

/* Global variables for signal handling */
volatile sig_atomic_t signal_received = 0;
volatile int signal_number = 0;

/* Global variables for condition variable test */
volatile int ready = 0;
volatile int data = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Global variables for mutex test */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
volatile int shared_counter = 0;

/* Global variables for atomic test */
volatile atomic_int atomic_counter = 0;

char DAT_001040d9[] = "BinBench";
int _DAT_00104040[4] = {0, 1, 2, 3};
char DAT_0010441f[] = "Testing standard library functions";
char DAT_00104127[] = "strlen: %zu\n";
char DAT_00104142[] = "strcmp: %d\n";
char DAT_0010415d[] = "strlen test: %zu\n";
char DAT_00104179[] = "memcpy: %d\n";
char DAT_00104195[] = "memcmp: %d\n";
char DAT_001041b1[] = "printf ret: %d\n";
char DAT_001041cd[] = "sscanf ret: %d\n";
char DAT_001041ea[] = "fopen ret: %d\n";
char DAT_00104206[] = "fread_fwrite: %d\n";
char DAT_00104222[] = "malloc: %d\n";
char DAT_0010423e[] = "memset: %d\n";
char DAT_00104259[] = "strchr_strstr: %d\n";
char DAT_001042a8[] = "syscall ret: %d\n";
char DAT_001042c4[] = "stat ret: %d\n";
char DAT_001042e0[] = "fork ret: %d\n";
char DAT_001042fc[] = "pipe ret: %d\n";
char DAT_00104318[] = "socket ret: %d\n";
char DAT_00104334[] = "shm ret: %d\n";
char DAT_00104350[] = "signal ret: %d\n";
char DAT_00104376[] = "pthread ret: %d\n";
char DAT_00104392[] = "pthread_join: %d\n";
char DAT_001043af[] = "mutex: %d\n";
char DAT_001043cb[] = "condvar: %d\n";
char DAT_001043e7[] = "atomic: %d\n";
char DAT_00104403[] = "tls: %d\n";
char DAT_00104443[] = "Testing system calls";
char DAT_0010445e[] = "Testing thread concurrency";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_clang_O2_g
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

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return (int)sVar1;
}



/* Function: call_strcpy @ 001024d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_28 [40];
 
 /* Unresolved local var: char[32] buffer@[???]
 Unresolved local var: int len@[???] */
 strncpy(local_28,"HelloLib",9);
 sVar1 = strlen(local_28);
 return (int)sVar1;
}



/* Function: param_strcmp @ 00102500 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = strcmp(s1,s2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_strcmp @ 00102520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00102530 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 sVar1 = strlen(str);
 return (int)sVar1;
 /* Unresolved local var: size_t len@[???] */
}



/* Function: call_strlen @ 00102540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00102550 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00102560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00102570 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = memcmp(p1,p2,n);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}



/* Function: call_memcmp @ 00102590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 /* Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return -1;
}



/* Function: param_printf @ 001025a0 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 001025c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return iVar1;
}



/* Function: param_scanf @ 001025e0 */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 undefined8 in_RAX;
 undefined8 local_8;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 local_8 = in_RAX;
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",(long)&local_8 + 4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + (int)((local_8 >> 32) & 0xFFFFFFFF);
 }
 return iVar2;
}



/* Function: call_scanf @ 00102610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 undefined8 in_RAX;
 undefined8 local_8;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 local_8 = in_RAX;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",(long)&local_8 + 4,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + (int)((local_8 >> 32) & 0xFFFFFFFF);
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00102650 */

int param_fopen_fclose(char *filename)

{
 int iVar1;
 FILE *__stream;
 
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen(filename,"r");
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 uint uVar2;
 
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
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

int param_fread_fwrite(char *tmpfile)

{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 undefined1 auVar3 [16];
 undefined1 auVar4 [16];
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
 
 /* Unresolved local var: char[32] read_buffer@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???]
 Unresolved local var: char * write_data@[???] */
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(local_38,1,0x12,__s);
 local_38[sVar2] = '\0';
 fclose(__s);
 unlink(tmpfile);
 iVar1 = -3;
 if (sVar2 == 0x12) {
 auVar4[0] = -(local_38[3] == 'B');
 auVar4[1] = -(cStack_34 == 'e');
 auVar4[2] = -(cStack_33 == 'n');
 auVar4[3] = -(cStack_32 == 'c');
 auVar4[4] = -(cStack_31 == 'h');
 auVar4[5] = -(cStack_30 == ' ');
 auVar4[6] = -(cStack_2f == 'T');
 auVar4[7] = -(cStack_2e == 'e');
 auVar4[8] = -(cStack_2d == 's');
 auVar4[9] = -(cStack_2c == 't');
 auVar4[10] = -(cStack_2b == ' ');
 auVar4[0xb] = -(cStack_2a == 'D');
 auVar4[0xc] = -(cStack_29 == 'a');
 auVar4[0xd] = -(cStack_28 == 't');
 auVar4[0xe] = -(cStack_27 == 'a');
 auVar4[0xf] = -(cStack_26 == '\0');
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
 auVar3[0xb] = -(cStack_2d == 's');
 auVar3[0xc] = -(cStack_2c == 't');
 auVar3[0xd] = -(cStack_2b == ' ');
 auVar3[0xe] = -(cStack_2a == 'D');
 auVar3[0xf] = -(cStack_29 == 'a');
 iVar1 = -3;
 {
 unsigned int check_result = 1;
 for (int i = 0; i < 16; i++) {
 if (auVar3[i] != auVar4[i]) {
 check_result = 0;
 break;
 }
 }
 if (check_result) {
 iVar1 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 iVar1 = -2;
 }
 }
 else {
 fclose(__s);
 iVar1 = -2;
 }
 }
 return iVar1;
}



/* Function: call_fread_fwrite @ 001027c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 001027d0 */
/* WARNING: Removing unreachable block (ram,0x00102945) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_malloc_free(size_t size)

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
 undefined1 auVar7 [16];
 int iVar10;
 undefined1 auVar8 [16];
 int iVar11;
 int iVar12;
 int iVar14;
 undefined1 auVar13 [16];
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 /* Unresolved local var: size_t i@[???] */
 if (size == 0) goto LAB_00102921;
 if (size < 8) {
 uVar2 = 0;
LAB_00102904:
 iVar3 = (int)uVar2 * 10;
 do {
 __ptr[uVar2] = iVar3;
 uVar2 = uVar2 + 1;
 iVar3 = iVar3 + 10;
 } while (size != uVar2);
 }
 else {
 uVar2 = size & 0xfffffffffffffff8;
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
 {
 int *auVar7_ptr = _DAT_00104040;
 do {
 iVar9 = auVar7_ptr[0] * 10;
 iVar11 = (int)((auVar7_ptr[2] & 0xffffffff) * 10);
 iVar3 = auVar7_ptr[1];
 iVar10 = auVar7_ptr[3];
 iVar12 = iVar3 * 10;
 iVar14 = (int)((iVar10 & 0xffffffff) * 10);
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
 auVar7_ptr[0] = auVar7_ptr[0] + 0x10;
 auVar7_ptr[1] = iVar3 + 0x10;
 auVar7_ptr[2] = auVar7_ptr[2] + 0x10;
 auVar7_ptr[3] = iVar10 + 0x10;
 uVar6 = uVar6 - 2;
 } while (uVar6 != 0);
 iVar3 = auVar7_ptr[0] * 10;
 iVar9 = (int)((auVar7_ptr[2] & 0xffffffff) * 10);
 iVar10 = auVar7_ptr[1] * 10;
 iVar11 = (int)((auVar7_ptr[2] & 0xffffffff) * 10);
 if ((uVar4 & 1) != 0) goto LAB_001028e8;
 }
 if (uVar2 != size) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar3 = __ptr[size - 1];
 free(__ptr);
 /* WARNING: Read-only address (ram,0x00104040) is written */
 return unaff_EBP + iVar3;
}



/* Function: call_malloc_free @ 00102950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 00102960 */

int param_memset(void *buffer,size_t size)
{
 memset(buffer,0,size);
 return (int)size;
}



/* Function: call_memset @ 00102aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)
{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00102ab0 */

int param_strchr_strstr(char *str,char ch,char *substr)
{
 char *pcVar1;
 char *pcVar2;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar1 = strchr(str,(int)ch);
 pcVar2 = strstr(str,substr);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)str) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)str);
}



/* Function: call_strchr_strstr @ 00102af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)
{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00102b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 /* Unresolved local var: char[32] buffer@[???] */
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
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_38,&local_3c);
 uVar1 = local_3c + local_38[0];
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(ulong)uVar1);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
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
}



/* Function: param_linux_syscall @ 00102c90 */

int param_linux_syscall(char *pathname)
{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(2,pathname,0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3;
}



/* Function: call_linux_syscall @ 00102cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)
{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
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

int param_win32_api(char *filename)
{
 int iVar1;
 int iVar2;
 int iVar3;
 stat local_90;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat(filename,&local_90);
 iVar3 = -2;
 if (0 < local_90.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: call_win32_api @ 00102d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 stat local_90;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_90);
 iVar3 = -2;
 if (0 < local_90.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 00102da0 */

int param_fork_exec(char *prog,char *arg)
{
 __pid_t _Var1;
 uint uVar2;
 undefined8 in_RAX;
 uint local_14;
 
 /* Unresolved local var: pid_t pid@[???] */
 local_14 = (uint)((ulong)in_RAX >> 0x20);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}



/* Function: param_pipe_communication @ 00102e80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 int local_30;
 int local_2c;
 undefined1 local_28 [32];
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[???]
 Unresolved local var: pid_t pid@[???] */
 iVar1 = pipe(&local_30);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 iVar1 = -2;
 }
 else {
 if (_Var2 == 0) {
 /* Unresolved local var: char * msg@[???] */
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 /* Unresolved local var: ssize_t bytes@[???] */
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 iVar1 = -3;
 if (0 < sVar3) {
 iVar1 = 0x2a;
 }
 }
 }
 return iVar1;
}



/* Function: call_pipe_communication @ 00102f30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 int iStack_30;
 int iStack_2c;
 undefined1 auStack_28 [32];
 
 iVar1 = pipe(&iStack_30);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 iVar1 = -2;
 }
 else {
 if (_Var2 == 0) {
 close(iStack_30);
 write(iStack_2c,"HelloPipe",9);
 close(iStack_2c);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(iStack_2c);
 sVar3 = read(iStack_30,auStack_28,0x1f);
 auStack_28[sVar3] = 0;
 close(iStack_30);
 wait((void *)0x0);
 iVar1 = -3;
 if (0 < sVar3) {
 iVar1 = 0x2a;
 }
 }
 }
 return iVar1;
}



/* Function: param_socket_create @ 00102f40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_24;
 sockaddr local_20;
 
 /* Unresolved local var: sockaddr_in addr@[???]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_24 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_24,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
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
 iVar2 = bind(iVar1,&local_20,0x10);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -3;
 }
 else {
 iVar2 = listen(iVar1,5);
 close(iVar1);
 iVar1 = 0x2a;
 if (iVar2 < 0) {
 iVar1 = -4;
 }
 }
 }
 }
 return iVar1;
}



/* Function: call_socket_create @ 00103000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 uStack_24;
 sockaddr sStack_20;
 
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 uStack_24 = 1;
 iVar2 = setsockopt(iVar1,1,2,&uStack_24,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 sStack_20.sa_data[6] = '\0';
 sStack_20.sa_data[7] = '\0';
 sStack_20.sa_data[8] = '\0';
 sStack_20.sa_data[9] = '\0';
 sStack_20.sa_data[10] = '\0';
 sStack_20.sa_data[0xb] = '\0';
 sStack_20.sa_data[0xc] = '\0';
 sStack_20.sa_data[0xd] = '\0';
 sStack_20.sa_family = 2;
 sStack_20.sa_data[0] = '\0';
 sStack_20.sa_data[1] = '\0';
 sStack_20.sa_data[2] = '\0';
 sStack_20.sa_data[3] = '\0';
 sStack_20.sa_data[4] = '\0';
 sStack_20.sa_data[5] = '\0';
 iVar2 = bind(iVar1,&sStack_20,0x10);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -3;
 }
 else {
 iVar2 = listen(iVar1,5);
 close(iVar1);
 iVar1 = 0x2a;
 if (iVar2 < 0) {
 iVar1 = -4;
 }
 }
 }
 }
 return iVar1;
}



/* Function: param_shmget_shmat @ 00103010 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 int iVar3;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 iVar3 = -1;
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 iVar3 = -2;
 }
 else {
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 iVar3 = -3;
 }
 else {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 iVar3 = (int)sVar2;
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return iVar3;
}



/* Function: call_shmget_shmat @ 001030e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 iVar2 = -1;
 if (0 < iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 00103100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 bool bVar1;
 int iVar2;
 __sighandler_t p_Var3;
 uint uVar4;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -1;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -2;
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
 return -3;
 }
 iVar2 = -4;
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
 iVar2 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: signal_handler @ 00103230 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00103250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 bool bVar1;
 int iVar2;
 __sighandler_t p_Var3;
 uint uVar4;
 
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -1;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -2;
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
 return -3;
 }
 iVar2 = -4;
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
 iVar2 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: test_system_calls @ 00103260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
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
 /* Unresolved local var: stat st@[???] */
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
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
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
 /* Unresolved local var: int ret@[???] */
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

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * input@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ret@[???] */
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 001033f0 */

int param_pthread_create(int x)

{
 int iVar1;
 int iVar2;
 int local_1c;
 int *local_18;
 pthread_t local_10;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_1c = x;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 iVar2 = *local_18;
 free(local_18);
 }
 return iVar2;
}



/* Function: call_pthread_create @ 00103440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_1c;
 int *local_18;
 pthread_t local_10;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 iVar2 = *local_18;
 free(local_18);
 }
 return iVar2;
}



/* Function: thread_sum @ 001034a0 */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg5(RDI)] */
 *(undefined4 *)((long)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 uVar1 = *(uint *)arg;
 iVar2 = *(int *)((long)arg + 4);
 if ((int)uVar1 <= iVar2) {
 *(uint *)((long)arg + 8) =
 (uVar1 + 1) * (iVar2 - uVar1) + uVar1 +
 (int)((ulong)(iVar2 - uVar1) * (ulong)(iVar2 + ~uVar1) >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 001034e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 local_48 = 0;
 local_68 = 0xa00000001;
 uStack_60 = 0xb00000000;
 local_58 = 0x14;
 iStack_54 = 0;
 uStack_50 = 0x1e00000015;
 /* Unresolved local var: int i@[???] */
 iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_68);
 iVar4 = -1;
 if (iVar2 == 0) {
 iVar2 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,(void *)((long)&uStack_60 + 4)
 );
 if (iVar2 == 0) {
 iVar2 = pthread_create(local_28,(pthread_attr_t *)0x0,thread_sum,&uStack_50);
 if (iVar2 == 0) {
 /* Unresolved local var: int i@[???] */
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



/* Function: call_pthread_join @ 001035e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 undefined8 uStack_68;
 undefined8 uStack_60;
 undefined4 uStack_58;
 int iStack_54;
 undefined8 uStack_50;
 int iStack_48;
 pthread_t pStack_38;
 pthread_t pStack_30;
 pthread_t apStack_28 [2];
 
 iStack_48 = 0;
 uStack_68 = 0xa00000001;
 uStack_60 = 0xb00000000;
 uStack_58 = 0x14;
 iStack_54 = 0;
 uStack_50 = 0x1e00000015;
 iVar2 = pthread_create(&pStack_38,(pthread_attr_t *)0x0,thread_sum,&uStack_68);
 iVar4 = -1;
 if (iVar2 == 0) {
 iVar2 = pthread_create(&pStack_30,(pthread_attr_t *)0x0,thread_sum,
 (void *)((long)&uStack_60 + 4));
 if (iVar2 == 0) {
 iVar2 = pthread_create(apStack_28,(pthread_attr_t *)0x0,thread_sum,&uStack_50);
 if (iVar2 == 0) {
 iVar2 = pthread_join(pStack_38,(void **)0x0);
 iVar4 = -2;
 if (iVar2 == 0) {
 iVar2 = (int)uStack_60;
 iVar3 = pthread_join(pStack_30,(void **)0x0);
 iVar1 = iStack_54;
 if (iVar3 == 0) {
 iVar3 = pthread_join(apStack_28[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar1 + iVar2 + iStack_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}



/* Function: thread_increment @ 001035f0 */

void * thread_increment(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0x0;
}



/* Function: param_mutex_lock @ 00103630 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 undefined8 in_RAX;
 void *__ptr;
 ulong uVar2;
 ulong uVar3;
 long lVar4;
 int local_38;
 int local_34;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_34 = (int)((ulong)in_RAX >> 0x20);
 local_38 = iterations_per_thread;
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (void *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = (ulong)(uint)thread_count;
 lVar4 = 0;
 local_34 = thread_count;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 thread_count = local_34;
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 lVar4 = lVar4 + 8;
 } while (uVar3 * 8 - lVar4 != 0);
 /* Unresolved local var: int i@[???] */
 if (0 < local_34) {
 uVar2 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar2 * 8),(void **)0x0);
 uVar2 = uVar2 + 1;
 } while (uVar3 != uVar2);
 }
 }
 free(__ptr);
 iVar1 = -3;
 if (shared_counter == thread_count * local_38) {
 iVar1 = 0x2a;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00103720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00103730 */

void * consumer_thread(void *arg)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}



/* Function: producer_thread @ 001037b0 */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: param_condition_variable @ 001037f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int iVar2;
 pthread_t local_20;
 int *local_18;
 pthread_t local_10;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 iVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_condition_variable @ 00103880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 int iVar2;
 pthread_t pStack_20;
 int *piStack_18;
 pthread_t pStack_10;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = pthread_create(&pStack_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(pStack_20,&piStack_18);
 pthread_join(pStack_10,(void **)0x0);
 iVar2 = *piStack_18;
 free(piStack_18);
 }
 else {
 pthread_cancel(pStack_20);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: thread_atomic_increment @ 00103890 */

void * thread_atomic_increment(void *arg)

{
 uint uVar1;
 atomic_int aVar2;
 uint uVar3;
 uint uVar4;
 
 /* Unresolved local var: int iterations@[???] */
 uVar1 = *(uint *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < (int)uVar1) {
 uVar4 = uVar1 & 3;
 uVar3 = 0;
 if (2 < uVar1 - 1) {
 uVar3 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 aVar2 = uVar3 + 1000;
 if (uVar3 != atomic_counter) {
 aVar2 = atomic_counter;
 }
 atomic_counter = aVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 aVar2 = uVar3 + 0x3e9;
 if (uVar3 + 1 != atomic_counter) {
 aVar2 = atomic_counter;
 }
 atomic_counter = aVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 aVar2 = uVar3 + 0x3ea;
 if (uVar3 + 2 != atomic_counter) {
 aVar2 = atomic_counter;
 }
 atomic_counter = aVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 aVar2 = uVar3 + 0x3eb;
 if (uVar3 + 3 != atomic_counter) {
 aVar2 = atomic_counter;
 }
 atomic_counter = aVar2;
 UNLOCK();
 uVar3 = uVar3 + 4;
 } while (uVar3 != (uVar1 & 0xfffffffc));
 }
 for (; uVar4 != 0; uVar4 = uVar4 - 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 aVar2 = uVar3 + 1000;
 if (uVar3 != atomic_counter) {
 aVar2 = atomic_counter;
 }
 atomic_counter = aVar2;
 UNLOCK();
 uVar3 = uVar3 + 1;
 }
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00103950 */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00103970 */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 void *__ptr;
 ulong uVar3;
 long lVar4;
 int local_3c;
 pthread_t local_38;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 local_3c = iterations;
 __ptr = malloc((long)thread_count << 3);
 if (__ptr == (void *)0x0) {
 iVar2 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 lVar4 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 lVar4 = lVar4 + 8;
 } while ((ulong)(uint)thread_count * 8 - lVar4 != 0);
 }
 iVar2 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while ((uint)thread_count != uVar3);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar2 = -3;
 if (0 < aVar1) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00103a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00103a90 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 lVar2 = in_FS_OFFSET[-6];
 iVar1 = (int)lVar2 + 0x32;
 *(int *)(in_FS_OFFSET + -6) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = (int)lVar2;
 piVar3[1] = iVar1;
 return piVar3;
}



/* Function: param_thread_local_storage @ 00103ae0 */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 int iVar2;
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 ulong uVar3;
 pthread_t *__newthread;
 ulong uVar4;
 int iVar5;
 int *local_38;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 uVar4 = (ulong)(uint)thread_count;
 __ptr = malloc((long)thread_count << 3);
 __ptr_00 = malloc((long)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 return -1;
 }
 if (__ptr_00 == (void *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((long)__ptr_00 + uVar3 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)__ptr_00 + uVar3 * 8));
 if (iVar1 != 0) {
 uVar4 = 0xffffffffffffffff;
 /* Unresolved local var: int j@[???] */
 do {
 free(*(void **)((long)__ptr_00 + uVar4 * 8 + 8));
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 uVar3 = uVar3 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar3);
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
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
 iVar2 = -3;
 if (thread_count * 0x96 == iVar5 && thread_count * 100 == iVar1) {
 iVar2 = 0x2a;
 }
 return iVar2;
}



/* Function: call_thread_local_storage @ 00103ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 uint uVar2;
 undefined4 local_1c;
 uint *local_18;
 pthread_t local_10;
 
 puts(&DAT_0010445e);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 70 */
