/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Additional type definitions
typedef unsigned int uint;
typedef unsigned long ulong;

// POSIX type definitions - use system types





// Thread start routine type
typedef void *(*__start_routine)(void *);

// Forward declarations
void signal_handler(int param_1);

// Macro for SUB161 (extract byte from 16-byte value)
#define SUB161(val, idx) (((unsigned char*)&(val))[(idx)])

// Additional macro definitions
#define ZEXT816(val) (val)
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))
#define SUB1612(val, idx) (((unsigned char*)&(val))[(idx)])

// Global variables
static int completed_0 = 0;
static void *__dso_handle = 0;
static int signal_received = 0;
static int signal_number = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static int shared_counter = 0;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int ready = 0;
static int data = 0;
static int atomic_counter = 0;

// Data references
static char DAT_00104069[] = "TestName";
static char DAT_001043af[] = "Testing standard library functions";
static char DAT_001040b7[] = "Length: %d\n";
static char DAT_001040d2[] = "Result: %d\n";
static char DAT_001040ed[] = "Expected: %d\n";
static char DAT_00104109[] = "Copied: %d\n";
static char DAT_00104125[] = "Error: %d\n";
static char DAT_00104141[] = "Printf result: %d\n";
static char DAT_0010415d[] = "Scanf result: %d\n";
static char DAT_0010417a[] = "File result: %d\n";
static char DAT_00104196[] = "Fread result: %d\n";
static char DAT_001041b2[] = "Malloc result: %d\n";
static char DAT_001041ce[] = "Memset result: %d\n";
static char DAT_001041e9[] = "Strchr result: %d\n";
static char DAT_001043d3[] = "Testing system calls";
static char DAT_00104238[] = "Syscall result: %d\n";
static char DAT_00104254[] = "Stat result: %d\n";
static char DAT_00104270[] = "Fork result: %d\n";
static char DAT_0010428c[] = "Pipe result: %d\n";
static char DAT_001042a8[] = "Socket result: %d\n";
static char DAT_001042c4[] = "SHM result: %d\n";
static char DAT_001042e0[] = "Signal result: %d\n";
static char DAT_001043ee[] = "Testing thread concurrency";
static char DAT_00104306[] = "Thread sum: %d\n";
static char DAT_00104322[] = "Join result: %d\n";
static char DAT_0010433f[] = "Mutex result: %d\n";
static char DAT_0010435b[] = "Condition result: %d\n";
static char DAT_00104377[] = "Atomic result: %d\n";
static char DAT_00104393[] = "TLS result: %d\n";
static char s_Bench_Test_Data_00104010[] = "ench Test Data";

// External function declarations
extern int __libc_start_main(int (*main)(int, char **), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern int main(int argc, char **argv);

// Define stack reference
static void *stack0x00000008 = 0;

// Macro definitions for LOCK/UNLOCK
#define LOCK()
#define UNLOCK()

// Decompiled by BinaryAI
// SHA256: 770ce459fa972e7bfa23f5ec59f055cd135283e77096d163c1ffdd9b08588e39

// Function: _init @ 0x102000
int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 return;
}

// Function: <EXTERNAL>::raise @ 0x102030
int raise(int __sig)
{
 return 0;
}

// Function: <EXTERNAL>::free @ 0x102040
void free(void *__ptr)
{
 (void)__ptr;
 return;
}

// Function: <EXTERNAL>::__errno_location @ 0x102050
static int errno_val = 0;
int * __errno_location(void)
{
 return &errno_val;
}

// Function: <EXTERNAL>::unlink @ 0x102060
int unlink(char *__name)
{
 (void)__name;
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x102070
char * strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i;
 for (i = 0; i < __n && __src[i] != '\0'; i++) {
  __dest[i] = __src[i];
 }
 for (; i < __n; i++) {
  __dest[i] = '\0';
 }
 return __dest;
}

// Function: <EXTERNAL>::_exit @ 0x102080
void _exit(int __status)
{
 (void)__status;
}

// Function: <EXTERNAL>::strcpy @ 0x102090
char * strcpy(char *__dest,char *__src)
{
 char *dst = __dest;
 while ((*dst++ = *__src++) != '\0');
 return __dest;
}

// Function: <EXTERNAL>::puts @ 0x1020a0
int puts(char *__s)
{
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::fread @ 0x1020b0
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 (void)__ptr; (void)__size; (void)__n; (void)__stream;
 return 0;
}

// Function: <EXTERNAL>::setsockopt @ 0x1020c0
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 (void)__fd; (void)__level; (void)__optname; (void)__optval; (void)__optlen;
 return 0;
}

// Function: <EXTERNAL>::shmdt @ 0x1020d0
int shmdt(void *__shmaddr)
{
 (void)__shmaddr;
 return 0;
}

// Function: <EXTERNAL>::write @ 0x1020e0
ssize_t write(int __fd,void *__buf,size_t __n)
{
 (void)__fd; (void)__buf; (void)__n;
 return __n;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x1020f0
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 (void)__cond; (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::fclose @ 0x102100
int fclose(FILE *__stream)
{
 (void)__stream;
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x102110
size_t strlen(char *__s)
{
 size_t len = 0;
 while (__s[len] != '\0') len++;
 return len;
}

// Function: <EXTERNAL>::strchr @ 0x102120
char * strchr(char *__s,int __c)
{
 while (*__s != '\0') {
  if (*__s == (char)__c) return __s;
  __s++;
 }
 return (__c == '\0') ? __s : (char *)0;
}

// Function: <EXTERNAL>::printf @ 0x102130
int printf(char *__format,...)
{
 (void)__format;
 return 0;
}

// Function: <EXTERNAL>::rewind @ 0x102140
void rewind(FILE *__stream)
{
 (void)__stream;
 return;
}

// Function: <EXTERNAL>::snprintf @ 0x102150
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 (void)__s; (void)__maxlen; (void)__format;
 if (__maxlen > 0) __s[0] = '\0';
 return 0;
}

// Function: <EXTERNAL>::memset @ 0x102160
void * memset(void *__s,int __c,size_t __n)
{
 unsigned char *p = (unsigned char *)__s;
 size_t i;
 for (i = 0; i < __n; i++) p[i] = (unsigned char)__c;
 return __s;
}

// Function: <EXTERNAL>::alarm @ 0x102170
uint alarm(uint __seconds)
{
 (void)__seconds;
 return 0;
}

// Function: <EXTERNAL>::close @ 0x102180
int close(int __fd)
{
 (void)__fd;
 return 0;
}

// Function: <EXTERNAL>::pipe @ 0x102190
int pipe(int *__pipedes)
{
 if (__pipedes) { __pipedes[0] = 3; __pipedes[1] = 4; }
 return 0;
}

// Function: <EXTERNAL>::read @ 0x1021a0
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 (void)__fd; (void)__buf; (void)__nbytes;
 return 0;
}

// Function: <EXTERNAL>::memcmp @ 0x1021b0
int memcmp(void *__s1,void *__s2,size_t __n)
{
 unsigned char *p1 = (unsigned char *)__s1;
 unsigned char *p2 = (unsigned char *)__s2;
 size_t i;
 for (i = 0; i < __n; i++) {
  if (p1[i] != p2[i]) return p1[i] - p2[i];
 }
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x1021c0
int pthread_cond_signal(pthread_cond_t *__cond)
{
 (void)__cond;
 return 0;
}

// Function: <EXTERNAL>::strcmp @ 0x1021d0
int strcmp(char *__s1,char *__s2)
{
 while (*__s1 && *__s1 == *__s2) { __s1++; __s2++; }
 return *(unsigned char *)__s1 - *(unsigned char *)__s2;
}

// Function: <EXTERNAL>::signal @ 0x1021e0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 (void)__sig;
 return __handler;
}

// Function: <EXTERNAL>::syscall @ 0x1021f0
long syscall(long __sysno,...)
{
 (void)__sysno;
 return -1;
}

// Function: <EXTERNAL>::stat @ 0x102200
int stat(char *__file,struct stat *__buf)
{
 (void)__file;
 if (__buf) __buf->st_size = 100;
 return 0;
}

// Function: <EXTERNAL>::memcpy @ 0x102210
void * memcpy(void *__dest,void *__src,size_t __n)
{
 unsigned char *dst = (unsigned char *)__dest;
 unsigned char *src = (unsigned char *)__src;
 size_t i;
 for (i = 0; i < __n; i++) dst[i] = src[i];
 return __dest;
}

// Function: <EXTERNAL>::fileno @ 0x102220
int fileno(FILE *__stream)
{
 (void)__stream;
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x102230
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::malloc @ 0x102240
static char malloc_buf[65536];
static size_t malloc_offset = 0;
void * malloc(size_t __size)
{
 void *p;
 if (malloc_offset + __size > sizeof(malloc_buf)) return (void *)0;
 p = malloc_buf + malloc_offset;
 malloc_offset += __size;
 return p;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x102250
int __isoc99_sscanf(const char *str, const char *format, ...)
{
 (void)str; (void)format;
 return 0;
}

// Function: <EXTERNAL>::listen @ 0x102260
int listen(int __fd,int __n)
{
 (void)__fd; (void)__n;
 return 0;
}

// Function: <EXTERNAL>::bind @ 0x102270
int bind(int __fd,struct sockaddr *__addr,socklen_t __len)
{
 (void)__fd; (void)__addr; (void)__len;
 return 0;
}

// Function: <EXTERNAL>::pthread_create @ 0x102280
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine start_routine,
 void *__arg)
{
 (void)__newthread; (void)__attr; (void)start_routine; (void)__arg;
 if (__newthread) *__newthread = 1;
 return 0;
}

// Function: <EXTERNAL>::waitpid @ 0x102290
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 (void)__pid; (void)__stat_loc; (void)__options;
 if (__stat_loc) *__stat_loc = 0;
 return 1;
}

// Function: <EXTERNAL>::open @ 0x1022a0
int open(char *__file,int __oflag,...)
{
 (void)__file; (void)__oflag;
 return 5;
}

// Function: <EXTERNAL>::shmctl @ 0x1022b0
int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf)
{
 (void)__shmid; (void)__cmd; (void)__buf;
 return 0;
}

// Function: <EXTERNAL>::fopen @ 0x1022c0
FILE * fopen(char *__filename,char *__modes)
{
 (void)__filename; (void)__modes;
 return (FILE *)1;
}

// Function: <EXTERNAL>::shmat @ 0x1022d0
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 (void)__shmid; (void)__shmaddr; (void)__shmflg;
 return malloc_buf;
}

// Function: <EXTERNAL>::shmget @ 0x1022e0
int shmget(key_t __key,size_t __size,int __shmflg)
{
 (void)__key; (void)__size; (void)__shmflg;
 return 1;
}

// Function: <EXTERNAL>::fwrite @ 0x1022f0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 (void)__ptr; (void)__size; (void)__n; (void)__s;
 return __n;
}

// Function: <EXTERNAL>::ftok @ 0x102300
key_t ftok(char *__pathname,int __proj_id)
{
 (void)__pathname; (void)__proj_id;
 return 1;
}

// Function: <EXTERNAL>::pthread_join @ 0x102310
int pthread_join(pthread_t __th,void **__thread_return)
{
 (void)__th; (void)__thread_return;
 return 0;
}

// Function: <EXTERNAL>::execl @ 0x102320
int execl(char *__path,char *__arg,...)
{
 (void)__path; (void)__arg;
 return 0;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x102330
int pthread_cancel(pthread_t __th)
{
 (void)__th;
 return 0;
}

// Function: <EXTERNAL>::sleep @ 0x102340
uint sleep(uint __seconds)
{
 (void)__seconds;
 return 0;
}

// Function: <EXTERNAL>::wait @ 0x102350
__pid_t wait(void *__stat_loc)
{
 (void)__stat_loc;
 return 1;
}

// Function: <EXTERNAL>::fork @ 0x102360
__pid_t fork(void)
{
 return 0;
}

// Function: <EXTERNAL>::strstr @ 0x102370
char * strstr(char *__haystack,char *__needle)
{
 size_t needle_len = strlen(__needle);
 while (*__haystack) {
  if (memcmp(__haystack, __needle, needle_len) == 0) return __haystack;
  __haystack++;
 }
 return (char *)0;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x102380
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::usleep @ 0x102390
int usleep(__useconds_t __useconds)
{
 (void)__useconds;
 return 0;
}

// Function: <EXTERNAL>::socket @ 0x1023a0
int socket(int __domain,int __type,int __protocol)
{
 (void)__domain; (void)__type; (void)__protocol;
 return 5;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1023b0
void __cxa_finalize(void)
{
 return;
}

// Function: _start @ 0x1023c0
void processEntry _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,(int)param_2,stack0x00000008,0,0,(void *)param_1,auStack_8);
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
 printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long in_RAX;
 unsigned long long local_8;
 int local_4c;
 local_8 = in_RAX;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_4c,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_4c + (int)local_8;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 unsigned long long in_RAX;
 unsigned long long local_8;
 int local_4c;
 local_8 = in_RAX;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_4c,&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_4c + (int)local_8;
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
 if (memcmp(local_48, "BinBench Test Data", 0x12) == 0) {
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
 undefined7 uStack_3f;
 unsigned long long local_28;
 puts(&DAT_001043af);
 memcpy(local_48, "HelloLibc", 9);
 sVar3 = strlen(local_48);
 printf(&DAT_001040b7,sVar3 & 0xffffffff);
 printf(&DAT_001040d2,0);
 printf(&DAT_001040ed,0xc);
 printf(&DAT_00104109,0x5a);
 uVar7 = 0xffffffff;
 printf(&DAT_00104125,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00104069);
 printf(&DAT_00104141,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_4c,local_48);
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
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 unsigned long long in_RAX;
 uint local_14;
 local_14 = (uint)((unsigned long)in_RAX >> 0x20);
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
 __pid_t _Var1;
 uint uVar2;
 unsigned long long in_RAX;
 uint local_4;
 local_4 = (uint)((unsigned long)in_RAX >> 0x20);
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

// Function: call_pipe_communication @ 0x102df0
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x102e00
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_2c;
 sockaddr local_28;
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
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x102ed0
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
unsigned long long param_signal_handling(void)
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

// Function: signal_handler @ 0x1030f0
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x103110
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x103120
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
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
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
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
unsigned long long thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = uVar1 + param_1[2] + (uVar1 + 1) * (uVar2 - uVar1) +
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
 char local_68 [12];
 unsigned int uStack_5c;
 char local_58 [8];
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 __arg = local_68;
 local_48 = 0;
 uStack_5c = 0xb;
 local_58._0_4_ = 0x14;
 uStack_50 = 0x1e00000015;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = __arg + 0xc;
 lVar4 = lVar4 + 8;
 } while (lVar4 != 0x18);
 piVar3 = (int *)(local_68 + 8);
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
 char local_68 [12];
 unsigned int uStack_5c;
 char local_58 [8];
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 __arg = local_68;
 local_48 = 0;
 uStack_5c = 0xb;
 local_58._0_4_ = 0x14;
 uStack_50 = 0x1e00000015;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar4),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 lVar4 = lVar4 + 8;
 __arg = __arg + 0xc;
 } while (lVar4 != 0x18);
 piVar3 = (int *)(local_68 + 8);
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

// Function: param_mutex_lock @ 0x1035b0
unsigned long long param_mutex_lock(uint param_1,unsigned int param_2)
{
 uint uVar1;
 int iVar2;
 unsigned long long in_RAX;
 void *__ptr;
 unsigned long long uVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned long long local_38;
 local_38._4_4_ = (uint)((unsigned long)in_RAX >> 0x20);
 local_38 = CONCAT44(local_38._4_4_,param_2);
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 local_38._4_4_ = param_1;
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
 uVar1 = local_38._4_4_;
 if (0 < (int)local_38._4_4_) {
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
void consumer_thread(void)
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
 return;
}

// Function: producer_thread @ 0x103740
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
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
unsigned long long thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *param_1) {
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
 } while (iVar2 != *param_1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x103860
unsigned long long thread_atomic_load_store(void)
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
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 static int tls_value = 0;
 iVar2 = tls_value;
 iVar1 = iVar2 + 0x32;
 tls_value = iVar1;
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 (void)param_1;
 return;
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
 pthread_t local_10;
 long lVar2;
 int *piVar3;
 uint uVar4;
 unsigned int local_6c;
 char local_68 [12];
 unsigned int uStack_5c;
 char local_58 [8];
 unsigned long long uStack_50;
 unsigned int local_48;
 pthread_t local_38 [4];
 char *arg_ptr;
 puts(&DAT_001043ee);
 local_6c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_6c);
 if (iVar1 == 0) {
 pthread_join(local_10,&local_38[0]);
 free(local_38[0]);
 }
 lVar2 = 0;
 printf(&DAT_00104306,0);
 local_48 = 0;
 uStack_5c = 0xb;
 local_58._0_4_ = 0x14;
 uStack_50 = 0x1e00000015;
 arg_ptr = local_68;
 do {
 iVar1 = pthread_create((pthread_t *)((long)local_38 + lVar2),(pthread_attr_t *)0x0,thread_sum,
 arg_ptr);
 if (iVar1 != 0) {
 uVar4 = 0xffffffff;
 goto LAB_00103cd2;
 }
 lVar2 = lVar2 + 8;
 arg_ptr = arg_ptr + 0xc;
 } while (lVar2 != 0x18);
 piVar3 = (int *)(local_68 + 8);
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
int main(int argc, char **argv)
{
 (void)argc; (void)argv;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x103d74
void _fini(void)
{
 return;
}

