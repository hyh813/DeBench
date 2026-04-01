// Angr Decompilation of 6_clang_O0_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <stddef.h>
#include <stdint.h>
#include <sys/auxv.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <pthread.h>

// Rotation left macro for decompiler output
#define __ROL__(value, bits) (((value) << (bits)) | ((value) >> (sizeof(value) * 8 - (bits))))

// Global string constants
extern char g_4039aa[];
extern char g_4039cf[];
extern char g_4039ea[];
extern char g_403a05[];
extern char g_403a21[];
extern char g_403a3d[];
extern char g_403a59[];
extern char g_403a75[];
extern char g_403a92[];
extern char g_403aae[];
extern char g_403aca[];
extern char g_403ae6[];
extern char g_403b01[];
extern char g_403b50[];
extern char g_403b6c[];
extern char g_403b88[];
extern char g_403ba4[];
extern char g_403bc0[];
extern char g_403bdc[];
extern char g_403bf8[];
extern char g_403c14[];
extern char g_403c3a[];
extern char g_403c59[];
extern char g_403c75[];
extern char g_403c92[];
extern char g_403cae[];
extern char g_403cca[];
extern char g_403ce6[];

// Global variable definitions
char g_4039aa[] = "[STRCPY] Result: %d\n";
char g_4039cf[] = "[STRCMP] Result: %d\n";
char g_4039ea[] = "[STRLEN] Result: %d\n";
char g_403a05[] = "[MEMCPY] Result: %d\n";
char g_403a21[] = "[MEMCMP] Result: %d\n";
char g_403a3d[] = "[PRINTF] Result: %d\n";
char g_403a59[] = "[SCANF] Result: %d\n";
char g_403a75[] = "[FOPEN] Result: %d\n";
char g_403a92[] = "[FREAD] Result: %d\n";
char g_403aae[] = "[MALLOC] Result: %d\n";
char g_403aca[] = "[MEMSET] Result: %d\n";
char g_403ae6[] = "[STRCHR] Result: %d\n";
char g_403b01[] = "[STRCHR] Total: %d\n";
char g_403b50[] = "[SYSCALL] Result: %d\n";
char g_403b6c[] = "[WIN32] Result: %d\n";
char g_403b88[] = "[FORK] Result: %d\n";
char g_403ba4[] = "[PIPE] Result: %d\n";
char g_403bc0[] = "[SOCKET] Result: %d\n";
char g_403bdc[] = "[SHM] Result: %d\n";
char g_403bf8[] = "[SIGNAL] Result: %d\n";
char g_403c14[] = "[SIGNAL] Total: %d\n";
char g_403c3a[] = "[PTHREAD_CREATE] Result: %d\n";
char g_403c59[] = "[PTHREAD_JOIN] Result: %d\n";
char g_403c75[] = "[MUTEX] Result: %d\n";
char g_403c92[] = "[CONDVAR] Result: %d\n";
char g_403cca[] = "[ATOMIC] Result: %d\n";
char g_403ce6[] = "[TLS] Total: %d\n";

// Thread synchronization primitives
pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;

// Global counters
__thread unsigned int shared_counter = 0;
__thread unsigned int atomic_counter = 0;
__thread unsigned int data = 0;
__thread unsigned int i = 0;
__thread unsigned int ready = 0;

// Thread-local storage for TLS test
__thread struct {
    unsigned int field_10;
    char padding[12];
} tls_data = {0};

// Signal handling globals
unsigned int __dollar_d_3 = 0;
unsigned int signal_number = 0;

// LSE atomics flag
char __aarch64_have_lse_atomics = 0;

// Function pointer
void (*g_414ff8)() = NULL;

// External CRT function declarations
extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern long long frame_dummy(void);

// Valgrind/Angr helper function declaration
extern long long arm64g_calculate_condition(long long, unsigned long long, long long, long long);

// ARM atomic builtin declarations
extern unsigned int __aarch64_ldadd4_acq_rel(unsigned int, unsigned int*);
extern unsigned int __aarch64_cas4_acq_rel(unsigned int, unsigned int, unsigned int*);

// Implementation of __aarch64_ldadd4_acq_rel using GCC atomics
// Atomic add with acquire-release semantics
unsigned int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned int* ptr)
{
    return __atomic_fetch_add(ptr, value, __ATOMIC_ACQ_REL);
}

// Implementation of __aarch64_cas4_acq_rel using GCC atomics  
// Compare-and-swap with acquire-release semantics
unsigned int __aarch64_cas4_acq_rel(unsigned int expected, unsigned int desired, unsigned int* ptr)
{
    __atomic_compare_exchange_n(ptr, &expected, desired, 0, __ATOMIC_ACQ_REL, __ATOMIC_ACQ_REL);
    return expected;
}

// Implementation of arm64g_calculate_condition
// Valgrind/Angr helper for ARM condition code evaluation
// Arguments: cond_code, nzcv, op1, op2
long long arm64g_calculate_condition(long long cond_code, unsigned long long nzcv, long long op1, long long op2)
{
    // Simplified implementation for condition codes used in the code
    // Extract NZCV flags from nzcv argument (bits 31-28 in typical ARM)
    unsigned int N = (nzcv >> 31) & 1;
    unsigned int Z = (nzcv >> 30) & 1;
    unsigned int C = (nzcv >> 29) & 1;
    unsigned int V = (nzcv >> 28) & 1;
    
    // Handle condition codes
    switch (cond_code) {
        case 0:  // EQ (Equal) - Z == 1
            return Z;
        case 1:  // NE (Not Equal) - Z == 0
            return !Z;
        case 2:  // CS (Carry Set) - C == 1
            return C;
        case 3:  // CC (Carry Clear) - C == 0
            return !C;
        case 4:  // MI (Minus/Negative) - N == 1
            return N;
        case 5:  // PL (Plus/Positive) - N == 0
            return !N;
        case 6:  // VS (Overflow Set) - V == 1
            return V;
        case 7:  // VC (Overflow Clear) - V == 0
            return !V;
        case 8:  // HI (Higher) - C == 1 && Z == 0
            return C && !Z;
        case 9:  // LS (Lower or Same) - C == 0 || Z == 1
            return !C || Z;
        case 10: // GE (Greater or Equal) - N == V
            return N == V;
        case 11: // LT (Less Than) - N != V
            return N != V;
        case 12: // GT (Greater Than) - Z == 0 && N == V
            return !Z && (N == V);
        case 13: // LE (Less or Equal) - Z == 1 || N != V
            return Z || (N != V);
        case 14: // AL (Always)
            return 1;
        case 18: // Check if pointer is valid (non-zero)
            return nzcv != 0;
        case 25: // Check boolean value
            return nzcv & 1;
        default: // NV/undefined - always false
            return 0;
    }
}

// sighandler_t type definition
typedef void (*sighandler_t)(int);


/* CRT stub function _init removed by preprocessor */









// Function: init_have_lse_atomics at 0x401700
unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}






/* CRT stub function _start removed by preprocessor */







/* CRT stub function call_weak_fn removed by preprocessor */







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_strcpy at 0x401854
long long param_strcpy(char *ptr, char *a1)
{
 unsigned long long len; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 strcpy(ptr, a1);
 len = strlen(ptr);
 return strlen(ptr);
}


// Function: call_strcpy at 0x401888
int call_strcpy()
{
 unsigned int v0; // [bp-0x34]
 char v1[32]; // [bp-0x30]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = param_strcpy(v1, "HelloLib");
 return v0;
}


// Function: param_strcmp at 0x4018b8
unsigned int param_strcmp(char *a0, char *a1)
{
 unsigned int v4; // w8
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = strcmp(a0, a1);
 if (v1 > 0)
 {
 v0 = 1;
 return v0;
 }
 if (0 <= v1)
 v4 = 0;
 else
 v4 = 4294967295;
 v0 = v4;
 return v0;
}


// Function: call_strcmp at 0x401920
int call_strcmp()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = param_strcmp("abc", "def");
 v1 = param_strcmp("xyz", "xyz");
 v0 = param_strcmp("bbb", "aaa");
 return v2 + v1 + v0;
}


// Function: param_strlen at 0x401990
int param_strlen(char *a0)
{
 unsigned long long len; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 len = strlen(a0);
 return len;
}


// Function: call_strlen at 0x4019c0
int call_strlen()
{
 char *v0; // [bp-0x18]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = "BinBench2025";
 return param_strlen(v0);
}


// Function: param_memcpy at 0x4019ec
int param_memcpy(void* a0, void* a1, unsigned long n)
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 memcpy(a0, a1, n);
 return n;
}


// Function: call_memcpy at 0x401a28
int call_memcpy()
{
 char v0; // [bp-0x48]
 char v1; // [bp-0x40]
 char v2; // [bp-0x38]
 unsigned long long v3; // [bp-0x30]
 unsigned int v4; // [bp-0x20]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v3 = 3169126501123975826038943907850;
 v4 = 50;
 memset(&v0, 0, 20);
 param_memcpy(&v0, &v3, 20);
 return *((int *)&v0) + *((int *)&v1) + *((int *)&v2);
}


// Function: param_memcmp at 0x401a88
unsigned int param_memcmp(void* a0, void* a1, unsigned long a2)
{
 unsigned int v4; // w8
 unsigned int v0; // [bp-0x30]
 unsigned int v1; // [bp-0x2c]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = memcmp(a0, a1, a2);
 if (v1 > 0)
 {
 v0 = 1;
 return v0;
 }
 if (0 <= v1)
 v4 = 0;
 else
 v4 = 4294967295;
 v0 = v4;
 return v0;
}


// Function: call_memcmp at 0x401af8
int call_memcmp()
{
 char *v0; // [bp-0x60]
 unsigned long long v1; // [bp-0x58]
 unsigned long long *v2; // [bp-0x50]
 unsigned int v3; // [bp-0x48]
 unsigned int v4; // [bp-0x44]
 char v5; // [bp-0x40], Other Possible Types: unsigned long long
 unsigned int v6; // [bp-0x38]
 unsigned long long v7; // [bp-0x30]
 unsigned int v8; // [bp-0x28]
 unsigned long long v10; // [bp-0x20]
 unsigned int v11; // [bp-0x18]
 char *v12; // [bp-0x10]
 char v13; // [bp+0x0]

 v12 = &v13;
 v2 = &v10;
 v10 = 8589934593;
 v11 = 3;
 v7 = 8589934593;
 v8 = 4;
 v0 = &v5;
 v5 = 8589934593;
 v6 = 3;
 v1 = 12;
 v4 = param_memcmp(&v10, &v7, 12);
 v3 = param_memcmp(v2, v0, v1);
 return v4 + v3;
}


// Function: param_printf at 0x401ba0
int param_printf(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = printf("Value: %d, Name: %s\n", a0, a1);
 return v0;
}


// Function: call_printf at 0x401bdc
int call_printf()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = param_printf(42, (unsigned long)"Test");
 return v0;
}


// Function: param_scanf at 0x401c0c
unsigned int param_scanf(char *a0)
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28], Other Possible Types: unsigned int
 char v2; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 v0 = sscanf(a0, "%d,%d", &v2, &v1);
 if (v0 != 2)
 {
 v3 = 4294967295;
 return v3;
 }
 v3 = v2 + v1;
 return v3;
}


// Function: call_scanf at 0x401c78
int call_scanf()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_scanf("123,456");
}


// Function: param_fopen_fclose at 0x401c94

unsigned int param_fopen_fclose(char *a0)
{
 unsigned int v0; // [bp-0x2c]
 FILE *fp; // [bp-0x28]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 fp = fopen(a0, "r");
 if (fp)
 {
 v0 = fileno(fp);
 fclose(fp);
 v2 = v0;
 return v2;
 }
 v2 = 4294967295;
 return v2;
}


// Function: call_fopen_fclose at 0x401d00
unsigned long long call_fopen_fclose()
{
 unsigned long long v4; // x30
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 v0 = param_fopen_fclose("/etc/passwd");
 if (0 > v0)
 return 4294967295;
 return 42;
}


// Function: param_fread_fwrite at 0x401d38
unsigned int param_fread_fwrite(char *a0)
{
 unsigned int v12; // w8
 unsigned int v13; // w8
 char *v0; // [bp-0x80]
 unsigned int v1; // [bp-0x74]
 void* v2; // [bp-0x70]
 unsigned long v3; // [bp-0x68]
 unsigned long count; // [bp-0x60]
 void* fp; // [bp-0x50]
 char v7[64]; // [bp-0x48]
 char* v8; // [bp-0x28]
 unsigned int v9; // [bp-0x14]
 char *v10; // [bp-0x10]
 char v11; // [bp+0x0]

 v10 = &v11;
 v8 = "BinBench Test Data";
 fp = (FILE*)fopen(a0, "w+");
 if (!fp)
 {
 v9 = 4294967295;
 return v9;
 }
 v2 = v8;
 count = fwrite(v2, 1, strlen(v8), fp);
 v3 = count;
 if (v3 != strlen(v8))
 {
 fclose(fp);
 v9 = 4294967294;
 return v9;
 }
 rewind(fp);
 v0 = v7;
 count = fread(v7, 1, count, fp);
 v0[count] = 0;
 fclose(fp);
 unlink(a0);
 v1 = 0;
 if (count == count)
 {
 if (strcmp(v7, v8))
 v12 = 0;
 else
 v12 = 1;
 v1 = v12;
 }
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v1 & 1), 0, 0))
 v13 = 42;
 else
 v13 = 4294967293;
 v9 = v13;
 return v9;
}


// Function: call_fread_fwrite at 0x401e84
int call_fread_fwrite()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_fread_fwrite("/tmp/binbench_test_tmp");
}


// Function: param_malloc_free at 0x401ea0
unsigned int param_malloc_free(unsigned long long a0)
{
 unsigned int v0; // [bp-0x34]
 unsigned long long idx; // [bp-0x30]
 unsigned int *ptr; // [bp-0x28], Other Possible Types: unsigned long long
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 ptr = malloc(__ROL__(a0, 2) & 18446744073709551612);
 if (!ptr)
 {
 v3 = 4294967295;
 return v3;
 }
 for (idx = 0; a0 > idx; idx += 1)
 {
 ptr[idx] = 10 * (unsigned int)idx;
 }
 v0 = *(ptr) + ptr[1 + a0];
 free(ptr);
 ptr = 0;
 v3 = v0;
 return v3;
}


// Function: call_malloc_free at 0x401f68
int call_malloc_free()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_malloc_free(10);
}


// Function: param_memset at 0x401f80
unsigned int param_memset(void* a0, unsigned long n)
{
 unsigned long i; // [bp-0x38]
 unsigned int v1; // [bp-0x2c]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 memset(a0, 0, n);
 v1 = 0;
 for (i = 0; n > i; i += 1)
 {
 v1 += *((char *)a0 + i);
 }
 return v1;
}


// Function: call_memset at 0x402008
int call_memset()
{
 unsigned int i; // [bp-0x3c]
 unsigned long v1; // [bp-0x38]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 for (i = 0; 10 > i; i += 1)
 {
 *((unsigned int *)((char *)&v1 + 4 * i)) = 255;
 }
 param_memset(&v1, 40);
 v2 = 0;
 return (int)v1 + v2;
}


// Function: param_strchr_strstr at 0x402074
int param_strchr_strstr(char *a0, char a1, char *a2)
{
 unsigned long long v0; // [bp-0x58]
 unsigned long long v1; // [bp-0x50]
 unsigned int v2; // [bp-0x44]
 char *ptr1; // [bp-0x40]
 unsigned int v4; // [bp-0x34]
 char *ptr2; // [bp-0x30]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 ptr1 = strchr(a0, a1);
 if (ptr1)
 v1 = (unsigned long long)(ptr1 - a0);
 else
 v1 = 18446744073709551615;
 v4 = v1;
 ptr2 = strstr(a0, a2);
 if (ptr2)
 v0 = (unsigned long long)(ptr2 - a0);
 else
 v0 = 18446744073709551615;
 v2 = v0;
 return v4 + v2;
}


// Function: call_strchr_strstr at 0x40212c
int call_strchr_strstr()
{
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = "Hello BinBench Test";
 v0 = param_strchr_strstr(v1, 66, "Bench");
 return v0;
}


// Function: test_standard_library_functions at 0x40216c
int test_standard_library_functions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_4039aa);
 printf(g_4039cf, call_strcpy() & 4294967295);
 printf(g_4039ea, call_strcmp() & 4294967295);
 printf(g_403a05, call_strlen() & 4294967295);
 printf(g_403a21, call_memcpy() & 4294967295);
 printf(g_403a3d, call_memcmp() & 4294967295);
 printf(g_403a59, call_printf() & 4294967295);
 printf(g_403a75, call_scanf() & 4294967295);
 printf(g_403a92, call_fopen_fclose() & 4294967295);
 printf(g_403aae, call_fread_fwrite() & 4294967295);
 printf(g_403aca, call_malloc_free() & 4294967295);
 printf(g_403ae6, call_memset() & 4294967295);
 return printf(g_403b01, call_strchr_strstr() & 4294967295);
}


// Function: param_linux_syscall at 0x402278
int param_linux_syscall(char *a0)
{
 unsigned int v0; // [bp-0x24]
 unsigned long long v1; // [bp-0x20]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v1 = (unsigned long long)a0;
 v0 = syscall(56);
 if (0 <= v0)
 {
 syscall(57);
 v2 = v0;
 return v2;
 }
 v2 = -(errno);
 return v2;
}


// Function: call_linux_syscall at 0x4022f4
unsigned long long call_linux_syscall()
{
 unsigned long long v4; // x30
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 v0 = param_linux_syscall("/etc/passwd");
 if (0 > v0)
 return 4294967295;
 return 42;
}


// Function: param_win32_api at 0x40232c
unsigned int param_win32_api(char *a0)
{
 unsigned int v5; // w8
 struct stat v0; // [bp-0xa0]
 unsigned long long v1; // [bp-0x70]
 unsigned int v2; // [bp-0x14]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 if (0 > (int)stat(a0, &v0))
 {
 v2 = 4294967295;
 return v2;
 }
 if (0 < v1)
 v5 = 42;
 else
 v5 = 4294967294;
 v2 = v5;
 return v2;
}


// Function: call_win32_api at 0x40238c
int call_win32_api()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_win32_api("/etc/passwd");
}


// Function: param_fork_exec at 0x4023a8
long long param_fork_exec(char *a0, unsigned long long a1)
{
 unsigned int v0; // [bp-0x34]
 int v1; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned long long v3; // [bp-0x28]
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v3 = a1;
 result = fork();
 if (0 > result)
 {
 v4 = 4294967295;
 return v4;
 }
 else if (!result)
 {
 execl(a0, a0);
 _exit(127); /* do not return */
 }
 else
 {
 v0 = waitpid(result, &v1, 0);
 if (0 > v0)
 {
 v4 = 4294967294;
 return v4;
 }
 else if (!((char)v1 & 127))
 {
 v4 = (v1 & 0xff00) >> 31 & 0xff000000 | __ROL__(v1 & 0xff00, 24) & 16777215;
 return v4;
 }
 else
 {
 v4 = 4294967293;
 return v4;
 }
 }
}


// Function: call_fork_exec at 0x402478
unsigned long long call_fork_exec()
{
 unsigned long long v4; // x30
 unsigned int result; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 result = param_fork_exec("/bin/true", 0);
 if (result)
 return 4294967295;
 return 42;
}


// Function: param_pipe_communication at 0x4024b4
long long param_pipe_communication()
{
 unsigned int v13; // w8
 unsigned long long count; // [bp-0x50]
 const char *v4; // [bp-0x48]
 unsigned int result; // [bp-0x40]
 char v6[32]; // [bp-0x3c]
 int v7[2]; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 char *v10; // [bp-0x10]
 char v11; // [bp+0x0]

 v10 = &v11;
 v8 = 0;
 if (0 > pipe(v7))
 {
 v9 = 4294967295;
 return v9;
 }
 result = fork();
 if (0 > result)
 {
 v9 = 4294967294;
 return v9;
 }
 else if (!result)
 {
 close(v7[0]);
 v4 = "HelloPipe";
 write(v7[1], v4, strlen(v4));
 close(v7[1]);
 _exit(0); /* do not return */
 }
 else
 {
 close(v7[1]);
 count = read(v7[0], v6, 31);
 v6[count] = 0;
 close(v7[0]);
 wait(NULL);
 if (0 < count)
 v13 = 42;
 else
 v13 = 4294967293;
 v9 = v13;
 return v9;
 }
}


// Function: call_pipe_communication at 0x4025c8
unsigned long long call_pipe_communication()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_pipe_communication();
}


// Function: param_socket_create at 0x4025dc
unsigned int param_socket_create()
{
 char *v0; // [bp-0x38]
 struct sockaddr_in v1; // [bp-0x30]
 unsigned int result; // [bp-0x1c]
 unsigned int v6; // [bp-0x18]
 unsigned int v7; // [bp-0x14]
 char *v8; // [bp-0x10]
 char v9; // [bp+0x0]

 v8 = &v9;
 v6 = socket(2, 1, 0);
 if (0 > v6)
 {
 v7 = 4294967295;
 return v7;
 }
 result = 1;
 if (0 > setsockopt(v6, 1, 2, &result, 4))
 {
 close(v6);
 v7 = 4294967294;
 return v7;
 }
 v0 = (char *)&v1;
 *((unsigned long long *)&v1.sin_family) = 0;
 *((unsigned long long *)&v1.sin_port) = 0;
 v1.sin_family = 2;
 *((unsigned short *)&v1.sin_port) = htons(0);
 *((unsigned int *)&v1.sin_addr) = 0;
 if (0 > bind(v6, (struct sockaddr *)&v1, 16))
 {
 close(v6);
 v7 = 4294967293;
 return v7;
 }
 else if (0 > listen(v6, 5))
 {
 close(v6);
 v7 = 0xfffffffc;
 return v7;
 }
 else
 {
 close(v6);
 v7 = 42;
 return v7;
 }
}


// Function: call_socket_create at 0x4026fc
int call_socket_create()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_socket_create();
}


// Function: param_shmget_shmat at 0x402710
unsigned int param_shmget_shmat()
{
 unsigned int v0; // [bp-0x3c]
 char *v1; // [bp-0x38]
 unsigned int v2; // [bp-0x2c]
 unsigned int v3; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 char *v5; // [bp-0x20]
 unsigned int v6; // [bp-0x14]
 char *v7; // [bp-0x10]
 char v8; // [bp+0x0]

 v7 = &v8;
 v5 = "/tmp/binbench_shm";
 v4 = open(v5, 66, 438);
 if (0 > v4)
 {
 v6 = 4294967295;
 return v6;
 }
 close(v4);
 v3 = ftok("/tmp/binbench_shm", 42);
 if (0 > v3)
 {
 v6 = 4294967295;
 return v6;
 }
 v2 = shmget(v3, 0x1000, 950);
 if (0 > v2)
 {
 v6 = 4294967294;
 return v6;
 }
 v1 = (char*)shmat(v2, 0, 0);
 if ((char)arm64g_calculate_condition(18, (unsigned long long)v1, 1, 0))
 {
 strcpy(v1, "SharedMemory");
 v0 = strlen(v1);
 shmdt(v1);
 shmctl(v2, 0, 0);
 v6 = v0;
 return v6;
 }
 v6 = 4294967293;
 return v6;
}


// Function: call_shmget_shmat at 0x402844
unsigned long long call_shmget_shmat()
{
 unsigned long long v4; // x30
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 unsigned long long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v1 = &v3;
 v2 = v4;
 v0 = param_shmget_shmat();
 if (0 >= v0)
 return 4294967295;
 return 42;
}


// Forward declaration for signal handler
void signal_handler(int a0);

// Function: param_signal_handling at 0x402874
unsigned int param_signal_handling()
{
 unsigned int v8; // w8
 unsigned int v9; // w8
 sighandler_t result; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 if (!((char)arm64g_calculate_condition(18, (unsigned long long)signal(10, signal_handler), 1, 0)))
 {
 v5 = 4294967295;
 return v5;
 }
 else if (!((char)arm64g_calculate_condition(18, (unsigned long long)signal(14, signal_handler), 1, 0)))
 {
 v5 = 4294967294;
 return v5;
 }
 else
 {
 __dollar_d_3 = 0;
 raise(10);
 v3 = 1000;
 while (true)
 {
 v2 = 0;
 if (!__dollar_d_3)
 {
 v4 = v3 - 1;
 if (v3 <= 0)
 v8 = 0;
 else
 v8 = 1;
 v2 = v8;
 v3 = v4;
 }
 if (!((char)v2 & 1))
 break;
 usleep(1000);
 }
 if (!__dollar_d_3)
 {
 v5 = 4294967293;
 return v5;
 }
 else if (signal_number != 10)
 {
 v5 = 0xfffffffc;
 return v5;
 }
 else
 {
 __dollar_d_3 = 0;
 alarm(1);
 v4 = 2000;
 while (true)
 {
 v1 = 0;
 if (!__dollar_d_3)
 {
 v3 = v4 - 1;
 if (v4 <= 0)
 v9 = 0;
 else
 v9 = 1;
 v1 = v9;
 v4 = v3;
 }
 if (!((char)v1 & 1))
 break;
 usleep(1000);
 }
 if (__dollar_d_3 && signal_number == 14)
 {
 result = NULL;
 signal(10, NULL);
 signal(14, result);
 v5 = 42;
 return v5;
 }
 v5 = 4294967291;
 return v5;
 }
 }
}


// Function: signal_handler at 0x402a44
void signal_handler(int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 __dollar_d_3 = 1;
 signal_number = v0;
}


// Function: call_signal_handling at 0x402a6c
int call_signal_handling()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_signal_handling();
}


// Function: test_system_calls at 0x402a80
int test_system_calls()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_403b50);
 printf(g_403b6c, call_linux_syscall() & 4294967295);
 printf(g_403b88, call_win32_api() & 4294967295);
 printf(g_403ba4, call_fork_exec() & 4294967295);
 printf(g_403bc0, call_pipe_communication() & 4294967295);
 printf(g_403bdc, call_socket_create() & 4294967295);
 printf(g_403bf8, call_shmget_shmat() & 4294967295);
 return printf(g_403c14, call_signal_handling() & 4294967295);
}


// Function: thread_compute at 0x402b28
void * thread_compute(void *p)
{
 unsigned int *ptr; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = *((unsigned int *)p);
 v1 = v2 * v2;
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: param_pthread_create at 0x402b84
unsigned int param_pthread_create(unsigned int a0)
{
 unsigned int v0; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int *ptr; // [bp-0x30], Other Possible Types: char
 unsigned int v3; // [bp-0x24]
 pthread_t v4; // [bp-0x20]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 v3 = a0;
 result = pthread_create(&v4, 0, thread_compute, &v3);
 if (!result)
 {
 pthread_join(v4, (void**)&ptr);
 v0 = *(ptr);
 free(ptr);
 v5 = v0;
 return v5;
 }
 v5 = 4294967295;
 return v5;
}


// Function: call_pthread_create at 0x402c0c
int call_pthread_create()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_pthread_create(7);
}


// Function: thread_sum at 0x402c24
void * thread_sum(void *ptr)
{
 unsigned int i; // [bp-0x14]
 unsigned int *p = (unsigned int *)ptr;

 p[2] = 0;
 for (i = p[0]; p[1] >= i; i += 1)
 {
 p[2] = p[2] + i;
 }
 return &p[2];
}


// Function: param_pthread_join at 0x402c98
unsigned int param_pthread_join()
{
 unsigned int j; // [bp-0x60]
 unsigned int v1; // [bp-0x5c]
 unsigned int i; // [bp-0x58]
 unsigned int result; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned int v14; // [bp-0x4c]
 unsigned int v6; // [bp-0x48]
 unsigned int v7; // [bp-0x44]
 unsigned int v8; // [bp-0x3c]
 unsigned int v9; // [bp-0x38]
 pthread_t v10[4]; // [bp-0x30]
 unsigned int v11; // [bp-0x14]
 char *v12; // [bp-0x10]
 char v13; // [bp+0x0]
 unsigned int *temp;
 unsigned int thread_args[12]; // Arguments for 3 threads, 3 ints each

 v12 = &v13;
 memset(thread_args, 0, sizeof(thread_args));
 thread_args[0] = 1;
 thread_args[1] = 9;
 thread_args[2] = 0;
 thread_args[3] = 10;
 thread_args[4] = 19;
 thread_args[5] = 0;
 thread_args[6] = 20;
 thread_args[7] = 29;
 thread_args[8] = 0;
 for (i = 0; 3 > i; i += 1)
 {
 if ((int)pthread_create(&v10[i], 0, thread_sum, &thread_args[3 * i]))
 {
 v11 = 4294967295;
 return v11;
 }
 }
 v1 = 0;
 for (j = 0; 3 > j; j += 1)
 {
 void *thread_result;
 temp = &thread_args[3 * j];
 if ((int)pthread_join(v10[j], &thread_result))
 {
 v11 = 4294967294;
 return v11;
 }
 if (thread_result != NULL)
 {
 v1 += *((unsigned int *)thread_result);
 }
 }
 v11 = v1;
 return v11;
}


// Function: call_pthread_join at 0x402dec
int call_pthread_join()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_pthread_join();
}


// Function: thread_increment at 0x402e00
void * thread_increment(void *ptr)
{
 unsigned long long v0; // [bp-0x28]
 unsigned int i; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = *((unsigned int *)ptr);
 for (i = 0; v2 > i; i += 1)
 {
 v0 = (unsigned long long)&counter_mutex;
 pthread_mutex_lock(&counter_mutex);
 shared_counter = shared_counter + 1;
 pthread_mutex_unlock(&counter_mutex);
 usleep(1000);
 }
 return NULL;
}


// Function: param_mutex_lock at 0x402e8c
unsigned int param_mutex_lock(unsigned int a0, unsigned int a1)
{
 unsigned int v8; // w8
 unsigned int v0; // [bp-0x34]
 unsigned int j; // [bp-0x30]
 unsigned int i; // [bp-0x2c]
 pthread_t *ptr; // [bp-0x28]
 unsigned int v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 v4 = a1;
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 {
 v5 = 4294967295;
 return v5;
 }
 shared_counter = 0;
 for (i = 0; a0 > i; i += 1)
 {
 if ((int)pthread_create(&ptr[i], 0, thread_increment, &v4))
 {
 free(ptr);
 v5 = 4294967294;
 return v5;
 }
 }
 for (j = 0; a0 > j; j += 1)
 {
 pthread_join(ptr[j], 0);
 }
 free(ptr);
 v0 = v4 * a0;
 if (shared_counter == v0)
 v8 = 42;
 else
 v8 = 4294967293;
 v5 = v8;
 return v5;
}


// Function: call_mutex_lock at 0x402fcc
int call_mutex_lock()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_mutex_lock(4, 1000);
}


// Function: consumer_thread at 0x402fe8
void * consumer_thread(void *a0)
{
 unsigned int *ptr; // [bp-0x28]
 unsigned int v1; // [bp-0x1c]
 unsigned long long v2; // [bp-0x18]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = (unsigned long long)a0;
 pthread_mutex_lock(&cond_mutex);
 while (!i)
 {
 pthread_cond_wait(&cond, &cond_mutex);
 }
 v1 = data;
 pthread_mutex_unlock(&cond_mutex);
 ptr = malloc(4);
 *(ptr) = v1;
 return ptr;
}


// Function: producer_thread at 0x403070
void * producer_thread(void *a0)
{
 unsigned int result; // [bp-0x24]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]

 v3 = &v4;
 v2 = (unsigned long long)a0;
 result = 1;
 sleep(1);
 v1 = (unsigned long long)&cond_mutex;
 pthread_mutex_lock(&cond_mutex);
 data = 42;
 ready = result;
 pthread_cond_signal(&cond);
 pthread_mutex_unlock((pthread_mutex_t *)v1);
 return NULL;
}


// Function: param_condition_variable at 0x4030d8
unsigned int param_condition_variable()
{
 unsigned int v0; // [bp-0x34]
 unsigned int *ptr; // [bp-0x30], Other Possible Types: char
 pthread_t v2; // [bp-0x28]
 pthread_t v3; // [bp-0x20]
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 ready = 0;
 data = 0;
 if ((int)pthread_create(&v2, 0, consumer_thread, 0))
 {
 v4 = 4294967295;
 return v4;
 }
 else if ((int)pthread_create(&v3, 0, producer_thread, 0))
 {
 pthread_cancel(v2);
 v4 = 4294967294;
 return v4;
 }
 else
 {
 pthread_join(v2, (void**)&ptr);
 pthread_join(v3, 0);
 v0 = *(ptr);
 free(ptr);
 v4 = v0;
 return v4;
 }
}


// Function: call_condition_variable at 0x40319c
int call_condition_variable()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_condition_variable();
}


// Function: thread_atomic_increment at 0x4031b0
void * thread_atomic_increment(void *ptr)
{
 unsigned int v14; // w0
 unsigned long long v15; // x8
 unsigned long long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 char v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int i; // [bp-0x20]
 unsigned int v11; // [bp-0x1c]
 char *v12; // [bp-0x10]
 char v13; // [bp+0x0]

 v12 = &v13;
 v11 = *((unsigned int *)ptr);
 for (i = 0; v11 > i; i += 1)
 {
 result = 1;
 v0 = (unsigned long long)&atomic_counter;
 v8 = __aarch64_ldadd4_acq_rel(result, (unsigned int*)&atomic_counter);
 v7 = i;
 v6 = i + 1000;
 v5 = v6;
 v1 = v7;
 v14 = __aarch64_cas4_acq_rel(v7, v5, (unsigned int*)v0);
 if (v14 != v1)
 v15 = 0;
 else
 v15 = 1;
 v2 = v14;
 v3 = v15;
 if (!((char)v15 & 1))
 v7 = v2;
 v4 = (char)v3 & 1;
 }
 return NULL;
}


// Function: thread_atomic_load_store at 0x403298
void * thread_atomic_load_store(void *a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v1 = __atomic_load_n(&atomic_counter, __ATOMIC_SEQ_CST);
 v2 = v1;
 v0 = v2 + 100;
 __atomic_store_n(&atomic_counter, v0, __ATOMIC_SEQ_CST);
 return NULL;
}


// Function: param_atomic_ops at 0x4032d8
unsigned int param_atomic_ops(unsigned int a0, unsigned int a1)
{
 unsigned int v11; // w8
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int j; // [bp-0x3c]
 pthread_t *ptr; // [bp-0x28]
 unsigned int i; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x14]
 char *v9; // [bp-0x10]
 char v10; // [bp+0x0]

 v9 = &v10;
 v7 = a1;
 ptr = malloc(a0 * sizeof(pthread_t));
 if (!ptr)
 {
 v8 = 4294967295;
 return v8;
 }
 result = 0;
 atomic_counter = result;
 for (i = 0; a0 > i; i += 1)
 {
 if ((int)pthread_create(&ptr[i], 0, thread_atomic_increment, &v7))
 {
 free(ptr);
 v8 = 4294967294;
 return v8;
 }
 }
 {
 pthread_t load_store_thread;
 if (!(int)pthread_create(&load_store_thread, 0, thread_atomic_load_store, 0))
 pthread_join(load_store_thread, 0);
 }
	for (j = 0; a0 > j; j += 1)
	{
		pthread_join(ptr[j], 0);
	}
	v0 = atomic_counter;
	v1 = v0;
	free(ptr);
 if (0 < v1)
 v11 = 42;
 else
 v11 = 4294967293;
 v8 = v11;
 return v8;
}


// Function: call_atomic_ops at 0x403458
int call_atomic_ops()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_atomic_ops(4, 500);
}


// Function: thread_tls_test at 0x403474
typedef struct struct_0 {
 char padding_0[16];
 unsigned int field_10;
} struct_0;

void * thread_tls_test(void *a0)
{
 unsigned long long v5; // tpidr_el0
 struct_0 *ptr; // [bp-0x38]
 unsigned int p[2]; // [bp-0x30]
 unsigned int v2; // [bp-0x24]
 char *v3; // [bp-0x10]
 char v4; // [bp+0x0]
 unsigned int *p_ptr; // Helper for storing the malloc result

 v3 = &v4;
 ptr = (struct_0 *)v5;
 v2 = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = v2 + 50;
 strncpy((char *)ptr + 1, (char *)a0, 31);
 p_ptr = (unsigned int *)malloc(2 * sizeof(unsigned int));
 p_ptr[0] = v2;
 p_ptr[1] = *((unsigned int *)ptr);
 return p_ptr;
}




// Function: param_thread_local_storage at 0x403504
unsigned int param_thread_local_storage(unsigned int a0)
{
 unsigned int v17; // w8
 unsigned int v18; // w8
 unsigned int v0; // [bp-0x64]
 unsigned long size; // [bp-0x60]
 unsigned int v2; // [bp-0x58]
 unsigned int v3; // [bp-0x54]
 unsigned int ptr[2]; // [bp-0x50]
 unsigned int *v5; // [bp-0x48]
 unsigned int k; // [bp-0x40], Other Possible Types: unsigned int
 unsigned int v7; // [bp-0x3c]
 unsigned int v8; // [bp-0x38]
 unsigned int l; // [bp-0x34]
 unsigned int j; // [bp-0x30]
 unsigned int i; // [bp-0x2c]
 void **p; // [bp-0x28]
 pthread_t *addr; // [bp-0x20]
 unsigned int v14; // [bp-0x14]
 char *v15; // [bp-0x10]
 char v16; // [bp+0x0]

 v15 = &v16;
 addr = malloc(a0 * sizeof(pthread_t));
 p = malloc(a0 * sizeof(void*));
 if (addr && p)
 {
 for (i = 0; a0 > i; i += 1)
 {
 size = 16;
 p[i] = malloc(16);
 snprintf((char *)p[i], size, "Thread-%d", i);
 }
 for (j = 0; a0 > j; j += 1)
 {
 if ((int)pthread_create(&addr[j], 0, thread_tls_test, p[j]))
 {
 for (l = 0; j >= l; l += 1)
 {
 free(p[l]);
 }
 free(p);
 free(addr);
 v14 = 4294967294;
 return v14;
 }
 }
 memset(&k, 0, 12);
 for (; a0 > k; k += 1)
 {
 pthread_join(addr[k], (void**)&v5);
 memcpy(ptr, v5, 8);
 v8 += ptr[0];
 v7 += ptr[1];
 free(v5);
 free(p[k]);
 }
 free(p);
 free(addr);
 v3 = 100 * a0;
 v2 = 150 * a0;
 v0 = 0;
 if (v8 == v3)
 {
 if (v7 != v2)
 v17 = 0;
 else
 v17 = 1;
 v0 = v17;
 }
 if ((char)arm64g_calculate_condition(25, (unsigned long long)(v0 & 1), 0, 0))
 v18 = 42;
 else
 v18 = 4294967293;
 v14 = v18;
 return v14;
 }
 v14 = 4294967295;
 return v14;
}


// Function: call_thread_local_storage at 0x4037a0
int call_thread_local_storage()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_thread_local_storage(4);
}


// Function: test_thread_concurrency at 0x4037b8
int test_thread_concurrency()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_403c3a);
 printf(g_403c59, call_pthread_create() & 4294967295);
 printf(g_403c75, call_pthread_join() & 4294967295);
 printf(g_403c92, call_mutex_lock() & 4294967295);
 printf(g_403cae, call_condition_variable() & 4294967295);
 printf(g_403cca, call_atomic_ops() & 4294967295);
 return printf(g_403ce6, call_thread_local_storage() & 4294967295);
}


// Function: main at 0x40384c
unsigned int main()
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 result = 0;
 flag1 = 0;
 test_standard_library_functions();
 test_system_calls();
 test_thread_concurrency();
 return result;
}








// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x4038c0




/* CRT stub function _fini removed by preprocessor */


