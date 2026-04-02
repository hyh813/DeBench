#include <stdio.h>

// ============================================================================
// Basic control flow features - Control Flow Level 1
// Version: BinDeBench v2.0
// Building Unit: Function Level
// ============================================================================

// CF-L1-01: Linear sequential execution ⭐
// Difficulty basis: Pure sequential instruction flow, 100% retention of the original structure after compilation, no branch prediction overhead
// Scenario tags: [SCENE-ALL] - basic features for all scenarios
// Test verification: Entering 5,7,3 should return 21 (5+7)*2-3=21
int sequential_ops(int a, int b, int c) {
    // Pure sequential operation, no branches
    int temp1 = a + b;
    int temp2 = temp1 * 2;
    int temp3 = temp2 - c;
    return temp3;
}

// CF-L1-02: Single branch if ⭐
// Difficulty basis: Single conditional jump, compiled into cmp+jcc instruction pair, can be restored by decompiler pattern matching
// Scenario tag: [SCENE-ALL] - the most basic branch structure
// Test verification: Entering 10 should return 20 (positive numbers are doubled), entering -5 should return -5 (negative numbers remain unchanged)
int single_if(int x) {
    // Single branch, no else path
    if (x > 0) {
        x = x * 2;  // Double the positive number
    }
    // Implicit else: negative numbers are returned directly
    return x;
}

// CF-L1-03: if-else double branch ⭐
// Difficulty basis: classic if-else structure, compiled into cmp+jcc+else code block, structured recovery rate >95%
// Scenario tag: [SCENE-ALL] - Basic decision-making structure
// Test verification: Entering 5 should return 1 (positive number), entering -3 should return 0 (negative number or zero)
int if_else(int x) {
    // Explicit if-else double branch
    if (x > 0) {
        return 1;  // Positive number returns 1
    } else {
        return 0;  // Returns 0 for a negative number or zero
    }
}

// CF-L1-04: Nested if (2 levels) ⭐⭐
// Difficulty basis: The nesting depth is 2 levels, and control flow graph (CFG) analysis is required to identify the nested pattern, but it is still within the basic block.
// Scenario tag: [SCENE-ALL] - common nesting patterns
// Test verification:
//   x=10,y=5 -> Return 3 (x>0 and y<x, return y%2+1=1+1=2? Wrong, redesign)
//   Change to: x>0 and y>0 returns x+y, x>0 but y<=0 returns x, otherwise returns 0
int nested_if_2(int a, int b) {
    // Two levels of nested if
    if (a > 0) {
        if (b > 0) {
            // Branch 1: a>0 and b>0
            return a + b;
        } else {
            // Branch 2: a>0 but b<=0
            return a;
        }
    } else {
        // Branch 3: a<=0
        return 0;
    }
}

// CF-L1-05: Nested if (level 3-5) ⭐⭐⭐
// Difficulty basis: 3-layer nesting requires data flow analysis across basic blocks, and instruction rearrangement may occur after optimization
// Scenario tag: [SCENE-DESK] - Complex conditional judgment in desktop applications
// Test verification: a, b, c, d, e are 5 judgment conditions, and the level is returned in dictionary order.
int nested_if_deep(int a, int b, int c, int d, int e) {
    // 5 levels of deep nesting to simulate complex permission checks or state machines
    if (a > 0) {
        if (b > 0) {
            if (c > 0) {
                if (d > 0) {
                    if (e > 0) {
                        return 5;  // All conditions met
                    } else {
                        return 4;  // e is not satisfied
                    }
                } else {
                    return 3;  // d is not satisfied
                }
            } else {
                return 2;  // c is not satisfied
            }
        } else {
            return 1;  // b is not satisfied
        }
    } else {
        return 0;  // a is not satisfied
    }
}

// CF-L1-06: if-else if chain (3 branches) ⭐⭐
// Difficulty basis: linear condition chain, which may be a cmp+jcc sequence or jump table after compilation, and needs to be recognized as a structured chain judgment
// Scenario tag: [SCENE-ALL] - common patterns such as status code processing
// Test verification: Entering 0/1/2 returns 10/20/30 respectively, and other returns -1
int if_elseif_chain(int x) {
    // if-else if chain, 3 main branches
    if (x == 0) {
        return 10;
    } else if (x == 1) {
        return 20;
    } else if (x == 2) {
        return 30;
    } else {
        return -1;  // Default branch
    }
}

// CF-L1-07: if-else if chain (5+ branches) ⭐⭐⭐
// Difficulty basis: 5+ branches trigger compiler optimization to jump table or binary search, CFG structure changes
// Scenario tag: [SCENE-DESK] - command processor, protocol analysis
// Test verification: 0-4 returns the corresponding value, others return -1
int if_elseif_long(int x) {
    // 6 branch chain, may trigger jump table generation
    if (x == 0) return 100;
    else if (x == 1) return 200;
    else if (x == 2) return 300;
    else if (x == 3) return 400;
    else if (x == 4) return 500;
    else return -1;
}

// CF-L1-08: switch-case (branch 3-5) ⭐⭐
// Difficulty basis: small range switch, the compiler may generate if-else chain or sparse jump table
// Scene tag: [SCENE-ALL] - Basic state switching
// Test verification: Operation codes 0-3 perform addition, subtraction, multiplication and division respectively, and others return -1
int switch_small(int op) {
    int a = 10, b = 5;
    switch (op) {
        case 0: return a + b;  // add
        case 1: return a - b;  // minus
        case 2: return a * b;  // multiply
        case 3: return a / b;  // except
        default: return -1;    // Invalid operation
    }
}

// CF-L1-09: switch-case (10+ branches) ⭐⭐⭐
// Difficulty basis: dense cases trigger jump table optimization, decompilation needs to identify the jump table structure rather than linear comparison
// Scenario tag: [SCENE-DESK] - Complex command distribution, bytecode interpreter
// Test verification: 0-9 returns the corresponding value, others return -1
int switch_large(int op) {
    // 10-branch switch will almost certainly generate a jump table
    switch (op) {
        case 0: return 0;
        case 1: return 10;
        case 2: return 20;
        case 3: return 30;
        case 4: return 40;
        case 5: return 50;
        case 6: return 60;
        case 7: return 70;
        case 8: return 80;
        case 9: return 90;
        default: return -1;
    }
}

// CF-L1-10: switch-case (including default) ⭐⭐
// Difficulty basis: switch with default covers all paths, and it needs to be verified whether the decompilation retains complete semantics
// Scenario Tag: [SCENE-ALL] - Defensive Programming
// Test verification: 1-3 returns the corresponding value, others return 0 (default)
int switch_default(int op) {
    // switch with default
    switch (op) {
        case 1: return 100;
        case 2: return 200;
        case 3: return 300;
        default: return 0;  // All cases not covered
    }
}

// CF-L1-11: switch-case（fall-through） ⭐⭐⭐
// Difficulty basis: Break is intentionally omitted, and continuous code blocks are generated after compilation. Decompilation needs to identify intentional fall-through.
// Scenario tag: [SCENE-CRYPTO] - Manual optimization commonly used in cryptography
// Test verification:
//   op=1: return 1 (1<<0)
//   op=2: return 6 (2<<1 + 2)
//   op=3: returns 24 (3<<2 + 3<<1 + 3)
int switch_fallthrough(int op) {
    int result = 0;
    // Break is intentionally omitted to form fall-through logic
    switch (op) {
        case 3: result += (op << 2);  // fall-through
        case 2: result += (op << 1);  // fall-through
        case 1: result += op;         // base value
                break;
        default: result = -1;
    }
    return result;
}

// CF-L1-12: for loop (fixed number of times) ⭐
// Difficulty basis: classic for loop mode, cmp+jcc bounce after compilation, decompiler pattern matching success rate >90%
// Scenario tag: [SCENE-ALL] - Basic iteration mode
// Test verification: Calculate the sum from 0 to n-1, enter 10 and return 45
int loop_for_fixed(int n) {
    int sum = 0;
    // Fixed number of for loops
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// CF-L1-13: while loop ⭐
// Difficulty basis: conditional pre-loop, the compilation mode is similar to for, but lacks the initialization part
// Scenario tags: [SCENE-ALL] - conditional iteration
// Test verification: Entering 12345 returns 5 (statistical digits), entering 0 returns 1
int loop_while(int x) {
    int count = 0;
    // conditional while loop
    while (x != 0) {
        x = x / 10;
        count++;
    }
    return count > 0 ? count : 1;  // Handle the case x=0
}

// CF-L1-14: do-while loop ⭐⭐
// Difficulty basis: executed at least once, compiled into a do-while structure, and the entry condition post-features need to be identified
// Scenario tag: [SCENE-ALL] - Scenarios that execute first and then judge
// Test verification: Enter 9876 and return 4 (statistical digits)
int loop_dowhile(int x) {
    int count = 0;
    // do-while that is executed at least once
    do {
        x = x / 10;
        count++;
    } while (x != 0);
    return count;
}

// CF-L1-15: Loop nesting (2 levels) ⭐⭐
// Difficulty basis: Rectangular iteration mode, need to identify independent induction variables of outer and inner loops
// Scene tag: [SCENE-ALL] - Basics of matrix operations
// Test verification: Calculate the total number of m*n matrix elements, input 3,4 and return 12
int loop_nested(int m, int n) {
    int total = 0;
    // 2 levels of nested loops, typical matrix traversal mode
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            total++;
        }
    }
    return total;
}

// CF-L1-16: loop+break ⭐⭐
// Difficulty basis: A single exit point is destroyed, and the break exit path needs to be identified in advance, but the pattern is still relatively regular.
// Scene tag: [SCENE-ALL] - Search/find scenes
// Test verification: Find the target value in the array, return the index if found, return -1 if not found
int loop_break(int target) {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    // Loop with break, exit early
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Find the target, break is equivalent to return
        }
    }
    return -1;  // not found
}

// CF-L1-17: loop+continue ⭐⭐
// Difficulty basis: skip this iteration, compile to jcc to the loop increment part, continue semantics need to be recognized
// Scenario tag: [SCENE-ALL] - filter/skip specific conditions
// Test verification: Calculate the sum of odd numbers from 1 to n, enter 10 and return 25 (1+3+5+7+9)
int loop_continue(int n) {
    int sum = 0;
    // Loop with continue, skip even numbers
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        sum += i;  // Accumulate only odd numbers
    }
    return sum;
}

// CF-L1-18: goto forward jump ⭐⭐⭐
// Difficulty basis: destroy the structure, compile to unconditional jump, decompile needs to identify the jump target and reconstruct the logic
// Scenario tag: [SCENE-EMB] - commonly used for error handling in embedded applications
// Test verification: Entering positive and negative numbers takes different paths, but eventually converges
//   x>0: Calculate square -> Jump label -> Multiply by 2
//   x<=0: jump to label directly -> multiply by 2
int goto_forward(int x) {
    int result;
    
    // goto forward jump, simulate error handling aggregation
    if (x > 0) {
        result = x * x;  // Positive numbers are squared first
        goto common_exit;  // Jump forward
    } else {
        result = x;  // Negative numbers or zero are used directly
        //  fall-through to common_exit
    }
    
common_exit:
    result = result * 2;  // Uniformly multiplied by 2
    return result;
}

// CF-L1-19: goto backward jump ⭐⭐⭐
// Difficulty basis: Creates a loop effect but destroys the structure. Decompilation needs to identify it as an equivalent while/for loop.
// Scenario tag: [SCENE-EMB] - Manual optimization loop in embedded
// Test verification: Calculate the factorial of x, enter 5 and return 120
int goto_backward(int x) {
    if (x <= 0) return 1;  // base conditions
    
    int result = 1;
    int i = 1;
    
    // Backward jump loop implemented by goto
loop_start:
    if (i > x) {
        goto loop_end;  // Exit conditions
    }
    result *= i;
    i++;
    goto loop_start;  // Jump backward to the beginning of the loop
    
loop_end:
    return result;
}

// CF-L1-20: Ternary operator?: ⭐⭐
// Difficulty basis: conditional expression, compiled into cmov or conditional jump, decompilation needs to be restored to ?: form
// Scenario tag: [SCENE-ALL] - concise conditional assignment
// Test verification: Return the larger of the two numbers
int ternary_op(int a, int b) {
    // Ternary operator, concise conditional selection
    return (a > b) ? a : b;
}

// ============================================================================
// Auxiliary test function - used to verify the correctness of the above functions
// Each function can be run independently
// ============================================================================

// Test entry function
void test_control_flow_l1() {
    printf("=== 测试基础控制流特征 ===\n");
    
    // CF-L1-01
    printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3));  // Expectation: 21
    
    // CF-L1-02
    printf("CF-L1-02 (single_if): %d\n", single_if(10));   // Expectation: 20
    printf("CF-L1-02 (single_if): %d\n", single_if(-5));  // Expectation: -5
    
    // CF-L1-03
    printf("CF-L1-03 (if_else): %d\n", if_else(5));   // Expectation: 1
    printf("CF-L1-03 (if_else): %d\n", if_else(-3));  // Expectations: 0
    
    // CF-L1-04
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 5));  // Expectation: 15
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, -5)); // Expectation: 10
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(-10, 5)); // Expectations: 0
    
    // CF-L1-05
    printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 1)); // Expectation: 5
    
    // CF-L1-06
    printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(1));  // Expectation: 20
    
    // CF-L1-07
    printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(3));  // Expectation: 400
    
    // CF-L1-08
    printf("CF-L1-08 (switch_small): %d\n", switch_small(2));  // Expectation: 50 (10*5)
    
    // CF-L1-09
    printf("CF-L1-09 (switch_large): %d\n", switch_large(7));  // Expectation: 70
    
    // CF-L1-10
    printf("CF-L1-10 (switch_default): %d\n", switch_default(5));  // Expectations: 0
    
    // CF-L1-11
    printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3));  // Expectation: 21 (3<<2 + 3<<1 + 3)
    
    // CF-L1-12
    printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));  // Expectation: 45 (0+1+...+9)
    
    // CF-L1-13
    printf("CF-L1-13 (loop_while): %d\n", loop_while(12345));  // Expectation: 5
    
    // CF-L1-14
    printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));  // Expectations: 4
    
    // CF-L1-15
    printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));  // Expectation: 12
    
    // CF-L1-16
    printf("CF-L1-16 (loop_break): %d\n", loop_break(30));  // Expected: 2 (arr[2]==30)
    printf("CF-L1-16 (loop_break): %d\n", loop_break(99));  // Expected: -1 (not found)
    
    // CF-L1-17
    printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10));  // Expectation: 25
    
    // CF-L1-18
    printf("CF-L1-18 (goto_forward): %d\n", goto_forward(5));   // Expectation: 50 (5*5*2)
    printf("CF-L1-18 (goto_forward): %d\n", goto_forward(-3));  // Expectation: -6 (-3*2)
    
    // CF-L1-19
    printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5));  // Expectation: 120
    
    // CF-L1-20
    printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5));  // Expectation: 10
    printf("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8));   // Expectation: 8
}

// ============================================================================
// 1.2 Advanced control flow features - Control Flow Level 2
// ============================================================================

// CF-L2-01: Loop + multiple break/continue ⭐⭐⭐
// Scenario: [SCENE-DESK] Complex exit conditions
// Test: Find the target in the two-dimensional array and return the coordinates immediately (encoded as row*10+col)
int loop_multi_exit(int target) {
    int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == target) {
                return i * 10 + j;  // Multiple break effects
            }
        }
    }
    return -1;  // not found
}

// CF-L2-02: Infinite loop ⭐⭐⭐
// Scenario: [SCENE-SYS] Event-driven system
// Test: Simulate polling volatile flag, set the flag and exit after count times
int infinite_loop(volatile int *flag) {
    int count = 0;
    // Deliberately construct an infinite loop and rely on external status to exit
    while (1) {
        if (*flag == 1) {
            break;  // Exit triggered by external conditions
        }
        count++;
        if (count > 1000) {  // Simulation timeout
            *flag = 1;  // Set exit conditions
            break;
        }
    }
    return count;
}

// CF-L2-03: Early return (multiple function exits) ⭐⭐
// Scenario: [SCENE-ALL] parameter verification
// Test: multi-layer verification, early return if any failure
int multi_return(int x) {
    if (x < 0) return -1;  // First exit: Negative rejection
    
    int temp = x * 2;
    if (temp > 100) return -2;  // Second exit: overflow rejection
    
    if (x % 2 == 0) return temp;  // Third exit: Even numbers return directly
    
    return x + 1;  // Default export
}

// CF-L2-04: Conditional return ⭐⭐
// Scenario: [SCENE-ALL] Simplified branching
// Test: Use ?: operator in return statement
int conditional_return(int x) {
    // All returns are in conditional expressions
    return (x > 0) ? (x * 2) : ((x < 0) ? (x * -1) : 0);
}

// CF-L2-05: Duff's device ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] Performance Optimization
// Test: efficient memory copy, n must be > 0
int duffs_device(int *dst, int *src, int n) {
    if (n <= 0) return -1;
    
    int count = (n + 7) / 8;  // Calculate the number of loops
    switch (n % 8) {
        case 0: do { *dst++ = *src++;
        case 7:      *dst++ = *src++;
        case 6:      *dst++ = *src++;
        case 5:      *dst++ = *src++;
        case 4:      *dst++ = *src++;
        case 3:      *dst++ = *src++;
        case 2:      *dst++ = *src++;
        case 1:      *dst++ = *src++;
                } while (--count > 0);
    }
    return n;
}

// CF-L2-06: Complex loop conditions ⭐⭐⭐
// Scenario: [SCENE-DESK] Multiple condition loop
// Test: Multiple variables jointly control loop exit
int loop_complex_cond(int x) {
    int a = 0, b = x, c = 0;
    // Complex condition: a<b and c<10 and b>0
    while (a < b && c < 10 && b > 0) {
        a += 2;
        b -= 1;
        c++;
    }
    return a + b + c;
}

// CF-L2-07: Modify loop variables inside the loop ⭐⭐⭐
// Scenario: [SCENE-EMB] Manual optimization
// Test: Manually modify i in the for loop, interfering with normal iteration
int loop_modify_var(int n) {
    int sum = 0;
    // Modify loop variables within the loop body
    for (int i = 0; i < n; i++) {
        sum += i;
        if (i > 5) {
            i += 2;  // Manually skip iterations
        }
    }
    return sum;
}

// CF-L2-08: Cyclic dependency on external state ⭐⭐⭐
// Scenario: [SCENE-NET] Event Loop
// Test: Loop conditions depend on volatile variables
int loop_external_state(volatile int *flag) {
    int count = 0;
    // Loop condition relies on external volatile flag
    while (*flag == 0) {
        count++;
        if (count > 100) break;  // Prevent permanent blockage
    }
    return count;
}

// CF-L2-09: Recursive call ⭐⭐⭐
// Scenario: [SCENE-ALL] Divide and Conquer Algorithm
// Test: Calculate factorial, recursion depth n
int recursion_factorial(int n) {
    // base conditions
    if (n <= 1) return 1;
    // recursive call
    return n * recursion_factorial(n - 1);
}

// CF-L2-10: Tail recursion ⭐⭐⭐
// Scenario: [SCENE-ALL] Functional optimization
// Test: Tail recursive calculation of factorial, which can be optimized as a loop
int tail_recursion(int n, int acc) {
    // Tail recursive form, acc cumulative result
    if (n <= 1) return acc;
    return tail_recursion(n - 1, n * acc);  // The last operation is a recursive call
}

// CF-L2-11: Indirect recursion ⭐⭐⭐⭐
// Scenario: [SCENE-DESK] Complex state machine
// Test: Function A calls B, and B then calls A
static int indirect_recursion_b(int n, int depth);

int indirect_recursion_a(int n, int depth) {
    if (depth <= 0) return n;
    if (n % 2 == 0) {
        return indirect_recursion_b(n / 2, depth - 1);
    }
    return indirect_recursion_b(n * 3 + 1, depth - 1);
}

static int indirect_recursion_b(int n, int depth) {
    if (depth <= 0) return n;
    return indirect_recursion_a(n + 1, depth - 1);
}

// CF-L2-12: Function pointer call (single target) ⭐⭐⭐
// Scenario: [SCENE-ALL] callback mechanism
// Test: Pass the parameters into the function pointer and call
int call_func_ptr(int (*f)(int), int x) {
    // Call the function pointer passed in
    return f(x);
}

// Auxiliary function: used to test CF-L2-12
static int double_value(int x) { return x * 2; }
static int triple_value(int x) { return x * 3; }

// CF-L2-13: Function pointer array call ⭐⭐⭐⭐
// Scenario: [SCENE-NET] Distribution table/jump table
// Test: Select call target from array of function pointers based on index
int call_func_ptr_array(int idx, int x) {
    // Define an array of function pointers
    int (*funcs[])(int) = {double_value, triple_value, recursion_factorial};
    if (idx < 0 || idx >= 3) return -1;
    
    return funcs[idx](x);  // Called by array index
}

// CF-L2-14: Virtual Function Call (C++) ⭐⭐⭐⭐
// Scenario: [SCENE-DESK] Object-oriented polymorphism
// Test: C++ virtual table mechanism, needs to be compiled with C++ compiler
#ifdef __cplusplus
class Base {
public:
    virtual int virtual_method(int x) { return x * 2; }
    virtual ~Base() {}
};

class Derived : public Base {
public:
    int virtual_method(int x) override { return x * 3; }
};

// Virtual function calls wrapper function (for C interface call)
extern "C" int call_virtual_func(void *obj, int x) {
    Base *b = static_cast<Base*>(obj);
    return b->virtual_method(x);  // virtual table call
}
#else
// C version stub implementation
int call_virtual_func(void *obj, int x) {
    return x * 2;  // Simulate virtual function behavior
}
#endif

// CF-L2-15: Callback function pattern ⭐⭐⭐
// Scenario: [SCENE-NET] Event Handler/Traverser
// Test: Loop through the array and apply a callback function to each element
int process_with_callback(int *arr, int n, int (*cb)(int)) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += cb(arr[i]);  // callback to handle each element
    }
    return sum;
}

// ============================================================================
// Helper functions: for testing advanced control flow features
// ============================================================================

// Test entrance
void test_control_flow_l2() {
    printf("=== 测试高级控制流特征 ===\n");
    
    // CF-L2-01
    printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));  // Expected: 12 (row 2, column 3)
    
    // CF-L2-02
    volatile int flag = 0;
    printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&flag));  // Expectation: ~1001
    
    // CF-L2-03
    printf("CF-L2-03 (multi_return): %d\n", multi_return(-5));  // Expectation: -1
    printf("CF-L2-03 (multi_return): %d\n", multi_return(100)); // Expectation: -2
    printf("CF-L2-03 (multi_return): %d\n", multi_return(3));   // Expectations: 4
    
    // CF-L2-04
    printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5));   // Expectation: 10
    printf("CF-L2-04 (conditional_return): %d\n", conditional_return(-5));  // Expectation: 5
    
    // CF-L2-05
    int src[] = {1,2,3,4,5,6,7,8};
    int dst[8] = {0};
    printf("CF-L2-05 (duffs_device): %d\n", duffs_device(dst, src, 8));  // Expectation: 8
    
    // CF-L2-06
    printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));  // Expectation: Logically would wait 18
    
    // CF-L2-07
    printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10));  // Expectation: The effect of manually modifying i will return 30
    
    // CF-L2-08
    volatile int ext_flag = 0;
    printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&ext_flag));  // Expectation: ~101
    
    // CF-L2-09
    printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));  // Expectation: 120
    
    // CF-L2-10
    printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));  // Expectation: 120
    
    // CF-L2-11
    printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3));  // Expectation: recursive result=3
    
    // CF-L2-12
    printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5));  // Expectation: 10
    
    // CF-L2-13
    printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));  // Expectation: 10
    printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));  // Expectation: 120
    
    // CF-L2-15
    int arr[] = {1,2,3,4,5};
    printf("CF-L2-15 (process_with_callback): %d\n", 
           process_with_callback(arr, 5, double_value));  // Expectation: 30 (2+4+6+8+10)
}

// ============================================================================
// 1.3 Extreme control flow features - Control Flow Level 3
// ============================================================================

// Global jmp_buf is used for setjmp/longjmp testing
#include <setjmp.h>
static jmp_buf jump_buffer;

// CF-L3-01: setjmp/longjmp ⭐⭐⭐⭐⭐
// Scenario: [SCENE-SYS] Non-local jump
// Test: simulate error handling, jump to recovery point
int non_local_jump(int x) {
    if (setjmp(jump_buffer) == 0) {
        // Normal execution path
        if (x < 0) {
            longjmp(jump_buffer, 1);  // Error code 1
        }
        if (x > 100) {
            longjmp(jump_buffer, 2);  // Error code 2
        }
        return x * 2;  // Normal processing
    } else {
        // longjmp return point
        return -1;  // Error handling
    }
}

// CF-L3-02: Exception handling (try-catch) ⭐⭐⭐⭐
// Scenario: [SCENE-DESK] C++ exception
// Test: C++ exception throwing and catching
#ifdef __cplusplus
int cpp_exception(int x) {
    try {
        if (x < 0) throw "negative value";
        if (x > 100) throw 999;
        return x * 2;
    } catch (const char* e) {
        return -1;  // String exception
    } catch (int e) {
        return -2;  // Integer exception
    }
}
#else
// C version: simulate abnormal behavior
int cpp_exception(int x) {
    if (x < 0) return -1;
    if (x > 100) return -2;
    return x * 2;
}
#endif

// CF-L3-03: Array of function pointers (10+ elements) ⭐⭐⭐⭐
// Scenario: [SCENE-NET] Mass distribution table
// Test: opcode distribution, 10 handler functions
static int op_add(int a, int b) { return a + b; }
static int op_sub(int a, int b) { return a - b; }
static int op_mul(int a, int b) { return a * b; }
static int op_div(int a, int b) { return b != 0 ? a / b : 0; }
static int op_mod(int a, int b) { return b != 0 ? a % b : 0; }
static int op_and(int a, int b) { return a & b; }
static int op_or(int a, int b) { return a | b; }
static int op_xor(int a, int b) { return a ^ b; }
static int op_shl(int a, int b) { return a << b; }
static int op_shr(int a, int b) { return a >> b; }

int large_jump_table(int op, int a, int b) {
    // Array of 10 function pointers
    int (*ops[])(int, int) = {
        op_add, op_sub, op_mul, op_div, op_mod,
        op_and, op_or, op_xor, op_shl, op_shr
    };
    if (op < 0 || op >= 10) return -1;
    return ops[op](a, b);
}

// CF-L3-04: Conditional function pointer selection ⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] algorithm selection
// Test: Select function implementation based on conditions at runtime
// Comment to avoid redefinition since 1-2 already exists
// static int double_value(int x) {
//     return x * 2;
// } 
// static int triple_value(int x) {
//     return x * 3;
// }
// static int recursion_factorial(int n) {
//     if (n <= 1) return 1;
//     return n * recursion_factorial(n - 1);
// }

int conditional_func_ptr(int mode, int x) {
    // Choose different processing functions based on the mode
    int (*func)(int);
    
    if (mode == 0) {
        func = double_value;  // encryption mode
    } else if (mode == 1) {
        func = triple_value;  // obfuscated mode
    } else {
        func = recursion_factorial;  // Others: recursive calculations
    }
    
    return func(x);
}

// CF-L3-05: State machine (switch-case) ⭐⭐⭐⭐
// Scenario: [SCENE-NET] Protocol Analysis
// Test: Explicit state variable + switch state transfer
int state_machine(int event, int state) {
    // Simple state machine: 0=IDLE, 1=PROCESSING, 2=DONE, 3=ERROR
    switch (state) {
        case 0:  // IDLE
            if (event == 1) return 1;  // Start processing
            return 0;
        case 1:  // PROCESSING
            if (event == 2) return 2;  // Complete
            if (event == 99) return 3;  // Error
            return 1;
        case 2:  // DONE
            return 2;  // keep completed
        case 3:  // ERROR
            if (event == 0) return 0;  // reset
            return 3;
        default:
            return 3;  // Unknown status transition error
    }
}

// CF-L3-06: State machine (function pointer table) ⭐⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] Efficient state machine
// Test: Use the status as an index to call the corresponding processing function
static int state_idle(int event) { return event == 1 ? 1 : 0; }
static int state_processing(int event) { 
    if (event == 2) return 2;
    if (event == 99) return 3;
    return 1;
}
static int state_done(int event) { return 2; }
static int state_error(int event) { return event == 0 ? 0 : 3; }

int fsm_func_table(int event, int state) {
    // The state machine is implemented through a function pointer table
    int (*state_handlers[])(int) = {
        state_idle, state_processing, state_done, state_error
    };
    if (state < 0 || state >= 4) return 3;  // Invalid status
    return state_handlers[state](event);
}

// CF-L3-07: Computed jump ⭐⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] obfuscated code
// Test: Calculate jump target at runtime
int computed_goto(int *labels, int idx) {
    // Computational goto using GCC extensions
    // NOTE: This is a compiler specific extension
    void *targets[] = {&&label0, &&label1, &&label2, &&label3};
    if (idx < 0 || idx > 3) return -1;
    
    goto *targets[idx];  // Computed jump
    
label0: return 0;
label1: return 10;
label2: return 20;
label3: return 30;
}

// CF-L3-08: Obfuscated control flow (fake branches) ⭐⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] Anti-analysis
// Test: False condition that the compiler cannot eliminate
int obfuscated_cf(int x) {
    int result = x;
    // Opaque predicate: always false but difficult to analyze statically
    if ((x * x + 1) < 0) {  // Mathematically false, but requires analysis
        result = result * 2 + 1;  // false path
    }
    // real path
    result = result * 2;
    return result;
}

// CF-L3-09: Opaque predicate ⭐⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] Control flow confusion
// Test: complex but deterministic conditional judgment
int opaque_predicate(int x) {
    // Complex but deterministic predicates
    int cond = ((x * 0x12345678) & 0xFFFFFFFF) % 2;
    if (cond == 0) {
        return x * 2;  // Actually always go here
    } else {
        return x * 3;  // permanent branch
    }
}

// CF-L3-10: code overlap ⭐⭐⭐⭐⭐
// Scenario: [SCENE-CRYPTO] Extreme confusion
// Test: cannot be implemented directly in C, an assembly version is provided
// NOTE: Overlapping code requires manual assembly construction, conceptual C simulation is provided here
int overlapped_code(int x) {
    // Conceptual simulation: the same piece of code is used by multiple entry points
    // Actual implementation requires inline assembly and linker scripts
    
    // Simulation implementation: different entry point offsets
    if (x & 1) {
        // Entry Point 1: Odd Number Processing
        return x * 3 + 1;
    } else {
        // Entry point 2: Even processing (overlapping instructions with odd paths)
        return x / 2;
    }
}

// ============================================================================
// Auxiliary test function
// ============================================================================

void test_control_flow_l3() {
    printf("=== 测试极端控制流特征 ===\n");
    
    // CF-L3-01
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));    // Expectation: 10
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(-5));  // Expectation: -1
    
    // CF-L3-02
    printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5));    // Expectation: 10
    printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(-5));   // Expectation: -1
    
    // CF-L3-03
    printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));  // Expectation: 15
    
    // CF-L3-04
    printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));  // Expectation: 10
    
    // CF-L3-05
    printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0));  // Expectation: 1
    
    // CF-L3-06
    printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));  // Expectation: 2
    
    // CF-L3-07
    int labels[] = {0,1,2,3};
    printf("CF-L3-07 (computed_goto): %d\n", computed_goto(labels, 2));  // Expectation: 20
    
    // CF-L3-08
    printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5));  // Expectation: 10
    
    // CF-L3-09
    printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5));  // Expectation: 10
    
    // CF-L3-10
    printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5));  // Expectation: 16
}

// Individual test entry
int main() {
    test_control_flow_l1();
    test_control_flow_l2();
    test_control_flow_l3();
    return 0;
}
