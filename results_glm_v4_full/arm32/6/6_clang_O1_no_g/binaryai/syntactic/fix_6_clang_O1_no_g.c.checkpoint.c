/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <errno.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long long ulonglong;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long longlong;
// Types size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t are defined in system headers
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions */
typedef uint8_t byte;
typedef unsigned int uint;
typedef int __pid_t;
typedef int key_t;
typedef void (*__sighandler_t)(int);
typedef void *(*__start_routine)(void *);
typedef unsigned int __useconds_t;

/* Forward declarations for struct types */
struct stat;
struct sockaddr;
struct shmid_ds;



/* FILE type */
typedef struct _IO_FILE FILE;

/* Missing global variables */
extern char completed_0;
extern void *__dso_handle;
extern unsigned int signal_received;
extern unsigned int signal_number;
extern int shared_counter;
extern int atomic_counter;
extern int ready;
extern int data;
extern void *counter_mutex;
extern void *cond;
extern void *cond_mutex;
extern pthread_mutex_t g_counter_mutex;
extern pthread_cond_t g_cond;
extern pthread_mutex_t g_cond_mutex;

/* Define missing variables */
unsigned int signal_number = 0;
unsigned int signal_received = 0;
int atomic_counter = 0;
int ready = 0;
int data = 0;
int shared_counter = 0;
unsigned int DAT_00012dec[3] = {0x12345678, 0x9abcdef0, 0x12345678};
unsigned int DAT_00012de0[3] = {0x12345678, 0x9abcdef0, 0x12345678};
unsigned char DAT_00012e0d = 'N';

/* Define missing string constants */
char DAT_00012e5b[] = "str_len result: %lu\n";
char DAT_00012e76[] = "strcmp result: %d\n";
char DAT_00012e91[] = "strlen result: %d\n";
char DAT_00012ead[] = "memcpy result: %d\n";
char DAT_00012ec9[] = "memcmp result: %d\n";
char DAT_00012ee5[] = "printf result: %d\n";
char DAT_00012f01[] = "scanf result: %d\n";
char DAT_00012f1e[] = "open result: %u\n";
char DAT_00012f3a[] = "fread_fwrite result: %u\n";
char DAT_00012f56[] = "malloc_free result: %d\n";
char DAT_00012f72[] = "memset result: %d\n";
char DAT_00012f8d[] = "strchr_strstr result: %d\n";
char DAT_00012fcf[] = "syscall result: %u\n";
char DAT_00012feb[] = "stat result: %u\n";
char DAT_00013007[] = "fork_exec result: %u\n";
char DAT_00013023[] = "pipe result: %u\n";
char DAT_0001303f[] = "socket result: %u\n";
char DAT_0001305b[] = "shmget_shmat result: %u\n";
char DAT_00013077[] = "signal result: %u\n";
char DAT_0001309d[] = "pthread_create result: %u\n";
char DAT_000130b9[] = "pthread_join result: %d\n";
char DAT_000130d6[] = "mutex_lock result: %u\n";
char DAT_000130f2[] = "condition_variable result: %u\n";
char DAT_0001310e[] = "atomic_ops result: %u\n";
char DAT_0001312a[] = "thread_local_storage result: %u\n";
char DAT_00013146[] = "=== Standard Library Tests ===\n";
char DAT_0001316a[] = "=== System Calls Tests ===\n";
char DAT_00013185[] = "=== Thread Concurrency Tests ===\n";

/* Define pthread synchronization variables */
pthread_cond_t g_cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t g_cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t g_counter_mutex = PTHREAD_MUTEX_INITIALIZER;

/* External data references */
extern unsigned int DAT_00012dec[3];
extern unsigned int DAT_00012de0[3];
extern unsigned char DAT_00012e0d;
extern char DAT_00012e5b[];
extern char DAT_00012e76[];
extern char DAT_00012e91[];
extern char DAT_00012ead[];
extern char DAT_00012ec9[];
extern char DAT_00012ee5[];
extern char DAT_00012f01[];
extern char DAT_00012f1e[];
extern char DAT_00012f3a[];
extern char DAT_00012f56[];
extern char DAT_00012f72[];
extern char DAT_00012f8d[];
extern char DAT_00012fcf[];
extern char DAT_00012feb[];
extern char DAT_00013007[];
extern char DAT_00013023[];
extern char DAT_0001303f[];
extern char DAT_0001305b[];
extern char DAT_00013077[];
extern char DAT_0001309d[];
extern char DAT_000130b9[];
extern char DAT_000130d6[];
extern char DAT_000130f2[];
extern char DAT_0001310e[];
extern char DAT_0001312a[];
extern char DAT_00013146[];
extern char DAT_0001316a[];
extern char DAT_00013185[];

/* Helper macro */
#define SCARRY4(x, y) ((x) + (y) < (x))

/* ARM TLS function declaration */
extern unsigned long long __aeabi_read_tp(void);

/* Atomic builtin function declarations */
static inline int __atomic_fetch_add_4(int *ptr, int val, int memorder) {
  return __atomic_fetch_add(ptr, val, memorder);
}

static inline int __atomic_load_4(int *ptr, int memorder) {
  int val;
  __atomic_load(ptr, &val, memorder);
  return val;
}

static inline void __atomic_store_4(int *ptr, int val, int memorder) {
  __atomic_store(ptr, &val, memorder);
}

static inline bool __atomic_compare_exchange_4(int *ptr, int *expected, int desired, int success_memorder, int failure_memorder) {
  return __atomic_compare_exchange_n(ptr, expected, desired, 0, success_memorder, failure_memorder);
}

/* Forward declarations for internal functions */
unsigned int main(void);
void __gmon_start__(void);
int call_weak_fn(void);
void signal_handler(unsigned int param_1);

// Decompiled by BinaryAI
// SHA256: 53936180ac93290a72458afa717537b4336e771f56358d7e44dbf537ce4ede69



// Function: param_strcpy @ 0x110d8
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x110ec
void call_strcpy(void)
{
 unsigned int local_28;
 unsigned int local_24;
 char local_20;
 local_20 = 0;
 local_24 = 0x62694c6f;
 local_28 = 0x6c6c6548;
 strlen((char *)&local_28);
 return;
}

// Function: param_strcmp @ 0x11128
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x11150
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11158
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11168
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11170
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11188
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11190
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x111b8
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_00012dec,&DAT_00012de0,0xc);
 iVar3 = iVar1;
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar2 = memcmp(&DAT_00012dec,&DAT_00012dec,0xc);
 iVar1 = iVar2;
 if (iVar2 != 0) {
 iVar1 = -1;
 }
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1 + iVar3;
}

// Function: param_printf @ 0x11228
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x1124c
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00012e0d);
 return;
}

// Function: param_scanf @ 0x11278
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: call_scanf @ 0x112bc
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

// Function: param_fopen_fclose @ 0x1130c
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

// Function: call_fopen_fclose @ 0x11350
unsigned int call_fopen_fclose(void)
{
 FILE *__stream;
 int iVar1;
 unsigned int uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 return uVar2;
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x113a8
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char auStack_38 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(auStack_38,1,0x12,__s);
 auStack_38[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(auStack_38,"BinBench Test Data",0x13);
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

// Function: call_fread_fwrite @ 0x1148c
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x114a8
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr != (int *)0x0) {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 iVar3 = param_1;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 iVar3 = iVar3 + -1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0);
 }
 iVar3 = *__ptr;
 iVar1 = __ptr[param_1 + -1];
 free(__ptr);
 return iVar1 + iVar3;
 }
 return -1;
}

// Function: call_malloc_free @ 0x11508
int call_malloc_free(void)
{
 int *__ptr;
 int iVar1;
 int iVar2;
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar1 = 0;
 iVar2 = 0;
 do {
 __ptr[-iVar2] = iVar1;
 iVar1 = iVar1 + 10;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -10);
 iVar1 = *__ptr;
 iVar2 = __ptr[9];
 free(__ptr);
 return iVar2 + iVar1;
 }
 return -1;
}

// Function: param_memset @ 0x11558
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 iVar1 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + (uint)*param_1;
 param_2 = param_2 - 1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x1159c
int call_memset(void)
{
 int iVar1;
 int local_30 [10];
 iVar1 = 0;
 do {
 local_30[-iVar1] = 0xff;
 iVar1 = iVar1 + -1;
 } while (iVar1 != -10);
 memset(local_30,0,0x28);
 return local_30[9] + local_30[0];
}

// Function: param_strchr_strstr @ 0x115e8
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 int iVar2;
 int iVar3;
 pcVar1 = strchr(param_1,param_2);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar3;
}

// Function: call_strchr_strstr @ 0x11628
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11630
void test_standard_library_functions(void)
{
 size_t sVar1;
 int iVar2;
 int iVar3;
 FILE *__stream;
 int *__ptr;
 unsigned int uVar4;
 int iVar5;
 int local_44;
 int local_40 [2];
 char local_38;
 int local_1c;
 puts(&DAT_00013146);
 local_38 = 0;
 local_40[1] = 0x62694c6f;
 local_40[0] = 0x6c6c6548;
 sVar1 = strlen((char *)local_40);
 printf(&DAT_00012e5b,sVar1);
 printf(&DAT_00012e76,0);
 printf(&DAT_00012e91,0xc);
 printf(&DAT_00012ead,0x5a);
 iVar2 = memcmp(&DAT_00012dec,&DAT_00012de0,0xc);
 iVar5 = iVar2;
 if (iVar2 != 0) {
 iVar5 = -1;
 }
 if (0 < iVar2) {
 iVar5 = 1;
 }
 iVar3 = memcmp(&DAT_00012dec,&DAT_00012dec,0xc);
 iVar2 = iVar3;
 if (iVar3 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar3) {
 iVar2 = 1;
 }
 printf(&DAT_00012ec9,iVar2 + iVar5);
 iVar5 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00012e0d);
 printf(&DAT_00012ee5,iVar5);
 iVar5 = __isoc99_sscanf("123,456","%d,%d",local_40,&local_44);
 iVar3 = -1;
 iVar2 = -1;
 if (iVar5 == 2) {
 iVar2 = local_44 + local_40[0];
 }
 printf(&DAT_00012f01,iVar2);
 __stream = fopen("/etc/passwd","r");
 uVar4 = 0xffffffff;
 if (__stream != (FILE *)0x0) {
 iVar5 = fileno(__stream);
 fclose(__stream);
 uVar4 = 0xffffffff;
 if (iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1)) {
 uVar4 = 0x2a;
 }
 }
 printf(&DAT_00012f1e,uVar4);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00012f3a,uVar4);
 __ptr = (int *)malloc(0x28);
 if (__ptr != (int *)0x0) {
 iVar5 = 0;
 iVar2 = 0;
 do {
 __ptr[-iVar2] = iVar5;
 iVar5 = iVar5 + 10;
 iVar2 = iVar2 + -1;
 } while (iVar2 != -10);
 iVar5 = *__ptr;
 iVar3 = __ptr[9];
 free(__ptr);
 iVar3 = iVar3 + iVar5;
 }
 printf(&DAT_00012f56,iVar3);
 iVar5 = 0;
 do {
 local_40[-iVar5] = 0xff;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -10);
 memset(local_40,0,0x28);
 printf(&DAT_00012f72,local_1c + local_40[0]);
 printf(&DAT_00012f8d,0xf);
 return;
}

// Function: param_linux_syscall @ 0x118e8
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = syscall(5,param_1,0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11930
unsigned int call_linux_syscall(void)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 uVar3 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar3 = 0x2a;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x11988
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat(param_1,&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x119c0
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat("/etc/passwd",&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x11a04
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
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

// Function: call_fork_exec @ 0x11a84
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 unsigned int uVar3;
 uint local_c;
 _Var1 = fork();
 uVar3 = 0xffffffff;
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0xfffffffd;
 if ((local_c & 0x7f) == 0) {
 uVar2 = local_c >> 8 & 0xff;
 }
 }
 }
 if (uVar2 == 0) {
 uVar3 = 0x2a;
 }
 return uVar3;
}

// Function: param_pipe_communication @ 0x11b10
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_38 [32];
 int local_18;
 int local_14;
 iVar1 = pipe(&local_18);
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
 close(local_18);
 write(local_14,"HelloPipe",9);
 close(local_14);
 _exit(0);
 }
 close(local_14);
 sVar3 = read(local_18,auStack_38,0x1f);
 auStack_38[sVar3] = 0;
 close(local_18);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: call_pipe_communication @ 0x11bc8
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x11bd8
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 struct sockaddr local_24;
 unsigned int local_14;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_14,4);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_24.sa_data[10] = '\0';
 local_24.sa_data[11] = '\0';
 local_24.sa_data[12] = '\0';
 local_24.sa_data[13] = '\0';
 local_24.sa_data[6] = '\0';
 local_24.sa_data[7] = '\0';
 local_24.sa_data[8] = '\0';
 local_24.sa_data[9] = '\0';
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 local_24.sa_family = 2;
 local_24.sa_data[0] = '\0';
 local_24.sa_data[1] = '\0';
 iVar1 = bind(__fd,&local_24,0x10);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
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

// Function: call_socket_create @ 0x11cb0
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x11cc0
size_t param_shmget_shmat(void)
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
 __s = (char *)shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 memcpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x11d94
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

// Function: param_signal_handling @ 0x11db4
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned int uVar2;
 int iVar3;
 bool bVar4;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 return 0xffffffff;
 }
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar3 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 uVar2 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 uVar2 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: signal_handler @ 0x11f28
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x11f50
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x11f60
void test_system_calls(void)
{
 int iVar1;
 int *piVar2;
 __pid_t _Var3;
 unsigned int uVar4;
 uint uVar5;
 unsigned int uVar6;
 struct stat local_68;
 puts(&DAT_0001316a);
 iVar1 = syscall(5,"/etc/passwd",0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 uVar6 = 0xffffffff;
 uVar4 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar4 = 0x2a;
 }
 printf(&DAT_00012fcf,uVar4);
 iVar1 = stat("/etc/passwd",&local_68);
 uVar4 = 0xfffffffe;
 if (0 < local_68.st_size) {
 uVar4 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar4 = 0xffffffff;
 }
 printf(&DAT_00012feb,uVar4);
 _Var3 = fork();
 uVar5 = 0xffffffff;
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)&local_68,0);
 if (_Var3 < 0) {
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0xfffffffd;
 if (((uint)local_68.st_dev & 0x7f) == 0) {
 uVar5 = (uint)local_68.st_dev >> 8 & 0xff;
 }
 }
 }
 uVar4 = 0xffffffff;
 if (uVar5 == 0) {
 uVar4 = 0x2a;
 }
 printf(&DAT_00013007,uVar4);
 uVar4 = param_pipe_communication();
 printf(&DAT_00013023,uVar4);
 uVar4 = param_socket_create();
 printf(&DAT_0001303f,uVar4);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar6 = 0x2a;
 }
 printf(&DAT_0001305b,uVar6);
 uVar4 = param_signal_handling();
 printf(&DAT_00013077,uVar4);
 return;
}

// Function: thread_compute @ 0x1210c
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1212c
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

// Function: call_pthread_create @ 0x12188
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

// Function: thread_sum @ 0x121e8
void *thread_sum(void *param_1)
{
 long long lVar1;
 uint uVar2;
 uint uVar3;
 uint *args = (uint *)param_1;
 args[2] = 0;
 uVar2 = args[0];
 uVar3 = args[1];
 if ((int)uVar2 <= (int)uVar3) {
 lVar1 = (unsigned long long)(uVar3 - uVar2) * (unsigned long long)(uVar3 + ~uVar2);
 args[2] = (uVar3 - uVar2) * (uVar2 + 1) + args[2] + uVar2 +
 ((uint)((byte)((unsigned long long)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x12240
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned int *__arg;
 int iVar3;
 unsigned int local_48;
 unsigned int local_44;
 int local_40 [4];
 unsigned int local_30;
 unsigned int local_2c;
 pthread_t local_24 [3];
 __arg = &local_48;
 iVar3 = 0;
 memset(&local_48,0,0x24);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_40[2] = 0x14;
 local_40[1] = 0xb;
 local_44 = 10;
 local_48 = 1;
 do {
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (unsigned int *)((int)__arg + 0xc);
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = *(int *)((int)local_40 + iVar1 * -3) + iVar3;
 iVar1 = iVar1 + -4;
 } while (iVar1 != -0xc);
 return iVar3;
}

// Function: call_pthread_join @ 0x12328
int call_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned int *__arg;
 int iVar3;
 unsigned int local_48;
 unsigned int local_44;
 int local_40 [4];
 unsigned int local_30;
 unsigned int local_2c;
 pthread_t local_24 [3];
 __arg = &local_48;
 iVar3 = 0;
 memset(&local_48,0,0x24);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_40[2] = 0x14;
 local_40[1] = 0xb;
 local_44 = 10;
 local_48 = 1;
 do {
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = (unsigned int *)((int)__arg + 0xc);
 iVar3 = iVar3 + 4;
 } while (iVar3 != 0xc);
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = *(int *)((int)local_40 + iVar1 * -3) + iVar3;
 iVar1 = iVar1 + -4;
 } while (iVar1 != -0xc);
 return iVar3;
}

// Function: thread_increment @ 0x12410
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&g_counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&g_counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x12478
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar3 = param_1;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar4 + 1;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 ppVar4 = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 } while (iVar3 != 0);
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == local_24 * param_1) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12568
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12580
void *consumer_thread(void *param)
{
 uint *puVar1;
 uint uVar2;
 (void)param;
 pthread_mutex_lock(&g_cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait(&g_cond,&g_cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = (uint)data;
 pthread_mutex_unlock(&g_cond_mutex);
 if (uVar2 != 0) {
 uVar2 = 0x2a;
 }
 puVar1 = (uint *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x12618
void *producer_thread(void *param)
{
 (void)param;
 sleep(1);
 pthread_mutex_lock(&g_cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&g_cond);
 pthread_mutex_unlock(&g_cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x12680
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 pthread_t local_10;
 pthread_t local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,&local_14);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 pthread_cancel(local_10);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x1273c
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x1274c
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int local_1c;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __atomic_fetch_add_4(&atomic_counter,1,5);
 local_1c = iVar2;
 __atomic_compare_exchange_4(&atomic_counter,&local_1c,iVar2 + 1000,5,5);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x127c0
void *thread_atomic_load_store(void *param)
{
 int iVar1;
 (void)param;
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return 0;
}

// Function: param_atomic_ops @ 0x127f8
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *ppVar3;
 int iVar4;
 pthread_t local_28;
 unsigned int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 __atomic_store_4(&atomic_counter,0,5);
 if (0 < param_1) {
 ppVar3 = __ptr;
 iVar4 = param_1;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar3 = ppVar3 + 1;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 }
 iVar4 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar4 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 param_1 = param_1 + -1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar4 = __atomic_load_4(&atomic_counter,5);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar4) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x1291c
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x12934
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 unsigned long long uVar6;
 iVar3 = 8;
 uVar6 = __aeabi_read_tp();
 iVar1 = (int)uVar6;
 iVar4 = *(int *)(iVar1 + iVar3);
 iVar5 = iVar4 + 0x32;
 *(int *)(iVar1 + iVar3) = iVar5;
 strncpy((char *)(iVar1 + 0xc),(char *)param_1,0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar5;
 return piVar2;
}

// Function: param_thread_local_storage @ 0x1297c
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void **__ptr_00;
 unsigned int uVar1;
 char *__s;
 int iVar2;
 int iVar3;
 pthread_t *ppVar4;
 uint uVar5;
 void **ppvVar6;
 uint uVar7;
 int iVar8;
 int *local_28;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 __ptr_00 = (void **)malloc(param_1 << 2);
 uVar1 = 0xffffffff;
 if (__ptr != (pthread_t *)0x0 && __ptr_00 != (void **)0x0) {
 if (0 < param_1) {
 iVar3 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[iVar3] = __s;
 snprintf(__s,0x10,"Thread-%d",iVar3);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 if (0 < param_1) {
 iVar3 = 0;
 ppVar4 = __ptr;
 do {
 iVar2 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[iVar3]);
 if (iVar2 != 0) {
 iVar2 = 0;
 do {
 free(__ptr_00[iVar2]);
 iVar2 = iVar2 + 1;
 } while (iVar3 + 1 != iVar2);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar4 + 1;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 if (param_1 < 1) {
 uVar7 = 0;
 uVar5 = 0;
 }
 else {
 uVar5 = 0;
 uVar7 = 0;
 ppVar4 = __ptr;
 ppvVar6 = __ptr_00;
 iVar3 = param_1;
 do {
 pthread_join(*ppVar4,&local_28);
 iVar8 = *local_28;
 iVar2 = local_28[1];
 free(local_28);
 free(*ppvVar6);
 uVar5 = iVar2 + uVar5;
 uVar7 = iVar8 + uVar7;
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 ppvVar6 = ppvVar6 + 1;
 } while (iVar3 != 0);
 }
 free(__ptr_00);
 free(__ptr);
 uVar1 = 0xfffffffd;
 if ((uVar7 ^ param_1 * 100 | uVar5 ^ param_1 * 0x96) == 0) {
 uVar1 = 0x2a;
 }
 }
 return uVar1;
}

// Function: call_thread_local_storage @ 0x12b18
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x12b2c
void test_thread_concurrency(void)
{
 int iVar1;
 int iVar2;
 pthread_t *__newthread;
 unsigned int uVar3;
 int iVar4;
 unsigned int *local_4c;
 pthread_t local_48;
 unsigned int local_44;
 int local_40 [4];
 unsigned int local_30;
 unsigned int local_2c;
 pthread_t local_24 [3];
 puts(&DAT_00013185);
 local_24[0] = 7;
 __newthread = &local_48;
 iVar4 = 0;
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_compute,local_24);
 uVar3 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_48,&local_4c);
 uVar3 = *local_4c;
 free(local_4c);
 }
 printf(&DAT_0001309d,uVar3);
 memset(__newthread,0,0x24);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_40[2] = 0x14;
 local_40[1] = 0xb;
 local_44 = 10;
 local_48 = 1;
 do {
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar4),(pthread_attr_t *)0x0,thread_sum,
 __newthread);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00012c60;
 }
 __newthread = __newthread + 3;
 iVar4 = iVar4 + 4;
 } while (iVar4 != 0xc);
 iVar4 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar4),(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = *(int *)((int)local_40 + iVar4 * -3) + iVar1;
 iVar4 = iVar4 + -4;
 } while (iVar4 != -0xc);
LAB_00012c60:
 printf(&DAT_000130b9,iVar1);
 uVar3 = param_mutex_lock(4,1000);
 printf(&DAT_000130d6,uVar3);
 uVar3 = param_condition_variable();
 printf(&DAT_000130f2,uVar3);
 uVar3 = param_atomic_ops(4,500);
 printf(&DAT_0001310e,uVar3);
 uVar3 = param_thread_local_storage(4);
 printf(&DAT_0001312a,uVar3);
 return;
}

// Function: main @ 0x12d04
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



