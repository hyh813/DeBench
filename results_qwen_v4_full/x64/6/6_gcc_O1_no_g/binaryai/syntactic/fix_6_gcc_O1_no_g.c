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
typedef struct _FILE FILE;
typedef unsigned long pthread_t;
typedef struct _pthread_cond_t { unsigned long __data[6]; } pthread_cond_t;
typedef struct _pthread_mutex_t { unsigned long __data[6]; } pthread_mutex_t;
typedef struct _pthread_attr_t { unsigned long __data[8]; } pthread_attr_t;
typedef int __pid_t;
typedef int pid_t;
typedef int key_t;
typedef unsigned int socklen_t;
typedef struct _sockaddr { unsigned short sa_family; char sa_data[14]; } sockaddr;
typedef struct _shmid_ds { int __dummy; } shmid_ds;
typedef void (*__sighandler_t)(int);
typedef unsigned int __useconds_t;
typedef struct _stat { long st_size; } stat_struct;

/* Additional type definitions */
typedef unsigned char byte;
typedef void *(*__start_routine)(void *);

/* Macro definitions for atomic operations */
#define LOCK()
#define UNLOCK()

/* Forward declarations */
unsigned long long main(void);
int __libc_start_main(unsigned long long (*main)(void), int argc, void *ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));

/* External function declarations */
int socket(int __domain, int __type, int __protocol);
int fork(void);
int waitpid(__pid_t __pid, int *__stat_loc, int __options);
int wait(void *__stat_loc);
int execl(char *__path, char *__arg, ...);
int open(char *__file, int __oflag, ...);
key_t ftok(char *__path, int __id);
int shmget(key_t __key, size_t __size, int __shmflg);
void *shmat(int __shmid, void *__shmaddr, int __shmflg);
int shmctl(int __shmid, int __cmd, shmid_ds *__buf);
int pthread_create(pthread_t *__newthread, pthread_attr_t *__attr, void *(*__start_routine)(void *), void *__arg);
int pthread_join(pthread_t __th, void **__thread_return);
int pthread_cancel(pthread_t __th);
int pthread_mutex_lock(pthread_mutex_t *__mutex);
int pthread_mutex_unlock(pthread_mutex_t *__mutex);
int pthread_cond_wait(pthread_cond_t *__cond, pthread_mutex_t *__mutex);
int pthread_cond_signal(pthread_cond_t *__cond);
FILE * fopen(char *__filename, char *__modes);
int fclose(FILE *__stream);
int fileno(FILE *__stream);
unsigned int sleep(unsigned int __seconds);
int usleep(__useconds_t __useconds);
int bind(int __fd, sockaddr *__addr, socklen_t __len);
int listen(int __fd, int __n);
int setsockopt(int __fd, int __level, int __optname, void *__optval, socklen_t __optlen);
int pipe(int __pipedes[2]);
int close(int __fd);
ssize_t read(int __fd, void *__buf, size_t __nbytes);
ssize_t write(int __fd, void *__buf, size_t __n);
int shmdt(void *__shmaddr);
__sighandler_t signal(int __sig, __sighandler_t __handler);
int raise(int __sig);
int alarm(unsigned int __seconds);
int puts(char *__s);
char *strchr(char *__s, int __c);
void *malloc(size_t __size);
void free(void *__ptr);
void _exit(int __status);
void *memcpy(void *__dest, void *__src, size_t __n);
void *memset(void *__s, int __c, size_t __n);
int memcmp(void *__s1, void *__s2, size_t __n);
char *strcpy(char *__dest, char *__src);
char *strncpy(char *__dest, char *__src, size_t __n);
int strcmp(char *__s1, char *__s2);
size_t strlen(char *__s);
char *strstr(char *__haystack, char *__needle);
long syscall(long __sysno, ...);
int stat(char *__file, stat_struct *__buf);
int __printf_chk(int __flag, char *__format, ...);
int __isoc99_sscanf(char *__s, char *__format, ...);
int __snprintf_chk(char *__s, size_t __n, int __flag, size_t __slen, char *__format, ...);
void __stack_chk_fail(void);
int *__errno_location(void);
void rewind(FILE *__stream);
size_t fread(void *__ptr, size_t __size, size_t __n, FILE *__stream);
size_t fwrite(void *__ptr, size_t __size, size_t __n, FILE *__stream);
int unlink(char *__filename);
void __cxa_finalize(void *__dso_handle);

/* Global variable declarations */
extern int signal_received;
extern unsigned int signal_number;
extern int shared_counter;
extern int atomic_counter;
extern unsigned int data;
extern int ready;
extern void *counter_mutex;
extern void *cond_mutex;
extern void *cond;
extern char completed_0;
extern void *__dso_handle;
char DAT_00105011[] = "test1";
char DAT_0010500d[] = "test0";
char DAT_00105015[] = "test2";
char DAT_0010501d[] = "test3";
char DAT_00105019[] = "test4";
char DAT_001053c0[] = "Testing standard library functions";
char DAT_00105099[] = "call_strcpy result: %u\n";
char DAT_001050b4[] = "call_strcmp result: %u\n";
char DAT_001050cf[] = "call_strlen result: %u\n";
char DAT_001050eb[] = "call_memcpy result: %u\n";
char DAT_00105107[] = "call_memcmp result: %u\n";
char DAT_00105123[] = "call_printf result: %u\n";
char DAT_0010513f[] = "call_scanf result: %u\n";
char DAT_0010515c[] = "call_fopen_fclose result: %u\n";
char DAT_00105178[] = "call_fread_fwrite result: %u\n";
char DAT_00105194[] = "call_malloc_free result: %u\n";
char DAT_001051b0[] = "call_memset result: %u\n";
char DAT_001051cb[] = "call_strchr_strstr result: %u\n";
char DAT_0010520d[] = "Testing system calls";
char DAT_00105228[] = "call_linux_syscall result: %u\n";
char DAT_00105244[] = "call_win32_api result: %u\n";
char DAT_00105260[] = "call_fork_exec result: %u\n";
char DAT_0010527c[] = "param_pipe_communication result: %u\n";
char DAT_00105298[] = "param_socket_create result: %u\n";
char DAT_001052b4[] = "call_shmget_shmat result: %u\n";
char DAT_001052d0[] = "param_signal_handling result: %u\n";
char DAT_001052f6[] = "Testing thread concurrency";
char DAT_00105314[] = "call_pthread_create result: %u\n";
char DAT_00105330[] = "param_pthread_join result: %u\n";
char DAT_0010534d[] = "call_mutex_lock result: %u\n";
char DAT_00105369[] = "param_condition_variable result: %u\n";
char DAT_00105385[] = "call_atomic_ops result: %u\n";
char DAT_001053a1[] = "call_thread_local_storage result: %u\n";

// Decompiled by BinaryAI
// SHA256: 0ff4fe1b84d0ce1c2fbb508585c0d1dffe5df26263a5013d3aa237cb9af7e1f7

// Function: custom_init @ 0x102000
static int custom_init_func(void *ctx);
static int custom_init_func(void *ctx)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 return;
}





























































































// Function: _start @ 0x102760
static void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&auStack_8,0,0,param_1,auStack_8);
 do {
 } while( 1 );
}

// Function: deregister_tm_clones @ 0x102790
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1027c0
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102800
static void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: signal_handler @ 0x102849
static void signal_handler_func(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x10285e
static unsigned long long thread_sum(int *param_1)
{
 int iVar1;
 int iVar2;
 param_1[2] = 0;
 iVar1 = *param_1;
 if (iVar1 <= param_1[1]) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != param_1[1] + 1);
 param_1[2] = iVar2;
 }
 return 0;
}

// Function: thread_compute @ 0x10288c
static void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: thread_increment @ 0x1028a4
static unsigned long long thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return 0;
}

// Function: consumer_thread @ 0x1028fb
static void *consumer_thread(void *param)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return (void *)0;
}

// Function: producer_thread @ 0x102961
static void *producer_thread(void *param)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return (void *)0;
}

// Function: thread_atomic_increment @ 0x1029ae
static unsigned long long thread_atomic_increment(int *param_1)
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
 } while (*param_1 != iVar2);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x1029e2
static unsigned long long thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: thread_tls_test @ 0x1029fb
static void thread_tls_test(char *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 long *in_FS_OFFSET;
 iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
 iVar1 = iVar2 + 0x32;
 *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_strcpy @ 0x102a4b
static void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x102a62
static void call_strcpy(void)
{
 long in_FS_OFFSET;
 char auStack_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 param_strcpy(auStack_38,"HelloLib");
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_strcmp @ 0x102aa3
static int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x102ac0
static int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00105011,&DAT_0010500d);
 iVar2 = param_strcmp(&DAT_00105015,&DAT_00105015);
 iVar3 = param_strcmp(&DAT_0010501d,&DAT_00105019);
 return iVar3 + iVar1 + iVar2;
}

// Function: param_strlen @ 0x102b0e
static void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x102b20
static unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102b2a
static unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102b3b
static int call_memcpy(void)
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)local_20 + (int)local_28 + local_18;
 }
 __stack_chk_fail();
}

// Function: param_memcmp @ 0x102bcc
static int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x102be9
static int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_44 = 1;
 local_40 = 2;
 local_3c = 3;
 local_38 = 1;
 local_34 = 2;
 local_30 = 4;
 local_2c = 1;
 local_28 = 2;
 local_24 = 3;
 iVar1 = param_memcmp(&local_44,&local_38,0xc);
 iVar2 = param_memcmp(&local_44,&local_2c,0xc);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail();
}

// Function: param_printf @ 0x102c94
static void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x102cbc
static void call_printf(void)
{
 param_printf(0x2a,"Test");
 return;
}

// Function: param_scanf @ 0x102cda
static int param_scanf(unsigned long long param_1)
{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 __stack_chk_fail();
}

// Function: call_scanf @ 0x102d33
static void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x102d4c
static int param_fopen_fclose(char *param_1)
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

// Function: call_fopen_fclose @ 0x102d8c
static uint call_fopen_fclose(void)
{
 int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x102dab
static int param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 long in_FS_OFFSET;
 char acStack_48 [40];
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 iVar1 = -1;
 }
 else {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(acStack_48,1,0x12,__s);
 acStack_48[sVar2] = '\0';
 fclose(__s);
 unlink(param_1);
 if (sVar2 == 0x12) {
 iVar1 = strcmp(acStack_48,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 fclose(__s);
 iVar1 = -2;
 }
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: call_fread_fwrite @ 0x102e90
static void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x102ea9
static int param_malloc_free(long param_1)
{
 int *__ptr;
 int iVar1;
 int *piVar2;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar1 = 0;
 piVar2 = __ptr;
 do {
 *piVar2 = iVar1;
 iVar1 = iVar1 + 10;
 piVar2 = piVar2 + 1;
 } while (piVar2 != __ptr + param_1);
 }
 iVar1 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar1;
}

// Function: call_malloc_free @ 0x102f0a
static void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x102f21
static int param_memset(void *param_1,size_t param_2)
{
 byte *pbVar1;
 int iVar2;
 pbVar1 = (byte *)memset(param_1,0,param_2);
 if (param_2 == 0) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*pbVar1;
 pbVar1 = pbVar1 + 1;
 } while (pbVar1 != (byte *)((long)param_1 + param_2));
 }
 return iVar2;
}

// Function: call_memset @ 0x102f6a
static int call_memset(void)
{
 long *plVar1;
 long in_FS_OFFSET;
 long local_38 [4];
 int local_14;
 long local_10 [2];
 plVar1 = local_38;
 local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *(unsigned int *)plVar1 = 0xff;
 plVar1 = (long *)((long)plVar1 + 4);
 } while (plVar1 != local_10);
 param_memset(local_38,0x28);
 if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14 + (int)local_38[0];
 }
 __stack_chk_fail();
}

// Function: param_strchr_strstr @ 0x102fc7
static int param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 int iVar1;
 char *pcVar2;
 int iVar3;
 pcVar2 = strchr(param_1,(int)param_2);
 iVar3 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar3 = (int)pcVar2 - (int)param_1;
 }
 pcVar2 = strstr(param_1,param_3);
 iVar1 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar1 = (int)pcVar2 - (int)param_1;
 }
 return iVar1 + iVar3;
}

// Function: call_strchr_strstr @ 0x103012
static void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x103037
static void test_standard_library_functions(void)
{
 unsigned int uVar1;
 puts(&DAT_001053c0);
 call_strcpy();
 __printf_chk(1,&DAT_00105099,0);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_001050b4,uVar1);
 call_strlen();
 __printf_chk(1,&DAT_001050cf,0);
 uVar1 = call_memcpy();
 __printf_chk(1,&DAT_001050eb,uVar1);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_00105107,uVar1);
 call_printf();
 __printf_chk(1,&DAT_00105123,0);
 call_scanf();
 __printf_chk(1,&DAT_0010513f,0);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_0010515c,uVar1);
 call_fread_fwrite();
 __printf_chk(1,&DAT_00105178,0);
 call_malloc_free();
 __printf_chk(1,&DAT_00105194,0);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_001051b0,uVar1);
 call_strchr_strstr();
 __printf_chk(1,&DAT_001051cb,0);
 return;
}

// Function: param_linux_syscall @ 0x1031e8
static unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 unsigned long uVar3;
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar3 = (unsigned long)(uint)-*piVar2;
 }
 else {
 uVar3 = uVar1 & 0xffffffff;
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar3;
}

// Function: call_linux_syscall @ 0x10322a
static uint call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x103249
static unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 stat_struct sStack_a8;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,(stat_struct *)&sStack_a8);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (sStack_a8.st_size < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_win32_api @ 0x1032ad
static void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x1032c6
static uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 long in_FS_OFFSET;
 uint local_24;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 _Var1 = fork();
 if (_Var1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (_Var1 == 0) {
 execl(param_1,param_1,param_2,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 uVar2 = 0xfffffffe;
 if ((-1 < _Var1) && (uVar2 = local_24 >> 8 & 0xff, (local_24 & 0x7f) != 0)) {
 uVar2 = 0xfffffffd;
 }
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_fork_exec @ 0x103364
static int call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}

// Function: param_pipe_communication @ 0x10338d
static unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 char local_38 [40];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = pipe(&local_40);
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
 close(local_40);
 write(local_3c,"HelloPipe",9);
 close(local_3c);
 _exit(0);
 }
 close(local_3c);
 sVar3 = read(local_40,local_38,0x1f);
 local_38[sVar3] = 0;
 close(local_40);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar4;
 }
 __stack_chk_fail();
}

// Function: call_pipe_communication @ 0x103468
static void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x10347a
static unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 unsigned int local_2c;
 sockaddr local_28;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __fd = socket(2,1,0);
 if (__fd < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_2c = 1;
 iVar1 = setsockopt(__fd,1,2,&local_2c,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 local_28.sa_data[6] = '\0';
 local_28.sa_data[7] = '\0';
 local_28.sa_data[8] = '\0';
 local_28.sa_data[9] = '\0';
 local_28.sa_data[10] = '\0';
 local_28.sa_data[11] = '\0';
 local_28.sa_data[12] = '\0';
 local_28.sa_data[13] = '\0';
 local_28.sa_family = 2;
 local_28.sa_data[0] = '\0';
 local_28.sa_data[1] = '\0';
 local_28.sa_data[2] = '\0';
 local_28.sa_data[3] = '\0';
 local_28.sa_data[4] = '\0';
 local_28.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_28,0x10);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffd;
 }
 else {
 iVar1 = listen(__fd,5);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffc;
 }
 else {
 close(__fd);
 uVar2 = 0x2a;
 }
 }
 }
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_socket_create @ 0x10356f
static void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x103581
static unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
 size_t sVar2;
 unsigned long uVar3;
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (__key < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 uVar3 = 0xfffffffd;
 }
 else {
 *__s = 0x654d646572616853;
 *(unsigned int *)(__s + 1) = 0x79726f6d;
 *(char *)((long)__s + 0xc) = 0;
 sVar2 = strlen((char *)__s);
 uVar3 = sVar2 & 0xffffffff;
 shmdt(__s);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 }
 }
 }
 }
 return uVar3;
}

// Function: call_shmget_shmat @ 0x10365d
static unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x10367e
static unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 int iVar3;
 p_Var1 = signal(10,signal_handler_func);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 p_Var1 = signal(0xe,signal_handler_func);
 if (p_Var1 == (__sighandler_t)0xffffffffffffffff) {
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
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar3 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffb;
 }
 else if (signal_number == 0xe) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar2 = 0x2a;
 }
 else {
 uVar2 = 0xfffffffb;
 }
 }
 else {
 uVar2 = 0xfffffffc;
 }
 }
 }
 return uVar2;
}

// Function: call_signal_handling @ 0x1037b2
static void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x1037c4
static void test_system_calls(void)
{
 unsigned int uVar1;
 puts(&DAT_0010520d);
 uVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_00105228,uVar1);
 call_win32_api();
 __printf_chk(1,&DAT_00105244,0);
 uVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00105260,uVar1);
 uVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_0010527c,uVar1);
 uVar1 = param_socket_create();
 __printf_chk(1,&DAT_00105298,uVar1);
 uVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_001052b4,uVar1);
 uVar1 = param_signal_handling();
 __printf_chk(1,&DAT_001052d0,uVar1);
 return;
}

// Function: param_pthread_create @ 0x1038bc
static unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 long in_FS_OFFSET;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_pthread_create @ 0x103937
static void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x10394e
static int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 unsigned int *__arg;
 long lVar3;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 pthread_t local_78 [4];
 unsigned int local_58;
 unsigned int local_54;
 int local_50 [7];
 unsigned int local_34;
 long local_30;
 __newthread = local_78;
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 local_58 = 1;
 local_54 = 10;
 local_50[0] = 0;
 local_50[1] = 0xb;
 local_50[2] = 0x14;
 local_50[3] = 0;
 local_50[4] = 0x15;
 local_50[5] = 0x1e;
 local_50[6] = 0;
 __arg = &local_58;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00103a1f;
 }
 __newthread = __newthread + 1;
 __arg = __arg + 3;
 } while (__arg != &local_34);
 lVar3 = 0;
 iVar1 = 0;
 do {
 iVar2 = pthread_join(local_78[lVar3],(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + local_50[lVar3 * 3];
 lVar3 = lVar3 + 1;
 } while (lVar3 != 3);
LAB_00103a1f:
 if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: call_pthread_join @ 0x103a51
static void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: param_mutex_lock @ 0x103a68
static unsigned long long param_mutex_lock(uint param_1,int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 pthread_t *__newthread;
 pthread_t *ppVar3;
 int local_3c [3];
 local_3c[0] = param_2;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 __newthread = __newthread + 1;
 ppVar3 = __ptr;
 } while (__newthread != __ptr + param_1);
 do {
 pthread_join(*ppVar3,(void **)0x0);
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + param_1);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * local_3c[0]) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103b3e
static void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x103b5a
static unsigned int param_condition_variable(void)
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_condition_variable @ 0x103c21
static void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: param_atomic_ops @ 0x103c38
static unsigned long long param_atomic_ops(uint param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 pthread_t *__newthread;
 long lVar3;
 long in_FS_OFFSET;
 unsigned int local_3c;
 pthread_t local_38;
 long local_30;
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 local_3c = param_2;
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 }
 else {
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00103d20;
 }
 __newthread = __newthread + 1;
 } while (__newthread != __ptr + param_1);
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 lVar3 = 0;
 do {
 pthread_join(__ptr[lVar3],(void **)0x0);
 lVar3 = lVar3 + 1;
 } while ((int)lVar3 < (int)param_1);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00103d20:
 if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: call_atomic_ops @ 0x103d9c
static void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: param_thread_local_storage @ 0x103db8
static unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 void *pvVar2;
 unsigned long long uVar3;
 unsigned long uVar4;
 void **ppvVar5;
 int iVar6;
 pthread_t *__newthread;
 unsigned long uVar7;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = (pthread_t *)malloc((long)(int)param_1 << 3);
 __ptr_00 = (void **)malloc((long)(int)param_1 << 3);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (void **)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if ((int)param_1 < 1) {
 iVar6 = 0;
 iVar1 = 0;
 }
 else {
 uVar7 = (unsigned long)param_1;
 uVar4 = 0;
 do {
 pvVar2 = malloc(0x10);
 __ptr_00[uVar4] = pvVar2;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar4 != uVar7);
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,__ptr_00[uVar4]);
 if (iVar1 != 0) {
 if (-1 < (int)uVar4) {
 ppvVar5 = __ptr_00;
 do {
 free(*ppvVar5);
 ppvVar5 = ppvVar5 + 1;
 } while (ppvVar5 != __ptr_00 + (uVar4 & 0xffffffff) + 1);
 }
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00103f06;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar4 != uVar7);
 uVar4 = 0;
 iVar1 = 0;
 iVar6 = 0;
 do {
 pthread_join(__ptr[uVar4],&local_48);
 iVar1 = iVar1 + *local_48;
 iVar6 = iVar6 + local_48[1];
 free(local_48);
 free(__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar4 != uVar7);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 == iVar1) && (param_1 * 0x96 == iVar6)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00103f06:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 __stack_chk_fail();
}

// Function: call_thread_local_storage @ 0x103f81
static void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103f98
static void test_thread_concurrency(void)
{
 unsigned int uVar1;
 puts(&DAT_001052f6);
 call_pthread_create();
 __printf_chk(1,&DAT_00105314,0);
 uVar1 = param_pthread_join();
 __printf_chk(1,&DAT_00105330,uVar1);
 call_mutex_lock();
 __printf_chk(1,&DAT_0010534d,0);
 uVar1 = param_condition_variable();
 __printf_chk(1,&DAT_00105369,uVar1);
 call_atomic_ops();
 __printf_chk(1,&DAT_00105385,0);
 call_thread_local_storage();
 __printf_chk(1,&DAT_001053a1,0);
 return;
}

// Function: main @ 0x10407d
unsigned long long main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: custom_fini @ 0x1040b0
static void custom_fini_func(void);
static void custom_fini_func(void)
{
 return;
}

