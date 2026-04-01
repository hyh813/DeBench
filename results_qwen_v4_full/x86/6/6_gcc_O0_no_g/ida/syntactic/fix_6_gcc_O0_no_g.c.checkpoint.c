/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* Global variables - basic types only */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int ready = 0;
int data = 0;
int atomic_counter = 0;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* ELF Global Offset Table */
extern void *_GLOBAL_OFFSET_TABLE_;
#define GLOBAL_OFFSET_TABLE_ _GLOBAL_OFFSET_TABLE_

/* LODWORD/HIDWORD macros for 64-bit value manipulation */
#define LODWORD(x) (*(int*)&(x))
#define HIDWORD(x) (*(((int*)&(x))+1))

/* BYTE extraction macros */
#define BYTE1(x) ((unsigned char)(((x) >> 8) & 0xFF))

/* GS segment access intrinsics (GCC inline assembly) */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int result;
    __asm__ volatile ("mov %%gs:%1, %0" : "=r" (result) : "m" (*(unsigned int *)offset));
    return result;
}

static inline void __writegsdword(unsigned int offset, unsigned int value) {
    __asm__ volatile ("mov %1, %%gs:%0" : "=m" (*(unsigned int *)offset) : "r" (value));
}

/* Windows-style atomic intrinsics using GCC builtins */
#define _InterlockedAdd(ptr, val) __sync_add_and_fetch((ptr), (val))
#define _InterlockedCompareExchange(ptr, exchange, compar) __sync_val_compare_and_swap((ptr), (compar), (exchange))
#define _InterlockedExchange(ptr, val) __sync_lock_test_and_set((ptr), (val))

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pthread.h>
#include <elf.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/syscall.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <errno.h>
#include <stdarg.h>

/* Global variables - pthread types (after includes) */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

/* Stub implementations for pthread functions (when -lpthread not linked) */
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg) {
    return 0;
}

int pthread_join(pthread_t thread, void **retval) {
    return 0;
}

int pthread_cancel(pthread_t thread) {
    return 0;
}

int pthread_mutex_lock(pthread_mutex_t *mutex) {
    return 0;
}

int pthread_mutex_unlock(pthread_mutex_t *mutex) {
    return 0;
}

int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex) {
    return 0;
}

int pthread_cond_signal(pthread_cond_t *cond) {
    return 0;
}

/* String constants */
const char *asc_40B0 = "=== Testing Standard Library Functions ===";
const char *asc_4248 = "=== Testing System Calls ===";
const char *asc_4331 = "=== Testing Thread Concurrency ===";
const char *aLibL101D = "Lib L101: %zu\n";
const char *aLibL102D = "Lib L102: %d\n";
const char *aLibL103D = "Lib L103: %zu\n";
const char *aLibL104D = "Lib L104: %lld\n";
const char *aLibL105D = "Lib L105: %lld\n";
const char *aLibL106D = "Lib L106: %d\n";
const char *aLibL107D = "Lib L107: %d\n";
const char *aLibL108D = "Lib L108: %d\n";
const char *aLibL109D = "Lib L109: %d\n";
const char *aLibL110D = "Lib L110: %d\n";
const char *aLibL111D = "Lib L111: %lld\n";
const char *aLibL112D = "Lib L112: %d\n";
const char *aSysL301D = "Sys L301: %d\n";
const char *aSysL302D = "Sys L302: %d\n";
const char *aSysL303D = "Sys L303: %d\n";
const char *aSysL304D = "Sys L304: %d\n";
const char *aSysL305D = "Sys L305: %d\n";
const char *aSysL306D = "Sys L306: %d\n";
const char *aSysL307D = "Sys L307: %d\n";
const char *aThrL301D = "Thr L301: %d\n";
const char *aThrL302D = "Thr L302: %d\n";
const char *aThrL303D = "Thr L303: %d\n";
const char *aThrL304D = "Thr L304: %d\n";
const char *aThrL305D = "Thr L305: %d\n";
const char *aThrL306D = "Thr L306: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_gcc_O0_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" ::: "memory");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
 sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
 sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
 sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
void sub_1180()
{
 sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
 sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
void sub_11A0()
{
 sub_1030();
}


/* Function: sub_11B0 @ 0x11B0 */
void sub_11B0()
{
 sub_1030();
}


/* Function: sub_11C0 @ 0x11C0 */
void sub_11C0()
{
 sub_1030();
}


/* Function: sub_11D0 @ 0x11D0 */
void sub_11D0()
{
 sub_1030();
}


/* Function: sub_11E0 @ 0x11E0 */
void sub_11E0()
{
 sub_1030();
}


/* Function: sub_11F0 @ 0x11F0 */
void sub_11F0()
{
 sub_1030();
}


/* Function: sub_1200 @ 0x1200 */
void sub_1200()
{
 sub_1030();
}


/* Function: sub_1210 @ 0x1210 */
void sub_1210()
{
 sub_1030();
}


/* Function: sub_1220 @ 0x1220 */
void sub_1220()
{
 sub_1030();
}


/* Function: sub_1230 @ 0x1230 */
void sub_1230()
{
 sub_1030();
}


/* Function: sub_1240 @ 0x1240 */
void sub_1240()
{
 sub_1030();
}


/* Function: sub_1250 @ 0x1250 */
void sub_1250()
{
 sub_1030();
}


/* Function: sub_1260 @ 0x1260 */
void sub_1260()
{
 sub_1030();
}


/* Function: sub_1270 @ 0x1270 */
void sub_1270()
{
 sub_1030();
}


/* Function: sub_1280 @ 0x1280 */
void sub_1280()
{
 sub_1030();
}


/* Function: sub_1290 @ 0x1290 */
void sub_1290()
{
 sub_1030();
}


/* Function: sub_12A0 @ 0x12A0 */
void sub_12A0()
{
 sub_1030();
}


/* Function: sub_12B0 @ 0x12B0 */
void sub_12B0()
{
 sub_1030();
}


/* Function: sub_12C0 @ 0x12C0 */
void sub_12C0()
{
 sub_1030();
}


/* Function: sub_12D0 @ 0x12D0 */
void sub_12D0()
{
 sub_1030();
}


/* Function: sub_12E0 @ 0x12E0 */
void sub_12E0()
{
 sub_1030();
}


/* Function: sub_12F0 @ 0x12F0 */
void sub_12F0()
{
 sub_1030();
}


/* Function: sub_1300 @ 0x1300 */
void sub_1300()
{
 sub_1030();
}


/* Function: sub_1310 @ 0x1310 */
void sub_1310()
{
 sub_1030();
}


/* Function: sub_1320 @ 0x1320 */
void sub_1320()
{
 sub_1030();
}


/* Function: sub_1330 @ 0x1330 */
void sub_1330()
{
 sub_1030();
}


/* Function: sub_1340 @ 0x1340 */
void sub_1340()
{
 sub_1030();
}


/* Function: sub_1350 @ 0x1350 */
void sub_1350()
{
 sub_1030();
}


/* Function: sub_1360 @ 0x1360 */
void sub_1360()
{
 sub_1030();
}


/* Function: sub_1370 @ 0x1370 */
void sub_1370()
{
 sub_1030();
}


/* Function: sub_1380 @ 0x1380 */
void sub_1380()
{
 sub_1030();
}


/* Function: sub_1390 @ 0x1390 */
void sub_1390()
{
 sub_1030();
}


/* Function: sub_13A0 @ 0x13A0 */
void sub_13A0()
{
 sub_1030();
}


/* Function: sub_13B0 @ 0x13B0 */
void sub_13B0()
{
 sub_1030();
}


/* Function: sub_13C0 @ 0x13C0 */
void sub_13C0()
{
 sub_1030();
}


/* Function: sub_13D0 @ 0x13D0 */
void sub_13D0()
{
 sub_1030();
}


/* Function: sub_13E0 @ 0x13E0 */
void sub_13E0()
{
 sub_1030();
}


/* Function: sub_13F0 @ 0x13F0 */
int sub_13F0(int a1)
{
 return (*(int (**)(void))(a1 + 252))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_17DC @ 0x17DC */
void sub_17DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x17E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function - defined as empty */
void _do_global_dtors_aux(void) { }




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1919 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x191D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_strcpy @ 0x1921 */
size_t param_strcpy(char *dest, char *src)
{
 strcpy(dest, src);
 return strlen(dest);
}


/* Function: call_strcpy @ 0x195B */
size_t call_strcpy()
{
 char dest[32]; // [esp+Ch] [ebp-2Ch] BYREF
 unsigned int v2; // [esp+2Ch] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 return param_strcpy(dest, "HelloLib");
}


/* Function: param_strcmp @ 0x19AA */
int param_strcmp(char *s1, char *s2)
{
 int v3; // [esp+Ch] [ebp-Ch]

 v3 = strcmp(s1, s2);
 if ( v3 > 0 )
 return 1;
 if ( v3 >= 0 )
 return 0;
 return -1;
}


/* Function: call_strcmp @ 0x19F9 */
int call_strcmp()
{
 int v1; // [esp+4h] [ebp-14h]
 int v2; // [esp+8h] [ebp-10h]

 v1 = param_strcmp("abc", "def");
 v2 = param_strcmp("xyz", "xyz");
 return v2 + v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1A75 */
size_t param_strlen(char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x1AA5 */
size_t call_strlen()
{
 return param_strlen("BinBench2025");
}


/* Function: param_memcpy @ 0x1AD2 */
size_t param_memcpy(void *dest, void *src, size_t n)
{
 memcpy(dest, src, n);
 return n;
}


/* Function: call_memcpy @ 0x1B05 */
long long call_memcpy()
{
 long long result; // rax
 unsigned int src[5]; // [esp+4h] [ebp-34h] BYREF
 unsigned int dest[2]; // [esp+18h] [ebp-20h] BYREF
 int v3; // [esp+20h] [ebp-18h]
 int v4; // [esp+24h] [ebp-14h]
 int v5; // [esp+28h] [ebp-10h]
 unsigned int v6; // [esp+2Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 src[0] = 10;
 src[1] = 20;
 src[2] = 30;
 src[3] = 40;
 src[4] = 50;
 dest[0] = 0;
 dest[1] = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 param_memcpy(dest, src, 0x14u);
 LODWORD(result) = v3 + dest[0] + v5;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: param_memcmp @ 0x1B9F */
int param_memcmp(void *s1, void *s2, size_t n)
{
 int v4; // [esp+Ch] [ebp-Ch]

 v4 = memcmp(s1, s2, n);
 if ( v4 > 0 )
 return 1;
 if ( v4 >= 0 )
 return 0;
 return -1;
}


/* Function: call_memcmp @ 0x1BF1 */
long long call_memcmp()
{
 long long result; // rax
 int v1; // [esp+0h] [ebp-38h]
 unsigned int s1[3]; // [esp+8h] [ebp-30h] BYREF
 unsigned int s2[3]; // [esp+14h] [ebp-24h] BYREF
 unsigned int v4[3]; // [esp+20h] [ebp-18h] BYREF
 unsigned int v5; // [esp+2Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 s1[0] = 1;
 s1[1] = 2;
 s1[2] = 3;
 s2[0] = 1;
 s2[1] = 2;
 s2[2] = 4;
 v4[0] = 1;
 v4[1] = 2;
 v4[2] = 3;
 v1 = param_memcmp(s1, s2, 0xCu);
 LODWORD(result) = v1 + param_memcmp(s1, v4, 0xCu);
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: param_printf @ 0x1C9A */
int param_printf(int a1, const char *a2)
{
 return printf("Value: %d, Name: %s\n", a1, a2);
}


/* Function: call_printf @ 0x1CD4 */
int call_printf()
{
 return param_printf(42, "Test");
}


/* Function: param_scanf @ 0x1D04 */
int param_scanf(int a1)
{
 int v2; // [esp+10h] [ebp-18h] BYREF
 int v3; // [esp+14h] [ebp-14h] BYREF
 int v4; // [esp+18h] [ebp-10h]
 unsigned int v5; // [esp+1Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 v4 = __isoc99_sscanf(a1, "%d,%d", &v2, &v3);
 if ( v4 == 2 )
 return v2 + v3;
 else
 return -1;
}


/* Function: call_scanf @ 0x1D75 */
int call_scanf()
{
 return param_scanf((int)"123,456");
}


/* Function: param_fopen_fclose @ 0x1D9D */
int param_fopen_fclose(char *filename)
{
 FILE *stream; // [esp+8h] [ebp-10h]
 int v3; // [esp+Ch] [ebp-Ch]

 stream = fopen(filename, "r");
 if ( !stream )
 return -1;
 v3 = fileno(stream);
 fclose(stream);
 return v3;
}


/* Function: call_fopen_fclose @ 0x1DFF */
int call_fopen_fclose()
{
 if ( param_fopen_fclose("/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_fread_fwrite @ 0x1E3C */
int param_fread_fwrite(const char *a1)
{
 size_t v2; // eax
 FILE *stream; // [esp+20h] [ebp-38h]
 size_t n; // [esp+24h] [ebp-34h]
 size_t v5; // [esp+28h] [ebp-30h]
 char ptr[32]; // [esp+2Ch] [ebp-2Ch] BYREF
 unsigned int v7; // [esp+4Ch] [ebp-Ch]

 v7 = __readgsdword(0x14u);
 stream = fopen(a1, "w+");
 if ( !stream )
 return -1;
 v2 = strlen("BinBench Test Data");
 n = fwrite("BinBench Test Data", 1u, v2, stream);
 if ( n == strlen("BinBench Test Data") )
 {
 rewind(stream);
 v5 = fread(ptr, 1u, n, stream);
 ptr[v5] = 0;
 fclose(stream);
 unlink(a1);
 if ( v5 == n && !strcmp(ptr, "BinBench Test Data") )
 return 42;
 else
 return -3;
 }
 else
 {
 fclose(stream);
 return -2;
 }
}


/* Function: call_fread_fwrite @ 0x1F6A */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x1F92 */
int param_malloc_free(unsigned int a1)
{
 unsigned int i; // [esp+4h] [ebp-14h]
 unsigned int *ptr; // [esp+8h] [ebp-10h]
 int v4; // [esp+Ch] [ebp-Ch]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 ptr[i] = 10 * i;
 v4 = *ptr + ptr[a1 - 1];
 free(ptr);
 return v4;
}


/* Function: call_malloc_free @ 0x203B */
int call_malloc_free()
{
 return param_malloc_free(0xAu);
}


/* Function: param_memset @ 0x205E */
int param_memset(unsigned char *s, size_t n)
{
 int v3; // [esp+4h] [ebp-14h]
 size_t i; // [esp+8h] [ebp-10h]

 memset(s, 0, n);
 v3 = 0;
 for ( i = 0; i < n; ++i )
 v3 += s[i];
 return v3;
}


/* Function: call_memset @ 0x20C3 */
long long call_memset()
{
 long long result; // rax
 int i; // [esp+0h] [ebp-38h]
 unsigned int s[10]; // [esp+4h] [ebp-34h] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i <= 9; ++i )
 s[i] = 255;
 param_memset((unsigned char *)s, 0x28u);
 LODWORD(result) = s[0] + s[9];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_strchr_strstr @ 0x212C */
int param_strchr_strstr(char *s, char a2, char *needle)
{
 int v3; // eax
 int v4; // eax
 char *v6; // [esp+10h] [ebp-18h]
 int v7; // [esp+14h] [ebp-14h]
 char *v8; // [esp+18h] [ebp-10h]

 v6 = strchr(s, a2);
 if ( v6 )
 v3 = v6 - s;
 else
 v3 = -1;
 v7 = v3;
 v8 = strstr(s, needle);
 if ( v8 )
 v4 = v8 - s;
 else
 v4 = -1;
 return v7 + v4;
}


/* Function: call_strchr_strstr @ 0x21AB */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x21E7 */
int test_standard_library_functions()
{
 size_t v0; // eax
 int v1; // eax
 size_t v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v11; // eax

 puts(asc_40B0);
 v0 = call_strcpy();
 printf(aLibL101D, v0);
 v1 = call_strcmp();
 printf(aLibL102D, v1);
 v2 = call_strlen();
 printf(aLibL103D, v2);
 v3 = call_memcpy();
 printf(aLibL104D, v3);
 v4 = call_memcmp();
 printf(aLibL105D, v4);
 v5 = call_printf();
 printf(aLibL106D, v5);
 v6 = call_scanf();
 printf(aLibL107D, v6);
 v7 = call_fopen_fclose();
 printf(aLibL108D, v7);
 v8 = call_fread_fwrite();
 printf(aLibL109D, v8);
 v9 = call_malloc_free();
 printf(aLibL110D, v9);
 v10 = call_memset();
 printf(aLibL111D, v10);
 v11 = call_strchr_strstr();
 return printf(aLibL112D, v11);
}


/* Function: param_linux_syscall @ 0x2335 */
int param_linux_syscall(int a1)
{
 int v2; // [esp+Ch] [ebp-Ch]

 v2 = syscall(5, a1, 0);
 if ( v2 < 0 )
 return -*__errno_location();
 syscall(6, v2);
 return v2;
}


/* Function: call_linux_syscall @ 0x2389 */
int call_linux_syscall()
{
 if ( param_linux_syscall((int)"/etc/passwd") < 0 )
 return -1;
 else
 return 42;
}


/* Function: param_win32_api @ 0x23C6 */
int param_win32_api(const char *a1)
{
 struct stat buf; // [esp+14h] [ebp-64h] BYREF
 unsigned int v3; // [esp+6Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 if ( stat(a1, &buf) < 0 )
 return -1;
 if ( buf.st_size <= 0 )
 return -2;
 return 42;
}


/* Function: call_win32_api @ 0x2435 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x245D */
int param_fork_exec(const char *a1, int a2)
{
 int stat_loc; // [esp+10h] [ebp-18h] BYREF
 __pid_t pid; // [esp+14h] [ebp-14h]
 __pid_t v5; // [esp+18h] [ebp-10h]
 unsigned int v6; // [esp+1Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 pid = fork();
 if ( pid < 0 )
 return -1;
 if ( !pid )
 {
 execl(a1, a1, a2, 0);
 _exit(127);
 }
 v5 = waitpid(pid, &stat_loc, 0);
 if ( v5 < 0 )
 return -2;
 if ( (stat_loc & 0x7F) != 0 )
 return -3;
 return BYTE1(stat_loc);
}


/* Function: call_fork_exec @ 0x2516 */
int call_fork_exec()
{
 if ( param_fork_exec("/bin/true", 0) )
 return -1;
 else
 return 42;
}


/* Function: param_pipe_communication @ 0x2555 */
int param_pipe_communication()
{
 size_t v1; // eax
 __pid_t v2; // [esp+8h] [ebp-40h]
 ssize_t v3; // [esp+Ch] [ebp-3Ch]
 int pipedes[2]; // [esp+14h] [ebp-34h] BYREF
 unsigned char buf[32]; // [esp+1Ch] [ebp-2Ch] BYREF
 unsigned int v6; // [esp+3Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 if ( pipe(pipedes) < 0 )
 return -1;
 v2 = fork();
 if ( v2 < 0 )
 return -2;
 if ( !v2 )
 {
 close(pipedes[0]);
 v1 = strlen("HelloPipe");
 write(pipedes[1], "HelloPipe", v1);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v3 = read(pipedes[0], buf, 0x1Fu);
 buf[v3] = 0;
 close(pipedes[0]);
 wait(0);
 if ( v3 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_pipe_communication @ 0x2679 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x2694 */
int param_socket_create()
{
 int optval; // [esp+4h] [ebp-24h] BYREF
 int fd; // [esp+8h] [ebp-20h]
 struct sockaddr s; // [esp+Ch] [ebp-1Ch] BYREF
 unsigned int v4; // [esp+1Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 fd = socket(2, 1, 0);
 if ( fd < 0 )
 return -1;
 optval = 1;
 if ( setsockopt(fd, 1, 2, &optval, 4u) >= 0 )
 {
 memset(&s, 0, sizeof(s));
 s.sa_family = 2;
 *(unsigned short *)s.sa_data = htons(0);
 *(unsigned int *)&s.sa_data[2] = 0;
 if ( bind(fd, &s, 0x10u) >= 0 )
 {
 if ( listen(fd, 5) >= 0 )
 {
 close(fd);
 return 42;
 }
 else
 {
 close(fd);
 return -4;
 }
 }
 else
 {
 close(fd);
 return -3;
 }
 }
 else
 {
 close(fd);
 return -2;
 }
}


/* Function: call_socket_create @ 0x27C4 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x27DF */
int param_shmget_shmat()
{
 int fd; // [esp+Ch] [ebp-1Ch]
 key_t v2; // [esp+10h] [ebp-18h]
 int v3; // [esp+14h] [ebp-14h]
 char *s; // [esp+18h] [ebp-10h]
 size_t v5; // [esp+1Ch] [ebp-Ch]

 fd = open("/tmp/binbench_shm", 66, 438);
 if ( fd < 0 )
 return -1;
 close(fd);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 < 0 )
 return -1;
 v3 = shmget(v2, 4096, 950);
 if ( v3 < 0 )
 return -2;
 s = (char *)shmat(v3, 0, 0);
 if ( s == (char *)-1 )
 return -3;
 strcpy(s, "SharedMemory");
 v5 = strlen(s);
 shmdt(s);
 shmctl(v3, 0, 0);
 return v5;
}


/* Function: call_shmget_shmat @ 0x28F9 */
int call_shmget_shmat()
{
 if ( param_shmget_shmat() <= 0 )
 return -1;
 else
 return 42;
}


/* Function: signal_handler @ 0x2929 */
Elf32_Dyn ** signal_handler(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 signal_received = 1;
 signal_number = a1;
 return result;
}


/* Function: param_signal_handling @ 0x2950 */
int param_signal_handling()
{
 int v1; // eax
 int v2; // eax
 int v3; // [esp+Ch] [ebp-Ch]
 int v4; // [esp+Ch] [ebp-Ch]

 if ( signal(10, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -1;
 if ( signal(14, (__sighandler_t)signal_handler) == (__sighandler_t)-1 )
 return -2;
 signal_received = 0;
 raise(10);
 v3 = 1000;
 while ( !signal_received )
 {
 v1 = v3--;
 if ( v1 <= 0 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received )
 return -3;
 if ( signal_number != 10 )
 return -4;
 signal_received = 0;
 alarm(1u);
 v4 = 2000;
 while ( !signal_received )
 {
 v2 = v4--;
 if ( v2 <= 0 )
 break;
 usleep(0x3E8u);
 }
 if ( !signal_received || signal_number != 14 )
 return -5;
 signal(10, 0);
 signal(14, 0);
 return 42;
}


/* Function: call_signal_handling @ 0x2AA7 */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x2AC2 */
int test_system_calls()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax

 puts(asc_4248);
 v0 = call_linux_syscall();
 printf(aSysL301D, v0);
 v1 = call_win32_api();
 printf(aSysL302D, v1);
 v2 = call_fork_exec();
 printf(aSysL303D, v2);
 v3 = call_pipe_communication();
 printf(aSysL304D, v3);
 v4 = call_socket_create();
 printf(aSysL305D, v4);
 v5 = call_shmget_shmat();
 printf(aSysL306D, v5);
 v6 = call_signal_handling();
 return printf(aSysL307D, v6);
}


/* Function: thread_compute @ 0x2B98 */
unsigned int * thread_compute(unsigned int *a1)
{
 unsigned int *result; // eax
 int v2; // [esp+8h] [ebp-10h]

 v2 = *a1 * *a1;
 result = malloc(4u);
 *result = v2;
 return result;
}


/* Function: param_pthread_create @ 0x2BE7 */
int param_pthread_create(int a1)
{
 pthread_t newthread; // [esp+8h] [ebp-20h] BYREF
 int arg; // [esp+Ch] [ebp-1Ch] BYREF
 void *thread_return; // [esp+10h] [ebp-18h] BYREF
 int v6; // [esp+18h] [ebp-10h]
 unsigned int v7; // [esp+1Ch] [ebp-Ch]

 v7 = __readgsdword(0x14u);
 arg = a1;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg) )
 return -1;
 pthread_join(newthread, &thread_return);
 v6 = *(unsigned int *)thread_return;
 free(thread_return);
 return v6;
}


/* Function: call_pthread_create @ 0x2C7A */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: thread_sum @ 0x2C9D */
int thread_sum(int *a1)
{
 int i; // [esp+8h] [ebp-8h]

 a1[2] = 0;
 for ( i = *a1; i <= a1[1]; ++i )
 a1[2] += i;
 return 0;
}


/* Function: param_pthread_join @ 0x2CF2 */
int param_pthread_join()
{
 int i; // [esp+0h] [ebp-48h]
 int v2; // [esp+4h] [ebp-44h]
 int j; // [esp+8h] [ebp-40h]
 pthread_t th[3]; // [esp+Ch] [ebp-3Ch] BYREF
 unsigned int v5[4]; // [esp+18h] [ebp-30h] BYREF
 unsigned int v6[7]; // [esp+28h] [ebp-20h]

 v6[5] = __readgsdword(0x14u);
 v5[0] = 1;
 v5[1] = 10;
 v5[2] = 0;
 v5[3] = 11;
 v6[0] = 20;
 v6[1] = 0;
 v6[2] = 21;
 v6[3] = 30;
 v6[4] = 0;
 for ( i = 0; i <= 2; ++i )
 {
 if ( pthread_create(&th[i], 0, (void *(*)(void *))thread_sum, &v5[3 * i]) )
 return -1;
 }
 v2 = 0;
 for ( j = 0; j <= 2; ++j )
 {
 if ( pthread_join(th[j], 0) )
 return -2;
 v2 += v6[3 * j - 2];
 }
 return v2;
}


/* Function: call_pthread_join @ 0x2E0B */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: thread_increment @ 0x2E26 */
int thread_increment(int *a1)
{
 int i; // [esp+8h] [ebp-10h]
 int v3; // [esp+Ch] [ebp-Ch]

 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return 0;
}


/* Function: param_mutex_lock @ 0x2EA6 */
int param_mutex_lock(int a1, int arg)
{
 int i; // [esp+0h] [ebp-18h]
 int j; // [esp+4h] [ebp-14h]
 void *ptr; // [esp+8h] [ebp-10h]

 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 shared_counter = 0;
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_increment, &arg) )
 {
 free(ptr);
 return -2;
 }
 }
 for ( j = 0; j < a1; ++j )
 pthread_join(*((unsigned int *)ptr + j), 0);
 free(ptr);
 if ( a1 * arg == shared_counter )
 return 42;
 else
 return -3;
}


/* Function: call_mutex_lock @ 0x2FA8 */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: consumer_thread @ 0x2FD0 */
unsigned int *consumer_thread()
{
 unsigned int *result; // eax
 int v1; // [esp+8h] [ebp-10h]

 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *result = v1;
 return result;
}


/* Function: producer_thread @ 0x3058 */
int producer_thread()
{
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


/* Function: param_condition_variable @ 0x30CF */
int param_condition_variable()
{
 pthread_t th; // [esp+Ch] [ebp-1Ch] BYREF
 pthread_t newthread; // [esp+10h] [ebp-18h] BYREF
 void *thread_return; // [esp+14h] [ebp-14h] BYREF
 int v4; // [esp+18h] [ebp-10h]
 unsigned int v5; // [esp+1Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 ready = 0;
 data = 0;
 if ( pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0) )
 return -1;
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th, 0);
 v4 = *(unsigned int *)thread_return;
 free(thread_return);
 return v4;
 }
}


/* Function: call_condition_variable @ 0x31AB */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: thread_atomic_increment @ 0x31C6 */
long long thread_atomic_increment(signed int *a1)
{
 long long result; // rax
 signed int i; // [esp+20h] [ebp-18h]
 signed int v3; // [esp+24h] [ebp-14h]
 unsigned int v4; // [esp+2Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v3 = *a1;
 for ( i = 0; i < v3; ++i )
 {
 _InterlockedAdd(&atomic_counter, 1u);
 _InterlockedCompareExchange(&atomic_counter, i + 1000, i);
 }
 LODWORD(result) = 0;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: thread_atomic_load_store @ 0x3257 */
int thread_atomic_load_store()
{
 _InterlockedExchange(&atomic_counter, atomic_counter + 100);
 return 0;
}


/* Function: param_atomic_ops @ 0x3287 */
int param_atomic_ops(int a1, ...)
{
 pthread_t newthread; // [esp+8h] [ebp-20h] BYREF
 int i; // [esp+Ch] [ebp-1Ch]
 int j; // [esp+10h] [ebp-18h]
 void *ptr; // [esp+14h] [ebp-14h]
 int v6; // [esp+18h] [ebp-10h]
 unsigned int v7; // [esp+1Ch] [ebp-Ch]
 va_list va; // [esp+34h] [ebp+Ch] BYREF

 va_start(va, a1);
 v7 = __readgsdword(0x14u);
 ptr = malloc(4 * a1);
 if ( !ptr )
 return -1;
 _InterlockedExchange(&atomic_counter, 0);
 for ( i = 0; i < a1; ++i )
 {
 if ( pthread_create((pthread_t *)ptr + i, 0, (void *(*)(void *))thread_atomic_increment, va) )
 {
 free(ptr);
 return -2;
 }
 }
 if ( !pthread_create(&newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread, 0);
 for ( j = 0; j < a1; ++j )
 pthread_join(*((unsigned int *)ptr + j), 0);
 v6 = atomic_counter;
 free(ptr);
 if ( v6 <= 0 )
 return -3;
 else
 return 42;
}


/* Function: call_atomic_ops @ 0x33CD */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: thread_tls_test @ 0x33F5 */
unsigned int * thread_tls_test(const char *a1)
{
 unsigned int *result; // eax
 unsigned int v2; // [esp+8h] [ebp-10h]

 v2 = __readgsdword(0xFFFFFFDC);
 __writegsdword(0xFFFFFFDC, v2 + 50);
 strncpy((char *)(__readgsdword(0) - 32), a1, 0x1Fu);
 result = malloc(8u);
 *result = v2;
 result[1] = __readgsdword(0xFFFFFFDC);
 return result;
}


/* Function: param_thread_local_storage @ 0x3477 */
int param_thread_local_storage(int a1)
{
 void *thread_return; // [esp+Ch] [ebp-3Ch] BYREF
 int i; // [esp+10h] [ebp-38h]
 int j; // [esp+14h] [ebp-34h]
 int k; // [esp+18h] [ebp-30h]
 int v6; // [esp+1Ch] [ebp-2Ch]
 int v7; // [esp+20h] [ebp-28h]
 int m; // [esp+24h] [ebp-24h]
 void *v9; // [esp+28h] [ebp-20h]
 void *ptr; // [esp+2Ch] [ebp-1Ch]
 int v11; // [esp+30h] [ebp-18h]
 int v12; // [esp+34h] [ebp-14h]
 void *v13; // [esp+38h] [ebp-10h]
 unsigned int v14; // [esp+3Ch] [ebp-Ch]

 v14 = __readgsdword(0x14u);
 v9 = malloc(4 * a1);
 ptr = malloc(4 * a1);
 if ( !v9 || !ptr )
 return -1;
 for ( i = 0; i < a1; ++i )
 {
 *((unsigned int *)ptr + i) = malloc(0x10u);
 snprintf(*((char **)ptr + i), 0x10u, "Thread-%d", i);
 }
 for ( j = 0; j < a1; ++j )
 {
 if ( pthread_create((pthread_t *)v9 + j, 0, (void *(*)(void *))thread_tls_test, *((void **)ptr + j)) )
 {
 for ( k = 0; k <= j; ++k )
 free(*((void **)ptr + k));
 free(ptr);
 free(v9);
 return -2;
 }
 }
 v6 = 0;
 v7 = 0;
 for ( m = 0; m < a1; ++m )
 {
 pthread_join(*((unsigned int *)v9 + m), &thread_return);
 v13 = thread_return;
 v6 += *(unsigned int *)thread_return;
 v7 += *((unsigned int *)thread_return + 1);
 free(thread_return);
 free(*((void **)ptr + m));
 }
 free(ptr);
 free(v9);
 v11 = 100 * a1;
 v12 = 150 * a1;
 if ( v6 == 100 * a1 && v7 == v12 )
 return 42;
 else
 return -3;
}


/* Function: call_thread_local_storage @ 0x36CB */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x36EE */
int test_thread_concurrency()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_4331);
 v0 = call_pthread_create();
 printf(aThrL301D, v0);
 v1 = call_pthread_join();
 printf(aThrL302D, v1);
 v2 = call_mutex_lock();
 printf(aThrL303D, v2);
 v3 = call_condition_variable();
 printf(aThrL304D, v3);
 v4 = call_atomic_ops();
 printf(aThrL305D, v4);
 v5 = call_thread_local_storage();
 return printf(aThrL306D, v5);
}


/* Function: main @ 0x37AC */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x37D6 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x37E0 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("add %%ebx, %0" :: "m"(_GLOBAL_OFFSET_TABLE_) : "memory");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x384C */
void term_proc()
{
}


/* FAILED to decompile: setsockopt @ 0x70F4 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x70F8 */

/* FAILED to decompile: raise @ 0x70FC */

/* FAILED to decompile: strstr @ 0x7100 */

/* FAILED to decompile: strcmp @ 0x7104 */

/* FAILED to decompile: __libc_start_main @ 0x7108 */

/* FAILED to decompile: read @ 0x710C */

/* FAILED to decompile: printf @ 0x7110 */

/* FAILED to decompile: _exit @ 0x7114 */

/* FAILED to decompile: free @ 0x7118 */

/* FAILED to decompile: memcpy @ 0x711C */

/* FAILED to decompile: shmget @ 0x7120 */

/* FAILED to decompile: fclose @ 0x7124 */

/* FAILED to decompile: pthread_cond_wait @ 0x7128 */

/* FAILED to decompile: signal @ 0x712C */

/* FAILED to decompile: memcmp @ 0x7130 */

/* FAILED to decompile: sleep @ 0x7134 */

/* FAILED to decompile: alarm @ 0x7138 */

/* FAILED to decompile: __stack_chk_fail @ 0x713C */

/* FAILED to decompile: rewind @ 0x7140 */

/* FAILED to decompile: wait @ 0x7144 */

/* FAILED to decompile: htons @ 0x7148 */

/* FAILED to decompile: shmat @ 0x714C */

/* FAILED to decompile: pthread_mutex_lock @ 0x7150 */

/* FAILED to decompile: unlink @ 0x7154 */

/* FAILED to decompile: __cxa_finalize @ 0x7158 */

/* FAILED to decompile: fwrite @ 0x715C */

/* FAILED to decompile: waitpid @ 0x7160 */

/* FAILED to decompile: usleep @ 0x7164 */

/* FAILED to decompile: fread @ 0x7168 */

/* FAILED to decompile: strcpy @ 0x716C */

/* FAILED to decompile: shmctl @ 0x7170 */

/* FAILED to decompile: pthread_cond_signal @ 0x7174 */

/* FAILED to decompile: malloc @ 0x7178 */

/* FAILED to decompile: puts @ 0x717C */

/* FAILED to decompile: stat @ 0x7180 */

/* FAILED to decompile: open @ 0x7184 */

/* FAILED to decompile: strchr @ 0x7188 */

/* FAILED to decompile: strlen @ 0x718C */

/* FAILED to decompile: write @ 0x7190 */

/* FAILED to decompile: bind @ 0x7194 */

/* FAILED to decompile: __isoc99_sscanf @ 0x7198 */

/* FAILED to decompile: fopen @ 0x719C */

/* FAILED to decompile: memset @ 0x71A0 */

/* FAILED to decompile: snprintf @ 0x71A4 */

/* FAILED to decompile: __errno_location @ 0x71A8 */

/* FAILED to decompile: strncpy @ 0x71AC */

/* FAILED to decompile: syscall @ 0x71B0 */

/* FAILED to decompile: fileno @ 0x71B4 */

/* FAILED to decompile: execl @ 0x71B8 */

/* FAILED to decompile: pipe @ 0x71BC */

/* FAILED to decompile: shmdt @ 0x71C0 */

/* FAILED to decompile: pthread_create @ 0x71C4 */

/* FAILED to decompile: fork @ 0x71C8 */

/* FAILED to decompile: listen @ 0x71CC */

/* FAILED to decompile: ftok @ 0x71D0 */

/* FAILED to decompile: socket @ 0x71D4 */

/* FAILED to decompile: pthread_join @ 0x71D8 */

/* FAILED to decompile: pthread_cancel @ 0x71DC */

/* FAILED to decompile: close @ 0x71E0 */

/* Total functions decompiled: 138, failed: 60 */
