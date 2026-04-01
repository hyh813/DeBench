/* Auto-injected type definitions by preprocessor */
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
typedef long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdbool.h>

/* Additional type definitions needed for compilation */
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int socklen_t;
typedef unsigned int useconds_t;
typedef int key_t;
typedef long time_t;
typedef int pid_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef unsigned int mode_t;
typedef long ssize_t;

/* Minimal struct definitions for system calls */
struct shmid_ds {
    struct ipc_perm shm_perm;
    size_t shm_segsz;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    pid_t shm_cpid;
    pid_t shm_lpid;
    unsigned long shm_nattch;
    unsigned long __pad1;
    unsigned long __pad2;
};

struct ipc_perm {
    key_t __key;
    uid_t uid;
    gid_t gid;
    uid_t cuid;
    gid_t cgid;
    unsigned short mode;
    unsigned short __pad1;
};

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
    struct {
        long tv_sec;
        long tv_nsec;
    } st_atim;
    struct {
        long tv_sec;
        long tv_nsec;
    } st_mtim;
    struct {
        long tv_sec;
        long tv_nsec;
    } st_ctim;
    long __glibc_reserved[3];
};

struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

/* Forward declarations for system types */


/* Helper functions for decompiler-generated code */
static inline int SUB161(unsigned long long x, int shift) {
    return (int)(x >> shift);
}
static inline int SUB137(unsigned long long x, int shift) {
    return (int)(x >> shift);
}
static inline unsigned long long ZEXT812(unsigned long long x) {
    return x & 0xFF;
}
static inline unsigned long long ZEXT712(unsigned long long x) {
    return x & 0xFF;
}
static inline unsigned int CONCAT14(char high, unsigned short low) {
    return ((unsigned int)(unsigned char)high << 8) | low;
}
static inline unsigned int CONCAT72(int high, unsigned short low) {
    return ((unsigned int)(unsigned char)high << 8) | low;
}
static inline unsigned int CONCAT32(unsigned short high, unsigned short low) {
    return ((unsigned int)high << 8) | low;
}

/* Additional type definitions */
typedef unsigned int uint5;
typedef unsigned int unkuint10;
typedef unsigned int uint6;
typedef unsigned short ushort;
typedef unsigned char uint3;
typedef unsigned char byte;

/* Helper union for bit manipulation in decompiled code */
typedef union {
    struct {
        uint64_t _0_8_;
        uint64_t _8_8_;
    } qword_fields;
    struct {
        uint8_t _0_1_;
        uint8_t _1_1_;
        uint8_t _2_1_;
        uint8_t _3_1_;
        uint8_t _4_1_;
        uint8_t _5_1_;
        uint8_t _6_1_;
        uint8_t _7_1_;
        uint8_t _8_1_;
        uint8_t _9_1_;
        uint8_t _10_1_;
        uint8_t _11_1_;
        uint8_t _12_1_;
        uint8_t _13_1_;
        uint8_t _14_1_;
        uint8_t _15_1_;
    } byte_fields;
    uint64_t _0_16_;
    uint32_t _0_4_;
    uint32_t _4_4_;
    uint32_t _8_4_;
    uint32_t _12_4_;
    uint16_t _0_2_;
    uint16_t _2_2_;
    uint16_t _4_2_;
    uint16_t _6_2_;
    uint16_t _8_2_;
    uint16_t _10_2_;
    uint16_t _12_2_;
    uint16_t _14_2_;
    uint8_t bytes[16];
    uint64_t qwords[2];
    uint32_t dwords[4];
    uint16_t words[8];
} bitfield_t;







/* Missing libc function declarations */
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                             void (*init)(void), void (*fini)(void), 
                             void (*rtld_fini)(void), void *stack_end);
extern int vsscanf(const char *str, const char *format, va_list ap);
typedef unsigned long pthread_t;
typedef struct { unsigned long __pthread_attr_flags; void *__stackaddr; size_t __stacksize; } pthread_attr_t;
typedef void *(*__start_routine)(void *);

/* Forward declarations */
void signal_handler(int param_1);
int main(int argc, char **argv);

/* LOCK/UNLOCK macros for atomic operations */
#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

/* Global variables */
char completed_0 = 0;
void *__dso_handle = NULL;

int __gmon_start__(void) {
    return 0;
}

/* Data references */
char DAT_001040d9[] = "TestName";
char DAT_0010441f[] = "=== Testing Standard Library Functions ===";
char DAT_00104127[] = "strlen result: %lu\n";
char DAT_00104142[] = "strcmp result: %d\n";
char DAT_0010415d[] = "strlen test: %lu\n";
char DAT_00104179[] = "memcpy result: %lu\n";
char DAT_00104195[] = "memcmp result: %lu\n";
char DAT_001041b1[] = "printf chars written: %lu\n";
char DAT_001041cd[] = "scanf result: %lu\n";
char DAT_001041ea[] = "fopen/fclose result: %lu\n";
char DAT_00104206[] = "fread/fwrite result: %lu\n";
char DAT_00104222[] = "malloc/free result: %lu\n";
char DAT_0010423e[] = "memset result: %lu\n";
char DAT_00104259[] = "strchr/strstr result: %lu\n";
char DAT_00104443[] = "=== Testing System Calls ===";
char DAT_001042a8[] = "syscall result: %lu\n";
char DAT_001042c4[] = "stat result: %lu\n";
char DAT_001042e0[] = "fork/exec result: %lu\n";
char DAT_001042fc[] = "pipe result: %lu\n";
char DAT_00104318[] = "socket result: %lu\n";
char DAT_00104334[] = "shm result: %lu\n";
char DAT_00104350[] = "signal result: %lu\n";
char DAT_0010445e[] = "=== Testing Thread Concurrency ===";
char DAT_00104376[] = "pthread_create result: %lu\n";
char DAT_00104392[] = "pthread_join result: %lu\n";
char DAT_001043af[] = "mutex lock result: %lu\n";
char DAT_001043cb[] = "condition variable result: %lu\n";
char DAT_001043e7[] = "atomic ops result: %lu\n";
char DAT_00104403[] = "thread local storage result: %lu\n";
char s_Bench_Test_Data_00104010[] = "BinBench Test Data";
unsigned long long _DAT_00104040 = 0;

/* Global state variables */
volatile int signal_received = 0;
volatile int signal_number = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
volatile int ready = 0;
volatile int data = 0;
volatile int shared_counter = 0;
volatile int atomic_counter = 0;

// Decompiled by BinaryAI
// SHA256: 3dadedde6a7f6075a4941bbd8a4aafabdeb52a46fca8e5d76d4c2be767a887bb

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

// Function: <EXTERNAL>::raise @ 0x102030
extern int raise(int __sig);

// Function: <EXTERNAL>::free @ 0x102040
extern void free(void *__ptr);

// Function: <EXTERNAL>::__errno_location @ 0x102050
extern int * __errno_location(void);

// Function: <EXTERNAL>::unlink @ 0x102060
extern int unlink(const char *__name);

// Function: <EXTERNAL>::strncpy @ 0x102070
extern char * strncpy(char *__dest,const char *__src,size_t __n);

// Function: <EXTERNAL>::_exit @ 0x102080
extern void _exit(int __status);

// Function: <EXTERNAL>::strcpy @ 0x102090
extern char * strcpy(char *__dest,const char *__src);

// Function: <EXTERNAL>::puts @ 0x1020a0
extern int puts(char *__s);

// Function: <EXTERNAL>::fread @ 0x1020b0
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::setsockopt @ 0x1020c0
extern int setsockopt(int __fd,int __level,int __optname,const void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::shmdt @ 0x1020d0
extern int shmdt(const void *__shmaddr);

// Function: <EXTERNAL>::write @ 0x1020e0
extern ssize_t write(int __fd,const void *__buf,size_t __n);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x1020f0
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::fclose @ 0x102100
extern int fclose(FILE *__stream);

// Function: <EXTERNAL>::strlen @ 0x102110
extern size_t strlen(const char *__s);

// Function: <EXTERNAL>::strchr @ 0x102120
extern char * strchr(const char *__s,int __c);

// Function: <EXTERNAL>::printf @ 0x102130
extern int printf(const char *__format,...);

// Function: <EXTERNAL>::rewind @ 0x102140
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::snprintf @ 0x102150
extern int snprintf(char *__s,size_t __maxlen,const char *__format,...);

// Function: <EXTERNAL>::memset @ 0x102160
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::alarm @ 0x102170
extern unsigned int alarm(unsigned int __seconds);

// Function: <EXTERNAL>::close @ 0x102180
extern int close(int __fd);

// Function: <EXTERNAL>::pipe @ 0x102190
extern int pipe(int *__pipedes);

// Function: <EXTERNAL>::read @ 0x1021a0
extern ssize_t read(int __fd,void *__buf,size_t __count);

// Function: <EXTERNAL>::memcmp @ 0x1021b0
extern int memcmp(const void *__s1,const void *__s2,size_t __n);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x1021c0
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::strcmp @ 0x1021d0
extern int strcmp(const char *__s1,const char *__s2);

// Function: <EXTERNAL>::signal @ 0x1021e0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::syscall @ 0x1021f0
extern long syscall(long __sysno,...);

// Function: <EXTERNAL>::stat @ 0x102200
extern int stat(const char *__file,struct stat *__buf);

// Function: <EXTERNAL>::memcpy @ 0x102210
extern void * memcpy(void *__dest,const void *__src,size_t __n);

// Function: <EXTERNAL>::fileno @ 0x102220
extern int fileno(FILE *__stream);

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x102230
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::malloc @ 0x102240
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x102250
int __isoc99_sscanf(const char *__str,const char *__format,...)
{
 int iVar1;
 va_list ap;
 va_start(ap, __format);
 iVar1 = vsscanf(__str, __format, ap);
 va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x102260
extern int listen(int __fd,int __backlog);

// Function: <EXTERNAL>::bind @ 0x102270
extern int bind(int __fd,struct sockaddr *__addr,socklen_t __len);

// Function: <EXTERNAL>::pthread_create @ 0x102280
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg);

// Function: <EXTERNAL>::waitpid @ 0x102290
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);

// Function: <EXTERNAL>::open @ 0x1022a0
extern int open(char *__file,int __oflag,...);

// Function: <EXTERNAL>::shmctl @ 0x1022b0
extern int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf);

// Function: <EXTERNAL>::fopen @ 0x1022c0
extern FILE * fopen(const char *__filename,const char *__modes);

// Function: <EXTERNAL>::shmat @ 0x1022d0
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::shmget @ 0x1022e0
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::fwrite @ 0x1022f0
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);

// Function: <EXTERNAL>::ftok @ 0x102300
extern key_t ftok(char *__pathname,int __proj_id);

// Function: <EXTERNAL>::pthread_join @ 0x102310
extern int pthread_join(pthread_t __th,void **__thread_return);

// Function: <EXTERNAL>::execl @ 0x102320
extern int execl(char *__path,char *__arg,...);

// Function: <EXTERNAL>::pthread_cancel @ 0x102330
extern int pthread_cancel(pthread_t __th);

// Function: <EXTERNAL>::sleep @ 0x102340
extern unsigned int sleep(unsigned int __seconds);

// Function: <EXTERNAL>::wait @ 0x102350
extern __pid_t wait(void *__stat_loc);

// Function: <EXTERNAL>::fork @ 0x102360
extern __pid_t fork(void);

// Function: <EXTERNAL>::strstr @ 0x102370
extern char * strstr(const char *__haystack,const char *__needle);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x102380
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::usleep @ 0x102390
extern int usleep(unsigned int __useconds);

// Function: <EXTERNAL>::socket @ 0x1023a0
extern int socket(int __domain,int __type,int __protocol);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1023b0
extern void __cxa_finalize(void *dso_handle);

// Function: _start @ 0x1023c0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main((int (*)(void))main,(int)(param_2 & 0xffffffff),auStack_8,0,0,(void *)param_1,auStack_8);
 _exit(0);
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
 printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 int val1, val2;
 iVar1 = __isoc99_sscanf((const char *)param_1,"%d,%d",&val1,&val2);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = val1 + val2;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int val1, val2;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&val1,&val2);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = val1 + val2;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
int param_fopen_fclose(char *param_1)
{
 int iVar1;
 FILE *__stream;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
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
 auVar3 = auVar3 & auVar4;
 uVar2 = 0xfffffffd;
 if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
 (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
 (ushort)(byte)(auVar3[15] >> 7) << 0xf) == 0xffff) {
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
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 unsigned long uVar3;
 int iVar4;
 unsigned long uVar5;
 int unaff_EBP;
 unsigned long lVar6;
 unsigned long uVar7;
 __ptr = (int *)malloc((size_t)param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 == 0) goto LAB_00102921;
 if (param_1 < 8) {
 uVar3 = 0;
LAB_00102904:
 iVar4 = (int)uVar3 * 10;
 do {
 __ptr[uVar3] = iVar4;
 uVar3 = uVar3 + 1;
 iVar4 = iVar4 + 10;
 } while (param_1 != uVar3);
 }
 else {
 uVar3 = param_1 & 0xfffffffffffffff8;
 uVar5 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar4 = 0;
 lVar6 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffffffffffe;
 lVar6 = 0;
 do {
 iVar4 = (int)lVar6 * 10;
 __ptr[lVar6] = iVar4;
 __ptr[lVar6 + 1] = iVar4 + 10;
 __ptr[lVar6 + 2] = iVar4 + 20;
 __ptr[lVar6 + 3] = iVar4 + 30;
 lVar6 = lVar6 + 4;
 uVar7 = uVar7 - 2;
 } while (uVar7 != 0);
 iVar4 = (int)lVar6 * 10;
 }
 if ((uVar5 & 1) != 0) {
 __ptr[lVar6] = iVar4;
 __ptr[lVar6 + 1] = iVar4 + 10;
 __ptr[lVar6 + 2] = iVar4 + 20;
 __ptr[lVar6 + 3] = iVar4 + 30;
 }
 if (uVar3 != param_1) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar4 = __ptr[param_1 - 1];
 free(__ptr);
 return unaff_EBP + iVar4;
}

// Function: call_malloc_free @ 0x102950
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x102960
int param_memset(void *param_1, size_t param_2)
{
    int iVar32;
    unsigned long uVar29;
    
    iVar32 = 0;
    memset(param_1, 0, param_2);
    
    if (param_2 != 0) {
        uVar29 = 0;
        do {
            iVar32 = iVar32 + (uint)*(unsigned char *)((long)param_1 + uVar29);
            uVar29 = uVar29 + 1;
        } while (param_2 != uVar29);
    }
    return iVar32;
}

// Function: call_memset @ 0x102aa0
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x102ab0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102af0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102b00
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_3c;
 unsigned long long local_38;
 char local_30;
 puts(&DAT_0010441f);
 local_38 = 0x62694c6f6c6c6548;
 local_30 = 0;
 sVar3 = strlen((char *)&local_38);
 printf(&DAT_00104127,sVar3 & 0xffffffff);
 printf(&DAT_00104142,0);
 printf(&DAT_0010415d,0xc);
 printf(&DAT_00104179,0x5a);
 uVar4 = 0xffffffff;
 printf(&DAT_00104195,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 printf(&DAT_001041b1,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_38,&local_3c);
 uVar1 = local_3c + (int)local_38;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_001041ea,(unsigned long)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104206,(unsigned long)uVar1);
 printf(&DAT_00104222,0x5a);
 printf(&DAT_0010423e,0);
 printf(&DAT_00104259,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102c90
long param_linux_syscall(unsigned long long param_1)
{
 long lVar1;
 int *piVar2;
 lVar1 = syscall(2,param_1,0);
 if (lVar1 < 0) {
 piVar2 = __errno_location();
 lVar1 = -*piVar2;
 }
 else {
 syscall(3,lVar1);
 }
 return lVar1;
}

// Function: call_linux_syscall @ 0x102cd0
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

// Function: param_win32_api @ 0x102d20
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

// Function: call_win32_api @ 0x102d60
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

// Function: param_fork_exec @ 0x102da0
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint local_14;
 local_14 = 0;
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((local_14 & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return local_14 >> 8 & 0xff;
}

// Function: call_fork_exec @ 0x102e20
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint local_c;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 return -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x102e90
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
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 return uVar4;
 }
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 return 0xfffffffe;
}

// Function: param_socket_create @ 0x102f50
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_24;
 struct sockaddr local_20;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,(const void *)&local_24,(socklen_t)4);
 if (-1 < iVar1) {
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
 iVar1 = bind(__fd,(struct sockaddr *)&local_20,(socklen_t)0x10);
 if (-1 < iVar1) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xfffffffc;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}

// Function: param_shmget_shmat @ 0x103030
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
 unsigned long sVar2;
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

// Function: call_shmget_shmat @ 0x103100
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

// Function: param_signal_handling @ 0x103120
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

// Function: signal_handler @ 0x103250
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x103280
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 uint uVar3;
 unsigned long uVar4;
 int *piVar5;
 unsigned long long uVar6;
 struct stat local_a0;
 puts(&DAT_00104443);
 uVar4 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar4;
 if (iVar1 < 0) {
 piVar5 = __errno_location();
 iVar1 = -*piVar5;
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 }
 printf(&DAT_001042a8,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_001042c4,uVar6);
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 {
 int status;
 _Var2 = waitpid(_Var2,&status,0);
 if ((_Var2 < 0) || ((status & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (unsigned long)(-(uint)((status & 0xff00) != 0) | 0x2a);
 }
 }
 }
 printf(&DAT_001042e0,uVar4);
 uVar3 = param_pipe_communication();
 printf(&DAT_001042fc,(unsigned long)uVar3);
 uVar3 = param_socket_create();
 printf(&DAT_00104318,(unsigned long)uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0xffffffff;
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00104334,(unsigned long)uVar3);
 uVar3 = param_signal_handling();
 printf(&DAT_00104350,(unsigned long)uVar3);
 return;
}

// Function: thread_compute @ 0x1033f0
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *arg = (int *)param_1;
 iVar1 = *arg;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x103410
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 void *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *(unsigned int *)local_18;
 free(local_18);
 return uVar1;
}

// Function: call_pthread_create @ 0x103470
unsigned int call_pthread_create(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 void *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *(unsigned int *)local_18;
 free(local_18);
 return uVar1;
}

// Function: thread_sum @ 0x1034d0
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *args = (uint *)param_1;
 args[2] = 0;
 uVar1 = args[0];
 uVar2 = args[1];
 if ((int)uVar1 <= (int)uVar2) {
 args[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return NULL;
}

// Function: param_pthread_join @ 0x103510
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int local_68 [3];
 unsigned int uStack_5c;
 int local_58;
 int auStack_54 [3];
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28 [2];
 local_48 = 0;
 local_68[0] = 0xa;
 local_68[1] = 0;
 local_68[2] = 1;
 uStack_5c = 0xb;
 auStack_54[0] = 0;
 auStack_54[1] = 0;
 auStack_54[2] = 0;
 local_58 = 0x14;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,local_68);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,&uStack_5c);
 if (iVar1 == 0) {
 iVar1 = pthread_create(local_28,(pthread_attr_t *)0x0,(void *(*)(void *))thread_sum,&auStack_54[1]);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar1 == 0) {
 iVar1 = local_68[2];
 iVar2 = pthread_join(local_30,(void **)0x0);
 if (iVar2 == 0) {
 iVar2 = auStack_54[0];
 iVar3 = pthread_join(local_28[0],(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar2 + iVar1 + local_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}

// Function: thread_increment @ 0x103620
void *thread_increment(void *param_1)
{
 int iVar1;
 int *arg = (int *)param_1;
 iVar1 = *arg;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return NULL;
}

// Function: param_mutex_lock @ 0x103660
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
 local_34 = param_1;
 local_38 = param_2;
 __ptr = malloc((size_t)param_1 * 8);
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

// Function: call_mutex_lock @ 0x103750
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103760
void *consumer_thread(void *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 (void)param_1;
 pthread_mutex_lock(&cond_mutex);
 if (ready == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == 0) {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}

// Function: producer_thread @ 0x1037e0
void *producer_thread(void *param_1)
{
 (void)param_1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: param_condition_variable @ 0x103820
unsigned int param_condition_variable(void)
{
 unsigned int uVar1;
 int iVar2;
 pthread_t local_20;
 void *local_18;
 pthread_t local_10;
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 != 0) {
 pthread_cancel(local_20);
 return 0xfffffffe;
 }
 pthread_join(local_20,&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar1 = *(unsigned int *)local_18;
 free(local_18);
 return uVar1;
}

// Function: thread_atomic_increment @ 0x1038d0
void *thread_atomic_increment(void *param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uint *arg = (uint *)param_1;
 uVar1 = *arg;
 if (0 < (int)uVar1) {
 uVar5 = uVar1 & 3;
 uVar4 = 0;
 if (2 < uVar1 - 1) {
 uVar4 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3e9;
 if (uVar4 + 1 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 iVar3 = uVar4 + 0x3ea;
 if (uVar4 + 2 != atomic_counter) {
 iVar3 = atomic_counter;
 }
 atomic_counter = iVar3;
 UNLOCK();
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar2 = uVar4 + 0x3eb;
 if (uVar4 + 3 != atomic_counter) {
 uVar2 = atomic_counter;
 }
 atomic_counter = uVar2;
 UNLOCK();
 uVar4 = uVar4 + 4;
 } while (uVar4 != (uVar1 & 0xfffffffc));
 }
 for (; uVar5 != 0; uVar5 = uVar5 - 1) {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 LOCK();
 uVar1 = uVar4 + 1000;
 if (uVar4 != atomic_counter) {
 uVar1 = atomic_counter;
 }
 atomic_counter = uVar1;
 UNLOCK();
 uVar4 = uVar4 + 1;
 }
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x103990
void *thread_atomic_load_store(void *param_1)
{
 (void)param_1;
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return NULL;
}

// Function: param_atomic_ops @ 0x1039b0
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
 __ptr = malloc((size_t)param_1 * 8);
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

// Function: call_atomic_ops @ 0x103ac0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103ad0
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 char *arg = (char *)param_1;
 (void)arg;
 iVar2 = 50;
 iVar1 = iVar2 + 0x32;
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}

// Function: param_thread_local_storage @ 0x103b20
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
 __ptr = (pthread_t *)malloc((size_t)param_1 * 8);
 __ptr_00 = malloc((size_t)param_1 * 8);
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
 goto LAB_00103c4c;
 }
 }
 uVar3 = 0;
 uVar6 = 0;
LAB_00103c4c:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar6 | param_1 * 100 ^ uVar3) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103ce0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103cf0
void test_thread_concurrency(void)
{
 int iVar1;
 uint uVar2;
 unsigned int local_1c;
 void *local_18;
 pthread_t local_10;
 puts(&DAT_0010445e);
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *(unsigned int *)local_18;
 free(local_18);
 }
 printf(&DAT_00104376,(unsigned long)uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00104392,(unsigned long)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_001043af,(unsigned long)uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_001043cb,(unsigned long)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001043e7,(unsigned long)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00104403,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x103de0
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x103df4
void _fini(void)
{
 return;
}

