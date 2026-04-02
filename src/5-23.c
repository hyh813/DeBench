// ============================================================================
// 5.2 Preprocessing & Conditional Compilation - Preprocessing & Conditional Compilation
// ============================================================================
// This chapter tests the behavior of the preprocessor. It is necessary to keep the code comparison before and after preprocessing.
// It is recommended to use: gcc -E -dM when compiling to observe the preprocessing results
// Decompilation challenge: Restore original macro semantics (preprocessed code loses macro information)

// ============================================================================
// PP-L2-01: Macro definition constant ⭐
// Scenario: [SCENE-ALL]
// Test: Compile-time macro substitution
#define _GNU_SOURCE

#include <stdio.h>
#include <stdint.h>
// Only x86 architectures include SIMD headers
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
    // After preprocessing, it will be replaced with: if (size > 1024) return 16 * 4;
    if (size > MAX_SIZE) {
        return BUFFER_COUNT * 4;  // 16*4=64
    }
    return MAX_SIZE / 2;  // 1024/2=512
}

int call_macro_constants() {
    return param_macro_constants(2048);  // Expectation: 64
}

// ============================================================================
// PP-L2-02: Macro function ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Macro with parameters, inline expansion
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SAFE_ADD(x, y) (((x) + (y)) & 0xFFFF)

// Macro functions are expanded during preprocessing, and the original semantics need to be identified during decompilation.
int param_macro_functions(int x, int y) {
    // Preprocessing expansion: ((x) * (x)) + ((x) > (y) ? (x) : (y))
    return SQUARE(x) + MAX(x, y);
}

int call_macro_functions() {
    return param_macro_functions(5, 3);  // 25 + 5 = 30
}

// ============================================================================
// PP-L2-03: Conditional compilation (#ifdef) ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Select the compiled code branch according to the macro definition
// Compile time definition: -DDEBUG_MODE switchable branch

int param_conditional_compile(int x) {
    int result = x;
    
#ifdef DEBUG_MODE
    // Compile this branch when DEBUG_MODE is defined
    result = result * 2 + 1;  // Debug version
#else
    // Compile this branch when DEBUG_MODE is not defined
    result = result * 3 + 2;  // release version
#endif
    
    return result;
}

int call_conditional_compile() {
    return param_conditional_compile(10);  // DEBUG_MODE: 32 is not defined
}

// ============================================================================
// PP-L2-04: Multi-branch conditional compilation ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: #if-#elif-#else complex conditional compilation
// Define different macros at compile time to test different branches

int param_multi_branch_compile(int x) {
    // Choose different implementations based on the PLATFORM macro
    // When compiling: -DPLATFORM=1 or -DPLATFORM=2 or -DPLATFORM=3
    
#if PLATFORM == 1
    // x86 platform specific implementation
    return x * 2 + 0x1234;
#elif PLATFORM == 2
    // ARM platform specific implementation
    return x * 3 + 0x5678;
#elif PLATFORM == 3
    // MIPS platform specific implementation
    return x * 4 + 0x9ABC;
#else
    // Default implementation
    return x * 5 + 0xDEF0;
#endif
}

int call_multi_branch_compile() {
    return param_multi_branch_compile(10);  // Default branch: 10*5+0xDEF0=0xDF22
}

// ============================================================================
// PP-L3-01: Macro recursive expansion ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: macro nested expansion, the compiler has a recursion depth limit (usually 64-512 levels)
// Note: Modern compilers have protection against macro recursion. This example shows multiple levels of nesting.

#define ADD_1(x) ((x) + 1)
#define ADD_2(x) ADD_1(ADD_1(x))
#define ADD_4(x) ADD_2(ADD_2(x))
#define ADD_8(x) ADD_4(ADD_4(x))
#define ADD_16(x) ADD_8(ADD_8(x))
#define ADD_32(x) ADD_16(ADD_16(x))

int param_macro_recursion(int x) {
    // Expands to: ((((((((((((x)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)+1)
    return ADD_16(x);  // x + 16
}

int call_macro_recursion() {
    return param_macro_recursion(100);  // Expectation: 116
}

// ============================================================================
// PP-L3-02: Stringification (#) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: #operator converts macro parameters into string literals
#define STRINGIZE(x) #x
#define TO_STRING(x) STRINGIZE(x)
#define VERSION 1.2.3

// Convert macro parameters to string
int param_stringize(int value) {
    // Stringification is done during preprocessing
    const char* str1 = STRINGIZE(Hello World);  // "Hello World"
    const char* str2 = TO_STRING(VERSION);      // "1.2.3"
    const char* str3 = TO_STRING(__LINE__);     // Current line number string
    
    // Returns the sum of string lengths
    return strlen(str1) + strlen(str2) + strlen(str3);
}

int call_stringize() {
    return param_stringize(0);  // 11 + 5 + line number length
}

// ============================================================================
// PP-L3-03: Tag Paste (##) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: ##operator concatenates two tokens into a new identifier
#define CONCAT(a, b) a##b
#define MAKE_FUNC_NAME(prefix) CONCAT(prefix, _func)

// Dynamically generate function name calls through macros
int my_func(int x) { return x * 10; }

int param_token_paste(int x) {
    // Expanded during preprocessing: result = my_func(x);
    int result = MAKE_FUNC_NAME(my)(x);  // call my_func
    
    // Another example: generating variable names
    int CONCAT(temp, __LINE__) = x + 5;  // temp_line number
    result += CONCAT(temp, __LINE__);    // Use generated variable names
    
    return result;
}

int call_token_paste() {
    return param_token_paste(5);  // 5*10 + (5+5) = 60
}

// ============================================================================
// PP-L3-04: Variable parameter macro ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: __VA_ARGS__ handles variable length argument lists
#define LOG(format, ...) printf("LOG: " format "\n", __VA_ARGS__)
#define COUNT_ARGS(...) (sizeof((int[]){__VA_ARGS__}) / sizeof(int))

int param_variadic_macro(int x, int y, int z) {
    // Variadic macros are expanded during preprocessing
    LOG("Values: %d, %d, %d", x, y, z);  // Expand to printf
    
    // Calculate the number of parameters
    int count = COUNT_ARGS(1, 2, 3, 4, 5);  // 5
    
    return count * 10 + x;
}

int call_variadic_macro() {
    return param_variadic_macro(10, 20, 30);  // 5*10+10 = 60
}

// ============================================================================
// PP-L3-05: Macro coverage and redefinition ⭐⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: #undef and macro redefinition behavior

#define ORIGINAL_FUNC(x) ((x) + 1)

int param_macro_override(int x) {
    int r1 = ORIGINAL_FUNC(x);  // x + 1
    
    // Redefine macros (actually should be used with caution)
#undef ORIGINAL_FUNC
#define ORIGINAL_FUNC(x) ((x) * 2)
    
    int r2 = ORIGINAL_FUNC(x);  // x * 2
    
    return r1 + r2;  // (x+1) + (x*2)
}

int call_macro_override() {
    return param_macro_override(5);  // 6 + 10 = 16
}

// ============================================================================
// PP-L3-06: Include Guards⭐⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: Prevent repeated inclusion of header files
// This file itself serves as a test, but creates mock header content for demonstration

// Simulate header file content (actually should be placed in a separate .h file)
#ifndef MOCK_HEADER_H
#define MOCK_HEADER_H

// Header file content
static int header_func(int x) {
    return x * 100;
}

#endif  // MOCK_HEADER_H

// "Include" again (simulating repeated inclusion)
#ifndef MOCK_HEADER_H
#define MOCK_HEADER_H

// Definitions should not be repeated
static int header_func(int x) {
    return x * 200;  // different implementations
}

#endif

int param_include_guard() {
    // Call functions in header files
    return header_func(5);  // Expectation: 500 (first version)
}

int call_include_guard() {
    return param_include_guard();  // 500
}

// ============================================================================
// PP-L3-07: Compiler built-in macro ⭐⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: __FILE__, __LINE__, __func__, __DATE__, __TIME__, etc.

int param_builtin_macros(int x) {
    // Built-in macros replace strings/numbers during preprocessing
    const char* file = __FILE__;          // current file name
    int line = __LINE__;                  // Current line number
    const char* func = __func__;          // Current function name (C99, non-preprocessed)
    const char* date = __DATE__;          // Compilation date
    const char* time = __TIME__;          // compile time

    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", file, func, line, date, time);
    
    // __COUNTER__ macro (extended feature)
    int counter1 = __COUNTER__;  // 0
    int counter2 = __COUNTER__;  // 1
    int counter3 = __COUNTER__;  // 2
    
    return x + line + counter1 + counter2 + counter3;
}

int call_builtin_macros() {
    return param_builtin_macros(100);  // 100 + line number + 0+1+2
}

// ============================================================================
// Section 5.2 Test Function
// ============================================================================

void test_preprocessing_features() {
    printf("=== 测试预处理与条件编译 ===\n");
    
    printf("PP-L2-01: %d (期望: 64)\n", call_macro_constants());
    printf("PP-L2-02: %d (期望: 30)\n", call_macro_functions());
    printf("PP-L2-03: %d (期望: 32)\n", call_conditional_compile());
    printf("PP-L2-04: %d (期望: 0xDF22)\n", call_multi_branch_compile()); // 57122 is the decimal representation of 0xDF22
    printf("PP-L3-01: %d (期望: 116)\n", call_macro_recursion());
    printf("PP-L3-02: %d (期望: 11+5+行号长度)\n", call_stringize());
    printf("PP-L3-03: %d (期望: 60)\n", call_token_paste());
    printf("PP-L3-04: %d (期望: 60)\n", call_variadic_macro());
    printf("PP-L3-05: %d (期望: 16)\n", call_macro_override());
    printf("PP-L3-06: %d (期望: 500)\n", call_include_guard());
    printf("PP-L3-07: %d (期望: 100+行号+0+1+2)\n", call_builtin_macros());
}


// ============================================================================
// 5.3 Inline Assembly & Low-Level Features
// ============================================================================
// This chapter contains platform-related code, mainly for x86_64 architecture
// Compilation needs to support SSE/AVX instruction set
// Compile command: gcc -msse2 -O0 -g -o test_asm test_asm.c
// ============================================================================
// ASM-L4-01: x86_64 basic inline assembly ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: basic inline assembly syntax, register operations
// Description: Using AT&T syntax, constraints control register allocation

int param_asm_basic(int x) {
    int result;
#if defined(__x86_64__) || defined(__i386__)

    // Basic inline assembly: move input x to eax, add 10 and store it in result
    __asm__ volatile (
        "movl %1, %%eax\n\t"  // move x to eax
        "addl $10, %%eax\n\t" // eax plus 10
        "movl %%eax, %0\n\t"  // Move eax to result
        : "=r" (result)       // Output: any register -> result
        : "r" (x)             // Input: x -> any register
        : "%eax"              // clobber: eax is modified
    );
#else
    result = x + 10; // Generic implementation
#endif
    return result;  // x + 10
}

int call_asm_basic() {
    return param_asm_basic(5);  // Expectation: 15
}

// ============================================================================
// ASM-L4-02: Assembly with CLOBBER ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Declare the clobber list correctly to avoid compiler optimization conflicts
// Description: Tells the compiler which registers/memory are implicitly modified by the assembly code

int param_asm_clobber(int *arr, int n) {
    // Use assembly to implement array summation, focusing on the correct use of clobber
    int sum = 0;
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile (
        "xorl %%eax, %%eax\n\t"     // eax cleared (accumulator)
        "xorl %%ecx, %%ecx\n\t"     // ecx clear (loop index)
        "1:\n\t"                    // Loop start tag
        "cmpl %2, %%ecx\n\t"        // Compare ecx and n
        "jge 2f\n\t"                // If ecx >= n then jump out
        // "addl (%1,%%rcx,4), %%eax\n\t"  // eax += arr[ecx]
        // 32-bit x86 uses ecx, 64-bit uses rcx
#if defined(__x86_64__)
        "addl (%1,%%rcx,4), %%eax\n\t"
#else
        "addl (%1,%%ecx,4), %%eax\n\t"
#endif
        "incl %%ecx\n\t"            // ecx++
        "jmp 1b\n\t"                // Jump back to the beginning of the loop
        "2:\n\t"                    // loop end tag
        "movl %%eax, %0\n\t"        // Store the result in sum
        : "=r" (sum)                // Output operand
        : "r" (arr), "r" (n)        // input operand
        : "%eax", "%ecx", "cc"      // clobber list: eax and ecx are modified, cc represents the condition code
    );
#else
    for(int i=0; i<n; i++) sum += arr[i]; // Generic implementation
#endif
    return sum;
}
int call_asm_clobber() {
    int arr[] = {1, 2, 3, 4, 5};
    return param_asm_clobber(arr, 5);  // Expectation: 15
}

// ============================================================================
// ASM-L4-03: Multiple instruction assembly block ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: complex assembly logic, memory access, control flow
// Description: Implement simple memcpy function and demonstrate multi-instruction collaboration

void param_asm_multi_insn(void *dst, const void *src, size_t n) {
#if defined(__x86_64__) || defined(__i386__)
    // Using assembly to implement memory copy (simplified version)
    __asm__ volatile (
        "cld\n\t"                   // Clear direction flag (forward)
        "1:\n\t"
#if defined(__x86_64__)
        "cmpq $0, %2\n\t"           // Compare n to 0
#else
        "cmpl $0, %2\n\t"           // 32-bit comparison
#endif
        "je 2f\n\t"                 // Jump if n==0
        "movb (%1), %%al\n\t"       // Read 1 byte from src to al
        "movb %%al, (%0)\n\t"       // Write 1 byte from al to dst
        "inc %0\n\t"                // dst++
        "inc %1\n\t"                // src++
        "dec %2\n\t"                // n--
        "jmp 1b\n\t"                // loop
        "2:\n\t"
        : "+r" (dst), "+r" (src), "+r" (n)  // Input and output
        :
        : "%al", "cc", "memory"      // clobber: al, flag, memory
    );
#else
    memcpy(dst, src, n); // Generic implementation
#endif
}

int call_asm_multi_insn() {
    char src[] = "Hello ASM";
    char dst[32] = {0};
    
    param_asm_multi_insn(dst, src, 9);
    
    // Verify copy results
    return (dst[0] == 'H' && dst[4] == 'o') ? 42 : -1;  // Expectations: 42
}

// ============================================================================
// ASM-L4-04: SIMD instructions (SSE/AVX) ⭐⭐⭐⭐⭐
// Scene: [SCENE-DRIVER]
// Test: vector register operations, data parallelism
// Description: Integer vector addition using the SSE2 instruction set
// Compatibility change: Non-x86 architectures use standard C loop emulation

int param_asm_simd(int *a, int *b, int *result) {
#if defined(__x86_64__) || defined(__i386__)
    // Use SSE to load a 128-bit vector, perform add, and store the result
    __asm__ volatile (
        "movaps (%1), %%xmm0\n\t"   // xmm0 = a[0..3]
        "movaps (%2), %%xmm1\n\t"   // xmm1 = b[0..3]
        "paddd %%xmm1, %%xmm0\n\t"  // xmm0 = xmm0 + xmm1 (vector addition)
        "movaps %%xmm0, (%0)\n\t"   // result[0..3] = xmm0
        :
        : "r" (result), "r" (a), "r" (b)
        : "%xmm0", "%xmm1", "memory"
    );
#else
    // --- Generic implementation of ARM/MIPS ---
    for(int i=0; i<4; i++) {
        result[i] = a[i] + b[i];
    }
#endif
    return 0;
}

// Use the intrinsics version for comparison (more readable)
int param_simd_intrinsics(int *a, int *b, int *result) {
#if defined(__x86_64__) || defined(__i386__)
    __m128i vec_a = _mm_load_si128((__m128i*)a);
    __m128i vec_b = _mm_load_si128((__m128i*)b);
    __m128i vec_sum = _mm_add_epi32(vec_a, vec_b);
    _mm_store_si128((__m128i*)result, vec_sum);
#else
    // --- Generic implementation of ARM/MIPS ---
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
    
    // result should be {6, 8, 10, 12}
    return result[0] + result[1] + result[2] + result[3];  // 36
}

// ============================================================================
// ASM-L4-05: Atomic operation instructions ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Atomic memory operations, memory barriers, lock prefix
// Description: Use x86 lock instruction to implement atomic addition

int param_asm_atomic(int *counter, int increment) {
    // Atomic addition operation (lock xadd)
    int old_value;
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile (
        "lock xadd %0, (%2)\n\t"    // Atomic swap and add, lock ensures bus lock
        : "=r" (old_value)          // Output: old value
        : "0" (increment), "r" (counter)  // Input: increment, counter address
        : "memory", "cc"            // clobber: memory and flags
    );
#else
    // Using GCC built-in atomic operations for ARM/MIPS
    old_value = __atomic_fetch_add(counter, increment, __ATOMIC_SEQ_CST);
#endif
    return old_value + increment;  // Return new value
}

// Using C11 atomic operations for comparison
int param_atomic_c11(int *counter, int increment) {
    // The most common way to write it is to let the compiler deduce it by itself, without adding superfluous information (_Atomic int*)
    // return atomic_fetch_add(counter, increment) + increment;
    // FIX: Use the __atomic_fetch_add built-in function, which allows operations on plain int*
    // __ATOMIC_SEQ_CST is the strongest memory order, equivalent to the default behavior
    return __atomic_fetch_add(counter, increment, __ATOMIC_SEQ_CST) + increment;
}

int call_asm_atomic() {
    int counter = 10;
    
    int new_val = param_asm_atomic(&counter, 5);  // counter changes to 15 and returns 15
    
    return counter + new_val;  // 15 + 15 = 30
}

// ============================================================================
// ASM-L4-06: Privileged Command ⭐⭐⭐⭐⭐
// Scene: [SCENE-KERNEL]
// Test: kernel mode instructions (user mode will trigger SIGILL), memory protection mechanism, dynamic code generation, page permission management
// Note: Privileged instructions can only be executed in the Linux kernel module or Ring0
// This test uses mprotect to achieve an effect similar to SMC (self-modifying code). Demonstrates mprotect's modification of memory page protection attributes and the implementation of self-modifying code

// Test 1: Dynamic code generation (Self-Modifying Code)
int param_dynamic_code(int x) {
    // Allocate executable memory pages
    size_t page_size = sysconf(_SC_PAGESIZE);
    void *exec_mem = mmap(NULL, page_size, 
                         PROT_READ | PROT_WRITE | PROT_EXEC,
                         MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (exec_mem == MAP_FAILED) return -1;

#if defined(__x86_64__)
    // Generate x86_64 machine code: mov eax, edi; add eax, 5; ret
    // x86_64 calling convention: first integer argument passed via edi/rdi
    unsigned char code[] = {
        0x89, 0xf8,        // mov eax, edi (move parameters to eax)
        0x83, 0xc0, 0x05,  // add eax, 5    (eax += 5)
        0xc3               // ret (return)
    };
    
    memcpy(exec_mem, code, sizeof(code));
    
    // Execute dynamically generated code
    typedef int (*func_t)(int);
    func_t dynamic_func = (func_t)exec_mem;
    int result = dynamic_func(x);
#else
    // Other architectures: directly simulate results to avoid crashes
    // Since this is just a compilation test, we don't need to hand-write ARM machine code
    int result = x + 5;
#endif
    
    // clean up
    munmap(exec_mem, page_size);
    
    return result;  // x + 5
}
// Test 2: Memory protection attribute modification
int param_memory_protection() {
    size_t page_size = sysconf(_SC_PAGESIZE);
    
    // Allocate a page of memory (initially read and write)
    void *mem = mmap(NULL, page_size,
                    PROT_READ | PROT_WRITE,
                    MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    if (mem == MAP_FAILED) return -1;
    
    // Write data
    int *data = (int*)mem;
    data[0] = 42;
    
    // Modify the protection attribute to read-only
    if (mprotect(mem, page_size, PROT_READ) != 0) {
        munmap(mem, page_size);
        return -2;
    }
    
    // Read data (successful)
    int value = data[0];
    
    // Attempting to write results in SIGSEGV (no actual writing here, just demonstration process)
    // data[0] = 100; // Uncommenting will cause a segfault
    
    // Restore read and write permissions
    if (mprotect(mem, page_size, PROT_READ | PROT_WRITE) != 0) {
        munmap(mem, page_size);
        return -3;
    }
    
    // It is now possible to write
    data[0] = 100;
    
    // clean up
    munmap(mem, page_size);
    
    return value;  // Return 42
}
// Test 3: Verify the necessity of clobber
int param_clobber_importance(int a, int b) {
#if defined(__x86_64__) || defined(__i386__)
    int result1, result2;
    
    // Declare clobber correctly
    __asm__ volatile (
        "movl %1, %%eax\n\t"
        "addl %2, %%eax\n\t"
        "movl %%eax, %0\n\t"
        : "=r" (result1)
        : "r" (a), "r" (b)
        : "%eax"           // Correctly declare that eax is modified
    );
    
    // Not declaring clobber may cause the compiler to optimize incorrectly
    // NOTE: This is just a demonstration, in reality the compiler may still work correctly
    __asm__ volatile (
        "movl %1, %%edx\n\t"
        "addl %2, %%edx\n\t"
        "movl %%edx, %0\n\t"
        : "=r" (result2)
        : "r" (a), "r" (b)
        : "%edx"           // Statement edx was modified
    );
    
    return result1 + result2;  // (a+b) + (a+b) = 2*(a+b)
#else
    return (a + b) * 2; // Generic implementation
#endif

}
int call_asm_privileged() {
    // Test 1: Dynamic code generation
    int r1 = param_dynamic_code(10);  // Expectation: 15
    
    // Test 2: Memory Protection
    int r2 = param_memory_protection();  // Expectations: 42
    
    // Test 3: importance of clobber
    int r3 = param_clobber_importance(3, 7);  // Expectation: 20
    
    // Comprehensive results verification
    if (r1 == 15 && r2 == 42 && r3 == 20) {
        return 77;  // All tests passed
    }
    
    return r1;  // Return the first test result for debugging
}
// ============================================================================
// Supplement: Show the role of memory clobber
// ============================================================================
int global_var = 100;
int param_memory_clobber_demo() {
    int local = 50;
    int result;
#if defined(__x86_64__) || defined(__i386__)
    __asm__ volatile (
        "movl %1, %%eax\n\t"
        "addl %2, %%eax\n\t"   // Use %2 to reference the third operand (global_var)
        "movl %%eax, %0\n\t"
        : "=r" (result)
        : "r" (local),
            "m" (global_var)      // %2: Use "m" constraint to represent memory operands
        : "%eax", "memory"     // memory tells the compiler: all memory may be modified
    );
#else
    result = local + global_var; // Generic implementation
#endif
    return result;  // local + global_var = 150
}
// ============================================================================
// Section 5.3 Test Function
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


// Individual test entry
int main() {
    test_preprocessing_features();
    test_asm_features();
    return 0;
}
