/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* Note: size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t, intmax_t, uintmax_t are defined in system headers */

/* Additional types for decompiled code */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long long undefined12;
typedef unsigned long long undefined16;
typedef void (*code)(void);
typedef int BOOL;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <signal.h>
#include <pthread.h>
#include <stdint.h>
#include <stdbool.h>
#include <errno.h>

/* Forward declarations */
void signal_handler(int sig);

/* Global variables needed by the code */
int signal_received;
int signal_number;
char ready;
char data;
int shared_counter;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int atomic_counter;

/* LOCK/UNLOCK macros for atomic operations */
#define LOCK() 
#define UNLOCK() 

/* External data references - defined as string data */
static const char DAT_000143d8[] = "BinBench_Data";
static const char DAT_000143cc[] = "BinBench_Code";
static const char DAT_00014026[] = "Benchmark";
static const char DAT_0001436c[] = "Standard Library Tests:\n";
static const char DAT_00014074[] = "String length: %d\n";
static const char DAT_0001408f[] = "strcmp(result): %d\n";
static const char DAT_000140aa[] = "memcmp(result): %d\n";
static const char DAT_000140c6[] = "printf(result): %d\n";
static const char DAT_000140e2[] = "Combined cmp: %d\n";
static const char DAT_000140fe[] = "printf return: %d\n";
static const char DAT_0001411a[] = "scanf result: %d\n";
static const char DAT_00014137[] = "File descriptor: %d\n";
static const char DAT_00014153[] = "fread/fwrite: %d\n";
static const char DAT_0001416f[] = "malloc sum: %d\n";
static const char DAT_0001418b[] = "memset result: %d\n";
static const char DAT_000141a6[] = "strchr/strstr: %d\n";
static const char DAT_000141f5[] = "syscall result: %d\n";
static const char DAT_00014211[] = "stat result: %d\n";
static const char DAT_0001422d[] = "fork/exec result: %d\n";
static const char DAT_00014249[] = "pipe result: %d\n";
static const char DAT_00014265[] = "socket result: %d\n";
static const char DAT_00014281[] = "shm result: %d\n";
static const char DAT_0001429d[] = "signal result: %d\n";
static const char DAT_000142c3[] = "pthread_create: %d\n";
static const char DAT_000142df[] = "pthread_join sum: %d\n";
static const char DAT_000142fc[] = "mutex lock: %d\n";
static const char DAT_00014318[] = "condition var: %d\n";
static const char DAT_00014334[] = "atomic ops: %d\n";
static const char DAT_00014350[] = "thread local: %d\n";
static const char DAT_00014390[] = "System Calls Test:\n";
static const char DAT_000143ab[] = "Thread Concurrency Test:\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/6/6_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001141c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011420 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011559 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001155d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_strcpy @ 00011570 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return sVar1;
}



/* Function: call_strcpy @ 000115b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)
{
 size_t sVar1;
 char local_24 [32];
 
 strncpy(local_24,"Hell",4);
 strncpy(local_24 + 4,"oLib",5);
 sVar1 = strlen(local_24);
 return (int)sVar1;
}



/* Function: param_strcmp @ 000115f0 */

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



/* Function: call_strcmp @ 00011630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 00011640 */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return sVar1;
}



/* Function: call_strlen @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 00011680 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return n;
}



/* Function: call_memcpy @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 000116c0 */

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



/* Function: call_memcmp @ 00011700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2 + iVar3;
}



/* Function: param_printf @ 00011770 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",x,name);
 return iVar1;
}



/* Function: call_printf @ 000117a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 return iVar1;
}



/* Function: param_scanf @ 000117d0 */

int param_scanf(char *input_str)

{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_c + local_8;
 }
 return iVar2;
}



/* Function: call_scanf @ 00011820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 00011870 */

int param_fopen_fclose(char *filename)

{
 FILE *__stream;
 int iVar1;
 
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



/* Function: call_fopen_fclose @ 000118c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 FILE *__stream;
 int iVar1;
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



/* Function: param_fread_fwrite @ 00011920 */

int param_fread_fwrite(char *tmpfile)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 int iVar3;
 undefined1 local_30 [32];
 
 /* Unresolved local var: char[32] read_buffer@[???]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???]
 Unresolved local var: char * write_data@[???] */
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar2 = -1;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_30,1,0x12,__s);
 local_30[sVar1] = 0;
 fclose(__s);
 unlink(tmpfile);
 iVar2 = -3;
 if (sVar1 == 0x12) {
 iVar3 = memcmp(local_30,"BinBench Test Data",0x13);
 iVar2 = -3;
 if (iVar3 == 0) {
 iVar2 = 0x2a;
 }
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00011a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00011a30 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int iVar1;
 size_t sVar2;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 /* Unresolved local var: size_t i@[???] */
 if (size != 0) {
 iVar1 = 0;
 sVar2 = 0;
 do {
 __ptr[sVar2] = iVar1;
 sVar2 = sVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (size != sVar2);
 }
 iVar1 = __ptr[size - 1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00011a90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int *__ptr;
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar1 != 100);
 iVar1 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}



/* Function: param_memset @ 00011af0 */

int param_memset(void *buffer, int value)
{
 memset(buffer, value, 40);
 return 1;
}



/* Function: call_memset @ 00011b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 int iVar1;
 undefined4 local_28 [10];
 
 /* Unresolved local var: int[10] buffer@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 local_28[iVar1] = 0xff;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 10);
 return 0;
}



/* Function: param_strchr_strstr @ 00011b70 */

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



/* Function: call_strchr_strstr @ 00011bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00011be0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 int *__ptr;
 int iVar4;
 int *piVar5;
 uint uVar6;
 int local_3c;
 int local_38 [2];
 undefined1 local_30;
 
 puts(&DAT_0001436c);
 /* Unresolved local var: char[32] buffer@[???] */
 local_30 = 0;
 local_38[1] = 0x62694c6f;
 local_38[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00014074,sVar1);
 printf(&DAT_0001408f,0);
 printf(&DAT_000140aa,0xc);
 printf(&DAT_000140c6,0x5a);
 /* Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 /* Unresolved local var: int ret@[???] */
 iVar3 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar4 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar4 = 1;
 }
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 printf(&DAT_000140e2,iVar3 + iVar4);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 printf(&DAT_000140fe,iVar2);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int ret@[???] */
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_38,&local_3c);
 local_3c = local_3c + local_38[0];
 iVar3 = -1;
 if (iVar2 != 2) {
 local_3c = -1;
 }
 printf(&DAT_0001411a,local_3c);
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 uVar6 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar6 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar6);
 iVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,iVar2);
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar2 = 0;
 piVar5 = __ptr;
 do {
 *piVar5 = iVar2;
 iVar2 = iVar2 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar2 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 printf(&DAT_0001416f,iVar3);
 iVar2 = 0;
 do {
 /* Unresolved local var: int[10] buffer@[???]
 Unresolved local var: int i@[DW_OP_reg0(EAX)] */
 local_38[iVar2] = 0xff;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 10);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}



/* Function: param_linux_syscall @ 00011e60 */

int __attribute__((regparm(1))) param_linux_syscall(char *pathname)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 undefined4 uVar4;
 
 /* Unresolved local var: int fd@[???] */
 uVar4 = 0x11e68;
 uVar3 = 0;
 iVar1 = syscall(5);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,pathname);
 }
 return iVar1;
}



/* Function: call_linux_syscall @ 00011eb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 int *piVar2;
 undefined4 uVar3;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar3 = 0;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3);
 }
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 00011f10 */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_5c;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat(filename,&local_5c);
 iVar3 = -2;
 if (0 < local_5c.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: call_win32_api @ 00011f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 struct stat local_5c;
 
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_5c);
 iVar3 = -2;
 if (0 < local_5c.st_size) {
 iVar3 = 0x2a;
 }
 iVar2 = -1;
 if (-1 < iVar1) {
 iVar2 = iVar3;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 00011fb0 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 
 /* Unresolved local var: pid_t pid@[???] */
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
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}



/* Function: call_fork_exec @ 00012030 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_8,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_8 & 0x7f) == 0) {
 uVar2 = local_8 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}



/* Function: param_pipe_communication @ 000120b0 */

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



/* Function: call_pipe_communication @ 00012190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 000121b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 undefined4 local_20;
 struct sockaddr local_1c;
 
 /* Unresolved local var: sockaddr_in addr@[???]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 local_20 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_20,4);
 if (iVar2 < 0) {
 close(iVar1);
 iVar1 = -2;
 }
 else {
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[0xb] = '\0';
 local_1c.sa_data[0xc] = '\0';
 local_1c.sa_data[0xd] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 iVar2 = bind(iVar1,&local_1c,0x10);
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



/* Function: call_socket_create @ 000122a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 000122c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
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
 if (__s == (char *)0xffffffff) {
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
 return sVar2;
}



/* Function: call_shmget_shmat @ 000123b0 */

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



/* Function: param_signal_handling @ 000123e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 bool bVar1;
 __sighandler_t p_Var2;
 int iVar3;
 uint uVar4;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 iVar3 = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 iVar3 = -2;
 }
 else {
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
 iVar3 = -3;
 }
 else {
 iVar3 = -4;
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
 iVar3 = -5;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar3 = 0x2a;
 }
 }
 }
 }
 }
 return iVar3;
}



/* Function: signal_handler @ 00012540 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00012570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00012590 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 uint uVar4;
 undefined4 uVar5;
 undefined4 uVar6;
 struct stat local_6c;
 
 puts(&DAT_00014390);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar6 = 0;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar6);
 }
 printf(&DAT_000141f5,iVar1 >> 0x1f | 0x2a);
 /* Unresolved local var: stat st@[???] */
 iVar1 = stat("/etc/passwd",&local_6c);
 uVar6 = 0xfffffffe;
 if (0 < local_6c.st_size) {
 uVar6 = 0x2a;
 }
 uVar5 = 0xffffffff;
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00014211,uVar6);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,(int *)&local_6c,0);
 if (_Var3 < 0) {
 uVar4 = 0xfffffffe;
 }
 else {
 uVar4 = 0xfffffffd;
 if (((uint)local_6c.st_dev & 0x7f) == 0) {
 uVar4 = (uint)local_6c.st_dev >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_0001422d,-(uint)(uVar4 != 0) | 0x2a);
 iVar1 = param_pipe_communication();
 printf(&DAT_00014249,iVar1);
 iVar1 = param_socket_create();
 printf(&DAT_00014265,iVar1);
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00014281,uVar5);
 iVar1 = param_signal_handling();
 printf(&DAT_0001429d,iVar1);
 return;
}



/* Function: thread_compute @ 00012720 */

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



/* Function: param_pthread_create @ 00012750 */

int param_pthread_create(int x)

{
 int iVar1;
 int iVar2;
 int *local_14;
 int local_10;
 pthread_t local_c;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = x;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 iVar2 = *local_14;
 free(local_14);
 }
 return iVar2;
}



/* Function: call_pthread_create @ 000127c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 int iVar2;
 int *local_14;
 undefined4 local_10;
 pthread_t local_c;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 iVar2 = -1;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 iVar2 = *local_14;
 free(local_14);
 }
 return iVar2;
}



/* Function: thread_sum @ 00012830 */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 int64_t lVar3;
 
 /* Unresolved local var: ThreadData * data@[???] */
 *(undefined4 *)((int)arg + 8) = 0;
 /* Unresolved local var: int i@[???] */
 uVar1 = *(uint *)arg;
 iVar2 = *(int *)((int)arg + 4);
 if ((int)uVar1 <= iVar2) {
 lVar3 = (uint64_t)(iVar2 + ~uVar1) * (uint64_t)(iVar2 - uVar1);
 *(uint *)((int)arg + 8) =
 uVar1 + *(int *)((int)arg + 8) + (uVar1 + 1) * (iVar2 - uVar1) +
 ((int)((uint64_t)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00012870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 *__arg;
 int *piVar4;
 undefined4 local_44;
 undefined4 local_40;
 int local_3c [8];
 pthread_t apStack_1c [3];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 local_3c[6] = 0;
 local_3c[3] = 0;
 local_3c[0] = 0;
 local_44 = 1;
 local_40 = 10;
 local_3c[1] = 0xb;
 local_3c[2] = 0x14;
 local_3c[4] = 0x15;
 local_3c[5] = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((int)apStack_1c + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 /* Unresolved local var: int i@[???] */
 piVar4 = local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}



/* Function: call_pthread_join @ 00012950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined4 *__arg;
 int *piVar4;
 undefined4 local_44;
 undefined4 local_40;
 int local_3c [8];
 pthread_t apStack_1c [3];
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 local_3c[6] = 0;
 local_3c[3] = 0;
 local_3c[0] = 0;
 local_44 = 1;
 local_40 = 10;
 local_3c[1] = 0xb;
 local_3c[2] = 0x14;
 local_3c[4] = 0x15;
 local_3c[5] = 0x1e;
 iVar3 = 0;
 __arg = &local_44;
 do {
 /* Unresolved local var: int i@[???] */
 iVar1 = pthread_create((pthread_t *)((int)apStack_1c + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = __arg + 3;
 } while (iVar3 != 0xc);
 /* Unresolved local var: int i@[???] */
 piVar4 = local_3c;
 iVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(apStack_1c[iVar3],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar4;
 iVar3 = iVar3 + 1;
 piVar4 = piVar4 + 3;
 } while (iVar3 != 3);
 return iVar1;
}



/* Function: thread_increment @ 00012a30 */

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



/* Function: param_mutex_lock @ 00012aa0 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 pthread_t *__ptr;
 int iVar1;
 pthread_t *__newthread;
 int iVar2;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 __ptr = malloc(thread_count * 4);
 if (__ptr == (pthread_t *)0x0) {
 iVar2 = -1;
 }
 else {
 shared_counter = 0;
 /* Unresolved local var: int i@[???] */
 __newthread = __ptr;
 iVar2 = thread_count;
 if (0 < thread_count) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,
 &iterations_per_thread);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 iVar2 = iVar2 + -1;
 __newthread = __newthread + 1;
 } while (iVar2 != 0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar2 = 0;
 do {
 pthread_join(__ptr[iVar2],(void **)0x0);
 iVar2 = iVar2 + 1;
 } while (thread_count != iVar2);
 }
 free(__ptr);
 iVar2 = -3;
 if (shared_counter == thread_count * iterations_per_thread) {
 iVar2 = 0x2a;
 }
 }
 return iVar2;
}



/* Function: call_mutex_lock @ 00012ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00012bd0 */

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



/* Function: producer_thread @ 00012c50 */

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



/* Function: param_condition_variable @ 00012cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int iVar2;
 pthread_t local_14;
 int *local_10;
 pthread_t local_c;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 iVar2 = -1;
 if (iVar1 == 0) {
 iVar2 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_14,&local_10);
 pthread_join(local_c,(void **)0x0);
 iVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_14);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: call_condition_variable @ 00012d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 00012d80 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 /* Unresolved local var: int i@[???] */
 if (0 < *(int *)arg) {
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
 } while (iVar2 != *(int *)arg);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00012dd0 */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00012df0 */

int param_atomic_ops(int thread_count, int iterations)

{
 int aVar1;
 pthread_t *__ptr;
 int iVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 __ptr = malloc(thread_count * 4);
 if (__ptr == (pthread_t *)0x0) {
 iVar3 = -1;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 /* Unresolved local var: int i@[???] */
 iVar3 = thread_count;
 __newthread = __ptr;
 if (0 < thread_count) {
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&iterations
 );
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_14,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (thread_count != iVar3);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar3 = -3;
 if (0 < aVar1) {
 iVar3 = 0x2a;
 }
 }
 return iVar3;
}



/* Function: call_atomic_ops @ 00012f00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00012f30 */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 iVar2 = 50;
 iVar1 = iVar2 + 0x32;
 strncpy((char *)(arg),arg,0x1f);
 piVar3 = malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}



/* Function: param_thread_local_storage @ 00012f90 */

int param_thread_local_storage(int thread_count)

{
 pthread_t *__ptr;
 void *__ptr_00;
 int iVar1;
 char *__s;
 int iVar2;
 pthread_t *__newthread;
 int iVar3;
 int *local_14;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int expected_initial@[???]
 Unresolved local var: int expected_final@[???] */
 __ptr = malloc(thread_count * 4);
 __ptr_00 = malloc(thread_count * 4);
 iVar1 = -1;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar1 = 0;
 do {
 __s = malloc(0x10);
 *(char **)((int)__ptr_00 + iVar1 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar1);
 iVar1 = iVar1 + 1;
 } while (thread_count != iVar1);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar1 = 0;
 __newthread = __ptr;
 do {
 iVar2 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar1 * 4));
 if (iVar2 != 0) {
 iVar2 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar2 * 4 + 4));
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 iVar1 = iVar1 + 1;
 __newthread = __newthread + 1;
 } while (thread_count != iVar1);
 }
 /* Unresolved local var: int i@[???] */
 if (thread_count < 1) {
 iVar2 = 0;
 iVar3 = 0;
 }
 else {
 iVar1 = 0;
 iVar3 = 0;
 iVar2 = 0;
 do {
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(__ptr[iVar1],&local_14);
 iVar2 = iVar2 + *local_14;
 iVar3 = iVar3 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar1 * 4));
 iVar1 = iVar1 + 1;
 } while (thread_count != iVar1);
 }
 free(__ptr_00);
 free(__ptr);
 iVar1 = -3;
 if (thread_count * 0x96 == iVar3 && thread_count * 100 == iVar2) {
 iVar1 = 0x2a;
 }
 }
 return iVar1;
}



/* Function: call_thread_local_storage @ 00013150 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00013180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 pthread_t *ppVar4;
 undefined4 uVar5;
 undefined4 *local_48;
 pthread_t local_44 [10];
 pthread_t local_1c [3];
 
 puts(&DAT_000143ab);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_1c[0] = 7;
 ppVar4 = local_44;
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_compute,local_1c);
 uVar5 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_44[0],&local_48);
 uVar5 = *local_48;
 free(local_48);
 }
 printf(&DAT_000142c3,uVar5);
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[???]
 Unresolved local var: int total@[???] */
 local_44[8] = 0;
 local_44[5] = 0;
 local_44[2] = 0;
 local_44[0] = 1;
 local_44[1] = 10;
 local_44[3] = 0xb;
 local_44[4] = 0x14;
 local_44[6] = 0x15;
 local_44[7] = 0x1e;
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 iVar2 = pthread_create((pthread_t *)((int)local_1c + iVar1),(pthread_attr_t *)0x0,thread_sum,
 ppVar4);
 if (iVar2 != 0) {
 iVar1 = -1;
 goto LAB_000132c0;
 }
 iVar1 = iVar1 + 4;
 ppVar4 = ppVar4 + 3;
 } while (iVar1 != 0xc);
 /* Unresolved local var: int i@[???] */
 ppVar4 = local_44 + 2;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar3 = pthread_join(local_1c[iVar2],(void **)0x0);
 if (iVar3 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + *ppVar4;
 iVar2 = iVar2 + 1;
 ppVar4 = ppVar4 + 3;
 } while (iVar2 != 3);
LAB_000132c0:
 printf(&DAT_000142df,iVar1);
 iVar1 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,iVar1);
 iVar1 = param_condition_variable();
 printf(&DAT_00014318,iVar1);
 iVar1 = param_atomic_ops(4,500);
 printf(&DAT_00014334,iVar1);
 iVar1 = param_thread_local_storage(4);
 printf(&DAT_00014350,iVar1);
 return;
}



/* Function: main @ 00013350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
