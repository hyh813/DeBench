// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#include <exception>
#include <cxxabi.h>
#include <stdint.h>
#include <iostream>
#include <typeinfo>
#include <unwind.h>

// C++ standard library type_info must be defined first
namespace std {
class ios_base {
public:
    class Init {
    public:
        Init() {}
        ~Init() {}
    };
};
class type_info {
public:
    const char* __type_name;
    explicit type_info(const char* __n) : __type_name(__n) {}
    virtual ~type_info() {}
    const char* name() const noexcept { return __type_name; }
    bool before(const type_info& __arg) const noexcept { return __type_name < __arg.__type_name; }
    bool operator==(const type_info& __arg) const noexcept { return __type_name == __arg.__type_name; }
    bool operator!=(const type_info& __arg) const noexcept { return __type_name != __arg.__type_name; }
    size_t hash_code() const noexcept { return (size_t)__type_name; }
};
}

// C++ ABI function declarations - now defined after std::type_info
namespace __cxxabiv1 {
class __class_type_info : public std::type_info {
public:
    explicit __class_type_info(const char* __n) : std::type_info(__n) {}
    virtual ~__class_type_info() {}
};
}

extern "C" {
void* __cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void* thrown_exception, std::type_info* tinfo, void (*dest)(void*));
void* __cxa_begin_catch(void* thrown_exception);
void __cxa_end_catch();
void __cxa_rethrow();
void _Unwind_Resume(void* exception_object);
void* __dynamic_cast(void* src_ptr, const std::type_info* src_type, const std::type_info* dst_type, ptrdiff_t src2dst_offset);
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
}

// Explicit declarations for global operator new/delete - implementations provided
extern "C++" {
void* operator new(size_t size) {
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    if (ptr) {
        free(ptr);
    }
}
}

/* CRT stub function _init removed by preprocessor */

struct struct_0 {
    void (*field_8)(struct_0*);
};

extern struct_0 *g_403fe8;
extern char g_403d78;
extern char g_403da0;

// Define missing global variables
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;
struct_0 *g_403fe8 = nullptr;
struct_0 g_403d78;
struct_0 g_403da0;

// Forward declarations for test functions
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(class Base *arg_0, int arg_1);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_rtti();
void test_cpp_oo_features();
void test_cpp_smart_ptr();

// Forward declarations for C++ classes
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;

// Base class definition
class Base {
public:
 virtual ~Base() {}
 virtual void foo() = 0;
};

// Derived class implementing Base's pure virtual
class BaseImpl : public Base {
public:
 virtual ~BaseImpl() {}
 virtual void foo() override {}
};

// Container template class definition
template<typename T>
class Container {
public:
 unsigned int size;
 T data[10];
 Container() : size(0) {}
 void push(T val) {
  unsigned long index = size;
  if (index <= 9) {
   size = (unsigned int)index + 1;
   data[index] = val;
  }
 }
 T get(int idx) {
  return data[idx];
 }
 unsigned int getSize() {
  return size;
 }
};

// Template function declarations
template<typename T>
T template_max(T arg_0, T arg_1)
{
 return arg_0 > arg_1 ? arg_0 : arg_1;
}

template<typename T>
void template_swap(T &ptr, T &p)
{
 T temp = ptr;
 ptr = p;
 p = temp;
}

// RTTI class definitions
class RTTIBase {
public:
 virtual ~RTTIBase() {}
 virtual const char* getType() { return "RTTIBase"; }
};

class RTTIDerivedA : public RTTIBase {
public:
 virtual ~RTTIDerivedA() {}
 virtual const char* getType() { return "RTTIDerivedA"; }
};

class RTTIDerivedB : public RTTIBase {
public:
 virtual ~RTTIDerivedB() {}
 virtual const char* getType() { return "RTTIDerivedB"; }
};

class LifecycleClass {
public:
 static unsigned int instance_count;
 LifecycleClass() { instance_count++; }
 ~LifecycleClass() { instance_count--; }
};
unsigned int LifecycleClass::instance_count = 0;

void _init()
{
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return 0;
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
extern void _ZNSt8ios_base4InitC1Ev();
extern void _ZNSt8ios_base4InitD1Ev();
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

char _ZStL8__ioinit = 0;
unsigned long long __dso_handle = 0;

void _GLOBAL__sub_I_5_1.cpp()
{
 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_401147 at 0x401147
void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
}


// Function: sub_401176 at 0x401176
void sub_401176()
{
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401225 at 0x401225
void sub_401225()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401239 at 0x401239
void sub_401239()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401240
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_40127c at 0x40127c
void sub_40127c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401280
void test_cpp_constructor()
{
 return;
}


// Function: sub_401292 at 0x401292
void sub_401292()
{
 BaseImpl* obj = new BaseImpl();
 call_virtual_func(obj, 0);
 delete obj;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
void call_virtual_func(Base *arg_0, int arg_1)
{
 // Call virtual function through vtable (index 0)
 void** vtable = *(void***)arg_0;
 ((void (*)(Base*))vtable[0])(arg_0);
}


// Function: sub_4012a8 at 0x4012a8
void sub_4012a8()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012b0
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012c0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4012c6 at 0x4012c6
void sub_4012c6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012d0
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012e0
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4012f0
void test_cpp_template_func()
{
 return;
}


// Function: sub_4012f6 at 0x4012f6
void sub_4012f6()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401300
void test_cpp_template_class()
{
 return;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401310
void test_cpp_lambda()
{
 return;
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
 test_cpp_exception();
 return;
}


// Global type_info for int exception
static __cxxabiv1::__class_type_info _ZTIi((const char*)"int");

// Function: _Z18test_cpp_exceptionv at 0x401320
void test_cpp_exception()
{
 unsigned int *ptr;

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 __cxa_begin_catch(0);
 __cxa_end_catch();
 return;
}


// Function: sub_40134b at 0x40134b
void sub_40134b()
{
 __cxa_rethrow();
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0
void test_cpp_rtti_internal()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = ::operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)::operator new(8);
 *(p) = (struct_0 *)&g_403da0;
 ::operator delete(ptr);
 (*p)->field_8(*p);
 return;
}

void test_cpp_rtti()
{
 test_cpp_rtti_internal();
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Global type_info objects for RTTI
static __cxxabiv1::__class_type_info __ZTI8RTTIBase((const char*)"RTTIBase");
static __cxxabiv1::__class_type_info __ZTI12RTTIDerivedA((const char*)"RTTIDerivedA");
static __cxxabiv1::__class_type_info __ZTI12RTTIDerivedB((const char*)"RTTIDerivedB");
std::type_info* _ZTI12RTTIDerivedA = &__ZTI12RTTIDerivedA;
std::type_info* _ZTI8RTTIBase = &__ZTI8RTTIBase;
std::type_info* _ZTI12RTTIDerivedB = &__ZTI12RTTIDerivedB;

// Function: _Z20test_cpp_oo_featuresv at 0x4014a0

// Define global variables for printf format strings
const char* g_40207d = "%u\n";
const char* g_40209b = "%u\n";
const char* g_4020b7 = "%d\n";
const char* g_4020d3 = "%d\n";
const char* g_4020ef = "%u\n";
const char* g_40210c = "%d\n";
const char* g_402128 = "%d\n";
const char* g_402144 = "%d\n";
const char* g_402160 = "%d\n";
const char* g_40217c = "%llu\n";
const char* g_402199 = "%d\n";
const char* g_4021b6 = "%d\n";
const char* g_4021d4 = "=== C++ OO Features Test ===\n";

void test_cpp_oo_features()
{
 void* ptr; // r14
 struct_0 **p; // r12
 unsigned int v10; // ebx
 unsigned int v11; // ebp
 unsigned int v0; // [bp-0x50]
 char v1; // [bp-0x4c]
 unsigned long long flag1; // [bp-0x3d]
 char result; // [bp-0x2d]

 puts(&g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(&g_40207d, (unsigned int)strlen(&v1) + 4700);
 printf(&g_40209b, LifecycleClass::instance_count * 1001 + 21);
 printf(&g_4020b7, 42);
 printf(&g_4020d3, 71);
 printf(&g_4020ef, 650);
 printf(&g_40210c, 22);
 printf(&g_402128, 39);
 printf(&g_402144, 16);
 printf(&g_402160, 85);
 test_cpp_exception();
 printf(&g_40217c, 0ULL);
 printf(&g_402199, 703);
 ptr = ::operator new(8);
 *((char **)ptr) = &g_403d78;
 p = ::operator new(8);
 *(p) = &g_403da0;
 v10 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? v10 : v10 + 200);
 ::operator delete(ptr);
 (*p)->field_8(*p);
 printf(&g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
void sub_401673()
{
 main();
 return;
}


// Function: main at 0x401680
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40168a at 0x40168a
void sub_40168a(unsigned long a0, unsigned long a1)
{
 (void)template_max<int>((int)a0, (int)a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
template<>
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401698 at 0x401698
void sub_401698()
{
 (void)template_max<double>(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
template<>
double template_max<double>(double arg_0, double arg_1)
{
 return arg_0 > arg_1 ? arg_0 : arg_1;
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(unsigned long a0, unsigned long a1)
{
 int *p1 = (int*)a0;
 int *p2 = (int*)a1;
 template_swap<int>(*p1, *p2);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
template<>
void template_swap<int>(int &ptr, int &p)
{
 unsigned int v1; // eax

 v1 = ptr;
 ptr = p;
 p = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
void sub_4016b9(unsigned long a0)
{
 Container<int>* c = new Container<int>();
 return;
}





// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(unsigned long a0)
{
 ((Container<int>*)a0)->push(0);
 return;
}





// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(unsigned long a0, unsigned long a1)
{
 ((Container<int>*)a0)->get((int)a1);
 return;
}





// Function: sub_401701 at 0x401701
void sub_401701(unsigned long a0)
{
 ((Container<int>*)a0)->getSize();
 return;
}





// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 Container<double>* c = new Container<double>();
 return;
}





// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 ((Container<double>*)a0)->push(0.0);
 return;
}





// Function: sub_401746 at 0x401746
void sub_401746(unsigned long a0, unsigned long a1)
{
 ((Container<double>*)a0)->get((int)a1);
 return;
}





// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0)
{
 ((Container<double>*)a0)->getSize();
 return;
}





// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
RTTIDerivedA::~RTTIDerivedA()
{
 ::operator delete(this);
}


// Function: sub_401785 at 0x401785
void sub_401785()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
const char* RTTIDerivedA::getType()
{
 return "RTTIDerivedA";
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
RTTIBase::~RTTIBase()
{
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
RTTIDerivedB::~RTTIDerivedB()
{
 ::operator delete(this);
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
const char* RTTIDerivedB::getType()
{
 return "RTTIDerivedB";
}



/* CRT stub function _fini removed by preprocessor */


