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

/* Ghidra decompiler types */
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef void* code;

/* pthread types */
typedef unsigned long pthread_t;
typedef void* pthread_attr_t;
typedef void* pthread_mutex_t;
typedef void* pthread_cond_t;

/* Other types */
typedef long __pid_t;
typedef void* __sighandler_t;
typedef int key_t;
typedef unsigned int uint;
typedef void* FILE;
typedef unsigned char unkuint9[9];
typedef unsigned char uint6[6];
typedef unsigned char unkuint10[10];
typedef unsigned char uint3[3];
typedef unsigned short ushort;
typedef unsigned char byte;

/* Lock macros for thread synchronization */
#define LOCK()
#define UNLOCK()

/* stat struct */
struct stat {
    long st_size;
};

/* shmid_ds struct for System V IPC */
struct shmid_ds {
    int dummy;
};
typedef struct shmid_ds shmid_ds;

/* sockaddr struct */
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};

/* Global variables */
int signal_received;
int signal_number;
int shared_counter;
void* counter_mutex;
void* cond_mutex;
void* cond;
int data;
int ready;
int atomic_counter;
char DAT_00105023;
char DAT_00105071;
char DAT_0010508c;
char DAT_001050a7;
char DAT_001050c3;
char DAT_001050df;
char DAT_001050fb;
char DAT_00105117;
char DAT_00105134;
char DAT_00105150;
char DAT_0010516c;
char DAT_00105188;
char DAT_001051a3;
char DAT_001051e5;
char DAT_00105200;
char DAT_0010521c;
char DAT_00105238;
char DAT_00105254;
char DAT_00105270;
char DAT_0010528c;
char DAT_001052a8;
char DAT_001052c4;
char DAT_001052e2;
char DAT_001052fe;
char DAT_0010531b;
char DAT_00105337;
char DAT_00105353;
char DAT_0010536f;
char DAT_00105390;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/6/6_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
 return;
}



/* Function: main @ 00102760 */

undefined8 main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: signal_handler @ 00102880 */

void signal_handler(undefined4 param_1)

{
 signal_received = 1;
 signal_number = param_1;
 return;
}



/* Function: thread_sum @ 001028a0 */

undefined8 thread_sum(int *param_1)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 
 iVar5 = *param_1;
 iVar2 = param_1[1];
 param_1[2] = 0;
 if (iVar2 < iVar5) {
 return 0;
 }
 uVar1 = (iVar2 - iVar5) + 1;
 if ((uint)(iVar2 - iVar5) < 10) {
 iVar9 = 0;
 }
 else {
 iVar8 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 uVar3 = 0;
 iVar9 = iVar5;
 iVar4 = iVar5 + 1;
 iVar6 = iVar5 + 2;
 iVar7 = iVar5 + 3;
 do {
 uVar3 = uVar3 + 1;
 iVar8 = iVar8 + iVar9;
 iVar10 = iVar10 + iVar4;
 iVar11 = iVar11 + iVar6;
 iVar12 = iVar12 + iVar7;
 iVar9 = iVar9 + 4;
 iVar4 = iVar4 + 4;
 iVar6 = iVar6 + 4;
 iVar7 = iVar7 + 4;
 } while (uVar1 >> 2 != uVar3);
 iVar5 = iVar5 + (uVar1 & 0xfffffffc);
 iVar9 = iVar8 + iVar11 + iVar10 + iVar12;
 iVar4 = iVar9;
 if (uVar1 == (uVar1 & 0xfffffffc)) goto LAB_0010298b;
 }
 iVar4 = iVar9 + iVar5;
 if (iVar5 + 1 <= iVar2) {
 iVar4 = iVar9 + iVar5 + iVar5 + 1;
 if (iVar5 + 2 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 2;
 if (iVar5 + 3 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 3;
 if (iVar5 + 4 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 4;
 if (iVar5 + 5 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 5;
 if (iVar5 + 6 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 6;
 if (iVar5 + 7 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 7;
 if (iVar5 + 8 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 8;
 if (iVar5 + 9 <= iVar2) {
 iVar4 = iVar4 + iVar5 + 9;
 }
 }
 }
 }
 }
 }
 }
 }
 }
LAB_0010298b:
 param_1[2] = iVar4;
 return 0;
}



/* Function: thread_compute @ 001029a0 */

void thread_compute(int *param_1)

{
 int iVar1;
 int *piVar2;
 
 iVar1 = *param_1;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return;
}



/* Function: thread_increment @ 001029c0 */

undefined8 thread_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 iVar1 = *param_1;
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 iVar2 = iVar2 + 1;
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 usleep(1000);
 } while (iVar1 != iVar2);
 }
 return 0;
}



/* Function: consumer_thread @ 00102a20 */

void consumer_thread(void)

{
 undefined4 uVar1;
 undefined4 *puVar2;
 
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 while (data = uVar1, ready == 0) {
 pthread_cond_wait((pthread_cond_t *)cond,(pthread_mutex_t *)cond_mutex);
 uVar1 = data;
 }
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 puVar2 = malloc(4);
 *puVar2 = uVar1;
 return;
}



/* Function: producer_thread @ 00102a90 */

undefined8 producer_thread(void)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)cond_mutex);
 data = 0x2a;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)cond);
 pthread_mutex_unlock((pthread_mutex_t *)cond_mutex);
 return 0;
}



/* Function: thread_atomic_increment @ 00102ae0 */

undefined8 thread_atomic_increment(int *param_1)

{
 int iVar1;
 int iVar2;
 
 if (0 < *param_1) {
 iVar2 = 0;
 do {
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 atomic_counter = atomic_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 iVar1 = iVar2 + 1000;
 if (iVar2 != atomic_counter) {
 iVar1 = atomic_counter;
 }
 atomic_counter = iVar1;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 iVar2 = iVar2 + 1;
 } while (*param_1 != iVar2);
 }
 return 0;
}



/* Function: thread_atomic_load_store @ 00102b20 */

undefined8 thread_atomic_load_store(void)

{
 pthread_mutex_lock((pthread_mutex_t *)counter_mutex);
 atomic_counter = atomic_counter + 100;
 pthread_mutex_unlock((pthread_mutex_t *)counter_mutex);
 return 0;
}



/* Function: thread_tls_test @ 00102b40 */

void thread_tls_test(char *param_1)

{
 int iVar1;
 int iVar2;
 undefined8 *puVar3;
 long *in_FS_OFFSET;
 
 iVar2 = *(int *)((long)in_FS_OFFSET + -0x24);
 iVar1 = iVar2 + 0x32;
 *(int *)((long)in_FS_OFFSET + -0x24) = iVar1;
 strncpy((char *)(*in_FS_OFFSET + -0x20),param_1,0x1f);
 puVar3 = malloc(8);
 *puVar3 = ((unsigned long long)(uint)iVar1 << 32) | (iVar2 & 0xFFFFFFFF);
 return;
}



/* Function: param_fork_exec.part.0 @ 00102ba0 */

void param_fork_exec_part_0(char *param_1,undefined8 param_2)

{
 execl(param_1,param_1,param_2,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
}



/* Function: param_thread_local_storage.constprop.0 @ 00102bc0 */

undefined8 param_thread_local_storage_constprop_0(void)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 undefined8 uVar3;
 ulong uVar4;
 undefined8 *puVar5;
 ulong uVar6;
 long lVar7;
 int iVar8;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = malloc(0x20);
 __ptr_00 = malloc(0x20);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 uVar4 = 0;
 do {
 pvVar2 = malloc(0x10);
 uVar6 = uVar4 & 0xffffffff;
 __ptr_00[uVar4] = pvVar2;
 uVar4 = uVar4 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar6);
 } while (uVar4 != 4);
 lVar7 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[lVar7]);
 if (iVar1 != 0) {
 puVar5 = __ptr_00;
 do {
 pvVar2 = (void *)*puVar5;
 puVar5 = puVar5 + 1;
 free(pvVar2);
 } while (__ptr_00 + lVar7 + 1 != puVar5);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00102ced;
 }
 lVar7 = lVar7 + 1;
 __newthread = __newthread + 1;
 } while (lVar7 != 4);
 iVar8 = 0;
 lVar7 = 0;
 iVar1 = 0;
 do {
 pthread_join(*(pthread_t *)((long)__ptr + lVar7),&local_48);
 iVar1 = iVar1 + *local_48;
 iVar8 = iVar8 + local_48[1];
 free(local_48);
 puVar5 = (undefined8 *)((long)__ptr_00 + lVar7);
 lVar7 = lVar7 + 8;
 free((void *)*puVar5);
 } while (lVar7 != 0x20);
 free(__ptr_00);
 free(__ptr);
 if ((iVar1 == 400) && (iVar8 == 600)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00102ced:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_atomic_ops.constprop.0 @ 00102d60 */

undefined8 param_atomic_ops_constprop_0(void)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *ppVar3;
 pthread_t *ppVar4;
 long in_FS_OFFSET;
 undefined4 local_4c;
 pthread_t local_48;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = 500;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102e31;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + 4);
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 ppVar3 = __ptr;
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 do {
 ppVar4 = ppVar3 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 iVar1 = atomic_counter;
 ppVar3 = ppVar4;
 } while (ppVar4 != __ptr + 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102e31:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: param_mutex_lock.constprop.0 @ 00102e80 */

undefined8 param_mutex_lock_constprop_0(void)

{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *__newthread;
 pthread_t *ppVar3;
 long in_FS_OFFSET;
 int local_44;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_44 = 1000;
 __ptr = malloc(0x20);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 shared_counter = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_increment,&local_44);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_00102f38;
 }
 __newthread = __newthread + 1;
 ppVar3 = __ptr;
 } while (__newthread != __ptr + 4);
 do {
 __th = *ppVar3;
 ppVar3 = ppVar3 + 1;
 pthread_join(__th,(void **)0x0);
 } while (ppVar3 != __ptr + 4);
 free(__ptr);
 uVar2 = 0x2a;
 if (local_44 << 2 != shared_counter) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_00102f38:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_strcpy @ 00102f80 */

int param_strcpy(char *param_1,char *param_2)

{
 char *pcVar1;
 
 pcVar1 = stpcpy(param_1,param_2);
 return (int)pcVar1 - (int)param_1;
}



/* Function: call_strcpy @ 00102fa0 */

undefined8 call_strcpy(void)

{
 return 8;
}



/* Function: param_strcmp @ 00102fb0 */

int param_strcmp(char *param_1,char *param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = strcmp(param_1,param_2);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_strcmp @ 00102fe0 */

undefined8 call_strcmp(void)

{
 return 0;
}



/* Function: param_strlen @ 00102ff0 */

void param_strlen(char *param_1)

{
 strlen(param_1);
 return;
}



/* Function: call_strlen @ 00103010 */

undefined8 call_strlen(void)

{
 return 0xc;
}



/* Function: param_memcpy @ 00103020 */

ulong param_memcpy(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return param_3 & 0xffffffff;
}



/* Function: call_memcpy @ 00103040 */

undefined8 call_memcpy(void)

{
 return 0x5a;
}



/* Function: param_memcmp @ 00103050 */

int param_memcmp(void *param_1,void *param_2,size_t param_3)

{
 int iVar1;
 int iVar2;
 
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
}



/* Function: call_memcmp @ 00103080 */

int call_memcmp(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 long in_FS_OFFSET;
 undefined8 local_50;
 undefined4 local_48;
 undefined8 local_40;
 undefined4 local_38;
 undefined8 local_30;
 undefined4 local_28;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 3;
 local_50 = 0x200000001;
 local_40 = 0x200000001;
 local_38 = 4;
 local_30 = 0x200000001;
 local_28 = 3;
 iVar2 = memcmp(&local_50,&local_40,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 iVar2 = memcmp(&local_50,&local_30,0xc);
 iVar3 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar3 = 1;
 }
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar3 + iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_printf @ 00103140 */

void param_printf(undefined4 param_1,undefined8 param_2)

{
 __printf_chk(1,"Value: %d, Name: %s\n",param_1,param_2);
 return;
}



/* Function: call_printf @ 00103160 */

void call_printf(void)

{
 __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105023);
 return;
}



/* Function: param_scanf @ 00103190 */

int param_scanf(undefined8 param_1)

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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_scanf @ 001031f0 */

int call_scanf(void)

{
 int iVar1;
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_18,&local_14);
 if (iVar1 == 2) {
 local_14 = local_14 + local_18;
 }
 else {
 local_14 = -1;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_14;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fopen_fclose @ 00103260 */

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



/* Function: call_fopen_fclose @ 001032b0 */

undefined8 call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 if (-1 < iVar1) {
 return 0x2a;
 }
 }
 return 0xffffffff;
}



/* Function: param_fread_fwrite @ 00103310 */

undefined8 param_fread_fwrite(char *param_1)

{
 FILE *__s;
 size_t sVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 long local_48;
 long local_40;
 short local_38;
 char local_36;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 __s = fopen(param_1,"w+");
 if (__s == (FILE *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 == 0x12) {
 rewind(__s);
 sVar1 = fread(&local_48,1,0x12,__s);
 *(undefined1 *)((long)&local_48 + sVar1) = 0;
 fclose(__s);
 unlink(param_1);
 if ((((sVar1 != 0x12) || (local_40 != 0x6144207473655420 || local_48 != 0x68636e65426e6942))
 || (local_38 != 0x6174)) || (uVar2 = 0x2a, local_36 != '\0')) {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 fclose(__s);
 uVar2 = 0xfffffffe;
 }
 }
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: call_fread_fwrite @ 00103420 */

void call_fread_fwrite(void)

{
 param_fread_fwrite("/tmp/binbench_test.tmp");
 return;
}



/* Function: param_malloc_free @ 00103430 */

int param_malloc_free(ulong param_1)

{
 int *__ptr;
 int *piVar1;
 int *piVar2;
 ulong uVar3;
 int iVar4;
 int iVar5;
 
 __ptr = malloc(param_1 * 4);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 if (param_1 != 0) {
 if (param_1 - 1 < 3) {
 uVar3 = 0;
 }
 else {
 piVar1 = __ptr;
 iVar4 = 0;
 iVar5 = 1;
 do {
 piVar2 = piVar1 + 4;
 *piVar1 = iVar4 * 10;
 piVar1[1] = iVar5 * 10;
 piVar1[2] = (iVar4 + 2) * 10;
 piVar1[3] = (iVar5 + 2) * 10;
 piVar1 = piVar2;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 } while (__ptr + (param_1 & 0xfffffffffffffffc) != piVar2);
 uVar3 = param_1 & 0xfffffffffffffffc;
 if ((param_1 & 3) == 0) goto LAB_00103513;
 }
 __ptr[uVar3] = (int)uVar3 * 10;
 if (uVar3 + 1 < param_1) {
 __ptr[uVar3 + 1] = (int)(uVar3 + 1) * 10;
 if (uVar3 + 2 < param_1) {
 __ptr[uVar3 + 2] = (int)(uVar3 + 2) * 10;
 }
 }
 }
LAB_00103513:
 iVar4 = *__ptr;
 iVar5 = __ptr[param_1 - 1];
 free(__ptr);
 return iVar4 + iVar5;
}



/* Function: call_malloc_free @ 00103540 */

undefined8 call_malloc_free(void)

{
 void *__ptr;
 undefined8 uVar1;
 
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar1 = 0x5a;
 }
 return uVar1;
}



/* Function: param_memset @ 00103570 */

int param_memset(void *param_1,size_t param_2)

{
 memset(param_1,0,param_2);
 if (param_2 == 0) {
 return 0;
 }
 return (int)param_2;
}



/* Function: call_memset @ 00103740 */

undefined8 call_memset(void)

{
 return 0;
}



/* Function: param_strchr_strstr @ 00103750 */

int param_strchr_strstr(char *param_1,char param_2,char *param_3)

{
 int iVar1;
 char *pcVar2;
 int iVar3;
 
 pcVar2 = strchr(param_1,(int)param_2);
 iVar3 = (int)pcVar2 - (int)param_1;
 if (pcVar2 == (char *)0x0) {
 iVar3 = -1;
 }
 pcVar2 = strstr(param_1,param_3);
 iVar1 = -1;
 if (pcVar2 != (char *)0x0) {
 iVar1 = (int)pcVar2 - (int)param_1;
 }
 return iVar3 + iVar1;
}



/* Function: call_strchr_strstr @ 001037b0 */

undefined8 call_strchr_strstr(void)

{
 return 0xf;
}



/* Function: test_standard_library_functions @ 001037c0 */

void test_standard_library_functions(void)

{
 int iVar1;
 int iVar2;
 undefined4 uVar3;
 int iVar4;
 FILE *__stream;
 void *__ptr;
 undefined8 uVar5;
 long in_FS_OFFSET;
 int local_58;
 int local_54;
 undefined8 local_50;
 undefined4 local_48;
 undefined8 local_40;
 undefined4 local_38;
 undefined8 local_30;
 undefined4 local_28;
 long local_20;
 
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00105390);
 __printf_chk(1,&DAT_00105071,8);
 __printf_chk(1,&DAT_0010508c,0);
 __printf_chk(1,&DAT_001050a7,0xc);
 __printf_chk(1,&DAT_001050c3,0x5a);
 local_48 = 3;
 local_50 = 0x200000001;
 local_40 = 0x200000001;
 local_38 = 4;
 local_30 = 0x200000001;
 local_28 = 3;
 iVar1 = memcmp(&local_50,&local_40,0xc);
 iVar4 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar4 = 1;
 }
 iVar2 = memcmp(&local_50,&local_30,0xc);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 __printf_chk(1,&DAT_001050df,iVar1 + iVar4);
 uVar3 = __printf_chk(1,"Value: %d, Name: %s\n",0x2a,&DAT_00105023);
 __printf_chk(1,&DAT_001050fb,uVar3);
 iVar4 = __isoc99_sscanf("123,456","%d,%d",&local_58,&local_54);
 if (iVar4 == 2) {
 local_54 = local_54 + local_58;
 }
 else {
 local_54 = -1;
 }
 __printf_chk(1,&DAT_00105117,local_54);
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar4 = fileno(__stream);
 fclose(__stream);
 uVar5 = 0x2a;
 if (-1 < iVar4) goto LAB_00103987;
 }
 uVar5 = 0xffffffff;
LAB_00103987:
 __printf_chk(1,&DAT_00105134,uVar5);
 uVar3 = param_fread_fwrite("/tmp/binbench_test.tmp");
 __printf_chk(1,&DAT_00105150,uVar3);
 __ptr = malloc(0x28);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 free(__ptr);
 uVar5 = 0x5a;
 }
 __printf_chk(1,&DAT_0010516c,uVar5);
 __printf_chk(1,&DAT_00105188,0);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_001051a3,0xf);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_linux_syscall @ 00103a50 */

ulong param_linux_syscall(undefined8 param_1)

{
 ulong uVar1;
 int *piVar2;
 
 uVar1 = syscall(2,param_1,0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return uVar1 & 0xffffffff;
 }
 piVar2 = __errno_location();
 return (ulong)(uint)-*piVar2;
}



/* Function: call_linux_syscall @ 00103aa0 */

undefined8 call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 undefined8 uVar3;
 
 uVar1 = syscall(2,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(3,uVar1 & 0xffffffff);
 return 0x2a;
 }
 piVar2 = __errno_location();
 uVar3 = 0x2a;
 if (0 < *piVar2) {
 uVar3 = 0xffffffff;
 }
 return uVar3;
}



/* Function: param_win32_api @ 00103b00 */

undefined8 param_win32_api(char *param_1)

{
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 struct stat sStack_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat(param_1,&sStack_a8);
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_win32_api @ 00103b70 */

undefined8 call_win32_api(void)

{
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 struct stat sStack_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = stat("/etc/passwd",&sStack_a8);
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_fork_exec @ 00103be0 */

uint param_fork_exec(undefined8 param_1,undefined8 param_2)

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
 /* WARNING: Subroutine does not return */
 param_fork_exec_part_0(param_1,param_2);
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_fork_exec @ 00103c70 */

undefined8 call_fork_exec(void)

{
 __pid_t _Var1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 uint local_14;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec_part_0("/bin/true",0);
 }
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if (((-1 < _Var1) && ((local_14 & 0x7f) == 0)) && ((char)(local_14 >> 8) == '\0')) {
 uVar2 = 0x2a;
 goto LAB_00103cb2;
 }
 }
 uVar2 = 0xffffffff;
LAB_00103cb2:
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_pipe_communication @ 00103cf0 */

undefined8 param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined8 uVar4;
 long in_FS_OFFSET;
 int local_40;
 int local_3c;
 undefined1 local_38 [40];
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
 /* WARNING: Subroutine does not return */
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_socket_create @ 00103df0 */

undefined8 param_socket_create(void)

{
 int __fd;
 int iVar1;
 undefined8 uVar2;
 long in_FS_OFFSET;
 undefined4 local_2c;
 struct sockaddr local_28;
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
 memcpy(local_28.sa_data, (undefined1 *)0x0, 2);
 local_28.sa_family = 2;
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_shmget_shmat @ 00103f00 */

undefined8 param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 undefined8 *__shmaddr;
 
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return 0xfffffffe;
 }
 __shmaddr = shmat(iVar1,(void *)0x0,0);
 if (__shmaddr != (undefined8 *)0xffffffffffffffff) {
 *(undefined4 *)(__shmaddr + 1) = 0x79726f6d;
 *__shmaddr = 0x654d646572616853;
 *(undefined1 *)((long)__shmaddr + 0xc) = 0;
 shmdt(__shmaddr);
 shmctl(iVar1,0,(shmid_ds *)0x0);
 return 0xc;
 }
 return 0xfffffffd;
 }
 }
 return 0xffffffff;
}



/* Function: call_shmget_shmat @ 00103fc0 */

undefined8 call_shmget_shmat(void)

{
 int iVar1;
 undefined8 uVar2;
 
 iVar1 = param_shmget_shmat();
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_signal_handling @ 00103ff0 */

undefined8 param_signal_handling(void)

{
 __sighandler_t p_Var1;
 undefined8 uVar2;
 int iVar3;
 
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



/* Function: test_system_calls @ 00104140 */

void test_system_calls(void)

{
 int iVar1;
 __pid_t _Var2;
 undefined4 uVar3;
 ulong uVar4;
 int *piVar5;
 undefined8 uVar6;
 long in_FS_OFFSET;
 uint local_ac;
 struct stat local_a8;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001051e5);
 uVar4 = syscall(2,"/etc/passwd",0);
 if ((int)uVar4 < 0) {
 piVar5 = __errno_location();
 uVar6 = 0x2a;
 if (0 < *piVar5) {
 uVar6 = 0xffffffff;
 }
 }
 else {
 syscall(3,uVar4 & 0xffffffff);
 uVar6 = 0x2a;
 }
 __printf_chk(1,&DAT_00105200,uVar6);
 iVar1 = stat("/etc/passwd",&local_a8);
 if (iVar1 < 0) {
 uVar6 = 0xffffffff;
 }
 else {
 uVar6 = 0x2a;
 if (local_a8.st_size < 1) {
 uVar6 = 0xfffffffe;
 }
 }
 __printf_chk(1,&DAT_0010521c,uVar6);
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 == 0) {
 /* WARNING: Subroutine does not return */
 param_fork_exec_part_0("/bin/true",0);
 }
 _Var2 = waitpid(_Var2,(int *)&local_ac,0);
 if (((-1 < _Var2) && ((local_ac & 0x7f) == 0)) && ((char)(local_ac >> 8) == '\0')) {
 uVar6 = 0x2a;
 goto LAB_0010421e;
 }
 }
 uVar6 = 0xffffffff;
LAB_0010421e:
 __printf_chk(1,&DAT_00105238,uVar6);
 uVar3 = param_pipe_communication();
 __printf_chk(1,&DAT_00105254,uVar3);
 uVar3 = param_socket_create();
 __printf_chk(1,&DAT_00105270,uVar3);
 iVar1 = param_shmget_shmat();
 uVar6 = 0x2a;
 if (iVar1 < 1) {
 uVar6 = 0xffffffff;
 }
 __printf_chk(1,&DAT_0010528c,uVar6);
 param_signal_handling();
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_001052a8);
 return;
}



/* Function: param_pthread_create @ 00104320 */

undefined4 param_pthread_create(undefined4 param_1)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_create @ 001043a0 */

undefined4 call_pthread_create(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_24 = 7;
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_pthread_join @ 00104430 */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 undefined8 *__arg;
 long lVar3;
 long lVar4;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 pthread_t local_88 [4];
 undefined8 local_68;
 int aiStack_60 [7];
 undefined1 local_44 [20];
 
 __newthread = local_88;
 *(long *)(local_44 + 4) = *(long *)(in_FS_OFFSET + 0x28);
 __arg = &local_68;
 local_68 = 0xa00000001;
 aiStack_60[0] = 0;
 aiStack_60[1] = 0xb;
 aiStack_60[6] = 0;
 aiStack_60[2] = 0x14;
 aiStack_60[3] = 0;
 aiStack_60[4] = 0x15;
 aiStack_60[5] = 0x1e;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_sum,__arg);
 if (iVar1 != 0) {
 iVar1 = -1;
 goto LAB_001044d9;
 }
 __arg = (undefined8 *)((long)__arg + 0xc);
 __newthread = __newthread + 1;
 } while ((undefined8 *)local_44 != __arg);
 iVar1 = 0;
 lVar3 = 0;
 do {
 iVar2 = pthread_join(local_88[lVar3],(void **)0x0);
 if (iVar2 != 0) {
 iVar1 = -2;
 break;
 }
 lVar4 = lVar3 + 1;
 iVar1 = iVar1 + aiStack_60[lVar3 * 3];
 lVar3 = lVar4;
 } while (lVar4 != 3);
LAB_001044d9:
 if (*(long *)(local_44 + 4) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_pthread_join @ 00104520 */

void call_pthread_join(void)

{
 param_pthread_join();
 return;
}



/* Function: param_mutex_lock @ 00104530 */

undefined8 param_mutex_lock(uint param_1,int param_2)

{
 pthread_t __th;
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *ppVar3;
 pthread_t *__newthread;
 int local_3c [3];
 
 local_3c[0] = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
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
 __th = *ppVar3;
 ppVar3 = ppVar3 + 1;
 pthread_join(__th,(void **)0x0);
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



/* Function: param_condition_variable @ 00104630 */

undefined4 param_condition_variable(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 pthread_t local_28;
 pthread_t local_20;
 undefined4 *local_18;
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
 uVar2 = 0xfffffffe;
 pthread_cancel(local_20);
 }
 }
 else {
 uVar2 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_condition_variable @ 00104700 */

void call_condition_variable(void)

{
 param_condition_variable();
 return;
}



/* Function: param_atomic_ops @ 00104710 */

undefined8 param_atomic_ops(uint param_1,undefined4 param_2)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 uVar2;
 pthread_t *ppVar3;
 long lVar4;
 long in_FS_OFFSET;
 undefined4 local_4c;
 pthread_t local_48;
 long local_40;
 
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 local_4c = param_2;
 __ptr = malloc((long)(int)param_1 << 3);
 if (__ptr == (pthread_t *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 LOCK();
 atomic_counter = 0;
 UNLOCK();
 if ((int)param_1 < 1) {
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 }
 else {
 ppVar3 = __ptr;
 do {
 iVar1 = pthread_create(ppVar3,(pthread_attr_t *)0x0,thread_atomic_increment,&local_4c);
 if (iVar1 != 0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 goto LAB_001047aa;
 }
 ppVar3 = ppVar3 + 1;
 } while (ppVar3 != __ptr + param_1);
 iVar1 = pthread_create(&local_48,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar1 == 0) {
 pthread_join(local_48,(void **)0x0);
 }
 lVar4 = 0;
 do {
 ppVar3 = __ptr + lVar4;
 lVar4 = lVar4 + 1;
 pthread_join(*ppVar3,(void **)0x0);
 } while ((int)lVar4 < (int)param_1);
 }
 iVar1 = atomic_counter;
 free(__ptr);
 uVar2 = 0x2a;
 if (iVar1 < 1) {
 uVar2 = 0xfffffffd;
 }
 }
LAB_001047aa:
 if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar2;
}



/* Function: param_thread_local_storage @ 00104880 */

undefined8 param_thread_local_storage(int param_1)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 void *pvVar2;
 undefined8 uVar3;
 ulong uVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int iVar7;
 ulong uVar8;
 pthread_t *__newthread;
 long in_FS_OFFSET;
 int *local_48;
 long local_40;
 
 uVar4 = (ulong)param_1;
 local_40 = *(long *)(in_FS_OFFSET + 0x28);
 __ptr = malloc(uVar4 * 8);
 __ptr_00 = malloc(uVar4 * 8);
 if ((__ptr == (pthread_t *)0x0) || (__ptr_00 == (undefined8 *)0x0)) {
 uVar3 = 0xffffffff;
 }
 else {
 if (param_1 < 1) {
 iVar7 = 0;
 iVar1 = 0;
 }
 else {
 uVar8 = 0;
 do {
 pvVar2 = malloc(0x10);
 uVar6 = uVar8 & 0xffffffff;
 __ptr_00[uVar8] = pvVar2;
 uVar8 = uVar8 + 1;
 __snprintf_chk(pvVar2,0x10,1,0x10,"Thread-%d",uVar6);
 } while (uVar8 != uVar4);
 uVar8 = 0;
 __newthread = __ptr;
 do {
 iVar1 = pthread_create(__newthread,(pthread_attr_t *)0x0,thread_tls_test,
 (void *)__ptr_00[uVar8]);
 if (iVar1 != 0) {
 puVar5 = __ptr_00;
 do {
 pvVar2 = (void *)*puVar5;
 puVar5 = puVar5 + 1;
 free(pvVar2);
 } while (__ptr_00 + uVar8 + 1 != puVar5);
 free(__ptr_00);
 free(__ptr);
 uVar3 = 0xfffffffe;
 goto LAB_00104997;
 }
 uVar8 = uVar8 + 1;
 __newthread = __newthread + 1;
 } while (uVar8 != uVar4);
 iVar7 = 0;
 uVar8 = 0;
 iVar1 = 0;
 do {
 pthread_join(__ptr[uVar8],&local_48);
 iVar1 = iVar1 + *local_48;
 iVar7 = iVar7 + local_48[1];
 free(local_48);
 puVar5 = __ptr_00 + uVar8;
 uVar8 = uVar8 + 1;
 free((void *)*puVar5);
 } while (uVar8 != uVar4);
 }
 free(__ptr_00);
 free(__ptr);
 if ((param_1 * 100 == iVar1) && (param_1 * 0x96 == iVar7)) {
 uVar3 = 0x2a;
 }
 else {
 uVar3 = 0xfffffffd;
 }
 }
LAB_00104997:
 if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar3;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_thread_concurrency @ 00104a70 */

void test_thread_concurrency(void)

{
 int iVar1;
 undefined4 uVar2;
 long in_FS_OFFSET;
 undefined4 local_24;
 pthread_t local_20;
 undefined4 *local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_001052c4);
 local_24 = 7;
 iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_20,&local_18);
 uVar2 = *local_18;
 free(local_18);
 }
 else {
 uVar2 = 0xffffffff;
 }
 __printf_chk(1,&DAT_001052e2,uVar2);
 uVar2 = param_pthread_join();
 __printf_chk(1,&DAT_001052fe,uVar2);
 uVar2 = param_mutex_lock_constprop_0();
 __printf_chk(1,&DAT_0010531b,uVar2);
 uVar2 = param_condition_variable();
 __printf_chk(1,&DAT_00105337,uVar2);
 uVar2 = param_atomic_ops_constprop_0();
 __printf_chk(1,&DAT_00105353,uVar2);
 param_thread_local_storage_constprop_0();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010536f);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 68 */
