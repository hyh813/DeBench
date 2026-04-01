// Angr Decompilation of 5-1_clang_O0_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#include <memory>
#include <tuple>
#include <typeinfo>
#include <iostream>
#include <cstddef>

/* CRT stub function _init removed by preprocessor */
struct struct_0 {
 unsigned long long field_0;
};

// Generic struct for small object with unsigned int field
typedef struct TestStruct1 {
 unsigned int field_0;
} TestStruct1;

// Generic struct for virtual base classes (vtable pointer)
struct struct_1 {
 unsigned long long field_0;  // vtable pointer
};

extern struct_0 *g_408fe8;

// Vtable pointer definitions
char g_408878 = 0;  // Base vtable
char g_4088b8 = 0;  // Derived vtable
char g_408900 = 0;  // MultiDerived BaseA part vtable
char g_408930 = 0;  // MultiDerived BaseB part vtable
char g_4089b0 = 0;  // BaseA vtable
char g_4089d8 = 0;  // BaseB vtable
char g_408a08 = 0;  // DiamondDerived main vtable
char g_408a38 = 0;  // DiamondDerived MiddleB part vtable
char g_408a70 = 0;  // DiamondDerived VirtualBase part vtable
char g_408c38 = 0;  // VirtualBase vtable
char g_408d50 = 0;  // RTTIDerivedA vtable
char g_408da0 = 0;  // RTTIDerivedB vtable
char g_408d78 = 0;  // RTTIBase vtable

// CRT function stubs
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}
void _start(void) {}

// C++ operator new/delete declarations
void *operator new(std::size_t size);
void *operator new[](std::size_t size);
void operator delete(void *ptr) noexcept;
void operator delete[](void *ptr) noexcept;

// Implementations of operator new/delete
void *operator new(std::size_t size)
{
  return malloc(size);
}

void *operator new[](std::size_t size)
{
  return malloc(size);
}

void operator delete(void *ptr) noexcept
{
  if (ptr) free(ptr);
}

void operator delete[](void *ptr) noexcept
{
  if (ptr) free(ptr);
}

// Static variable definitions
unsigned int _ZN14LifecycleClass14instance_countE = 0;

// C++ runtime declarations
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *thrown_exception, void *type_info, void (*dest)(void *));
void *__cxa_begin_catch(void *exception);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__dynamic_cast(void *src_ptr, void *src_type, void *target_type, long src2dst_offset);
void __cxa_bad_typeid(void);
void __clang_call_terminate(void *exception);
namespace std {
  void terminate(void) __attribute__((noreturn));
}
void _Unwind_Resume(void *exception) __attribute__((__noreturn__));

// Standard library forward declarations
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
  
  class type_info {
  public:
    virtual ~type_info();
    bool operator==(const type_info& rhs) const;
    const char* name() const;
  protected:
    const char *__type_name;
  };
  
  template<typename T>
  struct remove_reference {
    typedef T type;
  };
  
  template<typename T>
  struct remove_reference<T&> {
    typedef T type;
  };
  
  template<typename T>
  struct remove_reference<T&&> {
    typedef T type;
  };
  
  template<typename T>
  typename remove_reference<T>::type&& move(T&& arg);
  
  template<typename T>
  T&& forward(typename remove_reference<T>::type& arg);
  
  template<typename T>
  class default_delete {
  public:
    default_delete() = default;
    void operator()(T* ptr) const;
  };
  
  template<typename T>
  class default_delete<T[]> {
  public:
    default_delete() = default;
    template<typename U>
    void operator()(U* ptr) const;
  };

  template<typename T, typename Deleter = std::default_delete<T>>
  class unique_ptr {
  public:
    typedef T* pointer;
    typedef Deleter deleter_type;
    typedef T element_type;
    
    constexpr unique_ptr() noexcept;
    explicit unique_ptr(pointer p) noexcept;
    unique_ptr(unique_ptr&& u) noexcept;
    unique_ptr& operator=(unique_ptr&& u) noexcept;
    ~unique_ptr();
    
    T& operator*() const;
    T* operator->() const noexcept;
    T& operator[](std::size_t i) const;
    T* get() const noexcept;
    deleter_type& get_deleter() noexcept;
    const deleter_type& get_deleter() const noexcept;
    explicit operator bool() const noexcept;
    
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;
  };
  
  template<typename T, typename Deleter>
  class unique_ptr<T[], Deleter> {
  public:
    typedef T* pointer;
    typedef Deleter deleter_type;
    typedef T element_type;
    
    constexpr unique_ptr() noexcept;
    explicit unique_ptr(pointer p) noexcept;
    unique_ptr(unique_ptr&& u) noexcept;
    unique_ptr& operator=(unique_ptr&& u) noexcept;
    ~unique_ptr();
    
    T& operator[](std::size_t i) const;
    T* get() const noexcept;
    deleter_type& get_deleter() noexcept;
    const deleter_type& get_deleter() const noexcept;
    explicit operator bool() const noexcept;
    
    unique_ptr(const unique_ptr&) = delete;
    unique_ptr& operator=(const unique_ptr&) = delete;
  };
}

// Implementations of std::move and std::forward
namespace std {
  template<typename T>
  typename remove_reference<T>::type&& move(T&& arg) {
    return static_cast<typename remove_reference<T>::type&&>(arg);
  }
  
  template<typename T>
  T&& forward(typename remove_reference<T>::type& arg) {
    return static_cast<T&&>(arg);
  }
  
  template<typename T>
  void default_delete<T>::operator()(T* ptr) const {
    delete ptr;
  }
  
  template<typename T>
  template<typename U>
  void default_delete<T[]>::operator()(U* ptr) const {
    delete[] ptr;
  }
}

// Class forward declarations
class SimpleClass {
public:
  SimpleClass(int id, const char *name);
  void setValue(int value);
  int getValue() const;
  int compute(int factor) const;
  static void getClassID();
};

class LifecycleClass {
public:
  LifecycleClass(unsigned long size);
  ~LifecycleClass();
  int getData(unsigned long index) const;
  static int getInstanceCount();
};

class Base {
public:
  Base();
  virtual ~Base();
  virtual int virtual_func(int x);
  virtual const char* getName() const;
};

class Derived : public Base {
public:
  Derived(int value);
  virtual ~Derived();
  virtual int virtual_func(int x);
  virtual const char* getName() const;
};

class BaseA {
public:
  BaseA();
  virtual ~BaseA();
  virtual void funcA();
};

class BaseB {
public:
  BaseB();
  virtual ~BaseB();
  virtual void funcB();
};

class MultiDerived : public BaseA, public BaseB {
public:
  MultiDerived();
  virtual ~MultiDerived();
  void funcA();
  void funcB();
};

class VirtualBase {
public:
  VirtualBase();
  virtual ~VirtualBase();
  virtual void func();
};

class MiddleA : public virtual VirtualBase {
public:
  MiddleA();
  virtual ~MiddleA();
  virtual void func();
};

class MiddleB : public virtual VirtualBase {
public:
  MiddleB();
  virtual ~MiddleB();
  virtual void func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
  DiamondDerived();
  virtual ~DiamondDerived();
  virtual void func();
};

class Point {
public:
  int x;
  int y;
  Point(int x, int y);
  Point operator+(const Point& other);
  bool operator==(const Point& other);
  Point& operator++();
};

template<typename T>
class Container {
  char data[40];
  unsigned int count;
public:
  Container();
  void push(const T& value);
  T get(int index) const;
  int getSize() const;
};

class RTTIBase {
public:
  RTTIBase();
  virtual ~RTTIBase();
  virtual const char* getType() const;
};

class RTTIDerivedA : public RTTIBase {
public:
  RTTIDerivedA();
  virtual ~RTTIDerivedA();
  int derivedA_data() const;
  virtual const char* getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
  RTTIDerivedB();
  virtual ~RTTIDerivedB();
  int derivedB_data() const;
  virtual const char* getType() const;
};

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_408fe8;
 if (g_408fe8)
 v1 = g_408fe8();
 return v1;
}


// Function: sub_402020 at 0x402020
extern unsigned long long g_409008;
extern unsigned long long g_409010;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_409008;
 // goto g_409010; // Removed: cannot goto to variable address
}


// Function: sub_40202c at 0x40202c
void *sub_40202c(unsigned int v1)
{
 return operator new[](v1);
}


// Function: __cxx_global_var_init at 0x402180
extern void _ZNSt8ios_base4InitD1Ev(std::ios_base::Init*);
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void __cxx_global_var_init()
{
 new (&_ZStL8__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void*))_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_4021ac at 0x4021ac
void sub_4021ac()
{
 _GLOBAL__sub_I_5_1.cpp();
 return;
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x4021b0
void _GLOBAL__sub_I_5_1.cpp()
{
 __cxx_global_var_init();
 return;
}


// Function: sub_4021bb at 0x4021bb
void sub_4021bb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4021e5 at 0x4021e5
void sub_4021e5()
{
  __builtin_trap();
}


// Function: sub_4021e6 at 0x4021e6
void sub_4021e6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_402219 at 0x402219
void sub_402219()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402259 at 0x402259
void sub_402259()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402295 at 0x402295
void sub_402295()
{
}


// Function: sub_402299 at 0x402299
void sub_402299()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_4022a9 at 0x4022a9
void sub_4022a9()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4022b0
void test_cpp_member_func()
{
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]

 SimpleClass::SimpleClass(&v2, 5, "Test");
 SimpleClass::setValue(&v2, 10);
 v1 = SimpleClass::getValue(&v2);
 v0 = SimpleClass::compute(&v2, 3);
 SimpleClass::getClassID();
 return;
}


// Function: sub_40230f at 0x40230f
void sub_40230f()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x402310
void test_cpp_constructor()
{
 unsigned long long v6; // rdi
 unsigned long long v7; // rsi
 unsigned long long v8; // rdx
 unsigned long long v9; // rcx
 unsigned long long v10; // r8
 unsigned long long v11; // r9
 unsigned int v0; // [bp-0x3c]
 char *v1; // [bp-0x38]
 unsigned int v2; // [bp-0x30]
 char v3; // [bp-0x20]
 unsigned int v4; // [bp-0xc]

 v4 = 0;
 v1 = &v3;
 LifecycleClass::LifecycleClass(&v3, 5);
 v2 = LifecycleClass::getData(v1, 2);
 v4 += v2;
 v0 = LifecycleClass::getInstanceCount();
 v4 += v0;
 LifecycleClass::getInstanceCount();
 return;
}


// Function: sub_40238b at 0x40238b
int sub_40238b(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffe4]
 unsigned long long v2; // [bp+0xfffe8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4023a9 at 0x4023a9
void sub_4023a9(unsigned long a0, unsigned long a1)
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4023b0
void call_virtual_func(class Base *arg_0, int arg_1)
{
 (*((long long *)*((long long *)&arg_0)))(arg_0, arg_1);
 return;
}


// Function: sub_4023d1 at 0x4023d1
void sub_4023d1()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4023e0
void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x64]
 unsigned int v1; // [bp-0x60]
 unsigned int v2; // [bp-0x5c]
 unsigned int v3; // [bp-0x58]
 unsigned int v4; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned int v6; // [bp-0x4c]
 Base *v7; // [bp-0x48]
 Base *v8; // [bp-0x40]
 unsigned int v9; // [bp-0x34]
 unsigned int v10; // [bp-0x30]
 char v11; // [bp-0x20]
 char v12; // [bp-0x10]

 Base::Base(&v12);
 Derived::Derived(&v11, 3);
 v4 = Base::virtual_func(&v12, 5);
 v10 = v4;
 v3 = Derived::virtual_func(&v11, 5);
 v9 = v3;
 v8 = &v12;
 v7 = &v11;
 v2 = (unsigned long long)call_virtual_func(v8, 5);
 v6 = v2;
 v1 = (unsigned long long)call_virtual_func(v7, 5);
 v5 = v1;
 v0 = v10 + v9 + v6 + v5;
 return;
}


// Function: sub_4024ae at 0x4024ae
int sub_4024ae(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffe4]
 unsigned long long v2; // [bp+0xfffe8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4024bf at 0x4024bf
int sub_4024bf(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xfffe4]
 unsigned long v2; // [bp+0xfffe8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_4024e6 at 0x4024e6
void sub_4024e6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4024f0
void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 struct_1 **v3; // [bp-0x60]
 unsigned int v4; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned int v6; // [bp-0x3c]
 struct_1 **v7; // [bp-0x38]
 struct_1 **v8; // [bp-0x30]
 char v9; // [bp-0x28]
 unsigned int v10; // [bp-0x20]
 char v11; // [bp-0x18]
 unsigned int v12; // [bp-0x10]

 MultiDerived::MultiDerived(&v9);
 v10 = 100;
 v12 = 200;
 v8 = &v9;
 v3 = NULL;
 if (&v9)
 v3 = &v11;
 v7 = v3;
 v2 = (*((long long *)*((long long *)&v9)))(v8);
 v6 = v2;
 v1 = *(v7)->field_0(v7);
 v5 = v1;
 v4 = (v8 == v7 ? 0 : 1);
 v0 = v6 + v5 + v4;
 return;
}


// Function: sub_4025a9 at 0x4025a9
int sub_4025a9(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffc4]
 unsigned long long v2; // [bp+0xfffc8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_4025c7 at 0x4025c7
void sub_4025c7()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4025d0
void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 struct_1 **v3; // [bp-0x60]
 unsigned int v4; // [bp-0x58]
 unsigned int v5; // [bp-0x44]
 struct_1 **v6; // [bp-0x40]
 void* ptr; // [bp-0x38], Other Possible Types: char
 char v8; // [bp-0x30]

 DiamondDerived::DiamondDerived(&ptr);
 *((unsigned int *)&(&v8)[ptr[24]]) = 50;
 v3 = NULL;
 if (&ptr)
 v3 = &(&ptr)[ptr[24]];
 v6 = v3;
 v2 = *(v6)->field_0(v6);
 v5 = v2;
 *((unsigned int *)&(&v8)[ptr[24]]) = 100;
 v1 = *(v6)->field_0(v6);
 v4 = v1;
 v0 = v5 + v4;
 return;
}


// Function: sub_40267f at 0x40267f
int sub_40267f(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xfffbc]
 unsigned long long v2; // [bp+0xfffc0]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_40269d at 0x40269d
void sub_40269d()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4026a0
void test_cpp_operator_overload()
{
 char v0; // [bp-0x21]
 unsigned long v1; // [bp-0x20]
 char v2; // [bp-0x18]
 char v3; // [bp-0x10]

 Point::Point(&v3, 1, 2);
 Point::Point(&v2, 3, 4);
 v1 = Point::operator+(&v3, &v2);
 v0 = (char)Point::operator==(&v3, &v2) & 1;
 Point::operator++(&v1);
 if (!(v0 & 1))
 return;
 return;
}


// Function: sub_40271a at 0x40271a
void sub_40271a()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402720
void test_cpp_template_func()
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0xc]

 v3 = template_max<int>(3, 7);
 v2 = 0x4004000000000000;  // unused placeholder
 v1 = 10;
 v0 = 20;
 template_swap<int>(&v1, &v0);
 return;
}


// Function: sub_402785 at 0x402785
void sub_402785()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402790
void test_cpp_template_class()
{
 char v0; // [bp-0x98]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x38]
 double dval;

 Container<int>::Container(&v3);
 Container<int>::push(&v3, 10);
 Container<int>::push(&v3, 20);
 Container<int>::push(&v3, 30);
 v2 = Container<int>::get(&v3, 0);
 v1 = Container<int>::getSize(&v3);
 Container<double>::Container(&v0);
 dval = 3.14;
 Container<double>::push(&v0, dval);
 Container<double>::get(&v0, 0);
 return;
}


// Function: sub_402837 at 0x402837
void sub_402837()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x402840
void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]
 unsigned int v2; // [bp-0x20]
 char *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 struct lambda_capture_1 capture1;
 struct lambda_capture_0 capture0;

 v5 = 10;
 v4 = 20;
 v2 = v5;
 v3 = &v4;
 capture1.field_0 = v2;
 capture1.field_8 = (struct lambda_capture_2 *)v3;
 v0 = (unsigned int)lambda_capture_1_operator(&capture1, 3);
 v0 = (unsigned int)_ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(&capture0, 10, 20);
 return;
}


// Function: sub_402897 at 0x402897
void sub_402897(unsigned long a0, unsigned long a1)
{
 test_cpp_lambda()::__dollar__1::operator()(int) const();
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__1clEi at 0x4028a0
struct lambda_capture_1 {
 unsigned int field_0;
 char padding_4[4];
 struct lambda_capture_2 *field_8;
};

struct lambda_capture_2 {
 unsigned int field_0;
};

long long lambda_capture_1_operator(const struct lambda_capture_1 *this, int v2)
{
 this->field_8->field_0 = this->field_8->field_0 + 5;
 return this->field_0 * v2 + this->field_8->field_0;
}


// Function: sub_4028c8 at 0x4028c8
void sub_4028c8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_();
 return;
}


// Function: _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_ at 0x4028d0
struct lambda_capture_0 {
 int field_0;
 int field_4;
};

int lambda_capture_0_operator_int_int(const struct lambda_capture_0 *this, int v2, int v3)
{
 return v2 + v3;
}

int _ZZ15test_cpp_lambdavENK3__dollar__0clIiiEEDaT_T0_(void *this_ptr, int v2, int v3)
{
 return lambda_capture_0_operator_int_int((struct lambda_capture_0 *)this_ptr, v2, v3);
}


// Function: sub_4028e6 at 0x4028e6
void sub_4028e6()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4028f0
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int result; // [bp-0xc]
 void *exc_ptr;

 result = 0;
 exc_ptr = __cxa_allocate_exception(4);
 *((unsigned int *)exc_ptr) = 42;
 __cxa_throw(exc_ptr, &_ZTIi, 0);
 // test_cpp_smart_ptr(); // unreachable after throw
 return;
}


// Function: sub_402927 at 0x402927
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_402927(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v4; // [bp+0xffff8]
 unsigned int v5; // [bp+0x100004]

 v4 = a0;
 v5 = 0;
 __cxa_rethrow(v4); /* do not return */
}


// Function: sub_402966 at 0x402966
int sub_402966(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
 __cxa_end_catch();
}


// Function: sub_4029c8 at 0x4029c8
int sub_4029c8()
{
 unsigned long long v5; // [bp+0xffff8]
 unsigned int v6; // [bp+0x100004]

 v5 = 0;
 v6 = 0;
 __cxa_end_catch();
 return 0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x402a50
void test_cpp_smart_ptr()
{
 unsigned int *addr; // rax
 unsigned int v0; // [bp-0xa4]
 char *v1; // [bp-0xa0]
 unsigned int *p; // [bp-0x98]
 unsigned int *ptr4; // [bp-0x90]
 char *v4; // [bp-0x88]
 unsigned int *ptr6; // [bp-0x80]
 unsigned int *ptr_arr; // [bp-0x78]
 char *v7; // [bp-0x70]
 unsigned int *ptr5; // [bp-0x68]
 char v9; // [bp-0x60]
 unsigned int *ptr3; // [bp-0x58]
 unsigned int v11; // [bp-0x4c]
 char v12; // [bp-0x48]
 char v13; // [bp-0x40]
 unsigned int v14; // [bp-0x3c]
 char v15; // [bp-0x38]
 unsigned int v16; // [bp-0x2c]
 char v17; // [bp-0x28]
 char v18; // [bp-0x10]

 addr = (unsigned int *)operator new(4);
 *(addr) = 100;
 v9 = &v18;
 // std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v18, addr);
 ptr3 = addr;
 *(ptr3) = 200;
 v7 = &v17;
 // std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v17, std::move<std::unique_ptr<int, std::default_delete<int>&>>(&v18));
 ptr5 = ptr3;
 v16 = *(ptr5);
 ptr_arr = (unsigned int *)operator new[](20);
 ptr_arr[0] = 1;
 ptr_arr[1] = 2;
 ptr_arr[2] = 3;
 ptr_arr[3] = 4;
 ptr_arr[4] = 5;
 v4 = &v15;
 // std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr(&v15, ptr_arr);
 ptr6 = &ptr_arr[2];
 v14 = *(ptr6);
 ptr4 = (unsigned int *)operator new(4);
 *(ptr4) = 500;
 v1 = &v12;
 // std::unique_ptr<int, struct custom_deleter>::unique_ptr(&v12, ptr4);
 p = ptr4;
 v11 = *(p);
 v0 = v16 + v14 + v11;
 return;
}


// Function: sub_402bce at 0x402bce
int sub_402bce(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
 _Unwind_Resume(v2); /* do not return */
}


// Function: sub_402bdf at 0x402bdf
int sub_402bdf(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_402bf0 at 0x402bf0
int sub_402bf0(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_402c01 at 0x402c01
int sub_402c01(unsigned long a0, unsigned long a1, unsigned int a2)
{
 unsigned long v3; // rax
 unsigned int v1; // [bp+0xffff4]
 unsigned long v2; // [bp+0xffff8]

 v2 = v3;
 v1 = a2;
}


// Function: sub_402c3a at 0x402c3a
void sub_402c3a(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::unique_ptr<test_cpp_smart_ptr()::__dollar__2, void>(int*, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IS0_vEEPiRKS0_ at 0x402c40
long long _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IS0_vEEPiRKS0_(char *a0, unsigned int *a1, unsigned long long v1)
{
 return (long long)a0;
}


// Function: sub_402c70 at 0x402c70
void sub_402c70()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_402c78 at 0x402c78
void sub_402c78(unsigned long a0)
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::operator*() const();
 return;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EdeEv at 0x402c80
long long _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2EdeEv(unsigned long long v1)
{
 return v1;
}


// Function: sub_402ca8 at 0x402ca8
void sub_402ca8(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2ED2Ev at 0x402cb0
unsigned long long * _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2ED2Ev(unsigned long long a0)
{
 return (unsigned long long *)a0;
}


// Function: sub_402d25 at 0x402d25
void sub_402d25()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_402d2d at 0x402d2d
void sub_402d2d()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402d30
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
 RTTIBase *v0; // [bp-0x88]
 RTTIBase *v1; // [bp-0x80]
 RTTIBase *v2; // [bp-0x78]
 unsigned long long v3; // [bp-0x70]
 RTTIBase *v4; // [bp-0x68]
 unsigned long long v5; // [bp-0x60]
 RTTIBase *v6; // [bp-0x58]
 RTTIBase *v7; // [bp-0x50]
 RTTIDerivedA *v8; // [bp-0x48]
 RTTIDerivedB *v9; // [bp-0x40]
 RTTIBase *v10; // [bp-0x38]
 unsigned long long v11; // [bp-0x30]
 unsigned long long v12; // [bp-0x28]
 unsigned int cur; // [bp-0x1c]
 RTTIBase *flag1; // [bp-0x18]
 RTTIBase *result; // [bp-0x10]

 v8 = (RTTIDerivedA *)operator new(sizeof(RTTIDerivedA));
 memset(v8, 0, sizeof(RTTIDerivedA));
 RTTIDerivedA::RTTIDerivedA(v8);
 result = v8;
 v9 = (RTTIDerivedB *)operator new(sizeof(RTTIDerivedB));
 memset(v9, 0, sizeof(RTTIDerivedB));
 RTTIDerivedB::RTTIDerivedB(v9);
 flag1 = v9;
 cur = 0;
 v10 = result;
 if (!result)
 __cxa_bad_typeid();
 if (((char)std::type_info::operator==(typeid(*v10), _ZTI12RTTIDerivedA) & 1))
 cur += 10;
 v7 = flag1;
 if (!flag1)
 __cxa_bad_typeid();
 if (((char)std::type_info::operator==(typeid(*v7), _ZTI12RTTIDerivedB) & 1))
 cur += 20;
 v6 = result;
 v5 = (!result ? NULL : __dynamic_cast(v6, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, NULL));
 v12 = v5;
 if (v12)
 cur += RTTIDerivedA::derivedA_data(v12);
 v4 = flag1;
 v3 = (!flag1 ? NULL : __dynamic_cast(v4, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, NULL));
 v11 = v3;
 if (v11)
 cur += RTTIDerivedB::derivedB_data(v11);
 v2 = result;
 if (!result)
 __cxa_bad_typeid();
 cur += (unsigned int)strlen(std::type_info::name(typeid(*v2)));
 v1 = result;
 if (result)
 operator delete(v1);
 v0 = flag1;
 if (flag1)
 operator delete(v0);
 return;
}


// Function: sub_402f6c at 0x402f6c
void sub_402f6c()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402f70
extern char g_405025;
extern char g_40504a;
extern char g_405068;
extern char g_405084;
extern char g_4050a0;
extern char g_4050bc;
extern char g_4050d9;
extern char g_4050f5;
extern char g_405111;
extern char g_40512d;
extern char g_405149;
extern char g_405166;
extern char g_405183;

void test_cpp_oo_features()
{
 printf(&g_405025);
 printf(&g_40504a, (unsigned long long)test_cpp_member_func() & 4294967295);
 printf(&g_405068, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf(&g_405084, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 printf(&g_4050a0, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 printf(&g_4050bc, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 printf(&g_4050d9, (unsigned long long)test_cpp_operator_overload() & 4294967295);
 printf(&g_4050f5, (unsigned long long)test_cpp_template_func() & 4294967295);
 printf(&g_405111, (unsigned long long)test_cpp_template_class() & 4294967295);
 printf(&g_40512d, (unsigned long long)test_cpp_lambda() & 4294967295);
 printf(&g_405149, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_405166, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 printf(&g_405183, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x403080
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40309c at 0x40309c
void sub_40309c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std::__uniq_ptr_data<int, test_cpp_smart_ptr()::__dollar__2, true, false>::__uniq_ptr_data<test_cpp_smart_ptr()::__dollar__2 const&>(int*, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__dollar__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ at 0x4030a0
long long _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__dollar__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(char *a0, unsigned long long v1, unsigned long long v2)
{
 return (long long)a0;
}


// Function: sub_4030cb at 0x4030cb
void sub_4030cb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__dollar__2 const&>(int*, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IRKS0_EEPiOT_ at 0x4030d0
long long _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2EC2IRKS0_EEPiOT_(unsigned long long v1, unsigned long long v2, unsigned long long v3)
{
 return (long long)v1;
}


// Function: sub_40310b at 0x40310b
void sub_40310b(unsigned long a0)
{
 test_cpp_smart_ptr()::__dollar__2 const& std::forward<test_cpp_smart_ptr()::__dollar__2 const&>(std::remove_reference<test_cpp_smart_ptr()::__dollar__2 const&>::type&)();
 return;
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3__dollar__2EOT_RNSt16remove_referenceIS3_E4typeE at 0x403110
long long _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3__dollar__2EOT_RNSt16remove_referenceIS3_E4typeE(unsigned long a0)
{
 return a0;
}


// Function: sub_40311e at 0x40311e
void sub_40311e(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>::tuple<int*&, test_cpp_smart_ptr()::__dollar__2 const&, true>(int*&, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x403120
long long _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_RKS1_Lb1EEEOT_OT0_(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 return (long long)a0;
}


// Function: sub_40316d at 0x40316d
void sub_40316d()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_403175 at 0x403175
void sub_403175(unsigned long a0, unsigned long a1, unsigned long a2)
{
 std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>::_Tuple_impl<int*&, test_cpp_smart_ptr()::__dollar__2 const&, void>(int*&, test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x403180
long long _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EEC2IRS0_JRKS1_EvEEOT_DpOT0_(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 return (long long)a0;
}


// Function: sub_4031d8 at 0x4031d8
void sub_4031d8(unsigned long a0, unsigned long a1)
{
 std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>::_Tuple_impl(test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EEC2ERKS0_ at 0x4031e0
void _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EEC2ERKS0_(unsigned long long a0, unsigned long long a1)
{
 return;
}


// Function: sub_403203 at 0x403203
void sub_403203(unsigned long a0, unsigned long a1)
{
 std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>::_Head_base(test_cpp_smart_ptr()::__dollar__2 const&)();
 return;
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EEC2ERKS0_ at 0x403210
void _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EEC2ERKS0_(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: sub_40321e at 0x40321e
void sub_40321e(unsigned long a0)
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_ptr()();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x403220
void _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv(unsigned long long a0)
{
 return;
}


// Function: sub_40323b at 0x40323b
void sub_40323b(unsigned long a0)
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::get_deleter()();
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E11get_deleterEv at 0x403240
unsigned long long _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E11get_deleterEv(unsigned long long a0)
{
 return a0 + 8;
}


// Function: sub_403268 at 0x403268
void sub_403268()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENK3__dollar__2clEPi at 0x403270
struct custom_deleter {
};

unsigned int * custom_deleter_operator(const struct custom_deleter *this, unsigned int *ptr)
{
 unsigned int *v3;
 unsigned int *v0;

 *(ptr) = 4294967295;
 v3 = ptr;
 v0 = v3;
 if (v3)
 operator delete(v0);
 return v3;
}

unsigned int * _ZZ18test_cpp_smart_ptrvENK3__dollar__2clEPi(struct custom_deleter *this, unsigned int *ptr)
{
 return custom_deleter_operator(this, ptr);
}


// Function: sub_4032ab at 0x4032ab
void sub_4032ab(unsigned long a0)
{
 std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type& std::get<0ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x4032b0
void _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_(unsigned long long a0)
{
 return;
}


// Function: sub_4032cb at 0x4032cb
void sub_4032cb(unsigned long a0)
{
 int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x4032d0
void int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>&)(unsigned long long a0)
{
 std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>&)(a0);
 return;
}


// Function: sub_4032eb at 0x4032eb
void sub_4032eb(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS2_ at 0x4032f0
void _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS2_(unsigned long long a0)
{
 return;
}


// Function: sub_40330b at 0x40330b
void sub_40330b(unsigned long a0)
{
 std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::__dollar__2>::_M_deleter()();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E10_M_deleterEv at 0x403310
void _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E10_M_deleterEv(unsigned long long a0)
{
 return;
}


// Function: sub_40332b at 0x40332b
void sub_40332b(unsigned long a0)
{
 std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x403330
void std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type& std::get<1ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>&)(unsigned long long a0)
{
 test_cpp_smart_ptr()::__dollar__2& std::__get_helper<1ul, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>&)(a0);
 return;
}


// Function: sub_40334b at 0x40334b
void sub_40334b(unsigned long a0)
{
 test_cpp_smart_ptr()::__dollar__2& std::__get_helper<1ul, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3__dollar__2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE at 0x403350
void test_cpp_smart_ptr()::__dollar__2& std::__get_helper<1ul, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>&)(unsigned long long a0)
{
 std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>&)(a0);
 return;
}


// Function: sub_40336b at 0x40336b
void sub_40336b(unsigned long a0)
{
 std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>&)();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERS1_ at 0x403370
void std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::__dollar__2>&)(unsigned long long a0)
{
 std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>&)(a0);
 return;
}


// Function: sub_40338b at 0x40338b
void sub_40338b(unsigned long a0)
{
 std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>&)();
 return;
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3__dollar__2Lb1EE7_M_headERS1_ at 0x403390
long long std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>::_M_head(std::_Head_base<1ul, test_cpp_smart_ptr()::__dollar__2, true>&)(unsigned long a0)
{
 return a0;
}


// Function: sub_40339e at 0x40339e
void sub_40339e(unsigned long a0)
{
 std::unique_ptr<int, test_cpp_smart_ptr()::__dollar__2>::get() const();
 return;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E3getEv at 0x4033a0
unsigned long long _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3__dollar__2E3getEv(unsigned long long a0)
{
 return *((unsigned long long*)a0);
}


// Function: sub_4033c8 at 0x4033c8
void sub_4033c8()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv at 0x4033d0
long long _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3__dollar__2E6_M_ptrEv(unsigned long long a0)
{
 return *((long long*)a0);
}


// Function: sub_4033ee at 0x4033ee
void sub_4033ee(unsigned long a0)
{
 std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::__dollar__2>>::type const& std::get<0ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::tuple<int*, test_cpp_smart_ptr()::__dollar__2> const&)();
 return;
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x4033f0
void _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_(unsigned long long a0)
{
 return;
}


// Function: sub_40340b at 0x40340b
void sub_40340b(unsigned long a0)
{
 int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2> const&)();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3__dollar__2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x403410
void int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::__dollar__2>(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2> const&)(unsigned long long a0)
{
 std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2> const&)(a0);
 return;
}


// Function: sub_40342b at 0x40342b
void sub_40342b(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2> const&)();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3__dollar__2EE7_M_headERKS2_ at 0x403430
void std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2>::_M_head(std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::__dollar__2> const&)(unsigned long long a0)
{
 std::_Head_base<0ul, int*, false>::_M_head(a0);
 return;
}


// Function: sub_40344b at 0x40344b
void sub_40344b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 SimpleClass::SimpleClass();
 return;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x403450
typedef struct SimpleClass_struct {
 unsigned int field_0;
 char padding_4[31];
 char field_23;
} SimpleClass_struct;

long long SimpleClass::SimpleClass(SimpleClass_struct *this_ptr, unsigned int v2, const char *v3)
{
 this_ptr->field_0 = v2;
 strncpy(&this_ptr->padding_4, v3, 31);
 this_ptr->field_23 = 0;
 return (long long)this_ptr;
}


// Function: _ZN11SimpleClass8setValueEi at 0x403490
long long SimpleClass::setValue(void* this_ptr, unsigned int v2)
{
 *(unsigned int *)this_ptr = v2;
 return (long long)this_ptr;
}


// Function: sub_4034a6 at 0x4034a6
void sub_4034a6(unsigned long a0)
{
 SimpleClass::getValue();
 return;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x4034b0
long long SimpleClass::getValue(void* this_ptr)
{
 return *(unsigned int *)this_ptr;
}


// Function: _ZNK11SimpleClass7computeEi at 0x4034c0
long long SimpleClass::compute(const SimpleClass_struct *this_ptr, unsigned int v2)
{
 unsigned long v0; // [bp-0x20]

 v0 = v2 * this_ptr->field_0;
 return v0 + strlen(&this_ptr->padding_4[0]);
}


// Function: sub_4034f8 at 0x4034f8
void sub_4034f8()
{
 SimpleClass::getClassID();
 return;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x403500
void SimpleClass::getClassID()
{
 static int id = 42;
 return;
}


// Function: sub_40350b at 0x40350b
void sub_40350b(unsigned long a0, unsigned long a1)
{
 LifecycleClass::LifecycleClass();
 return;
}


// Function: _ZN14LifecycleClassC2Em at 0x403510
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass::LifecycleClass(void* this_ptr, unsigned long v3)
{
 unsigned long v4; // rax
 unsigned long long idx; // [bp-0x20]

 v4 = v3 * 4;
 if (v4 / 4 != v3)  // Check for overflow
 v4 = 18446744073709551615;
 ((unsigned long long *)this_ptr)[0] = (unsigned long long)operator new[](v4);
 ((unsigned long long *)this_ptr)[1] = v3;
 for (idx = 0; idx < v3; idx += 1)
 {
 *((unsigned int *)(((unsigned long long *)this_ptr)[0] + idx * 4)) = (unsigned int)idx * 10;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return (long long)this_ptr;
}


// Function: sub_4035ad at 0x4035ad
void sub_4035ad(unsigned long a0, unsigned long a1)
{
 LifecycleClass::getData();
 return;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x4035b0
long long LifecycleClass::getData(void* this_ptr, unsigned long v2)
{
 unsigned long long *v3 = (unsigned long long *)this_ptr;
 unsigned int v0; // [bp-0x24]

 v0 = (v2 < v3[1] ? *((int *)(v3[0] + v2 * 4)) : 4294967295);
 return v0;
}


// Function: sub_4035fa at 0x4035fa
void sub_4035fa()
{
 LifecycleClass::getInstanceCount();
 return;
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x403600
int LifecycleClass::getInstanceCount()
{
 return _ZN14LifecycleClass14instance_countE;
}


// Function: sub_40360c at 0x40360c
void sub_40360c(unsigned long a0)
{
 return;
}


// Function: _ZN14LifecycleClassD2Ev at 0x403610
extern unsigned int _ZN14LifecycleClass14instance_countE;

void LifecycleClass::~LifecycleClass(void* ptr)
{
 unsigned long v0; // [bp-0x18]

 v0 = *((long long *)ptr);
 if (*((long long *)ptr))
 operator delete[](v0);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
}


// Function: sub_40364f at 0x40364f
void sub_40364f(unsigned long a0)
{
 Base::Base();
 return;
}


// Function: _ZN4BaseC2Ev at 0x403650
extern char g_408878;

long long Base::Base(void* this_ptr)
{
 *((char **)this_ptr) = &g_408878;
 return (long long)this_ptr;
}


// Function: sub_40366c at 0x40366c
void sub_40366c(unsigned long a0, unsigned long a1)
{
 Derived::Derived();
 return;
}


// Function: _ZN7DerivedC2Ei at 0x403670
extern char g_4088b8;

long long Derived::Derived(void* this_ptr, unsigned int v2)
{
 char *ptr = (char *)this_ptr;
 Base::Base(ptr);
 *((char **)ptr) = &g_4088b8;
 *((unsigned int *)(ptr + 8)) = v2;
 return (long long)ptr;
}


// Function: sub_4036aa at 0x4036aa
void sub_4036aa(unsigned long a0, unsigned long a1)
{
 Base::virtual_func();
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4036b0
long long Base::virtual_func(void* this_ptr, unsigned int v1)
{
 return v1 + 1;
}


// Function: sub_4036c3 at 0x4036c3
void sub_4036c3(unsigned long a0, unsigned long a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4036d0
typedef struct Derived_struct {
 char padding_0[8];
 unsigned int field_8;
} Derived_struct;

long long Derived::virtual_func(void* this_ptr, unsigned int v2)
{
 Derived_struct *v1 = (Derived_struct *)this_ptr;
 return v1->field_8 * v2;
}


// Function: sub_4036e8 at 0x4036e8
void sub_4036e8(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x4036f0
void Derived::~Derived(void* this_ptr)
{
 void* v0; // [bp-0x10];

 v0 = this_ptr;
}


// Function: sub_40370b at 0x40370b
void sub_40370b(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x403710
void Base::~Base()
{
}


// Function: sub_40371a at 0x40371a
void sub_40371a(unsigned long a0)
{
 MultiDerived::MultiDerived();
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403720
extern char g_408900;
extern char g_408930;

long long MultiDerived::MultiDerived(void* this_ptr)
{
 unsigned long long ptr = (unsigned long long)this_ptr;

 BaseA::BaseA((void*)ptr);
 BaseB::BaseB((void*)(ptr + 16));
 *((char **)ptr) = &g_408900;
 *((char **)(ptr + 16)) = &g_408930;
 return ptr;
}


// Function: sub_40376d at 0x40376d
void sub_40376d(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x403770
int MultiDerived::~MultiDerived(void* this_ptr)
{
 void* v0; // [bp-0x18]

 v0 = this_ptr;
 return;
}


// Function: sub_40379c at 0x40379c
void sub_40379c(unsigned long a0)
{
 DiamondDerived::DiamondDerived();
 return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x4037a0
extern char g_408a08;
extern char g_408a38;
extern char g_408a70;
extern char g_408c38;

long long DiamondDerived::DiamondDerived(void* this_ptr)
{
 unsigned long long ptr = (unsigned long long)this_ptr;

 // Initialize VirtualBase at offset 32
 VirtualBase::VirtualBase((void*)(ptr + 32));
 // Initialize MiddleA part
 MiddleA::MiddleA((void*)ptr);
 // Initialize MiddleB part
 MiddleB::MiddleB((void*)(ptr + 16));
 *((char **)ptr) = &g_408a08;
 *((char **)(ptr + 32)) = &g_408a70;
 *((char **)(ptr + 16)) = &g_408a38;
 return ptr;
}


// Function: sub_403822 at 0x403822
void sub_403822(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x403830
int DiamondDerived::~DiamondDerived(void* this_ptr)
{
 void* v0; // [bp-0x18]

 v0 = this_ptr;
 return;
}


// Function: sub_403863 at 0x403863
void sub_403863(unsigned long a0, unsigned long a1, unsigned long a2)
{
 Point::Point();
 return;
}


// Function: _ZN5PointC2Eii at 0x403870
int Point::Point(void* this_ptr, int arg_0, int arg_1)
{
 Point *p = (Point *)this_ptr;
 p->x = arg_0;
 p->y = arg_1;
 return 0;
}


// Function: sub_40388f at 0x40388f
void sub_40388f(unsigned long a0, unsigned long a1)
{
 Point::operator+();
 return;
}


// Function: _ZNK5PointplERKS_ at 0x403890
Point Point::operator+(Point *this_ptr, const Point& other)
{
  Point result;
  result.x = this_ptr->x + other.x;
  result.y = this_ptr->y + other.y;
  return result;
}


// Function: sub_4038c9 at 0x4038c9
void sub_4038c9(unsigned long a0, unsigned long a1)
{
 Point::operator==();
 return;
}


// Function: _ZNK5PointeqERKS_ at 0x4038d0
bool Point::operator==(Point *this_ptr, const Point& other)
{
  if (this_ptr->x == other.x)
    return this_ptr->y == other.y;
  return false;
}


// Function: sub_403915 at 0x403915
void sub_403915(unsigned long a0)
{
 Point::operator++();
 return;
}


// Function: _ZN5PointppEv at 0x403920
Point* Point::operator++(Point *this_ptr)
{
 this_ptr->x = this_ptr->x + 1;
 this_ptr->y = this_ptr->y + 1;
 return this_ptr;
}


// Function: sub_40393e at 0x40393e
void sub_40393e(unsigned long a0, unsigned long a1)
{
 template_max();
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403940
template<typename T>
T template_max(T arg_0, T arg_1)
{
 unsigned int v0; // [bp-0x14]

 v0 = (arg_0 <= arg_1 ? arg_1 : arg_0);
 return v0;
}


// Function: sub_40396c at 0x40396c
void sub_40396c()
{
 template_max();
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403970
template<> double template_max(double arg_0, double arg_1)
{
 unsigned long v0; // [bp-0x20]

 *((double *)&v0) = (arg_0 <= arg_1 ? arg_1 : arg_0);
 return v0;
}


// Function: sub_4039ae at 0x4039ae
void sub_4039ae(unsigned long a0, unsigned long a1)
{
 template_swap();
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4039b0
template<typename T>
void template_swap(T *a, T *b)
{
 unsigned int temp = *a;
 *a = *b;
 *b = temp;
}


// Function: sub_4039dc at 0x4039dc
void sub_4039dc(unsigned long a0)
{
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4039e0
typedef struct Container_int_struct {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct;

long long Container<int>::Container(void* this_ptr)
{
 Container_int_struct *ptr = (Container_int_struct *)this_ptr;

 ptr->field_28 = 0;
 return (long long)this_ptr;
}


// Function: sub_4039f5 at 0x4039f5
void sub_4039f5(unsigned long a0, unsigned long a1)
{
 Container<int>::push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x403a00
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int v1; // ecx

 if ((int)ptr[40] < 10)
 {
 v1 = (int)ptr[40];
 *((unsigned int *)&ptr[40]) = v1 + 1;
 *((int *)((char *)ptr + 4 * v1)) = arg_0;
 }
 return;
}


// Function: sub_403a37 at 0x403a37
void sub_403a37(unsigned long a0, unsigned long a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x403a40
long long Container<int>::get(void* this_ptr, int v2)
{
 unsigned int *ptr = (unsigned int*)this_ptr;
 unsigned int v0;

 if ((unsigned int)v2 < ((unsigned int*)ptr)[10])
 {
 v0 = ptr[v2];
 return v0;
 }
 v0 = 0;
 return v0;
}


// Function: sub_403a8c at 0x403a8c
void sub_403a8c(unsigned long a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403a90
long long Container<int>::getSize(void* this_ptr)
{
 Container_int_struct *v1 = (Container_int_struct*)this_ptr;
 return v1->field_28;
}


// Function: sub_403aa1 at 0x403aa1
void sub_403aa1(unsigned long a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x403ab0
typedef struct Container_double_struct {
 char padding_0[80];
 unsigned int field_50;
} Container_double_struct;

long long Container<double>::Container(void* this_ptr)
{
 Container_double_struct *ptr = (Container_double_struct *)this_ptr;

 ptr->field_50 = 0;
 return (long long)this_ptr;
}


// Function: sub_403ac5 at 0x403ac5
void sub_403ac5(unsigned long a0)
{
 Container<double>::push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403ad0
typedef struct Container_double_struct2 {
 unsigned long long field_0;
 char padding_8[72];
 unsigned int field_50;
} Container_double_struct2;

long long Container<double>::push(void* this_ptr, double arg_0)
{
 Container_double_struct2 *ptr = (Container_double_struct2 *)this_ptr;
 if (ptr->field_50 < 10)
 {
 unsigned int idx = ptr->field_50;
 ptr->field_50 = idx + 1;
 ((double*)ptr)[idx] = arg_0;
 }
 return (long long)ptr;
}


// Function: sub_403b0d at 0x403b0d
void sub_403b0d(unsigned long a0, unsigned long a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x403b10
double Container<double>::get(void* this_ptr, int index)
{
 Container_double_struct *ptr = (Container_double_struct *)this_ptr;
 if (index >= 0 && (unsigned int)index < ptr->field_50)
 return ((double*)ptr)[index];
 return 0.0;
}


// Function: sub_403b63 at 0x403b63
void sub_403b63(unsigned long a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x403b70
long long Container<double>::getSize(void* this_ptr)
{
 Container_double_struct *v1 = (Container_double_struct*)this_ptr;
 return v1->field_50;
}


// Function: sub_403b81 at 0x403b81
void sub_403b81(unsigned long a0, unsigned long a1)
{
 std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x403b90
long long std::unique_ptr<int, std::default_delete<int>>::unique_ptr(char *a0, int *ptr)
{
 return std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(a0, ptr);
}


// Function: sub_403bb8 at 0x403bb8
void sub_403bb8()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403bc0
int* std::unique_ptr<int, std::default_delete<int>>::operator*(void* this)
{
 return (int*)std::unique_ptr<int, std::default_delete<int>>::get(this);
}


// Function: sub_403be8 at 0x403be8
void sub_403be8(unsigned long a0)
{
 std::move<std::unique_ptr<int, std::default_delete<int>>&>();
 return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403bf0
long long std::move<std::unique_ptr<int, std::default_delete<int>>&>(std::unique_ptr<int, std::default_delete<int>>& arg)
{
 return (long long)&arg;
}


// Function: sub_403bfe at 0x403bfe
void sub_403bfe(unsigned long a0, unsigned long a1)
{
 std::unique_ptr<int, std::default_delete<int>>::unique_ptr();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ at 0x403c00
long long std::unique_ptr<int, std::default_delete<int>>::unique_ptr(void* this, std::unique_ptr<int, std::default_delete<int>> &&arg_0)
{
 return std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(this, arg_0);
}


// Function: sub_403c23 at 0x403c23
void sub_403c23(unsigned long a0, unsigned long a1)
{
 std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>();
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403c30
long long std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr(char *a0, int *ptr)
{
 return std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data(a0, ptr);
}


// Function: sub_403c58 at 0x403c58
void sub_403c58()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x403c60
long long std::unique_ptr<int[], std::default_delete<int[]>>::operator[](void* v1, unsigned long v2)
{
 return std::unique_ptr<int[], std::default_delete<int[]>>::get(v1) + v2 * 4;
}


// Function: sub_403c97 at 0x403c97
void sub_403c97(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x403ca0
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* this)
{
 unsigned long long ptr;
 unsigned long long v2;

 ptr = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
 if (ptr)
 {
 v2 = std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter(this);
 std::default_delete<int[]>::operator()<int>((void*)v2, (int*)ptr);
 }
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this) = 0;
 return 0;
}


// Function: sub_403cfe at 0x403cfe
void sub_403cfe()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_403d06 at 0x403d06
void sub_403d06(unsigned long a0)
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev at 0x403d10
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* this)
{
 unsigned long long ptr;
 unsigned long long v0;

 ptr = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
 if (ptr)
 {
 v0 = std::unique_ptr<int, std::default_delete<int>>::get_deleter(this);
 std::default_delete<int>::operator()((void*)v0, (int*)ptr);
 }
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this) = 0;
 return 0;
}


// Function: sub_403d78 at 0x403d78
void sub_403d78()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZN12RTTIDerivedAC2Ev at 0x403d80
extern char g_408d50;

long long RTTIDerivedA::RTTIDerivedA(void* this_ptr)
{
 unsigned long long ptr = (unsigned long long)this_ptr;

 RTTIBase::RTTIBase((void*)ptr);
 *((char **)ptr) = &g_408d50;
 return ptr;
}


// Function: sub_403db1 at 0x403db1
void sub_403db1(unsigned long a0)
{
 RTTIDerivedB::RTTIDerivedB();
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403dc0
extern char g_408da0;

long long RTTIDerivedB::RTTIDerivedB(void* this_ptr)
{
 unsigned long long ptr = (unsigned long long)this_ptr;

 RTTIBase::RTTIBase((void*)ptr);
 *((char **)ptr) = &g_408da0;
 return ptr;
}


// Function: sub_403df1 at 0x403df1
void sub_403df1(unsigned long a0, unsigned long a1)
{
 std::type_info::operator==();
 return;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x403e00
bool std::type_info::operator==(const std::type_info &arg_0) const
{
  char v0;
  char v1 = 1;
  const char *name1 = this->__type_name;
  const char *name2 = arg_0.__type_name;

  if (name1 == name2)
    return v1;
  v0 = 0;
  if (*name1 != 42)
    v0 = !strcmp(name1, name2);
  return v0;
}


// Function: sub_403e7a at 0x403e7a
void sub_403e7a(unsigned long a0)
{
 RTTIDerivedA::derivedA_data();
 return;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x403e80
int RTTIDerivedA::derivedA_data(const void* this_ptr)
{
 return 100;
}


// Function: sub_403e8f at 0x403e8f
void sub_403e8f(unsigned long a0)
{
 RTTIDerivedB::derivedB_data();
 return;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x403e90
int RTTIDerivedB::derivedB_data(const void* this_ptr)
{
 return 200;
}


// Function: sub_403e9f at 0x403e9f
void sub_403e9f(unsigned long a0)
{
 std::type_info::name();
 return;
}


// Function: _ZNKSt9type_info4nameEv at 0x403ea0
const char* std::type_info::name() const
{
  if (*(this->__type_name) != 42)
  {
    return this->__type_name;
  }
  return this->__type_name + 1;
}


// Function: sub_403ee7 at 0x403ee7
void sub_403ee7(unsigned long a0)
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x403ef0
const char* Base::getName(void* this_ptr)
{
 return "Base";
}


// Function: sub_403f01 at 0x403f01
void sub_403f01(unsigned long a0)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x403f10
int Base::~Base(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_403f38 at 0x403f38
void sub_403f38(unsigned long a0)
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x403f40
const char* Derived::getName(void* this_ptr)
{
 return "Derived";
}


// Function: sub_403f51 at 0x403f51
void sub_403f51(unsigned long a0)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x403f60
int Derived::~Derived(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_403f88 at 0x403f88
void sub_403f88(unsigned long a0)
{
 BaseA::BaseA();
 return;
}


// Function: _ZN5BaseAC2Ev at 0x403f90
extern char g_4089b0;

void* BaseA::BaseA(void* this_ptr)
{
 *((char **)this_ptr) = &g_4089b0;
 return this_ptr;
}


// Function: sub_403fac at 0x403fac
void sub_403fac(unsigned long a0)
{
 BaseB::BaseB();
 return;
}


// Function: _ZN5BaseBC2Ev at 0x403fb0
extern char g_4089d8;

void* BaseB::BaseB(void* this_ptr)
{
 *((char **)this_ptr) = &g_4089d8;
 return this_ptr;
}


// Function: sub_403fcc at 0x403fcc
void sub_403fcc(unsigned long a0)
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x403fd0
void MultiDerived::funcA(void* this_ptr)
{
 return;
}


// Function: sub_403fdf at 0x403fdf
void sub_403fdf(unsigned long a0)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x403fe0
int MultiDerived::~MultiDerived(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_404008 at 0x404008
void sub_404008(unsigned long a0)
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x404010
void MultiDerived::funcB(void* this_ptr)
{
 return;
}


// Function: sub_40401f at 0x40401f
void sub_40401f(unsigned long a0)
{
 non-virtual thunk to MultiDerived::funcB()();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x404020
void thunk_MultiDerived_funcB(void* a0)
{
 MultiDerived::funcB((char*)a0 - 16);
 return;
}


// Function: sub_404036 at 0x404036
void sub_404036(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x404040
void thunk_MultiDerived_dtor(unsigned long long a0)
{
 unsigned long long v0;

 v0 = a0;
 return;
}


// Function: sub_404056 at 0x404056
void sub_404056(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x404060
void thunk_MultiDerived_dtor_delete(unsigned long long a0)
{
 unsigned long long v0;

 v0 = a0;
 return;
}


// Function: sub_404076 at 0x404076
void sub_404076(unsigned long a0)
{
 BaseA::funcA();
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x404080
void BaseA::funcA(void* this_ptr)
{
 return;
}


// Function: sub_40408f at 0x40408f
void sub_40408f(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x404090
void BaseA::~BaseA(void* this)
{
}


// Function: sub_40409a at 0x40409a
void sub_40409a(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x4040a0
void BaseA::~BaseA(void* this)
{
 operator delete(this);
}


// Function: sub_4040c8 at 0x4040c8
void sub_4040c8(unsigned long a0)
{
 BaseB::funcB();
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x4040d0
void BaseB::funcB(void* this_ptr)
{
 return;
}


// Function: sub_4040df at 0x4040df
void sub_4040df(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x4040e0
void BaseB::~BaseB(void* this)
{
}


// Function: sub_4040ea at 0x4040ea
void sub_4040ea(unsigned long a0)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x4040f0
void BaseB::~BaseB(void* this)
{
 operator delete(this);
}


// Function: sub_404118 at 0x404118
void sub_404118(unsigned long a0)
{
 VirtualBase::VirtualBase();
 return;
}


// Function: _ZN11VirtualBaseC2Ev at 0x404120
extern char g_408c38;

void* VirtualBase::VirtualBase(void* this_ptr)
{
 *((char **)this_ptr) = &g_408c38;
 return this_ptr;
}


// Function: sub_40413c at 0x40413c
void sub_40413c(unsigned long a0, unsigned long a1)
{
 MiddleA::MiddleA();
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x404140
extern char g_408c38;

void* MiddleA::MiddleA(void* ptr)
{
 VirtualBase::VirtualBase((void*)((char*)ptr + 32));
 *((char **)ptr) = &g_408c38;
 return ptr;
}


// Function: sub_40416b at 0x40416b
void sub_40416b(unsigned long a0, unsigned long a1)
{
 MiddleB::MiddleB();
 return;
}


// Function: _ZN7MiddleBC2Ev at 0x404170
extern char g_408c38;

void* MiddleB::MiddleB(void* ptr)
{
 VirtualBase::VirtualBase((void*)((char*)ptr + 32));
 *((char **)ptr) = &g_408c38;
 return ptr;
}


// Function: sub_40419b at 0x40419b
void sub_40419b(unsigned long a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4041a0
void MiddleA::func(void* this_ptr)
{
 return;
}


// Function: sub_4041be at 0x4041be
void sub_4041be(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x4041c0
void MiddleA::~MiddleA(void* this_ptr)
{
 void* v0; // [bp-0x18]

 v0 = this_ptr;
}


// Function: sub_4041f3 at 0x4041f3
void sub_4041f3(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x404200
void MiddleA::~MiddleA(void* this)
{
 operator delete(this);
}


// Function: sub_404228 at 0x404228
void sub_404228(unsigned long a0)
{
 thunk to MiddleA::func()();
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x404230
long long thunk_MiddleA_func(void* *a0)
{
 return (unsigned long long)MiddleA::func((char *)a0 + (*(a0))[24]);
}


// Function: sub_40424c at 0x40424c
void sub_40424c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x404250
long long thunk_MiddleA_dtor(unsigned long long a0)
{
 unsigned long v2;
 unsigned long long v0;

 v0 = a0;
 return v2;
}


// Function: sub_40426c at 0x40426c
void sub_40426c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x404270
long long thunk_MiddleA_dtor_delete(unsigned long long a0)
{
 unsigned long v2;
 unsigned long long v0;

 v0 = a0;
 return v2;
}


// Function: sub_40428c at 0x40428c
void sub_40428c(unsigned long a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x404290
void MiddleB::func(void* this_ptr)
{
 return;
}


// Function: sub_4042ae at 0x4042ae
void sub_4042ae(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x4042b0
void MiddleB::~MiddleB(void* this_ptr)
{
 void* v0; // [bp-0x18]

 v0 = this_ptr;
}


// Function: sub_4042e3 at 0x4042e3
void sub_4042e3(unsigned long a0)
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x4042f0
void MiddleB::~MiddleB(void* this)
{
 operator delete(this);
}


// Function: sub_404318 at 0x404318
void sub_404318(unsigned long a0)
{
 thunk to MiddleB::func()();
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x404320
long long thunk_MiddleB_func(void* *a0)
{
 return (unsigned long long)MiddleB::func((char *)a0 + (*(a0))[24]);
}


// Function: sub_40433c at 0x40433c
void sub_40433c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x404340
long long thunk_MiddleB_dtor(unsigned long long a0)
{
 unsigned long v2;
 unsigned long long v0;

 v0 = a0;
 return v2;
}


// Function: sub_40435c at 0x40435c
void sub_40435c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x404360
long long thunk_MiddleB_dtor_delete(unsigned long long a0)
{
 unsigned long v2;
 unsigned long long v0;

 v0 = a0;
 return v2;
}


// Function: sub_40437c at 0x40437c
void sub_40437c(unsigned long a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x404380
void DiamondDerived::func(void* this_ptr)
{
 return;
}


// Function: sub_40439e at 0x40439e
void sub_40439e(unsigned long a0)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4043a0
void DiamondDerived::~DiamondDerived(void* this)
{
 operator delete(this);
}


// Function: sub_4043c8 at 0x4043c8
void sub_4043c8(unsigned long a0)
{
 non-virtual thunk to DiamondDerived::func()();
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4043d0
void thunk_DiamondDerived_func(void* a0)
{
 DiamondDerived::func((char*)a0 - 16);
 return;
}


// Function: sub_4043e6 at 0x4043e6
void sub_4043e6(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x4043f0
void thunk_DiamondDerived_dtor(unsigned long long a0)
{
 unsigned long long v0;

 v0 = a0;
 return;
}


// Function: sub_404406 at 0x404406
void sub_404406(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404410
void thunk_DiamondDerived_dtor_delete(unsigned long long a0)
{
 unsigned long long v0;

 v0 = a0;
 return;
}


// Function: sub_404426 at 0x404426
void sub_404426(unsigned long a0)
{
 thunk to DiamondDerived::func()();
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x404430
long long thunk2_DiamondDerived_func(void* *a0)
{
 return (unsigned long long)DiamondDerived::func((char *)a0 + (*(a0))[24]);
}


// Function: sub_40444c at 0x40444c
void sub_40444c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404450
long long thunk2_DiamondDerived_dtor(unsigned long long a0)
{
 unsigned long v2;
 unsigned long long v0;

 v0 = a0;
 return v2;
}


// Function: sub_40446c at 0x40446c
void sub_40446c(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x404470
long long thunk2_DiamondDerived_dtor_delete(unsigned long long a0)
{
 unsigned long v2;
 unsigned long long v0;

 v0 = a0;
 return v2;
}


// Function: sub_40448c at 0x40448c
void sub_40448c(unsigned long a0)
{
 VirtualBase::func();
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x404490
void VirtualBase::func(void* this_ptr)
{
 return;
}


// Function: sub_40449f at 0x40449f
void sub_40449f(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4044a0
void VirtualBase::~VirtualBase(void* this)
{
}


// Function: sub_4044aa at 0x4044aa
void sub_4044aa(unsigned long a0)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4044b0
void VirtualBase::~VirtualBase(void* this)
{
 operator delete(this);
}


// Function: sub_4044d8 at 0x4044d8
void sub_4044d8(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x4044e0
void MiddleA::~MiddleA(void* this)
{
}


// Function: sub_4044ee at 0x4044ee
void sub_4044ee(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x4044f0
void MiddleB::~MiddleB(void* this)
{
}


// Function: sub_4044fe at 0x4044fe
void sub_4044fe(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x404500
void DiamondDerived::~DiamondDerived(void* this_ptr)
{
 unsigned long long v3; // rsi
 void* v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]

 v0 = this_ptr;
 v1 = v3;
}


// Function: sub_404544 at 0x404544
void sub_404544(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x404550
int std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data(void* this, std::__uniq_ptr_data<int, std::default_delete<int>, true, true> &&arg_0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(this, arg_0);
 return 0;
}


// Function: sub_404573 at 0x404573
void sub_404573(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ at 0x404580
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* this, std::__uniq_ptr_impl<int, std::default_delete<int>> &&arg_0)
{
 std::tuple<int*, std::default_delete<int>>::tuple(this, std::move<std::tuple<int*, std::default_delete<int>>&>(arg_0));
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(&arg_0) = 0;
 return (long long)this;
}


// Function: sub_4045d0 at 0x4045d0
void sub_4045d0()
{
 unsigned long long v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4045d8 at 0x4045d8
void sub_4045d8(unsigned long a0)
{
 std::move<std::tuple<int*, std::default_delete<int>>&>();
 return;
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x4045e0
std::tuple<int*, std::default_delete<int>>&& std::move<std::tuple<int*, std::default_delete<int>>&>(std::tuple<int*, std::default_delete<int>> &arg_0)
{
 return (std::tuple<int*, std::default_delete<int>>&&)arg_0;
}


// Function: sub_4045ee at 0x4045ee
void sub_4045ee(unsigned long a0, unsigned long a1)
{
 std::tuple<int*, std::default_delete<int>>::tuple();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ at 0x4045f0
int std::tuple<int*, std::default_delete<int>>::tuple(void* this, std::tuple<int*, std::default_delete<int>> &&arg_0)
{
 return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(this, arg_0);
}


// Function: sub_404613 at 0x404613
void sub_404613(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404620
long long& std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(void* this)
{
 return std::get<0ul, int*, std::default_delete<int>>(this);
}


// Function: sub_40463b at 0x40463b
void sub_40463b()
{
 __clang_call_terminate(); /* do not return */
}


// Function: __clang_call_terminate at 0x404640
void __clang_call_terminate(void* a0)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 __cxa_begin_catch();
 std::terminate(a0); /* do not return */
}


// Function: sub_40464b at 0x40464b
void sub_40464b(unsigned long a0, unsigned long a1)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x404650
long long std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(void* this, std::_Tuple_impl<0ul, int*, std::default_delete<int>> &&arg_0)
{
 unsigned long long *ptr = (unsigned long long*)this;
 unsigned long long *v2 = (unsigned long long*)&arg_0;

 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(this, arg_0);
 *(ptr) = *(v2);
 return (long long)this;
}


// Function: sub_404685 at 0x404685
void sub_404685(unsigned long a0, unsigned long a1)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x404690
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(void* this, std::_Tuple_impl<1ul, std::default_delete<int>> &&)
{
 return (long long)this;
}


// Function: sub_40469e at 0x40469e
void sub_40469e(unsigned long a0)
{
 std::get<0ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x4046a0
long long& std::get<0ul, int*, std::default_delete<int>>(std::tuple<int*, std::default_delete<int>> &arg_0)
{
 return std::__get_helper<0ul, int*, std::default_delete<int>>(arg_0);
}


// Function: sub_4046bb at 0x4046bb
void sub_4046bb(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4046c0
long long& std::__get_helper<0ul, int*, std::default_delete<int>>(std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
 return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(arg_0);
}


// Function: sub_4046db at 0x4046db
void sub_4046db(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x4046e0
long long& std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
 return std::_Head_base<0ul, int*, false>::_M_head(arg_0);
}


// Function: sub_4046fb at 0x4046fb
void sub_4046fb(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404700
long long& std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> &arg_0)
{
 return *(long long*)&arg_0;
}


// Function: sub_40470e at 0x40470e
void sub_40470e(unsigned long a0)
{
 RTTIBase::RTTIBase();
 return;
}


// Function: _ZN8RTTIBaseC2Ev at 0x404710
extern char g_408d78;

void* RTTIBase::RTTIBase(void* this_ptr)
{
 *((char **)this_ptr) = &g_408d78;
 return this_ptr;
}


// Function: sub_40472c at 0x40472c
void sub_40472c(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD2Ev at 0x404730
void RTTIDerivedA::~RTTIDerivedA(void* this_ptr)
{
 void* v0; // [bp-0x10]

 v0 = this_ptr;
}


// Function: sub_40474b at 0x40474b
void sub_40474b(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x404750
void RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
}


// Function: sub_404778 at 0x404778
void sub_404778(unsigned long a0)
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x404780
const char* RTTIDerivedA::getType(void* this_ptr)
{
 return "RTTIDerivedA";
}


// Function: sub_40478f at 0x40478f
void sub_40478f(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x404790
void RTTIBase::~RTTIBase(void* this)
{
}


// Function: sub_40479a at 0x40479a
void sub_40479a(unsigned long a0)
{
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x4047a0
void RTTIBase::~RTTIBase(void* this)
{
 operator delete(this);
}


// Function: sub_4047c8 at 0x4047c8
void sub_4047c8(unsigned long a0)
{
 RTTIBase::getType();
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x4047d0
const char* RTTIBase::getType(void* this_ptr)
{
 return "RTTIBase";
}


// Function: sub_4047dc at 0x4047dc
void sub_4047dc(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD2Ev at 0x4047e0
void RTTIDerivedB::~RTTIDerivedB(void* this_ptr)
{
 void* v0; // [bp-0x10]

 v0 = this_ptr;
}


// Function: sub_4047fb at 0x4047fb
void sub_4047fb(unsigned long a0)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x404800
void RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
}


// Function: sub_404828 at 0x404828
void sub_404828(unsigned long a0)
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x404830
const char* RTTIDerivedB::getType(void* this_ptr)
{
 return "RTTIDerivedB";
}


// Function: sub_40483f at 0x40483f
void sub_40483f(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x404840
long long std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_data()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi

 return std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(v1, v2);
}


// Function: sub_404863 at 0x404863
void sub_404863(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x404870
int std::__uniq_ptr_impl<int, std::default_delete<int>>::__uniq_ptr_impl(void* this, int *arg_0)
{
 void* v0; // [bp-0x28]

 v0 = this;
 std::tuple<int*, std::default_delete<int>>::tuple<true, true>(this);
 *((int **)std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr()) = arg_0;
 return;
}


// Function: sub_4048ab at 0x4048ab
void sub_4048ab(unsigned long a0)
{
 std::tuple<int*, std::default_delete<int>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv at 0x4048b0
long long std::tuple<int*, std::default_delete<int>>::tuple()
{
 unsigned long long v1; // rdi

 return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(v1);
}


// Function: sub_4048d0 at 0x4048d0
void sub_4048d0()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_4048d8 at 0x4048d8
void sub_4048d8(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev at 0x4048e0
int std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_Tuple_impl(void* this)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0ul, int*, false>::_Head_base(this);
 return;
}


// Function: sub_404908 at 0x404908
void sub_404908(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404910
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_Tuple_impl()
{
 unsigned long long v1; // rdi

 return std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(v1);
}


// Function: sub_40492b at 0x40492b
void sub_40492b(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev at 0x404930
long long std::_Head_base<0ul, int*, false>::_Head_base()
{
 unsigned long long *ptr; // rdi

 *(ptr) = 0;
 return ptr;
}


// Function: sub_404945 at 0x404945
void sub_404945(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x404950
int std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base(void* this)
{
 return 0;
}


// Function: sub_40495a at 0x40495a
void sub_40495a(unsigned long a0)
{
 std::unique_ptr<int, std::default_delete<int>>::get_deleter();
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x404960
long long std::unique_ptr<int, std::default_delete<int>>::get_deleter(void* this)
{
 unsigned long long v0; // [bp-0x18]

 v0 = std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(this);
 return v0;
}


// Function: sub_404988 at 0x404988
void sub_404988()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x404990
void std::default_delete<int>::operator()(void* this, int *arg_0)
{
 void* v0; // [bp-0x10]

 v0 = this;
 if (arg_0)
 operator delete(arg_0);
 return;
}


// Function: sub_4049c1 at 0x4049c1
void sub_4049c1(unsigned long a0)
{
 std::move<int*&>();
 return;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x4049d0
long long std::move(int** arg)
{
 unsigned long v1; // rdi

 return (long long)arg;
}


// Function: sub_4049de at 0x4049de
void sub_4049de(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x4049e0
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_deleter(void* this)
{
 return std::get<1ul, int*, std::default_delete<int>>(this);
}


// Function: sub_4049fb at 0x4049fb
void sub_4049fb(unsigned long a0)
{
 std::get<1ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404a00
long long std::get(void* this)
{
 return std::__get_helper<1ul, std::default_delete<int>>(this);
}


// Function: sub_404a1b at 0x404a1b
void sub_404a1b(unsigned long a0)
{
 std::__get_helper<1ul, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x404a20
std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(class std::_Tuple_impl<1ul, std::default_delete<int>> &arg_0)
{
 return std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(arg_0);
}


// Function: sub_404a3b at 0x404a3b
void sub_404a3b(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x404a40
long long std::_Tuple_impl<1ul, std::default_delete<int>>::_M_head(void* this_ptr)
{
 return std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(this_ptr);
}


// Function: sub_404a5b at 0x404a5b
void sub_404a5b(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int>, true>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x404a60
long long std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(class std::_Head_base<1ul, std::default_delete<int>, true> &arg_0)
{
 return (long long)&arg_0;
}


// Function: sub_404a6e at 0x404a6e
void sub_404a6e(unsigned long a0)
{
 std::unique_ptr<int, std::default_delete<int>>::get();
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x404a70
long long std::unique_ptr<int, std::default_delete<int>>::get(void* this)
{
 return std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(this);
}


// Function: sub_404a98 at 0x404a98
void sub_404a98()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x404aa0
long long std::__uniq_ptr_impl<int, std::default_delete<int>>::_M_ptr(void* this)
{
 return std::get<0ul, int*, std::default_delete<int>>(this);
}


// Function: sub_404abe at 0x404abe
void sub_404abe(unsigned long a0)
{
 std::get<0ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x404ac0
long long std::get(void* this)
{
 return std::__get_helper<0ul, int*, std::default_delete<int>>(this);
}


// Function: sub_404adb at 0x404adb
void sub_404adb(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404ae0
long long std::__get_helper<0ul, int*, std::default_delete<int>>(const class std::_Tuple_impl<0ul, int*, std::default_delete<int>> &arg_0)
{
 return std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(arg_0);
}


// Function: sub_404afb at 0x404afb
void sub_404afb(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x404b00
long long std::_Tuple_impl<0ul, int*, std::default_delete<int>>::_M_head(void* this_ptr)
{
 return std::_Head_base<0ul, int*, false>::_M_head(this_ptr);
}


// Function: sub_404b1b at 0x404b1b
void sub_404b1b(unsigned long a0)
{
 std::_Head_base<0ul, int*, false>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x404b20
long long std::_Head_base<0ul, int*, false>::_M_head(void* this_ptr)
{
 return *(long long*)this_ptr;
}


// Function: sub_404b2e at 0x404b2e
void sub_404b2e(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data();
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi at 0x404b30
long long std::__uniq_ptr_data<int, std::default_delete<int[]>, true, true>::__uniq_ptr_data()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi

 return std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(v1, v2);
}


// Function: sub_404b53 at 0x404b53
void sub_404b53(unsigned long a0, unsigned long a1)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x404b60
int std::__uniq_ptr_impl<int, std::default_delete<int[]>>::__uniq_ptr_impl(void* this, int *arg_0)
{
 std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>(this);
 *((int **)std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this)) = arg_0;
 return;
}


// Function: sub_404b9b at 0x404b9b
void sub_404b9b(unsigned long a0)
{
 std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>();
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x404ba0
long long std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
 unsigned long long v1; // rdi

 return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(v1);
}


// Function: sub_404bc0 at 0x404bc0
void sub_404bc0()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: sub_404bc8 at 0x404bc8
void sub_404bc8(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404bd0
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
 unsigned long long v1; // rdi

 return std::get<0ul, int*, std::default_delete<int[]>>(v1);
}


// Function: sub_404beb at 0x404beb
void sub_404beb(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x404bf0
int std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_Tuple_impl(void* this)
{
 void* v0; // [bp-0x18]

 v0 = this;
 std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl(this);
 std::_Head_base<0ul, int*, false>::_Head_base();
 return;
}


// Function: sub_404c18 at 0x404c18
void sub_404c18(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404c20
long long std::_Tuple_impl<1ul, std::default_delete<int[]>>::_Tuple_impl()
{
 unsigned long long v1; // rdi

 return std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(v1);
}


// Function: sub_404c3b at 0x404c3b
void sub_404c3b(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev at 0x404c40
int std::_Head_base<1ul, std::default_delete<int[]>, true>::_Head_base(void* this)
{
 return;
}


// Function: sub_404c4a at 0x404c4a
void sub_404c4a(unsigned long a0)
{
 std::get<0ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404c50
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0ul, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
 return std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
}


// Function: sub_404c6b at 0x404c6b
void sub_404c6b(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404c70
long long std::__get_helper<0ul, int*, std::default_delete<int[]>>()
{
 unsigned long long v1; // rdi

 return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(v1);
}


// Function: sub_404c8b at 0x404c8b
void sub_404c8b(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x404c90
void std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
 void* v0; // [bp-0x10]

 v0 = this;
 std::_Head_base<0ul, int*, false>::_M_head();
 return;
}


// Function: sub_404cab at 0x404cab
void sub_404cab(unsigned long a0)
{
 std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter();
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x404cb0
long long std::unique_ptr<int[], std::default_delete<int[]>>::get_deleter()
{
 unsigned long long v2; // rdi
 unsigned long long v0; // [bp-0x18]

 v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(v2);
 return v0;
}


// Function: sub_404cd8 at 0x404cd8
void sub_404cd8()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ at 0x404ce0
long long std::default_delete<int[]>::operator()<int>(void *this, int *arg_0)
{
 operator delete[](arg_0);
 return arg_0;
}

// Function: sub_404d11 at 0x404d11
void sub_404d11(unsigned long a0)
{
 std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter();
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x404d20
void std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_deleter(void* this)
{
 std::get<1ul, int*, std::default_delete<int[]>>(this);
 return;
}


// Function: sub_404d3b at 0x404d3b
void sub_404d3b(unsigned long a0)
{
 std::get<1ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x404d40
long long std::get<1ul, int*, std::default_delete<int[]>>()
{
 unsigned long long v1; // rdi

 return std::__get_helper<1ul, std::default_delete<int[]>>(v1);
}


// Function: sub_404d5b at 0x404d5b
void sub_404d5b(unsigned long a0)
{
 std::__get_helper<1ul, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404d60
class std::default_delete<int[]> & std::__get_helper<1ul, std::default_delete<int[]>>(void* this, class std::_Tuple_impl<1ul, std::default_delete<int[]>> &arg_0)
{
 return std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head(this);
}


// Function: sub_404d7b at 0x404d7b
void sub_404d7b(unsigned long a0)
{
 std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x404d80
long long std::_Tuple_impl<1ul, std::default_delete<int[]>>::_M_head()
{
 unsigned long long v1; // rdi

 return std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head(v1);
}


// Function: sub_404d9b at 0x404d9b
void sub_404d9b(unsigned long a0)
{
 std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head();
 return;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404da0
void std::_Head_base<1ul, std::default_delete<int[]>, true>::_M_head(void* this, class std::_Head_base<1ul, std::default_delete<int[]>, true> &arg_0)
{
 return;
}


// Function: sub_404dae at 0x404dae
void sub_404dae(unsigned long a0)
{
 std::unique_ptr<int[], std::default_delete<int[]>>::get();
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x404db0
void std::unique_ptr<int[], std::default_delete<int[]>>::get(void* this)
{
 unsigned long long v0; // [bp-0x18]

 v0 = std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr(this);
 return;
}


// Function: sub_404dd8 at 0x404dd8
void sub_404dd8()
{
 void* v1; // rax

 __clang_call_terminate(v1); /* do not return */
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x404de0
long long std::__uniq_ptr_impl<int, std::default_delete<int[]>>::_M_ptr()
{
 unsigned long long v1; // rdi

 return *((long long *)std::get<0ul, int*, std::default_delete<int[]>>(v1));
}


// Function: sub_404dfe at 0x404dfe
void sub_404dfe(unsigned long a0)
{
 std::get<0ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x404e00
class std::tuple_element<0ul, std::tuple<int*, std::default_delete<int[]>>>::type & std::get<0ul, int*, std::default_delete<int[]>>(void* this, class std::tuple<int*, std::default_delete<int[]>> &arg_0)
{
 return std::__get_helper<0ul, int*, std::default_delete<int[]>>(this);
}


// Function: sub_404e1b at 0x404e1b
void sub_404e1b(unsigned long a0)
{
 std::__get_helper<0ul, int*, std::default_delete<int[]>>();
 return;
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404e20
long long std::__get_helper<0ul, int*, std::default_delete<int[]>>()
{
 unsigned long long v1; // rdi

 return std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(v1);
}


// Function: sub_404e3b at 0x404e3b
void sub_404e3b(unsigned long a0)
{
 std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head();
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x404e40
void std::_Tuple_impl<0ul, int*, std::default_delete<int[]>>::_M_head(void* this, class std::_Tuple_impl<0ul, int*, std::default_delete<int[]>> &arg_0)
{
 std::_Head_base<0ul, int*, false>::_M_head(this, arg_0);
 return;
}


// Function: sub_404e5b at 0x404e5b
void sub_404e5b(unsigned long a0)
{
 std::forward<int*&>();
 return;
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x404e60
int* std::forward<int*>(int* &arg_0)
{
 return static_cast<int*>(arg_0);
}


// Function: sub_404e6e at 0x404e6e
void sub_404e6e(unsigned long a0, unsigned long a1)
{
 std::_Head_base<0ul, int*, false>::_Head_base<int*&>();
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404e70
int std::_Head_base<0ul, int*, false>::_Head_base<int*&>(void* ptr, int* &arg_0)
{
 *((long long *)ptr) = (long long)std::forward<int*>(arg_0);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


