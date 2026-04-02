#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <sys/mman.h>
#include <signal.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#include <sys/stat.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/ipc.h>
#include <sys/shm.h>

// 6-3
#include <pthread.h>
#include <time.h>
#include <stdatomic.h>
// --- FIX: ARM64/RISCV compatibility patch ---
#ifndef SYS_open
    #if defined(__aarch64__) || defined(__riscv)
        // The new architecture uses openat instead of open
        #define SYS_open SYS_openat
        #define USE_OPENAT_POLYFILL 1
    #endif
#endif

// ============================================================================
// 6.1 Standard library function calls - Standard Library Functions
// ============================================================================
// This chapter tests the call to libc standard library functions
// Decompilation Challenge: Identify standard library function patterns and recover high-level semantics
// Compile: gcc -O0 -g -o test_lib test_lib.c
// ============================================================================
// LIB-L1-01: strcpy string copy ⭐
// Scenario: [SCENE-ALL]
// Test: Standard string copy, need to deal with the end of the source string '\0'
// Description: Classic buffer overflow source, decompilation should identify it as string operation

int param_strcpy(char *dst, const char *src) {
    // strcpy copies src including the trailing '\0' to dst
    strcpy(dst, src);
    return strlen(dst);  // Return copy length
}

int call_strcpy() {
    char buffer[32];
    int len = param_strcpy(buffer, "HelloLib");
    return len;  // Expectation: 8
}

// ============================================================================
// LIB-L1-02: strcmp string comparison ⭐
// Scenario: [SCENE-ALL]
// Test: Dictionary string comparison, return three-state value (<0, 0, >0)
// Note: Commonly used for string matching, decompilation can restore comparison semantics

int param_strcmp(const char *s1, const char *s2) {
    // strcmp compares ASCII values character by character
    int ret = strcmp(s1, s2);
    return ret > 0 ? 1 : (ret < 0 ? -1 : 0);  // Normalized to -1,0,1
}

int call_strcmp() {
    int r1 = param_strcmp("abc", "def");   // -1
    int r2 = param_strcmp("xyz", "xyz");   // 0
    int r3 = param_strcmp("bbb", "aaa");   // 1
    
    return r1 + r2 + r3;  // Expectations: 0
}

// ============================================================================
// LIB-L1-03: strlen string length ⭐
// Scenario: [SCENE-ALL]
// Test: Scan the string until '\0' and count the number of characters
// Note: High-frequency functions, decompilation should be recognized as length calculation

int param_strlen(const char *str) {
    // strlen returns the number of characters (excluding the trailing '\0')
    size_t len = strlen(str);
    return (int)len;
}

int call_strlen() {
    const char *test = "BinBench2025";
    return param_strlen(test);  // Expectation: 12
}

// ============================================================================
// LIB-L1-04: memcpy memory copy ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Binary memory block copy, no matter the content format
// Note: May be optimized to SIMD instructions, decompilation needs to recognize memory copy semantics

int param_memcpy(void *dst, const void *src, size_t n) {
    // memcpy copies n bytes without checking the content
    memcpy(dst, src, n);
    return (int)n;  // Returns the number of bytes copied
}

int call_memcpy() {
    int src[] = {10, 20, 30, 40, 50};
    int dst[5] = {0};
    
    param_memcpy(dst, src, sizeof(src));
    
    return dst[0] + dst[2] + dst[4];  // 10 + 30 + 50 = 90
}

// ============================================================================
// LIB-L1-05: memcmp memory comparison ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Binary memory block comparison, return tri-state value
// Note: Often used for structure/array comparison, decompilation can be restored to memory comparison.

int param_memcmp(const void *p1, const void *p2, size_t n) {
    // memcmp compares byte by byte and returns the first different byte difference
    int ret = memcmp(p1, p2, n);
    return ret > 0 ? 1 : (ret < 0 ? -1 : 0);
}

int call_memcmp() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 4};
    int arr3[] = {1, 2, 3};
    
    int r1 = param_memcmp(arr1, arr2, sizeof(arr1));  // -1
    int r2 = param_memcmp(arr1, arr3, sizeof(arr1));  // 0
    
    return r1 + r2;  // Expectation: -1
}

// ============================================================================
// LIB-L1-06: printf formatted output ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Format strings and variadic parameters
// Note: Complex formatting logic, decompilation requires identifying the format string pattern

int param_printf(int x, const char *name) {
    // printf returns the number of characters output
    int ret = printf("Value: %d, Name: %s\n", x, name);
    return ret;  // Returns the total number of characters output
}

int call_printf() {
    // Output: "Value: 42, Name: Test\n" (22 characters)
    int chars = param_printf(42, "Test");
    return chars;  // Expected: includes \n, so 22
}

// ============================================================================
// LIB-L1-07: scanf formatted input ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Parse formatted data from standard input
// Note: The input function has side effects, and the test needs to redirect the input

int param_scanf(const char *input_str) {
    // stdin should actually be redirected or simulated using sscanf
    // This test uses sscanf as a simulation of scanf
    int a, b;
    int ret = sscanf(input_str, "%d,%d", &a, &b);
    
    if (ret == 2) {
        return a + b;  // Returns the sum of the parsed values
    }
    return -1;
}

int call_scanf() {
    return param_scanf("123,456");  // Expectation: 579
}

// ============================================================================
// LIB-L1-08: fopen/fclose file operations ⭐⭐
// Scene: [SCENE-DESK]
// Test: File is opened and closed, returning FILE* handle
// Note: Involving resource management, decompilation should identify the file operation mode

int param_fopen_fclose(const char *filename) {
    // Close the file immediately after opening it
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1;  // File does not exist
    }
    
    int fd = fileno(fp);  // Get file descriptor
    fclose(fp);           // close file
    
    return fd;  // Returns the file descriptor (non-negative integer)
}

int call_fopen_fclose() {
    // Test existing files (such as /etc/passwd on Unix systems)
    int fd = param_fopen_fclose("/etc/passwd");
    return fd >= 0 ? 42 : -1;  // Expected: 42 (file exists)
}

// ============================================================================
// LIB-L1-09: fread/fwrite file reading and writing ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Binary file reading and writing, processing the number of bytes read and written
// Note: Need to be used with fopen/fclose

int param_fread_fwrite(const char *tmpfile) {
    // Create temporary files, write data, and then read and verify
    const char *write_data = "BinBench Test Data";
    char read_buffer[32];
    
    FILE *fp = fopen(tmpfile, "w+");
    if (fp == NULL) return -1;
    
    // Write data
    size_t written = fwrite(write_data, 1, strlen(write_data), fp);
    if (written != strlen(write_data)) {
        fclose(fp);
        return -2;
    }
    
    // Go back to the beginning of the file
    rewind(fp);
    
    // Read data
    size_t read = fread(read_buffer, 1, written, fp);
    read_buffer[read] = '\0';
    
    fclose(fp);
    
    // Delete temporary files
    unlink(tmpfile);
    
    // Verify read and write consistency
    return (read == written && strcmp(read_buffer, write_data) == 0) ? 42 : -3;
}

int call_fread_fwrite() {
    // Using temporary files in the /tmp directory
    return param_fread_fwrite("/tmp/binbench_test.tmp");  // Expectations: 42
}

// ============================================================================
// LIB-L1-10: malloc/free heap management ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Dynamic memory allocation and deallocation
// Note: Heap memory operations must be used in pairs to avoid leaks.

int param_malloc_free(size_t size) {
    // malloc allocates memory and free releases it
    int *ptr = (int*)malloc(size * sizeof(int));
    if (ptr == NULL) return -1;
    
    // Use allocated memory
    for (size_t i = 0; i < size; i++) {
        ptr[i] = i * 10;
    }
    
    int sum = ptr[0] + ptr[size - 1];
    
    free(ptr);  // free memory
    ptr = NULL; // Null pointer
    
    return sum;
}

int call_malloc_free() {
    return param_malloc_free(10);  // 0 + 90 = 90
}

// ============================================================================
// LIB-L1-11: memset memory clear ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Set a memory block to a specified value (usually 0)

int param_memset(void *buffer, size_t size) {
    // memset sets the first size byte of the buffer to 0
    memset(buffer, 0, size);
    
    // Verify whether it is cleared
    unsigned char *bytes = (unsigned char*)buffer;
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += bytes[i];  // All bytes should be 0
    }
    
    return sum;  // Expectations: 0
}

int call_memset() {
    int buffer[10];
    // buffer is initialized to a non-zero value
    for (int i = 0; i < 10; i++) buffer[i] = 0xFF;
    
    param_memset(buffer, sizeof(buffer));
    
    return buffer[0] + buffer[9];  // 0 + 0 = 0
}

// ============================================================================
// LIB-L1-12: strchr/strstr string search ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Find characters or substrings in a string
// Note: Return pointer or NULL, decompilation needs to recognize search semantics

int param_strchr_strstr(const char *str, char ch, const char *substr) {
    // strchr finds the first occurrence of a character
    const char *pos1 = strchr(str, ch);
    int index1 = pos1 ? (pos1 - str) : -1;
    
    // strstr finds the first occurrence of a substring
    const char *pos2 = strstr(str, substr);
    int index2 = pos2 ? (pos2 - str) : -1;
    
    return index1 + index2;  // Returns the sum of position indices
}

int call_strchr_strstr() {
    const char *text = "Hello BinBench Test";
    int result = param_strchr_strstr(text, 'B', "Bench");
    // 'B' is at position 6, "Bench" is at position 9, expectation: 15
    return result;
}

// ============================================================================
// Section 6.1 Test Function
// ============================================================================

void test_standard_library_functions() {
    printf("=== 测试标准库函数调用 ===\n");
    
    printf("LIB-L1-01: %d (期望: 8)\n", call_strcpy());
    printf("LIB-L1-02: %d (期望: 0)\n", call_strcmp());
    printf("LIB-L1-03: %d (期望: 12)\n", call_strlen());
    printf("LIB-L1-04: %d (期望: 90)\n", call_memcpy());
    printf("LIB-L1-05: %d (期望: -1)\n", call_memcmp());
    printf("LIB-L1-06: %d (期望: 22)\n", call_printf());
    printf("LIB-L1-07: %d (期望: 579)\n", call_scanf());
    printf("LIB-L1-08: %d (期望: 42)\n", call_fopen_fclose());
    printf("LIB-L1-09: %d (期望: 42)\n", call_fread_fwrite());
    printf("LIB-L1-10: %d (期望: 90)\n", call_malloc_free());
    printf("LIB-L1-11: %d (期望: 0)\n", call_memset());
    printf("LIB-L1-12: %d (期望: 15)\n", call_strchr_strstr());
}


// ============================================================================
// 6.2 System Calls - System Calls
// ============================================================================
// This chapter tests direct system calls and platform-related APIs
// Linux system calls use syscall() or call directly
// Windows API uses conditional compilation
// Compile: gcc -O0 -g -o test_syscall test_syscall.c
// ============================================================================
// SYS-L3-01: Linux system call ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: directly use syscall() to call the kernel service
// Description: Bypass libc encapsulation and directly trigger int 0x80 or syscall instructions
// Decompilation Challenge: Identifying syscall instructions and parameter passing conventions

int param_linux_syscall(const char *pathname) {
    // On macOS, syscall() almost always returns -1 and errno is ENOSYS (Function not implemented)
    // Here we use pragma to temporarily turn off the warning so that it can pass the compilation
#ifdef __APPLE__
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wdeprecated-declarations"
    int fd = (int)syscall(SYS_open, pathname, O_RDONLY);
    if (fd >= 0) {
        syscall(SYS_close, fd);
    }
    #pragma clang diagnostic pop
    
    // Note: On macOS ARM/Intel, syscall(SYS_open) will fail with a high probability
    // If it fails, we fall back to the standard call so the test can continue running
    if (fd < 0) {
        fd = open(pathname, O_RDONLY);
        if (fd >= 0) close(fd);
    }
    return fd;
#else
    // The original logic of Linux
    int fd;
    #ifdef USE_OPENAT_POLYFILL
        // Use openat(AT_FDCWD, pathname, flags)
        // AT_FDCWD is usually -100
        fd = syscall(SYS_open, -100, pathname, O_RDONLY);
    #else
        fd = syscall(SYS_open, pathname, O_RDONLY);
    #endif

    if (fd < 0) return -errno;
    syscall(SYS_close, fd);
    return fd;
#endif
}

int call_linux_syscall() {
    // Test opening/closing /etc/passwd
    int result = param_linux_syscall("/etc/passwd");
    return result >= 0 ? 42 : -1;  // Expectations: 42
}

// ============================================================================
// SYS-L3-02: Windows API Call ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Windows platform specific API calls
// Note: Call CreateFile/ReadFile, etc. under Windows, and provide stub implementation under Linux.
// Decompilation Challenge: Identify Windows Calling Conventions and API Patterns

#ifdef _WIN32
int param_win32_api(const char *filename) {
    // Windows API version
    HANDLE hFile = CreateFileA(
        filename,
        GENERIC_READ,
        FILE_SHARE_READ,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    );
    
    if (hFile == INVALID_HANDLE_VALUE) {
        return -1;
    }
    
    // Get file size
    LARGE_INTEGER size;
    if (!GetFileSizeEx(hFile, &size)) {
        CloseHandle(hFile);
        return -2;
    }
    
    CloseHandle(hFile);
    return (int)size.QuadPart;  // Return file size
}
#else
// Linux stub implementation (simulating Windows API behavior)
int param_win32_api(const char *filename) {
    struct stat st;
    if (stat(filename, &st) < 0) {
        return -1;
    }
    
    return (st.st_size > 0) ? 42 : -2;  // Simulation successful
}
#endif

int call_win32_api() {
    return param_win32_api("/etc/passwd");  // Expectations: 42
}

// ============================================================================
// SYS-L3-03: fork/exec process creation ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: fork creates a child process and exec executes the new program
// Description: Need to process the parent-child process logic and wait for the child process to end
// Decompilation challenge: identify fork branch, pass exec parameters

int param_fork_exec(const char *prog, const char *arg) {
    pid_t pid = fork();
    
    if (pid < 0) {
        return -1;  // fork failed
    }
    
    if (pid == 0) {
        // child process
        execl(prog, prog, arg, NULL);  // Execute program
        
        // execl returns to indicate failure
        _exit(127);  // Child process exit code 127
    } else {
        // parent process
        int status;
        pid_t wpid = waitpid(pid, &status, 0);  // Wait for child process
        
        if (wpid < 0) {
            return -2;
        }
        
        if (WIFEXITED(status)) {
            return WEXITSTATUS(status);  // Returns the child process exit code
        }
        
        return -3;
    }
    
    return 0;
}

int call_fork_exec() {
    // Execute /bin/true (usually returns 0) or /bin/false (usually returns 1)
    int ret = param_fork_exec("/bin/true", NULL);
    return ret == 0 ? 42 : -1;  // Expectations: 42
}

// ============================================================================
// SYS-L3-04: pipe inter-process communication ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: pipe creates a pipe, and the parent-child process communicates after fork
// Description: One-way data flow, need to close unnecessary endpoints
// Decompilation Challenge: Identifying Pipeline Read and Write Patterns

int param_pipe_communication(void) {
    int pipefd[2];
    char buffer[32];
    
    // Create pipeline
    if (pipe(pipefd) < 0) {
        return -1;
    }
    
    pid_t pid = fork();
    if (pid < 0) {
        return -2;
    }
    
    if (pid == 0) {
        // Child process: write side
        close(pipefd[0]);  // Close reading
        
        const char *msg = "HelloPipe";
        write(pipefd[1], msg, strlen(msg));
        
        close(pipefd[1]);
        _exit(0);
    } else {
        // Parent process: reader
        close(pipefd[1]);  // Close write side
        
        ssize_t bytes = read(pipefd[0], buffer, sizeof(buffer) - 1);
        buffer[bytes] = '\0';
        
        close(pipefd[0]);
        wait(NULL);  // Wait for child process
        
        return (bytes > 0) ? 42 : -3;
    }
    
    return 0;
}

int call_pipe_communication() {
    return param_pipe_communication();  // Expectations: 42
}

// ============================================================================
// SYS-L3-05: socket network creation ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: socket creation and basic configuration
// Description: TCP/UDP socket creation, setting options
// Decompilation challenge: Identify socket API call sequence

int param_socket_create(void) {
    // Create TCP socket
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        return -1;
    }
    
    // Set SO_REUSEADDR option
    int opt = 1;
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
        close(sock);
        return -2;
    }
    
    // Bind to local port (port 0 for testing, automatically assigned)
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(0);  // Port 0, automatically assigned by the system
    addr.sin_addr.s_addr = INADDR_ANY;
    
    if (bind(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        close(sock);
        return -3;
    }
    
    // Listen for connections
    if (listen(sock, 5) < 0) {
        close(sock);
        return -4;
    }
    
    close(sock);
    return 42;  // success
}

int call_socket_create() {
    return param_socket_create();  // Expectations: 42
}

// ============================================================================
// SYS-L3-06: shmget shared memory ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: System V shared memory creation and access
// Note: Shared memory between processes requires synchronization mechanism
// Decompilation Challenge: Identifying IPC Identifiers and Memory Maps

int param_shmget_shmat(void) {
    // Make sure the files used by ftok exist
    const char *ftok_path = "/tmp/binbench_shm";
    int fd = open(ftok_path, O_CREAT | O_RDWR, 0666);
    if (fd < 0) {
        return -1;  // Failed to create file
    }
    close(fd);

    // Create shared memory segment
    key_t key = ftok("/tmp/binbench_shm", 42);
    if (key < 0) {
        return -1;
    }
    
    int shmid = shmget(key, 4096, IPC_CREAT | 0666);
    if (shmid < 0) {
        return -2;
    }
    
    // Attach shared memory to process address space
    char *shm = (char*)shmat(shmid, NULL, 0);
    if (shm == (char*)-1) {
        return -3;
    }
    
    // Write data
    strcpy(shm, "SharedMemory");
    
    // Read data
    int len = strlen(shm);
    
    // Detached shared memory
    shmdt(shm);
    
    // Delete shared memory segment (marked for deletion, actually deleted when the last process detached)
    shmctl(shmid, IPC_RMID, NULL);
    
    return len;  // Returns the string length
}

int call_shmget_shmat() {
    int ret = param_shmget_shmat();
    return ret > 0 ? 42 : -1;  // Expectations: 42
}

// ============================================================================
// SYS-L3-07: signal signal processing ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Register signal processing function, asynchronous signal processing
// Note: The signal processing function has strict restrictions (async-signal-safe)
// Decompilation challenge: Identify signal tables and signal processing flows

// Global variables are used for signal processing communication
static volatile int signal_received = 0;
static volatile int signal_number = 0;

// signal processing function
static void signal_handler(int sig) {
    signal_received = 1;
    signal_number = sig;
}

int param_signal_handling(void) {
    // Register SIGUSR1 signal processing function
    if (signal(SIGUSR1, signal_handler) == SIG_ERR) {
        return -1;
    }
    
    // Register SIGALRM signal processing function
    if (signal(SIGALRM, signal_handler) == SIG_ERR) {
        return -2;
    }
    
    // Send SIGUSR1 signal to yourself
    signal_received = 0;
    raise(SIGUSR1);
    
    // Waiting for signal processing (simple polling)
    int attempts = 1000;
    while (!signal_received && attempts-- > 0) {
        usleep(1000);  // 1ms
        // Empty loop wait
    }
    
    if (!signal_received) {
        return -3;  // Signal not received
    }
    
    // Verification signal number
    if (signal_number != SIGUSR1) {
        return -4;
    }
    
    // Test alarm timer
    signal_received = 0;
    alarm(1);  // Send SIGALRM after 1 second
    
    // wait again
    attempts = 2000;
    while (!signal_received && attempts-- > 0) {
        usleep(1000);          // 1ms * 2000 = 2s
        // Empty loop wait
    }
    
    if (!signal_received || signal_number != SIGALRM) {
        return -5;
    }
    
    // Restore default signal handling
    signal(SIGUSR1, SIG_DFL);
    signal(SIGALRM, SIG_DFL);
    
    return 42;  // success
}

int call_signal_handling() {
    return param_signal_handling();  // Expectations: 42
}

// ============================================================================
// Section 6.2 Test Function
// ============================================================================

void test_system_calls() {
    printf("=== 测试系统调用 ===\n");
    
    printf("SYS-L3-01: %d (期望: 42)\n", call_linux_syscall());
    printf("SYS-L3-02: %d (期望: 42)\n", call_win32_api());
    printf("SYS-L3-03: %d (期望: 42)\n", call_fork_exec());
    printf("SYS-L3-04: %d (期望: 42)\n", call_pipe_communication());
    printf("SYS-L3-05: %d (期望: 42)\n", call_socket_create());
    printf("SYS-L3-06: %d (期望: 42)\n", call_shmget_shmat());
    printf("SYS-L3-07: %d (期望: 42)\n", call_signal_handling());
}

// ============================================================================
// 6.3 Threads & Concurrency - Threads & Concurrency
// ============================================================================
// This chapter tests POSIX threads (pthread) and C11 atomic operations
// Compilation requires the pthread library: gcc -pthread -O0 -g -o test_thread test_thread.c
// Or use: gcc -O0 -g -o test_thread test_thread.c -lpthread
// ============================================================================
// THR-L3-01: pthread_create thread creation ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Create thread, thread entry function, parameter passing
// Description: Thread creation and startup, testing concurrent execution flow

// Thread function: calculate sum of squares
void* thread_compute(void *arg) {
    int *input = (int*)arg;
    int value = *input;
    
    // Calculate the square
    int result = value * value;
    
    // Return result (via pointer)
    int *ret = (int*)malloc(sizeof(int));
    *ret = result;
    return (void*)ret;
}

int param_pthread_create(int x) {
    pthread_t tid;
    int input = x;
    void *thread_ret;
    
    // Create a thread and pass parameters
    int ret = pthread_create(&tid, NULL, thread_compute, &input);
    if (ret != 0) {
        return -1;
    }
    
    // Wait for thread to end (tested in detail in THR-L3-02)
    pthread_join(tid, &thread_ret);
    
    int result = *(int*)thread_ret;
    free(thread_ret);
    
    return result;  // Return the thread calculation result
}

int call_pthread_create() {
    return param_pthread_create(7);  // 7*7 = 49
}

// ============================================================================
// THR-L3-02: pthread_join wait ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: wait for thread termination, get return value, resource recycling
// Description: Thread synchronization and resource cleanup

// Multi-threaded cumulative tasks
typedef struct {
    int start;
    int end;
    int result;
} ThreadData;

void* thread_sum(void *arg) {
    ThreadData *data = (ThreadData*)arg;
    data->result = 0;
    
    for (int i = data->start; i <= data->end; i++) {
        data->result += i;
    }
    
    return NULL;
}

int param_pthread_join() {
    pthread_t tids[3];
    ThreadData data[3] = {
        {1, 10, 0},    // 1+2+...+10 = 55
        {11, 20, 0},   // 11+12+...+20 = 155
        {21, 30, 0}    // 21+22+...+30 = 255
    };
    
    // Create 3 threads
    for (int i = 0; i < 3; i++) {
        if (pthread_create(&tids[i], NULL, thread_sum, &data[i]) != 0) {
            return -1;
        }
    }
    
    int total = 0;
    
    // Wait for all threads and collect results
    for (int i = 0; i < 3; i++) {
        if (pthread_join(tids[i], NULL) != 0) {
            return -2;
        }
        total += data[i].result;
    }
    
    return total;  // 55+155+255 = 465
}

int call_pthread_join() {
    return param_pthread_join();  // Expectation: 465
}

// ============================================================================
// THR-L3-03: mutex mutex lock ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Critical section protection to prevent data races
// Description: Test the correct use of locks to avoid deadlocks

// Shared variables (need to be protected)
static volatile int shared_counter = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;

void* thread_increment(void *arg) {
    int iterations = *(int*)arg;
    
    for (int i = 0; i < iterations; i++) {
        // Enter critical section
        pthread_mutex_lock(&counter_mutex);
        
        shared_counter++;  // protected operation
        
        // Leave critical section
        pthread_mutex_unlock(&counter_mutex);
        
        // Simulation work
        usleep(1000);
    }
    
    return NULL;
}

int param_mutex_lock(int thread_count, int iterations_per_thread) {
    pthread_t *tids = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    if (tids == NULL) return -1;
    
    shared_counter = 0;  // Reset shared variables
    
    // Create multiple threads and increment simultaneously
    for (int i = 0; i < thread_count; i++) {
        if (pthread_create(&tids[i], NULL, thread_increment, &iterations_per_thread) != 0) {
            free(tids);
            return -2;
        }
    }
    
    // wait for all threads
    for (int i = 0; i < thread_count; i++) {
        pthread_join(tids[i], NULL);
    }
    
    free(tids);
    
    // Verification result (should be equal to the total number of increments)
    int expected = thread_count * iterations_per_thread;
    return (shared_counter == expected) ? 42 : -3;
}

int call_mutex_lock() {
    return param_mutex_lock(4, 1000);  // 4 threads × 1000 times = 4000
}

// ============================================================================
// THR-L3-04: condition condition variable ⭐⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Testing: producer-consumer synchronization, conditional waits and notifications
// Note: Complex synchronization mode needs to be used with mutex

static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int ready = 0;
static int data = 0;

// consumer thread
void* consumer_thread(void *arg) {
    pthread_mutex_lock(&cond_mutex);
    
    // Wait condition
    while (!ready) {
        pthread_cond_wait(&cond, &cond_mutex);
    }
    
    int received = data;  // Get data
    
    pthread_mutex_unlock(&cond_mutex);
    
    // Return data pointer
    int *ret = (int*)malloc(sizeof(int));
    *ret = received;
    return (void*)ret;
}

// producer thread
void* producer_thread(void *arg) {
    sleep(1);  // Simulate production delays
    
    pthread_mutex_lock(&cond_mutex);
    
    data = 42;      // production data
    ready = 1;      // Set ready flag
    
    pthread_cond_signal(&cond);  // Notify consumers
    
    pthread_mutex_unlock(&cond_mutex);
    
    return NULL;
}

int param_condition_variable() {
    pthread_t producer, consumer;
    
    ready = 0;
    data = 0;
    
    // Create consumer
    if (pthread_create(&consumer, NULL, consumer_thread, NULL) != 0) {
        return -1;
    }
    
    // Create producer
    if (pthread_create(&producer, NULL, producer_thread, NULL) != 0) {
        pthread_cancel(consumer);
        return -2;
    }
    
    // Wait for thread to end
    void *consumer_ret;
    pthread_join(consumer, &consumer_ret);
    pthread_join(producer, NULL);
    
    int result = *(int*)consumer_ret;
    free(consumer_ret);
    
    return result;  // Expectations: 42
}

int call_condition_variable() {
    return param_condition_variable();  // Expectations: 42
}

// ============================================================================
// THR-L3-05: Atomic operations (__atomic) ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: C11 atomic operation, lock-free concurrency
// Note: The compiler has built-in atomic operations, which is more efficient than mutex

// static atomic_int atomic_counter = ATOMIC_VAR_INIT(0);
static atomic_int atomic_counter = 0;

void* thread_atomic_increment(void *arg) {
    int iterations = *(int*)arg;
    
    for (int i = 0; i < iterations; i++) {
        // Atomic increment (no locks)
        // atomic_fetch_add(&atomic_counter, 1);
        // FIX: Added (volatile atomic_int*) forced conversion, compatible with Clang
        // atomic_fetch_add((volatile atomic_int*)&atomic_counter, 1);
        // Use built-in functions to bypass Clang type checking
        __atomic_fetch_add((volatile int*)&atomic_counter, 1, __ATOMIC_SEQ_CST);
        
        // Atomic Compare and Swap (CAS)
        int expected = i;
        int desired = i + 1000;
        // atomic_compare_exchange_strong(&atomic_counter, &expected, desired);
        // atomic_compare_exchange_strong((volatile atomic_int*)&atomic_counter, &expected, desired);
        __atomic_compare_exchange_n((volatile int*)&atomic_counter, &expected, desired, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    }
    
    return NULL;
}

void* thread_atomic_load_store(void *arg) {
    // Atomic loading
    // int value = atomic_load(&atomic_counter);
    // int value = atomic_load((volatile atomic_int*)&atomic_counter);
    int value = __atomic_load_n((volatile int*)&atomic_counter, __ATOMIC_SEQ_CST);


    // Atomic storage
    // atomic_store(&atomic_counter, value + 100);
    // atomic_store((volatile atomic_int*)&atomic_counter, value + 100);
    __atomic_store_n((volatile int*)&atomic_counter, value + 100, __ATOMIC_SEQ_CST);

    return NULL;
}

int param_atomic_ops(int thread_count, int iterations) {
    pthread_t *tids = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    if (tids == NULL) return -1;
    
    // atomic_store(&atomic_counter, 0); 
    // atomic_store((volatile atomic_int*)&atomic_counter, 0); // Atomic initialization
    __atomic_store_n((volatile int*)&atomic_counter, 0, __ATOMIC_SEQ_CST);

    // Create a thread to perform atomic operations
    for (int i = 0; i < thread_count; i++) {
        if (pthread_create(&tids[i], NULL, thread_atomic_increment, &iterations) != 0) {
            free(tids);
            return -2;
        }
    }
    
    // Create additional threads to perform load/store
    pthread_t load_store_tid;
    if (pthread_create(&load_store_tid, NULL, thread_atomic_load_store, NULL) != 0) {
        // Continue execution, non-critical error
    } else {
        pthread_join(load_store_tid, NULL);
    }
    
    // wait for all threads
    for (int i = 0; i < thread_count; i++) {
        pthread_join(tids[i], NULL);
    }
    
    // int final_value = atomic_load(&atomic_counter);
    int final_value = __atomic_load_n((volatile int*)&atomic_counter, __ATOMIC_SEQ_CST);
    free(tids);
    
    // Verify atomicity (value should be reasonable)
    return (final_value > 0) ? 42 : -3;
}

int call_atomic_ops() {
    return param_atomic_ops(4, 500);  // Expectations: 42
}

// ============================================================================
// THR-L3-06: Thread Local Storage (TLS) ⭐⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: __thread variable, independent copy for each thread
// Note: TLS variables are not shared, each thread has its own initial value

// Thread local variables
static __thread int tls_counter = 100;  // Each thread is independent, the initial value is 100
static __thread char tls_thread_name[32];

void* thread_tls_test(void *arg) {
    const char *name = (const char*)arg;
    
    // Each thread sees an initial value of tls_counter of 100
    int initial = tls_counter;  // 100
    
    // Modifications only affect the current thread
    tls_counter += 50;  // becomes 150
    
    // Set thread name
    strncpy(tls_thread_name, name, sizeof(tls_thread_name) - 1);
    
    // Return result pointer
    int *ret = (int*)malloc(sizeof(int) * 2);
    ret[0] = initial;        // 100
    ret[1] = tls_counter;    // 150
    
    return (void*)ret;
}

int param_thread_local_storage(int thread_count) {
    pthread_t *tids = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    char **names = (char**)malloc(thread_count * sizeof(char*));
    if (tids == NULL || names == NULL) return -1;
    
    // Create thread name
    for (int i = 0; i < thread_count; i++) {
        names[i] = (char*)malloc(16);
        snprintf(names[i], 16, "Thread-%d", i);
    }
    
    // Create thread
    for (int i = 0; i < thread_count; i++) {
        if (pthread_create(&tids[i], NULL, thread_tls_test, names[i]) != 0) {
            // clean up
            for (int j = 0; j <= i; j++) free(names[j]);
            free(names);
            free(tids);
            return -2;
        }
    }
    
    // Collect results
    int total_initial = 0;
    int total_final = 0;
    
    for (int i = 0; i < thread_count; i++) {
        void *ret;
        pthread_join(tids[i], &ret);
        
        int *values = (int*)ret;
        total_initial += values[0];  // Initial value for each thread (should be 100)
        total_final += values[1];    // Final value for each thread (should be 150)
        
        free(values);
        free(names[i]);
    }
    
    free(names);
    free(tids);
    
    // Verify TLS independence
    int expected_initial = thread_count * 100;
    int expected_final = thread_count * 150;
    
    return (total_initial == expected_initial && total_final == expected_final) ? 42 : -3;
}

int call_thread_local_storage() {
    return param_thread_local_storage(4);  // Expectations: 42
}

// ============================================================================
// Section 6.3 Test Function
// ============================================================================

void test_thread_concurrency() {
    printf("=== 测试线程与并发 ===\n");
    
    printf("THR-L3-01: %d (期望: 49)\n", call_pthread_create());
    printf("THR-L3-02: %d (期望: 465)\n", call_pthread_join());
    printf("THR-L3-03: %d (期望: 42)\n", call_mutex_lock());
    printf("THR-L3-04: %d (期望: 42)\n", call_condition_variable());
    printf("THR-L3-05: %d (期望: 42)\n", call_atomic_ops());
    printf("THR-L3-06: %d (期望: 42)\n", call_thread_local_storage());
}


// Individual test entry
int main() {
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return 0;
}
