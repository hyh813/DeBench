/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef unsigned char byte;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>

typedef int pid_t;
#define __pid_t pid_t

// Thread and sync global variables
volatile int signal_received = 0;
int signal_number = 0;
int data = 0;
int ready = 0;
int shared_counter = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

// Lock/unlock macros for atomic operations
#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)

// Other globals
char completed_0 = 0;
void *__dso_handle = NULL;

// Data symbols from decompilation
static char DAT_0010400d[] = "test";
static char DAT_00104011[] = "temp";
static char DAT_00104015[] = "data";
static char DAT_00104019[] = "demo";
static char DAT_0010401d[] = "demo";
static char DAT_00104099[] = "Testing Standard Library Functions:\n";
static char DAT_001040bd[] = "  strcpy: %d\n";
static char DAT_001040d8[] = "  strcmp: %d\n";
static char DAT_001040f3[] = "  strlen: %d\n";
static char DAT_0010410f[] = "  memcpy: %d\n";
static char DAT_0010412b[] = "  memcmp: %d\n";
static char DAT_00104147[] = "  printf: %d\n";
static char DAT_00104163[] = "  scanf: %d\n";
static char DAT_00104180[] = "  fopen_fclose: %d\n";
static char DAT_0010419c[] = "  fread_fwrite: %d\n";
static char DAT_001041b8[] = "  malloc_free: %d\n";
static char DAT_001041d4[] = "  memset: %d\n";
static char DAT_001041ef[] = "  strchr_strstr: %d\n";
static char DAT_0010423e[] = "Testing System Calls:\n";
static char DAT_00104259[] = "  linux_syscall: %d\n";
static char DAT_00104275[] = "  win32_api: %d\n";
static char DAT_00104291[] = "  fork_exec: %d\n";
static char DAT_001042ad[] = "  pipe_communication: %d\n";
static char DAT_001042c9[] = "  socket_create: %d\n";
static char DAT_001042e5[] = "  shmget_shmat: %d\n";
static char DAT_00104301[] = "  signal_handling: %d\n";
static char DAT_00104327[] = "Testing Thread Concurrency:\n";
static char DAT_00104345[] = "  pthread_create: %d\n";
static char DAT_00104361[] = "  pthread_join: %d\n";
static char DAT_0010437e[] = "  mutex_lock: %d\n";
static char DAT_0010439a[] = "  condition_variable: %d\n";
static char DAT_001043b6[] = "  atomic_ops: %d\n";
static char DAT_001043d2[] = "  thread_local_storage: %d\n";
static int DAT_00104400[] = {1, 5, 0, 6, 10, 0, 11, 15, 0};

// Type definitions
typedef void *(*__start_routine)(void *);

// Union for decompiler's bitfield access pattern
typedef union {
    struct {
        uint64_t _0_8_;
        uint64_t _8_8_;
    } s;
    char bytes[16];
} multi_return_t;

// Decompiled by BinaryAI
// SHA256: eba5ffeb8acb26e429d1289437c456b9ce4b2ae37fc916aa29f56693928cf3c1



// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 return;
}



// Function: <EXTERNAL>::__cxa_finalize @ 0x1023a0 (using standard library)

// Function: <EXTERNAL>::__snprintf_chk @ 0x1023b0 (using standard library)

// Function: <EXTERNAL>::raise @ 0x1023c0 (using standard library)

// Function: <EXTERNAL>::free @ 0x1023d0 (using standard library)

// Function: <EXTERNAL>::__errno_location @ 0x1023e0 (using standard library)

// Function: <EXTERNAL>::unlink @ 0x1023f0 (removed - using standard library)

// Function: <EXTERNAL>::strncpy @ 0x102400 (removed - using standard library)

// Function: <EXTERNAL>::_exit @ 0x102410 (using standard library)

// Function: <EXTERNAL>::strcpy @ 0x102420 (removed - using standard library)

// Function: <EXTERNAL>::puts @ 0x102430 (removed - using standard library)

// Function: <EXTERNAL>::fread @ 0x102440 (using standard library)

// Function: <EXTERNAL>::setsockopt @ 0x102450 (using standard library)

// Function: <EXTERNAL>::shmdt @ 0x102460 (using standard library)

// Function: <EXTERNAL>::write @ 0x102470 (using standard library)

// Function: <EXTERNAL>::pthread_cond_wait @ 0x102480 (using standard library)

// Function: <EXTERNAL>::fclose @ 0x102490 (using standard library)

// Function: <EXTERNAL>::strlen @ 0x1024a0 (using standard library)

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1024b0 (using standard library)

// Function: <EXTERNAL>::strchr @ 0x1024c0 (using standard library)

// Function: <EXTERNAL>::rewind @ 0x1024d0 (using standard library)

// Function: <EXTERNAL>::alarm @ 0x1024e0 (using standard library)

// Function: <EXTERNAL>::close @ 0x1024f0 (using standard library)

// Function: <EXTERNAL>::pipe @ 0x102500 (using standard library)

// Function: <EXTERNAL>::read @ 0x102510 (using standard library)

// Function: <EXTERNAL>::memcmp @ 0x102520 (using standard library)

// Function: <EXTERNAL>::pthread_cond_signal @ 0x102530 (using standard library)

// Function: <EXTERNAL>::strcmp @ 0x102540 (using standard library)

// Function: <EXTERNAL>::signal @ 0x102550 (using standard library)

// Function: <EXTERNAL>::syscall @ 0x102560 (using standard library)

// Function: <EXTERNAL>::stat @ 0x102570 (using standard library)

// Function: <EXTERNAL>::fileno @ 0x102580 (using standard library)

// Function: <EXTERNAL>::pthread_mutex_unlock @ 0x102590 (using standard library)

// Function: <EXTERNAL>::malloc @ 0x1025a0 (using standard library)

// Function: <EXTERNAL>::__isoc99_sscanf @ 0x1025b0 (using standard library)

#include <stdarg.h>
#include <stdbool.h>

// Function: <EXTERNAL>::listen @ 0x1025c0 (using standard library)

// Function: <EXTERNAL>::__printf_chk @ 0x1025d0 (using standard library)

// Function: <EXTERNAL>::bind @ 0x1025e0 (using standard library)

// Function: <EXTERNAL>::pthread_create @ 0x1025f0 (using standard library)

// Function: <EXTERNAL>::waitpid @ 0x102600 (using standard library)

// Function: <EXTERNAL>::open @ 0x102610 (using standard library)

// Function: <EXTERNAL>::shmctl @ 0x102620 (using standard library)

// Function: <EXTERNAL>::fopen @ 0x102630 (using standard library)

// Function: <EXTERNAL>::shmat @ 0x102640 (using standard library)

// Function: <EXTERNAL>::shmget @ 0x102650 (using standard library)

// Function: <EXTERNAL>::fwrite @ 0x102660 (using standard library)

// Function: <EXTERNAL>::ftok @ 0x102670 (using standard library)

// Function: <EXTERNAL>::pthread_join @ 0x102680 (using standard library)

// Function: <EXTERNAL>::execl @ 0x102690 (using standard library)

// Function: <EXTERNAL>::pthread_cancel @ 0x1026a0 (using standard library)

// Function: <EXTERNAL>::sleep @ 0x1026b0 (using standard library)

// Function: <EXTERNAL>::wait @ 0x1026c0 (using standard library)

// Function: <EXTERNAL>::fork @ 0x1026d0 (using standard library)

// Function: <EXTERNAL>::strstr @ 0x1026e0 (using standard library)

// Function: <EXTERNAL>::pthread_mutex_lock @ 0x1026f0 (using standard library)

// Function: <EXTERNAL>::usleep @ 0x102700 (using standard library)

// Function: <EXTERNAL>::socket @ 0x102710 (using standard library)

// Function: main @ 0x102720
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}









// Function: signal_handler @ 0x102829
void signal_handler(unsigned int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}

// Function: thread_sum @ 0x10283e
void *thread_sum(int *param_1)
{
 int iVar1;
 iVar1 = *param_1;
 param_1[2] = 0;
 for (; iVar1 <= param_1[1]; iVar1 = iVar1 + 1) {
 param_1[2] = param_1[2] + iVar1;
 }
 return NULL;
}

// Function: thread_compute @ 0x10285c
void *thread_compute(void *param)
{
 int iVar1;
 int *piVar2;
 iVar1 = *(int *)param;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}

// Function: thread_increment @ 0x102874
void *thread_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = *param_1;
 for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return NULL;
}

// Function: consumer_thread @ 0x1028c0
void *consumer_thread(void *param)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 (void)param;
 pthread_mutex_lock(&cond_mutex);
 while (uVar1 = data, ready == 0) {
 pthread_cond_wait(&cond,&cond_mutex);
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar2 = (unsigned int *)malloc(4);
 *puVar2 = uVar1;
 return puVar2;
}

// Function: producer_thread @ 0x102911
void *producer_thread(void *param)
{
 (void)param;
 sleep(1);
pthread_mutex_lock(&cond_mutex);
	data = 0x2a;
	ready = 1;
	(void)pthread_cond_signal(&cond);
	(void)pthread_mutex_unlock(&cond_mutex);
 return NULL;
}

// Function: thread_atomic_increment @ 0x10295b
void *thread_atomic_increment(int *param_1)
{
 int iVar1;
 int iVar2;
 for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
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
 }
 return NULL;
}

// Function: thread_atomic_load_store @ 0x102985
void *thread_atomic_load_store(void)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return NULL;
}

// Function: thread_tls_test @ 0x10299b
void *thread_tls_test(void *param_1)
{
 int iVar1;
 int iVar2;
 int *piVar3;
 void *in_FS_OFFSET;
 char *param_1_char = (char *)param_1;
 int local_24;
 char local_20 [32];
 iVar2 = 0;
 iVar1 = iVar2 + 0x32;
 local_24 = iVar1;
 strncpy(local_20,param_1_char,0x1f);
 local_20[0x1f] = '\0';
 (void)local_20;
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return piVar3;
}

// Function: param_strcpy @ 0x1029e5
void param_strcpy(char *param_1,char *param_2)
{
 char *__s;
 __s = strcpy(param_1,param_2);
 strlen(__s);
 return;
}

// Function: call_strcpy @ 0x1029f9
unsigned int call_strcpy(void)
{
 char local_30 [32];
 param_strcpy(local_30,"HelloLib");
 return 0x2a;
}

// Function: param_strcmp @ 0x102a3c
unsigned long long param_strcmp(char *param_1,char *param_2,unsigned long long param_3,unsigned long long param_4)
{
 int iVar1;
 unsigned long uVar2;
 multi_return_t auVar3;
 iVar1 = strcmp(param_1,param_2);
 uVar2 = 1;
 if (iVar1 < 1) {
 uVar2 = (unsigned long)-(uint)(iVar1 != 0);
 }
 auVar3.s._8_8_ = param_4;
 auVar3.s._0_8_ = uVar2;
 return auVar3.s._0_8_;
}

// Function: call_strcmp @ 0x102a5d
unsigned int call_strcmp(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned long long in_RAX;
 multi_return_t auVar4;
 iVar1 = param_strcmp(&DAT_00104011,&DAT_0010400d,0,0);
 iVar2 = param_strcmp(&DAT_00104015,&DAT_00104015,0,0);
 iVar3 = param_strcmp(&DAT_0010401d,&DAT_00104019,0,0);
 auVar4.s._0_8_ = iVar3 + iVar1 + iVar2;
 auVar4.s._8_8_ = in_RAX;
 return (unsigned int)auVar4.s._0_8_;
}

// Function: param_strlen @ 0x102aa5
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x102ab1
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102abb
long param_memcpy(char *param_1,char *param_2,long param_3)
{
 long lVar1;
 lVar1 = param_3;
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_2 = param_2 + 1;
 param_1 = param_1 + 1;
 }
 return lVar1;
}

// Function: call_memcpy @ 0x102ac8
int call_memcpy(void)
{
 long lVar1;
 int *piVar2;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned int local_28;
 int local_24 [4];
 int local_14;
 local_28 = 0x32;
 local_38 = 0x140000000a;
 local_30 = 0x280000001e;
 piVar2 = local_24;
 for (lVar1 = 5; lVar1 != 0; lVar1 = lVar1 + -1) {
 *piVar2 = 0;
 piVar2 = piVar2 + 1;
 }
 param_memcpy(local_24,&local_38,0x14);
 return local_24[2] + local_24[0] + local_14;
}

// Function: param_memcmp @ 0x102b49
unsigned long long param_memcmp(void *param_1,void *param_2,size_t param_3,unsigned long long param_4)
{
 int iVar1;
 unsigned long uVar2;
 multi_return_t auVar3;
 iVar1 = memcmp(param_1,param_2,param_3);
 uVar2 = 1;
 if (iVar1 < 1) {
 uVar2 = (unsigned long)-(uint)(iVar1 != 0);
 }
 auVar3.s._8_8_ = param_4;
 auVar3.s._0_8_ = uVar2;
 return auVar3.s._0_8_;
}

// Function: call_memcmp @ 0x102b6a
int call_memcmp(void)
{
 int iVar1;
 int iVar2;
 unsigned long long local_44;
 unsigned int local_3c;
 unsigned long long local_38;
 unsigned int local_30;
 unsigned long long local_2c;
 unsigned int local_24;
 local_3c = 3;
 local_30 = 4;
 local_24 = 3;
 local_44 = 0x200000001;
 local_38 = 0x200000001;
 local_2c = 0x200000001;
 iVar1 = (int)param_memcmp(&local_44,&local_38,0xc,0);
 iVar2 = (int)param_memcmp(&local_44,&local_2c,0xc,0);
 return iVar2 + iVar1;
}

// Function: param_printf @ 0x102bfc
void param_printf(unsigned int param_1,unsigned long long param_2)
{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}

// Function: call_printf @ 0x102c18
unsigned int call_printf(void)
{
 param_printf(0x2a,"Test");
 return 0x2a;
}

// Function: param_scanf @ 0x102c2a
int param_scanf(unsigned long long param_1)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf(param_1,"%d,%d",&local_18,&local_14);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = local_14 + local_18;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar2;
}

// Function: call_scanf @ 0x102c83
int call_scanf(void)
{
 return param_scanf("123,456");
}

// Function: param_fopen_fclose @ 0x102c90
unsigned long long
param_fopen_fclose(char *param_1,unsigned long long param_2,unsigned long long param_3,unsigned long long param_4)
{
 uint uVar1;
 FILE *__stream;
 multi_return_t auVar2;
 uVar1 = 0xffffffff;
 __stream = fopen(param_1,"r");
 if (__stream != (FILE *)0x0) {
 uVar1 = fileno(__stream);
 fclose(__stream);
 }
 auVar2.s._0_8_ = uVar1;
 auVar2.s._8_8_ = param_4;
 return auVar2.s._0_8_;
}

// Function: call_fopen_fclose @ 0x102ccb
unsigned int call_fopen_fclose(void)
{
 int iVar1;
 unsigned long long in_RAX;
 multi_return_t auVar2;
 iVar1 = (int)param_fopen_fclose("/etc/passwd",0,0,0);
 auVar2.s._0_8_ = (iVar1 >> 0x1f | 0x2a);
 auVar2.s._8_8_ = in_RAX;
 return (unsigned int)auVar2.s._0_8_;
}

// Function: param_fread_fwrite @ 0x102ce4
int param_fread_fwrite(char *param_1)
{
 int iVar1;
 FILE *__s;
 size_t sVar2;
 long in_FS_OFFSET;
 char local_50 [32];
 long local_30;
 local_30 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 iVar1 = -1;
 if (__s != (FILE *)0x0) {
 sVar2 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar2 == 0x12) {
 rewind(__s);
 sVar2 = fread(local_50,1,0x12,__s);
 local_50[sVar2] = '\0';
 fclose(__s);
 unlink(param_1);
 iVar1 = -3;
 if (sVar2 == 0x12) {
 iVar1 = strcmp(local_50,"BinBench Test Data");
 iVar1 = (-(uint)(iVar1 == 0) & 0x2d) - 3;
 }
 }
 else {
 fclose(__s);
 iVar1 = -2;
 }
 }
 if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1;
}

// Function: call_fread_fwrite @ 0x102dcd
int call_fread_fwrite(void)
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}

// Function: param_malloc_free @ 0x102ddd
int param_malloc_free(long param_1)
{
 int *__ptr;
 long lVar1;
 int iVar2;
 iVar2 = -1;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr != (int *)0x0) {
 for (lVar1 = 0; lVar1 != param_1; lVar1 = lVar1 + 1) {
 __ptr[lVar1] = (int)lVar1 * 10;
 }
 iVar2 = *__ptr + __ptr[param_1 + -1];
 free(__ptr);
 }
 return iVar2;
}

// Function: call_malloc_free @ 0x102e2b
int call_malloc_free(void)
{
 return param_malloc_free(10);
}

// Function: param_memset @ 0x102e36
int param_memset(char *param_1,long param_2)
{
 long lVar1;
 char *puVar2;
 int iVar3;
 iVar3 = 0;
 puVar2 = param_1;
 for (lVar1 = param_2; lVar1 != 0; lVar1 = lVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 for (lVar1 = 0; lVar1 != param_2; lVar1 = lVar1 + 1) {
 iVar3 = iVar3 + (uint)(byte)param_1[lVar1];
 }
 return iVar3;
}

// Function: call_memset @ 0x102e5e
int call_memset(void)
{
 long lVar1;
 int local_38 [10];
 lVar1 = 0;
 do {
 local_38[lVar1] = 0xff;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 10);
 param_memset(local_38,0x28);
 return param_memset(local_38,0x28);
}

// Function: param_strchr_strstr @ 0x102eb4
unsigned long long param_strchr_strstr(char *param_1,char param_2,char *param_3)
{
 unsigned long long in_RAX = 0;
 char *pcVar1;
 int iVar2;
 int iVar3;
 multi_return_t auVar4;
 pcVar1 = strchr(param_1,(int)param_2);
 iVar2 = (int)pcVar1 - (int)param_1;
 if (pcVar1 == (char *)0x0) {
 iVar2 = -1;
 }
 pcVar1 = strstr(param_1,param_3);
 iVar3 = -1;
 if (pcVar1 != (char *)0x0) {
 iVar3 = (int)pcVar1 - (int)param_1;
 }
 auVar4.s._0_8_ = (int)(iVar2 + iVar3);
 auVar4.s._8_8_ = in_RAX;
 return auVar4.s._0_8_;
}

// Function: call_strchr_strstr @ 0x102f04
unsigned long long call_strchr_strstr(void)
{
 unsigned long long in_RAX = 0;
 multi_return_t auVar1;
 auVar1.s._0_8_ = param_strchr_strstr("Hello BinBench Test",0x42,"Bench");
 auVar1.s._8_8_ = in_RAX;
 return auVar1.s._0_8_;
}

// Function: test_standard_library_functions @ 0x102f1d
void test_standard_library_functions(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(&DAT_00104099);
 uVar1 = call_strcpy();
 __printf_chk(1,&DAT_001040bd,uVar1);
 uVar1 = call_strcmp();
 __printf_chk(1,&DAT_001040d8,uVar1);
 __printf_chk(1,&DAT_001040f3,0xc);
 uVar1 = call_memcpy();
 __printf_chk(1,&DAT_0010410f,uVar1);
 uVar1 = call_memcmp();
 __printf_chk(1,&DAT_0010412b,uVar1);
 uVar1 = call_printf();
 __printf_chk(1,&DAT_00104147,uVar1);
 uVar1 = call_scanf();
 __printf_chk(1,&DAT_00104163,uVar1);
 uVar1 = call_fopen_fclose();
 __printf_chk(1,&DAT_00104180,uVar1);
 uVar1 = call_fread_fwrite();
 __printf_chk(1,&DAT_0010419c,uVar1);
 uVar1 = call_malloc_free();
 __printf_chk(1,&DAT_001041b8,uVar1);
 uVar1 = call_memset();
 __printf_chk(1,&DAT_001041d4,uVar1);
 uVar1 = call_strchr_strstr();
 __printf_chk(1,&DAT_001041ef,uVar1,in_RAX);
 return;
}

// Function: param_linux_syscall @ 0x10307b
int param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 int iVar3;
 uVar1 = syscall(2,param_1,0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3;
}

// Function: call_linux_syscall @ 0x1030ba
unsigned int call_linux_syscall(void)
{
 int iVar1;
 unsigned long long in_RAX;
 multi_return_t auVar2;
 iVar1 = param_linux_syscall("/etc/passwd");
 auVar2.s._0_8_ = iVar1 >> 0x1f | 0x2a;
 auVar2.s._8_8_ = in_RAX;
 return (unsigned int)auVar2.s._0_8_;
}

// Function: param_win32_api @ 0x1030d3
unsigned long long param_win32_api(char *param_1)
{
 int iVar1;
 unsigned long long uVar2;
 long in_FS_OFFSET;
 struct stat local_a0;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&local_a0);
 uVar2 = 0xffffffff;
 if ((-1 < iVar1) && (uVar2 = 0x2a, local_a0.st_size < 1)) {
 uVar2 = 0xfffffffe;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: call_win32_api @ 0x103139
unsigned long long call_win32_api(void)
{
 return param_win32_api("/etc/passwd");
}

// Function: param_fork_exec @ 0x103146
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_24;
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
 if (-1 < _Var1) {
 uVar2 = 0xfffffffd;
 if ((local_24 & 0x7f) == 0) {
 uVar2 = local_24 >> 8 & 0xff;
 }
 }
 }
 return uVar2;
}

// Function: call_fork_exec @ 0x1031dc
unsigned int call_fork_exec(void)
{
 int iVar1;
 unsigned long long in_RAX;
 multi_return_t auVar2;
 iVar1 = param_fork_exec("/bin/true",0);
 auVar2.s._0_8_ = (iVar1 == 0 ? 0x2a : 0);
 auVar2.s._8_8_ = in_RAX;
 return (unsigned int)auVar2.s._0_8_;
}

// Function: param_pipe_communication @ 0x1031fb
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 int local_38;
 int local_34;
 char local_30 [32];
 iVar1 = pipe(&local_38);
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
 close(local_38);
 write(local_34,"HelloPipe",9);
 close(local_34);
 _exit(0);
 }
 close(local_34);
 sVar3 = read(local_38,local_30,0x1f);
 local_30[sVar3] = 0;
 close(local_38);
 wait((void *)0x0);
 uVar4 = 0x2a;
 if (sVar3 < 1) {
 uVar4 = 0xfffffffd;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x1032ca
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_24;
 struct sockaddr local_20;
 __fd = socket(2,1,0);
 uVar2 = 0xffffffff;
 if (-1 < __fd) {
 local_24 = 1;
 iVar1 = setsockopt(__fd,1,2,&local_24,4);
 if (iVar1 < 0) {
 close(__fd);
 uVar2 = 0xfffffffe;
 }
 else {
 memset(&local_20, 0, sizeof(local_20));
 local_20.sa_family = 2;
 iVar1 = bind(__fd,&local_20,0x10);
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
 return uVar2;
}

// Function: param_shmget_shmat @ 0x1033bf
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 char *__dest;
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
 __dest = (char *)shmat(iVar1,(void *)0x0,0);
 if (__dest == (char *)0xffffffffffffffff) {
 return 0xfffffffd;
 }
 strcpy(__dest,"SharedMemory");
 sVar2 = strlen(__dest);
 shmdt(__dest);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return sVar2 & 0xffffffff;
 }
 }
 return 0xffffffff;
}

// Function: call_shmget_shmat @ 0x103474
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long in_RAX;
 unsigned long long uVar2;
 multi_return_t auVar3;
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 auVar3.s._8_8_ = in_RAX;
 auVar3.s._0_8_ = uVar2;
 return auVar3.s._0_8_;
}

// Function: param_signal_handling @ 0x10348f
unsigned long long param_signal_handling(void)
{
 __sighandler_t p_Var1;
 unsigned long long uVar2;
 unsigned long long in_RCX = 0;
 int iVar3;
 multi_return_t auVar4;
 p_Var1 = signal(10,signal_handler);
 uVar2 = 0xffffffff;
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 p_Var1 = signal(0xe,signal_handler);
 uVar2 = 0xfffffffe;
 if (p_Var1 != (__sighandler_t)0xffffffffffffffff) {
 iVar3 = 0x3e9;
 signal_received = 0;
 raise(10);
 while ((signal_received == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
 usleep(1000);
 }
 uVar2 = 0xfffffffd;
 if ((signal_received != 0) && (uVar2 = 0xfffffffc, signal_number == 10)) {
 iVar3 = 0x7d1;
 signal_received = 0;
 alarm(1);
 while ((signal_received == 0 && (iVar3 = iVar3 + -1, iVar3 != 0))) {
 usleep(1000);
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
 auVar4.s._8_8_ = in_RCX;
 auVar4.s._0_8_ = uVar2;
 return auVar4.s._0_8_;
}

// Function: test_system_calls @ 0x1035a0
void test_system_calls(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(&DAT_0010423e);
 uVar1 = call_linux_syscall();
 __printf_chk(1,&DAT_00104259,uVar1);
 uVar1 = call_win32_api();
 __printf_chk(1,&DAT_00104275,uVar1);
 uVar1 = call_fork_exec();
 __printf_chk(1,&DAT_00104291,uVar1);
 uVar1 = param_pipe_communication();
 __printf_chk(1,&DAT_001042ad,uVar1);
 uVar1 = param_socket_create();
 __printf_chk(1,&DAT_001042c9,uVar1);
 uVar1 = call_shmget_shmat();
 __printf_chk(1,&DAT_001042e5,uVar1);
 uVar1 = param_signal_handling();
 __printf_chk(1,&DAT_00104301,uVar1,in_RAX);
 return;
}

// Function: param_pthread_create @ 0x103670
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_24;
 pthread_t local_20;
 unsigned int *local_18;
 uVar2 = 0xffffffff;
 local_24 = param_1;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x1036e9
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}

// Function: param_pthread_join @ 0x1036f7
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 long lVar3;
 pthread_t *__newthread;
 long lVar4;
 int *piVar5;
 int *piVar6;
 pthread_t local_80 [3];
 int local_64 [9];
 piVar5 = &DAT_00104400;
 piVar6 = local_64;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *piVar6 = *piVar5;
 piVar5 = piVar5 + 1;
 piVar6 = piVar6 + 1;
 }
 piVar5 = local_64;
 __newthread = local_80;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,piVar5);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_001037a0;
 }
 __newthread = __newthread + 1;
 piVar5 = piVar5 + 3;
 } while (__newthread != (pthread_t *)(local_80 - 3));
 iVar1 = 0;
 lVar3 = 0;
 do {
 (void)pthread_join(local_80[lVar3],(void **)0x0);
 lVar4 = lVar3 + 1;
 iVar1 = iVar1 + local_64[lVar3 * 3 + 2];
 lVar3 = lVar4;
 } while (lVar4 != 3);
LAB_001037a0:
 return iVar1;
}

// Function: call_pthread_join @ 0x1037c7
int call_pthread_join(void)
{
 return param_pthread_join();
}

// Function: param_mutex_lock @ 0x1037d2
unsigned long long param_mutex_lock(int param_1,int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 int iVar3;
 long lVar4;
 pthread_t *__newthread;
 int local_2c;
 local_2c = param_2;
 __ptr = (pthread_t *)malloc((long)param_1 << 3);
 uVar2 = 0xffffffff;
 if (__ptr != (pthread_t *)0x0) {
 shared_counter = 0;
 __newthread = __ptr;
 for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_2c);
 __newthread = __newthread + 1;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 }
 for (lVar4 = 0; (int)lVar4 < param_1; lVar4 = lVar4 + 1) {
 (void)pthread_join(__ptr[lVar4],(void **)0x0);
 }
 free(__ptr);
 uVar2 = 0x2a;
 if (shared_counter != param_1 * local_2c) {
 uVar2 = 0xfffffffd;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103896
unsigned long long call_mutex_lock(void)
{
 return param_mutex_lock(4,1000);
}

// Function: param_condition_variable @ 0x1038a9
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_28;
 pthread_t local_20;
 unsigned int *local_18;
 uVar2 = 0xffffffff;
 ready = 0;
	data = 0;
	iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_20,&local_18);
 (void)pthread_join(local_28,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 iVar1 = pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_condition_variable @ 0x10395e
unsigned int call_condition_variable(void)
{
 return param_condition_variable();
}

// Function: param_atomic_ops @ 0x103969
unsigned long long param_atomic_ops(int param_1,unsigned int param_2)
{
 int iVar1;
 pthread_t *__ptr;
 unsigned long long uVar2;
 int iVar3;
 long lVar4;
 pthread_t *__newthread;
 unsigned int local_3c;
 pthread_t local_38;
 local_3c = param_2;
 __ptr = (pthread_t *)malloc((long)param_1 << 3);
 uVar2 = 0xffffffff;
 if (__ptr != (pthread_t *)0x0) {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 __newthread = __ptr;
 for (iVar3 = 0; iVar3 < param_1; iVar3 = iVar3 + 1) {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_atomic_increment,&local_3c);
 __newthread = __newthread + 1;
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00103a4e;
 }
 }
 iVar3 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar3 == 0) {
 (void)pthread_join(local_38,(void **)0x0);
 }
 for (lVar4 = 0; (int)lVar4 < param_1; lVar4 = lVar4 + 1) {
 (void)pthread_join(__ptr[lVar4],(void **)0x0);
 }
 iVar3 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar3 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00103a4e:
 return uVar2;
}

// Function: call_atomic_ops @ 0x103a70
unsigned long long call_atomic_ops(void)
{
 return param_atomic_ops(4,500);
}

// Function: param_thread_local_storage @ 0x103a83
unsigned long long param_thread_local_storage(int param_1)
{
 int iVar1;
 void *__ptr;
 void **__ptr_00;
 void *pvVar2;
 unsigned long long uVar3;
 void **ppvVar4;
 unsigned long uVar5;
 long lVar6;
 long lVar7;
 int iVar8;
 int *local_48;
 __ptr = malloc((long)param_1 << 3);
 __ptr_00 = (void **)malloc((long)param_1 << 3);
 if ((__ptr == (void *)0x0) || (uVar5 = 0, __ptr_00 == (void **)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 for (; (int)uVar5 < param_1; uVar5 = uVar5 + 1) {
 pvVar2 = malloc(0x10);
 __ptr_00[uVar5] = pvVar2;
 (void)snprintf(pvVar2,0x10,"Thread-%d",uVar5 & 0xffffffff);
 }
lVar7 = 0;
	do {
 lVar6 = lVar7;
 if (param_1 <= (int)lVar6) {
iVar1 = 0;
	iVar8 = 0;
	for (lVar7 = 0; (int)lVar7 < param_1; lVar7 = lVar7 + 1) {
	iVar1 = pthread_join(*(pthread_t *)((long)__ptr + lVar7 * 8),(void **)&local_48);
	iVar8 = iVar8 + *local_48;
	iVar1 = iVar1 + local_48[1];
	free(local_48);
	free(__ptr_00[lVar7]);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 != iVar8) || (uVar3 = 0x2a, param_1 * 0x96 != iVar1)) {
 uVar3 = 0xfffffffd;
 }
 goto LAB_00103bf5;
 }
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar6 * 8),(pthread_attr_t *)0x0,
 thread_tls_test,__ptr_00[lVar6]);
 lVar7 = lVar6 + 1;
 } while (iVar1 == 0);
 ppvVar4 = __ptr_00;
 do {
 pvVar2 = *ppvVar4;
 ppvVar4 = ppvVar4 + 1;
 free(pvVar2);
 } while (ppvVar4 != __ptr_00 + lVar6 + 1);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 }
LAB_00103bf5:
 return uVar3;
}

// Function: call_thread_local_storage @ 0x103c19
unsigned long long call_thread_local_storage(void)
{
 return param_thread_local_storage(4);
}

// Function: test_thread_concurrency @ 0x103c27
void test_thread_concurrency(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(&DAT_00104327);
 uVar1 = call_pthread_create();
 __printf_chk(1,&DAT_00104345,uVar1);
 (void)param_pthread_join();
 __printf_chk(1,&DAT_00104361,uVar1);
 (void)call_mutex_lock();
 __printf_chk(1,&DAT_0010437e,uVar1);
 uVar1 = param_condition_variable();
 __printf_chk(1,&DAT_0010439a,uVar1);
 (void)call_atomic_ops();
 __printf_chk(1,&DAT_001043b6,uVar1);
 (void)call_thread_local_storage();
 __printf_chk(1,&DAT_001043d2,uVar1);
 return;
}



