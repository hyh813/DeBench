#include <stdio.h>
// 全局jmp_buf用于setjmp/longjmp测试
#include <setjmp.h>
// static jmp_buf jump_buffer;

static int double_value(int x) {
    return x * 2;
}
// ============================================================================
// 2.1 基础数据类型 - Data Types Level 1
// ============================================================================

// DT-L1-01: 字符类型（char）⭐
// 场景: [SCENE-ALL]
// 测试: 大小写转换，大写转小写，其他不变
char process_char(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;  // 大写转小写
    }
    return c;
}

// DT-L1-02: 短整型（short）⭐
// 场景: [SCENE-ALL]
// 测试: 计算short范围内的和
short process_short(short a, short b) {
    return a + b;  // 16位运算
}

// DT-L1-03: 整型（int）⭐
// 场景: [SCENE-ALL]
// 测试: 基础整数运算
int process_int(int x) {
    return x * 2 + 1;  // 简单线性变换
}

// DT-L1-04: 长整型（long）⭐
// 场景: [SCENE-ALL]
// 测试: 平台相关大小，x86_64下64位
long process_long(long x) {
    return x << 1;  // 左移1位等价于*2
}

// DT-L1-05: 长长整型（long long）⭐
// 场景: [SCENE-ALL]
// 测试: 64位整数运算
long long process_ll(long long x) {
    return x * x;  // 平方运算
}

// DT-L1-06: 单精度浮点（float）⭐⭐
// 场景: [SCENE-DESK]
// 测试: float精度运算
float process_float(float f) {
    return f * 1.5f + 0.5f;  // 浮点乘加
}

// DT-L1-07: 双精度浮点（double）⭐⭐
// 场景: [SCENE-DESK]
// 测试: double高精度运算
double process_double(double d) {
    return d / 2.0 + 0.1;  // 浮点除法
}

// DT-L1-08: long double ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 扩展精度浮点
long double process_ld(long double d) {
    return d * d + 1.0L;  // 扩展精度平方
}

// DT-L1-09: 布尔类型（_Bool）⭐
// 场景: [SCENE-ALL]
// 测试: C99布尔逻辑
_Bool process_bool(int x) {
    return (x > 0 && x % 2 == 0);  // 正偶数为真
}

// DT-L1-10: 常量修饰（const）⭐
// 场景: [SCENE-ALL]
// 测试: const指针只读访问
int const_param(const int *p) {
    return *p + 10;  // 读取const数据，不能修改
}

// DT-L1-11: 易变修饰（volatile）⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: volatile阻止编译器优化
int volatile_access(volatile int *p) {
    int a = *p;  // 第一次读取
    int b = *p;  // 第二次读取，volatile确保每次都从内存读
    return a + b;
}

// ============================================================================
// 辅助测试函数
// ============================================================================

void test_data_types_l1() {
    printf("=== 测试基础数据类型 ===\n");
    
    // DT-L1-01
    printf("DT-L1-01 (process_char): %c\n", process_char('A'));  // 期望: 'a'
    printf("DT-L1-01 (process_char): %c\n", process_char('b'));  // 期望: 'b'
    
    // DT-L1-02
    printf("DT-L1-02 (process_short): %d\n", process_short(100, 200));  // 期望: 300
    
    // DT-L1-03
    printf("DT-L1-03 (process_int): %d\n", process_int(5));  // 期望: 11
    
    // DT-L1-04
    printf("DT-L1-04 (process_long): %ld\n", process_long(100L));  // 期望: 200
    
    // DT-L1-05
    printf("DT-L1-05 (process_ll): %lld\n", process_ll(100LL));  // 期望: 10000
    
    // DT-L1-06
    printf("DT-L1-06 (process_float): %.2f\n", process_float(2.0f));  // 期望: 3.50
    
    // DT-L1-07
    printf("DT-L1-07 (process_double): %.2f\n", process_double(4.0));  // 期望: 2.10
    
    // DT-L1-08
    printf("DT-L1-08 (process_ld): %.2Lf\n", process_ld(3.0L));  // 期望: 10.00
    
    // DT-L1-09
    printf("DT-L1-09 (process_bool): %d\n", process_bool(4));   // 期望: 1 (真)
    printf("DT-L1-09 (process_bool): %d\n", process_bool(3));   // 期望: 0 (假)
    printf("DT-L1-09 (process_bool): %d\n", process_bool(-2));  // 期望: 0 (假)
    
    // DT-L1-10
    int value = 5;
    printf("DT-L1-10 (const_param): %d\n", const_param(&value));  // 期望: 15
    
    // DT-L1-11
    volatile int vol_value = 10;
    printf("DT-L1-11 (volatile_access): %d\n", volatile_access(&vol_value));  // 期望: 20
}

// ============================================================================
// 2.2 数组类型 - Array Types
// ============================================================================

// ARR-L1-01: 一维int数组（栈）⭐
// 场景: [SCENE-ALL]
// 测试: 计算数组元素和
int array_1d_stack(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// ARR-L1-02: 一维char数组（字符串）⭐
// 场景: [SCENE-ALL]
// 测试: 字符串长度计算
int array_string(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// ARR-L1-03: 二维int数组（矩阵）⭐⭐
// 场景: [SCENE-DESK]
// 测试: 固定大小10x10矩阵对角线和
int array_2d_stack(int arr[10][10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i][i];  // 对角线元素
    }
    return sum;
}

// ARR-L1-04: 三维数组 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 5x5x5数组所有元素和
int array_3d(int arr[5][5][5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                sum += arr[i][j][k];
            }
        }
    }
    return sum;
}

// ARR-L2-01: 变长数组（VLA） ⭐⭐⭐
// 场景: [SCENE-EMB]
// 测试: C99变长数组栈分配
int array_vla(int n, int arr[n]) {
    // VLA: 数组大小在运行时确定
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// ARR-L2-02: 数组指针（int (*p)[10]） ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 指向数组的指针（不是指针数组）
int array_pointer(int (*arr)[10], int n) {
    // arr是指向int[10]数组的指针
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][0];  // 访问每行的第一个元素
    }
    return sum;
}

// ARR-L2-03: 指针数组（int *p[10]） ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 数组元素是指针
int pointer_array(int *arr[10], int n) {
    // arr是包含10个int*指针的数组
    int sum = 0;
    int count = (n < 10) ? n : 10;
    for (int i = 0; i < count; i++) {
        if (arr[i] != NULL) {
            sum += *arr[i];  // 解引用指针
        }
    }
    return sum;
}

// ARR-L2-04: 多维数组动态索引 ⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 手动计算偏移模拟多维访问
int array_complex_index(int *arr, int w, int h, int x, int y) {
    // 将多维索引转换为一维偏移
    // arr[y][x] 等价于 arr[y * w + x]
    if (x < 0 || x >= w || y < 0 || y >= h) return -1;
    return arr[y * w + x];
}

// ARR-L2-05: 数组越界访问（故意） ⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 故意越界读取（负面测试）
int array_oob(int *arr, int n) {
    // 故意越界访问，测试反编译器识别
    int sum = 0;
    for (int i = 0; i <= n; i++) {  // 注意: i<=n 会越界
        sum += arr[i];
    }
    return sum;  // 未定义行为
}

// ============================================================================
// 辅助测试函数
// ============================================================================

void test_array_types() {
    printf("=== 测试数组类型 ===\n");
    
    // ARR-L1-01
    int arr1[] = {1, 2, 3, 4, 5};
    printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(arr1, 5));  // 期望: 15
    
    // ARR-L1-02
    char str[] = "hello";
    printf("ARR-L1-02 (array_string): %d\n", array_string(str));  // 期望: 5
    
    // ARR-L1-03
    int matrix[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = (i == j) ? i : 0;
        }
    }
    printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(matrix));  // 期望: 45
    
    // ARR-L1-04
    int cube[5][5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                cube[i][j][k] = 1;
            }
        }
    }
    printf("ARR-L1-04 (array_3d): %d\n", array_3d(cube));  // 期望: 125
    
    // ARR-L2-01 (VLA)
    int vla_arr[] = {10, 20, 30};
    printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, vla_arr));  // 期望: 60
    
    // ARR-L2-02
    int arr2[5][10];
    for (int i = 0; i < 5; i++) {
        arr2[i][0] = i * 10;
    }
    printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(arr2, 5));  // 期望: 100
    
    // ARR-L2-03
    int a = 10, b = 20, c = 30;
    int *ptr_arr[10] = {&a, &b, &c, NULL};
    printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(ptr_arr, 3));  // 期望: 60
    
    // ARR-L2-04
    int flat[20];
    for (int i = 0; i < 20; i++) flat[i] = i;
    printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(flat, 5, 4, 2, 3));  // 期望: 17 (3*5+2)
    
    // ARR-L2-05 (负面测试，可能崩溃)
    // printf("ARR-L2-05 (array_oob): %d\n", array_oob(arr1, 5));  // 未定义行为
}

// ============================================================================
// 2.3 指针类型 - Pointer Types
// ============================================================================

// PTR-L2-01: 一级指针（int *）⭐⭐
// 场景: [SCENE-ALL]
// 测试: 单次解引用，基础指针操作
int ptr_single(int *p) {
    return *p + 10;  // 解引用并计算
}

// PTR-L2-02: 二级指针（int **）⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 指针的指针，双重解引用
int ptr_double(int **p) {
    return **p + 5;  // 两次解引用
}

// PTR-L2-03: 三级指针（int ***）⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 三级间接寻址
int ptr_triple(int ***p) {
    return ***p + 1;  // 三次解引用
}

// PTR-L2-04: 指针运算（p++）⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 指针自增，遍历数组
int ptr_increment(int *p, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *p;  // 取当前元素
        p++;        // 指针自增，移动到下一个int
    }
    return sum;
}

// PTR-L2-05: 指针运算（p += n）⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 指针偏移指定元素个数
int ptr_offset(int *p, int offset) {
    return *(p + offset);  // 偏移后解引用
}

// PTR-L2-06: 指针减法 ⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 同数组内指针相减，得元素个数
int ptr_diff(int *p1, int *p2) {
    // 指针相减结果依赖类型大小
    return p1 - p2;  // 返回元素个数差，非字节差
}

// PTR-L2-07: void指针 ⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 通用指针类型，需类型转换
int ptr_void(void *p, int type) {
    if (type == 0) {
        return *(int*)p;  // 转为int*后解引用
    } else if (type == 1) {
        return *(char*)p;  // 转为char*后解引用
    }
    return -1;
}

// PTR-L2-08: const指针 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 指向const数据的指针（数据不可变）
int ptr_const(const int *p) {
    return *p + *p;  // 只读访问，不能修改p指向的内容
}

// PTR-L2-09: 指针const（int *const）⭐⭐
// 场景: [SCENE-SYS]
// 测试: 指针本身不可变，但指向数据可变
int ptr_const_ptr(int *const p) {
    *p = *p + 5;  // 可修改指向的数据
    return *p;
}

// PTR-L2-10: 函数指针（简单）⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 回调函数基础形式
int ptr_func_simple(int (*f)(int), int x) {
    return f(x);  // 通过函数指针调用
}

// PTR-L2-11: 函数指针（复杂签名）⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 复杂参数列表的函数指针
int ptr_func_complex(int (*f)(int*, char**), int *p) {
    char *args[] = {"test", NULL};
    return f(p, args);  // 调用复杂签名的函数
}

// PTR-L2-12: 指针类型转换 ⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: int*与char*之间的转换
int ptr_cast(void *p) {
    // int*转char*再转回int*
    int *int_ptr = (int*)p;
    char *char_ptr = (char*)int_ptr;  // 别名转换
    int *back_ptr = (int*)char_ptr;
    return *back_ptr;
}

// PTR-L2-13: 不透明指针（opaque）⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 隐藏实现细节
// 不透明指针通常搭配create/destroy函数对
typedef struct OpaqueStruct OpaqueStruct;  // 前向声明

// 模拟创建函数（实际不分配内存，仅演示）
void* opaque_handle_create(int size) {
    // 实际应分配内存并返回句柄
    // 这里仅返回size作为模拟
    return (void*)(long)size;
}

// 操作不透明指针的函数
int opaque_handle_op(void *handle) {
    // 无法访问内部结构，只能传递
    return (int)(long)handle * 2;  // 模拟操作
}

// ============================================================================
// 辅助函数：用于测试指针类型特征
// ============================================================================

// 用于测试PTR-L2-11的辅助函数
static int complex_callback(int *p, char **args) {
    *p = *p + 10;
    return (args[0] != NULL) ? 1 : 0;
}

void test_pointer_types() {
    printf("=== 测试指针类型 ===\n");
    
    // PTR-L2-01
    int val1 = 5;
    printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&val1));  // 期望: 15
    
    // PTR-L2-02
    int val2 = 10;
    int *ptr2 = &val2;
    int **pptr2 = &ptr2;
    printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(pptr2));  // 期望: 15
    
    // PTR-L2-03
    int val3 = 5;
    int *ptr3 = &val3;
    int **pptr3 = &ptr3;
    int ***ppptr3 = &pptr3;
    printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(ppptr3));  // 期望: 6
    
    // PTR-L2-04
    int arr4[] = {1, 2, 3, 4, 5};
    printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(arr4, 5));  // 期望: 15
    
    // PTR-L2-05
    int arr5[] = {10, 20, 30, 40, 50};
    printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(arr5, 2));  // 期望: 30
    
    // PTR-L2-06
    int arr6[] = {0, 10, 20, 30, 40};
    printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&arr6[4], arr6));  // 期望: 4
    
    // PTR-L2-07
    int val7 = 42;
    char c7 = 'A';
    printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&val7, 0));  // 期望: 42
    printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&c7, 1));   // 期望: 65
    
    // PTR-L2-08
    const int val8 = 10;
    printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&val8));  // 期望: 20
    
    // PTR-L2-09
    int val9 = 10;
    printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&val9));  // 期望: 15
    
    // PTR-L2-10
    printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5));  // 期望: 10
    
    // PTR-L2-11
    int val11 = 5;
    printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &val11));  // 期望: 1
    
    // PTR-L2-12
    int val12 = 0x12345678;
    printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&val12));  // 期望: 0x12345678
    
    // PTR-L2-13
    void *handle = opaque_handle_create(10);
    printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(handle));  // 期望: 20
}

// ============================================================================
// 2.4 复合类型 - Composite Types
// ============================================================================

// CMP-L2-01: 简单结构体（3字段）⭐⭐
// 场景: [SCENE-ALL]
// 测试: 访问结构体三个字段
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

int struct_simple(Point3D *p) {
    return p->x + p->y + p->z;
}

// CMP-L2-02: 结构体数组 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 结构体数组遍历
int struct_array(Point3D *pts, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pts[i].x + pts[i].y + pts[i].z;
    }
    return sum;
}

// CMP-L2-03: 嵌套结构体（2层）⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 结构体嵌套访问
typedef struct {
    int width;
    int height;
} Size;

typedef struct {
    Point3D position;
    Size size;
} Rect;

int struct_nested(Rect *r) {
    return r->position.x + r->size.width;
}

// CMP-L2-04: 嵌套结构体（3层+） ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 深层嵌套访问
typedef struct {
    int r, g, b;
} Color;

typedef struct {
    Color fill;
    Color stroke;
} Style;

typedef struct {
    Rect bounds;
    Style style;
    int id;
} Widget;

int struct_deep(Widget *w) {
    return w->bounds.position.z + w->style.fill.r;
}

// CMP-L2-05: 结构体指针字段 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 自引用结构体
typedef struct Node {
    int data;
    struct Node *next;
} Node;

int struct_with_ptr(Node *node) {
    return node->data + (node->next ? node->next->data : 0);
}

// CMP-L2-06: 结构体位域 ⭐⭐⭐⭐
// 场景: [SCENE-DRIVER]
// 测试: 位域操作（编译器相关布局）
typedef struct {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
    unsigned int value : 10;
    unsigned int reserved : 20;
} Flags;

int struct_bitfields(Flags *f) {
    return f->flag1 + f->flag2 + f->flag3 + f->value;
}

// CMP-L2-07: 联合体（union） ⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 多类型共享内存
typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

int union_type(UnionData *u, int type) {
    if (type == 0) return u->i;
    if (type == 1) return (int)u->f;
    return u->bytes[0];  // 返回第一个字节
}

// CMP-L2-08: 联合体数组 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 复杂内存别名
int union_array(UnionData *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].i;  // 访问联合体的int成员
    }
    return sum;
}

// CMP-L2-09: 枚举类型（enum） ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 符号化常量
typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

int enum_type(State s) {
    return s * 10;  // 将枚举转为数值
}

// CMP-L2-10: 枚举+switch组合 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 典型命令处理模式
int enum_switch(State s) {
    switch (s) {
        case STATE_IDLE: return 0;
        case STATE_RUNNING: return 100;
        case STATE_PAUSED: return 50;
        case STATE_STOPPED: return -1;
        default: return -99;
    }
}

// CMP-L2-11: 结构体中的函数指针 ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 类似C++虚表
typedef struct {
    int data;
    int (*process)(int);
} Device;

int struct_func_ptr(Device *dev) {
    return dev->process(dev->data);  // 调用函数指针
}

// CMP-L2-12: 自引用结构体（链表） ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: 单向链表遍历
int linked_list(Node *head) {
    int sum = 0;
    Node *current = head;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

// CMP-L2-13: 双向链表 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: next+prev指针
typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

int doubly_linked_list(DNode *head) {
    int sum = 0;
    DNode *current = head;
    // 向后遍历
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

// CMP-L2-14: 树结构（二叉树） ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 递归遍历
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

int binary_tree_sum(TreeNode *root) {
    if (root == NULL) return 0;
    return root->data + binary_tree_sum(root->left) + binary_tree_sum(root->right);
}

int binary_tree(TreeNode *root) {
    return binary_tree_sum(root);
}

// CMP-L2-15: 复杂数据结构（图） ⭐⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 邻接表表示
#define MAX_VERTICES 10

typedef struct Edge {
    int dest;
    struct Edge *next;
} Edge;

typedef struct Graph {
    Edge *adjList[MAX_VERTICES];
    int numVertices;
} Graph;

int graph_traverse(Graph *g) {
    int sum = 0;
    // 简单遍历所有边
    for (int i = 0; i < g->numVertices; i++) {
        Edge *edge = g->adjList[i];
        while (edge != NULL) {
            sum += edge->dest;  // 累加目标顶点
            edge = edge->next;
        }
    }
    return sum;
}

// ============================================================================
// 辅助测试函数
// ============================================================================

// 用于测试CMP-L2-11的辅助函数
// static int process_int(int x) { return x * 2; }

void test_composite_types() {
    printf("=== 测试复合类型 ===\n");
    
    // CMP-L2-01
    Point3D p1 = {1, 2, 3};
    printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&p1));  // 期望: 6
    
    // CMP-L2-02
    Point3D pts[] = {{1,1,1}, {2,2,2}};
    printf("CMP-L2-02 (struct_array): %d\n", struct_array(pts, 2));  // 期望: 9
    
    // CMP-L2-03
    Rect r = {{5, 10, 0}, {100, 200}};
    printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&r));  // 期望: 105
    
    // CMP-L2-04
    Widget w = {{{1,2,3}, {10,20}}, {{255,0,0}, {0,0,255}}, 42};
    printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&w));  // 期望: 258
    
    // CMP-L2-05
    Node node2 = {20, NULL};
    Node node1 = {10, &node2};
    printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&node1));  // 期望: 30
    
    // CMP-L2-06
    Flags f = {1, 2, 3, 100, 0};
    printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&f));  // 期望: 106
    
    // CMP-L2-07
    UnionData u = {.i = 0x12345678};
    printf("CMP-L2-07 (union_type): %d\n", union_type(&u, 0));  // 期望: 305419896
    
    // CMP-L2-08
    UnionData arr_u[3] = {{.i=10}, {.i=20}, {.i=30}};
    printf("CMP-L2-08 (union_array): %d\n", union_array(arr_u, 3));  // 期望: 60
    
    // CMP-L2-09
    printf("CMP-L2-09 (enum_type): %d\n", enum_type(STATE_RUNNING));  // 期望: 10
    
    // CMP-L2-10
    printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(STATE_PAUSED));  // 期望: 50
    
    // CMP-L2-11
    Device dev = {10, process_int};
    printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&dev));  // 期望: 21
    
    // CMP-L2-12
    Node list[3] = {{10, &list[1]}, {20, &list[2]}, {30, NULL}};
    printf("CMP-L2-12 (linked_list): %d\n", linked_list(list));  // 期望: 60
    
    // CMP-L2-13
    DNode dlist[2] = {{10, &dlist[1], NULL}, {20, NULL, &dlist[0]}};
    dlist[0].next = &dlist[1];
    printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(dlist));  // 期望: 30
    
    // CMP-L2-14
    TreeNode tree = {100, NULL, NULL};
    printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&tree));  // 期望: 100
    
    // CMP-L2-15
    Edge e1 = {1, NULL};
    Graph g = {{&e1, NULL}, 2};
    g.adjList[0] = &e1;
    printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&g));  // 期望: 1
}

// 单独测试入口
int main() {

    test_data_types_l1();
    test_array_types();
    test_pointer_types();
    test_composite_types();

    return 0;
}