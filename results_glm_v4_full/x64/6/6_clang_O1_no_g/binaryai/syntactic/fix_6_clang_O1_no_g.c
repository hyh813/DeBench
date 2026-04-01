/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* int64_t and uint64_t are defined in system headers - do not redefine */
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* intmax_t and uintmax_t are defined in system headers - do not redefine */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/syscall.h>
#include <sys/ipc.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>
#include <stdbool.h>
#include <arpa/inet.h>

/* pthread_attr_t is defined in <pthread.h> - no forward declaration needed */

/* Missing global variables - definitions */
char completed_0 = 0;
char DAT_00104069[] = "TestValue";
char s_Bench_Test_Data_00104010[] = "BinBench Test Data";
char DAT_001043af[] = "=== Standard Library Functions Test ===";
char DAT_001040b7[] = "param_strcpy: %s\n";
char DAT_001040d2[] = "param_strcmp: %d\n";
char DAT_001040ed[] = "param_strlen: %d\n";
char DAT_00104109[] = "param_memcpy: %d\n";
char DAT_00104125[] = "param_memcmp: %d\n";
char DAT_00104141[] = "param_printf: %lu\n";
char DAT_0010415d[] = "param_scanf: %lu\n";
char DAT_0010417a[] = "param_fopen_fclose: %lu\n";
char DAT_00104196[] = "param_fread_fwrite: %lu\n";
char DAT_001041b2[] = "param_malloc_free: %lu\n";
char DAT_001041ce[] = "param_memset: %d\n";
char DAT_001041e9[] = "param_strchr_strstr: %d\n";
char DAT_001043d3[] = "=== System Calls Test ===";
char DAT_00104238[] = "syscall: %lu\n";
char DAT_00104254[] = "stat: %lu\n";
char DAT_00104270[] = "fork/exec: %lu\n";
char DAT_0010428c[] = "pipe: %lu\n";
char DAT_001042a8[] = "socket: %lu\n";
char DAT_001042c4[] = "shm: %lu\n";
char DAT_001042e0[] = "signal: %lu\n";
char DAT_001043ee[] = "=== Thread Concurrency Test ===";
char DAT_00104306[] = "pthread_create/join: ";
char DAT_00104322[] = "%lu\n";
char DAT_0010433f[] = "mutex_lock: %lu\n";
char DAT_0010435b[] = "condition_variable: %lu\n";
char DAT_00104377[] = "atomic_ops: %lu\n";
char DAT_00104393[] = "thread_local_storage: %lu\n";

volatile int signal_received = 0;
volatile int signal_number = 0;
static pthread_mutex_t counter_mutex_static = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t *counter_mutex = &counter_mutex_static;
volatile int shared_counter = 0;
static pthread_mutex_t cond_mutex_static = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t *cond_mutex = &cond_mutex_static;
static pthread_cond_t cond_static = PTHREAD_COND_INITIALIZER;
pthread_cond_t *cond = &cond_static;
volatile int ready = 0;
volatile int data = 0;
volatile int atomic_counter = 0;

/* Type definition for signal handler */
typedef void (*__sighandler_t)(int);

/* Missing function prototypes - only non-standard functions */
int *__errno_location(void);
int main(int argc, char **argv, char **envp);

/* Signal handler implementation */
static void signal_handler(int param_1)
{
    signal_received = 1;
    signal_number = param_1;
    return;
}

/* Helper macros for decompiled code */
#define ZEXT816(x) ((unsigned long long)(unsigned short)(x))
#define SUB161(x, y) ((short)((x) - (y)))
#define SUB1612(x, y) ((short)((x) - (y)))
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned long long)(unsigned int)(lo))

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned int __useconds_t;
typedef void *(*__start_routine)(void *);

/* sockaddr is already defined in <sys/socket.h> */
/* shmid_ds is already defined in <sys/shm.h> */

typedef unsigned char byte;

// Decompiled by BinaryAI
// SHA256: 0f831c69047da639e1e2e200061b3fab227b4339f463f0e620f1b530c4284026



// Function: FUN_00102020 @ 0x102020
static void FUN_00102020(void)
{
 /* Invalid function pointer call - making this a no-op */
 return;
}

/* External function declarations - these are provided by libc headers */

/* Simple lock implementation for atomic operations */
static inline void LOCK(void) {
}

static inline void UNLOCK(void) {
}









// Function: param_strcpy @ 0x1024b0
static void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x1024d0
static void call_strcpy(void)
{
 unsigned long long local_28;
 char local_20;
 local_28 = 0x62694c6f6c6c6548;
 local_20 = 0;
 strlen((char *)&local_28);
 return;
}

// Function: param_strcmp @ 0x102500
static int param_strcmp(char *param_1,char *param_2)
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
static unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x102530
static void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x102540
static unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102550
static unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102560
static unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x102570
static int param_memcmp(void *param_1,void *param_2,size_t param_3)
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
static unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x1025a0
static void param_printf(unsigned long param_1,unsigned long long param_2)
{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}

// Function: call_printf @ 0x1025c0
static void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 int local_8[2];
 iVar1 = sscanf((const char *)param_1,"%d,%d",&local_8[0],&local_8[1]);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_8[0] + local_8[1];
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_8[2];
	iVar1 = sscanf("123,456","%d,%d",&local_8[0],&local_8[1]);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_8[0] + local_8[1];
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
static int param_fopen_fclose(char *param_1)
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
static unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 unsigned long long auVar3 [16];
 unsigned long long auVar4 [16];
 char local_48 [20];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(local_48,1,0x12,__s);
 local_48[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 auVar4[0] = -(local_48[0] == s_Bench_Test_Data_00104010[0]);
 auVar4[1] = -(local_48[1] == s_Bench_Test_Data_00104010[1]);
 auVar4[2] = -(local_48[2] == s_Bench_Test_Data_00104010[2]);
 auVar4[3] = -(local_48[3] == s_Bench_Test_Data_00104010[3]);
 auVar4[4] = -(local_48[4] == s_Bench_Test_Data_00104010[4]);
 auVar4[5] = -(local_48[5] == s_Bench_Test_Data_00104010[5]);
 auVar4[6] = -(local_48[6] == s_Bench_Test_Data_00104010[6]);
 auVar4[7] = -(local_48[7] == s_Bench_Test_Data_00104010[7]);
 auVar4[8] = -(local_48[8] == s_Bench_Test_Data_00104010[8]);
 auVar4[9] = -(local_48[9] == s_Bench_Test_Data_00104010[9]);
 auVar4[10] = -(local_48[10] == s_Bench_Test_Data_00104010[10]);
 auVar4[11] = -(local_48[11] == s_Bench_Test_Data_00104010[11]);
 auVar4[12] = -(local_48[12] == s_Bench_Test_Data_00104010[12]);
 auVar4[13] = -(local_48[13] == s_Bench_Test_Data_00104010[13]);
 auVar4[14] = -(local_48[14] == s_Bench_Test_Data_00104010[14]);
 auVar4[15] = -(local_48[15] == s_Bench_Test_Data_00104010[15]);
 auVar3[0] = -(local_48[0] == 'B');
 auVar3[1] = -(local_48[1] == 'i');
 auVar3[2] = -(local_48[2] == 'n');
 auVar3[3] = -(local_48[3] == 'B');
 auVar3[4] = -(local_48[4] == 'e');
 auVar3[5] = -(local_48[5] == 'n');
 auVar3[6] = -(local_48[6] == 'c');
 auVar3[7] = -(local_48[7] == 'h');
 auVar3[8] = -(local_48[8] == ' ');
 auVar3[9] = -(local_48[9] == 'T');
 auVar3[10] = -(local_48[10] == 'e');
 auVar3[11] = -(local_48[11] == 's');
 auVar3[12] = -(local_48[12] == 't');
 auVar3[13] = -(local_48[13] == ' ');
 auVar3[14] = -(local_48[14] == 'D');
 auVar3[15] = -(local_48[15] == 'a');
 auVar3[0] = auVar3[0] & auVar4[0];
 auVar3[1] = auVar3[1] & auVar4[1];
 uVar2 = 0xfffffffd;
 if (auVar3[0] == (unsigned long long)-1 && auVar3[1] == (unsigned long long)-1) {
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
static void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1027d0
int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 long lVar2;
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
 }
 iVar1 = __ptr[param_1 + -1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102820
int call_malloc_free(void)
{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 __ptr = (int *)malloc(0x28);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 lVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = (int)lVar1;
 lVar1 = lVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar1 != 100);
 iVar3 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 return iVar3;
}

// Function: param_memset @ 0x102870
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

// Function: call_memset @ 0x1028b0
unsigned int call_memset(void)
{
 long lVar1;
 unsigned int local_28 [10];
 lVar1 = 0;
 do {
 local_28[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 return 0;
}

// Function: param_strchr_strstr @ 0x1028f0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102930
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102940
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 int *__ptr;
 long lVar4;
 int *piVar5;
 unsigned long uVar6;
 uint uVar7;
 int local_4c;
 char local_48 [9];
 unsigned long long local_28;
 puts(&DAT_001043af);
 memcpy(local_48, "HelloLib", 8);
 local_48[8] = 0;
 sVar3 = strlen(local_48);
 printf(&DAT_001040b7,sVar3 & 0xffffffff);
 printf(&DAT_001040d2,0);
 printf(&DAT_001040ed,0xc);
 printf(&DAT_00104109,0x5a);
 uVar7 = 0xffffffff;
 printf(&DAT_00104125,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 printf(&DAT_00104141,(unsigned long)uVar1);
 iVar2 = sscanf("123,456","%d,%d",&local_4c, (int*)local_48);
 uVar6 = (unsigned long)(uint)(local_4c + *(int*)local_48);
 if (iVar2 != 2) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_0010415d,uVar6);
 __stream = fopen("/etc/passwd","r");
 uVar1 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar1 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_0010417a,(unsigned long)uVar1);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104196,(unsigned long)uVar1);
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 lVar4 = 0;
 piVar5 = __ptr;
 do {
 *piVar5 = (int)lVar4;
 lVar4 = lVar4 + 10;
 piVar5 = piVar5 + 1;
 } while (lVar4 != 100);
 uVar7 = __ptr[9] + *__ptr;
 free(__ptr);
 }
 lVar4 = 0;
 printf(&DAT_001041b2,(unsigned long)uVar7);
 do {
 *(unsigned int *)(local_48 + lVar4 * 4) = 0xff;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 10);
 local_28 = 0;
 printf(&DAT_001041ce,0);
 printf(&DAT_001041e9,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102b50
static unsigned long param_linux_syscall(unsigned long long param_1)
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

// Function: call_linux_syscall @ 0x102b90
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

// Function: param_win32_api @ 0x102be0
static unsigned int param_win32_api(char *param_1)
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

// Function: call_win32_api @ 0x102c20
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

// Function: param_fork_exec @ 0x102c60
static uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 pid_t _Var1;
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

// Function: call_fork_exec @ 0x102cd0
uint call_fork_exec(void)
{
 pid_t _Var1;
 uint uVar2;
 uint local_4;
 local_4 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_4,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_4 & 0x7f) == 0) {
 uVar2 = local_4 >> 8 & 0xff;
 }
 }
 }
 return -(uint)(uVar2 != 0) | 0x2a;
}

// Function: param_pipe_communication @ 0x102d40
static unsigned long long param_pipe_communication(void)
{
 int iVar1;
 pid_t _Var2;
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

// Function: call_pipe_communication @ 0x102df0
static void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x102e00
static unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_2c;
 struct sockaddr local_28;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_2c = 1;
 iVar1 = setsockopt(__fd,1,2,&local_2c,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_28, 0, sizeof(local_28));
 local_28.sa_family = 2;
 iVar1 = bind(__fd,&local_28,0x10);
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

// Function: call_socket_create @ 0x102ec0
static void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102ed0
static unsigned long param_shmget_shmat(void)
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
 if (__s == (unsigned long long *)-1) {
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

// Function: call_shmget_shmat @ 0x102fa0
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

// Function: param_signal_handling @ 0x102fc0
static unsigned long long param_signal_handling(void)
{
 bool bVar1;
 __sighandler_t p_Var2;
 unsigned long long uVar3;
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

// Function: call_signal_handling @ 0x103110
static void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x103120
void test_system_calls(void)
{
 int iVar1;
 pid_t _Var2;
 unsigned long uVar3;
 int *piVar4;
 uint uVar5;
 unsigned long long uVar6;
 struct stat local_a0;
 puts(&DAT_001043d3);
 uVar3 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar3;
 if (iVar1 < 0) {
 piVar4 = __errno_location();
 iVar1 = -*piVar4;
 }
 else {
 syscall(3,uVar3 & 0xffffffff);
 }
 printf(&DAT_00104238,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00104254,uVar6);
 _Var2 = fork();
 uVar5 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if (_Var2 < 0) {
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0xfffffffd;
 if (((uint)local_a0.st_dev & 0x7f) == 0) {
 uVar5 = (uint)local_a0.st_dev >> 8 & 0xff;
 }
 }
 }
 printf(&DAT_00104270,(unsigned long)(-(uint)(uVar5 != 0) | 0x2a));
 uVar5 = param_pipe_communication();
 printf(&DAT_0010428c,(unsigned long)uVar5);
 uVar5 = param_socket_create();
 printf(&DAT_001042a8,(unsigned long)uVar5);
 iVar1 = param_shmget_shmat();
 uVar5 = 0xffffffff;
 if (0 < iVar1) {
 uVar5 = 0x2a;
 }
 printf(&DAT_001042c4,(unsigned long)uVar5);
 uVar5 = param_signal_handling();
 printf(&DAT_001042e0,(unsigned long)uVar5);
 return;
}

// Function: thread_compute @ 0x1032a0
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1032c0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
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

// Function: call_pthread_create @ 0x103310
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
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

// Function: thread_sum @ 0x103370
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *piVar1 = (uint *)param_1;
 piVar1[2] = 0;
 uVar1 = *piVar1;
 uVar2 = piVar1[1];
 if ((int)uVar1 <= (int)uVar2) {
 piVar1[2] = uVar1 + piVar1[2] + (uVar1 + 1) * (uVar2 - uVar1) +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x1033b0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 char *__arg;
 int *piVar3;
 long lVar4;
 unsigned int local_68 [3];
 unsigned int uStack_5c;
 unsigned int local_58[2];
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 __arg = (char *)local_68;
 local_48 = 0;
 local_68[0] = 1;
 uStack_5c = 11;
 local_58[1] = 0;
 local_58[0] = 20;
 uStack_50 = 0x1e00000015;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = __arg + 12;
 lVar4 = lVar4 + 8;
 } while (lVar4 != 24);
 piVar3 = (int *)(local_68 + 2);
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}

// Function: call_pthread_join @ 0x103490
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 char *__arg;
 int *piVar3;
 long lVar4;
 unsigned int local_68 [3];
 unsigned int uStack_5c;
 unsigned int local_58[2];
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 __arg = (char *)local_68;
 local_48 = 0;
 local_68[0] = 1;
 uStack_5c = 11;
 local_58[1] = 0;
 local_58[0] = 20;
 uStack_50 = 0x1e00000015;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar4 = lVar4 + 8;
 __arg = __arg + 12;
 } while (lVar4 != 24);
 piVar3 = (int *)(local_68 + 2);
 lVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_38[lVar4],(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar1 = iVar1 + *piVar3;
 lVar4 = lVar4 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar4 != 3);
 return iVar1;
}

// Function: thread_increment @ 0x103570
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
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

// Function: param_mutex_lock @ 0x1035b0
unsigned long long param_mutex_lock(uint param_1,unsigned int param_2)
{
 uint uVar1;
 int iVar2;
 void *__ptr;
 unsigned long long uVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned long long local_38;
 local_38 = (unsigned long long)param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 local_38 = ((unsigned long long)param_1 << 32) | (unsigned long long)param_2;
 if (0 < (int)param_1) {
 lVar5 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 if (iVar2 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while ((unsigned long)param_1 * 8 - lVar5 != 0);
 }
 uVar1 = (uint)(local_38 >> 32);
 if (0 < (int)uVar1) {
 uVar4 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar4 * 8),(void **)0x0);
 uVar4 = uVar4 + 1;
 } while (param_1 != uVar4);
 }
 free(__ptr);
 uVar3 = 0xfffffffd;
 if (shared_counter == uVar1 * (int)local_38) {
 uVar3 = 0x2a;
 }
 }
 return uVar3;
}

// Function: call_mutex_lock @ 0x1036a0
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x1036c0
void *consumer_thread(void *param_1)
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

// Function: producer_thread @ 0x103740
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x103780
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

// Function: call_condition_variable @ 0x103810
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x103820
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

// Function: thread_atomic_load_store @ 0x103860
void *thread_atomic_load_store(void *param_1)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x103880
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

// Function: call_atomic_ops @ 0x103990
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x1039b0
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 iVar2 = 50;
 iVar1 = iVar2 + 0x32;
 strncpy((char *)param_1,(char *)param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}

// Function: param_thread_local_storage @ 0x103a00
unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void *__ptr_00;
 unsigned long long uVar2;
 char *__s;
 uint uVar3;
 unsigned long uVar4;
 pthread_t *__newthread;
 unsigned long uVar5;
 uint uVar6;
 int *local_38;
 uVar5 = (unsigned long)param_1;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 __ptr_00 = malloc((long)(int)param_1 << 3);
 uVar2 = 0xffffffff;
 if ((__ptr != (pthread_t *)0x0) && (__ptr_00 != (void *)0x0)) {
 if (0 < (int)param_1) {
 uVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 *(char **)((long)__ptr_00 + uVar4 * 8) = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
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
 }
 if ((int)param_1 < 1) {
 uVar6 = 0;
 uVar3 = 0;
 }
 else {
 uVar4 = 0;
 uVar3 = 0;
 uVar6 = 0;
 do {
 pthread_join(__ptr[uVar4],&local_38);
 uVar6 = uVar6 + *local_38;
 uVar3 = uVar3 + local_38[1];
 free(local_38);
 free(*(void **)((long)__ptr_00 + uVar4 * 8));
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar3 | param_1 * 100 ^ uVar6) == 0) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103b90
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103ba0
void test_thread_concurrency(void)
{
 int iVar1;
 pthread_t *__newthread;
 long lVar2;
 int *piVar3;
 uint uVar4;
 unsigned int local_6c;
 unsigned int local_68 [3];
 unsigned int uStack_5c;
 unsigned int local_58[2];
 unsigned long long uStack_50;
 unsigned int local_48;
 void *local_38 [4];
 puts(&DAT_001043ee);
 local_6c = 7;
 __newthread = (pthread_t *)local_68;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,&local_6c);
 if (iVar1 == 0) {
 pthread_join(local_68[0],local_38);
 free(local_38[0]);
 }
 lVar2 = 0;
 printf(&DAT_00104306);
 local_48 = 0;
 local_68[0] = 1;
 uStack_5c = 11;
 local_58[1] = 0;
 local_58[0] = 20;
 uStack_50 = 0x1e00000015;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar2),(pthread_attr_t *)0x0,thread_sum,
 __newthread);
 if (iVar1 != 0) {
 uVar4 = 0xffffffff;
 goto LAB_00103cd2;
 }
 lVar2 = lVar2 + 8;
 __newthread = (pthread_t *)((long)__newthread + 12);
 } while (lVar2 != 24);
 piVar3 = (int *)(local_68 + 2);
 lVar2 = 0;
 uVar4 = 0;
 do {
 iVar1 = pthread_join((pthread_t)local_38[lVar2],(void **)0x0);
 if (iVar1 != 0) {
 uVar4 = 0xfffffffe;
 break;
 }
 uVar4 = uVar4 + *piVar3;
 lVar2 = lVar2 + 1;
 piVar3 = piVar3 + 3;
 } while (lVar2 != 3);
LAB_00103cd2:
 printf(&DAT_00104322,(unsigned long)uVar4);
 uVar4 = param_mutex_lock(4,1000);
 printf(&DAT_0010433f,(unsigned long)uVar4);
 uVar4 = param_condition_variable();
 printf(&DAT_0010435b,(unsigned long)uVar4);
 uVar4 = param_atomic_ops(4,500);
 printf(&DAT_00104377,(unsigned long)uVar4);
 uVar4 = param_thread_local_storage(4);
 printf(&DAT_00104393,(unsigned long)uVar4);
 return;
}

// Function: main @ 0x103d60
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



