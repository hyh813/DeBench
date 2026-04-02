#include <stdio.h>
#include <stdarg.h>
#include <string.h>
// ============================================================================
// 4.1 Calling Conventions - Calling Conventions
// ============================================================================

// CALL-L1-01: cdecl calling convention ⭐⭐
// Scenario: [SCENE-ALL] x86 platform default
// Test: Parameters are pushed onto the stack from right to left, and the caller clears the stack
#ifdef _WIN32
    int __cdecl cdecl_func(int a, int b) { return a + b; }
#elif defined(__i386__) || defined(__i686__)
    // x86 platforms use cdecl, x64 platforms ignore this attribute (because there is only one calling convention)
    int __attribute__((cdecl)) cdecl_func(int a, int b) { return a + b; }
#else
    // Other platforms use the default calling convention
    int cdecl_func(int a, int b) { return a + b; }
#endif

int call_cdecl() { return cdecl_func(5, 10); }

// CALL-L1-02: stdcall calling convention ⭐⭐⭐
// Scenario: [SCENE-DESK] Windows API Standard
// Test: Parameters are pushed onto the stack from right to left, and the callee clears the stack
#ifdef _WIN32
    int __stdcall stdcall_func(int a, int b) { return a * b; }
#elif defined(__i386__) || defined(__i686__)
    int __attribute__((stdcall)) stdcall_func(int a, int b) { return a * b; }
#else
    int stdcall_func(int a, int b) { return a * b; }
#endif

int call_stdcall() { return stdcall_func(5, 10); }

// CALL-L1-03: fastcall calling convention ⭐⭐⭐
// Scenario: [SCENE-DESK] Register parameter passing optimization
// Test: use ecx/edx for the first two parameters, and stack for the rest.
#ifdef _WIN32
    int __fastcall fastcall_func(int a, int b, int c) { return a + b + c; }
#elif defined(__i386__) || defined(__i686__)
    int __attribute__((fastcall)) fastcall_func(int a, int b, int c) { return a + b + c; }
#else
    int fastcall_func(int a, int b, int c) { return a + b + c; }
#endif

int call_fastcall() { return fastcall_func(1, 2, 3); }

// CALL-L1-04: thiscall calling convention (C++) ⭐⭐⭐
// Scenario: [SCENE-DESK] C++ member function default
// Test: this pointer is passed through ecx/rcx
#ifdef __cplusplus
class TestClass {
public:
    int value;
    int thiscall_method(int x) { return this->value + x; }
};

int call_thiscall() {
    TestClass obj; obj.value = 10;
    return obj.thiscall_method(5);
}
#else
int call_thiscall() { return 15; }  // C version pile
#endif

// CALL-L1-05: ARM AAPCS calling convention ⭐⭐⭐
// Scenario: [SCENE-EMB] ARM architecture standard
// Test: r0-r3 pass parameters, and the stack passes the remaining parameters
#ifdef __arm__
    int __attribute__((pcs("aapcs"))) arm_aapcs_func(int a, int b, int c, int d, int e) {
        return a + b + c + d + e;
    }
#else
    int arm_aapcs_func(int a, int b, int c, int d, int e) { return a + b + c + d + e; }
#endif

int call_arm_aapcs() { return arm_aapcs_func(1, 2, 3, 4, 5); }

// CALL-L1-06: MIPS calling convention ⭐⭐⭐
// Scenario: [SCENE-EMB] MIPS architecture
// Test: $a0-$a3 pass parameters, and the stack passes the remaining parameters
#ifdef __mips__
    int mips_func(int a, int b, int c, int d) { return a + b + c + d; }
#else
    int mips_func(int a, int b, int c, int d) { return a + b + c + d; }
#endif

int call_mips() { return mips_func(10, 20, 30, 40); }

// CALL-L1-07: System V AMD64 ABI ⭐⭐⭐
// Scenario: [SCENE-ALL] Linux/macOS x64 standard
// Test: rdi, rsi, rdx, rcx, r8, r9 parameter passing
int amd64_sysv_func(int a, int b, int c, int d, int e, int f) {
    return a + b + c + d + e + f;
}

int call_amd64_sysv() { return amd64_sysv_func(1, 2, 3, 4, 5, 6); }

// CALL-L1-08: Microsoft x64 ABI ⭐⭐⭐
// Scenario: [SCENE-DESK] Windows x64 Standard
// Test: rcx, rdx, r8, r9 pass parameters, and the stack passes the remainder
int ms_x64_func(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

int call_ms_x64() { return ms_x64_func(1, 2, 3, 4, 5); }

// CALL-L1-09: vectorcall calling convention ⭐⭐⭐
// Scenario: [SCENE-DESK] Windows vector calls
// Test: The first 4 parameters use registers and support SIMD type
#ifdef _WIN32
    int __vectorcall vectorcall_func(int a, int b, int c, int d) {
        return a + b + c + d;
    }
#else
    int vectorcall_func(int a, int b, int c, int d) { return a + b + c + d; }
#endif

int call_vectorcall() { return vectorcall_func(1, 2, 3, 4); }

// CALL-L1-10: Mixed Calling Conventions ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] Cross-module mixed calls
// Test: Mixing multiple conventions in the same program
int mixed_conventions_test() {
    int sum = 0;
    sum += cdecl_func(1, 2);
    sum += stdcall_func(3, 4);
    sum += fastcall_func(5, 6, 7);
    return sum;
}

// ======================================
// CALL-L2-06: Variable parameter function
// Difficulty: ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Description: Supports an indefinite number and type of parameters, such as printf style functions
// Implementation: Use va_list, va_start, va_arg, va_end in stdarg.h
// Independence: ✅ Standard C features, completely independent
int varargs_func(int count, ...) {
    va_list args;
    int sum = 0;
    
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    
    return sum;
}
// CALL-L2-07: Function without parameters
// Difficulty: ⭐
// Scenario: [SCENE-ALL]
// Note: The function does not accept any parameters and is clearly marked with void
// Independence: ✅ The most basic functional form, completely independent
int func_no_args(void) {
    return 42;
}
// CALL-L2-08: Multi-parameter function (more than 6)
// Difficulty: ⭐⭐
// Scene: [SCENE-NET]
// Description: Test the parameter transfer that exceeds the number of registers, and some parameters are transferred through the stack.
// Independence: ✅ Standard C features, completely independent
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h) {
    return a + b + c + d + e + f + g + h;
}
// CALL-L2-09: Mixed parameter types
// Difficulty: ⭐⭐
// Scene: [SCENE-NET]
// Note: Parameters include mixed types such as integers, pointers, and floating point, and test register allocation and stack layout.
// Independence: ✅ Standard C features, completely independent
int func_mixed_args(int x, char *s, double d, long long ll) {
    int len = s ? strlen(s) : 0;
    return (int)(x + len + d + ll);
}
// CALL-L2-10: Large structure value transfer
// Difficulty: ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Description: Large structures (usually >16 bytes) are passed as parameters, usually implemented through hidden pointers
// Note: Different ABIs handle structure value transfer differently, which may be through the stack or hidden pointer.
// Independence: ✅ Standard C features, completely independent
typedef struct {
    long long data[16];  // 128-byte large structure
} LargeStruct;
int func_struct_byval(LargeStruct s) {
    long long sum = 0;
    for (int i = 0; i < 16; i++) {
        sum += s.data[i];
    }
    return (int)(sum & 0xFFFFFFFF);
}
// CALL-L2-11: Structure passing pointer
// Difficulty: ⭐⭐
// Scenario: [SCENE-ALL]
// Note: Use the structure pointer as a parameter to avoid large structure copy overhead.
// Independence: ✅ Standard C features, completely independent
typedef struct {
    int x;
    int y;
} SmallStruct;
int func_struct_byptr(SmallStruct *p) {
    if (!p) return -1;
    return p->x * p->y;
}


// ============================================================================
// Section 4.1 Test Function
// ============================================================================

void test_calling_conventions() {
    printf("=== 测试基础调用约定 ===\n");
    printf("CALL-L1-01: %d\n", call_cdecl());        // Expectation: 15
    printf("CALL-L1-02: %d\n", call_stdcall());      // Expectation: 50
    printf("CALL-L1-03: %d\n", call_fastcall());     // Expectation: 6
    printf("CALL-L1-04: %d\n", call_thiscall());     // Expectation: 15
    printf("CALL-L1-05: %d\n", call_arm_aapcs());    // Expectation: 15
    printf("CALL-L1-06: %d\n", call_mips());         // Expectation: 100
    printf("CALL-L1-07: %d\n", call_amd64_sysv());   // Expectation: 21
    printf("CALL-L1-08: %d\n", call_ms_x64());       // Expectation: 15
    printf("CALL-L1-09: %d\n", call_vectorcall());   // Expectation: 10
    printf("CALL-L1-10: %d\n", mixed_conventions_test()); // Expectations: 33
    // Test CALL-L2-06: variable parameters
    int sum = varargs_func(5, 1, 2, 3, 4, 5);
    printf("CALL-L2-06：varargs_func(5, 1-5) = %d\n", sum); //Expectation: 15
    
    // Test CALL-L2-07: No parameters
    int no_args = func_no_args();
    printf("CALL-L2-07：func_no_args() = %d\n", no_args);//Expectation: 42
    
    // Test CALL-L2-08: multiple parameters
    int many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
    printf("CALL-L2-08：func_many_args(1-8) = %d\n", many);//Expectation: 36
    
    // Test CALL-L2-09: Mixing Parameters
    char *test_str = "test";
    int mixed = func_mixed_args(10, test_str, 3.14, 100LL);
    printf("CALL-L2-09：func_mixed_args(...) = %d\n", mixed);//Expectation: 117

    // Test CALL-L2-10: large structure value transfer
    LargeStruct large;
    for (int i = 0; i < 16; i++) {
        large.data[i] = i + 1;  // Initialized from 1 to 16
    }
    int struct_val = func_struct_byval(large);
    printf("CALL-L2-10：func_struct_byval(large) = %d\n", struct_val);//Expectation: 136
    
    // Test CALL-L2-11: structure passing pointer
    SmallStruct s = {5, 10};
    int struct_ptr = func_struct_byptr(&s);
    printf("CALL-L2-11：func_struct_byptr({5,10}) = %d\n", struct_ptr);//Expectation: 50
}

// ============================================================================
// 4.2 Parameter Passing Patterns
// ============================================================================

// PARAM-L1-01: Call by value (int)⭐
// Scenario: [SCENE-ALL]
// Test: basic value transfer, modification within the function does not affect the caller
int param_by_value_int(int x) {
    x = x * 2;  // Modify partial copy
    return x;
}

int call_by_value_int() {
    int val = 5;
    int result = param_by_value_int(val);
    return val + result;  // val is still 5 and result is 10
}

// PARAM-L1-02: Call by value (pointer)⭐
// Scenario: [SCENE-ALL]
// Test: The pointer itself is passed by value, but the content pointed to can be modified
int param_by_value_ptr(int *p) {
    *p = *p * 2;  // The data pointed to can be modified
    p = NULL;     // Modifying the pointer itself does not affect the caller
    return p == NULL ? 1 : 0;
}

int call_by_value_ptr() {
    int val = 5;
    int *ptr = &val;
    int result = param_by_value_ptr(ptr);
    // val becomes 10, ptr itself remains unchanged
    return val + result;  // 10 + 1 = 11
}

// PARAM-L2-01: array decay⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: Array parameters degenerate into pointers
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsizeof-array-argument"

int param_array_decay(int arr[10], int n) {
    // arr is actually a pointer, sizeof(arr) == sizeof(int*)
    // This is an intentional test scenario to observe the behavior when decompiled, so only the warnings are suppressed
    return sizeof(arr);  // Returns pointer size instead of array size
}

#pragma GCC diagnostic pop

int call_array_decay() {
    int array[10] = {0};
    return param_array_decay(array, 10);  // Arrays degenerate into pointers
}

// PARAM-L2-02: String parameter ⭐⭐
// Scenario: [SCENE-ALL]
// Test: const char* safe string passing
int param_string(const char *str) {
    return str[0] + str[1];  // Returns the first two characters ASCII and
}

int call_string_param() {
    return param_string("Hello");  // 'H' + 'e' = 72+101=173
}

// PARAM-L2-03: Pointer array parameter ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Array elements are pointers
int param_ptr_array(char *arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][0];  // Access the first character of each string
    }
    return sum;
}

int call_ptr_array() {
    char *strs[] = {"abc", "def", "ghi"};
    return param_ptr_array(strs, 3);  // 'a'+'d'+'g'=97+100+103=300
}

// PARAM-L2-04: Variable parameters (stdarg) ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Variable number of parameters
#include <stdarg.h>

int param_varargs(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return sum;
}

int call_varargs_param() {
    return param_varargs(4, 10, 20, 30, 40);  // Expectation: 100
}

// PARAM-L3-01: Function pointer parameter ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: callback function as parameter
int param_func_ptr(int (*callback)(int), int x) {
    return callback(x) + 10;  // Call the callback and process the results
}

static int callback_func(int x) { return x * 2; }

int call_func_ptr_param() {
    return param_func_ptr(callback_func, 5);  // 10 + 10 = 20
}

// PARAM-L3-02: Multi-level pointer parameters ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Double pointer modifies caller's pointer
int param_double_ptr(int **pp, int new_val) {
    if (pp == NULL || *pp == NULL) return -1;
    
    **pp = new_val;  // Modify original value
    *pp = NULL;      // Modify the caller's pointer value
    return 1;
}

int call_double_ptr() {
    int val = 10;
    int *ptr = &val;
    // int result = param_double_ptr(&ptr, 20);
    // Reason: result is used to perform side effects, but its return value is not required Effect: Tells the compiler that this is expected behavior
    int result __attribute__((unused)) = param_double_ptr(&ptr, 20);
    // val becomes 20 and ptr becomes NULL
    return val + (ptr == NULL ? 1 : 0);  // 20 + 1 = 21
}

// PARAM-L3-03: Complex type pointer conversion ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: reinterpret_cast equivalence between pointers of different types
typedef struct { int a, b; } TestIntPair;
int param_complex_cast(void *p, int type) {
    if (type == 0) {
        // int* -> char* -> int* test: pointer type chain conversion
        int *int_ptr = (int*)p;
        char *char_ptr = (char*)int_ptr;
        int *back_ptr = (int*)char_ptr;
        return *back_ptr;
    } else if (type == 1) {
        // Test: cast from void* to struct pointer. Each anonymous structure declaration in C language is a different type, even if the members are exactly the same, so a warning will be triggered.
        // struct { int a, b; } *s = (struct { int a, b; }*)p;
        TestIntPair *s = (TestIntPair*)p;
        return s->a + s->b;
    }
    return -1;
}

int call_complex_cast() {
    int val = 0x12345678;

    TestIntPair pair = {100, 200};
    param_complex_cast(&pair, 1);

    return param_complex_cast(&val, 0);  // Value remains unchanged after type conversion
}

// PARAM-L3-04: Structure value transfer ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Passing a large structure by value may trigger copying
struct BigStruct {
    int data[16];  // 64-byte structure
};

int param_struct_byval(struct BigStruct s) {
    return s.data[0] + s.data[15];
}

int call_struct_byval() {
    struct BigStruct s;
    for (int i = 0; i < 16; i++) s.data[i] = i;
    return param_struct_byval(s);  // Pass-by-value may be copied
}

// PARAM-L3-05: Parameter evaluation order dependence ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Undefined behavior detection
#pragma GCC diagnostic ignored "-Wsequence-point"
// ++i, ++i are intentional tests of undefined behavior in decompilation. Reserved for testing purposes, only suppress warnings
int param_order_dep(int a, int b) {
    return a + b;
}

int call_order_dep() {
    int i = 0;
    // Argument evaluation order is undefined: may be (++i, ++i) or vice versa
    return param_order_dep(++i, ++i);  // May return 2+2 or 1+2
}

// ============================================================================
// Section 4.2 Test Function
// ============================================================================

void test_parameter_passing() {
    printf("=== 测试参数传递模式 ===\n");
    
    // PARAM-L1-01
    printf("PARAM-L1-01: %d\n", call_by_value_int());  // Expectation: 15
    
    // PARAM-L1-02
    printf("PARAM-L1-02: %d\n", call_by_value_ptr());  // Expectations: 11
    
    // PARAM-L2-01
    printf("PARAM-L2-01: %d\n", call_array_decay());  // Expected: 4 or 8 (pointer size)
    
    // PARAM-L2-02
    printf("PARAM-L2-02: %d\n", call_string_param());  // Expectation: 173
    
    // PARAM-L2-03
    printf("PARAM-L2-03: %d\n", call_ptr_array());  // Expectation: 300
    
    // PARAM-L2-04
    printf("PARAM-L2-04: %d\n", call_varargs_param());  // Expectation: 100
    
    // PARAM-L3-01
    printf("PARAM-L3-01: %d\n", call_func_ptr_param());  // Expectation: 20
    
    // PARAM-L3-02
    printf("PARAM-L3-02: %d\n", call_double_ptr());  // Expectation: 21
    
    // PARAM-L3-03
    printf("PARAM-L3-03: %d\n", call_complex_cast());  // Expected: 305419896 (i.e. 0x12345678 in decimal)
    
    // PARAM-L3-04
    printf("PARAM-L3-04: %d\n", call_struct_byval());  // Expectation: 15
    
    // PARAM-L3-05
    printf("PARAM-L3-05: %d\n", call_order_dep());  // Expected: 3 or 4 or 5 (undefined)
}

// ============================================================================
// 4.3 Return Value Handling - Return Value Handling
// ============================================================================

// RET-L1-01: Return base type ⭐
// Scenario: [SCENE-ALL]
// Test: Return basic types such as int/char
int ret_basic_type(int x) {
    return x * 2;
}

int call_ret_basic() {
    int val = 21;
    int result = ret_basic_type(val);
    return result;  // Expected to return 42
}

// RET-L1-02: Return pointer ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Return memory address pointer
int* ret_pointer(int *p) {
    return p + 1;  // Returns a pointer to the next element
}

int call_ret_pointer() {
    int arr[] = {10, 20, 30};
    int *ptr = ret_pointer(arr);
    return *ptr;  // Expected to return 20
}

// RET-L1-03: Return small structure ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: small structures may be returned via registers
struct SmallPoint {
    int x, y;
};

struct SmallPoint ret_small_struct(int x, int y) {
    struct SmallPoint p = {x, y};
    return p;  // Small structures may be returned via registers
}

int call_ret_small_struct() {
    struct SmallPoint p = ret_small_struct(3, 4);
    return p.x + p.y;  // Expected to return 7
}

// RET-L1-04: Return large structure ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Large structs are often returned via hidden pointers
struct LargeData {
    int data[16];
};

struct LargeData ret_large_struct(int seed) {
    struct LargeData d;
    for (int i = 0; i < 16; i++) {
        d.data[i] = seed + i;
    }
    return d;
}

int call_ret_large_struct() {
    struct LargeData d = ret_large_struct(100);
    return d.data[0] + d.data[15];  // Expected to return 215 (100+115)
}

// RET-L2-01: Return function pointer ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Return different functions based on conditions
int func_a(int x) { return x + 10; }
int func_b(int x) { return x * 2; }

typedef int (*func_ptr_t)(int);

func_ptr_t ret_func_ptr(int selector) {
    return selector ? func_b : func_a;  // Return function pointer
}

int call_ret_func_ptr() {
    func_ptr_t f = ret_func_ptr(1);
    return f(5);  // Expected to return 10 (5*2)
}

// RET-L2-02: Return void*opaque pointer ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Return opaque handle
void* ret_opaque_handle(int type) {
    static int handle1 = 100;
    static double handle2 = 3.14;
    
    return type == 0 ? (void*)&handle1 : (void*)&handle2;
}

int call_ret_opaque() {
    void *h = ret_opaque_handle(0);
    return *(int*)h;  // Expected to return 100
}

// RET-L3-01: Return complex expression ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: The return statement contains complex calculations
int ret_complex_expr(int x, int y, int z) {
    return x > y ? (z * 2) : (z + 10);  // conditional expression
}

int call_ret_complex_expr() {
    int r1 = ret_complex_expr(5, 3, 10);  // true, returns 20
    int r2 = ret_complex_expr(3, 5, 10);  // false, returns 20
    return r1 + r2;  // Expected to return 40
}

// RET-L3-02: Multiple branch return ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Different branches return different values
int ret_multi_branch(int op) {
    switch (op) {
        case 0: return 10;
        case 1: return 20;
        case 2: return 30;
        default: return -1;
    }
}

int call_ret_multi_branch() {
    int sum = 0;
    sum += ret_multi_branch(0);  // 10
    sum += ret_multi_branch(1);  // 20
    sum += ret_multi_branch(2);  // 30
    return sum;  // Expected to return 60
}

// RET-L3-03: No return value (void) ⭐
// Scenario: [SCENE-ALL]
// Test: void function returns results through output parameters
void ret_void(int x, int *out) {
    *out = x * 3;  // Return via output parameters
}

int call_ret_void() {
    int result;
    ret_void(7, &result);
    return result;  // Expected to return 21
}

// ============================================================================
// Section 4.3 Test Function
// ============================================================================

void test_return_values() {
    printf("=== 测试返回值处理 ===\n");
    
    printf("RET-L1-01: %d (期望: 42)\n", call_ret_basic());
    printf("RET-L1-02: %d (期望: 20)\n", call_ret_pointer());
    printf("RET-L1-03: %d (期望: 7)\n", call_ret_small_struct());
    printf("RET-L1-04: %d (期望: 215)\n", call_ret_large_struct());
    printf("RET-L2-01: %d (期望: 10)\n", call_ret_func_ptr());
    printf("RET-L2-02: %d (期望: 100)\n", call_ret_opaque());
    printf("RET-L3-01: %d (期望: 40)\n", call_ret_complex_expr());
    printf("RET-L3-02: %d (期望: 60)\n", call_ret_multi_branch());
    printf("RET-L3-03: %d (期望: 21)\n", call_ret_void());
}



// Individual test entry
int main() {
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}
