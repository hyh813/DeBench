// Angr Decompilation of 6_clang_O0_g
// Platform: X86

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <signal.h>
#include <errno.h>
#include <sys/mman.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/syscall.h>
#include <fcntl.h>
#include <strings.h>
#include <ctype.h>
#include <sys/select.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    char padding_0[264];
    unsigned int field_108;
    char padding_1[52];
    unsigned int field_144;
} struct_0;

void (*g_406ff4)(void) = NULL;
static unsigned int _GLOBAL_OFFSET_TABLE_ = 0;

// Global message strings
char g_4040aa[] = "Testing standard library functions...\n";
char g_404250[] = "Testing system calls...\n";
char g_40433a[] = "Testing thread concurrency...\n";
char g_msg1[] = "strcpy\n";
char g_msg2[] = "strcmp\n";
char g_msg3[] = "strlen\n";
char g_msg4[] = "memcpy\n";
char g_msg5[] = "memcmp\n";
char g_msg6[] = "printf\n";
char g_msg7[] = "scanf\n";
char g_msg8[] = "fopen\n";
char g_msg9[] = "fread\n";
char g_msg10[] = "malloc\n";
char g_msg11[] = "memset\n";
char g_msg12[] = "strchr\n";
char g_msg13[] = "done\n";
char g_sys1[] = "linux_syscall\n";
char g_sys2[] = "win32_api\n";
char g_sys3[] = "fork_exec\n";
char g_sys4[] = "pipe\n";
char g_sys5[] = "socket\n";
char g_sys6[] = "shmget\n";
char g_sys7[] = "signal\n";
char g_sys8[] = "syscalls done\n";
char g_thr1[] = "pthread_create\n";
char g_thr2[] = "pthread_join\n";
char g_thr3[] = "mutex_lock\n";
char g_thr4[] = "cond_var\n";
char g_thr5[] = "atomic_ops\n";
char g_thr6[] = "tls\n";
char g_thr7[] = "threads done\n";

// Forward declarations
void signal_handler(int);
unsigned int atomic_exchange_add(unsigned int*, unsigned int);
unsigned int atomic_compare_exchange(unsigned int*, unsigned int, unsigned int);
unsigned int atomic_exchange(unsigned int*, unsigned int);
void* _ccall(unsigned long, unsigned long, unsigned int, unsigned int);


void* thread_compute(void *p);
void* thread_sum(void *arg);
void* thread_increment(void *arg);
void* consumer_thread(void *arg);
void* producer_thread(void *arg);
void* thread_atomic_increment(void *arg);
void* thread_atomic_load_store(void *arg);
void* thread_tls_test(void *a0);
unsigned int call_strcpy(void);
int call_strcmp(void);
unsigned int call_strlen(void);
int call_memcpy(void);
int call_memcmp(void);
unsigned int call_printf(void);
unsigned int call_scanf(void);
unsigned int call_fopen_fclose(void);
unsigned int call_fread_fwrite(void);
unsigned int call_malloc_free(void);
unsigned int call_memset(void);
unsigned int call_strchr_strstr(void);
int test_standard_library_functions(void);
unsigned int call_linux_syscall(void);
unsigned int call_win32_api(void);
unsigned int call_fork_exec(void);
unsigned int call_pipe_communication(void);
unsigned int call_socket_create(void);
unsigned int call_shmget_shmat(void);
unsigned int call_signal_handling(void);
int test_system_calls(void);
unsigned int call_pthread_create(void);
unsigned int call_pthread_join(void);
unsigned int call_mutex_lock(void);
unsigned int call_condition_variable(void);
unsigned int call_atomic_ops(void);
unsigned int call_thread_local_storage(void);
int test_thread_concurrency(void);

// Implementations of atomic operations
unsigned int atomic_exchange_add(unsigned int* ptr, unsigned int val)
{
    unsigned int old = *ptr;
    *ptr = old + val;
    return old;
}

unsigned int atomic_compare_exchange(unsigned int* ptr, unsigned int expected, unsigned int desired)
{
    if (*ptr == expected)
    {
        *ptr = desired;
        return expected;
    }
    return *ptr;
}

unsigned int atomic_exchange(unsigned int* ptr, unsigned int val)
{
    unsigned int old = *ptr;
    *ptr = val;
    return old;
}

void* _ccall(unsigned long a0, unsigned long a1, unsigned int a2, unsigned int a3)
{
    static unsigned int tls_value = 0;
    return &tls_value;
}

// External variables
// Define external variables
unsigned int signal_number = 0;
unsigned int signal_received = 0;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond_var = PTHREAD_COND_INITIALIZER;
unsigned int data = 0;
unsigned int ready = 0;
unsigned int atomic_counter = 0;




// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_4013d0 at 0x4013d0
int sub_4013d0()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40140b at 0x40140b
void sub_40140b()
{
}


// Function: sub_40140c at 0x40140c
void sub_40140c()
{
 return;
}









/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401453 at 0x401453
void sub_401453()
{
}






/* CRT stub function register_tm_clones removed by preprocessor */








/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */











// Function: sub_401551 at 0x401551
int sub_401551()
{
 return 0;
}


// Function: param_strcpy at 0x401560
int param_strcpy(char *a0, char *a1)
{
 strcpy(a0, a1);
 return strlen(a0);
}


// Function: sub_4015a3 at 0x4015a3
int sub_4015a3()
{
 return call_strcpy();
}


// Function: call_strcpy at 0x4015b0
unsigned int call_strcpy(void)
{
 unsigned int dst; // [bp-0x2c]
 char v1[32]; // [bp-0x28]

 dst = param_strcpy(&v1, "HelloLib");
 return dst;
}


// Function: sub_4015e4 at 0x4015e4
int sub_4015e4()
{
 return 0;
}


// Function: param_strcmp at 0x4015f0
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = strcmp(a0, a1);
 if (v1 <= 0)
 {
 v0 = (v1 < 0 ? 4294967295 : 0);
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_401651 at 0x401651
int sub_401651()
{
 return call_strcmp();
}


// Function: call_strcmp at 0x401660
int call_strcmp(void)
{
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = param_strcmp("abc", "def");
 v2 = param_strcmp("test", "test");
 v1 = param_strcmp("hello", "world");
 return v3 + v2 + v1;
}


// Function: sub_4016d6 at 0x4016d6
int sub_4016d6()
{
 return 0;
}


// Function: param_strlen at 0x4016e0
int param_strlen(char *a0)
{
 unsigned int len; // [bp-0xc]

 len = strlen(a0);
 return len;
}


// Function: sub_40170e at 0x40170e
int sub_40170e()
{
 return call_strlen();
}


// Function: call_strlen at 0x401710
unsigned int call_strlen(void)
{
 char *v0; // [bp-0xc]

 v0 = "BinBench2025";
 return param_strlen(v0);
}


// Function: sub_40173d at 0x40173d
int sub_40173d()
{
 return 0;
}


// Function: param_memcpy at 0x401740
int param_memcpy(void* a0, void* a1, unsigned int n)
{
 memcpy(a0, a1, n);
 return n;
}


// Function: sub_40177e at 0x40177e
int sub_40177e()
{
 return call_memcpy();
}


// Function: call_memcpy at 0x401780
int call_memcpy()
{
 char v1[8]; // [bp-0x30]
 char v2[8]; // [bp-0x28]
 unsigned int v3; // [bp-0x20]
 char v4[20]; // [bp-0x1c]

 memcpy(v4, "\n", 20);
 memset(v1, 0, 20);
 param_memcpy(v1, v4, 20);
 memset(v2, 0, 8);
 v3 = 0;
 return *((int *)v1) + *((int *)v2) + v3;
}


// Function: sub_4017ff at 0x4017ff
int sub_4017ff()
{
 return 0;
}


// Function: param_memcmp at 0x401800
unsigned int param_memcmp(void* a0, void* a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = memcmp(a0, a1, a2);
 if (v1 <= 0)
 {
 v0 = (v1 < 0 ? 4294967295 : 0);
 return v0;
 }
 v0 = 1;
 return v0;
}


// Function: sub_40186c at 0x40186c
int sub_40186c()
{
 return call_memcmp();
}


// Function: call_memcmp at 0x401870
int call_memcmp()
{
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int flag2; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int result; // [bp-0x14]

 result = 1;
 flag1 = 1;
 v7 = 2;
 v8 = 4;
 flag2 = 1;
 v4 = 2;
 v5 = 3;
 v2 = param_memcmp(&result, &flag1, 12);
 v1 = param_memcmp(&result, &flag2, 12);
 return v2 + v1;
}


// Function: param_printf at 0x401920
unsigned int param_printf(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // [bp-0xc]

 v2 = printf("Value: %d, Name: %s\n", a0, a1);
 return v2;
}


// Function: sub_401961 at 0x401961
int sub_401961()
{
 return call_printf();
}


// Function: call_printf at 0x401970
unsigned int call_printf()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_printf(42, "Test");
 return v0;
}


// Function: sub_4019a5 at 0x4019a5
int sub_4019a5()
{
 return 0;
}


// Function: param_scanf at 0x4019b0
unsigned int param_scanf(char *a0)
{
 int v3; // [bp-0x18]
 int v4; // [bp-0x14]
 unsigned int v2; // [bp-0x1c]
 unsigned int v5; // [bp-0x10]

 v2 = sscanf(a0, "%d,%d", &v3, &v4);
 v5 = (v2 == 2 ? v4 + v3 : 4294967295);
 return v5;
}


// Function: sub_401a16 at 0x401a16
int sub_401a16()
{
 return call_scanf();
}


// Function: call_scanf at 0x401a20
unsigned int call_scanf()
{
 return param_scanf("123,456");
}


// Function: sub_401a45 at 0x401a45
int sub_401a45()
{
 return 0;
}


// Function: param_fopen_fclose at 0x401a50
unsigned int param_fopen_fclose(char *a0)
{
 unsigned int v1; // [bp-0x14]
 FILE *fp; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 fp = fopen(a0, "r");
 if (fp != NULL)
 {
 v1 = (unsigned int)fileno(fp);
 fclose(fp);
 v3 = v1;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: sub_401ac5 at 0x401ac5
int sub_401ac5()
{
 return call_fopen_fclose();
}


// Function: call_fopen_fclose at 0x401ad0
unsigned int call_fopen_fclose()
{
 unsigned int v3 = 0; // ebx
 unsigned int fp; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = v3;
 fp = param_fopen_fclose("/etc/passwd");
 return (fp != 4294967295 ? 42 : 4294967295);
}


// Function: sub_401b0d at 0x401b0d
int sub_401b0d()
{
 return 0;
}


// Function: param_fread_fwrite at 0x401b10
unsigned int param_fread_fwrite(char *a0)
{
 char v0; // [bp-0x49]
 void* v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int count; // [bp-0x3c]
 FILE *fp; // [bp-0x34]
 char v7[64]; // [bp-0x30]
 void* v8; // [bp-0x10]
 unsigned int v9; // [bp-0xc]

 v8 = "BinBench Test Data";
 fp = fopen(a0, "w+");
 if (fp == NULL)
 {
 v9 = 4294967295;
 return v9;
 }
 v1 = v8;
 count = (unsigned int)fwrite(v1, 1, strlen(v8), fp);
 v2 = count;
 if (v2 != strlen(v8))
 {
 fclose(fp);
 v9 = 4294967294;
 return v9;
 }
 rewind(fp);
 count = (unsigned int)fread(v7, 1, count, fp);
 v7[count] = 0;
 fclose(fp);
 unlink(a0);
 v0 = 0;
 if (count == count)
 v0 = !strcmp(v7, (char*)v8);
 v9 = ((v0 & 1) ? 42 : 4294967293);
 return v9;
}


// Function: sub_401c7e at 0x401c7e
int sub_401c7e()
{
 return call_fread_fwrite();
}


// Function: call_fread_fwrite at 0x401c80
unsigned int call_fread_fwrite()
{
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: sub_401ca5 at 0x401ca5
int sub_401ca5()
{
 return 0;
}


// Function: param_malloc_free at 0x401cb0
unsigned int param_malloc_free(unsigned int a0)
{
 unsigned int v1; // [bp-0x18]
 unsigned int idx; // [bp-0x14]
 unsigned int *ptr; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 ptr = (unsigned int*)malloc(a0 * 4);
 if (ptr == NULL)
 {
 v4 = 4294967295;
 return v4;
 }
 for (idx = 0; idx < a0; idx += 1)
 {
 ptr[idx] = idx * 10;
 }
 v1 = *(ptr) + ptr[1];
 free(ptr);
 ptr = NULL;
 v4 = v1;
 return v4;
}


// Function: sub_401d56 at 0x401d56
int sub_401d56()
{
 return call_malloc_free();
}


// Function: call_malloc_free at 0x401d60
unsigned int call_malloc_free()
{
 return param_malloc_free(10);
}


// Function: sub_401d83 at 0x401d83
int sub_401d83()
{
 return 0;
}


// Function: param_memset at 0x401d90
unsigned int param_memset(void *a0, int val, unsigned int n)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned char *buf = (unsigned char*)a0;

 memset(a0, val, n);
 v1 = 0;
 for (i = 0; i < n; i += 1)
 {
 v1 += buf[i];
 }
 return v1;
}


// Function: sub_401e0c at 0x401e0c
int sub_401e0c()
{
 return call_memset();
}


// Function: call_memset at 0x401e10
unsigned int call_memset()
{
 unsigned int idx; // [bp-0x34]
 char v2[40]; // [bp-0x30]
 char v3; // [bp-0xc]

 for (idx = 0; idx < 10; idx += 1)
 {
 *((unsigned int *)&v2[4 * idx]) = 255;
 }
 param_memset(v2, 0, 40);
 v3 = 0;
 return *((int *)&v2[0]) + *((int *)&v3);
}


// Function: sub_401e72 at 0x401e72
int sub_401e72()
{
 return 0;
}


// Function: param_strchr_strstr at 0x401e80
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v3; // [bp-0x18]
 char *ptr1; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 char *ptr2; // [bp-0xc]

 ptr1 = strchr(a0, a1);
 v1 = (!ptr1 ? 4294967295 : (unsigned int)(ptr1 - a0));
 v5 = v1;
 ptr2 = strstr(a0, a2);
 v0 = (!ptr2 ? 4294967295 : (unsigned int)(ptr2 - a0));
 v3 = v0;
 return v5 + v3;
}


// Function: sub_401f33 at 0x401f33
int sub_401f33()
{
 return call_strchr_strstr();
}


// Function: call_strchr_strstr at 0x401f40
unsigned int call_strchr_strstr(void)
{
 unsigned int ptr; // [bp-0x10]
 char *v1; // [bp-0xc]

 v1 = "Hello BinBench Test";
 ptr = param_strchr_strstr(v1, 66, "Bench");
 return ptr;
}


// Function: sub_401f85 at 0x401f85
int sub_401f85()
{
 return test_standard_library_functions();
}


// Function: test_standard_library_functions at 0x401f90

int test_standard_library_functions()
{
 unsigned int dst; // [bp-0x18]

 printf(g_4040aa);
 dst = call_strcpy();
 printf(g_msg1);
 dst = call_strcmp();
 printf(g_msg2);
 dst = call_strlen();
 printf(g_msg3);
 dst = call_memcpy();
 printf(g_msg4);
 dst = call_memcmp();
 printf(g_msg5);
 dst = call_printf();
 printf(g_msg6);
 dst = call_scanf();
 printf(g_msg7);
 dst = call_fopen_fclose();
 printf(g_msg8);
 dst = call_fread_fwrite();
 printf(g_msg9);
 dst = call_malloc_free();
 printf(g_msg10);
 dst = call_memset();
 printf(g_msg11);
 dst = call_strchr_strstr();
 return printf(g_msg13);
}


// Function: sub_402116 at 0x402116
int sub_402116()
{
 return 0;
}


// Function: param_linux_syscall at 0x402120
unsigned int param_linux_syscall(char *a0)
{
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v3 = open(a0, 0);
 if (v3 >= 0)
 {
 close(v3);
 v4 = v3;
 return v4;
 }
 v4 = -errno;
 return v4;
}


// Function: sub_40219e at 0x40219e
int sub_40219e()
{
 return call_linux_syscall();
}


// Function: call_linux_syscall at 0x4021a0
unsigned int call_linux_syscall(void)
{
 unsigned int v3 = 0; // ebx
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = v3;
 v0 = param_linux_syscall("/etc/passwd");
 return (v0 >= 0 ? 42 : 4294967295);
}


// Function: sub_4021dd at 0x4021dd
int sub_4021dd()
{
 return 0;
}


// Function: param_win32_api at 0x4021e0
unsigned int param_win32_api(char *a0)
{
 struct stat v0; // [bp-0x64]
 unsigned int v2; // [bp-0xc]

 if (stat(a0, &v0) >= 0)
 {
 v2 = (v0.st_size > 0 ? 42 : 4294967294);
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: sub_40223c at 0x40223c
int sub_40223c()
{
 return call_win32_api();
}


// Function: call_win32_api at 0x402240
unsigned int call_win32_api()
{
 return param_win32_api("/etc/passwd");
}


// Function: sub_402265 at 0x402265
int sub_402265()
{
 return 0;
}


// Function: param_fork_exec at 0x402270
unsigned int param_fork_exec(char *a0, unsigned int a1)
{
 unsigned int v2; // [bp-0x1c]
 int v3[1]; // [bp-0x18]
 pid_t pid; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 pid = fork();
 if (pid < 0)
 {
 v5 = 4294967295;
 return v5;
 }
 else if (!pid)
 {
 execl(a0, a0, (char *)0);
 _exit(127); /* do not return */
 }
 else
 {
 v2 = waitpid(pid, v3, 0);
 v5 = (v2 < 0 ? 4294967294 : (!(*(v3) & 127) ? (*(v3) & 0xff00) >> 8 : 4294967293));
 return v5;
 }
}


// Function: sub_402355 at 0x402355
int sub_402355()
{
 return call_fork_exec();
}


// Function: call_fork_exec at 0x402360
unsigned int call_fork_exec()
{
 unsigned int v3; // ebx
 unsigned int pid; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = v3;
 pid = param_fork_exec("/bin/true", 0);
 return (!pid ? 42 : 4294967295);
}


// Function: sub_4023a7 at 0x4023a7
int sub_4023a7()
{
 return 0;
}


// Function: param_pipe_communication at 0x4023b0
unsigned int param_pipe_communication()
{
 int pipefd[2]; // [bp-0x44]
 unsigned int count; // [bp-0x40]
 pid_t pid; // [bp-0x38]
 char v6; // [bp-0x34]
 unsigned int v9; // [bp-0xc]

 if (pipe(pipefd) < 0)
 {
 v9 = 4294967295;
 return v9;
 }
 pid = fork();
 if (pid < 0)
 {
 v9 = 4294967294;
 return v9;
 }
 else if (!pid)
 {
 close(pipefd[0]);
 const char *msg = "Hello from child";
 write(pipefd[1], msg, strlen(msg));
 close(pipefd[1]);
 _exit(0); /* do not return */
 }
 else
 {
 close(pipefd[1]);
 count = read(pipefd[0], &v6, 31);
 v6 = 0;
 close(pipefd[0]);
 wait(NULL);
 v9 = (count > 0 ? 42 : 4294967293);
 return v9;
 }
}


// Function: sub_4024ef at 0x4024ef
int sub_4024ef()
{
 return call_pipe_communication();
}


// Function: call_pipe_communication at 0x4024f0
unsigned int call_pipe_communication()
{
 unsigned int v2 = 0; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return param_pipe_communication();
}


// Function: sub_40250c at 0x40250c
int sub_40250c()
{
 return 0;
}


// Function: param_socket_create at 0x402510
unsigned int param_socket_create()
{
 struct sockaddr_in v1; // [sp-0x24]
 unsigned int result; // [bp-0x14]
 int sock; // [bp-0x10]
 unsigned int v7; // [bp-0xc]

 sock = socket(AF_INET, SOCK_STREAM, 0);
 if (sock < 0)
 {
 v7 = 4294967295;
 return v7;
 }
 result = 1;
 if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &result, 4) < 0)
 {
 close(sock);
 v7 = 4294967294;
 return v7;
 }
 memset(&v1, 0, sizeof(v1));
 v1.sin_family = AF_INET;
 v1.sin_port = htons(0);
 v1.sin_addr.s_addr = 0;
 if (bind(sock, (struct sockaddr*)&v1, sizeof(v1)) < 0)
 {
 close(sock);
 v7 = 4294967293;
 return v7;
 }
 else if (listen(sock, 5) < 0)
 {
 close(sock);
 v7 = 0xfffffffc;
 return v7;
 }
 else
 {
 close(sock);
 v7 = 42;
 return v7;
 }
}


// Function: sub_40268d at 0x40268d
int sub_40268d()
{
 return call_socket_create();
}


// Function: call_socket_create at 0x402690
unsigned int call_socket_create(void)
{
 unsigned int v2 = 0; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return param_socket_create();
}


// Function: sub_4026ac at 0x4026ac
int sub_4026ac()
{
 return 0;
}


// Function: param_shmget_shmat at 0x4026b0
int param_shmget_shmat()
{
 unsigned int len; // [bp-0x24]
 char *ptr; // [bp-0x20]
 int v3; // [bp-0x1c]
 key_t v4; // [bp-0x18]
 int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 unsigned int v7; // [bp-0xc]

 v6 = "/tmp/binbench_shm";
 v5 = open(v6, O_RDWR | O_CREAT, 0666);
 if (v5 < 0)
 {
 v7 = 4294967295;
 return v7;
 }
 close(v5);
 v4 = ftok("/tmp", 42);
 if (v4 < 0)
 {
 v7 = 4294967295;
 return v7;
 }
 v3 = shmget(v4, 0x1000, IPC_CREAT | 0666);
 if (v3 < 0)
 {
 v7 = 4294967294;
 return v7;
 }
 ptr = shmat(v3, 0, 0);
 if (ptr != (void*)-1)
 {
 strcpy(ptr, "BinBench Test");
 len = strlen(ptr);
 shmdt(ptr);
 shmctl(v3, IPC_RMID, 0);
 v7 = len;
 return v7;
 }
 v7 = 4294967293;
 return v7;
}


// Function: sub_40281e at 0x40281e
int sub_40281e()
{
 return call_shmget_shmat();
}


// Function: call_shmget_shmat at 0x402820
unsigned int call_shmget_shmat()
{
 unsigned int v3 = 0; // ebx
 unsigned int v4 = 0; // eax
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = v3;
 v0 = v4;
 v0 = param_shmget_shmat();
 return (v0 > 0 ? 42 : 4294967295);
}


// Function: sub_402852 at 0x402852
int sub_402852()
{
 return 0;
}


// Function: param_signal_handling at 0x402860
unsigned int param_signal_handling()
{
 unsigned int v6; // eax
 unsigned int v7; // eax
 char v0; // [bp-0x16]
 char v1; // [bp-0x15]
 unsigned int signal_flags[100]; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 signal_flags[0] = 0;
 if (signal(10, signal_handler) == (void*)-1)
 {
 v4 = 4294967295;
 return v4;
 }
 else if (signal(14, signal_handler) == (void*)-1)
 {
 v4 = 4294967294;
 return v4;
 }
 else
 {
 signal_flags[64] = 0;
 raise(10);
 v3 = 1000;
  while (1)
 {
 v1 = 0;
 if (!signal_flags[64])
 {
 v6 = v3;
 v3 = v6 - 1;
 v1 = v6 > 0;
 }
 if (!(v1 & 1))
 break;
 usleep(1000);
 }
 if (!signal_flags[64])
 {
 v4 = 4294967293;
 return v4;
 }
 else if (signal_flags[65] != 10)
 {
 v4 = 0xfffffffc;
 return v4;
 }
 else
 {
 signal_flags[64] = 0;
 alarm(1);
 v3 = 2000;
  while (1)
 {
 v0 = 0;
 if (!signal_flags[64])
 {
 v7 = v3;
 v3 = v7 - 1;
 v0 = v7 > 0;
 }
 if (!(v0 & 1))
 break;
 usleep(1000);
 }
 if (signal_flags[64] && signal_flags[65] == 14)
 {
 signal(10, SIG_DFL);
 signal(14, SIG_DFL);
 v4 = 42;
 return v4;
 }
 v4 = 4294967291;
 return v4;
 }
 }
}


// Function: sub_402a63 at 0x402a63
void sub_402a63(unsigned int a0)
{
 signal_handler((int)a0);
}


// Function: signal_handler at 0x402a70
void signal_handler(int a0)
{
 signal_received = 1;
 signal_number = (unsigned int)a0;
}


// Function: sub_402a97 at 0x402a97
int sub_402a97()
{
 return call_signal_handling();
}


// Function: call_signal_handling at 0x402aa0
unsigned int call_signal_handling()
{
 unsigned int v2 = 0; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return param_signal_handling();
}


// Function: sub_402abc at 0x402abc
int sub_402abc()
{
 return test_system_calls();
}


// Function: test_system_calls at 0x402ac0

int test_system_calls()
{
 unsigned int pid; // [bp-0x18]

 printf(g_404250);
 pid = call_linux_syscall();
 printf(g_sys1);
 pid = call_win32_api();
 printf(g_sys2);
 pid = call_fork_exec();
 printf(g_sys3);
 pid = call_pipe_communication();
 printf(g_sys4);
 pid = call_socket_create();
 printf(g_sys5);
 pid = call_shmget_shmat();
 printf(g_sys6);
 pid = call_signal_handling();
 printf(g_sys7);
 return printf(g_sys8);
}


// Function: sub_402bb5 at 0x402bb5
int sub_402bb5()
{
 return 0;
}


// Function: thread_compute at 0x402bc0
void* thread_compute(void *p)
{
 unsigned int *ptr; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = *(unsigned int*)p;
 v1 = v2 * v2;
 ptr = malloc(4);
 *ptr = v1;
 return ptr;
}


// Function: sub_402c0e at 0x402c0e
int sub_402c0e()
{
 return 0;
}


// Function: param_pthread_create at 0x402c10
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v1; // [bp-0x20]
 unsigned int count; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18]
 pthread_t v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]
 unsigned int v4; // [bp-0x8]

 v4 = a0;
 count = pthread_create(&v5, 0, thread_compute, &v4);
 if (!count)
 {
 pthread_join(v5, (void**)&ptr);
 v1 = *ptr;
 free(ptr);
 v6 = v1;
 return v6;
 }
 v6 = 4294967295;
 return v6;
}


// Function: sub_402ca8 at 0x402ca8
int sub_402ca8()
{
 return call_pthread_create();
}


// Function: call_pthread_create at 0x402cb0
unsigned int call_pthread_create(void)
{
 return param_pthread_create(7);
}


// Function: sub_402cd3 at 0x402cd3
void sub_402cd3(unsigned int a0)
{
}


// Function: thread_sum at 0x402ce0
void* thread_sum(void *arg)
{
 unsigned int *ptr = (unsigned int*)arg;
 unsigned int i; // [bp-0xc]

 ptr[2] = 0;
 for (i = ptr[0]; i <= ptr[1]; i += 1)
 {
 ptr[2] = i + ptr[2];
 }
 return 0;
}


// Function: sub_402d31 at 0x402d31
int sub_402d31()
{
 return 0;
}


// Function: param_pthread_join at 0x402d40
unsigned int param_pthread_join()
{
 unsigned int idx; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 unsigned int i; // [bp-0x40]
 unsigned int data_arr[12]; // [bp-0x3c]
 pthread_t threads[3]; // [bp-0x18]
 unsigned int v12; // [bp-0xc]

 memset(data_arr, 0, sizeof(data_arr));
 data_arr[0] = 1;
 data_arr[1] = 10;
 data_arr[2] = 11;
 data_arr[3] = 20;
 data_arr[4] = 21;
 data_arr[5] = 30;
 for (i = 0; i < 3; i += 1)
 {
 if (pthread_create(&threads[i], 0, thread_sum, &data_arr[3 * i]))
 {
 v12 = 4294967295;
 return v12;
 }
 }
 v2 = 0;
 for (idx = 0; idx < 3; idx += 1)
 {
 if (pthread_join(threads[idx], 0))
 {
 v12 = 4294967294;
 return v12;
 }
 v2 += data_arr[3 * idx + 2];
 }
 v12 = v2;
 return v12;
}


// Function: sub_402e85 at 0x402e85
int sub_402e85()
{
 return call_pthread_join();
}


// Function: call_pthread_join at 0x402e90
unsigned int call_pthread_join()
{
 unsigned int v2 = 0; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return param_pthread_join();
}


// Function: sub_402eac at 0x402eac
int sub_402eac()
{
 return 0;
}


// Function: thread_increment at 0x402eb0
void* thread_increment(void *arg)
{
 unsigned int count = *(unsigned int*)arg;
 unsigned int i; // [bp-0x10]

 for (i = 0; i < count; i += 1)
 {
 pthread_mutex_lock(&cond_mutex);
 data = data + 1;
 pthread_mutex_unlock(&cond_mutex);
 usleep(1000);
 }
 return 0;
}


// Function: sub_402f3a at 0x402f3a
int sub_402f3a()
{
 return 0;
}


// Function: param_mutex_lock at 0x402f40
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // [bp-0x20]
 unsigned int j; // [bp-0x1c]
 unsigned int i; // [bp-0x18]
 pthread_t *ptr; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 ptr = (pthread_t*)malloc(a0 * sizeof(pthread_t));
 if (ptr == NULL)
 {
 v5 = 4294967295;
 return v5;
 }
 data = 0;
 for (i = 0; i < a0; i += 1)
 {
 if (pthread_create(&ptr[i], 0, thread_increment, &a1))
 {
 free(ptr);
 v5 = 4294967294;
 return v5;
 }
 }
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(ptr[j], 0);
 }
 free(ptr);
 v1 = a1 * a0;
 v5 = (data == v1 ? 42 : 4294967293);
 return v5;
}


// Function: sub_40308a at 0x40308a
int sub_40308a()
{
 return call_mutex_lock();
}


// Function: call_mutex_lock at 0x403090
unsigned int call_mutex_lock()
{
 return param_mutex_lock(4, 1000);
}


// Function: sub_4030bd at 0x4030bd
int sub_4030bd()
{
 return 0;
}


// Function: consumer_thread at 0x4030c0
void* consumer_thread(void *arg)
{
 unsigned int *ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 pthread_mutex_lock(&cond_mutex);
 while (!ready)
 {
 pthread_cond_wait(&cond_var, &cond_mutex);
 }
 v2 = data;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *ptr = v2;
 return ptr;
}


// Function: producer_thread at 0x403160
void* producer_thread(void *arg)
{
 sleep(1);
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = 1;
 pthread_cond_signal(&cond_var);
 pthread_mutex_unlock(&cond_mutex);
 return 0;
}


// Function: sub_4031d4 at 0x4031d4
int sub_4031d4()
{
 return 0;
}


// Function: param_condition_variable at 0x4031e0
unsigned int param_condition_variable()
{
 unsigned int v1; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18]
 pthread_t v3; // [bp-0x14]
 pthread_t v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 ready = 0;
 data = 0;
 if (pthread_create(&v3, 0, consumer_thread, 0))
 {
 v5 = 4294967295;
 return v5;
 }
 else if (pthread_create(&v4, 0, producer_thread, 0))
 {
 pthread_cancel(v3);
 v5 = 4294967294;
 return v5;
 }
 else
 {
 pthread_join(v3, (void**)&ptr);
 pthread_join(v4, 0);
 v1 = *ptr;
 free(ptr);
 v5 = v1;
 return v5;
 }
}


// Function: sub_4032e5 at 0x4032e5
int sub_4032e5()
{
 return call_condition_variable();
}


// Function: call_condition_variable at 0x4032f0
unsigned int call_condition_variable()
{
 unsigned int v2 = 0; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return param_condition_variable();
}


// Function: sub_40330c at 0x40330c
void sub_40330c(unsigned int a0)
{
}


// Function: thread_atomic_increment at 0x403310
void* thread_atomic_increment(void *arg)
{
 unsigned int count = *(unsigned int*)arg;
 unsigned int i; // [bp-0xc]

 for (i = 0; i < count; i += 1)
 {
 atomic_exchange_add(&atomic_counter, 1);
 }
 return 0;
}


// Function: sub_4033b6 at 0x4033b6
void sub_4033b6()
{
}


// Function: thread_atomic_load_store at 0x4033c0
void* thread_atomic_load_store(void *arg)
{
 unsigned int v1; // [bp-0xc]
 unsigned int v0; // [bp-0x10]

 v1 = atomic_counter;
 v0 = v1 + 100;
 atomic_exchange(&atomic_counter, v0);
 return 0;
}


// Function: sub_4033fd at 0x4033fd
int sub_4033fd()
{
 return 0;
}


// Function: param_atomic_ops at 0x403400
unsigned int param_atomic_ops(unsigned int a0)
{
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int j; // [bp-0x20]
 pthread_t v4; // [bp-0x1c]
 unsigned int i; // [bp-0x18]
 pthread_t *ptr; // [bp-0x10]
 unsigned int v8; // [bp-0xc]
 unsigned int count = 100; // [bp+0x8]

 ptr = (pthread_t*)malloc(a0 * sizeof(pthread_t));
 if (ptr == NULL)
 {
 v8 = 4294967295;
 return v8;
 }
 atomic_counter = 0;
 for (i = 0; i < a0; i += 1)
 {
 if (pthread_create(&ptr[i], 0, thread_atomic_increment, &count))
 {
 free(ptr);
 v8 = 4294967294;
 return v8;
 }
 }
 if (!pthread_create(&v4, 0, thread_atomic_load_store, 0))
 pthread_join(v4, 0);
 for (j = 0; j < a0; j += 1)
 {
 pthread_join(ptr[j], 0);
 }
 v1 = atomic_counter;
 v2 = v1;
 free(ptr);
 v8 = (v2 > 0 ? 42 : 4294967293);
 return v8;
}


// Function: sub_40359b at 0x40359b
int sub_40359b()
{
 return call_atomic_ops();
}


// Function: call_atomic_ops at 0x4035a0
unsigned int call_atomic_ops()
{
 unsigned int v0; // [bp-0x18]

 v0 = 500;
 return param_atomic_ops(4);
}


// Function: sub_4035cd at 0x4035cd
int sub_4035cd()
{
 return 0;
}


// Function: thread_tls_test at 0x4035d0
void* thread_tls_test(void *a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 char *str = (char*)a0;

 v2 = 100;
 v2 = v2 + 50;
 ptr = malloc(8);
 ptr[0] = v2;
 ptr[1] = v2;
 return ptr;
}


// Function: sub_40365b at 0x40365b
int sub_40365b()
{
 return 0;
}


// Function: param_thread_local_storage at 0x403660
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int ptr[2]; // [bp-0x34]
 unsigned int *v5; // [bp-0x30]
 unsigned int k; // [bp-0x2c]
 unsigned int v7; // [bp-0x28]
 unsigned int v8; // [bp-0x24]
 unsigned int l; // [bp-0x20]
 unsigned int j; // [bp-0x1c]
 unsigned int index; // [bp-0x18]
 pthread_t *addr; // [bp-0x14]
 char **p; // [bp-0x10]
 unsigned int v14; // [bp-0xc]

 addr = (pthread_t*)malloc(a0 * sizeof(pthread_t));
 p = (char**)malloc(a0 * sizeof(char*));
 if (addr != NULL && p != NULL)
 {
 for (index = 0; index < a0; index += 1)
 {
 p[index] = (char*)malloc(16);
 snprintf(p[index], 16, "Thread %d", index);
 }
 for (j = 0; j < a0; j += 1)
 {
 if (pthread_create(&addr[j], 0, thread_tls_test, p[j]))
 {
 for (l = 0; l <= j; l += 1)
 {
 free(p[l]);
 }
 free(p);
 free(addr);
 v14 = 4294967294;
 return v14;
 }
 }
 v8 = 0;
 v7 = 0;
 for (k = 0; k < a0; k += 1)
 {
 pthread_join(addr[k], (void**)&v5);
 ptr[0] = v5[0];
 v8 += ptr[0];
 v7 += v5[1];
 free(p[k]);
 }
 free(p);
 free(addr);
 v3 = a0 * 100;
 v2 = a0 * 150;
 v14 = ((v8 == v3 && v7 == v2) ? 42 : 4294967293);
 return v14;
 }
 if (p) free(p);
 if (addr) free(addr);
 v14 = 4294967295;
 return v14;
}


// Function: sub_4038db at 0x4038db
int sub_4038db()
{
 return call_thread_local_storage();
}


// Function: call_thread_local_storage at 0x4038e0
unsigned int call_thread_local_storage()
{
 return param_thread_local_storage(4);
}


// Function: sub_403903 at 0x403903
int sub_403903()
{
 return test_thread_concurrency();
}


// Function: test_thread_concurrency at 0x403910

int test_thread_concurrency()
{
 unsigned int count; // [bp-0x18]

 printf(g_40433a);
 count = call_pthread_create();
 printf(g_thr1);
 count = call_pthread_join();
 printf(g_thr2);
 count = call_mutex_lock();
 printf(g_thr3);
 count = call_condition_variable();
 printf(g_thr4);
 count = call_atomic_ops();
 printf(g_thr5);
 count = call_thread_local_storage();
 printf(g_thr6);
 return printf(g_thr7);
}


// Function: sub_4039e8 at 0x4039e8
int sub_4039e8()
{
 return 0;
}


// Function: main at 0x4039f0
unsigned int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = &_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return 0;
}


// Function: sub_403a2a at 0x403a2a
void sub_403a2a()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* CRT stub function _fini removed by preprocessor */


