/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned int uint;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t will be defined by system headers */
typedef unsigned long uintptr_t;
typedef long long longlong;
typedef unsigned long long ulonglong;
#ifndef __intptr_t_defined
typedef long intptr_t;
#define __intptr_t_defined
#endif
/* ptrdiff_t will be defined by system headers */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned char bool;
#define true 1
#define false 0

/* Additional type definitions */
typedef int __pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;
typedef void (*__sighandler_t)(int);

/* Struct definitions are now provided by system headers */

/* Function pointer type for pthread */
typedef void *(*__start_routine)(void *);

/* Global variable declarations */
/* Global variable definitions */
int signal_received;
int signal_number;
void *counter_mutex;
int shared_counter;
void *cond_mutex;
void *cond;
int ready;
int data;
int atomic_counter;
char stack0x00000004 = 0;
char stack0x00000008 = 0;
extern int *in_GS_OFFSET;

/* Data labels */
char DAT_00014026[] = "TestString";
char DAT_00014074[] = "Length: %u\n";
char DAT_0001408f[] = "Strcmp result: %d\n";
char DAT_000140aa[] = "Strlen result: %d\n";
char DAT_000140c6[] = "Memcpy result: %d\n";
char DAT_000140e2[] = "Memcmp result: %d\n";
char DAT_000140fe[] = "Printf chars: %d\n";
char DAT_0001411a[] = "Scan sum: %d\n";
char DAT_00014137[] = "File open: 0x%x\n";
char DAT_00014153[] = "File R/W: 0x%x\n";
char DAT_0001416f[] = "Malloc free: 0x%x\n";
char DAT_0001418b[] = "Memset sum: 0x%x\n";
char DAT_000141a6[] = "Strchr/strstr: 0x%x\n";
char DAT_000141f5[] = "Syscall open: 0x%x\n";
char DAT_00014211[] = "Stat result: 0x%x\n";
char DAT_0001422d[] = "Fork/exec: 0x%x\n";
char DAT_00014249[] = "Pipe comm: 0x%x\n";
char DAT_00014265[] = "Socket: 0x%x\n";
char DAT_00014281[] = "SHM: 0x%x\n";
char DAT_0001429d[] = "Signal: 0x%x\n";
char DAT_000142c3[] = "Thread compute: 0x%x\n";
char DAT_000142df[] = "Thread join: 0x%x\n";
char DAT_000142fc[] = "Mutex lock: 0x%x\n";
char DAT_00014318[] = "Cond var: 0x%x\n";
char DAT_00014334[] = "Atomic ops: 0x%x\n";
char DAT_00014350[] = "Thread TLS: 0x%x\n";
char DAT_0001436c[] = "=== Testing Standard Library Functions ===";
char DAT_00014390[] = "=== Testing System Calls ===";
char DAT_000143ab[] = "=== Testing Thread Concurrency ===";
char DAT_000143cc[] = {0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x21};
char DAT_000143d8[] = {0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x57, 0x6f, 0x72, 0x6c, 0x64, 0x21};

/* Function declarations */
void signal_handler(int sig);
void LOCK(void);
void UNLOCK(void);
void *thread_atomic_load_store(void *param);
int main(void);
int __x86_get_pc_thunk_di(void);
int *__errno_location(void);
void __libc_start_main(int (*main)(void), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

/* LOCK/UNLOCK stub implementations */
void LOCK(void) {
}

void UNLOCK(void) {
}

void signal_handler(int sig) {
 signal_received = 1;
 signal_number = sig;
}

/* GCC helper function stub implementations */
void deregister_tm_clones(void) {
}

int __x86_get_pc_thunk_di(void) {
 int pc;
 /* Simple stub - return a dummy value for PC-relative addressing */
 pc = 0;
 return pc;
}

/* Pthread type definitions */
#ifndef _PTHREAD_T_DEFINED
typedef unsigned long pthread_t;
#define _PTHREAD_T_DEFINED
#endif

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <pthread.h>
#include <sys/syscall.h>

// Decompiled by BinaryAI
// SHA256: 546c448a0562adc22e04b7f59aff416ad8423ea5e35161de024e90e496dac9e7

// Function: FUN_000113e0113e0
void FUN_000113e0(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + -0x10))();
 return;
}

// Function: __do_global_dtors_aux @ 0x114c0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 unaff_EDI = __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x5c2f) == '\0') {
 if (*(int *)(unaff_EDI + 0x5b23) != 0) {
 FUN_000113e0(*(unsigned int *)(unaff_EDI + 0x5c2b));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x5c33);
 while (uVar1 < ((unaff_EDI + 0x5a4b) - (unaff_EDI + 0x5a47) >> 2) - 1U) {
 void (**dtor_func)(void);
 *(uint *)(unaff_EDI + 0x5c33) = uVar1 + 1;
 dtor_func = (void (**)(void))(unaff_EDI + 0x5a47 + (uVar1 + 1) * 4);
 (*dtor_func)();
 uVar1 = *(uint *)(unaff_EDI + 0x5c33);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x5c2f) = 1;
 }
 return;
}



// Function: param_strcpy @ 0x11570
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x115b0
void call_strcpy(void)
{
 unsigned int local_24;
 unsigned int local_20;
 char local_1c;
 local_1c = 0;
 local_20 = 0x62694c6f;
 local_24 = 0x6c6c6548;
 strlen((char *)&local_24);
 return;
}

// Function: param_strcmp @ 0x115f0
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

// Function: call_strcmp @ 0x11630
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11640
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11670
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11680
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x116b0
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x116c0
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

// Function: call_memcmp @ 0x11700
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
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

// Function: param_printf @ 0x11770
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x117a0
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 return;
}

// Function: param_scanf @ 0x117d0
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_c;
 int local_8;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_8,&local_c);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_c + local_8;
 }
 return iVar2;
}

// Function: call_scanf @ 0x11820
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x11870
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int iVar1;
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

// Function: call_fopen_fclose @ 0x118c0
uint call_fopen_fclose(void)
{
 FILE *__stream;
 int iVar1;
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

// Function: param_fread_fwrite @ 0x11920
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char local_30 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_30,1,0x12,__s);
 local_30[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(local_30,"BinBench Test Data",0x13);
 uVar2 = 0xfffffffd;
 if (iVar3 == 0) {
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

// Function: call_fread_fwrite @ 0x11a00
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11a30
int param_malloc_free(uint param_1)
{
 int *__ptr;
 uint uVar1;
 int iVar2;
 uint uVar3;
 int unaff_ESI;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 != 0) {
 uVar1 = 0;
 if (2 < param_1 - 1) {
 uVar1 = 0;
 iVar2 = 0x14;
 do {
 __ptr[uVar1] = iVar2 + -0x14;
 __ptr[uVar1 + 1] = iVar2 + -10;
 __ptr[uVar1 + 2] = iVar2;
 __ptr[uVar1 + 3] = iVar2 + 10;
 uVar1 = uVar1 + 4;
 iVar2 = iVar2 + 0x28;
 } while ((param_1 & 0xfffffffc) != uVar1);
 }
 if ((param_1 & 3) != 0) {
 iVar2 = uVar1 * 10;
 uVar3 = 0;
 do {
 __ptr[uVar1 + uVar3] = iVar2;
 uVar3 = uVar3 + 1;
 iVar2 = iVar2 + 10;
 } while ((param_1 & 3) != uVar3);
 }
 unaff_ESI = *__ptr;
 }
 iVar2 = unaff_ESI + __ptr[param_1 - 1];
 free(__ptr);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x11af0
unsigned int call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x11b00
int param_memset(void *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 7) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (uint)*(byte *)((int)param_1 + uVar2 + 7) +
 (uint)*(byte *)((int)param_1 + uVar2 + 6) +
 (uint)*(byte *)((int)param_1 + uVar2 + 5) +
 (uint)*(byte *)((int)param_1 + uVar2 + 4) +
 (uint)*(byte *)((int)param_1 + uVar2 + 3) +
 (uint)*(byte *)((int)param_1 + uVar2 + 2) +
 (uint)*(byte *)((int)param_1 + uVar2 + 1) +
 (uint)*(byte *)((int)param_1 + uVar2) + iVar1;
 uVar2 = uVar2 + 8;
 } while ((param_2 & 0xfffffff8) != uVar2);
 }
 if ((param_2 & 7) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + (uint)*(byte *)((int)param_1 + uVar3 + uVar2);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 7) != uVar3);
 }
 }
 return iVar1;
}

// Function: call_memset @ 0x11bc0
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x11bd0
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,(int)param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x11c30
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11c40
void test_standard_library_functions(void)
{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 unsigned int uVar4;
 int iVar5;
 uint uVar6;
 int local_34;
 int local_30;
 unsigned int local_2c;
 char local_28;
 puts(&DAT_0001436c);
 local_28 = 0;
 local_2c = 0x62694c6f;
 local_30 = 0x6c6c6548;
 sVar1 = strlen((char *)&local_30);
 printf(&DAT_00014074,sVar1);
 printf(&DAT_0001408f,0);
 printf(&DAT_000140aa,0xc);
 printf(&DAT_000140c6,0x5a);
 iVar2 = memcmp(&DAT_000143d8,&DAT_000143cc,0xc);
 iVar3 = memcmp(&DAT_000143d8,&DAT_000143d8,0xc);
 iVar5 = -(uint)(iVar3 != 0);
 if (0 < iVar3) {
 iVar5 = 1;
 }
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 printf(&DAT_000140e2,iVar3 + iVar5);
 iVar2 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00014026);
 printf(&DAT_000140fe,iVar2);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_30,&local_34);
 local_34 = local_34 + local_30;
 uVar6 = 0xffffffff;
 if (iVar2 != 2) {
 local_34 = -1;
 }
 printf(&DAT_0001411a,local_34);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar6 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_00014137,uVar6);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00014153,uVar4);
 printf(&DAT_0001416f,0x5a);
 printf(&DAT_0001418b,0);
 printf(&DAT_000141a6,0xf);
 return;
}

// Function: param_linux_syscall @ 0x11e40
int param_linux_syscall(unsigned int param_1_00,unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11e48;
 uVar3 = 0;
 iVar1 = syscall(5,param_1,0,0x11e48,param_1_00);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,param_1_00);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11e90
uint call_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 unsigned int uVar4;
 uVar4 = 0x11e98;
 uVar3 = 0;
 iVar1 = syscall(5,"/etc/passwd",0,0x11e98,param_1);
 if (iVar1 < 0) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1,uVar3,uVar4,param_1);
 }
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x11ef0
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_5c;
 iVar1 = stat(param_1,&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x11f40
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_5c;
 iVar1 = stat("/etc/passwd",&local_5c);
 uVar3 = 0xfffffffe;
 if (0 < local_5c.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x11f90
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_8;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
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

// Function: call_fork_exec @ 0x12010
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
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x12080
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
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

// Function: call_pipe_communication @ 0x12160
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x12180
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 unsigned int local_20;
 struct sockaddr local_1c;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_1c.sa_data[10] = '\0';
 local_1c.sa_data[11] = '\0';
 local_1c.sa_data[12] = '\0';
 local_1c.sa_data[13] = '\0';
 local_1c.sa_data[6] = '\0';
 local_1c.sa_data[7] = '\0';
 local_1c.sa_data[8] = '\0';
 local_1c.sa_data[9] = '\0';
 local_1c.sa_family = 2;
 local_1c.sa_data[0] = '\0';
 local_1c.sa_data[1] = '\0';
 local_1c.sa_data[2] = '\0';
 local_1c.sa_data[3] = '\0';
 local_1c.sa_data[4] = '\0';
 local_1c.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_1c,0x10);
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

// Function: call_socket_create @ 0x12270
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x12290
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned int *__s;
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
 __s = (unsigned int *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned int *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(char *)(__s + 3) = 0;
 __s[2] = 0x79726f6d;
 __s[1] = 0x654d6465;
 *__s = 0x72616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(void *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x12380
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x123b0
unsigned int param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned int uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffff) {
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
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar3 = 0x2a;
 }
 }
 }
 }
 }
 return uVar3;
}

// Function: FUN_00012515 @ 0x12515
void FUN_00012515(unsigned int param_1,unsigned int param_2)
{
 return;
}

// Function: call_signal_handling @ 0x12540
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x12560
void test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 uint uVar4;
 unsigned int uVar5;
 unsigned int uVar6;
 struct stat local_6c;
 puts(&DAT_00014390);
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
 _Var3 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)&local_6c,0);
 if ((_Var3 < 0) || (((uint)local_6c.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = -(uint)(((uint)local_6c.st_dev & 0xff00) != 0) | 0x2a;
 }
 }
 printf(&DAT_0001422d,uVar4);
 uVar6 = param_pipe_communication();
 printf(&DAT_00014249,uVar6);
 uVar6 = param_socket_create();
 printf(&DAT_00014265,uVar6);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_00014281,uVar5);
 uVar6 = param_signal_handling();
 printf(&DAT_0001429d,uVar6);
 return;
}

// Function: thread_compute @ 0x126f0
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: param_pthread_create @ 0x12720
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = param_1;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x12790
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: thread_sum @ 0x12800
unsigned int thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 longlong lVar3;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 lVar3 = (ulonglong)(uVar2 + ~uVar1) * (ulonglong)(uVar2 - uVar1);
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 ((int)((ulonglong)lVar3 >> 0x20) << 0x1f | (uint)lVar3 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x12840
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 pthread_t local_40;
 pthread_t local_3c;
 pthread_t local_38;
 unsigned int local_34;
 unsigned int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 int local_14;
 local_14 = 0;
 local_20 = 0;
 local_2c = 0;
 local_34 = 1;
 local_30 = 10;
 local_28 = 0xb;
 local_24 = 0x14;
 local_1c = 0x15;
 local_18 = 0x1e;
 iVar1 = pthread_create(&local_40,(pthread_attr_t *)0x0,thread_sum,&local_34);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_3c,(pthread_attr_t *)0x0,thread_sum,&local_28);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_1c);
 if (iVar1 == 0) {
 iVar2 = pthread_join(local_40,(void **)0x0);
 iVar1 = local_2c;
 iVar4 = -2;
 if (iVar2 == 0) {
 iVar3 = pthread_join(local_3c,(void **)0x0);
 iVar2 = local_20;
 if (iVar3 == 0) {
 iVar3 = pthread_join(local_38,(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar2 + iVar1 + local_14;
 }
 }
 }
 }
 }
 }
 return iVar4;
}

// Function: call_pthread_join @ 0x12960
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x12980
unsigned int thread_increment(int *param_1)
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

// Function: param_mutex_lock @ 0x129f0
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 int iVar3;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&param_2);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * param_2) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12ae0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12b10
void *consumer_thread(void *param)
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
 return puVar1;
}

// Function: producer_thread @ 0x12b90
void *producer_thread(void *param)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x12bf0
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_14;
 unsigned int *local_10;
 pthread_t local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_14,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_14,&local_10);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_14);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x12ca0
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_load_store @ 0x12cb0
void *thread_atomic_load_store(void *param)
{
 return 0;
}

// Function: thread_atomic_increment @ 0x12cc0
void *thread_atomic_increment(void *param_1)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uVar3 = stack0x00000008;
 if (0 < (int)uVar3) {
 uVar5 = uVar3 & 3;
 uVar4 = 0;
 if (2 < uVar3 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 uVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 1000;
 LOCK();
 if (uVar4 != uVar1) {
 atomic_counter = uVar1;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3e9;
 LOCK();
 if (uVar4 + 1 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 LOCK();
 iVar2 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3ea;
 LOCK();
 if (uVar4 + 2 != iVar2) {
 atomic_counter = iVar2;
 }
 UNLOCK();
 LOCK();
 uVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 0x3eb;
 LOCK();
 if (uVar4 + 3 != uVar1) {
 atomic_counter = uVar1;
 }
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar3 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 uVar3 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = uVar4 + 1000;
 LOCK();
 if (uVar4 != uVar3) {
 atomic_counter = uVar3;
 }
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return 0;
}

// Function: FUN_00012da5 @ 0x12da5
unsigned int FUN_00012da5(void)
{
 int unaff_retaddr;
 LOCK();
 *(int *)(unaff_retaddr + 0x43a3) = *(int *)(unaff_retaddr + 0x43a3) + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x12dc0
unsigned int param_atomic_ops(int param_1, int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *__newthread;
 pthread_t local_14;
 stack0x00000008 = param_2;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 iVar3 = param_1;
 __newthread = __ptr;
 if (0 < param_1) {
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,
 &stack0x00000008);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + -1;
 __newthread = __newthread + 1;
 } while (iVar3 != 0);
 }
 iVar3 = pthread_create(&local_14,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 pthread_join(local_14,(void **)0x0);
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 pthread_join(__ptr[iVar3],(void **)0x0);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar3) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x12ed0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x12f00
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 strncpy((char *)(*in_GS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_thread_local_storage @ 0x12f60
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void *__ptr_00;
 char *__s;
 int iVar1;
 unsigned int uVar2;
 pthread_t *__newthread;
 uint uVar3;
 int iVar4;
 uint uVar5;
 int *local_14;
 __ptr = (pthread_t *)malloc(param_1 * 4);
 __ptr_00 = malloc(param_1 * 4);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < param_1) {
 iVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((int)__ptr_00 + iVar4 * 4) = __s;
 snprintf(__s,0x10,"Thread-%d",iVar4);
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 if (0 < param_1) {
 iVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((int)__ptr_00 + iVar4 * 4));
 if (iVar1 != 0) {
 iVar1 = -1;
 do {
 free(*(void **)((int)__ptr_00 + iVar1 * 4 + 4));
 iVar1 = iVar1 + 1;
 } while (iVar4 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar4 = iVar4 + 1;
 __newthread = __newthread + 1;
 } while (param_1 != iVar4);
 if (0 < param_1) {
 iVar4 = 0;
 uVar3 = 0;
 uVar5 = 0;
 do {
 pthread_join(__ptr[iVar4],&local_14);
 uVar5 = uVar5 + *local_14;
 uVar3 = uVar3 + local_14[1];
 free(local_14);
 free(*(void **)((int)__ptr_00 + iVar4 * 4));
 iVar4 = iVar4 + 1;
 } while (param_1 != iVar4);
 goto LAB_000130a6;
 }
 }
 }
 uVar5 = 0;
 uVar3 = 0;
LAB_000130a6:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar5) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x13130
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x13160
void test_thread_concurrency(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 puts(&DAT_000143ab);
 local_10 = 7;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 printf(&DAT_000142c3,uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_000142df,uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_000142fc,uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_00014318,uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_00014334,uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00014350,uVar2);
 return;
}

// Function: main @ 0x13280
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



