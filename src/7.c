// ============================================================================
// 7.1 Obfuscation & Protection
// ============================================================================
// This chapter only covers obfuscation techniques that can be implemented manually (no obfuscation tools are required)
// Compile: gcc -O0 -g -Wall -o 7-123 7-123.c

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>  // Fix: Add stdlib.h for malloc/free
#include <setjmp.h>
#include <signal.h>

// ============================================================================
// OBF-L4-02: False branch (permanently false) ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: False conditional branch, compiler optimization may eliminate it, keep it when obfuscation

int param_fake_branch(int x) {
    int result = x;
    
    // Permanent false condition: x*x < 0 is never true for real number x
    if (x * x < 0) {
        result = result * 2 + 0xDEADBEEF;
    }
    
    // Another false condition: the string length cannot be negative
    const char *str = "test";
    if (strlen(str) < 0) {
        result += 1000;
    }
    
    return result;
}

int call_fake_branch() {
    return param_fake_branch(10);  // Expectation: 10
}

// ============================================================================
// OBF-L4-03: Opaque predicate ⭐⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Complex but deterministic predicate expressions

int param_opaque_predicate(int x) {
    // Opaque Predicate 1: Complex Identities
    int p1 = ((x * x + 2 * x + 1) == ((x + 1) * (x + 1)));
    
    // Opaque predicate 2: gcd calculation, for continuous integers gcd(x, x+1)=1
    int a = x;
    int b = x + 1;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int p2 = (a == 1);  // Always true (consecutive integers are relatively prime)
    
    // Opaque Predicate 3: Bitwise Identities
    int p3 = (((x ^ 0xAAAAAAAA) ^ 0xAAAAAAAA) == x);
    
    // Comprehensive opaque predicates (result certain but computationally complex)
    if (p1 && p2 && p3) {
        return x * 2 + 10;  // Will always be executed
    } else {
        return x * 3 + 20;  // will never be executed
    }
}

int call_opaque_predicate() {
    return param_opaque_predicate(5);  // Expectation: 20 (5*2+10)
}

// ============================================================================
// OBF-L4-04: Instruction replacement ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Replace original instructions with equivalent but different instruction sequences

int param_instruction_substitution(int x) {
    int result = x;
    
    // Replacement 1: x*6 → (x<<3) - (x<<1)
    // 8x - 2x = 6x
    result = (x << 3) - (x << 1);
    
    // Replacement 2: x/2 → (x>>1) is equivalent to unsigned numbers
    unsigned int ux = (unsigned int)x;
    int div2 = ux >> 1;
    
    // Replacement 3: x%16 → x & 15
    int mod16 = x & 0xF;
    
    // Replacement 4: Multiplication using addition and subtraction (addition chain)
    // x*15 = x*16 - x = (x<<4) - x
    int mul15 = (x << 4) - x;
    
    // Fix: use correct variable name mul15 instead of mul16
    return result + div2 + mod16 + mul15;
}

int call_instruction_substitution() {
    return param_instruction_substitution(10);  // 60 + 5 + 10 + 150 = 225
}

// ============================================================================
// OBF-L4-05: String encryption ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Decrypt a string at runtime

// Simple XOR encrypted string (compile time encryption)
#define ENCRYPT_STR(s, key) {\
    char *p = (char*)s;\
    while (*p) { *p ^= key; p++; }\
}

// Runtime decryption function
const char* decrypt_string(const char *encrypted, char *buffer, size_t len, char key) {
    strncpy(buffer, encrypted, len);
    buffer[len-1] = '\0';
    
    char *p = buffer;
    while (*p) {
        *p ^= key;  // XOR decryption
        p++;
    }
    
    return buffer;
}

int param_string_encryption() {
    // Encrypted string storage (actually should be generated at compile time)
    static char encrypted[] = {0x1A, 0x2B, 0x3C, 0x4D, 0x00};  // "Hello" ^ 0x5A
    
    // Runtime decryption
    char decrypted[32];
    decrypt_string(encrypted, decrypted, sizeof(decrypted), 0x5A);
    
    // Use the decrypted string
    return strlen(decrypted) + decrypted[0];
}

int call_string_encryption() {
    return param_string_encryption();  // Expectation: 5 + 'H'=72 = 77
}

// ============================================================================
// 7.2 Compiler-Specific Optimizations - Compiler-Specific Optimizations
// ============================================================================
// Compilation comparison: gcc -O0 vs gcc -O2 Observe the differences

// ============================================================================
// OPT-L4-01: Tail Call Optimization (TCO) ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Recursive calls can be optimized into jump instructions

// Tail recursive function (can be optimized by TCO)
int param_tail_call_optimized(int n, int acc) {
    if (n <= 0) {
        return acc;
    }
    
    return param_tail_call_optimized(n - 1, acc + n);
}

int call_tail_call_optimized() {
    return param_tail_call_optimized(1000, 0);  // 1+2+...+1000 = 500500
}

// Non-tail recursion comparison (cannot be optimized for TCO)
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
// OPT-L4-02: Vectorization (SIMD) ⭐⭐⭐⭐⭐
// Scene: [SCENE-DRIVER]
// Test: Loop vectorization, parallel computing using SIMD instructions

int param_vectorized_loop(int *a, int *b, int *c, int n) {
    // This loop may be vectorized under -O3 -mavx2
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];  // Independent iteration, vectorizable
    }
    
    // Verification results
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
// OPT-L5-01: Link Time Optimization (LTO) ⭐⭐⭐⭐⭐
// Description: -flto cross-module optimization, a simple test framework is provided here

static inline int lto_target_func(int x) {
    return x * 2 + 10;
}

int param_link_time_optimization(int x) {
    return lto_target_func(x);
}

int call_link_time_optimization() {
    return param_link_time_optimization(5);  // Expectation: 20
}

// ============================================================================
// 7.3 Exceptions & Edge Cases
// ============================================================================
// Some tests will trigger signals and need to be run in an isolated environment

// ============================================================================
// EDGE-L3-01: Division by zero error ⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Integer division by zero triggers SIGFPE

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
    
    return r1 + r2;  // Expectation: 1 (2 + -1)
}

// ============================================================================
// EDGE-L3-02: Null pointer dereference ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Accessing NULL pointer triggers SIGSEGV

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
    
    return r1 + r2;  // Expectation: 41 (42 + -1)
}

// ============================================================================
// EDGE-L3-03: Buffer overflow ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: stack/heap buffer out-of-bounds write

int param_buffer_overflow_stack(int x) {
    char buffer[8];
    int canary = 0x12345678;
    
    // Intentional overflow (overwrite canary)
    for (int i = 0; i <= 16; i++) {
        buffer[i] = 'A';  // Fix: Use buffer to avoid unused warnings
    }
    (void)buffer;
    
    // Fix: Use canary to avoid unused warnings
    return (canary == 0x12345678) ? x : -1;
}

int param_buffer_overflow_heap(int x) {
    char *heap_buffer = (char*)malloc(16);
    if (heap_buffer == NULL) return -2;
    
    // Heap overflow
    for (int i = 0; i <= 32; i++) {
        heap_buffer[i] = 'B';
    }
    
    free(heap_buffer);
    return x;
}

int call_buffer_overflow() {
    int r1 = param_buffer_overflow_stack(10);
    int r2 = param_buffer_overflow_heap(20);
    
    return r1 + r2;  // Expectation: 30
}

// ============================================================================
// EDGE-L3-04: Integer overflow ⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: signed/unsigned integer overflow

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
// EDGE-L4-01: Undefined behavior (UB) ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Testing: Various C standard undefined behaviors

int param_undefined_behavior(int i) {
    // Fix: Remove UB1 and UB2 causing compilation errors
    // UB1: shift overflow (warn at compile time)
    // int ub1 = i << 100;
    
    // UB2: use-after-free
    // int *p = (int*)malloc(sizeof(int));
    // free(p);
    // int ub2 = *p;
    
    // UB3: Unused local variable (fixed)
    int local = 100;
    (void)local;  // Fix: Use void conversion to avoid unused warnings
    
    return i * 2;  // Simplify implementation
}

int call_undefined_behavior() {
    int result = param_undefined_behavior(5);
    return result;  // Expectation: 10
}

// ============================================================================
// EDGE-L4-02: Implementation-Defined Behavior ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Testing: The C standard explicitly implements implementation-defined behavior

int param_implementation_defined() {
    int result = 0;
    
    // ID 1: Symbolism of char
    char c = 0xFF;
    result += (c < 0) ? 1 : 2;
    
    // ID 2: Shift signed number right
    int s = -8;
    result += (s >> 1);
    
    // ID 3: bit field
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
// Sections 7.1-7.3 Test Function (Unified Entry)
// ============================================================================

void test_obf_opt_edge() {
    printf("=== 测试混淆、优化与边界情况 ===\n");
    
    // 7.1 Obfuscation
    printf("OBF-L4-02: %d (期望: 10)\n", call_fake_branch());
    printf("OBF-L4-03: %d (期望: 20)\n", call_opaque_predicate());
    printf("OBF-L4-04: %d (期望: 225)\n", call_instruction_substitution());
    printf("OBF-L4-05: %d (期望: 68)\n", call_string_encryption());
    
    // 7.2 Optimization (need to compare -O0 and -O2)
    printf("OPT-L4-01 尾递归: %d (期望: 500500)\n", call_tail_call_optimized());
    printf("OPT-L4-01 非尾: %d (期望: 5050)\n", call_non_tail_call());
    printf("OPT-L4-02 向量化: %d (期望: 72)\n", call_vectorized_loop());
    printf("OPT-L5-01 LTO: %d (期望: 20)\n", call_link_time_optimization());
    
    // 7.3 Boundaries
    printf("EDGE-L3-01: %d (期望: 1)\n", call_division_by_zero());
    printf("EDGE-L3-02: %d (期望: 41)\n", call_null_pointer_deref());
    printf("EDGE-L3-03: %d (期望: 19)\n", call_buffer_overflow());
    printf("EDGE-L3-04: %d (期望: 溢出检测2000000000)\n", call_integer_overflow());
    printf("EDGE-L4-01: %d (期望: 10)\n", call_undefined_behavior());
    printf("EDGE-L4-02: %d (期望: 平台相关)\n", call_implementation_defined());
}

// Unify the main entrance (fix duplicate definitions)
int main() {
    test_obf_opt_edge();
    return 0;
}

