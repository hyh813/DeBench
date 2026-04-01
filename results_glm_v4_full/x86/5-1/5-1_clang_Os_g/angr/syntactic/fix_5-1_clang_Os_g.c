// Angr Decompilation of 5-1_clang_Os_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>
#include <stdint.h>
#include <cxxabi.h>
#include <new>
#include <exception>
#include <cmath>
#include <typeinfo>
#include <cstdlib>

/* C++ ABI function declarations */
extern "C" {
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, void* type, void (*dest)(void*));
void* __cxa_begin_catch(void* exception);
void __cxa_end_catch(void);
void __cxa_rethrow(void) __attribute__((noreturn));
void _Unwind_Resume(void* exception) __attribute__((noreturn));
void __builtin_delete(void* ptr);
void* __builtin_new(size_t size);
void __builtin_vec_delete(void* ptr);
void* __builtin_vec_new(size_t size);
void __cxa_finalize(void* dso_handle);
void __builtin_trap(void) __attribute__((__noreturn__));
void __builtin_unreachable(void) __attribute__((__noreturn__));
/* RTTI type info for 'int' */
extern const type_info _ZTIi;
}

/* Define builtin new/delete stubs */
void __builtin_delete(void* ptr) {
  ::operator delete(ptr);
}

void* __builtin_new(size_t size) {
  return ::operator new(size);
}

void __builtin_vec_delete(void* ptr) {
  ::operator delete[](ptr);
}

void* __builtin_vec_new(size_t size) {
  return ::operator new[](size);
}

/* CRT function declarations */
extern "C" void _start(void);
extern "C" void deregister_tm_clones(void);
extern "C" void frame_dummy(void);
extern "C" int __do_global_dtors_aux(void);
extern "C" int __do_global_ctors_aux(void);
extern "C" void __x86_get_pc_thunk_dx(void);
extern "C" unsigned int __x86_get_pc_thunk_di(void);
extern "C" int register_tm_clones(void);

/* C++ operator new/delete declarations */
void* operator new(size_t size);
void operator delete(void* ptr) noexcept;
void* operator new[](size_t size);
void operator delete[](void* ptr) noexcept;

/* Define operator new/delete implementations */
void* operator new(size_t size) {
  return malloc(size);
}

void operator delete(void* ptr) noexcept {
  free(ptr);
}

void* operator new[](size_t size) {
  return malloc(size);
}

void operator delete[](void* ptr) noexcept {
  free(ptr);
}

/* std::ios_base::Init stub */
namespace std {
  namespace ios_base {
    class Init {
    public:
      Init() {}
      ~Init() {}
    };
  }
}

/* Template class Container */
template<typename T>
class Container {
public:
  T data[10];
  unsigned int count;
  
  Container() : count(0) {}
  void push(T value);
  T get(int index);
  unsigned int getSize();
};

template<typename T>
void Container<T>::push(T value) {
  if (count < 10) {
    data[count] = value;
    count++;
  }
}

template<typename T>
T Container<T>::get(int index) {
  if (index >= 0 && index < (int)count) {
    return data[index];
  }
  return T();
}

template<typename T>
unsigned int Container<T>::getSize() {
  return count;
}

/* RTTI class definitions */
class RTTIBase {
public:
  virtual ~RTTIBase() {}
  virtual void getType() {}
};

class RTTIDerivedA : public RTTIBase {
public:
  virtual ~RTTIDerivedA() {}
  virtual void getType() {}
};

class RTTIDerivedB : public RTTIBase {
public:
  virtual ~RTTIDerivedB() {}
  virtual void getType() {}
};

/* LifecycleClass for tracking instances */
class LifecycleClass {
public:
  static unsigned int instance_count;
};

unsigned int LifecycleClass::instance_count = 0;

/* CRT stub function _init removed by preprocessor */

struct struct_0 {
  char padding_0[400];
};

extern struct_0 *g_403ff4;

/* Forward declarations */
void test_cpp_member_func(void);

/* Global variables */
struct_0 *g_403ff4 = NULL;

int _init()
{
 if (g_403ff4)
 ((void (*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return;
}


// Function: sub_401160 at 0x401160
void sub_401160()
{
 return;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
extern unsigned int __dso_handle;

int _GLOBAL__sub_I_5_1_cpp()
{
 static std::ios_base::Init init_obj;
 return __cxa_atexit((void (*)(void*))&std::ios_base::Init::~Init, &init_obj, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 _start(); /* do not return */
 __builtin_unreachable();
}



/* CRT stub function _start removed by preprocessor */
extern "C" void _start(void) {
  __builtin_trap();
}



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
 __builtin_trap();
 __builtin_unreachable();
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
extern "C" void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
extern "C" void deregister_tm_clones(void) {
  return;
}



// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

extern "C" int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = v2;
 v0 = v4;
 return 0;
}




// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

extern "C" int __do_global_dtors_aux()
{
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v14; // eax
 unsigned int v0; // [bp-0x10];
 unsigned int v1; // [bp-0xc];
 char v2; // [bp-0x8];
 char v3; // [bp+0x0];

 __x86_get_pc_thunk_di();
 ptr = v6;
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[108])
 return 0;
 if (*((int *)&ptr->padding_0[24]))
 sub_401160(*((int *)&ptr->padding_0[88]));
 v10 = &ptr->padding_0[376];
 v11 = *((int *)&ptr->padding_0[112]);
 i = ((unsigned int)(&ptr->padding_0[372]) - (unsigned int)v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[112]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[112]) = v13;
 (*((void (**)())&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[112]);
 } while (*((int *)&ptr->padding_0[112]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[108] = 1;
 return 0;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */
extern "C" void frame_dummy(void) {
  return;
}

/* Function declarations for missing functions */
void test_cpp_member_func(void);

// Function: __x86.get_pc_thunk_dx at 0x401319
void __x86_get_pc_thunk_dx()
{
 unsigned int v0;
 asm volatile ("call 1f; 1: pop %0" : "=r"(v0));
}


// Function: __x86.get_pc_thunk_di at 0x40131d
unsigned int __x86_get_pc_thunk_di()
{
 unsigned int v0;
 asm volatile ("call 1f; 1: pop %0" : "=r"(v0));
 return v0;
}


// Function: sub_401321 at 0x401321
void sub_401321()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401324
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]
 char result; // [bp-0x9]

 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401370
void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int *)operator new[](20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator delete[](v2);
 LifecycleClass::instance_count = LifecycleClass::instance_count - 1;
 return;
}


/* Base class definition for virtual function testing */
class Base {
public:
  virtual ~Base() {}
};

// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
void call_virtual_func(class Base *arg_0, int arg_1)
{
 (*((int *)*((int *)arg_0)))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013f4
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013fa
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401400
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401406
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x40140c
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401412
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401418
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x40141e
void test_cpp_exception()
{
 unsigned int *ptr; // eax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)&_ZTIi, 0);
 __builtin_trap();
}


// Function: sub_40145f at 0x40145f
void sub_40145f()
{
 unsigned int result; // edx
 void *v3; // eax
 unsigned int v5; // ebx
 (void)result; (void)v3; (void)v5;

 if (result != 1)
 {
 if (result != 1)
 {
 __cxa_begin_catch(v3);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 360), 0);
 }
 __cxa_begin_catch(v3);
 __cxa_rethrow();
 }
}


// Function: sub_40147d at 0x40147d
void sub_40147d()
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401502
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401508
typedef struct struct_rtti_0 {
 char padding_0[4];
 struct struct_rtti_1 *field_4;
} struct_rtti_0;

typedef struct struct_rtti_1 {
 unsigned int field_0;
} struct_rtti_1;

extern char g_403ecc;
extern char g_403ee0;

/* RTTI type info objects are compiler-generated */

char g_403ecc = 0;
char g_403ee0 = 0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_rtti_0 **p; // edi
 void* v0; // [bp-0x14];

 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_rtti_0 **)operator new(4);
 *(p) = (struct_rtti_0 *)&g_403ee0;
 operator delete(v0);
 operator delete(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015c0
extern const char g_402081[];
extern const char g_40209f[];
extern const char g_4020bb[];
extern const char g_4020d7[];
extern const char g_4020f3[];
extern const char g_402110[];
extern const char g_40212c[];
extern const char g_402148[];
extern const char g_402164[];
extern const char g_402180[];
extern const char g_40219d[];
extern const char g_4021ba[];
extern const char g_4021d8[];

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]

 puts(g_4021d8);
 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(&v1);
 printf(g_402081);
 test_cpp_constructor();
 printf(g_40209f);
 printf(g_4020bb);
 printf(g_4020d7);
 printf(g_4020f3);
 printf(g_402110);
 printf(g_40212c);
 printf(g_402148);
 printf(g_402164);
 test_cpp_exception();
 printf(g_402180);
 printf(g_40219d);
 test_cpp_rtti();
 printf(g_4021ba);
 return;
}


// Function: main at 0x401722
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x40173e
template<typename T>
T template_max(T arg_0, T arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}

// Function: _Z12template_maxIdET_S0_S0_ at 0x40174c
template<>
double template_max<double>(double arg_0, double arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x40174c
// Function: _Z13template_swapIiEvRT_S1_ at 0x40175d
template<typename T>
void template_swap(T &ptr, T &p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401770
Container<int>::Container()
{
 this->count = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40177c
void Container<int>::push(int arg_0)
{
 unsigned int index = this->count;
 if (index <= 9)
 {
 this->count = index + 1;
 this->data[index] = arg_0;
 }
}


// Function: _ZNK9ContainerIiE3getEi at 0x401798
int Container<int>::get(int arg_0)
{
 if (arg_0 >= 0 && (int)this->count > arg_0)
 {
 return this->data[arg_0];
 }
 return 0;
}


// Function: sub_4017af at 0x4017af
void sub_4017af(unsigned int a0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4017b0
unsigned int Container<int>::getSize()
{
 return this->count;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4017b8
Container<double>::Container()
{
 this->count = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4017c4
void Container<double>::push(double arg_0)
{
 unsigned int idx = this->count;
 if (idx <= 9)
 {
 this->count = idx + 1;
 this->data[idx] = arg_0;
 }
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
double Container<double>::get(int arg_0)
{
 if (arg_0 >= 0 && (int)this->count > arg_0)
 {
 return this->data[arg_0];
 }
 return 0.0;
}


// Function: sub_4017fb at 0x4017fb
void sub_4017fb(unsigned int a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4017fc
unsigned int Container<double>::getSize()
{
 return this->count;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401804
RTTIDerivedA::~RTTIDerivedA()
{
  return;
}


// Function: sub_401825 at 0x401825
void sub_401825()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401826
void RTTIDerivedA::getType()
{
}


// Function: _ZN8RTTIBaseD2Ev at 0x40182a
RTTIBase::~RTTIBase()
{
}


// Function: sub_40182b at 0x40182b
void sub_40182b()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40182c
RTTIDerivedB::~RTTIDerivedB()
{
}


// Function: sub_40184d at 0x40184d
void sub_40184d()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40184e
void RTTIDerivedB::getType()
{
}


// Function: sub_401854 at 0x401854
void sub_401854()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

extern "C" int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 void (*v4)(); // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = v2;
 v4 = (void (*)())*((int *)&ptr->padding_0[384]);
 if (*((int *)&ptr->padding_0[384]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[384];
 do
 {
 p = v6;
 v4();
 v4 = (void (*)())*((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_4018a2 at 0x4018a2
void sub_4018a2()
{
}



/* CRT stub function _fini removed by preprocessor */


