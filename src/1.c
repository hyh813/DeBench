#include <stdio.h>

// ============================================================================
// 基础控制流特征 - Control Flow Level 1
// 版本: BinDeBench v2.0
// 构建单元: 函数级别
// ============================================================================

// CF-L1-01: 线性顺序执行 ⭐
// 难度依据: 纯顺序指令流，编译后100%保留原始结构，无分支预测开销
// 场景标签: [SCENE-ALL] - 适用于所有场景的基础特征
// 测试验证: 输入5,7,3应返回21 (5+7)*2-3=21
int sequential_ops(int a, int b, int c) {
    // 纯粹的顺序操作，无分支
    int temp1 = a + b;
    int temp2 = temp1 * 2;
    int temp3 = temp2 - c;
    return temp3;
}

// CF-L1-02: 单分支if ⭐
// 难度依据: 单一条件跳转，编译后为cmp+jcc指令对，反编译器模式匹配即可恢复
// 场景标签: [SCENE-ALL] - 最基础的分支结构
// 测试验证: 输入10应返回20 (正数加倍), 输入-5应返回-5 (负数不变)
int single_if(int x) {
    // 单分支，无else路径
    if (x > 0) {
        x = x * 2;  // 正数加倍
    }
    // 隐式的else: 负数直接返回
    return x;
}

// CF-L1-03: if-else双分支 ⭐
// 难度依据: 经典if-else结构，编译后为cmp+jcc+else代码块，结构化恢复率>95%
// 场景标签: [SCENE-ALL] - 基础决策结构
// 测试验证: 输入5应返回1 (正数), 输入-3应返回0 (负数或零)
int if_else(int x) {
    // 明确的if-else双分支
    if (x > 0) {
        return 1;  // 正数返回1
    } else {
        return 0;  // 负数或零返回0
    }
}

// CF-L1-04: 嵌套if（2层） ⭐⭐
// 难度依据: 嵌套深度2层，需要控制流图(CFG)分析识别嵌套模式，但仍在基本块内
// 场景标签: [SCENE-ALL] - 常见嵌套模式
// 测试验证: 
//   x=10,y=5 -> 返回3 (x>0且y<x, 返回y%2+1=1+1=2?不对, 重新设计)
//   改为: x>0且y>0返回x+y, x>0但y<=0返回x, 否则返回0
int nested_if_2(int a, int b) {
    // 两层嵌套if
    if (a > 0) {
        if (b > 0) {
            // 分支1: a>0且b>0
            return a + b;
        } else {
            // 分支2: a>0但b<=0
            return a;
        }
    } else {
        // 分支3: a<=0
        return 0;
    }
}

// CF-L1-05: 嵌套if（3-5层） ⭐⭐⭐
// 难度依据: 3层嵌套需要跨基本块的数据流分析，优化后可能产生指令重排
// 场景标签: [SCENE-DESK] - 桌面应用中的复杂条件判断
// 测试验证: a,b,c,d,e为5个判断条件，按字典序优先级返回层级
int nested_if_deep(int a, int b, int c, int d, int e) {
    // 5层深度嵌套，模拟复杂权限检查或状态机
    if (a > 0) {
        if (b > 0) {
            if (c > 0) {
                if (d > 0) {
                    if (e > 0) {
                        return 5;  // 所有条件满足
                    } else {
                        return 4;  // e不满足
                    }
                } else {
                    return 3;  // d不满足
                }
            } else {
                return 2;  // c不满足
            }
        } else {
            return 1;  // b不满足
        }
    } else {
        return 0;  // a不满足
    }
}

// CF-L1-06: if-else if链（3分支） ⭐⭐
// 难度依据: 线性条件链，编译后可能为cmp+jcc序列或跳转表，需识别为结构化链式判断
// 场景标签: [SCENE-ALL] - 状态码处理等常见模式
// 测试验证: 输入0/1/2分别返回10/20/30，其他返回-1
int if_elseif_chain(int x) {
    // if-else if链，3个主要分支
    if (x == 0) {
        return 10;
    } else if (x == 1) {
        return 20;
    } else if (x == 2) {
        return 30;
    } else {
        return -1;  // 默认分支
    }
}

// CF-L1-07: if-else if链（5+分支） ⭐⭐⭐
// 难度依据: 5+分支触发编译器优化为跳转表或二分查找，CFG结构改变
// 场景标签: [SCENE-DESK] - 命令处理器、协议解析
// 测试验证: 0-4返回对应值，其他返回-1
int if_elseif_long(int x) {
    // 6分支链，可能触发跳转表生成
    if (x == 0) return 100;
    else if (x == 1) return 200;
    else if (x == 2) return 300;
    else if (x == 3) return 400;
    else if (x == 4) return 500;
    else return -1;
}

// CF-L1-08: switch-case（3-5分支） ⭐⭐
// 难度依据: 小范围switch，编译器可能生成if-else链或稀疏跳转表
// 场景标签: [SCENE-ALL] - 基础状态切换
// 测试验证: 操作码0-3分别执行加减乘除，其他返回-1
int switch_small(int op) {
    int a = 10, b = 5;
    switch (op) {
        case 0: return a + b;  // 加
        case 1: return a - b;  // 减
        case 2: return a * b;  // 乘
        case 3: return a / b;  // 除
        default: return -1;    // 无效操作
    }
}

// CF-L1-09: switch-case（10+分支） ⭐⭐⭐
// 难度依据: 密集case触发跳转表优化，反编译需识别跳转表结构而非线性比较
// 场景标签: [SCENE-DESK] - 复杂命令分发、字节码解释器
// 测试验证: 0-9返回对应值，其他返回-1
int switch_large(int op) {
    // 10分支switch，几乎肯定生成跳转表
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

// CF-L1-10: switch-case（含default） ⭐⭐
// 难度依据: 带default的switch覆盖所有路径，需验证反编译是否保留完整语义
// 场景标签: [SCENE-ALL] - 防御性编程
// 测试验证: 1-3返回对应值，其他返回0（default）
int switch_default(int op) {
    // 带default的switch
    switch (op) {
        case 1: return 100;
        case 2: return 200;
        case 3: return 300;
        default: return 0;  // 所有未覆盖情况
    }
}

// CF-L1-11: switch-case（fall-through） ⭐⭐⭐
// 难度依据: 故意省略break，编译后产生连续代码块，反编译需识别有意fall-through
// 场景标签: [SCENE-CRYPTO] - 密码学中常用手工优化
// 测试验证: 
//   op=1: 返回1 (1<<0)
//   op=2: 返回6 (2<<1 + 2)
//   op=3: 返回24 (3<<2 + 3<<1 + 3)
int switch_fallthrough(int op) {
    int result = 0;
    // 故意省略break，形成fall-through逻辑
    switch (op) {
        case 3: result += (op << 2);  // fall-through
        case 2: result += (op << 1);  // fall-through
        case 1: result += op;         // 基础值
                break;
        default: result = -1;
    }
    return result;
}

// CF-L1-12: for循环（固定次数） ⭐
// 难度依据: 经典for循环模式，编译后为cmp+jcc回跳，反编译器模式匹配成功率>90%
// 场景标签: [SCENE-ALL] - 基础迭代模式
// 测试验证: 计算0到n-1的和，输入10返回45
int loop_for_fixed(int n) {
    int sum = 0;
    // 固定次数的for循环
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    return sum;
}

// CF-L1-13: while循环 ⭐
// 难度依据: 条件前置循环，编译模式与for类似，但缺少初始化部分
// 场景标签: [SCENE-ALL] - 条件不确定的迭代
// 测试验证: 输入12345返回5 (统计位数), 输入0返回1
int loop_while(int x) {
    int count = 0;
    // 条件前置的while循环
    while (x != 0) {
        x = x / 10;
        count++;
    }
    return count > 0 ? count : 1;  // 处理x=0的情况
}

// CF-L1-14: do-while循环 ⭐⭐
// 难度依据: 至少执行一次，编译为do-while结构，需识别入口条件后置特征
// 场景标签: [SCENE-ALL] - 先执行后判断的场景
// 测试验证: 输入9876返回4 (统计位数)
int loop_dowhile(int x) {
    int count = 0;
    // 至少执行一次的do-while
    do {
        x = x / 10;
        count++;
    } while (x != 0);
    return count;
}

// CF-L1-15: 循环嵌套（2层） ⭐⭐
// 难度依据: 矩形迭代模式，需要识别外层和内层循环的独立归纳变量
// 场景标签: [SCENE-ALL] - 矩阵操作基础
// 测试验证: 计算m*n矩阵元素总数，输入3,4返回12
int loop_nested(int m, int n) {
    int total = 0;
    // 2层嵌套循环，典型矩阵遍历模式
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            total++;
        }
    }
    return total;
}

// CF-L1-16: 循环+break ⭐⭐
// 难度依据: 单一退出点破坏，需要识别break提前退出路径，但模式仍较规律
// 场景标签: [SCENE-ALL] - 搜索/查找场景
// 测试验证: 在数组中查找目标值，找到返回索引，未找到返回-1
int loop_break(int target) {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    // 带break的循环，提前退出
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // 找到目标，break等价于return
        }
    }
    return -1;  // 未找到
}

// CF-L1-17: 循环+continue ⭐⭐
// 难度依据: 跳过本次迭代，编译为jcc到循环增量部分，需识别continue语义
// 场景标签: [SCENE-ALL] - 过滤/跳过特定条件
// 测试验证: 计算1到n中奇数的和，输入10返回25 (1+3+5+7+9)
int loop_continue(int n) {
    int sum = 0;
    // 带continue的循环，跳过偶数
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            continue;  // 偶数跳过
        }
        sum += i;  // 只累加奇数
    }
    return sum;
}

// CF-L1-18: goto前向跳转 ⭐⭐⭐
// 难度依据: 破坏结构化，编译为无条件跳转，反编译需识别跳转目标并重构逻辑
// 场景标签: [SCENE-EMB] - 嵌入式中常用于错误处理
// 测试验证: 输入正负数走不同路径，但最终汇聚
//   x>0: 计算平方 -> 跳转标签 -> 乘以2
//   x<=0: 直接跳转标签 -> 乘以2
int goto_forward(int x) {
    int result;
    
    // goto前向跳转，模拟错误处理汇聚
    if (x > 0) {
        result = x * x;  // 正数先平方
        goto common_exit;  // 前向跳转
    } else {
        result = x;  // 负数或零直接使用
        //  fall-through到common_exit
    }
    
common_exit:
    result = result * 2;  // 统一乘以2
    return result;
}

// CF-L1-19: goto后向跳转 ⭐⭐⭐
// 难度依据: 创建循环效果但破坏结构化，反编译需识别为等价while/for循环
// 场景标签: [SCENE-EMB] - 嵌入式中手工优化循环
// 测试验证: 计算x的阶乘，输入5返回120
int goto_backward(int x) {
    if (x <= 0) return 1;  // 基准条件
    
    int result = 1;
    int i = 1;
    
    // goto实现的后向跳转循环
loop_start:
    if (i > x) {
        goto loop_end;  // 退出条件
    }
    result *= i;
    i++;
    goto loop_start;  // 后向跳转到循环开始
    
loop_end:
    return result;
}

// CF-L1-20: 三目运算符?: ⭐⭐
// 难度依据: 条件表达式，编译为cmov或条件跳转，反编译需恢复为?:形式
// 场景标签: [SCENE-ALL] - 简洁的条件赋值
// 测试验证: 返回两数中的较大值
int ternary_op(int a, int b) {
    // 三目运算符，简洁的条件选择
    return (a > b) ? a : b;
}

// ============================================================================
// 辅助测试函数 - 用于验证上述函数的正确性
// 每个函数独立可运行
// ============================================================================

// 测试入口函数
void test_control_flow_l1() {
    printf("=== 测试基础控制流特征 ===\n");
    
    // CF-L1-01
    printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3));  // 期望: 21
    
    // CF-L1-02
    printf("CF-L1-02 (single_if): %d\n", single_if(10));   // 期望: 20
    printf("CF-L1-02 (single_if): %d\n", single_if(-5));  // 期望: -5
    
    // CF-L1-03
    printf("CF-L1-03 (if_else): %d\n", if_else(5));   // 期望: 1
    printf("CF-L1-03 (if_else): %d\n", if_else(-3));  // 期望: 0
    
    // CF-L1-04
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, 5));  // 期望: 15
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(10, -5)); // 期望: 10
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(-10, 5)); // 期望: 0
    
    // CF-L1-05
    printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 1)); // 期望: 5
    
    // CF-L1-06
    printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(1));  // 期望: 20
    
    // CF-L1-07
    printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(3));  // 期望: 400
    
    // CF-L1-08
    printf("CF-L1-08 (switch_small): %d\n", switch_small(2));  // 期望: 50 (10*5)
    
    // CF-L1-09
    printf("CF-L1-09 (switch_large): %d\n", switch_large(7));  // 期望: 70
    
    // CF-L1-10
    printf("CF-L1-10 (switch_default): %d\n", switch_default(5));  // 期望: 0
    
    // CF-L1-11
    printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(3));  // 期望: 21 (3<<2 + 3<<1 + 3)
    
    // CF-L1-12
    printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10));  // 期望: 45 (0+1+...+9)
    
    // CF-L1-13
    printf("CF-L1-13 (loop_while): %d\n", loop_while(12345));  // 期望: 5
    
    // CF-L1-14
    printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876));  // 期望: 4
    
    // CF-L1-15
    printf("CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4));  // 期望: 12
    
    // CF-L1-16
    printf("CF-L1-16 (loop_break): %d\n", loop_break(30));  // 期望: 2 (arr[2]==30)
    printf("CF-L1-16 (loop_break): %d\n", loop_break(99));  // 期望: -1 (未找到)
    
    // CF-L1-17
    printf("CF-L1-17 (loop_continue): %d\n", loop_continue(10));  // 期望: 25
    
    // CF-L1-18
    printf("CF-L1-18 (goto_forward): %d\n", goto_forward(5));   // 期望: 50 (5*5*2)
    printf("CF-L1-18 (goto_forward): %d\n", goto_forward(-3));  // 期望: -6 (-3*2)
    
    // CF-L1-19
    printf("CF-L1-19 (goto_backward): %d\n", goto_backward(5));  // 期望: 120
    
    // CF-L1-20
    printf("CF-L1-20 (ternary_op): %d\n", ternary_op(10, 5));  // 期望: 10
    printf("CF-L1-20 (ternary_op): %d\n", ternary_op(3, 8));   // 期望: 8
}

// ============================================================================
// 1.2 高级控制流特征 - Control Flow Level 2
// ============================================================================

// CF-L2-01: 循环+多重break/continue ⭐⭐⭐
// 场景: [SCENE-DESK] 复杂退出条件
// 测试: 在二维数组中查找目标，找到立即返回坐标(编码为row*10+col)
int loop_multi_exit(int target) {
    int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == target) {
                return i * 10 + j;  // 多重break效果
            }
        }
    }
    return -1;  // 未找到
}

// CF-L2-02: 无限循环 ⭐⭐⭐
// 场景: [SCENE-SYS] 事件驱动系统
// 测试: 模拟轮询volatile标志，count次后设置标志退出
int infinite_loop(volatile int *flag) {
    int count = 0;
    // 故意构造无限循环，依赖外部状态退出
    while (1) {
        if (*flag == 1) {
            break;  // 外部条件触发退出
        }
        count++;
        if (count > 1000) {  // 模拟超时
            *flag = 1;  // 设置退出条件
            break;
        }
    }
    return count;
}

// CF-L2-03: 提前return（函数多出口） ⭐⭐
// 场景: [SCENE-ALL] 参数验证
// 测试: 多层验证，任意失败提前返回
int multi_return(int x) {
    if (x < 0) return -1;  // 第一出口: 负数拒绝
    
    int temp = x * 2;
    if (temp > 100) return -2;  // 第二出口: 溢出拒绝
    
    if (x % 2 == 0) return temp;  // 第三出口: 偶数直接返回
    
    return x + 1;  // 默认出口
}

// CF-L2-04: 条件return ⭐⭐
// 场景: [SCENE-ALL] 简化分支
// 测试: 使用?:运算符在return语句中
int conditional_return(int x) {
    // 所有return都在条件表达式中
    return (x > 0) ? (x * 2) : ((x < 0) ? (x * -1) : 0);
}

// CF-L2-05: Duff's device ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 性能优化
// 测试: 高效内存复制，n必须>0
int duffs_device(int *dst, int *src, int n) {
    if (n <= 0) return -1;
    
    int count = (n + 7) / 8;  // 计算循环次数
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

// CF-L2-06: 复杂循环条件 ⭐⭐⭐
// 场景: [SCENE-DESK] 多条件循环
// 测试: 多个变量共同控制循环退出
int loop_complex_cond(int x) {
    int a = 0, b = x, c = 0;
    // 复杂条件: a<b且c<10且b>0
    while (a < b && c < 10 && b > 0) {
        a += 2;
        b -= 1;
        c++;
    }
    return a + b + c;
}

// CF-L2-07: 循环内部修改循环变量 ⭐⭐⭐
// 场景: [SCENE-EMB] 手工优化
// 测试: for循环中手动修改i，干扰正常迭代
int loop_modify_var(int n) {
    int sum = 0;
    // 在循环体内修改循环变量
    for (int i = 0; i < n; i++) {
        sum += i;
        if (i > 5) {
            i += 2;  // 手动跳过迭代
        }
    }
    return sum;
}

// CF-L2-08: 循环依赖外部状态 ⭐⭐⭐
// 场景: [SCENE-NET] 事件循环
// 测试: 循环条件依赖volatile变量
int loop_external_state(volatile int *flag) {
    int count = 0;
    // 循环条件依赖外部volatile标志
    while (*flag == 0) {
        count++;
        if (count > 100) break;  // 防止永久阻塞
    }
    return count;
}

// CF-L2-09: 递归调用 ⭐⭐⭐
// 场景: [SCENE-ALL] 分治算法
// 测试: 计算阶乘，递归深度n
int recursion_factorial(int n) {
    // 基准条件
    if (n <= 1) return 1;
    // 递归调用
    return n * recursion_factorial(n - 1);
}

// CF-L2-10: 尾递归 ⭐⭐⭐
// 场景: [SCENE-ALL] 函数式优化
// 测试: 尾递归计算阶乘，可被优化为循环
int tail_recursion(int n, int acc) {
    // 尾递归形式，acc累积结果
    if (n <= 1) return acc;
    return tail_recursion(n - 1, n * acc);  // 最后操作是递归调用
}

// CF-L2-11: 间接递归 ⭐⭐⭐⭐
// 场景: [SCENE-DESK] 复杂状态机
// 测试: 函数A调用B，B再调用A
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

// CF-L2-12: 函数指针调用（单目标） ⭐⭐⭐
// 场景: [SCENE-ALL] 回调机制
// 测试: 参数传入函数指针并调用
int call_func_ptr(int (*f)(int), int x) {
    // 调用传入的函数指针
    return f(x);
}

// 辅助函数：用于测试CF-L2-12
static int double_value(int x) { return x * 2; }
static int triple_value(int x) { return x * 3; }

// CF-L2-13: 函数指针数组调用 ⭐⭐⭐⭐
// 场景: [SCENE-NET] 分发表/跳转表
// 测试: 根据索引从函数指针数组选择调用目标
int call_func_ptr_array(int idx, int x) {
    // 定义函数指针数组
    int (*funcs[])(int) = {double_value, triple_value, recursion_factorial};
    if (idx < 0 || idx >= 3) return -1;
    
    return funcs[idx](x);  // 通过数组索引调用
}

// CF-L2-14: 虚函数调用（C++） ⭐⭐⭐⭐
// 场景: [SCENE-DESK] 面向对象多态
// 测试: C++虚表机制，需用C++编译器编译
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

// 虚函数调用包装函数（供C接口调用）
extern "C" int call_virtual_func(void *obj, int x) {
    Base *b = static_cast<Base*>(obj);
    return b->virtual_method(x);  // 虚表调用
}
#else
// C版本桩实现
int call_virtual_func(void *obj, int x) {
    return x * 2;  // 模拟虚函数行为
}
#endif

// CF-L2-15: 回调函数模式 ⭐⭐⭐
// 场景: [SCENE-NET] 事件处理/遍历器
// 测试: 遍历数组并对每个元素应用回调函数
int process_with_callback(int *arr, int n, int (*cb)(int)) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += cb(arr[i]);  // 回调处理每个元素
    }
    return sum;
}

// ============================================================================
// 辅助函数：用于测试高级控制流特征
// ============================================================================

// 测试入口
void test_control_flow_l2() {
    printf("=== 测试高级控制流特征 ===\n");
    
    // CF-L2-01
    printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));  // 期望: 12 (第2行第3列)
    
    // CF-L2-02
    volatile int flag = 0;
    printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&flag));  // 期望: ~1001
    
    // CF-L2-03
    printf("CF-L2-03 (multi_return): %d\n", multi_return(-5));  // 期望: -1
    printf("CF-L2-03 (multi_return): %d\n", multi_return(100)); // 期望: -2
    printf("CF-L2-03 (multi_return): %d\n", multi_return(3));   // 期望: 4
    
    // CF-L2-04
    printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5));   // 期望: 10
    printf("CF-L2-04 (conditional_return): %d\n", conditional_return(-5));  // 期望: 5
    
    // CF-L2-05
    int src[] = {1,2,3,4,5,6,7,8};
    int dst[8] = {0};
    printf("CF-L2-05 (duffs_device): %d\n", duffs_device(dst, src, 8));  // 期望: 8
    
    // CF-L2-06
    printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10));  // 期望: 根据逻辑会等 18
    
    // CF-L2-07
    printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10));  // 期望: 手工修改i的效果，会返回 30
    
    // CF-L2-08
    volatile int ext_flag = 0;
    printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&ext_flag));  // 期望: ~101
    
    // CF-L2-09
    printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));  // 期望: 120
    
    // CF-L2-10
    printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));  // 期望: 120
    
    // CF-L2-11
    printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3));  // 期望: 递归结果=3
    
    // CF-L2-12
    printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5));  // 期望: 10
    
    // CF-L2-13
    printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5));  // 期望: 10
    printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5));  // 期望: 120
    
    // CF-L2-15
    int arr[] = {1,2,3,4,5};
    printf("CF-L2-15 (process_with_callback): %d\n", 
           process_with_callback(arr, 5, double_value));  // 期望: 30 (2+4+6+8+10)
}

// ============================================================================
// 1.3 极端控制流特征 - Control Flow Level 3
// ============================================================================

// 全局jmp_buf用于setjmp/longjmp测试
#include <setjmp.h>
static jmp_buf jump_buffer;

// CF-L3-01: setjmp/longjmp ⭐⭐⭐⭐⭐
// 场景: [SCENE-SYS] 非局部跳转
// 测试: 模拟错误处理，跳转到恢复点
int non_local_jump(int x) {
    if (setjmp(jump_buffer) == 0) {
        // 正常执行路径
        if (x < 0) {
            longjmp(jump_buffer, 1);  // 错误码1
        }
        if (x > 100) {
            longjmp(jump_buffer, 2);  // 错误码2
        }
        return x * 2;  // 正常处理
    } else {
        // longjmp返回点
        return -1;  // 错误处理
    }
}

// CF-L3-02: 异常处理（try-catch） ⭐⭐⭐⭐
// 场景: [SCENE-DESK] C++异常
// 测试: C++异常抛出与捕获
#ifdef __cplusplus
int cpp_exception(int x) {
    try {
        if (x < 0) throw "negative value";
        if (x > 100) throw 999;
        return x * 2;
    } catch (const char* e) {
        return -1;  // 字符串异常
    } catch (int e) {
        return -2;  // 整数异常
    }
}
#else
// C版本：模拟异常行为
int cpp_exception(int x) {
    if (x < 0) return -1;
    if (x > 100) return -2;
    return x * 2;
}
#endif

// CF-L3-03: 函数指针数组（10+元素） ⭐⭐⭐⭐
// 场景: [SCENE-NET] 大规模分发表
// 测试: 操作码分发，10个处理函数
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
    // 10个函数指针的数组
    int (*ops[])(int, int) = {
        op_add, op_sub, op_mul, op_div, op_mod,
        op_and, op_or, op_xor, op_shl, op_shr
    };
    if (op < 0 || op >= 10) return -1;
    return ops[op](a, b);
}

// CF-L3-04: 条件函数指针选择 ⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 算法选择
// 测试: 运行时根据条件选择函数实现
// 注释避免重定义，因为 1-2 已经有了
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
    // 根据模式选择不同的处理函数
    int (*func)(int);
    
    if (mode == 0) {
        func = double_value;  // 加密模式
    } else if (mode == 1) {
        func = triple_value;  // 混淆模式
    } else {
        func = recursion_factorial;  // 其他：递归计算
    }
    
    return func(x);
}

// CF-L3-05: 状态机（switch-case） ⭐⭐⭐⭐
// 场景: [SCENE-NET] 协议解析
// 测试: 显式状态变量+switch状态转移
int state_machine(int event, int state) {
    // 简单状态机：0=IDLE, 1=PROCESSING, 2=DONE, 3=ERROR
    switch (state) {
        case 0:  // IDLE
            if (event == 1) return 1;  // 开始处理
            return 0;
        case 1:  // PROCESSING
            if (event == 2) return 2;  // 完成
            if (event == 99) return 3;  // 错误
            return 1;
        case 2:  // DONE
            return 2;  // 保持完成状态
        case 3:  // ERROR
            if (event == 0) return 0;  // 重置
            return 3;
        default:
            return 3;  // 未知状态转错误
    }
}

// CF-L3-06: 状态机（函数指针表） ⭐⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 高效状态机
// 测试: 状态作为索引调用对应处理函数
static int state_idle(int event) { return event == 1 ? 1 : 0; }
static int state_processing(int event) { 
    if (event == 2) return 2;
    if (event == 99) return 3;
    return 1;
}
static int state_done(int event) { return 2; }
static int state_error(int event) { return event == 0 ? 0 : 3; }

int fsm_func_table(int event, int state) {
    // 状态机通过函数指针表实现
    int (*state_handlers[])(int) = {
        state_idle, state_processing, state_done, state_error
    };
    if (state < 0 || state >= 4) return 3;  // 无效状态
    return state_handlers[state](event);
}

// CF-L3-07: 计算型跳转 ⭐⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 混淆代码
// 测试: 运行时计算跳转目标
int computed_goto(int *labels, int idx) {
    // 使用GCC扩展的计算型goto
    // 注意：这是编译器特定扩展
    void *targets[] = {&&label0, &&label1, &&label2, &&label3};
    if (idx < 0 || idx > 3) return -1;
    
    goto *targets[idx];  // 计算型跳转
    
label0: return 0;
label1: return 10;
label2: return 20;
label3: return 30;
}

// CF-L3-08: 混淆控制流（虚假分支） ⭐⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 反分析
// 测试: 永假条件但编译器无法消除
int obfuscated_cf(int x) {
    int result = x;
    // 不透明谓词：恒为假但难以静态分析
    if ((x * x + 1) < 0) {  // 数学上永假，但需分析
        result = result * 2 + 1;  // 虚假路径
    }
    // 真实路径
    result = result * 2;
    return result;
}

// CF-L3-09: 不透明谓词 ⭐⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 控制流混淆
// 测试: 复杂但确定性的条件判断
int opaque_predicate(int x) {
    // 复杂但结果确定的谓词
    int cond = ((x * 0x12345678) & 0xFFFFFFFF) % 2;
    if (cond == 0) {
        return x * 2;  // 实际总是走这里
    } else {
        return x * 3;  // 永假分支
    }
}

// CF-L3-10: 重叠代码（code overlap） ⭐⭐⭐⭐⭐
// 场景: [SCENE-CRYPTO] 极端混淆
// 测试: 无法用C直接实现，提供汇编版本
// 注意：重叠代码需要手工汇编构造，此处提供概念性C模拟
int overlapped_code(int x) {
    // 概念性模拟：同一段代码被多个入口点使用
    // 实际实现需要内联汇编和链接器脚本
    
    // 模拟实现：不同入口点偏移
    if (x & 1) {
        // 入口点1：奇数处理
        return x * 3 + 1;
    } else {
        // 入口点2：偶数处理（与奇数路径有重叠指令）
        return x / 2;
    }
}

// ============================================================================
// 辅助测试函数
// ============================================================================

void test_control_flow_l3() {
    printf("=== 测试极端控制流特征 ===\n");
    
    // CF-L3-01
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));    // 期望: 10
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(-5));  // 期望: -1
    
    // CF-L3-02
    printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(5));    // 期望: 10
    printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(-5));   // 期望: -1
    
    // CF-L3-03
    printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5));  // 期望: 15
    
    // CF-L3-04
    printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5));  // 期望: 10
    
    // CF-L3-05
    printf("CF-L3-05 (state_machine): %d\n", state_machine(1, 0));  // 期望: 1
    
    // CF-L3-06
    printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1));  // 期望: 2
    
    // CF-L3-07
    int labels[] = {0,1,2,3};
    printf("CF-L3-07 (computed_goto): %d\n", computed_goto(labels, 2));  // 期望: 20
    
    // CF-L3-08
    printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(5));  // 期望: 10
    
    // CF-L3-09
    printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(5));  // 期望: 10
    
    // CF-L3-10
    printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(5));  // 期望: 16
}

// 单独测试入口
int main() {
    test_control_flow_l1();
    test_control_flow_l2();
    test_control_flow_l3();
    return 0;
}
