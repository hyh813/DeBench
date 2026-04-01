// ============================================================================
// 5.2 预处理与条件编译 - Preprocessing & Conditional Compilation
// ============================================================================
// 本章节测试预处理器行为，需保留预处理前后代码对比
// 编译时建议使用: gcc -E -dM 观察预处理结果
// 反编译挑战: 恢复原始宏语义（预处理后的代码丢失宏信息）

// ============================================================================
// PP-L2-01: 宏定义常量 ⭐
// 场景: [SCENE-ALL]
// 测试: 编译时宏替换
#define _GNU_SOURCE

#include <stdio.h>
#include <stdint.h>
// 只有 x86 架构才包含 SIMD 头文件
#if defined(__x86_64__) || defined(__i386__)
    #include <immintrin.h>
#endif
#include <stdatomic.h>  // atomic_fetch_add
#include <sys/mman.h>   // mmap, munmap, mprotect, PROT_*, MAP_*
#ifndef MAP_ANONYMOUS
    #ifdef MAP_ANON
        #define MAP_ANONYMOUS MAP_ANON
    #else
        #define MAP_ANONYMOUS 0x20
    #endif
#endif

#include <unistd.h>     // sysconf, _SC_PAGESIZE
#include <string.h>     // memcpy

#define MAX_SIZE 1024
#define BUFFER_COUNT 16
#define ENABLE_FEATURE 1

int param_macro_constants(int size) {
    // 预处理后会替换为: if (size > 1024) return 16 * 4;
    if (size > MAX_SIZE) {
        return BUFFER_COUNT * 4;  // 16*4=64
    }
    return MAX_SIZE / 2;  // 1024/2=512
}

int call_macro_constants() {
    return param_macro_constants(2048);  // 期望: 64
}

// ============================================================================
// PP-L2-02: 宏函数 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 带参数的宏，内联展开
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SAFE_ADD(x, y) (((x) + (y)) & 0xFFFF)

// 宏函数在预处理时展开，反编译时需识别原始语义
int param_macro_functions(int x, int y) {
    // 预处理展开: ((x) * (x)) + ((x) > (y) ? (x) : (y))
    return SQUARE(x) + MAX(x, y);
}

int call_macro_functions() {
    return param_macro_functions(5, 3);  // 25 + 5 = 30
}

// ============================================================================
// PP-L2-03: 条件编译（#ifdef）⭐⭐
// 场景: [SCENE-ALL]
// 测试: 根据宏定义选择编译代码分支
// 编译时定义: -DDEBUG_MODE 可切换分支

int param_conditional_compile(int x) {
    int result = x;
    
#ifdef DEBUG_MODE
    // 当定义DEBUG_MODE时编译此分支
    result = result * 2 + 1;  // 调试版本
#else
    // 未定义DEBUG_MODE时编译此分支
    result = result * 3 + 2;  // 发布版本
#endif
    
    return result;
}

int call_conditional_compile() {
    return param_conditional_compile(10);  // 未定义DEBUG_MODE: 32
}

// ============================================================================
// PP-L2-04: 多分支条件编译 ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: #if-#elif-#else复杂条件编译
// 编译时定义不同宏可测试不同分支

int param_multi_branch_compile(int x) {
    // 根据PLATFORM宏选择不同实现
    // 编译时: -DPLATFORM=1 或 -DPLATFORM=2 或 -DPLATFORM=3
    
#if PLATFORM == 1
    // x86平台特定实现
    return x * 2 + 0x1234;
#elif PLATFORM == 2
    // ARM平台特定实现
    return x * 3 + 0x5678;
#elif PLATFORM == 3
    // MIPS平台特定实现
    return x * 4 + 0x9ABC;
#else
    // 默认实现
    return x * 5 + 0xDEF0;
#endif
}

int call_multi_branch_compile() {
    return param_multi_branch_compile(10);  // 默认分支: 10*5+0xDEF0=0xDF22
}

// ============================================================================
// PP-L3-01: 宏递归展开 ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 宏嵌套展开，编译器有递归深度限制（通常为64-512层）
// 注: 现代编译器对宏递归有保护，本例展示多层嵌套

#define ADD_1(x) ((x) + 1)
#define ADD_2(x) ADD_1(ADD_1(x))
#define ADD_4(x) ADD_2(ADD_2(x))
#define ADD_8(x) ADD_4(ADD_4(x))
#define ADD_16(x) ADD_8(ADD_8(x))
#define ADD_32(x) ADD_16(ADD_16(x))

int param_macro_recursion(int x) {
    // 展开为: ((((((((((((x)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)
    return ADD_16(x);  // x + 16
}

int call_macro_recursion() {
    return param_macro_recursion(100);  // 期望: 116
}

// ============================================================================
// PP-L3-02: 字符串化（#） ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: #操作符将宏参数转换为字符串字面量
#define STRINGIZE(x) #x
#define TO_STRING(x) STRINGIZE(x)
#define VERSION 1.2.3

// 宏参数转字符串
int param_stringize(int value) {
    // 字符串化在预处理时完成
    const char* str1 = STRINGIZE(Hello World);  // "Hello World"
    const char* str2 = TO_STRING(VERSION);      // "1.2.3"
    const char* str3 = TO_STRING(__LINE__);     // 当前行号字符串
    
    // 返回字符串长度之和
    return strlen(str1) + strlen(str2) + strlen(str3);
}

int call_stringize() {
    return param_stringize(0);  // 11 + 5 + 行号长度
}

// ============================================================================
// PP-L3-03: 标记粘贴（##） ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: ##操作符连接两个标记为一个新标识符
#define CONCAT(a, b) a##b
#define MAKE_FUNC_NAME(prefix) CONCAT(prefix, _func)

// 通过宏动态生成函数名调用
int my_func(int x) { return x * 10; }

int param_token_paste(int x) {
    // 预处理时展开为: result = my_func(x);
    int result = MAKE_FUNC_NAME(my)(x);  // 调用my_func
    
    // 另一个例子：生成变量名
    int CONCAT(temp, __LINE__) = x + 5;  // temp_行号
    result += CONCAT(temp, __LINE__);    // 使用生成的变量名
    
    return result;
}

int call_token_paste() {
    return param_token_paste(5);  // 5*10 + (5+5) = 60
}

// ============================================================================
// PP-L3-04: 可变参数宏 ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: __VA_ARGS__处理变长参数列表
#define LOG(format, ...) printf("LOG: " format "\n", __VA_ARGS__)
#define COUNT_ARGS(...) (sizeof((int[]){__VA_ARGS__}) / sizeof(int))

int param_variadic_macro(int x, int y, int z) {
    // 可变参数宏在预处理时展开
    LOG("Values: %d, %d, %d", x, y, z);  // 展开为printf
    
    // 计算参数个数
    int count = COUNT_ARGS(1, 2, 3, 4, 5);  // 5
    
    return count * 10 + x;
}

int call_variadic_macro() {
    return param_variadic_macro(10, 20, 30);  // 5*10+10 = 60
}

// ============================================================================
// PP-L3-05: 宏覆盖与重定义 ⭐⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: #undef和宏重定义行为

#define ORIGINAL_FUNC(x) ((x) + 1)

int param_macro_override(int x) {
    int r1 = ORIGINAL_FUNC(x);  // x + 1
    
    // 重定义宏（实际应谨慎使用）
#undef ORIGINAL_FUNC
#define ORIGINAL_FUNC(x) ((x) * 2)
    
    int r2 = ORIGINAL_FUNC(x);  // x * 2
    
    return r1 + r2;  // (x+1) + (x*2)
}

int call_macro_override() {
    return param_macro_override(5);  // 6 + 10 = 16
}

// ============================================================================
// PP-L3-06: 包含文件防护（Include Guards）⭐⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 防止头文件重复包含
// 本文件本身可作为测试，但为演示创建模拟头文件内容

// 模拟头文件内容（实际应放在单独.h文件中）
#ifndef MOCK_HEADER_H
#define MOCK_HEADER_H

// 头文件内容
static int header_func(int x) {
    return x * 100;
}

#endif  // MOCK_HEADER_H

// 再次"包含"（模拟重复包含）
#ifndef MOCK_HEADER_H
#define MOCK_HEADER_H

// 不应重复定义
static int header_func(int x) {
    return x * 200;  // 不同实现
}

#endif

int param_include_guard() {
    // 调用头文件中的函数
    return header_func(5);  // 期望: 500（第一个版本）
}

int call_include_guard() {
    return param_include_guard();  // 500
}

// ============================================================================
// PP-L3-07: 编译器内置宏 ⭐⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: __FILE__, __LINE__, __func__, __DATE__, __TIME__等

int param_builtin_macros(int x) {
    // 内置宏在预处理时替换为字符串/数字
    const char* file = __FILE__;          // 当前文件名
    int line = __LINE__;                  // 当前行号
    const char* func = __func__;          // 当前函数名（C99，非预处理）
    const char* date = __DATE__;          // 编译日期
    const char* time = __TIME__;          // 编译时间

    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", file, func, line, date, time);
    
    // __COUNTER__宏（扩展特性）
    int counter1 = __COUNTER__;  // 0
    int counter2 = __COUNTER__;  // 1
    int counter3 = __COUNTER__;  // 2
    
    return x + line + counter1 + counter2 + counter3;
}

int call_builtin_macros() {
    return param_builtin_macros(100);  // 100 + 行号 + 0+1+2
}

// ============================================================================
// 5.2节测试函数
// ============================================================================

void test_preprocessing_features() {
    printf("=== 测试预处理与条件编译 ===\n");
    
    printf("PP-L2-01: %d (期望: 64)\n", call_macro_constants());
    printf("PP-L2-02: %d (期望: 30)\n", call_macro_functions());
    printf("PP-L2-03: %d (期望: 32)\n", call_conditional_compile());
    printf("PP-L2-04: %d (期望: 0xDF22)\n", call_multi_branch_compile()); //57122 是 0xDF22 的十进制表示
    printf("PP-L3-01: %d (期望: 116)\n", call_macro_recursion());
    printf("PP-L3-02: %d (期望: 11+5+行号长度)\n", call_stringize());
    printf("PP-L3-03: %d (期望: 60)\n", call_token_paste());
    printf("PP-L3-04: %d (期望: 60)\n", call_variadic_macro());
    printf("PP-L3-05: %d (期望: 16)\n", call_macro_override());
    printf("PP-L3-06: %d (期望: 500)\n", call_include_guard());
    printf("PP-L3-07: %d (期望: 100+行号+0+1+2)\n", call_builtin_macros());
}


// ============================================================================
// 5.3 内联汇编与底层特性 - Inline Assembly & Low-Level Features
// ============================================================================
// 本章节包含平台相关代码，主要针对x86_64架构
// 编译需支持SSE/AVX指令集
// 编译命令: gcc -msse2 -O0 -g -o test_asm test_asm.c
// ============================================================================
// ASM-L4-01: x86_64基础内联汇编 ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 基础内联汇编语法，寄存器操作
// 说明: 使用AT&T语法，约束条件控制寄存器分配

int param_asm_basic(int x) {
    int result;
#if defined(__x86_64__) || defined(__i386__)

    // 基础内联汇编: 将输入x移动到eax，加10后存入result
    __asm__ volatile (
        "movl %1, %%eax\n\t"  // 将x移动到eax
        "addl $10, %%eax\n\t" // eax加10
        "movl %%eax, %0\n\t"  // 将eax移动到result
        : "=r" (result)       // 输出: 任意寄存器 -> result
        : "r" (x)             // 输入: x -> 任意寄存器
        : "%eax"              // clobber: eax被修改
    );
#else
    result = x + 10; // 通用实现
#endif
    return result;  // x + 10
}

int call_asm_basic() {
    return param_asm_basic(5);  // 期望: 15
}

// ============================================================================
// ASM-L4-02: 带CLOBBER的汇编 ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 正确声明clobber列表，避免编译器优化冲突
// 说明: 告知编译器哪些寄存器/内存被汇编代码隐式修改

int param_asm_clobber(int *arr, int n) {
    // 使用汇编实现数组求和，重点展示clobber的正确使用
    int sum = 0;
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile (
        "xorl %%eax, %%eax\n\t"     // eax清零（累加器）
        "xorl %%ecx, %%ecx\n\t"     // ecx清零（循环索引）
        "1:\n\t"                    // 循环开始标签
        "cmpl %2, %%ecx\n\t"        // 比较 ecx 和 n
        "jge 2f\n\t"                // 如果 ecx >= n 则跳出
        // "addl (%1,%%rcx,4), %%eax\n\t"  // eax += arr[ecx]
        // 32位 x86 使用 ecx，64位使用 rcx
#if defined(__x86_64__)
        "addl (%1,%%rcx,4), %%eax\n\t"
#else
        "addl (%1,%%ecx,4), %%eax\n\t"
#endif
        "incl %%ecx\n\t"            // ecx++
        "jmp 1b\n\t"                // 跳回循环开始
        "2:\n\t"                    // 循环结束标签
        "movl %%eax, %0\n\t"        // 将结果存入sum
        : "=r" (sum)                // 输出操作数
        : "r" (arr), "r" (n)        // 输入操作数
        : "%eax", "%ecx", "cc"      // clobber列表：eax和ecx被修改，cc表示条件码
    );
#else
    for(int i=0; i<n; i++) sum += arr[i]; // 通用实现
#endif
    return sum;
}
int call_asm_clobber() {
    int arr[] = {1, 2, 3, 4, 5};
    return param_asm_clobber(arr, 5);  // 期望: 15
}

// ============================================================================
// ASM-L4-03: 多指令汇编块 ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 复杂汇编逻辑，内存访问，控制流
// 说明: 实现简单memcpy功能，展示多指令协作

void param_asm_multi_insn(void *dst, const void *src, size_t n) {
#if defined(__x86_64__) || defined(__i386__)
    // 使用汇编实现内存拷贝（简化版）
    __asm__ volatile (
        "cld\n\t"                   // 清除方向标志（向前）
        "1:\n\t"
#if defined(__x86_64__)
        "cmpq $0, %2\n\t"           // 比较n和0
#else
        "cmpl $0, %2\n\t"           // 32位比较
#endif
        "je 2f\n\t"                 // 如果n==0跳转
        "movb (%1), %%al\n\t"       // 从src读1字节到al
        "movb %%al, (%0)\n\t"       // 从al写1字节到dst
        "inc %0\n\t"                // dst++
        "inc %1\n\t"                // src++
        "dec %2\n\t"                // n--
        "jmp 1b\n\t"                // 循环
        "2:\n\t"
        : "+r" (dst), "+r" (src), "+r" (n)  // 输入输出
        :
        : "%al", "cc", "memory"      // clobber: al, 标志, memory
    );
#else
    memcpy(dst, src, n); // 通用实现
#endif
}

int call_asm_multi_insn() {
    char src[] = "Hello ASM";
    char dst[32] = {0};
    
    param_asm_multi_insn(dst, src, 9);
    
    // 验证拷贝结果
    return (dst[0] == 'H' && dst[4] == 'o') ? 42 : -1;  // 期望: 42
}

// ============================================================================
// ASM-L4-04: SIMD指令（SSE/AVX）⭐⭐⭐⭐⭐
// 场景: [SCENE-DRIVER]
// 测试: 向量寄存器操作，数据并行
// 说明: 使用SSE2指令集进行整数向量加法
// 兼容性修改：非 x86 架构使用标准 C 循环模拟

int param_asm_simd(int *a, int *b, int *result) {
#if defined(__x86_64__) || defined(__i386__)
    // 使用SSE加载128位向量，执行add，存储结果
    __asm__ volatile (
        "movaps (%1), %%xmm0\n\t"   // xmm0 = a[0..3]
        "movaps (%2), %%xmm1\n\t"   // xmm1 = b[0..3]
        "paddd %%xmm1, %%xmm0\n\t"  // xmm0 = xmm0 + xmm1（向量加法）
        "movaps %%xmm0, (%0)\n\t"   // result[0..3] = xmm0
        :
        : "r" (result), "r" (a), "r" (b)
        : "%xmm0", "%xmm1", "memory"
    );
#else
    // --- ARM/MIPS 的通用实现 ---
    for(int i=0; i<4; i++) {
        result[i] = a[i] + b[i];
    }
#endif
    return 0;
}

// 使用intrinsics版本作为对比（更易读）
int param_simd_intrinsics(int *a, int *b, int *result) {
#if defined(__x86_64__) || defined(__i386__)
    __m128i vec_a = _mm_load_si128((__m128i*)a);
    __m128i vec_b = _mm_load_si128((__m128i*)b);
    __m128i vec_sum = _mm_add_epi32(vec_a, vec_b);
    _mm_store_si128((__m128i*)result, vec_sum);
#else
    // --- ARM/MIPS 的通用实现 ---
    for(int i=0; i<4; i++) {
        result[i] = a[i] + b[i];
    }
#endif
    return 0;
}

int call_asm_simd() {
    int a[] = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    int result[4];
    
    param_asm_simd(a, b, result);
    
    // result应为{6, 8, 10, 12}
    return result[0] + result[1] + result[2] + result[3];  // 36
}

// ============================================================================
// ASM-L4-05: 原子操作指令 ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 原子内存操作，内存屏障，lock前缀
// 说明: 使用x86 lock指令实现原子加法

int param_asm_atomic(int *counter, int increment) {
    // 原子加操作（lock xadd）
    int old_value;
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile (
        "lock xadd %0, (%2)\n\t"    // 原子交换并加，lock保证总线锁定
        : "=r" (old_value)          // 输出: 旧值
        : "0" (increment), "r" (counter)  // 输入: increment, counter地址
        : "memory", "cc"            // clobber: memory和标志
    );
#else
    // 使用 GCC 内置原子操作，适用于 ARM/MIPS
    old_value = __atomic_fetch_add(counter, increment, __ATOMIC_SEQ_CST);
#endif
    return old_value + increment;  // 返回新值
}

// 使用C11原子操作作为对比
int param_atomic_c11(int *counter, int increment) {
    // 最通用的写法是让编译器自己推导，不要画蛇添足加 (_Atomic int*)
    // return atomic_fetch_add(counter, increment) + increment;
    // FIX: 使用 __atomic_fetch_add 内置函数，它允许对普通 int* 进行操作
    // __ATOMIC_SEQ_CST 是最强的内存序，等同于默认行为
    return __atomic_fetch_add(counter, increment, __ATOMIC_SEQ_CST) + increment;
}

int call_asm_atomic() {
    int counter = 10;
    
    int new_val = param_asm_atomic(&counter, 5);  // counter变为15，返回15
    
    return counter + new_val;  // 15 + 15 = 30
}

// ============================================================================
// ASM-L4-06: 特权指令 ⭐⭐⭐⭐⭐
// 场景: [SCENE-KERNEL]
// 测试: 内核态指令（用户态会触发SIGILL），内存保护机制、动态代码生成、页面权限管理
// 说明: 特权指令只能在Linux内核模块或Ring0执行
// 本测试使用mprotect实现类似SMC（自修改代码）效果。演示mprotect修改内存页保护属性，以及自修改代码的实现

// 测试1：动态代码生成（自修改代码 - Self-Modifying Code）
int param_dynamic_code(int x) {
    // 分配可执行内存页
    size_t page_size = sysconf(_SC_PAGESIZE);
    void *exec_mem = mmap(NULL, page_size, 
                         PROT_READ | PROT_WRITE | PROT_EXEC,
                         MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (exec_mem == MAP_FAILED) return -1;

#if defined(__x86_64__)
    // 生成x86_64机器码: mov eax, edi; add eax, 5; ret
    // x86_64调用约定：第一个整数参数通过edi/rdi传递
    unsigned char code[] = {
        0x89, 0xf8,        // mov eax, edi  (将参数移到eax)
        0x83, 0xc0, 0x05,  // add eax, 5    (eax += 5)
        0xc3               // ret           (返回)
    };
    
    memcpy(exec_mem, code, sizeof(code));
    
    // 执行动态生成的代码
    typedef int (*func_t)(int);
    func_t dynamic_func = (func_t)exec_mem;
    int result = dynamic_func(x);
#else
    // 其他架构：直接模拟结果，避免崩坏
    // 因为这只是编译测试，我们不需要手写 ARM 机器码
    int result = x + 5;
#endif
    
    // 清理
    munmap(exec_mem, page_size);
    
    return result;  // x + 5
}
// 测试2：内存保护属性修改
int param_memory_protection() {
    size_t page_size = sysconf(_SC_PAGESIZE);
    
    // 分配一页内存（初始为读写）
    void *mem = mmap(NULL, page_size,
                    PROT_READ | PROT_WRITE,
                    MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (mem == MAP_FAILED) return -1;
    
    // 写入数据
    int *data = (int*)mem;
    data[0] = 42;
    
    // 修改保护属性为只读
    if (mprotect(mem, page_size, PROT_READ) != 0) {
        munmap(mem, page_size);
        return -2;
    }
    
    // 读取数据（成功）
    int value = data[0];
    
    // 尝试写入会导致SIGSEGV（这里不实际写入，仅演示流程）
    // data[0] = 100;  // 取消注释会导致段错误
    
    // 恢复读写权限
    if (mprotect(mem, page_size, PROT_READ | PROT_WRITE) != 0) {
        munmap(mem, page_size);
        return -3;
    }
    
    // 现在可以写入
    data[0] = 100;
    
    // 清理
    munmap(mem, page_size);
    
    return value;  // 返回42
}
// 测试3：验证clobber的必要性
int param_clobber_importance(int a, int b) {
#if defined(__x86_64__) || defined(__i386__)
    int result1, result2;
    
    // 正确声明clobber
    __asm__ volatile (
        "movl %1, %%eax\n\t"
        "addl %2, %%eax\n\t"
        "movl %%eax, %0\n\t"
        : "=r" (result1)
        : "r" (a), "r" (b)
        : "%eax"           // 正确声明eax被修改
    );
    
    // 不声明clobber可能导致编译器错误优化
    // 注意：这只是演示，实际上编译器可能仍然正确工作
    __asm__ volatile (
        "movl %1, %%edx\n\t"
        "addl %2, %%edx\n\t"
        "movl %%edx, %0\n\t"
        : "=r" (result2)
        : "r" (a), "r" (b)
        : "%edx"           // 声明edx被修改
    );
    
    return result1 + result2;  // (a+b) + (a+b) = 2*(a+b)
#else
    return (a + b) * 2; // 通用实现
#endif

}
int call_asm_privileged() {
    // 测试1：动态代码生成
    int r1 = param_dynamic_code(10);  // 期望: 15
    
    // 测试2：内存保护
    int r2 = param_memory_protection();  // 期望: 42
    
    // 测试3：clobber重要性
    int r3 = param_clobber_importance(3, 7);  // 期望: 20
    
    // 综合结果验证
    if (r1 == 15 && r2 == 42 && r3 == 20) {
        return 77;  // 所有测试通过
    }
    
    return r1;  // 返回第一个测试结果用于调试
}
// ============================================================================
// 补充：展示memory clobber的作用
// ============================================================================
int global_var = 100;
int param_memory_clobber_demo() {
    int local = 50;
    int result;
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile (
        "movl %1, %%eax\n\t"
        "addl %2, %%eax\n\t"   // 使用 %2 引用第三个操作数（global_var）
        "movl %%eax, %0\n\t"
        : "=r" (result)
        : "r" (local),
            "m" (global_var)      // %2: 使用 "m" 约束表示内存操作数
        : "%eax", "memory"     // memory告诉编译器：所有内存可能被修改
    );
#else
    result = local + global_var; // 通用实现
#endif
    return result;  // local + global_var = 150
}
// ============================================================================
// 5.3节测试函数
// ============================================================================

void test_asm_features() {
    printf("=== 测试内联汇编与底层特性 ===\n");
    
    printf("ASM-L4-01: %d (期望: 15)\n", call_asm_basic());
    printf("ASM-L4-02: %d (期望: 15)\n", call_asm_clobber());
    printf("ASM-L4-03: %d (期望: 42)\n", call_asm_multi_insn());
    printf("ASM-L4-04: %d (期望: 36)\n", call_asm_simd());
    printf("ASM-L4-05: %d (期望: 30)\n", call_asm_atomic());
    printf("ASM-L4-06: %d (期望: 77)\n", call_asm_privileged());
}


// 单独测试入口
int main() {
    test_preprocessing_features();
    test_asm_features();
    return 0;
}
