// Decompiled by BinaryAI
// SHA256: 840f4094fb48e8f56987079c6d6cbf72687d04f8ea61591d583d4b47088c7580

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/socket.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <ctype.h>

typedef unsigned int uint;
typedef int bool;
typedef unsigned char byte;

#define true 1
#define false 0

// Global variables
int shared_counter = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex;
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

// Global storage for pipe file descriptors (used by pipe communication)
int pipe_fds_global[2];
int ready = 0;
int data = 0;
int signal_received = 0;
int signal_number = 0;
int stack0x00000008 = 0;
int stack0x00000004 = 0;

// Atomic operations (LOCK/UNLOCK macros for x86)
#define LOCK()   __asm__ __volatile__("lock" ::: "memory")
#define UNLOCK() __asm__ __volatile__("" ::: "memory")

// Forward declarations
int call_fork_exec(void);
void call_pipe_communication(void);

// pthread function wrappers
// pthread_mutex_lock returns int
#define FUN_00011550(mutex) pthread_mutex_lock(mutex)
// pthread_mutex_unlock returns int  
#define FUN_00011400(mutex) pthread_mutex_unlock(mutex)
#define FUN_000114c0(cond, mutex) pthread_cond_wait(&(cond), mutex)
#define FUN_000115d0(cond) pthread_cond_signal(&(cond))
#define FUN_000116a0(a, b, c, d) pthread_setspecific(b, c)
#define FUN_000115b0 strcpy
#define FUN_00011630 strlen
#define FUN_00011440 strcmp
#define FUN_00011490 memcpy
#define FUN_000114e0 memcmp
#define FUN_000116f0 printf
#define FUN_00011660 sscanf
#define FUN_00011670 fopen
#define FUN_000116c0 fclose
#define FUN_000114b0 fclose
#define FUN_00011570 fwrite
#define FUN_00011520(f, off, wh) fseek(f, off, wh)
#define FUN_000115a0 fread
#define FUN_00011560 ftell
#define FUN_000115e0 malloc
#define FUN_00011480 free
#define FUN_00011680(dst, val, sz, ...) memset(dst, val, sz)
#define FUN_00011620 strchr
#define FUN_00011430 strstr
#define FUN_000115f0 puts
#define FUN_000116b0 open
#define FUN_00011690(errnum) strerror(errnum)
#define FUN_00011600 access
// Wrapper for fork - returns pid_t
static inline pid_t fork_wrapper(void) {
    return fork();
}
#define FUN_00011720 fork_wrapper
// Wrapper for pipe syscall - takes optional array of 2 fds
static inline int pipe_wrapper(int *pipefd) {
    return pipe(pipefd);
}
static inline int pipe_wrapper_noarg(void) {
    int fds[2];
    return pipe(fds);
}
#define FUN_00011580 pipe_wrapper_noarg
#define FUN_000116d0 execl
#define FUN_00011470(status) _exit(status)
// pipe wrapper - returns int (fd or -1 on error)
// Uses global storage to return the pipe fds
static inline int pipe_wrapper_for_use(void) {
    return pipe(pipe_fds_global);
}
#define FUN_000116e0 pipe_wrapper_for_use
// Global storage for pipe file descriptors (used by pipe communication)
int pipe_fds_global[2];

// Wrapper for close - takes fd as argument
static inline int close_wrapper(int fd) {
    return close(fd);
}
// Version without args - closes read end of global pipe
static inline int close_wrapper_noarg(void) {
    return close(pipe_fds_global[0]);
}
// Both versions - one takes fd argument, one uses global pipe fd
// Note: Use close_wrapper_noarg when called without args
#define FUN_00011780 close_wrapper

// Wrapper for write - can take args or use global
static inline ssize_t write_wrapper(int fd, const void *buf, size_t count) {
    return write(fd, buf, count);
}
static inline ssize_t write_wrapper_global(void) {
    return write(pipe_fds_global[1], "HelloPipe", 9);
}
#define FUN_00011640 write_wrapper_global

// Wrapper for read - takes fd, buf, count  
static inline ssize_t read_wrapper(int fd, void *buf, size_t count) {
    return read(fd, buf, count);
}
static inline ssize_t read_wrapper_global(void) {
    char buf[256];
    return read(pipe_fds_global[0], buf, 256);
}
#define FUN_00011460 read_wrapper_global
#define FUN_00011750 socket
#define FUN_000113f0 setsockopt
#define FUN_00011650 bind
#define FUN_00011730 listen
#define FUN_00011610 shm_open
#define FUN_00011740 shmat
#define FUN_000114a0 shmctl
#define FUN_00011540 shmdt
#define FUN_00011700 shmdt
#define FUN_000115c0 shmctl
#define FUN_000114d0 signal
#define FUN_00011500 raise
#define FUN_000114f0 sleep
#define FUN_00011590 usleep
#define FUN_00011530 wait
// pthread function wrappers (returning int where needed)
#define FUN_00011450 main
#define FUN_00011710 pthread_create
#define FUN_00011760 pthread_join
#define FUN_00011770 pthread_cancel
#define FUN_00011420 sprintf
#define FUN_00011410 raise
#define FUN_00011510 __stack_chk_fail

// Data segments (strings)
char DAT_00014011[] = "Lib";
char DAT_00014015[] = "Hello";
char DAT_00014019[] = "Test";
char DAT_0001401d[] = "Test";
char DAT_00014021[] = "Hello";
char DAT_00014048[] = "r";
char DAT_00014056[] = "w";
char DAT_0001409d[] = "strcpy: %u\n";
char DAT_000140b8[] = "strcmp: %u\n";
char DAT_000140d3[] = "strlen: %u\n";
char DAT_000140ef[] = "memcpy: %u\n";
char DAT_0001410b[] = "memcmp: %u\n";
char DAT_00014127[] = "printf: %u\n";
char DAT_00014143[] = "scanf: %u\n";
char DAT_00014160[] = "fopen/fclose: %u\n";
char DAT_0001417c[] = "fread/fwrite: %u\n";
char DAT_00014198[] = "malloc/free: %u\n";
char DAT_000141b4[] = "memset: %u\n";
char DAT_000141cf[] = "strchr/strstr: %u\n";
char DAT_00014211[] = "Linux Syscall:\n";
char DAT_0001422c[] = "  open/close: %u\n";
char DAT_00014248[] = "  Win32 API: %u\n";
char DAT_00014264[] = "  fork/exec: %u\n";
char DAT_00014280[] = "  pipe: %u\n";
char DAT_0001429c[] = "  socket: %u\n";
char DAT_000142b8[] = "  shm: %u\n";
char DAT_000142d4[] = "  signal: %u\n";
char DAT_000142fa[] = "Thread Concurrency Tests:\n";
char DAT_00014318[] = "  pthread_create: %u\n";
char DAT_00014334[] = "  pthread_join: %u\n";
char DAT_00014351[] = "  mutex_lock: %u\n";
char DAT_0001436d[] = "  condition_var: %u\n";
char DAT_00014389[] = "  atomic_ops: %u\n";
char DAT_000143a5[] = "  thread_local: %u\n";
char DAT_000143c4[] = "\nStandard Library Tests:\n";

// Function: _start @ 0x11790
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011450(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x117bc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x117c0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x117d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11810
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11860
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x57b3) == '\0') {
 if (*(int *)(unaff_EDI + 0x5783) != 0) {
 FUN_000113e0(*(unsigned int *)(unaff_EDI + 0x5797));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x57b7);
 while (uVar1 < ((unaff_EDI + 0x55af) - (unaff_EDI + 0x55ab) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x57b7) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x55ab + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x57b7);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x57b3) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x118f9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x118fd
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: signal_handler @ 0x11901
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x11924
unsigned int thread_sum(int *param_1)
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

// Function: thread_compute @ 0x11958
void thread_compute(int *param_1)
{
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)FUN_000115e0(4);
 *piVar2 = iVar1 * iVar1;
 return;
}

// Function: thread_increment @ 0x11984
unsigned int thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 FUN_00011550(&counter_mutex);
 shared_counter = shared_counter + 1;
 FUN_00011400(&counter_mutex);
 FUN_00011590(1000);
 iVar2 = iVar2 + 1;
 } while (iVar1 != iVar2);
 }
 return 0;
}

// Function: consumer_thread @ 0x119f2
void consumer_thread(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 FUN_00011550(&cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 FUN_000114c0(cond,&cond_mutex);
 uVar1 = data;
 }
 FUN_00011400(&cond_mutex);
 puVar2 = (unsigned int *)FUN_000115e0(4);
 *puVar2 = uVar1;
 return;
}

// Function: producer_thread @ 0x11a6b
unsigned int producer_thread(void)
{
 FUN_000114f0(1);
 FUN_00011550(&cond_mutex);
 data = 0x2a;
 ready = 1;
 FUN_000115d0(cond);
 FUN_00011400(&cond_mutex);
 return 0;
}

// Function: thread_atomic_increment @ 0x11ac9
unsigned int thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 if (0 < *param_1) {
 iVar2 = 0;
 do {
 LOCK();
 iVar1 = atomic_counter + 1;
 UNLOCK();
 atomic_counter = iVar2 + 1000;
 LOCK();
 if (iVar2 != iVar1) {
 atomic_counter = iVar1;
 }
 UNLOCK();
 iVar2 = iVar2 + 1;
 } while (*param_1 != iVar2);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x11b10
unsigned int thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: thread_tls_test @ 0x11b34
void thread_tls_test(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *in_GS_OFFSET;
 iVar2 = in_GS_OFFSET[-9];
 iVar1 = iVar2 + 0x32;
 in_GS_OFFSET[-9] = iVar1;
 FUN_000116a0(*in_GS_OFFSET + -0x20,param_1,0x1f,0x11b40);
 piVar3 = (int *)FUN_000115e0(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return;
}

// Function: param_strcpy @ 0x11b8b
void param_strcpy(unsigned int param_1,unsigned int param_2)
{
 FUN_000115b0(param_1,param_2);
 FUN_00011630(param_1);
 return;
}

// Function: call_strcpy @ 0x11bbb
void call_strcpy(void)
{
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 param_strcpy(local_30,"HelloLib");
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_strcmp @ 0x11c03
int param_strcmp(unsigned int param_1,unsigned int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011440(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 return iVar2;
}

// Function: call_strcmp @ 0x11c33
int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_strcmp(&DAT_00014015,&DAT_00014011);
 iVar2 = param_strcmp(&DAT_00014019,&DAT_00014019);
 iVar3 = param_strcmp(&DAT_00014021,&DAT_0001401d);
 return iVar3 + iVar1 + iVar2;
}

// Function: param_strlen @ 0x11c90
void param_strlen(unsigned int param_1)
{
 FUN_00011630(param_1);
 return;
}

// Function: call_strlen @ 0x11cb1
unsigned int call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x11cbb
unsigned int param_memcpy(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 FUN_00011490(param_1,param_2,param_3);
 return param_3;
}

// Function: call_memcpy @ 0x11ce9
int call_memcpy(void)
{
 int in_GS_OFFSET;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 int local_24;
 unsigned int local_20;
 int local_1c;
 unsigned int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_38 = 10;
 local_34 = 0x14;
 local_30 = 0x1e;
 local_2c = 0x28;
 local_28 = 0x32;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 param_memcpy(&local_24,&local_38,0x14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_1c + local_24 + local_14;
 }
 __stack_chk_fail_local();
}

// Function: param_memcmp @ 0x11d82
int param_memcmp(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_000114e0(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 return iVar2;
}

// Function: call_memcmp @ 0x11db6
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_printf @ 0x11e53
void param_printf(unsigned int param_1,unsigned int param_2)
{
 FUN_000116f0(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x11e81
void call_printf(void)
{
 param_printf(0x2a,"Test");
 return;
}

// Function: param_scanf @ 0x11ea4
int param_scanf(unsigned int param_1)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011660(param_1,"%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_14;
 }
 __stack_chk_fail_local();
}

// Function: call_scanf @ 0x11f0b
void call_scanf(void)
{
 param_scanf("123,456");
 return;
}

// Function: param_fopen_fclose @ 0x11f2c
unsigned int param_fopen_fclose(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011670(param_1,&DAT_00014048);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = FUN_000116c0(iVar1);
 FUN_000114b0(iVar1);
 }
 return uVar2;
}

// Function: call_fopen_fclose @ 0x11f7d
uint call_fopen_fclose(void)
{
 int iVar1;
 iVar1 = param_fopen_fclose("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_fread_fwrite @ 0x11fa4
int param_fread_fwrite(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char local_40 [32];
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011670(param_1,&DAT_00014056);
 if (iVar1 == 0) {
 iVar1 = -1;
 }
 else {
 iVar2 = FUN_00011570("BinBench Test Data",1,0x12,iVar1);
 if (iVar2 == 0x12) {
 FUN_00011520(iVar1,0,SEEK_SET);
 iVar2 = FUN_000115a0(local_40,1,0x12,iVar1);
 local_40[iVar2] = 0;
 FUN_000114b0(iVar1);
 FUN_00011560(param_1);
 if (iVar2 == 0x12) {
 iVar1 = FUN_00011440(local_40,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 FUN_000114b0(iVar1);
 iVar1 = -2;
 }
 }
 if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 // Stack check failed - use abort instead of calling undefined function
 exit(1);
}

// Function: call_fread_fwrite @ 0x12092
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x120b3
int param_malloc_free(int param_1)
{
 int *piVar1;
 int iVar2;
 int *piVar3;
 piVar1 = (int *)FUN_000115e0(param_1 * 4);
 if (piVar1 == (int *)0x0) {
 iVar2 = -1;
 }
 else {
 if (param_1 != 0) {
 iVar2 = 0;
 piVar3 = piVar1;
 do {
 *piVar3 = iVar2;
 iVar2 = iVar2 + 10;
 piVar3 = piVar3 + 1;
 } while (iVar2 != param_1 * 10);
 }
 iVar2 = *piVar1 + piVar1[param_1 + -1];
 FUN_00011480(piVar1);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x12123
void call_malloc_free(void)
{
 param_malloc_free(10);
 return;
}

// Function: param_memset @ 0x12135
int param_memset(byte *param_1,int param_2)
{
 byte *pbVar1;
 int iVar2;
 FUN_00011680(param_1,0,param_2,0x12141);
 if (param_2 == 0) {
 iVar2 = 0;
 }
 else {
 pbVar1 = param_1 + param_2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + (uint)*param_1;
 param_1 = param_1 + 1;
 } while (param_1 != pbVar1);
 }
 return iVar2;
}

// Function: call_memset @ 0x12185
int call_memset(void)
{
 int *piVar1;
 int in_GS_OFFSET;
 int local_38 [10];
 int local_10 [4];
 local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = local_38;
 do {
 *piVar1 = 0xff;
 piVar1 = piVar1 + 1;
 } while (piVar1 != local_10);
 param_memset(local_38,0x28);
 if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_38[9] + local_38[0];
 }
 __stack_chk_fail_local();
}

// Function: param_strchr_strstr @ 0x121dd
int param_strchr_strstr(int param_1,char param_2,unsigned int param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = FUN_00011620(param_1,(int)param_2);
 iVar3 = iVar1 - param_1;
 if (iVar1 == 0) {
 iVar3 = -1;
 }
 iVar2 = FUN_00011430(param_1,param_3);
 iVar1 = -1;
 if (iVar2 != 0) {
 iVar1 = iVar2 - param_1;
 }
 return iVar1 + iVar3;
}

// Function: call_strchr_strstr @ 0x12234
void call_strchr_strstr(void)
{
 param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 return;
}

// Function: test_standard_library_functions @ 0x1225e
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 FUN_000115f0(&DAT_000143c4);
 uVar1 = call_strcpy();
 FUN_000116f0(1,&DAT_0001409d,uVar1);
 uVar1 = call_strcmp();
 FUN_000116f0(1,&DAT_000140b8,uVar1);
 uVar1 = call_strlen();
 FUN_000116f0(1,&DAT_000140d3,uVar1);
 uVar1 = call_memcpy();
 FUN_000116f0(1,&DAT_000140ef,uVar1);
 uVar1 = call_memcmp();
 FUN_000116f0(1,&DAT_0001410b,uVar1);
 uVar1 = call_printf();
 FUN_000116f0(1,&DAT_00014127,uVar1);
 uVar1 = call_scanf();
 FUN_000116f0(1,&DAT_00014143,uVar1);
 uVar1 = call_fopen_fclose();
 FUN_000116f0(1,&DAT_00014160,uVar1);
 uVar1 = call_fread_fwrite();
 FUN_000116f0(1,&DAT_0001417c,uVar1);
 uVar1 = call_malloc_free();
 FUN_000116f0(1,&DAT_00014198,uVar1);
 uVar1 = call_memset();
 FUN_000116f0(1,&DAT_000141b4,uVar1);
 uVar1 = call_strchr_strstr();
 FUN_000116f0(1,&DAT_000141cf,uVar1);
 return;
}

// Function: param_linux_syscall @ 0x12396
int param_linux_syscall(unsigned int param_1)
{
 int iVar1;
 int *piVar2;
 unsigned int uVar3;
 uVar3 = 0;
 iVar1 = FUN_000116b0(5,param_1,0);
 if (iVar1 < 0) {
 piVar2 = (int *)FUN_00011690(-iVar1);
 iVar1 = -*piVar2;
 }
 else {
 FUN_000116b0(6,iVar1,uVar3);
 }
 return iVar1;
}

// Function: call_linux_syscall @ 0x123e1
uint call_linux_syscall(void)
{
 int iVar1;
 iVar1 = param_linux_syscall("/etc/passwd");
 return iVar1 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x12408
unsigned int param_win32_api(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 char local_68 [44];
 int local_3c;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011600(param_1,local_68);
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0x2a;
 if (local_3c < 1) {
 uVar2 = 0xfffffffe;
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_win32_api @ 0x1246c
void call_win32_api(void)
{
 param_win32_api("/etc/passwd");
 return;
}

// Function: param_fork_exec @ 0x1248d
uint param_fork_exec(uint *param_1,unsigned int param_2)
{
 uint *puVar1;
 int iVar2;
 uint uVar3;
 uint **ppuVar4;
 int in_GS_OFFSET;
 uint *local_2c;
 uint *puStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 char auStack_1c [8];
 uint local_14;
 unsigned int local_10;
 ppuVar4 = (uint **)auStack_1c;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 uStack_20 = 0x124bb;
 puVar1 = (uint *)FUN_00011720();
 if (-1 < (int)puVar1) {
 if (puVar1 != (uint *)0x0) {
 uStack_24 = 0;
 puStack_28 = &local_14;
 local_2c = puVar1;
 iVar2 = FUN_00011580();
 uVar3 = 0xfffffffe;
 ppuVar4 = (uint **)auStack_1c;
 if ((-1 < iVar2) &&
 (uVar3 = local_14 >> 8 & 0xff, ppuVar4 = (uint **)auStack_1c, (local_14 & 0x7f) != 0)) {
 uVar3 = 0xfffffffd;
 ppuVar4 = (uint **)auStack_1c;
 }
 goto LAB_000124f1;
 }
 uStack_20 = 0;
 uStack_24 = param_2;
 puStack_28 = param_1;
 ppuVar4 = &local_2c;
 local_2c = param_1;
 FUN_000116d0("/bin/true", "/bin/true", NULL);
 local_2c = (uint *)0x7f;
 FUN_00011470(0);
 }
 uVar3 = 0xffffffff;
LAB_000124f1:
 if (*(int *)((int)ppuVar4 + 0xc) == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 *(void **)((int)ppuVar4 + -4) = call_fork_exec;
 __stack_chk_fail_local();
}

// Function: call_fork_exec @ 0x12527
int call_fork_exec(void)
{
 int iVar1;
 iVar1 = param_fork_exec("/bin/true",0);
 return (-(uint)(iVar1 == 0) & 0x2b) - 1;
}

// Function: param_pipe_communication @ 0x12555
unsigned int param_pipe_communication(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int **ppuVar3;
 char *puVar4;
 int in_GS_OFFSET;
 unsigned int **local_4c;
 char *pcStack_48;
 unsigned int local_44;
 unsigned int local_40;
 char auStack_3c [4];
 unsigned int *local_38;
 unsigned int *local_34;
 unsigned int local_10;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 local_4c = &local_38;
 iVar1 = FUN_000116e0();
 ppuVar3 = (unsigned int **)auStack_3c;
 puVar4 = auStack_3c;
 if (iVar1 < 0) {
 uVar2 = 0xffffffff;
 }
 else {
 local_40 = 0x1258f;
 iVar1 = FUN_00011720();
 if (iVar1 < 0) {
 uVar2 = 0xfffffffe;
 puVar4 = auStack_3c;
 }
 else {
 if (iVar1 == 0) {
 local_4c = (unsigned int **)local_38;
 FUN_00011780();
 local_44 = 9;
 pcStack_48 = "HelloPipe";
 local_4c = (unsigned int **)local_34;
 FUN_00011640();
 ppuVar3 = &local_4c;
 local_4c = (unsigned int **)local_34;
 FUN_00011780();
 local_4c = (unsigned int **)0x0;
 FUN_00011470(0);
 }
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 8);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x125de;
 FUN_00011780();
 *(unsigned int *)((int)ppuVar3 + -8) = 0x1f;
 *(char **)((int)ppuVar3 + -0xc) = (char *)((int)ppuVar3 + 0xc);
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 4);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x125f1;
 iVar1 = FUN_00011460();
 *(char *)((int)ppuVar3 + iVar1 + 0xc) = 0;
 *(unsigned int *)((int)ppuVar3 + -0x10) = *(unsigned int *)((int)ppuVar3 + 4);
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12604;
 FUN_00011780();
 *(unsigned int *)((int)ppuVar3 + -0x10) = 0;
 *(unsigned int *)((int)ppuVar3 + -0x14) = 0x12610;
 FUN_00011530();
 uVar2 = 0x2a;
 puVar4 = (char *)ppuVar3;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
 }
 if (*(int *)(puVar4 + 0x2c) == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 *(void **)(puVar4 + -4) = call_pipe_communication;
 __stack_chk_fail_local();
}

// Function: call_pipe_communication @ 0x12648
void call_pipe_communication(void)
{
 param_pipe_communication();
 return;
}

// Function: param_socket_create @ 0x12658
unsigned int param_socket_create(void)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int in_GS_OFFSET;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_00011750(2,1,0);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 local_24 = 1;
 iVar2 = FUN_000113f0(iVar1,1,2,&local_24,4);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffe;
 }
 else {
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_20 = 2;
 iVar2 = FUN_00011650(iVar1,&local_20,0x10);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffd;
 }
 else {
 iVar2 = FUN_00011730(iVar1,5);
 if (iVar2 < 0) {
 FUN_00011780(iVar1);
 uVar3 = 0xfffffffc;
 }
 else {
 FUN_00011780(iVar1);
 uVar3 = 0x2a;
 }
 }
 }
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar3;
 }
 __stack_chk_fail_local();
}

// Function: call_socket_create @ 0x1276c
void call_socket_create(void)
{
 param_socket_create();
 return;
}

// Function: param_shmget_shmat @ 0x1277c
unsigned int param_shmget_shmat(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 iVar1 = FUN_00011610("/tmp/binbench_shm",0x42,0x1b6);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 FUN_00011780(iVar1);
 iVar1 = FUN_00011740("/tmp/binbench_shm",0x2a);
 if (iVar1 < 0) {
 uVar3 = 0xffffffff;
 }
 else {
 iVar1 = FUN_000114a0(iVar1,0x1000,0x3b6);
 if (iVar1 < 0) {
 uVar3 = 0xfffffffe;
 }
 else {
 puVar2 = (unsigned int *)FUN_00011540(iVar1,0,0);
 if (puVar2 == (unsigned int *)0xffffffff) {
 uVar3 = 0xfffffffd;
 }
 else {
 *puVar2 = 0x72616853;
 puVar2[1] = 0x654d6465;
 puVar2[2] = 0x79726f6d;
 *(char *)(puVar2 + 3) = 0;
 uVar3 = FUN_00011630(puVar2);
 FUN_00011700(puVar2);
 FUN_000115c0(iVar1,0,0);
 }
 }
 }
 }
 return uVar3;
}

// Function: call_shmget_shmat @ 0x12865
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

// Function: param_signal_handling @ 0x12884
unsigned int param_signal_handling(void)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_000114d0(10,signal_handler);
 if (iVar1 == -1) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = FUN_000114d0(0xe,signal_handler);
 if (iVar1 == -1) {
 uVar2 = 0xfffffffe;
 }
 else {
 signal_received = 0;
 FUN_00011410(10);
 if (signal_received == 0) {
 iVar1 = 1000;
 do {
 FUN_00011590(1000);
 if (signal_received != 0) break;
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffd;
 }
 else if (signal_number == 10) {
 signal_received = 0;
 FUN_00011500(1);
 if (signal_received == 0) {
 iVar1 = 2000;
 do {
 FUN_00011590(1000);
 if (signal_received != 0) break;
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 if (signal_received == 0) {
 uVar2 = 0xfffffffb;
 }
 else if (signal_number == 0xe) {
 FUN_000114d0(10,0);
 FUN_000114d0(0xe,0);
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

// Function: call_signal_handling @ 0x129db
void call_signal_handling(void)
{
 param_signal_handling();
 return;
}

// Function: test_system_calls @ 0x129eb
void test_system_calls(void)
{
 unsigned int uVar1;
 FUN_000115f0(&DAT_00014211);
 uVar1 = call_linux_syscall();
 FUN_000116f0(1,&DAT_0001422c,uVar1);
 uVar1 = call_win32_api();
 FUN_000116f0(1,&DAT_00014248,uVar1);
 uVar1 = call_fork_exec();
 FUN_000116f0(1,&DAT_00014264,uVar1);
 uVar1 = param_pipe_communication();
 FUN_000116f0(1,&DAT_00014280,uVar1);
 uVar1 = param_socket_create();
 FUN_000116f0(1,&DAT_0001429c,uVar1);
 uVar1 = call_shmget_shmat();
 FUN_000116f0(1,&DAT_000142b8,uVar1);
 uVar1 = param_signal_handling();
 FUN_000116f0(1,&DAT_000142d4,uVar1);
 return;
}

// Function: param_pthread_create @ 0x12ab0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = param_1;
 iVar1 = FUN_00011710(&local_1c,0,thread_compute,&local_18);
 if (iVar1 == 0) {
 FUN_00011760(local_1c,&local_14);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_pthread_create @ 0x12b3a
void call_pthread_create(void)
{
 param_pthread_create(7);
 return;
}

// Function: param_pthread_join @ 0x12b4c
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 unsigned int *puVar4;
 int *piVar5;
 unsigned int *puVar6;
 int in_GS_OFFSET;
 unsigned int local_50 [3];
 int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20 [4];
 local_20[0] = *(int *)(in_GS_OFFSET + 0x14);
 local_44 = 1;
 local_40 = 10;
 local_3c = 0;
 local_38 = 0xb;
 local_34 = 0x14;
 local_30 = 0;
 local_2c = 0x15;
 local_28 = 0x1e;
 local_24 = 0;
 puVar6 = local_50;
 piVar3 = &local_44;
 puVar4 = puVar6;
 piVar5 = piVar3;
 do {
 iVar1 = FUN_00011710(puVar4,0,thread_sum,piVar5);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_00012c1e;
 }
 puVar4 = puVar4 + 1;
 piVar5 = piVar5 + 3;
 } while (piVar5 != local_20);
 iVar1 = 0;
 do {
 iVar2 = FUN_00011760(*puVar6,0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 iVar1 = iVar1 + piVar3[2];
 puVar6 = puVar6 + 1;
 piVar3 = piVar3 + 3;
 } while (piVar3 != local_20);
LAB_00012c1e:
 if (local_20[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: call_pthread_join @ 0x12c48
void call_pthread_join(void)
{
 param_pthread_join();
 return;
}

// Function: param_mutex_lock @ 0x12c58
unsigned int param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 bool bVar6;
 iVar1 = FUN_000115e0(param_1 << 2);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < param_1) {
 iVar2 = 0;
 iVar5 = iVar1;
 do {
 iVar4 = iVar2;
 iVar2 = FUN_00011710(iVar5,0,thread_increment,&param_2);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 return 0xfffffffe;
 }
 iVar2 = iVar4 + 1;
 iVar5 = iVar5 + 4;
 } while (param_1 != iVar2);
 iVar2 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar2 * 4),0);
 bVar6 = iVar4 != iVar2;
 iVar2 = iVar2 + 1;
 } while (bVar6);
 }
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (shared_counter != param_1 * param_2) {
 uVar3 = 0xfffffffd;
 }
 }
 return uVar3;
}

// Function: call_mutex_lock @ 0x12d49
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: param_condition_variable @ 0x12d60
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int *local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 ready = 0;
 data = 0;
 iVar1 = FUN_00011710(&local_18,0,consumer_thread,0);
 if (iVar1 == 0) {
 iVar1 = FUN_00011710(&local_1c,0,producer_thread,0);
 if (iVar1 == 0) {
 FUN_00011760(local_18,&local_14);
 FUN_00011760(local_1c,0);
 uVar2 = *local_14;
 FUN_00011480(local_14);
 }
 else {
 FUN_00011770(local_18);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar2;
 }
 __stack_chk_fail_local();
}

// Function: call_condition_variable @ 0x12e33
void call_condition_variable(void)
{
 param_condition_variable();
 return;
}

// Function: param_atomic_ops @ 0x12e43
unsigned int param_atomic_ops(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int in_GS_OFFSET;
 unsigned int local_24;
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 << 2);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (param_1 < 1) {
 iVar5 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 if (iVar5 == 0) {
 FUN_00011760(local_24,0);
 }
 }
 else {
 iVar4 = 0;
 iVar5 = iVar1;
 do {
 iVar2 = FUN_00011710(iVar5,0,thread_atomic_increment,&stack0x00000008);
 if (iVar2 != 0) {
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00012f35;
 }
 iVar4 = iVar4 + 1;
 iVar5 = iVar5 + 4;
 } while (param_1 != iVar4);
 iVar4 = FUN_00011710(&local_24,0,thread_atomic_load_store,0);
 iVar5 = 0;
 if (iVar4 == 0) {
 FUN_00011760(local_24,0);
 }
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar5 * 4),0);
 iVar5 = iVar5 + 1;
 } while (iVar5 < param_1);
 }
 iVar5 = atomic_counter;
 FUN_00011480(iVar1);
 uVar3 = 0x2a;
 if (iVar5 < 1) {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00012f35:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: call_atomic_ops @ 0x12fbc
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Function: param_thread_local_storage @ 0x12fd3
unsigned int param_thread_local_storage(int param_1)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 unsigned int *puVar7;
 int iVar8;
 int in_GS_OFFSET;
 bool bVar9;
 int *local_24;
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = FUN_000115e0(param_1 * 4);
 puVar2 = (unsigned int *)FUN_000115e0(param_1 * 4);
 if ((iVar1 == 0) || (puVar2 == (unsigned int *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar8 = 0;
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 do {
 iVar6 = iVar5;
 uVar3 = FUN_000115e0(0x10);
 puVar2[iVar6] = uVar3;
 FUN_00011420(uVar3,0x10,1,0x10,"Thread-%d",iVar6);
 iVar5 = iVar6 + 1;
 } while (param_1 != iVar6 + 1);
 iVar5 = iVar1;
 iVar8 = 0;
 do {
 iVar4 = FUN_00011710(iVar5,0,thread_tls_test,puVar2[iVar8]);
 if (iVar4 != 0) {
 if (-1 < iVar8) {
 puVar7 = puVar2;
 do {
 FUN_00011480(*puVar7);
 puVar7 = puVar7 + 1;
 } while (puVar7 != puVar2 + iVar8 + 1);
 }
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 uVar3 = 0xfffffffe;
 goto LAB_00013143;
 }
 iVar5 = iVar5 + 4;
 bVar9 = iVar6 != iVar8;
 iVar8 = iVar8 + 1;
 } while (bVar9);
 iVar5 = 0;
 iVar8 = 0;
 iVar4 = 0;
 do {
 FUN_00011760(*(unsigned int *)(iVar1 + iVar4 * 4),&local_24);
 iVar5 = iVar5 + *local_24;
 iVar8 = iVar8 + local_24[1];
 FUN_00011480(local_24);
 FUN_00011480(puVar2[iVar4]);
 bVar9 = iVar6 != iVar4;
 iVar4 = iVar4 + 1;
 } while (bVar9);
 }
 FUN_00011480(puVar2);
 FUN_00011480(iVar1);
 if ((param_1 * 100 - iVar5 == 0) && (param_1 * 0x96 - iVar8 == 0)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00013143:
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar3;
}

// Function: call_thread_local_storage @ 0x131bb
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x131cd
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 FUN_000115f0(&DAT_000142fa);
 uVar1 = call_pthread_create();
 FUN_000116f0(1,&DAT_00014318,uVar1);
 uVar1 = param_pthread_join();
 FUN_000116f0(1,&DAT_00014334,uVar1);
 uVar1 = call_mutex_lock();
 FUN_000116f0(1,&DAT_00014351,uVar1);
 uVar1 = param_condition_variable();
 FUN_000116f0(1,&DAT_0001436d,uVar1);
 uVar1 = call_atomic_ops();
 FUN_000116f0(1,&DAT_00014389,uVar1);
 uVar1 = call_thread_local_storage();
 FUN_000116f0(1,&DAT_000143a5,uVar1);
 return;
}

// Function: main @ 0x1327b
unsigned int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x1329b
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x1329f
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x132a3
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x132b0
void __stack_chk_fail_local(void)
{
 FUN_00011510();
 return;
}

// Function: __do_global_ctors_aux @ 0x132d0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1331c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

