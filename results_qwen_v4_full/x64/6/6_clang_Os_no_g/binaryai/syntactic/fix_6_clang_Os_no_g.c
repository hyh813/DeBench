/* Auto-injected type definitions by preprocessor */
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <pthread.h>
#include <signal.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <sys/select.h>

// Global variable declarations
int completed_0 = 0;
void *__dso_handle = 0;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
char ready = 0;
char data = 0;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
int atomic_counter = 0;

// Type definitions
typedef void (*__sighandler_t)(int);
typedef int __pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;
typedef unsigned int socklen_t;

typedef void *(*__start_routine)(void *);

// Pthread type definitions
typedef unsigned long pthread_t;
typedef struct {
    int __detachstate;
    int __schedpolicy;
    int __schedparam;
    int __inheritsched;
    int __scope;
    int __stacksize;
    void *__stackaddr;
} pthread_attr_t;

typedef struct {
    int __lock;
    unsigned int __count;
    int __owner;
    int __kind;
    unsigned int __nusers;
    int __spins;
    short __elision;
    short __listkind;
    void *__reserved[4];
} pthread_mutex_t;

typedef struct {
    int __lock;
    unsigned int __futex;
    unsigned long long __total_seq;
    unsigned long long __wakeup_seq;
    unsigned long long __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
} pthread_cond_t;

#define PTHREAD_MUTEX_INITIALIZER {0, 0, 0, 0, 0, 0, 0, 0, {0, 0, 0, 0}}
#define PTHREAD_COND_INITIALIZER {0, 0, 0, 0, 0, 0, 0, 0}

// Struct definitions removed - already defined in system headers

// Forward declarations
void signal_handler(int param_1);
void LOCK(void);
void UNLOCK(void);
int __gmon_start__(void);
void __cxa_finalize(void *);
int __isoc99_sscanf(const char *, const char *, ...);
int snprintf(char *, size_t, const char *, ...);
int fileno(FILE *);
int alarm(unsigned int);
int usleep(__useconds_t);
int raise(int);
__sighandler_t signal(int, __sighandler_t);
int socket(int, int, int);
int setsockopt(int, int, int, const void *, socklen_t);
int bind(int, const struct sockaddr *, socklen_t);
int listen(int, int);
int close(int);
ssize_t read(int, void *, size_t);
ssize_t write(int, const void *, size_t);
int pipe(int[2]);
__pid_t fork(void);
int execl(const char *, const char *, ...);
__pid_t waitpid(__pid_t, int *, int);
__pid_t wait(int *);
int open(const char *, int, ...);
key_t ftok(const char *, int);
int shmget(key_t, size_t, int);
void *shmat(int, const void *, int);
int shmdt(const void *);
int shmctl(int, int, struct shmid_ds *);
int stat(const char *, struct stat *);
long syscall(long, ...);
unsigned int sleep(unsigned int);
int pthread_mutex_lock(pthread_mutex_t *);
int pthread_mutex_unlock(pthread_mutex_t *);
int pthread_cond_wait(pthread_cond_t *, pthread_mutex_t *);
int pthread_cond_signal(pthread_cond_t *);
int pthread_create(pthread_t *, const pthread_attr_t *, __start_routine, void *);
int pthread_join(pthread_t, void **);
int pthread_cancel(pthread_t);
int unlink(const char *);
// Standard library functions
size_t strlen(const char *);
int strcmp(const char *, const char *);
void *memcpy(void *, const void *, size_t);
int memcmp(const void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strchr(const char *, int);
char *strstr(const char *, const char *);
char *strncpy(char *, const char *, size_t);
int printf(const char *, ...);
FILE *fopen(const char *, const char *);
int fclose(FILE *);
size_t fread(void *, size_t, size_t, FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
void *malloc(size_t);
void free(void *);
void rewind(FILE *);
int *errno_location(void);

// LOCK/UNLOCK implementations
void LOCK(void) { return; }
void UNLOCK(void) { return; }
int __libc_start_main(void *main_func, int argc, void *ubp_av, void *init, void *fini, void *rtld_fini, void *stack_end);
int main(void);

// Data definitions
char DAT_00104069[] = "TestName";
char s_Bench_Test_Data_00104010[] = "Bench Test Data";
char DAT_001043af[] = "Testing standard library functions...";
char DAT_001040b7[] = "strlen result: %lu\n";
char DAT_001040d2[] = "call_strcmp result: %lu\n";
char DAT_001040ed[] = "call_strlen result: %lu\n";
char DAT_00104109[] = "call_memcpy result: %lu\n";
char DAT_00104125[] = "call_memcmp result: %lu\n";
char DAT_00104141[] = "call_printf result: %lu\n";
char DAT_0010415d[] = "call_scanf result: %lu\n";
char DAT_0010417a[] = "call_fopen_fclose result: %lu\n";
char DAT_00104196[] = "call_fread_fwrite result: %lu\n";
char DAT_001041b2[] = "call_malloc_free result: %lu\n";
char DAT_001041ce[] = "call_memset result: %lu\n";
char DAT_001041e9[] = "call_strchr_strstr result: %lu\n";
char DAT_001043d3[] = "Testing system calls...";
char DAT_00104238[] = "call_linux_syscall result: %lu\n";
char DAT_00104254[] = "call_win32_api result: %lu\n";
char DAT_00104270[] = "call_fork_exec result: %lu\n";
char DAT_0010428c[] = "call_pipe_communication result: %lu\n";
char DAT_001042a8[] = "call_socket_create result: %lu\n";
char DAT_001042c4[] = "call_shmget_shmat result: %lu\n";
char DAT_001042e0[] = "call_signal_handling result: %lu\n";
char DAT_001043ee[] = "Testing thread concurrency...";
char DAT_00104306[] = "call_pthread_create result: %lu\n";
char DAT_00104322[] = "call_pthread_join result: %lu\n";
char DAT_0010433f[] = "call_mutex_lock result: %lu\n";
char DAT_0010435b[] = "call_condition_variable result: %lu\n";
char DAT_00104377[] = "call_atomic_ops result: %lu\n";
char DAT_00104393[] = "call_thread_local_storage result: %lu\n";

// Decompiled by BinaryAI
// SHA256: 7c223dd259ac60a0feed5d334b00dc98db784800f44a1f657364585f7ddbca4d

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

// Function: <EXTERNAL>::raise @ 0x102030
// raise is a system function, skip wrapper

// Function: <EXTERNAL>::free @ 0x102040
// free is a system function, skip wrapper

// Function: <EXTERNAL>::__errno_location @ 0x102050
// __errno_location is a system function, skip wrapper

// Function: <EXTERNAL>::unlink @ 0x102060
// unlink is a system function, skip wrapper

// Function: <EXTERNAL>::strncpy @ 0x102070
// strncpy is a system function, skip wrapper

// Function: <EXTERNAL>::_exit @ 0x102080
// _exit is a system function, skip wrapper

// Function: <EXTERNAL>::strcpy @ 0x102090
// strcpy is a system function, skip wrapper

// Function: <EXTERNAL>::puts @ 0x1020a0
// puts is a system function, skip wrapper

// Function: <EXTERNAL>::fread @ 0x1020b0
// fread is a system function, skip wrapper



// Function: _start @ 0x1023c0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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

// Function: param_strcpy @ 0x1024ac
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x1024be
void call_strcpy(void)
{
 unsigned long long local_28;
 char local_20;
 local_28 = 0x62694c6f6c6c6548;
 local_20 = 0;
 strlen((char *)&local_28);
 return;
}

// Function: param_strcmp @ 0x1024e0
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

// Function: call_strcmp @ 0x1024fb
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x1024fe
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x102503
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102509
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102516
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x10251c
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

// Function: call_memcmp @ 0x102537
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x10253d
void param_printf(unsigned long param_1,unsigned long long param_2)
{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}

// Function: call_printf @ 0x102550
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 return;
}

// Function: param_scanf @ 0x10256a
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long local_18;
 local_18 = 0;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",(long)&local_18 + 4,&local_18);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_18 + local_18._4_4_;
 }
 return iVar2;
}

// Function: call_scanf @ 0x1025a2
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_18;
 local_18 = 0;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",(long)&local_18 + 4,&local_18);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_18 + local_18._4_4_;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x1025e1
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

// Function: call_fopen_fclose @ 0x10261a
uint call_fopen_fclose(void)
{
 int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x10262f
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
 uVar2 = 0xfffffffd;
 {
  int match = 1;
  int i;
  for (i = 0; i < 16; i++) {
   auVar3[i] = auVar3[i] & auVar4[i];
   if (auVar3[i] != -1) match = 0;
  }
  if (match) {
   uVar2 = 0x2a;
  }
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

// Function: call_fread_fwrite @ 0x102706
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x102712
int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 long lVar2;
 int unaff_EBP;
 __ptr = (int *)malloc(param_1 * 4);
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

// Function: call_malloc_free @ 0x102761
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x10276b
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

// Function: call_memset @ 0x1027a0
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x1027a3
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x1027dc
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x1027e2
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long uVar4;
 int local_3c;
 unsigned long long local_38;
 char local_30;
 puts(&DAT_001043af);
 local_38 = 0x62694c6f6c6c6548;
 local_30 = 0;
 sVar3 = strlen((char *)&local_38);
 printf(&DAT_001040b7,sVar3 & 0xffffffff);
 printf(&DAT_001040d2,0);
 printf(&DAT_001040ed,0xc);
 printf(&DAT_00104109,0x5a);
 uVar1 = call_memcmp();
 printf(&DAT_00104125,(unsigned long)uVar1);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 printf(&DAT_00104141,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_38,&local_3c);
 uVar4 = 0xffffffff;
 if (iVar2 == 2) {
 uVar4 = (unsigned long)(uint)(local_3c + (int)local_38);
 }
 printf(&DAT_0010415d,uVar4);
 iVar2 = param_fopen_fclose("/etc/passwd");
 printf(&DAT_0010417a,(unsigned long)(iVar2 >> 0x1f | 0x2a));
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104196,(unsigned long)uVar1);
 uVar1 = param_malloc_free(10);
 printf(&DAT_001041b2,(unsigned long)uVar1);
 printf(&DAT_001041ce,0);
 printf(&DAT_001041e9,0xf);
 return;
}

// Function: param_linux_syscall @ 0x10295b
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x10299a
uint call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x1029af
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
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

// Function: call_win32_api @ 0x1029e7
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
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

// Function: param_fork_exec @ 0x102a26
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
 local_14 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
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

// Function: call_fork_exec @ 0x102a90
uint call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return -(uint)(iVar1 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x102aa8
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 int local_30;
 int local_2c;
 char local_28 [32];
 local_30 = 0;
 local_2c = 0;
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

// Function: param_socket_create @ 0x102b51
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_24;
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

// Function: param_shmget_shmat @ 0x102c0b
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
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x102ccc
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

// Function: param_signal_handling @ 0x102ce3
unsigned long long param_signal_handling(void)
{
 int bVar1;
 __sighandler_t p_Var2;
 unsigned long long uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
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

// Function: signal_handler @ 0x102e06
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x102e1c
void test_system_calls(void)
{
 int iVar1;
 uint uVar2;
 unsigned long uVar3;
 struct stat sStack_a8;
 puts(&DAT_001043d3);
 iVar1 = param_linux_syscall("/etc/passwd");
 printf(&DAT_00104238,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&sStack_a8);
 uVar2 = 0xfffffffe;
 if (0 < sStack_a8.st_size) {
 uVar2 = 0x2a;
 }
 uVar3 = (unsigned long)uVar2;
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 printf(&DAT_00104254,uVar3);
 iVar1 = param_fork_exec("/bin/true",0);
 printf(&DAT_00104270,(unsigned long)(-(uint)(iVar1 != 0) | 0x2a));
 uVar2 = param_pipe_communication();
 printf(&DAT_0010428c,(unsigned long)uVar2);
 uVar2 = param_socket_create();
 printf(&DAT_001042a8,(unsigned long)uVar2);
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 printf(&DAT_001042c4,(unsigned long)uVar2);
 uVar2 = param_signal_handling();
 printf(&DAT_001042e0,(unsigned long)uVar2);
 return;
}

// Function: thread_compute @ 0x102f16
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x102f2a
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 unsigned int local_14;
 unsigned int *local_10;
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

// Function: call_pthread_create @ 0x102f76
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x102f80
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *p = (uint *)param_1;
 p[2] = 0;
 uVar1 = *p;
 uVar2 = p[1];
 if ((int)uVar1 <= (int)uVar2) {
 p[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x102fb4
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 char *__arg;
 int *piVar3;
 long lVar4;
 pthread_t local_68 [4];
 char local_48 [12];
 unsigned int uStack_3c;
 char local_38 [8];
 unsigned long long uStack_30;
 unsigned int local_28;
 __arg = local_48;
 local_28 = 0;
 local_48[0] = 1;
 local_48[1] = 0;
 local_48[2] = 0;
 uStack_3c = 0xb;
 local_38._0_4_ = 0x14;
 uStack_30 = 0x1e00000015;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_68 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = __arg + 0xc;
 lVar4 = lVar4 + 8;
 } while (lVar4 != 0x18);
 piVar3 = (int *)(local_48 + 8);
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

// Function: thread_increment @ 0x103071
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
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

// Function: param_mutex_lock @ 0x1030ae
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

// Function: call_mutex_lock @ 0x103188
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103197
void *consumer_thread(void *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
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
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return (void *)puVar1;
}

// Function: producer_thread @ 0x103203
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x103243
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 unsigned int *local_10;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_10);
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

// Function: thread_atomic_increment @ 0x1032d3
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *(int *)param_1) {
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
 } while (iVar2 != *(int *)param_1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1032fb
void *thread_atomic_load_store(void *param_1)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x10330d
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

// Function: call_atomic_ops @ 0x103404
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103413
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 static long in_FS_OFFSET_storage = 0;
 long *in_FS_OFFSET = &in_FS_OFFSET_storage;
 iVar2 = *(int *)(in_FS_OFFSET + -6);
 iVar1 = iVar2 + 0x32;
 *(int *)(in_FS_OFFSET + -6) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),(char *)param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}

// Function: param_thread_local_storage @ 0x10345c
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
 goto LAB_00103572;
 }
 }
 uVar3 = 0;
 uVar6 = 0;
LAB_00103572:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar6 | param_1 * 100 ^ uVar3) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x1035f0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x1035fa
void test_thread_concurrency(void)
{
 uint uVar1;
 puts(&DAT_001043ee);
 uVar1 = param_pthread_create(7);
 printf(&DAT_00104306,(unsigned long)uVar1);
 uVar1 = param_pthread_join();
 printf(&DAT_00104322,(unsigned long)uVar1);
 uVar1 = param_mutex_lock(4,1000);
 printf(&DAT_0010433f,(unsigned long)uVar1);
 uVar1 = param_condition_variable();
 printf(&DAT_0010435b,(unsigned long)uVar1);
 uVar1 = param_atomic_ops(4,500);
 printf(&DAT_00104377,(unsigned long)uVar1);
 uVar1 = param_thread_local_storage(4);
 printf(&DAT_00104393,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1036a4
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x1036b8
void _fini(void)
{
 return;
}

