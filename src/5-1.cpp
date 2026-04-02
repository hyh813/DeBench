// ============================================================================
// 5.1 C++ Object-Oriented Features
// ============================================================================
// This chapter requires C++14 or higher to compile
// Compile command: g++ -std=c++14 -O0 -g -o test_cpp test_cpp_oo.cpp

#include <iostream>
#include <memory>
#include <typeinfo>
#include <cstring>

// ============================================================================
// CPP-L3-01: Class member functions ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: class member function call, implicit this pointer passing
// Description: Complete class definition, including constructor, member functions, and data members
class SimpleClass {
private:
    int value;
    char name[32];
public:
    // Constructor
    SimpleClass(int v, const char* n) : value(v) {
        strncpy(name, n, sizeof(name)-1);
        name[sizeof(name)-1] = '\0';
    }
    
    // member function
    int getValue() const { return value; }
    void setValue(int v) { value = v; }
    
    // Complex member functions
    int compute(int x) const {
        return value * x + strlen(name);
    }
    
    // static member function
    static int getClassID() { return 0x1234; }
};

int test_cpp_member_func() {
    SimpleClass obj(5, "Test");
    obj.setValue(10);
    
    int r1 = obj.getValue();           // 10
    int r2 = obj.compute(3);           // 10*3 + 4 = 34
    int r3 = SimpleClass::getClassID(); // 0x1234 = 4660
    
    return r1 + r2 + r3;  // Expectation: 10 + 34 + 4660 = 4704
}

// ============================================================================
// CPP-L3-02: Constructor/Destructor ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: constructor/destructor calls, object life cycle management, dynamic memory allocation
class LifecycleClass {
private:
    int* data;
    size_t size;
    static int instance_count;
    
public:
    // Constructor (allocate resources)
    LifecycleClass(size_t s) : size(s) {
        data = new int[s];
        for (size_t i = 0; i < s; i++) {
            data[i] = i * 10;
        }
        instance_count++;
    }
    
    // copy constructor
    LifecycleClass(const LifecycleClass& other) : size(other.size) {
        data = new int[size];
        memcpy(data, other.data, size * sizeof(int));
        instance_count++;
    }
    
    // Destructor (release resources)
    ~LifecycleClass() {
        delete[] data;
        instance_count--;
    }
    
    // access function
    int getData(size_t idx) const {
        return (idx < size) ? data[idx] : -1;
    }
    
    static int getInstanceCount() { return instance_count; }
};

// Static member initialization
int LifecycleClass::instance_count = 0;

int test_cpp_constructor() {
    int result = 0;
    
    {  // Scope blocks, test destruction
        LifecycleClass obj(5);  // call constructor
        result += obj.getData(2);  // 20
        result += LifecycleClass::getInstanceCount();  // 1
    }  // Call destructor
    
    result += LifecycleClass::getInstanceCount() * 1000;  // 0 * 1000 = 0
    
    return result;  // Expectation: 20 + 1 + 0 = 21
}

// ============================================================================
// CPP-L3-03: Virtual function call ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: virtual table (vtable) mechanism, runtime polymorphism
// Description: Contains virtual destructor to ensure vtable integrity
class Base {
public:
    virtual int virtual_func(int x) { 
        return x + 1; 
    }
    
    virtual const char* getName() const {
        return "Base";
    }
    
    virtual ~Base() {}  // virtual destructor
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

// Call virtual function through base class pointer (polymorphism)
int call_virtual_func(Base *obj, int x) {
    return obj->virtual_func(x);  // vtable indirect call
}

int test_cpp_virtual_func() {
    Base base;
    Derived derived(3);
    
    // call directly
    int r1 = base.virtual_func(5);      // 6
    int r2 = derived.virtual_func(5);   // 15
    
    // Polymorphic call via pointer
    Base *pb = &base;
    Base *pd = &derived;
    
    int r3 = call_virtual_func(pb, 5);  // 6
    int r4 = call_virtual_func(pd, 5);  // 15 (polymorphic)
    
    return r1 + r2 + r3 + r4;  // Expectation: 6+15+6+15 = 42
}

// ============================================================================
// CPP-L3-04: Multiple inheritance ⭐⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: virtual table layout and this pointer adjustment under multiple inheritance
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
    
    // Adjust this pointer of multiple inherited objects
    BaseA *pa = &obj;  // This pointer may need to be adjusted
    BaseB *pb = &obj;  // This pointer may need to be adjusted
    
    int r1 = pa->funcA();  // 30
    int r2 = pb->funcB();  // 40
    
    // Check whether the pointers are equal (not equal when this needs to be adjusted)
    int ptr_equal = (void*)pa == (void*)pb ? 0 : 1;
    
    return r1 + r2 + ptr_equal;  // Expectation: 30+40+1 = 71
}

// ============================================================================
// CPP-L3-05: Diamond inheritance (virtual inheritance) ⭐⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Virtual inheritance avoids duplication of base class sub-objects
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
        return shared_data + 250;  // There is only one copy of shared_data
    }
};

int test_cpp_diamond_inheritance() {
    DiamondDerived obj;
    obj.shared_data = 50;  // Not blurry, only one copy
    
    // Virtual inheritance ensures that there is only one copy of VirtualBase child objects
    VirtualBase *pb = &obj;
    
    int r1 = pb->func();  // Called via virtual base class pointer: 50+250=300
    
    // Verify that there is only one copy of shared_data
    obj.shared_data = 100;
    int r2 = pb->func();  // 100+250=350
    
    return r1 + r2;  // Expectation: 300 + 350 = 650
}

// ============================================================================
// CPP-L3-06: Operator overloading ⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: operator called as function
class Point {
public:
    int x, y;
    
    Point(int _x, int _y) : x(_x), y(_y) {}
    
    // Binary operator overloading
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
    
    // Comparison operator overloading
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
    
    // increment operator overloading
    Point& operator++() {  // Prefix++
        ++x; ++y;
        return *this;
    }
};

int test_cpp_operator_overload() {
    Point p1(1, 2);
    Point p2(3, 4);
    
    Point p3 = p1 + p2;  // operator+
    bool eq = (p1 == p2);  // operator== (false)
    
    ++p3;  // operator++ (prefix)
    
    return p3.x + p3.y + (eq ? 0 : 10);  // (5+7) + 10 = 22
}

// ============================================================================
// CPP-L3-07: Template function ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Code generation after template instantiation
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

// Explicit instantiation (ensuring symbols are generated)
template int template_max<int>(int, int);
template double template_max<double>(double, double);
template void template_swap<int>(int&, int&);

int test_cpp_template_func() {
    int r1 = template_max(3, 7);          // int instantiation: 7
    double r2 = template_max(2.5, 1.5);   // double instantiation: 2.5
    
    int a = 10, b = 20;
    template_swap(a, b);  // a=20, b=10
    
    return r1 + (int)r2 + a + b;  // 7 + 2 + 20 + 10 = 39
}

// ============================================================================
// CPP-L3-08: Template class ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: Template class member function instantiation
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

// explicit instantiation
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
// CPP-L3-09: Lambda expression ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: C++14 Lambda closure, capture mode
int test_cpp_lambda() {
    int capture_by_value = 10;
    int capture_by_ref = 20;
    
    // Lambda capture by value, capture by reference, parameters
    auto lambda1 = [capture_by_value, &capture_by_ref](int x) -> int {
        capture_by_ref += 5;  // Modify external variables
        return x * capture_by_value + capture_by_ref;  // 3*10 + 25 = 55
    };
    
    // Lambda generics (C++14)
    auto lambda2 = [](auto a, auto b) {
        return a + b;
    };
    
    int r1 = lambda1(3);      // 55
    int r2 = lambda2(10, 20);  // 30
    
    return r1 + r2;  // 55 + 30 = 85
}

// ============================================================================
// CPP-L4-01: Exception throwing and catching ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: C++ exception mechanism, stack unwinding, exception type matching
int test_cpp_exception() {
    int result = 0;
    
    try {
        try {
            throw 42;  // throw int exception
        } catch (int e) {
            result += e;  // capture int: 42
            throw;  // rethrow
        }
    } catch (int e) {
        result += e * 2;  // Capture again: 42*2 = 84
    }
    
    // Test exception level
    class BaseException {};
    class DerivedException : public BaseException {};
    
    try {
        throw DerivedException();  // Throws derived class exception
    } catch (const DerivedException& e) {
        result += 100;  // Exact match: +100
    } catch (const BaseException& e) {
        result += 200;  // will not be executed
    }
    
    return result;  // 42 + 84 + 100 = 226
}

// ============================================================================
// CPP-L4-02: Smart pointer (unique_ptr) ⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: RAII resource management, ownership semantics
int test_cpp_smart_ptr() {
    // unique_ptr manages dynamic objects
    std::unique_ptr<int> ptr1(new int(100));
    *ptr1 = 200;
    
    // transfer ownership
    std::unique_ptr<int> ptr2 = std::move(ptr1);
    int r1 = *ptr2;  // 200
    
    // unique_ptr manages arrays
    std::unique_ptr<int[]> arr(new int[5]{1, 2, 3, 4, 5});
    int r2 = arr[2];  // 3
    
    // unique_ptr and custom deleter
    auto deleter = [](int* p) {
        *p = -1;
        delete p;
    };
    std::unique_ptr<int, decltype(deleter)> ptr3(new int(500), deleter);
    int r3 = *ptr3;  // 500
    
    // deleter called when ptr3 goes out of scope
    
    return r1 + r2 + r3;  // 200 + 3 + 500 = 703
}

// ============================================================================
// CPP-L4-03: RTTI type identification ⭐⭐⭐⭐⭐
// Scene: [SCENE-DESK]
// Test: runtime type information, dynamic_cast, typeid
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
    
    // typeid test
    if (typeid(*obj1) == typeid(RTTIDerivedA)) {
        result += 10;
    }
    if (typeid(*obj2) == typeid(RTTIDerivedB)) {
        result += 20;
    }
    
    // dynamic_cast test
    if (RTTIDerivedA *derivedA = dynamic_cast<RTTIDerivedA*>(obj1)) {
        result += derivedA->derivedA_data();  // +100
    }
    if (RTTIDerivedB *derivedB = dynamic_cast<RTTIDerivedB*>(obj2)) {
        result += derivedB->derivedB_data();  // +200
    }
    
    // type_info::name test
    result += strlen(typeid(*obj1).name());  // name length
    
    delete obj1;
    delete obj2;
    
    return result;  // 10 + 20 + 100 + 200 + name_len
}

// ============================================================================
// Section 5.1 Test Function
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

// Individual test entry
int main() {
    test_cpp_oo_features();
    return 0;
}
