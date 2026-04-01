/* Include standard libraries first to get standard types */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/auxv.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <pthread.h>
#include <errno.h>
#include <sys/time.h>
#include <stdatomic.h>

/* Ghidra concat macros for combining values */
#define CONCAT35(a,b) (((uint)(a) << 0) | ((uint)(b) << 16))
#define CONCAT44(a,b) (((uint)(a) << 0) | ((uint)(b) << 16))
#define CONCAT53(a,b) (((uint64_t)(a) << 0) | ((uint64_t)(b) << 32))

/* Auto-injected type definitions by preprocessor */
/* Note: uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t, int64_t, size_t
   are defined in stdint.h which is included above */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

typedef unsigned char byte;

/* Additional type aliases for decompiled code */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned short undefined3;
typedef unsigned int undefined5;

/* Function pointer and generic types for decompiled code */
typedef void (*code)();
typedef unsigned char undefined;

/* External declarations */
extern int __aarch64_have_lse_atomics;
extern char completed_0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);

/* Function prototypes */
int __isoc99_sscanf(const char *str, const char *format, ...);
void signal_handler(int sig);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int __aarch64_cas4_acq_rel(int param_1, int param_2, int *param_3);

/* ARM64 exclusive monitor intrinsics - stub implementations */
static inline int ExclusiveMonitorPass(void *addr, int type) { return 0; }
static inline int ExclusiveMonitorsStatus(void) { return 0; }

/* Lock Observable primitives - stub implementations */
static inline void LOAcquire(void) { }
static inline void LORelease(void) { }

/* ARM64 thread register access - read thread pointer */
static inline void *get_tpidr_el0(void) {
    void *tp;
    __asm__ volatile ("mrs %0, tpidr_el0" : "=r"(tp));
    return tp;
}

/* Global variables for signal handling */
int signal_received;
int signal_number;

/* Global variables for condition variable synchronization */
int ready;
int data;

/* Global variables for atomic operations */
int atomic_counter;

/* Global variables for mutex and shared counter */
pthread_mutex_t counter_mutex;
int shared_counter;

/* Global variables for condition variables */
pthread_mutex_t cond_mutex;
pthread_cond_t cond;

/* Data section strings */
const char *DAT_00103366 = "HelloLib";
const char *DAT_001036ac = "Standard Library Functions Test";
const char *DAT_001033b4 = "String length: %zu\n";
const char *DAT_001033cf = "strcmp result: %d\n";
const char *DAT_001033ea = "strlen result: %d\n";
const char *DAT_00103406 = "memcmp result: %d\n";
const char *DAT_00103422 = "Value: %d, Name: %s\n";
const char *DAT_0010343e = "printf result: %u\n";
const char *DAT_0010345a = "sscanf result: %u\n";
const char *DAT_00103477 = "fopen result: %u\n";
const char *DAT_00103493 = "fread result: %u\n";
const char *DAT_001034af = "malloc result: %d\n";
const char *DAT_001034cb = "memset result: %d\n";
const char *DAT_001034e6 = "strchr result: %d\n";
const char *DAT_00103535 = "syscall result: %u\n";
const char *DAT_00103551 = "stat result: %u\n";
const char *DAT_0010356d = "fork waitpid result: %u\n";
const char *DAT_00103589 = "pipe result: %u\n";
const char *DAT_001035a5 = "socket result: %u\n";
const char *DAT_001035c1 = "shm result: %u\n";
const char *DAT_001035dd = "signal result: %u\n";
const char *DAT_00103603 = "thread compute: %u\n";
const char *DAT_0010361f = "pthread join: %u\n";
const char *DAT_0010363c = "mutex lock: %u\n";
const char *DAT_00103658 = "condition variable: %u\n";
const char *DAT_00103674 = "atomic ops: %u\n";
const char *DAT_00103690 = "thread local storage: %u\n";
const char *DAT_001036d0 = "System Call Tests\n";
const char *DAT_001036eb = "Thread Concurrency Tests\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/6/6_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001012e0 @ 001012e0 */

void FUN_001012e0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00101700 */

void init_have_lse_atomics(void)

{
 unsigned long extraout_var;
 
 extraout_var = getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001017fc @ 001017fc */

void FUN_001017fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_strcpy @ 00101854 */

int param_strcpy(char *dst,char *src)

{
 char *__s;
 size_t sVar1;
 
 __s = strcpy(dst,src);
 sVar1 = strlen(__s);
 return (int)sVar1;
}



/* Function: call_strcpy @ 0010186c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcpy(void)

{
 size_t sVar1;
 char local_30 [32];
 
 /* Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): 0]
 Unresolved local var: int len@[???] */
 strncpy(local_30,"HelloLib",9);
 sVar1 = strlen(local_30);
 return (int)sVar1;
}



/* Function: param_strcmp @ 001018a0 */

int param_strcmp(char *s1,char *s2)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = strcmp(s1,s2);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_strcmp @ 001018c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 return 0;
}



/* Function: param_strlen @ 001018cc */

int param_strlen(char *str)

{
 size_t sVar1;
 
 /* Unresolved local var: size_t len@[???] */
 sVar1 = strlen(str);
 return (int)sVar1;
}



/* Function: call_strlen @ 001018e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strlen(void)

{
 /* Unresolved local var: char * test@[???] */
 return 0xc;
}



/* Function: param_memcpy @ 001018e8 */

int param_memcpy(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return (int)n;
}



/* Function: call_memcpy @ 0010190c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcpy(void)

{
 /* Unresolved local var: int[5] src@[???]
 Unresolved local var: int[5] dst@[???] */
 return 0x5a;
}



/* Function: param_memcmp @ 00101914 */

int param_memcmp(void *p1,void *p2,size_t n)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar2 = memcmp(p1,p2,n);
 iVar1 = -(uint)(iVar2 != 0);
 if (0 < iVar2) {
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_memcmp @ 00101938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memcmp(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int[3] arr1@[???]
 Unresolved local var: int[3] arr2@[???]
 Unresolved local var: int[3] arr3@[???]
 Unresolved local var: int r2@[???] */
 return -1;
}



/* Function: param_printf @ 00101940 */

int param_printf(int x,char *name)

{
 int iVar1;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",(ulong)(uint)x,name);
 return iVar1;
}



/* Function: call_printf @ 00101954 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_printf(void)

{
 int iVar1;
 
 /* Unresolved local var: int chars@[???] */
 iVar1 = printf("Value: %d, Name: %s\n",0x2a,&DAT_00103366);
 return iVar1;
}



/* Function: param_scanf @ 0010196c */

int param_scanf(char *input_str)

{
 int iVar1;
 int local_18;
 int local_14;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[???]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf(input_str,"%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: call_scanf @ 001019ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_scanf(void)

{
 int iVar1;
 int local_18;
 int local_14;
 
 /* Unresolved local var: int a@[???]
 Unresolved local var: int b@[DW_OP_breg31(sp): +8]
 Unresolved local var: int ret@[???] */
 iVar1 = __isoc99_sscanf("123,456","%d,%d",&local_14,&local_18);
 local_18 = local_18 + local_14;
 if (iVar1 != 2) {
 local_18 = -1;
 }
 return local_18;
}



/* Function: param_fopen_fclose @ 001019f4 */

int param_fopen_fclose(char *filename)

{
 int iVar1;
 FILE *__stream;
 
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen(filename,"r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 return iVar1;
 }
 return -1;
}



/* Function: call_fopen_fclose @ 00101a44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fopen_fclose(void)

{
 int iVar1;
 FILE *__stream;
 int iVar2;
 
 /* Unresolved local var: int fd@[???] */
 /* Unresolved local var: FILE * fp@[???]
 Unresolved local var: int fd@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar1 = fileno(__stream);
 fclose(__stream);
 iVar2 = 0x2a;
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
 }
 return -1;
}



/* Function: param_fread_fwrite @ 00101aa4 */

int param_fread_fwrite(char *tmpfile)

{
 FILE *__s;
 size_t sVar1;
 int iVar2;
 long local_50;
 undefined3 uStack_48;
 undefined5 local_45;
 undefined3 uStack_40;
 
 /* Unresolved local var: char[32] read_buffer@[DW_OP_breg31(sp): 0]
 Unresolved local var: FILE * fp@[???]
 Unresolved local var: size_t written@[???]
 Unresolved local var: size_t read@[???]
 Unresolved local var: char * write_data@[???] */
 __s = fopen(tmpfile,"w+");
 if (__s == (FILE *)0x0) {
 return -1;
 }
 sVar1 = fwrite("BinBench Test Data",1,0x12,__s);
 if (sVar1 != 0x12) {
 fclose(__s);
 return -2;
 }
 rewind(__s);
 sVar1 = fread(&local_50,1,0x12,__s);
 *(undefined1 *)((long)&local_50 + sVar1) = 0;
 fclose(__s);
 unlink(tmpfile);
 iVar2 = -3;
 if ((sVar1 == 0x12) &&
 (iVar2 = 0x2a,
 (local_50 != 0x68636e65426e6942 || CONCAT53(local_45,uStack_48) != 0x6144207473655420) ||
 CONCAT35(uStack_40,local_45) != 0x61746144207473)) {
 iVar2 = -3;
 }
 return iVar2;
}



/* Function: call_fread_fwrite @ 00101bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fread_fwrite(void)

{
 int iVar1;
 
 iVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 return iVar1;
}



/* Function: param_malloc_free @ 00101be4 */

int param_malloc_free(size_t size)

{
 int *__ptr;
 int extraout_w8;
 ulong uVar1;
 int *piVar2;
 long lVar3;
 ulong uVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 
 /* Unresolved local var: int * ptr@[???]
 Unresolved local var: int sum@[???] */
 __ptr = malloc(size << 2);
 if (__ptr == (int *)0x0) {
 return -1;
 }
 /* Unresolved local var: size_t i@[???] */
 iVar5 = extraout_w8;
 if (size == 0) goto LAB_00101c94;
 if (size < 8) {
 uVar1 = 0;
LAB_00101c70:
 lVar3 = size - uVar1;
 iVar5 = (int)uVar1 * 10;
 piVar2 = __ptr + uVar1;
 do {
 *piVar2 = iVar5;
 lVar3 = lVar3 + -1;
 iVar5 = iVar5 + 10;
 piVar2 = piVar2 + 1;
 } while (lVar3 != 0);
 }
 else {
 uVar1 = size & 0xfffffffffffffff8;
 iVar7 = 2;
 iVar8 = 3;
 iVar5 = 0;
 iVar6 = 1;
 piVar2 = __ptr + 4;
 uVar4 = uVar1;
 do {
 iVar9 = iVar5 * 10;
 iVar10 = iVar6 * 10;
 iVar11 = iVar7 * 10;
 iVar12 = iVar8 * 10;
 uVar4 = uVar4 - 8;
 iVar5 = iVar5 + 8;
 iVar6 = iVar6 + 8;
 iVar7 = iVar7 + 8;
 iVar8 = iVar8 + 8;
 *(ulong *)(piVar2 + -2) = CONCAT44(iVar12,iVar11);
 *(ulong *)(piVar2 + -4) = CONCAT44(iVar10,iVar9);
 *(ulong *)(piVar2 + 2) = CONCAT44(iVar12 + 0x28,iVar11 + 0x28);
 *(ulong *)piVar2 = CONCAT44(iVar10 + 0x28,iVar9 + 0x28);
 piVar2 = piVar2 + 8;
 } while (uVar4 != 0);
 if (uVar1 != size) goto LAB_00101c70;
 }
 iVar5 = *__ptr;
LAB_00101c94:
 iVar6 = __ptr[size - 1];
 free(__ptr);
 return iVar6 + iVar5;
}



/* Function: call_malloc_free @ 00101cb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_malloc_free(void)

{
 return 0x5a;
}



/* Function: param_memset @ 00101cbc */

int param_memset(void *buffer,size_t size)

{
 uint uVar1;
 uint uVar2;
 ulong uVar3;
 byte *pbVar4;
 uint *puVar5;
 long lVar6;
 ulong uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: uchar * bytes@[???] */
 memset(buffer,0,size);
 /* Unresolved local var: size_t i@[???] */
 if (size == 0) {
 iVar8 = 0;
 }
 else {
 if (size < 8) {
 uVar3 = 0;
 iVar8 = 0;
 }
 else {
 uVar3 = size & 0xfffffffffffffff8;
 puVar5 = (uint *)((long)buffer + 4);
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
 if (uVar3 == size) {
 return iVar8;
 }
 }
 lVar6 = size - uVar3;
 pbVar4 = (byte *)((long)buffer + uVar3);
 do {
 lVar6 = lVar6 + -1;
 iVar8 = iVar8 + (uint)*pbVar4;
 pbVar4 = pbVar4 + 1;
 } while (lVar6 != 0);
 }
 return iVar8;
}



/* Function: call_memset @ 00101d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_memset(void)

{
 /* Unresolved local var: int[10] buffer@[???] */
 return 0;
}



/* Function: param_strchr_strstr @ 00101d70 */

int param_strchr_strstr(char *str,char ch,char *substr)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 
 /* Unresolved local var: char * pos1@[???]
 Unresolved local var: int index1@[???]
 Unresolved local var: char * pos2@[???]
 Unresolved local var: int index2@[???] */
 pcVar3 = strchr(str,(uint)(byte)ch);
 iVar1 = (int)pcVar3 - (int)str;
 if (pcVar3 == (char *)0x0) {
 iVar1 = -1;
 }
 pcVar3 = strstr(str,substr);
 iVar2 = (int)pcVar3 - (int)str;
 if (pcVar3 == (char *)0x0) {
 iVar2 = -1;
 }
 return iVar2 + iVar1;
}



/* Function: call_strchr_strstr @ 00101dc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_strchr_strstr(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: char * text@[???] */
 return 0xf;
}



/* Function: test_standard_library_functions @ 00101dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_standard_library_functions(void)

{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 FILE *__stream;
 uint uVar4;
 int local_50 [2];
 undefined1 local_48;
 int local_14;
 
 puts(DAT_001036ac);
 /* Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): 0] */
 local_48 = 0;
 memcpy(local_50, "\x48\x65\x6c\x6c\x6f\x4c\x69\x62", 8);
 sVar3 = strlen((char *)local_50);
 printf(DAT_001033b4,sVar3);
 printf(DAT_001033cf,0);
 printf(DAT_001033ea,0xc);
 printf(DAT_00103406,0x5a);
 uVar4 = 0xffffffff;
 printf(DAT_00103422,0xffffffff);
 uVar1 = printf("Value: %d, Name: %s\n",0x2a,DAT_00103366);
 printf(DAT_0010343e,(ulong)uVar1);
 /* Unresolved local var: int b@[???]
 Unresolved local var: int a@[DW_OP_breg31(sp): 0]
 Unresolved local var: int ret@[???] */
 iVar2 = __isoc99_sscanf("123,456","%d,%d",local_50,&local_14);
 uVar1 = local_14 + local_50[0];
 if (iVar2 != 2) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_0010345a,(ulong)uVar1);
 /* Unresolved local var: int fd@[???]
 Unresolved local var: FILE * fp@[???] */
 __stream = fopen("/etc/passwd","r");
 if (__stream != (FILE *)0x0) {
 iVar2 = fileno(__stream);
 fclose(__stream);
 uVar4 = 0x2a;
 if (iVar2 < 0) {
 uVar4 = 0xffffffff;
 }
 }
 printf(DAT_00103477,(ulong)uVar4);
 uVar1 = param_fread_fwrite("/tmp/binbench_test.tmp");
 printf(DAT_00103493,(ulong)uVar1);
 printf(DAT_001034af,0x5a);
 printf(DAT_001034cb,0);
 printf(DAT_001034e6,0xf);
 return;
}



/* Function: param_linux_syscall @ 00101f6c */

int param_linux_syscall(char *pathname)

{
 ulong uVar1;
 int *piVar2;
 
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(0x38,0xffffff9c,pathname,0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 return (int)uVar1;
 }
 piVar2 = __errno_location();
 return -*piVar2;
}



/* Function: call_linux_syscall @ 00101fcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_linux_syscall(void)

{
 ulong uVar1;
 int *piVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: int fd@[???] */
 uVar1 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 if (-1 < (int)uVar1) {
 syscall(0x39,uVar1 & 0xffffffff);
 iVar3 = 0x2a;
 if ((int)uVar1 < 0) {
 iVar3 = -1;
 }
 return iVar3;
 }
 piVar2 = __errno_location();
 iVar3 = 0x2a;
 if (-*piVar2 < 0) {
 iVar3 = -1;
 }
 return iVar3;
}



/* Function: param_win32_api @ 00102040 */

int param_win32_api(char *filename)

{
 int iVar1;
 int iVar2;
 struct stat st;
 
 /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
 iVar1 = stat(filename,&st);
 iVar2 = 0x2a;
 if (st.st_size < 1) {
 iVar2 = -2;
 }
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: call_win32_api @ 0010207c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_win32_api(void)

{
 int iVar1;
 int iVar2;
 struct stat st;
 long local_60;
 
 /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
 iVar1 = stat("/etc/passwd",&st);
 iVar2 = 0x2a;
 if (local_60 < 1) {
 iVar2 = -2;
 }
 if (iVar1 < 0) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_fork_exec @ 001020c0 */

int param_fork_exec(char *prog,char *arg)

{
 __pid_t _Var1;
 uint local_24;
 
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (_Var1 < 0) {
 return -1;
 }
 if (_Var1 == 0) {
 execl(prog,prog,arg,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_24,0);
 if (_Var1 < 0) {
 return -2;
 }
 if ((local_24 & 0x7f) != 0) {
 return -3;
 }
 return local_24 >> 8 & 0xff;
}



/* Function: call_fork_exec @ 0010216c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fork_exec(void)

{
 __pid_t _Var1;
 int iVar2;
 uint local_14;
 
 /* Unresolved local var: int ret@[???] */
 /* Unresolved local var: pid_t pid@[???] */
 _Var1 = fork();
 if (-1 < _Var1) {
 if (_Var1 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var1 = waitpid(_Var1,(int *)&local_14,0);
 if ((-1 < _Var1) && ((local_14 & 0x7f) == 0)) {
 iVar2 = 0x2a;
 if ((local_14 & 0xff00) != 0) {
 iVar2 = -1;
 }
 return iVar2;
 }
 }
 return -1;
}



/* Function: param_pipe_communication @ 001021e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined1 auStack_48 [32];
 int local_28;
 int local_24;
 
 /* Unresolved local var: int[2] pipefd@[???]
 Unresolved local var: char[32] buffer@[DW_OP_breg31(sp): +8]
 Unresolved local var: pid_t pid@[???] */
 iVar1 = pipe(&local_28);
 if (iVar1 < 0) {
 return -1;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 /* Unresolved local var: ssize_t bytes@[???] */
 close(local_24);
 sVar3 = read(local_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(local_28);
 wait((void *)0x0);
 iVar1 = 0x2a;
 if (sVar3 < 1) {
 iVar1 = -3;
 }
 return iVar1;
 }
 /* Unresolved local var: char * msg@[???] */
 close(local_28);
 write(local_24,"HelloPipe",9);
 close(local_24);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 return -2;
}



/* Function: call_pipe_communication @ 001022b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pipe_communication(void)

{
 int iVar1;
 __pid_t _Var2;
 ssize_t sVar3;
 undefined1 auStack_48 [32];
 int iStack_28;
 int iStack_24;
 
 iVar1 = pipe(&iStack_28);
 if (iVar1 < 0) {
 return -1;
 }
 _Var2 = fork();
 if (-1 < _Var2) {
 if (_Var2 != 0) {
 close(iStack_24);
 sVar3 = read(iStack_28,auStack_48,0x1f);
 auStack_48[sVar3] = 0;
 close(iStack_28);
 wait((void *)0x0);
 iVar1 = 0x2a;
 if (sVar3 < 1) {
 iVar1 = -3;
 }
 return iVar1;
 }
 close(iStack_28);
 write(iStack_24,"HelloPipe",9);
 close(iStack_24);
 /* WARNING: Subroutine does not return */
 _exit(0);
 }
 return -2;
}



/* Function: param_socket_create @ 001022bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr local_38;
 undefined4 local_24;
 
 /* Unresolved local var: sockaddr_in addr@[DW_OP_breg31(sp): +8]
 Unresolved local var: int sock@[???]
 Unresolved local var: int opt@[???] */
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 return -1;
 }
 local_24 = 1;
 iVar2 = setsockopt(iVar1,1,2,&local_24,4);
 if (-1 < iVar2) {
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
 local_38.sa_data[0xb] = '\0';
 local_38.sa_data[0xc] = '\0';
 local_38.sa_data[0xd] = '\0';
 iVar2 = bind(iVar1,&local_38,0x10);
 if (-1 < iVar2) {
 iVar2 = listen(iVar1,5);
 close(iVar1);
 iVar1 = -4;
 if (-1 < iVar2) {
 iVar1 = 0x2a;
 }
 return iVar1;
 }
 close(iVar1);
 return -3;
 }
 close(iVar1);
 return -2;
}



/* Function: call_socket_create @ 001023a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_socket_create(void)

{
 int iVar1;
 int iVar2;
 struct sockaddr sStack_38;
 undefined4 uStack_24;
 
 iVar1 = socket(2,1,0);
 if (iVar1 < 0) {
 return -1;
 }
 uStack_24 = 1;
 iVar2 = setsockopt(iVar1,1,2,&uStack_24,4);
 if (-1 < iVar2) {
 sStack_38.sa_family = 2;
 sStack_38.sa_data[0] = '\0';
 sStack_38.sa_data[1] = '\0';
 sStack_38.sa_data[2] = '\0';
 sStack_38.sa_data[3] = '\0';
 sStack_38.sa_data[4] = '\0';
 sStack_38.sa_data[5] = '\0';
 sStack_38.sa_data[6] = '\0';
 sStack_38.sa_data[7] = '\0';
 sStack_38.sa_data[8] = '\0';
 sStack_38.sa_data[9] = '\0';
 sStack_38.sa_data[10] = '\0';
 sStack_38.sa_data[0xb] = '\0';
 sStack_38.sa_data[0xc] = '\0';
 sStack_38.sa_data[0xd] = '\0';
 iVar2 = bind(iVar1,&sStack_38,0x10);
 if (-1 < iVar2) {
 iVar2 = listen(iVar1,5);
 close(iVar1);
 iVar1 = -4;
 if (-1 < iVar2) {
 iVar1 = 0x2a;
 }
 return iVar1;
 }
 close(iVar1);
 return -3;
 }
 close(iVar1);
 return -2;
}



/* Function: param_shmget_shmat @ 001023a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_shmget_shmat(void)

{
 int iVar1;
 key_t __key;
 char *__s;
 size_t sVar2;
 
 /* Unresolved local var: char * ftok_path@[???]
 Unresolved local var: int fd@[???]
 Unresolved local var: key_t key@[???]
 Unresolved local var: int shmid@[???]
 Unresolved local var: char * shm@[???]
 Unresolved local var: int len@[???] */
 iVar1 = open("/tmp/binbench_shm",0x42,0x1b6);
 if (-1 < iVar1) {
 close(iVar1);
 __key = ftok("/tmp/binbench_shm",0x2a);
 if (-1 < __key) {
 iVar1 = shmget(__key,0x1000,0x3b6);
 if (iVar1 < 0) {
 return -2;
 }
 __s = shmat(iVar1,(void *)0x0,0);
 if (__s != (char *)0xffffffffffffffff) {
 strncpy(__s,"SharedMemory",0xd);
 sVar2 = strlen(__s);
 shmdt(__s);
 shmctl(iVar1,0,(struct shmid_ds *)0x0);
 return (int)sVar2;
 }
 return -3;
 }
 }
 return -1;
}



/* Function: call_shmget_shmat @ 001024a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_shmget_shmat(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int ret@[???] */
 iVar1 = param_shmget_shmat();
 iVar2 = 0x2a;
 if (iVar1 < 1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_signal_handling @ 001024c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_signal_handling(void)

{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 int iVar4;
 
 /* Unresolved local var: int attempts@[???] */
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -1;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -2;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar4 = 1000;
 do {
 usleep(1000);
 bVar1 = iVar4 != 0;
 bVar2 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if (signal_received == 0) {
 return -3;
 }
 if (signal_number != 10) {
 return -4;
 }
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar4 = 2000;
 do {
 usleep(1000);
 bVar1 = iVar4 != 0;
 bVar2 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return -5;
}



/* Function: signal_handler @ 00102638 */

void signal_handler(int sig)

{
 signal_received = 1;
 signal_number = sig;
 return;
}



/* Function: call_signal_handling @ 00102650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_signal_handling(void)

{
 bool bVar1;
 bool bVar2;
 __sighandler_t p_Var3;
 int iVar4;
 
 p_Var3 = signal(10,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -1;
 }
 p_Var3 = signal(0xe,signal_handler);
 if (p_Var3 == (__sighandler_t)0xffffffffffffffff) {
 return -2;
 }
 signal_received = 0;
 raise(10);
 if (signal_received == 0) {
 iVar4 = 1000;
 do {
 usleep(1000);
 bVar1 = iVar4 != 0;
 bVar2 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if (signal_received == 0) {
 return -3;
 }
 if (signal_number != 10) {
 return -4;
 }
 signal_received = 0;
 alarm(1);
 if (signal_received == 0) {
 iVar4 = 2000;
 do {
 usleep(1000);
 bVar1 = iVar4 != 0;
 bVar2 = iVar4 != 1;
 iVar4 = iVar4 + -1;
 } while ((signal_received == 0 && bVar1) && (signal_received != 0 || bVar2));
 }
 if ((signal_received != 0) && (signal_number == 0xe)) {
 signal(10,(__sighandler_t)0x0);
 signal(0xe,(__sighandler_t)0x0);
 return 0x2a;
 }
 return -5;
}



/* Function: test_system_calls @ 00102654 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_system_calls(void)

{
 uint uVar1;
 int iVar2;
 __pid_t _Var3;
 uint uVar4;
 ulong uVar5;
 int *piVar6;
 uint local_a0 [12];
 long local_70;
 
 puts(DAT_001036d0);
 /* Unresolved local var: int result@[???]
 Unresolved local var: int fd@[???] */
 uVar5 = syscall(0x38,0xffffff9c,"/etc/passwd",0);
 iVar2 = (int)uVar5;
 if (iVar2 < 0) {
 piVar6 = __errno_location();
 iVar2 = -*piVar6;
 }
 else {
 syscall(0x39,uVar5 & 0xffffffff);
 }
 uVar4 = 0x2a;
 uVar1 = uVar4;
 if (iVar2 < 0) {
 uVar1 = 0xffffffff;
 }
 printf(DAT_00103535,(ulong)uVar1);
 /* Unresolved local var: stat st@[DW_OP_breg31(sp): 0] */
 iVar2 = stat("/etc/passwd",(stat *)local_a0);
 if (local_70 < 1) {
 uVar4 = 0xfffffffe;
 }
 if (iVar2 < 0) {
 uVar4 = 0xffffffff;
 }
 printf(DAT_00103551,(ulong)uVar4);
 /* Unresolved local var: int ret@[???]
 Unresolved local var: pid_t pid@[???] */
 _Var3 = fork();
 if (-1 < _Var3) {
 if (_Var3 == 0) {
 execl("/bin/true","/bin/true",0,0);
 /* WARNING: Subroutine does not return */
 _exit(0x7f);
 }
 /* Unresolved local var: int status@[???]
 Unresolved local var: pid_t wpid@[???] */
 _Var3 = waitpid(_Var3,(int *)local_a0,0);
 if (-1 < _Var3) {
 if ((local_a0[0] & 0x7f) == 0) {
 uVar4 = 0x2a;
 if ((local_a0[0] & 0xff00) != 0) {
 uVar4 = 0xffffffff;
 }
 uVar5 = (ulong)uVar4;
 goto LAB_00102724;
 }
 }
 }
 uVar5 = 0xffffffff;
LAB_00102724:
 printf(DAT_0010356d,uVar5);
 uVar4 = param_pipe_communication();
 printf(DAT_00103589,(ulong)uVar4);
 uVar4 = param_socket_create();
 printf(DAT_001035a5,(ulong)uVar4);
 /* Unresolved local var: int ret@[???] */
 iVar2 = param_shmget_shmat();
 uVar4 = 0x2a;
 if (iVar2 < 1) {
 uVar4 = 0xffffffff;
 }
 printf(DAT_001035c1,(ulong)uVar4);
 uVar4 = param_signal_handling();
 printf(DAT_001035dd,(ulong)uVar4);
 return;
}



/* Function: thread_compute @ 001027c4 */

void * thread_compute(void *arg)

{
 int iVar1;
 int *piVar2;
 
 /* Unresolved local var: int * input@[???]
 Unresolved local var: int value@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ret@[???] */
 iVar1 = *(int *)arg;
 piVar2 = malloc(4);
 *piVar2 = iVar1 * iVar1;
 return piVar2;
}



/* Function: param_pthread_create @ 001027f0 */

int param_pthread_create(int x)

{
 int iVar1;
 int *local_30;
 int local_24;
 pthread_t local_8;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_24 = x;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 != 0) {
 return -1;
 }
 pthread_join(local_8,(void **)&local_30);
 iVar1 = *local_30;
 free(local_30);
 return iVar1;
}



/* Function: call_pthread_create @ 00102864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_create(void)

{
 int iVar1;
 void *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 != 0) {
 return -1;
 }
 pthread_join(local_8,&local_30);
 iVar1 = *(int *)local_30;
 free(local_30);
 return iVar1;
}



/* Function: thread_sum @ 001028dc */

void * thread_sum(void *arg)

{
 uint uVar1;
 int iVar2;
 
 /* Unresolved local var: ThreadData * data@[DW_OP_reg0(x0)]
 Unresolved local var: int i@[???] */
 uVar1 = *(uint *)arg;
 iVar2 = *(int *)((long)arg + 4);
 *(undefined4 *)((long)arg + 8) = 0;
 if ((int)uVar1 <= iVar2) {
 *(uint *)((long)arg + 8) =
 iVar2 + (iVar2 - uVar1) * uVar1 +
 (int)((ulong)(iVar2 + ~uVar1) * (ulong)(iVar2 - uVar1) >> 1);
 }
 return (void *)0x0;
}



/* Function: param_pthread_join @ 00102910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined8 local_60;
 int local_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 int local_4c;
 undefined8 local_48;
 int local_40;
 pthread_t local_38;
 pthread_t local_30;
 pthread_t local_28;
 
 /* Unresolved local var: pthread_t[3] tids@[???]
 Unresolved local var: ThreadData[3] data@[DW_OP_breg31(sp): 0]
 Unresolved local var: int total@[???] */
 /* Unresolved local var: int i@[???] */
 local_58 = 0;
 local_4c = 0;
 local_40 = 0;
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
 /* Unresolved local var: int i@[???] */
 iVar2 = pthread_join(local_38,(void **)0x0);
 iVar1 = local_58;
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = pthread_join(local_30,(void **)0x0);
 iVar2 = local_4c;
 if (iVar3 != 0) {
 return -2;
 }
 iVar3 = pthread_join(local_28,(void **)0x0);
 if (iVar3 != 0) {
 return -2;
 }
 return local_40 + iVar2 + iVar1;
}



/* Function: call_pthread_join @ 00102a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_pthread_join(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 undefined8 uStack_60;
 int iStack_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 int iStack_4c;
 undefined8 uStack_48;
 int iStack_40;
 pthread_t pStack_38;
 pthread_t pStack_30;
 pthread_t pStack_28;
 
 iStack_58 = 0;
 iStack_4c = 0;
 iStack_40 = 0;
 uStack_60 = 0xa00000001;
 uStack_54 = 0xb;
 uStack_50 = 0x14;
 uStack_48 = 0x1e00000015;
 iVar1 = pthread_create(&pStack_38,(pthread_attr_t *)0x0,thread_sum,&uStack_60);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&pStack_30,(pthread_attr_t *)0x0,thread_sum,&uStack_54);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&pStack_28,(pthread_attr_t *)0x0,thread_sum,&uStack_48);
 if (iVar1 != 0) {
 return -1;
 }
 iVar2 = pthread_join(pStack_38,(void **)0x0);
 iVar1 = iStack_58;
 if (iVar2 != 0) {
 return -2;
 }
 iVar3 = pthread_join(pStack_30,(void **)0x0);
 iVar2 = iStack_4c;
 if (iVar3 != 0) {
 return -2;
 }
 iVar3 = pthread_join(pStack_28,(void **)0x0);
 if (iVar3 != 0) {
 return -2;
 }
 return iStack_40 + iVar2 + iVar1;
}



/* Function: thread_increment @ 00102a80 */

void * thread_increment(void *arg)

{
 int iVar1;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 do {
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 iVar1 = iVar1 + -1;
 } while (iVar1 != 0);
 }
 return (void *)0x0;
}



/* Function: param_mutex_lock @ 00102ae8 */

int param_mutex_lock(int thread_count,int iterations_per_thread)

{
 int iVar1;
 pthread_t *__ptr;
 pthread_t *ppVar2;
 ulong uVar3;
 long lVar4;
 int local_34;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: int expected@[???] */
 local_34 = iterations_per_thread;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 shared_counter = 0;
 if (0 < thread_count) {
 uVar3 = (ulong)(uint)thread_count;
 lVar4 = 0;
 do {
 iVar1 = pthread_create((pthread_t *)((long)__ptr + lVar4),(pthread_attr_t *)0x0,
 thread_increment,&local_34);
 if (iVar1 != 0) {
 free(__ptr);
 return -2;
 }
 lVar4 = lVar4 + 8;
 } while (uVar3 * 8 - lVar4 != 0);
 /* Unresolved local var: int i@[???] */
 ppVar2 = __ptr;
 if (0 < thread_count) {
 do {
 pthread_join(*ppVar2,(void **)0x0);
 uVar3 = uVar3 - 1;
 ppVar2 = ppVar2 + 1;
 } while (uVar3 != 0);
 }
 }
 free(__ptr);
 iVar1 = 0x2a;
 if (shared_counter != local_34 * thread_count) {
 iVar1 = -3;
 }
 return iVar1;
}



/* Function: call_mutex_lock @ 00102bfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mutex_lock(void)

{
 int iVar1;
 
 iVar1 = param_mutex_lock(4,1000);
 return iVar1;
}



/* Function: consumer_thread @ 00102c08 */

void * consumer_thread(void *arg)

{
 undefined4 *puVar1;
 undefined4 uVar2;
 
 /* Unresolved local var: int received@[???]
 Unresolved local var: int * ret@[???] */
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if ((ready & 1) == 0) {
 do {
 pthread_cond_wait((pthread_cond_t *)&cond,(pthread_mutex_t *)&cond_mutex);
 } while (ready != 1);
 }
 uVar2 = 0x2a;
 if (data == '\0') {
 uVar2 = 0;
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 puVar1 = malloc(4);
 *puVar1 = uVar2;
 return puVar1;
}



/* Function: producer_thread @ 00102c7c */

void * producer_thread(void *arg)

{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return (void *)0x0;
}



/* Function: param_condition_variable @ 00102cd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_condition_variable(void)

{
 int iVar1;
 int *local_30;
 pthread_t local_28;
 pthread_t local_8;
 
 /* Unresolved local var: pthread_t consumer@[???]
 Unresolved local var: pthread_t producer@[???]
 Unresolved local var: void * consumer_ret@[???]
 Unresolved local var: int result@[???] */
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&local_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 != 0) {
 pthread_cancel(local_28);
 return -2;
 }
 pthread_join(local_28,&local_30);
 pthread_join(local_8,(void **)0x0);
 iVar1 = *local_30;
 free(local_30);
 return iVar1;
}



/* Function: call_condition_variable @ 00102da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_condition_variable(void)

{
 int iVar1;
 int *piStack_30;
 pthread_t pStack_28;
 pthread_t pStack_8;
 
 ready = 0;
 data = 0;
 iVar1 = pthread_create(&pStack_28,(pthread_attr_t *)0x0,consumer_thread,(void *)0x0);
 if (iVar1 != 0) {
 return -1;
 }
 iVar1 = pthread_create(&pStack_8,(pthread_attr_t *)0x0,producer_thread,(void *)0x0);
 if (iVar1 != 0) {
 pthread_cancel(pStack_28);
 return -2;
 }
 pthread_join(pStack_28,&piStack_30);
 pthread_join(pStack_8,(void **)0x0);
 iVar1 = *piStack_30;
 free(piStack_30);
 return iVar1;
}



/* Function: thread_atomic_increment @ 00102da4 */

void * thread_atomic_increment(void *arg)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int iterations@[???] */
 iVar1 = *(int *)arg;
 /* Unresolved local var: int i@[???] */
 if (0 < iVar1) {
 iVar2 = 0;
 do {
 /* Unresolved local var: int desired@[???]
 Unresolved local var: int expected@[???] */
 __aarch64_ldadd4_acq_rel(1,&atomic_counter);
 __aarch64_cas4_acq_rel(iVar2,iVar2 + 1000,&atomic_counter);
 iVar2 = iVar2 + 1;
 } while (iVar2 != iVar1);
 }
 return (void *)0x0;
}



/* Function: thread_atomic_load_store @ 00102e08 */

void * thread_atomic_load_store(void *arg)

{
 /* Unresolved local var: int value@[???] */
 atomic_counter = atomic_counter + 100;
 return (void *)0x0;
}



/* Function: param_atomic_ops @ 00102e24 */

int param_atomic_ops(int thread_count,int iterations)

{
 atomic_int aVar1;
 int iVar2;
 pthread_t *__ptr;
 ulong uVar3;
 pthread_t *ppVar4;
 long lVar5;
 pthread_t local_50;
 int local_44;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: pthread_t load_store_tid@[???]
 Unresolved local var: int final_value@[???] */
 local_44 = iterations;
 __ptr = malloc(-(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 |
 (ulong)(uint)thread_count << 3);
 if (__ptr == (pthread_t *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 atomic_counter = 0;
 if (0 < thread_count) {
 lVar5 = 0;
 do {
 iVar2 = pthread_create((pthread_t *)((long)__ptr + lVar5),(pthread_attr_t *)0x0,
 thread_atomic_increment,&local_44);
 if (iVar2 != 0) {
 free(__ptr);
 return -2;
 }
 lVar5 = lVar5 + 8;
 } while ((ulong)(uint)thread_count * 8 - lVar5 != 0);
 }
 iVar2 = pthread_create(&local_50,(pthread_attr_t *)0x0,thread_atomic_load_store,(void *)0x0);
 if (iVar2 == 0) {
 pthread_join(local_50,(void **)0x0);
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar3 = (ulong)(uint)thread_count;
 ppVar4 = __ptr;
 do {
 pthread_join(*ppVar4,(void **)0x0);
 uVar3 = uVar3 - 1;
 ppVar4 = ppVar4 + 1;
 } while (uVar3 != 0);
 }
 aVar1 = atomic_counter;
 free(__ptr);
 iVar2 = 0x2a;
 if (aVar1 < 1) {
 iVar2 = -3;
 }
 return iVar2;
}



/* Function: call_atomic_ops @ 00102f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_ops(void)

{
 int iVar1;
 
 iVar1 = param_atomic_ops(4,500);
 return iVar1;
}



/* Function: thread_tls_test @ 00102f6c */

void * thread_tls_test(void *arg)

{
 int iVar1;
 int iVar2;
 long lVar3;
 int *piVar4;
 
 /* Unresolved local var: char * name@[???]
 Unresolved local var: int initial@[???]
 Unresolved local var: int * ret@[???] */
 lVar3 = (long)get_tpidr_el0();
 iVar2 = *(int *)(lVar3 + 0x10);
 iVar1 = iVar2 + 0x32;
 *(int *)(lVar3 + 0x10) = iVar1;
 strncpy((char *)(lVar3 + 0x14),arg,0x1f);
 piVar4 = malloc(8);
 *piVar4 = iVar2;
 piVar4[1] = iVar1;
 return piVar4;
}



/* Function: param_thread_local_storage @ 00102fbc */

int param_thread_local_storage(int thread_count)

{
 int iVar1;
 pthread_t *__ptr;
 undefined8 *__ptr_00;
 char *__s;
 int iVar2;
 ulong uVar3;
 ulong uVar4;
 pthread_t *ppVar5;
 int iVar6;
 undefined8 *puVar7;
 int *local_58;
 
 /* Unresolved local var: pthread_t * tids@[???]
 Unresolved local var: char * * names@[???]
 Unresolved local var: int total_final@[???]
 Unresolved local var: int total_initial@[???]
 Unresolved local var: int expected_final@[???]
 Unresolved local var: int expected_initial@[???] */
 uVar3 = (ulong)(uint)thread_count;
 uVar4 = -(ulong)((uint)thread_count >> 0x1f) & 0xfffffff800000000 | uVar3 << 3;
 __ptr = malloc(uVar4);
 __ptr_00 = malloc(uVar4);
 if (__ptr == (pthread_t *)0x0) {
 return -1;
 }
 if (__ptr_00 == (undefined8 *)0x0) {
 return -1;
 }
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar4 = 0;
 do {
 __s = malloc(0x10);
 __ptr_00[uVar4] = __s;
 snprintf(__s,0x10,"Thread-%d",uVar4 & 0xffffffff);
 uVar4 = uVar4 + 1;
 } while (uVar3 != uVar4);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 uVar4 = 0;
 ppVar5 = __ptr;
 do {
 iVar1 = pthread_create(ppVar5,(pthread_attr_t *)0x0,thread_tls_test,(void *)__ptr_00[uVar4])
 ;
 uVar4 = uVar4 + 1;
 if (iVar1 != 0) {
 uVar3 = 0;
 do {
 /* Unresolved local var: int j@[DW_OP_reg20(x20)] */
 free((void *)__ptr_00[uVar3]);
 uVar3 = uVar3 + 1;
 } while (uVar4 != uVar3);
 free(__ptr_00);
 free(__ptr);
 return -2;
 }
 ppVar5 = ppVar5 + 1;
 } while (uVar3 != uVar4);
 /* Unresolved local var: int i@[???] */
 if (0 < thread_count) {
 iVar6 = 0;
 iVar1 = 0;
 ppVar5 = __ptr;
 puVar7 = __ptr_00;
 do {
 /* Unresolved local var: void * ret@[???]
 Unresolved local var: int * values@[???] */
 pthread_join(*ppVar5,&local_58);
 iVar1 = *local_58 + iVar1;
 iVar6 = local_58[1] + iVar6;
 free(local_58);
 free((void *)*puVar7);
 uVar3 = uVar3 - 1;
 ppVar5 = ppVar5 + 1;
 puVar7 = puVar7 + 1;
 } while (uVar3 != 0);
 goto LAB_001030d8;
 }
 }
 }
 iVar1 = 0;
 iVar6 = 0;
LAB_001030d8:
 free(__ptr_00);
 free(__ptr);
 iVar2 = 0x2a;
 if (iVar6 != thread_count * 0x96 || iVar1 != thread_count * 100) {
 iVar2 = -3;
 }
 return iVar2;
}



/* Function: call_thread_local_storage @ 00103158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thread_local_storage(void)

{
 int iVar1;
 
 iVar1 = param_thread_local_storage(4);
 return iVar1;
}



/* Function: test_thread_concurrency @ 00103160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_thread_concurrency(void)

{
 int iVar1;
 uint uVar2;
 uint *local_30;
 undefined4 local_24;
 pthread_t local_8;
 
 puts(DAT_001036eb);
 /* Unresolved local var: int input@[???]
 Unresolved local var: pthread_t tid@[???]
 Unresolved local var: int ret@[???]
 Unresolved local var: void * thread_ret@[???]
 Unresolved local var: int result@[???] */
 local_24 = 7;
 iVar1 = pthread_create(&local_8,(pthread_attr_t *)0x0,thread_compute,&local_24);
 if (iVar1 == 0) {
 pthread_join(local_8,&local_30);
 uVar2 = *local_30;
 free(local_30);
 }
 else {
 uVar2 = 0xffffffff;
 }
 printf(DAT_00103603,(ulong)uVar2);
 uVar2 = param_pthread_join();
 printf(DAT_0010361f,(ulong)uVar2);
 uVar2 = param_mutex_lock(4,1000);
 printf(DAT_0010363c,(ulong)uVar2);
 uVar2 = param_condition_variable();
 printf(DAT_00103658,(ulong)uVar2);
 uVar2 = param_atomic_ops(4,500);
 printf(DAT_00103674,(ulong)uVar2);
 uVar2 = param_thread_local_storage(4);
 printf(DAT_00103690,(ulong)uVar2);
 return;
}



/* Function: main @ 00103258 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* Function: __aarch64_cas4_acq_rel @ 00103280 */

/* Ghidra concat macros for combining values */
#define CONCAT35(a,b) (((uint)(a) << 0) | ((uint)(b) << 16))
#define CONCAT44(a,b) (((uint)(a) << 0) | ((uint)(b) << 16))
#define CONCAT53(a,b) (((uint64_t)(a) << 0) | ((uint64_t)(b) << 32))

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



/* Function: __aarch64_ldadd4_acq_rel @ 001032c0 */

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
