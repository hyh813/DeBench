#include <stdio.h>
#include <stdarg.h>
#include <string.h>
// ============================================================================
// 4.1 调用约定 - Calling Conventions
// ============================================================================

// CALL-L1-01: cdecl调用约定 ⭐⭐
// 场景: [SCENE-ALL] x86平台默认
// 测试: 参数从右到左压栈，调用者清理栈
#ifdef _WIN32
    int __cdecl cdecl_func(int a, int b) { return a + b; }
#elif defined(__i386__) || defined(__i686__)
    // x86平台使用cdecl，x64平台忽略该属性（因为只有一种调用约定）
    int __attribute__((cdecl)) cdecl_func(int a, int b) { return a + b; }
#else
    // 其他平台使用默认调用约定
    int cdecl_func(int a, int b) { return a + b; }
#endif

int call_cdecl() { return cdecl_func(5, 10); }

// CALL-L1-02: stdcall调用约定 ⭐⭐⭐
// 场景: [SCENE-DESK] Windows API标准
// 测试: 参数从右到左压栈，被调用者清理栈
#ifdef _WIN32
    int __stdcall stdcall_func(int a, int b) { return a * b; }
#elif defined(__i386__) || defined(__i686__)
    int __attribute__((stdcall)) stdcall_func(int a, int b) { return a * b; }
#else
    int stdcall_func(int a, int b) { return a * b; }
#endif

int call_stdcall() { return stdcall_func(5, 10); }

// CALL-L1-03: fastcall调用约定 ⭐⭐⭐
// 场景: [SCENE-DESK] 寄存器传参优化
// 测试: 前两个参数用ecx/edx，其余用栈
#ifdef _WIN32
    int __fastcall fastcall_func(int a, int b, int c) { return a + b + c; }
#elif defined(__i386__) || defined(__i686__)
    int __attribute__((fastcall)) fastcall_func(int a, int b, int c) { return a + b + c; }
#else
    int fastcall_func(int a, int b, int c) { return a + b + c; }
#endif

int call_fastcall() { return fastcall_func(1, 2, 3); }

// CALL-L1-04: thiscall调用约定（C++） ⭐⭐⭐
// 场景: [SCENE-DESK] C++成员函数默认
// 测试: this指针通过ecx/rcx传递
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
int call_thiscall() { return 15; }  // C版本桩
#endif

// CALL-L1-05: ARM AAPCS调用约定 ⭐⭐⭐
// 场景: [SCENE-EMB] ARM架构标准
// 测试: r0-r3传参，栈传剩余参数
#ifdef __arm__
    int __attribute__((pcs("aapcs"))) arm_aapcs_func(int a, int b, int c, int d, int e) {
        return a + b + c + d + e;
    }
#else
    int arm_aapcs_func(int a, int b, int c, int d, int e) { return a + b + c + d + e; }
#endif

int call_arm_aapcs() { return arm_aapcs_func(1, 2, 3, 4, 5); }

// CALL-L1-06: MIPS调用约定 ⭐⭐⭐
// 场景: [SCENE-EMB] MIPS架构
// 测试: $a0-$a3传参，栈传剩余参数
#ifdef __mips__
    int mips_func(int a, int b, int c, int d) { return a + b + c + d; }
#else
    int mips_func(int a, int b, int c, int d) { return a + b + c + d; }
#endif

int call_mips() { return mips_func(10, 20, 30, 40); }

// CALL-L1-07: System V AMD64 ABI ⭐⭐⭐
// 场景: [SCENE-ALL] Linux/macOS x64标准
// 测试: rdi, rsi, rdx, rcx, r8, r9传参
int amd64_sysv_func(int a, int b, int c, int d, int e, int f) {
    return a + b + c + d + e + f;
}

int call_amd64_sysv() { return amd64_sysv_func(1, 2, 3, 4, 5, 6); }

// CALL-L1-08: Microsoft x64 ABI ⭐⭐⭐
// 场景: [SCENE-DESK] Windows x64标准
// 测试: rcx, rdx, r8, r9传参，栈传剩余
int ms_x64_func(int a, int b, int c, int d, int e) {
    return a + b + c + d + e;
}

int call_ms_x64() { return ms_x64_func(1, 2, 3, 4, 5); }

// CALL-L1-09: vectorcall调用约定 ⭐⭐⭐
// 场景: [SCENE-DESK] Windows向量调用
// 测试: 前4个参数用寄存器，支持SIMD类型
#ifdef _WIN32
    int __vectorcall vectorcall_func(int a, int b, int c, int d) {
        return a + b + c + d;
    }
#else
    int vectorcall_func(int a, int b, int c, int d) { return a + b + c + d; }
#endif

int call_vectorcall() { return vectorcall_func(1, 2, 3, 4); }

// CALL-L1-10: 混合调用约定 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 跨模块混合调用
// 测试: 同一程序中多种约定混用
int mixed_conventions_test() {
    int sum = 0;
    sum += cdecl_func(1, 2);
    sum += stdcall_func(3, 4);
    sum += fastcall_func(5, 6, 7);
    return sum;
}

// ======================================
// CALL-L2-06: 可变参数函数
// 难度: ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 说明: 支持不定数量和类型的参数，如printf风格函数
// 实现: 使用stdarg.h中的va_list, va_start, va_arg, va_end
// 独立性: ✅ 标准C特性，完全独立
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
// CALL-L2-07: 无参数函数
// 难度: ⭐
// 场景: [SCENE-ALL]
// 说明: 函数不接受任何参数，使用void明确标记
// 独立性: ✅ 最基础的函数形式，完全独立
int func_no_args(void) {
    return 42;
}
// CALL-L2-08: 多参数函数（6个以上）
// 难度: ⭐⭐
// 场景: [SCENE-NET]
// 说明: 测试超过寄存器数量的参数传递，部分参数通过栈传递
// 独立性: ✅ 标准C特性，完全独立
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h) {
    return a + b + c + d + e + f + g + h;
}
// CALL-L2-09: 混合参数类型
// 难度: ⭐⭐
// 场景: [SCENE-NET]
// 说明: 参数包含整型、指针、浮点等混合类型，测试寄存器分配和栈布局
// 独立性: ✅ 标准C特性，完全独立
int func_mixed_args(int x, char *s, double d, long long ll) {
    int len = s ? strlen(s) : 0;
    return (int)(x + len + d + ll);
}
// CALL-L2-10: 大结构体传值
// 难度: ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 说明: 大结构体（通常>16字节）作为参数传递，通常通过隐藏指针实现
// 注意: 不同ABI对结构体传值处理不同，可能通过栈或隐藏指针
// 独立性: ✅ 标准C特性，完全独立
typedef struct {
    long long data[16];  // 128字节大结构体
} LargeStruct;
int func_struct_byval(LargeStruct s) {
    long long sum = 0;
    for (int i = 0; i < 16; i++) {
        sum += s.data[i];
    }
    return (int)(sum & 0xFFFFFFFF);
}
// CALL-L2-11: 结构体传指针
// 难度: ⭐⭐
// 场景: [SCENE-ALL]
// 说明: 结构体指针作为参数，避免大结构体拷贝开销
// 独立性: ✅ 标准C特性，完全独立
typedef struct {
    int x;
    int y;
} SmallStruct;
int func_struct_byptr(SmallStruct *p) {
    if (!p) return -1;
    return p->x * p->y;
}


// ============================================================================
// 4.1节测试函数
// ============================================================================

void test_calling_conventions() {
    printf("=== 测试基础调用约定 ===\n");
    printf("CALL-L1-01: %d\n", call_cdecl());        // 期望: 15
    printf("CALL-L1-02: %d\n", call_stdcall());      // 期望: 50
    printf("CALL-L1-03: %d\n", call_fastcall());     // 期望: 6
    printf("CALL-L1-04: %d\n", call_thiscall());     // 期望: 15
    printf("CALL-L1-05: %d\n", call_arm_aapcs());    // 期望: 15
    printf("CALL-L1-06: %d\n", call_mips());         // 期望: 100
    printf("CALL-L1-07: %d\n", call_amd64_sysv());   // 期望: 21
    printf("CALL-L1-08: %d\n", call_ms_x64());       // 期望: 15
    printf("CALL-L1-09: %d\n", call_vectorcall());   // 期望: 10
    printf("CALL-L1-10: %d\n", mixed_conventions_test()); // 期望: 33
    // 测试CALL-L2-06: 可变参数
    int sum = varargs_func(5, 1, 2, 3, 4, 5);
    printf("CALL-L2-06：varargs_func(5, 1-5) = %d\n", sum); //期望：15
    
    // 测试CALL-L2-07: 无参数
    int no_args = func_no_args();
    printf("CALL-L2-07：func_no_args() = %d\n", no_args);//期望：42
    
    // 测试CALL-L2-08: 多参数
    int many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
    printf("CALL-L2-08：func_many_args(1-8) = %d\n", many);//期望：36
    
    // 测试CALL-L2-09: 混合参数
    char *test_str = "test";
    int mixed = func_mixed_args(10, test_str, 3.14, 100LL);
    printf("CALL-L2-09：func_mixed_args(...) = %d\n", mixed);//期望：117

    // 测试CALL-L2-10: 大结构体传值
    LargeStruct large;
    for (int i = 0; i < 16; i++) {
        large.data[i] = i + 1;  // 初始化为1到16
    }
    int struct_val = func_struct_byval(large);
    printf("CALL-L2-10：func_struct_byval(large) = %d\n", struct_val);//期望：136
    
    // 测试CALL-L2-11: 结构体传指针
    SmallStruct s = {5, 10};
    int struct_ptr = func_struct_byptr(&s);
    printf("CALL-L2-11：func_struct_byptr({5,10}) = %d\n", struct_ptr);//期望：50
}

// ============================================================================
// 4.2 参数传递模式 - Parameter Passing Patterns
// ============================================================================

// PARAM-L1-01: 传值调用（int）⭐
// 场景: [SCENE-ALL]
// 测试: 基础值传递，函数内修改不影响调用者
int param_by_value_int(int x) {
    x = x * 2;  // 修改局部副本
    return x;
}

int call_by_value_int() {
    int val = 5;
    int result = param_by_value_int(val);
    return val + result;  // val仍为5，result为10
}

// PARAM-L1-02: 传值调用（指针）⭐
// 场景: [SCENE-ALL]
// 测试: 指针本身是值传递，但可修改指向内容
int param_by_value_ptr(int *p) {
    *p = *p * 2;  // 可修改指向的数据
    p = NULL;     // 修改指针本身不影响调用者
    return p == NULL ? 1 : 0;
}

int call_by_value_ptr() {
    int val = 5;
    int *ptr = &val;
    int result = param_by_value_ptr(ptr);
    // val变为10，ptr本身不变
    return val + result;  // 10 + 1 = 11
}

// PARAM-L2-01: 数组退化（array decay）⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 数组参数退化为指针
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsizeof-array-argument"

int param_array_decay(int arr[10], int n) {
    // arr实际是指针，sizeof(arr) == sizeof(int*)
    // 这是故意的测试场景，用于观察反编译时的行为，所以仅抑制警告
    return sizeof(arr);  // 返回指针大小而非数组大小
}

#pragma GCC diagnostic pop

int call_array_decay() {
    int array[10] = {0};
    return param_array_decay(array, 10);  // 数组退化为指针
}

// PARAM-L2-02: 字符串参数 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: const char*安全字符串传递
int param_string(const char *str) {
    return str[0] + str[1];  // 返回前两个字符ASCII和
}

int call_string_param() {
    return param_string("Hello");  // 'H' + 'e' = 72+101=173
}

// PARAM-L2-03: 指针数组参数 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 数组元素为指针
int param_ptr_array(char *arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][0];  // 访问每个字符串首字符
    }
    return sum;
}

int call_ptr_array() {
    char *strs[] = {"abc", "def", "ghi"};
    return param_ptr_array(strs, 3);  // 'a'+'d'+'g'=97+100+103=300
}

// PARAM-L2-04: 可变参数（stdarg）⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 参数数量可变
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
    return param_varargs(4, 10, 20, 30, 40);  // 期望: 100
}

// PARAM-L3-01: 函数指针参数 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 回调函数作为参数
int param_func_ptr(int (*callback)(int), int x) {
    return callback(x) + 10;  // 调用回调并加工结果
}

static int callback_func(int x) { return x * 2; }

int call_func_ptr_param() {
    return param_func_ptr(callback_func, 5);  // 10 + 10 = 20
}

// PARAM-L3-02: 多级指针参数 ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 双重指针修改调用者的指针
int param_double_ptr(int **pp, int new_val) {
    if (pp == NULL || *pp == NULL) return -1;
    
    **pp = new_val;  // 修改原始值
    *pp = NULL;      // 修改调用者的指针值
    return 1;
}

int call_double_ptr() {
    int val = 10;
    int *ptr = &val;
    // int result = param_double_ptr(&ptr, 20);
    // 原因：result用于执行副作用，但不需要其返回值  效果：告诉编译器这是预期行为
    int result __attribute__((unused)) = param_double_ptr(&ptr, 20);
    // val变为20，ptr变为NULL
    return val + (ptr == NULL ? 1 : 0);  // 20 + 1 = 21
}

// PARAM-L3-03: 复杂类型指针转换 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 不同类型指针间的reinterpret_cast等价
typedef struct { int a, b; } TestIntPair;
int param_complex_cast(void *p, int type) {
    if (type == 0) {
        // int* -> char* -> int*  测试：指针类型链式转换
        int *int_ptr = (int*)p;
        char *char_ptr = (char*)int_ptr;
        int *back_ptr = (int*)char_ptr;
        return *back_ptr;
    } else if (type == 1) {
        // 测试：void* 到struct指针的强制转换 C语言中每个匿名结构体声明都是不同的类型，即使成员完全一样  所以会触发警告
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

    return param_complex_cast(&val, 0);  // 类型转换后值不变
}

// PARAM-L3-04: 结构体传值 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 大结构体传值可能触发拷贝
struct BigStruct {
    int data[16];  // 64字节结构体
};

int param_struct_byval(struct BigStruct s) {
    return s.data[0] + s.data[15];
}

int call_struct_byval() {
    struct BigStruct s;
    for (int i = 0; i < 16; i++) s.data[i] = i;
    return param_struct_byval(s);  // 传值可能拷贝
}

// PARAM-L3-05: 参数求值顺序依赖 ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 未定义行为检测
#pragma GCC diagnostic ignored "-Wsequence-point"
// ++i, ++i是故意测试未定义行为在反编译中的表现。保留测试目的，仅抑制警告
int param_order_dep(int a, int b) {
    return a + b;
}

int call_order_dep() {
    int i = 0;
    // 参数求值顺序未定义：可能是(++i, ++i)或相反
    return param_order_dep(++i, ++i);  // 可能返回2+2或1+2
}

// ============================================================================
// 4.2节测试函数
// ============================================================================

void test_parameter_passing() {
    printf("=== 测试参数传递模式 ===\n");
    
    // PARAM-L1-01
    printf("PARAM-L1-01: %d\n", call_by_value_int());  // 期望: 15
    
    // PARAM-L1-02
    printf("PARAM-L1-02: %d\n", call_by_value_ptr());  // 期望: 11
    
    // PARAM-L2-01
    printf("PARAM-L2-01: %d\n", call_array_decay());  // 期望: 4或8（指针大小）
    
    // PARAM-L2-02
    printf("PARAM-L2-02: %d\n", call_string_param());  // 期望: 173
    
    // PARAM-L2-03
    printf("PARAM-L2-03: %d\n", call_ptr_array());  // 期望: 300
    
    // PARAM-L2-04
    printf("PARAM-L2-04: %d\n", call_varargs_param());  // 期望: 100
    
    // PARAM-L3-01
    printf("PARAM-L3-01: %d\n", call_func_ptr_param());  // 期望: 20
    
    // PARAM-L3-02
    printf("PARAM-L3-02: %d\n", call_double_ptr());  // 期望: 21
    
    // PARAM-L3-03
    printf("PARAM-L3-03: %d\n", call_complex_cast());  // 期望: 305419896 (即0x12345678的十进制)
    
    // PARAM-L3-04
    printf("PARAM-L3-04: %d\n", call_struct_byval());  // 期望: 15
    
    // PARAM-L3-05
    printf("PARAM-L3-05: %d\n", call_order_dep());  // 期望: 3或4或5（未定义）
}

// ============================================================================
// 4.3 返回值处理 - Return Value Handling
// ============================================================================

// RET-L1-01: 返回基础类型 ⭐
// 场景: [SCENE-ALL]
// 测试: 返回int/char等基本类型
int ret_basic_type(int x) {
    return x * 2;
}

int call_ret_basic() {
    int val = 21;
    int result = ret_basic_type(val);
    return result;  // 期望返回42
}

// RET-L1-02: 返回指针 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 返回内存地址指针
int* ret_pointer(int *p) {
    return p + 1;  // 返回下一个元素的指针
}

int call_ret_pointer() {
    int arr[] = {10, 20, 30};
    int *ptr = ret_pointer(arr);
    return *ptr;  // 期望返回20
}

// RET-L1-03: 返回小结构体 ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 小结构体可能通过寄存器返回
struct SmallPoint {
    int x, y;
};

struct SmallPoint ret_small_struct(int x, int y) {
    struct SmallPoint p = {x, y};
    return p;  // 小结构体可能通过寄存器返回
}

int call_ret_small_struct() {
    struct SmallPoint p = ret_small_struct(3, 4);
    return p.x + p.y;  // 期望返回7
}

// RET-L1-04: 返回大结构体 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 大结构体通常通过隐藏指针返回
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
    return d.data[0] + d.data[15];  // 期望返回215 (100+115)
}

// RET-L2-01: 返回函数指针 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 根据条件返回不同函数
int func_a(int x) { return x + 10; }
int func_b(int x) { return x * 2; }

typedef int (*func_ptr_t)(int);

func_ptr_t ret_func_ptr(int selector) {
    return selector ? func_b : func_a;  // 返回函数指针
}

int call_ret_func_ptr() {
    func_ptr_t f = ret_func_ptr(1);
    return f(5);  // 期望返回10 (5*2)
}

// RET-L2-02: 返回void*不透明指针 ⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 返回不透明句柄
void* ret_opaque_handle(int type) {
    static int handle1 = 100;
    static double handle2 = 3.14;
    
    return type == 0 ? (void*)&handle1 : (void*)&handle2;
}

int call_ret_opaque() {
    void *h = ret_opaque_handle(0);
    return *(int*)h;  // 期望返回100
}

// RET-L3-01: 返回复杂表达式 ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: return语句包含复杂计算
int ret_complex_expr(int x, int y, int z) {
    return x > y ? (z * 2) : (z + 10);  // 条件表达式
}

int call_ret_complex_expr() {
    int r1 = ret_complex_expr(5, 3, 10);  // true, 返回20
    int r2 = ret_complex_expr(3, 5, 10);  // false, 返回20
    return r1 + r2;  // 期望返回40
}

// RET-L3-02: 多分支返回 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 不同分支返回不同值
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
    return sum;  // 期望返回60
}

// RET-L3-03: 无返回值(void) ⭐
// 场景: [SCENE-ALL]
// 测试: void函数通过输出参数返回结果
void ret_void(int x, int *out) {
    *out = x * 3;  // 通过输出参数返回
}

int call_ret_void() {
    int result;
    ret_void(7, &result);
    return result;  // 期望返回21
}

// ============================================================================
// 4.3节测试函数
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



// 单独测试入口
int main() {
    test_calling_conventions();
    test_parameter_passing();
    test_return_values();
    return 0;
}