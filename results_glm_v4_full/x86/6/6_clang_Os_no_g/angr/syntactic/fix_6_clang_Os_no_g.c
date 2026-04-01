// Angr Decompilation of 6_clang_Os_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <signal.h>
#include <pthread.h>
#include <errno.h>
#include <sys/shm.h>
#include <sys/ipc.h>
#include <stdatomic.h>
#include <sys/syscall.h>
#include <time.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int padding_0[256];
} struct_0;

extern void (*g_405ff4)(void);

/* Missing global variables */
static unsigned int signal_number = 0;
static unsigned int signal_received = 0;
static unsigned int counter_mutex = 0;
static unsigned int shared_counter = 0;
static unsigned int cond = 0;
static unsigned int cond_mutex = 0;
static char data = 0;
static char i = 0;
static char ready = 0;
static unsigned int atomic_counter = 0;
static char _GLOBAL_OFFSET_TABLE_ = 0;
static char g_4033cc[12] = "BinBenchTest";
static char g_4033d8[12] = "BinBenchTest";
static char g_403074[32] = "[PASS] strncpy test\n";
static char g_40311a[32] = "[PASS] strlen test\n";
static char g_403334[32] = "[PASS] Thread local storage\n";
static char g_4031f5[32] = "[PASS] Linux syscall test\n";
static char g_40329d[32] = "[PASS] Signal handling\n";
static char g_4033ab[32] = "=== Testing Thread Concurrency ===\n";
static char g_4032df[32] = "[PASS] pthread_join test\n";
static char g_4030aa[32] = "[PASS] scanf test\n";
static char g_4030e2[32] = "[PASS] printf test\n";
static char g_40336c[32] = "=== Testing Standard Library ===\n";
static char g_403211[32] = "[PASS] stat test\n";
static char g_403265[32] = "[PASS] pipe test\n";
static char g_40318b[32] = "[PASS] memset test\n";
static char g_4031a6[32] = "[PASS] strchr test\n";
static char g_403249[32] = "[PASS] socket test\n";
static char g_4032c3[32] = "[PASS] pthread_create test\n";
static char g_403318[32] = "[PASS] cond variable test\n";
static char g_403350[32] = "[PASS] Thread concurrency tests\n";
static char g_403390[32] = "=== Testing System Calls ===\n";
static char g_403137[32] = "[PASS] fread/fwrite test\n";
static char g_403153[32] = "[PASS] malloc/free test\n";
static char g_40316f[32] = "[PASS] memset test\n";
static char g_4032fc[32] = "[PASS] mutex lock test\n";
static char g_40308f[32] = "[PASS] strcmp test\n";
static char g_4030c6[32] = "[PASS] memcpy test\n";
static char g_4030fe[32] = "[PASS] fopen/fclose test\n";
static char g_40322d[32] = "[PASS] fork/exec test\n";
static char g_403281[32] = "[PASS] atomic ops test\n";

/* Missing function stubs */
void frame_dummy(void) {}
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_ctors_aux(void) {}
void __do_global_dtors_aux(void) {}
void signal_handler(int sig) { signal_received = 1; signal_number = sig; }
int _ccall(int a, int b, int c, int d, int e) { return 0; }

static int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 __do_global_ctors_aux();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_4013e0 at 0x4013e0
int sub_4013e0()
{
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
 /* Unsupported jumpkind Ijk_SigTRAP at address 4199451 */
}


// Function: sub_40141c at 0x40141c
void sub_40141c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401420
void __x86_get_pc_thunk_bx()
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
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */


// Function: sub_4014b7 at 0x4014b7
void sub_4014b7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */


// Function: sub_40154a at 0x40154a
void sub_40154a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401559
void get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40155d
int get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401561 at 0x401561
int sub_401561()
{
 return param_strcpy();
}


// Function: param_strcpy at 0x401564
int param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: call_strcpy at 0x401597
int call_strcpy()
{
 char v0[8]; // [bp-0x24]
 char v1[24]; // [bp-0x1c]

 strncpy(v1, "HelloLib", 8);
 return strlen(&v0);
}


// Function: param_strcmp at 0x4015c9
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = strcmp(a0, a1);
 if (v2 > 0)
 return 1;
 return -(v2);
}


// Function: call_strcmp at 0x401604
unsigned int call_strcmp()
{
 return 0;
}


// Function: param_strlen at 0x401607
int param_strlen(char *a0)
{
 return strlen(a0);
}


// Function: call_strlen at 0x401628
unsigned int call_strlen()
{
 return 12;
}


// Function: param_memcpy at 0x40162e
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x40165d
unsigned int call_memcpy()
{
 return 90;
}


// Function: param_memcmp at 0x401663
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 v2 = memcmp(a0, a1, a2);
 if (v2 > 0)
 return 1;
 return -(v2);
}


// Function: call_memcmp at 0x4016a2
int call_memcmp()
{
 unsigned int v4; // ebx
 unsigned int v5; // edi
 unsigned int v6; // esi
 unsigned int v7; // esi
 unsigned int v8; // eax
 unsigned int v9; // ecx
 unsigned int v10; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = v4;
 v1 = v5;
 v0 = v6;
 v7 = memcmp(&g_4033d8, &g_4033cc, 12);
 v8 = memcmp(&g_4033d8, &g_4033d8, 12);
 v9 = -(v8);
 if ((char)_ccall(15, 15, v8, 0, 0))
 v9 = 1;
 v10 = -(v7);
 if ((char)_ccall(15, 15, v7, 0, 0))
 v10 = 1;
 return v10 + v9;
}


// Function: param_printf at 0x40170d
int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a1;
 v0 = a0;
 return printf("Value: %d, Name: %s\n");
}


// Function: call_printf at 0x401739
int call_printf()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = "Test";
 v0 = 42;
 return printf("Value: %d, Name: %s\n");
}


// Function: param_scanf at 0x401766
unsigned int param_scanf(char *a0)
{
 unsigned int v7; // ebx
 unsigned int v8; // edi
 unsigned int v9; // esi
 char *v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp-0x14], Other Possible Types: unsigned int
 char v3; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]
 unsigned int v6; // [bp-0x4]

 v6 = v7;
 v5 = v8;
 v4 = v9;
 v1 = &v2;
 v0 = &v3;
 if (__isoc99_sscanf(a0, "%d,%d") != 2)
 return 4294967295;
 return v2 + v3;
}


// Function: call_scanf at 0x4017ab
unsigned int call_scanf()
{
 unsigned int v8; // ebx
 unsigned int v9; // edi
 unsigned int v10; // esi
 char *v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp-0x14], Other Possible Types: unsigned int
 char v3; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]
 unsigned int v6; // [bp-0x4]

 v6 = v8;
 v5 = v9;
 v4 = v10;
 v1 = &v2;
 v0 = &v3;
 if (__isoc99_sscanf("123,456", "%d,%d") != 2)
 return 4294967295;
 return v2 + v3;
}


// Function: param_fopen_fclose at 0x4017f3

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


// Function: call_fopen_fclose at 0x401841
unsigned int call_fopen_fclose()
{
 return param_fopen_fclose("/etc/passwd") >> 31 | 42;
}


// Function: param_fread_fwrite at 0x40186a
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
 return (!memcmp(&v0, "BinBench Test Data", 18) ? 42 : 4294967293);
}


// Function: call_fread_fwrite at 0x40193c
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x40195f
unsigned int param_malloc_free(unsigned int i)
{
 unsigned int *ptr; // eax
 unsigned int v1; // ecx
 unsigned int idx; // edx
 unsigned int v3; // esi

 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 if (i)
 {
 v1 = 0;
 idx = 0;
 do
 {
 ptr[idx] = v1;
 idx += 1;
 v1 += 10;
 } while (i != idx);
 v3 = *(ptr);
 }
 free(ptr);
 return v3 + ptr[1 + i];
}


// Function: call_malloc_free at 0x4019b9
unsigned int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: param_memset at 0x4019da
unsigned int param_memset(void* a0, unsigned int n)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax

 memset(a0, 0, n);
 if (!n)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += *((char *)a0 + v0);
 v0 += 1;
 } while (n != v0);
 return v1;
}


// Function: call_memset at 0x401a1b
unsigned int call_memset()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401a1e
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned int ptr1; // eax
 unsigned int ptr2; // eax

 ptr1 = (unsigned int)strchr(a0, a1);
 ptr2 = (unsigned int)strstr(a0, a2);
 return (-(ptr1 < 1) | ptr1 - (unsigned int)a0) + (-(ptr2 < 1) | ptr2 - (unsigned int)a0);
}


// Function: call_strchr_strstr at 0x401a78
unsigned int call_strchr_strstr()
{
 return 15;
}


// Function: test_standard_library_functions at 0x401a7e
extern char g_403074[];
extern char g_40308f[];
extern char g_4030aa[];
extern char g_4030c6[];
extern char g_4030e2[];
extern char g_4030fe[];
extern char g_40311a[];
extern char g_403137[];
extern char g_403153[];
extern char g_40316f[];
extern char g_40318b[];
extern char g_4031a6[];
extern char g_40336c[];

int test_standard_library_functions()
{
 char *v0; // [bp-0x44], Other Possible Types: unsigned int
 char *v1; // [bp-0x40]
 char v2; // [bp-0x34]
 char v3[8]; // [bp-0x30]
 char v4[24]; // [bp-0x28]

 puts(&g_40336c);
 strncpy(v4, "HelloLib", 8);
 strlen(&v3);
 printf((char *)&g_403074);
 printf((char *)&g_40308f);
 printf((char *)&g_4030aa);
 printf((char *)&g_4030c6);
 call_memcmp();
 printf((char *)&g_4030e2);
 v0 = "Test";
 printf("Value: %d, Name: %s\n", 0, "Test");
 printf((char *)&g_4030fe);
 v1 = &v2;
 v0 = &v3[0];
 printf((char *)&g_40311a);
 param_fopen_fclose("/etc/passwd");
 printf((char *)&g_403137);
 param_fread_fwrite("/tmp/binbench_test_tmp");
 printf((char *)&g_403153);
 param_malloc_free(10);
 printf((char *)&g_40316f);
 printf((char *)&g_40318b);
 return printf((char *)&g_4031a6);
}


// Function: param_linux_syscall at 0x401c2f
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


// Function: call_linux_syscall at 0x401c78
unsigned int call_linux_syscall()
{
 return param_linux_syscall("/etc/passwd") >> 31 | 42;
}


// Function: param_win32_api at 0x401ca1
unsigned int param_win32_api(unsigned int a0)
{
 unsigned int v4; // ebx
 unsigned int v5; // esi
 char v0; // [bp-0x64]
 char v1; // [bp-0x38]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 if (stat(a0, &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: call_win32_api at 0x401ce7
unsigned int call_win32_api()
{
 unsigned int v5; // ebx
 unsigned int v6; // esi
 char v0; // [bp-0x64]
 char v1; // [bp-0x38]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v5;
 v2 = v6;
 if (stat("/etc/passwd", &v0) < 0)
 return 4294967295;
 return (*((int *)&v1) > 0 ? 42 : 4294967294);
}


// Function: param_fork_exec at 0x401d30
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int pid; // eax
 unsigned int result; // [bp-0x10]
 unsigned int v1[1]; // [bp-0x8]

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
 else if (waitpid(pid, &v1, 0) >= 0)
 {
 return 4294967293;
 }
 else
 {
 return 4294967294;
 }
}


// Function: call_fork_exec at 0x401d9f
unsigned int call_fork_exec()
{
 return -(0 < param_fork_exec("/bin/true", 0)) | 42;
}


// Function: param_pipe_communication at 0x401dcf
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
 return ((char)_ccall(15, 15, count, 0, 0) ? 42 : 4294967293);
 }
 else
 {
 close(v0);
 write(v1, "HelloPipe", 9);
 close(v1);
 _exit(0); /* do not return */
 }
}


// Function: call_pipe_communication at 0x401ea5
unsigned int call_pipe_communication()
{
 return param_pipe_communication();
}


// Function: param_socket_create at 0x401ebf
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
 *((unsigned int *)&v1.sin_addr) = 0;
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


// Function: call_socket_create at 0x401f8c
unsigned int call_socket_create()
{
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x401fa6
int param_shmget_shmat()
{
 unsigned int v2; // eax
 unsigned int v3; // esi
 unsigned int v4; // eax
 unsigned int v5; // eax
 struct_0 *ptr; // eax
 unsigned int len; // [bp-0x14]

 v2 = open("/tmp/binbench_shm", 66, 438);
 v3 = 4294967295;
 if (v2 >= 0)
 {
 close(v2);
 v4 = ftok("/tmp/binbench_shm", 42);
 if ((int)v4 >= 0)
 {
 v5 = shmget(v4, 0x1000, 950);
 if ((int)v5 >= 0)
 {
 ptr = shmat(v5, 0, 0);
 if ((int)ptr != -1)
 {
 ptr->field_0 = 1918986323;
 ptr->field_4 = 1699570789;
 ptr->field_8 = 2037542765;
 len = 16;
 shmdt(ptr);
 shmctl(v5, 0, 0);
 return len;
 }
 v3 = 4294967293;
 }
 else
 {
 v3 = 4294967294;
 }
 }
 }
 return v3;
}


// Function: call_shmget_shmat at 0x40208a
unsigned int call_shmget_shmat()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 return (param_shmget_shmat() <= 0 ? 4294967295 : 42);
}


// Function: param_signal_handling at 0x4020b1
extern unsigned int signal_number;
extern unsigned int signal_received;

unsigned int param_signal_handling()
{
 unsigned int v1; // esi
 unsigned int v2; // esi
 unsigned int v3; // esi
 unsigned int v4; // esi
 unsigned int v5; // esi
 unsigned int v6; // esi

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


// Function: signal_handler at 0x4021fa
extern char _GLOBAL_OFFSET_TABLE_;
extern unsigned int signal_number;
extern unsigned int signal_received;

void signal_handler2(unsigned int a0)
{
 signal_received = 1;
 signal_number = a0;
}


// Function: call_signal_handling at 0x40221b
unsigned int call_signal_handling()
{
 return param_signal_handling();
}


// Function: test_system_calls at 0x402235
extern char g_403211[];
extern char g_40322d[];
extern char g_403249[];
extern char g_403265[];
extern char g_403281[];
extern char g_403390[];

int test_system_calls()
{
 unsigned int v3; // eax
 char v0; // [bp-0x6c]

 puts(&g_403390);
 param_linux_syscall("/etc/passwd");
 printf((char *)&g_4031f5);
 v3 = stat("/etc/passwd", &v0);
 printf((char *)&g_403211);
 param_fork_exec("/bin/true", 0);
 printf((char *)&g_40322d);
 param_pipe_communication();
 printf((char *)&g_403249);
 param_socket_create();
 printf((char *)&g_403265);
 printf((char *)&g_403281);
 param_signal_handling();
 return printf((char *)&g_40329d);
}


// Function: thread_compute at 0x40234e
void * thread_compute(void *a0)
{
 unsigned int *ptr; // eax

 ptr = malloc(4);
 *(ptr) = *((unsigned int *)a0) * *((unsigned int *)a0);
 return ptr;
}


// Function: param_pthread_create at 0x40237a
unsigned int param_pthread_create(unsigned int a0)
{
 char v0; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *v1; // [bp-0x10], Other Possible Types: char
 unsigned int v2; // [bp-0xc]

 v2 = a0;
 if (!pthread_create(&v0, 0, thread_compute, &v2))
 {
 pthread_join(v0, &v1);
 free(v1);
 return *(v1);
 }
 return 4294967295;
}


// Function: call_pthread_create at 0x4023e1
unsigned int call_pthread_create()
{
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402402
void * thread_sum(void *ptr_param)
{
 unsigned int *ptr = (unsigned int *)ptr_param;
 unsigned int v0; // esi
 unsigned int v1; // edi

 ptr[2] = 0;
 v0 = *(ptr);
 v1 = ptr[1] - v0;
 if (ptr[1] >= v0)
 {
 // Sum from v0 to ptr[1] = (n * (n+1)) / 2 where n = ptr[1]
 unsigned long long n = ptr[1];
 unsigned long long sum = n * (n + 1) / 2;
 ptr[2] = (unsigned int)sum;
 }
 return NULL;
}


// Function: param_pthread_join at 0x40243a
unsigned int param_pthread_join()
{
 unsigned int v12; // edi
 char *cur; // edi
 unsigned int v14; // ebp
 unsigned int v15; // esi
 unsigned int v0; // [bp-0x44]
 unsigned long v1; // [bp-0x40]
 unsigned int flag3; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int flag2; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v8; // [bp-0x1c]
 unsigned int v9; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 v12 = 0;
 result = 0;
 flag1 = 0;
 flag2 = 0;
 flag3 = 1;
 v3 = 10;
 v5 = 11;
 v6 = 20;
 v8 = 21;
 v9 = 30;
 v0 = thread_sum;
 while (!pthread_create((char *)&v1 + v12, 0, v0, &flag3))
 {
 v12 += 4;
 if (v12 == 12)
 {
 cur = &flag2;
 v14 = 0;
 v15 = 0;
 while (!pthread_join((&v1)[v14], 0))
 {
 v15 += *(cur);
 v14 += 1;
 cur += 3;
 if (v14 == 3)
 return v15;
 }
 return 4294967294;
 }
 }
 return 4294967295;
}


// Function: call_pthread_join at 0x4024f1
unsigned int call_pthread_join()
{
 return param_pthread_join();
}


// Function: thread_increment at 0x40250b
extern unsigned int counter_mutex;
extern unsigned int shared_counter;

void * thread_increment(void *ptr_param)
{
 unsigned int *ptr = (unsigned int *)ptr_param;
 unsigned int v0; // esi
 unsigned int i; // esi
 unsigned int v2; // esi

 v0 = *(ptr);
 if (v0 <= 0)
 return NULL;
 do
 {
 i = v0;
 pthread_mutex_lock((pthread_mutex_t *)&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock((pthread_mutex_t *)&counter_mutex);
 usleep(1000);
 v2 = i - 1;
 v0 = v2;
 } while (i != 1);
 return NULL;
}


// Function: param_mutex_lock at 0x40255b
extern unsigned int shared_counter;

unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int i; // edi
 unsigned int *ptr; // eax
 unsigned int *v3; // ebp
 unsigned int *v4; // esi
 unsigned int v5; // edi
 unsigned int v6; // edi
 unsigned int v7; // esi

 i = a0;
 ptr = malloc(i * 4);
 if (!ptr)
 return 4294967295;
 v3 = ptr;
 shared_counter = 0;
 if (i > 0)
 {
 v4 = v3;
 ptr = v4;
 do
 {
 v5 = i;
 if (pthread_create(v4, 0, thread_increment, &a1))
 {
 free(ptr);
 return 4294967294;
 }
 } while ((v4 += 4, v6 = v5 - 1, i = v5 - 1, v5 != 1));
 i = a0;
 v3 = ptr;
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
 return (shared_counter == a1 * i ? 42 : 4294967293);
}


// Function: call_mutex_lock at 0x402631
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402655
extern unsigned int cond;
extern unsigned int cond_mutex;
extern char data;
extern char i;

void * consumer_thread(void *unused)
{
 unsigned int *ptr; // eax

 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 if (!i)
 {
 do
 {
 pthread_cond_wait((pthread_cond_t *)&cond, (pthread_mutex_t *)&cond_mutex);
 } while (i != 1);
 }
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 ptr = malloc(4);
 *(ptr) = (!data ? 0 : 42);
 return ptr;
}


// Function: producer_thread at 0x4026c7
extern unsigned int cond;
extern unsigned int cond_mutex;
extern char data;
extern char ready;

void * producer_thread(void *unused)
{
 sleep(1);
 pthread_mutex_lock((pthread_mutex_t *)&cond_mutex);
 data = 1;
 ready = 1;
 pthread_cond_signal((pthread_cond_t *)&cond);
 pthread_mutex_unlock((pthread_mutex_t *)&cond_mutex);
 return NULL;
}


// Function: param_condition_variable at 0x40271c
extern char data;
extern char ready;

unsigned int param_condition_variable()
{
 char v0; // [bp-0x14], Other Possible Types: unsigned int
 char v1; // [bp-0x10], Other Possible Types: unsigned int
 char v2; // [bp-0xc]

 ready = 0;
 data = 0;
 if (pthread_create(&v0, 0, consumer_thread, 0))
 {
 return 4294967295;
 }
 else if (pthread_create(&v1, 0, producer_thread, 0))
 {
 pthread_cancel(v0);
 return 4294967294;
 }
 else
 {
 pthread_join(v0, &v2);
 pthread_join(v1, 0);
 free(*((int *)&v2));
 return *((int *)*((int *)&v2));
 }
}


// Function: call_condition_variable at 0x4027c6
unsigned int call_condition_variable()
{
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4027e0

void * thread_atomic_increment(void *a0_param)
{
 unsigned int *a0 = (unsigned int *)a0_param;
 unsigned int i; // ecx
 unsigned int expected;
 unsigned int desired;

 if (*(a0) <= 0)
 return NULL;
 i = 0;
 do
 {
 atomic_fetch_add((_Atomic unsigned int *)&atomic_counter, 1);
 expected = i + 1000;
 desired = i;
 atomic_compare_exchange_strong((_Atomic unsigned int *)&atomic_counter, &expected, desired);
 i += 1;
 } while (i != *(a0));
 return NULL;
}


// Function: thread_atomic_load_store at 0x40281b
extern unsigned int atomic_counter;

void * thread_atomic_load_store(void *unused)
{
 atomic_exchange((_Atomic unsigned int *)&atomic_counter, atomic_counter + 100);
 return NULL;
}


// Function: param_atomic_ops at 0x402839
extern unsigned int atomic_counter;

unsigned int param_atomic_ops(unsigned int i)
{
 unsigned int *thread_array; // eax
 unsigned int v4; // ebp
 unsigned int *v5; // esi
 unsigned int *v6; // esi
 unsigned int v7; // ebp
 unsigned int *v8; // esi
 unsigned int v9; // ebp
 unsigned int v10; // esi
 char v1; // [bp-0x14]
 char v2; // [bp+0x8]

 thread_array = malloc(i * 4);
 if (!thread_array)
 return 4294967295;
 atomic_exchange((_Atomic unsigned int *)&atomic_counter, 0);
 if (i > 0)
 {
 v4 = i;
 v5 = thread_array;
 do
 {
 v6 = v5;
 v7 = v4;
 if (pthread_create(v6, 0, thread_atomic_increment, &v2))
 {
 free(thread_array);
 return 4294967294;
 }
 } while ((v8 = v6 + 4, v9 = v7 - 1, v4 = v7 - 1, v5 = v6 + 4, v7 != 1));
 }
 if (!pthread_create(&v1, 0, thread_atomic_load_store, 0))
 pthread_join(*((int *)&v1), 0);
 if (i > 0)
 {
 v10 = 0;
 do
 {
 pthread_join(thread_array[v10], 0);
 v10 += 1;
 } while (i != v10);
 }
 free(thread_array);
 return ((char)_ccall(15, 15, atomic_counter, 0, 0) ? 42 : 4294967293);
}


// Function: call_atomic_ops at 0x402939
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: thread_tls_test at 0x40295d
void* thread_tls_test(void *a0)
{
 unsigned long v0; // ldt
 unsigned long v1; // gdt
 unsigned short v2; // gs
 unsigned int v3; // esi
 unsigned int v4; // edi
 unsigned int *ptr; // eax

 v3 = 50;
 v4 = v3 + 50;
 ptr = malloc(8);
 ptr[0] = v3;
 ptr[1] = v4;
 return ptr;
}


// Function: param_thread_local_storage at 0x4029b0
unsigned int param_thread_local_storage(unsigned int i)
{
 unsigned int v4; // esi
 unsigned int *ptr; // edi
 unsigned int v14; // ebp
 unsigned int v15; // esi
 unsigned int result_array[2]; // eax
 unsigned int v17; // edi
 unsigned int *thread_handles; // ecx
 unsigned int index; // esi
 char *thread_name; // eax
 unsigned int j; // esi
 unsigned int *v10; // ebp
 unsigned int *v11; // ebp
 unsigned int *v12; // ebp
 unsigned int v13; // edi
 unsigned int *p; // [bp-0x20]
 unsigned int *addr; // [bp-0x1c]
 char *v2; // [bp-0x18]
 char v3; // [bp-0x14]

 v4 = i * 4;
 ptr = malloc(v4);
 addr = malloc(v4);
 if (!addr)
 return 4294967295;
 p = ptr;
 if (!p)
 return 4294967295;
 addr = ptr;
 if (i > 0)
 {
 index = 0;
 v2 = "Thread-%d";
 do
 {
 thread_name = malloc(16);
 p[index] = thread_name;
 snprintf(thread_name, 16, v2, index);
 index += 1;
 } while (i != index);
 if (i > 0)
 {
 j = 0;
 v10 = addr;
 do
 {
 v11 = v10;
 if (pthread_create(v11, 0, thread_tls_test, p[j]))
 {
 v17 = 4294967295;
 do
 {
 free(p[v17]);
 v17 += 1;
 } while (j != v17);
 free(p);
 free(addr);
 return 4294967294;
 }
 } while ((j += 1, v12 = v11 + 4, v10 = v11 + 4, i != j));
 if (i > 0)
 {
 v13 = 0;
 v14 = 0;
 v15 = 0;
 do
 {
 pthread_join(addr[v13], &v3);
 unsigned int *thread_result = *((unsigned int **)&v3);
 v15 += thread_result[0];
 v14 += thread_result[1];
 free(thread_result);
 free(p[v13]);
 v13 += 1;
 } while (i != v13);
 goto LABEL_402add;
 }
 }
 }
 v15 = 0;
 v14 = 0;
LABEL_402add:
 free(p);
 free(addr);
 return (!(i * 150 ^ v14) && !(i * 100 ^ v15) ? 42 : 4294967293);
}


// Function: call_thread_local_storage at 0x402b50
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x402b71
extern char g_4032c3[];
extern char g_4032fc[];
extern char g_403318[];
extern char g_403350[];

int test_thread_concurrency()
{
 puts(&g_4033ab);
 param_pthread_create(7);
 printf((char *)&g_4032c3);
 param_pthread_join();
 printf((char *)&g_4032df);
 param_mutex_lock(4, 1000);
 printf((char *)&g_4032fc);
 param_condition_variable();
 printf((char *)&g_403318);
 param_atomic_ops(4);
 printf((char *)&g_403334);
 param_thread_local_storage(4);
 return printf((char *)&g_403350);
}


// Function: main at 0x402c45
unsigned int main()
{
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_402c6b at 0x402c6b
void sub_402c6b()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */


// Function: sub_402cb2 at 0x402cb2
void sub_402cb2()
{
}



/* CRT stub function _fini removed by preprocessor */


