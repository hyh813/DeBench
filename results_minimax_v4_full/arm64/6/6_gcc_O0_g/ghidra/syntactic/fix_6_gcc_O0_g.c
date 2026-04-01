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
typedef int pid_t;
typedef int __pid_t;
typedef int key_t;
typedef long time_t;

/* Additional types needed for the code */
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned char undefined;
typedef uint8_t byte;
typedef uint8_t uchar;
typedef unsigned long ulong;

/* stat structure definition */
struct stat_struct {
    unsigned long st_dev;
    unsigned long st_ino;
    unsigned int st_nlink;
    unsigned short st_mode;
    short st_uid;
    short st_gid;
    int __pad0;
    unsigned long st_rdev;
    long st_size;
    long st_blksize;
    long st_blocks;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
    unsigned long __unused[3];
};

typedef struct stat_struct stat;

/* Pthread types */
typedef unsigned long pthread_t;
typedef struct pthread_attr_t pthread_attr_t;
typedef struct pthread_mutex_t pthread_mutex_t;
typedef struct pthread_cond_t pthread_cond_t;

/* Function pointer type */
typedef void (*code)(void);

/* getauxval declaration */
unsigned long __getauxval(unsigned long type);

/* FILE structure types - needed for FILE definition */
typedef long __off_t;
typedef long __off64_t;
typedef unsigned long _IO_lock_t;

/* Signal handler type - needed for signal function declaration */
typedef void (*__sighandler_t)(int);

/* Socket length type - needed for socket functions */
typedef unsigned int socklen_t;

/* Stack protector guard - typically provided by CRT */
extern unsigned long __stack_chk_guard;

/* Stack protector fail function */
void __stack_chk_fail(void);
void __stack_chk_fail_local(void);

/* CRT functions */
void __cxa_finalize(void *dso);
void deregister_tm_clones(void);

/* Standard string functions */
char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);
char *strncpy(char *dest, const char *src, size_t n);

/* Memory allocation functions */
void *malloc(size_t size);
void free(void *ptr);
void *memset(void *s, int c, size_t n);

/* Atomic operation intrinsics and functions */
int __aarch64_ldadd4_acq_rel(int value, int *ptr);
int __aarch64_cas4_acq_rel(int expected, int desired, int *ptr);
int ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void __sync_synchronize(void);
void _sync_synchronize(void);

/* Standard I/O and system functions */
int puts(const char *s);
int unlink(const char *path);

/* System call functions */
long syscall(long number, ...);
int *__errno_location(void);

/* Process management functions */
pid_t fork(void);
int execl(const char *path, const char *arg, ...);
void _exit(int status);
int waitpid(pid_t pid, int *status, int options);
int wait(void *status);

/* File operations */
int pipe(int pipefd[2]);
int close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, const void *buf, size_t count);
int open(const char *pathname, int flags, ...);
int stat_syscall(const char *pathname, struct stat_struct *statbuf);
int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
int listen(int sockfd, int backlog);
int socket(int domain, int type, int protocol);
int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
unsigned short htons(unsigned short hostshort);

/* Additional system functions */
int alarm(unsigned int seconds);
int raise(int sig);
__sighandler_t signal(int signum, __sighandler_t handler);
unsigned int sleep(unsigned int seconds);
int usleep(unsigned int useconds);
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
int pthread_join(pthread_t thread, void **retval);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
int pthread_cond_signal(pthread_cond_t *cond);
int pthread_cancel(pthread_t thread);

/* Builtin functions */
char *builtin_strncpy(char *dest, const char *src, size_t n);

/* Atomic acquire/release for ARM64 */
void LOAcquire(void);
void LORelease(void);

/* Shared memory functions */
int shmget(key_t key, size_t size, int shmflg);
void *shmat(int shmid, const void *shmaddr, int shmflg);
int shmdt(const void *shmaddr);

/* Shared memory control structure */
typedef struct shmid_ds {
    unsigned long shm_segsz;
    time_t shm_atime;
    time_t shm_dtime;
    time_t shm_ctime;
    unsigned short shm_cpid;
    unsigned short shm_lpid;
    short shm_nattch;
    unsigned short shm_npages;
    unsigned long *shm_pages;
    struct vm_area_struct *attaches;
} shmid_ds;

int shmctl(int shmid, int cmd, void *addr);
key_t ftok(const char *pathname, int proj);

/* Thread ID access (ARM64 specific) */
unsigned long tpidr_el0;

/* Standard input/output functions */
int printf(const char *format, ...);
int sprintf(char *str, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);
int scanf(const char *format, ...);
int __isoc99_sscanf(const char *str, const char *format, ...);
int sscanf(const char *str, const char *format, ...);

/* FILE forward declaration */
typedef struct _IO_FILE FILE;

/* FILE I/O functions */
int fscanf(FILE *stream, const char *format, ...);
int fprintf(FILE *stream, const char *format, ...);

/* FILE type definition */
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
    struct _IO_FILE *_chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    unsigned short _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t *_lock;
    __off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef struct _IO_FILE FILE;

/* Additional stdio functions */
FILE *fopen(const char *filename, const char *mode);
int fclose(FILE *stream);
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int fseek(FILE *stream, long offset, int whence);
long ftell(FILE *stream);
void rewind(FILE *stream);
int fileno(FILE *stream);
int fflush(FILE *stream);
int remove(const char *path);
int rename(const char *old, const char *new);

/* Global variables for atomic operations and threading */
int __aarch64_have_lse_atomics;
int shared_counter;
int atomic_counter;
int counter_mutex;
int data;
int ready;
int signal_received;
int signal_number;
int cond_mutex;
int cond;
int completed_0;
void *__dso_handle;
#define ___stack_chk_guard __stack_chk_guard

/* String constants from binary */
const char DAT_00103b80[] = "Testing standard library functions\n";
const char DAT_00103ba8[] = "strcpy: %u\n";
const char DAT_00103bc8[] = "strcmp: %u\n";
const char DAT_00103be8[] = "strlen: %u\n";
const char DAT_00103c08[] = "memcpy: %u\n";
const char DAT_00103c28[] = "memcmp: %u\n";
const char DAT_00103c48[] = "printf: %u\n";
const char DAT_00103c68[] = "scanf: %u\n";
const char DAT_00103c88[] = "fopen: %u\n";
const char DAT_00103ca8[] = "fread: %u\n";
const char DAT_00103cc8[] = "malloc: %u\n";
const char DAT_00103ce8[] = "memset: %u\n";
const char DAT_00103d08[] = "strchr: %u\n";
const char DAT_00103d70[] = "Testing system calls\n";
const char DAT_00103d90[] = "syscall: %u\n";
const char DAT_00103db0[] = "stat: %u\n";
const char DAT_00103dd0[] = "fork: %u\n";
const char DAT_00103df0[] = "pipe: %u\n";
const char DAT_00103e10[] = "socket: %u\n";
const char DAT_00103e30[] = "shm: %u\n";
const char DAT_00103e50[] = "signal: %u\n";
const char DAT_00103ea8[] = "Testing thread concurrency\n";
const char DAT_00103ec8[] = "pthread_create: %u\n";
const char DAT_00103ee8[] = "pthread_join: %u\n";
const char DAT_00103f08[] = "mutex: %u\n";
const char DAT_00103f28[] = "cond_var: %u\n";
const char DAT_00103f48[] = "atomic: %u\n";
const char DAT_00103f68[] = "tls: %u\n";

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/* Socket address structures */
typedef struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
} sockaddr;

typedef struct sockaddr_in {
    unsigned short sin_family;
    unsigned short sin_port;
    struct {
        unsigned int s_addr;
    } sin_addr;
    char sin_zero[8];
} sockaddr_in;

/* Socket length type */
typedef unsigned int socklen_t;

/* ThreadData structure for pthread join test */
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

/* Forward declarations for standard library types */
typedef struct _IO_FILE FILE;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_gcc_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001013d0 @ 001013d0 */

void FUN_001013d0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00101800 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001018fc @ 001018fc */

void FUN_001018fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 00101954 */

int param_strcpy(char *dst,char *src)

{
 size_t sVar1;
 char *src_local;
 char *dst_local;
 
 strcpy(dst,src);
 sVar1 = strlen(dst);
 return (int)sVar1;
}



/* Function: call_strcpy @ 00101980 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 long lVar1;
 int iVar2;
 int len;
 char buffer [32];
 
 lVar1 = ___stack_chk_guard;
 iVar2 = param_strcpy(buffer,"HelloLib");
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_strcmp @ 001019e8 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 char *s2_local;
 char *s1_local;
 int ret;
 
 iVar1 = strcmp(s1,s2);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 }
 }
 else {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 00101a3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int r1;
 int r2;
 int r3;
 
 iVar1 = param_strcmp("abc","def");
 iVar2 = param_strcmp("xyz","xyz");
 iVar3 = param_strcmp("bbb","aaa");
 return iVar1 + iVar2 + iVar3;
}



/* Function: param_strlen @ 00101aa8 */

int param_strlen(char *str)

{
 size_t sVar1;
 char *str_local;
 size_t len;
 
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 00101acc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 int iVar1;
 char *test;
 
 iVar1 = param_strlen("BinBench2025");
 return iVar1;
}



/* Function: param_memcpy @ 00101af0 */

int param_memcpy(void *dst,void *src,size_t n)

{
 size_t n_local;
 void *src_local;
 void *dst_local;
 
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 00101b20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 int iVar1;
 long lVar2;
 int src [5];
 int dst [5];
 
 lVar2 = ___stack_chk_guard;
 src[0] = 10;
 src[1] = 0x14;
 src[2] = 0x1e;
 src[3] = 0x28;
 src[4] = 0x32;
 dst[0] = 0;
 dst[1] = 0;
 dst[2] = 0;
 dst[3] = 0;
 dst[4] = 0;
 param_memcpy(dst,src,0x14);
 iVar1 = dst[0] + dst[2] + dst[4];
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_memcmp @ 00101bb8 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 size_t n_local;
 void *p2_local;
 void *p1_local;
 int ret;
 
 iVar1 = memcmp(p1,p2,n);
 if (iVar1 < 1) {
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0;
 }
 }
 else {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00101c14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 int r1;
 int r2;
 int arr1 [3];
 int arr2 [3];
 int arr3 [3];
 
 lVar1 = ___stack_chk_guard;
 arr1[0] = 1;
 arr1[1] = 2;
 arr1[2] = 3;
 arr2[0] = 1;
 arr2[1] = 2;
 arr2[2] = 4;
 arr3[0] = 1;
 arr3[1] = 2;
 arr3[2] = 3;
 iVar2 = param_memcmp(arr1,arr2,0xc);
 iVar3 = param_memcmp(arr1,arr3,0xc);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2 + iVar3;
}



/* Function: param_printf @ 00101ce8 */

int param_printf(int x,char *name)

{
 int iVar1;
 char *name_local;
 int x_local;
 int ret;
 
 iVar1 = printf("Value: %d, Name: %s\n",(ulong)(uint)x,name);
 return iVar1;
}



/* Function: call_printf @ 00101d1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 int chars;
 
 iVar1 = param_printf(0x2a,"Test");
 return iVar1;
}



/* Function: param_scanf @ 00101d44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_scanf(char *input_str)

{
 int iVar1;
 char *input_str_local;
 int a;
 int b;
 int ret;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ret = __isoc99_sscanf(input_str,"%d,%d",&a,&b);
 if (ret == 2) {
 iVar1 = a + b;
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: call_scanf @ 00101dd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 
 iVar1 = param_scanf("123,456");
 return iVar1;
}



/* Function: param_fopen_fclose @ 00101df4 */

int param_fopen_fclose(char *filename)

{
 int iVar1;
 FILE *__stream;
 char *filename_local;
 int fd;
 FILE *fp;
 
 __stream = fopen(filename,"r");
 if (__stream == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 }
 return iVar1;
}



/* Function: call_fopen_fclose @ 00101e48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 int fd;
 
 iVar1 = param_fopen_fclose("/etc/passwd");
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0x2a;
 }
 return iVar1;
}



/* Function: param_fread_fwrite @ 00101e80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fread_fwrite(char *tmpfile)

{
 long lVar1;
 int iVar2;
 FILE *__s;
 size_t sVar3;
 size_t sVar4;
 char *tmpfile_local;
 char *write_data;
 FILE *fp;
 size_t written;
 size_t read;
 char read_buffer [32];
 
 lVar1 = ___stack_chk_guard;
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 iVar2 = -1;
 }
 else {
 sVar3 = strlen("BinBench Test Data");
 sVar3 = fwrite("BinBench Test Data",1,sVar3,__s);
 sVar4 = strlen("BinBench Test Data");
 if (sVar3 == sVar4) {
 rewind(__s);
 sVar4 = fread(read_buffer,1,sVar3,__s);
 read_buffer[sVar4] = '\0';
 fclose(__s);
 unlink(tmpfile);
 if ((sVar4 == sVar3) && (iVar2 = strcmp(read_buffer,"BinBench Test Data"), iVar2 == 0)) {
 iVar2 = 0x2a;
 }
 else {
 iVar2 = -3;
 }
 }
 else {
 fclose(__s);
 iVar2 = -2;
 }
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00101fb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00101fd4 */

int param_malloc_free(size_t size)

{
 int iVar1;
 int *__ptr;
 size_t size_local;
 int sum;
 size_t i;
 int *ptr;
 
 __ptr = malloc(size << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (i = 0; i < size; i = i + 1) {
 __ptr[i] = (int)i * 10;
 }
 iVar1 = *__ptr + __ptr[size - 1];
 free(__ptr);
 }
 return iVar1;
}



/* Function: call_malloc_free @ 0010209c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 int iVar1;
 
 iVar1 = param_malloc_free(10);
 return iVar1;
}



/* Function: param_memset @ 001020b4 */

int param_memset(void *buffer,size_t size)

{
 size_t size_local;
 void *buffer_local;
 int sum;
 size_t i;
 uchar *bytes;
 
 memset(buffer,0,size);
 sum = 0;
 for (i = 0; i < size; i = i + 1) {
 sum = sum + (uint)*(byte *)((long)buffer + i);
 }
 return sum;
}



/* Function: call_memset @ 00102130 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 long lVar1;
 int i;
 int buffer [10];
 
 lVar1 = ___stack_chk_guard;
 for (i = 0; i < 10; i = i + 1) {
 buffer[i] = 0xff;
 }
 param_memset(buffer,0x28);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return buffer[0] + buffer[9];
}



/* Function: param_strchr_strstr @ 001021c8 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 char *substr_local;
 char ch_local;
 char *str_local;
 int index1;
 int index2;
 char *pos1;
 char *pos2;
 
 pcVar3 = strchr(str,(uint)(byte)ch);
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = (int)pcVar3 - (int)str;
 }
 pcVar3 = strstr(str,substr);
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 else {
 iVar2 = (int)pcVar3 - (int)str;
 }
 return iVar1 + iVar2;
}



/* Function: call_strchr_strstr @ 0010225c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 int iVar1;
 int result;
 char *text;
 
 iVar1 = param_strchr_strstr("Hello BinBench Test",'B',"Bench");
 return iVar1;
}



/* Function: test_standard_library_functions @ 00102294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 uint uVar1;
 
 puts(DAT_00103b80);
 uVar1 = call_strcpy();
 printf(DAT_00103ba8,(ulong)uVar1);
 uVar1 = call_strcmp();
 printf(DAT_00103bc8,(ulong)uVar1);
 uVar1 = call_strlen();
 printf(DAT_00103be8,(ulong)uVar1);
 uVar1 = call_memcpy();
 printf(DAT_00103c08,(ulong)uVar1);
 uVar1 = call_memcmp();
 printf(DAT_00103c28,(ulong)uVar1);
 uVar1 = call_printf();
 printf(DAT_00103c48,(ulong)uVar1);
 uVar1 = call_scanf();
 printf(DAT_00103c68,(ulong)uVar1);
 uVar1 = call_fopen_fclose();
 printf(DAT_00103c88,(ulong)uVar1);
 uVar1 = call_fread_fwrite();
 printf(DAT_00103ca8,(ulong)uVar1);
 uVar1 = call_malloc_free();
 printf(DAT_00103cc8,(ulong)uVar1);
 uVar1 = call_memset();
 printf(DAT_00103ce8,(ulong)uVar1);
 uVar1 = call_strchr_strstr();
 printf(DAT_00103d08,(ulong)uVar1);
 return;
}



/* Function: param_linux_syscall @ 001023a4 */

int param_linux_syscall(char *pathname)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 char *pathname_local;
 int fd;
 
 uVar2 = syscall(0x38,0xffffff9c,pathname,0);
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



/* Function: call_linux_syscall @ 001023fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 int iVar1;
 int result;
 
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0x2a;
 }
 return iVar1;
}



/* Function: param_win32_api @ 00102434 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_win32_api(char *filename)

{
 long lVar1;
 int iVar2;
 char *filename_local;
 struct stat_struct st;
 
 lVar1 = ___stack_chk_guard;
 iVar2 = stat_syscall(filename, &st);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else if (st.st_size < 1) {
 iVar2 = -2;
 }
 else {
 iVar2 = 0x2a;
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_win32_api @ 001024bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 
 iVar1 = param_win32_api("/etc/passwd");
 return iVar1;
}



/* Function: param_fork_exec @ 001024d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_fork_exec(char *prog,char *arg)

{
 uint uVar1;
 char *arg_local;
 char *prog_local;
 int status;
 pid_t pid;
 pid_t wpid;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 pid = fork();
 if (pid < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (pid == 0) {
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 wpid = waitpid(pid,&status,0);
 if (wpid < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((status & 0x7fU) == 0) {
 uVar1 = status >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: call_fork_exec @ 001025c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 int iVar1;
 int ret;
 
 iVar1 = param_fork_exec("/bin/true",(char *)0x0);
 if (iVar1 == 0) {
 iVar1 = 0x2a;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: param_pipe_communication @ 001025fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 long lVar1;
 int iVar2;
 __pid_t _Var3;
 size_t __n;
 ssize_t sVar4;
 pid_t pid;
 ssize_t bytes;
 char *msg;
 int pipefd [2];
 char buffer [32];
 
 lVar1 = ___stack_chk_guard;
 iVar2 = pipe(pipefd);
 if (iVar2 < 0) {
 iVar2 = -1;
 }
 else {
 _Var3 = fork();
 if (_Var3 < 0) {
 iVar2 = -2;
 }
 else {
 if (_Var3 == 0) {
 close(pipefd[0]);
 iVar2 = pipefd[1];
 __n = strlen("HelloPipe");
 write(iVar2,"HelloPipe",__n);
 close(pipefd[1]);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 close(pipefd[1]);
 sVar4 = read(pipefd[0],buffer,0x1f);
 buffer[sVar4] = '\0';
 close(pipefd[0]);
 wait((void *)0x0);
 if (sVar4 < 1) {
 iVar2 = -3;
 }
 else {
 iVar2 = 0x2a;
 }
 }
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_pipe_communication @ 00102720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 
 iVar1 = param_pipe_communication();
 return iVar1;
}



/* Function: param_socket_create @ 00102734 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 long lVar1;
 int iVar2;
 int opt;
 int sock;
 sockaddr_in addr;
 
 lVar1 = ___stack_chk_guard;
 sock = socket(2,1,0);
 if (sock < 0) {
 iVar2 = -1;
 }
 else {
 opt = 1;
 iVar2 = setsockopt(sock,1,2,&opt,4);
 if (iVar2 < 0) {
 close(sock);
 iVar2 = -2;
 }
 else {
 memset(&addr,0,0x10);
 addr.sin_family = 2;
 addr.sin_port = htons(0);
 addr.sin_addr.s_addr = 0;
  iVar2 = bind(sock, (struct sockaddr *)&addr, (socklen_t)sizeof(addr));
 if (iVar2 < 0) {
 close(sock);
 iVar2 = -3;
 }
 else {
 iVar2 = listen(sock,5);
 if (iVar2 < 0) {
 close(sock);
 iVar2 = -4;
 }
 else {
 close(sock);
 iVar2 = 0x2a;
 }
 }
 }
 }
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_socket_create @ 0010286c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 
 iVar1 = param_socket_create();
 return iVar1;
}



/* Function: param_shmget_shmat @ 00102880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 int iVar2;
 char *__s;
 size_t sVar3;
 int fd;
 key_t key;
 int shmid;
 int len;
 char *ftok_path;
 char *shm;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 iVar2 = -1;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 iVar2 = -2;
 }
 else {
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s == (char *)0xffffffffffffffff) {
 iVar2 = -3;
 }
 else {
 builtin_strncpy(__s,"SharedMemory",0xd);
 sVar3 = strlen(__s);
 iVar2 = (int)sVar3;
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return iVar2;
}



/* Function: call_shmget_shmat @ 0010298c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int ret;
 
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 iVar1 = -1;
 }
 else {
 iVar1 = 0x2a;
 }
 return iVar1;
}



/* Function: signal_handler @ 001029bc */

void signal_handler(int sig)

{
 int sig_local;
 
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: param_signal_handling @ 001029f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 int iVar1;
 __sighandler_t p_Var2;
 int attempts;
 
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 iVar1 = -1;
 }
 else {
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 iVar1 = -2;
 }
 else {
 signal_received = 0;
 raise(10);
 attempts = 1000;
 while ((signal_received == 0 && (0 < attempts))) {
 usleep(1000);
 attempts = attempts + -1;
 }
 if (signal_received == 0) {
 iVar1 = -3;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 attempts = 2000;
 while ((signal_received == 0 && (0 < attempts))) {
 usleep(1000);
 attempts = attempts + -1;
 }
 if ((signal_received == 0) || (signal_number != 0xe)) {
 iVar1 = -5;
 }
 else {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 iVar1 = 0x2a;
 }
 }
 else {
 iVar1 = -4;
 }
 }
 }
 return iVar1;
}



/* Function: call_signal_handling @ 00102b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 int iVar1;
 
 iVar1 = param_signal_handling();
 return iVar1;
}



/* Function: test_system_calls @ 00102b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 
 puts(DAT_00103d70);
 uVar1 = call_linux_syscall();
 printf(DAT_00103d90,(ulong)uVar1);
 uVar1 = call_win32_api();
 printf(DAT_00103db0,(ulong)uVar1);
 uVar1 = call_fork_exec();
 printf(DAT_00103dd0,(ulong)uVar1);
 uVar1 = call_pipe_communication();
 printf(DAT_00103df0,(ulong)uVar1);
 uVar1 = call_socket_create();
 printf(DAT_00103e10,(ulong)uVar1);
 uVar1 = call_shmget_shmat();
 printf(DAT_00103e30,(ulong)uVar1);
 uVar1 = call_signal_handling();
 printf(DAT_00103e50,(ulong)uVar1);
 return;
}



/* Function: thread_compute @ 00102c24 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 void *arg_local;
 int value;
 int result;
 int *input;
 int *ret;
 
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 00102c74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_pthread_create(int x)

{
 int iVar1;
 int x_local;
 int input;
 int ret;
 int result;
 pthread_t tid;
 void *thread_ret;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 input = x;
 ret = pthread_create(&tid,(pthread_attr_t *)0x0,thread_compute,&input);
 if (ret == 0) {
 pthread_join(tid,&thread_ret);
 result = *(int *)thread_ret;
 free(thread_ret);
 iVar1 = result;
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: call_pthread_create @ 00102d28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 
 iVar1 = param_pthread_create(7);
 return iVar1;
}



/* Function: thread_sum @ 00102d40 */

void * thread_sum(void *arg)

{
 void *arg_local;
 int i;
 ThreadData *data;
 
 *(undefined4 *)((long)arg + 8) = 0;
 for (i = *(int *)arg; i <= *(int *)((long)arg + 4); i = i + 1) {
 *(int *)((long)arg + 8) = *(int *)((long)arg + 8) + i;
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00102dac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 long lVar1;
 int iVar2;
 int i;
 int total;
 int i_1;
 pthread_t tids [3];
 ThreadData data [3];
 
 lVar1 = ___stack_chk_guard;
 data[0].result = 0;
 data[1].start = 0xb;
 data[0].start = 1;
 data[0].end = 10;
 data[2].start = 0x15;
 data[2].end = 0x1e;
 data[1].end = 0x14;
 data[1].result = 0;
 data[2].result = 0;
 for (i = 0; i < 3; i = i + 1) {
 iVar2 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_sum,data + i);
 if (iVar2 != 0) {
 total = -1;
 goto LAB_00102ed0;
 }
 }
 total = 0;
 i_1 = 0;
 do {
 if (2 < i_1) {
LAB_00102ed0:
 if (lVar1 - ___stack_chk_guard == 0) {
 return total;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 iVar2 = pthread_join(tids[i_1],(void **)0x0);
 if (iVar2 != 0) {
 total = -2;
 goto LAB_00102ed0;
 }
 total = total + data[i_1].result;
 i_1 = i_1 + 1;
 } while( true );
}



/* Function: call_pthread_join @ 00102f00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 
 iVar1 = param_pthread_join();
 return iVar1;
}



/* Function: thread_increment @ 00102f14 */

void * thread_increment(void *arg)

{
 int iVar1;
 void *arg_local;
 int i;
 int iterations;
 
 iVar1 = *(int *)arg;
 for (i = 0; i < iVar1; i = i + 1) {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 }
 return (void *)0x0;
}



/* Function: param_mutex_lock @ 00102f98 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 int iterations_per_thread_local;
 int thread_count_local;
 int i;
 int i_1;
 int expected;
 pthread_t *tids;
 
 iterations_per_thread_local = iterations_per_thread;
 thread_count_local = thread_count;
 tids = malloc((long)thread_count << 3);
 if (tids == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 shared_counter = 0;
 for (i = 0; i < thread_count_local; i = i + 1) {
 iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_increment,
 &iterations_per_thread_local);
 if (iVar1 != 0) {
 free(tids);
 return -2;
 }
 }
 for (i_1 = 0; i_1 < thread_count_local; i_1 = i_1 + 1) {
 pthread_join(tids[i_1],(void **)0x0);
 }
 free(tids);
 if (thread_count_local * iterations_per_thread_local == shared_counter) {
 iVar1 = 0x2a;
 }
 else {
 iVar1 = -3;
 }
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 001030c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 001030e0 */

void * consumer_thread(void *arg)

{
 int iVar1;
 int *piVar2;
 void *arg_local;
 int received;
 int *ret;
 
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 while (iVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 piVar2 = malloc(4);
 *piVar2 = iVar1;
 return piVar2;
}



/* Function: producer_thread @ 00103164 */

void * producer_thread(void *arg)

{
 void *arg_local;
 
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: param_condition_variable @ 001031c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int result;
 pthread_t producer;
 pthread_t consumer;
 void *consumer_ret;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&consumer,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&producer,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(consumer,&consumer_ret);
 pthread_join(producer,(void **)0x0);
 iVar1 = *(int *)consumer_ret;
 free(consumer_ret);
 }
 else {
 pthread_cancel(consumer);
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: call_condition_variable @ 001032bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 
 iVar1 = param_condition_variable();
 return iVar1;
}



/* Function: thread_atomic_increment @ 001032d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 long lVar2;
 void *arg_local;
 int expected;
 int i;
 int iterations;
 int desired;
 
 lVar2 = ___stack_chk_guard;
 iVar1 = *(int *)arg;
 for (i = 0; i < iVar1; i = i + 1) {
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(i,i + 1000,&atomic_counter);
 }
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 001033bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * thread_atomic_load_store(void *arg)

{
 void *arg_local;
 int value;
 
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 001033f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_atomic_ops(int thread_count,int iterations)

{
 int iVar1;
 int iterations_local;
 int thread_count_local;
 int i;
 int i_1;
 int final_value;
 pthread_t load_store_tid;
 pthread_t *tids;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iterations_local = iterations;
 thread_count_local = thread_count;
 tids = malloc((long)thread_count << 3);
 if (tids == (pthread_t *)0x0) {
 iVar1 = -1;
 }
 else {
 atomic_counter = 0;
 for (i = 0; i < thread_count_local; i = i + 1) {
 iVar1 = pthread_create(tids + i,(pthread_attr_t *)0x0,thread_atomic_increment,
 &iterations_local);
 if (iVar1 != 0) {
 free(tids);
 iVar1 = -2;
 goto LAB_00103554;
 }
 }
 iVar1 = pthread_create(&load_store_tid,(pthread_attr_t *)0x0,thread_atomic_load_store,
 (void *)0x0);
 if (iVar1 == 0) {
 pthread_join(load_store_tid,(void **)0x0);
 }
 for (i_1 = 0; i_1 < thread_count_local; i_1 = i_1 + 1) {
 pthread_join(tids[i_1],(void **)0x0);
 }
 final_value = atomic_counter;
 free(tids);
 if (final_value < 1) {
 iVar1 = -3;
 }
 else {
 iVar1 = 0x2a;
 }
 }
LAB_00103554:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: call_atomic_ops @ 00103584 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 001035a0 */

void * thread_tls_test(void *arg)

{
 undefined4 uVar1;
 long lVar2;
 long lVar3;
 undefined4 *puVar4;
 void *arg_local;
 int initial;
 char *name;
 int *ret;
 
 lVar2 = tpidr_el0;
 uVar1 = *(undefined4 *)(lVar2 + 0x10);
 lVar2 = tpidr_el0;
 lVar3 = tpidr_el0;
 *(int *)(lVar3 + 0x10) = *(int *)(lVar2 + 0x10) + 0x32;
 lVar2 = tpidr_el0;
 strncpy((char *)(lVar2 + 0x18),arg,0x1f);
 puVar4 = malloc(8);
 *puVar4 = uVar1;
 lVar2 = tpidr_el0;
 puVar4[1] = *(undefined4 *)(lVar2 + 0x10);
 return puVar4;
}



/* Function: param_thread_local_storage @ 00103644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_thread_local_storage(int thread_count)

{
 char **ppcVar1;
 int iVar2;
 char *pcVar3;
 int thread_count_local;
 int i;
 int i_1;
 int j;
 int total_initial;
 int total_final;
 int i_2;
 int expected_initial;
 int expected_final;
 void *ret;
 pthread_t *tids;
 char **names;
 int *values;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 tids = malloc((long)thread_count << 3);
 names = malloc((long)thread_count << 3);
 if ((tids == (pthread_t *)0x0) || (names == (char **)0x0)) {
 iVar2 = -1;
 }
 else {
 for (i = 0; i < thread_count; i = i + 1) {
 ppcVar1 = names + i;
 pcVar3 = malloc(0x10);
 *ppcVar1 = pcVar3;
 snprintf(names[i],0x10,"Thread-%d",(ulong)(uint)i);
 }
 for (i_1 = 0; i_1 < thread_count; i_1 = i_1 + 1) {
 iVar2 = pthread_create(tids + i_1,(pthread_attr_t *)0x0,thread_tls_test,names[i_1]);
 if (iVar2 != 0) {
 for (j = 0; j <= i_1; j = j + 1) {
 free(names[j]);
 }
 free(names);
 free(tids);
 iVar2 = -2;
 goto LAB_001038c8;
 }
 }
 total_initial = 0;
 total_final = 0;
 for (i_2 = 0; i_2 < thread_count; i_2 = i_2 + 1) {
 pthread_join(tids[i_2],&ret);
 values = ret;
 total_initial = total_initial + *(int *)ret;
 total_final = total_final + *(int *)((long)ret + 4);
 free(ret);
 free(names[i_2]);
 }
 free(names);
 free(tids);
 if ((total_initial == thread_count * 100) && (total_final == thread_count * 0x96)) {
 iVar2 = 0x2a;
 }
 else {
 iVar2 = -3;
 }
 }
LAB_001038c8:
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: call_thread_local_storage @ 001038fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103914 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 uint uVar1;
 
 puts(DAT_00103ea8);
 uVar1 = call_pthread_create();
 printf(DAT_00103ec8,(ulong)uVar1);
 uVar1 = call_pthread_join();
 printf(DAT_00103ee8,(ulong)uVar1);
 uVar1 = call_mutex_lock();
 printf(DAT_00103f08,(ulong)uVar1);
 uVar1 = call_condition_variable();
 printf(DAT_00103f28,(ulong)uVar1);
 uVar1 = call_atomic_ops();
 printf(DAT_00103f48,(ulong)uVar1);
 uVar1 = call_thread_local_storage();
 printf(DAT_00103f68,(ulong)uVar1);
 return;
}



/* Function: main @ 001039ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 001039d0 */

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



/* Function: __aarch64_ldadd4_acq_rel @ 00103a10 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar2) {
 *param_2 = iVar3 + param_1;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_2;
 *param_2 = iVar3 + param_1;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 75 */
