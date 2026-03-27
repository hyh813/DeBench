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
// --- FIX: ARM64/RISCV 兼容性补丁 ---
#ifndef SYS_open
    #if defined(__aarch64__) || defined(__riscv)
        // 新架构使用 openat 替代 open
        #define SYS_open SYS_openat
        #define USE_OPENAT_POLYFILL 1
    #endif
#endif

// ============================================================================
// 6.1 标准库函数调用 - Standard Library Functions
// ============================================================================
// 本章节测试对libc标准库函数的调用
// 反编译挑战: 识别标准库函数模式，恢复高级语义
// 编译: gcc -O0 -g -o test_lib test_lib.c
// ============================================================================
// LIB-L1-01: strcpy字符串拷贝 ⭐
// 场景: [SCENE-ALL]
// 测试: 标准字符串拷贝，需处理源字符串结尾'\0'
// 说明: 经典缓冲区溢出源头，反编译应识别为字符串操作

int param_strcpy(char *dst, const char *src) {
    // strcpy将src包括结尾'\0'拷贝到dst
    strcpy(dst, src);
    return strlen(dst);  // 返回拷贝长度
}

int call_strcpy() {
    char buffer[32];
    int len = param_strcpy(buffer, "HelloLib");
    return len;  // 期望: 8
}

// ============================================================================
// LIB-L1-02: strcmp字符串比较 ⭐
// 场景: [SCENE-ALL]
// 测试: 字典序字符串比较，返回三态值(<0, 0, >0)
// 说明: 常用于字符串匹配，反编译可恢复为比较语义

int param_strcmp(const char *s1, const char *s2) {
    // strcmp逐字符比较ASCII值
    int ret = strcmp(s1, s2);
    return ret > 0 ? 1 : (ret < 0 ? -1 : 0);  // 归一化为-1,0,1
}

int call_strcmp() {
    int r1 = param_strcmp("abc", "def");   // -1
    int r2 = param_strcmp("xyz", "xyz");   // 0
    int r3 = param_strcmp("bbb", "aaa");   // 1
    
    return r1 + r2 + r3;  // 期望: 0
}

// ============================================================================
// LIB-L1-03: strlen字符串长度 ⭐
// 场景: [SCENE-ALL]
// 测试: 扫描字符串直到'\0'，计算字符数
// 说明: 高频函数，反编译应识别为长度计算

int param_strlen(const char *str) {
    // strlen返回字符数（不含结尾'\0'）
    size_t len = strlen(str);
    return (int)len;
}

int call_strlen() {
    const char *test = "BinBench2025";
    return param_strlen(test);  // 期望: 12
}

// ============================================================================
// LIB-L1-04: memcpy内存拷贝 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 二进制内存块拷贝，不关心内容格式
// 说明: 可能优化为SIMD指令，反编译需识别内存拷贝语义

int param_memcpy(void *dst, const void *src, size_t n) {
    // memcpy拷贝n字节，不检查内容
    memcpy(dst, src, n);
    return (int)n;  // 返回拷贝字节数
}

int call_memcpy() {
    int src[] = {10, 20, 30, 40, 50};
    int dst[5] = {0};
    
    param_memcpy(dst, src, sizeof(src));
    
    return dst[0] + dst[2] + dst[4];  // 10 + 30 + 50 = 90
}

// ============================================================================
// LIB-L1-05: memcmp内存比较 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 二进制内存块比较，返回三态值
// 说明: 常用于结构体/数组比较，反编译可恢复为内存比较

int param_memcmp(const void *p1, const void *p2, size_t n) {
    // memcmp逐字节比较，返回第一个不同字节差值
    int ret = memcmp(p1, p2, n);
    return ret > 0 ? 1 : (ret < 0 ? -1 : 0);
}

int call_memcmp() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 4};
    int arr3[] = {1, 2, 3};
    
    int r1 = param_memcmp(arr1, arr2, sizeof(arr1));  // -1
    int r2 = param_memcmp(arr1, arr3, sizeof(arr1));  // 0
    
    return r1 + r2;  // 期望: -1
}

// ============================================================================
// LIB-L1-06: printf格式化输出 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 格式化字符串和可变参数
// 说明: 复杂格式化逻辑，反编译需识别格式字符串模式

int param_printf(int x, const char *name) {
    // printf返回输出字符数
    int ret = printf("Value: %d, Name: %s\n", x, name);
    return ret;  // 返回输出的字符总数
}

int call_printf() {
    // 输出: "Value: 42, Name: Test\n" (22字符)
    int chars = param_printf(42, "Test");
    return chars;  // 期望: 包括\n，所以是22
}

// ============================================================================
// LIB-L1-07: scanf格式化输入 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 从标准输入解析格式化数据
// 说明: 输入函数有副作用，测试需重定向输入

int param_scanf(const char *input_str) {
    // 实际应重定向stdin或使用sscanf模拟
    // 本测试使用sscanf作为scanf的模拟
    int a, b;
    int ret = sscanf(input_str, "%d,%d", &a, &b);
    
    if (ret == 2) {
        return a + b;  // 返回解析到的值之和
    }
    return -1;
}

int call_scanf() {
    return param_scanf("123,456");  // 期望: 579
}

// ============================================================================
// LIB-L1-08: fopen/fclose文件操作 ⭐⭐
// 场景: [SCENE-DESK]
// 测试: 文件打开关闭，返回FILE*句柄
// 说明: 涉及资源管理，反编译应识别文件操作模式

int param_fopen_fclose(const char *filename) {
    // 打开文件后立即关闭
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1;  // 文件不存在
    }
    
    int fd = fileno(fp);  // 获取文件描述符
    fclose(fp);           // 关闭文件
    
    return fd;  // 返回文件描述符号（非负整数）
}

int call_fopen_fclose() {
    // 测试已存在文件（如/etc/passwd在Unix系统）
    int fd = param_fopen_fclose("/etc/passwd");
    return fd >= 0 ? 42 : -1;  // 期望: 42（文件存在）
}

// ============================================================================
// LIB-L1-09: fread/fwrite文件读写 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 二进制文件读写，处理读写字节数
// 说明: 需配合fopen/fclose使用

int param_fread_fwrite(const char *tmpfile) {
    // 创建临时文件，写入数据，再读取验证
    const char *write_data = "BinBench Test Data";
    char read_buffer[32];
    
    FILE *fp = fopen(tmpfile, "w+");
    if (fp == NULL) return -1;
    
    // 写入数据
    size_t written = fwrite(write_data, 1, strlen(write_data), fp);
    if (written != strlen(write_data)) {
        fclose(fp);
        return -2;
    }
    
    // 回到文件开头
    rewind(fp);
    
    // 读取数据
    size_t read = fread(read_buffer, 1, written, fp);
    read_buffer[read] = '\0';
    
    fclose(fp);
    
    // 删除临时文件
    unlink(tmpfile);
    
    // 验证读写一致性
    return (read == written && strcmp(read_buffer, write_data) == 0) ? 42 : -3;
}

int call_fread_fwrite() {
    // 使用/tmp目录的临时文件
    return param_fread_fwrite("/tmp/binbench_test.tmp");  // 期望: 42
}

// ============================================================================
// LIB-L1-10: malloc/free堆管理 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 动态内存分配和释放
// 说明: 堆内存操作，需配对使用避免泄漏

int param_malloc_free(size_t size) {
    // malloc分配内存，free释放
    int *ptr = (int*)malloc(size * sizeof(int));
    if (ptr == NULL) return -1;
    
    // 使用分配的内存
    for (size_t i = 0; i < size; i++) {
        ptr[i] = i * 10;
    }
    
    int sum = ptr[0] + ptr[size - 1];
    
    free(ptr);  // 释放内存
    ptr = NULL; // 置空指针
    
    return sum;
}

int call_malloc_free() {
    return param_malloc_free(10);  // 0 + 90 = 90
}

// ============================================================================
// LIB-L1-11: memset内存清零 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 将内存块设置为指定值（通常为0）

int param_memset(void *buffer, size_t size) {
    // memset将buffer前size字节设置为0
    memset(buffer, 0, size);
    
    // 验证是否清零
    unsigned char *bytes = (unsigned char*)buffer;
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += bytes[i];  // 所有字节应为0
    }
    
    return sum;  // 期望: 0
}

int call_memset() {
    int buffer[10];
    // buffer初始化为非零值
    for (int i = 0; i < 10; i++) buffer[i] = 0xFF;
    
    param_memset(buffer, sizeof(buffer));
    
    return buffer[0] + buffer[9];  // 0 + 0 = 0
}

// ============================================================================
// LIB-L1-12: strchr/strstr字符串查找 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 在字符串中查找字符或子串
// 说明: 返回指针或NULL，反编译需识别查找语义

int param_strchr_strstr(const char *str, char ch, const char *substr) {
    // strchr查找字符首次出现位置
    const char *pos1 = strchr(str, ch);
    int index1 = pos1 ? (pos1 - str) : -1;
    
    // strstr查找子串首次出现位置
    const char *pos2 = strstr(str, substr);
    int index2 = pos2 ? (pos2 - str) : -1;
    
    return index1 + index2;  // 返回位置索引之和
}

int call_strchr_strstr() {
    const char *text = "Hello BinBench Test";
    int result = param_strchr_strstr(text, 'B', "Bench");
    // 'B'在位置6，"Bench"在位置9，期望: 15
    return result;
}

// ============================================================================
// 6.1节测试函数
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
// 6.2 系统调用 - System Calls
// ============================================================================
// 本章节测试直接系统调用和平台相关API
// Linux系统调用使用syscall()或直接调用
// Windows API使用条件编译
// 编译: gcc -O0 -g -o test_syscall test_syscall.c
// ============================================================================
// SYS-L3-01: Linux系统调用 ⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 直接使用syscall()调用内核服务
// 说明: 绕过libc封装，直接触发int 0x80或syscall指令
// 反编译挑战: 识别syscall指令和参数传递约定

int param_linux_syscall(const char *pathname) {
    // 在 macOS 上，syscall() 几乎总是返回 -1 并且 errno 为 ENOSYS (Function not implemented)
    // 这里我们用 pragma 临时关闭警告，以便通过编译
#ifdef __APPLE__
    #pragma clang diagnostic push
    #pragma clang diagnostic ignored "-Wdeprecated-declarations"
    int fd = (int)syscall(SYS_open, pathname, O_RDONLY);
    if (fd >= 0) {
        syscall(SYS_close, fd);
    }
    #pragma clang diagnostic pop
    
    // 注意：在 macOS ARM/Intel 上，syscall(SYS_open) 极大概率会失败
    // 如果失败了，我们回退到标准调用以便测试能跑下去
    if (fd < 0) {
        fd = open(pathname, O_RDONLY);
        if (fd >= 0) close(fd);
    }
    return fd;
#else
    // Linux 原本的逻辑
    int fd;
    #ifdef USE_OPENAT_POLYFILL
        // 使用 openat(AT_FDCWD, pathname, flags)
        // AT_FDCWD 通常是 -100
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
    // 测试打开/关闭/etc/passwd
    int result = param_linux_syscall("/etc/passwd");
    return result >= 0 ? 42 : -1;  // 期望: 42
}

// ============================================================================
// SYS-L3-02: Windows API调用 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: Windows平台特定API调用
// 说明: Windows下调用CreateFile/ReadFile等，Linux下提供桩实现
// 反编译挑战: 识别Windows调用约定和API模式

#ifdef _WIN32
int param_win32_api(const char *filename) {
    // Windows API版本
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
    
    // 获取文件大小
    LARGE_INTEGER size;
    if (!GetFileSizeEx(hFile, &size)) {
        CloseHandle(hFile);
        return -2;
    }
    
    CloseHandle(hFile);
    return (int)size.QuadPart;  // 返回文件大小
}
#else
// Linux桩实现（模拟Windows API行为）
int param_win32_api(const char *filename) {
    struct stat st;
    if (stat(filename, &st) < 0) {
        return -1;
    }
    
    return (st.st_size > 0) ? 42 : -2;  // 模拟成功
}
#endif

int call_win32_api() {
    return param_win32_api("/etc/passwd");  // 期望: 42
}

// ============================================================================
// SYS-L3-03: fork/exec进程创建 ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: fork创建子进程，exec执行新程序
// 说明: 需处理父子进程逻辑，等待子进程结束
// 反编译挑战: 识别fork分支，exec参数传递

int param_fork_exec(const char *prog, const char *arg) {
    pid_t pid = fork();
    
    if (pid < 0) {
        return -1;  // fork失败
    }
    
    if (pid == 0) {
        // 子进程
        execl(prog, prog, arg, NULL);  // 执行程序
        
        // execl返回表示失败
        _exit(127);  // 子进程退出码127
    } else {
        // 父进程
        int status;
        pid_t wpid = waitpid(pid, &status, 0);  // 等待子进程
        
        if (wpid < 0) {
            return -2;
        }
        
        if (WIFEXITED(status)) {
            return WEXITSTATUS(status);  // 返回子进程退出码
        }
        
        return -3;
    }
    
    return 0;
}

int call_fork_exec() {
    // 执行/bin/true（通常返回0）或/bin/false（通常返回1）
    int ret = param_fork_exec("/bin/true", NULL);
    return ret == 0 ? 42 : -1;  // 期望: 42
}

// ============================================================================
// SYS-L3-04: pipe进程间通信 ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: pipe创建管道，fork后父子进程通信
// 说明: 单向数据流，需关闭不需要的端点
// 反编译挑战: 识别管道读写模式

int param_pipe_communication(void) {
    int pipefd[2];
    char buffer[32];
    
    // 创建管道
    if (pipe(pipefd) < 0) {
        return -1;
    }
    
    pid_t pid = fork();
    if (pid < 0) {
        return -2;
    }
    
    if (pid == 0) {
        // 子进程: 写端
        close(pipefd[0]);  // 关闭读端
        
        const char *msg = "HelloPipe";
        write(pipefd[1], msg, strlen(msg));
        
        close(pipefd[1]);
        _exit(0);
    } else {
        // 父进程: 读端
        close(pipefd[1]);  // 关闭写端
        
        ssize_t bytes = read(pipefd[0], buffer, sizeof(buffer) - 1);
        buffer[bytes] = '\0';
        
        close(pipefd[0]);
        wait(NULL);  // 等待子进程
        
        return (bytes > 0) ? 42 : -3;
    }
    
    return 0;
}

int call_pipe_communication() {
    return param_pipe_communication();  // 期望: 42
}

// ============================================================================
// SYS-L3-05: socket网络创建 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: socket创建和基本配置
// 说明: TCP/UDP套接字创建，设置选项
// 反编译挑战: 识别socket API调用序列

int param_socket_create(void) {
    // 创建TCP套接字
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        return -1;
    }
    
    // 设置SO_REUSEADDR选项
    int opt = 1;
    if (setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) < 0) {
        close(sock);
        return -2;
    }
    
    // 绑定到本地端口（测试用端口0，自动分配）
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(0);  // 端口0，系统自动分配
    addr.sin_addr.s_addr = INADDR_ANY;
    
    if (bind(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        close(sock);
        return -3;
    }
    
    // 监听连接
    if (listen(sock, 5) < 0) {
        close(sock);
        return -4;
    }
    
    close(sock);
    return 42;  // 成功
}

int call_socket_create() {
    return param_socket_create();  // 期望: 42
}

// ============================================================================
// SYS-L3-06: shmget共享内存 ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: System V共享内存创建和访问
// 说明: 进程间共享内存，需同步机制
// 反编译挑战: 识别IPC标识符和内存映射

int param_shmget_shmat(void) {
    // 确保 ftok 使用的文件存在
    const char *ftok_path = "/tmp/binbench_shm";
    int fd = open(ftok_path, O_CREAT | O_RDWR, 0666);
    if (fd < 0) {
        return -1;  // 创建文件失败
    }
    close(fd);

    // 创建共享内存段
    key_t key = ftok("/tmp/binbench_shm", 42);
    if (key < 0) {
        return -1;
    }
    
    int shmid = shmget(key, 4096, IPC_CREAT | 0666);
    if (shmid < 0) {
        return -2;
    }
    
    // 附加共享内存到进程地址空间
    char *shm = (char*)shmat(shmid, NULL, 0);
    if (shm == (char*)-1) {
        return -3;
    }
    
    // 写入数据
    strcpy(shm, "SharedMemory");
    
    // 读取数据
    int len = strlen(shm);
    
    // 分离共享内存
    shmdt(shm);
    
    // 删除共享内存段（标记删除，最后一个进程分离时真正删除）
    shmctl(shmid, IPC_RMID, NULL);
    
    return len;  // 返回字符串长度
}

int call_shmget_shmat() {
    int ret = param_shmget_shmat();
    return ret > 0 ? 42 : -1;  // 期望: 42
}

// ============================================================================
// SYS-L3-07: signal信号处理 ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 注册信号处理函数，异步信号处理
// 说明: 信号处理函数有严格限制（async-signal-safe）
// 反编译挑战: 识别信号表和信号处理流程

// 全局变量用于信号处理通信
static volatile int signal_received = 0;
static volatile int signal_number = 0;

// 信号处理函数
static void signal_handler(int sig) {
    signal_received = 1;
    signal_number = sig;
}

int param_signal_handling(void) {
    // 注册SIGUSR1信号处理函数
    if (signal(SIGUSR1, signal_handler) == SIG_ERR) {
        return -1;
    }
    
    // 注册SIGALRM信号处理函数
    if (signal(SIGALRM, signal_handler) == SIG_ERR) {
        return -2;
    }
    
    // 向自己发送SIGUSR1信号
    signal_received = 0;
    raise(SIGUSR1);
    
    // 等待信号处理（简单轮询）
    int attempts = 1000;
    while (!signal_received && attempts-- > 0) {
        usleep(1000);  // 1ms
        // 空循环等待
    }
    
    if (!signal_received) {
        return -3;  // 信号未收到
    }
    
    // 验证信号号
    if (signal_number != SIGUSR1) {
        return -4;
    }
    
    // 测试alarm定时器
    signal_received = 0;
    alarm(1);  // 1秒后发送SIGALRM
    
    // 再次等待
    attempts = 2000;
    while (!signal_received && attempts-- > 0) {
        usleep(1000);          // 1ms * 2000 = 2s
        // 空循环等待
    }
    
    if (!signal_received || signal_number != SIGALRM) {
        return -5;
    }
    
    // 恢复默认信号处理
    signal(SIGUSR1, SIG_DFL);
    signal(SIGALRM, SIG_DFL);
    
    return 42;  // 成功
}

int call_signal_handling() {
    return param_signal_handling();  // 期望: 42
}

// ============================================================================
// 6.2节测试函数
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
// 6.3 线程与并发 - Threads & Concurrency
// ============================================================================
// 本章节测试POSIX线程(pthread)和C11原子操作
// 编译需要pthread库: gcc -pthread -O0 -g -o test_thread test_thread.c
// 或使用: gcc -O0 -g -o test_thread test_thread.c -lpthread
// ============================================================================
// THR-L3-01: pthread_create线程创建 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 创建线程，线程入口函数，参数传递
// 说明: 线程创建和启动，测试并发执行流

// 线程函数：计算平方和
void* thread_compute(void *arg) {
    int *input = (int*)arg;
    int value = *input;
    
    // 计算平方
    int result = value * value;
    
    // 返回结果（通过指针）
    int *ret = (int*)malloc(sizeof(int));
    *ret = result;
    return (void*)ret;
}

int param_pthread_create(int x) {
    pthread_t tid;
    int input = x;
    void *thread_ret;
    
    // 创建线程，传递参数
    int ret = pthread_create(&tid, NULL, thread_compute, &input);
    if (ret != 0) {
        return -1;
    }
    
    // 等待线程结束（在THR-L3-02中详细测试）
    pthread_join(tid, &thread_ret);
    
    int result = *(int*)thread_ret;
    free(thread_ret);
    
    return result;  // 返回线程计算结果
}

int call_pthread_create() {
    return param_pthread_create(7);  // 7*7 = 49
}

// ============================================================================
// THR-L3-02: pthread_join等待 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 等待线程终止，获取返回值，资源回收
// 说明: 线程同步和资源清理

// 多线程累加任务
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
    
    // 创建3个线程
    for (int i = 0; i < 3; i++) {
        if (pthread_create(&tids[i], NULL, thread_sum, &data[i]) != 0) {
            return -1;
        }
    }
    
    int total = 0;
    
    // 等待所有线程并收集结果
    for (int i = 0; i < 3; i++) {
        if (pthread_join(tids[i], NULL) != 0) {
            return -2;
        }
        total += data[i].result;
    }
    
    return total;  // 55+155+255 = 465
}

int call_pthread_join() {
    return param_pthread_join();  // 期望: 465
}

// ============================================================================
// THR-L3-03: mutex互斥锁 ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 临界区保护，防止数据竞争
// 说明: 测试锁的正确使用，避免死锁

// 共享变量（需要保护）
static volatile int shared_counter = 0;
static pthread_mutex_t counter_mutex = PTHREAD_MUTEX_INITIALIZER;

void* thread_increment(void *arg) {
    int iterations = *(int*)arg;
    
    for (int i = 0; i < iterations; i++) {
        // 进入临界区
        pthread_mutex_lock(&counter_mutex);
        
        shared_counter++;  // 受保护的操作
        
        // 离开临界区
        pthread_mutex_unlock(&counter_mutex);
        
        // 模拟工作
        usleep(1000);
    }
    
    return NULL;
}

int param_mutex_lock(int thread_count, int iterations_per_thread) {
    pthread_t *tids = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    if (tids == NULL) return -1;
    
    shared_counter = 0;  // 重置共享变量
    
    // 创建多个线程同时递增
    for (int i = 0; i < thread_count; i++) {
        if (pthread_create(&tids[i], NULL, thread_increment, &iterations_per_thread) != 0) {
            free(tids);
            return -2;
        }
    }
    
    // 等待所有线程
    for (int i = 0; i < thread_count; i++) {
        pthread_join(tids[i], NULL);
    }
    
    free(tids);
    
    // 验证结果（应等于总递增次数）
    int expected = thread_count * iterations_per_thread;
    return (shared_counter == expected) ? 42 : -3;
}

int call_mutex_lock() {
    return param_mutex_lock(4, 1000);  // 4线程×1000次 = 4000
}

// ============================================================================
// THR-L3-04: condition条件变量 ⭐⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 生产者-消费者同步，条件等待和通知
// 说明: 复杂同步模式，需配合mutex使用

static pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
static int ready = 0;
static int data = 0;

// 消费者线程
void* consumer_thread(void *arg) {
    pthread_mutex_lock(&cond_mutex);
    
    // 等待条件
    while (!ready) {
        pthread_cond_wait(&cond, &cond_mutex);
    }
    
    int received = data;  // 获取数据
    
    pthread_mutex_unlock(&cond_mutex);
    
    // 返回数据指针
    int *ret = (int*)malloc(sizeof(int));
    *ret = received;
    return (void*)ret;
}

// 生产者线程
void* producer_thread(void *arg) {
    sleep(1);  // 模拟生产延迟
    
    pthread_mutex_lock(&cond_mutex);
    
    data = 42;      // 生产数据
    ready = 1;      // 设置就绪标志
    
    pthread_cond_signal(&cond);  // 通知消费者
    
    pthread_mutex_unlock(&cond_mutex);
    
    return NULL;
}

int param_condition_variable() {
    pthread_t producer, consumer;
    
    ready = 0;
    data = 0;
    
    // 创建消费者
    if (pthread_create(&consumer, NULL, consumer_thread, NULL) != 0) {
        return -1;
    }
    
    // 创建生产者
    if (pthread_create(&producer, NULL, producer_thread, NULL) != 0) {
        pthread_cancel(consumer);
        return -2;
    }
    
    // 等待线程结束
    void *consumer_ret;
    pthread_join(consumer, &consumer_ret);
    pthread_join(producer, NULL);
    
    int result = *(int*)consumer_ret;
    free(consumer_ret);
    
    return result;  // 期望: 42
}

int call_condition_variable() {
    return param_condition_variable();  // 期望: 42
}

// ============================================================================
// THR-L3-05: 原子操作（__atomic） ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: C11原子操作，无锁并发
// 说明: 编译器内置原子操作，比mutex更高效

// static atomic_int atomic_counter = ATOMIC_VAR_INIT(0);
static atomic_int atomic_counter = 0;

void* thread_atomic_increment(void *arg) {
    int iterations = *(int*)arg;
    
    for (int i = 0; i < iterations; i++) {
        // 原子递增（无锁）
        // atomic_fetch_add(&atomic_counter, 1);
        // FIX: 加上 (volatile atomic_int*) 强转，兼容 Clang
        // atomic_fetch_add((volatile atomic_int*)&atomic_counter, 1);
        // 使用内置函数，绕过 Clang 类型检查
        __atomic_fetch_add((volatile int*)&atomic_counter, 1, __ATOMIC_SEQ_CST);
        
        // 原子比较交换（CAS）
        int expected = i;
        int desired = i + 1000;
        // atomic_compare_exchange_strong(&atomic_counter, &expected, desired);
        // atomic_compare_exchange_strong((volatile atomic_int*)&atomic_counter, &expected, desired);
        __atomic_compare_exchange_n((volatile int*)&atomic_counter, &expected, desired, 0, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST);
    }
    
    return NULL;
}

void* thread_atomic_load_store(void *arg) {
    // 原子加载
    // int value = atomic_load(&atomic_counter);
    // int value = atomic_load((volatile atomic_int*)&atomic_counter);
    int value = __atomic_load_n((volatile int*)&atomic_counter, __ATOMIC_SEQ_CST);


    // 原子存储
    // atomic_store(&atomic_counter, value + 100);
    // atomic_store((volatile atomic_int*)&atomic_counter, value + 100);
    __atomic_store_n((volatile int*)&atomic_counter, value + 100, __ATOMIC_SEQ_CST);

    return NULL;
}

int param_atomic_ops(int thread_count, int iterations) {
    pthread_t *tids = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    if (tids == NULL) return -1;
    
    // atomic_store(&atomic_counter, 0); 
    // atomic_store((volatile atomic_int*)&atomic_counter, 0);  // 原子初始化
    __atomic_store_n((volatile int*)&atomic_counter, 0, __ATOMIC_SEQ_CST);

    // 创建线程执行原子操作
    for (int i = 0; i < thread_count; i++) {
        if (pthread_create(&tids[i], NULL, thread_atomic_increment, &iterations) != 0) {
            free(tids);
            return -2;
        }
    }
    
    // 创建额外线程执行load/store
    pthread_t load_store_tid;
    if (pthread_create(&load_store_tid, NULL, thread_atomic_load_store, NULL) != 0) {
        // 继续执行，非关键错误
    } else {
        pthread_join(load_store_tid, NULL);
    }
    
    // 等待所有线程
    for (int i = 0; i < thread_count; i++) {
        pthread_join(tids[i], NULL);
    }
    
    // int final_value = atomic_load(&atomic_counter);
    int final_value = __atomic_load_n((volatile int*)&atomic_counter, __ATOMIC_SEQ_CST);
    free(tids);
    
    // 验证原子性（值应合理）
    return (final_value > 0) ? 42 : -3;
}

int call_atomic_ops() {
    return param_atomic_ops(4, 500);  // 期望: 42
}

// ============================================================================
// THR-L3-06: 线程本地存储（TLS） ⭐⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: __thread变量，每个线程独立副本
// 说明: TLS变量不共享，每个线程有自己的初始值

// 线程本地变量
static __thread int tls_counter = 100;  // 每个线程独立，初始值为100
static __thread char tls_thread_name[32];

void* thread_tls_test(void *arg) {
    const char *name = (const char*)arg;
    
    // 每个线程看到tls_counter的初始值为100
    int initial = tls_counter;  // 100
    
    // 修改只影响当前线程
    tls_counter += 50;  // 变为150
    
    // 设置线程名
    strncpy(tls_thread_name, name, sizeof(tls_thread_name) - 1);
    
    // 返回结果指针
    int *ret = (int*)malloc(sizeof(int) * 2);
    ret[0] = initial;        // 100
    ret[1] = tls_counter;    // 150
    
    return (void*)ret;
}

int param_thread_local_storage(int thread_count) {
    pthread_t *tids = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    char **names = (char**)malloc(thread_count * sizeof(char*));
    if (tids == NULL || names == NULL) return -1;
    
    // 创建线程名
    for (int i = 0; i < thread_count; i++) {
        names[i] = (char*)malloc(16);
        snprintf(names[i], 16, "Thread-%d", i);
    }
    
    // 创建线程
    for (int i = 0; i < thread_count; i++) {
        if (pthread_create(&tids[i], NULL, thread_tls_test, names[i]) != 0) {
            // 清理
            for (int j = 0; j <= i; j++) free(names[j]);
            free(names);
            free(tids);
            return -2;
        }
    }
    
    // 收集结果
    int total_initial = 0;
    int total_final = 0;
    
    for (int i = 0; i < thread_count; i++) {
        void *ret;
        pthread_join(tids[i], &ret);
        
        int *values = (int*)ret;
        total_initial += values[0];  // 每个线程的初始值（应为100）
        total_final += values[1];    // 每个线程的终值（应为150）
        
        free(values);
        free(names[i]);
    }
    
    free(names);
    free(tids);
    
    // 验证TLS独立性
    int expected_initial = thread_count * 100;
    int expected_final = thread_count * 150;
    
    return (total_initial == expected_initial && total_final == expected_final) ? 42 : -3;
}

int call_thread_local_storage() {
    return param_thread_local_storage(4);  // 期望: 42
}

// ============================================================================
// 6.3节测试函数
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


// 单独测试入口
int main() {
    test_standard_library_functions();
    test_system_calls();
    test_thread_concurrency();
    return 0;
}