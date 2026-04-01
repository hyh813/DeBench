// Angr Decompilation of 5-1_clang_Os_g
// Platform: AMD64

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <new>
#include <iostream>
#include <stdexcept>
#include <typeinfo>
#include <exception>

// C++ ABI declarations for exception handling
extern "C" {
    void* __cxa_allocate_exception(size_t);
    void __cxa_throw(void*, void*, void*);
    void* __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void __cxa_rethrow();
}

// Forward declarations for global variables
extern unsigned long long g_404008;
extern unsigned long long g_404010;
extern const char* g_403d78;
extern const char* g_403da0;
extern const char* g_40207d;
extern const char* g_40209b;
extern const char* g_4020b7;
extern const char* g_4020d3;
extern const char* g_4020ef;
extern const char* g_40210c;
extern const char* g_402128;
extern const char* g_402144;
extern const char* g_402160;
extern const char* g_40217c;
extern const char* g_402199;
extern const char* g_4021b6;
extern const char* g_4021d4;

/* CRT stub function _init removed by preprocessor */

// Stub functions needed for proper linking
void register_tm_clones() {}
void deregister_tm_clones() {}
void frame_dummy() {}
void __do_global_dtors_aux() {}

// Operators declared in <new> header

// _init() - CRT initialization stub
void _init()
{
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long long v0; // [bp-0x8]

 v0 = g_404008;
 if (v0 != g_404010)
   return;
}


// Function: sub_40102c at 0x40102c
void* sub_40102c(unsigned int v1)
{
 return new unsigned int[v1];
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
// Stub for C++ iostream initialization
void _GLOBAL__sub_I_5_1()
{
 // iostream initialization stub - actual implementation is in C++ runtime
 return;
}


// Function: sub_401167 at 0x401167
void sub_401167(unsigned long a0, unsigned long a1, unsigned long a2)
{
 // _start() removed - would terminate program
 (void)a0;
 (void)a1;
 (void)a2;
 return;
}



void test_cpp_member_func();
void test_cpp_constructor();
void test_cpp_exception();
void test_cpp_rtti();



// Function: sub_401195 at 0x401195
void sub_401195()
{
}


// Function: sub_401196 at 0x401196
void sub_401196()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401209 at 0x401209
void sub_401209()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401245 at 0x401245
void sub_401245()
{
}


// Function: sub_401249 at 0x401249
void sub_401249()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401259 at 0x401259
void sub_401259()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x40125c
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 (void)strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401294
void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = new unsigned int[20];
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = (unsigned int)i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 delete[] v1;
 LifecycleClass::instance_count = LifecycleClass::instance_count - 1;
 return;
}


// Forward declarations for template classes
template<typename T>
class Container;

// Forward declarations for C++ classes
class Base {
public:
    virtual void virtual_func(int) {}
    virtual ~Base() {}
};

class LifecycleClass {
public:
    static unsigned int instance_count;
};

// RTTI classes forward declarations
class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual void getType() {}
    ~RTTIDerivedA() {}
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual void getType() {}
    ~RTTIDerivedB() {}
};

unsigned int LifecycleClass::instance_count = 0;

void call_virtual_func(Base *arg_0, int arg_1)
{
    arg_0->Base::virtual_func(arg_1);
}

void test_cpp_virtual_func();


// Function: _Z21test_cpp_virtual_funcv at 0x4012ed
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012f3
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012f9
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012ff
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401305
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x40130b
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401311
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401317
// Note: Exception throwing requires proper C++ exception handling setup
// This function just returns since the actual throw logic is in sub_401342
void test_cpp_exception()
{
 return;
}


// Function: sub_401342 at 0x401342
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

unsigned long long sub_401342(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long result; // ebx

 result = a2;
 if (result != 1)
 {
 if (result != 1)
 return 0;
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
 return 0;
}


// Function: sub_40135f at 0x40135f
void sub_40135f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013d7
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013dd
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern const char* g_403d78;
extern const char* g_403da0;

void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operator new(8);
 *((const char **)ptr) = &g_403d78;
 p = (struct_0 **)operator new(8);
 *(p) = (struct_0*)&g_403da0;
 operator delete(ptr);
 // field_8 is a struct pointer, not a function - just access it
 (void)*p;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40147f
extern const char* g_40207d;
extern const char* g_40209b;
extern const char* g_4020b7;
extern const char* g_4020d3;
extern const char* g_4020ef;
extern const char* g_40210c;
extern const char* g_402128;
extern const char* g_402144;
extern const char* g_402160;
extern const char* g_40217c;
extern const char* g_402199;
extern const char* g_4021b6;
extern const char* g_4021d4;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 (void)strlen(v1);
 return;
}


// Function: main at 0x4015a8
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4015b2
int template_max(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4015ba
double template_max(double arg_0, double arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4015bf
void template_swap(int &ptr, int &p)
{
 int v1; // eax

 v1 = ptr;
 ptr = p;
 p = v1;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4015c8
void* Container<int>::Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4015d0
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4015e4
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_4015f5 at 0x4015f5
void sub_4015f5(unsigned long a0)
{
 (void)a0;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4015f6
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4015fa
void* Container<double>::Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401602
void Container<double>::push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[80];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[80]) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401618
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40162c
void Container<double>::getSize(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401630
void RTTIDerivedA::~RTTIDerivedA(void* this)
{
 delete this;
}


// Function: sub_401635 at 0x401635
void sub_401635()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401636
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40163c
void RTTIBase::~RTTIBase(void* this)
{
}


// Function: sub_40163d at 0x40163d
void sub_40163d()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40163e
void RTTIDerivedB::~RTTIDerivedB(void* this)
{
 delete this;
}


// Function: sub_401643 at 0x401643
void sub_401643()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401644
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


