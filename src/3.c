#include <stdio.h>
#include <alloca.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <strings.h>  // macOS/Linux 下 bzero/bcopy 在这里声明

static int double_value(int x) {
    return x * 2;
}
// ============================================================================
// 3.1 栈内存操作 - Stack Memory Operations
// ============================================================================

// MEM-L1-01: 局部变量（基础类型）⭐
// 场景: [SCENE-ALL]
// 测试: 纯栈上基础变量
int local_vars(int x) {
    int a = x;
    int b = a * 2;
    int c = b + 10;
    return c;
}

// MEM-L1-02: 局部数组（小）⭐⭐
// 场景: [SCENE-ALL]
// 测试: 栈上小数组
int local_array(int n) {
    int arr[10];  // 固定大小栈数组
    for (int i = 0; i < 10; i++) {
        arr[i] = i * n;
    }
    return arr[5];  // 返回第6个元素
}

// MEM-L1-03: 局部结构体 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 栈上结构体
typedef struct { int x, y; } Point;
int local_struct(int x) {
    Point p = {x, x * 2};  // 栈上结构体
    return p.x + p.y;
}

// MEM-L1-04: 变量地址获取（&var）⭐⭐
// 场景: [SCENE-ALL]
// 测试: 取栈变量地址
int address_of_local(int *out) {
    int local = 42;
    *out = local;  // 通过指针传出值
    return local;
}

// MEM-L1-05: 数组地址获取 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 数组名退化与取地址
int address_of_array(int arr[10]) {
    int *p1 = arr;      // 数组名退化为指针
    int *p2 = &arr[0];  // 取首元素地址
    return *p1 + *p2;
}

// MEM-L2-01: 大栈帧（1KB+） ⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 超过1KB的栈分配
int large_stack_frame() {
    char large_buf[2048];  // 2KB栈缓冲区
    // 填充数据防止被优化掉
    for (int i = 0; i < 2048; i++) {
        large_buf[i] = i & 0xFF;
    }
    return large_buf[1024];  // 返回中间元素
}

// MEM-L2-02: 变长数组（栈动态） ⭐⭐⭐
// 场景: [SCENE-EMB]
// 测试: VLA在栈上动态分配
int vla_stack(int n) {
    if (n <= 0 || n > 1000) return -1;  // 安全检查
    int vla[n];  // 栈上变长数组
    for (int i = 0; i < n; i++) {
        vla[i] = i * 2;
    }
    return vla[n/2];  // 返回中间元素
}

// MEM-L2-03: alloca动态栈分配 ⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: alloca在栈上动态内存
int alloca_usage(int n) {
    if (n <= 0) return -1;
    int *arr = (int*)alloca(n * sizeof(int));  // alloca栈分配
    for (int i = 0; i < n; i++) {
        arr[i] = i * 3;
    }
    return arr[n/2];  // 返回中间元素
}

// MEM-L2-04: 栈变量别名 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO]
// 测试: 两个指针指向同栈变量
int stack_alias(int *p1, int *p2) {
    int local = 10;
    p1 = &local;
    p2 = &local;  // p1 和 p2 都指向同一个栈变量 local
    // 通过参数让外部指针指向local
    // 调用方式: int x; stack_alias(&x, &x);
    if (p1 == p2 && p1 != NULL) {
        *p1 = 20;  // 修改会影响两个"别名"
        return *p2;
    }
    return -1;
}

// ============================================================================
// 辅助测试函数
// ============================================================================

void test_stack_memory() {
    printf("=== 测试栈内存操作 ===\n");
    
    // MEM-L1-01
    printf("MEM-L1-01 (local_vars): %d\n", local_vars(5));  // 期望: 20
    
    // MEM-L1-02
    printf("MEM-L1-02 (local_array): %d\n", local_array(2));  // 期望: 10 (5*2)
    
    // MEM-L1-03
    printf("MEM-L1-03 (local_struct): %d\n", local_struct(5));  // 期望: 15
    
    // MEM-L1-04
    int out;
    printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&out));  // 期望: 42
    
    // MEM-L1-05
    int arr5[10] = {1,2,3};
    printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(arr5));  // 期望: 2
    
    // MEM-L2-01
    printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());  // 期望: 0
    
    // MEM-L2-02
    printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));  // 期望: 10
    
    // MEM-L2-03
    printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));  // 期望: 15
    
    // MEM-L2-04
    int alias_val = 0;
    printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&alias_val, &alias_val));  // 期望: 20
}

// ============================================================================
// 3.2 堆内存操作 - Heap Memory Operations
// ============================================================================

#include <stdlib.h>
#include <string.h>

// HEAP-L2-01: malloc + free ⭐⭐
// 场景: [SCENE-DESK]
// 测试: 基础堆分配与释放
int heap_basic(int n) {
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return -1;
    
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    int result = arr[n/2];
    free(arr);  // 释放内存
    return result;
}

// HEAP-L2-02: calloc初始化分配 ⭐⭐
// 场景: [SCENE-DESK]
// 测试: 零初始化分配
int heap_calloc(int n) {
    int *arr = (int*)calloc(n, sizeof(int));  // 清零分配
    if (arr == NULL) return -1;
    
    // 验证初始化为0
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // 应该全为0
    }
    
    free(arr);
    return sum;  // 期望返回0
}

// HEAP-L2-03: realloc重新分配 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 动态调整内存大小
int heap_realloc() {
    int *p = (int*)malloc(5 * sizeof(int));
    if (!p) return -1;
    
    // 初始化
    for (int i = 0; i < 5; i++) p[i] = i + 1;
    int old_val = p[2];  // 保存旧值
    
    // 重新分配
    int *new_p = (int*)realloc(p, 10 * sizeof(int));
    if (!new_p) {
        free(p);
        return -2;
    }
    p = new_p;
    
    // 初始化新部分
    for (int i = 5; i < 10; i++) p[i] = i * 10;
    
    int result = (p[2] == old_val) ? p[5] : -3;  // 验证数据保留
    free(p);
    return result;
}


// HEAP-L2-04: 堆数组 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 分配n个元素数组
int heap_array(int n) {
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return -1;
    
    for (int i = 0; i < n; i++) {
        arr[i] = i * 3;
    }
    int result = arr[n/2];
    free(arr);
    return result;
}

// HEAP-L2-05: 堆结构体 ⭐⭐
// 场景: [SCENE-DESK]
// 测试: 单个结构体堆分配
// typedef struct { int x, y; } Point;
int heap_struct(int x) {
    Point *p = (Point*)malloc(sizeof(Point));
    if (p == NULL) return -1;
    
    p->x = x;
    p->y = x * 2;
    int result = p->x + p->y;
    free(p);
    return result;
}

// HEAP-L2-06: 嵌套堆分配 ⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 二级指针分配
typedef struct Node {
    int data;
    struct Node *next;
} Node;

int heap_nested(Node **head) {
    *head = (Node*)malloc(sizeof(Node));
    if (*head == NULL) return -1;
    
    (*head)->data = 10;
    (*head)->next = (Node*)malloc(sizeof(Node));
    if ((*head)->next == NULL) {
        free(*head);
        return -2;
    }
    
    (*head)->next->data = 20;
    (*head)->next->next = NULL;
    
    return 0;  // 成功
}

// HEAP-L3-01: 复杂链表操作 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 完整链表创建、遍历、销毁
int linked_list_heap() {
    Node *head = NULL;
    Node *current = NULL;
    
    // 创建5个节点的链表
    for (int i = 0; i < 5; i++) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        if (new_node == NULL) {
            // 分配失败，清理已分配节点
            while (head != NULL) {
                Node *temp = head;
                head = head->next;
                free(temp);
            }
            return -1;
        }
        new_node->data = i * 10;
        new_node->next = NULL;
        
        if (head == NULL) {
            head = new_node;
            current = new_node;
        } else {
            current->next = new_node;
            current = new_node;
        }
    }
    
    // 遍历链表求和
    int sum = 0;
    Node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    
    // 释放链表
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    
    return sum;  // 期望: 0+10+20+30+40 = 100
}

// HEAP-L3-02: 树结构的堆分配 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 二叉树创建与遍历
typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode* create_tree_node(int data) {
    TreeNode *node = (TreeNode*)malloc(sizeof(TreeNode));
    if (node) {
        node->data = data;
        node->left = NULL;
        node->right = NULL;
    }
    return node;
}

int tree_heap_traversal() {
    // 创建简单二叉树
    TreeNode *root = create_tree_node(10);
    if (root == NULL) return -1;
    
    root->left = create_tree_node(20);
    root->right = create_tree_node(30);
    
    if (root->left == NULL || root->right == NULL) {
        // 清理已分配节点
        if (root->left) free(root->left);
        if (root->right) free(root->right);
        free(root);
        return -2;
    }
    
    // 简单遍历求和
    int sum = root->data + root->left->data + root->right->data;
    
    // 释放树
    free(root->left);
    free(root->right);
    free(root);
    
    return sum;  // 期望: 60
}

// HEAP-L3-03: 内存泄漏模式 ⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 故意不free，测试反编译器识别
int memory_leak(int n) {
    int *leak = (int*)malloc(n * sizeof(int));  // 分配但不释放
    if (leak == NULL) return -1;
    
    for (int i = 0; i < n; i++) {
        leak[i] = i;
    }
    return leak[n/2];  // 返回后内存泄漏
}

// HEAP-L3-04: 野指针访问 ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 释放后继续使用（dangling pointer）
int dangling_pointer() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) return -1;
    
    *p = 42;
    int value = *p;
    printf("value before free: %d\n", value);  // 使用 value，告警消除
    free(p);
    
    // 故意在free后访问（未定义行为）
    // 实际测试需隔离运行，可能crash
    int dangerous = *p;  // 野指针访问
    return dangerous;  // 未定义值
}

// HEAP-L3-05: 双重释放 ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 同一块内存free两次
int double_free(int *p) {
    if (p == NULL) {
        // 分配内存
        int *temp = (int*)malloc(sizeof(int));
        if (temp == NULL) return -1;
        *temp = 10;
        free(temp);  // 第一次释放
        free(temp);  // 第二次释放（错误）
        return -2;
    }
    return *p;
}

// HEAP-L3-06: 堆溢出（缓冲区） ⭐⭐⭐⭐
// 场景: [SCENE-TEST]
// 测试: 故意越界写入
int heap_overflow() {
    int *arr = (int*)malloc(10 * sizeof(int));
    if (arr == NULL) return -1;
    
    // 故意越界写入（缓冲区溢出）
    for (int i = 0; i <= 10; i++) {  // 注意: i<=10 会写越界
        arr[i] = i * 100;
    }
    
    int result = arr[0];
    free(arr);
    return result;  // 可能已破坏堆元数据
}

// ============================================================================
// 辅助测试函数
// ============================================================================

void test_heap_memory() {
    printf("=== 测试堆内存操作 ===\n");
    
    // HEAP-L2-01
    printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));  // 期望: 10
    
    // HEAP-L2-02
    printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));  // 期望: 0
    
    // HEAP-L2-03
    // int *test_realloc = (int*)malloc(5 * sizeof(int));
    printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());  // 期望: 新分配空间值
    
    // HEAP-L2-04
    printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10));  // 期望: 15
    
    // HEAP-L2-05
    printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));  // 期望: 15
    
    // HEAP-L2-06
    Node *head = NULL;
    printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&head));  // 期望: 0
    if (head) {
        free(head->next);
        free(head);
    }
    
    // HEAP-L3-01
    printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());  // 期望: 100
    
    // HEAP-L3-02
    printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());  // 期望: 60
    
    // HEAP-L3-03 (内存泄漏，不释放)
    printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));  // 期望: 2
    
    // HEAP-L3-04 (野指针，可能crash，注释掉)
    // printf("HEAP-L3-04 (dangling_pointer): %d\n", dangling_pointer());
    printf("HEAP-L3-04 (dangling_pointer): ");
    pid_t pid = fork();
    if (pid == 0) {
        // 子进程：执行危险代码
        int result = dangling_pointer();
        printf("%d (子进程)\n", result);
        exit(0);
    } else if (pid > 0) {
        // 父进程：等待子进程
        int status;
        waitpid(pid, &status, 0);
        
        if (WIFEXITED(status)) {
            printf("✓ 子进程正常退出，code=%d\n", WEXITSTATUS(status));
        } else if (WIFSIGNALED(status)) {
            printf("✗ 子进程被信号终止 (信号%d) - 野指针导致崩溃\n", 
                   WTERMSIG(status));
        }
    } else {
        perror("fork失败");
    }
    
    // HEAP-L3-05 (双重释放，可能crash，注释掉)
    // printf("HEAP-L3-05 (double_free): %d\n", double_free(NULL));
    
    // HEAP-L3-06 (堆溢出，可能crash，注释掉)
    // printf("HEAP-L3-06 (heap_overflow): %d\n", heap_overflow());
}

// ============================================================================
// 3.3 静态与全局内存 - Static & Global Memory
// ============================================================================

// STM-L1-01: 全局变量（int）⭐
// 场景: [SCENE-ALL]
// 测试: 跨函数全局状态
static int global_counter = 0;

int global_var_access() {
    global_counter++;
    return global_counter;
}

int global_var_read() {
    return global_counter * 2;
}

// STM-L1-02: 全局数组 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 全局静态数组
static int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int global_array_access(int idx) {
    if (idx < 0 || idx >= 10) return -1;
    return global_array[idx];
}

// STM-L1-03: 静态局部变量 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 函数内静态变量，跨调用保持值
int static_local(int reset) {
    static int counter = 0;  // 只初始化一次
    
    if (reset) {
        counter = 0;
        return 0;
    }
    
    counter++;
    return counter;
}

// STM-L1-04: 静态函数 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 文件作用域函数，外部不可见
static int static_helper(int x) {
    return x * 2;
}

int call_static_func(int x) {
    return static_helper(x) + 1;
}

// STM-L2-01: 跨文件全局变量（extern） ⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 声明在其他文件的全局变量
// 声明外部变量（实际定义在另一个文件）
extern int extern_global_var;

int access_extern_global() {
    return extern_global_var + 100;
}

// STM-L2-02: 跨文件函数（extern） ⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 声明在其他文件的函数
// 声明外部函数（实际定义在另一个文件）
extern int extern_function(int x);

int call_extern_func() {
    return extern_function(5);
}

// STM-L2-03: 只读数据段（const全局） ⭐⭐
// 场景: [SCENE-ALL]
// 测试: const全局变量在.rodata段
const int const_global = 42;
const char *const_string = "HelloWorld";

int read_const_data() {
    return const_global + const_string[4];  // 'o'
}

// STM-L2-04: 未初始化BSS段 ⭐⭐
// 场景: [SCENE-ALL]
// 测试: 未初始化全局变量在.bss段
static int bss_var;  // 未初始化，自动为0
static char bss_buffer[100];  // 未初始化数组

int access_bss_var() {
    return bss_var;  // 期望返回0
}

int access_bss_buffer() {
    return bss_buffer[0];  // 期望返回0
}

// STM-L2-05: 全局结构体 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 全局结构体变量
static Point global_point = {10, 20};

int global_struct_access() {
    return global_point.x + global_point.y;
}

// STM-L2-06: 静态全局变量（文件作用域） ⭐⭐⭐
// 场景: [SCENE-ALL]
// 测试: static修饰的全局变量，跨函数但文件内可见
static int file_scope_static = 100;

void set_file_static(int val) {
    file_scope_static = val;
}

int get_file_static() {
    return file_scope_static;
}

// STM-L2-07: 全局函数指针 ⭐⭐⭐⭐
// 场景: [SCENE-NET]
// 测试: 全局函数指针变量
static int (*global_func_ptr)(int) = NULL;

void set_global_callback(int (*f)(int)) {
    global_func_ptr = f;
}

int call_global_callback(int x) {
    if (global_func_ptr != NULL) {
        return global_func_ptr(x);
    }
    return -1;
}

// STM-L2-08: 全局+堆混合 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 全局变量存储堆指针
static int *global_heap_ptr = NULL;

int global_heap_store(int *p) {
    global_heap_ptr = p;
    if (global_heap_ptr != NULL) {
        return *global_heap_ptr;
    }
    return -1;
}

// STM-L2-09: 复杂初始化静态数组 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 非零初始化静态数组
static int complex_init[5] = {1, [2] = 5, [4] = 9};  // 指定初始化器

int static_complex_init() {
    return complex_init[0] + complex_init[2] + complex_init[4];  // 1+5+9=15
}

// STM-L3-01: 线程局部存储（TLS） ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: __thread修饰的线程局部变量
#ifdef __GNUC__
static __thread int tls_var = 0;  // GCC/Clang线程局部存储

int tls_access(int val) {
    tls_var = val;
    return tls_var * 2;
}
#else
// 非GCC环境提供桩实现
int tls_access(int val) {
    static int tls_stub = 0;
    tls_stub = val;
    return tls_stub * 2;
}
#endif

// STM-L3-02: 初始化顺序依赖 ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS]
// 测试: 跨文件全局变量初始化顺序问题
// file1.c: int a = 10;
// file2.c: extern int a; int b = a + 5;  // 依赖a的初始化
// 这里模拟场景
static int init_depends_on(int *p) {
    static int static_depends = 0;
    if (p != NULL) {
        static_depends = *p;
    }
    return static_depends;
}

int init_order_test() {
    int external_val = 20;
    return init_depends_on(&external_val);
}

// ============================================================================
// 辅助测试函数
// ============================================================================

void test_static_global() {
    printf("=== 测试静态与全局内存 ===\n");
    
    // STM-L1-01
    printf("STM-L1-01 (global_var_access): %d\n", global_var_access());  // 期望: 1
    printf("STM-L1-01 (global_var_read): %d\n", global_var_read());    // 期望: 2
    
    // STM-L1-02
    printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5));  // 期望: 5
    
    // STM-L1-03
    static_local(1);  // 重置
    printf("STM-L1-03 (static_local): %d\n", static_local(0));  // 期望: 1
    printf("STM-L1-03 (static_local): %d\n", static_local(0));  // 期望: 2
    
    // STM-L1-04
    printf("STM-L1-04 (call_static_func): %d\n", call_static_func(5));  // 期望: 11

    // STM-L2-01: 跨文件全局变量（extern）
    printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global());
    // 如果 extern_global_var = 23，期望: 23 + 100 = 123
    // STM-L2-02: 跨文件函数（extern）
    printf("STM-L2-02 (call_extern_func): %d\n", call_extern_func());
    // 如果 extern_function(x) = x*3，期望: 15
    
    // STM-L2-03
    printf("STM-L2-03 (read_const_data): %d\n", read_const_data());  // 期望: 153 (42+'o')
    
    // STM-L2-04
    printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var());  // 期望: 0
    printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer());  // 期望: 0
    
    // STM-L2-05
    printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access());  // 期望: 30
    
    // STM-L2-06
    set_file_static(50);
    printf("STM-L2-06 (file_static): %d\n", get_file_static());  // 期望: 50
    
    // STM-L2-07
    set_global_callback(double_value);
    printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));  // 期望: 10
    
    // STM-L2-08
    int heap_val = 100;
    printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&heap_val));  // 期望: 100
    
    // STM-L2-09
    printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init());  // 期望: 15
    
    // STM-L3-01
    printf("STM-L3-01 (tls_access): %d\n", tls_access(10));  // 期望: 20
    
    // STM-L3-02
    printf("STM-L3-02 (init_order_test): %d\n", init_order_test());  // 期望: 20
}

// ============================================================================
// 3.4 内存操作函数 - Memory Operation Functions
// ============================================================================

#include <string.h>

// MEMOP-L2-01: memset初始化 ⭐⭐
// 场景: [SCENE-ALL]
int memop_memset(void *buf, size_t size, int fill_value) {
    if (buf == NULL || size == 0) return -1;
    memset(buf, fill_value, size);
    return ((unsigned char*)buf)[0];
}

// MEMOP-L2-02: memcpy拷贝 ⭐⭐
// 场景: [SCENE-ALL]
int memop_memcpy(void *dst, const void *src, size_t n) {
    if (dst == NULL || src == NULL || n == 0) return -1;
    memcpy(dst, src, n);
    return ((int*)dst)[n / sizeof(int) - 1];
}

// MEMOP-L2-03: memmove安全拷贝 ⭐⭐⭐
// 场景: [SCENE-ALL]
int memop_memmove(void *buf, size_t n) {
    if (buf == NULL || n < 2) return -1;
    memmove((char*)buf + 1, buf, n - 1);
    return ((char*)buf)[1];
}

// MEMOP-L2-04: memcmp比较 ⭐⭐
// 场景: [SCENE-ALL]
int memop_memcmp(const void *p1, const void *p2, size_t n) {
    if (p1 == NULL || p2 == NULL || n == 0) return 0;
    int result = memcmp(p1, p2, n);
    return (result > 0) ? 1 : ((result < 0) ? -1 : 0);
}

// MEMOP-L2-05: bzero清零 ⭐⭐
// 场景: [SCENE-SYS]
int memop_bzero(void *buf, size_t n) {
    if (buf == NULL) return -1;
    #ifdef _WIN32
        memset(buf, 0, n);
    #else
        // extern void bzero(void*, size_t);
        bzero(buf, n);
    #endif
    return ((unsigned char*)buf)[0];
}

// MEMOP-L2-06: bcopy拷贝 ⭐⭐
// 场景: [SCENE-SYS]
int memop_bcopy(const void *src, void *dst, size_t n) {
    if (src == NULL || dst == NULL || n == 0) return -1;
    #ifdef _WIN32
        memmove(dst, src, n);
    #else
        // extern void bcopy(const void*, void*, size_t);
        bcopy(src, dst, n);
    #endif
    return ((unsigned char*)dst)[0];
}

// MEMOP-L3-01: 非对齐内存访问 ⭐⭐⭐⭐
// 场景: [SCENE-DRIVER]
int memop_unaligned_access(const char *buf) {
    if (buf == NULL) return -1;
    int value;
    memcpy(&value, buf + 1, sizeof(int));
    return value;
}

// MEMOP-L3-02: 内存屏障（memory barrier） ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS]
int memop_memory_barrier(volatile int *flag) {
    if (flag == NULL) return -1;
    int local = *flag;
    asm volatile("" ::: "memory");
    __sync_synchronize();
    return local + *flag;
}

// ============================================================================
// 3.4节测试函数
// ============================================================================

void test_memory_op_functions() {
    printf("=== 测试内存操作函数 ===\n");
    
    char buffer[256];
    int int_src[5] = {10,20,30,40,50};
    int int_dst[5] = {0};
    
    printf("MEMOP-L2-01: %d\n", memop_memset(buffer, 10, 'A')); //期望：65
    printf("MEMOP-L2-02: %d\n", memop_memcpy(int_dst, int_src, 5*sizeof(int))); //期望：50
    
    char move_buf[] = "HelloWorld";
    printf("MEMOP-L2-03: %c\n", memop_memmove(move_buf, 10)); //期望：H
    
    int cmp_a[] = {1,2,3}, cmp_b[] = {1,2,4};
    printf("MEMOP-L2-04: %d\n", memop_memcmp(cmp_a, cmp_b, 3*sizeof(int))); //期望：-1
    
    char zero_buf[10];
    printf("MEMOP-L2-05: %d\n", memop_bzero(zero_buf, 10)); //期望：0
    
    char bcopy_src[4] = {1,2,3,4}, bcopy_dst[4] = {0};
    printf("MEMOP-L2-06: %d\n", memop_bcopy(bcopy_src, bcopy_dst, 4)); //期望：1
    
    char unalign_buf[8] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07};
    printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(unalign_buf)); //期望：0x4030201
    
    volatile int flag = 5;
    printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&flag)); //期望：10
}



// 单独测试入口
int main() {
    test_stack_memory();
    test_heap_memory();
    test_static_global();
    test_memory_op_functions();
    return 0;
}
