// Angr Decompilation of 6_gcc_O1_g
// Platform: AARCH64

extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);

/* AArch64 atomic intrinsics */
extern int __aarch64_ldadd4_acq_rel(int mem, void *ptr);
extern int __aarch64_cas4_acq_rel(int old_val, int new_val, void *ptr);
extern void __stack_chk_fail(void);

/* VEX/Angr ARM64 condition code helper */
int arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
    /* ARM64 condition code implementations
     * For simplified usage in this decompiled code, we implement:
     * cc_dep1 is the primary operand (flags, value, or result)
     */
    switch (cc_op & 0xF) {
        case 0: /* EQ - Equal (Z==1) */
            return (cc_dep1 & 1) != 0;  /* Assume Z is bit 0 */
        case 1: /* NE - Not Equal (Z==0) */
            return (cc_dep1 & 1) == 0;
        case 2: /* HS/CS - Higher or Same / Carry Set (C==1) */
            return (cc_dep1 & 2) != 0;  /* Assume C is bit 1 */
        case 3: /* LO/CC - Lower / Carry Clear (C==0) */
            return (cc_dep1 & 2) == 0;
        case 4: /* MI - Minus / Negative (N==1) */
            return (cc_dep1 & 0x80000000) != 0;  /* N is sign bit */
        case 8: /* HI - Higher (C==1 && Z==0) */
            return (cc_dep1 & 2) != 0 && (cc_dep1 & 1) == 0;
        case 10: /* GE - Signed >= (N==V) */
            return ((cc_dep1 ^ cc_dep2) & 0x80000000) == 0;
        case 0xC: /* GT - Signed > (Z==0 && N==V) */
            return (cc_dep1 & 1) == 0 && ((cc_dep2 ^ (cc_dep1 >> 31)) & 1) == 0;
        case 0xD: /* LE - Signed <= (Z==1 || N!=V) */
            return (cc_dep1 & 1) != 0 || ((cc_dep2 ^ (cc_dep1 >> 31)) & 1) != 0;
        default:
            /* For unknown conditions, assume true to avoid blocking execution */
            return 1;
    }
}

/* Thread-local storage structure */
struct struct_0 {
    unsigned int padding_0[4];  // Various fields including TLS data
    unsigned int field_10;      // Field at offset 0x10
    unsigned char field_14[64]; // Additional storage
};

/* Thread function declarations */
extern unsigned long long thread_sum(unsigned int *ptr);
extern unsigned int * thread_compute(unsigned int *a0);
extern unsigned long long thread_increment(unsigned int *ptr);
extern unsigned int * consumer_thread(void);
extern unsigned long long producer_thread(void);
extern unsigned long long thread_atomic_increment(unsigned int *a0);
extern unsigned long long thread_atomic_load_store(void);
extern unsigned int * thread_tls_test(char *a0);

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <sys/auxv.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>

/* Global data declarations */
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
unsigned int shared_counter = 0;
unsigned int atomic_counter = 0;
unsigned int data = 0;
unsigned int ready = 0;
unsigned int i = 0;
unsigned int signal_number = 0;
unsigned int signal_received = 0;

/* GNU libc sscanf variant */
extern int __isoc99_sscanf(const char *str, const char *format, ...);

#define __ROL__(x, n) (((x) << (n)) | ((x) >> (sizeof(x) * 8 - (n))))

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4013a0
unsigned long long g_414dd0 = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 /* goto g_414dd0; */ /* Removed: g_414dd0 is an external variable, not a label */
 return (long long)g_414dd0;
}


// Function: sub_4013b4 at 0x4013b4
long long sub_4013b4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)dst;
}


// Function: init_have_lse_atomics at 0x4017c0
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}














// Function: signal_handler at 0x401914
extern unsigned int signal_number;
extern unsigned int signal_received;

long long signal_handler(unsigned long a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: thread_sum at 0x40192c
unsigned long long thread_sum(unsigned int *ptr)
{
 unsigned long v0; // x1
 unsigned long long v1; // x2

 ptr[2] = 0;
 v0 = *(ptr);
 if (ptr[1] < (unsigned int)v0)
 return 0;
 v1 = 0;
 do
 {
 v1 += v0;
 v0 = (unsigned int)v0 + 1;
 } while ((unsigned int)v0 != ptr[1] + 1);
 ptr[2] = v1;
 return 0;
}


// Function: thread_compute at 0x401964
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: thread_increment at 0x401990
extern pthread_mutex_t counter_mutex;
extern unsigned int shared_counter;

unsigned long long thread_increment(unsigned int *ptr)
{
 unsigned int i; // w22
 unsigned long long v6; // x19
 unsigned long long v7; // x20
 unsigned long long v8; // x23
 unsigned int v9; // w19
 char *v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v0 = &v4;
 i = *(ptr);
 if (i <= 0)
 return 0;
 v1 = v6;
 v2 = v7;
 v3 = v8;
 v9 = 0;
 do
 {
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 v9 += 1;
 } while (i != v9);
 return 0;
}


// Function: consumer_thread at 0x401a0c
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread()
{
 unsigned long long v3; // x21
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v0 = &v2;
 pthread_mutex_lock(&cond_mutex);
 if (!i)
 {
 v1 = v3;
 do
 {
 pthread_cond_wait(&cond, &cond_mutex);
 } while (!i);
 }
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = data;
 return ptr;
}


// Function: producer_thread at 0x401a88
extern pthread_cond_t cond;
extern pthread_mutex_t cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned long long producer_thread()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: thread_atomic_increment at 0x401ae0
extern unsigned int atomic_counter;

unsigned long long thread_atomic_increment(unsigned int *a0)
{
 unsigned long long v4; // x19
 unsigned long long v5; // x20
 unsigned int i; // w19
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 char v3; // [bp+0x0]

 v0 = &v3;
 if (*(a0) <= 0)
 return 0;
 v1 = v4;
 v2 = v5;
 i = 0;
 do
 {
 __aarch64_ldadd4_acq_rel(1, &atomic_counter);
 __aarch64_cas4_acq_rel(i, i + 1000, &atomic_counter);
 i += 1;
 } while (*(a0) != i);
 return 0;
}


// Function: thread_atomic_load_store at 0x401b4c


unsigned long long thread_atomic_load_store()
{
 __sync_synchronize();
 __sync_synchronize();
 atomic_counter = atomic_counter + 100;
 return 0;
}


// Function: thread_tls_test at 0x401b6c

unsigned int * thread_tls_test(char *a0)
{
 struct struct_0 *v2; // tpidr_el0
 struct struct_0 *ptr; // x2
 unsigned int v4; // w20
 unsigned int v5; // w19
 unsigned int *p; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = (struct struct_0 *)malloc(sizeof(struct struct_0)); /* Initialize thread-local storage pointer */
 ptr = (struct struct_0 *)&v2->field_10;
 v4 = *((int *)&ptr->padding_0[0]);
 v5 = v4 + 50;
 *((unsigned int *)&ptr->padding_0[0]) = v5;
 /* strncpy(&v2[1]_padding_0[4], a0, 31); */ /* Removed: invalid syntax */
 p = (unsigned int *)malloc(8);
 p[0] = v4;
 p[1] = v5;
 return p;
}


// Function: param_strcpy at 0x401bc0
long long param_strcpy(char *ptr, char *a1)
{
 unsigned long long len; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 strcpy(ptr, a1);
 len = strlen(ptr);
 return strlen(ptr);
}


// Function: call_strcpy at 0x401be8
extern char __stack_chk_guard;

unsigned long long call_strcpy()
{
 unsigned long long dst; // x0
 char *v0; // [bp-0x40]
 char v1[32]; // [bp-0x28]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 dst = param_strcpy(v1, "HelloLib");
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return dst;
}


// Function: param_strcmp at 0x401c3c
unsigned long long param_strcmp(char *a0, char *a1)
{
 unsigned long long v3; // x30
 unsigned int v4; // w0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 v4 = strcmp(a0, a1);
 if (v4 > 0)
 return 1;
 return v4 >> 31 & 4294967294 | (v4 * 2 | v4 >> 31) & 1;
}


// Function: call_strcmp at 0x401c5c
int call_strcmp()
{
 unsigned int v2; // w0
 unsigned int v3; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_strcmp("abc", "def");
 v3 = param_strcmp("xyz", "xyz");
 return v2 + v3 + (unsigned int)param_strcmp("bbb", "aaa");
}


// Function: param_strlen at 0x401cbc
long long param_strlen()
{
 char *v2; // x0
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 len = strlen(v2);
 return strlen(v2);
}


// Function: call_strlen at 0x401cd0
unsigned long long call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x401cd8
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401cfc
extern char __stack_chk_guard;

long long call_memcpy()
{
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 unsigned int v3; // [bp-0x28]
 char v4; // [bp-0x20]
 char v5; // [bp-0x18]
 char v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v1 = 85899345930;
 v2 = 171798691870;
 v3 = 50;
 memset(&v4, 0, 20);
 param_memcpy(&v4, &v1, 20);
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v4) + *((int *)&v5) + *((int *)&v6);
}


// Function: param_memcmp at 0x401d84
unsigned long long param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned long long v3; // x30
 unsigned int v4; // w0
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 v4 = memcmp(a0, a1, a2);
 if (v4 > 0)
 return 1;
 return v4 >> 31 & 4294967294 | (v4 * 2 | v4 >> 31) & 1;
}


// Function: call_memcmp at 0x401da4
extern char __stack_chk_guard;

long long call_memcmp()
{
 unsigned long long v9; // x0
 unsigned long long v10; // x0
 char *v0; // [bp-0x70]
 unsigned long long v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 unsigned int v4; // [bp-0x20]
 unsigned long long v5; // [bp-0x18]
 unsigned int v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v1 = 8589934593;
 v2 = 3;
 v3 = 8589934593;
 v4 = 4;
 v5 = 8589934593;
 v6 = 3;
 v9 = param_memcmp(&v1, &v3, 12);
 v10 = param_memcmp(&v1, &v5, 12);
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (v9 & 4294967295) + v10;
}


// Function: param_printf at 0x401e58
int param_printf(unsigned int a0, char *a1)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x401e80
int call_printf()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_printf(42, "Test");
}


// Function: param_scanf at 0x401ea0
extern char __stack_chk_guard;

unsigned long long param_scanf()
{
 char *v5; // x0
 unsigned long long v6; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp-0x10], Other Possible Types: unsigned int
 char v2; // [bp-0xc], Other Possible Types: unsigned int
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 if (__isoc99_sscanf(v5, "%d,%d", &v1, &v2) == 2)
 v6 = v1 + v2;
 else
 v6 = 4294967295;
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_scanf at 0x401f14
unsigned long long call_scanf()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_scanf();
 return param_scanf();
}


// Function: param_fopen_fclose at 0x401f30
unsigned int param_fopen_fclose()
{
 char *v2; // x0
 FILE *fp; // x0
 unsigned int v4; // w20
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 fp = fopen(v2, "r");
 if (!fp)
 return 4294967295;
 v4 = fileno(fp);
 fclose(fp);
 return v4;
}


// Function: call_fopen_fclose at 0x401f78
unsigned long long call_fopen_fclose()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 > param_fopen_fclose())
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401fa0
extern char __stack_chk_guard;

unsigned long long param_fread_fwrite(char *a0)
{
 void* fp; // x0
 unsigned long long v7; // x19
 unsigned long long v8; // x20
 void* v9; // x19
 unsigned long long count; // x0
 unsigned long long v11; // x0
 unsigned long long v12; // x19
 unsigned long long v13; // x20
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 char v3; // [bp-0x28]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 fp = fopen(a0, "w+");
 if (fp)
 {
 v1 = v7;
 v2 = v8;
 v9 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) == 18)
 {
 rewind(v9);
 count = fread(&v3, 1, 18, v9);
 (&v3)[count] = 0;
 fclose(v9);
 unlink(a0);
 if (count == 18)
 {
 if (strcmp(&v3, "BinBench Test Data"))
 v11 = 4294967293;
 else
 v11 = 42;
 v12 = v1;
 v13 = v2;
 }
 else
 {
 v11 = 4294967293;
 v12 = v1;
 v13 = v2;
 }
 }
 else
 {
 fclose(v9);
 v11 = 4294967294;
 v12 = v1;
 v13 = v2;
 }
 }
 else
 {
 v11 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 {
 v1 = v12;
 v2 = v13;
 __stack_chk_fail(); /* do not return */
 }
 return v11;
}


// Function: call_fread_fwrite at 0x4020b8
unsigned long long call_fread_fwrite()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x4020d4
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned long long v2; // x19
 unsigned int *ptr; // x0
 unsigned int v4; // w1
 unsigned int *ptr2; // x2
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = __ROL__(a0, 2) & 18446744073709551612;
 ptr = malloc(v2);
 if (!ptr)
 return 4294967295;
 if (a0)
 {
 v4 = 0;
 ptr2 = ptr;
 do
 {
 *(ptr2) = v4;
 v4 += 10;
 ptr2 += 1;
 } while (ptr2 != v2 + (char *)ptr);
 }
 free(ptr);
 return *((int *)(-4 + (char *)ptr + v2)) + *(ptr);
}


// Function: call_malloc_free at 0x402140
int call_malloc_free()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_malloc_free(10);
}


// Function: param_memset at 0x402158
unsigned long long param_memset(char *a0, unsigned long n)
{
 char *v2; // x19
 unsigned long long v3; // x0
 char *ptr; // x3
 char *v5; // x3
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = a0;
 memset(a0, 0, n);
 if (!n)
 return 0;
 v3 = 0;
 ptr = v2;
 do
 {
 v5 = ptr + 1;
 v3 += *(ptr);
 ptr = v5;
 } while (ptr != &v2[n]);
 return v3;
}


// Function: call_memset at 0x4021ac
extern char __stack_chk_guard;

long long call_memset()
{
 unsigned int *cur; // x0
 char *v0; // [bp-0x40]
 char v1[36]; // [bp-0x30]
 unsigned int v2; // [bp-0xc]
 unsigned long long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 cur = (unsigned int *)v1;
 do
 {
 *(cur) = 255;
 cur += 1;
 } while (cur != (unsigned int *)&v3);
 param_memset(v1, 40);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v1[0]) + v2;
}


// Function: param_strchr_strstr at 0x402220
long long param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned long long v6; // x30
 unsigned long long v7; // x19
 unsigned long long v8; // x20
 unsigned long long v9; // x21
 char *ptr; // x0
 unsigned long long v11; // x20
 char *v12; // x0
 unsigned long long v13; // x0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x20]
 unsigned long long v3; // [bp-0x18]
 unsigned long long v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v2 = v7;
 v3 = v8;
 v4 = v9;
 ptr = strchr(a0, a1 & 255);
 if (ptr)
 v11 = (unsigned long long)(ptr - a0) & 4294967295;
 else
 v11 = 4294967295;
 v12 = strstr(a0, a2);
 if (v12)
 v13 = (unsigned long long)(v12 - a0) & 4294967295;
 else
 v13 = 4294967295;
 return v11 + v13;
}


// Function: call_strchr_strstr at 0x402278
unsigned long long call_strchr_strstr()
{
 unsigned long long ptr; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = param_strchr_strstr("Hello BinBench Test", 66, "Bench");
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


// Function: test_standard_library_functions at 0x4022a0
/* String constants */
static const char g_4034c8[] = "\n=== Standard Library Functions Test ===\n";
static const char g_4034f0[] = "  strcpy: %d\n";
static const char g_403510[] = "  strcmp: %d\n";
static const char g_403530[] = "  strlen: %d\n";
static const char g_403550[] = "  memcpy: %d\n";
static const char g_403570[] = "  memcmp: %d\n";
static const char g_403590[] = "  printf: %d\n";
static const char g_4035b0[] = "  scanf: %d\n";
static const char g_4035d0[] = "  fopen/fclose: %d\n";
static const char g_4035f0[] = "  fread/fwrite: %d\n";
static const char g_403610[] = "  malloc/free: %d\n";
static const char g_403630[] = "  memset: %d\n";
static const char g_403650[] = "  strchr/strstr: %d\n";

int test_standard_library_functions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4034c8);
 __printf_chk(1, g_4034f0, call_strcpy() & 4294967295);
 __printf_chk(1, g_403510, call_strcmp() & 4294967295);
 __printf_chk(1, g_403530, call_strlen() & 4294967295);
 __printf_chk(1, g_403550, call_memcpy() & 4294967295);
 __printf_chk(1, g_403570, call_memcmp() & 4294967295);
 __printf_chk(1, g_403590, call_printf() & 4294967295);
 __printf_chk(1, g_4035b0, call_scanf() & 4294967295);
 __printf_chk(1, g_4035d0, call_fopen_fclose() & 4294967295);
 __printf_chk(1, g_4035f0, call_fread_fwrite() & 4294967295);
 __printf_chk(1, g_403610, call_malloc_free() & 4294967295);
 __printf_chk(1, g_403630, call_memset() & 4294967295);
 return __printf_chk(1, g_403650, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x4023dc
unsigned int param_linux_syscall(char *a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = syscall(56);
 if (((char)(v2 >> 31) & 1))
 return -(*(__errno_location()));
 syscall(57);
 return v2;
}


// Function: call_linux_syscall at 0x402430
unsigned long long call_linux_syscall()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 > param_linux_syscall("/etc/passwd"))
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x402458
extern char __stack_chk_guard;

unsigned long long param_win32_api()
{
 unsigned long long v4; // x0
 unsigned long v2; // [bp-0x8]
 char v1; // [bp+0x0]
 struct stat st = {0};

 v2 = *((long long *)&__stack_chk_guard);
 if (((char)(stat("/etc/passwd", &st) >> 31) & 1))
 {
 v4 = 4294967295;
 }
 else if (0 < st.st_size)
 {
 v4 = 42;
 }
 else
 {
 v4 = 4294967294;
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: call_win32_api at 0x4024c4
unsigned long long call_win32_api()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_win32_api();
 return param_win32_api();
}


// Function: param_fork_exec at 0x4024e0
extern char __stack_chk_guard;

unsigned long long param_fork_exec(char *a0, unsigned long a1)
{
 unsigned long long pid; // x0
 unsigned long long v5; // x0
 unsigned long v6; // x1
 char *v0; // [bp-0x30]
 int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 pid = fork();
 if (((char)(pid >> 31) & 1))
 {
 v5 = 4294967295;
 }
 else if ((unsigned int)pid)
 {
 v5 = 4294967294;
 if (!((char)((waitpid(pid, v1, 0) & 4294967295) >> 31) & 1))
 {
 v6 = *(v1);
 if ((char)arm64g_calculate_condition(10, v6 & 127, 0, 0))
 v5 = (v6 * 0x100000000000000 | v6 >> 8) & 18374686479671623935 & 255 & 4294967295;
 else
 v5 = 4294967293;
 }
 }
 else
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: call_fork_exec at 0x402590
unsigned long long call_fork_exec()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if ((unsigned int)param_fork_exec("/bin/true", 0))
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x4025bc
extern char __stack_chk_guard;

unsigned long long param_pipe_communication()
{
 unsigned long long pid; // x0
 unsigned long long v9; // x19
 unsigned long long v10; // x20
 unsigned long long count; // x0
 unsigned long long v12; // x0
 char *v0; // [bp-0x50]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x38]
 int fds[2]; // [bp-0x30]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 if (!((char)(pipe(fds) >> 31) & 1))
 {
 pid = fork();
 if (!((char)(pid >> 31) & 1))
 {
 v1 = v9;
 v2 = v10;
 if (!(unsigned int)pid)
 {
 close(fds[0]);
 write(fds[1], "HelloPipe", 9);
 close(fds[1]);
 _exit(0); /* do not return */
 }
 close(fds[1]);
 count = read(fds[0], &v5, 31);
 (&v5)[count] = 0;
 close(fds[0]);
 wait(NULL);
 if (0 < count)
 v12 = 42;
 else
 v12 = 4294967293;
 }
 else
 {
 v12 = 4294967294;
 }
 }
 else
 {
 v12 = 4294967295;
 }
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v12;
}


// Function: call_pipe_communication at 0x4026a4
unsigned long long call_pipe_communication()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4026b8
extern char __stack_chk_guard;

unsigned long long param_socket_create()
{
 unsigned long long sock; // x0
 unsigned long long v9; // x19
 unsigned int v10; // w19
 unsigned long long v11; // x0
 char *v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x30]
 unsigned int result; // [bp-0x1c]
 struct sockaddr_in v3; // [bp-0x18]
	unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 sock = socket(2, 1, 0);
 if (!((char)(sock >> 31) & 1))
 {
 v1 = v9;
 v10 = sock;
 result = 1;
 if (!((char)(setsockopt(sock, 1, 2, &result, 4) >> 31) & 1))
 {
 memset(&v3, 0, sizeof(v3));
 v3.sin_family = AF_INET;
 v3.sin_addr.s_addr = 0;
 if (((char)(bind(v10, (struct sockaddr *)&v3, 16) >> 31) & 1))
 {
 close(v10);
 v11 = 4294967293;
 }
 else if (!((char)(listen(v10, 5) >> 31) & 1))
 {
 close(v10);
 v11 = 42;
 }
 else
 {
 close(v10);
 v11 = 0xfffffffc;
 }
 }
 else
 {
 close(v10);
 v11 = 4294967294;
 }
 }
 else
 {
 v11 = 4294967295;
 }
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v11;
}


// Function: call_socket_create at 0x4027bc
unsigned long long call_socket_create()
{
 unsigned long long sock; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x4027d0

unsigned int param_shmget_shmat()
{
 unsigned long long v4; // x0
 unsigned long long v5; // x19
 unsigned long long v6; // x20
 unsigned long long v7; // x0
 void *shm_ptr; // x19
 unsigned int v9; // w21
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 char v3; // [bp+0x0]

 v0 = &v3;
 v4 = open("/tmp/binbench_shm", 66, 438);
 if (((char)(v4 >> 31) & 1))
 return 4294967295;
 close(v4);
 if (((char)(ftok("/tmp/binbench_shm", 42) >> 31) & 1))
 return 4294967295;
 v1 = v5;
 v2 = v6;
 v7 = (unsigned long long)shmget(ftok("/tmp/binbench_shm", 42), 1024, 0600 | IPC_CREAT);
 if (((char)(v7 >> 31) & 1))
 return 4294967294;
 shm_ptr = shmat(v7, 0, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)shm_ptr, 1, 0))
 return 4294967293;
 *((unsigned long long *)shm_ptr) = 7299600957910902867;
 *((unsigned long long *)((char *)shm_ptr + 5)) = 34184295084281188;
 v9 = strlen((char *)shm_ptr);
 shmdt(shm_ptr);
 shmctl((int)(v7 & 4294967295), IPC_RMID, (struct shmid_ds *)NULL);
 return v9;
}


// Function: call_shmget_shmat at 0x4028b4
unsigned long long call_shmget_shmat()
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 if (0 >= param_shmget_shmat())
 return 4294967295;
 return 42;
}


// Function: param_signal_handling at 0x4028d4
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned long long param_signal_handling()
{
 unsigned long long v5; // x19
 unsigned long long v6; // x20
 unsigned long long v7; // x21
 unsigned int v8; // w19
 unsigned int result; // w19
 unsigned int v10; // w19
 unsigned int v11; // w19
 unsigned int flag1; // w19
 unsigned int v13; // w19
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned long long v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v0 = &v4;
 if ((char)arm64g_calculate_condition(2, (unsigned long)signal(10, (void (*)(int))signal_handler), 1, 0))
 {
 return 4294967295;
 }
 else if (!((char)arm64g_calculate_condition(2, (unsigned long)signal(14, (void (*)(int))signal_handler), 1, 0)))
 {
 v1 = v5;
 v2 = v6;
 v3 = v7;
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v8 = 1000;
 do
 {
 result = v8;
 usleep(1000);
 } while (!signal_received && (v10 = result - 1, v8 = result - 1, result != 1));
 }
 if (!signal_received)
 {
 return 4294967293;
 }
 else if (signal_number == 10)
 {
 signal_received = 0;
 alarm(1);
 if (!signal_received)
 {
 v11 = 2000;
 do
 {
 flag1 = v11;
 usleep(1000);
 } while (!signal_received && (v13 = flag1 - 1, v11 = flag1 - 1, flag1 != 1));
 }
 if (!signal_received)
 {
 return 4294967291;
 }
 else if (signal_number == 14)
 {
 signal(10, NULL);
 signal(14, NULL);
 return 42;
 }
 else
 {
 return 4294967291;
 }
 }
 else
 {
 return 0xfffffffc;
 }
 }
 else
 {
 return 4294967294;
 }
}


// Function: call_signal_handling at 0x402a48
unsigned long long call_signal_handling()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x402a5c
/* String constants for system calls */
static const char g_4036b8[] = "\n=== System Calls Test ===\n";
static const char g_4036d8[] = "  linux_syscall: %d\n";
static const char g_4036f8[] = "  win32_api: %d\n";
static const char g_403718[] = "  fork/exec: %d\n";
static const char g_403738[] = "  pipe_communication: %d\n";
static const char g_403758[] = "  socket_create: %d\n";
static const char g_403778[] = "  shmget_shmat: %d\n";
static const char g_403798[] = "  signal_handling: %d\n";

int test_system_calls()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4036b8);
 __printf_chk(1, g_4036d8, call_linux_syscall() & 4294967295);
 __printf_chk(1, g_4036f8, call_win32_api() & 4294967295);
 __printf_chk(1, g_403718, call_fork_exec() & 4294967295);
 __printf_chk(1, g_403738, param_pipe_communication() & 4294967295);
 __printf_chk(1, g_403758, param_socket_create() & 4294967295);
 __printf_chk(1, g_403778, call_shmget_shmat() & 4294967295);
 return __printf_chk(1, g_403798, param_signal_handling() & 4294967295);
}


// Function: param_pthread_create at 0x402b20
extern char __stack_chk_guard;

long long param_pthread_create(unsigned int a0)
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x1c]
 pthread_t v2; // [bp-0x18]
 unsigned int *ptr; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = a0;
 if (!(int)pthread_create(&v2, 0, (void*(*)(void*))thread_compute, &v1))
 {
 pthread_join(v2, (void **)&ptr);
 v6 = *(ptr);
 free(ptr);
 }
 else
 {
 v6 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_pthread_create at 0x402bb0
unsigned long long call_pthread_create()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_pthread_create(7);
 return param_pthread_create(7);
}


// Function: param_pthread_join at 0x402bc8
extern char __stack_chk_guard;

unsigned long long param_pthread_join()
{
 char *v7; // x20
 unsigned long long *v8; // x24
 char *v9; // x21
 unsigned int v10; // w22
 unsigned int flag2; // w22
 unsigned int flag1; // w0
 unsigned long v13; // x19
 unsigned long long v15; // x20
 char *v0; // [bp-0x90]
 unsigned long long v1; // [bp-0x48]
 pthread_t v2; // [bp-0x30]
 unsigned long v16; // [bp-0x28]
 unsigned int result; // [bp-0x10]
 unsigned int v3[36]; // Thread parameters array
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v7 = (char *)v3;
 v3[0] = 1;
 v3[1] = 100;
 v3[2] = 0;
 v3[3] = 101;
 v3[4] = 200;
 v3[5] = 0;
 v3[6] = 201;
 v3[7] = 300;
 v3[8] = 0;
 result = 0;
 v8 = &v1;
 v9 = (char *)&v1;
 v10 = 3;
 while (true)
 {
 flag2 = v10;
 flag1 = pthread_create((pthread_t *)v9, 0, (void*(*)(void*))thread_sum, v7);
 v13 = flag1;
 if (!flag1)
 {
 v9 += 8;
 v7 += 12;
 v10 = flag2 - 1;
 if (flag2 == 1)
 {
 v15 = 0;
 do
 {
 if ((int)pthread_join(*(v8), 0))
 {
 if (v5 == *((long long *)&__stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 } while ((v13 += (unsigned long long)(unsigned int)*((int *)((char *)&v16 + v15)), v8 += 8, v15 += 12, v15 != 36));
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v13 & 4294967295;
 }
 }
 else if (v5 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: call_pthread_join at 0x402ccc
unsigned long long call_pthread_join()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_pthread_join();
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x402ce0
extern unsigned int shared_counter;

unsigned long long param_mutex_lock(unsigned long a0, unsigned int a1)
{
 unsigned int v9; // w25
 pthread_t *ptr; // x0
 pthread_t *v19; // x19
 pthread_t *v20; // x19
 pthread_t *v21; // x19
 pthread_t *i; // x21
 pthread_t *v23; // x21
 unsigned long long v24; // x0
 unsigned long long v11; // x23
 unsigned long long v12; // x24
 pthread_t *v14_ptr; // x24
 unsigned long long v14; // x19
 unsigned long long v15; // x20
 unsigned long long v16; // x21
 unsigned long long v17; // x22
 pthread_t *v18; // x20
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned long long v6; // [bp-0x28]
 unsigned int v7; // [bp-0x4]
 char v8; // [bp+0x0]

 v0 = &v8;
 v9 = a0;
 v7 = a1;
 ptr = (pthread_t *)malloc(a0 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(a0, 3) & 34359738360 & 34359738367);
 if (!ptr)
 return 4294967295;
 v5 = v11;
 v6 = v12;
 shared_counter = 0;
 if (v9 > 0)
 {
 v1 = v14;
 v2 = v15;
 v3 = v16;
 v4 = v17;
 v18 = &ptr[v9];
 v19 = ptr;
 do
 {
 v20 = v19;
 if ((int)pthread_create(v20, 0, (void*(*)(void*))thread_increment, &v7))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v21 = v20 + 8, i = ptr, v19 = v20 + 8, v19 != v18));
 do
 {
 v23 = i + 1;
 pthread_join(*(i), 0);
 i = v23;
 } while (i != v18);
 }
 free(ptr);
 if (shared_counter == v7 * v9)
 v24 = 42;
 else
 v24 = 4294967293;
 return v24;
}


// Function: call_mutex_lock at 0x402ddc
unsigned long long call_mutex_lock()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: param_condition_variable at 0x402df8
extern char __stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

long long param_condition_variable()
{
 unsigned int v6; // w19
 char *v0; // [bp-0x40]
 pthread_t v1; // [bp-0x20]
 pthread_t v2; // [bp-0x18]
 unsigned int *ptr; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, (void*(*)(void*))consumer_thread, 0))
 {
 v6 = 4294967295;
 }
 else if (!(int)pthread_create(&v1, 0, (void*(*)(void*))producer_thread, 0))
 {
 pthread_join(v2, (void **)&ptr);
 pthread_join(v1, 0);
 v6 = *(ptr);
 free(ptr);
 }
 else
 {
 pthread_cancel(v2);
 v6 = 4294967294;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_condition_variable at 0x402ec8
unsigned long long call_condition_variable()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_condition_variable();
 return param_condition_variable();
}


// Function: param_atomic_ops at 0x402edc
extern char __stack_chk_guard;
extern unsigned int atomic_counter;

unsigned long long param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned long v9; // x22
 pthread_t *ptr; // x0
 unsigned long long v19; // x19
 unsigned long long v20; // x23
 unsigned long long v21; // x24
 unsigned long long v22; // x0
 unsigned long long v23; // x19
 unsigned long long v24; // x20
 unsigned long long v11; // x19
 unsigned long long v12; // x20
 pthread_t *v21_ptr; // x21
 unsigned long long v14; // x23
 unsigned long long v15; // x24
 pthread_t *v16; // x19
 pthread_t *v17; // x19
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 unsigned long long v3; // [bp-0x30]
 unsigned long long v4; // [bp-0x28]
 unsigned int v5; // [bp-0x14]
 pthread_t v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v9 = a0;
 v5 = a1;
 v7 = *((long long *)&__stack_chk_guard);
 ptr = (pthread_t *)malloc(v9 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v9, 3) & 34359738360 & 34359738367);
 if (ptr)
 {
 v1 = v11;
 v2 = v12;
 __sync_synchronize();
 atomic_counter = 0;
 if ((unsigned int)v9 > 0)
 {
 v3 = v14;
 v4 = v15;
 v16 = ptr;
 do
 {
 v17 = v16;
 if ((int)pthread_create(v17, 0, (void*(*)(void*))thread_atomic_increment, &v5))
 {
 free(ptr);
 if (v7 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v16 = v17 + 8, v16 != ptr + (v9 & 4294967295) * 8));
 if (!(int)pthread_create(&v6, 0, (void*(*)(void*))thread_atomic_load_store, 0))
 pthread_join(v6, 0);
 v19 = 0;
 do
 {
 pthread_join(*((long long *)&ptr[2 * v19]), 0);
 v19 += 1;
 } while ((unsigned int)v19 < (unsigned int)v9);
 v20 = v3;
 v21 = v4;
 }
 else
 {
 if (!(int)pthread_create(&v6, 0, (void*(*)(void*))thread_atomic_load_store, 0))
 pthread_join(v6, 0);
 }
 __sync_synchronize();
 free(ptr);
 if (0 < atomic_counter)
 v22 = 42;
 else
 v22 = 4294967293;
 if (v7 != *((long long *)&__stack_chk_guard))
 {
 v3 = v20;
 v4 = v21;
 __stack_chk_fail(); /* do not return */
 }
 return v22;
 }
 else if (v7 == *((long long *)&__stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 v1 = v23;
 v2 = v24;
 v3 = v20;
 v4 = v21;
 __stack_chk_fail(); /* do not return */
 }
}


// Function: call_atomic_ops at 0x403064
unsigned long long call_atomic_ops()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: param_thread_local_storage at 0x403080
extern char __stack_chk_guard;

unsigned long long param_thread_local_storage(unsigned int a0)
{
 unsigned long v7; // x25
 unsigned long long v8; // x19
 unsigned long v17; // cc_dep2
 unsigned long v18; // cc_ndep
 unsigned long long v23; // x21
 unsigned long long v24; // x22
 unsigned int **p; // x22
 unsigned long long v26; // cc_op
 pthread_t *addr; // x24
 unsigned long long j; // cc_dep1
 unsigned long long v28; // cc_dep2
 unsigned long long v29; // x27
 unsigned long long v30; // x23
 unsigned long long idx; // x19
 unsigned long long ptr_val; // x0
 unsigned long long v33; // x19
 unsigned int *v34; // x21
 unsigned int *v35; // x21
 unsigned int result; // w0
 unsigned int **p2; // x0
 unsigned long v37; // x20
 unsigned long v39; // x21
 unsigned int **k; // x20
 unsigned long long v42; // x0
 unsigned long long v43; // x21
 unsigned long long v44; // x22
 unsigned long v45; // x25
 unsigned long long v46; // cc_op
 unsigned long v11; // cc_op
 unsigned long long v47; // cc_dep1
 unsigned long long v48; // cc_dep2
 unsigned long v12; // cc_dep1
 unsigned long v13; // cc_dep2
 unsigned long v14; // cc_ndep
 unsigned long v15; // cc_op
 unsigned long v16; // cc_dep1
 char *v0; // [bp-0x70]
 unsigned long long v1; // [bp-0x50]
 unsigned long long v2; // [bp-0x48]
 unsigned long long v3; // [bp-0x20]
 unsigned int ptr_arr[2]; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v7 = a0;
 v5 = *((long long *)&__stack_chk_guard);
 v8 = v7 * 0x100000000 >> 63 & 0xfffffff800000000 | __ROL__(v7, 3) & 34359738360 & 34359738367;
 addr = (pthread_t *)malloc(v8);
 p = (unsigned int **)malloc(v8);
 if (addr)
 {
 if ((char)arm64g_calculate_condition(4, (unsigned long long)(((char)arm64g_calculate_condition(v11 | 16, v12, v13, v14) ? p : (void *)0x40000000)), 0, 0))
 {
 if (v5 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 v1 = v43;
 v2 = v44;
 __stack_chk_fail(); /* do not return */
 }
 }
 else
 {
 if ((char)arm64g_calculate_condition(0, (unsigned long long)(((char)arm64g_calculate_condition(v15 | 16, v16, v17, v18) ? p : (void *)0x40000000)), 0, 0))
 {
 if (v5 == *((long long *)&__stack_chk_guard))
 return 4294967295;
 v1 = v43;
 v2 = v44;
 __stack_chk_fail(); /* do not return */
 }
 }
 v1 = v23;
 v2 = v24;
 v26 = 3;
 j = v7 & 4294967295;
 if ((unsigned int)v7 > 0)
 {
 v3 = v29;
 v30 = v7 & 4294967295;
 v28 = 0;
 idx = 0;
 do
 {
 void *ptr_val = malloc(16);
 p[idx] = (unsigned int *)ptr_val;
 __snprintf_chk((char *)ptr_val, 16, 1, 16, "Thread-%d", idx & 4294967295);
 idx += 1;
 } while (idx != v30);
 v33 = 0;
 v34 = (unsigned int *)addr;
 do
 {
 v35 = v34;
 result = pthread_create((pthread_t *)v35, 0, (void*(*)(void*))thread_tls_test, p[v33]);
 v37 = result;
 p[v33] = (unsigned int *)(unsigned long long)p[v33];
 if (result)
 {
 if (!((char)(v33 >> 31) & 1))
 {
 k = p;
 do
 {
 free(*(k));
 k += 8;
 } while ((unsigned long long)k < (unsigned long long)((char *)&p[v33 & 4294967295] + 8));
 }
 free(p);
 free(addr);
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 4294967294;
 }
 } while ((v33 += 1, v34 = v35 + 8, v33 != v30));
 v28 = __ROL__(v30, 3) & 18446744073709551608;
 v39 = result;
 j = 0;
 do
 {
 pthread_join(*((pthread_t *)((char *)addr + j)), (void **)&ptr_arr);
 v37 += ptr_arr[0];
 v39 += ptr_arr[1];
 free(ptr_arr);
 free((void *)((char *)p + j));
 j += 8;
 v26 = 4;
 } while (j != v28);
 }
 else
 {
 v39 = 0;
 v37 = 0;
 }
 free((void *)p);
 free(addr);
 v45 = 150 * (unsigned int)v7;
 if (100 * (unsigned int)v7 == (unsigned int)v37)
 {
 v46 = 3;
 v47 = (v45 & 4294967295);
 v48 = (v39 & 4294967295);
 }
 else
 {
 v46 = 0;
 v47 = (v45 & 4294967295);
 v48 = (v39 & 4294967295);
 }
 if ((char)arm64g_calculate_condition(v46, v47, v48, 0))
 v42 = 42;
 else
 v42 = 4294967293;
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v42;
}


// Function: call_thread_local_storage at 0x40327c
unsigned long long call_thread_local_storage()
{
 unsigned long long count; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x403294
/* String constants for thread concurrency */
static const char g_4037c8[] = "\n=== Thread Concurrency Test ===\n";
static const char g_4037e8[] = "  pthread_create: %d\n";
static const char g_403808[] = "  pthread_join: %d\n";
static const char g_403828[] = "  mutex_lock: %d\n";
static const char g_403848[] = "  condition_variable: %d\n";
static const char g_403868[] = "  atomic_ops: %d\n";
static const char g_403888[] = "  thread_local_storage: %d\n";

int test_thread_concurrency()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4037c8);
 __printf_chk(1, g_4037e8, call_pthread_create() & 4294967295);
 __printf_chk(1, g_403808, param_pthread_join() & 4294967295);
 __printf_chk(1, g_403828, call_mutex_lock() & 4294967295);
 __printf_chk(1, g_403848, param_condition_variable() & 4294967295);
 __printf_chk(1, g_403868, call_atomic_ops() & 4294967295);
 return __printf_chk(1, g_403888, call_thread_local_storage() & 4294967295);
}


// Function: main at 0x403340
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Failed to decompile function __aarch64_cas4_acq_rel at 0x403360



