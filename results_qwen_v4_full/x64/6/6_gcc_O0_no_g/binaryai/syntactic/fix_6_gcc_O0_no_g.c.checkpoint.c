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
typedef unsigned int uint;
typedef unsigned char byte;
#define true 1
typedef int __pid_t;
typedef int key_t;
typedef unsigned int socklen_t;
typedef unsigned long __useconds_t;
typedef void (*__sighandler_t)(int);

/* Forward declarations for structs */
typedef struct _IO_FILE FILE;
typedef struct { unsigned short sa_family; char sa_data[14]; } sockaddr;
typedef struct { long st_size; } stat_struct;
typedef struct { int shm_segsz; } shmid_ds;
typedef unsigned long pthread_t;
typedef struct { int __lock; } pthread_mutex_t;
typedef struct { int __lock; } pthread_cond_t;
typedef struct { int __size; } pthread_attr_t;
/* Function pointer type for pthread */
typedef void *(*__start_routine)(void *);

/* Forward declarations */

/* External function declarations */
extern int __libc_start_main(unsigned long long (*main)(void), int argc, void **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern void __cxa_finalize(void);
extern void __stack_chk_fail(void);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern int scanf(const char *format, ...);
extern int sscanf(const char *str, const char *format, ...);
extern int __isoc99_sscanf(const char *str, const char *format, ...);
extern char *strcpy(char *dest, const char *src);
extern int strcmp(const char *s1, const char *s2);
extern size_t strlen(const char *s);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int memcmp(const void *s1, const void *s2, size_t n);
extern void *memset(void *s, int c, size_t n);
extern char *strchr(const char *s, int c);
extern char *strstr(const char *haystack, const char *needle);
extern void *malloc(size_t size);
extern void free(void *ptr);
extern FILE *fopen(const char *pathname, const char *mode);
extern int fclose(FILE *stream);
extern size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream);
extern int fileno(FILE *stream);
extern void rewind(FILE *stream);
extern int unlink(const char *pathname);
extern long syscall(long number, ...);
extern int * __errno_location(void);
extern int stat(const char *pathname, stat_struct *statbuf);
extern __pid_t fork(void);
extern int execl(const char *path, const char *arg, ...);
extern void _exit(int status);
extern __pid_t waitpid(__pid_t pid, int *wstatus, int options);
extern int wait(int *wstatus);
extern int pipe(int pipefd[2]);
extern int close(int fd);
extern ssize_t read(int fd, void *buf, size_t count);
extern ssize_t write(int fd, const void *buf, size_t count);
extern int socket(int domain, int type, int protocol);
extern int setsockopt(int sockfd, int level, int optname, const void *optval, socklen_t optlen);
extern unsigned short htons(unsigned short hostshort);
extern int bind(int sockfd, const sockaddr *addr, socklen_t addrlen);
extern int listen(int sockfd, int backlog);
extern int open(const char *pathname, int flags, ...);
extern key_t ftok(const char *pathname, int proj_id);
extern int shmget(key_t key, size_t size, int shmflg);
extern void *shmat(int shmid, const void *shmaddr, int shmflg);
extern int shmdt(const void *shmaddr);
extern int shmctl(int shmid, int cmd, shmid_ds *buf);
extern __sighandler_t signal(int signum, __sighandler_t handler);
extern int raise(int sig);
extern int alarm(unsigned int seconds);
extern int usleep(__useconds_t usec);
extern unsigned int sleep(unsigned int seconds);
extern int pthread_create(pthread_t *thread, const pthread_attr_t *attr, __start_routine start_routine, void *arg);
extern int pthread_join(pthread_t thread, void **retval);
extern int pthread_mutex_lock(pthread_mutex_t *mutex);
extern int pthread_mutex_unlock(pthread_mutex_t *mutex);
extern int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int pthread_cancel(pthread_t thread);
extern int snprintf(char *str, size_t size, const char *format, ...);
extern char *strncpy(char *dest, const char *src, size_t n);

/* Global variables used in code */
static int signal_received;
static int signal_number;
static int counter_mutex;
static int shared_counter;
static int cond_mutex;
static int cond;
static int data;
static int ready;
static int atomic_counter;
static int completed_0;
static void *__dso_handle;

/* Data references */
char DAT_00105015[] = "test1";
char DAT_00105011[] = "test2";
char DAT_00105019[] = "test3";
char DAT_00105021[] = "test4";
char DAT_0010501d[] = "test5";
char DAT_00105047[] = "TestName";
char DAT_001050b0[] = "Testing standard library functions";
char DAT_001050d4[] = "strcpy result: %lu\n";
char DAT_001050ef[] = "strcmp result: %lu\n";
char DAT_0010510a[] = "strlen result: %lu\n";
char DAT_00105126[] = "memcpy result: %lu\n";
char DAT_00105142[] = "memcmp result: %lu\n";
char DAT_0010515e[] = "printf result: %lu\n";
char DAT_0010517a[] = "scanf result: %lu\n";
char DAT_00105197[] = "fopen_fclose result: %lu\n";
char DAT_001051b3[] = "fread_fwrite result: %lu\n";
char DAT_001051cf[] = "malloc_free result: %lu\n";
char DAT_001051eb[] = "memset result: %lu\n";
char DAT_00105206[] = "strchr_strstr result: %lu\n";
char DAT_00105248[] = "Testing system calls";
char DAT_00105263[] = "linux_syscall result: %lu\n";
char DAT_0010527f[] = "win32_api result: %lu\n";
char DAT_0010529b[] = "fork_exec result: %lu\n";
char DAT_001052b7[] = "pipe_communication result: %lu\n";
char DAT_001052d3[] = "socket_create result: %lu\n";
char DAT_001052ef[] = "shmget_shmat result: %lu\n";
char DAT_0010530b[] = "signal_handling result: %lu\n";
char DAT_00105331[] = "Testing thread concurrency";
char DAT_0010534f[] = "pthread_create result: %lu\n";
char DAT_0010536b[] = "pthread_join result: %lu\n";
char DAT_00105388[] = "mutex_lock result: %lu\n";
char DAT_001053a4[] = "condition_variable result: %lu\n";
char DAT_001053c0[] = "atomic_ops result: %lu\n";
char DAT_001053dc[] = "thread_local_storage result: %lu\n";

// Decompiled by BinaryAI
// SHA256: ba4e0b4a1b26323947846edf270e0ae92ddfd196b2aca8cfd9fd003960bb983b





























































































































// Function: deregister_tm_clones @ 0x1027b0
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1027e0
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102820
static void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_strcpy @ 0x102869
unsigned int param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 return (unsigned int)strlen(param_1);
}

// Function: call_strcpy @ 0x10289e
unsigned int call_strcpy(void)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 uVar1 = param_strcpy(local_38,"HelloLib");
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_strcmp @ 0x1028eb
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

// Function: call_strcmp @ 0x102936
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00105015,&DAT_00105011);
 iVar2 = param_strcmp(&DAT_00105019,&DAT_00105019);
 iVar3 = param_strcmp(&DAT_00105021,&DAT_0010501d);
 return iVar3 + iVar1 + iVar2;
}

// Function: param_strlen @ 0x1029a5
size_t param_strlen(char *param_1)
{
 size_t sVar1;
 sVar1 = strlen(param_1);
 return sVar1;
}

// Function: call_strlen @ 0x1029cb
unsigned int call_strlen(void)
{
 return (unsigned int)param_strlen("BinBench2025");
}

// Function: param_memcpy @ 0x1029f0
size_t param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x102a25
int call_memcpy(void)
{
 long in_FS_OFFSET;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned long long local_28;
 unsigned long long local_20;
 int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 10;
 local_44 = 0x14;
 local_40 = 0x1e;
 local_3c = 0x28;
 local_38 = 0x32;
 local_28 = 0;
 local_20 = 0;
 local_18 = 0;
 param_memcpy(&local_28,&local_48,0x14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_18 + (int)local_28 + (int)local_20;
}

// Function: param_memcmp @ 0x102ab5
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

// Function: call_memcmp @ 0x102b08
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34 = 1;
 local_30 = 2;
 local_2c = 3;
 local_28 = 1;
 local_24 = 2;
 local_20 = 4;
 local_1c = 1;
 local_18 = 2;
 local_14 = 3;
 iVar1 = param_memcmp(&local_34,&local_28,0xc);
 iVar2 = param_memcmp(&local_34,&local_1c,0xc);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar2 + iVar1;
}

// Function: param_printf @ 0x102bb6
int param_printf(uint param_1,unsigned long long param_2)
{
 int iVar1;
 iVar1 = printf("Value: %d, Name: %s\n",(unsigned long)param_1,param_2);
 return iVar1;
}

// Function: call_printf @ 0x102bee
unsigned int call_printf(void)
{
 unsigned int uVar1;
 uVar1 = param_printf(0x2a,&DAT_00105047);
 return uVar1;
}

// Function: param_scanf @ 0x102c16
void param_scanf(unsigned long long param_1)
{
 long in_FS_OFFSET;
 int local_1c;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = __isoc99_sscanf(param_1,"%d,%d",&local_1c,&local_18);
 if (local_14 == 2) {
 local_18 = local_18 + local_1c;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_scanf @ 0x102c83
unsigned int call_scanf(void)
{
 param_scanf("123,456");
 return 0;
}

// Function: param_fopen_fclose @ 0x102c9c
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

// Function: call_fopen_fclose @ 0x102cf4
unsigned long long call_fopen_fclose(void)
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

// Function: param_fread_fwrite @ 0x102d26
unsigned long long param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 unsigned long long uVar2;
 size_t sVar3;
 size_t sVar4;
 long in_FS_OFFSET;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
 sVar4 = fread(local_38,1,sVar3,__s);
 local_38[sVar4] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar4 == sVar3) {
 iVar1 = strcmp(local_38,"BinBench Test Data");
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 goto LAB_00102e4a;
 }
 }
 uVar2 = 0xfffffffd;
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
LAB_00102e4a:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x102e60
unsigned long long call_fread_fwrite(void)
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}

// Function: param_malloc_free @ 0x102e79
int param_malloc_free(unsigned long param_1)
{
 int iVar1;
 int *__ptr;
 unsigned long local_18;
 __ptr = (int *)malloc(param_1 << 2);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 __ptr[local_18] = (int)local_18 * 10;
 }
 iVar1 = __ptr[param_1 - 1] + *__ptr;
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102f23
unsigned int call_malloc_free(void)
{
 return (unsigned int)param_malloc_free(10);
}

// Function: param_memset @ 0x102f37
int param_memset(void *param_1,size_t param_2)
{
 int local_1c;
 unsigned long local_18;
 memset(param_1,0,param_2);
 local_1c = 0;
 for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
 local_1c = local_1c + (uint)*(byte *)(local_18 + (long)param_1);
 }
 return local_1c;
}

// Function: call_memset @ 0x102fa1
int call_memset(void)
{
 long in_FS_OFFSET;
 int local_3c;
 int local_38 [10];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
 local_38[local_3c] = 0xff;
 }
 param_memset(local_38,0x28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_38[9] + local_38[0];
}

// Function: param_strchr_strstr @ 0x10300b
int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 int iVar1;
 int iVar2;
 char *pcVar3;
 pcVar3 = strchr(param_1,(int)param_2);
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
 return iVar2 + iVar1;
}

// Function: call_strchr_strstr @ 0x10308d
unsigned int call_strchr_strstr(void)
{
 unsigned int uVar1;
 uVar1 = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return uVar1;
}

// Function: test_standard_library_functions @ 0x1030c4
void test_standard_library_functions(void)
{
 uint uVar1;
 puts(&DAT_001050b0);
 uVar1 = call_strcpy();
 printf(&DAT_001050d4,(unsigned long)uVar1);
 uVar1 = call_strcmp();
 printf(&DAT_001050ef,(unsigned long)uVar1);
 uVar1 = call_strlen();
 printf(&DAT_0010510a,(unsigned long)uVar1);
 uVar1 = call_memcpy();
 printf(&DAT_00105126,(unsigned long)uVar1);
 uVar1 = call_memcmp();
 printf(&DAT_00105142,(unsigned long)uVar1);
 uVar1 = call_printf();
 printf(&DAT_0010515e,(unsigned long)uVar1);
 uVar1 = call_scanf();
 printf(&DAT_0010517a,(unsigned long)uVar1);
 uVar1 = call_fopen_fclose();
 printf(&DAT_00105197,(unsigned long)uVar1);
 uVar1 = call_fread_fwrite();
 printf(&DAT_001051b3,(unsigned long)uVar1);
 uVar1 = call_malloc_free();
 printf(&DAT_001051cf,(unsigned long)uVar1);
 uVar1 = call_memset();
 printf(&DAT_001051eb,(unsigned long)uVar1);
 uVar1 = call_strchr_strstr();
 printf(&DAT_00105206,(unsigned long)uVar1);
 return;
}

// Function: param_linux_syscall @ 0x10325e
int param_linux_syscall(unsigned long long param_1)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uVar2 = syscall(2,param_1,0);
 iVar1 = (int)uVar2;
 if (iVar1 < 0) {
 piVar3 = __errno_location();
 iVar1 = -*piVar3;
 }
 else {
 syscall(3,uVar2 & 0xffffffff);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x1032b6
unsigned long long call_linux_syscall(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_win32_api @ 0x1032e8
void param_win32_api(char *param_1)
{
 int iVar1;
 long in_FS_OFFSET;
 stat_struct local_a8;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&local_a8);
 if (iVar1 < 0) {
 }
 else if (local_a8.st_size < 1) {
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_win32_api @ 0x10335c
unsigned long long call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return 0;
}

// Function: param_fork_exec @ 0x103375
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 uint uVar1;
 long in_FS_OFFSET;
 uint local_1c;
 __pid_t local_18;
 __pid_t local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = fork();
 if (local_18 < 0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (local_18 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 local_14 = waitpid(local_18,(int *)&local_1c,0);
 if (local_14 < 0) {
 uVar1 = 0xfffffffe;
 }
 else if ((local_1c & 0x7f) == 0) {
 uVar1 = (int)local_1c >> 8 & 0xff;
 }
 else {
 uVar1 = 0xfffffffd;
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_fork_exec @ 0x103431
unsigned long long call_fork_exec(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 if (iVar1 == 0) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x103468
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 unsigned long long uVar3;
 size_t __n;
 ssize_t sVar4;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pipe(&local_40);
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
 close(local_40);
 __n = strlen("HelloPipe");
 write(local_3c,"HelloPipe",__n);
 close(local_3c);
 _exit(0);
 }
 close(local_3c);
 sVar4 = read(local_40,local_38,0x1f);
 local_38[sVar4] = 0;
 close(local_40);
 wait((void *)0x0);
 if (sVar4 < 1) {
 uVar3 = 0xfffffffd;
 }
 else {
 uVar3 = 0x2a;
 }
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_pipe_communication @ 0x103573
unsigned long long call_pipe_communication(void)
{
 return param_pipe_communication();
}

// Function: param_socket_create @ 0x103582
unsigned long long param_socket_create(void)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 unsigned int local_30;
 int local_2c;
 sockaddr local_28;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_2c = socket(2,1,0);
 if (local_2c < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_30 = 1;
 iVar1 = setsockopt(local_2c,1,2,&local_30,4);
 if (iVar1 < 0) {
 close(local_2c);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_28,0,0x10);
 local_28.sa_family = 2;
 *(unsigned short *)(local_28.sa_data) = htons(0);
 local_28.sa_data[2] = '\0';
 local_28.sa_data[3] = '\0';
 local_28.sa_data[4] = '\0';
 local_28.sa_data[5] = '\0';
 iVar1 = bind(local_2c,&local_28,0x10);
 if (iVar1 < 0) {
 close(local_2c);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(local_2c,5);
 if (iVar1 < 0) {
 close(local_2c);
 uVar2 = 0xfffffffc;
 }
 else {
 close(local_2c);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_socket_create @ 0x1036a9
unsigned long long call_socket_create(void)
{
 return param_socket_create();
}

// Function: param_shmget_shmat @ 0x1036b8
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
 *(unsigned int *)(__s + 1) = 0x79726f6d;
 *(char *)((long)__s + 0xc) = 0;
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

// Function: call_shmget_shmat @ 0x1037c8
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: signal_handler @ 0x1037f0
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: param_signal_handling @ 0x103811
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int local_c;
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
 local_c = 1000;
 while ((signal_received == 0 && (0 < local_c))) {
 usleep(1000);
 local_c = local_c + -1;
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 local_c = 2000;
 while ((signal_received == 0 && (0 < local_c))) {
 usleep(1000);
 local_c = local_c + -1;
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

// Function: call_signal_handling @ 0x103948
unsigned long long call_signal_handling(void)
{
 return param_signal_handling();
}

// Function: test_system_calls @ 0x103957
void test_system_calls(void)
{
 uint uVar1;
 puts(&DAT_00105248);
 uVar1 = call_linux_syscall();
 printf(&DAT_00105263,(unsigned long)uVar1);
 uVar1 = call_win32_api();
 printf(&DAT_0010527f,(unsigned long)uVar1);
 uVar1 = call_fork_exec();
 printf(&DAT_0010529b,(unsigned long)uVar1);
 uVar1 = call_pipe_communication();
 printf(&DAT_001052b7,(unsigned long)uVar1);
 uVar1 = call_socket_create();
 printf(&DAT_001052d3,(unsigned long)uVar1);
 uVar1 = call_shmget_shmat();
 printf(&DAT_001052ef,(unsigned long)uVar1);
 uVar1 = call_signal_handling();
 printf(&DAT_0010530b,(unsigned long)uVar1);
 return;
}

// Function: thread_compute @ 0x103a51
static int * thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: param_pthread_create @ 0x103a98
unsigned int param_pthread_create(unsigned int param_1)
{
 unsigned int uVar1;
 long in_FS_OFFSET;
 unsigned int local_2c;
 int local_28;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_2c = param_1;
 local_28 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_2c);
 if (local_28 == 0) {
 pthread_join(local_20,&local_18);
 local_24 = *local_18;
 free(local_18);
 uVar1 = local_24;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: call_pthread_create @ 0x103b2c
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}

// Function: thread_sum @ 0x103b40
static unsigned long long thread_sum(int *param_1)
{
 int local_14;
 param_1[2] = 0;
 for (local_14 = *param_1; local_14 <= param_1[1]; local_14 = local_14 + 1) {
 param_1[2] = param_1[2] + local_14;
 }
 return 0;
}

// Function: param_pthread_join @ 0x103b94
int param_pthread_join(void)
{
 int iVar1;
 long in_FS_OFFSET;
 int local_64;
 int local_60;
 int local_5c;
 pthread_t local_58 [4];
 int local_38 [4];
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38[0] = 1;
 local_38[1] = 10;
 local_38[2] = 0;
 local_38[3] = 0xb;
 local_28 = 0x14;
 local_24 = 0;
 local_20 = 0x15;
 local_1c = 0x1e;
 local_18 = 0;
 for (local_64 = 0; local_64 < 3; local_64 = local_64 + 1) {
 iVar1 = pthread_create(local_58 + local_64,(pthread_attr_t *)0x0,thread_sum,
 local_38 + (long)local_64 * 3);
 if (iVar1 != 0) {
 local_60 = -1;
 goto LAB_00103cac;
 }
 }
 local_60 = 0;
 local_5c = 0;
 do {
 if (2 < local_5c) {
LAB_00103cac:
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_60;
 }
 __stack_chk_fail();
 }
 iVar1 = pthread_join(local_58[local_5c],(void **)0x0);
 if (iVar1 != 0) {
 local_60 = -2;
 goto LAB_00103cac;
 }
 local_60 = local_60 + local_38[(long)local_5c * 3 + 2];
 local_5c = local_5c + 1;
 } while( true );
}

// Function: call_pthread_join @ 0x103cc2
unsigned int call_pthread_join(void)
{
 return (unsigned int)param_pthread_join();
}

// Function: thread_increment @ 0x103cd6
static unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 int local_10;
 iVar1 = *param_1;
 for (local_10 = 0; local_10 < iVar1; local_10 = local_10 + 1) {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x103d42
unsigned long long param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 int local_30;
 int local_2c;
 int local_1c;
 int local_18;
 void *local_10;
 local_30 = param_2;
 local_2c = param_1;
 local_10 = malloc((long)param_1 << 3);
 if (local_10 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 for (local_1c = 0; local_1c < local_2c; local_1c = local_1c + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_1c * 8 + (long)local_10),
 (pthread_attr_t *)0x0,thread_increment,&local_30);
 if (iVar1 != 0) {
 free(local_10);
 return 0xfffffffe;
 }
 }
 for (local_18 = 0; local_18 < local_2c; local_18 = local_18 + 1) {
 pthread_join(*(pthread_t *)((long)local_10 + (long)local_18 * 8),(void **)0x0);
 }
 free(local_10);
 if (local_30 * local_2c == shared_counter) {
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103e4a
unsigned long long call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: consumer_thread @ 0x103e63
static unsigned int * consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x103edc
static unsigned long long producer_thread(void)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x103f3e
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 long in_FS_OFFSET;
 pthread_t local_28;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x10401b
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: thread_atomic_increment @ 0x10402f
static unsigned long long thread_atomic_increment(int *param_1)
{
 int iVar1;
 long in_FS_OFFSET;
 int local_1c;
 for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
 atomic_counter = atomic_counter + 1;
 iVar1 = local_1c + 1000;
 if (local_1c != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1040ba
static unsigned long long thread_atomic_load_store(void)
{
 atomic_counter = atomic_counter + 100;
 return 0;
}

// Function: param_atomic_ops @ 0x1040e2
unsigned long long param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 unsigned int local_40;
 int local_3c;
 int local_2c;
 int local_28;
 int local_24;
 pthread_t local_20;
 void *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_40 = param_2;
 local_3c = param_1;
 local_18 = malloc((long)param_1 << 3);
 if (local_18 == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 atomic_counter = 0;
 for (local_2c = 0; local_2c < local_3c; local_2c = local_2c + 1) {
 iVar1 = pthread_create((pthread_t *)((long)local_2c * 8 + (long)local_18),
 (pthread_attr_t *)0x0,thread_atomic_increment,&local_40);
 if (iVar1 != 0) {
 free(local_18);
 uVar2 = 0xfffffffe;
 goto LAB_00104225;
 }
 }
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,(void **)0x0);
 }
 for (local_28 = 0; local_28 < local_3c; local_28 = local_28 + 1) {
 pthread_join(*(pthread_t *)((long)local_18 + (long)local_28 * 8),(void **)0x0);
 }
 local_24 = atomic_counter;
 free(local_18);
 if (local_24 < 1) {
 uVar2 = 0xfffffffd;
 }
 else {
 uVar2 = 0x2a;
 }
 }
LAB_00104225:
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x10423b
unsigned long long call_atomic_ops(void)
{
 return param_atomic_ops(4,500);
}

// Function: thread_tls_test @ 0x104254
static unsigned int * thread_tls_test(char *param_1)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 long *in_FS_OFFSET;
 uVar1 = *(unsigned int *)((long)in_FS_OFFSET + -0x24);
 *(int *)((long)in_FS_OFFSET + -0x24) = *(int *)((long)in_FS_OFFSET + -0x24) + 0x32;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 puVar2 = (unsigned int *)malloc(8);
 *puVar2 = uVar1;
 puVar2[1] = *(unsigned int *)((long)in_FS_OFFSET + -0x24);
 return puVar2;
}

// Function: param_thread_local_storage @ 0x1042dd
unsigned long long param_thread_local_storage(int param_1)
{
 void **ppvVar1;
 int iVar2;
 unsigned long long uVar3;
 void *pvVar4;
 long in_FS_OFFSET;
 uint local_60;
 int local_5c;
 int local_58;
 int local_54;
 int local_50;
 int local_4c;
 int *local_40;
 void *local_38;
 void *local_30;
 int *local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = malloc((long)param_1 << 3);
 local_30 = malloc((long)param_1 << 3);
 if ((local_38 == (void *)0x0) || (local_30 == (void *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (local_60 = 0; (int)local_60 < param_1; local_60 = local_60 + 1) {
 ppvVar1 = (void **)((long)(int)local_60 * 8 + (long)local_30);
 pvVar4 = malloc(0x10);
 *ppvVar1 = pvVar4;
 snprintf(*(char **)((long)local_30 + (long)(int)local_60 * 8),0x10,"Thread-%d",(unsigned long)local_60
 );
 }
 for (local_5c = 0; local_5c < param_1; local_5c = local_5c + 1) {
 iVar2 = pthread_create((pthread_t *)((long)local_5c * 8 + (long)local_38),
 (pthread_attr_t *)0x0,thread_tls_test,
 *(void **)((long)local_30 + (long)local_5c * 8));
 if (iVar2 != 0) {
 for (local_58 = 0; local_58 <= local_5c; local_58 = local_58 + 1) {
 free(*(void **)((long)local_30 + (long)local_58 * 8));
 }
 free(local_30);
 free(local_38);
 uVar3 = 0xfffffffe;
 goto LAB_0010453f;
 }
 }
 local_54 = 0;
 local_50 = 0;
 for (local_4c = 0; local_4c < param_1; local_4c = local_4c + 1) {
 pthread_join(*(pthread_t *)((long)local_38 + (long)local_4c * 8),&local_40);
 local_28 = local_40;
 local_54 = local_54 + *local_40;
 local_50 = local_50 + local_40[1];
 free(local_40);
 free(*(void **)((long)local_30 + (long)local_4c * 8));
 }
 free(local_30);
 free(local_38);
 if ((local_54 == param_1 * 100) && (local_50 == param_1 * 0x96)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_0010453f:
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x104559
unsigned long long call_thread_local_storage(void)
{
 unsigned long long result = param_thread_local_storage(4);
 return result;
}

// Function: test_thread_concurrency @ 0x10456d
void test_thread_concurrency(void)
{
 uint uVar1;
 puts(&DAT_00105331);
 uVar1 = call_pthread_create();
 printf(&DAT_0010534f,(unsigned long)uVar1);
 uVar1 = call_pthread_join();
 printf(&DAT_0010536b,(unsigned long)uVar1);
 uVar1 = call_mutex_lock();
 printf(&DAT_00105388,(unsigned long)uVar1);
 uVar1 = call_condition_variable();
 printf(&DAT_001053a4,(unsigned long)uVar1);
 uVar1 = call_atomic_ops();
 printf(&DAT_001053c0,(unsigned long)uVar1);
 uVar1 = call_thread_local_storage();
 printf(&DAT_001053dc,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x104647
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



