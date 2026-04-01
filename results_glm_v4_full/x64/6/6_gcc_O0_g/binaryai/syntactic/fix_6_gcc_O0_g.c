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
typedef unsigned int uint;
typedef int __pid_t;
typedef int key_t;
typedef struct FILE FILE;

struct timespec {
  long tv_sec;
  long tv_nsec;
};

#define true 1
#define false 0
typedef unsigned long pthread_t;
typedef unsigned int socklen_t;
typedef unsigned int __useconds_t;
typedef struct {
  unsigned long __pthread_mutex_data[5];
} pthread_mutex_t;
typedef struct {
  unsigned long __pthread_cond_data[6];
} pthread_cond_t;
typedef void (*__sighandler_t)(int);
struct stat {
  unsigned long st_dev;
  unsigned long st_ino;
  unsigned long st_nlink;
  unsigned int st_mode;
  unsigned int st_uid;
  unsigned int st_gid;
  unsigned long __pad0;
  unsigned long st_rdev;
  long long st_size;
  long st_blksize;
  long long st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  long long __glibc_reserved[3];
};
struct sockaddr {
  unsigned short sa_family;
  char sa_data[14];
};
typedef struct sockaddr sockaddr;
struct ipc_perm {
  unsigned int __key;
  unsigned int uid;
  unsigned int gid;
  unsigned int cuid;
  unsigned int cgid;
  unsigned int mode;
  unsigned short __seq;
  unsigned short __pad2;
  unsigned long __unused1;
  unsigned long __unused2;
};

struct shmid_ds {
  struct ipc_perm shm_perm;
  size_t shm_segsz;
  long shm_atime;
  long shm_dtime;
  long shm_ctime;
  __pid_t shm_cpid;
  __pid_t shm_lpid;
  unsigned long shm_nattch;
  unsigned long __glibc_reserved4;
  unsigned long __glibc_reserved5;
};
typedef struct shmid_ds shmid_ds;
struct pthread_attr_t;
typedef struct pthread_attr_t pthread_attr_t;

/* Additional type definitions */
typedef unsigned char byte;

/* SEEK_SET constant for fseek */
#define SEEK_SET 0

/* NULL definition */
#define NULL ((void *)0)

/* Data segment addresses for string comparison tests */
extern char DAT_00105011;
extern char DAT_00105015;
extern char DAT_00105019;
extern char DAT_0010501d;
extern char DAT_00105021;
extern char DAT_00105047;
extern char DAT_001050b0;
extern char DAT_001050d4;
extern char DAT_001050ef;
extern char DAT_0010510a;
extern char DAT_00105126;
extern char DAT_00105142;
extern char DAT_0010515e;
extern char DAT_0010517a;
extern char DAT_00105197;
extern char DAT_001051b3;
extern char DAT_001051cf;
extern char DAT_001051eb;
extern char DAT_00105206;
extern char DAT_00105248;
extern char DAT_00105263;
extern char DAT_0010527f;
extern char DAT_0010529b;
extern char DAT_001052b7;
extern char DAT_001052d3;
extern char DAT_001052ef;
extern char DAT_0010530b;
extern char DAT_00105331;
extern char DAT_0010534f;
extern char DAT_0010536b;
extern char DAT_00105388;
extern char DAT_001053a4;
extern char DAT_001053c0;
extern char DAT_001053dc;

/* Signal constants */
#define SIG_ERR ((__sighandler_t)-1)
#define SIG_DFL ((__sighandler_t)0)

/* Function pointer type for pthread_create */
typedef void *(*__start_routine)(void *);

/* Global variable declarations */
volatile int signal_received = 0;
volatile int signal_number = 0;
volatile unsigned int atomic_counter = 0;
volatile unsigned int data = 0;
volatile int ready = 0;
volatile unsigned int shared_counter = 0;

/* Forward declarations */
unsigned long long main(void);

/* Stack variable for __libc_start_main */
static void *stack0x00000008;

/* Simple atomic lock/unlock macros */
#define LOCK() do { (void)__sync_synchronize(); } while(0)
#define UNLOCK() do { (void)__sync_synchronize(); } while(0)

pthread_mutex_t cond_mutex;
pthread_cond_t cond;
pthread_mutex_t counter_mutex;

/* DSO handle and completion flag for __do_global_dtors_aux */
void *__dso_handle;
volatile char completed_0 = 0;

// Decompiled by BinaryAI
// SHA256: 627896cc91fa8608655f1bd0033e98d758d86d41b427eafd311e3eef3cc105da

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
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1023d0
void __cxa_finalize(void *d)
{
 (void)d;
 return;
}

// Function: <EXTERNAL>::raise @ 0x1023e0
int raise(int __sig)
{
 (void)__sig;
 return 0;
}

// Function: <EXTERNAL>::free @ 0x1023f0
void free(void *__ptr)
{
 /* Stub for free */
 (void)__ptr;
 return;
}

// Function: <EXTERNAL>::__errno_location @ 0x102400
int * __errno_location(void)
{
 static int errno_value = 0;
 return &errno_value;
}

// Function: <EXTERNAL>::unlink @ 0x102410
int unlink(char *__name)
{
 (void)__name;
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x102420
char * strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i = 0;
 while (i < __n && __src[i] != '\0') {
 __dest[i] = __src[i];
 i++;
 }
 while (i < __n) {
 __dest[i] = '\0';
 i++;
 }
 return __dest;
}

// Function: <EXTERNAL>::_exit @ 0x102430
void _exit(int __status)
{
 (void)__status;
 while(1) {}
}

// Function: <EXTERNAL>::strcpy @ 0x102440
char * strcpy(char *__dest,char *__src)
{
 (void)__dest;
 (void)__src;
 return __dest;
}

// Function: <EXTERNAL>::puts @ 0x102450
int puts(char *__s)
{
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::fread @ 0x102460
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 (void)__ptr;
 (void)__size;
 (void)__n;
 (void)__stream;
 return 0;
}

// Function: <EXTERNAL>::setsockopt @ 0x102470
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)
{
 (void)__fd;
 (void)__level;
 (void)__optname;
 (void)__optval;
 (void)__optlen;
 return 0;
}

// Function: <EXTERNAL>::shmdt @ 0x102480
int shmdt(void *__shmaddr)
{
 (void)__shmaddr;
 return 0;
}

// Function: <EXTERNAL>::write @ 0x102490
ssize_t write(int __fd,void *__buf,size_t __n)
{
 (void)__fd;
 (void)__buf;
 return (ssize_t)__n;
}



/* Global stack offset for stack canary access */
static long in_FS_OFFSET = 0x28;

// Function: <EXTERNAL>::fclose @ 0x1024b0
int fclose(FILE *__stream)
{
 (void)__stream;
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x1024c0
size_t strlen(char *__s)
{
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1024d0
void __stack_chk_fail(void)
{
 while(true);
}

// Function: <EXTERNAL>::htons @ 0x1024e0
uint16_t htons(uint16_t __hostshort)
{
 (void)__hostshort;
 return 0;
}

// Function: <EXTERNAL>::strchr @ 0x1024f0
char * strchr(char *__s,int __c)
{
 (void)__s;
 (void)__c;
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x102500
int printf(char *__format,...)
{
 (void)__format;
 return 0;
}

// Function: <EXTERNAL>::rewind @ 0x102510
void rewind(FILE *__stream)
{
 (void)__stream;
 return;
}

// Function: <EXTERNAL>::vsscanf @ 0x102518
int vsscanf(char *__s,char *__format,__builtin_va_list __ap)
{
 (void)__s;
 (void)__format;
 (void)__ap;
 return 0;
}

// Function: <EXTERNAL>::snprintf @ 0x102520
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 (void)__s;
 (void)__maxlen;
 (void)__format;
 return 0;
}

// Function: <EXTERNAL>::memset @ 0x102530
void memset(void *__s,int __c,size_t __n)
{
 (void)__s;
 (void)__c;
 (void)__n;
 return;
}



// Function: <EXTERNAL>::close @ 0x102550
int close(int __fd)
{
 (void)__fd;
 return 0;
}

// Function: <EXTERNAL>::pipe @ 0x102560
int pipe(int *__pipedes)
{
 (void)__pipedes;
 return 0;
}

// Function: <EXTERNAL>::read @ 0x102570
ssize_t read(int __fd,void *__buf,size_t __nbytes)
{
 (void)__fd;
 (void)__buf;
 return (ssize_t)__nbytes;
}

// Function: <EXTERNAL>::memcmp @ 0x102580
int memcmp(void *__s1,void *__s2,size_t __n)
{
 (void)__s1;
 (void)__s2;
 (void)__n;
 return 0;
}



// Function: <EXTERNAL>::strcmp @ 0x1025a0
int strcmp(char *__s1,char *__s2)
{
 (void)__s1;
 (void)__s2;
 return 0;
}

// Function: <EXTERNAL>::signal @ 0x1025b0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 (void)__sig;
 return __handler;
}

// Function: <EXTERNAL>::syscall @ 0x1025c0
long syscall(long __sysno,...)
{
 (void)__sysno;
 return 0;
}

// Function: <EXTERNAL>::stat @ 0x1025d0
int stat(char *__file,struct stat *__buf)
{
 (void)__file;
 (void)__buf;
 return 0;
}

// Function: <EXTERNAL>::memcpy @ 0x1025e0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 (void)__src;
 (void)__n;
 return __dest;
}

// Function: <EXTERNAL>::fileno @ 0x1025f0
int fileno(FILE *__stream)
{
 (void)__stream;
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x102600
int pthread_mutex_unlock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::malloc @ 0x102610
void * malloc(size_t __size)
{
 static char dummy_mem[1024];
 (void)__size;
 return dummy_mem;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x102620
int __isoc99_sscanf(char *__s,char *__format,...)
{
 int iVar1;
 __builtin_va_list __ap;
 __builtin_va_start(__ap, __format);
 iVar1 = vsscanf(__s, __format, __ap);
 __builtin_va_end(__ap);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x102630
int listen(int __fd,int __n)
{
 (void)__fd;
 (void)__n;
 return 0;
}

// Function: <EXTERNAL>::bind @ 0x102640
int bind(int __fd,sockaddr *__addr,socklen_t __len)
{
 (void)__fd;
 (void)__addr;
 (void)__len;
 return 0;
}

// Function: <EXTERNAL>::pthread_create @ 0x102650
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 (void)__newthread;
 (void)__attr;
 (void)__start_routine;
 (void)__arg;
 return 0;
}

// Function: <EXTERNAL>::waitpid @ 0x102660
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 (void)__pid;
 (void)__stat_loc;
 (void)__options;
 return 0;
}

// Function: <EXTERNAL>::open @ 0x102670
int open(char *__file,int __oflag,...)
{
 (void)__file;
 (void)__oflag;
 return 0;
}

// Function: <EXTERNAL>::shmctl @ 0x102680
int shmctl(int __shmid,int __cmd,shmid_ds *__buf)
{
 (void)__shmid;
 (void)__cmd;
 (void)__buf;
 return 0;
}

// Function: <EXTERNAL>::fopen @ 0x102690
FILE * fopen(char *__filename,char *__modes)
{
 (void)__filename;
 (void)__modes;
 return (FILE *)0x0;
}

// Function: <EXTERNAL>::shmat @ 0x1026a0
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 static char dummy_shm[4096];
 (void)__shmid;
 (void)__shmaddr;
 (void)__shmflg;
 return dummy_shm;
}

// Function: <EXTERNAL>::shmget @ 0x1026b0
int shmget(key_t __key,size_t __size,int __shmflg)
{
 (void)__key;
 (void)__size;
 (void)__shmflg;
 return 0;
}

// Function: <EXTERNAL>::fwrite @ 0x1026c0
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 (void)__ptr;
 (void)__size;
 (void)__n;
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::ftok @ 0x1026d0
key_t ftok(char *__pathname,int __proj_id)
{
 (void)__pathname;
 (void)__proj_id;
 return 0;
}

// Function: <EXTERNAL>::pthread_join @ 0x1026e0
int pthread_join(pthread_t __th,void **__thread_return)
{
 (void)__th;
 (void)__thread_return;
 return 0;
}

// Function: <EXTERNAL>::execl @ 0x1026f0
int execl(char *__path,char *__arg,...)
{
 (void)__path;
 (void)__arg;
 return -1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x102700
int pthread_cancel(pthread_t __th)
{
 (void)__th;
 return 0;
}

// Function: <EXTERNAL>::sleep @ 0x102710
unsigned int sleep(unsigned int __seconds)
{
 (void)__seconds;
 return 0;
}

// Function: <EXTERNAL>::wait @ 0x102720
__pid_t wait(void *__stat_loc)
{
 (void)__stat_loc;
 return 0;
}

// Function: <EXTERNAL>::fork @ 0x102730
__pid_t fork(void)
{
 return 0;
}

// Function: <EXTERNAL>::strstr @ 0x102740
char * strstr(char *__haystack,char *__needle)
{
 (void)__haystack;
 (void)__needle;
 return 0;
}

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x102750
int pthread_mutex_lock(pthread_mutex_t *__mutex)
{
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_wait @ 0x102760
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 (void)__cond;
 (void)__mutex;
 return 0;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x102770
int pthread_cond_signal(pthread_cond_t *__cond)
{
 (void)__cond;
 return 0;
}

// Function: <EXTERNAL>::alarm @ 0x102780
unsigned int alarm(unsigned int __seconds)
{
 (void)__seconds;
 return 0;
}

// Function: <EXTERNAL>::usleep @ 0x102790
int usleep(unsigned int __useconds)
{
 (void)__useconds;
 return 0;
}

// Function: <EXTERNAL>::socket @ 0x102770
int socket(int __domain,int __type,int __protocol)
{
 (void)__domain;
 (void)__type;
 (void)__protocol;
 return -1;
}

// Function: _start @ 0x1027a0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 while(1);
}

// Function: deregister_tm_clones @ 0x1027b0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1027e0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102820
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

// Function: param_strcpy @ 0x102869
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x10289e
unsigned int call_strcpy(void)
{
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 param_strcpy(local_38,"HelloLib");
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: param_strcmp @ 0x1028eb
unsigned long long param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_strcmp @ 0x102936
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00105015,&DAT_00105011);
 iVar2 = param_strcmp(&DAT_00105019,&DAT_00105019);
 iVar3 = param_strcmp(&DAT_00105021,&DAT_0010501d);
 return iVar3 + iVar1 + iVar2;
}

// Function: param_strlen @ 0x1029a5
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x1029cb
void call_strlen(void)
{
 param_strlen("BinBench2025");
 return;
}

// Function: param_memcpy @ 0x1029f0
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x102a25
int call_memcpy(void)
{
 long in_FS_OFFSET;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned long long local_28;
 unsigned long long local_20;
 int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 10;
 local_44 = 0x14;
 local_40 = 0x1e;
 local_3c = 0x28;
 local_38 = 0x32;
 local_28 = 0;
 local_20 = 0;
 local_18 = 0;
 param_memcpy(&local_28,&local_48,0x14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_18 + (int)local_28 + (int)local_20;
}

// Function: param_memcmp @ 0x102ab5
unsigned long long param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0;
 }
 }
 else {
 uVar2 = 1;
 }
 return uVar2;
}

// Function: call_memcmp @ 0x102b08
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 local_28 = 1;
 local_24 = 2;
 local_20 = 4;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 iVar1 = param_memcmp(&local_34,&local_28,0xc);
 iVar2 = param_memcmp(&local_34,&local_1c,0xc);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar2 + iVar1;
}

// Function: param_printf @ 0x102bb6
int param_printf(uint param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x102bee
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,&DAT_00105047);
 return uVar1;
}

// Function: param_scanf @ 0x102c16
int param_scanf(unsigned long long param_1)
{
 long in_FS_OFFSET;
 int local_1c;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = __isoc99_sscanf(param_1,"%d,%d",&local_1c,&local_18);
 if (local_14 == 2) {
 local_18 = local_18 + local_1c;
 }
 else {
 local_18 = -1;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_18;
}

// Function: call_scanf @ 0x102c83
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x102c9c
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

// Function: call_fopen_fclose @ 0x102cf4
unsigned long long call_fopen_fclose(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x102d26
unsigned long long param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 unsigned long long uVar2;
 size_t sVar3;
 size_t sVar4;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
  else {
 strlen("BinBench Test Data");
 sVar3 = fwrite("BinBench Test Data",1,strlen("BinBench Test Data"),__s);
 sVar4 = strlen("BinBench Test Data");
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(local_38,1,sVar3,__s);
 local_38[sVar4] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar4 == sVar3) {
 iVar1 = strcmp(local_38,"BinBench Test Data");
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 goto LAB_00102e4a;
 }
 }
 uVar2 = 0xfffffffd;
  }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
LAB_00102e4a:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x102e60
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x102e79
int param_malloc_free(unsigned long param_1)
{
 int iVar1;
 int *__ptr;
 unsigned long local_18;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 __ptr[local_18] = (int)local_18 * 10;
 }
 iVar1 = __ptr[param_1 - 1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102f23
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x102f37
int param_memset(void *param_1,size_t param_2)
{
 int local_1c;
 unsigned long local_18;
 (void)memset(param_1,0,param_2);
 local_1c = 0;
 for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
 local_1c = local_1c + (uint)*(byte *)(local_18 + (long)param_1);
 }
 return local_1c;
}

// Function: call_memset @ 0x102fa1
int call_memset(void)
{
 long in_FS_OFFSET;
 int local_3c;
 int local_38 [10];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_38,0x28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_38[9] + local_38[0];
}

// Function: param_strchr_strstr @ 0x10300b
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,(int)param_2);
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = (int)pcVar3 - (int)param_1;
 }
 pcVar3 = strstr(param_1,param_3);
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = (int)pcVar3 - (int)param_1;
 }
 return iVar2 + iVar1;
}

// Function: call_strchr_strstr @ 0x10308d
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x1030c4
void test_standard_library_functions(void)
{
 uint uVar1;
 puts(&DAT_001050b0);
 uVar1 = call_strcpy();
 printf(&DAT_001050d4,(unsigned long)uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_001050ef,(unsigned long)uVar1);
 uVar1 = call_strlen();
 printf(&DAT_0010510a,(unsigned long)uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_00105126,(unsigned long)uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_00105142,(unsigned long)uVar1);
 uVar1 = call_printf();
 printf(&DAT_0010515e,(unsigned long)uVar1);
 uVar1 = call_scanf();
 printf(&DAT_0010517a,(unsigned long)uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_00105197,(unsigned long)uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_001051b3,(unsigned long)uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_001051cf,(unsigned long)uVar1);
 uVar1 = call_memset();
 printf(&DAT_001051eb,(unsigned long)uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_00105206,(unsigned long)uVar1);
 return;
}

// Function: param_linux_syscall @ 0x10325e
int param_linux_syscall(unsigned long long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uVar2 = syscall(2,param_1,0);
 iVar1 = (int)uVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(3,uVar2 & 0xffffffff);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1032b6
unsigned long long call_linux_syscall(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x1032e8
unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 struct stat local_a8;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&local_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else if (local_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0x2a;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x10335c
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x103375
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 uint uVar1;
 long local_18;
 uint local_1c;
 __pid_t local_14;
 __pid_t local_10;
 long local_c;
 local_c = *(long *)(in_FS_OFFSET + 0x28);
 local_10 = fork();
 if (local_10 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (local_10 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 local_14 = waitpid(local_10,(int *)&local_1c,0);
 if (local_14 < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((local_1c & 0x7f) == 0) {
 uVar1 = (int)local_1c >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_fork_exec @ 0x103431
unsigned long long call_fork_exec(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x103468
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned long long uVar3;
 size_t __n;
 ssize_t sVar4;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pipe(&local_40);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_40);
 __n = strlen("HelloPipe");
 write(local_3c,"HelloPipe",__n);
 close(local_3c);
 _exit(0);
 }
 close(local_3c);
 sVar4 = read(local_40,local_38,0x1f);
 local_38[sVar4] = 0;
 close(local_40);
 wait((void *)0x0);
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 else {
 uVar3 = 0x2a;
 }
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_pipe_communication @ 0x103573
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x103582
unsigned long long param_socket_create(void)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 unsigned int local_30;
 int local_2c;
 sockaddr local_28;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_2c = socket(2,1,0);
 if (local_2c < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_30 = 1;
 iVar1 = setsockopt(local_2c,1,2,&local_30,4);
 if (iVar1 < 0) {
 close(local_2c);
 uVar2 = 0xfffffffe;
 }
 else {
 (void)memset(&local_28,0,0x10);
 local_28.sa_family = 2;
 *(uint16_t *)local_28.sa_data = htons(0);
 local_28.sa_data[2] = '\0';
 local_28.sa_data[3] = '\0';
 local_28.sa_data[4] = '\0';
 local_28.sa_data[5] = '\0';
 iVar1 = bind(local_2c,&local_28,0x10);
 if (iVar1 < 0) {
 close(local_2c);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_2c,5);
 if (iVar1 < 0) {
 close(local_2c);
 uVar2 = 0xfffffffc;
 }
 else {
 close(local_2c);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_socket_create @ 0x1036a9
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x1036b8
 unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long uVar2;
 unsigned long long *__s;
 size_t sVar3;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if ((key_t)(int)__key < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 uVar2 = 0xfffffffd;
 }
 else {
 *__s = 0x654d646572616853;
 *(unsigned int *)(__s + 1) = 0x79726f6d;
 *(char *)((long)__s + 0xc) = 0;
 sVar3 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 uVar2 = sVar3 & 0xffffffff;
 }
 }
 }
 }
 return uVar2;
}

// Function: call_shmget_shmat @ 0x1037c8
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: signal_handler @ 0x1037f0
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: param_signal_handling @ 0x103811
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int local_c;
 p_Var1 = signal(10,(__sighandler_t)signal_handler);
 if (p_Var1 == SIG_ERR) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,(__sighandler_t)signal_handler);
 if (p_Var1 == SIG_ERR) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_c = 1000;
 while ((signal_received == 0 && (0 < local_c))) {
 usleep(1000);
 local_c = local_c + -1;
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_c = 2000;
 while ((signal_received == 0 && (0 < local_c))) {
 usleep(1000);
 local_c = local_c + -1;
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar2 = 0xfffffffb;
 }
 else {
 signal(10,SIG_DFL);
 signal(0xe,SIG_DFL);
 uVar2 = 0x2a;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}

// Function: call_signal_handling @ 0x103948
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x103957
void test_system_calls(void)
{
 uint uVar1;
 puts(&DAT_00105248);
 uVar1 = call_linux_syscall();
 printf(&DAT_00105263,(unsigned long)uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_0010527f,(unsigned long)uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_0010529b,(unsigned long)uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_001052b7,(unsigned long)uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_001052d3,(unsigned long)uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_001052ef,(unsigned long)uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_0010530b,(unsigned long)uVar1);
 return;
}

// Function: thread_compute @ 0x103a51
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x103a98
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int local_2c;
 int local_28;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_2c = param_1;
 local_28 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_2c);
 if (local_28 == 0) {
 pthread_join(local_20,(void **)&local_18);
 local_24 = *local_18;
 free(local_18);
 uVar1 = local_24;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_pthread_create @ 0x103b2c
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x103b40
void * thread_sum(void *param_1)
{
 int *piVar1;
 int local_14;
 piVar1 = (int *)param_1;
 piVar1[2] = 0;
 for (local_14 = piVar1[0]; local_14 <= piVar1[1]; local_14 = local_14 + 1) {
 piVar1[2] = piVar1[2] + local_14;
 }
 return NULL;
}

// Function: param_pthread_join @ 0x103b94
int param_pthread_join(void)
{
 int iVar1;
 long in_FS_OFFSET;
 int local_64;
 int local_60;
 int local_5c;
 pthread_t local_58 [4];
 int local_38 [4];
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = 1;
 local_38[1] = 10;
 local_38[2] = 0;
 local_38[3] = 0xb;
 local_28 = 0x14;
 local_24 = 0;
 local_20 = 0x15;
 local_1c = 0x1e;
 local_18 = 0;
 for (local_64 = 0; local_64 < 3; local_64 = local_64 + 1) {
 iVar1 = pthread_create(local_58 + local_64,(pthread_attr_t *)0x0,thread_sum,
 local_38 + (long)local_64 * 3);
 if (iVar1 != 0) {
 local_60 = -1;
 goto LAB_00103cac;
 }
 }
 local_60 = 0;
 local_5c = 0;
 do {
 if (2 < local_5c) {
LAB_00103cac:
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_60;
 }
 __stack_chk_fail();
 }
 iVar1 = pthread_join(local_58[local_5c],(void **)0x0);
 if (iVar1 != 0) {
 local_60 = -2;
 goto LAB_00103cac;
 }
 local_60 = local_60 + local_38[(long)local_5c * 3 + 2];
 local_5c = local_5c + 1;
 } while( true );
}

// Function: call_pthread_join @ 0x103cc2
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: thread_increment @ 0x103cd6
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_10;
 iVar1 = *(int *)param_1;
 for (local_10 = 0; local_10 < iVar1; local_10 = local_10 + 1) {
    pthread_mutex_lock(&counter_mutex);
    shared_counter = shared_counter + 1;
    pthread_mutex_unlock(&counter_mutex);
    usleep(1000);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x103d42
unsigned long long param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 int local_30;
 int local_2c;
 int local_1c;
 int local_18;
 void *local_10;
 local_30 = param_2;
 local_2c = param_1;
 local_10 = malloc((long)param_1 << 3);
 if (local_10 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_1c = 0; local_1c < local_2c; local_1c = local_1c + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_1c * 8 + (long)local_10),
 (pthread_attr_t *)0x0,thread_increment,&local_30);
 if (iVar1 != 0) {
 free(local_10);
 return 0xfffffffe;
 }
 }
 for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
 pthread_join(*(pthread_t *)((long)local_10 + (long)local_18 * 8),(void **)0x0);
 }
 free(local_10);
 if (local_30 * local_2c == shared_counter) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103e4a
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103e63
void * consumer_thread(void *param)
{
 unsigned int uVar1 = 0;
 unsigned int *puVar2;
  pthread_mutex_lock(&cond_mutex);
  uVar1 = data;
  while (ready == 0) {
    pthread_cond_wait(&cond,&cond_mutex);
    uVar1 = data;
  }
  pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x103edc
void * producer_thread(void *param)
{
  sleep(1);
  pthread_mutex_lock(&cond_mutex);
  data = 0x2a;
  ready = 1;
  pthread_cond_signal(&cond);
  pthread_mutex_unlock(&cond_mutex);
return 0;
}

// Function: param_condition_variable @ 0x103f3e
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_28;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_20,(void **)&local_18);
 iVar1 = pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
  }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x10401b
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: thread_atomic_increment @ 0x10402f
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int *piVar1;
 int local_1c;
 piVar1 = (int *)param_1;
 for (local_1c = 0; local_1c < *piVar1; local_1c = local_1c + 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar1 = local_1c + 1000;
 if (local_1c != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 UNLOCK();
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x1040ba
void * thread_atomic_load_store(void *param)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return NULL;
}

// Function: param_atomic_ops @ 0x1040e2
unsigned long long param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_40;
 int local_3c;
 int local_2c;
 int local_28;
 int local_24;
 pthread_t local_20;
 void *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_40 = param_2;
 local_3c = param_1;
 local_18 = malloc((long)param_1 << 3);
 if (local_18 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 for (local_2c = 0; local_2c < local_3c; local_2c = local_2c + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_2c * 8 + (long)local_18),
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_40);
 if (iVar1 != 0) {
 free(local_18);
 uVar2 = 0xfffffffe;
 goto LAB_00104225;
 }
 }
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_20,(void **)0x0);
 }
 for (local_28 = 0; local_28 < local_3c; local_28 = local_28 + 1) {
 iVar1 = pthread_join(*(pthread_t *)((long)local_18 + (long)local_28 * 8),(void **)0x0);
 }
 local_24 = atomic_counter;
 free(local_18);
 if (local_24 < 1) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0x2a;
 }
 }
LAB_00104225:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x10423b
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x104254
void * thread_tls_test(void *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 uVar1 = 100;
 (void)strncpy((char *)param_1,(char *)param_1,0x1f);
 puVar2 = (unsigned int *)malloc(8);
 *puVar2 = uVar1;
 puVar2[1] = uVar1 + 50;
 return puVar2;
}

// Function: param_thread_local_storage @ 0x1042dd
unsigned long long param_thread_local_storage(int param_1)
{
 void **ppvVar1;
 int iVar2;
 unsigned long long uVar3;
 void *pvVar4;
 uint local_60;
 int local_5c;
 int local_58;
 int local_54;
 int local_50;
 int local_4c;
 int *local_40;
 void *local_38;
 void *local_30;
 int *local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = malloc((long)param_1 << 3);
 local_30 = malloc((long)param_1 << 3);
 if ((local_38 == (void *)0x0) || (local_30 == (void *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (local_60 = 0; (int)local_60 < param_1; local_60 = local_60 + 1) {
 ppvVar1 = (void **)((long)(int)local_60 * 8 + (long)local_30);
 pvVar4 = malloc(0x10);
 *ppvVar1 = pvVar4;
 snprintf((char *)*ppvVar1,0x10,"Thread-%d",(unsigned long)local_60);
 }
 for (local_5c = 0; local_5c < param_1; local_5c = local_5c + 1) {
 iVar2 = pthread_create((pthread_t *)((long)local_5c * 8 + (long)local_38),
 (pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)local_30 + (long)local_5c * 8));
 if (iVar2 != 0) {
 for (local_58 = 0; local_58 <= local_5c; local_58 = local_58 + 1) {
 free(*(void **)((long)local_30 + (long)local_58 * 8));
 }
 free(local_30);
 free(local_38);
 uVar3 = 0xfffffffe;
 goto LAB_0010453f;
 }
 }
 local_54 = 0;
 local_50 = 0;
 for (local_4c = 0; local_4c < param_1; local_4c = local_4c + 1) {
 iVar2 = pthread_join(*(pthread_t *)((long)local_38 + (long)local_4c * 8),(void **)&local_40);
 local_28 = local_40;
 local_54 = local_54 + *local_40;
 local_50 = local_50 + local_40[1];
 free(local_40);
 free(*(void **)((long)local_30 + (long)local_4c * 8));
 }
 free(local_30);
 free(local_38);
 if ((local_54 == param_1 * 100) && (local_50 == param_1 * 0x96)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_0010453f:
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x104559
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x10456d
void test_thread_concurrency(void)
{
 uint uVar1;
 puts(&DAT_00105331);
 uVar1 = call_pthread_create();
 printf(&DAT_0010534f,(unsigned long)uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_0010536b,(unsigned long)uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_00105388,(unsigned long)uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_001053a4,(unsigned long)uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_001053c0,(unsigned long)uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_001053dc,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x104647
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x104674
void _fini(void)
{
 return;
}

