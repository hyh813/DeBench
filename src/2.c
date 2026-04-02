#include <stdio.h>
// Global jmp_buf is used for setjmp/longjmp testing
#include <setjmp.h>
// static jmp_buf jump_buffer;

static int double_value(int x) {
    return x * 2;
}
// ============================================================================
// 2.1 Basic data types - Data Types Level 1
// ============================================================================

// DT-L1-01: Character type (char) ⭐
// Scenario: [SCENE-ALL]
// Test: Case conversion, uppercase to lowercase, other things unchanged
char process_char(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;  // Convert uppercase to lowercase
    }
    return c;
}

// DT-L1-02: short integer type (short) ⭐
// Scenario: [SCENE-ALL]
// Test: Calculate the sum within short range
short process_short(short a, short b) {
    return a + b;  // 16-bit operations
}

// DT-L1-03: Integer type (int) ⭐
// Scenario: [SCENE-ALL]
// Test: Basic integer arithmetic
int process_int(int x) {
    return x * 2 + 1;  // simple linear transformation
}

// DT-L1-04: Long ⭐
// Scenario: [SCENE-ALL]
// Test: Platform-related size, 64-bit under x86_64
long process_long(long x) {
    return x << 1;  // Shifting left by 1 bit is equivalent to *2
}

// DT-L1-05: Long long⭐
// Scenario: [SCENE-ALL]
// Test: 64-bit integer arithmetic
long long process_ll(long long x) {
    return x * x;  // Square operation
}

// DT-L1-06: Single precision floating point (float) ⭐⭐
// Scene: [SCENE-DESK]
// Test: float precision operation
float process_float(float f) {
    return f * 1.5f + 0.5f;  // floating point multiply and add
}

// DT-L1-07: Double precision floating point (double) ⭐⭐
// Scene: [SCENE-DESK]
// Test: double high-precision operation
double process_double(double d) {
    return d / 2.0 + 0.1;  // floating point division
}

// DT-L1-08: long double ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Extended Precision Floating Point
long double process_ld(long double d) {
    return d * d + 1.0L;  // extended precision squared
}

// DT-L1-09: Boolean type (_Bool)⭐
// Scenario: [SCENE-ALL]
// Test: C99 boolean logic
_Bool process_bool(int x) {
    return (x > 0 && x % 2 == 0);  // Positive even numbers are true
}

// DT-L1-10: Constant modification (const)⭐
// Scenario: [SCENE-ALL]
// Test: const pointer read-only access
int const_param(const int *p) {
    return *p + 10;  // Read const data and cannot modify it
}

// DT-L1-11: volatile modification (volatile) ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: volatile prevents compiler optimization
int volatile_access(volatile int *p) {
    int a = *p;  // first read
    int b = *p;  // The second read, volatile ensures that it is read from memory every time
    return a + b;
}

// ============================================================================
// Auxiliary test function
// ============================================================================

void test_data_types_l1() {
    printf("=== 测试基础数据类型 ===\n");
    
    // DT-L1-01
    printf("DT-L1-01 (process_char): %c\n", process_char('A'));  // Expect: 'a'
    printf("DT-L1-01 (process_char): %c\n", process_char('b'));  // Expect: 'b'
    
    // DT-L1-02
    printf("DT-L1-02 (process_short): %d\n", process_short(100, 200));  // Expectation: 300
    
    // DT-L1-03
    printf("DT-L1-03 (process_int): %d\n", process_int(5));  // Expectations: 11
    
    // DT-L1-04
    printf("DT-L1-04 (process_long): %ld\n", process_long(100L));  // Expectation: 200
    
    // DT-L1-05
    printf("DT-L1-05 (process_ll): %lld\n", process_ll(100LL));  // Expectation: 10000
    
    // DT-L1-06
    printf("DT-L1-06 (process_float): %.2f\n", process_float(2.0f));  // Expectation: 3.50
    
    // DT-L1-07
    printf("DT-L1-07 (process_double): %.2f\n", process_double(4.0));  // Expectation: 2.10
    
    // DT-L1-08
    printf("DT-L1-08 (process_ld): %.2Lf\n", process_ld(3.0L));  // Expectation: 10.00
    
    // DT-L1-09
    printf("DT-L1-09 (process_bool): %d\n", process_bool(4));   // Expect: 1 (true)
    printf("DT-L1-09 (process_bool): %d\n", process_bool(3));   // Expectation: 0 (false)
    printf("DT-L1-09 (process_bool): %d\n", process_bool(-2));  // Expectation: 0 (false)
    
    // DT-L1-10
    int value = 5;
    printf("DT-L1-10 (const_param): %d\n", const_param(&value));  // Expectation: 15
    
    // DT-L1-11
    volatile int vol_value = 10;
    printf("DT-L1-11 (volatile_access): %d\n", volatile_access(&vol_value));  // Expectation: 20
}

// ============================================================================
// 2.2 Array Types - Array Types
// ============================================================================

// ARR-L1-01: One-dimensional int array (stack) ⭐
// Scenario: [SCENE-ALL]
// Test: Calculate the sum of array elements
int array_1d_stack(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// ARR-L1-02: One-dimensional char array (string)⭐
// Scenario: [SCENE-ALL]
// Test: String length calculation
int array_string(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// ARR-L1-03: Two-dimensional int array (matrix) ⭐⭐
// Scene: [SCENE-DESK]
// Test: fixed size 10x10 matrix diagonal sum
int array_2d_stack(int arr[10][10]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i][i];  // diagonal elements
    }
    return sum;
}

// ARR-L1-04: Three-dimensional array ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: sum of all elements of 5x5x5 array
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

// ARR-L2-01: Variable length array (VLA) ⭐⭐⭐
// Scenario: [SCENE-EMB]
// Test: C99 variable length array stack allocation
int array_vla(int n, int arr[n]) {
    // VLA: array size determined at runtime
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// ARR-L2-02: Array pointer (int (*p)[10]) ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: pointer to array (not array of pointers)
int array_pointer(int (*arr)[10], int n) {
    // arr is a pointer to an array of int[10]
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][0];  // Access the first element of each row
    }
    return sum;
}

// ARR-L2-03: Pointer array (int *p[10]) ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Array elements are pointers
int pointer_array(int *arr[10], int n) {
    // arr is an array containing 10 int* pointers
    int sum = 0;
    int count = (n < 10) ? n : 10;
    for (int i = 0; i < count; i++) {
        if (arr[i] != NULL) {
            sum += *arr[i];  // dereference pointer
        }
    }
    return sum;
}

// ARR-L2-04: Dynamic indexing of multi-dimensional arrays ⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Manually calculate offsets to simulate multi-dimensional access
int array_complex_index(int *arr, int w, int h, int x, int y) {
    // Convert multidimensional index to 1D offset
    // arr[y][x] is equivalent to arr[y * w + x]
    if (x < 0 || x >= w || y < 0 || y >= h) return -1;
    return arr[y * w + x];
}

// ARR-L2-05: Array out-of-bounds access (intentional) ⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Intentional out-of-bounds read (negative test)
int array_oob(int *arr, int n) {
    // Intentional out-of-bounds access, test decompiler identification
    int sum = 0;
    for (int i = 0; i <= n; i++) {  // Note: i<=n will go out of bounds
        sum += arr[i];
    }
    return sum;  // undefined behavior
}

// ============================================================================
// Auxiliary test function
// ============================================================================

void test_array_types() {
    printf("=== 测试数组类型 ===\n");
    
    // ARR-L1-01
    int arr1[] = {1, 2, 3, 4, 5};
    printf("ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(arr1, 5));  // Expectation: 15
    
    // ARR-L1-02
    char str[] = "hello";
    printf("ARR-L1-02 (array_string): %d\n", array_string(str));  // Expectation: 5
    
    // ARR-L1-03
    int matrix[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matrix[i][j] = (i == j) ? i : 0;
        }
    }
    printf("ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(matrix));  // Expectation: 45
    
    // ARR-L1-04
    int cube[5][5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                cube[i][j][k] = 1;
            }
        }
    }
    printf("ARR-L1-04 (array_3d): %d\n", array_3d(cube));  // Expectation: 125
    
    // ARR-L2-01 (VLA)
    int vla_arr[] = {10, 20, 30};
    printf("ARR-L2-01 (array_vla): %d\n", array_vla(3, vla_arr));  // Expectation: 60
    
    // ARR-L2-02
    int arr2[5][10];
    for (int i = 0; i < 5; i++) {
        arr2[i][0] = i * 10;
    }
    printf("ARR-L2-02 (array_pointer): %d\n", array_pointer(arr2, 5));  // Expectation: 100
    
    // ARR-L2-03
    int a = 10, b = 20, c = 30;
    int *ptr_arr[10] = {&a, &b, &c, NULL};
    printf("ARR-L2-03 (pointer_array): %d\n", pointer_array(ptr_arr, 3));  // Expectation: 60
    
    // ARR-L2-04
    int flat[20];
    for (int i = 0; i < 20; i++) flat[i] = i;
    printf("ARR-L2-04 (array_complex_index): %d\n", array_complex_index(flat, 5, 4, 2, 3));  // Expectation: 17 (3*5+2)
    
    // ARR-L2-05 (negative test, possible crash)
    // printf("ARR-L2-05 (array_oob): %d\n", array_oob(arr1, 5)); // Undefined behavior
}

// ============================================================================
// 2.3 Pointer Types - Pointer Types
// ============================================================================

// PTR-L2-01: Level 1 pointer (int *)⭐⭐
// Scenario: [SCENE-ALL]
// Test: single dereference, basic pointer operations
int ptr_single(int *p) {
    return *p + 10;  // dereference and evaluate
}

// PTR-L2-02: Secondary pointer (int **) ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: pointer to pointer, double dereference
int ptr_double(int **p) {
    return **p + 5;  // Dereference twice
}

// PTR-L2-03: Level 3 pointer (int ***) ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Level 3 Indirect Addressing
int ptr_triple(int ***p) {
    return ***p + 1;  // triple dereference
}

// PTR-L2-04: Pointer Arithmetic (p++) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: Pointer increment, traverse array
int ptr_increment(int *p, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *p;  // Get the current element
        p++;        // The pointer increments and moves to the next int
    }
    return sum;
}

// PTR-L2-05: Pointer arithmetic (p += n) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: Pointer offset specified number of elements
int ptr_offset(int *p, int offset) {
    return *(p + offset);  // Dereference after offset
}

// PTR-L2-06: Pointer subtraction ⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Subtract the pointers in the same array to get the number of elements
int ptr_diff(int *p1, int *p2) {
    // Pointer subtraction result depends on type size
    return p1 - p2;  // Returns the difference in the number of elements, not the byte difference
}

// PTR-L2-07: void pointer ⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Universal pointer type, type conversion required
int ptr_void(void *p, int type) {
    if (type == 0) {
        return *(int*)p;  // Convert to int* and then dereference
    } else if (type == 1) {
        return *(char*)p;  // Convert to char* and then dereference
    }
    return -1;
}

// PTR-L2-08: const pointer ⭐⭐
// Scenario: [SCENE-ALL]
// Test: pointer to const data (data is immutable)
int ptr_const(const int *p) {
    return *p + *p;  // Read-only access, cannot modify the content pointed to by p
}

// PTR-L2-09: Pointer const (int *const) ⭐⭐
// Scenario: [SCENE-SYS]
// Test: The pointer itself is immutable, but the data pointed to is mutable
int ptr_const_ptr(int *const p) {
    *p = *p + 5;  // The data pointed to can be modified
    return *p;
}

// PTR-L2-10: Function pointer (simple) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: Basic form of callback function
int ptr_func_simple(int (*f)(int), int x) {
    return f(x);  // Called via function pointer
}

// PTR-L2-11: Function pointer (complex signature) ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Function pointers with complex argument lists
int ptr_func_complex(int (*f)(int*, char**), int *p) {
    char *args[] = {"test", NULL};
    return f(p, args);  // Calling functions with complex signatures
}

// PTR-L2-12: Pointer type conversion ⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Conversion between int* and char*
int ptr_cast(void *p) {
    // Convert int* to char* and then convert back to int*
    int *int_ptr = (int*)p;
    char *char_ptr = (char*)int_ptr;  // Alias ​​conversion
    int *back_ptr = (int*)char_ptr;
    return *back_ptr;
}

// PTR-L2-13: Opaque pointer (opaque) ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Testing: Hide implementation details
// Opaque pointers are usually paired with create/destroy function pairs
typedef struct OpaqueStruct OpaqueStruct;  // forward declaration

// Simulate the creation function (no actual memory allocation, only demonstration)
void* opaque_handle_create(int size) {
    // Memory should actually be allocated and a handle returned
    // Here only size is returned as mock
    return (void*)(long)size;
}

// Functions that operate on opaque pointers
int opaque_handle_op(void *handle) {
    // No access to internal structures, only passing
    return (int)(long)handle * 2;  // Simulation operation
}

// ============================================================================
// Auxiliary functions: used to test pointer type features
// ============================================================================

// Auxiliary functions for testing PTR-L2-11
static int complex_callback(int *p, char **args) {
    *p = *p + 10;
    return (args[0] != NULL) ? 1 : 0;
}

void test_pointer_types() {
    printf("=== 测试指针类型 ===\n");
    
    // PTR-L2-01
    int val1 = 5;
    printf("PTR-L2-01 (ptr_single): %d\n", ptr_single(&val1));  // Expectation: 15
    
    // PTR-L2-02
    int val2 = 10;
    int *ptr2 = &val2;
    int **pptr2 = &ptr2;
    printf("PTR-L2-02 (ptr_double): %d\n", ptr_double(pptr2));  // Expectation: 15
    
    // PTR-L2-03
    int val3 = 5;
    int *ptr3 = &val3;
    int **pptr3 = &ptr3;
    int ***ppptr3 = &pptr3;
    printf("PTR-L2-03 (ptr_triple): %d\n", ptr_triple(ppptr3));  // Expectation: 6
    
    // PTR-L2-04
    int arr4[] = {1, 2, 3, 4, 5};
    printf("PTR-L2-04 (ptr_increment): %d\n", ptr_increment(arr4, 5));  // Expectation: 15
    
    // PTR-L2-05
    int arr5[] = {10, 20, 30, 40, 50};
    printf("PTR-L2-05 (ptr_offset): %d\n", ptr_offset(arr5, 2));  // Expectation: 30
    
    // PTR-L2-06
    int arr6[] = {0, 10, 20, 30, 40};
    printf("PTR-L2-06 (ptr_diff): %d\n", ptr_diff(&arr6[4], arr6));  // Expectations: 4
    
    // PTR-L2-07
    int val7 = 42;
    char c7 = 'A';
    printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&val7, 0));  // Expectations: 42
    printf("PTR-L2-07 (ptr_void): %d\n", ptr_void(&c7, 1));   // Expectation: 65
    
    // PTR-L2-08
    const int val8 = 10;
    printf("PTR-L2-08 (ptr_const): %d\n", ptr_const(&val8));  // Expectation: 20
    
    // PTR-L2-09
    int val9 = 10;
    printf("PTR-L2-09 (ptr_const_ptr): %d\n", ptr_const_ptr(&val9));  // Expectation: 15
    
    // PTR-L2-10
    printf("PTR-L2-10 (ptr_func_simple): %d\n", ptr_func_simple(double_value, 5));  // Expectation: 10
    
    // PTR-L2-11
    int val11 = 5;
    printf("PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &val11));  // Expectation: 1
    
    // PTR-L2-12
    int val12 = 0x12345678;
    printf("PTR-L2-12 (ptr_cast): 0x%x\n", ptr_cast(&val12));  // Expected: 0x12345678
    
    // PTR-L2-13
    void *handle = opaque_handle_create(10);
    printf("PTR-L2-13 (opaque_handle_op): %d\n", opaque_handle_op(handle));  // Expectation: 20
}

// ============================================================================
// 2.4 Composite Types - Composite Types
// ============================================================================

// CMP-L2-01: Simple structure (3 fields) ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Access three fields of the structure
typedef struct {
    int x;
    int y;
    int z;
} Point3D;

int struct_simple(Point3D *p) {
    return p->x + p->y + p->z;
}

// CMP-L2-02: Structure array ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Structure array traversal
int struct_array(Point3D *pts, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pts[i].x + pts[i].y + pts[i].z;
    }
    return sum;
}

// CMP-L2-03: Nested structure (2 levels) ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Structure nested access
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

// CMP-L2-04: Nested structure (3 layers+) ⭐⭐⭐⭐
// Scenario: [SCENE-SYS]
// Test: Deeply nested access
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

// CMP-L2-05: Structure pointer field ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Self-referencing struct
typedef struct Node {
    int data;
    struct Node *next;
} Node;

int struct_with_ptr(Node *node) {
    return node->data + (node->next ? node->next->data : 0);
}

// CMP-L2-06: Structural body domain ⭐⭐⭐⭐
// Scene: [SCENE-DRIVER]
// Test: Bitfield operations (compiler dependent layout)
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

// CMP-L2-07: Union ⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Multi-type shared memory
typedef union {
    int i;
    float f;
    char bytes[4];
} UnionData;

int union_type(UnionData *u, int type) {
    if (type == 0) return u->i;
    if (type == 1) return (int)u->f;
    return u->bytes[0];  // Return the first byte
}

// CMP-L2-08: Union array ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO]
// Test: Complex memory aliases
int union_array(UnionData *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].i;  // Access the int member of the union
    }
    return sum;
}

// CMP-L2-09: Enumeration type (enum) ⭐⭐
// Scenario: [SCENE-ALL]
// Test: Symbolized constants
typedef enum {
    STATE_IDLE,
    STATE_RUNNING,
    STATE_PAUSED,
    STATE_STOPPED
} State;

int enum_type(State s) {
    return s * 10;  // Convert enumeration to numeric value
}

// CMP-L2-10: enum + switch combination ⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Typical command processing mode
int enum_switch(State s) {
    switch (s) {
        case STATE_IDLE: return 0;
        case STATE_RUNNING: return 100;
        case STATE_PAUSED: return 50;
        case STATE_STOPPED: return -1;
        default: return -99;
    }
}

// CMP-L2-11: Function pointers in structures ⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Similar to C++ virtual tables
typedef struct {
    int data;
    int (*process)(int);
} Device;

int struct_func_ptr(Device *dev) {
    return dev->process(dev->data);  // call function pointer
}

// CMP-L2-12: Self-referencing structure (linked list) ⭐⭐⭐
// Scenario: [SCENE-ALL]
// Test: One-way linked list traversal
int linked_list(Node *head) {
    int sum = 0;
    Node *current = head;
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

// CMP-L2-13: Doubly Linked List ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: next+prev pointer
typedef struct DNode {
    int data;
    struct DNode *next;
    struct DNode *prev;
} DNode;

int doubly_linked_list(DNode *head) {
    int sum = 0;
    DNode *current = head;
    // Traverse backward
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    return sum;
}

// CMP-L2-14: Tree structure (binary tree) ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: recursive traversal
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

// CMP-L2-15: Complex Data Structures (Figure) ⭐⭐⭐⭐⭐
// Scene: [SCENE-NET]
// Test: Adjacency List Representation
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
    // Simply traverse all edges
    for (int i = 0; i < g->numVertices; i++) {
        Edge *edge = g->adjList[i];
        while (edge != NULL) {
            sum += edge->dest;  // Accumulate target vertices
            edge = edge->next;
        }
    }
    return sum;
}

// ============================================================================
// Auxiliary test function
// ============================================================================

// Auxiliary functions for testing CMP-L2-11
// static int process_int(int x) { return x * 2; }

void test_composite_types() {
    printf("=== 测试复合类型 ===\n");
    
    // CMP-L2-01
    Point3D p1 = {1, 2, 3};
    printf("CMP-L2-01 (struct_simple): %d\n", struct_simple(&p1));  // Expectation: 6
    
    // CMP-L2-02
    Point3D pts[] = {{1,1,1}, {2,2,2}};
    printf("CMP-L2-02 (struct_array): %d\n", struct_array(pts, 2));  // Expectations: 9
    
    // CMP-L2-03
    Rect r = {{5, 10, 0}, {100, 200}};
    printf("CMP-L2-03 (struct_nested): %d\n", struct_nested(&r));  // Expectation: 105
    
    // CMP-L2-04
    Widget w = {{{1,2,3}, {10,20}}, {{255,0,0}, {0,0,255}}, 42};
    printf("CMP-L2-04 (struct_deep): %d\n", struct_deep(&w));  // Expectation: 258
    
    // CMP-L2-05
    Node node2 = {20, NULL};
    Node node1 = {10, &node2};
    printf("CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&node1));  // Expectation: 30
    
    // CMP-L2-06
    Flags f = {1, 2, 3, 100, 0};
    printf("CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&f));  // Expectation: 106
    
    // CMP-L2-07
    UnionData u = {.i = 0x12345678};
    printf("CMP-L2-07 (union_type): %d\n", union_type(&u, 0));  // Expectation: 305419896
    
    // CMP-L2-08
    UnionData arr_u[3] = {{.i=10}, {.i=20}, {.i=30}};
    printf("CMP-L2-08 (union_array): %d\n", union_array(arr_u, 3));  // Expectation: 60
    
    // CMP-L2-09
    printf("CMP-L2-09 (enum_type): %d\n", enum_type(STATE_RUNNING));  // Expectation: 10
    
    // CMP-L2-10
    printf("CMP-L2-10 (enum_switch): %d\n", enum_switch(STATE_PAUSED));  // Expectation: 50
    
    // CMP-L2-11
    Device dev = {10, process_int};
    printf("CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&dev));  // Expectation: 21
    
    // CMP-L2-12
    Node list[3] = {{10, &list[1]}, {20, &list[2]}, {30, NULL}};
    printf("CMP-L2-12 (linked_list): %d\n", linked_list(list));  // Expectation: 60
    
    // CMP-L2-13
    DNode dlist[2] = {{10, &dlist[1], NULL}, {20, NULL, &dlist[0]}};
    dlist[0].next = &dlist[1];
    printf("CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(dlist));  // Expectation: 30
    
    // CMP-L2-14
    TreeNode tree = {100, NULL, NULL};
    printf("CMP-L2-14 (binary_tree): %d\n", binary_tree(&tree));  // Expectation: 100
    
    // CMP-L2-15
    Edge e1 = {1, NULL};
    Graph g = {{&e1, NULL}, 2};
    g.adjList[0] = &e1;
    printf("CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&g));  // Expectation: 1
}

// Individual test entry
int main() {

    test_data_types_l1();
    test_array_types();
    test_pointer_types();
    test_composite_types();

    return 0;
}
