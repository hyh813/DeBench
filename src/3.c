#include <stdio.h>
#include <alloca.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <strings.h>  // bzero/bcopy under macOS/Linux is declared here

static int double_value(int x) {
    return x * 2;
}
// ============================================================================
// 3.1 Stack Memory Operations - Stack Memory Operations
// ============================================================================

// MEM-L1-01: Local variables (basic type)⭐
// Scenario: [SCENE-ALL]
// Test: Pure basic variables on the stack
int local_vars(int x) {
    int a = x;
    int b = a * 2;
    int c = b + 10;
    return c;
}

// MEM-L1-02: Local array (small) ⭐⭐
// Scenario: [SCENE-ALL]
// Test: small array on stack
int local_array(int n) {
    int arr[10];  // Fixed size stack array
    for (int i = 0; i < 10; i++) {
        arr[i] = i * n;
    }
    return arr[5];  // Return the 6th element
}

// MEM-L1-03: Local structure ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Structure on the stack
typedef struct { int x, y; } Point;
int local_struct(int x) {
    Point p = {x, x * 2};  // Structure on the stack
    return p.x + p.y;
}

// MEM-L1-04: Get variable address (&var)⭐⭐
// Scenario: [SCENE-ALL]
// Test: Get stack variable address
int address_of_local(int *out) {
    int local = 42;
    *out = local;  // Pass value through pointer
    return local;
}

// MEM-L1-05: Array address acquisition ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Array name degeneration and address retrieval
int address_of_array(int arr[10]) {
    int *p1 = arr;      // Array names degenerate into pointers
    int *p2 = &arr[0];  // Get the address of the first element
    return *p1 + *p2;
}

// MEM-L2-01: Large stack frame (1KB+) ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Stack allocation exceeding 1KB
int large_stack_frame() {
    char large_buf[2048];  // 2KB stack buffer
    // Fill data to prevent optimization
    for (int i = 0; i < 2048; i++) {
        large_buf[i] = i & 0xFF;
    }
    return large_buf[1024];  // Returns the middle element
}

// MEM-L2-02: Variable length array (stack dynamic) ⭐⭐⭐
// Scenario: [SCENE-EMB]
// Test: VLA is dynamically allocated on the stack
int vla_stack(int n) {
    if (n <= 0 || n > 1000) return -1;  // security check
    int vla[n];  // Variable length array on stack
    for (int i = 0; i < n; i++) {
        vla[i] = i * 2;
    }
    return vla[n/2];  // Returns the middle element
}

// MEM-L2-03: alloca dynamic stack allocation ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: alloca dynamic memory on stack
int alloca_usage(int n) {
    if (n <= 0) return -1;
    int *arr = (int*)alloca(n * sizeof(int));  // alloca stack allocation
    for (int i = 0; i < n; i++) {
        arr[i] = i * 3;
    }
    return arr[n/2];  // Returns the middle element
}

// MEM-L2-04: stack variable alias ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Two pointers point to the same stack variable
int stack_alias(int *p1, int *p2) {
    int local = 10;
    p1 = &local;
    p2 = &local;  // Both p1 and p2 point to the same stack variable local
    // Let the external pointer point to local through parameters
    // Calling method: int x; stack_alias(&x, &x);
    if (p1 == p2 && p1 != NULL) {
        *p1 = 20;  // The modification affects both "aliases"
        return *p2;
    }
    return -1;
}

// ============================================================================
// Auxiliary test function
// ============================================================================

void test_stack_memory() {
    printf("=== 测试栈内存操作 ===\n");
    
    // MEM-L1-01
    printf("MEM-L1-01 (local_vars): %d\n", local_vars(5));  // Expectation: 20
    
    // MEM-L1-02
    printf("MEM-L1-02 (local_array): %d\n", local_array(2));  // Expectation: 10 (5*2)
    
    // MEM-L1-03
    printf("MEM-L1-03 (local_struct): %d\n", local_struct(5));  // Expectation: 15
    
    // MEM-L1-04
    int out;
    printf("MEM-L1-04 (address_of_local): %d\n", address_of_local(&out));  // Expectations: 42
    
    // MEM-L1-05
    int arr5[10] = {1,2,3};
    printf("MEM-L1-05 (address_of_array): %d\n", address_of_array(arr5));  // Expectation: 2
    
    // MEM-L2-01
    printf("MEM-L2-01 (large_stack_frame): %d\n", large_stack_frame());  // Expectations: 0
    
    // MEM-L2-02
    printf("MEM-L2-02 (vla_stack): %d\n", vla_stack(10));  // Expectation: 10
    
    // MEM-L2-03
    printf("MEM-L2-03 (alloca_usage): %d\n", alloca_usage(10));  // Expectation: 15
    
    // MEM-L2-04
    int alias_val = 0;
    printf("MEM-L2-04 (stack_alias): %d\n", stack_alias(&alias_val, &alias_val));  // Expectation: 20
}

// ============================================================================
// 3.2 Heap Memory Operations - Heap Memory Operations
// ============================================================================

#include <stdlib.h>
#include <string.h>

// HEAP-L2-01: malloc + free ⭐⭐
// Scene: [SCENE-DESK]
// Test: Basic heap allocation and deallocation
int heap_basic(int n) {
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) return -1;
    
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    int result = arr[n/2];
    free(arr);  // free memory
    return result;
}

// HEAP-L2-02: calloc initialization allocation ⭐⭐
// Scene: [SCENE-DESK]
// Test: Zero initialization allocation
int heap_calloc(int n) {
    int *arr = (int*)calloc(n, sizeof(int));  // Clear allocation
    if (arr == NULL) return -1;
    
    // Verify initialized to 0
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // should be all 0
    }
    
    free(arr);
    return sum;  // Expected to return 0
}

// HEAP-L2-03: realloc reallocation ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Dynamically adjust memory size
int heap_realloc() {
    int *p = (int*)malloc(5 * sizeof(int));
    if (!p) return -1;
    
    // initialization
    for (int i = 0; i < 5; i++) p[i] = i + 1;
    int old_val = p[2];  // save old value
    
    // reallocate
    int *new_p = (int*)realloc(p, 10 * sizeof(int));
    if (!new_p) {
        free(p);
        return -2;
    }
    p = new_p;
    
    // Initialize new section
    for (int i = 5; i < 10; i++) p[i] = i * 10;
    
    int result = (p[2] == old_val) ? p[5] : -3;  // Validate data retention
    free(p);
    return result;
}


// HEAP-L2-04: Heap array ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Allocate an array of n elements
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

// HEAP-L2-05: Heap structure ⭐⭐
// Scene: [SCENE-DESK]
// Test: Single structure heap allocation
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

// HEAP-L2-06: Nested Heap Allocation ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Secondary pointer allocation
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
    
    return 0;  // success
}

// HEAP-L3-01: Complex linked list operations ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Complete linked list creation, traversal, and destruction
int linked_list_heap() {
    Node *head = NULL;
    Node *current = NULL;
    
    // Create a linked list of 5 nodes
    for (int i = 0; i < 5; i++) {
        Node *new_node = (Node*)malloc(sizeof(Node));
        if (new_node == NULL) {
            // Allocation failed, clean up allocated nodes
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
    
    // Traverse the linked list and find the sum
    int sum = 0;
    Node *temp = head;
    while (temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    
    // Release linked list
    while (head != NULL) {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
    
    return sum;  // Expectation: 0+10+20+30+40 = 100
}

// HEAP-L3-02: Heap allocation for tree structures ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Binary tree creation and traversal
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
    // Create a simple binary tree
    TreeNode *root = create_tree_node(10);
    if (root == NULL) return -1;
    
    root->left = create_tree_node(20);
    root->right = create_tree_node(30);
    
    if (root->left == NULL || root->right == NULL) {
        // Clean up allocated nodes
        if (root->left) free(root->left);
        if (root->right) free(root->right);
        free(root);
        return -2;
    }
    
    // Simple traversal and summation
    int sum = root->data + root->left->data + root->right->data;
    
    // release tree
    free(root->left);
    free(root->right);
    free(root);
    
    return sum;  // Expectation: 60
}

// HEAP-L3-03: Memory Leak Pattern ⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Deliberately not free, test decompiler recognition
int memory_leak(int n) {
    int *leak = (int*)malloc(n * sizeof(int));  // allocate but don't free
    if (leak == NULL) return -1;
    
    for (int i = 0; i < n; i++) {
        leak[i] = i;
    }
    return leak[n/2];  // Memory leak after return
}

// HEAP-L3-04: Wild pointer access ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Continue to use after release (dangling pointer)
int dangling_pointer() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) return -1;
    
    *p = 42;
    int value = *p;
    printf("value before free: %d\n", value);  // Use value to eliminate the alarm
    free(p);
    
    // Intentionally accessed after free (undefined behavior)
    // The actual test needs to be run in isolation and may crash.
    int dangerous = *p;  // wild pointer access
    return dangerous;  // undefined value
}

// HEAP-L3-05: Double Release ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Free the same piece of memory twice
int double_free(int *p) {
    if (p == NULL) {
        // allocate memory
        int *temp = (int*)malloc(sizeof(int));
        if (temp == NULL) return -1;
        *temp = 10;
        free(temp);  // first release
        free(temp);  // Second release (error)
        return -2;
    }
    return *p;
}

// HEAP-L3-06: Heap overflow (buffer) ⭐⭐⭐⭐
// Scenario: [SCENE-TEST]
// Test: Intentional out-of-bounds write
int heap_overflow() {
    int *arr = (int*)malloc(10 * sizeof(int));
    if (arr == NULL) return -1;
    
    // Intentional out-of-bounds write (buffer overflow)
    for (int i = 0; i <= 10; i++) {  // Note: i<=10 will write out of bounds
        arr[i] = i * 100;
    }
    
    int result = arr[0];
    free(arr);
    return result;  // Heap metadata may have been corrupted
}

// ============================================================================
// Auxiliary test function
// ============================================================================

void test_heap_memory() {
    printf("=== 测试堆内存操作 ===\n");
    
    // HEAP-L2-01
    printf("HEAP-L2-01 (heap_basic): %d\n", heap_basic(10));  // Expectation: 10
    
    // HEAP-L2-02
    printf("HEAP-L2-02 (heap_calloc): %d\n", heap_calloc(5));  // Expectations: 0
    
    // HEAP-L2-03
    // int *test_realloc = (int*)malloc(5 * sizeof(int));
    printf("HEAP-L2-03 (heap_realloc): %d\n", heap_realloc());  // Expected: Newly allocated space value
    
    // HEAP-L2-04
    printf("HEAP-L2-04 (heap_array): %d\n", heap_array(10));  // Expectation: 15
    
    // HEAP-L2-05
    printf("HEAP-L2-05 (heap_struct): %d\n", heap_struct(5));  // Expectation: 15
    
    // HEAP-L2-06
    Node *head = NULL;
    printf("HEAP-L2-06 (heap_nested): %d\n", heap_nested(&head));  // Expectations: 0
    if (head) {
        free(head->next);
        free(head);
    }
    
    // HEAP-L3-01
    printf("HEAP-L3-01 (linked_list_heap): %d\n", linked_list_heap());  // Expectation: 100
    
    // HEAP-L3-02
    printf("HEAP-L3-02 (tree_heap_traversal): %d\n", tree_heap_traversal());  // Expectation: 60
    
    // HEAP-L3-03 (memory leak, not released)
    printf("HEAP-L3-03 (memory_leak): %d\n", memory_leak(5));  // Expectation: 2
    
    // HEAP-L3-04 (wild pointer, may crash, comment out)
    // printf("HEAP-L3-04 (dangling_pointer): %d\n", dangling_pointer());
    printf("HEAP-L3-04 (dangling_pointer): ");
    pid_t pid = fork();
    if (pid == 0) {
        // Child process: executing dangerous code
        int result = dangling_pointer();
        printf("%d (子进程)\n", result);
        exit(0);
    } else if (pid > 0) {
        // Parent process: waiting for child process
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
    
    // HEAP-L3-05 (double release, possible crash, comment out)
    // printf("HEAP-L3-05 (double_free): %d\n", double_free(NULL));
    
    // HEAP-L3-06 (heap overflow, possible crash, comment out)
    // printf("HEAP-L3-06 (heap_overflow): %d\n", heap_overflow());
}

// ============================================================================
// 3.3 Static & Global Memory - Static & Global Memory
// ============================================================================

// STM-L1-01: Global variable (int) ⭐
// Scenario: [SCENE-ALL]
// Test: Cross-function global state
static int global_counter = 0;

int global_var_access() {
    global_counter++;
    return global_counter;
}

int global_var_read() {
    return global_counter * 2;
}

// STM-L1-02: Global array ⭐⭐
// Scenario: [SCENE-ALL]
// Test: global static array
static int global_array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int global_array_access(int idx) {
    if (idx < 0 || idx >= 10) return -1;
    return global_array[idx];
}

// STM-L1-03: Static local variables ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Static variables within functions, retaining values ​​across calls
int static_local(int reset) {
    static int counter = 0;  // Only initialize once
    
    if (reset) {
        counter = 0;
        return 0;
    }
    
    counter++;
    return counter;
}

// STM-L1-04: Static function ⭐⭐
// Scenario: [SCENE-ALL]
// Test: File scope function, not visible to the outside
static int static_helper(int x) {
    return x * 2;
}

int call_static_func(int x) {
    return static_helper(x) + 1;
}

// STM-L2-01: Cross-file global variables (extern) ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Global variables declared in other files
// Declare external variables (actually defined in another file)
extern int extern_global_var;

int access_extern_global() {
    return extern_global_var + 100;
}

// STM-L2-02: Cross-file function (extern) ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: functions declared in other files
// Declare external functions (actually defined in another file)
extern int extern_function(int x);

int call_extern_func() {
    return extern_function(5);
}

// STM-L2-03: Read-only data segment (const global) ⭐⭐
// Scenario: [SCENE-ALL]
// Test: const global variables are in the .rodata section
const int const_global = 42;
const char *const_string = "HelloWorld";

int read_const_data() {
    return const_global + const_string[4];  // 'o'
}

// STM-L2-04: BSS segment not initialized ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Uninitialized global variables in .bss section
static int bss_var;  // Not initialized, automatically 0
static char bss_buffer[100];  // uninitialized array

int access_bss_var() {
    return bss_var;  // Expected to return 0
}

int access_bss_buffer() {
    return bss_buffer[0];  // Expected to return 0
}

// STM-L2-05: Global structure ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: global structure variables
static Point global_point = {10, 20};

int global_struct_access() {
    return global_point.x + global_point.y;
}

// STM-L2-06: Static global variables (file scope) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: static modified global variables, across functions but visible within files
static int file_scope_static = 100;

void set_file_static(int val) {
    file_scope_static = val;
}

int get_file_static() {
    return file_scope_static;
}

// STM-L2-07: Global function pointer ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Global function pointer variable
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

// STM-L2-08: Global + Heap Mix ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Global variables store heap pointers
static int *global_heap_ptr = NULL;

int global_heap_store(int *p) {
    global_heap_ptr = p;
    if (global_heap_ptr != NULL) {
        return *global_heap_ptr;
    }
    return -1;
}

// STM-L2-09: Complex initialization of static arrays ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Non-zero initialization of static array
static int complex_init[5] = {1, [2] = 5, [4] = 9};  // designated initializer

int static_complex_init() {
    return complex_init[0] + complex_init[2] + complex_init[4];  // 1+5+9=15
}

// STM-L3-01: Thread Local Storage (TLS) ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Thread local variables modified by __thread
#ifdef __GNUC__
static __thread int tls_var = 0;  // GCC/Clang thread local storage

int tls_access(int val) {
    tls_var = val;
    return tls_var * 2;
}
#else
// Provides stub implementation for non-GCC environments
int tls_access(int val) {
    static int tls_stub = 0;
    tls_stub = val;
    return tls_stub * 2;
}
#endif

// STM-L3-02: Initialization order dependency ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Cross-file global variable initialization sequence problem
// file1.c: int a = 10;
// file2.c: extern int a; int b = a + 5; // Depends on the initialization of a
// Simulate the scene here
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
// Auxiliary test function
// ============================================================================

void test_static_global() {
    printf("=== 测试静态与全局内存 ===\n");
    
    // STM-L1-01
    printf("STM-L1-01 (global_var_access): %d\n", global_var_access());  // Expectation: 1
    printf("STM-L1-01 (global_var_read): %d\n", global_var_read());    // Expectation: 2
    
    // STM-L1-02
    printf("STM-L1-02 (global_array_access): %d\n", global_array_access(5));  // Expectation: 5
    
    // STM-L1-03
    static_local(1);  // reset
    printf("STM-L1-03 (static_local): %d\n", static_local(0));  // Expectation: 1
    printf("STM-L1-03 (static_local): %d\n", static_local(0));  // Expectation: 2
    
    // STM-L1-04
    printf("STM-L1-04 (call_static_func): %d\n", call_static_func(5));  // Expectations: 11

    // STM-L2-01: Cross-file global variables (extern)
    printf("STM-L2-01 (access_extern_global): %d\n", access_extern_global());
    // If extern_global_var = 23, expect: 23 + 100 = 123
    // STM-L2-02: Cross-file function (extern)
    printf("STM-L2-02 (call_extern_func): %d\n", call_extern_func());
    // If extern_function(x) = x*3, expect: 15
    
    // STM-L2-03
    printf("STM-L2-03 (read_const_data): %d\n", read_const_data());  // Expected: 153 (42+'o')
    
    // STM-L2-04
    printf("STM-L2-04 (access_bss_var): %d\n", access_bss_var());  // Expectations: 0
    printf("STM-L2-04 (access_bss_buffer): %d\n", access_bss_buffer());  // Expectations: 0
    
    // STM-L2-05
    printf("STM-L2-05 (global_struct_access): %d\n", global_struct_access());  // Expectation: 30
    
    // STM-L2-06
    set_file_static(50);
    printf("STM-L2-06 (file_static): %d\n", get_file_static());  // Expectation: 50
    
    // STM-L2-07
    set_global_callback(double_value);
    printf("STM-L2-07 (global_func_ptr): %d\n", call_global_callback(5));  // Expectation: 10
    
    // STM-L2-08
    int heap_val = 100;
    printf("STM-L2-08 (global_heap_store): %d\n", global_heap_store(&heap_val));  // Expectation: 100
    
    // STM-L2-09
    printf("STM-L2-09 (static_complex_init): %d\n", static_complex_init());  // Expectation: 15
    
    // STM-L3-01
    printf("STM-L3-01 (tls_access): %d\n", tls_access(10));  // Expectation: 20
    
    // STM-L3-02
    printf("STM-L3-02 (init_order_test): %d\n", init_order_test());  // Expectation: 20
}

// ============================================================================
// 3.4 Memory Operation Functions - Memory Operation Functions
// ============================================================================

#include <string.h>

// MEMOP-L2-01: memset initialization ⭐⭐
// Scenario: [SCENE-ALL]
int memop_memset(void *buf, size_t size, int fill_value) {
    if (buf == NULL || size == 0) return -1;
    memset(buf, fill_value, size);
    return ((unsigned char*)buf)[0];
}

// MEMOP-L2-02: memcpy copy ⭐⭐
// Scenario: [SCENE-ALL]
int memop_memcpy(void *dst, const void *src, size_t n) {
    if (dst == NULL || src == NULL || n == 0) return -1;
    memcpy(dst, src, n);
    return ((int*)dst)[n / sizeof(int) - 1];
}

// MEMOP-L2-03: memmove secure copy ⭐⭐⭐
// Scenario: [SCENE-ALL]
int memop_memmove(void *buf, size_t n) {
    if (buf == NULL || n < 2) return -1;
    memmove((char*)buf + 1, buf, n - 1);
    return ((char*)buf)[1];
}

// MEMOP-L2-04: memcmp comparison ⭐⭐
// Scenario: [SCENE-ALL]
int memop_memcmp(const void *p1, const void *p2, size_t n) {
    if (p1 == NULL || p2 == NULL || n == 0) return 0;
    int result = memcmp(p1, p2, n);
    return (result > 0) ? 1 : ((result < 0) ? -1 : 0);
}

// MEMOP-L2-05: bzero cleared ⭐⭐
// Scenario: [SCENE-SYS]
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

// MEMOP-L2-06: bcopy copy ⭐⭐
// Scenario: [SCENE-SYS]
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

// MEMOP-L3-01: Non-aligned memory access ⭐⭐⭐⭐
// Scene: [SCENE-DRIVER]
int memop_unaligned_access(const char *buf) {
    if (buf == NULL) return -1;
    int value;
    memcpy(&value, buf + 1, sizeof(int));
    return value;
}

// MEMOP-L3-02: memory barrier ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
int memop_memory_barrier(volatile int *flag) {
    if (flag == NULL) return -1;
    int local = *flag;
    asm volatile("" ::: "memory");
    __sync_synchronize();
    return local + *flag;
}

// ============================================================================
// Section 3.4 Test Function
// ============================================================================

void test_memory_op_functions() {
    printf("=== 测试内存操作函数 ===\n");
    
    char buffer[256];
    int int_src[5] = {10,20,30,40,50};
    int int_dst[5] = {0};
    
    printf("MEMOP-L2-01: %d\n", memop_memset(buffer, 10, 'A')); //Expectation: 65
    printf("MEMOP-L2-02: %d\n", memop_memcpy(int_dst, int_src, 5*sizeof(int))); //Expectation: 50
    
    char move_buf[] = "HelloWorld";
    printf("MEMOP-L2-03: %c\n", memop_memmove(move_buf, 10)); //Expectation:H
    
    int cmp_a[] = {1,2,3}, cmp_b[] = {1,2,4};
    printf("MEMOP-L2-04: %d\n", memop_memcmp(cmp_a, cmp_b, 3*sizeof(int))); //Expectation: -1
    
    char zero_buf[10];
    printf("MEMOP-L2-05: %d\n", memop_bzero(zero_buf, 10)); //Expectations: 0
    
    char bcopy_src[4] = {1,2,3,4}, bcopy_dst[4] = {0};
    printf("MEMOP-L2-06: %d\n", memop_bcopy(bcopy_src, bcopy_dst, 4)); //Expectation: 1
    
    char unalign_buf[8] = {0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07};
    printf("MEMOP-L3-01: 0x%x\n", memop_unaligned_access(unalign_buf)); //Expected: 0x4030201
    
    volatile int flag = 5;
    printf("MEMOP-L3-02: %d\n", memop_memory_barrier(&flag)); //Expectation: 10
}



// Individual test entry
int main() {
    test_stack_memory();
    test_heap_memory();
    test_static_global();
    test_memory_op_functions();
    return 0;
}
