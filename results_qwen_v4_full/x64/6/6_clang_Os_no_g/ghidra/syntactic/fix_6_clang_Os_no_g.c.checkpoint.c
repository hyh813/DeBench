/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t_g;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef void (*code)(void);
typedef void undefined;

/* Additional type definitions */
typedef struct {
    int shm_perm;
    size_t shm_segsz;
    short shm_lpid;
    short shm_cpid;
    ushort shm_nattch;
    ushort shm_atime;
    ushort shm_dtime;
    ushort shm_ctime;
} shmid_ds;

/* Ghidra macros */
#define SUB161(val, shift) (((val) >> ((shift) * 8)) & 0xFF)
#define LOCK()
#define UNLOCK()

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <stdbool.h>

/* Global variable declarations */
int signal_received;
int signal_number;
pthread_mutex_t counter_mutex;
int shared_counter;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
char ready;
char data;
int atomic_counter;
char DAT_00104069[] = "TestName";

/* Forward declarations */
void signal_handler(undefined4 param_1);
undefined4 param_pthread_create(undefined4 param_1);
int param_pthread_join(void);
undefined8 param_mutex_lock(uint param_1,int param_2);
undefined8 param_condition_variable(void);
undefined8 param_atomic_ops(uint param_1,undefined4 param_2);
undefined8 param_thread_local_storage(uint param_1);
char DAT_001043af[] = "Testing Standard Library Functions";
char DAT_001040b7[] = "strlen: %lu\n";
char DAT_001040d2[] = "strcmp: %d\n";
char DAT_001040ed[] = "call_strlen: %lu\n";
char DAT_00104109[] = "call_memcpy: %lu\n";
char DAT_00104125[] = "call_memcmp: %lu\n";
char DAT_00104141[] = "call_printf: %lu\n";
char DAT_0010415d[] = "call_scanf: %lu\n";
char DAT_0010417a[] = "call_fopen_fclose: %lu\n";
char DAT_00104196[] = "call_fread_fwrite: %lu\n";
char DAT_001041b2[] = "call_malloc_free: %lu\n";
char DAT_001041ce[] = "call_memset: %lu\n";
char DAT_001041e9[] = "call_strchr_strstr: %lu\n";
char DAT_001043d3[] = "Testing System Calls";
char DAT_00104238[] = "call_linux_syscall: %lu\n";
char DAT_00104254[] = "call_win32_api: %lu\n";
char DAT_00104270[] = "call_fork_exec: %lu\n";
char DAT_0010428c[] = "call_pipe_communication: %lu\n";
char DAT_001042a8[] = "call_socket_create: %lu\n";
char DAT_001042c4[] = "call_shmget_shmat: %lu\n";
char DAT_001042e0[] = "call_signal_handling: %lu\n";
char DAT_001043ee[] = "Testing Thread Concurrency";
char DAT_00104306[] = "call_pthread_create: %lu\n";
char DAT_00104322[] = "call_pthread_join: %lu\n";
char DAT_0010433f[] = "call_mutex_lock: %lu\n";
char DAT_0010435b[] = "call_condition_variable: %lu\n";
char DAT_00104377[] = "call_atomic_ops: %lu\n";
char DAT_00104393[] = "call_thread_local_storage: %lu\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_clang_Os_no_g
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




/* Function: param_strcpy @ 001024ac */

void param_strcpy(char *param_1,char *param_2)

{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}



/* Function: call_strcpy @ 001024be */

void call_strcpy(void)

{
 char local_28 [40];
 
 strncpy(local_28,"HelloLib",9);
 strlen(local_28);
 return;
}



/* Function: param_strcmp @ 001024e0 */

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



/* Function: call_strcmp @ 001024fb */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: call_strlen @ 00102503 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00102509 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00102516 */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 0010251c */

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



/* Function: call_memcmp @ 00102537 */

undefined8 call_memcmp(void)

{
 return 0xffffffff;
}



/* Function: param_printf @ 0010253d */

void param_printf(ulong param_1,undefined8 param_2)

{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,(char*)param_2);
 return;
}



/* Function: call_printf @ 00102550 */

void call_printf(void)

{
 printf("Value: %d, Name: %s\n",0x2a,(char*)DAT_00104069);
 return;
}



/* Function: param_scanf @ 0010256a */

int param_scanf(char *param_1)

{
 int iVar1;
 int iVar2;
 undefined8 in_RAX;
 undefined8 local_18;
 
 local_18 = in_RAX;
 iVar1 = sscanf(param_1,"%d,%d",(int*)&local_18 + 4,&local_18);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_18 + (int)(local_18 >> 32);
 }
 return iVar2;
}



/* Function: call_scanf @ 001025a2 */

int call_scanf(void)

{
 int iVar1;
 int iVar2;
 undefined8 in_RAX;
 undefined8 local_18;
 
 local_18 = in_RAX;
 iVar1 = sscanf("123,456","%d,%d",(int*)&local_18 + 4,&local_18);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_18 + (int)(local_18 >> 32);
 }
 return iVar2;
}



/* Function: param_fopen_fclose @ 001025e1 */

int param_fopen_fclose(const char *param_1)

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



/* Function: call_fopen_fclose @ 0010261a */

uint call_fopen_fclose(void)

{
 int iVar1;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_fread_fwrite @ 0010262f */

undefined8 param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined8 uVar2;
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
 uVar2 = 0x2a;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: call_fread_fwrite @ 00102706 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00102712 */

int param_malloc_free(long param_1)

{
 int *__ptr;
 int iVar1;
 long lVar2;
 int unaff_EBP;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 lVar2 = 0;
 do {
 __ptr[lVar2] = iVar1;
 lVar2 = lVar2 + 1;
 iVar1 = iVar1 + 10;
 } while (param_1 != lVar2);
 unaff_EBP = *__ptr;
 }
 iVar1 = unaff_EBP + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 00102761 */

void call_malloc_free(void)

{
 param_malloc_free(10);
 return;
}



/* Function: param_memset @ 0010276b */

int param_memset(void *param_1,size_t param_2)

{
 size_t sVar1;
 int iVar2;
 
 iVar2 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 sVar1 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*(byte *)((long)param_1 + sVar1);
 sVar1 = sVar1 + 1;
 } while (param_2 != sVar1);
 }
 return iVar2;
}



/* Function: call_memset @ 001027a0 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 001027a3 */

int param_strchr_strstr(char *param_1,int param_2,char *param_3)

{
 char *pcVar1;
 char *pcVar2;
 
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}



/* Function: call_strchr_strstr @ 001027dc */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 001027e2 */

void test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 ulong uVar4;
 int local_3c;
 int local_38 [2];
 undefined1 local_30;
 
 puts(DAT_001043af);
 local_38[0] = 0x6c6c6548;
 local_38[1] = 0x62694c6f;
 local_30 = 0;
 sVar3 = strlen((char *)local_38);
 printf(DAT_001040b7,sVar3 & 0xffffffff);
 printf(DAT_001040d2,0);
 printf(DAT_001040ed,0xc);
 printf(DAT_00104109,0x5a);
 uVar1 = call_memcmp();
 printf(DAT_00104125,(ulong)uVar1);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,(char*)DAT_00104069);
 printf(DAT_00104141,(ulong)uVar1);
 iVar2 = sscanf("123,456","%d,%d",local_38,&local_3c);
 uVar4 = 0xffffffff;
 if (iVar2 == 2) {
 uVar4 = (ulong)(uint)(local_3c + local_38[0]);
 }
 printf(DAT_0010415d,uVar4);
 iVar2 = param_fopen_fclose("/etc/passwd");
 printf(DAT_0010417a,(ulong)(iVar2 >> 0x1f | 0x2a));
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00104196,(ulong)uVar1);
 uVar1 = param_malloc_free(10);
 printf(DAT_001041b2,(ulong)uVar1);
 printf(DAT_001041ce,0);
 printf(DAT_001041e9,0xf);
 return;
}



/* Function: param_linux_syscall @ 0010295b */

ulong param_linux_syscall(const char *param_1)

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



/* Function: call_linux_syscall @ 0010299a */

uint call_linux_syscall(void)

{
 int iVar1;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}



/* Function: param_win32_api @ 001029af */

undefined4 param_win32_api(char *param_1)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat sStack_98;
 
 iVar1 = stat(param_1,&sStack_98);
 uVar3 = 0xfffffffe;
 if (0 < sStack_98.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: call_win32_api @ 001029e7 */

undefined4 call_win32_api(void)

{
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 struct stat sStack_98;
 
 iVar1 = stat("/etc/passwd",&sStack_98);
 uVar3 = 0xfffffffe;
 if (0 < sStack_98.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: param_fork_exec @ 00102a26 */

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



/* Function: call_fork_exec @ 00102a90 */

uint call_fork_exec(void)

{
 int iVar1;
 
 iVar1 = param_fork_exec("/bin/true",0);
 return -(uint)(iVar1 != 0) | 0x2a;
}



/* Function: param_pipe_communication @ 00102aa8 */

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
 wait((int *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}



/* Function: param_socket_create @ 00102b51 */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 undefined4 local_24;
 struct sockaddr local_20;
 
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



/* Function: param_shmget_shmat @ 00102c0b */

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
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}



/* Function: call_shmget_shmat @ 00102ccc */

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



/* Function: param_signal_handling @ 00102ce3 */

undefined8 param_signal_handling(void)

{
 bool bVar1;
 __sighandler_t p_Var2;
 undefined8 uVar3;
 uint uVar4;
 
 p_Var2 = signal(10,(void (*)(int))signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,(void (*)(int))signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 uVar3 = 0xfffffffe;
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
 uVar3 = 0xfffffffd;
 }
 else {
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
 signal(10,(void (*)(int))0x0);
 signal(0xe,(void (*)(int))0x0);
 uVar3 = 0x2a;
 }
 }
 }
 }
 }
 return uVar3;
}



/* Function: signal_handler @ 00102e06 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: test_system_calls @ 00102e1c */

void test_system_calls(void)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 struct stat sStack_a8;
 
 puts(DAT_001043d3);
 iVar1 = param_linux_syscall("/etc/passwd");
 printf(DAT_00104238,(ulong)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&sStack_a8);
 uVar2 = 0xfffffffe;
 if (0 < sStack_a8.st_size) {
 uVar2 = 0x2a;
 }
 uVar3 = 0xffffffff;
 if (iVar1 < 0) {
 uVar2 = uVar3;
 }
 printf(DAT_00104254,(ulong)uVar2);
 iVar1 = param_fork_exec("/bin/true",0);
 printf(DAT_00104270,(ulong)(-(uint)(iVar1 != 0) | 0x2a));
 uVar2 = param_pipe_communication();
 printf(DAT_0010428c,(ulong)uVar2);
 uVar2 = param_socket_create();
 printf(DAT_001042a8,(ulong)uVar2);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(DAT_001042c4,(ulong)uVar3);
 uVar2 = param_signal_handling();
 printf(DAT_001042e0,(ulong)uVar2);
 return;
}



/* Function: thread_compute @ 00102f16 */

void *thread_compute(void *param_1)

{
 int iVar1;
 int *piVar2;
 int *data = (int *)param_1;
 
 iVar1 = *data;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}



/* Function: param_pthread_create @ 00102f2a */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 pthread_t local_20;
 undefined4 local_14;
 undefined4 *local_10;
 
 local_14 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_14);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_20,&local_10);
 uVar2 = *local_10;
 free(local_10);
 }
 return uVar2;
}



/* Function: call_pthread_create @ 00102f76 */

void call_pthread_create(void)

{
 param_pthread_create(7);
 return;
}



/* Function: thread_sum @ 00102f80 */

void *thread_sum(void *param_1)

{
 uint uVar1;
 uint uVar2;
 uint *data = (uint *)param_1;
 
 data[2] = 0;
 uVar1 = *data;
 uVar2 = data[1];
 if ((int)uVar1 <= (int)uVar2) {
 data[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((ulong)(uVar2 - uVar1) * (ulong)(uVar2 + ~uVar1) >> 1);
 }
 return (void *)0;
}



/* Function: param_pthread_join @ 00102fb4 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined8 *__arg;
 int *piVar3;
 long lVar4;
 pthread_t local_68 [4];
 undefined8 local_48;
 int aiStack_40 [10];
 
 __arg = &local_48;
 aiStack_40[6] = 0;
 local_48 = 0xa00000001;
 aiStack_40[0] = 0;
 aiStack_40[1] = 0xb;
 aiStack_40[2] = 0x14;
 aiStack_40[3] = 0;
 aiStack_40[4] = 0x15;
 aiStack_40[5] = 0x1e;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_68 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (undefined8 *)((long)__arg + 0xc);
 lVar4 = lVar4 + 8;
 } while (lVar4 != 0x18);
 piVar3 = aiStack_40;
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_68[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}



/* Function: thread_increment @ 00103071 */

void *thread_increment(void *param_1)

{
 int iVar1;
 int *data = (int *)param_1;
 
 iVar1 = *data;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0;
}



/* Function: param_mutex_lock @ 001030ae */

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



/* Function: call_mutex_lock @ 00103188 */

void call_mutex_lock(void)

{
 param_mutex_lock(4,1000);
 return;
}



/* Function: consumer_thread @ 00103197 */

void *consumer_thread(void *param_1)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 pthread_mutex_lock(&cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return (void *)puVar1;
}



/* Function: producer_thread @ 00103203 */

void *producer_thread(void *param_1)

{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}



/* Function: param_condition_variable @ 00103243 */

undefined8 param_condition_variable(void)

{
 int iVar1;
 undefined8 uVar2;
 pthread_t local_20;
 pthread_t local_18;
 uint *local_10;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,(void **)&local_10);
 pthread_join(local_18,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: thread_atomic_increment @ 001032d3 */

void *thread_atomic_increment(void *param_1)

{
 int iVar1;
 int iVar2;
 int *data = (int *)param_1;
 
 if (0 < *data) {
 iVar2 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar1 = iVar2 + 1000;
 if (iVar2 != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (iVar2 != *data);
 }
 return (void *)0;
}



/* Function: thread_atomic_load_store @ 001032fb */

void *thread_atomic_load_store(void *param_1)

{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return (void *)0;
}



/* Function: param_atomic_ops @ 0010330d */

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



/* Function: call_atomic_ops @ 00103404 */

void call_atomic_ops(void)

{
 param_atomic_ops(4,500);
 return;
}



/* Function: thread_tls_test @ 00103413 */

void *thread_tls_test(void *param_1)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 char *str = (char *)param_1;
 
 lVar2 = in_FS_OFFSET[-6];
 iVar1 = (int)lVar2 + 0x32;
 *(int *)(in_FS_OFFSET + -6) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),str,0x1f);
 piVar3 = malloc(8);
 *piVar3 = (int)lVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}



/* Function: param_thread_local_storage @ 0010345c */

undefined8 param_thread_local_storage(uint param_1)

{
 int iVar1;
 pthread_t *__ptr;
 char **__ptr_00;
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
 if (__ptr_00 == (char **)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 uVar4 = (ulong)param_1;
 uVar3 = 0;
 do {
 __s = malloc(0x10);
 __ptr_00[uVar3] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar3 & 0xffffffff);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 if (0 < (int)param_1) {
 uVar3 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar3]);
 if (iVar1 != 0) {
 uVar4 = 0;
 do {
 free(__ptr_00[uVar4]);
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
 free(__ptr_00[uVar3]);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 goto LAB_00103572;
 }
 }
 iVar1 = 0;
 iVar5 = 0;
LAB_00103572:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (param_1 * 0x96 == iVar5 && param_1 * 100 == iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}



/* Function: call_thread_local_storage @ 001035f0 */

void call_thread_local_storage(void)

{
 param_thread_local_storage(4);
 return;
}



/* Function: test_thread_concurrency @ 001035fa */

void test_thread_concurrency(void)

{
 uint uVar1;
 ulong uVar2;
 undefined8 uVar3;
 
 puts(DAT_001043ee);
 uVar1 = param_pthread_create(7);
 printf(DAT_00104306,(ulong)uVar1);
 uVar1 = param_pthread_join();
 printf(DAT_00104322,(ulong)uVar1);
 uVar2 = param_mutex_lock(4,1000);
 printf(DAT_0010433f,(ulong)uVar2);
 uVar3 = param_condition_variable();
 printf(DAT_0010435b,uVar3);
 uVar3 = param_atomic_ops(4,500);
 printf(DAT_00104377,uVar3);
 uVar3 = param_thread_local_storage(4);
 printf(DAT_00104393,uVar3);
 return;
}



/* Function: main @ 001036a4 */

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 64 */
