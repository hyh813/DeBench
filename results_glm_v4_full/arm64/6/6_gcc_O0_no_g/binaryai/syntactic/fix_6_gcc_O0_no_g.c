/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
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
#define bool _Bool
#define true 1
#define false 0

/* Additional type definitions */
typedef int __pid_t;
typedef int key_t;
typedef unsigned int __useconds_t;

/* FILE type */
struct _IO_FILE;
typedef struct _IO_FILE FILE;

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* pthread types */
typedef unsigned long pthread_t;
typedef struct {
    unsigned int __data[5];
} pthread_mutex_t;
typedef struct {
    unsigned int __data[6];
} pthread_cond_t;
typedef struct {
    unsigned int __data[8];
} pthread_attr_t;

/* Socket types */
typedef struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;
typedef unsigned int socklen_t;

/* stat structure */
struct stat_struct;
typedef struct stat_struct stat_struct;

/* System V IPC structure */
struct shmid_ds;
typedef struct shmid_ds shmid_ds;

/* stat function - using struct stat_struct to avoid name conflict */
struct stat_struct {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned long st_mode;
    unsigned long st_nlink;
    unsigned long st_uid;
    unsigned long st_gid;
    unsigned long st_rdev;
    unsigned long long st_size;
    unsigned long st_blksize;
    unsigned long long st_blocks;
    struct {
        long tv_sec;
        long tv_nsec;
    } st_atim, st_mtim, st_ctim;
};

/* Thread start routine type */
typedef void *(*__start_routine)(void *);
typedef __start_routine pthread_start_routine_t;

// Decompiled by BinaryAI
// SHA256: 63fda1558250e17af64ebc81fdf05ced4d107842f2481d4be1a5cda027a569f2

/* Global variable declarations */
extern long __stack_chk_guard;

/* Data variable declarations */
static const char DAT_00103a78[8] = "teststr1";
static const char DAT_00103a70[8] = "teststr2";
static const char DAT_00103a80[8] = "hello";
static const char DAT_00103a90[8] = "hello";
static const char DAT_00103a88[8] = "hello";
static const char DAT_00103af8[8] = "TestName";
static const char DAT_00103b80[8] = "Testing";
static const char DAT_00103ba8[8] = "%lu\n";
static const char DAT_00103bc8[8] = "%lu\n";
static const char DAT_00103be8[8] = "%lu\n";
static const char DAT_00103c08[8] = "%lu\n";
static const char DAT_00103c28[8] = "%lu\n";
static const char DAT_00103c48[8] = "%lu\n";
static const char DAT_00103c68[8] = "%lu\n";
static const char DAT_00103c88[8] = "%lu\n";
static const char DAT_00103ca8[8] = "%lu\n";
static const char DAT_00103cc8[8] = "%lu\n";
static const char DAT_00103ce8[8] = "%lu\n";
static const char DAT_00103d08[8] = "%lu\n";
static const char DAT_00103d70[8] = "SysCalls";
static const char DAT_00103d90[8] = "%lu\n";
static const char DAT_00103db0[8] = "%lu\n";
static const char DAT_00103dd0[8] = "%lu\n";
static const char DAT_00103df0[8] = "%lu\n";
static const char DAT_00103e10[8] = "%lu\n";
static const char DAT_00103e30[8] = "%lu\n";
static const char DAT_00103e50[8] = "%lu\n";
static const char DAT_00103ea8[8] = "Threads";
static const char DAT_00103ec8[8] = "%lu\n";
static const char DAT_00103ee8[8] = "%lu\n";
static const char DAT_00103f08[8] = "%lu\n";
static const char DAT_00103f28[8] = "%lu\n";
static const char DAT_00103f48[8] = "%lu\n";
static const char DAT_00103f68[8] = "%lu\n";

/* Additional declarations for atomic operations */
int tmp_ldWn;
int tmp_stWn;
void LOAcquire(void) { return; }
void LORelease(void) { return; }
bool ExclusiveMonitorPass(int *addr, int size) { return true; }
bool ExclusiveMonitorsStatus(void) { return false; }



/* Atomic counter union */
union {
    int _0_4_;
    byte _4_1_;
} atomic_counter;

/* Condition variable and data */
unsigned int data;
int ready;
pthread_mutex_t cond_mutex = {0};
pthread_cond_t cond = {0};

/* Shared counter and mutex */
int shared_counter;
pthread_mutex_t counter_mutex = {0};

/* Signal handling */
int signal_received;
int signal_number;

/* Thread local storage */
unsigned long tpidr_el0;

/* Runtime variables */
void *__dso_handle;
char completed_0;

// Function: FUN_001013d0 @ 0x1013d0
void FUN_001013d0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1013f0
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::_exit @ 0x101400
extern void _exit(int __status);

// Function: <EXTERNAL>::strlen @ 0x101410
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::raise @ 0x101420
extern int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x101430
extern int __libc_start_main(int (*main)(void), void *init, void *fini, void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::execl @ 0x101440
extern int execl(char *__path,char *__arg,...);

// Function: <EXTERNAL>::listen @ 0x101450
extern int listen(int __fd,int __n);

// Function: <EXTERNAL>::shmdt @ 0x101460
extern int shmdt(void *__shmaddr);

// Function: <EXTERNAL>::bind @ 0x101470
extern int bind(int __fd,sockaddr *__addr,socklen_t __len);

// Function: <EXTERNAL>::__cxa_finalize @ 0x101480
extern void __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::pipe @ 0x101490
extern int pipe(int *__pipedes);

// Function: <EXTERNAL>::fork @ 0x1014a0
extern __pid_t fork(void);

// Function: <EXTERNAL>::snprintf @ 0x1014b0
extern int snprintf(char *__s,size_t __maxlen,char *__format,...);

// Function: <EXTERNAL>::fileno @ 0x1014c0
extern int fileno(FILE *__stream);

// Function: <EXTERNAL>::signal @ 0x1014d0
extern __sighandler_t signal(int __sig,__sighandler_t __handler);

// Function: <EXTERNAL>::fclose @ 0x1014e0
extern int fclose(FILE *__stream);

// Function: <EXTERNAL>::fopen @ 0x1014f0
extern FILE * fopen(char *__filename,char *__modes);

// Function: <EXTERNAL>::malloc @ 0x101500
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::setsockopt @ 0x101510
extern int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::open @ 0x101520
extern int open(char *__file,int __oflag,...);

// Function: <EXTERNAL>::pthread_cond_signal @ 0x101530
extern int pthread_cond_signal(pthread_cond_t *__cond);

// Function: <EXTERNAL>::memset @ 0x101540
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::shmat @ 0x101550
extern void * shmat(int __shmid,void *__shmaddr,int __shmflg);

// Function: <EXTERNAL>::sleep @ 0x101560
extern uint sleep(uint __seconds);

// Function: <EXTERNAL>::htons @ 0x101570
extern uint16_t htons(uint16_t __hostshort);

// Function: <EXTERNAL>::rewind @ 0x101580
extern void rewind(FILE *__stream);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101590
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::close @ 0x1015a0
extern int close(int __fd);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1015b0
extern void __gmon_start__(void);

// Function: <EXTERNAL>::stat @ 0x1015c0
extern int stat(char *__file,stat_struct *__buf);

// Function: <EXTERNAL>::write @ 0x1015d0
extern ssize_t write(int __fd,void *__buf,size_t __n);

// Function: <EXTERNAL>::__getauxval @ 0x1015e0
extern unsigned long __getauxval(unsigned long __type);

// Function: <EXTERNAL>::abort @ 0x1015f0
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x101600
extern int puts(char *__s);

// Function: <EXTERNAL>::memcmp @ 0x101610
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::strcmp @ 0x101620
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::shmctl @ 0x101630
extern int shmctl(int __shmid,int __cmd,shmid_ds *__buf);

// Function: <EXTERNAL>::fread @ 0x101640
extern size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);

// Function: <EXTERNAL>::ftok @ 0x101650
extern key_t ftok(char *__pathname,int __proj_id);

// Function: <EXTERNAL>::free @ 0x101660
extern void free(void *__ptr);

// Function: <EXTERNAL>::shmget @ 0x101670
extern int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x101680
extern int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::strchr @ 0x101690
extern char * strchr(char *__s,int __c);

// Function: <EXTERNAL>::fwrite @ 0x1016a0
extern size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s);

// Function: <EXTERNAL>::pthread_create @ 0x1016b0
extern int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine __start_routine,
 void *__arg);

// Function: <EXTERNAL>::wait @ 0x1016c0
extern __pid_t wait(void *__stat_loc);

// Function: <EXTERNAL>::socket @ 0x1016d0
extern int socket(int __domain,int __type,int __protocol);

// Function: <EXTERNAL>::strcpy @ 0x1016e0
extern char * strcpy(char *__dest,char *__src);

// Function: <EXTERNAL>::read @ 0x1016f0
extern ssize_t read(int __fd,void *__buf,size_t __nbytes);

// Function: <EXTERNAL>::strstr @ 0x101700
extern char * strstr(char *__haystack,char *__needle);

// Function: <EXTERNAL>::usleep @ 0x101710
extern int usleep(__useconds_t __useconds);

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101720
extern int __isoc99_sscanf(const char *__str,const char *__format,...);

// Function: <EXTERNAL>::sscanf @ 0x101721
extern int sscanf(const char *__str,const char *__format,...);

// Function: <EXTERNAL>::strncpy @ 0x101730
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::printf @ 0x101740
extern int printf(char *__format,...);

// Function: <EXTERNAL>::__errno_location @ 0x101750
extern int * __errno_location(void);

// Function: <EXTERNAL>::pthread_join @ 0x101760
extern int pthread_join(pthread_t __th,void **__thread_return);

// Function: <EXTERNAL>::alarm @ 0x101770
extern uint alarm(uint __seconds);

// Function: <EXTERNAL>::pthread_cancel @ 0x101780
extern int pthread_cancel(pthread_t __th);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x101790
extern int pthread_mutex_lock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::syscall @ 0x1017a0
extern long syscall(long __sysno,...);

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x1017b0
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::waitpid @ 0x1017c0
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);

// Function: <EXTERNAL>::unlink @ 0x1017d0
extern int unlink(char *__name);

// Function: init_have_lse_atomics @ 0x101800
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 atomic_counter._4_1_ = extraout_var & 1;
 return;
}













// Function: param_strcpy @ 0x101954
size_t param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 return strlen(param_1);
}

// Function: call_strcpy @ 0x101980
int call_strcpy(int param_1)
{
 unsigned int uVar1;
 char auStack_28 [32];
 long local_8;
 local_8 = __stack_chk_guard;
 uVar1 = param_strcpy(auStack_28,"HelloLib");
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_strcmp @ 0x1019e8
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

// Function: call_strcmp @ 0x101a3c
int call_strcmp(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp((char *)&DAT_00103a78,(char *)&DAT_00103a70);
 iVar2 = param_strcmp((char *)&DAT_00103a80,(char *)&DAT_00103a80);
 iVar3 = param_strcmp((char *)&DAT_00103a90,(char *)&DAT_00103a88);
 return iVar1 + iVar2 + iVar3;
}

// Function: param_strlen @ 0x101aa8
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x101acc
int call_strlen(int param_1)
{
 return param_strlen("BinBench2025");
}

// Function: param_memcpy @ 0x101af0
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x101b20
int call_memcpy(int param_1)
{
 int iVar1;
 unsigned long long local_38;
 unsigned long long uStack_30;
 unsigned int local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 int local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 local_38 = 0x140000000a;
 uStack_30 = 0x280000001e;
 local_28 = 0x32;
 local_20 = 0;
 local_18 = 0;
 local_10 = 0;
 param_memcpy(&local_20,&local_38,0x14);
 iVar1 = (int)local_20 + (int)local_18 + local_10;
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: param_memcmp @ 0x101bb8
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

// Function: call_memcmp @ 0x101c14
int call_memcmp(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long local_38;
 unsigned int local_30;
 unsigned long long local_28;
 unsigned int local_20;
 unsigned long long local_18;
 unsigned int local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 local_38 = 0x200000001;
 local_30 = 3;
 local_28 = 0x200000001;
 local_20 = 4;
 local_18 = 0x200000001;
 local_10 = 3;
 iVar1 = param_memcmp(&local_38,&local_28,0xc);
 iVar2 = param_memcmp(&local_38,&local_18,0xc);
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: param_printf @ 0x101ce8
int param_printf(uint param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,(const char *)param_2);
 return iVar1;
}

// Function: call_printf @ 0x101d1c
int call_printf(int param_1)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,(unsigned long long)&DAT_00103af8);
 return uVar1;
}

// Function: param_scanf @ 0x101d44
int param_scanf(const char *param_1)
{
 int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = __stack_chk_guard;
 local_c = sscanf(param_1,"%d,%d",&local_14,&local_10);
 if (local_c == 2) {
 local_14 = local_14 + local_10;
 }
 else {
 local_14 = -1;
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_14;
}

// Function: call_scanf @ 0x101dd8
int call_scanf(int param_1)
{
 return param_scanf("123,456");
}

// Function: param_fopen_fclose @ 0x101df4
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

// Function: call_fopen_fclose @ 0x101e48
int call_fopen_fclose(int param_1)
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

// Function: param_fread_fwrite @ 0x101e80
unsigned long long param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 unsigned long long uVar2;
 size_t sVar3;
 size_t sVar4;
 char acStack_28 [32];
 long local_8;
 local_8 = __stack_chk_guard;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar3 = strlen("BinBench Test Data");
 sVar3 = fwrite("BinBench Test Data",1,sVar3,__s);
 sVar4 = strlen("BinBench Test Data");
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(acStack_28,1,sVar3,__s);
 acStack_28[sVar4] = '\0';
 fclose(__s);
 unlink(param_1);
 if ((sVar4 == sVar3) && (iVar1 = strcmp(acStack_28,"BinBench Test Data"), iVar1 == 0)) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x101fb8
int call_fread_fwrite(int param_1)
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}

// Function: param_malloc_free @ 0x101fd4
int param_malloc_free(unsigned long param_1)
{
 int iVar1;
 int *__ptr;
 unsigned long local_10;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 __ptr[local_10] = (int)local_10 * 10;
 }
 iVar1 = *__ptr + __ptr[param_1 - 1];
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x10209c
int call_malloc_free(int param_1)
{
 return param_malloc_free(10);
}

// Function: param_memset @ 0x1020b4
int param_memset(void *param_1,size_t param_2)
{
 int local_14;
 unsigned long local_10;
 memset(param_1,0,param_2);
 local_14 = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_14 = local_14 + (uint)*(byte *)((long)param_1 + local_10);
 }
 return local_14;
}

// Function: call_memset @ 0x102130
int call_memset(int param_1)
{
 int local_34;
 int local_30 [10];
 long local_8;
 local_8 = __stack_chk_guard;
 for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
 local_30[local_34] = 0xff;
 }
 param_memset(local_30,0x28);
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_30[0] + local_30[9];
}

// Function: param_strchr_strstr @ 0x1021c8
int param_strchr_strstr(char *param_1,byte param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,(uint)param_2);
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
 return iVar1 + iVar2;
}

// Function: call_strchr_strstr @ 0x10225c
int call_strchr_strstr(int param_1)
{
 return param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
}

// Function: test_standard_library_functions @ 0x102294
int test_standard_library_functions(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00103b80);
 uVar2 = call_strcpy(iVar1);
 iVar1 = printf(DAT_00103ba8,uVar2 & 0xffffffff);
 uVar2 = call_strcmp(iVar1);
 iVar1 = printf(DAT_00103bc8,uVar2 & 0xffffffff);
 uVar2 = call_strlen(iVar1);
 iVar1 = printf(DAT_00103be8,uVar2 & 0xffffffff);
 uVar2 = call_memcpy(iVar1);
 iVar1 = printf(DAT_00103c08,uVar2 & 0xffffffff);
 uVar2 = call_memcmp(iVar1);
 iVar1 = printf(DAT_00103c28,uVar2 & 0xffffffff);
 uVar2 = call_printf(iVar1);
 iVar1 = printf(DAT_00103c48,uVar2 & 0xffffffff);
 uVar2 = call_scanf(iVar1);
 iVar1 = printf(DAT_00103c68,uVar2 & 0xffffffff);
 uVar2 = call_fopen_fclose(iVar1);
 iVar1 = printf(DAT_00103c88,uVar2 & 0xffffffff);
 uVar2 = call_fread_fwrite(iVar1);
 iVar1 = printf(DAT_00103ca8,uVar2 & 0xffffffff);
 uVar2 = call_malloc_free(iVar1);
 iVar1 = printf(DAT_00103cc8,uVar2 & 0xffffffff);
 uVar2 = call_memset(iVar1);
 iVar1 = printf(DAT_00103ce8,uVar2 & 0xffffffff);
 uVar2 = call_strchr_strstr(iVar1);
 iVar1 = printf(DAT_00103d08,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: param_linux_syscall @ 0x1023a4
int param_linux_syscall(unsigned long long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uVar2 = syscall(0x38,0xffffff9c,param_1,0);
 iVar1 = (int)uVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(0x39,uVar2 & 0xffffffff);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1023fc
int call_linux_syscall(int param_1)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_linux_syscall((unsigned long long)"/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x102434
unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 stat_struct local_58;
 long local_8;
 local_8 = __stack_chk_guard;
 iVar1 = stat(param_1,&local_58);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else if (local_58.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0x2a;
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x1024bc
int call_win32_api(int param_1)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x1024d8
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 uint uVar1;
 uint local_14;
 __pid_t local_10;
 __pid_t local_c;
 long local_8;
 local_8 = __stack_chk_guard;
 local_10 = fork();
 if (local_10 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (local_10 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 local_c = waitpid(local_10,(int *)&local_14,0);
 if (local_c < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((local_14 & 0x7f) == 0) {
 uVar1 = (int)local_14 >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_fork_exec @ 0x1025c0
int call_fork_exec(int param_1)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 return 0x2a;
 }
 else {
 return 0xffffffff;
 }
}

// Function: param_pipe_communication @ 0x1025fc
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned long long uVar3;
 size_t __n;
 ssize_t sVar4;
 int local_30;
 int local_2c;
 char auStack_28 [32];
 long local_8;
 local_8 = __stack_chk_guard;
 iVar1 = pipe(&local_30);
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
 close(local_30);
 iVar1 = local_2c;
 __n = strlen("HelloPipe");
 write(iVar1,"HelloPipe",__n);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar4 = read(local_30,auStack_28,0x1f);
 auStack_28[sVar4] = 0;
 close(local_30);
 wait((void *)0x0);
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 else {
 uVar3 = 0x2a;
 }
 }
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_pipe_communication @ 0x102720
int call_pipe_communication(int param_1)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x102734
unsigned long long param_socket_create(void)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_20;
 int local_1c;
 sockaddr local_18;
 long local_8;
 local_8 = __stack_chk_guard;
 local_1c = socket(2,1,0);
 if (local_1c < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_20 = 1;
 iVar1 = setsockopt(local_1c,1,2,&local_20,4);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_18,0,0x10);
 local_18.sa_family = 2;
 *(uint16_t *)local_18.sa_data = htons(0);
 local_18.sa_data[2] = '\0';
 local_18.sa_data[3] = '\0';
 local_18.sa_data[4] = '\0';
 local_18.sa_data[5] = '\0';
 iVar1 = bind(local_1c,&local_18,0x10);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_1c,5);
 if (iVar1 < 0) {
 close(local_1c);
 uVar2 = 0xfffffffc;
 }
 else {
 close(local_1c);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_socket_create @ 0x10286c
int call_socket_create(int param_1)
{
 return param_socket_create();
}

// Function: param_shmget_shmat @ 0x102880
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
 if (__key < 0) {
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
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
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

// Function: call_shmget_shmat @ 0x10298c
int call_shmget_shmat(int param_1)
{
 int iVar1;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 return 0xffffffff;
 }
 else {
 return 0x2a;
 }
}

// Function: signal_handler @ 0x1029bc
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: param_signal_handling @ 0x1029f0
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int local_4;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 local_4 = 1000;
 while ((signal_received == 0 && (0 < local_4))) {
 usleep(1000);
 local_4 = local_4 + -1;
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_4 = 2000;
 while ((signal_received == 0 && (0 < local_4))) {
 usleep(1000);
 local_4 = local_4 + -1;
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 uVar2 = 0xfffffffb;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
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

// Function: call_signal_handling @ 0x102b64
int call_signal_handling(int param_1)
{
 return param_signal_handling();
}

// Function: test_system_calls @ 0x102b78
int test_system_calls(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00103d70);
 uVar2 = call_linux_syscall(iVar1);
 iVar1 = printf(DAT_00103d90,uVar2 & 0xffffffff);
 uVar2 = call_win32_api(iVar1);
 iVar1 = printf(DAT_00103db0,uVar2 & 0xffffffff);
 uVar2 = call_fork_exec(iVar1);
 iVar1 = printf(DAT_00103dd0,uVar2 & 0xffffffff);
 uVar2 = call_pipe_communication(iVar1);
 iVar1 = printf(DAT_00103df0,uVar2 & 0xffffffff);
 uVar2 = call_socket_create(iVar1);
 iVar1 = printf(DAT_00103e10,uVar2 & 0xffffffff);
 uVar2 = call_shmget_shmat(iVar1);
 iVar1 = printf(DAT_00103e30,uVar2 & 0xffffffff);
 uVar2 = call_signal_handling(iVar1);
 iVar1 = printf(DAT_00103e50,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: thread_compute @ 0x102c24
void * thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 int *piParam1 = (int *)param_1;
 iVar1 = *piParam1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x102c74
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 unsigned int local_24;
 int local_20;
 unsigned int local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 local_24 = param_1;
 local_20 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (local_20 == 0) {
 pthread_join(local_18,&local_10);
 local_1c = *(unsigned int *)local_10;
 free(local_10);
 uVar1 = local_1c;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_pthread_create @ 0x102d28
int call_pthread_create(int param_1)
{
 return param_pthread_create(7);
}

// Function: thread_sum @ 0x102d40
void * thread_sum(void *param_1)
{
 int local_c;
 int *piParam1 = (int *)param_1;
 piParam1[2] = 0;
 for (local_c = *piParam1; local_c <= piParam1[1]; local_c = local_c + 1) {
 piParam1[2] = piParam1[2] + local_c;
 }
 return 0;
}

// Function: param_pthread_join @ 0x102dac
int param_pthread_join(void)
{
 int iVar1;
 int local_54;
 int local_50;
 int local_4c;
 pthread_t apStack_48 [3];
 unsigned long long local_30;
 unsigned long long uStack_28;
 unsigned long long uStack_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 uStack_28 = 0xb00000000;
 local_30 = 0xa00000001;
 uStack_18 = 0x1e00000015;
 uStack_20 = 0x14;
 local_10 = 0;
 for (local_54 = 0; local_54 < 3; local_54 = local_54 + 1) {
 iVar1 = pthread_create(apStack_48 + local_54,(pthread_attr_t *)0x0,thread_sum,
 (void *)((long)&local_30 + (long)local_54 * 0xc));
 if (iVar1 != 0) {
 local_50 = -1;
 goto LAB_00102ed0;
 }
 }
 local_50 = 0;
 local_4c = 0;
 do {
 if (2 < local_4c) {
LAB_00102ed0:
 if (local_8 - __stack_chk_guard == 0) {
 return local_50;
 }
 __stack_chk_fail();
 }
 iVar1 = pthread_join(apStack_48[local_4c],(void **)0x0);
 if (iVar1 != 0) {
 local_50 = -2;
 goto LAB_00102ed0;
 }
 local_50 = local_50 + *(int *)((long)&uStack_28 + (long)local_4c * 0xc);
 local_4c = local_4c + 1;
 } while( true );
}

// Function: call_pthread_join @ 0x102f00
int call_pthread_join(int param_1)
{
 return param_pthread_join();
}

// Function: thread_increment @ 0x102f14
void * thread_increment(void *param_1)
{
 int iVar1;
 int local_8;
 int *piParam1 = (int *)param_1;
 iVar1 = *piParam1;
 for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x102f98
unsigned long long param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 int local_28;
 int local_24;
 int local_14;
 int local_10;
 void *local_8;
 local_28 = param_2;
 local_24 = param_1;
 local_8 = malloc((long)param_1 << 3);
 if (local_8 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_8 + (long)local_14 * 8),(pthread_attr_t *)0x0
 ,thread_increment,&local_28);
 if (iVar1 != 0) {
 free(local_8);
 return 0xfffffffe;
 }
 }
 for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 1) {
 pthread_join(*(pthread_t *)((long)local_8 + (long)local_10 * 8),(void **)0x0);
 }
 free(local_8);
 if (local_24 * local_28 == shared_counter) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x1030c4
int call_mutex_lock(int param_1)
{
 return param_mutex_lock(4,1000);
}

// Function: consumer_thread @ 0x1030e0
void * consumer_thread(void *unused)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 (void)unused;
 pthread_mutex_lock(&cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x103164
void * producer_thread(void *unused)
{
 (void)unused;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1031c8
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 pthread_t local_18;
 void *local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,&local_10);
 pthread_join(local_20,(void **)0x0);
 uVar2 = *(unsigned int *)local_10;
 free(local_10);
 }
 else {
 pthread_cancel(local_18);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x1032bc
int call_condition_variable(int param_1)
{
 return param_condition_variable();
}

// Function: thread_atomic_increment @ 0x1032d0
void * thread_atomic_increment(void *param_1)
{
 int iVar1;
 long lVar2;
 int local_14;
 int *piParam1 = (int *)param_1;
 lVar2 = __stack_chk_guard;
 iVar1 = *piParam1;
 for (local_14 = 0; local_14 < iVar1; local_14 = local_14 + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter._0_4_);
 __aarch64_cas4_acq_rel(local_14,local_14 + 1000,&atomic_counter._0_4_);
 }
 if (lVar2 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1033bc
void * thread_atomic_load_store(void *unused)
{
 (void)unused;
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x1033f8
unsigned long long param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_38;
 int local_34;
 int local_24;
 int local_20;
 int local_1c;
 pthread_t local_18;
 void *local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 local_38 = param_2;
 local_34 = param_1;
 local_10 = malloc((long)param_1 << 3);
 if (local_10 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter._0_4_ = 0;
 for (local_24 = 0; local_24 < local_34; local_24 = local_24 + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_10 + (long)local_24 * 8),
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_38);
 if (iVar1 != 0) {
 free(local_10);
 uVar2 = 0xfffffffe;
 goto LAB_00103554;
 }
 }
 iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_18,(void **)0x0);
 }
 for (local_20 = 0; local_20 < local_34; local_20 = local_20 + 1) {
 pthread_join(*(pthread_t *)((long)local_10 + (long)local_20 * 8),(void **)0x0);
 }
 local_1c = atomic_counter._0_4_;
 free(local_10);
 if (local_1c < 1) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0x2a;
 }
 }
LAB_00103554:
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x103584
int call_atomic_ops(int param_1)
{
 return param_atomic_ops(4,500);
}

// Function: thread_tls_test @ 0x1035a0
void * thread_tls_test(void *param_1)
{
 unsigned int uVar1;
 long lVar2;
 long lVar3;
 unsigned int *puVar4;
 char *pcParam1 = (char *)param_1;
 lVar2 = tpidr_el0;
 uVar1 = *(unsigned int *)(lVar2 + 0x10);
 lVar2 = tpidr_el0;
 lVar3 = tpidr_el0;
 *(int *)(lVar3 + 0x10) = *(int *)(lVar2 + 0x10) + 0x32;
 lVar2 = tpidr_el0;
 strncpy((char *)(lVar2 + 0x18),pcParam1,0x1f);
 puVar4 = (unsigned int *)malloc(8);
 *puVar4 = uVar1;
 lVar2 = tpidr_el0;
 puVar4[1] = *(unsigned int *)(lVar2 + 0x10);
 return puVar4;
}

// Function: param_thread_local_storage @ 0x103644
unsigned long long param_thread_local_storage(int param_1)
{
 void **ppvVar1;
 int iVar2;
 unsigned long long uVar3;
 void *pvVar4;
 uint local_48;
 int local_44;
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int *local_28;
 void *local_20;
 void *local_18;
 void *local_10;
 long local_8;
 local_8 = __stack_chk_guard;
 local_20 = malloc((long)param_1 << 3);
 local_18 = malloc((long)param_1 << 3);
 if ((local_20 == (void *)0x0) || (local_18 == (void *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (local_48 = 0; (int)local_48 < param_1; local_48 = local_48 + 1) {
 ppvVar1 = (void **)((long)local_18 + (long)(int)local_48 * 8);
 pvVar4 = malloc(0x10);
 *ppvVar1 = pvVar4;
 snprintf(*(char **)((long)local_18 + (long)(int)local_48 * 8),0x10,"Thread-%d",(unsigned long)local_48
 );
 }
 for (local_44 = 0; local_44 < param_1; local_44 = local_44 + 1) {
 iVar2 = pthread_create((pthread_t *)((long)local_20 + (long)local_44 * 8),
 (pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)local_18 + (long)local_44 * 8));
 if (iVar2 != 0) {
 for (local_40 = 0; local_40 <= local_44; local_40 = local_40 + 1) {
 free(*(void **)((long)local_18 + (long)local_40 * 8));
 }
 free(local_18);
 free(local_20);
 uVar3 = 0xfffffffe;
 goto LAB_001038c8;
 }
 }
 local_3c = 0;
 local_38 = 0;
 for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
 pthread_join(*(pthread_t *)((long)local_20 + (long)local_34 * 8),&local_10);
 local_3c = local_3c + *(int *)local_10;
 local_38 = local_38 + *((int *)local_10 + 1);
 free(local_10);
 free(*(void **)((long)local_18 + (long)local_34 * 8));
 }
 free(local_18);
 free(local_20);
 if ((local_3c == param_1 * 100) && (local_38 == param_1 * 0x96)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_001038c8:
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x1038fc
int call_thread_local_storage(int param_1)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x103914
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00103ea8);
 uVar2 = call_pthread_create(iVar1);
 iVar1 = printf(DAT_00103ec8,uVar2 & 0xffffffff);
 uVar2 = call_pthread_join(iVar1);
 iVar1 = printf(DAT_00103ee8,uVar2 & 0xffffffff);
 uVar2 = call_mutex_lock(iVar1);
 iVar1 = printf(DAT_00103f08,uVar2 & 0xffffffff);
 uVar2 = call_condition_variable(iVar1);
 iVar1 = printf(DAT_00103f28,uVar2 & 0xffffffff);
 uVar2 = call_atomic_ops(iVar1);
 iVar1 = printf(DAT_00103f48,uVar2 & 0xffffffff);
 uVar2 = call_thread_local_storage(iVar1);
 iVar1 = printf(DAT_00103f68,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1039ac
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x1039d0
static inline int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
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

// Function: __aarch64_ldadd4_acq_rel @ 0x103a10
static inline int __aarch64_ldadd4_acq_rel(unsigned int param_1,int *param_2)
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

// Function: _fini @ 0x103a40
static void _fini(void)
{
 return;
}

