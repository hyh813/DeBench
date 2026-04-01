#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Helper function for ARM condition codes
int armg_calculate_condition(int cc, unsigned int a, unsigned int b, unsigned int c);

// Stack protector
unsigned int __glibc___stack_chk_guard = 0;

// C++ Exception handling functions
void* __cxa_allocate_exception(unsigned int);
void __cxa_throw(void*, void*, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void*);
void __cxa_rethrow(void*);
void __cxa_end_cleanup(void*);
void abort(void);
void __stack_chk_fail(void);
void* operator new(unsigned int);
void* operator new[](unsigned int);
void operator delete(void*);
void operator delete[](void*);

// ARM floating point helpers
unsigned int __aeabi_d2iz(double);



// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 // Return the value of g_22008 instead of goto (g_22008 is a variable, not a label)
 return g_22008;
}


// Function: _Z18test_cpp_exceptionv at 0x10b08
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 void *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int result; // r4
 void *v10; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = __cxa_allocate_exception(4);
 *(int*)ptr = 42;
 // Note: __cxa_throw never returns, but we handle the case for compilation
 (void)ptr;
 __cxa_throw(ptr, (void*)0x21e70, (void*)0, (void*)0);
 if (flag1 != 1)
 {
 if (!armg_calculate_condition(18, flag1, 1, 0))
 goto LABEL_10b38;
 }
 else
 {
 if (!armg_calculate_condition(18, flag1, 1, 0))
 {
LABEL_10b38:
 result = flag1;
 // These functions return void - use (void) to discard
 (void)__cxa_begin_catch(ptr);
 (void)__cxa_rethrow(ptr);
 (void)__cxa_end_catch(ptr);
 }
 }
 if (result == 1)
 goto LABEL_10b60;
 while (true)
 {
 // __cxa_end_cleanup never returns
LABEL_10b60:
 v10 = (unsigned int*)__cxa_begin_catch(v10);
 (void)__cxa_end_catch(v10);
 // This throw never returns either
 (void)__cxa_throw(__cxa_allocate_exception(result), (void*)0x11c88, (void*)0, (void*)0);
 if (flag1 == 2)
 {
 (void)__cxa_begin_catch(v10);
 (void)__cxa_end_catch(v10);
 return;
 }
 else if (flag1 == 3)
 {
 (void)__cxa_begin_catch(v10);
 (void)__cxa_end_catch(v10);
 return;
 }
 }
}


// Function: main at 0x10bbc
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10bcc
// Global constructors for this compilation unit
int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 // Initialization code - simplified
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10c34 at 0x10c34
void sub_10c34()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10cf4
void test_cpp_member_func()
{
 unsigned int v4; // lr
 char v0[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 strncpy(&v0, "Test", 31);
 (void)strlen(&v0);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d60
void test_cpp_constructor()
{
 return;
}


// Forward declarations for classes
class Base;
class Derived;
class MultiDerived;
class VirtualBase;
class MiddleA;
class MiddleB;
class DiamondDerived;
class RTTIDerivedA;
class RTTIDerivedB;

// Forward declarations for test functions
void test_cpp_oo_features();

// Function: _Z17call_virtual_funcP4Basei at 0x10d7c
class Base {
public:
    virtual void virtual_func(int);
    virtual const char* getName();
    virtual ~Base();
};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 // Virtual call through vtable - use function pointer
 typedef void (*BaseVF)(class Base*, int);
 BaseVF vf = *(BaseVF*)*(int*)arg_0;
 vf(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x10d88
class Base {
};

extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11af0;
extern Base g_11b08;

void test_cpp_virtual_func()
{
 unsigned int v5; // r3
 unsigned int v6; // r2
 unsigned int v7; // r1
 Base v8; // r0
 unsigned int v1; // [bp-0x18]
 Base v2; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 *((class Base *)&v1) = v8;
 v4 = __glibc___stack_chk_guard;
 v1 = 72432;
 *((unsigned int *)&v2) = 72456;
 v3 = 3;
 call_virtual_func(&v1, 5);
 call_virtual_func(&v2, 5);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10e08
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10e10
void test_cpp_operator_overload()
{
 return;
}


// Template function declarations
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T* a, T* b);

// Template class declarations
template<typename T> class Container;

// Define Container<int> template class
template<typename T>
class Container {
public:
    T data[10];
    unsigned int size;
    
    Container();
    void push(T value);
    T get(unsigned int index);
    unsigned int getSize();
};

// Explicit instantiations
template<>
Container<int>::Container() { size = 0; }

template<>
void Container<int>::push(int value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<>
int Container<int>::get(unsigned int index) {
    if (index < size) return data[index];
    return 0;
}

template<>
unsigned int Container<int>::getSize() { return size; }

// Define Container<double> template class
template<>
class Container<double> {
public:
    double data[10];
    unsigned int size;
    
    Container<double>();
    void push(double value);
    double get(unsigned int index);
    unsigned int getSize();
};

template<>
Container<double>::Container<double>() { size = 0; }

template<>
void Container<double>::push(double value) {
    if (size < 10) {
        data[size++] = value;
    }
}

template<>
double Container<double>::get(unsigned int index) {
    if (index < size) return data[index];
    return 0.0;
}

template<>
unsigned int Container<double>::getSize() { return size; }

// Function: _Z22test_cpp_template_funcv at 0x10e18
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v6; // r3
 unsigned int v7; // r2
 unsigned int v8; // r1
 unsigned int v9; // r0
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]

 v5 = v6;
 v4 = v7;
 v2 = v8;
 v0 = v9;
 v5 = __glibc___stack_chk_guard;
 (void)template_max<int>(3, 7);
 v10 = template_max<double>(0, 0x40040000, 0, 0x3ff80000);
 v2 = 10;
 v4 = 20;
 template_swap<int>(&v2, &v4);
 (void)v0;
 (void)v10;
 __aeabi_d2iz(v10, v8);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x10ec0
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_class()
{
 unsigned int v4; // lr
 Container<int> container; // Instance for member function calls
 unsigned int v0; // [bp-0x38]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 result = 1;
 v0 = 10;
 container.push(20);
 container.push(30);
 (void)container;
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x10f40
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f48
extern char _ZTI12RTTIDerivedA;
extern char g_11c68;
extern char g_11c7c;

void test_cpp_rtti()
{
 void** p; // r6
 void** ptr; // r5
 unsigned int result; // r0
 char *cur; // r0

 p = (void**)operator new(sizeof(int));
 *(int*)*p = 72808;
 ptr = (void**)operator new(sizeof(int));
 *(int*)*ptr = 72828;
 // RTTI comparison - simplified
 result = 0;
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f9a;
LABEL_10f99:
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f99;
LABEL_10f9a:
 }
 cur = *((int *)((int)(*(p))[4] + 4));
 if (*(cur) == 42)
 cur += 1;
 strlen(cur);
 // Calling function pointers - need to cast properly
 // Fixed function pointer dereferencing
 (void)p;
 (void)ptr;
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x11038
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_smart_ptr()
{
 unsigned int v6; // lr
 unsigned int v7; // r4
 unsigned int v8; // r3
 unsigned int v9; // r2
 unsigned int v10; // r1
 unsigned int v11; // r0
 unsigned int *addr; // r0
 int *ptr; // r0
 unsigned int v0; // [bp-0x18]
 int *v1; // [bp-0x14]
 int *p; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 p = (int*)v9;
 v1 = (int*)v10;
 v0 = v11;
 v3 = __glibc___stack_chk_guard;
 addr = (unsigned int*)operator new(4);
 *(addr) = 200;
 v1 = addr;
 v0 = 0;
 ptr = (int*)operator new[](20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 p = ptr;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_110c4 at 0x110c4
int sub_110c4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
 unsigned int v0; // r0

 __cxa_end_cleanup(v0, a1, a2, a3);
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110ec
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11c20;
extern unsigned int g_11c38;
extern unsigned int g_11c54;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 72736;
 v1 = 72760;
 v2 = 72788;
 v3 = 50;
 thunk_to_DiamondDerived_func(&v2);
 v3 = 100;
 thunk_to_DiamondDerived_func(&v2);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_oo_featuresv at 0x1117c
extern char g_11866;
extern char g_1188a;
extern char g_118a8;
extern char g_118c4;
extern char g_118e0;
extern char g_118fc;
extern char g_11919;
extern char g_11935;
extern char g_11951;
extern char g_1196d;
extern char g_11989;
extern char g_119a6;
extern char g_119c3;

void test_cpp_oo_features()
{
 puts(0x11866);
 __printf_chk(1, 0x1188a, (unsigned int)test_cpp_member_func());
 __printf_chk(1, 0x118a8, (unsigned int)test_cpp_constructor());
 __printf_chk(1, 0x118c4, (unsigned int)test_cpp_virtual_func());
 __printf_chk(1, 0x118e0, (unsigned int)test_cpp_multiple_inheritance());
 __printf_chk(1, 0x118fc, (unsigned int)test_cpp_diamond_inheritance());
 __printf_chk(1, 0x11919, (unsigned int)test_cpp_operator_overload());
 __printf_chk(1, 0x11935, (unsigned int)test_cpp_template_func());
 __printf_chk(1, 0x11951, (unsigned int)test_cpp_template_class());
 __printf_chk(1, 0x1196d, (unsigned int)test_cpp_lambda());
 __printf_chk(1, 0x11989, (unsigned int)test_cpp_exception());
 __printf_chk(1, 0x119a6, (unsigned int)test_cpp_smart_ptr());
 __printf_chk(1, 0x119c3, (unsigned int)test_cpp_rtti());
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x112b0
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x112b8
void Base::getName()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x112c4
int Base::~Base(void* ptr)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x112c8
void Derived::virtual_func(void* ptr, int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x112d4
void Derived::getName(void* ptr)
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x112e0
void MultiDerived::funcA(void* self)
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x112e8
void MultiDerived::funcB(void* self)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x112f0
unsigned int non-virtual thunk to MultiDerived::funcB()()
{
 return 40;
}


// Function: _ZN11VirtualBase4funcEv at 0x112f8
void VirtualBase::func(void* ptr)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x11300
int VirtualBase::~VirtualBase(void* ptr)
{
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x11304
void MiddleA::func(void* ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1131c
int thunk_to_MiddleA_func(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
 return (unsigned int)MiddleA::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZN7MiddleB4funcEv at 0x11330
void MiddleB::func(void* ptr)
{
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11348
int thunk_to_MiddleB_func(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
 return (unsigned int)MiddleB::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x1135c
void DiamondDerived::func(void* ptr)
{
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11374
int thunk_to_DiamondDerived_func(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
 return (unsigned int)DiamondDerived::func((char *)a0 + (*(a0))[12]);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11388
int non-virtual thunk_to_DiamondDerived_func(void* a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)DiamondDerived::func(a0 - 8);
 return (unsigned int)DiamondDerived::func(a0 - 8);
}


// Function: _ZN7MiddleAD1Ev at 0x11390
extern char g_11b2c;
extern char g_11b48;

int MiddleA::~MiddleA(void* ptr)
{
 *((unsigned int *)ptr) = 72492;
 *((unsigned int *)&ptr[8]) = 72520;
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x113a8
extern char g_11b2c;
extern char g_11b48;

void* * thunk to MiddleA::~MiddleA()(void* *a0)
{
 unsigned int v0; // r1

 v0 = (int)(*(a0))[16];
 *((unsigned int *)((char *)a0 + (*(a0))[16])) = 72492;
 *((unsigned int *)(8 + (char *)a0 + v0)) = 72520;
 return (char *)a0 + v0;
}


// Function: _ZN7MiddleBD1Ev at 0x113d0
extern char g_11b68;
extern char g_11b84;

int MiddleB::~MiddleB(void* ptr)
{
 *((unsigned int *)ptr) = 72552;
 *((unsigned int *)&ptr[8]) = 72580;
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x113e8
extern char g_11b68;
extern char g_11b84;

void* * thunk to MiddleB::~MiddleB()(void* *a0)
{
 unsigned int v0; // r1

 v0 = (int)(*(a0))[16];
 *((unsigned int *)((char *)a0 + (*(a0))[16])) = 72552;
 *((unsigned int *)(8 + (char *)a0 + v0)) = 72580;
 return (char *)a0 + v0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x11410
void RTTIDerivedA::getType(void* ptr);
}
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11418
void RTTIDerivedB::getType(void* ptr);
}
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11420
int RTTIDerivedB::~RTTIDerivedB(void* ptr);
}
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11424
int RTTIDerivedA::~RTTIDerivedA(void* ptr);
}
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11428
int MultiDerived::~MultiDerived(void* ptr);
}
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1142c
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 return a0 - 8;
}


// Function: _ZN7DerivedD2Ev at 0x11434
int Derived::~Derived(void* ptr);
}
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x11438
int Base::~Base(void* ptr);
}
{
 operatordelete(this, 4);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x11450
int Derived::~Derived(void* ptr);
}
{
 operatordelete(this, 8);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11468
int MultiDerived::~MultiDerived(void* ptr);
}
{
 operatordelete(this, 16);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11480
int non-virtual thunk to MultiDerived::~MultiDerived()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x11488
int VirtualBase::~VirtualBase(void* ptr);
}
{
 operatordelete(this, 8);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x114a0
int RTTIDerivedB::~RTTIDerivedB(void* ptr);
}
{
 operatordelete(this, 4);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x114b8
int RTTIDerivedA::~RTTIDerivedA(void* ptr);
}
{
 operatordelete(this, 4);
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x114d0
extern char g_11b2c;
extern char g_11b48;

int MiddleA::~MiddleA(void* ptr)
{
 *((unsigned int *)ptr) = 72492;
 *((unsigned int *)&ptr[8]) = 72520;
 operatordelete(ptr, 16);
 return;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x114fc
int thunk to MiddleA::~MiddleA()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN7MiddleBD0Ev at 0x11510
extern char g_11b68;
extern char g_11b84;

int MiddleB::~MiddleB(void* ptr)
{
 *((unsigned int *)ptr) = 72552;
 *((unsigned int *)&ptr[8]) = 72580;
 operatordelete(ptr, 16);
 return;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x1153c
int thunk to MiddleB::~MiddleB()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN7MiddleAD2Ev at 0x11550
typedef struct struct_0 {
 void* field_0;
 unsigned int field_4;
} struct_0;

int MiddleA::~MiddleA(void* p)
{
 struct_0 *ptr; // r1
 void* v1; // r2

 v1 = ptr->field_0;
 *((void* *)p) = v1;
 *((unsigned int *)((char *)p + v1[12])) = ptr->field_4;
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x11568
typedef struct struct_0 {
 void* field_0;
 unsigned int field_4;
} struct_0;

int MiddleB::~MiddleB(void* p)
{
 struct_0 *ptr; // r1
 void* v1; // r2

 v1 = ptr->field_0;
 *((void* *)p) = v1;
 *((unsigned int *)((char *)p + v1[12])) = ptr->field_4;
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11580
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1158c
double template_max<double>()
{
 unsigned int v6; // lr
 unsigned int v7; // r8
 unsigned int v8; // r7
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v2 = v9;
 v1 = v10;
 v0 = v11;
 result = __aeabi_dcmpgt();
 if (!result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 {
 }
 }
 else
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 {
 }
 }
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x115bc
int template_swap<int>(unsigned int *ptr)
{
 unsigned int v0; // r3
 unsigned int *p; // r1

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x115d0
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x115dc
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // r3
 unsigned int v1; // r2

 index = (int)ptr[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&ptr[40]) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x115f4
int Container<int>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return 0;
 if (arg_0 >= *((unsigned int*)((char*)this + 40)))
 return 0;
 return *((int *)((char *)this + 4 * arg_0));
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11618
unsigned int Container<int>::getSize(void* ptr)
{
 return *((unsigned int*)((char*)ptr + 40));
}


// Function: _ZN9ContainerIdEC1Ev at 0x11620
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x1162c
void Container<double>::push(void* p)
{
 unsigned int v0; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 v0 = (int)p[80];
 if (9 >= v0)
 goto LABEL_11638;
 return;
LABEL_11638:
 *((unsigned int *)&p[80]) = v0 + 1;
 *((unsigned int *)((char *)p + 8 * v0)) = v2;
 *((unsigned int *)(4 + (char *)p + 8 * v0)) = v3;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x1164c
void Container<double>::get(void* this, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11678
void Container<double>::getSize(void* ptr);
}
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x11680
int std::unique_ptr<int, std::default_delete<int>>::~unique_ptr(void* ptr);
}
{
 if (*((int *)this))
 operatordelete(*((int *)this), 4);
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x116a4
int std::unique_ptr<int[], std::default_delete<int[]>>::~unique_ptr(void* ptr);
}
{
 if (*((int *)this))
 operatordelete[](*((int *)this));
 return;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x116c4
extern void g_11c20;
extern char g_11c38;
extern char g_11c54;

int DiamondDerived::~DiamondDerived(void* ptr)
{
 void* v0; // r3
 unsigned int result; // r1

 v0 = 72736;
 *((unsigned int *)ptr) = 72736;
 if (result)
 v0 = 0x10;
 *((unsigned int *)((char *)ptr + v0[12])) = 72788;
 *((unsigned int *)&ptr[8]) = 72760;
 if (result)
 return;
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11748
int DiamondDerived::~DiamondDerived(void* ptr);
}
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11754
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1175c
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11770
int DiamondDerived::~DiamondDerived(void* ptr);
}
{
 operatordelete(this, 24);
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11790
int non-virtual thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x11798
int thunk to DiamondDerived::~DiamondDerived()(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN14DiamondDerivedD2Ev at 0x117ac
int DiamondDerived::~DiamondDerived(void* ptr);
}
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


