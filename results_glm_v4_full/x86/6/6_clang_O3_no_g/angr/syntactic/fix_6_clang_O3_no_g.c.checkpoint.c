// Angr Decompilation of 6_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <sys/syscall.h>
#include <signal.h>
#include <pthread.h>
#include <stdatomic.h>
#include <netinet/in.h>
#include <sys/types.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 char field_c;
 unsigned int padding_0[256];
} struct_0;

typedef struct struct_0_shm {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 char field_c;
} struct_0_shm;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

/* Function pointer for dynamic initialization */
extern void (*g_406ff4)(void) = NULL;

/* Forward declarations */
int param_strcpy(char *a0, char *a1);
unsigned int param_strcmp(char *a0, char *a1);
int param_strlen(char *a0);
int param_memcpy(void* a0, void* a1, unsigned int n);
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2);
int param_printf(unsigned int a0, unsigned int a1);
unsigned int param_scanf(char *a0);
unsigned int param_fopen_fclose(char *a0);
unsigned int param_fread_fwrite(char *a0);
unsigned int param_malloc_free(unsigned int a0);
unsigned int param_memset(void* a0, unsigned int n);
int param_strchr_strstr(char *a0, char a1, char *a2);
unsigned int param_linux_syscall(unsigned int a0);
unsigned int param_win32_api(unsigned int a0);
unsigned int param_fork_exec(char *a0, unsigned int a1);
unsigned int param_pipe_communication(void);
unsigned int param_socket_create(void);
int param_shmget_shmat(void);
unsigned int param_signal_handling(void);
unsigned int param_pthread_create(unsigned int a0);
unsigned int param_pthread_join(void);
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1);
unsigned int param_condition_variable(void);
unsigned int param_atomic_ops(unsigned int i);
unsigned int param_thread_local_storage(unsigned int i);
void *thread_compute(void *a0);
void *thread_sum(void *arg);
void *thread_increment(void *arg);
void *consumer_thread(void *arg);
void *producer_thread(void *arg);
void *thread_atomic_increment(void *arg);
void *thread_atomic_load_store(void *arg);
void *thread_tls_test(void *arg);
int call_strcpy(void);
unsigned int call_strcmp(void);
unsigned int call_strlen(void);
unsigned int call_memcpy(void);
int call_memcmp(void);
int call_printf(void);
unsigned int call_scanf(void);
unsigned int call_fopen_fclose(void);
unsigned int call_fread_fwrite(void);
unsigned int call_malloc_free(void);
unsigned int call_memset(void);
unsigned int call_strchr_strstr(void);
unsigned int call_linux_syscall(void);
unsigned int call_win32_api(void);
unsigned int call_fork_exec(void);
unsigned int call_pipe_communication(void);
unsigned int call_socket_create(void);
unsigned int call_shmget_shmat(void);
unsigned int call_signal_handling(void);
unsigned int call_pthread_create(void);
unsigned int call_pthread_join(void);
unsigned int call_mutex_lock(void);
unsigned int call_condition_variable(void);
unsigned int call_atomic_ops(void);
unsigned int call_thread_local_storage(void);
int test_standard_library_functions(void);
int test_system_calls(void);
int test_thread_concurrency(void);

/* Global data arrays - definitions */
const char g_404074[] = "String test: %s\n";
const char g_40408f[] = "Copy result: %d\n";
const char g_4040aa[] = "Compare result: %d\n";
const char g_4040c6[] = "Length: %d\n";
const char g_4040e2[] = "Memcmp result: %d\n";
const char g_4040fe[] = "Printf formatted: %s\n";
const char g_40411a[] = "Scanf input pointer: %p\n";
const char g_404137[] = "File descriptor: %d\n";
const char g_404153[] = "File read/write test\n";
const char g_40416f[] = "Memory allocation test\n";
const char g_40418b[] = "String search test\n";
const char g_4041a6[] = "All stdlib tests passed\n";
const char g_4041f5[] = "Syscall test passed\n";
const char g_404211[] = "Stat test passed\n";
const char g_40422d[] = "Fork/exec test passed\n";
const char g_404249[] = "Pipe test passed\n";
const char g_404265[] = "Socket test passed\n";
const char g_404281[] = "Signal test passed\n";
const char g_40429d[] = "All syscall tests passed\n";
const char g_4042c3[] = "Pthread create test passed\n";
const char g_4042df[] = "Pthread join test passed\n";
const char g_4042fc[] = "Mutex test passed\n";
const char g_404318[] = "Condition variable test passed\n";
const char g_404334[] = "Atomic ops test passed\n";
const char g_404350[] = "Thread local storage test passed\n";
const char g_40436c[] = "Standard Library Tests";
const char g_404390[] = "System Calls Tests";
const char g_4043ab[] = "Thread Concurrency Tests";
char g_4043cc[12] = "HelloWorld";
char g_4043d8[12] = "HelloWorld";

/* Helper function for conditional operations */
static inline int _ccall_helper(int dummy, int dummy2, int value, int dummy3, int dummy4) {
    return value;
}

/* Stub functions for CRT */
void frame_dummy(void) {}
void deregister_tm_clones(void) {}

/* Global variables for signal handling */
unsigned int signal_number = 0;
unsigned int signal_received = 0;

/* Forward declarations */
void signal_handler(int);
unsigned int get_pc_thunk_dx(void);

/* Global variables for threading */
unsigned int counter_mutex = 0;
unsigned int shared_counter = 0;
unsigned int cond = 0;
unsigned int cond_mutex = 0;
char data = 0;
char i = 0;
char ready = 0;
char atomic_counter = 0;

/* Atomic operation wrappers */
static unsigned int my_atomic_fetch_add(unsigned int *ptr) {
    return __sync_add_and_fetch(ptr, 1);
}

static unsigned int my_atomic_compare_exchange(unsigned int *ptr, unsigned int expected, unsigned int desired) {
    return __sync_val_compare_and_swap(ptr, expected, desired);
}

static unsigned int my_atomic_exchange(unsigned int *ptr, unsigned int value) {
    return __sync_lock_test_and_set(ptr, value);
}

// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40141b at 0x40141b
void sub_40141b()
{
 __builtin_trap();
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 return;
}





// Function: sub_401424 at 0x401424
void sub_401424()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401463 at 0x401463
void sub_401463()
{
}


// Function: sub_401469 at 0x401469
void sub_401469()
{
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones()
{
 return;
}


// Function: sub_4014b7 at 0x4014b7
void sub_4014b7()
{
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux(void)
{
 return;
}


// Function: sub_40154a at 0x40154a
void sub_40154a()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



/* Removed: __x86.get_pc_thunk_bx - invalid function name */

unsigned int get_pc_thunk_dx(void)
{
 unsigned int v0;
 asm volatile ("movl (%%esp), %%eax" : "=a" (v0));
 return v0;
}

int get_pc_thunk_di(void)
{
 unsigned int v0;
 asm volatile ("movl (%%esp), %%eax" : "=a" (v0));
 return v0;
}


// Function: sub_401561 at 0x401561
int sub_401561()
{
 param_strcpy(NULL, NULL);
 return 0;
}


// Function: param_strcpy at 0x401570
int param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3()
{
 call_strcpy();
 return 0;
}


// Function: call_strcpy at 0x4015b0
int call_strcpy()
{
 char v0[8]; // [bp-0x24]
 char v1[24]; // [bp-0x1c]

 strncpy(v1, "HelloLib", 8);
 return strlen(&v0);
}


// Function: sub_4015e6 at 0x4015e6
int sub_4015e6()
{
 param_strcmp(NULL, NULL);
 return 0;
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // ebx
 int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = 0;
 v2 = strcmp(a0, a1);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_40162b at 0x40162b
void sub_40162b()
{
 call_strcmp();
 return;
}


// Function: call_strcmp at 0x401630
unsigned int call_strcmp()
{
 return 0;
}


// Function: sub_401633 at 0x401633
int sub_401633()
{
 param_strlen(NULL);
 return 0;
}


// Function: param_strlen at 0x401640
int param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: sub_401661 at 0x401661
void sub_401661()
{
 call_strlen();
 return;
}


// Function: call_strlen at 0x401670
unsigned int call_strlen()
{
 return 12;
}


// Function: sub_401676 at 0x401676
int sub_401676()
{
 param_memcpy(NULL, NULL, 0);
 return 0;
}


// Function: param_memcpy at 0x401680
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_4016af at 0x4016af
void sub_4016af()
{
 call_memcpy();
 return;
}


// Function: call_memcpy at 0x4016b0
unsigned int call_memcpy()
{
 return 90;
}


// Function: sub_4016b6 at 0x4016b6
int sub_4016b6()
{
 param_memcmp(NULL, NULL, 0);
 return 0;
}


// Function: param_memcmp at 0x4016c0
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // ebx
 int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = 0;
 v2 = memcmp(a0, a1, a2);
 return (v2 <= 0 ? -(v2) : 1);
}


// Function: sub_4016ff at 0x4016ff
int sub_4016ff()
{
 call_memcmp();
 return 0;
}


// Function: call_memcmp at 0x401700
int call_memcmp()
{
 int v7; // esi
 int v8; // eax
 unsigned int v9; // ecx
 unsigned int v10; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v2 = 0;
 v1 = 0;
 v0 = 0;
 v7 = memcmp(&g_4043d8, &g_4043cc, 12);
 v8 = memcmp(&g_4043d8, &g_4043d8, 12);
 v9 = -(v8);
 if ((char)_ccall_helper(15, 15, v8, 0, 0))
 v9 = 1;
 v10 = -(v7);
 if ((char)_ccall_helper(15, 15, v7, 0, 0))
 v10 = 1;
 return v10 + v9;
}


// Function: sub_401762 at 0x401762
int sub_401762()
{
 param_printf(0, 0);
 return 0;
}


// Function: param_printf at 0x401770
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a1;
 v0 = a0;
 return printf("Value: %d, Name: %s\n");
}


// Function: sub_40179c at 0x40179c
int sub_40179c()
{
 call_printf();
 return 0;
}


// Function: call_printf at 0x4017a0
int call_printf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = "Test";
 v0 = 42;
 return printf("Value: %d, Name: %s\n");
}


// Function: sub_4017cd at 0x4017cd
int sub_4017cd()
{
 param_scanf(NULL);
 return 0;
}


// Function: param_scanf at 0x4017d0
unsigned int param_scanf(char *a0)
{
 unsigned int v5; // ebx
 char *v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp-0xc], Other Possible Types: unsigned int
 char v3; // [bp-0x8], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v1 = &v2;
 v0 = &v3;
 return (__isoc99_sscanf(a0, "%d,%d") == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_401812 at 0x401812
int sub_401812()
{
 call_scanf();
 return 0;
}


// Function: call_scanf at 0x401820
unsigned int call_scanf()
{
 unsigned int v7; // ebx
 unsigned int v8; // esi
 char *v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp-0x10], Other Possible Types: unsigned int
 char v3; // [bp-0xc], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v7;
 v4 = v8;
 v1 = &v2;
 v0 = &v3;
 return (__isoc99_sscanf("123,456", "%d,%d") == 2 ? v2 + v3 : 4294967295);
}


// Function: sub_40186a at 0x40186a
int sub_40186a()
{
 param_fopen_fclose(NULL);
 return 0;
}


// Function: param_fopen_fclose at 0x401870
unsigned int param_fopen_fclose(char *a0)
{
 FILE *fp; // eax
 unsigned int v1; // edi

 fp = fopen(a0, "r");
 if (!fp)
 return 4294967295;
 v1 = fileno(fp);
 fclose(fp);
 return v1;
}


// Function: call_fopen_fclose at 0x4018c0
unsigned int call_fopen_fclose()
{
 void* fp; // eax
 unsigned int v2; // eax

 fp = fopen("/etc/passwd", "r");
 if (!fp)
 return 4294967295;
 v2 = fileno(fp);
 fclose(fp);
 return v2 >> 31 | 42;
}


// Function: sub_401918 at 0x401918
int sub_401918()
{
 param_fread_fwrite(NULL);
 return 0;
}


// Function: param_fread_fwrite at 0x401920
unsigned int param_fread_fwrite(char *a0)
{
 void* fp; // eax
 void* v2; // esi
 unsigned int count; // eax
 char v0; // [bp-0x30]

 fp = fopen(a0, "w+");
 if (!fp)
 return 4294967295;
 v2 = fp;
 if (fwrite("BinBench Test Data", 1, 18, fp) != 18)
 {
 fclose(v2);
 return 4294967294;
 }
 rewind(v2);
 count = fread(&v0, 1, 18, v2);
 (&v0)[count] = 0;
 fclose(v2);
 unlink(a0);
 if (count != 18)
 return 4294967293;
 return (!bcmp(&v0, "BinBench Test Data", 19) ? 42 : 4294967293);
}


// Function: sub_4019f4 at 0x4019f4
int sub_4019f4()
{
 call_fread_fwrite();
 return 0;
}


// Function: call_fread_fwrite at 0x401a00
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401a23 at 0x401a23
int sub_401a23()
{
 param_malloc_free(0);
 return 0;
}


// Function: param_malloc_free at 0x401a30
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v0; // edi
 unsigned int *ptr; // eax
 unsigned int result; // edi
 unsigned int flag1; // ecx
 unsigned int index; // edx
 unsigned int v5; // ebp
 unsigned int v6; // edx
 unsigned int idx; // ebp
 unsigned int v8; // esi

 v0 = a0;
 ptr = malloc(v0 * 4);
 if (!ptr)
 return 4294967295;
 result = v0;
 if (result)
 {
 flag1 = v0 & 3;
 index = 0;
 if (v0 - 1 >= 3)
 {
 index = 0;
 v5 = 20;
 do
 {
 ptr[index] = v5 - 20;
 ptr[1 + index] = v5 - 10;
 ptr[2 + index] = v5;
 ptr[3 + index] = v5 + 10;
 index += 4;
 v5 += 40;
 } while ((a0 & 0xfffffffc) != index);
 }
 if (flag1)
 {
 v6 = index * 10;
 idx = 0;
 do
 {
 ptr[idx + index] = v6;
 idx += 1;
 v6 += 10;
 } while (flag1 != idx);
 }
 v8 = *(ptr);
 result = a0;
 }
 free(ptr);
 return v8 + ptr[1 + result];
}


// Function: sub_401ae2 at 0x401ae2
void sub_401ae2()
{
 call_malloc_free();
 return;
}


// Function: call_malloc_free at 0x401af0
unsigned int call_malloc_free()
{
 return 90;
}


// Function: sub_401af6 at 0x401af6
int sub_401af6()
{
 param_memset(NULL, 0);
 return 0;
}


// Function: param_memset at 0x401b00
unsigned int param_memset(void* a0, unsigned int n)
{
 unsigned int result; // ecx
 unsigned int i; // edx
 unsigned int v2; // eax
 unsigned int v3; // edx

 memset(a0, 0, n);
 if (!n)
 return 0;
 result = n & 7;
 if (n - 1 < 7)
 {
 i = 0;
 v2 = 0;
 }
 else
 {
 i = 0;
 v2 = 0;
 do
 {
 v2 = *(7 + (char *)a0 + i) + *(6 + (char *)a0 + i) + *(5 + (char *)a0 + i) + *(4 + (char *)a0 + i) + *(3 + (char *)a0 + i) + *(2 + (char *)a0 + i) + *(1 + (char *)a0 + i) + *((char *)a0 + i) + v2;
 i += 8;
 } while ((n & 0xfffffff8) != i);
 }
 if (!result)
 return v2;
 v3 = 0;
 do
 {
 v2 += *((char *)a0 + i + v3);
 v3 += 1;
 } while (result != v3);
 return v2;
}


// Function: sub_401bb1 at 0x401bb1
void sub_401bb1()
{
 call_memset();
 return;
}


// Function: call_memset at 0x401bc0
unsigned int call_memset()
{
 return 0;
}


// Function: sub_401bc3 at 0x401bc3
int sub_401bc3()
{
 param_strchr_strstr(NULL, 0, NULL);
 return 0;
}


// Function: param_strchr_strstr at 0x401bd0
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 char *ptr1; // eax
 char *ptr2; // eax

 ptr1 = strchr(a0, a1);
 ptr2 = strstr(a0, a2);
 return (-(ptr1 == NULL) | (ptr1 ? ptr1 - a0 : 0)) + (-(ptr2 == NULL) | (ptr2 ? ptr2 - a0 : 0));
}


// Function: sub_401c2a at 0x401c2a
void sub_401c2a()
{
 call_strchr_strstr();
 return;
}


// Function: call_strchr_strstr at 0x401c30
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: sub_401c36 at 0x401c36
int sub_401c36()
{
 test_standard_library_functions();
 return 0;
}


// Function: test_standard_library_functions at 0x401c40
int test_standard_library_functions()
{
 unsigned int v5; // eax
 void* fp; // eax
 char *v0; // [bp-0x40]
 char v1; // [bp-0x34]
 char v2[8]; // [bp-0x30]
 char v3[24]; // [bp-0x28]

 puts(&g_40436c);
 strncpy(v3, "HelloLib", 8);
 strlen(&v2);
 printf(&g_404074);
 printf(&g_40408f);
 printf(&g_4040aa);
 printf(&g_4040c6);
 v5 = memcmp(&g_4043d8, &g_4043cc, 12);
 printf(&g_4040e2);
 printf("Value: %d, Name: %s\n");
 printf(&g_4040fe);
 v0 = &v1;
 printf(&g_40411a);
 fp = fopen("/etc/passwd", "r");
 if (fp)
 {
 fileno(fp);
 fclose(fp);
 }
 printf(&g_404137);
 param_fread_fwrite("/tmp/binbench_test_tmp");
 printf(&g_404153);
 printf(&g_40416f);
 printf(&g_40418b);
 return printf(&g_4041a6);
}


// Function: sub_401e3c at 0x401e3c
int sub_401e3c()
{
 param_linux_syscall(0);
 return 0;
}


// Function: param_linux_syscall at 0x401e40
unsigned int param_linux_syscall(unsigned int a0)
{
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v3;
 result = 0;
 v0 = a0;
 v4 = syscall(5);
 if (v4 < 0)
 return -(*(__errno_location()));
 v0 = v4;
 syscall(6);
 return v4;
}


// Function: sub_401e89 at 0x401e89
int sub_401e89()
{
 call_linux_syscall();
 return 0;
}


// Function: call_linux_syscall at 0x401e90
unsigned int call_linux_syscall()
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v2 = v4;
 result = 0;
 v0 = "/etc/passwd";
 v5 = syscall(5);
 if (v5 >= 0)
 {
 v0 = v5;
 syscall(6);
 }
 else
 {
 v5 = -(*(__errno_location()));
 }
 return v5 >> 31 | 42;
}


// Function: sub_401ee2 at 0x401ee2
int sub_401ee2()
{
 param_win32_api(0);
 return 0;
}


// Function: param_win32_api at 0x401ef0
unsigned int param_win32_api(unsigned int a0)
{
 unsigned int v3; // ebx
 struct stat v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 if (stat((char *)a0, &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f35 at 0x401f35
int sub_401f35()
{
 call_win32_api();
 return 0;
}


// Function: call_win32_api at 0x401f40
unsigned int call_win32_api()
{
 unsigned int v4; // ebx
 struct stat v0; // [bp-0x5c]
 char v1; // [bp-0x30]
 unsigned int v2; // [bp-0x4]

 v2 = v4;
 if (stat("/etc/passwd", &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: sub_401f88 at 0x401f88
int sub_401f88()
{
 param_fork_exec(NULL, 0);
 return 0;
}


// Function: param_fork_exec at 0x401f90
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 int v1;

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &v1, 0) < 0)
 {
 return 4294967294;
 }
 else if (((char)v1 & 127))
 {
 return 4294967293;
 }
 else
 {
 return v1 >> 8 & 255;
 }
}


// Function: sub_40200c at 0x40200c
int sub_40200c()
{
 call_fork_exec();
 return 0;
}


// Function: call_fork_exec at 0x402010
unsigned int call_fork_exec()
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 int status;

 pid = fork();
 if (pid < 0)
 {
 return 4294967295;
 }
 else if (!pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 else if (waitpid(pid, &status, 0) < 0)
 {
 return 4294967295;
 }
 else if (!((char)status & 127))
 {
 return -(0 < (status & 0xff00)) | 42;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_40207c at 0x40207c
int sub_40207c()
{
 param_pipe_communication();
 return 0;
}


// Function: param_pipe_communication at 0x402080
unsigned int param_pipe_communication()
{
 unsigned int pid; // eax
 unsigned int count; // eax
 char v0; // [bp-0x30], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x2c]
 char v2; // [bp-0x28]

 if (pipe(&v0) < 0)
 return 4294967295;
 pid = fork();
 if (pid < 0)
 {
 return 4294967294;
 }
 else if (pid)
 {
 close(v1);
 count = read(v0, &v2, 31);
 (&v2)[count] = 0;
 close(v0);
 wait(NULL);
 return ((char)_ccall_helper(15, 15, count, 0, 0) ? 42 : 4294967293);
 }
 else
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x402160
unsigned int call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: sub_40217a at 0x40217a
int sub_40217a()
{
 param_socket_create();
 return 0;
}


// Function: param_socket_create at 0x402180
unsigned int param_socket_create()
{
 unsigned int sock; // eax
 unsigned int v7; // esi
 unsigned int v8; // eax
 unsigned int result; // [bp-0x20]
 struct sockaddr_in v1; // [bp-0x1c]

 sock = socket(2, 1, 0);
 if (sock < 0)
 return 4294967295;
 v7 = sock;
 result = 1;
 if (setsockopt(v7, 1, 2, &result, 4) < 0)
 {
 close(v7);
 return 4294967294;
 }
 *((unsigned int *)&v1.sin_addr.s_addr) = 0;
 *((unsigned int *)&v1.sin_port) = 0;
 *((unsigned int *)&v1.sin_family) = 2;
 *((unsigned int *)&v1.sin_zero) = 0;
 if (bind(v7, (struct sockaddr *)&v1, 16) < 0)
 {
 close(v7);
 return 4294967293;
 }
 v8 = listen(v7, 5);
 close(v7);
 return (v8 < 0 ? 0xfffffffc : 42);
}


// Function: sub_402266 at 0x402266
int sub_402266()
{
 call_socket_create();
 return 0;
}


// Function: call_socket_create at 0x402270
unsigned int call_socket_create()
{
 return param_socket_create();
}


// Function: sub_40228a at 0x40228a
int sub_40228a()
{
 param_shmget_shmat();
 return 0;
}


// Function: param_shmget_shmat at 0x402290
int param_shmget_shmat()
{
 unsigned int v1; // eax
 unsigned int v2; // esi
 unsigned int v3; // eax
 unsigned int v4; // eax
 struct struct_0_shm *ptr; // eax
 unsigned int len; // ebp

 v1 = open("/tmp/binbench_shm", 66, 438);
 v2 = 4294967295;
 if (v1 >= 0)
 {
 close(v1);
 v3 = ftok("/tmp/binbench_shm", 42);
 if (v3 >= 0)
 {
 v4 = shmget(v3, 0x1000, 950);
 if (v4 >= 0)
 {
 ptr = shmat(v4, 0, 0);
 if (ptr != (struct struct_0_shm *)0xffffffff)
 {
 ptr->field_c = 0;
 ptr->field_8 = 2037542765;
 ptr->field_4 = 1699570789;
 ptr->field_0 = 1918986323;
 len = strlen((char *)ptr);
 shmdt(ptr);
 shmctl(v4, 0, 0);
 return len;
 }
 v2 = 4294967293;
 }
 else
 {
 v2 = 4294967294;
 }
 }
 }
 return v2;
}


// Function: sub_402374 at 0x402374
int sub_402374()
{
 call_shmget_shmat();
 return 0;
}


// Function: call_shmget_shmat at 0x402380
unsigned int call_shmget_shmat()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 return ((char)_ccall_helper(15, 15, param_shmget_shmat(), 0, 0) ? 42 : 4294967295);
}


// Function: sub_4023a9 at 0x4023a9
int sub_4023a9()
{
 param_signal_handling();
 return 0;
}


// Function: param_signal_handling at 0x4023b0
unsigned int param_signal_handling()
{
 unsigned int v1; // esi
 unsigned int v2; // esi
 unsigned int v3; // esi
 unsigned int v4; // esi
 unsigned int v5; // esi
 unsigned int v6; // esi

 if (signal(10, signal_handler) == SIG_ERR)
 {
 return 4294967295;
 }
 else if (signal(14, signal_handler) != 4294967295)
 {
 signal_received = 0;
 raise(10);
 if (!signal_received)
 {
 v1 = 1000;
 do
 {
 v2 = v1;
 usleep(1000);
 } while (!signal_received && (v3 = v2 - 1, v1 = v2 - 1, v2 > 1));
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
 v4 = 2000;
 do
 {
 v5 = v4;
 usleep(1000);
 } while (!signal_received && (v6 = v5 - 1, v4 = v5 - 1, v5 > 1));
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


// Function: sub_40251c at 0x40251c
void sub_40251c(unsigned int a0)
{
 signal_handler((int)a0);
 return;
}


// Function: signal_handler at 0x402520
void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = a0;
}


// Function: sub_402541 at 0x402541
int sub_402541()
{
 call_signal_handling();
 return 0;
}


// Function: call_signal_handling at 0x402550
unsigned int call_signal_handling()
{
 return param_signal_handling();
}


// Function: sub_40256a at 0x40256a
int sub_40256a()
{
 test_system_calls();
 return 0;
}


// Function: test_system_calls at 0x402570
int test_system_calls()
{
 unsigned int v4; // eax
 unsigned int pid; // eax
 unsigned int result; // [bp-0x70]
 unsigned int v1[11][1]; // [bp-0x6c]

 puts(&g_404390);
 if (syscall(5) >= 0)
 syscall(6);
 else
 __errno_location();
 printf(&g_4041f5);
 v4 = stat("/etc/passwd", &v1);
 printf(&g_404211);
 pid = fork();
 if (pid >= 0 && !pid)
 {
 result = 0;
 execl("/bin/true", "/bin/true");
 _exit(127); /* do not return */
 }
 printf(&g_40422d);
 param_pipe_communication();
 printf(&g_404249);
 param_socket_create();
 printf(&g_404265);
 printf(&g_404281);
 param_signal_handling();
 return printf(&g_40429d);
}


// Function: sub_4026f6 at 0x4026f6
int sub_4026f6()
{
 unsigned int v1 = 0;
 thread_compute(&v1);
 return 0;
}


// Function: thread_compute at 0x402700
void * thread_compute(void *a0)
{
 unsigned int *ptr;
 unsigned int *arg = (unsigned int *)a0;

 ptr = malloc(4);
 *ptr = *arg * *arg;
 return ptr;
}


// Function: sub_40272c at 0x40272c
int sub_40272c()
{
 param_pthread_create(0);
 return 0;
}


// Function: param_pthread_create at 0x402730
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int *v0;
 unsigned int v1;
 pthread_t v2;

 v1 = a0;
 if (pthread_create(&v2, NULL, thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return 0;
}


// Function: sub_40279b at 0x40279b
int sub_40279b()
{
 call_pthread_create();
 return 0;
}


// Function: call_pthread_create at 0x4027a0
unsigned int call_pthread_create()
{
 unsigned int *v0;
 unsigned int v1;
 pthread_t v2;

 v1 = 7;
 if (pthread_create(&v2, NULL, thread_compute, &v1))
 return 4294967295;
 pthread_join(v2, (void **)&v0);
 free(v0);
 return 0;
}


// Function: sub_40280b at 0x40280b
int sub_40280b()
{
 unsigned int args[3] = {0, 10, 0};
 thread_sum(args);
 return 0;
}


// Function: thread_sum at 0x402810
void * thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v0; // esi
 unsigned int v1; // edi

 ptr[2] = 0;
 v0 = ptr[0];
 v1 = ptr[1] - v0;
 if (ptr[1] >= v0)
 ptr[2] = v1 * (v0 + 1) + v0 + (unsigned int)(((ptr[1] + ~(v0)) * v1) >> 1);
 return NULL;
}


// Function: sub_402848 at 0x402848
int sub_402848()
{
 param_pthread_join();
 return 0;
}


// Function: param_pthread_join at 0x402850
unsigned int param_pthread_join()
{
 pthread_t v0;
 pthread_t v1;
 pthread_t v2;
 unsigned int flag3;
 unsigned int v4;
 unsigned int flag2;
 unsigned int v6;
 unsigned int v7;
 unsigned int flag1;
 unsigned int v9;
 unsigned int v10;
 unsigned int result;

 result = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 1;
 v4 = 10;
 v6 = 11;
 v7 = 20;
 v9 = 21;
 v10 = 30;
 if (pthread_create(&v0, NULL, thread_sum, &flag3))
 {
 return 4294967295;
 }
 else if (pthread_create(&v1, NULL, thread_sum, &v6))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, NULL, thread_sum, (void *)&v9))
 {
 return 4294967295;
 }
 else if (pthread_join(v0, NULL))
 {
 return 4294967294;
 }
 else if (pthread_join(v1, NULL))
 {
 return 4294967294;
 }
 else if (!pthread_join(v2, NULL))
 {
 return flag1 + flag2 + result + flag3;
 }
 else
 {
 return 4294967294;
 }
}


// Function: sub_402963 at 0x402963
int sub_402963()
{
 call_pthread_join();
 return 0;
}


// Function: call_pthread_join at 0x402970
unsigned int call_pthread_join()
{
 return param_pthread_join();
}


// Function: sub_40298a at 0x40298a
int sub_40298a()
{
 unsigned int v1 = 1000;
 thread_increment(&v1);
 return 0;
}


// Function: thread_increment at 0x402990
void * thread_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v0;
 unsigned int i;
 unsigned int v2;
 pthread_mutex_t mutex;
 
 pthread_mutex_init(&mutex, NULL);

 v0 = *ptr;
 if (v0 <= 0)
 return NULL;
 do
 {
 i = v0;
 pthread_mutex_lock(&mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&mutex);
 usleep(1000);
 v2 = i - 1;
 v0 = v2;
 } while (i != 1);
 return NULL;
}


// Function: sub_4029f1 at 0x4029f1
int sub_4029f1()
{
 param_mutex_lock(0, 0);
 return 0;
}


// Function: param_mutex_lock at 0x402a00
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int i;
 unsigned int *ptr;
 unsigned int *v3;
 unsigned int *v4;
 unsigned int v5;
 unsigned int v6;
 unsigned int v7;
 unsigned int *ptr2;

 i = a0;
 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 v3 = ptr;
 ptr2 = ptr;
 shared_counter = 0;
 if (i > 0)
 {
 v4 = v3;
 do
 {
 v5 = i;
 if (pthread_create((pthread_t *)v4, 0, thread_increment, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 v4 += 4;
 i -= 1;
 } while (i != 0);
 i = a0;
 v3 = ptr2;
 if (i > 0)
 {
 v7 = 0;
 do
 {
 pthread_join(v3[v7], 0);
 v7 += 1;
 } while (i != v7);
 }
 }
 free(v3);
 return (shared_counter == a1 * a0 ? 42 : 4294967293);
}


// Function: sub_402ae3 at 0x402ae3
int sub_402ae3()
{
 call_mutex_lock();
 return 0;
}


// Function: call_mutex_lock at 0x402af0
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_402b14 at 0x402b14
int sub_402b14()
{
 consumer_thread(NULL);
 return 0;
}


// Function: consumer_thread at 0x402b20
void * consumer_thread(void *arg)
{
 unsigned int *ptr;
 pthread_mutex_t mutex;
 pthread_cond_t cond_var;
 
 pthread_mutex_init(&mutex, NULL);
 pthread_cond_init(&cond_var, NULL);

 pthread_mutex_lock(&mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait(&cond_var, &mutex);
 } while (i != 1);
 }
 pthread_mutex_unlock(&mutex);
 ptr = malloc(4);
 *ptr = (!data ? 0 : 42);
 return ptr;
}


// Function: sub_402b93 at 0x402b93
int sub_402b93()
{
 producer_thread(NULL);
 return 0;
}


// Function: producer_thread at 0x402ba0
void * producer_thread(void *arg)
{
 pthread_mutex_t mutex;
 pthread_cond_t cond_var;
 
 pthread_mutex_init(&mutex, NULL);
 pthread_cond_init(&cond_var, NULL);

 sleep(1);
 pthread_mutex_lock(&mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal(&cond_var);
 pthread_mutex_unlock(&mutex);
 return NULL;
}


// Function: sub_402bf5 at 0x402bf5
int sub_402bf5()
{
 param_condition_variable();
 return 0;
}


// Function: param_condition_variable at 0x402c00
unsigned int param_condition_variable()
{
 pthread_t v0;
 void *v1;
 pthread_t v2;

 ready = 0;
 data = 0;
 if (pthread_create(&v0, NULL, consumer_thread, NULL))
 {
 return 4294967295;
 }
 else if (pthread_create(&v2, NULL, producer_thread, NULL))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, &v1);
 pthread_join(v2, NULL);
 free(v1);
 return *(unsigned int *)v1;
 }
}


// Function: sub_402cae at 0x402cae
int sub_402cae()
{
 call_condition_variable();
 return 0;
}


// Function: call_condition_variable at 0x402cb0
unsigned int call_condition_variable()
{
 return param_condition_variable();
}


// Function: sub_402cca at 0x402cca
int sub_402cca()
{
 unsigned int v1 = 100;
 thread_atomic_increment(&v1);
 return 0;
}


// Function: thread_atomic_increment at 0x402cd0
void * thread_atomic_increment(void *arg)
{
 unsigned int *ptr = (unsigned int *)arg;
 unsigned int v0;
 unsigned int result;
 unsigned int i;

 v0 = *ptr;
 if (v0 <= 0)
 return NULL;
 result = v0 & 3;
 i = 0;
 if (v0 - 1 >= 3)
 {
 i = 0;
 do
 {
 my_atomic_fetch_add(&atomic_counter);
 my_atomic_compare_exchange(&atomic_counter, i + 1000, i);
 my_atomic_fetch_add(&atomic_counter);
 my_atomic_compare_exchange(&atomic_counter, i + 1001, i + 1);
 my_atomic_fetch_add(&atomic_counter);
 my_atomic_compare_exchange(&atomic_counter, i + 1002, i + 2);
 my_atomic_fetch_add(&atomic_counter);
 my_atomic_compare_exchange(&atomic_counter, i + 1003, i + 3);
 i += 4;
 } while (i != (v0 & 0xfffffffc));
 }
 if (!result)
 return NULL;
 do
 {
 my_atomic_fetch_add(&atomic_counter);
 my_atomic_compare_exchange(&atomic_counter, i + 1000, i);
 i += 1;
 result -= 1;
 } while (result != 1);
 return NULL;
}


// Function: sub_402da6 at 0x402da6
int sub_402da6()
{
 thread_atomic_load_store(NULL);
 return 0;
}


// Function: thread_atomic_load_store at 0x402db0
void * thread_atomic_load_store(void *arg)
{
 my_atomic_exchange((unsigned int *)&atomic_counter, (unsigned int)(atomic_counter + 100));
 return NULL;
}


// Function: sub_402dce at 0x402dce
int sub_402dce()
{
 param_atomic_ops(0);
 return 0;
}


// Function: param_atomic_ops at 0x402dd0
unsigned int param_atomic_ops(unsigned int i)
{
 unsigned int *ptr;
 unsigned int v4;
 unsigned int *v5;
 unsigned int *v6;
 unsigned int v7;
 unsigned int *v8;
 unsigned int v9;
 unsigned int v10;
 unsigned int *ptr2;
 pthread_t v1;
 unsigned int v2;

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 ptr2 = ptr;
 v2 = i;
 my_atomic_exchange((unsigned int *)&atomic_counter, 0);
 if (i > 0)
 {
 v4 = i;
 v5 = ptr;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create((pthread_t *)v6, NULL, thread_atomic_increment, &v2))
 {
 free(ptr);
 return 4294967294;
 }
 v5 = (unsigned int *)((char *)v5 + 4);
 v4 -= 1;
 } while (v4 != 0);
 }
 if (!pthread_create(&v1, NULL, thread_atomic_load_store, NULL))
 pthread_join(v1, NULL);
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(ptr2[v10], NULL);
 v10 += 1;
 } while (i != v10);
 }
 free(ptr);
 return ((char)_ccall_helper(15, 15, atomic_counter, 0, 0) ? 42 : 4294967293);
}


// Function: sub_402ede at 0x402ede
int sub_402ede()
{
 call_atomic_ops();
 return 0;
}


// Function: call_atomic_ops at 0x402ee0
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_402f04 at 0x402f04
int sub_402f04()
{
 thread_tls_test((char *)NULL);
 return 0;
}


// Function: thread_tls_test at 0x402f10
void * thread_tls_test(void *arg)
{
 char *a0 = (char *)arg;
 unsigned int v3; // esi
 unsigned int v4; // edi
 unsigned int *ptr; // eax

 v3 = 100;
 v4 = v3 + 50;
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 return ptr;
}


// Function: sub_402f63 at 0x402f63
int sub_402f63()
{
 param_thread_local_storage(0);
 return 0;
}


// Function: param_thread_local_storage at 0x402f70
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v3; // esi
 unsigned int ptr; // ebp
 unsigned int v13; // ebp
 unsigned int v14; // esi
 unsigned int ptr_array[2]; // eax
 unsigned int v16; // edi
 unsigned int *ptr2; // ecx
 unsigned int index; // esi
 char *ptr3; // eax
 unsigned int j; // esi
 unsigned int *v9; // ebp
 unsigned int *v10; // ebp
 unsigned int *v11; // ebp
 unsigned int v12; // edi
 unsigned int *p; // [bp-0x1c]
 unsigned int *addr; // [bp-0x18]
 char v2; // [bp-0x14]

 v3 = i * 4;
 ptr = malloc(v3);
 if (!ptr)
 {
 return 4294967295;
 }
 else
 {
 p = (unsigned int *)ptr;
 addr = malloc(i * 4);
 if (!addr)
 {
 free(p);
 return 4294967295;
 }
 if (i > 0)
 {
 index = 0;
 do
 {
 ptr3 = malloc(16);
 p[index] = (unsigned int)ptr3;
 snprintf(ptr3, 16, "Thread-%d", index);
 index += 1;
 } while (i != index);
 if (i > 0)
 {
 j = 0;
 v9 = addr;
 do
 {
 v10 = v9;
 if (pthread_create((pthread_t *)v10, 0, (void *(*)(void *))thread_tls_test, p[j]))
 {
 v16 = 4294967295;
 do
 {
 free((void *)p[1 + v16]);
 v16 += 1;
 } while (j != v16);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((j += 1, v11 = v10 + 4, v9 = v10 + 4, i != j));
 if (i > 0)
 {
 v12 = 0;
 v13 = 0;
 v14 = 0;
 do
 {
 pthread_join(addr[v12], &v2);
 ptr2 = *((int **)&v2);
 v14 += ptr2[0];
 v13 += ptr2[1];
 free(ptr2);
 free((void *)p[v12]);
 v12 += 1;
 } while (i != v12);
 goto LABEL_4030b6;
 }
 }
 }
 v14 = 0;
 v13 = 0;
LABEL_4030b6:
 free(p);
 free(addr);
 return (!(i * 150 ^ v13) && !(i * 100 ^ v14) ? 42 : 4294967293);
 }
}


// Function: sub_403134 at 0x403134
int sub_403134()
{
 call_thread_local_storage();
 return 0;
}


// Function: call_thread_local_storage at 0x403140
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403161 at 0x403161
int sub_403161()
{
 test_thread_concurrency();
 return 0;
}


// Function: test_thread_concurrency at 0x403170
int test_thread_concurrency()
{
 void *v0;
 unsigned int v1;
 pthread_t v2;

 puts(&g_4043ab);
 v1 = 7;
 if (!pthread_create(&v2, NULL, thread_compute, (void *)&v1))
 {
 pthread_join(v2, &v0);
 free(v0);
 }
 printf(&g_4042c3);
 param_pthread_join();
 printf(&g_4042df);
 param_mutex_lock(4, 1000);
 printf(&g_4042fc);
 param_condition_variable();
 printf(&g_404318);
 param_atomic_ops(4);
 printf(&g_404334);
 param_thread_local_storage(4);
 return printf(&g_404350);
}


// Function: sub_403283 at 0x403283
int sub_403283()
{
 main();
 return 0;
}


// Function: main at 0x403290
int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_4032b6 at 0x4032b6
void sub_4032b6()
{
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux()
{
 return;
}


// Function: sub_403302 at 0x403302
void sub_403302()
{
}



/* CRT stub function _fini removed by preprocessor */


