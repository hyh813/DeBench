// ============================================================================
// 5.1 C++面向对象 - C++ Object-Oriented Features
// ============================================================================
// 本章节需要C++14或更高版本编译
// 编译命令: g++ -std=c++14 -O0 -g -o test_cpp test_cpp_oo.cpp

#include <iostream>
#include <memory>
#include <typeinfo>
#include <cstring>

// ============================================================================
// CPP-L3-01: 类成员函数 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 类成员函数调用，隐含this指针传递
// 说明: 完整类定义，包含构造函数、成员函数、数据成员
class SimpleClass {
private:
    int value;
    char name[32];
public:
    // 构造函数
    SimpleClass(int v, const char* n) : value(v) {
        strncpy(name, n, sizeof(name)-1);
        name[sizeof(name)-1] = '\0';
    }
    
    // 成员函数
    int getValue() const { return value; }
    void setValue(int v) { value = v; }
    
    // 复杂成员函数
    int compute(int x) const {
        return value * x + strlen(name);
    }
    
    // 静态成员函数
    static int getClassID() { return 0x1234; }
};

int test_cpp_member_func() {
    SimpleClass obj(5, "Test");
    obj.setValue(10);
    
    int r1 = obj.getValue();           // 10
    int r2 = obj.compute(3);           // 10*3 + 4 = 34
    int r3 = SimpleClass::getClassID(); // 0x1234 = 4660
    
    return r1 + r2 + r3;  // 期望: 10 + 34 + 4660 = 4704
}

// ============================================================================
// CPP-L3-02: 构造函数/析构函数 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 构造/析构函数调用，对象生命周期管理，动态内存分配
class LifecycleClass {
private:
    int* data;
    size_t size;
    static int instance_count;
    
public:
    // 构造函数（分配资源）
    LifecycleClass(size_t s) : size(s) {
        data = new int[s];
        for (size_t i = 0; i < s; i++) {
            data[i] = i * 10;
        }
        instance_count++;
    }
    
    // 拷贝构造函数
    LifecycleClass(const LifecycleClass& other) : size(other.size) {
        data = new int[size];
        memcpy(data, other.data, size * sizeof(int));
        instance_count++;
    }
    
    // 析构函数（释放资源）
    ~LifecycleClass() {
        delete[] data;
        instance_count--;
    }
    
    // 访问函数
    int getData(size_t idx) const {
        return (idx < size) ? data[idx] : -1;
    }
    
    static int getInstanceCount() { return instance_count; }
};

// 静态成员初始化
int LifecycleClass::instance_count = 0;

int test_cpp_constructor() {
    int result = 0;
    
    {  // 作用域块，测试析构
        LifecycleClass obj(5);  // 调用构造函数
        result += obj.getData(2);  // 20
        result += LifecycleClass::getInstanceCount();  // 1
    }  // 调用析构函数
    
    result += LifecycleClass::getInstanceCount() * 1000;  // 0 * 1000 = 0
    
    return result;  // 期望: 20 + 1 + 0 = 21
}

// ============================================================================
// CPP-L3-03: 虚函数调用 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 虚表(vtable)机制，运行时多态
// 说明: 包含虚析构函数，确保vtable完整
class Base {
public:
    virtual int virtual_func(int x) { 
        return x + 1; 
    }
    
    virtual const char* getName() const {
        return "Base";
    }
    
    virtual ~Base() {}  // 虚析构函数
};

class Derived : public Base {
private:
    int multiplier;
public:
    Derived(int m) : multiplier(m) {}
    
    int virtual_func(int x) override { 
        return x * multiplier; 
    }
    
    const char* getName() const override {
        return "Derived";
    }
};

// 通过基类指针调用虚函数（多态）
int call_virtual_func(Base *obj, int x) {
    return obj->virtual_func(x);  // vtable间接调用
}

int test_cpp_virtual_func() {
    Base base;
    Derived derived(3);
    
    // 直接调用
    int r1 = base.virtual_func(5);      // 6
    int r2 = derived.virtual_func(5);   // 15
    
    // 通过指针多态调用
    Base *pb = &base;
    Base *pd = &derived;
    
    int r3 = call_virtual_func(pb, 5);  // 6
    int r4 = call_virtual_func(pd, 5);  // 15 (多态)
    
    return r1 + r2 + r3 + r4;  // 期望: 6+15+6+15 = 42
}

// ============================================================================
// CPP-L3-04: 多继承 ⭐⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 多继承下的虚表布局和this指针调整
class BaseA {
public:
    virtual int funcA() { return 10; }
    virtual ~BaseA() {}
    int dataA;
};

class BaseB {
public:
    virtual int funcB() { return 20; }
    virtual ~BaseB() {}
    int dataB;
};

class MultiDerived : public BaseA, public BaseB {
public:
    int funcA() override { return 30; }
    int funcB() override { return 40; }
    int funcDerived() { return 50; }
};

int test_cpp_multiple_inheritance() {
    MultiDerived obj;
    obj.dataA = 100;
    obj.dataB = 200;
    
    // 多继承对象的this指针调整
    BaseA *pa = &obj;  // 可能需要this指针调整
    BaseB *pb = &obj;  // 可能需要this指针调整
    
    int r1 = pa->funcA();  // 30
    int r2 = pb->funcB();  // 40
    
    // 检查指针是否相等（需this调整时不等）
    int ptr_equal = (void*)pa == (void*)pb ? 0 : 1;
    
    return r1 + r2 + ptr_equal;  // 期望: 30+40+1 = 71
}

// ============================================================================
// CPP-L3-05: 菱形继承（虚拟继承）⭐⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 虚拟继承避免重复基类子对象
class VirtualBase {
public:
    int shared_data;
    virtual int func() { return 100; }
    virtual ~VirtualBase() {}
};

class MiddleA : virtual public VirtualBase {
public:
    int dataA;
    int func() override { return shared_data + 150; }
};

class MiddleB : virtual public VirtualBase {
public:
    int dataB;
    int func() override { return shared_data + 200; }
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    int func() override { 
        return shared_data + 250;  // 只有一个shared_data副本
    }
};

int test_cpp_diamond_inheritance() {
    DiamondDerived obj;
    obj.shared_data = 50;  // 不模糊，只有一份
    
    // 虚拟继承确保只有一份VirtualBase子对象
    VirtualBase *pb = &obj;
    
    int r1 = pb->func();  // 通过虚拟基类指针调用: 50+250=300
    
    // 验证只有一份shared_data
    obj.shared_data = 100;
    int r2 = pb->func();  // 100+250=350
    
    return r1 + r2;  // 期望: 300 + 350 = 650
}

// ============================================================================
// CPP-L3-06: 运算符重载 ⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 运算符作为函数调用
class Point {
public:
    int x, y;
    
    Point(int _x, int _y) : x(_x), y(_y) {}
    
    // 二元运算符重载
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
    
    // 比较运算符重载
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
    
    // 自增运算符重载
    Point& operator++() {  // 前置++
        ++x; ++y;
        return *this;
    }
};

int test_cpp_operator_overload() {
    Point p1(1, 2);
    Point p2(3, 4);
    
    Point p3 = p1 + p2;  // operator+
    bool eq = (p1 == p2);  // operator== (false)
    
    ++p3;  // operator++ (前置)
    
    return p3.x + p3.y + (eq ? 0 : 10);  // (5+7) + 10 = 22
}

// ============================================================================
// CPP-L3-07: 模板函数 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 模板实例化后的代码生成
template<typename T>
T template_max(T a, T b) {
    return a > b ? a : b;
}

template<typename T>
void template_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// 显式实例化（确保生成符号）
template int template_max<int>(int, int);
template double template_max<double>(double, double);
template void template_swap<int>(int&, int&);

int test_cpp_template_func() {
    int r1 = template_max(3, 7);          // int实例化: 7
    double r2 = template_max(2.5, 1.5);   // double实例化: 2.5
    
    int a = 10, b = 20;
    template_swap(a, b);  // a=20, b=10
    
    return r1 + (int)r2 + a + b;  // 7 + 2 + 20 + 10 = 39
}

// ============================================================================
// CPP-L3-08: 模板类 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 模板类成员函数实例化
template<class T>
class Container {
private:
    T data[10];
    int size;
public:
    Container() : size(0) {}
    
    void push(T value) {
        if (size < 10) data[size++] = value;
    }
    
    T get(int idx) const {
        if (idx >= 0 && idx < size) return data[idx];
        return T();
    }
    
    int getSize() const { return size; }
};

// 显式实例化
template class Container<int>;
template class Container<double>;

int test_cpp_template_class() {
    Container<int> int_container;
    int_container.push(10);
    int_container.push(20);
    int_container.push(30);
    
    int r1 = int_container.get(0);  // 10
    int r2 = int_container.getSize();  // 3
    
    Container<double> double_container;
    double_container.push(3.14);
    double r3 = double_container.get(0);  // 3.14
    
    return r1 + r2 + (int)r3;  // 10 + 3 + 3 = 16
}

// ============================================================================
// CPP-L3-09: Lambda表达式 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: C++14 Lambda闭包，捕获模式
int test_cpp_lambda() {
    int capture_by_value = 10;
    int capture_by_ref = 20;
    
    // Lambda按值捕获，按引用捕获，参数
    auto lambda1 = [capture_by_value, &capture_by_ref](int x) -> int {
        capture_by_ref += 5;  // 修改外部变量
        return x * capture_by_value + capture_by_ref;  // 3*10 + 25 = 55
    };
    
    // Lambda泛型（C++14）
    auto lambda2 = [](auto a, auto b) {
        return a + b;
    };
    
    int r1 = lambda1(3);      // 55
    int r2 = lambda2(10, 20);  // 30
    
    return r1 + r2;  // 55 + 30 = 85
}

// ============================================================================
// CPP-L4-01: 异常抛出与捕获 ⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: C++异常机制，栈展开，异常类型匹配
int test_cpp_exception() {
    int result = 0;
    
    try {
        try {
            throw 42;  // 抛出int异常
        } catch (int e) {
            result += e;  // 捕获int: 42
            throw;  // 重新抛出
        }
    } catch (int e) {
        result += e * 2;  // 再次捕获: 42*2 = 84
    }
    
    // 测试异常层次
    class BaseException {};
    class DerivedException : public BaseException {};
    
    try {
        throw DerivedException();  // 抛出派生类异常
    } catch (const DerivedException& e) {
        result += 100;  // 精确匹配: +100
    } catch (const BaseException& e) {
        result += 200;  // 不会执行
    }
    
    return result;  // 42 + 84 + 100 = 226
}

// ============================================================================
// CPP-L4-02: 智能指针（unique_ptr）⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: RAII资源管理，所有权语义
int test_cpp_smart_ptr() {
    // unique_ptr管理动态对象
    std::unique_ptr<int> ptr1(new int(100));
    *ptr1 = 200;
    
    // 转移所有权
    std::unique_ptr<int> ptr2 = std::move(ptr1);
    int r1 = *ptr2;  // 200
    
    // unique_ptr管理数组
    std::unique_ptr<int[]> arr(new int[5]{1, 2, 3, 4, 5});
    int r2 = arr[2];  // 3
    
    // unique_ptr与自定义删除器
    auto deleter = [](int* p) {
        *p = -1;
        delete p;
    };
    std::unique_ptr<int, decltype(deleter)> ptr3(new int(500), deleter);
    int r3 = *ptr3;  // 500
    
    // ptr3离开作用域时调用删除器
    
    return r1 + r2 + r3;  // 200 + 3 + 500 = 703
}

// ============================================================================
// CPP-L4-03: RTTI类型识别 ⭐⭐⭐⭐⭐
// 场景: [SCENE-DESK]
// 测试: 运行时类型信息，dynamic_cast，typeid
class RTTIBase {
public:
    virtual ~RTTIBase() = default;
    virtual int getType() const { return 0; }
};

class RTTIDerivedA : public RTTIBase {
public:
    int getType() const override { return 1; }
    int derivedA_data() const { return 100; }
};

class RTTIDerivedB : public RTTIBase {
public:
    int getType() const override { return 2; }
    int derivedB_data() const { return 200; }
};

int test_cpp_rtti() {
    RTTIBase *obj1 = new RTTIDerivedA();
    RTTIBase *obj2 = new RTTIDerivedB();
    
    int result = 0;
    
    // typeid测试
    if (typeid(*obj1) == typeid(RTTIDerivedA)) {
        result += 10;
    }
    if (typeid(*obj2) == typeid(RTTIDerivedB)) {
        result += 20;
    }
    
    // dynamic_cast测试
    if (RTTIDerivedA *derivedA = dynamic_cast<RTTIDerivedA*>(obj1)) {
        result += derivedA->derivedA_data();  // +100
    }
    if (RTTIDerivedB *derivedB = dynamic_cast<RTTIDerivedB*>(obj2)) {
        result += derivedB->derivedB_data();  // +200
    }
    
    // type_info::name测试
    result += strlen(typeid(*obj1).name());  // 名字长度
    
    delete obj1;
    delete obj2;
    
    return result;  // 10 + 20 + 100 + 200 + name_len
}

// ============================================================================
// 5.1节测试函数
// ============================================================================

void test_cpp_oo_features() {
    printf("=== 测试C++面向对象特性 ===\n");
    
#ifndef __cplusplus
    printf("错误: 必须使用C++编译器编译此文件\n");
    return;
#endif
    
    printf("CPP-L3-01: %d (期望: 4704)\n", test_cpp_member_func());
    printf("CPP-L3-02: %d (期望: 21)\n", test_cpp_constructor());
    printf("CPP-L3-03: %d (期望: 42)\n", test_cpp_virtual_func());
    printf("CPP-L3-04: %d (期望: 71)\n", test_cpp_multiple_inheritance());
    printf("CPP-L3-05: %d (期望: 650)\n", test_cpp_diamond_inheritance());
    printf("CPP-L3-06: %d (期望: 22)\n", test_cpp_operator_overload());
    printf("CPP-L3-07: %d (期望: 39)\n", test_cpp_template_func());
    printf("CPP-L3-08: %d (期望: 16)\n", test_cpp_template_class());
    printf("CPP-L3-09: %d (期望: 85)\n", test_cpp_lambda());
    printf("CPP-L4-01: %d (期望: 226)\n", test_cpp_exception());
    printf("CPP-L4-02: %d (期望: 703)\n", test_cpp_smart_ptr());
    printf("CPP-L4-03: %d (期望: 330+)\n", test_cpp_rtti());
}

// 单独测试入口
int main() {
    test_cpp_oo_features();
    return 0;
}