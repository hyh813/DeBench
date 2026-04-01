/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef _Bool bool;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int __pid_t;
typedef uint32_t socklen_t;
typedef void (*__sighandler_t)(int);

#define NULL ((void *)0)

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/types.h>

typedef struct _IO_FILE FILE;

typedef struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

typedef unsigned int uint;

typedef int key_t;

typedef unsigned long pthread_t;



typedef unsigned int __useconds_t;

/* External function declarations */
void __cxa_finalize(void *);
void __gmon_start__(void);
void deregister_tm_clones(void);

struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned int __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    unsigned long st_atime;
    unsigned long st_atime_nsec;
    unsigned long st_mtime;
    unsigned long st_mtime_nsec;
    unsigned long st_ctime;
    unsigned long st_ctime_nsec;
    long __unused[3];
};

struct ipc_perm {
    unsigned int key;
    unsigned int uid;
    unsigned int gid;
    unsigned int cuid;
    unsigned int cgid;
    unsigned int mode;
    unsigned short seq;
};

struct shmid_ds {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    unsigned long shm_atime;
    unsigned long shm_dtime;
    unsigned long shm_ctime;
    __pid_t shm_cpid;
    __pid_t shm_lpid;
    unsigned long shm_nattch;
    unsigned long __unused4;
    unsigned long __unused5;
};

char completed_0;
void *__dso_handle;
volatile int signal_received = 0;
volatile int signal_number = 0;
pthread_mutex_t counter_mutex;
int shared_counter;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;
int ready;
int data;

extern char DAT_00102eb6[];
extern char DAT_001031fc[];
extern char DAT_00102f04[];
extern char DAT_00102f1f[];
extern char DAT_00102f3a[];
extern char DAT_00102f56[];
extern char DAT_00102f72[];
extern char DAT_00102f8e[];
extern char DAT_00102faa[];
extern char DAT_00102fc7[];
extern char DAT_00102fe3[];
extern char DAT_00102fff[];
extern char DAT_0010301b[];
extern char DAT_00103036[];
extern char DAT_00103085[];
extern char DAT_001030a1[];
extern char DAT_001030bd[];
extern char DAT_001030d9[];
extern char DAT_001030f5[];
extern char DAT_00103111[];
extern char DAT_0010312d[];
extern char DAT_00103153[];
extern char DAT_0010316f[];
extern char DAT_0010318c[];
extern char DAT_001031a8[];
extern char DAT_001031c4[];
extern char DAT_001031e0[];
extern char DAT_00103220[];
extern char DAT_0010323b[];

char DAT_00102eb6[] = "BinBench";
char DAT_00102f04[] = "strlen: %u\n";
char DAT_00102f1f[] = "call_memcpy: %u\n";
char DAT_00102f3a[] = "call_memcmp: %u\n";
char DAT_00102f56[] = "memcmp: %d\n";
char DAT_00102f72[] = "call_memcmp: %u\n";
char DAT_00102f8e[] = "Value: %d, Name: %s\n";
char DAT_00102faa[] = "scanf: %u\n";
char DAT_00102fc7[] = "param_fopen_fclose: %u\n";
char DAT_00102fe3[] = "param_fread_fwrite: %u\n";
char DAT_00102fff[] = "param_malloc_free: %u\n";
char DAT_0010301b[] = "call_memset: %u\n";
char DAT_00103036[] = "call_strchr_strstr: %u\n";
char DAT_00103085[] = "param_linux_syscall: %u\n";
char DAT_001030a1[] = "param_win32_api: %u\n";
char DAT_001030bd[] = "param_fork_exec: %u\n";
char DAT_001030d9[] = "param_pipe_communication: %u\n";
char DAT_001030f5[] = "param_socket_create: %u\n";
char DAT_00103111[] = "param_shmget_shmat: %u\n";
char DAT_0010312d[] = "param_signal_handling: %u\n";
char DAT_00103153[] = "param_pthread_create: %u\n";
char DAT_0010316f[] = "param_pthread_join: %u\n";
char DAT_0010318c[] = "param_mutex_lock: %u\n";
char DAT_001031a8[] = "param_condition_variable: %u\n";
char DAT_001031c4[] = "param_atomic_ops: %u\n";
char DAT_001031e0[] = "param_thread_local_storage: %u\n";
char DAT_001031fc[] = "=== Testing Standard Library Functions ===\n";
char DAT_00103220[] = "=== Testing System Calls ===\n";
char DAT_0010323b[] = "=== Testing Thread Concurrency ===\n";

typedef union {
    uint64_t _8_8_;
    struct {
        int _0_4_;
        int _4_4_;
    };
    struct {
        byte _0_1_;
        byte _1_1_;
        byte _2_1_;
        byte _3_1_;
        byte _4_1_;
        byte _5_1_;
        byte _6_1_;
        byte _7_1_;
    };
} atomic_counter_t;

typedef union {
    uint64_t _8_8_;
    struct {
        byte _0_1_;
        byte _1_1_;
        byte _2_1_;
        byte _3_1_;
        byte _4_1_;
        byte _5_1_;
        byte _6_1_;
        byte _7_1_;
    };
} char_buffer_t;

atomic_counter_t atomic_counter;

int main(int argc, char **argv, char **envp);

// Decompiled by BinaryAI
// SHA256: 485afd5ca363510d12bae47a2633c5a07b7f5fe6b49849b7686a7926f39eab73

void call_weak_fn(void);
void signal_handler(int);
int execv(char *__path, char **__argv);

/* ARM64 atomic intrinsics */
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);

/* ARM64 exclusive monitor and lock functions - implementations */
int ExclusiveMonitorPass(void) {
    int result;
    __asm__ volatile("ldxr %0, [sp]" : "=r"(result) ::: "memory");
    __asm__ volatile("stxr %w0, %0, [sp]" : "+r"(result) ::: "memory");
    return result == 0;
}

int ExclusiveMonitorsStatus(void) {
    int result;
    __asm__ volatile("clrex" ::: "memory");
    return 0;  /* Success - exclusive monitor cleared */
}

void LOAcquire(void) {
    __asm__ volatile("dmb ish" ::: "memory");
}

void LORelease(void) {
    __asm__ volatile("dmb ish" ::: "memory");
}



// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
 void (*fn_ptr)(void) = (void (*)(void))0x0;
 if (fn_ptr != NULL) {
 fn_ptr();
 }
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x101300
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::_exit @ 0x101310
extern void _exit(int __status);

// Function: <EXTERNAL>::strlen @ 0x101320
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::raise @ 0x101330
extern int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x101340
/* The real __libc_start_main is in libc - this is just a stub */
extern void __libc_start_main_real(int (*main)(int, char **, char **), unsigned long long argc, char **argv, void (*init)(void), void (*fini)(void), unsigned long long stack_end);

// Function: <EXTERNAL>::execl @ 0x101350
int execl(const char *__path, const char *__arg, ...)
{
 int iVar1;
 va_list args;
 char **argv;
 int argc;
 const char *arg;
 int i;
 
 /* Count arguments */
 va_start(args, __arg);
 argc = 2; /* path + first arg */
 while ((arg = va_arg(args, const char *)) != NULL) {
 argc++;
 }
 va_end(args);
 
 /* Build argv array */
 argv = (char **)malloc(argc * sizeof(char *));
 va_start(args, __arg);
 argv[0] = (char *)__path;
 argv[1] = (char *)__arg;
 for (i = 2; i < argc; i++) {
 argv[i] = (char *)va_arg(args, const char *);
 }
 va_end(args);
 argv[argc] = NULL;
 
 iVar1 = execv((char *)__path, argv);
 free(argv);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x101360
extern int listen(int __fd,int __n);

// Function: <EXTERNAL>::shmdt @ 0x101370
extern int shmdt(const void *__shmaddr);

// Function: <EXTERNAL>::bind @ 0x101380
extern int bind(int __fd,const sockaddr *__addr,socklen_t __len);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101390
// void __cxa_finalize(void *) is declared in cstdlib

// Function: <EXTERNAL>::pipe @ 0x1013a0
extern int pipe(int *__pipedes);

// Function: <EXTERNAL>::fork @ 0x1013b0
extern __pid_t fork(void);

// Function: <EXTERNAL>::snprintf @ 0x1013c0
int my_snprintf(char *__s,size_t __maxlen,const char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vsnprintf(__s,__maxlen,__format,args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::fileno @ 0x1013d0
extern int fileno(FILE *__stream);

// Function: <EXTERNAL>::signal @ 0x1013e0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::fclose @ 0x1013f0
extern int fclose(FILE *__stream);

// Function: <EXTERNAL>::fopen @ 0x101400
extern FILE * fopen(const char *__filename,const char *__modes);

// Function: <EXTERNAL>::malloc @ 0x101410
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::setsockopt @ 0x101420
extern int setsockopt(int __fd,int __level,int __optname,const void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::open @ 0x101430
extern int open(const char *__file,int __oflag,...);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101440
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::memset @ 0x101450
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::shmat @ 0x101460
extern void * shmat(int __shmid,const void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::sleep @ 0x101470
extern unsigned int sleep(unsigned int __seconds);

// Function: <EXTERNAL>::rewind @ 0x101480
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::close @ 0x101490
extern int close(int __fd);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014a0
extern void __gmon_start__(void);

// Function: <EXTERNAL>::stat @ 0x1014b0
extern int stat(const char *__file,struct stat *__buf);

// Function: <EXTERNAL>::write @ 0x1014c0
extern ssize_t write(int __fd,const void *__buf,size_t __n);

// Function: <EXTERNAL>::__getauxval @ 0x1014d0
extern unsigned long __getauxval(unsigned long __type);

// Function: <EXTERNAL>::abort @ 0x1014e0
extern void abort(void);



// Function: <EXTERNAL>::memcmp @ 0x101500
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::strcmp @ 0x101510
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::shmctl @ 0x101520
extern int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf);

// Function: <EXTERNAL>::fread @ 0x101530
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::ftok @ 0x101540
extern key_t ftok(const char *__pathname,int __proj_id);

// Function: <EXTERNAL>::free @ 0x101550
extern void free(void *__ptr);

// Function: <EXTERNAL>::shmget @ 0x101560
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101570
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::strchr @ 0x101580
extern char * strchr(char *__s,int __c);



// Function: <EXTERNAL>::pthread_create @ 0x1015a0
// int pthread_create is declared in pthread.h

// Function: <EXTERNAL>::wait @ 0x1015b0
extern __pid_t wait(void *__stat_loc);

// Function: <EXTERNAL>::socket @ 0x1015c0
extern int socket(int __domain,int __type,int __protocol);

// Function: <EXTERNAL>::strcpy @ 0x1015d0
extern char * strcpy(char *__dest,char *__src);

// Function: <EXTERNAL>::read @ 0x1015e0
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);

// Function: <EXTERNAL>::strstr @ 0x1015f0
extern char * strstr(char *__haystack,char *__needle);

// Function: <EXTERNAL>::usleep @ 0x101600
extern int usleep(__useconds_t __useconds);

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101610
int __isoc99_sscanf(char *__s,char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vsscanf(__s, __format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101620
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::printf @ 0x101630
// int printf is declared in stdio.h
extern int printf(const char *__restrict __format, ...);

// Function: <EXTERNAL>::__errno_location @ 0x101640
extern int * __errno_location(void);

// Function: <EXTERNAL>::pthread_join @ 0x101650
extern int pthread_join(pthread_t __th,void **__thread_return);

// Function: <EXTERNAL>::alarm @ 0x101660
extern unsigned int alarm(unsigned int __seconds);

// Function: <EXTERNAL>::pthread_cancel @ 0x101670
extern int pthread_cancel(pthread_t __th);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101680
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::syscall @ 0x101690
extern long syscall(long __sysno,...);

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1016a0
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::waitpid @ 0x1016b0
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);

// Function: <EXTERNAL>::unlink @ 0x1016c0
extern int unlink(const char *__name);

// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 unsigned long auxval;
 auxval = __getauxval(0x10);
 atomic_counter._4_1_ = auxval & 1;
 return;
}









// Function: deregister_tm_clones @ 0x1017f0
void deregister_tm_clones(void)
{
 /* Empty implementation - compiler-generated cleanup stub */
 return;
}

// Function: FUN_001017fc @ 0x1017fc
void FUN_001017fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}



// Function: param_strcpy @ 0x101854
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x10186c
void call_strcpy(void)
{
 char_buffer_t local_30;
 char local_28;
 local_28 = 0;
 local_30._0_1_ = 'H';
 local_30._1_1_ = 'e';
 local_30._2_1_ = 'l';
 local_30._3_1_ = 'l';
 local_30._4_1_ = 'o';
 local_30._5_1_ = 'L';
 local_30._6_1_ = 'i';
 local_30._7_1_ = 'b';
 strlen((char *)&local_30);
 return;
}

// Function: param_strcmp @ 0x1018a0
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar2 = strcmp(param_1,param_2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_strcmp @ 0x1018c4
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x1018cc
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x1018e0
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x1018e8
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x10190c
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x101914
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = memcmp(param_1,param_2,param_3);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}

// Function: call_memcmp @ 0x101938
unsigned long long call_memcmp(int param_1)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x101940
int param_printf(char *param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf(param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101954
int call_printf(void)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,(char *)&DAT_00102eb6);
 return iVar1;
}

// Function: param_scanf @ 0x10196c
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf((char *)param_1,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: call_scanf @ 0x1019ac
int call_scanf(void)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}

// Function: param_fopen_fclose @ 0x1019f4
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

// Function: call_fopen_fclose @ 0x101a3c
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101a64
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 unsigned long local_50;
 unsigned char uStack_48[3];
 unsigned char local_45[5];
 unsigned int uStack_40;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(char *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if (sVar2 == 0x12) {
 uVar1 = 0x2a;
 }
 }
 else {
 fclose(__s);
 uVar1 = 0xfffffffe;
 }
 }
 return uVar1;
}

// Function: call_fread_fwrite @ 0x101b78
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101b84
int param_malloc_free(long param_1)
{
 char auVar1 [16];
 int *__ptr;
 int extraout_w8;
 int iVar2;
 unsigned long uVar3;
 int *piVar4;
 long lVar5;
 long lVar6;
 char auVar7 [16];
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = extraout_w8;
 if (param_1 != 0) {
 iVar2 = 0;
 uVar3 = param_1 + 1U & 0xfffffffffffffffe;
 lVar6 = 1;
 lVar5 = 0;
 piVar4 = __ptr + 1;
 do {
 piVar4[-1] = iVar2;
 *piVar4 = iVar2 + 10;
 lVar5 = lVar5 + 2;
 lVar6 = lVar6 + 2;
 piVar4 = piVar4 + 2;
 uVar3 = uVar3 - 2;
 iVar2 = iVar2 + 0x14;
 } while (uVar3 != 0);
 iVar2 = *__ptr;
 }
 iVar2 = __ptr[param_1 + -1] + iVar2;
 free(__ptr);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x101c34
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x101c3c
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 memset(param_1,0,param_2);
 iVar1 = 0;
 if (param_2 != 0) {
 do {
 param_2 = param_2 - 1;
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x101c80
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x101c88
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = (int)(pcVar3 - param_1);
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = (int)(pcVar3 - param_1);
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}

// Function: call_strchr_strstr @ 0x101ce0
int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x101ce8
int test_standard_library_functions(void)
{
 int iVar1;
 uint uVar2;
 size_t sVar3;
 unsigned long uVar4;
 char_buffer_t local_40;
 char local_38;
 int local_4;
 puts(&DAT_001031fc);
 local_38 = 0;
 local_40._0_1_ = 'H';
 local_40._1_1_ = 'e';
 local_40._2_1_ = 'l';
 local_40._3_1_ = 'l';
 local_40._4_1_ = 'o';
 local_40._5_1_ = 'L';
 local_40._6_1_ = 'i';
 local_40._7_1_ = 'b';
 sVar3 = strlen((char *)&local_40);
 printf(&DAT_00102f04,sVar3);
 printf(&DAT_00102f1f,0);
 printf(&DAT_00102f3a,0xc);
 iVar1 = printf(&DAT_00102f56,0x5a);
 uVar4 = call_memcmp(iVar1);
 printf(&DAT_00102f72,uVar4 & 0xffffffff);
 uVar2 = printf((char *)&DAT_00102f8e,0x2a,(char *)&DAT_00102eb6);
 printf(&DAT_00102f8e,(unsigned long)uVar2);
	iVar1 = __isoc99_sscanf((char *)"123,456","%d,%d",(int *)&local_40._0_1_,&local_4);
	uVar2 = local_4 + *(int *)&local_40._0_1_;
 if (iVar1 != 2) {
 uVar2 = 0xffffffff;
 }
 printf(&DAT_00102faa,(unsigned long)uVar2);
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 printf(&DAT_00102fc7,(unsigned long)uVar2);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00102fe3,uVar4 & 0xffffffff);
 uVar4 = param_malloc_free(10);
 printf(&DAT_00102fff,uVar4 & 0xffffffff);
 printf(&DAT_0010301b,0);
	iVar1 = printf(&DAT_00103036,(unsigned long long)0xf);
 return iVar1;
}

// Function: param_linux_syscall @ 0x101e60
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x101eb4
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall((unsigned long long)(unsigned long)"/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x101edc
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_60;
 iVar1 = stat(param_1,&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x101f18
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat local_60;
 iVar1 = stat("/etc/passwd",&local_60);
 uVar2 = 0x2a;
 if (local_60.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x101f5c
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_24;
 char arg_buf[32];
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 snprintf(arg_buf, sizeof(arg_buf), "%llu", param_2);
 execl((const char *)param_1,(const char *)param_1,(const char *)arg_buf,(char *)0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 uVar2 = 0xfffffffe;
 }
 else if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x101fe4
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0x2a;
 if (iVar1 != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x102010
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_48 [32];
 int local_28;
 int local_24;
 iVar1 = pipe(&local_28);
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
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 _exit(0);
 }
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x1020cc
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 sockaddr local_38;
 unsigned int local_24;
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
 local_38.sa_family = 2;
 local_38.sa_data[0] = '\0';
 local_38.sa_data[1] = '\0';
 local_38.sa_data[2] = '\0';
 local_38.sa_data[3] = '\0';
 local_38.sa_data[4] = '\0';
 local_38.sa_data[5] = '\0';
 local_38.sa_data[6] = '\0';
 local_38.sa_data[7] = '\0';
 local_38.sa_data[8] = '\0';
 local_38.sa_data[9] = '\0';
 local_38.sa_data[10] = '\0';
 local_38.sa_data[11] = '\0';
 local_38.sa_data[12] = '\0';
 local_38.sa_data[13] = '\0';
 iVar1 = bind(__fd,&local_38,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 }
 }
 return uVar2;
}

// Function: param_shmget_shmat @ 0x102194
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
 size_t sVar2;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
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
 goto LAB_00102240;
 }
 }
 sVar2 = 0xffffffff;
LAB_00102240:
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x102264
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x102284
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 unsigned long long uVar4;
 int iVar5;
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xffffffff;
 }
 else {
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 uVar4 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar5 = 1000;
 do {
 usleep(1000);
 bVar2 = iVar5 != 0;
 bVar1 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if (signal_received == 0) {
 uVar4 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar5 = 2000;
 do {
 usleep(1000);
 bVar2 = iVar5 != 0;
 bVar1 = iVar5 != 1;
 iVar5 = iVar5 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar4 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar4 = 0x2a;
 }
 }
 else {
 uVar4 = 0xfffffffc;
 }
 }
 }
 return uVar4;
}

// Function: signal_handler @ 0x1023b8
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x1023d4
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uint uVar4;
 struct stat local_stat;
 puts(&DAT_00103220);
 iVar1 = param_linux_syscall((unsigned long long)"/etc/passwd");
 uVar3 = 0x2a;
 uVar4 = uVar3;
 if (iVar1 < 0) {
 uVar4 = 0xffffffff;
 }
 printf(DAT_00103085,(unsigned long)uVar4);
 iVar1 = stat("/etc/passwd",&local_stat);
 if (local_stat.st_size < 1) {
 uVar3 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 printf(&DAT_001030a1,(unsigned long)uVar3);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar4 = 0x2a;
 uVar3 = uVar4;
 if (iVar1 != 0) {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(&DAT_001030bd,(unsigned long)uVar3);
 uVar2 = param_pipe_communication();
 iVar1 = printf(&DAT_001030d9,uVar2 & 0xffffffff);
 uVar2 = param_socket_create();
 iVar1 = printf(&DAT_001030f5,uVar2 & 0xffffffff);
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar4 = 0xffffffff;
 }
 iVar1 = printf(&DAT_00103111,(unsigned long)uVar4);
 uVar2 = param_signal_handling();
 iVar1 = printf(&DAT_0010312d,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: thread_compute @ 0x1024cc
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x1024f8
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,(void **)&local_30);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x10255c
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x102564
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *piVar1;
 piVar1 = (uint *)param_1;
 uVar1 = *piVar1;
 uVar2 = piVar1[1];
 piVar1[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 piVar1[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)(uVar2 - uVar1) >> 1);
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x102598
int param_pthread_join(int unused_param)
{
 int iVar1;
 int iVar2;
 unsigned long long *__arg;
 long lVar3;
 int *piVar4;
 unsigned long long local_70;
 int local_68;
 unsigned int uStack_64;
 unsigned int uStack_60;
 unsigned int uStack_5c;
 unsigned long long local_58;
 unsigned int local_50;
 pthread_t local_48 [3];
 __arg = &local_70;
 lVar3 = 0;
 local_68 = 0;
 uStack_5c = 0;
 local_50 = 0;
 local_70 = 0xa00000001;
 uStack_64 = 0xb;
 uStack_60 = 0x14;
 local_58 = 0x1e00000015;
 do {
 iVar1 = pthread_create(&local_48[lVar3/8],(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = __arg + 3;
 lVar3 = lVar3 + 8;
 } while (lVar3 != 0x18);
 lVar3 = 0;
 iVar1 = 0;
 piVar4 = &local_68;
 do {
 iVar2 = pthread_join(local_48[lVar3/8],NULL);
 if (iVar2 != 0) {
 return -2;
 }
 lVar3 = lVar3 + 8;
 iVar1 = *piVar4 + iVar1;
 piVar4 = piVar4 + 3;
 } while (lVar3 != 0x18);
 return iVar1;
}

// Function: thread_increment @ 0x102678
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
 return (void *)0;
}

// Function: param_mutex_lock @ 0x1026e0
unsigned int param_mutex_lock(unsigned long param_1, int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 long lVar5;
 int local_34;
 param_1 = param_1 & 0xffffffff;
 local_34 = 1000;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar3 = (int)param_1;
 shared_counter = 0;
 if (0 < iVar3) {
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (param_1 * 8 - lVar5 != 0);
 ppVar4 = __ptr;
 if (0 < iVar3) {
 do {
 pthread_join(*ppVar4,NULL);
 param_1 = param_1 - 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_34 * iVar3) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x1027cc
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x1027d8
void *consumer_thread(void *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
	pthread_mutex_lock(&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x102864
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

// Function: param_condition_variable @ 0x1028c0
unsigned int param_condition_variable(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 param_1 = param_1;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,(void **)&local_30);
 pthread_join(local_8,NULL);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 pthread_cancel(local_28);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: thread_atomic_increment @ 0x10296c
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x1029d0
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter._0_4_ = *(int *)&atomic_counter + 100;
 return (void *)0;
}

// Function: param_atomic_ops @ 0x1029ec
unsigned int param_atomic_ops(unsigned long param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 pthread_t *ppVar3;
 long lVar4;
 pthread_t local_50;
 unsigned int local_44;
 param_1 = param_1 & 0xffffffff;
 local_44 = param_2;
 __ptr = (pthread_t *)malloc(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while (param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_50,NULL);
 }
 ppVar3 = __ptr;
 if (0 < (int)param_1) {
 do {
 pthread_join(*ppVar3,NULL);
 param_1 = param_1 - 1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar1 = atomic_counter._0_4_;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x102b00
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x102b0c
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 char *char_param = (char *)param_1;
 __asm__ volatile("mrs %0, tpidr_el0" : "=r" (lVar3));
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),char_param,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)piVar4;
}

// Function: param_thread_local_storage @ 0x102b5c
unsigned int param_thread_local_storage(unsigned long param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 unsigned int uVar2;
 int iVar3;
 unsigned long uVar4;
 unsigned long uVar5;
 pthread_t *ppVar6;
 int iVar7;
 void **ppvVar8;
 int *local_58;
 param_1 = param_1 & 0xffffffff;
 uVar5 = -(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3;
 __ptr = (pthread_t *)malloc(uVar5);
 __ptr_00 = (void **)malloc(uVar5);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void **)0x0) {
 return 0xffffffff;
 }
 iVar3 = (int)param_1;
 if (0 < iVar3) {
 uVar5 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[uVar5] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar5 & 0xffffffff);
 uVar5 = uVar5 + 1;
 } while (param_1 != uVar5);
 if (0 < iVar3) {
 uVar5 = 0;
 ppVar6 = __ptr;
 do {
 iVar1 = pthread_create(ppVar6,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[uVar5]);
 uVar5 = uVar5 + 1;
 if (iVar1 != 0) {
 uVar4 = 0;
 do {
 free(__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar6 = ppVar6 + 1;
 } while (param_1 != uVar5);
 if (0 < iVar3) {
 iVar7 = 0;
 iVar1 = 0;
 ppVar6 = __ptr;
 ppvVar8 = __ptr_00;
 do {
 pthread_join(*ppVar6,(void **)&local_58);
 iVar1 = *local_58 + iVar1;
 iVar7 = local_58[1] + iVar7;
 free(local_58);
 free(*ppvVar8);
 param_1 = param_1 - 1;
 ppVar6 = ppVar6 + 1;
 ppvVar8 = ppvVar8 + 1;
 } while (param_1 != 0);
 goto LAB_00102c78;
 }
 }
 }
 iVar1 = 0;
 iVar7 = 0;
LAB_00102c78:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != iVar3 * 0x96 || iVar1 != iVar3 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x102cf8
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x102d00
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(&DAT_0010323b);
 uVar2 = param_pthread_create(7);
 iVar1 = printf(DAT_00103153,uVar2);
 uVar2 = param_pthread_join(iVar1);
 printf((char *)&DAT_0010316f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(&DAT_0010318c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable(iVar1);
 printf(&DAT_001031a8,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001031c4,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(&DAT_001031e0,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x102da8
int main(int argc, char **argv, char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x102dd0
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if (atomic_counter._4_1_ != '\0') {
 iVar3 = *param_3;
 if (iVar3 == param_1) {
 *param_3 = param_2;
 }
 return iVar3;
 }
 do {
 iVar3 = *param_3;
 if (*param_3 != param_1) {
 return iVar3;
 }
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass();
 if (bVar2) {
 *param_3 = param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x102e10
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 int tmp_ldWn;
 int tmp_stWn;
 char cVar2;
 bool bVar3;
 if (atomic_counter._4_1_ == '\0') {
 do {
 iVar1 = *param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass();
 if (bVar3) {
 *param_2 = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_2;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_1;
 iVar1 = tmp_stWn;
 *param_2 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}



