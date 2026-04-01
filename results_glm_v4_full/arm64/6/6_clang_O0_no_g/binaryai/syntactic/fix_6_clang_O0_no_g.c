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
typedef unsigned long pthread_t;
typedef int key_t;
typedef struct _IO_FILE FILE;
#define bool _Bool
#define true 1
#define false 0

#define NULL ((void *)0)

/* Additional type definitions for missing types */
typedef unsigned char byte;
typedef unsigned int socklen_t;
typedef void (*__sighandler_t)(int);
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
typedef struct sockaddr sockaddr;
typedef unsigned int __useconds_t;

struct stat {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_nlink;
    unsigned int st_mode;
    unsigned int st_uid;
    unsigned int st_gid;
    unsigned long __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    struct {
        long tv_sec;
        long tv_nsec;
    } st_atim, st_mtim, st_ctim;
    long __glibc_reserved[3];
};

struct shmid_ds;
typedef struct shmid_ds shmid_ds;

typedef struct {
    unsigned long __data[10];
} pthread_mutex_t;

typedef struct {
    unsigned long __data[12];
} pthread_cond_t;

typedef struct {
    int __val[2];
} pthread_attr_t;

typedef void *(*__start_routine)(void *);

typedef union {
    unsigned long long _0_8_;
    struct {
        int _0_4_;
        byte _4_1_;
        char _5_3_[3];
    };
} atomic_counter_t;

atomic_counter_t atomic_counter;



/* Global variables */
char completed_0 = 0;
void *__dso_handle;
unsigned long long stack0x00000008;
char *DAT_00103911;
char *DAT_00103915;
char *DAT_00103919;
char *DAT_0010391d;
char *DAT_00103921;
char *DAT_001039aa;
char *DAT_001039cf;
char *DAT_001039ea;
char *DAT_00103a05;
char *DAT_00103a21;
char *DAT_00103a3d;
char *DAT_00103a59;
char *DAT_00103a75;
char *DAT_00103a92;
char *DAT_00103aae;
char *DAT_00103aca;
char *DAT_00103ae6;
char *DAT_00103b01;
char *DAT_00103b50;
char *DAT_00103b6c;
char *DAT_00103b88;
char *DAT_00103ba4;
char *DAT_00103bc0;
char *DAT_00103bdc;
char *DAT_00103bf8;
char *DAT_00103c14;
char *DAT_00103c3a;
char *DAT_00103c59;
char *DAT_00103c75;
char *DAT_00103c92;
char *DAT_00103cae;
char *DAT_00103cca;
char *DAT_00103ce6;

unsigned int data = 0;
int ready = 0;

int signal_received = 0;
unsigned int signal_number = 0;

int shared_counter = 0;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

// Decompiled by BinaryAI
// SHA256: 19099889d5a3201f79d08016b1a87b2bdafd8031eb48c4a28099e26634573f41



// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
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
extern void __libc_start_main(int (*main)(void), void *stack_end, void *rtld_fini, void *stack_start, void *__unbounded, void *params);

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

// Function: <EXTERNAL>::htons @ 0x101480
extern uint16_t htons(uint16_t __hostshort);

// Function: <EXTERNAL>::rewind @ 0x101490
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::close @ 0x1014a0
extern int close(int __fd);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1014b0
extern void __gmon_start__(void);

// Function: <EXTERNAL>::stat @ 0x1014c0
extern int stat(char *__file,struct stat *__buf);

// Function: <EXTERNAL>::write @ 0x1014d0
extern ssize_t write(int __fd,void *__buf,size_t __n);

// Function: <EXTERNAL>::__getauxval @ 0x1014e0
extern unsigned long __getauxval(unsigned long type);

// Function: <EXTERNAL>::abort @ 0x1014f0
extern void abort(void);

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
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
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
extern int __isoc99_sscanf(const char *__str, const char *__format, ...);

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
 unsigned long auxval = __getauxval(0x10);
 atomic_counter._4_1_ = (byte)(auxval & 1);
 return;
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

// Function: __do_global_dtors_aux @ 0x101800
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
}

// Function: param_strcpy @ 0x101854
char * param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return param_1;
}

// Function: call_strcpy @ 0x101888
unsigned int call_strcpy(void)
{
 char *uVar1;
 char auStack_30 [32];
 uVar1 = param_strcpy(auStack_30,"HelloLib");
 return (unsigned int)(uintptr_t)uVar1;
}

// Function: param_strcmp @ 0x1018b8
unsigned int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 unsigned int local_28;
 iVar1 = strcmp(param_1,param_2);
 if (iVar1 < 1) {
 local_28 = 0;
 if (iVar1 < 0) {
 local_28 = 0xffffffff;
 }
 }
 else {
 local_28 = 1;
 }
 return local_28;
}

// Function: call_strcmp @ 0x101920
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(DAT_00103911,DAT_00103915);
 iVar2 = param_strcmp(DAT_00103919,"test");
 iVar3 = param_strcmp(DAT_0010391d,DAT_00103921);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101990
unsigned long param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1 & 0xffffffff;
}

// Function: call_strlen @ 0x1019c0
unsigned long call_strlen(void)
{
 return param_strlen("BinBench2025");
}

// Function: param_memcpy @ 0x1019ec
unsigned long param_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x101a28
int call_memcpy(void)
{
 unsigned long long local_48;
 unsigned long long local_40;
 int local_38;
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned int local_20;
 uStack_28 = 0x280000001e;
 local_30 = 0x140000000a;
 local_20 = 0x32;
 local_48 = 0;
 local_40 = 0;
 local_38 = 0;
 param_memcpy(&local_48,&local_30,0x14);
 return (int)local_48 + (int)local_40 + local_38;
}

// Function: param_memcmp @ 0x101a88
unsigned int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 unsigned int local_30;
 iVar1 = memcmp(param_1,param_2,param_3);
 if (iVar1 < 1) {
 local_30 = 0;
 if (iVar1 < 0) {
 local_30 = 0xffffffff;
 }
 }
 else {
 local_30 = 1;
 }
 return local_30;
}

// Function: call_memcmp @ 0x101af8
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_40;
 unsigned int local_38;
 unsigned long long local_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned int local_18;
 local_20 = 0x200000001;
 local_18 = 3;
 local_30 = 0x200000001;
 local_28 = 4;
 local_40 = 0x200000001;
 local_38 = 3;
	iVar1 = param_memcmp(&local_20,&local_30,0xc);
 iVar2 = param_memcmp(&local_20,&local_40,0xc);
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x101ba0
int param_printf(uint param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,(char *)param_2);
 return iVar1;
}

// Function: call_printf @ 0x101bdc
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,(unsigned long long)(uintptr_t)"Test");
 return uVar1;
}

// Function: param_scanf @ 0x101c0c
int param_scanf(const char *param_1)
{
 int iVar1;
 int local_28;
 int local_24;
 int local_14;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_24,&local_28);
 if (iVar1 == 2) {
 local_14 = local_24 + local_28;
 }
 else {
 local_14 = -1;
 }
 return local_14;
}

// Function: call_scanf @ 0x101c78
int call_scanf(void)
{
 return param_scanf((const char *)"123,456");
}

// Function: param_fopen_fclose @ 0x101c94
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int local_14;
 __stream = fopen(param_1,"r");
 if (__stream == (FILE *)0x0) {
 local_14 = -1;
 }
 else {
 local_14 = fileno(__stream);
 fclose(__stream);
 }
 return local_14;
}

// Function: call_fopen_fclose @ 0x101d00
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

// Function: param_fread_fwrite @ 0x101d38
unsigned int param_fread_fwrite(char *param_1)
{
 char *__ptr;
 bool bVar1;
 int iVar2;
 FILE *__s;
 size_t sVar3;
 size_t sVar4;
 char acStack_48 [32];
 char *local_28;
 char *local_20;
 unsigned int local_14;
 local_28 = "BinBench Test Data";
 local_20 = param_1;
 __s = fopen(param_1,"w+");
 __ptr = local_28;
 if (__s == (FILE *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 sVar3 = strlen(local_28);
 sVar3 = fwrite(__ptr,1,sVar3,__s);
 sVar4 = strlen(local_28);
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(acStack_48,1,sVar3,__s);
 acStack_48[sVar4] = '\0';
 fclose(__s);
 unlink(local_20);
 bVar1 = false;
 if (sVar4 == sVar3) {
 iVar2 = strcmp(acStack_48,local_28);
 bVar1 = iVar2 == 0;
 }
 local_14 = 0x2a;
 if (!bVar1) {
 local_14 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 local_14 = 0xfffffffe;
 }
 }
 return local_14;
}

// Function: call_fread_fwrite @ 0x101e84
unsigned int call_fread_fwrite(void)
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}

// Function: param_malloc_free @ 0x101ea0
int param_malloc_free(unsigned long param_1)
{
 int *__ptr;
 unsigned long local_30;
 int local_14;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 local_14 = -1;
 }
 else {
 for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
 __ptr[local_30] = (int)local_30 * 10;
 }
 local_14 = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return local_14;
}

// Function: call_malloc_free @ 0x101f68
int call_malloc_free(void)
{
 return param_malloc_free(10);
}

// Function: param_memset @ 0x101f80
int param_memset(void *param_1,unsigned long param_2)
{
 unsigned long local_38;
 int local_2c;
 memset(param_1,0,param_2);
 local_2c = 0;
 for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
 local_2c = local_2c + (uint)*(byte *)((long)param_1 + local_38);
 }
 return local_2c;
}

// Function: call_memset @ 0x102008
int call_memset(void)
{
 int local_3c;
 int local_38 [10];
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_38,0x28);
 return local_38[0] + local_38[9];
}

// Function: param_strchr_strstr @ 0x102074
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
 char *pcVar1;
 int local_58;
 int local_50;
 pcVar1 = strchr(param_1,(uint)param_2);
 if (pcVar1 == (char *)0x0) {
 local_50 = -1;
 }
 else {
 local_50 = (int)pcVar1 - (int)param_1;
 }
 pcVar1 = strstr(param_1,param_3);
 if (pcVar1 == (char *)0x0) {
 local_58 = -1;
 }
 else {
 local_58 = (int)pcVar1 - (int)param_1;
 }
 return local_50 + local_58;
}

// Function: call_strchr_strstr @ 0x10212c
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x10216c
int test_standard_library_functions(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf("%s", &DAT_001039aa);
 uVar2 = call_strcpy();
 iVar1 = printf("%s", &DAT_001039cf);
 uVar2 = call_strcmp();
 iVar1 = printf("%s", &DAT_001039ea);
 uVar2 = call_strlen();
 iVar1 = printf("%s", &DAT_00103a05);
 uVar2 = call_memcpy();
 iVar1 = printf("%s", &DAT_00103a21);
 uVar2 = call_memcmp();
 iVar1 = printf("%s", &DAT_00103a3d);
 uVar2 = call_printf();
 iVar1 = printf("%s", &DAT_00103a59);
 uVar2 = call_scanf();
 iVar1 = printf("%s", &DAT_00103a75);
 uVar2 = call_fopen_fclose();
 iVar1 = printf("%s", &DAT_00103a92);
 uVar2 = call_fread_fwrite();
 iVar1 = printf("%s", &DAT_00103aae);
 uVar2 = call_malloc_free();
 iVar1 = printf("%s", &DAT_00103aca);
 uVar2 = call_memset();
 iVar1 = printf("%s", &DAT_00103ae6);
 uVar2 = call_strchr_strstr();
 iVar1 = printf("%s", &DAT_00103b01);
 return iVar1;
}

// Function: param_linux_syscall @ 0x102278
int param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 int local_14;
 uVar1 = syscall(0x38,0xffffff9c,(char *)param_1,0);
 local_14 = (int)uVar1;
 if (local_14 < 0) {
 piVar2 = __errno_location();
 local_14 = -*piVar2;
 }
 else {
 syscall(0x39,uVar1 & 0xffffffff);
 }
 return local_14;
}

// Function: call_linux_syscall @ 0x1022f4
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall((unsigned long long)(uintptr_t)"/etc/passwd");
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x10232c
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 struct stat buf;
 iVar1 = stat(param_1,&buf);
 if (iVar1 < 0) {
 return 0xffffffff;
 }
 else {
 if (buf.st_size < 1) {
 return 0xfffffffe;
 }
 }
 return 0x2a;
}

// Function: call_win32_api @ 0x10238c
unsigned int call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x1023a8
int param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint local_30;
 __pid_t local_2c;
 unsigned long long local_28;
 char *local_20;
 int local_14;
 local_28 = param_2;
 local_20 = param_1;
 local_2c = fork();
 if (local_2c < 0) {
 local_14 = -1;
 }
 else {
 if (local_2c == 0) {
 execl(local_20,local_20,local_28,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(local_2c,(int *)&local_30,0);
 if (_Var1 < 0) {
 local_14 = -2;
 }
 else if ((local_30 & 0x7f) == 0) {
 local_14 = (int)(local_30 & 0xff00) >> 8;
 }
 else {
 local_14 = -3;
 }
 }
 return local_14;
}

// Function: call_fork_exec @ 0x102478
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

// Function: param_pipe_communication @ 0x1024b4
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 size_t __n;
 ssize_t sVar3;
 char auStack_3c [32];
 int local_1c;
 int local_18;
 unsigned int local_14;
 iVar1 = pipe(&local_1c);
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 _Var2 = fork();
 if (_Var2 < 0) {
 local_14 = 0xfffffffe;
 }
 else {
 if (_Var2 == 0) {
 close(local_1c);
 iVar1 = local_18;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_18);
 _exit(0);
 }
 close(local_18);
 sVar3 = read(local_1c,auStack_3c,0x1f);
 auStack_3c[sVar3] = 0;
 close(local_1c);
 wait((void *)0x0);
 local_14 = 0x2a;
 if (sVar3 < 1) {
 local_14 = 0xfffffffd;
 }
 }
 }
 return local_14;
}

// Function: call_pipe_communication @ 0x1025c8
unsigned int call_pipe_communication(void)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x1025dc
unsigned int param_socket_create(void)
{
 uint16_t uVar1;
 int iVar2;
 sockaddr local_30;
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 local_18 = socket(2,1,0);
 if (local_18 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 local_1c = 1;
 iVar2 = setsockopt(local_18,1,2,&local_1c,4);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffe;
 }
 else {
 local_30.sa_data[6] = '\0';
 local_30.sa_data[7] = '\0';
 local_30.sa_data[8] = '\0';
 local_30.sa_data[9] = '\0';
 local_30.sa_data[10] = '\0';
 local_30.sa_data[11] = '\0';
 local_30.sa_data[12] = '\0';
 local_30.sa_data[13] = '\0';
 uVar1 = htons(0);
 local_30.sa_family = 2;
 local_30.sa_data[1] = uVar1 >> 8;
 local_30.sa_data[0] = uVar1 & 0xff;
 iVar2 = bind(local_18,&local_30,0x10);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffd;
 }
 else {
 iVar2 = listen(local_18,5);
 if (iVar2 < 0) {
 close(local_18);
 local_14 = 0xfffffffc;
 }
 else {
 close(local_18);
 local_14 = 0x2a;
 }
 }
 }
 }
 return local_14;
}

// Function: call_socket_create @ 0x1026fc
unsigned int call_socket_create(void)
{
 return param_socket_create();
}

// Function: param_shmget_shmat @ 0x102710
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__dest;
 size_t sVar2;
 unsigned int local_14;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 local_14 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 local_14 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 local_14 = 0xfffffffe;
 }
 else {
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffffffffffff) {
 local_14 = 0xfffffffd;
 }
 else {
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 local_14 = (unsigned int)sVar2;
 shmdt(__dest);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return local_14;
}

// Function: call_shmget_shmat @ 0x102844
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

/* Forward declarations for signal handling */
void signal_handler(int param_1);

// Function: param_signal_handling @ 0x102874
unsigned int param_signal_handling(void)
{
 int iVar1;
 __sighandler_t p_Var2;
 int local_18;
 unsigned int local_14;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_14 = 0xffffffff;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 local_14 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_18 = 1000;
 while( true ) {
 iVar1 = local_18;
 if (signal_received == 0) {
 local_18 = local_18 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if (signal_received == 0) {
 local_14 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_18 = 2000;
 while( true ) {
 iVar1 = local_18;
 if (signal_received == 0) {
 local_18 = local_18 + -1;
 }
 if (signal_received != 0 || iVar1 < 1) break;
 usleep(1000);
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 local_14 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 local_14 = 0x2a;
 }
 }
 else {
 local_14 = 0xfffffffc;
 }
 }
 }
 return local_14;
}

// Function: signal_handler @ 0x102a44
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: call_signal_handling @ 0x102a6c
unsigned int call_signal_handling(void)
{
 return param_signal_handling();
}

// Function: test_system_calls @ 0x102a80
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf("%s", &DAT_00103b50);
 uVar2 = call_linux_syscall();
 iVar1 = printf("%s", &DAT_00103b6c);
 uVar2 = call_win32_api();
 iVar1 = printf("%s", &DAT_00103b88);
 uVar2 = call_fork_exec();
 iVar1 = printf("%s", &DAT_00103ba4);
 uVar2 = call_pipe_communication();
 iVar1 = printf("%s", &DAT_00103bc0);
 uVar2 = call_socket_create();
 iVar1 = printf("%s", &DAT_00103bdc);
 uVar2 = call_shmget_shmat();
 iVar1 = printf("%s", &DAT_00103bf8);
 uVar2 = call_signal_handling();
 iVar1 = printf("%s", &DAT_00103c14);
 return iVar1;
}

// Function: thread_compute @ 0x102b28
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)((uintptr_t)param_1);
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x102b84
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 void *local_30;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int local_18;
 unsigned int local_14;
 local_24 = param_1;
 local_18 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_30);
 local_14 = *(unsigned int *)local_30;
 free(local_30);
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}

// Function: call_pthread_create @ 0x102c0c
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}

// Function: thread_sum @ 0x102c24
void * thread_sum(void *param_1)
{
 int local_14;
 int *arr = (int *)((uintptr_t)param_1);
 arr[2] = 0;
 for (local_14 = arr[0]; local_14 <= arr[1]; local_14 = local_14 + 1) {
 arr[2] = arr[2] + local_14;
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x102c98
int param_pthread_join(void)
{
 int iVar1;
 int local_60;
 int local_5c;
 int local_58;
 int local_54 [4];
 unsigned int local_44;
 unsigned int local_3c;
 unsigned int local_38;
 pthread_t apStack_30 [4];
 memset(local_54,0,0x24);
 local_54[0] = 1;
 local_54[1] = 10;
 local_54[3] = 0xb;
 local_44 = 0x14;
 local_3c = 0x15;
 local_38 = 0x1e;
 for (local_58 = 0; local_58 < 3; local_58 = local_58 + 1) {
 iVar1 = pthread_create(&apStack_30[local_58],(pthread_attr_t *)0x0,thread_sum,
 &local_54[local_58 * 3]);
 if (iVar1 != 0) {
 return -1;
 }
 }
 local_5c = 0;
 local_60 = 0;
 while( true ) {
 if (2 < local_60) {
 return local_5c;
 }
 iVar1 = pthread_join(apStack_30[local_60],(void **)0x0);
 if (iVar1 != 0) break;
 local_5c = local_5c + local_54[local_60 * 3 + 2];
 local_60 = local_60 + 1;
 }
 return -2;
}

// Function: call_pthread_join @ 0x102dec
int call_pthread_join(void)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x102e00
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_20;
 iVar1 = *(int *)((uintptr_t)param_1);
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return (void *)0;
}

// Function: param_mutex_lock @ 0x102e8c
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 void *__ptr;
 int local_30;
 int local_2c;
 int local_1c;
 int local_18;
 unsigned int local_14;
 local_1c = param_2;
 local_18 = param_1;
 __ptr = malloc((long)param_1 << 3);
 if (__ptr == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_2c = 0; local_2c < local_18; local_2c = local_2c + 1) {
 iVar1 = pthread_create(&((pthread_t *)__ptr)[local_2c],(pthread_attr_t *)0x0,
 thread_increment,&local_1c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 pthread_join(((pthread_t *)__ptr)[local_30],(void **)0x0);
 }
 free(__ptr);
 local_14 = 0x2a;
 if (shared_counter != local_18 * local_1c) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}

// Function: call_mutex_lock @ 0x102fcc
unsigned int call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: consumer_thread @ 0x102fe8
void * consumer_thread(void *unused)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 (void)unused;
 pthread_mutex_lock(&cond_mutex);
 while (ready == 0) {
 uVar1 = data;
 pthread_cond_wait(&cond,&cond_mutex);
 }
 uVar1 = data;
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x103070
void * producer_thread(void *unused)
{
 (void)unused;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x1030d8
unsigned int param_condition_variable(void)
{
 int iVar1;
 void *local_30;
 pthread_t local_28;
 pthread_t local_20;
 unsigned int local_14;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_28,&local_30);
 pthread_join(local_20,(void **)0x0);
 local_14 = *(unsigned int *)local_30;
 free(local_30);
 }
 else {
 pthread_cancel(local_28);
 local_14 = 0xfffffffe;
 }
 }
 else {
 local_14 = 0xffffffff;
 }
 return local_14;
}

// Function: call_condition_variable @ 0x10319c
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

/* ARM64 atomic intrinsics - definitions below */

/* Forward declarations for ARM64 atomic intrinsics */
static int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
static int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);

// Function: thread_atomic_increment @ 0x1031b0
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 int local_20;
 int counter_mem;
 iVar1 = *(int *)((uintptr_t)param_1);
 for (local_20 = 0; local_20 < iVar1; local_20 = local_20 + 1) {
 __aarch64_ldadd4_acq_rel(1, &counter_mem);
 __aarch64_cas4_acq_rel(local_20,local_20 + 1000,&atomic_counter._0_4_);
 }
 return (void *)0;
}

// Function: thread_atomic_load_store @ 0x103298
void * thread_atomic_load_store(void *unused)
{
 (void)unused;
 atomic_counter._0_4_ = (int)atomic_counter._0_4_ + 100;
 return NULL;
}

// Function: param_atomic_ops @ 0x1032d8
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 int local_3c;
 pthread_t local_38;
 int local_30;
 unsigned int local_2c;
 void *local_28;
 unsigned int local_1c;
 int local_18;
 unsigned int local_14;
 local_1c = param_2;
 local_18 = param_1;
 local_28 = malloc((long)param_1 << 3);
 if (local_28 == (void *)0x0) {
 local_14 = 0xffffffff;
 }
 else {
 local_2c = 0;
 atomic_counter._0_4_ = 0;
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 iVar1 = pthread_create(&((pthread_t *)local_28)[local_30],
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_1c);
 if (iVar1 != 0) {
 free(local_28);
 return 0xfffffffe;
 }
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 for (local_3c = 0; iVar1 = atomic_counter._0_4_, local_3c < local_18; local_3c = local_3c + 1) {
 pthread_join(((pthread_t *)local_28)[local_3c],(void **)0x0);
 }
 free(local_28);
 local_14 = 0x2a;
 if (iVar1 < 1) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}

// Function: call_atomic_ops @ 0x103458
unsigned int call_atomic_ops(void)
{
 return param_atomic_ops(4,500);
}

// Function: thread_tls_test @ 0x103474
void * thread_tls_test(void *param_1)
{
 int *piVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 char *str_param = (char *)((uintptr_t)param_1);
 __asm__ volatile("mrs %0, tpidr_el0" : "=r" (lVar3));
 piVar1 = (int *)(lVar3 + 0x10);
 iVar2 = *piVar1;
 *piVar1 = *piVar1 + 0x32;
 strncpy((char *)(lVar3 + 0x14),str_param,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = *piVar1;
 return piVar4;
}

// Function: param_thread_local_storage @ 0x103504
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 void *pvVar2;
 void *local_48;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30;
 uint local_2c;
 void *local_28;
 void *local_20;
 int local_18;
 unsigned int local_14;
 local_18 = param_1;
 local_20 = malloc((long)param_1 << 3);
 local_28 = malloc((long)local_18 << 3);
 if ((local_20 == (void *)0x0) || (local_28 == (void *)0x0)) {
 local_14 = 0xffffffff;
 }
 else {
 for (local_2c = 0; (int)local_2c < local_18; local_2c = local_2c + 1) {
 pvVar2 = malloc(0x10);
 ((void **)local_28)[local_2c] = pvVar2;
 snprintf((char *)pvVar2,0x10,"Thread-%d",(unsigned long)local_2c);
 }
 for (local_30 = 0; local_30 < local_18; local_30 = local_30 + 1) {
 iVar1 = pthread_create(&((pthread_t *)local_20)[local_30],
 (pthread_attr_t *)0x0,thread_tls_test,
 ((void **)local_28)[local_30]);
 if (iVar1 != 0) {
 for (local_34 = 0; local_34 <= local_30; local_34 = local_34 + 1) {
 free(((void **)local_28)[local_34]);
 }
 free(local_28);
 free(local_20);
 return 0xfffffffe;
 }
 }
 local_38 = 0;
 local_3c = 0;
 for (local_40 = 0; local_40 < local_18; local_40 = local_40 + 1) {
 pthread_join(((pthread_t *)local_20)[local_40],&local_48);
 local_38 = local_38 + *((int *)local_48);
 local_3c = local_3c + ((int *)local_48)[1];
 free(local_48);
 free(((void **)local_28)[local_40]);
 }
 free(local_28);
 free(local_20);
 local_14 = 0x2a;
 if (local_38 != local_18 * 100 || local_3c != local_18 * 0x96) {
 local_14 = 0xfffffffd;
 }
 }
 return local_14;
}

// Function: call_thread_local_storage @ 0x1037a0
unsigned int call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x1037b8
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = printf("%s", &DAT_00103c3a);
 uVar2 = call_pthread_create();
 iVar1 = printf("%s", &DAT_00103c59);
 uVar2 = call_pthread_join();
 iVar1 = printf("%s", &DAT_00103c75);
 uVar2 = call_mutex_lock();
 iVar1 = printf("%s", &DAT_00103c92);
 uVar2 = call_condition_variable();
 iVar1 = printf("%s", &DAT_00103cae);
 uVar2 = call_atomic_ops();
 iVar1 = printf("%s", &DAT_00103cca);
 uVar2 = call_thread_local_storage();
 iVar1 = printf("%s", &DAT_00103ce6);
 return iVar1;
}

// Function: main @ 0x10384c
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

/* Forward declarations for ARM64 exclusive monitor intrinsics */
static inline int ExclusiveMonitorPass(int *addr, int size) {
 int val = *addr;
 __asm__ volatile("" ::: "memory");
 return val;
}

static inline int ExclusiveMonitorsStatus(void) {
 return 0;  // Success
}

// Function: __aarch64_cas4_acq_rel @ 0x103880
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
 bVar2 = (bool)ExclusiveMonitorPass(param_3,0x10);
 if (bVar2) {
 *param_3 = param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
}

/* Forward declarations for ARM64 load/store acquire/release */
static inline void LOAcquire(void) {
 __asm__ volatile("" ::: "memory");
}

static inline void LORelease(void) {
 __asm__ volatile("" ::: "memory");
}

// Temporary variables for atomic operations
static int tmp_ldWn __attribute__((unused));
static int tmp_stWn __attribute__((unused));

// Function: __aarch64_ldadd4_acq_rel @ 0x1038c0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (atomic_counter._4_1_ == '\0') {
 do {
 iVar1 = *param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
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



