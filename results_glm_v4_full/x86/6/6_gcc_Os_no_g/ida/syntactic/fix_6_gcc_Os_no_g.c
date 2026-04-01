/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* uintptr_t defined in system headers */
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/6/6_gcc_Os_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <elf.h>
#include <stdbool.h>
#include <stdarg.h>

/* Global variables for thread synchronization */
int signal_received = 0;
int signal_number = 0;
int shared_counter = 0;
int atomic_counter = 0;
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int ready = 0;
int data = 0;

/* External data symbols from decompiled binary */
extern void *GLOBAL_OFFSET_TABLE_;
extern unsigned char unk_4400[20];
extern unsigned char unk_4414[12];
extern unsigned char unk_4420[12];
extern unsigned int unk_4440[9];
extern const char asc_409D[];
extern const char unk_40C1[];
extern const char unk_40DC[];
extern const char unk_40F7[];
extern const char unk_4113[];
extern const char unk_412F[];
extern const char unk_414B[];
extern const char unk_4167[];
extern const char unk_4184[];
extern const char unk_41A0[];
extern const char unk_41BC[];
extern const char unk_41D8[];
extern const char unk_41F3[];
extern const char asc_4242[];
extern const char unk_425D[];
extern const char unk_4279[];
extern const char unk_4295[];
extern const char unk_42B1[];
extern const char unk_42CD[];
extern const char unk_42E9[];
extern const char unk_4305[];
extern const char asc_432B[];
extern const char unk_4349[];
extern const char unk_4365[];
extern const char unk_4382[];
extern const char unk_439E[];
extern const char unk_43BA[];
extern const char unk_43D6[];

/* Function: .init_proc @ 0x1000 */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);

int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" ::: "memory");
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
int sub_13C0(int a1)
{
 return (*(int (**)(void))(a1 + 240))();
}


/* Function: main @ 0x1750 */
int main(int argc, const char **argv, const char **envp)
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_179C @ 0x179C */
void sub_179C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x17A0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x18D9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x18DD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: signal_handler @ 0x18E1 */
Elf32_Dyn ** signal_handler(int a1)
{
 Elf32_Dyn **result; // eax

 result = &GLOBAL_OFFSET_TABLE_;
 signal_received = 1;
 signal_number = a1;
 return result;
}


/* Function: thread_sum @ 0x1907 */
void * thread_sum(void *a1)
{
 int *arg = (int *)a1;
 int v1; // edx
 int v2; // ecx
 void *result;

 v1 = *arg;
 v2 = arg[1];
 arg[2] = 0;
 while ( v2 >= v1 )
 arg[2] += v1++;
 result = (void *)(intptr_t)arg[2];
 return result;
}


/* Function: thread_compute @ 0x192B */
void * thread_compute(void *a1)
{
 unsigned int *arg = (unsigned int *)a1;
 unsigned int v1; // esi
 void *result; // eax

 v1 = *arg * *arg;
 result = malloc(4u);
 *(unsigned int *)result = v1;
 return result;
}


/* Function: thread_increment @ 0x195A */
void * thread_increment(void *a1)
{
 int *arg = (int *)a1;
 int v1; // edi
 int v3; // [esp+0h] [ebp-1Ch]

 v1 = 0;
 v3 = *arg;
 while ( v1 < v3 )
 {
 ++v1;
 pthread_mutex_lock(&counter_mutex);
 ++shared_counter;
 pthread_mutex_unlock(&counter_mutex);
 usleep(0x3E8u);
 }
 return (void *)(intptr_t)0;
}


/* Function: consumer_thread @ 0x19C1 */
void * consumer_thread(void *unused)
{
 int v0; // esi
 void *result; // eax

 (void)unused;
 pthread_mutex_lock(&cond_mutex);
 while ( !ready )
 pthread_cond_wait(&cond, &cond_mutex);
 v0 = data;
 pthread_mutex_unlock(&cond_mutex);
 result = malloc(4u);
 *(unsigned int *)result = v0;
 return result;
}


/* Function: producer_thread @ 0x1A2A */
void * producer_thread(void *unused)
{
 (void)unused;
 sleep(1u);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return (void *)(intptr_t)0;
}


/* Function: thread_atomic_increment @ 0x1A89 */
void * thread_atomic_increment(void *a1)
{
 signed int *arg = (signed int *)a1;
 signed int v1; // edx
 signed int v2; // ebx

 v1 = 0;
 v2 = *arg;
 while ( v1 < v2 )
 {
 __sync_fetch_and_add(&atomic_counter, 1);
 __sync_val_compare_and_swap(&atomic_counter, v1, v1 + 1000);
 ++v1;
 }
 return (void *)(intptr_t)0;
}


/* Function: thread_atomic_load_store @ 0x1AC8 */
void * thread_atomic_load_store(void *unused)
{
 (void)unused;
 __sync_lock_test_and_set(&atomic_counter, atomic_counter + 100);
 return (void *)(intptr_t)0;
}


/* Function: thread_tls_test @ 0x1AE9 */
unsigned int * thread_tls_test(char *src)
{
 unsigned int v1; // edi
 char *v2; // eax
 unsigned int *result; // eax

 v1 = __readgsdword(0xFFFFFFDC);
 v2 = (char *)(__readgsdword(0) - 32);
 __writegsdword(0xFFFFFFDC, v1 + 50);
 strncpy(v2, src, 0x1Fu);
 result = malloc(8u);
 *result = v1;
 *(unsigned int *)((char *)result + 4) = v1 + 50;
 return result;
}


/* Function: param_strcpy @ 0x1B43 */
size_t param_strcpy(char *dest, char *src)
{
 strcpy(dest, src);
 return strlen(dest);
}


/* Function: call_strcpy @ 0x1B77 */
size_t call_strcpy(int a1)
{
 char v2; // [esp-30h] [ebp-30h] BYREF
 unsigned int v3; // [esp-10h] [ebp-10h]
 int v4; // [esp-4h] [ebp-4h]

 v4 = a1;
 v3 = __readgsdword(0x14u);
 return param_strcpy(&v2, "HelloLib");
}


/* Function: param_strcmp @ 0x1BBA */
int param_strcmp(char *s1, char *s2)
{
 int v2; // edx
 int result; // eax

 v2 = strcmp(s1, s2);
 result = 1;
 if ( v2 <= 0 )
 return -(v2 != 0);
 return result;
}


/* Function: call_strcmp @ 0x1BF6 */
int call_strcmp()
{
 int v0; // ebx
 int v1; // ebx

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz") + v0;
 return v1 + param_strcmp("bbb", "aaa");
}


/* Function: param_strlen @ 0x1C58 */
size_t param_strlen(char *s)
{
 return strlen(s);
}


/* Function: call_strlen @ 0x1C7E */
int call_strlen()
{
 return 12;
}


/* Function: param_memcpy @ 0x1C88 */
unsigned int param_memcpy(void *a1, const void *a2, unsigned int a3)
{
 unsigned int result; // eax

 result = a3;
 qmemcpy(a1, a2, a3);
 return result;
}


/* Function: call_memcpy @ 0x1CA2 */
long long call_memcpy()
{
 long long result; // rax
 unsigned char v1[20]; // [esp-38h] [ebp-38h] BYREF
 unsigned int v2[5]; // [esp-24h] [ebp-24h] BYREF
 unsigned int v3; // [esp-10h] [ebp-10h]

 v3 = __readgsdword(0x14u);
 qmemcpy(v1, &unk_4400, sizeof(v1));
 memset(v2, 0, sizeof(v2));
 param_memcpy(v2, v1, 0x14u);
 LODWORD(result) = v2[4] + v2[0] + v2[2];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_memcmp @ 0x1D10 */
int param_memcmp(void *s1, void *s2, size_t n)
{
 int v3; // edx
 int result; // eax

 v3 = memcmp(s1, s2, n);
 result = 1;
 if ( v3 <= 0 )
 return -(v3 != 0);
 return result;
}


/* Function: call_memcmp @ 0x1D4F */
long long call_memcmp()
{
 int v0; // esi
 long long result; // rax
 unsigned char v2[12]; // [esp-34h] [ebp-34h] BYREF
 unsigned char v3[12]; // [esp-28h] [ebp-28h] BYREF
 unsigned char v4[12]; // [esp-1Ch] [ebp-1Ch] BYREF
 unsigned int v5; // [esp-10h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 qmemcpy(v2, &unk_4414, sizeof(v2));
 qmemcpy(v3, &unk_4420, sizeof(v3));
 qmemcpy(v4, &unk_4414, sizeof(v4));
 v0 = param_memcmp(v2, v3, 0xCu);
 LODWORD(result) = v0 + param_memcmp(v2, v4, 0xCu);
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: param_printf @ 0x1DDC */
int param_printf(int a1, int a2, int a3)
{
 return __printf_chk(1, "Value: %d, Name: %s\n", a2, a3, a1);
}


/* Function: call_printf @ 0x1E09 */
int call_printf()
{
 return param_printf((int)"Test", 42, (int)"Test");
}


/* Function: param_scanf @ 0x1E2D */
int param_scanf(int a1)
{
 int v1; // edx
 int result; // eax
 int v3; // [esp-4h] [ebp-18h]
 int v4; // [esp+0h] [ebp-14h] BYREF
 unsigned int v5[3]; // [esp+4h] [ebp-10h] BYREF

 v5[1] = __readgsdword(0x14u);
 v1 = __isoc99_sscanf(a1, "%d,%d", &v4, &v5[0], v3);
 result = -1;
 if ( v1 == 2 )
 return v4 + v5[0];
 return result;
}


/* Function: call_scanf @ 0x1E8E */
int call_scanf()
{
 return param_scanf((int)"123,456");
}


/* Function: param_fopen_fclose @ 0x1EB0 */
int param_fopen_fclose(char *filename)
{
 int v1; // edi
 FILE *v2; // eax
 FILE *v3; // esi

 v1 = -1;
 v2 = fopen(filename, "r");
 if ( v2 )
 {
 v3 = v2;
 v1 = fileno(v2);
 fclose(v3);
 }
 return v1;
}


/* Function: call_fopen_fclose @ 0x1F03 */
int call_fopen_fclose()
{
 return (param_fopen_fclose("/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_fread_fwrite @ 0x1F2E */
int param_fread_fwrite(char *filename)
{
 FILE *v1; // esi
 int result; // eax
 size_t v3; // [esp+8h] [ebp-4Ch]
 char ptr[32]; // [esp+18h] [ebp-3Ch] BYREF
 unsigned int v5; // [esp+38h] [ebp-1Ch]

 v5 = __readgsdword(0x14u);
 v1 = fopen(filename, "w+");
 result = -1;
 if ( v1 )
 {
 if ( fwrite("BinBench Test Data", 1u, 0x12u, v1) == 18 )
 {
 rewind(v1);
 v3 = fread(ptr, 1u, 0x12u, v1);
 ptr[v3] = 0;
 fclose(v1);
 unlink(filename);
 result = -3;
 if ( v3 == 18 )
 return strcmp(ptr, "BinBench Test Data") == 0 ? 42 : -3;
 }
 else
 {
 fclose(v1);
 return -2;
 }
 }
 return result;
}


/* Function: call_fread_fwrite @ 0x2016 */
int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test.tmp");
}


/* Function: param_malloc_free @ 0x2038 */
int param_malloc_free(int a1)
{
 unsigned int *v1; // edx
 int v2; // eax
 int v4; // [esp+0h] [ebp-1Ch]

 v1 = malloc(4 * a1);
 v2 = 0;
 if ( !v1 )
 return -1;
 while ( v2 != a1 )
 {
 v1[v2] = 10 * v2;
 ++v2;
 }
 v4 = v1[a1 - 1] + *v1;
 free(v1);
 return v4;
}


/* Function: call_malloc_free @ 0x209D */
int call_malloc_free()
{
 return param_malloc_free(10);
}


/* Function: param_memset @ 0x20B0 */
int param_memset(unsigned char *a1, unsigned int a2)
{
 int v2; // edx
 unsigned char *i; // eax
 int v4; // ecx

 v2 = 0;
 memset(a1, 0, a2);
 for ( i = a1; i != &a1[a2]; ++i )
 {
 v4 = *i;
 v2 += v4;
 }
 return v2;
}


/* Function: call_memset @ 0x20D8 */
long long call_memset()
{
 int i; // eax
 long long result; // rax
 unsigned int v2[10]; // [esp+4h] [ebp-34h] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 10; ++i )
 v2[i] = 255;
 param_memset((unsigned char *)v2, 0x28u);
 LODWORD(result) = v2[0] + v2[9];
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_strchr_strstr @ 0x2120 */
int param_strchr_strstr(char *s, char a2, char *needle)
{
 int v3; // esi
 char *v4; // eax
 char *v5; // eax
 int v6; // edx

 v3 = -1;
 v4 = strchr(s, a2);
 if ( v4 )
 v3 = v4 - s;
 v5 = strstr(s, needle);
 v6 = -1;
 if ( v5 )
 v6 = v5 - s;
 return v3 + v6;
}


/* Function: call_strchr_strstr @ 0x2178 */
int call_strchr_strstr()
{
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


/* Function: test_standard_library_functions @ 0x21A6 */
int test_standard_library_functions()
{
 size_t v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax
 int v12; // [esp-8h] [ebp-Ch]
 int v13; // [esp-4h] [ebp-8h]
 int v14; // [esp+0h] [ebp-4h]
 int v15; // [esp+0h] [ebp-4h]
 int v16; // [esp+0h] [ebp-4h]
 int v17; // [esp+0h] [ebp-4h]
 int v18; // [esp+0h] [ebp-4h]
 int v19; // [esp+0h] [ebp-4h]
 int v20; // [esp+0h] [ebp-4h]
 int v21; // [esp+0h] [ebp-4h]
 int v22; // [esp+0h] [ebp-4h]
 int v23; // [esp+0h] [ebp-4h]
 int v24; // [esp+0h] [ebp-4h]
 int savedregs; // [esp+4h] [ebp+0h] BYREF

 puts(asc_409D);
 v0 = call_strcpy((int)&savedregs);
 v12 = 0;
 v13 = 0;
 __printf_chk(1, &unk_40C1, v0, v12, v13);
 v1 = call_strcmp();
 __printf_chk(1, &unk_40DC, v1, v14, savedregs);
 __printf_chk(1, &unk_40F7, 12, v15, savedregs);
 v2 = call_memcpy();
 __printf_chk(1, &unk_4113, v2, v16, savedregs);
 v3 = call_memcmp();
 __printf_chk(1, &unk_412F, v3, v17, savedregs);
 v4 = call_printf();
 __printf_chk(1, &unk_414B, v4, v18, savedregs);
 v5 = call_scanf();
 __printf_chk(1, &unk_4167, v5, v19, savedregs);
 v6 = call_fopen_fclose();
 __printf_chk(1, &unk_4184, v6, v20, savedregs);
 v7 = call_fread_fwrite();
 __printf_chk(1, &unk_41A0, v7, v21, savedregs);
 v8 = call_malloc_free();
 __printf_chk(1, &unk_41BC, v8, v22, savedregs);
 v9 = call_memset();
 __printf_chk(1, &unk_41D8, v9, v23, savedregs);
 v10 = call_strchr_strstr();
 return __printf_chk(1, &unk_41F3, v10, v24, savedregs);
}


/* Function: param_linux_syscall @ 0x22E0 */
int param_linux_syscall(int a1, int a2)
{
 int v2; // eax
 int v3; // esi
 struct stat buf;

 v2 = syscall(5, a2, 0, a1);
 if ( v2 < 0 )
 return -*__errno_location();
 v3 = v2;
 syscall(6, v2, v2, v2);
 return v3;
}


/* Function: call_linux_syscall @ 0x232B */
int call_linux_syscall(int a1, int a2)
{
 return (param_linux_syscall(a2, (int)"/etc/passwd") >> 31) | 0x2A;
}


/* Function: param_win32_api @ 0x2356 */
int param_win32_api(char *file)
{
 int v1; // edx
 int result; // eax
 struct stat buf; // [esp+0h] [ebp-64h] BYREF
 unsigned int v4; // [esp+58h] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v1 = stat(file, &buf);
 result = -1;
 if ( v1 >= 0 )
 {
 result = 42;
 if ( buf.st_size <= 0 )
 return -2;
 }
 return result;
}


/* Function: call_win32_api @ 0x23B6 */
int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


/* Function: param_fork_exec @ 0x23D8 */
int param_fork_exec(char *path, int a2)
{
 int v2; // eax
 __pid_t v3; // edx
 int result; // eax
 int stat_loc[8]; // [esp+0h] [ebp-20h] BYREF

 stat_loc[1] = __readgsdword(0x14u);
 v2 = fork();
 if ( v2 < 0 )
 return -1;
 if ( !v2 )
 {
 execl(path, path, (const char *)a2, (char *)0);
 _exit(127);
 }
 v3 = waitpid(v2, stat_loc, 0);
 result = -2;
 if ( v3 >= 0 )
 {
 result = -3;
 if ( (stat_loc[0] & 0x7F) == 0 )
 return BYTE1(stat_loc[0]);
 }
 return result;
}


/* Function: call_fork_exec @ 0x246B */
int call_fork_exec()
{
 return param_fork_exec("/bin/true", 0) == 0 ? 42 : -1;
}


/* Function: param_pipe_communication @ 0x249B */
int param_pipe_communication()
{
 __pid_t v0; // eax
 ssize_t v1; // eax
 int v2; // esi
 int result; // eax
 int pipedes[2]; // [esp+0h] [ebp-34h] BYREF
 unsigned char buf[32]; // [esp+8h] [ebp-2Ch] BYREF
 unsigned int v6; // [esp+28h] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 if ( pipe(pipedes) < 0 )
 return -1;
 v0 = fork();
 if ( v0 < 0 )
 return -2;
 if ( !v0 )
 {
 close(pipedes[0]);
 write(pipedes[1], "HelloPipe", 9u);
 close(pipedes[1]);
 _exit(0);
 }
 close(pipedes[1]);
 v1 = read(pipedes[0], buf, 0x1Fu);
 buf[v1] = 0;
 v2 = v1;
 close(pipedes[0]);
 wait(0);
 result = 42;
 if ( v2 <= 0 )
 return -3;
 return result;
}


/* Function: call_pipe_communication @ 0x2582 */
int call_pipe_communication()
{
 return param_pipe_communication();
}


/* Function: param_socket_create @ 0x258B */
int param_socket_create()
{
 int v0; // esi
 int result; // eax
 int optval; // [esp+0h] [ebp-30h] BYREF
 struct sockaddr addr; // [esp+4h] [ebp-2Ch] BYREF
 unsigned int v4; // [esp+14h] [ebp-1Ch]

 v4 = __readgsdword(0x14u);
 v0 = socket(2, 1, 0);
 result = -1;
 if ( v0 >= 0 )
 {
 optval = 1;
 if ( setsockopt(v0, 1, 2, (const char *)&optval, sizeof(optval)) >= 0 )
 {
 memset(&addr, 0, sizeof(addr));
 addr.sa_family = 2;
 if ( bind(v0, &addr, 0x10u) >= 0 )
 {
 if ( listen(v0, 5) >= 0 )
 {
 close(v0);
 return 42;
 }
 else
 {
 close(v0);
 return -4;
 }
 }
 else
 {
 close(v0);
 return -3;
 }
 }
 else
 {
 close(v0);
 return -2;
 }
 }
 return result;
}


/* Function: call_socket_create @ 0x2683 */
int call_socket_create()
{
 return param_socket_create();
}


/* Function: param_shmget_shmat @ 0x268C */
int param_shmget_shmat()
{
 int v0; // eax
 size_t v1; // esi
 key_t v2; // eax
 int v3; // eax
 char *v5; // eax
 const char *v6; // edi
 struct shmid_ds shm_buf; // [esp-10h] [ebp-2Ch]
 int v9; // [esp+0h] [ebp-1Ch]

 v0 = open("/tmp/binbench_shm", 66, 438);
 if ( v0 < 0 )
 return -1;
 close(v0);
 v2 = ftok("/tmp/binbench_shm", 42);
 if ( v2 < 0 )
 return -1;
 v1 = -2;
 v3 = shmget(v2, 4096, 950);
 if ( v3 >= 0 )
 {
 v1 = -3;
 v9 = v3;
 v5 = (char *)shmat(v3, 0, 0);
 v6 = v5;
 if ( v5 != (char *)-1 )
 {
 strcpy(v5, "SharedMemory");
 v1 = strlen(v6);
 shmdt(v6);
 shmctl(v9, IPC_RMID, &shm_buf);
 }
 }
 return v1;
}


/* Function: call_shmget_shmat @ 0x2758 */
int call_shmget_shmat()
{
 bool v0; // cc
 int result; // eax

 v0 = param_shmget_shmat() <= 0;
 result = 42;
 if ( v0 )
 return -1;
 return result;
}


/* Function: param_signal_handling @ 0x2778 */
int param_signal_handling()
{
 __sighandler_t v0; // edx
 int result; // eax
 __sighandler_t v2; // edx
 int v3; // esi
 int v4; // esi

 v0 = signal(10, (__sighandler_t)signal_handler) != (__sighandler_t)-1;
 result = -1;
 if ( v0 )
 {
 v2 = signal(14, (__sighandler_t)signal_handler) != (__sighandler_t)-1;
 result = -2;
 if ( v2 )
 {
 v3 = 1001;
 signal_received = 0;
 raise(10);
 while ( !signal_received )
 {
 if ( !--v3 )
 break;
 usleep(0x3E8u);
 }
 result = -3;
 if ( signal_received )
 {
 result = -4;
 if ( signal_number == 10 )
 {
 v4 = 2001;
 signal_received = 0;
 alarm(1u);
 while ( !signal_received )
 {
 if ( !--v4 )
 break;
 usleep(0x3E8u);
 }
 result = -5;
 if ( signal_received )
 {
 if ( signal_number == 14 )
 {
 signal(10, (__sighandler_t)0);
 signal(14, (__sighandler_t)0);
 return 42;
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_signal_handling @ 0x289E */
int call_signal_handling()
{
 return param_signal_handling();
}


/* Function: test_system_calls @ 0x28A7 */
int test_system_calls()
{
 int v0; // edx
 int v1; // ecx
 int v2; // eax
 int v3; // eax

 v0 = 0;
 v1 = 0;
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v10; // [esp-8h] [ebp-Ch]
 int v11; // [esp-4h] [ebp-8h]
 int v12; // [esp+0h] [ebp-4h]
 int v13; // [esp+0h] [ebp-4h]
 int v14; // [esp+0h] [ebp-4h]
 int v15; // [esp+0h] [ebp-4h]
 int v16; // [esp+0h] [ebp-4h]
 int v17; // [esp+0h] [ebp-4h]
 int savedregs; // [esp+4h] [ebp+0h]
 int savedregsa; // [esp+4h] [ebp+0h]
 int savedregsb; // [esp+4h] [ebp+0h]
 int savedregsc; // [esp+4h] [ebp+0h]
 int savedregsd; // [esp+4h] [ebp+0h]
 int savedregse; // [esp+4h] [ebp+0h]

 puts(asc_4242);
 v2 = call_linux_syscall(v1, v0);
 v10 = 0;
 v11 = 0;
 __printf_chk(1, unk_425D, v2, v10, v11);
 v3 = call_win32_api();
 __printf_chk(1, &unk_4279, v3, v12, savedregs);
 v4 = call_fork_exec();
 __printf_chk(1, &unk_4295, v4, v13, savedregsa);
 v5 = param_pipe_communication();
 __printf_chk(1, unk_42B1, v5, v14, savedregsb);
 v6 = param_socket_create();
 __printf_chk(1, unk_42CD, v6, v15, savedregsc);
 v7 = call_shmget_shmat();
 __printf_chk(1, &unk_42E9, v7, v16, savedregsd);
 v8 = param_signal_handling();
 return __printf_chk(1, &unk_4305, v8, v17, savedregse);
}


/* Function: param_pthread_create @ 0x2972 */
int param_pthread_create(int a1)
{
 int v1; // edx
 unsigned int v2;
 int result; // eax
 int v3; // [esp+0h] [ebp-1Ch]
 pthread_t newthread; // [esp+4h] [ebp-18h] BYREF
 unsigned int arg; // [esp+8h] [ebp-14h] BYREF
 void *thread_return; // [esp+Ch] [ebp-10h] BYREF
 unsigned int stack_canary; // [esp+10h] [ebp-Ch]

 stack_canary = __readgsdword(0x14u);
 arg = a1;
 v1 = pthread_create(&newthread, 0, (void *(*)(void *))thread_compute, &arg);
 result = -1;
 if ( !v1 )
 {
 pthread_join(newthread, &thread_return);
 {
 v3 = *(unsigned int *)thread_return;
 free(thread_return);
 }
 result = v3;
 if ( stack_canary != __readgsdword(0x14u) )
 _stack_chk_fail_local();
 return result;
 }
 return result;
}


/* Function: call_pthread_create @ 0x29F3 */
int call_pthread_create()
{
 return param_pthread_create(7);
}


/* Function: param_pthread_join @ 0x2A06 */
int param_pthread_join()
{
 unsigned int *v0; // edx
 void *v1; // edi
 void *v2; // ecx
 int v3; // esi
 int v4; // edi
 int v5; // eax
 int sum;
 unsigned int *v7; // [esp+0h] [ebp-68h]
 pthread_t *newthread; // [esp+1Ch] [ebp-4C] BYREF
 unsigned int *v10; // [esp+28h] [ebp-40h] BYREF
 unsigned int stack_canary; // [esp+2Ch] [ebp-3Ch]
 int i;

 newthread = malloc(3 * sizeof(pthread_t));
 v10 = malloc(16 * sizeof(unsigned int));

 v0 = v10;
 stack_canary = __readgsdword(0x14u);
 qmemcpy(v10, &unk_4440, 0x24u);
 v1 = newthread;
 v2 = (void *(*)(void *))thread_sum;
 for (i = 0; i < 3; i++)
 {
 v7 = &v10[i * 3];
 v3 = pthread_create(&newthread[i], 0, (void *(*)(void *))thread_sum, v7);
 if ( v3 )
 return -1;
 }
v4 = 0;
    sum = 0;
    while ( !pthread_join(newthread[v4], 0) )
    {
        v5 = 3 * v4;
        v4++;
        sum += v10[v5 + 2];
if ( v4 == 3 )
        {
            if ( stack_canary != __readgsdword(0x14u) )
                _stack_chk_fail_local();
            return sum;
        }
    }
    if ( stack_canary != __readgsdword(0x14u) )
        _stack_chk_fail_local();
    return -2;
}


/* Function: call_pthread_join @ 0x2AC1 */
int call_pthread_join()
{
 return param_pthread_join();
}


/* Function: param_mutex_lock @ 0x2ACA */
int param_mutex_lock(int a1, int arg)
{
 pthread_t *v2; // esi
 int result; // eax
 int v4_i; // edx
 void *(*v5)(void *);
 int v6; // eax
 int i; // edx
 void *v8; // [esp+0h] [ebp-20h]
 int v9; // [esp+4h] [ebp-1Ch]
 int v10; // [esp+4h] [ebp-1Ch]

 v2 = (pthread_t *)malloc(4 * a1);
 result = -1;
 if ( v2 )
 {
 shared_counter = 0;
 v4_i = 0;
 v5 = (void *(*)(void *))thread_increment;
 while ( v4_i < a1 )
 {
 v9 = v4_i;
 v6 = pthread_create(&v2[v4_i], 0, v5, &arg);
 if ( v6 )
 {
free(v2);
            return -2;
        }
        v4_i = v9 + 1;
    }
    for ( i = 0; i < a1; i++ )
    {
        pthread_join(v2[i], 0);
    }
 free(v2);
 result = 42;
 if ( shared_counter != arg * a1 )
 return -3;
 }
 return result;
}


/* Function: call_mutex_lock @ 0x2B9C */
int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


/* Function: param_condition_variable @ 0x2BB4 */
int param_condition_variable()
{
 int v0; // edx
 int result; // eax
 int v2; // [esp+0h] [ebp-1Ch]
 pthread_t th; // [esp+4h] [ebp-18h] BYREF
 pthread_t newthread; // [esp+8h] [ebp-14h] BYREF
 void *thread_return; // [esp+Ch] [ebp-10h] BYREF
 unsigned int stack_canary; // [esp+10h] [ebp-Ch]

 stack_canary = __readgsdword(0x14u);
 ready = 0;
 data = 0;
 v0 = pthread_create(&newthread, 0, (void *(*)(void *))consumer_thread, 0);
 result = -1;
 if ( !v0 )
 {
 if ( pthread_create(&th, 0, (void *(*)(void *))producer_thread, 0) )
 {
 pthread_cancel(newthread);
 return -2;
 }
 else
 {
 pthread_join(newthread, &thread_return);
 pthread_join(th, 0);
 v2 = *(unsigned int *)thread_return;
 free(thread_return);
 return v2;
 }
 }
 return result;
}


/* Function: call_condition_variable @ 0x2C7F */
int call_condition_variable()
{
 return param_condition_variable();
}


/* Function: param_atomic_ops @ 0x2C88 */
int param_atomic_ops(int a1, ...)
{
 pthread_t *v1; // esi
 int result; // eax
 int v3; // edi
 void *v4; // ecx
 int v5; // eax
 int i; // edi
 int v7; // edi
 pthread_t v8; // [esp-1Ch] [ebp-48h]
 void *v9; // [esp+0h] [ebp-2Ch]
 pthread_t newthread[8]; // [esp+Ch] [ebp-20h] BYREF
 va_list va; // [esp+38h] [ebp+Ch] BYREF
 unsigned int stack_canary; // [esp+3Ch] [ebp+10h]
 signed int *thread_arg;

 va_start(va, a1);
 stack_canary = __readgsdword(0x14u);
 v1 = (pthread_t *)malloc(sizeof(pthread_t) * a1);
 result = -1;
 if ( v1 )
 {
 __sync_lock_test_and_set(&atomic_counter, 0);
 v3 = 0;
 v4 = (void *(*)(void *))thread_atomic_increment;
 thread_arg = (signed int *)malloc(sizeof(signed int));
 if ( thread_arg )
 {
 *thread_arg = va_arg(va, signed int);
 }
 while ( v3 < a1 )
 {
 v9 = v4;
 v5 = pthread_create(&v1[v3], 0, v4, thread_arg);
 v4 = v9;
 if ( v5 )
 {
 free(v1);
 return -2;
 }
 ++v3;
 }
 if ( !pthread_create(newthread, 0, (void *(*)(void *))thread_atomic_load_store, 0) )
 pthread_join(newthread[0], 0);
 for ( i = 0; i < a1; ++i )
 {
 pthread_join(v1[i], 0);
 }
 v7 = atomic_counter;
 free(v1);
 free(thread_arg);
 result = 42;
 if ( v7 <= 0 )
 result = -3;
 if ( stack_canary != __readgsdword(0x14u) )
 _stack_chk_fail_local();
 }
 else
 {
 free(v1);
 }
 return result;
}


/* Function: call_atomic_ops @ 0x2D8A */
int call_atomic_ops()
{
 return param_atomic_ops(4, 500);
}


/* Function: param_thread_local_storage @ 0x2DA2 */
int param_thread_local_storage(int a1)
{
 char **v1; // eax
 int i; // edi
 void *v4; // eax
 int v5; // edi
 void *(*v6)(void *);
 int v7; // eax
 int v8; // eax
 int v9; // edx
 int v10; // edi
 void *v12; // [esp-14h] [ebp-48h]
 int v13; // [esp-10h] [ebp-44h]
 int v14; // [esp+0h] [ebp-34h]
 int v17; // [esp+0h] [ebp-34h]
 unsigned int stack_canary; // [esp+10h] [ebp-30h]
 pthread_t *ptr;
 void *thread_return; // [esp+14h] [ebp-20h] BYREF
 char **v2; // [esp+1Ch] [ebp-18h]

 stack_canary = __readgsdword(0x14u);
 ptr = (pthread_t *)malloc(sizeof(pthread_t) * a1);
 v1 = malloc(sizeof(char *) * a1);
 if ( !ptr )
 return -1;
 v2 = v1;
 if ( !v1 )
 return -1;
 for ( i = 0; i < a1; ++i )
 {
 v4 = malloc(0x10u);
 v2[i] = v4;
 v13 = i;
 __snprintf_chk(v4, 16, 1, 16, "Thread-%d", v13);
 }
 v5 = 0;
 v6 = (void *(*)(void *))thread_tls_test;
 while ( v5 < a1 )
 {
 v7 = pthread_create(&ptr[v5], 0, (void *(*)(void *))thread_tls_test, (void *)v2[v5]);
 if ( v7 )
 {
 v8 = 0;
 do
 {
 free((void *)v2[v8]);
 ++v8;
 }
 while ( v5 > v8 );
 free(v2);
 free(ptr);
 return -2;
 }
 ++v5;
 }
 v14 = 0;
 v10 = 0;
 v10 = 0;
 v17 = 0;
 while ( v10 < a1 )
 {
 pthread_join(ptr[v10], &thread_return);
 if ( thread_return ) {
 unsigned int *ret_val = (unsigned int *)thread_return;
 v17 += *ret_val;
 v14 += ret_val[1];
 free(thread_return);
 }
 v12 = (void *)v2[v10++];
 if ( v12 )
 free(v12);
 }
 free(v2);
 free(ptr);
 if ( 100 * a1 != v17 )
 return -3;
 v9 = 42;
 if ( 150 * a1 != v14 )
 return -3;
 if ( stack_canary != __readgsdword(0x14u) )
 _stack_chk_fail_local();
 return v9;
}


/* Function: call_thread_local_storage @ 0x2F32 */
int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


/* Function: test_thread_concurrency @ 0x2F45 */
int test_thread_concurrency()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v7; // [esp-8h] [ebp-Ch]
 int v8; // [esp-4h] [ebp-8h]
 int v9; // [esp+0h] [ebp-4h]
 int v10; // [esp+0h] [ebp-4h]
 int v11; // [esp+0h] [ebp-4h]
 int v12; // [esp+0h] [ebp-4h]
 int v13; // [esp+0h] [ebp-4h]
 int savedregs; // [esp+4h] [ebp+0h]
 int savedregsa; // [esp+4h] [ebp+0h]
 int savedregsb; // [esp+4h] [ebp+0h]
 int savedregsc; // [esp+4h] [ebp+0h]
 int savedregsd; // [esp+4h] [ebp+0h]

 puts(asc_432B);
 v0 = call_pthread_create();
 v7 = 0;
 v8 = 0;
 __printf_chk(1, &unk_4349, v0, v7, v8);
 v1 = param_pthread_join();
 __printf_chk(1, &unk_4365, v1, v9, savedregs);
 v2 = call_mutex_lock();
 __printf_chk(1, &unk_4382, v2, v10, savedregsa);
 v3 = param_condition_variable();
 __printf_chk(1, unk_439E, v3, v11, savedregsb);
 v4 = call_atomic_ops();
 __printf_chk(1, unk_43BA, v4, v12, savedregsc);
 v5 = call_thread_local_storage();
 return __printf_chk(1, &unk_43D6, v5, v13, savedregsd);
}


/* Function: __x86.get_pc_thunk.ax @ 0x2FF9 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x2FFD */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __x86.get_pc_thunk.si @ 0x3001 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x3010 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_-., %ebx" ::: "memory");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x307C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: setsockopt @ 0x7104 */

/* FAILED to decompile: pthread_mutex_unlock @ 0x7108 */

/* FAILED to decompile: raise @ 0x710C */

/* FAILED to decompile: __snprintf_chk @ 0x7110 */

/* FAILED to decompile: strstr @ 0x7114 */

/* FAILED to decompile: strcmp @ 0x7118 */

/* FAILED to decompile: __libc_start_main @ 0x711C */

/* FAILED to decompile: read @ 0x7120 */

/* FAILED to decompile: _exit @ 0x7124 */

/* FAILED to decompile: free @ 0x7128 */

/* FAILED to decompile: shmget @ 0x712C */

/* FAILED to decompile: fclose @ 0x7130 */

/* FAILED to decompile: pthread_cond_wait @ 0x7134 */

/* FAILED to decompile: signal @ 0x7138 */

/* FAILED to decompile: memcmp @ 0x713C */

/* FAILED to decompile: sleep @ 0x7140 */

/* FAILED to decompile: alarm @ 0x7144 */

/* FAILED to decompile: __stack_chk_fail @ 0x7148 */

/* FAILED to decompile: rewind @ 0x714C */

/* FAILED to decompile: wait @ 0x7150 */

/* FAILED to decompile: shmat @ 0x7154 */

/* FAILED to decompile: pthread_mutex_lock @ 0x7158 */

/* FAILED to decompile: unlink @ 0x715C */

/* FAILED to decompile: __cxa_finalize @ 0x7160 */

/* FAILED to decompile: fwrite @ 0x7164 */

/* FAILED to decompile: waitpid @ 0x7168 */

/* FAILED to decompile: usleep @ 0x716C */

/* FAILED to decompile: fread @ 0x7170 */

/* FAILED to decompile: strcpy @ 0x7174 */

/* FAILED to decompile: shmctl @ 0x7178 */

/* FAILED to decompile: pthread_cond_signal @ 0x717C */

/* FAILED to decompile: malloc @ 0x7180 */

/* FAILED to decompile: puts @ 0x7184 */

/* FAILED to decompile: stat @ 0x7188 */

/* FAILED to decompile: open @ 0x718C */

/* FAILED to decompile: strchr @ 0x7190 */

/* FAILED to decompile: strlen @ 0x7194 */

/* FAILED to decompile: write @ 0x7198 */

/* FAILED to decompile: bind @ 0x719C */

/* FAILED to decompile: __isoc99_sscanf @ 0x71A0 */

/* FAILED to decompile: fopen @ 0x71A4 */

/* FAILED to decompile: __errno_location @ 0x71A8 */

/* FAILED to decompile: strncpy @ 0x71AC */

/* FAILED to decompile: syscall @ 0x71B0 */

/* FAILED to decompile: fileno @ 0x71B4 */

/* FAILED to decompile: execl @ 0x71B8 */

/* FAILED to decompile: pipe @ 0x71BC */

/* FAILED to decompile: __printf_chk @ 0x71C0 */

/* FAILED to decompile: shmdt @ 0x71C4 */

/* FAILED to decompile: pthread_create @ 0x71C8 */

/* FAILED to decompile: fork @ 0x71CC */

/* FAILED to decompile: listen @ 0x71D0 */

/* FAILED to decompile: ftok @ 0x71D4 */

/* FAILED to decompile: socket @ 0x71D8 */

/* FAILED to decompile: pthread_join @ 0x71DC */

/* FAILED to decompile: pthread_cancel @ 0x71E0 */

/* FAILED to decompile: close @ 0x71E4 */

/* Total functions decompiled: 137, failed: 57 */
