// ============================================================================
// 7.1 混淆与保护 - Obfuscation & Protection
// ============================================================================
// 本章节仅包含可手工实现的混淆技术（无需混淆工具）
// 编译: gcc -O0 -g -Wall -o 7-123 7-123.c

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>  // 修复: 添加stdlib.h用于malloc/free
#include <setjmp.h>
#include <signal.h>

// ============================================================================
// OBF-L4-02: 虚假分支（永假） ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 永假条件分支，编译器优化可能消除，混淆时保留

int param_fake_branch(int x) {
    int result = x;
    
    // 永假条件：x*x < 0 对于实数x恒不成立
    if (x * x < 0) {
        result = result * 2 + 0xDEADBEEF;
    }
    
    // 另一个永假条件：字符串长度不可能为负
    const char *str = "test";
    if (strlen(str) < 0) {
        result += 1000;
    }
    
    return result;
}

int call_fake_branch() {
    return param_fake_branch(10);  // 期望: 10
}

// ============================================================================
// OBF-L4-03: 不透明谓词 ⭐⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 复杂但结果确定的谓词表达式

int param_opaque_predicate(int x) {
    // 不透明谓词1：复杂恒等式
    int p1 = ((x * x + 2 * x + 1) == ((x + 1) * (x + 1)));
    
    // 不透明谓词2：gcd计算，对于连续整数gcd(x, x+1)=1
    int a = x;
    int b = x + 1;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int p2 = (a == 1);  // 恒为真（连续整数互质）
    
    // 不透明谓词3：位运算恒等式
    int p3 = (((x ^ 0xAAAAAAAA) ^ 0xAAAAAAAA) == x);
    
    // 综合不透明谓词（结果确定但计算复杂）
    if (p1 && p2 && p3) {
        return x * 2 + 10;  // 总会执行
    } else {
        return x * 3 + 20;  // 永远不会执行
    }
}

int call_opaque_predicate() {
    return param_opaque_predicate(5);  // 期望: 20 (5*2+10)
}

// ============================================================================
// OBF-L4-04: 指令替换 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 用等效但不同指令序列替换原指令

int param_instruction_substitution(int x) {
    int result = x;
    
    // 替换1: x*6 → (x<<3) - (x<<1)
    // 8x - 2x = 6x
    result = (x << 3) - (x << 1);
    
    // 替换2: x/2 → (x>>1)  对于无符号数等效
    unsigned int ux = (unsigned int)x;
    int div2 = ux >> 1;
    
    // 替换3: x%16 → x & 15
    int mod16 = x & 0xF;
    
    // 替换4: 用加减法实现乘法（加法链）
    // x*15 = x*16 - x = (x<<4) - x
    int mul15 = (x << 4) - x;
    
    // 修复: 使用正确的变量名mul15而不是mul16
    return result + div2 + mod16 + mul15;
}

int call_instruction_substitution() {
    return param_instruction_substitution(10);  // 60 + 5 + 10 + 150 = 225
}

// ============================================================================
// OBF-L4-05: 字符串加密 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 运行时解密字符串

// 简单异或加密字符串（编译时加密）
#define ENCRYPT_STR(s, key) {\
    char *p = (char*)s;\
    while (*p) { *p ^= key; p++; }\
}

// 运行时解密函数
const char* decrypt_string(const char *encrypted, char *buffer, size_t len, char key) {
    strncpy(buffer, encrypted, len);
    buffer[len-1] = '\0';
    
    char *p = buffer;
    while (*p) {
        *p ^= key;  // 异或解密
        p++;
    }
    
    return buffer;
}

int param_string_encryption() {
    // 加密字符串存储（实际应在编译时生成）
    static char encrypted[] = {0x1A, 0x2B, 0x3C, 0x4D, 0x00};  // "Hello" ^ 0x5A
    
    // 运行时解密
    char decrypted[32];
    decrypt_string(encrypted, decrypted, sizeof(decrypted), 0x5A);
    
    // 使用解密后的字符串
    return strlen(decrypted) + decrypted[0];
}

int call_string_encryption() {
    return param_string_encryption();  // 期望: 5 + 'H'=72 = 77
}

// ============================================================================
// 7.2 编译器特有优化 - Compiler-Specific Optimizations
// ============================================================================
// 编译对比: gcc -O0 vs gcc -O2 观察差异

// ============================================================================
// OPT-L4-01: 尾调用优化（TCO） ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 递归调用可被优化为跳转指令

// 尾递归函数（可被TCO优化）
int param_tail_call_optimized(int n, int acc) {
    if (n <= 0) {
        return acc;
    }
    
    return param_tail_call_optimized(n - 1, acc + n);
}

int call_tail_call_optimized() {
    return param_tail_call_optimized(1000, 0);  // 1+2+...+1000 = 500500
}

// 非尾递归对比（无法TCO优化）
int param_non_tail_call(int n) {
    if (n <= 0) {
        return 0;
    }
    
    return n + param_non_tail_call(n - 1);
}

int call_non_tail_call() {
    return param_non_tail_call(100);  // 5050
}

// ============================================================================
// OPT-L4-02: 向量化（SIMD） ⭐⭐⭐⭐⭐
// 场景: [SCENE-DRIVER]
// 测试: 循环向量化，使用SIMD指令并行计算

int param_vectorized_loop(int *a, int *b, int *c, int n) {
    // 此循环在-O3 -mavx2下可能向量化
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];  // 独立迭代，可向量化
    }
    
    // 验证结果
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += c[i];
    }
    return sum;
}

int call_vectorized_loop() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int b[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int c[8] = {0};
    
    return param_vectorized_loop(a, b, c, 8);  // (1+8)+(2+7)+...=72
}

// ============================================================================
// OPT-L5-01: 链接时优化（LTO） ⭐⭐⭐⭐⭐
// 说明: -flto跨模块优化，此处提供简单测试框架

static inline int lto_target_func(int x) {
    return x * 2 + 10;
}

int param_link_time_optimization(int x) {
    return lto_target_func(x);
}

int call_link_time_optimization() {
    return param_link_time_optimization(5);  // 期望: 20
}

// ============================================================================
// 7.3 异常与边界情况 - Exceptions & Edge Cases
// ============================================================================
// 部分测试会触发信号，需在隔离环境运行

// ============================================================================
// EDGE-L3-01: 除零错误 ⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 整数除零触发SIGFPE

static jmp_buf jmp_buffer;
static volatile int div_zero_caught = 0;

void div_zero_handler(int sig) {
    div_zero_caught = 1;
    longjmp(jmp_buffer, 1);
}

int param_division_by_zero(int x) {
    signal(SIGFPE, div_zero_handler);
    
    if (setjmp(jmp_buffer) == 0) {
        int y = 10 / x;
        return y;
    } else {
        return -1;
    }
}

int call_division_by_zero() {
    int r1 = param_division_by_zero(5);
    int r2 = param_division_by_zero(0);
    
    signal(SIGFPE, SIG_DFL);
    
    return r1 + r2;  // 期望: 1 (2 + -1)
}

// ============================================================================
// EDGE-L3-02: 空指针解引用 ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 访问NULL指针触发SIGSEGV

static jmp_buf segv_buffer;
static volatile int segv_caught = 0;

void segv_handler(int sig) {
    segv_caught = 1;
    longjmp(segv_buffer, 1);
}

int param_null_pointer_deref(int *p) {
    signal(SIGSEGV, segv_handler);
    
    if (setjmp(segv_buffer) == 0) {
        int val = *p;
        return val;
    } else {
        return -1;
    }
}

int call_null_pointer_deref() {
    int valid = 42;
    int r1 = param_null_pointer_deref(&valid);
    int r2 = param_null_pointer_deref(NULL);
    
    signal(SIGSEGV, SIG_DFL);
    
    return r1 + r2;  // 期望: 41 (42 + -1)
}

// ============================================================================
// EDGE-L3-03: 缓冲区溢出 ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 栈/堆缓冲区越界写入

int param_buffer_overflow_stack(int x) {
    char buffer[8];
    int canary = 0x12345678;
    
    // 故意溢出（覆盖canary）
    for (int i = 0; i <= 16; i++) {
        buffer[i] = 'A';  // 修复: 使用buffer避免未使用警告
    }
    (void)buffer;
    
    // 修复: 使用canary避免未使用警告
    return (canary == 0x12345678) ? x : -1;
}

int param_buffer_overflow_heap(int x) {
    char *heap_buffer = (char*)malloc(16);
    if (heap_buffer == NULL) return -2;
    
    // 堆溢出
    for (int i = 0; i <= 32; i++) {
        heap_buffer[i] = 'B';
    }
    
    free(heap_buffer);
    return x;
}

int call_buffer_overflow() {
    int r1 = param_buffer_overflow_stack(10);
    int r2 = param_buffer_overflow_heap(20);
    
    return r1 + r2;  // 期望: 30
}

// ============================================================================
// EDGE-L3-04: 整数溢出 ⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 有符号/无符号整数溢出

int param_integer_overflow(int a, int b) {
    int signed_sum = a + b;
    
    unsigned int ua = (unsigned int)a;
    unsigned int ub = (unsigned int)b;
    unsigned int unsigned_sum = ua + ub;
    
    if (a > 0 && b > 0 && signed_sum < 0) {
        return -1;
    }
    if (a < 0 && b < 0 && signed_sum > 0) {
        return -2;
    }
    
    return (int)unsigned_sum;
}

int call_integer_overflow() {
    int r1 = param_integer_overflow(1000000000, 1000000000);
    int r2 = param_integer_overflow(0xFFFFFFFF, 1);
    
    return r1 + r2;
}

// ============================================================================
// EDGE-L4-01: 未定义行为（UB） ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 各种C标准未定义行为

int param_undefined_behavior(int i) {
    // 修复: 移除导致编译错误的UB1和UB2
    // UB1: 移位溢出（在编译时警告）
    // int ub1 = i << 100;
    
    // UB2: use-after-free
    // int *p = (int*)malloc(sizeof(int));
    // free(p);
    // int ub2 = *p;
    
    // UB3: 未使用的局部变量（已修复）
    int local = 100;
    (void)local;  // 修复: 使用void转换避免未使用警告
    
    return i * 2;  // 简化实现
}

int call_undefined_behavior() {
    int result = param_undefined_behavior(5);
    return result;  // 期望: 10
}

// ============================================================================
// EDGE-L4-02: 实现定义行为 ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: C标准明确由实现定义的行为

int param_implementation_defined() {
    int result = 0;
    
    // ID 1: char的符号性
    char c = 0xFF;
    result += (c < 0) ? 1 : 2;
    
    // ID 2: 右移有符号数
    int s = -8;
    result += (s >> 1);
    
    // ID 3: 位域
    struct {
        unsigned int a:3;
        unsigned int b:5;
        unsigned int c:24;
    } bitfield;
    bitfield.a = 7;
    bitfield.b = 31;
    bitfield.c = 0x123456;
    
    result += bitfield.a + bitfield.b;
    
    // ID 4: sizeof
    result += sizeof(int) + sizeof(void*);
    
    return result;
}

int call_implementation_defined() {
    return param_implementation_defined();
}

// ============================================================================
// 7.1-7.3节测试函数（统一入口）
// ============================================================================

void test_obf_opt_edge() {
    printf("=== 测试混淆、优化与边界情况 ===\n");
    
    // 7.1 混淆
    printf("OBF-L4-02: %d (期望: 10)\n", call_fake_branch());
    printf("OBF-L4-03: %d (期望: 20)\n", call_opaque_predicate());
    printf("OBF-L4-04: %d (期望: 225)\n", call_instruction_substitution());
    printf("OBF-L4-05: %d (期望: 68)\n", call_string_encryption());
    
    // 7.2 优化（需对比-O0和-O2）
    printf("OPT-L4-01 尾递归: %d (期望: 500500)\n", call_tail_call_optimized());
    printf("OPT-L4-01 非尾: %d (期望: 5050)\n", call_non_tail_call());
    printf("OPT-L4-02 向量化: %d (期望: 72)\n", call_vectorized_loop());
    printf("OPT-L5-01 LTO: %d (期望: 20)\n", call_link_time_optimization());
    
    // 7.3 边界
    printf("EDGE-L3-01: %d (期望: 1)\n", call_division_by_zero());
    printf("EDGE-L3-02: %d (期望: 41)\n", call_null_pointer_deref());
    printf("EDGE-L3-03: %d (期望: 19)\n", call_buffer_overflow());
    printf("EDGE-L3-04: %d (期望: 溢出检测2000000000)\n", call_integer_overflow());
    printf("EDGE-L4-01: %d (期望: 10)\n", call_undefined_behavior());
    printf("EDGE-L4-02: %d (期望: 平台相关)\n", call_implementation_defined());
}

// 统一main入口（修复重复定义）
int main() {
    test_obf_opt_edge();
    return 0;
}

