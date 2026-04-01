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
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef long key_t;
typedef unsigned int socklen_t;
typedef int pthread_mutex_t;
typedef int pthread_cond_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef void *(*__start_routine)(void *);
typedef struct _IO_FILE FILE;
typedef int __pid_t;
typedef void (*__sighandler_t)(int);
typedef unsigned int __useconds_t;
typedef unsigned char byte;
typedef unsigned char bool;

// Global variables
int completed_0 = 0;
void *__dso_handle = 0;
unsigned int stack0x00000004;

// Data constants
char DAT_00012850[12] = {0};
char DAT_0001285c[12] = {0};
char DAT_0001287d = 0;
char DAT_00012bb6[] = "Standard Library Tests\n";
char DAT_00012bda[] = "System Call Tests\n";
char DAT_00012bf5[] = "Thread Concurrency Tests\n";
char DAT_000128cb[] = "String length: %u\n";
char DAT_000128e6[] = "strcmp result: %d\n";
char DAT_00012901[] = "memcmp result: %d\n";
char DAT_0001291d[] = "memset sum: %u\n";
char DAT_00012939[] = "call_memcmp: %u\n";
char DAT_00012955[] = "printf return: %d\n";
char DAT_00012971[] = "scanf result: %d\n";
char DAT_0001298e[] = "fopen result: %u\n";
char DAT_000129aa[] = "fread/fwrite result: %u\n";
char DAT_000129c6[] = "malloc/free result: %u\n";
char DAT_000129e2[] = "strchr/strstr result: %u\n";
char DAT_000129fd[] = "call_strchr_strstr: %u\n";
char DAT_00012a3f[] = "Linux syscall: %u\n";
char DAT_00012a5b[] = "stat result: %u\n";
char DAT_00012a77[] = "fork/exec result: %u\n";
char DAT_00012a93[] = "pipe result: %u\n";
char DAT_00012aaf[] = "socket result: %u\n";
char DAT_00012acb[] = "shm result: %u\n";
char DAT_00012ae7[] = "signal result: %u\n";
char DAT_00012b0d[] = "pthread_create: %u\n";
char DAT_00012b29[] = "pthread_join: %u\n";
char DAT_00012b46[] = "mutex_lock: %u\n";
char DAT_00012b62[] = "cond_var: %u\n";
char DAT_00012b7e[] = "atomic_ops: %u\n";
char DAT_00012b9a[] = "thread_local: %u\n";

// Forward declarations
unsigned int main(void);

// Missing type definitions for union member access
typedef union {
    unsigned int value;
    unsigned char bytes[4];
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char _0_1_;
    unsigned char _1_1_;
    unsigned char _2_1_;
    unsigned char _3_1_;
} uint32_union;

typedef union {
    int value;
    unsigned char bytes[4];
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
} int32_union;

// Additional type definitions for system calls
struct shmid_ds {
    int shm_segsz;
    // Add other fields as needed
};

struct stat {
    unsigned long st_size;
    // Add other fields as needed
};

struct sockaddr {
    short sa_family;
    char sa_data[14];
};

// Missing global variable declarations
int signal_received;
int signal_number;
int atomic_counter;
int counter_mutex;
int cond_mutex;
int cond;
char ready;
int data;
int shared_counter;

// Function declarations for weak symbols
void signal_handler(unsigned int param_1);

// SCARRY4 macro for ARM carry flag check in signed arithmetic
#define SCARRY4(x, y) (((((long long)(x) + (long long)(y)) ^ (x) ^ (y)) < 0) ? 1 : 0)

// Decompiled by BinaryAI
// SHA256: 46330487266c230f4f1448185284a053a4c9e9b8f342de5fe77f34ce0ffee1e9



// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x10c5c
int pthread_mutex_unlock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::strstr @ 0x10c68
char * strstr(char *__haystack,char *__needle);

// Function: <EXTERNAL>::raise @ 0x10c74
int raise(int __sig);

// Function: <EXTERNAL>::__libc_start_main @ 0x10c80
int __libc_start_main(void *__main,int *__unused1,void *__stack_end,...);

// Function: <EXTERNAL>::strcmp @ 0x10c8c
int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::__cxa_finalize @ 0x10c98
void __cxa_finalize(void *__ptr);

// Function: <EXTERNAL>::setsockopt @ 0x10ca4
int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen);

// Function: <EXTERNAL>::printf @ 0x10cb0
int printf(char *__format,...);

// Function: <EXTERNAL>::fopen @ 0x10cbc
FILE * fopen(char *__filename,char *__modes);

// Function: <EXTERNAL>::read @ 0x10cc8
ssize_t read(int __fd,void *__buf,size_t __nbytes);

// Function: <EXTERNAL>::free @ 0x10cd4
void free(void *__ptr);

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x10ce0
int pthread_mutex_lock(pthread_mutex_t *__mutex);

// Function: <EXTERNAL>::_exit @ 0x10pec
void _exit(int __status) __attribute__((noreturn));
void _exit(int __status)
{
 register int r0 __asm__("r0") = __status;
 __asm__ __volatile__("mov r7, #1; svc 0" : : "r" (r0) : "r7", "memory");
 while(1) __asm__ __volatile__("" : : : "memory");
}

// Function: <EXTERNAL>::memcpy @ 0x10cf8
void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x10d04
int __atomic_fetch_add_4(void *ptr, int val, int model);

// Function: <EXTERNAL>::shmget @ 0x10d10
int shmget(key_t __key,size_t __size,int __shmflg);

// Function: <EXTERNAL>::signal @ 0x10d1c
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
 __sighandler_t p_Var1;
 p_Var1 = signal(__sig,__handler);
 return p_Var1;
}

// Function: <EXTERNAL>::memcmp @ 0x10d28
int memcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = memcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::sleep @ 0x10d34
uint sleep(uint __seconds)
{
 uint uVar1;
 uVar1 = sleep(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::rewind @ 0x10d40
void rewind(FILE *__stream)
{
 rewind(__stream);
 return;
}

// Function: <EXTERNAL>::alarm @ 0x10d4c
uint alarm(uint __seconds)
{
 uint uVar1;
 uVar1 = alarm(__seconds);
 return uVar1;
}

// Function: <EXTERNAL>::unlink @ 0x10d58
int unlink(char *__name)
{
 int iVar1;
 iVar1 = unlink(__name);
 return iVar1;
}

// Function: <EXTERNAL>::wait @ 0x10d64
__pid_t wait(void *__stat_loc)
{
 __pid_t _Var1;
 _Var1 = wait(__stat_loc);
 return _Var1;
}

// Function: <EXTERNAL>::shmat @ 0x10d70
void * shmat(int __shmid,void *__shmaddr,int __shmflg)
{
 void *pvVar1;
 pvVar1 = shmat(__shmid,__shmaddr,__shmflg);
 return pvVar1;
}

// Function: <EXTERNAL>::fwrite @ 0x10d7c
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)
{
 size_t sVar1;
 sVar1 = fwrite(__ptr,__size,__n,__s);
 return sVar1;
}

// Function: <EXTERNAL>::usleep @ 0x10d88
int usleep(__useconds_t __useconds)
{
 int iVar1;
 iVar1 = usleep(__useconds);
 return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x10d94
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
 __pid_t _Var1;
 _Var1 = waitpid(__pid,__stat_loc,__options);
 return _Var1;
}

// Function: <EXTERNAL>::strcpy @ 0x10da0
char * strcpy(char *__dest,char *__src)
{
 char *pcVar1;
 pcVar1 = strcpy(__dest,__src);
 return pcVar1;
}

// Function: <EXTERNAL>::fread @ 0x10dac
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)
{
 size_t sVar1;
 sVar1 = fread(__ptr,__size,__n,__stream);
 return sVar1;
}

// Function: <EXTERNAL>::shmctl @ 0x10db8
int shmctl(int __shmid,int __cmd,struct shmid_ds *__buf)
{
 int iVar1;
 iVar1 = shmctl(__shmid,__cmd,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10dc4
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10dd0
void * malloc(size_t __size)
{
 void *pvVar1;
 pvVar1 = malloc(__size);
 return pvVar1;
}

// Function: <EXTERNAL>::__atomic_load_4 @ 0x10ddc
int __atomic_load_4(void *__ptr, int model);

// Function: <EXTERNAL>::stat @ 0x10df4
int stat(char *__file,struct stat *__buf)
{
 int iVar1;
 iVar1 = stat(__file,__buf);
 return iVar1;
}

// Function: <EXTERNAL>::open @ 0x10e00
int open(char *__file,int __oflag,...)
{
 int iVar1;
 iVar1 = open(__file,__oflag);
 return iVar1;
}

// Function: <EXTERNAL>::syscall @ 0x10e0c
long syscall(long __sysno,...)
{
 long lVar1;
 lVar1 = syscall(__sysno);
 return lVar1;
}

// Function: <EXTERNAL>::bcmp @ 0x10e18
int bcmp(void *__s1,void *__s2,size_t __n)
{
 int iVar1;
 iVar1 = bcmp(__s1,__s2,__n);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10e24
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::strchr @ 0x10e30
char * strchr(char *__s,int __c)
{
 char *pcVar1;
 pcVar1 = strchr(__s,__c);
 return pcVar1;
}

// Function: <EXTERNAL>::__atomic_compare_exchange_4 @ 0x10e3c
int __atomic_compare_exchange_4(void *__ptr1, void *__ptr2, int val, int model1, int model2);

// Function: <EXTERNAL>::__errno_location @ 0x10e48
int * __errno_location(void)
{
 int *piVar1;
 piVar1 = __errno_location();
 return piVar1;
}

// Function: <EXTERNAL>::snprintf @ 0x10e54
int snprintf(char *__s,size_t __maxlen,char *__format,...)
{
 int iVar1;
 iVar1 = snprintf(__s,__maxlen,__format);
 return iVar1;
}

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x10e60
int __isoc99_sscanf(char *__s,char *__format,...)
{
 int iVar1;
 iVar1 = __isoc99_sscanf(__s,__format);
 return iVar1;
}

// Function: <EXTERNAL>::bind @ 0x10e6c
int bind(int __fd,struct sockaddr *__addr,socklen_t __len)
{
 int iVar1;
 iVar1 = bind(__fd,__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x10e78
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10e84
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::write @ 0x10e90
ssize_t write(int __fd,void *__buf,size_t __n)
{
 ssize_t sVar1;
 sVar1 = write(__fd,__buf,__n);
 return sVar1;
}

// Function: <EXTERNAL>::fileno @ 0x10e9c
int fileno(FILE *__stream)
{
 int iVar1;
 iVar1 = fileno(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::shmdt @ 0x10ea8
int shmdt(void *__shmaddr)
{
 int iVar1;
 iVar1 = shmdt(__shmaddr);
 return iVar1;
}

// Function: <EXTERNAL>::fclose @ 0x10eb4
int fclose(FILE *__stream)
{
 int iVar1;
 iVar1 = fclose(__stream);
 return iVar1;
}

// Function: <EXTERNAL>::pipe @ 0x10ec0
int pipe(int *__pipedes)
{
 int iVar1;
 iVar1 = pipe(__pipedes);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_create @ 0x10ecc
int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,__start_routine *__start_routine,
 void *__arg)
{
 int iVar1;
 iVar1 = pthread_create(__newthread,__attr,__start_routine,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::fork @ 0x10ed8
__pid_t fork(void)
{
 __pid_t _Var1;
 _Var1 = fork();
 return _Var1;
}

// Function: <EXTERNAL>::execl @ 0x10ee4
int execl(char *__path,char *__arg,...)
{
 int iVar1;
 iVar1 = execl(__path,__arg);
 return iVar1;
}

// Function: <EXTERNAL>::listen @ 0x10ef0
int listen(int __fd,int __n)
{
 int iVar1;
 iVar1 = listen(__fd,__n);
 return iVar1;
}

// Function: <EXTERNAL>::ftok @ 0x10efc
key_t ftok(char *__pathname,int __proj_id)
{
 key_t kVar1;
 kVar1 = ftok(__pathname,__proj_id);
 return kVar1;
}

// Function: <EXTERNAL>::__atomic_store_4 @ 0x10f08
void __atomic_store_4(void *__ptr, int val, int model);

// Function: <EXTERNAL>::pthread_cond_wait @ 0x10f14
int pthread_cond_wait(pthread_cond_t *__cond,pthread_mutex_t *__mutex)
{
 int iVar1;
 iVar1 = pthread_cond_wait(__cond,__mutex);
 return iVar1;
}

// Function: <EXTERNAL>::socket @ 0x10f20
int socket(int __domain,int __type,int __protocol)
{
 int iVar1;
 iVar1 = socket(__domain,__type,__protocol);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_join @ 0x10f2c
int pthread_join(pthread_t __th,void **__thread_return)
{
 int iVar1;
 iVar1 = pthread_join(__th,__thread_return);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cancel @ 0x10f38
int pthread_cancel(pthread_t __th)
{
 int iVar1;
 iVar1 = pthread_cancel(__th);
 return iVar1;
}

// Function: <EXTERNAL>::pthread_cond_signal @ 0x10f44
int pthread_cond_signal(pthread_cond_t *__cond)
{
 int iVar1;
 iVar1 = pthread_cond_signal(__cond);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10f50
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::close @ 0x10f5c
int close(int __fd)
{
 int iVar1;
 iVar1 = close(__fd);
 return iVar1;
}

// Function: _start @ 0x10f70
// CRT startup - deleted to resolve linker errors
void _start(unsigned int param_1,unsigned int param_2) __attribute__((weak));

// Function: call_weak_fn @ 0x10fb4
// References __gmon_start__ which is CRT - deleted
int call_weak_fn(void) __attribute__((weak));

// Function: deregister_tm_clones @ 0x10fd8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1101c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1106c
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: param_strcpy @ 0x110d8
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x110e8
void call_strcpy(void)
{
 char local_20[12];
 local_20[0] = 'H';
 local_20[1] = 'e';
 local_20[2] = 'l';
 local_20[3] = 'l';
 local_20[4] = 'o';
 local_20[5] = 'L';
 local_20[6] = 'i';
 local_20[7] = 'b';
 local_20[8] = '\0';
 strlen(local_20);
 return;
}

// Function: param_strcmp @ 0x11124
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x1114c
unsigned int call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x11154
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x11158
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11160
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11178
unsigned int call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x11180
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = iVar1;
 if (iVar1 != 0) {
 iVar2 = -1;
 }
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x111a8
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = memcmp(&DAT_0001285c,&DAT_00012850,0xc);
 iVar3 = iVar1;
 if (iVar1 != 0) {
 iVar3 = -1;
 }
 if (0 < iVar1) {
 iVar3 = 1;
 }
 iVar2 = memcmp(&DAT_0001285c,&DAT_0001285c,0xc);
 iVar1 = iVar2;
 if (iVar2 != 0) {
 iVar1 = -1;
 }
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1 + iVar3;
}

// Function: param_printf @ 0x11218
void param_printf(unsigned int param_1,unsigned int param_2)
{
 printf("Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11230
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
 return;
}

// Function: param_scanf @ 0x11250
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: call_scanf @ 0x11294
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 int local_10;
 int local_c;
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_c,&local_10);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_10 + local_c;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x112e4
int param_fopen_fclose(char *param_1)
{
 FILE *__stream;
 int iVar1;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}

// Function: call_fopen_fclose @ 0x11328
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fopen_fclose("/etc/passwd");
 uVar2 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x11354
unsigned int param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 char auStack_38 [32];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(auStack_38,1,0x12,__s);
 auStack_38[sVar1] = 0;
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 0x12) {
 iVar3 = bcmp(auStack_38,"BinBench Test Data",0x13);
 uVar2 = 0xfffffffd;
 if (iVar3 == 0) {
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

// Function: call_fread_fwrite @ 0x11434
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x11444
int param_malloc_free(int param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 int iVar3;
 int unaff_r5;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 iVar3 = param_1;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 iVar3 = iVar3 + -1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0);
 unaff_r5 = *__ptr;
 }
 iVar3 = __ptr[param_1 + -1];
 free(__ptr);
 iVar3 = iVar3 + unaff_r5;
 }
 return iVar3;
}

// Function: call_malloc_free @ 0x114a8
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x114b0
int param_memset(byte *param_1,size_t param_2)
{
 int iVar1;
 iVar1 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 iVar1 = 0;
 do {
 param_2 = param_2 - 1;
 iVar1 = iVar1 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 }
 return iVar1;
}

// Function: call_memset @ 0x114f4
unsigned int call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x114fc
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 int iVar2;
 int iVar3;
 pcVar1 = strchr(param_1,param_2);
 iVar3 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar3;
}

// Function: call_strchr_strstr @ 0x1153c
unsigned int call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x11544
void test_standard_library_functions(void)
{
 size_t sVar1;
 unsigned int uVar2;
 int iVar3;
 int iVar4;
 uint32_union local_2c;
 uint32_union uStack_28;
 int32_union local_24;
 int local_c;
 puts(&DAT_00012bb6);
 local_2c._0_1_ = 'H';
 local_2c._1_1_ = 'e';
 local_2c._2_1_ = 'l';
 local_2c._3_1_ = 'l';
 uStack_28._0_1_ = 'o';
 uStack_28._1_1_ = 'L';
 uStack_28._2_1_ = 'i';
 uStack_28._3_1_ = 'b';
 local_24.value = 0;
 sVar1 = strlen((char *)&local_2c);
 printf(&DAT_000128cb,sVar1);
 printf(&DAT_000128e6,0);
 printf(&DAT_00012901,0xc);
 printf(&DAT_0001291d,0x5a);
 uVar2 = call_memcmp();
 printf(&DAT_00012939,uVar2);
 iVar3 = printf("Value: %d, Name: %s\n",0x2a,&DAT_0001287d);
 printf(&DAT_00012955,iVar3);
 iVar3 = __isoc99_sscanf("123,456","%d,%d",&local_2c,&local_c);
 iVar4 = -1;
 uVar2 = 0xffffffff;
 if (iVar3 == 2) {
 iVar4 = local_c + local_2c.value;
 }
 printf(&DAT_00012971,iVar4);
 iVar3 = param_fopen_fclose("/etc/passwd");
 if (iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1)) {
 uVar2 = 0x2a;
 }
 printf(&DAT_0001298e,uVar2);
 uVar2 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_000129aa,uVar2);
 uVar2 = param_malloc_free(10);
 printf(&DAT_000129c6,uVar2);
 printf(&DAT_000129e2,0);
 printf(&DAT_000129fd,0xf);
 return;
}

// Function: param_linux_syscall @ 0x1170c
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = syscall(5,param_1,0);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 piVar2 = __errno_location();
 iVar1 = -*piVar2;
 }
 else {
 syscall(6,iVar1);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x11754
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x11780
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat(param_1,&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x117b8
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 struct stat sStack_60;
 iVar1 = stat("/etc/passwd",&sStack_60);
 uVar2 = 0xfffffffe;
 if (0 < sStack_60.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x117fc
uint param_fork_exec(char *param_1,unsigned int param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_14;
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

// Function: call_fork_exec @ 0x1187c
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x118ac
unsigned int param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned int uVar4;
 char auStack_38 [32];
 int local_18;
 int local_14;
 iVar1 = pipe(&local_18);
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
 close(local_18);
 write(local_14,"HelloPipe",9);
 close(local_14);
 _exit(0);
 }
 close(local_14);
 sVar3 = read(local_18,auStack_38,0x1f);
 auStack_38[sVar3] = 0;
 close(local_18);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x11968
 unsigned int param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned int uVar2;
 struct sockaddr local_24;
 unsigned int local_14;
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_14 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_14,4);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_24.sa_family = 2;
 local_24.sa_data[0] = '\0';
 local_24.sa_data[1] = '\0';
 local_24.sa_data[10] = '\0';
 local_24.sa_data[11] = '\0';
 local_24.sa_data[12] = '\0';
 local_24.sa_data[13] = '\0';
 local_24.sa_data[6] = '\0';
 local_24.sa_data[7] = '\0';
 local_24.sa_data[8] = '\0';
 local_24.sa_data[9] = '\0';
 local_24.sa_data[2] = '\0';
 local_24.sa_data[3] = '\0';
 local_24.sa_data[4] = '\0';
 local_24.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_24,0x10);
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
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

// Function: param_shmget_shmat @ 0x11a44
size_t param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__s;
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
 __s = (char *)shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 memcpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2;
}

// Function: call_shmget_shmat @ 0x11b1c
unsigned int call_shmget_shmat(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x11b3c
unsigned int param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned int uVar2;
 int iVar3;
 bool bVar4;
 p_Var1 = signal(10,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler);
 if (p_Var1 == (__sighandler_t)0xffffffff) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar3 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar4 = iVar3 != 0;
 iVar3 = iVar3 + -1;
 } while (bVar4 && iVar3 != 0);
 }
 uVar2 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 }
 }
 }
 }
 return uVar2;
}

// Function: signal_handler @ 0x11cb0
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: test_system_calls @ 0x11cdc
void test_system_calls(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat sStack_68;
 puts(&DAT_00012bda);
 iVar1 = param_linux_syscall("/etc/passwd");
 uVar2 = 0xffffffff;
 uVar3 = 0xffffffff;
 if (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1)) {
 uVar2 = 0x2a;
 }
 printf(&DAT_00012a3f,uVar2);
 iVar1 = stat("/etc/passwd",&sStack_68);
 uVar2 = 0xfffffffe;
 if (0 < sStack_68.st_size) {
 uVar2 = 0x2a;
 }
 if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
 uVar2 = 0xffffffff;
 }
 printf(&DAT_00012a5b,uVar2);
 iVar1 = param_fork_exec("/bin/true",0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 printf(&DAT_00012a77,uVar2);
 uVar2 = param_pipe_communication();
 printf(&DAT_00012a93,uVar2);
 uVar2 = param_socket_create();
 printf(&DAT_00012aaf,uVar2);
 iVar1 = param_shmget_shmat();
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00012acb,uVar3);
 uVar2 = param_signal_handling();
 printf(&DAT_00012ae7,uVar2);
 return;
}

// Function: thread_compute @ 0x11dfc
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: param_pthread_create @ 0x11e1c
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 unsigned int local_10;
 pthread_t local_c;
 local_10 = param_1;
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,thread_compute,&local_10);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_c,&local_14);
 uVar2 = *local_14;
 free(local_14);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x11e78
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: thread_sum @ 0x11e80
unsigned int thread_sum(uint *param_1)
{
 longlong lVar1;
 uint uVar2;
 uint uVar3;
 param_1[2] = 0;
 uVar2 = *param_1;
 uVar3 = param_1[1];
 if ((int)uVar2 <= (int)uVar3) {
 lVar1 = (ulonglong)(uVar3 - uVar2) * (ulonglong)(uVar3 + ~uVar2);
 param_1[2] = (uVar3 - uVar2) * (uVar2 + 1) + uVar2 +
 ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x11ed0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned int *__arg;
 int iVar3;
 unsigned int local_48;
 unsigned int local_44;
 int local_40 [4];
 unsigned int local_30;
 unsigned int local_2c;
 pthread_t local_24 [3];
 __arg = &local_48;
 iVar3 = 0;
 memset(local_40,0,0x1c);
 local_2c = 0x1e;
 local_30 = 0x15;
 local_40[2] = 0x14;
 local_40[1] = 0xb;
 local_44 = 10;
 local_48 = 1;
 do {
 iVar1 = pthread_create((pthread_t *)((int)local_24 + iVar3),(pthread_attr_t *)0x0,thread_sum,
 __arg);
 if (iVar1 != 0) {
 return -1;
 }
 iVar3 = iVar3 + 4;
 __arg = (unsigned int *)((int)__arg + 0xc);
 } while (iVar3 != 0xc);
 iVar1 = 0;
 iVar3 = 0;
 do {
 iVar2 = pthread_join(*(pthread_t *)((int)local_24 - iVar1),(void **)0x0);
 if (iVar2 != 0) {
 return -2;
 }
 iVar2 = iVar1 * -3;
 iVar1 = iVar1 + -4;
 iVar3 = *(int *)((int)local_40 + iVar2) + iVar3;
 } while (iVar1 != -0xc);
 return iVar3;
}

// Function: thread_increment @ 0x11fbc
unsigned int thread_increment(int *param_1)
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

// Function: param_mutex_lock @ 0x12024
unsigned int param_mutex_lock(int param_1,int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar3 = param_1;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar4 = ppVar4 + 1;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 ppVar4 = __ptr;
 iVar3 = param_1;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar4,(void **)0x0);
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 } while (iVar3 != 0);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == local_24 * param_1) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x12114
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x12120
void consumer_thread(void)
{
 uint *puVar1;
 uint uVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 if (ready == '\0') {
 do {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 } while (ready != '\x01');
 }
 uVar2 = (uint)data;
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 if (uVar2 != 0) {
 uVar2 = 0x2a;
 }
 puVar1 = (uint *)malloc(4);
 *puVar1 = uVar2;
 return;
}

// Function: producer_thread @ 0x121b8
unsigned int producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x12220
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int *local_14;
 pthread_t local_10;
 pthread_t local_c;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_c,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_10,&local_14);
 pthread_join(local_c,(void **)0x0);
 uVar2 = *local_14;
 free(local_14);
 }
 else {
 pthread_cancel(local_10);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: thread_atomic_increment @ 0x122e0
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 int local_1c;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 __atomic_fetch_add_4(&atomic_counter,1,5);
 local_1c = iVar2;
 __atomic_compare_exchange_4(&atomic_counter,&local_1c,iVar2 + 1000,5,5);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x12354
unsigned int thread_atomic_load_store(void)
{
 int iVar1;
 iVar1 = __atomic_load_4(&atomic_counter,5);
 __atomic_store_4(&atomic_counter,iVar1 + 100,5);
 return 0;
}

// Function: param_atomic_ops @ 0x1238c
unsigned int param_atomic_ops(int param_1,unsigned int param_2)
{
 pthread_t *__ptr;
 int iVar1;
 unsigned int uVar2;
 pthread_t *ppVar3;
 int iVar4;
 pthread_t local_28;
 unsigned int local_24;
 local_24 = param_2;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 __atomic_store_4(&atomic_counter,0,5);
 if (0 < param_1) {
 ppVar3 = __ptr;
 iVar4 = param_1;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_24);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 ppVar3 = ppVar3 + 1;
 iVar4 = iVar4 + -1;
 } while (iVar4 != 0);
 }
 iVar4 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar4 == 0) {
 pthread_join(local_28,(void **)0x0);
 }
 ppVar3 = __ptr;
 if (0 < param_1) {
 do {
 pthread_join(*ppVar3,(void **)0x0);
 param_1 = param_1 + -1;
 ppVar3 = ppVar3 + 1;
 } while (param_1 != 0);
 }
 iVar4 = __atomic_load_4(&atomic_counter,5);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar4) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x124b0
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: thread_tls_test @ 0x124bc
void thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 unsigned long long uVar6;
 iVar3 = 8;
 uVar6 = __aeabi_read_tp(param_1,param_1);
 iVar1 = (int)uVar6;
 iVar4 = *(int *)(iVar1 + iVar3);
 iVar5 = iVar4 + 0x32;
 *(int *)(iVar1 + iVar3) = iVar5;
 strncpy((char *)(iVar1 + 0xc),(char *)((ulonglong)uVar6 >> 0x20),0x1f);
 piVar2 = (int *)malloc(8);
 *piVar2 = iVar4;
 piVar2[1] = iVar5;
 return;
}

// Function: param_thread_local_storage @ 0x12504
unsigned int param_thread_local_storage(int param_1)
{
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 pthread_t *ppVar4;
 uint uVar5;
 void **ppvVar6;
 int iVar7;
 uint uVar8;
 int *local_28;
 __ptr = (pthread_t *)malloc(param_1 << 2);
 __ptr_00 = (void **)malloc(param_1 << 2);
 if (__ptr == (pthread_t *)0x0 || __ptr_00 == (void **)0x0) {
 return 0xffffffff;
 }
 if (0 < param_1) {
 iVar3 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[iVar3] = __s;
 snprintf(__s,0x10,"Thread-%d",iVar3);
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 if (0 < param_1) {
 iVar3 = 0;
 ppVar4 = __ptr;
 do {
 iVar1 = pthread_create(ppVar4,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[iVar3]);
 if (iVar1 != 0) {
 iVar1 = 0;
 do {
 free(__ptr_00[iVar1]);
 iVar1 = iVar1 + 1;
 } while (iVar3 + 1 != iVar1);
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 iVar3 = iVar3 + 1;
 ppVar4 = ppVar4 + 1;
 } while (param_1 != iVar3);
 if (0 < param_1) {
 uVar8 = 0;
 uVar5 = 0;
 ppVar4 = __ptr;
 ppvVar6 = __ptr_00;
 iVar3 = param_1;
 do {
 pthread_join(*ppVar4,&local_28);
 iVar1 = *local_28;
 iVar7 = local_28[1];
 free(local_28);
 free(*ppvVar6);
 uVar8 = iVar7 + uVar8;
 uVar5 = iVar1 + uVar5;
 iVar3 = iVar3 + -1;
 ppVar4 = ppVar4 + 1;
 ppvVar6 = ppvVar6 + 1;
 } while (iVar3 != 0);
 goto LAB_00012620;
 }
 }
 }
 uVar5 = 0;
 uVar8 = 0;
LAB_00012620:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((uVar5 ^ param_1 * 100 | uVar8 ^ param_1 * 0x96) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x126a0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x126a8
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 puts(&DAT_00012bf5);
 uVar1 = param_pthread_create(7);
 printf(&DAT_00012b0d,uVar1);
 uVar1 = param_pthread_join();
 printf(&DAT_00012b29,uVar1);
 uVar1 = param_mutex_lock(4,1000);
 printf(&DAT_00012b46,uVar1);
 uVar1 = param_condition_variable();
 printf(&DAT_00012b62,uVar1);
 uVar1 = param_atomic_ops(4,500);
 printf(&DAT_00012b7e,uVar1);
 uVar1 = param_thread_local_storage(4);
 printf(&DAT_00012b9a,uVar1);
 return;
}

// Function: main @ 0x12768
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: _fini @ 0x12798
static void _fini(void)
{
 return;
}

