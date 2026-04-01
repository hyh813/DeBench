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

// Additional type definitions for compilation
typedef struct {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

typedef unsigned int socklen_t;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef struct __FILE FILE;

// Additional type definitions for pthreads
typedef unsigned long pthread_t;
typedef struct {
    int __attr;
} pthread_attr_t;
typedef struct {
    int __lock;
} pthread_mutex_t;
typedef struct {
    int __lock;
} pthread_cond_t;
typedef void *(*__start_routine)(void *);

// Additional type definitions for System V IPC
typedef int key_t;
typedef struct {
    int shm_perm;
    size_t shm_segsz;
    unsigned long shm_atime;
    unsigned long shm_dtime;
    unsigned long shm_ctime;
    __pid_t shm_cpid;
    __pid_t shm_lpid;
    unsigned long shm_nattch;
} shmid_ds;

// Additional type definitions for stat
typedef struct {
    long st_dev;
    long st_ino;
    unsigned int st_mode;
    unsigned int st_nlink;
    int st_uid;
    int st_gid;
    long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    long st_atime;
    long st_mtime;
    long st_ctime;
} struct_stat;

// Additional type definitions
typedef unsigned int uint;
typedef unsigned int __useconds_t;
typedef unsigned char byte;
typedef int bool;

// Macro for concatenating two 32-bit values into 64-bit
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

// Global variables
extern union {
    int _0_4_;
    char _bytes[8];
} atomic_counter;
extern int shared_counter;
extern int signal_received;
extern int signal_number;
extern int ready;
extern int data;
extern pthread_mutex_t cond_mutex;
extern pthread_cond_t cond;
extern pthread_mutex_t counter_mutex;
extern long tpidr_el0;
extern int tmp_ldWn;
extern int tmp_stWn;
extern int completed_0;
extern int __dso_handle;
extern char *DAT_00103156;
extern char *DAT_0010349c;
extern char *DAT_001031a4;
extern char *DAT_001031bf;
extern char *DAT_001031da;
extern char *DAT_001031f6;
extern char *DAT_00103212;
extern char *DAT_0010322e;
extern char *DAT_0010324a;
extern char *DAT_00103267;
extern char *DAT_00103283;
extern char *DAT_0010329f;
extern char *DAT_001032bb;
extern char *DAT_001032d6;
extern char *DAT_001034c0;
extern char *DAT_00103325;
extern char *DAT_00103341;
extern char *DAT_0010335d;
extern char *DAT_00103379;
extern char *DAT_00103395;
extern char *DAT_001033b1;
extern char *DAT_001033cd;
extern char *DAT_001034db;
extern char *DAT_001033f3;
extern char *DAT_0010340f;
extern char *DAT_0010342c;
extern char *DAT_00103448;
extern char *DAT_00103464;
extern char *DAT_00103480;

// External function declarations
int call_weak_fn(int ctx);
int ExclusiveMonitorPass(void);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int main(void);
void signal_handler(int param_1);

// Decompiled by BinaryAI
// SHA256: be4bd2993c97db2b856482a465648666b3d772c90d229c4479e7edf78f5312ff

// Function: _init @ 0x1012c8
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
 ((void (*)(void))(char *)0x0)();
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
extern void __libc_start_main(int (*main)(void),void *argp,void (*init)(void),void (*fini)(void),void *rtld_fini,void *stack_end);

// Function: <EXTERNAL>::execl @ 0x101350
extern int execl(char *__path,char *__arg,...);

// Function: <EXTERNAL>::listen @ 0x101360
extern int listen(int __fd,int __n);

// Function: <EXTERNAL>::shmdt @ 0x101370
extern int shmdt(void *__shmaddr);

// Function: <EXTERNAL>::bind @ 0x101380
extern int bind(int __fd,sockaddr *__addr,socklen_t __len);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101390
extern void __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::pipe @ 0x1013a0
extern int pipe(int *__pipedes);

// Function: <EXTERNAL>::fork @ 0x1013b0
extern __pid_t fork(void);

// Function: <EXTERNAL>::snprintf @ 0x1013c0
extern int snprintf(char *__s,size_t __maxlen,char *__format,...);

// Function: <EXTERNAL>::fileno @ 0x1013d0
extern int fileno(FILE *__stream);

// Function: <EXTERNAL>::signal @ 0x1013e0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::fclose @ 0x1013f0
extern int fclose(FILE *__stream);

// Function: <EXTERNAL>::fopen @ 0x101400
extern FILE * fopen(char *__filename,char *__modes);

// Function: <EXTERNAL>::malloc @ 0x101410
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::setsockopt @ 0x101420
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::open @ 0x101430
extern int open(char *__file,int __oflag,...);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101440
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::memset @ 0x101450
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::shmat @ 0x101460
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::sleep @ 0x101470
extern uint sleep(uint __seconds);

// Function: <EXTERNAL>::rewind @ 0x101480
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::close @ 0x101490
extern int close(int __fd);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014a0
extern void __gmon_start__(void);

// Function: <EXTERNAL>::stat @ 0x1014b0
extern int stat(char *__file,struct_stat *__buf);

// Function: <EXTERNAL>::write @ 0x1014c0
extern ssize_t write(int __fd,void *__buf,size_t __n);

// Function: <EXTERNAL>::__getauxval @ 0x1014d0
extern unsigned long __getauxval(unsigned long __type);

// Function: <EXTERNAL>::abort @ 0x1014e0
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x1014f0
extern int puts(char *__s);

// Function: <EXTERNAL>::memcmp @ 0x101500
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::strcmp @ 0x101510
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::shmctl @ 0x101520
extern int shmctl(int __shmid,int __cmd,shmid_ds *__buf);

// Function: <EXTERNAL>::fread @ 0x101530
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::ftok @ 0x101540
extern key_t ftok(char *__pathname,int __proj_id);

// Function: <EXTERNAL>::free @ 0x101550
extern void free(void *__ptr);

// Function: <EXTERNAL>::shmget @ 0x101560
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101570
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::strchr @ 0x101580
extern char * strchr(char *__s,int __c);

// Function: <EXTERNAL>::fwrite @ 0x101590
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);

// Function: <EXTERNAL>::pthread_create @ 0x1015a0
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg);

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
extern int __isoc99_sscanf(const char *str,const char *format,...);

// Function: <EXTERNAL>::strncpy @ 0x101620
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::printf @ 0x101630
extern int printf(char *__format,...);

// Function: <EXTERNAL>::__errno_location @ 0x101640
extern int * __errno_location(void);

// Function: <EXTERNAL>::pthread_join @ 0x101650
extern int pthread_join(pthread_t __th,void **__thread_return);

// Function: <EXTERNAL>::alarm @ 0x101660
extern uint alarm(uint __seconds);

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
extern int unlink(char *__name);

// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 atomic_counter._bytes[4] = extraout_var & 1;
 return;
}

// Function: _start @ 0x101740
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 int stack_var = 0;
 __libc_start_main(main,param_9,&stack_var,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101774
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x101790
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1017c0
void register_tm_clones(void)
{
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

// Function: __do_global_dtors_aux @ 0x101800
void __do_global_dtors_aux(void)
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
 unsigned long long local_30;
 char local_28;
 char *p_local_30;
 local_28 = 0;
 local_30 = 0;
 p_local_30 = (char *)&local_30;
 p_local_30[0] = 'H';
 p_local_30[1] = 'e';
 p_local_30[2] = 'l';
 p_local_30[3] = 'l';
 p_local_30[4] = 'o';
 p_local_30[5] = 'L';
 p_local_30[6] = 'i';
 p_local_30[7] = 'b';
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
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x101940
int param_printf(unsigned long param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return iVar1;
}

// Function: call_printf @ 0x101954
int call_printf(void)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103156);
 return iVar1;
}

// Function: param_scanf @ 0x10196c
int param_scanf(const char *param_1)
{
 int iVar1;
 int local_18;
 int local_14;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_14,&local_18);
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
 FILE *__stream;
 unsigned int uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x101a94
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 char local_50[20];
 unsigned int uStack_48;
 unsigned long long local_45;
 unsigned int uStack_40;
 char *pStack_38;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 sVar2 = fwrite((void *)"BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread((void *)local_50,1,0x12,__s);
 pStack_38 = local_50;
 pStack_38[sVar2] = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if (sVar2 == 0x12) {
 uVar1 = 0x2a;
 if ((*(unsigned long long *)local_50 ^ 0x68636e65426e6942 | ((local_45 << 24) | (uStack_48 & 0xffffff)) ^ 0x6144207473655420 |
  (((unsigned long long)uStack_40 << 40) | (local_45 & 0xffffffffff)) ^ 0x61746144207473) != 0) {
 uVar1 = 0xfffffffd;
 }
 }
 }
 else {
 fclose(__s);
 uVar1 = 0xfffffffe;
 }
 }
 return uVar1;
}

// Function: call_fread_fwrite @ 0x101ba8
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101bb4
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 int extraout_w8;
 unsigned long uVar1;
 int *piVar2;
 unsigned long long *puVar3;
 long lVar4;
 unsigned long uVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 iVar6 = extraout_w8;
 if (param_1 == 0) goto LAB_00101c58;
 if (param_1 < 8) {
 uVar1 = 0;
LAB_00101c34:
 lVar4 = param_1 - uVar1;
 iVar6 = (int)uVar1 * 10;
 piVar2 = __ptr + uVar1;
 do {
 *piVar2 = iVar6;
 lVar4 = lVar4 + -1;
 iVar6 = iVar6 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar4 != 0);
 }
 else {
 uVar1 = param_1 & 0xfffffffffffffff8;
 iVar8 = 2;
 iVar9 = 3;
 iVar6 = 0;
 iVar7 = 1;
 puVar3 = (unsigned long long *)(__ptr + 4);
 uVar5 = uVar1;
 do {
 iVar10 = iVar6 * 10;
 iVar11 = iVar7 * 10;
 iVar12 = iVar8 * 10;
 iVar13 = iVar9 * 10;
 uVar5 = uVar5 - 8;
 iVar6 = iVar6 + 8;
 iVar7 = iVar7 + 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 puVar3[-1] = CONCAT44(iVar13,iVar12);
 puVar3[-2] = CONCAT44(iVar11,iVar10);
 puVar3[1] = CONCAT44(iVar13 + 0x28,iVar12 + 0x28);
 *puVar3 = CONCAT44(iVar11 + 0x28,iVar10 + 0x28);
 puVar3 = puVar3 + 4;
 } while (uVar5 != 0);
 if (uVar1 != param_1) goto LAB_00101c34;
 }
 iVar6 = *__ptr;
LAB_00101c58:
 iVar7 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar7 + iVar6;
}

// Function: call_malloc_free @ 0x101c78
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x101c80
int param_memset(void *param_1,unsigned long param_2)
{
 uint uVar1;
 uint uVar2;
 unsigned long uVar3;
 byte *pbVar4;
 uint *puVar5;
 long lVar6;
 unsigned long uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar8 = 0;
 }
 else {
 if (param_2 < 8) {
 uVar3 = 0;
 iVar8 = 0;
 }
 else {
 uVar3 = param_2 & 0xfffffffffffffff8;
 puVar5 = (uint *)((long)param_1 + 4);
 iVar8 = 0;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 uVar7 = uVar3;
 do {
 uVar1 = puVar5[-1];
 uVar2 = *puVar5;
 puVar5 = puVar5 + 2;
 uVar7 = uVar7 - 8;
 iVar8 = iVar8 + (uVar1 & 0xff);
 iVar9 = iVar9 + (uVar1 >> 8 & 0xff);
 iVar10 = iVar10 + (uVar1 >> 0x10 & 0xff);
 iVar11 = iVar11 + (uVar1 >> 0x18);
 iVar12 = iVar12 + (uVar2 & 0xff);
 iVar13 = iVar13 + (uVar2 >> 8 & 0xff);
 iVar14 = iVar14 + (uVar2 >> 0x10 & 0xff);
 iVar15 = iVar15 + (uVar2 >> 0x18);
 } while (uVar7 != 0);
 iVar8 = iVar12 + iVar8 + iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11;
 if (uVar3 == param_2) {
 return iVar8;
 }
 }
 lVar6 = param_2 - uVar3;
 pbVar4 = (byte *)((long)param_1 + uVar3);
 do {
 lVar6 = lVar6 + -1;
 iVar8 = iVar8 + (uint)*pbVar4;
 pbVar4 = pbVar4 + 1;
 } while (lVar6 != 0);
 }
 return iVar8;
}

// Function: call_memset @ 0x101d2c
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x101d34
int param_strchr_strstr(char *param_1,uint param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,param_2 & 0xff);
 iVar1 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(param_1,param_3);
 iVar2 = (int)pcVar3 - (int)param_1;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}

// Function: call_strchr_strstr @ 0x101d8c
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x101d94
int test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 unsigned long uVar4;
 uint uVar5;
 int local_50;
 char local_48;
 int local_14;
 char *p_local_50;
 puts(DAT_0010349c);
 local_48 = 0;
 local_50 = 0;
 p_local_50 = (char *)&local_50;
 p_local_50[0] = 'H';
 p_local_50[1] = 'e';
 p_local_50[2] = 'l';
 p_local_50[3] = 'l';
 p_local_50[4] = 'o';
 p_local_50[5] = 'L';
 p_local_50[6] = 'i';
 p_local_50[7] = 'b';
 sVar3 = strlen((char *)&local_50);
 printf(DAT_001031a4,(unsigned long)sVar3);
 printf(DAT_001031bf,0);
 printf(DAT_001031da,0xc);
 printf(DAT_001031f6,0x5a);
 uVar5 = 0xffffffff;
 printf(DAT_00103212,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,(void *)DAT_00103156);
 printf(DAT_0010322e,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_50,&local_14);
 uVar1 = local_14 + (int)local_50;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_0010324a,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (iVar2 < 0) {
 uVar5 = 0xffffffff;
 }
 }
 printf(DAT_00103267,(unsigned long)uVar5);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00103283,uVar4 & 0xffffffff);
 printf(DAT_0010329f,0x5a);
 printf(DAT_001032bb,0);
 iVar2 = printf(DAT_001032d6,0xf);
 return iVar2;
}

// Function: param_linux_syscall @ 0x101f30
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

// Function: call_linux_syscall @ 0x101f84
unsigned int call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned int uVar3;
 int iVar4;
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar4 = (int)uVar1;
 if (iVar4 < 0) {
 piVar2 = __errno_location();
 iVar4 = -*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 uVar3 = 0x2a;
 if (iVar4 < 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x101fe4
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 long local_60;
 struct_stat local_stat_buf;
 iVar1 = stat(param_1,&local_stat_buf);
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x102020
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 long local_60;
 struct_stat local_stat_buf;
 iVar1 = stat("/etc/passwd",&local_stat_buf);
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x102064
uint param_fork_exec(char *param_1,char *param_2)
{
 __pid_t _Var1;
 uint uVar2;
 int local_24;
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,(char *)0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,&local_24,0);
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

// Function: call_fork_exec @ 0x1020ec
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 int local_14;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",(char *)0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,&local_14,0);
 if ((-1 < _Var1) && ((local_14 & 0x7f) == 0)) {
 if ((local_14 & 0xff00) == 0) {
 return 0x2a;
 }
 return 0xffffffff;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x102160
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

// Function: param_socket_create @ 0x10221c
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

// Function: param_shmget_shmat @ 0x1022e4
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
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 goto LAB_00102390;
 }
 }
 sVar2 = 0xffffffff;
LAB_00102390:
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1023b4
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

// Function: param_signal_handling @ 0x1023d4
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

// Function: signal_handler @ 0x102508
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function declarations for ARM64 atomics
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int ExclusiveMonitorPass(void);
char ExclusiveMonitorsStatus(void);

// Fix for atomic_counter union access
#define ATOMIC_COUNTER_VAL (atomic_counter._0_4_)

// Function: test_system_calls @ 0x102524
int test_system_calls(void)
{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 unsigned long uVar4;
 int *piVar5;
 uint uVar6;
 struct_stat local_stat_buf;
 long local_70;
 puts(DAT_001034c0);
 uVar4 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar2 = (int)uVar4;
 if (iVar2 < 0) {
 piVar5 = __errno_location();
 iVar2 = -*piVar5;
 }
 else {
 syscall(0x39,uVar4 & 0xffffffff);
 }
 uVar6 = 0x2a;
 uVar1 = uVar6;
 if (iVar2 < 0) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_00103325,(unsigned long)uVar1);
 iVar2 = stat("/etc/passwd",&local_stat_buf);
 local_70 = local_stat_buf.st_size;
 if (local_70 < 1) {
 uVar6 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(DAT_00103341,(unsigned long)uVar6);
 _Var3 = fork();
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",(char *)0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)0,0);
 if ((-1 < _Var3) && ((local_stat_buf.st_mode & 0x7f) == 0)) {
 uVar6 = 0x2a;
 if ((local_stat_buf.st_mode & 0xff00) != 0) {
 uVar6 = 0xffffffff;
 }
 uVar4 = (unsigned long)uVar6;
 goto LAB_001025f4;
 }
 }
 uVar4 = 0xffffffff;
LAB_001025f4:
 iVar2 = printf(DAT_0010335d,uVar4);
 uVar4 = param_pipe_communication();
 iVar2 = printf(DAT_00103379,uVar4 & 0xffffffff);
 uVar4 = param_socket_create();
 iVar2 = printf(DAT_00103395,uVar4 & 0xffffffff);
 iVar2 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
 iVar2 = printf(DAT_001033b1,(unsigned long)uVar6);
 uVar4 = param_signal_handling();
 iVar2 = printf(DAT_001033cd,uVar4 & 0xffffffff);
 return iVar2;
}

// Function: thread_compute @ 0x102694
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x1026c0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,(void *)&local_24);
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

// Function: call_pthread_create @ 0x102724
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,(void *)&local_24);
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

// Function: thread_sum @ 0x10278c
void * thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *pParam = (uint *)param_1;
 uVar1 = *pParam;
 uVar2 = pParam[1];
 pParam[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 pParam[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)(uVar2 - uVar1) >> 1);
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x1027c0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned long long local_60;
 int local_58;
 unsigned int uStack_54;
 unsigned int uStack_50;
 int local_4c;
 unsigned long long local_48;
 int local_40;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28;
 local_58 = 0;
 local_4c = 0;
 local_40 = 0;
 local_60 = 0xa00000001;
 uStack_54 = 0xb;
 uStack_50 = 0x14;
 local_48 = 0x1e00000015;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,(void *)&local_60);
 if (((iVar1 == 0) &&
 (iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,(void *)&uStack_54), iVar1 == 0))
 && (iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_sum,(void *)&local_48), iVar1 == 0))
 {
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar1 = local_58;
 if (((iVar2 == 0) && (iVar3 = pthread_join(local_30,(void **)0x0), iVar2 = local_4c, iVar3 == 0)
 ) && (iVar3 = pthread_join(local_28,(void **)0x0), iVar3 == 0)) {
 return local_40 + iVar2 + iVar1;
 }
 iVar1 = -2;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: thread_increment @ 0x1028c8
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

// Function: param_mutex_lock @ 0x102930
unsigned int param_mutex_lock(unsigned long param_1,int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 long lVar5;
 int local_34;
 param_1 = param_1 & 0xffffffff;
 local_34 = param_2;
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
 thread_increment,(void *)&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (param_1 * 8 - lVar5 != 0);
 ppVar4 = __ptr;
 if (0 < iVar3) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
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

// Function: call_mutex_lock @ 0x102a1c
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x102a28
void * consumer_thread(void *arg)
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
 return (void *)puVar1;
}

// Function: producer_thread @ 0x102ab4
void * producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x102b10
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,&local_30);
 pthread_join(local_8,(void **)0x0);
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

// Function: thread_atomic_increment @ 0x102bbc
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

// Function: thread_atomic_load_store @ 0x102c20
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return (void *)0;
}

// Function: param_atomic_ops @ 0x102c3c
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
 thread_atomic_increment,(void *)&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while (param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < (int)param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
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

// Function: call_atomic_ops @ 0x102d50
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x102d5c
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 lVar3 = tpidr_el0;
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return (void *)0;
}

// Function: param_thread_local_storage @ 0x102dac
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
 pthread_join(*ppVar6,&local_58);
 iVar1 = *local_58 + iVar1;
 iVar7 = local_58[1] + iVar7;
 free(local_58);
 free(*ppvVar8);
 param_1 = param_1 - 1;
 ppVar6 = ppVar6 + 1;
 ppvVar8 = ppvVar8 + 1;
 } while (param_1 != 0);
 goto LAB_00102ec8;
 }
 }
 }
 iVar1 = 0;
 iVar7 = 0;
LAB_00102ec8:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != iVar3 * 0x96 || iVar1 != iVar3 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x102f48
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x102f50
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 uint *local_30;
 unsigned int local_24;
 pthread_t local_8;
 puts(DAT_001034db);
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,(void *)&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 uVar3 = *local_30;
 free(local_30);
 }
 else {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(DAT_001033f3,(unsigned long)uVar3);
 uVar2 = param_pthread_join(iVar1);
 printf(DAT_0010340f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(DAT_0010342c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable(iVar1);
 printf(DAT_00103448,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_00103464,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(DAT_00103480,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x103048
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103070
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if (atomic_counter._bytes[4] != 0) {
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
  bVar2 = (bool)ExclusiveMonitorPass;
  if (bVar2) {
   *param_3 = param_2;
   cVar1 = ExclusiveMonitorsStatus;
  }
 } while (cVar1 != '\0');
 return iVar3;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x1030b0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (atomic_counter._bytes[4] == 0) {
  do {
   iVar1 = *param_2;
   cVar2 = '\x01';
   bVar3 = (bool)ExclusiveMonitorPass;
   if (bVar3) {
    *param_2 = iVar1 + param_1;
    cVar2 = ExclusiveMonitorsStatus;
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

// Function: _fini @ 0x1030e0
void _fini(void)
{
 return;
}

