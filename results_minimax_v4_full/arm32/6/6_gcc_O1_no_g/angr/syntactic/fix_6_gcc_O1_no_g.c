// Angr Decompilation of 6_gcc_O1_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */


#include <stddef.h>
#include <stdbool.h>

// Declaration for armg_calculate_condition - ARM condition code calculator
int armg_calculate_condition(unsigned int cc, unsigned int v1, unsigned int v2, unsigned int v3);
unsigned int armg_calculate_flag_c(unsigned int cc, unsigned int v1, unsigned int v2, unsigned int v3);
unsigned int armg_calculate_flag_v(unsigned int cc, unsigned int v1, unsigned int v2, unsigned int v3);

// Function: sub_10ca8 at 0x10ca8

int sub_10ca8()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10fc8 at 0x10fc8
void sub_10fc8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: signal_handler at 0x11088
extern unsigned int signal_number;
extern unsigned int signal_received;

int signal_handler(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
 return a0;
}


// Function: thread_sum at 0x110a0
unsigned int thread_sum(unsigned int *ptr)
{
 unsigned int i; // r3
 unsigned int v1; // r2

 ptr[2] = 0;
 i = *(ptr);
 if (ptr[1] < *(ptr))
 return 0;
 v1 = 0;
 do
 {
 v1 += i;
 i += 1;
 } while (i != ptr[1] + 1);
 ptr[2] = v1;
 return 0;
}


// Function: thread_compute at 0x110dc
unsigned int * thread_compute(unsigned int *a0)
{
 unsigned int *ptr; // r0

 ptr = malloc(4);
 *(ptr) = *(a0) * *(a0);
 return ptr;
}


// Function: thread_increment at 0x11100
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

unsigned int thread_increment(unsigned int *ptr)
{
 unsigned int i; // r7
 unsigned int v1; // r4

 i = *(ptr);
 if (i <= 0)
 return 0;
 v1 = 0;
 do
 {
 pthread_mutex_lock(0x24120);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(0x24120);
 usleep(1000);
 v1 += 1;
 } while (i != v1);
 return 0;
}


// Function: consumer_thread at 0x1115c
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int i;

unsigned int * consumer_thread()
{
 unsigned int *ptr; // r0

 pthread_mutex_lock(0x2413c);
 if (!i)
 {
 do
 {
 pthread_cond_wait(0x24158, 0x2413c);
 } while (!i);
 }
 pthread_mutex_unlock(0x2413c);
 ptr = malloc(4);
 *(ptr) = data;
 return ptr;
}


// Function: producer_thread at 0x111bc
extern unsigned int cond;
extern unsigned int cond_mutex;
extern unsigned int data;
extern unsigned int ready;

unsigned int producer_thread()
{
 sleep(1);
 pthread_mutex_lock(0x2413c);
 data = 42;
 ready = 1;
 pthread_cond_signal(0x24158);
 pthread_mutex_unlock(0x2413c);
 return 0;
}


// Function: thread_atomic_increment at 0x11204
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int atomic_counter;

unsigned int thread_atomic_increment(unsigned int *ptr)
{
 unsigned int i; // r7
 unsigned int v4; // r4
 unsigned int v5; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]

 v2 = __glibc___stack_chk_guard;
 i = *(ptr);
 if (i > 0)
 {
 v4 = 0;
 do
 {
 __sync_fetch_and_add_4(0x2418c, 1);
 v0 = v4;
 v5 = __sync_val_compare_and_swap_4(0x2418c, v4, v4 + 1000);
 v1 = v5;
 v4 += 1;
 } while (i != v4);
 }
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return 0;
}


// Function: thread_atomic_load_store at 0x11298
void thread_atomic_load_store()
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 __sync_synchronize(); /* do not return */
}


// Function: sub_112a4 at 0x112a4
void sub_112a4()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_112ac at 0x112ac
void sub_112ac()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_112b4 at 0x112b4
typedef struct struct_sub_112b4 {
 char padding_0[116];
 unsigned int field_74;
} struct_sub_112b4;

void sub_112b4()
{
 struct_sub_112b4 *p; // r5
 unsigned int v1; // r4

 p->field_74 = v1;
 __sync_synchronize(); /* do not return */
}


// Function: sub_112bf at 0x112bf
int sub_112bf(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 (void)a0;
 (void)a1;
 (void)a2;
 (void)a3;
 (void)a4;
 (void)a5;
 (void)a6;
 (void)a7;
}


// Function: sub_112c0 at 0x112c0
int sub_112c0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0;
}


// Function: thread_tls_test at 0x112c8
void thread_tls_test(unsigned int a0)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 __aeabi_read_tp(); /* do not return */
}


// Function: sub_112d4 at 0x112d4
unsigned int *sub_112d4(unsigned int p, char *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 unsigned int v0; // r5
 unsigned int v1; // r4
 unsigned int ptr[2]; // r0

 v0 = *((int *)(8 + p));
 v1 = v0 + 50;
 *((unsigned int *)(8 + p)) = v1;
 strncpy(12 + p, a1, 31);
 ptr = malloc(8);
 ptr[0] = v0;
 ptr[1] = v1;
 return ptr;
}


// Function: param_strcpy at 0x11310
int param_strcpy(char *ptr, char *a1)
{
 unsigned int len; // r0

 strcpy(ptr, a1);
 len = strlen(ptr);
 return strlen(ptr);
}


// Function: call_strcpy at 0x11328
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_strcpy()
{
 unsigned int v3; // lr
 unsigned int dst; // r0
 char v0[32]; // [bp-0x2c]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 dst = param_strcpy(&v0, "HelloLib");
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return dst;
}


// Function: param_strcmp at 0x11378
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = strcmp(a0, a1);
 if (v4 <= 0)
 {
 v6 = v4 >> 31;
 if (!armg_calculate_condition(194, v4, 0, 0))
 return v6;
 }
 else
 {
 v6 = v4;
 if (!armg_calculate_condition(194, v6, 0, 0))
 return v6;
 }
 return 1;
}


// Function: call_strcmp at 0x11390
int call_strcmp()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 return v0 + v1 + param_strcmp("bbb", "aaa");
}


// Function: param_strlen at 0x113e0
int param_strlen()
{
 char *v0; // r0
 unsigned int len; // r0

 len = strlen(v0);
 return strlen(v0);
}


// Function: call_strlen at 0x113ec
unsigned int call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x113f4
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x11408
extern unsigned int __glibc___stack_chk_guard;

int call_memcpy()
{
 unsigned int v10; // lr
 unsigned int v0; // [bp-0x34]
 unsigned int v1; // [bp-0x30]
 unsigned int v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 char v5; // [bp-0x20]
 char v6; // [bp-0x18]
 unsigned int v7; // [bp-0x10]
 unsigned int v8; // [bp-0xc]
 unsigned int v9; // [bp-0x4]

 v9 = v10;
 v8 = __glibc___stack_chk_guard;
 v0 = 10;
 v1 = 20;
 v2 = 30;
 v3 = 40;
 v4 = 50;
 memset(&v5, 0, 20);
 param_memcpy(&v5, &v0, 20);
 if ((v8 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v5) + *((int *)&v6) + v7;
}


// Function: param_memcmp at 0x114a0
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = memcmp(a0, a1, a2);
 if (v4 <= 0)
 {
 v6 = v4 >> 31;
 if (!armg_calculate_condition(194, v4, 0, 0))
 return v6;
 }
 else
 {
 v6 = v4;
 if (!armg_calculate_condition(194, v6, 0, 0))
 return v6;
 }
 return 1;
}


// Function: call_memcmp at 0x114b8
extern unsigned int __glibc___stack_chk_guard;

int call_memcmp()
{
 unsigned int v10; // r0
 unsigned int v11; // r0
 unsigned int result; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int flag2; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 v9 = __glibc___stack_chk_guard;
 result = 1;
 v1 = 2;
 v2 = 3;
 flag1 = 1;
 v4 = 2;
 v5 = 4;
 flag2 = 1;
 v7 = 2;
 v8 = 3;
 v10 = param_memcmp(&result, &flag1, 12);
 v11 = param_memcmp(&result, &flag2, 12);
 if ((v9 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v10 + v11;
}


// Function: param_printf at 0x11554
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0

 v0 = __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
 return __printf_chk(1, "Value: %d, Name: %s\n", a0, a1);
}


// Function: call_printf at 0x11574
unsigned int call_printf()
{
 unsigned int v0; // r0

 v0 = param_printf(42, "Test");
 return param_printf(42, "Test");
}


// Function: param_scanf at 0x1158c
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_scanf()
{
 unsigned int v4; // lr
 char *v5; // r0
 unsigned int v6; // r0
 unsigned int v7; // r0
 char v0; // [bp-0x14], Other Possible Types: unsigned int
 char v1; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 v6 = __isoc99_sscanf(v5, "%d,%d", &v0, &v1);
 if (v6 == 2)
 {
 v7 = v0 + v1;
 if (!armg_calculate_condition(18, v6, 2, 0))
 goto LABEL_115c6;
LABEL_115c5:
 v7 = 4294967295;
 }
 else
 {
 if (armg_calculate_condition(18, v6, 2, 0))
 goto LABEL_115c5;
LABEL_115c6:
 }
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v7;
}


// Function: call_scanf at 0x115f4
unsigned int call_scanf()
{
 unsigned int v0; // r0

 v0 = param_scanf();
 return param_scanf();
}


// Function: param_fopen_fclose at 0x11608
typedef struct FILE {
} FILE;

unsigned int param_fopen_fclose()
{
 char *v0; // r0
 FILE *fp; // r4
 unsigned int v2; // r0

 fp = fopen(v0, "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2;
}


// Function: call_fopen_fclose at 0x11644
unsigned int call_fopen_fclose()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int fp; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 fp = param_fopen_fclose();
 if (0 <= fp)
 {
 v6 = 42;
 if (!armg_calculate_condition(178, fp, 0, 0))
 return v6;
 }
 else
 {
 v6 = fp;
 if (!armg_calculate_condition(178, v6, 0, 0))
 return v6;
 }
 return 4294967295;
}


// Function: param_fread_fwrite at 0x11664
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // r4
 unsigned int count; // r0
 unsigned int result; // r0
 unsigned int v5; // r0
 char v0; // [bp-0x34]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 fp = fopen(a0, "w+");
 if (!fp)
 {
 v5 = 4294967295;
 }
 else if (fwrite("BinBench Test Data", 1, 18, fp) == 18)
 {
 rewind(fp);
 count = fread(&v0, 1, 18, fp);
 (&v0)[count] = 0;
 fclose(fp);
 unlink(a0);
 if (count == 18)
 {
 result = strcmp(&v0, "BinBench Test Data");
 if (result)
 {
 v5 = 4294967293;
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_1170a;
LABEL_11709:
 v5 = 42;
 }
 else
 {
 v5 = 0;
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_11709;
LABEL_1170a:
 }
 }
 else
 {
 v5 = 4294967293;
 }
 }
 else
 {
 fclose(fp);
 v5 = 4294967294;
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: call_fread_fwrite at 0x1175c
unsigned int call_fread_fwrite()
{
 unsigned int count; // r0

 count = param_fread_fwrite("/tmp/binbench_test_tmp");
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x11770
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v3; // r3
 unsigned int *v4; // r2

 v0 = a0 * 4;
 ptr = malloc(v0);
 if (!ptr)
 return 4294967295;
 if (a0)
 {
 ptr = ptr + 1;
 v3 = 0;
 do
 {
 v4 = ptr + 1;
 ptr[1] = v3;
 v3 += 10;
 ptr = v4;
 } while (ptr != (unsigned int *)((char *)ptr + v0 - 4));
 }
 free(ptr);
 return *((int *)((char *)ptr + v0 - 4)) + *(ptr);
}


// Function: call_malloc_free at 0x117d8
unsigned int call_malloc_free()
{
 unsigned int ptr; // r0

 ptr = param_malloc_free(10);
 return param_malloc_free(10);
}


// Function: param_memset at 0x117e8
unsigned int param_memset(char *a0, unsigned int n)
{
 char *cur; // r3
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v3; // r2
 unsigned int v4; // r0

 memset(a0, 0, n);
 if (!n)
 return 0;
 cur = a0 + 1;
 v1 = 0;
 do
 {
 v2 = v1;
 cur += 1;
 v4 = v2 + cur[1];
 v1 = v4;
 } while (cur != &a0[1 + n]);
 return v2 + v3;
}


// Function: call_memset at 0x11834
typedef struct struct_memset_0 {
 char field_0;
 char padding_1[3];
 unsigned int field_4;
} struct_memset_0;

extern unsigned int __glibc___stack_chk_guard;

int call_memset()
{
 unsigned int v5; // lr
 struct_memset_0 *ptr; // r3
 struct_memset_0 *v7; // r3
 char v0; // [bp-0x38]
 char v1[36]; // [bp-0x34]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 ptr = (struct_memset_0 *)&v0;
 do
 {
 v7 = &ptr->field_4;
 ptr->field_4 = 255;
 ptr = v7;
 } while (ptr != (struct_memset_0 *)&v2);
 param_memset(&v1, 40);
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *((int *)&v1[0]) + v2;
}


// Function: param_strchr_strstr at 0x118a4
int param_strchr_strstr(char *a0, unsigned int a1, char *a2)
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 char *ptr; // r0
 unsigned int v9; // r4
 unsigned int v10; // cc_dep1
 unsigned int v12; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 ptr = strchr(a0, a1);
 v9 = (unsigned int)ptr;
 v10 = v9;
 if (ptr)
 {
 v9 = (unsigned int)(ptr - a0);
 if (!armg_calculate_condition(2, v10, 0, 0))
 goto LABEL_118be;
LABEL_118bd:
 v9 = 4294967295;
 }
 else
 {
 if (armg_calculate_condition(2, v10, 0, 0))
 goto LABEL_118bd;
LABEL_118be:
 }
 ptr = strstr(a0, a2);
 if (ptr)
 {
 v12 = (unsigned int)(ptr - a0);
 if (!armg_calculate_condition(2, (unsigned int)ptr, 0, 0))
 goto LABEL_118d6;
LABEL_118d5:
 v12 = 4294967295;
 }
 else
 {
 v12 = 0;
 if (armg_calculate_condition(2, (unsigned int)ptr, 0, 0))
 goto LABEL_118d5;
LABEL_118d6:
 }
 return v9 + v12;
}


// Function: call_strchr_strstr at 0x118e0
unsigned int call_strchr_strstr()
{
 unsigned int ptr; // r0

 ptr = param_strchr_strstr("Hello BinBench Test", 66, "Bench");
 return param_strchr_strstr("Hello BinBench Test", 66, "Bench");
}


// Function: test_standard_library_functions at 0x11900
extern char g_138f0;
extern char g_13914;
extern char g_13930;
extern char g_1394c;
extern char g_13968;
extern char g_13984;
extern char g_139a0;
extern char g_139bc;
extern char g_139dc;
extern char g_139f8;
extern char g_13a14;
extern char g_13a30;
extern char g_13a4c;

int test_standard_library_functions()
{
 unsigned int v11; // r0

 puts(0x138f0);
 __printf_chk(1, 0x13914, call_strcpy());
 __printf_chk(1, 0x13930, call_strcmp());
 __printf_chk(1, 0x1394c, call_strlen());
 __printf_chk(1, 0x13968, call_memcpy());
 __printf_chk(1, 0x13984, call_memcmp());
 __printf_chk(1, 0x139a0, call_printf());
 __printf_chk(1, 0x139bc, call_scanf());
 __printf_chk(1, 0x139dc, call_fopen_fclose());
 __printf_chk(1, 0x139f8, call_fread_fwrite());
 __printf_chk(1, 0x13a14, call_malloc_free());
 __printf_chk(1, 0x13a30, call_memset());
 v11 = __printf_chk(1, 0x13a4c, call_strchr_strstr());
 return __printf_chk(1, 0x13a4c, call_strchr_strstr());
}


// Function: param_linux_syscall at 0x11a34
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = syscall(5);
 if (v0 < 0)
 return -(*(__errno_location()));
 syscall(6);
 return v0;
}


// Function: call_linux_syscall at 0x11a74
unsigned int call_linux_syscall()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = param_linux_syscall("/etc/passwd");
 if (0 <= v4)
 {
 v6 = 42;
 if (!armg_calculate_condition(178, v4, 0, 0))
 return v6;
 }
 else
 {
 v6 = v4;
 if (!armg_calculate_condition(178, v6, 0, 0))
 return v6;
 }
 return 4294967295;
}


// Function: param_win32_api at 0x11a94
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_win32_api()
{
 unsigned int v3; // lr
 unsigned int v4; // r0
 char v0; // [bp-0x3c]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 v4 = stat();
 if (v4 < 0)
 {
 v4 = 4294967295;
 }
 else if (0 < *((int *)&v0))
 {
 v4 = 42;
 if (!armg_calculate_condition(210, *((int *)&v0), 0, 0))
 goto LABEL_11aca;
LABEL_11ac9:
 v4 = 4294967294;
 }
 else
 {
 if (armg_calculate_condition(210, *((int *)&v0), 0, 0))
 goto LABEL_11ac9;
LABEL_11aca:
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: call_win32_api at 0x11afc
unsigned int call_win32_api()
{
 unsigned int v0; // r0

 v0 = param_win32_api();
 return param_win32_api();
}


// Function: param_fork_exec at 0x11b10
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // r0
 unsigned int v3; // r0
 unsigned int v4; // cc_dep1
 unsigned int v5; // r0
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v0[1]; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 pid = fork();
 if (pid < 0)
 {
 v3 = 4294967295;
 }
 else if (!((char)armg_calculate_condition(2, pid, 0, 0)))
 {
 v3 = waitpid(pid, &v0, 0);
 v4 = v3;
 if (v3 < 0)
 {
 v3 = 4294967294;
 if (!((char)armg_calculate_condition(178, v4, 0, 0)))
 goto LABEL_11b58;
 }
 else if (!((char)armg_calculate_condition(178, v4, 0, 0)))
 {
LABEL_11b58:
 v5 = *(v0);
 v6 = v5 & 127;
 v7 = armg_calculate_flag_c(2, v4, 0, 0);
 v8 = armg_calculate_flag_v(2, v4, 0, 0);
 if (!((char)v5 & 127))
 {
 v3 = v5 >> 8;
 if (!armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_11b66;
LABEL_11b65:
 v3 &= 255;
 if (!armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_11b6a;
LABEL_11b69:
 v3 = 4294967293;
 }
 else
 {
 v3 = v5;
 if (armg_calculate_condition(5, v6, v7, v8))
 goto LABEL_11b65;
LABEL_11b66:
 if (armg_calculate_condition(21, v6, v7, v8))
 goto LABEL_11b69;
LABEL_11b6a:
 }
 }
 }
 else
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v3;
}


// Function: call_fork_exec at 0x11bb8
unsigned int call_fork_exec()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int pid; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 pid = param_fork_exec("/bin/true", 0);
 if (!pid)
 {
 v6 = 42;
 if (!armg_calculate_condition(18, pid, 0, 0))
 return v6;
 }
 else
 {
 v6 = pid;
 if (!armg_calculate_condition(18, v6, 0, 0))
 return v6;
 }
 return 4294967295;
}


// Function: param_pipe_communication at 0x11bdc
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_pipe_communication()
{
 unsigned int pid; // r0
 unsigned int count; // r4
 unsigned int v6; // r0
 char v0; // [bp-0x3c], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x38]
 char v2; // [bp-0x34]
 unsigned int v3; // [bp-0x14]

 v3 = __glibc___stack_chk_guard;
 if (pipe(&v0) >= 0)
 {
 pid = fork();
 if (pid >= 0)
 {
 if (!((char)armg_calculate_condition(18, pid, 0, 0)))
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 v6 = wait(NULL);
 if (0 < count)
 {
 v6 = 42;
 if (!armg_calculate_condition(210, count, 0, 0))
 goto LABEL_11c82;
LABEL_11c81:
 v6 = 4294967293;
 }
 else
 {
 if (armg_calculate_condition(210, count, 0, 0))
 goto LABEL_11c81;
LABEL_11c82:
 }
 }
 else
 {
 v6 = 4294967294;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: call_pipe_communication at 0x11cc0
unsigned int call_pipe_communication()
{
 unsigned int v0; // r0

 v0 = param_pipe_communication();
 return param_pipe_communication();
}


// Function: param_socket_create at 0x11ccc
typedef struct sockaddr {
 unsigned short sin_family;
 char sa_data[14];
} sockaddr;

extern unsigned int __glibc___stack_chk_guard;

unsigned int param_socket_create()
{
 unsigned int sock; // r4
 unsigned int v5; // r0
 unsigned int result; // [bp-0x20]
 sockaddr v1; // [bp-0x1c]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 sock = socket(2, 1, 0);
 if (sock >= 0)
 {
 result = 1;
 if (setsockopt(sock, 1, 2, &result, 4) >= 0)
 {
 memset(&v1, 0, 16);
 v1.sin_family = 2;
 if (bind(sock, &v1, 16) < 0)
 {
 close(sock);
 v5 = 4294967293;
 }
 else if (listen(sock, 5) >= 0)
 {
 close(sock);
 v5 = 42;
 }
 else
 {
 close(sock);
 v5 = 0xfffffffc;
 }
 }
 else
 {
 close(sock);
 v5 = 4294967294;
 }
 }
 else
 {
 v5 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5;
}


// Function: call_socket_create at 0x11dd8
unsigned int call_socket_create()
{
 unsigned int sock; // r0

 sock = param_socket_create();
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x11de4
unsigned int param_shmget_shmat()
{
 unsigned int v0; // r0
 unsigned int v1; // r5
 void* ptr; // r4
 unsigned int len; // r0

 v0 = open("/tmp/binbench_shm", 66, 438);
 if (v0 < 0)
 return 4294967295;
 close(v0);
 if (ftok("/tmp/binbench_shm", 42) < 0)
 return 4294967295;
 v1 = shmget();
 if (v1 < 0)
 return 4294967294;
 ptr = shmat(v1, 0, 0);
 if (ptr == 0xffffffff)
 return 4294967293;
 memcpy(ptr, "SharedMemory", 13);
 len = strlen(ptr);
 shmdt(ptr);
 shmctl(v1, 0, 0);
 return len;
}


// Function: call_shmget_shmat at 0x11eb0
unsigned int call_shmget_shmat()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = param_shmget_shmat();
 if (0 < v4)
 {
 v6 = 42;
 if (!armg_calculate_condition(210, v4, 0, 0))
 return v6;
 }
 else
 {
 v6 = v4;
 if (!armg_calculate_condition(210, v6, 0, 0))
 return v6;
 }
 return 4294967295;
}


// Function: param_signal_handling at 0x11ec8
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
 unsigned int v0; // r4
 unsigned int result; // r4
 unsigned int v2; // r4
 unsigned int v3; // r4
 unsigned int flag1; // r4
 unsigned int v5; // r4

 if (signal(10, signal_handler) == 4294967295)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != 4294967295)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v0 = 1000;
 do
 {
 result = v0;
 usleep(1000);
 } while (!signal_received && (v2 = result - 1, v0 = result - 1, result != 1));
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
 v3 = 2000;
 do
 {
 flag1 = v3;
 usleep(1000);
 } while (!signal_received && (v5 = flag1 - 1, v3 = flag1 - 1, flag1 != 1));
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


// Function: call_signal_handling at 0x1201c
unsigned int call_signal_handling()
{
 unsigned int v0; // r0

 v0 = param_signal_handling();
 return param_signal_handling();
}


// Function: test_system_calls at 0x12028
extern char g_13aa4;
extern char g_13ac0;
extern char g_13adc;
extern char g_13af8;
extern char g_13b14;
extern char g_13b30;
extern char g_13b4c;
extern char g_13b68;

int test_system_calls()
{
 unsigned int v6; // r0
 unsigned int v7; // r0

 puts(0x13aa4);
 __printf_chk(1, 0x13ac0, call_linux_syscall());
 __printf_chk(1, 0x13adc, call_win32_api());
 __printf_chk(1, 0x13af8, call_fork_exec());
 __printf_chk(1, 0x13b14, param_pipe_communication());
 __printf_chk(1, 0x13b30, param_socket_create());
 __printf_chk(1, 0x13b4c, call_shmget_shmat());
 v6 = param_signal_handling();
 v7 = __printf_chk(1, 0x13b68, v6);
 return __printf_chk(1, 0x13b68, v6);
}


// Function: param_pthread_create at 0x120e4
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v4; // r4
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v1 = a0;
 if (!pthread_create(&v0, 0, thread_compute, &v1))
 {
 pthread_join(v0, &ptr);
 v4 = *(ptr);
 free(ptr);
 }
 else
 {
 v4 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: call_pthread_create at 0x1216c
unsigned int call_pthread_create()
{
 unsigned int count; // r0

 count = param_pthread_create(7);
 return param_pthread_create(7);
}


// Function: param_pthread_join at 0x1217c
typedef struct struct_0 {
 char field_0;
 char padding_1[7];
 unsigned int field_8;
} struct_0;

extern unsigned int __glibc___stack_chk_guard;

unsigned int param_pthread_join()
{
 unsigned int *v11; // r6
 struct_0 *cur; // r8
 char *v13; // r5
 char *v14; // r7
 unsigned int count; // r0
 unsigned int *v16; // r6
 unsigned int v0; // [bp-0x5c]
 unsigned int result; // [bp-0x50]
 unsigned int v2; // [bp-0x4c]
 unsigned int flag1; // [bp-0x48]
 unsigned int v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned int flag2; // [bp-0x3c]
 unsigned int v7; // [bp-0x38]
 unsigned int v8; // [bp-0x34]
 unsigned int flag3; // [bp-0x30]
 unsigned int v10; // [bp-0x2c]

 v10 = __glibc___stack_chk_guard;
 result = 1;
 v2 = 10;
 flag1 = 0;
 v4 = 11;
 v5 = 20;
 flag2 = 0;
 v7 = 21;
 v8 = 30;
 flag3 = 0;
 v11 = &v0;
 cur = &result;
 v13 = &result;
 v14 = &v0;
 while (true)
 {
 count = pthread_create(v14, 0, thread_sum, v13);
 if (!count)
 {
 v14 += 4;
 v13 += 12;
 if (v13 == &v10)
 {
 do
 {
 v16 = v11;
 if (pthread_join(*(v16), 0))
 {
 if (!(v10 ^ __glibc___stack_chk_guard))
 return 4294967294;
 __stack_chk_fail(); /* do not return */
 }
 } while ((count += cur->field_8, cur += 12, v11 = v16 + 4, v11 != &result));
 if ((v10 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return count;
 }
 }
 else if (!(v10 ^ __glibc___stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
 }
}


// Function: call_pthread_join at 0x12270
unsigned int call_pthread_join()
{
 unsigned int count; // r0

 count = param_pthread_join();
 return param_pthread_join();
}


// Function: param_mutex_lock at 0x1227c
extern unsigned int shared_counter;

int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr; // r10
 unsigned int i; // r6
 unsigned int v12; // r0
 unsigned int v13; // r7
 unsigned int *v3; // r5
 unsigned int *v4; // r5
 unsigned int count; // r0
 unsigned int v6; // r3
 unsigned int *v8; // r5
 unsigned int v9; // r4
 unsigned int v0; // [bp-0x24]

 v0 = a1;
 ptr = malloc(a0 * 4);
 if (!ptr)
 return 4294967295;
 shared_counter = 0;
 if (a0 > 0)
 {
 i = 0;
 v3 = ptr;
 while (true)
 {
 v4 = v3;
 if (pthread_create(v4, 0, thread_increment, &v0))
 {
 free(ptr);
 return 4294967294;
 }
 v6 = i + 1;
 if (a0 == v6)
 break;
 i = v6;
 v3 = v4 + 1;
 }
 v8 = ptr + 1;
 do
 {
 v9 = count;
 pthread_join(v8[1], 0);
 v8 += 1;
 count = v9 + 1;
 } while (i != v9);
 }
 v12 = (unsigned int)free(ptr);
 v13 = v0 * a0;
 if (shared_counter == v13)
 {
 if (!armg_calculate_condition(18, shared_counter, v13, 0))
 return 42;
 }
 else
 {
 if (!armg_calculate_condition(18, shared_counter, v13, 0))
 return v12;
 }
 return 4294967293;
}


// Function: call_mutex_lock at 0x12360
unsigned int call_mutex_lock()
{
 unsigned int v0; // r0

 v0 = param_mutex_lock(4, 1000);
 return param_mutex_lock(4, 1000);
}


// Function: param_condition_variable at 0x12374
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int data;
extern unsigned int ready;

unsigned int param_condition_variable()
{
 unsigned int v4; // r4
 char v0; // [bp-0x18], Other Possible Types: unsigned int
 char v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *ptr; // [bp-0x10], Other Possible Types: char
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 ready = 0;
 data = 0;
 if (pthread_create(&v1, 0, consumer_thread, 0))
 {
 v4 = 4294967295;
 }
 else if (!pthread_create(&v0, 0, producer_thread, 0))
 {
 pthread_join(v1, &ptr);
 pthread_join(v0, 0);
 v4 = *(ptr);
 free(ptr);
 }
 else
 {
 pthread_cancel(v1);
 v4 = 4294967294;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4;
}


// Function: call_condition_variable at 0x12444
unsigned int call_condition_variable()
{
 unsigned int v0; // r0

 v0 = param_condition_variable();
 return param_condition_variable();
}


// Function: param_atomic_ops at 0x12450
extern unsigned int __glibc___stack_chk_guard;

unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x2c]
 unsigned int v1; // [bp-0x24]

 v0 = a1;
 v1 = __glibc___stack_chk_guard;
 if (malloc(a0 * 4))
 {
 __sync_synchronize(); /* do not return */
 }
 else if (!(v1 ^ __glibc___stack_chk_guard))
 {
 return 4294967295;
 }
 else
 {
 __stack_chk_fail(); /* do not return */
 }
}


// Function: sub_12484 at 0x12484
extern unsigned int atomic_counter;

void sub_12484()
{
 atomic_counter = 0;
 __sync_synchronize(); /* do not return */
}


// Function: sub_12497 at 0x12497
int sub_12497()
{
}


// Function: sub_12499 at 0x12499
int sub_12499(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // r6
 unsigned int v1; // cc_op
 unsigned int v2; // cc_dep1
 unsigned int v3; // cc_dep2
 unsigned int v4; // cc_ndep

 if (!((char)armg_calculate_condition(165, v0, armg_calculate_flag_c(v1, v2, v3, v4), armg_calculate_flag_v(v1, v2, v3, v4))))
 *((unsigned int *)(a1 + a0)) = a2;
}


// Function: sub_124a1 at 0x124a1
typedef struct struct_0 {
 struct struct_0 *field_0;
} struct_0;

int sub_124a1(struct_0 **ptr)
{
 *(ptr) = ptr;
}


// Function: sub_124a5 at 0x124a5
int sub_124a5(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp+0x30]

 v0 = a1;
}


// Function: sub_124a9 at 0x124a9
int sub_124a9(unsigned short *ptr)
{
 unsigned short v0; // r6

 *(ptr) = v0;
}


// Function: sub_124ad at 0x124ad
void sub_124ad(unsigned int a0)
{
}


// Function: sub_124b1 at 0x124b1
void sub_124b1()
{
}


// Function: sub_124b5 at 0x124b5
void sub_124b5(unsigned int a0, unsigned int a1)
{
}


// Function: sub_124b9 at 0x124b9
void sub_124b9(unsigned int a0)
{
}


// Function: sub_124bc at 0x124bc
int sub_124bc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
 unsigned int vvar_6 = 0; // r0
 unsigned int count = 0; // r0
 unsigned int v1; // r7
 unsigned int v2; // r6
 unsigned int *v3; // r10
 unsigned int *v4; // r5
 unsigned int *v5; // r5
 unsigned int *v6; // r10

 count = pthread_create();
 if (!count)
 {
 if (v1 != v2 + 1)
 goto LABEL_0x124ac;
 if (!pthread_create(&vvar_6, 0, thread_atomic_load_store, 0))
 pthread_join(a6, 0);
 v4 = v3 + 1;
 do
 {
 v5 = v4 + 1;
 pthread_join(v4[1], 0);
 count += 1;
 v4 = v5;
 } while (count < v1);
 __sync_synchronize(); /* do not return */
 }
 free(v6);
}


// Function: sub_12518 at 0x12518
void sub_12518()
{
 __sync_synchronize(); /* do not return */
}


// Function: sub_12524 at 0x12524
int sub_12524()
{
 unsigned int *v0; // r10

 free(v0);
}


// Function: sub_12570 at 0x12570
int sub_12570(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
 unsigned int vvar_6;
 if (pthread_create(&vvar_6, 0, thread_atomic_load_store, 0))
 goto LABEL_0x12514;
 pthread_join(a6, 0);
}


// Function: sub_125b8 at 0x125b8
int sub_125b8(unsigned int a0, unsigned int a1)
{
}


// Function: call_atomic_ops at 0x125c0
unsigned int call_atomic_ops()
{
 unsigned int v0; // r0

 v0 = param_atomic_ops(4, 500);
 return param_atomic_ops(4, 500);
}


// Function: param_thread_local_storage at 0x125d4
extern unsigned int __glibc___stack_chk_guard;

int param_thread_local_storage(unsigned int i)
{
 unsigned int v4; // r4
 unsigned int v5; // cc_dep1
 unsigned int **k; // r7
 unsigned int **v15; // r6
 unsigned int v16; // r4
 unsigned int **ptr3; // r6
 unsigned int ptr; // r0
 unsigned int **v19; // r6
 unsigned int j; // r8
 unsigned int v21; // r5
 unsigned int **v22; // r9
 unsigned int *v23; // r6
 unsigned int v6; // cc_dep2
 unsigned int *v24; // r6
 unsigned int **v25; // r9
 unsigned int **v26; // r9
 unsigned int *v27; // r6
 unsigned int v28; // r4
 unsigned int *v29; // r9
 unsigned int v30; // r5
 unsigned int v31; // r6
 unsigned int v32; // r5
 unsigned int **v33; // r7
 unsigned int v7; // cc_ndep
 unsigned int *v34; // r9
 unsigned int **v35; // r7
 unsigned int v36; // r5
 unsigned int **v37; // r7
 unsigned int v38; // r0
 unsigned int v39; // r3
 unsigned int v40; // r2
 unsigned int v41; // cc_dep2
 unsigned int result; // r3
 unsigned int v43; // cc_dep2
 unsigned int v8; // cc_dep1
 unsigned int v9; // cc_dep2
 unsigned int v10; // cc_ndep
 unsigned int *p; // [bp-0x38]
 unsigned int **addr; // [bp-0x34]
 unsigned int ptr[2]; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]

 v3 = __glibc___stack_chk_guard;
 v4 = i * 4;
 p = malloc(v4);
 addr = malloc(v4);
 if (addr)
 {
 if ((char)armg_calculate_condition(2, (armg_calculate_condition(18, v5, v6, v7) ? p : v5), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v6), (armg_calculate_condition(18, v5, v6, v7) ? 0 : v7)))
 goto LABEL_127a4;
LABEL_1261c:
 if (i > 0)
 {
 k = addr + 1;
 v15 = k;
 v16 = 0;
 do
 {
 ptr3 = v15;
 ptr = malloc(16);
 v19 = ptr3 + 1;
 ptr3[1] = ptr;
 __snprintf_chk(ptr, 16, 1, 16, "Thread-%d", v16);
 j = v16;
 v16 += 1;
 v15 = v19;
 } while (i != v16);
 v21 = 0;
 v22 = k;
 v23 = p;
 }
 else
 {
 v31 = 0;
 v28 = 0;
 goto LABEL_12700;
 }
 while (true)
 {
 v24 = v23;
 v25 = v22;
 v26 = v25 + 1;
 if (!pthread_create(v24, 0, thread_tls_test, v25[1]))
 {
 v27 = v24 + 1;
 if (j != v21)
 {
 v21 += 1;
 v22 = v26;
 v23 = v27;
 }
 else
 {
 v28 = 0;
 v29 = p + 1;
 v30 = 0;
 v31 = 0;
 do
 {
 v32 = v30;
 v33 = k;
 v34 = v29 + 1;
 pthread_join(v29[1], &ptr);
 v28 += ptr[0];
 v31 += ptr[1];
 free(ptr);
 v35 = v33 + 1;
 free(v33[1]);
 v36 = v32 + 1;
 v29 = v34;
 k = v35;
 v30 = v36;
 } while (j != v32);
LABEL_12700:
 free(addr);
 v38 = (unsigned int)free(p);
 v39 = i * 5;
 v40 = v39 * 5;
 v41 = v40 * 4;
 if (v28 == v40 * 4)
 {
 v40 = 1;
 if (!armg_calculate_condition(18, v28, v41, 0))
 goto LABEL_12722;
LABEL_12721:
 v40 = 0;
 }
 else
 {
 if (armg_calculate_condition(18, v28, v41, 0))
 goto LABEL_12721;
LABEL_12722:
 }
 result = v39 * 15;
 v43 = result * 2;
 if (v31 != result * 2)
 {
 result = 0;
 if (!armg_calculate_condition(2, v31, v43, 0))
 goto LABEL_12732;
LABEL_12731:
 result = v40 & 1;
 }
 else
 {
 if (armg_calculate_condition(2, v31, v43, 0))
 goto LABEL_12731;
LABEL_12732:
 }
 if (result)
 {
 v38 = 42;
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_1273e;
LABEL_1273d:
 v38 = 4294967293;
 break;
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_1273d;
LABEL_1273e:
 break;
 }
 }
 }
 else
 {
 if (v21 >= 0)
 {
 do
 {
 v37 = k + 1;
 free(k[1]);
 k = v37;
 } while (k != &addr[v21]);
 }
 free(addr);
 free(p);
 v38 = 4294967294;
 break;
 }
 }
 }
 else
 {
 if (!((char)armg_calculate_condition(2, (armg_calculate_condition(18, v8, v9, v10) ? p : v8), (armg_calculate_condition(18, v8, v9, v10) ? 0 : v9), (armg_calculate_condition(18, v8, v9, v10) ? 0 : v10))))
 goto LABEL_1261c;
LABEL_127a4:
 v38 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v38;
}


// Function: call_thread_local_storage at 0x127bc
unsigned int call_thread_local_storage()
{
 unsigned int count; // r0

 count = param_thread_local_storage(4);
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x127cc
extern char g_13b90;
extern char g_13bb0;
extern char g_13bcc;
extern char g_13bec;
extern char g_13c08;
extern char g_13c24;
extern char g_13c40;

int test_thread_concurrency()
{
 unsigned int count; // r0
 unsigned int v6; // r0

 puts(0x13b90);
 __printf_chk(1, 0x13bb0, call_pthread_create());
 __printf_chk(1, 0x13bcc, param_pthread_join());
 __printf_chk(1, 0x13bec, call_mutex_lock());
 __printf_chk(1, 0x13c08, param_condition_variable());
 __printf_chk(1, 0x13c24, call_atomic_ops());
 count = call_thread_local_storage();
 v6 = __printf_chk(1, 0x13c40, count);
 return __printf_chk(1, 0x13c40, count);
}


// Function: main at 0x12870
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: __sync_fetch_and_add_4 at 0x12888
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old + a1;
 return old;
}


// Function: __sync_fetch_and_sub_4 at 0x128c0
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old - a1;
 return old;
}


// Function: __sync_fetch_and_or_4 at 0x128f8
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old | a1;
 return old;
}


// Function: __sync_fetch_and_and_4 at 0x12930
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old & a1;
 return old;
}


// Function: __sync_fetch_and_xor_4 at 0x12968
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old ^ a1;
 return old;
}


// Function: __sync_fetch_and_nand_4 at 0x129a0
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = ~(old & a1);
 return old;
}


// Function: __sync_fetch_and_add_2 at 0x129dc
int __sync_fetch_and_add_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old + a1;
 return old;
}


// Function: __sync_fetch_and_sub_2 at 0x12a3c
int __sync_fetch_and_sub_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old - a1;
 return old;
}


// Function: __sync_fetch_and_or_2 at 0x12a9c
int __sync_fetch_and_or_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old | a1;
 return old;
}


// Function: __sync_fetch_and_and_2 at 0x12afc
int __sync_fetch_and_and_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old & a1;
 return old;
}


// Function: __sync_fetch_and_xor_2 at 0x12b5c
int __sync_fetch_and_xor_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old ^ a1;
 return old;
}


// Function: __sync_fetch_and_nand_2 at 0x12bbc
int __sync_fetch_and_nand_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = ~(old & a1);
 return old;
}


// Function: __sync_fetch_and_add_1 at 0x12c20
int __sync_fetch_and_add_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old + a1;
 return old;
}


// Function: __sync_fetch_and_sub_1 at 0x12c7c
int __sync_fetch_and_sub_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old - a1;
 return old;
}


// Function: __sync_fetch_and_or_1 at 0x12cd8
int __sync_fetch_and_or_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old | a1;
 return old;
}


// Function: __sync_fetch_and_and_1 at 0x12d34
int __sync_fetch_and_and_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old & a1;
 return old;
}


// Function: __sync_fetch_and_xor_1 at 0x12d90
int __sync_fetch_and_xor_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old ^ a1;
 return old;
}


// Function: __sync_fetch_and_nand_1 at 0x12dec
int __sync_fetch_and_nand_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = ~(old & a1);
 return old;
}


// Function: __sync_add_and_fetch_4 at 0x12e4c
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old + a1;
 return *a0;
}


// Function: __sync_sub_and_fetch_4 at 0x12e84
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old - a1;
 return *a0;
}


// Function: __sync_or_and_fetch_4 at 0x12ebc
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old;
 unsigned int new_val;
 do {
  old = *a0;
  new_val = old | a1;
 } while (__sync_val_compare_and_swap_4(a0, old, new_val) != old);
 return new_val;
}


// Function: __sync_and_and_fetch_4 at 0x12ef4
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old & a1;
 return *a0;
}


// Function: __sync_xor_and_fetch_4 at 0x12f2c
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = old ^ a1;
 return *a0;
}


// Function: __sync_nand_and_fetch_4 at 0x12f64
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = ~(old & a1);
 return *a0;
}


// Function: __sync_add_and_fetch_2 at 0x12fa0
unsigned int __sync_add_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old + (unsigned short)a1;
 return *a0;
}


// Function: __sync_sub_and_fetch_2 at 0x13008
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int old = *((unsigned short *)a0);
 *((unsigned short *)a0) = old - (unsigned short)a1;
 return old - (unsigned short)a1;
}


// Function: __sync_or_and_fetch_2 at 0x13070
unsigned int __sync_or_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old | (unsigned short)a1;
 return *a0;
}


// Function: __sync_and_and_fetch_2 at 0x130d8
unsigned int __sync_and_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old & (unsigned short)a1;
 return *a0;
}


// Function: __sync_xor_and_fetch_2 at 0x13140
unsigned int __sync_xor_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = old ^ (unsigned short)a1;
 return *a0;
}


// Function: __sync_nand_and_fetch_2 at 0x131a8
unsigned int __sync_nand_and_fetch_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = ~(old & (unsigned short)a1);
 return *a0;
}


// Function: __sync_add_and_fetch_1 at 0x13214
unsigned int __sync_add_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old + (unsigned char)a1;
 return *a0;
}


// Function: __sync_sub_and_fetch_1 at 0x13278
unsigned int __sync_sub_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old - (unsigned char)a1;
 return *a0;
}


// Function: __sync_or_and_fetch_1 at 0x132dc
unsigned int __sync_or_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old | (unsigned char)a1;
 return *a0;
}


// Function: __sync_and_and_fetch_1 at 0x13340
unsigned int __sync_and_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old & (unsigned char)a1;
 return *a0;
}


// Function: __sync_xor_and_fetch_1 at 0x133a4
unsigned int __sync_xor_and_fetch_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = old ^ (unsigned char)a1;
 return *a0;
}


// Function: __sync_nand_and_fetch_1 at 0x13408
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (4294905792());
 return ...;
}


// Function: __sync_val_compare_and_swap_4 at 0x13470
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 while (*(a0) == i)
 {
 if (!4294905792())
 return i;
 }
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x134c0
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
 {
 if (!4294905792())
 return a1;
 }
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x13538
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
 {
 if (!4294905792())
 return a1;
 }
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x135ac
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = 4294905792();
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_2 at 0x135d8
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_2(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_1 at 0x135f4
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_1(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_synchronize at 0x13610
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x1361c
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = a1;
 return old;
}


// Function: __sync_lock_test_and_set_2 at 0x13654
unsigned int __sync_lock_test_and_set_2(unsigned short *a0, unsigned int a1)
{
 unsigned short old = *a0;
 *a0 = (unsigned short)a1;
 return old;
}


// Function: __sync_lock_test_and_set_1 at 0x136b4
unsigned int __sync_lock_test_and_set_1(unsigned char *a0, unsigned int a1)
{
 unsigned char old = *a0;
 *a0 = (unsigned char)a1;
 return old;
}


// Function: __sync_lock_release_8 at 0x13710
void __sync_lock_release_8(unsigned int *ptr)
{
 4294905760();
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x13734
void __sync_lock_release_4(unsigned int *ptr)
{
 4294905760();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x13754
void __sync_lock_release_2(unsigned short *ptr)
{
 4294905760();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x13774
void __sync_lock_release_1(char *ptr)
{
 4294905760();
 *(ptr) = 0;
 return;
}



/* CRT stub function __aeabi_read_tp removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */


