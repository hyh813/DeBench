// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: ARMEL

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// ARM condition code calculator
extern "C" int armg_calculate_condition(unsigned int cond, unsigned int op1, unsigned int op2, unsigned int op3);

// ARM ABI double comparison
extern "C" int __aeabi_dcmpgt(double, double);
extern "C" int __aeabi_dcmplt(double, double);

/* CRT stub function _init removed by preprocessor */


// C++ exception handling functions
extern "C" void* __cxa_allocate_exception(size_t);
extern "C" void __cxa_throw(void*, void*, void*, ...);
extern "C" void* __cxa_begin_catch(void*);
extern "C" void __cxa_end_catch();
extern "C" void __cxa_end_cleanup();
extern "C" void __cxa_rethrow();
extern "C" int __cxa_atexit(void*, void*, void*);

// C++ operators
void* operator new(size_t);
void operator delete(void*);
extern "C" void* __dynamic_cast(void*, void*, void*, long);



// Function: sub_400854 at 0x400854
extern unsigned int g_412008;

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 // goto g_412008; // Removed - g_412008 is a variable, not a label
 return v0;
}


// Function: __dollar_a_27 at 0x400958
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned int __dso_handle;

int __dollar_a_27()
{
 unsigned int v0; // r0

 v0 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, 0, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, 0, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009cc at 0x4009cc
void sub_4009cc()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x400afc
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 strncpy(v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
// Forward declaration
struct Base;
typedef void (*VirtualFunc)(struct Base*);

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 VirtualFunc func = (VirtualFunc)*((int *)*((int *)arg_0));
 func(arg_0);
}


// Function: _Z21test_cpp_virtual_funcv at 0x400b8c
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400b94
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x400b9c
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x400ba8
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x400bb0
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x400bb8
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x400bc0
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x400bc8
extern char _ZTIi;

void test_cpp_exception()
{
 void *ptr; // r0

 ptr = __cxa_allocate_exception(4);
 *(int*)ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}


// Function: sub_400bf4 at 0x400bf4
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void sub_400bf4(void *a0, unsigned int a1)
{
 if (a1 != 1)
 {
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 else
 {
 __cxa_rethrow();
 }
}


// Function: sub_400c1c at 0x400c1c
void sub_400c1c()
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x400c98
void test_cpp_smart_ptr()
{
 return;
}


// RTTI class forward declarations
struct RTTIBase {
    virtual ~RTTIBase();
    virtual void getType();
};
struct RTTIDerivedA : public RTTIBase {
    ~RTTIDerivedA();
    void getType();
};
struct RTTIDerivedB : public RTTIBase {
    ~RTTIDerivedB();
    void getType();
};

// Function: _Z13test_cpp_rttiv at 0x400ca4
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char g_411ed8;
extern char g_411eec;

void test_cpp_rtti()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 unsigned int result; // r0
 unsigned int flag1; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
 p = operator new(4);
 *((char **)p) = &g_411ed8;
 ptr = (struct_0 **)operator new(4);
 *ptr = (struct_0 *)&g_411eec;
 result = (unsigned int)(unsigned long)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = (unsigned int)(unsigned long)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 // field_4 access
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d70
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_40113d;
extern char g_40115b;
extern char g_401177;
extern char g_401193;
extern char g_4011af;
extern char g_4011cc;
extern char g_4011e8;
extern char g_401204;
extern char g_401220;
extern char g_40123c;
extern char g_401259;
extern char g_401276;
extern char g_401294;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 puts(&g_401294);
 strncpy(&v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 printf(&g_40113d, strlen(&v1) + 4700);
 printf(&g_40115b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_401177, 42);
 printf(&g_401193, 71);
 printf(&g_4011af, 650);
 printf(&g_4011cc, 22);
 printf(&g_4011e8, 39);
 printf(&g_401204, 16);
 printf(&g_401220, 85);
 printf(&g_40123c, 0);
 printf(&g_401259, 703);
 printf(&g_401276, 0);
 return;
}


// Function: main at 0x400ef4
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Template function: template_max
template<typename T>
T template_max(T arg_0, T arg_1);

// Template specialization: template_max<double>
template<>
double template_max(double arg_0, double arg_1)
{
 double result; // r0

 result = __aeabi_dcmpgt(arg_0, arg_1);
 if (result)
 {
 if (!armg_calculate_condition(18, (unsigned int)result, 0, 0))
 return arg_0;
 }
 else
 {
 if (!armg_calculate_condition(18, (unsigned int)result, 0, 0))
 return arg_1;
 }
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x400f48
void template_swap(int &ptr, int &p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Template class Container definition
template<typename T>
struct Container {
    T data[10];
    unsigned int size;
    template<typename U> void push(U);
    template<typename U> void get(U);
    template<typename U> void getSize();
    template<typename U> Container();
};

// Explicit specialization of Container<int> class
template<> struct Container<int> {
    int data[10];
    unsigned int size;
    Container<int>();
};

// Explicit specialization for Container<int> constructor
template<>
Container<int>::Container()
{
 size = 0;
 return;
}


// Template specialization: Container<int>::push
template<>
void Container<int>::push(int arg_0)
{
 Container<int>* ptr = this;
 unsigned int index; // r2
 unsigned int v1; // r3

 index = ptr->size;
 if (index <= 9)
 v1 = index + 1;
 ptr->size = v1;
 ptr->data[index] = arg_0;
 return;
}


// Template specialization: Container<int>::get
template<>
void Container<int>::get(int arg_0)
{
 Container<int>* this_ptr = this;
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_400f90;
 return;
LABEL_400f90:
 return;
}


// Template specialization: Container<int>::getSize
template<>
void Container<int>::getSize()
{
 return;
}


// Template specialization: Container<double>::Container
template<>
Container<double>::Container()
{
 this->size = 0;
 return;
}


// Template specialization: Container<double>::push
template<>
void Container<double>::push(double arg_0)
{
 Container<double>* ptr = this;
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 // Cast void* to proper type for pointer arithmetic
 index = ((unsigned int*)ptr)[20]; // offset 80 = 20 * sizeof(unsigned int)
 if (9 >= index)
 goto LABEL_400fc0;
 return;
LABEL_400fc0:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 ((unsigned int*)ptr)[20] = index + 1;
 return;
}


// Template specialization: Container<double>::get
template<>
void Container<double>::get(int arg_0)
{
 void* this_ptr = this;
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_400ff0;
 return;
LABEL_400ff0:
 if (arg_0 >= (int)((unsigned int*)this_ptr)[20]) // offset 80 = 20 * sizeof(unsigned int)
 return;
 return;
}


// Template specialization: Container<double>::getSize
template<>
void Container<double>::getSize()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40100c
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401010
void RTTIDerivedA::getType()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401018
RTTIBase::~RTTIBase()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40101c
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401020
void RTTIDerivedB::getType()
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


