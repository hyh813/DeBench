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

/* Additional type definitions for compilation */
typedef struct {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

typedef unsigned int socklen_t;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef struct __FILE FILE;

/* Additional type definitions for compilation */
typedef unsigned int uint;
typedef int key_t;
typedef int __useconds_t;
typedef unsigned char byte;
typedef int bool;

/* Ghidra type definitions */
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned long long undefined5;
typedef unsigned long long undefined8;

/* Ghidra CONCAT macros */
#define CONCAT22(x,y) ((unsigned short)((unsigned short)(y) | ((unsigned short)(x) << 8)))
#define CONCAT33(x,y) ((unsigned int)((unsigned int)(y) | ((unsigned int)(x) << 8)))
#define CONCAT35(x,y) ((unsigned long long)((unsigned long long)(y) | ((unsigned long long)(x) << 24)))
#define CONCAT44(x,y) ((unsigned int)((unsigned int)(y) | ((unsigned int)(x) << 16)))
#define CONCAT53(x,y) ((unsigned long long)((unsigned long long)(y) | ((unsigned long long)(x) << 40)))
#define CONCAT55(x,y) ((unsigned long long)((unsigned long long)(y) | ((unsigned long long)(x) << 40)))

/* GCC variadic macro for forwarding arguments */
#define __va_arg_pack()

typedef struct {
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
} pthread_cond_t;

typedef struct {
    int __count;
    unsigned int __owner;
    int __kind;
    unsigned int __nusers;
} pthread_mutex_t;

typedef unsigned long pthread_t;

typedef struct {
    int __detachstate;
    int __schedpolicy;
    int __schedparam;
    int __inheritsched;
    int __scope;
    int __stackaddr_set;
    void *__stackaddr;
    unsigned long __stacksize;
} pthread_attr_t;

typedef void *(*__start_routine)(void *);

typedef struct {
    unsigned int st_dev;
    unsigned int st_ino;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned short st_uid;
    unsigned short st_gid;
    unsigned int st_rdev;
    long st_size;
    unsigned long st_blksize;
    unsigned long st_blocks;
    unsigned long st_atime;
    unsigned long st_mtime;
    unsigned long st_ctime;
} stat_struct;

typedef struct {
    int shm_perm;
    size_t shm_segsz;
    unsigned long shm_atime;
    unsigned long shm_dtime;
    unsigned long shm_ctime;
    int shm_cpid;
    int shm_lpid;
    unsigned long shm_nattch;
} shmid_ds;

// Global variables
int __aarch64_have_lse_atomics = 0;
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int ready = 0;
int data = 0;
union { int _0_4_; int value; } atomic_counter;
void *counter_mutex = 0;
void *cond_mutex = 0;
void *cond = 0;
long tpidr_el0 = 0;
int tmp_ldWn = 0;
int tmp_stWn = 0;
int completed_0 = 0;
void *__dso_handle = 0;
extern char DAT_00103366[];
extern char DAT_001036ac[];
extern char DAT_001033b4[];
extern char DAT_001033cf[];
extern char DAT_001033ea[];
extern char DAT_00103406[];
extern char DAT_00103422[];
extern char DAT_0010343e[];
extern char DAT_0010345a[];
extern char DAT_00103477[];
extern char DAT_00103493[];
extern char DAT_001034af[];
extern char DAT_001034cb[];
extern char DAT_001034e6[];
extern char DAT_001036d0[];
extern char DAT_00103535[];
extern char DAT_00103551[];
extern char DAT_0010356d[];
extern char DAT_00103589[];
extern char DAT_001035a5[];
extern char DAT_001035c1[];
extern char DAT_001035dd[];
extern char DAT_00103603[];
extern char DAT_0010361f[];
extern char DAT_0010363c[];
extern char DAT_00103658[];
extern char DAT_00103674[];
extern char DAT_00103690[];
extern char DAT_001036eb[];

// Define DAT_* string literals
char DAT_00103366[] = "TestName";
char DAT_001036ac[] = "Testing standard library functions...";
char DAT_001033b4[] = "strlen result: %lu\n";
char DAT_001033cf[] = "strcmp result: %d\n";
char DAT_001033ea[] = "call_strlen result: %lu\n";
char DAT_00103406[] = "call_memcpy result: %lu\n";
char DAT_00103422[] = "call_memcmp result: %lu\n";
char DAT_0010343e[] = "call_printf result: %lu\n";
char DAT_0010345a[] = "call_scanf result: %lu\n";
char DAT_00103477[] = "call_fopen_fclose result: %lu\n";
char DAT_00103493[] = "call_fread_fwrite result: %u\n";
char DAT_001034af[] = "call_malloc_free result: %lu\n";
char DAT_001034cb[] = "call_memset result: %lu\n";
char DAT_001034e6[] = "call_strchr_strstr result: %d\n";
char DAT_001036d0[] = "Testing system calls...";
char DAT_00103535[] = "syscall result: %lu\n";
char DAT_00103551[] = "stat result: %lu\n";
char DAT_0010356d[] = "fork_exec result: %lu\n";
char DAT_00103589[] = "pipe result: %lu\n";
char DAT_001035a5[] = "socket result: %lu\n";
char DAT_001035c1[] = "shm result: %lu\n";
char DAT_001035dd[] = "signal result: %lu\n";
char DAT_00103603[] = "pthread_create result: %lu\n";
char DAT_0010361f[] = "pthread_join result: %lu\n";
char DAT_0010363c[] = "mutex result: %lu\n";
char DAT_00103658[] = "condition variable result: %lu\n";
char DAT_00103674[] = "atomic ops result: %lu\n";
char DAT_00103690[] = "TLS result: %lu\n";
char DAT_001036eb[] = "Testing thread concurrency...";

// External functions
int call_weak_fn(int ctx);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3);

// Standard library function declarations
int puts(char *__s);
unsigned long strlen(const char *__s);
int strcmp(const char *__s1,const char *__s2);
void *memcpy(void *__dest,const void *__src,unsigned long __n);
int memcmp(const void *__s1,const void *__s2,unsigned long __n);
int printf(char *__format,...);
int raise(int __sig);
void *malloc(unsigned long __size);
void free(void *__ptr);
void *memset(void *__s,int __c,unsigned long __n);
FILE *fopen(const char *__path,const char *__mode);
int fclose(FILE *__stream);
int fileno(FILE *__stream);
char *strcpy(char *__dest,const char *__src);
char *strchr(const char *__s,int __c);
char *strstr(const char *__haystack,const char *__needle);
unsigned long __getauxval(unsigned long __type);
int __errno_location(void);
int fork(void);
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);
int wait(int *__stat_loc);
int close(int __fd);
ssize_t read(int __fd,void *__buf,size_t __nbytes);
ssize_t write(int __fd,const void *__buf,size_t __nbytes);
int pipe(int __pipedes[2]);
int socket(int __domain,int __type,int __protocol);
int setsockopt(int __sockfd,int __level,int __optname,const void *__optval,socklen_t __optlen);
int bind(int __sockfd,const sockaddr *__addr,socklen_t __len);
int listen(int __sockfd,int __n);
key_t ftok(const char *__path,int __id);
int shmget(key_t __key,size_t __size,int __shmflg);
void *shmat(int __shmid,const void *__shmaddr,int __shmflg);
int shmdt(const void *__shmaddr);
int shmctl(int __shmid,int __cmd,shmid_ds *__buf);
__sighandler_t signal(int __sig,__sighandler_t __handler);
int usleep(__useconds_t __useconds);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
int stat(const char *__file,stat_struct *__buf);
int pthread_create(pthread_t *_ptr,const pthread_attr_t *__attr,void *(*__start_routine)(void *),void *__arg);
int pthread_join(pthread_t _id,void **__retval);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex);
int pthread_cond_signal(pthread_cond_t *__cond);
int pthread_cancel(pthread_t );
int strncpy(char *__dest,const char *__src,unsigned long __n);
int unlink(const char *__name);
void rewind(FILE *__stream);
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream);
size_t fwrite(const void *__ptr,size_t __size,size_t __n,FILE *__stream);

// LOAcquire/LORelease stub implementations
void LOAcquire(void)
{
 return;
}

void LORelease(void)
{
 return;
}

// ExclusiveMonitorPass/ExclusiveMonitorsStatus stub implementations
int ExclusiveMonitorPass(void *addr, int size)
{
 return 1;
}

char ExclusiveMonitorsStatus(void)
{
 return 0;
}

// Thread function forward declarations
void *thread_compute(void *param_1);
void *thread_sum(void *param_1);
void *thread_increment(void *param_1);
void *consumer_thread(void *param_1);
void *producer_thread(void *param_1);
void *thread_atomic_increment(void *param_1);
void *thread_atomic_load_store(void *param_1);
void *thread_tls_test(void *param_1);
void signal_handler(int param_1);

// Decompiled by BinaryAI
// SHA256: 6709ed4bce9ff1a05d8f45a54ee55ba3e4ea5d58ff840a2a7325b8cdced9b55f

// Function: _init @ 0x1012c8
static int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_001012e0 @ 0x1012e0
void FUN_001012e0(void)
{
 return;
}



// Function: <EXTERNAL>::_exit @ 0x101310
void _exit(int __status)
{
 while(1);
}





// Function: <EXTERNAL>::__libc_start_main @ 0x101340
void __libc_start_main(void *main_fn, void *argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 return;
}

// Function: <EXTERNAL>::execl @ 0x101350
int execl(char *__path,char *__arg,...)
{
 return -1;
}







// Function: <EXTERNAL>::__cxa_finalize @ 0x101390
void __cxa_finalize(void *dso_handle)
{
 return;
}





// Function: <EXTERNAL>::snprintf @ 0x1013c0
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 return 0;
}













// Function: <EXTERNAL>::open @ 0x101430
int open(char *__file,int __oflag,...)
{
 return -1;
}













// Function: <EXTERNAL>::__gmon_start__ @ 0x1014a0
void __gmon_start__(void)
{
 return;
}







// Function: <EXTERNAL>::abort @ 0x1014e0
void abort(void)
{
 while(1);
}





































// Function: <EXTERNAL>::__isoc99_sscanf @ 0x101610
int __isoc99_sscanf(char *__s,char *__format,...)
{
 return 0;
}















// Function: <EXTERNAL>::syscall @ 0x101690
long syscall(long __sysno,...)
{
 return -1;
}







// Function: init_have_lse_atomics @ 0x101700
void init_have_lse_atomics(void)
{
 unsigned long extraout_var;
 extraout_var = __getauxval(16);
 __aarch64_have_lse_atomics = (int)(extraout_var & 1);
 return;
}

// Forward declaration for main
int main(void);

// Function: _start @ 0x101740
static void _start(unsigned long long param_1)
{
 unsigned long long param_9 = 0;
 void *stack_ptr = (void *)0x10000008;
 __libc_start_main(main,(void *)param_9,stack_ptr,0,0,(void *)param_1,stack_ptr);
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
 char local_30[8];
 char local_28;
 local_28 = 0;
 local_30[0] = 'H';
 local_30[1] = 'e';
 local_30[2] = 'l';
 local_30[3] = 'l';
 local_30[4] = 'o';
 local_30[5] = 'L';
 local_30[6] = 'i';
 local_30[7] = 'b';
 strlen(local_30);
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
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103366);
 return iVar1;
}

// Function: param_scanf @ 0x10196c
int param_scanf(char *param_1)
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
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}

// Function: call_fopen_fclose @ 0x101a44
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 unsigned int uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = 0x2a;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 return 0xffffffff;
}

// Function: param_fread_fwrite @ 0x101aa4
unsigned int param_fread_fwrite(char *param_1)
{
 unsigned int uVar1;
 FILE *__s;
 size_t sVar2;
 unsigned long local_50;
 undefined3 uStack_48;
 undefined5 local_45;
 unsigned int uStack_40;
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 return 0xffffffff;
 }
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 != 0x12) {
 fclose(__s);
 return 0xfffffffe;
 }
 rewind(__s);
 sVar2 = fread(&local_50,1,0x12,__s);
 *(char *)((long)&local_50 + sVar2) = 0;
 fclose(__s);
 unlink(param_1);
 uVar1 = 0xfffffffd;
 if (sVar2 == 0x12) {
 uVar1 = 0x2a;
 if ((local_50 ^ 0x68636e65426e6942 | CONCAT53(local_45,uStack_48) ^ 0x6144207473655420 |
 (unsigned long long)CONCAT35((undefined3)uStack_40,local_45) ^ 0x61746144207473) != 0) {
 uVar1 = 0xfffffffd;
 }
 }
 return uVar1;
}

// Function: call_fread_fwrite @ 0x101bd8
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x101be4
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
 if (param_1 == 0) goto LAB_00101c94;
 if (param_1 < 8) {
 uVar1 = 0;
LAB_00101c70:
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
 if (uVar1 != param_1) goto LAB_00101c70;
 }
 iVar6 = *__ptr;
LAB_00101c94:
 iVar7 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar7 + iVar6;
}

// Function: call_malloc_free @ 0x101cb4
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x101cbc
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

// Function: call_memset @ 0x101d68
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x101d70
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

// Function: call_strchr_strstr @ 0x101dc8
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x101dd0
int test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 unsigned long uVar4;
 uint uVar5;
 char local_50[8];
 char local_48;
 int local_14;
 puts(&DAT_001036ac);
 local_48 = 0;
 local_50[0] = 'H';
 local_50[1] = 'e';
 local_50[2] = 'l';
 local_50[3] = 'l';
 local_50[4] = 'o';
 local_50[5] = 'L';
 local_50[6] = 'i';
 local_50[7] = 'b';
 sVar3 = strlen(local_50);
 printf(&DAT_001033b4,sVar3);
 printf(&DAT_001033cf,0);
 printf(&DAT_001033ea,0xc);
 printf(&DAT_00103406,0x5a);
 uVar5 = 0xffffffff;
 printf(&DAT_00103422,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103366);
 printf(&DAT_0010343e,(unsigned long)uVar1);
 iVar2 = __isoc99_sscanf("123,456","%d,%d",&local_50,&local_14);
 uVar1 = local_14 + (int)local_50;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_0010345a,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (iVar2 < 0) {
 uVar5 = 0xffffffff;
 }
 }
 printf(&DAT_00103477,(unsigned long)uVar5);
 uVar4 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00103493,uVar4 & 0xffffffff);
 printf(&DAT_001034af,0x5a);
 printf(&DAT_001034cb,0);
 iVar2 = printf(&DAT_001034e6,0xf);
 return iVar2;
}

// Function: param_linux_syscall @ 0x101f6c
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(0x38,0xffffff9c,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (unsigned long)(uint)-*piVar2;
}

// Function: call_linux_syscall @ 0x101fcc
unsigned int call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 uVar3 = 0x2a;
 if ((int)uVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}

// Function: param_win32_api @ 0x102040
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 long local_60;
 stat_struct local_stat_buf;
 iVar1 = stat(param_1,&local_stat_buf);
 local_60 = local_stat_buf.st_size;
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x10207c
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 long local_60;
 stat_struct local_stat_buf;
 iVar1 = stat("/etc/passwd",&local_stat_buf);
 local_60 = local_stat_buf.st_size;
 uVar2 = 0x2a;
 if (local_60 < 1) {
 uVar2 = 0xfffffffe;
 }
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x1020c0
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint local_24;
 _Var1 = fork();
 if (_Var1 < 0) {
 return 0xffffffff;
 }
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 return 0xfffffffe;
 }
 if ((local_24 & 0x7f) != 0) {
 return 0xfffffffd;
 }
 return local_24 >> 8 & 0xff;
}

// Function: call_fork_exec @ 0x10216c
unsigned int call_fork_exec(void)
{
 __pid_t _Var1;
 unsigned int uVar2;
 uint local_14;
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if ((-1 < _Var1) && ((local_14 & 0x7f) == 0)) {
 uVar2 = 0x2a;
 if ((local_14 & 0xff00) != 0) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
 }
 }
 return 0xffffffff;
}

// Function: param_pipe_communication @ 0x1021e8
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
 return 0xffffffff;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 return uVar4;
 }
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 _exit(0);
 }
 return 0xfffffffe;
}

// Function: param_socket_create @ 0x1022bc
unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 sockaddr local_38;
 unsigned int local_24;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 return 0xffffffff;
 }
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (-1 < iVar1) {
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
 if (-1 < iVar1) {
 iVar1 = listen(__fd,5);
 close(__fd);
 uVar2 = 0xfffffffc;
 if (-1 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
 }
 close(__fd);
 return 0xfffffffd;
 }
 close(__fd);
 return 0xfffffffe;
}

// Function: param_shmget_shmat @ 0x1023a8
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
 return 0xfffffffe;
 }
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s != (unsigned long long *)0xffffffffffffffff) {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return sVar2 & 0xffffffff;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1024a8
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

// Function: param_signal_handling @ 0x1024c8
unsigned long long param_signal_handling(void)
{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 int iVar4;
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar4 = 1000;
 do {
 usleep(1000);
 bVar2 = iVar4 != 0;
 bVar1 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 if (signal_number != 10) {
 return 0xfffffffc;
 }
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar4 = 2000;
 do {
 usleep(1000);
 bVar2 = iVar4 != 0;
 bVar1 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar2) && (signal_received != 0 || bVar1));
 }
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return 0xfffffffb;
}

// Function: signal_handler @ 0x102638
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x102654
int test_system_calls(void)
{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 unsigned long uVar4;
 int *piVar5;
 uint uVar6;
 stat_struct local_stat_buf;
 long local_70;
 int local_a0[1];
 puts(&DAT_001036d0);
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
 printf(&DAT_00103535,(unsigned long)uVar1);
 iVar2 = stat("/etc/passwd",&local_stat_buf);
 local_70 = local_stat_buf.st_size;
 if (local_70 < 1) {
 uVar6 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_00103551,(unsigned long)uVar6);
 _Var3 = fork();
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var3 = waitpid(_Var3,(int *)local_a0,0);
 if ((-1 < _Var3) && ((local_a0[0] & 0x7f) == 0)) {
 uVar6 = 0x2a;
 if ((local_a0[0] & 0xff00) != 0) {
 uVar6 = 0xffffffff;
 }
 uVar4 = (unsigned long)uVar6;
 goto LAB_00102724;
 }
 }
 uVar4 = 0xffffffff;
LAB_00102724:
 iVar2 = printf(&DAT_0010356d,uVar4);
 uVar4 = param_pipe_communication();
 iVar2 = printf(&DAT_00103589,uVar4 & 0xffffffff);
 uVar4 = param_socket_create();
 iVar2 = printf(&DAT_001035a5,uVar4 & 0xffffffff);
 iVar2 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar2 < 1) {
 uVar6 = 0xffffffff;
 }
 iVar2 = printf(&DAT_001035c1,(unsigned long)uVar6);
 uVar4 = param_signal_handling();
 iVar2 = printf(&DAT_001035dd,uVar4 & 0xffffffff);
 return iVar2;
}

// Function: thread_compute @ 0x1027c4
void *thread_compute(void *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x1027f0
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 int iVar2;
 void *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = param_1;
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_8,&local_30);
 uVar1 = *(unsigned int *)local_30;
 free(local_30);
 return uVar1;
}

// Function: call_pthread_create @ 0x102864
unsigned int call_pthread_create(void)
{
 unsigned int uVar1;
 int iVar2;
 void *local_30;
 unsigned int local_24;
 pthread_t local_8;
 local_24 = 7;
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 pthread_join(local_8,&local_30);
 uVar1 = *(unsigned int *)local_30;
 free(local_30);
 return uVar1;
}

// Function: thread_sum @ 0x1028dc
void *thread_sum(void *param_1)
{
 uint uVar1;
 uint uVar2;
 uint *p = (uint *)param_1;
 uVar1 = *p;
 uVar2 = p[1];
 p[2] = 0;
 if ((int)uVar1 <= (int)uVar2) {
 p[2] = uVar2 + (uVar2 - uVar1) * uVar1 +
 (int)((unsigned long)(uVar2 + ~uVar1) * (unsigned long)(uVar2 - uVar1) >> 1);
 }
 return (void *)0;
}

// Function: param_pthread_join @ 0x102910
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned long long local_60;
 void *local_58;
 unsigned int uStack_54;
 unsigned int uStack_50;
 void *local_4c;
 unsigned long long local_48;
 void *local_40;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28;
 local_58 = (void *)0;
 local_4c = (void *)0;
 local_40 = (void *)0;
 local_60 = 0xa00000001;
 uStack_54 = 0xb;
 uStack_50 = 0x14;
 local_48 = 0x1e00000015;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,&local_60);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_54);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_sum,&local_48);
 if (iVar1 != 0) {
 return -1;
 }
 iVar2 = pthread_join(local_38,&local_58);
 iVar1 = 0;
 if (iVar2 != 0) {
  return -2;
 }
 iVar3 = pthread_join(local_30,&local_4c);
 iVar2 = 0;
 if (iVar3 != 0) {
  return -2;
 }
 iVar3 = pthread_join(local_28,&local_40);
 if (iVar3 != 0) {
  return -2;
 }
 return iVar2 + iVar1;
}

// Function: thread_increment @ 0x102a80
void *thread_increment(void *param_1)
{
 int iVar1;
 iVar1 = *(int *)param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0;
}

// Function: param_mutex_lock @ 0x102ae8
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
 __ptr = (pthread_t *)malloc((unsigned long)(-(param_1 >> 0x1f) & 0xfffffff800000000ULL | param_1 << 3));
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 iVar3 = (int)param_1;
 shared_counter = 0;
 if (0 < iVar3) {
 lVar5 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((char *)__ptr + lVar5),(pthread_attr_t *)0x0,
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
 pthread_join(*ppVar4,(void **)0x0);
 iVar3 = iVar3 - 1;
 ppVar4 = ppVar4 + 1;
 } while (iVar3 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != local_34 * param_1) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x102bfc
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x102c08
void *consumer_thread(void *param_1)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return (void *)puVar1;
}

// Function: producer_thread @ 0x102c7c
void *producer_thread(void *param_1)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return (void *)0;
}

// Function: param_condition_variable @ 0x102cd8
unsigned int param_condition_variable(void)
{
 unsigned int uVar1;
 int iVar2;
 unsigned int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 ready = 0;
 data = 0;
 iVar2 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar2 != 0) {
 return 0xffffffff;
 }
 iVar2 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar2 != 0) {
 pthread_cancel(local_28);
 return 0xfffffffe;
 }
 pthread_join(local_28,&local_30);
 pthread_join(local_8,(void **)0x0);
 uVar1 = *local_30;
 free(local_30);
 return uVar1;
}

// Function: thread_atomic_increment @ 0x102da4
void *thread_atomic_increment(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar1;
 piVar1 = (int *)((long)param_1);
 iVar1 = *piVar1;
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

// Function: thread_atomic_load_store @ 0x102e08
void *thread_atomic_load_store(void *param_1)
{
 atomic_counter._0_4_ = atomic_counter._0_4_ + 100;
 return (void *)0;
}

// Function: param_atomic_ops @ 0x102e24
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
 __ptr = (pthread_t *)malloc((unsigned long)(-(param_1 >> 0x1f) & 0xfffffff800000000 | param_1 << 3));
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 atomic_counter.value = 0;
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
 iVar1 = atomic_counter.value;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x102f60
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x102f6c
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 int *piVar_tmp;
 lVar3 = tpidr_el0;
 piVar_tmp = (int *)(lVar3 + 0x10);
 iVar2 = *piVar_tmp;
 iVar1 = iVar2 + 0x32;
 *piVar_tmp = iVar1;
 strncpy((char *)(lVar3 + 0x14),(char *)param_1,0x1f);
 piVar4 = (int *)malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 free(piVar4);
 return (void *)0;
}

// Function: param_thread_local_storage @ 0x102fbc
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
 void *local_58;
 param_1 = param_1 & 0xffffffff;
 uVar5 = (unsigned long)(-(param_1 >> 0x1f) & 0xfffffff800000000ULL | param_1 << 3);
 __ptr = (pthread_t *)malloc(uVar5);
 __ptr_00 = (void **)malloc(uVar5);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void **)0x0) {
 free(__ptr);
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
 iVar1 = pthread_create(ppVar6,(pthread_attr_t *)0x0,(void *(*)(void *))thread_tls_test,__ptr_00[uVar5]);
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
  iVar1 = iVar1 + 100;
  iVar7 = iVar7 + 150;
  free(*ppvVar8);
  iVar3 = iVar3 - 1;
  ppVar6 = ppVar6 + 1;
  ppvVar8 = ppvVar8 + 1;
 } while (iVar3 != 0);
 goto LAB_001030d8;
 }
 }
 }
 iVar1 = 0;
 iVar7 = 0;
LAB_001030d8:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar7 != (int)param_1 * 0x96 || iVar1 != (int)param_1 * 100) {
 uVar2 = 0xfffffffd;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103158
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103160
int test_thread_concurrency(void)
{
 int iVar1;
 unsigned long uVar2;
 uint uVar3;
 void *local_30;
 unsigned int local_24;
 pthread_t local_8;
 puts(&DAT_001036eb);
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 uVar3 = *(unsigned int *)local_30;
 free(local_30);
 }
 else {
 uVar3 = 0xffffffff;
 }
 iVar1 = printf(&DAT_00103603,(unsigned long)uVar3);
 uVar2 = param_pthread_join();
 printf(&DAT_0010361f,uVar2 & 0xffffffff);
 uVar2 = param_mutex_lock(4,1000);
 iVar1 = printf(&DAT_0010363c,uVar2 & 0xffffffff);
 uVar2 = param_condition_variable();
 printf(&DAT_00103658,uVar2 & 0xffffffff);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_00103674,uVar2 & 0xffffffff);
 uVar2 = param_thread_local_storage(4);
 iVar1 = printf(&DAT_00103690,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x103258
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __aarch64_cas4_acq_rel @ 0x103280
int __aarch64_cas4_acq_rel(int param_1,int param_2,int *param_3)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 if (__aarch64_have_lse_atomics != '\0') {
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

// Function: __aarch64_ldadd4_acq_rel @ 0x1032c0
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (__aarch64_have_lse_atomics == '\0') {
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

// Function: _fini @ 0x1032f0
static void _fini(void)
{
 return;
}

