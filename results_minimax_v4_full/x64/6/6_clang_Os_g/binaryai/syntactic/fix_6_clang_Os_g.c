/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdarg.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#include <stddef.h>

/* Provide missing type definitions */
typedef unsigned int uint;
typedef unsigned int uint32_t;
typedef unsigned short ushort;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int __useconds_t;
typedef unsigned short key_t;
typedef unsigned long time_t;
typedef unsigned int uid_t;
typedef unsigned int gid_t;
typedef long __off_t;
typedef long long __off64_t;

/* Standard types */
typedef unsigned long size_t;
typedef long ssize_t;
typedef int ptrdiff_t;
typedef unsigned short sa_family_t;
typedef unsigned int socklen_t;

/* FILE structure - minimal definition */
typedef struct _IO_FILE FILE;
struct _IO_FILE {
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    struct _IO_marker *_markers;
    FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    void *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

/* sockaddr structure */
struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

/* pthread types */
typedef unsigned long pthread_t;
typedef struct { char __data[56]; } pthread_attr_t;
typedef struct { char __data[1]; } pthread_mutex_t;
typedef struct { char __data[1]; } pthread_cond_t;

/* shmid_ds structure */
struct shmid_ds {
    struct ipc_perm {
        key_t __key;
        uid_t uid;
        gid_t gid;
        uid_t cuid;
        gid_t cgid;
        unsigned short mode;
        unsigned short __pad1;
        unsigned long __seq;
        unsigned long __pad2;
    } shm_perm;
    size_t shm_segsz;
    __pid_t shm_cpid;
    __pid_t shm_lpid;
    unsigned long shm_nattch;
    unsigned long __pad4;
    unsigned long __pad5;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    void *__pad6;
    unsigned long __pad7;
    unsigned long __pad8;
};

/* stat structure - minimal definition */
struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    unsigned int st_uid;
    unsigned int st_gid;
    int __pad0;
    long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
    unsigned long __unused[3];
};

/* bool type */
typedef int bool;
#define true 1
#define false 0

/* Declare external variables and functions */
extern int __gmon_start__(void);
extern void __cxa_finalize(void *);
extern int __libc_start_main(void *main, void *argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
extern void *__dso_handle;

/* Global variables */
char completed_0 = 0;
char signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex_storage = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex_storage = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_storage = PTHREAD_COND_INITIALIZER;
pthread_mutex_t *counter_mutex = &counter_mutex_storage;
pthread_mutex_t *cond_mutex = &cond_mutex_storage;
pthread_cond_t *cond = &cond_storage;
char ready = 0;
char data = 0;

/* String data */
char DAT_00104069[] = "Hello";
char DAT_001040b7[] = "strlen: %lu\n";
char DAT_001040d2[] = "strcmp: %d\n";
char DAT_001040ed[] = "strlen result: %lu\n";
char DAT_00104109[] = "memcpy result: %lu\n";
char DAT_00104125[] = "memcmp result: %u\n";
char DAT_00104141[] = "printf result: %u\n";
char DAT_0010415d[] = "scanf result: %lu\n";
char DAT_0010417a[] = "fopen/fileno: %u\n";
char DAT_00104196[] = "fread/fwrite: %lu\n";
char DAT_001041b2[] = "malloc/free: %lu\n";
char DAT_001041ce[] = "memset result: %lu\n";
char DAT_001041e9[] = "strchr/strstr: %lu\n";
char DAT_00104238[] = "syscall result: %lu\n";
char DAT_00104254[] = "stat result: %lu\n";
char DAT_00104270[] = "fork/exec: %lu\n";
char DAT_0010428c[] = "pipe: %lu\n";
char DAT_001042a8[] = "socket: %lu\n";
char DAT_001042c4[] = "shm: %lu\n";
char DAT_001042e0[] = "signal: %lu\n";
char DAT_00104306[] = "pthread_create: %u\n";
char DAT_00104322[] = "pthread_join: %u\n";
char DAT_0010433f[] = "mutex: %u\n";
char DAT_0010435b[] = "cond_var: %u\n";
char DAT_00104377[] = "atomic: %u\n";
char DAT_00104393[] = "tls: %u\n";
char DAT_001043af[] = "=== Standard Library Tests ===\n";
char DAT_001043d3[] = "=== System Call Tests ===\n";
char DAT_001043ee[] = "=== Thread Concurrency Tests ===\n";
char s_Bench_Test_Data_00104010[] = "BinBench Test Data";

// Decompiled by BinaryAI
// SHA256: 2341d06c0f0c84f7d6ff1699d8f93e76995dbabf1bef6361ced0a9c408daeb44

/* Lock/Unlock macros for atomic operations */
#define LOCK()   __asm__ __volatile__("lock" ::: "memory")
#define UNLOCK() __asm__ __volatile__("" ::: "memory")

/* Decompilation helper macros */
#define ZEXT816(x) (x)
#define SUB161(x,y) ((unsigned short)((x) >> (y)))
#define SUB1612(x,y) ((unsigned short)((x) - (y)))
#define SUB816(x,y) ((unsigned long long)((x) - (y)))
#define AND16(x,y) ((unsigned short)((x) & (y)))

/* External function declarations */
extern int __gmon_start__(void);
extern void __cxa_finalize(void *);
extern int raise(int __sig);
extern void free(void *__ptr);
extern int *__errno_location(void);
extern int unlink(char *__name);
extern char *strncpy(char *__dest, char *__src, size_t __n);
extern void _exit(int __status);
extern char *strcpy(char *__dest, char *__src);
extern int puts(char *__s);
extern size_t fread(void *__ptr, size_t __size, size_t __n, FILE *__stream);
extern int setsockopt(int __fd, int __level, int __optname, const void *__optval, socklen_t __optlen);
extern int shmdt(const void *__shmaddr);
extern ssize_t write(int __fd, const void *__buf, size_t __n);
extern int pthread_cond_wait(pthread_cond_t *__cond, pthread_mutex_t *__mutex);
extern int fclose(FILE *__stream);
extern size_t strlen(const char *__s);
extern char *strchr(char *__s, int __c);
extern int printf(const char *__format, ...);
extern void rewind(FILE *__stream);
extern int snprintf(char *__s, size_t __maxlen, const char *__format, ...);
extern void *memset(void *__s, int __c, size_t __n);
extern unsigned int alarm(unsigned int __seconds);
extern int close(int __fd);
extern int pipe(int *__pipedes);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
extern int memcmp(const void *__s1, const void *__s2, size_t __n);
extern int pthread_cond_signal(pthread_cond_t *__cond);
extern int strcmp(const char *__s1, const char *__s2);
extern __sighandler_t signal(int __sig, __sighandler_t __handler);
extern long syscall(long __sysno, ...);
extern int stat(const char *__file, struct stat *__buf);
extern void *memcpy(void *__dest, const void *__src, size_t __n);
extern int fileno(FILE *__stream);
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);
extern void *malloc(size_t __size);
extern int sscanf(const char *__str, const char *__format, ...);
extern int listen(int __fd, int __n);
extern int bind(int __fd, const struct sockaddr *__addr, socklen_t __len);
extern int pthread_create(pthread_t *__newthread, const pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg);
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
extern int open(const char *__file, int __oflag, ...);
extern int shmctl(int __shmid, int __cmd, struct shmid_ds *__buf);
extern FILE *fopen(const char *__filename, const char *__modes);
extern void *shmat(int __shmid, const void *__shmaddr, int __shmflg);
extern int shmget(key_t __key, size_t __size, int __shmflg);
extern size_t fwrite(const void *__ptr, size_t __size, size_t __n, FILE *__s);
extern key_t ftok(const char *__pathname, int __proj_id);
extern int pthread_join(pthread_t __th, void **__thread_return);
extern int execl(const char *__path, const char *__arg, ...);
extern int pthread_cancel(pthread_t __th);
extern unsigned int sleep(unsigned int __seconds);
extern __pid_t wait(int *__stat_loc);
extern __pid_t fork(void);
extern char *strstr(const char *__haystack, const char *__needle);
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);
extern int usleep(unsigned int __useconds);
extern int socket(int __domain, int __type, int __protocol);
extern int __isoc99_sscanf(const char *__str, const char *__format, ...);

// Function: _start @ 0x1023c0
void _start(unsigned long long param_1, unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main, param_2, auStack_8, 0, 0, param_1, auStack_8);
 do {
 } while( 1 );
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
int call_strcmp(void)
{
 return strcmp("Hello","Hello");
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
int param_scanf(char *param_1)
{
 int iVar1;
 int iVar2;
 int local_18;
 int local_14;
 local_18 = 0;
 local_14 = 0;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_18 + local_14;
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
 iVar2 = (int)local_18 + (int)(local_18 >> 32);
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
 int local_38;
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
 uVar4 = (unsigned long)(uint)(local_3c + local_38);
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
 long uVar1;
 int *piVar2;
 (void)param_1;
 uVar1 = syscall(2,0,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
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
 stat sStack_98;
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
 stat sStack_98;
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
 local_14 = (uint)(param_2 >> 0x20);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(char *)0);
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
 sockaddr local_20;
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
 shmctl(iVar1,0,(shmid_ds *)0x0);
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
 bool bVar1;
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

// Forward declarations for functions used before definition
void signal_handler(int param_1);
void *thread_compute(void *param_1);
void *thread_sum(void *param_1);
unsigned long long thread_increment(int *param_1);
void *consumer_thread(void *param_1);
void *producer_thread(void *param_1);
unsigned long long thread_atomic_increment(int *param_1);
unsigned long long thread_atomic_load_store(void);
void *thread_tls_test(void *param_1);

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
 stat sStack_a8;
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
 return piVar2;
}

// Function: param_pthread_create @ 0x102f2a
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 unsigned int local_14;
 void *local_10;
 local_14 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_14);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_20,&local_10);
 uVar2 = *(unsigned int *)local_10;
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
 uint *puVar1 = (uint *)param_1;
 uint uVar1;
 uint uVar2;
 puVar1[2] = 0;
 uVar1 = *puVar1;
 uVar2 = puVar1[1];
 if ((int)uVar1 <= (int)uVar2) {
 puVar1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
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
 pthread_t local_68 [3];
 char local_48 [36];
 unsigned int local_3c;
 char local_38 [8];
 unsigned long long uStack_30 = 0;
 unsigned int local_28;
 __arg = local_48;
 local_28 = 0;
 local_48[0] = 0xa;
 local_48[1] = 0;
 local_48[2] = 0;
 local_48[3] = 0;
 local_48[4] = 1;
 local_48[5] = 0;
 local_48[6] = 0;
 local_48[7] = 0;
 local_48[8] = 0;
 local_48[9] = 0;
 local_48[10] = 0;
 local_48[11] = 0;
 local_3c = 0xb;
 local_38._0_4_ = 0x14;
 uStack_30 = 0x1e00000015;
 lVar4 = 0;
 do {
 iVar1 = pthread_create(&local_68[lVar4],(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 __arg = __arg + 0xc;
 lVar4 = lVar4 + 1;
 } while (lVar4 != 3);
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
unsigned long long thread_increment(int *param_1)
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
 local_34 = param_1;
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
 return;
}

// Function: producer_thread @ 0x103203
unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
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

// Function: thread_atomic_load_store @ 0x1032fb
unsigned long long thread_atomic_load_store(void)
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
 char *p = (char *)param_1;
 iVar2 = 0;
 iVar1 = iVar2 + 0x32;
 strncpy(p, p, 0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
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
 unsigned long long dummy;
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
int main(void)
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

