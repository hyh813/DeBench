/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
#ifndef __int64_t_defined
typedef long int64_t;
#define __int64_t_defined
#endif

// Standard headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <signal.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <sys/unistd.h>
#include <stdbool.h>

// Decompiled by BinaryAI
// SHA256: 36e844e01511dd9b321b4bf390e0050833a8d031b7d50414adb6a725f4bc19f5

// Global variables
static int completed_0 = 0;
static void *__dso_handle = 0;
static int signal_received = 0;
static int signal_number = 0;
static int shared_counter = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int ready = 0;
static int data = 0;
static int atomic_counter = 0;

// Helper macros
#define LOCK() pthread_mutex_lock(&counter_mutex)
#define UNLOCK() pthread_mutex_unlock(&counter_mutex)
#define SUB161(x, n) (((x) >> (n)) & 0xFF)
#define SUB137(x, n) (((x) >> (n)) & 0x7F)
#define CONCAT44(a, b) (((a) << 4) | ((b) & 0xF))
#define CONCAT14(a, b) (((a) << 1) | ((b) & 0x1))
#define CONCAT32(a, b) (((a) << 2) | ((b) & 0x3))
#define CONCAT72(a, b) (((a) << 2) | ((b) & 0x3))
#define ZEXT812(x) ((x) & 0xFFF)
#define ZEXT712(x) ((x) & 0xFFF)
#define ZEXT816(x) ((x) & 0xFFFF)
#define SUB1612(x, n) (((x) >> (n)) & 0xFFF)

// Type definitions for system types (only if not already defined)
#ifndef __sighandler_t_defined
typedef void (*__sighandler_t)(int);
#define __sighandler_t_defined
#endif

// Vector type for 128-bit operations (decompiler artifact)
typedef struct {
    int _0_4_;
    int _4_4_;
    int _8_4_;
    int _12_4_;
} vec128_t;

// External function declarations
extern void __cxa_finalize(void *);
extern int *__errno_location(void);

// External data
static char s_Bench_Test_Data_00104010[] = "Bench Test Data";
static char DAT_001040d9[] = "TestName";
static char DAT_0010441f[] = "Testing standard library functions...";
static char DAT_00104127[] = "strlen result: %d\n";
static char DAT_00104142[] = "call_strcmp result: %d\n";
static char DAT_0010415d[] = "call_strlen result: %d\n";
static char DAT_00104179[] = "call_memcpy result: %d\n";
static char DAT_00104195[] = "call_memcmp result: %d\n";
static char DAT_001041b1[] = "call_printf result: %d\n";
static char DAT_001041cd[] = "call_scanf result: %d\n";
static char DAT_001041ea[] = "call_fopen_fclose result: %d\n";
static char DAT_00104206[] = "call_fread_fwrite result: %d\n";
static char DAT_00104222[] = "call_malloc_free result: %d\n";
static char DAT_0010423e[] = "call_memset result: %d\n";
static char DAT_00104259[] = "call_strchr_strstr result: %d\n";
static char DAT_001042a8[] = "call_linux_syscall result: %d\n";
static char DAT_001042c4[] = "call_win32_api result: %d\n";
static char DAT_001042e0[] = "call_fork_exec result: %d\n";
static char DAT_001042fc[] = "call_pipe_communication result: %d\n";
static char DAT_00104318[] = "call_socket_create result: %d\n";
static char DAT_00104334[] = "call_shmget_shmat result: %d\n";
static char DAT_00104350[] = "call_signal_handling result: %d\n";
static char DAT_00104376[] = "call_pthread_create result: %d\n";
static char DAT_00104392[] = "call_pthread_join result: %d\n";
static char DAT_001043af[] = "call_mutex_lock result: %d\n";
static char DAT_001043cb[] = "call_condition_variable result: %d\n";
static char DAT_001043e7[] = "call_atomic_ops result: %d\n";
static char DAT_00104403[] = "call_thread_local_storage result: %d\n";
static char DAT_00104443[] = "Testing system calls...";
static char DAT_0010445e[] = "Testing thread concurrency...";
static int _DAT_00104040[4] = {0, 1, 2, 3};

// Forward declarations
void signal_handler(int param_1);
int main(void);

extern void __libc_start_main(int (*main)(void), unsigned long long argc, void *udata, void (*init)(void), void (*fini)(void), unsigned long long stack, void *sp);



// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 // Null function pointer call - skip for safety
 return;
}





















































































































// Function: deregister_tm_clones @ 0x1023f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102420
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102460
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_strcpy @ 0x1024b0
void param_strcpy(char *param_1,char *param_2)
{
 strcpy(param_1,param_2);
 strlen(param_1);
 return;
}

// Function: call_strcpy @ 0x1024d0
void call_strcpy(void)
{
 unsigned long long local_28;
 char local_20;
 local_28 = 0x62694c6f6c6c6548;
 local_20 = 0;
 strlen((char *)&local_28);
 return;
}

// Function: param_strcmp @ 0x102500
int param_strcmp(char *param_1,char *param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = strcmp(param_1,param_2);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_strcmp @ 0x102520
unsigned long long call_strcmp(void)
{
 return 0;
}

// Function: param_strlen @ 0x102530
void param_strlen(char *param_1)
{
 strlen(param_1);
 return;
}

// Function: call_strlen @ 0x102540
unsigned long long call_strlen(void)
{
 return 0xc;
}

// Function: param_memcpy @ 0x102550
unsigned long param_memcpy(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}

// Function: call_memcpy @ 0x102560
unsigned long long call_memcpy(void)
{
 return 0x5a;
}

// Function: param_memcmp @ 0x102570
int param_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = -(uint)(iVar1 != 0);
 }
 return iVar2;
}

// Function: call_memcmp @ 0x102590
unsigned long long call_memcmp(void)
{
 return 0xffffffff;
}

// Function: param_printf @ 0x1025a0
void param_printf(unsigned long param_1,unsigned long long param_2)
{
 printf("Value: %d, Name: %s\n",param_1 & 0xffffffff,param_2);
 return;
}

// Function: call_printf @ 0x1025c0
void call_printf(void)
{
 printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 return;
}

// Function: param_scanf @ 0x1025e0
int param_scanf(const char *param_1)
{
 int iVar1;
 int iVar2;
 unsigned long long in_RAX;
 unsigned long long local_8;
 int local_8_hi;
 local_8 = in_RAX;
 local_8_hi = (int)(local_8 >> 32);
 iVar1 = sscanf(param_1,"%d,%d",&local_8_hi,(int*)&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + local_8_hi;
 }
 return iVar2;
}

// Function: call_scanf @ 0x102610
int call_scanf(void)
{
 int iVar1;
 int iVar2;
 unsigned long long in_RAX;
 unsigned long long local_8;
 int local_8_hi;
 local_8 = in_RAX;
 local_8_hi = (int)(local_8 >> 32);
 iVar1 = sscanf("123,456","%d,%d",&local_8_hi,(int*)&local_8);
 iVar2 = -1;
 if (iVar1 == 2) {
 iVar2 = (int)local_8 + local_8_hi;
 }
 return iVar2;
}

// Function: param_fopen_fclose @ 0x102650
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

// Function: call_fopen_fclose @ 0x102690
uint call_fopen_fclose(void)
{
 int iVar1;
 FILE *__stream;
 uint uVar2;
 __stream = fopen("/etc/passwd","r");
 if (__stream == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = fileno(__stream);
 fclose(__stream);
 uVar2 = iVar1 >> 0x1f | 0x2a;
 }
 return uVar2;
}

// Function: param_fread_fwrite @ 0x1026e0
unsigned long long param_fread_fwrite(char *param_1)
{
 FILE *__s;
 size_t sVar1;
 unsigned long long uVar2;
 char local_38 [20];
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,18,__s);
 if (sVar1 == 18) {
 rewind(__s);
 sVar1 = fread(local_38,1,18,__s);
 local_38[sVar1] = '\0';
 fclose(__s);
 unlink(param_1);
 uVar2 = 0xfffffffd;
 if (sVar1 == 18 && strcmp(local_38, "BinBench Test Data") == 0) {
 uVar2 = 0x2a;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: call_fread_fwrite @ 0x1027c0
void call_fread_fwrite(void)
{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}

// Function: param_malloc_free @ 0x1027d0
int param_malloc_free(unsigned long param_1)
{
 unsigned long long *puVar1;
 int *piVar2;
 int *__ptr;
 unsigned long uVar3;
 int iVar4;
 unsigned long uVar5;
 int unaff_EBP;
 long lVar6;
 unsigned long uVar7;
 int iVar10;
 vec128_t auVar8;
 int iVar11;
 vec128_t auVar9;
 int iVar12;
 int iVar13;
 int iVar15;
 vec128_t auVar14;
 __ptr = (int *)malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 == 0) goto LAB_00102921;
 if (param_1 < 8) {
 uVar3 = 0;
LAB_00102904:
 iVar4 = (int)uVar3 * 10;
 do {
 __ptr[uVar3] = iVar4;
 uVar3 = uVar3 + 1;
 iVar4 = iVar4 + 10;
 } while (param_1 != uVar3);
 }
 else {
 uVar3 = param_1 & 0xfffffffffffffff8;
 uVar5 = (uVar3 - 8 >> 3) + 1;
 if (uVar3 - 8 == 0) {
 iVar4 = 0;
 iVar11 = 10;
 iVar10 = 0x14;
 iVar12 = 0x1e;
 lVar6 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffffffffffe;
 lVar6 = 0;
 auVar8._0_4_ = _DAT_00104040[0];
 auVar8._4_4_ = _DAT_00104040[1];
 auVar8._8_4_ = _DAT_00104040[2];
 auVar8._12_4_ = _DAT_00104040[3];
 do {
 iVar10 = auVar8._0_4_ * 10;
 iVar12 = (int)((auVar8._8_4_ & 0xffffffff) * 10);
 iVar4 = auVar8._4_4_;
 iVar11 = auVar8._12_4_;
 auVar14._4_4_ = iVar4;
 auVar14._0_4_ = iVar4;
 auVar14._8_4_ = iVar11;
 auVar14._12_4_ = iVar11;
 iVar13 = iVar4 * 10;
 iVar15 = (int)((auVar14._8_4_ & 0xffffffff) * 10);
 puVar1 = (unsigned long long *)(__ptr + lVar6);
 *puVar1 = CONCAT44(iVar13,iVar10);
 *(int *)(puVar1 + 2) = iVar12;
 *(int *)((long)puVar1 + 0x14) = iVar15;
 piVar2 = __ptr + lVar6 + 4;
 *piVar2 = iVar10 + 0x28;
 piVar2[1] = iVar13 + 0x28;
 piVar2[2] = iVar12 + 0x28;
 piVar2[3] = iVar15 + 0x28;
 piVar2 = __ptr + lVar6 + 8;
 *piVar2 = iVar10 + 0x50;
 piVar2[1] = iVar13 + 0x50;
 piVar2[2] = iVar12 + 0x50;
 piVar2[3] = iVar15 + 0x50;
 piVar2 = __ptr + lVar6 + 0xc;
 *piVar2 = iVar10 + 0x78;
 piVar2[1] = iVar13 + 0x78;
 piVar2[2] = iVar12 + 0x78;
 piVar2[3] = iVar15 + 0x78;
 lVar6 = lVar6 + 0x10;
 auVar9._0_4_ = auVar8._0_4_ + 0x10;
 auVar9._4_4_ = iVar4 + 0x10;
 auVar9._8_4_ = auVar8._8_4_ + 0x10;
 auVar9._12_4_ = iVar11 + 0x10;
 uVar7 = uVar7 - 2;
 auVar8 = auVar9;
 } while (uVar7 != 0);
 auVar8._4_4_ = auVar9._4_4_;
 auVar8._0_4_ = auVar9._4_4_;
 auVar8._8_4_ = auVar9._12_4_;
 auVar8._12_4_ = auVar9._12_4_;
 iVar4 = auVar9._0_4_ * 10;
 iVar10 = (int)((auVar9._8_4_ & 0xffffffff) * 10);
 iVar11 = auVar9._4_4_ * 10;
 iVar12 = (int)((auVar8._8_4_ & 0xffffffff) * 10);
 }
 if ((uVar5 & 1) != 0) {
 piVar2 = __ptr + lVar6;
 *piVar2 = iVar4;
 piVar2[1] = iVar11;
 piVar2[2] = iVar10;
 piVar2[3] = iVar12;
 piVar2 = __ptr + lVar6 + 4;
 *piVar2 = iVar4 + 0x28;
 piVar2[1] = iVar11 + 0x28;
 piVar2[2] = iVar10 + 0x28;
 piVar2[3] = iVar12 + 0x28;
 }
 if (uVar3 != param_1) goto LAB_00102904;
 }
 unaff_EBP = *__ptr;
LAB_00102921:
 iVar4 = __ptr[param_1 - 1];
 free(__ptr);
 return unaff_EBP + iVar4;
}

// Function: call_malloc_free @ 0x102950
unsigned long long call_malloc_free(void)
{
 return 0x5a;
}

// Function: param_memset @ 0x102960
int param_memset(void *param_1,size_t param_2)
{
 unsigned long uVar29;
 long lVar31;
 int iVar32;
 unsigned long uVar33;
 int iVar37;
 iVar32 = 0;
 iVar37 = 0;
 memset(param_1,0,param_2);
 if (param_2 != 0) {
 uVar29 = 0;
 do {
 iVar32 = iVar32 + (uint)*((unsigned char *)param_1 + uVar29);
 uVar29 = uVar29 + 1;
 } while (uVar29 < param_2);
 }
 return iVar32;
}

// Function: call_memset @ 0x102aa0
unsigned long long call_memset(void)
{
 return 0;
}

// Function: param_strchr_strstr @ 0x102ab0
int param_strchr_strstr(char *param_1,int param_2,char *param_3)
{
 char *pcVar1;
 char *pcVar2;
 pcVar1 = strchr(param_1,param_2);
 pcVar2 = strstr(param_1,param_3);
 return (-(uint)(pcVar2 == (char *)0x0) | (int)pcVar2 - (int)param_1) +
 (-(uint)(pcVar1 == (char *)0x0) | (int)pcVar1 - (int)param_1);
}

// Function: call_strchr_strstr @ 0x102af0
unsigned long long call_strchr_strstr(void)
{
 return 0xf;
}

// Function: test_standard_library_functions @ 0x102b00
void test_standard_library_functions(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_3c;
 unsigned long long local_38;
 char local_30;
 puts(&DAT_0010441f);
 local_38 = 0x62694c6f6c6c6548;
 local_30 = 0;
 sVar3 = strlen((char *)&local_38);
 printf(&DAT_00104127,sVar3 & 0xffffffff);
 printf(&DAT_00104142,0);
 printf(&DAT_0010415d,0xc);
 printf(&DAT_00104179,0x5a);
 uVar4 = 0xffffffff;
 printf(&DAT_00104195,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_001040d9);
 printf(&DAT_001041b1,(unsigned long)uVar1);
 iVar2 = sscanf("123,456","%d,%d",(int*)&local_38,&local_3c);
 uVar1 = local_3c + (int)local_38;
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(&DAT_001041cd,(unsigned long)uVar1);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = iVar2 >> 0x1f | 0x2a;
 }
 printf(&DAT_001041ea,(unsigned long)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(&DAT_00104206,(unsigned long)uVar1);
 printf(&DAT_00104222,0x5a);
 printf(&DAT_0010423e,0);
 printf(&DAT_00104259,0xf);
 return;
}

// Function: param_linux_syscall @ 0x102c90
unsigned long param_linux_syscall(unsigned long long param_1)
{
 unsigned long uVar1;
 int *piVar2;
 uVar1 = syscall(2,param_1,0);
 if ((int)uVar1 < 0) {
 piVar2 = __errno_location();
 uVar1 = (unsigned long)(uint)-*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return uVar1 & 0xffffffff;
}

// Function: call_linux_syscall @ 0x102cd0
uint call_linux_syscall(void)
{
 unsigned long uVar1;
 int *piVar2;
 int iVar3;
 uVar1 = syscall(2,"/etc/passwd",0);
 iVar3 = (int)uVar1;
 if (iVar3 < 0) {
 piVar2 = __errno_location();
 iVar3 = -*piVar2;
 }
 else {
 syscall(3,uVar1 & 0xffffffff);
 }
 return iVar3 >> 0x1f | 0x2a;
}

// Function: param_win32_api @ 0x102d20
unsigned int param_win32_api(char *param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_90;
 iVar1 = stat(param_1,&local_90);
 uVar3 = 0xfffffffe;
 if (0 < local_90.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: call_win32_api @ 0x102d60
unsigned int call_win32_api(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 struct stat local_90;
 iVar1 = stat("/etc/passwd",&local_90);
 uVar3 = 0xfffffffe;
 if (0 < local_90.st_size) {
 uVar3 = 0x2a;
 }
 uVar2 = 0xffffffff;
 if (-1 < iVar1) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_fork_exec @ 0x102da0
uint param_fork_exec(char *param_1,unsigned long long param_2)
{
 __pid_t _Var1;
 uint uVar2;
 unsigned long long in_RAX;
 uint local_14;
 local_14 = (uint)((unsigned long)in_RAX >> 0x20);
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

// Function: call_fork_exec @ 0x102e10
uint call_fork_exec(void)
{
 __pid_t _Var1;
 uint uVar2;
 uint local_c;
 _Var1 = fork();
 uVar2 = 0xffffffff;
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var1 = waitpid(_Var1,(int *)&local_c,0);
 if ((-1 < _Var1) && ((local_c & 0x7f) == 0)) {
 uVar2 = -(uint)((local_c & 0xff00) != 0) | 0x2a;
 }
 }
 return uVar2;
}

// Function: param_pipe_communication @ 0x102e80
unsigned long long param_pipe_communication(void)
{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 unsigned long long uVar4;
 int local_30;
 int local_2c;
 char local_28 [32];
 iVar1 = pipe(&local_30);
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
 close(local_30);
 write(local_2c,"HelloPipe",9);
 close(local_2c);
 _exit(0);
 }
 close(local_2c);
 sVar3 = read(local_30,local_28,0x1f);
 local_28[sVar3] = 0;
 close(local_30);
 wait((void *)0x0);
 uVar4 = 0xfffffffd;
 if (0 < sVar3) {
 uVar4 = 0x2a;
 }
 }
 }
 return uVar4;
}

// Function: param_socket_create @ 0x102f40
unsigned long long param_socket_create(void)
{
 int __fd;
 int iVar1;
 unsigned long long uVar2;
 unsigned int local_24;
 struct sockaddr local_20;
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
 local_20.sa_data[6] = '\0';
 local_20.sa_data[7] = '\0';
 local_20.sa_data[8] = '\0';
 local_20.sa_data[9] = '\0';
 local_20.sa_data[10] = '\0';
 local_20.sa_data[11] = '\0';
 local_20.sa_data[12] = '\0';
 local_20.sa_data[13] = '\0';
 local_20.sa_family = 2;
 local_20.sa_data[0] = '\0';
 local_20.sa_data[1] = '\0';
 local_20.sa_data[2] = '\0';
 local_20.sa_data[3] = '\0';
 local_20.sa_data[4] = '\0';
 local_20.sa_data[5] = '\0';
 iVar1 = bind(__fd,&local_20,0x10);
 if (iVar1 < 0) {
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

// Function: param_shmget_shmat @ 0x103010
unsigned long param_shmget_shmat(void)
{
 int iVar1;
 key_t __key;
 unsigned long long *__s;
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
 __s = (unsigned long long *)shmat(iVar1,(void *)0x0,0);
 if (__s == (unsigned long long *)0xffffffffffffffff) {
 sVar2 = 0xfffffffd;
 }
 else {
 *(unsigned long long *)((long)__s + 5) = 0x79726f6d654d64;
 *__s = 0x654d646572616853;
 sVar2 = strlen((char *)__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 }
 }
 }
 }
 return sVar2 & 0xffffffff;
}

// Function: call_shmget_shmat @ 0x1030e0
unsigned long long call_shmget_shmat(void)
{
 int iVar1;
 unsigned long long uVar2;
 iVar1 = param_shmget_shmat();
 uVar2 = 0xffffffff;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: param_signal_handling @ 0x103100
unsigned long long param_signal_handling(void)
{
 int bVar1;
 __sighandler_t p_Var2;
 unsigned long long uVar3;
 uint uVar4;
 p_Var2 = signal(10,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xffffffff;
 }
 p_Var2 = signal(0xe,signal_handler);
 if (p_Var2 == (__sighandler_t)0xffffffffffffffff) {
 return 0xfffffffe;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 uVar4 = 1000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 if (signal_received == 0) {
 return 0xfffffffd;
 }
 uVar3 = 0xfffffffc;
 if (signal_number == 10) {
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 uVar4 = 2000;
 do {
 usleep(1000);
 if (signal_received != 0) break;
 bVar1 = 1 < uVar4;
 uVar4 = uVar4 - 1;
 } while (bVar1);
 }
 uVar3 = 0xfffffffb;
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 uVar3 = 0x2a;
 }
 }
 return uVar3;
}

// Function: signal_handler @ 0x103230
void signal_handler(int param_1)
{
 signal_received = 1;
 signal_number = param_1;
 return;
}



// Function: test_system_calls @ 0x103260
void test_system_calls(void)
{
 int iVar1;
 __pid_t _Var2;
 uint uVar3;
 unsigned long uVar4;
 int *piVar5;
 unsigned long long uVar6;
 struct stat local_a0;
 puts(&DAT_00104443);
 uVar4 = syscall(2,"/etc/passwd",0);
 iVar1 = (int)uVar4;
 if (iVar1 < 0) {
 piVar5 = __errno_location();
 iVar1 = -*piVar5;
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 }
 printf(&DAT_001042a8,(unsigned long)(iVar1 >> 0x1f | 0x2a));
 iVar1 = stat("/etc/passwd",&local_a0);
 uVar6 = 0xfffffffe;
 if (0 < local_a0.st_size) {
 uVar6 = 0x2a;
 }
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 printf(&DAT_001042c4,uVar6);
 _Var2 = fork();
 uVar4 = 0xffffffff;
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 execl("/bin/true","/bin/true",0,0);
 _exit(0x7f);
 }
 _Var2 = waitpid(_Var2,(int *)&local_a0,0);
 if ((_Var2 < 0) || (((uint)local_a0.st_dev & 0x7f) != 0)) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = (unsigned long)(-(uint)(((uint)local_a0.st_dev & 0xff00) != 0) | 0x2a);
 }
 }
 printf(&DAT_001042e0,uVar4);
 uVar3 = param_pipe_communication();
 printf(&DAT_001042fc,(unsigned long)uVar3);
 uVar3 = param_socket_create();
 printf(&DAT_00104318,(unsigned long)uVar3);
 iVar1 = param_shmget_shmat();
 uVar3 = 0xffffffff;
 if (0 < iVar1) {
 uVar3 = 0x2a;
 }
 printf(&DAT_00104334,(unsigned long)uVar3);
 uVar3 = param_signal_handling();
 printf(&DAT_00104350,(unsigned long)uVar3);
 return;
}

// Function: thread_compute @ 0x1033d0
void *thread_compute(void *arg)
{
 int *param_1 = (int *)arg;
 int iVar1;
 int *piVar2;
 iVar1 = *param_1;
 piVar2 = (int *)malloc(4);
 *piVar2 = iVar1 * iVar1;
 return (void *)piVar2;
}

// Function: param_pthread_create @ 0x1033f0
unsigned int param_pthread_create(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = param_1;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: call_pthread_create @ 0x103440
unsigned int call_pthread_create(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int local_1c;
 unsigned int *local_18;
 pthread_t local_10;
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 return uVar2;
}

// Function: thread_sum @ 0x1034a0
void *thread_sum(void *arg)
{
 uint *param_1 = (uint *)arg;
 uint uVar1;
 uint uVar2;
 param_1[2] = 0;
 uVar1 = *param_1;
 uVar2 = param_1[1];
 if ((int)uVar1 <= (int)uVar2) {
 param_1[2] = (uVar1 + 1) * (uVar2 - uVar1) + uVar1 +
 (int)((unsigned long)(uVar2 - uVar1) * (unsigned long)(uVar2 + ~uVar1) >> 1);
 }
 return 0;
}

// Function: param_pthread_join @ 0x1034e0
int param_pthread_join(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 unsigned int local_68[3] = {1, 0, 10};
 unsigned int uStack_5c = 11;
 unsigned int auStack_54[3] = {0, 1, 30};
 int local_48;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28;
 local_48 = 0;
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_sum,local_68);
 iVar4 = -1;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_30,(pthread_attr_t *)0x0,thread_sum,&uStack_5c);
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,thread_sum,auStack_54);
 if (iVar1 == 0) {
 iVar1 = pthread_join(local_38,(void **)0x0);
 iVar4 = -2;
 if (iVar1 == 0) {
 iVar1 = local_68[2];
 iVar2 = pthread_join(local_30,(void **)0x0);
 if (iVar2 == 0) {
 iVar2 = auStack_54[0];
 iVar3 = pthread_join(local_28,(void **)0x0);
 if (iVar3 == 0) {
 iVar4 = iVar2 + iVar1 + local_48;
 }
 }
 }
 }
 }
 }
 return iVar4;
}

// Function: thread_increment @ 0x1035f0
void *thread_increment(void *arg)
{
 int *param_1 = (int *)arg;
 int iVar1;
 iVar1 = *param_1;
 if (0 < iVar1) {
 do {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return 0;
}

// Function: param_mutex_lock @ 0x103630
unsigned long long param_mutex_lock(uint param_1,int param_2)
{
 int iVar1;
 unsigned long long in_RAX;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 long lVar5;
 int local_38;
 uint local_34;
 local_34 = (uint)((unsigned long)in_RAX >> 0x20);
 local_38 = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 if (0 < (int)param_1) {
 uVar4 = (unsigned long)param_1;
 lVar5 = 0;
 local_34 = param_1;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_increment,&local_38);
 param_1 = local_34;
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar5 = lVar5 + 8;
 } while (uVar4 * 8 - lVar5 != 0);
 if (0 < (int)local_34) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 }
 }
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (shared_counter == param_1 * local_38) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_mutex_lock @ 0x103720
void call_mutex_lock(void)
{
 param_mutex_lock(4,1000);
 return;
}

// Function: consumer_thread @ 0x103730
void *consumer_thread(void *arg)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 pthread_mutex_lock(&cond_mutex);
 if (ready == 0) {
 do {
 pthread_cond_wait(&cond,&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == 0) {
 uVar2 = 0;
 }
 pthread_mutex_unlock(&cond_mutex);
 puVar1 = (unsigned int *)malloc(4);
 *puVar1 = uVar2;
 return (void *)puVar1;
}

// Function: producer_thread @ 0x1037b0
void *producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}

// Function: param_condition_variable @ 0x1037f0
unsigned int param_condition_variable(void)
{
 int iVar1;
 unsigned int uVar2;
 pthread_t local_20;
 unsigned int *local_18;
 pthread_t local_10;
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_20,(void **)&local_18);
 pthread_join(local_10,(void **)0x0);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 pthread_cancel(local_20);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: thread_atomic_increment @ 0x103890
void *thread_atomic_increment(void *arg)
{
 uint *param_1 = (uint *)arg;
 uint uVar1;
 uint uVar4;
 uVar1 = *param_1;
 if (0 < (int)uVar1) {
 uVar4 = 0;
 do {
 LOCK();
 atomic_counter = atomic_counter + 1;
 UNLOCK();
 uVar4 = uVar4 + 1;
 } while (uVar4 < uVar1);
 }
 return 0;
}

// Function: thread_atomic_load_store @ 0x103950
void *thread_atomic_load_store(void *arg)
{
 LOCK();
 atomic_counter = atomic_counter + 100;
 UNLOCK();
 return 0;
}

// Function: param_atomic_ops @ 0x103970
unsigned long long param_atomic_ops(uint param_1,unsigned int param_2)
{
 int iVar1;
 void *__ptr;
 unsigned long long uVar2;
 unsigned long uVar3;
 long lVar4;
 unsigned int local_3c;
 pthread_t local_38;
 local_3c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (void *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if (0 < (int)param_1) {
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_3c);
 if (iVar1 != 0) {
 free(__ptr);
 return 0xfffffffe;
 }
 lVar4 = lVar4 + 8;
 } while ((unsigned long)param_1 * 8 - lVar4 != 0);
 }
 iVar1 = pthread_create(&local_38,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_38,(void **)0x0);
 }
 if (0 < (int)param_1) {
 uVar3 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + uVar3 * 8),(void **)0x0);
 uVar3 = uVar3 + 1;
 } while (param_1 != uVar3);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0xfffffffd;
 if (0 < iVar1) {
 uVar2 = 0x2a;
 }
 }
 return uVar2;
}

// Function: call_atomic_ops @ 0x103a80
void call_atomic_ops(void)
{
 param_atomic_ops(4,500);
 return;
}

// Thread-local storage simulation
static int tls_value = 0;

// Function: thread_tls_test @ 0x103a90
void *thread_tls_test(void *arg)
{
 char *param_1 = (char *)arg;
 int iVar1;
 int iVar2;
 int *piVar3;
 iVar2 = tls_value;
 iVar1 = iVar2 + 0x32;
 tls_value = iVar1;
 piVar3 = (int *)malloc(8);
 *piVar3 = iVar2;
 piVar3[1] = iVar1;
 return (void *)piVar3;
}

// Function: param_thread_local_storage @ 0x103ae0
unsigned long long param_thread_local_storage(uint param_1)
{
 int iVar1;
 pthread_t *__ptr;
 void **__ptr_00;
 char *__s;
 unsigned long long uVar2;
 uint uVar3;
 unsigned long uVar4;
 pthread_t *__newthread;
 unsigned long uVar5;
 uint uVar6;
 int *local_38;
 __ptr = (pthread_t *)malloc((long)(int)param_1 * 8);
 __ptr_00 = (void **)malloc((long)(int)param_1 * 8);
 if (__ptr == (pthread_t *)0x0) {
 return 0xffffffff;
 }
 if (__ptr_00 == (void *)0x0) {
 free(__ptr);
 return 0xffffffff;
 }
 tls_value = 0;
 if (0 < (int)param_1) {
 uVar5 = (unsigned long)param_1;
 uVar4 = 0;
 do {
 __s = (char *)malloc(0x10);
 __ptr_00[uVar4] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 if (0 < (int)param_1) {
 uVar4 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 __ptr_00[uVar4]);
 if (iVar1 != 0) {
 free(__ptr_00);
 free(__ptr);
 return 0xfffffffe;
 }
 uVar4 = uVar4 + 1;
 __newthread = __newthread + 1;
 } while (uVar5 != uVar4);
 if ((int)param_1 < 1) {
 uVar3 = 0;
 uVar6 = 0;
 }
 else {
 uVar4 = 0;
 uVar6 = 0;
 uVar3 = 0;
 do {
 pthread_join(__ptr[uVar4],(void **)&local_38);
 uVar3 = uVar3 + *local_38;
 uVar6 = uVar6 + local_38[1];
 free(local_38);
 free(__ptr_00[uVar4]);
 uVar4 = uVar4 + 1;
 } while (uVar5 != uVar4);
 }
 goto LAB_00103c0c;
 }
 }
 uVar3 = 0;
 uVar6 = 0;
LAB_00103c0c:
 free(__ptr_00);
 free(__ptr);
 uVar2 = 0xfffffffd;
 if ((param_1 * 0x96 ^ uVar6 | param_1 * 100 ^ uVar3) == 0) {
 uVar2 = 0x2a;
 }
 return uVar2;
}

// Function: call_thread_local_storage @ 0x103ca0
void call_thread_local_storage(void)
{
 param_thread_local_storage(4);
 return;
}

// Function: test_thread_concurrency @ 0x103cb0
void test_thread_concurrency(void)
{
 int iVar1;
 uint uVar2;
 unsigned int local_1c;
 uint *local_18;
 pthread_t local_10;
 puts(&DAT_0010445e);
 local_1c = 7;
 iVar1 = pthread_create(&local_10,(pthread_attr_t *)0x0,thread_compute,&local_1c);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 pthread_join(local_10,(void **)&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 printf(&DAT_00104376,(unsigned long)uVar2);
 uVar2 = param_pthread_join();
 printf(&DAT_00104392,(unsigned long)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(&DAT_001043af,(unsigned long)uVar2);
 uVar2 = param_condition_variable();
 printf(&DAT_001043cb,(unsigned long)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(&DAT_001043e7,(unsigned long)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(&DAT_00104403,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x103da0
int main(void)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



