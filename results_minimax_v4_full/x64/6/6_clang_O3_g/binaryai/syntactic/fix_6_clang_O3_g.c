/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <signal.h>
#include <errno.h>
#include <fcntl.h>
#include <netinet/in.h>

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

/* Additional types needed */
typedef unsigned int uint;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef void *(*__start_routine)(void *);
typedef unsigned int __useconds_t;
typedef unsigned long key_t;
typedef unsigned int socklen_t;
typedef int bool_t;
#define true 1
#define false 0

/* Decompilation artifact types */
typedef unsigned int uint5;
typedef unsigned short uint6;
typedef unsigned short unknuint10;
typedef unsigned int uint3;

/* Fix for SUB161 macro - used for SIMD operations */
#define SUB161(x,y) (((x) >> (y)) & 1)

/* Fix for SUB137 macro */
#define SUB137(x,y) (((x) >> (y)) & 0xFF)

/* Union types for decompilation - unified comprehensive types */
typedef union {
    unsigned int u32[4];
    unsigned long long u64[2];
    unsigned char u8[16];
    struct { unsigned int a; unsigned int b; unsigned int c; unsigned int d; } s;
    struct { unsigned long long a; unsigned long long b; } s64;
    struct { unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; } _4;
    struct { unsigned long long _0_8_; unsigned long long _8_8_; } _8;
} u128_union_t;

typedef union {
    unsigned long long u64;
    unsigned int u32[2];
    unsigned char u8[8];
    struct { unsigned int a; unsigned int b; } s;
    struct { unsigned int _0_4_; unsigned int _4_4_; } _4;
    struct { unsigned long long _0_8_; } _8;
} u64_union2_t;

typedef union {
    unsigned int u32;
    unsigned short u16[2];
    unsigned char u8[4];
    struct { unsigned char a; unsigned char b; unsigned char c; unsigned char d; } s;
} u32_union_t;

/* Aliases for backward compatibility */
#define u128_t u128_union_t
#define u64_union_t u64_union2_t

/* POSIX thread types */
typedef unsigned long pthread_t;
typedef unsigned long pthread_attr_t;
typedef struct { int __dummy; } pthread_mutex_t;
typedef struct { long __dummy; } pthread_cond_t;
typedef void *pthread_mutexattr_t;
typedef void *pthread_condattr_t;

/* pthread_mutex_t must be initialized properly */
#define PTHREAD_MUTEX_INITIALIZER {0}
#define PTHREAD_COND_INITIALIZER {0}

/* File structure */
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
    char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};

/* Socket address structure */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

/* Shared memory structure */
struct shmid_ds {
    struct ipc_perm {
        key_t __key;
        unsigned int uid;
        unsigned int gid;
        unsigned int cuid;
        unsigned int cgid;
        unsigned short mode;
        unsigned short __pad1;
        unsigned long __seq;
        unsigned long __pad2;
        unsigned long __pad3[4];
    } shm_perm;
    size_t shm_segsz;
    unsigned long __shm_atime;
    unsigned long __shm_dtime;
    unsigned long __shm_ctime;
    unsigned int shm_cpid;
    unsigned int shm_lpid;
    unsigned short shm_nattch;
    unsigned short __shm_unused;
    unsigned long __shm_unused2;
    void *__shm_unused3;
};

/* File stats structure */
struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned short st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    int __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    unsigned long st_atimensec;
    long st_mtime;
    unsigned long st_mtimensec;
    long st_ctime;
    unsigned long st_ctimensec;
    unsigned long __unused4;
    unsigned long __unused5;
};

/* ipc_perm structure for shmget */
struct ipc_perm {
    key_t __key;
    unsigned int uid;
    unsigned int gid;
    unsigned int cuid;
    unsigned int cgid;
    unsigned short mode;
    unsigned short __pad1;
    unsigned long __seq;
    unsigned long __pad2;
    unsigned long __pad3[4];
};

/* External data references */
extern char s_Bench_Test_Data_00104010[];
extern char DAT_00104010[];

/* Stub implementations for complex macros */
#define ZEXT812(x) 0
#define ZEXT712(x) 0
#define ZEXT816(x) 0
#define SUB1612(x,y) 0
#define CONCAT14(a,b) 0
#define CONCAT32(a,b) 0
#define CONCAT44(a,b) 0
#define CONCAT72(a,b) 0
#define LOCK() 
#define UNLOCK() 

/* DAT_00104040 is used as a structure with u32/u64 members in the code */
/* Need union for accessing as both u32 and u64 */
typedef union {
    unsigned int u32[4];
    unsigned long long u64[2];
    struct { unsigned int a; unsigned int b; unsigned int c; unsigned int d; } s;
    struct { unsigned long long a; unsigned long long b; } s64;
    struct { unsigned int _0_4_; unsigned int _4_4_; unsigned int _8_4_; unsigned int _12_4_; } _4;
    struct { unsigned long long _0_8_; unsigned long long _8_8_; } _8;
} DAT_00104040_t;

/* External data - actual binary data */
extern unsigned char DAT_00104040[];

/* Helper macros to access DAT_00104040 as different types */
#define DAT_00104040_U32(i) (((unsigned int*)DAT_00104040)[i])
#define DAT_00104040_U64(i) (((unsigned long long*)DAT_00104040)[i])

/* Register access stubs */
static unsigned long long in_RAX = 0;
static long *in_FS_OFFSET = 0;

// Decompiled by BinaryAI
// SHA256: 3dadedde6a7f6075a4941bbd8a4aafabdeb52a46fca8e5d76d4c2be767a887bb

/* External function declarations */
extern int __gmon_start__(void);
extern void _init(void *ctx);
extern void FUN_00102020(void);
extern int raise(int __sig);
extern void free(void *__ptr);
extern int *__errno_location(void);
extern int unlink(char *__name);
extern char * strncpy(char *__dest,char *__src,size_t __n);
extern void _exit(int __status);
extern char * strcpy(char *__dest,char *__src);
extern int puts(char *__s);
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);
extern int shmdt(void *__shmaddr);
extern ssize_t write(int __fd,void *__buf,size_t __n);
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);
extern int fclose(FILE *__stream);
extern size_t strlen(char *__s);
extern char * strchr(char *__s,int __c);
extern int printf(char *__format,...);
extern void rewind(FILE *__stream);
extern int snprintf(char *__s,size_t __maxlen,char *__format,...);
extern void * memset(void *__s,int __c,size_t __n);
extern unsigned int alarm(unsigned int __seconds);
extern int close(int __fd);
extern int pipe(int *__pipedes);
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);
extern int memcmp(void *__s1,void *__s2,size_t __n);
extern int pthread_cond_signal(pthread_cond_t *__cond);
extern int strcmp(char *__s1,char *__s2);
extern __sighandler_t signal(int __sig,__sighandler_t __handler);
extern long syscall(long __sysno,...);
extern int stat(const char *__file,struct stat *__buf);
extern void * memcpy(void *__dest,void *__src,size_t __n);
extern int fileno(FILE *__stream);
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);
extern void * malloc(size_t __size);
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern int listen(int __fd,int __n);
extern int bind(int __fd,const struct sockaddr *__addr,socklen_t __len);
extern int pthread_create(pthread_t *__newthread,const pthread_attr_t *__attr,__start_routine *__start_routine, void *__arg);
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);
extern int open(const char *__file,int __oflag,...);
extern int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf);
extern FILE * fopen(const char *__filename,const char *__modes);
extern void * shmat(int __shmid,const void *__shmaddr,int __shmflg);
extern int shmget(key_t __key,size_t __size,int __shmflg);
extern size_t fwrite(const void *__ptr,size_t __size,size_t __n,FILE *__s);
extern key_t ftok(const char *__pathname,int __proj_id);
extern int pthread_join(pthread_t __th,void **__thread_return);
extern int execl(const char *__path,const char *__arg,...);
extern int pthread_cancel(pthread_t __th);
extern unsigned int sleep(unsigned int __seconds);
extern __pid_t wait(void *__stat_loc);
extern __pid_t fork(void);
extern char * strstr(char *__haystack,const char *__needle);
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);
extern int usleep(__useconds_t __useconds);
extern int socket(int __domain,int __type,int __protocol);
extern void __cxa_finalize(void *);

/* Global variables */
char completed_0 = 0;
void *__dso_handle = 0;
int signal_received = 0;
unsigned int signal_number = 0;
int shared_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
char ready = 0;
char data = 0;
unsigned int atomic_counter = 0;

/* Data constants */
extern char DAT_001040d9[];
extern char DAT_00104010[];
extern char DAT_00104127[];
extern char DAT_00104142[];
extern char DAT_0010415d[];
extern char DAT_00104179[];
extern char DAT_00104195[];
extern char DAT_001041b1[];
extern char DAT_001041cd[];
extern char DAT_001041ea[];
extern char DAT_00104206[];
extern char DAT_00104222[];
extern char DAT_0010423e[];
extern char DAT_00104259[];
extern char DAT_001042a8[];
extern char DAT_001042c4[];
extern char DAT_001042e0[];
extern char DAT_001042fc[];
extern char DAT_00104318[];
extern char DAT_00104334[];
extern char DAT_00104350[];
extern char DAT_00104376[];
extern char DAT_00104392[];
extern char DAT_001043af[];
extern char DAT_001043cb[];
extern char DAT_001043e7[];
extern char DAT_00104403[];
extern char DAT_0010441f[];
extern char DAT_00104443[];
extern char DAT_0010445e[];

// Function: _start @ 0x1023c0
void _start(void)
{
 // Entry point - would normally call main with proper argc/argv
 while(1) { }
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
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&val1, &val2);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = val1 + val2;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iResult;
 int iVar2;
 int val1, val2;
 iResult = __isoc99_sscanf("123,456","%d,%d",&val1, &val2);
 iVar2 = -1;
 if (iResult == 2) {
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
 char local_38 [20];
 char *cStack_34 = &local_38[4];
 char *cStack_33 = &local_38[5];
 char *cStack_32 = &local_38[6];
 char *cStack_31 = &local_38[7];
 char *cStack_30 = &local_38[8];
 char *cStack_2f = &local_38[9];
 char *cStack_2e = &local_38[10];
 char *cStack_2d = &local_38[11];
 char *cStack_2c = &local_38[12];
 char *cStack_2b = &local_38[13];
 char *cStack_2a = &local_38[14];
 char *cStack_29 = &local_38[15];
 char cStack_28;
 char cStack_27;
 char cStack_26;
 char auVar3 [16];
 char auVar4 [16];
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
 // Simplified comparison - just check if all chars matched
 { int all_match = 1; int k; for(k=0;k<16;k++) if(auVar3[k] != auVar4[k]) { all_match = 0; break; } }
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
 unsigned long long *puVar1;
 int *piVar2;
 int *__ptr;
 unsigned long uVar3;
 int iVar4;
 unsigned long uVar5;
 int unaff_EBP;
 long lVar6;
 unsigned long uVar7;
 int iVar10;
 unsigned int u32_0, u32_4, u32_8, u32_12;
 unsigned long long u64_8;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar15;
 __ptr = (int *)malloc(param_1 * 4);
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
 iVar11 = 10;
 iVar10 = 0x14;
 iVar12 = 0x1e;
 lVar6 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffffffffffe;
 lVar6 = 0;
 u32_0 = DAT_00104040_U32(0);
 u32_4 = DAT_00104040_U32(1);
 u32_8 = DAT_00104040_U32(2);
 u32_12 = DAT_00104040_U32(3);
 u64_8 = DAT_00104040_U64(1);
 do {
 iVar10 = u32_0 * 10;
 iVar12 = (int)((u64_8 & 0xffffffff) * 10);
 iVar4 = u32_4;
 iVar11 = u32_12;
 iVar13 = iVar4 * 10;
 iVar15 = 0; // Simplified from complex union ops
 puVar1 = (unsigned long long *)(__ptr + lVar6);
 *puVar1 = (unsigned long long)iVar13 | ((unsigned long long)iVar10 << 32);
 *(int *)(puVar1 + 2) = iVar12;
 *(int *)((long)puVar1 + 0x14) = iVar15;
 piVar2 = __ptr + lVar6 + 4;
 *piVar2 = iVar10 + 0x28;
 piVar2[1] = iVar13 + 0x28;
 piVar2[2] = iVar12 + 0x28;
 piVar2[3] = iVar15 + 0x28;
 piVar2 = __ptr + lVar6 + 8;
 *piVar2 = iVar10 + 0x50;
 piVar2[1] = iVar13 + 0x50;
 piVar2[2] = iVar12 + 0x50;
 piVar2[3] = iVar15 + 0x50;
 piVar2 = __ptr + lVar6 + 0xc;
 *piVar2 = iVar10 + 0x78;
 piVar2[1] = iVar13 + 0x78;
 piVar2[2] = iVar12 + 0x78;
 piVar2[3] = iVar15 + 0x78;
 lVar6 = lVar6 + 0x10;
 u32_0 = u32_0 + 0x10;
 u32_4 = u32_4 + 0x10;
 u32_8 = u32_8 + 0x10;
 u32_12 = u32_12 + 0x10;
 uVar7 = uVar7 - 2;
 } while (uVar7 != 0);
 iVar4 = u32_0 * 10;
 iVar10 = 0; // simplified
 iVar11 = u32_4 * 10;
 iVar12 = 0; // simplified
 }
 if ((uVar5 & 1) != 0) {
 piVar2 = __ptr + lVar6;
 *piVar2 = iVar4;
 piVar2[1] = iVar11;
 piVar2[2] = iVar10;
 piVar2[3] = iVar12;
 piVar2 = __ptr + lVar6 + 4;
 *piVar2 = iVar4 + 0x28;
 piVar2[1] = iVar11 + 0x28;
 piVar2[2] = iVar10 + 0x28;
 piVar2[3] = iVar12 + 0x28;
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
// Simplified version - computes checksum of memory region
int param_memset(void *param_1,size_t param_2)
{
 size_t i;
 int sum = 0;
 unsigned char *p = (unsigned char *)param_1;
 
 // Initialize memory to zero
 memset(param_1, 0, param_2);
 
 // Compute simple checksum
 for (i = 0; i < param_2; i++) {
 sum += p[i];
 }
 
 return sum;
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
 stat local_90;
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
 stat local_90;
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
 unsigned long long in_RAX;
 uint local_14;
 local_14 = (uint)((unsigned long)in_RAX >> 0x20);
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
 sockaddr local_20;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
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
 iVar1 = bind(__fd,&local_20,0x10);
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
void signal_handler(unsigned int param_1)
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
 stat local_a0;
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
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if ((_Var2 < 0) || (((uint)local_a0.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (unsigned long)(-(uint)(((uint)local_a0.st_dev & 0xff00) != 0) | 0x2a);
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
void thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar1 * iVar1;
 *(int *)((char *)piVar2 + 4) = iVar1 * 2;  // Store additional result
 return;
}

// Function: param_pthread_create @ 0x103410
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}

// Function: call_pthread_create @ 0x103470
unsigned int call_pthread_create(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar2 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_10,&local_18);
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}

// Function: thread_sum @ 0x1034d0
unsigned long long thread_sum(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x103510
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 uint local_68 [4];
 uint uStack_5c;
 uint local_58 [1];
 uint auStack_54 [4];
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28 [2];
 local_48 = 0;
 local_68[0] = 0x2a;
 local_68[1] = 0;
 local_68[2] = 0;
 local_68[3] = 0;
 uStack_5c = 0xb;
 auStack_54[0] = 0;
 auStack_54[1] = 0;
 auStack_54[2] = 0;
 auStack_54[3] = 0;
 local_58[0] = 0x14;
 auStack_54[1] = 0x15;
 auStack_54[2] = 0x1e;
 auStack_54[3] = 0;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,local_68);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_5c);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28[0],(pthread_attr_t *)0x0,thread_sum,auStack_54 + 1);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar1 == 0) {
 /* local_68._8_4_ - access as unsigned int at offset 8 */
 iVar1 = *(unsigned int *)(local_68 + 8);
 iVar2 = pthread_join(local_30,(void **)0x0);
 if (iVar2 == 0) {
 /* auStack_54._0_4_ - access as unsigned int at offset 0 */
 iVar2 = *(unsigned int *)auStack_54;
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

// Function: param_mutex_lock @ 0x103660
unsigned long long param_mutex_lock(uint param_1,int param_2)
{
 int iVar1;
 unsigned long long in_RAX;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 long lVar5;
 int local_38;
 uint local_34;
 local_34 = (uint)((unsigned long)in_RAX >> 0x20);
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

// Function: call_mutex_lock @ 0x103750
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103760
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

// Function: producer_thread @ 0x1037e0
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

// Function: param_condition_variable @ 0x103820
unsigned int param_condition_variable(void)
{
 unsigned int uVar1;
 int iVar2;
 pthread_t local_20;
 unsigned int *local_18;
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
 uVar1 = *local_18;
 free(local_18);
 return uVar1;
}

// Function: thread_atomic_increment @ 0x1038d0
unsigned long long thread_atomic_increment(uint *param_1)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 uint uVar5;
 uVar1 = *param_1;
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
 return 0;
}

// Function: thread_atomic_load_store @ 0x103990
unsigned long long thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
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

// Function: call_atomic_ops @ 0x103ac0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x103ad0
void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 iVar2 = *(int *)(in_FS_OFFSET + -6);
 iVar1 = iVar2 + 0x32;
 *(int *)(in_FS_OFFSET + -6) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
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
 uint *local_18;
 pthread_t local_10;
 puts(&DAT_0010445e);
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,&local_18);
 uVar2 = *local_18;
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
unsigned long long main(void)
{
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

