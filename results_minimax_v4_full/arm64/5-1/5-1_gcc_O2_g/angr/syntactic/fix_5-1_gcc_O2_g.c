// Angr Decompilation of 5-1_gcc_O2_g
// Platform: AARCH64

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declarations for classes */
struct Base { virtual void virtual_func(void* this, int); virtual void getName(void* this); virtual ~Base(); };
struct Derived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Full definitions for classes that are used */
struct Derived { void virtual_func(int); void getName(); virtual ~Derived(); };
struct MultiDerived { void funcA(); void funcB(); virtual ~MultiDerived(); };
struct MiddleA { void func(); };
struct MiddleB { void func(); };
struct DiamondDerived { void func(); virtual ~DiamondDerived(); };
struct RTTIDerivedA { void getType(); virtual ~RTTIDerivedA(); };
struct RTTIDerivedB { void getType(); virtual ~RTTIDerivedB(); };

/* Template class forward declarations - using C-compatible approach */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward declarations for C++ exception handling functions */
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, void*, void*, unsigned long);
void _Unwind_Resume(void*);
unsigned long long __cxa_atexit(void*, void*, void*);

/* Forward declarations for functions used */
unsigned int main(void);
void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void);

/* Forward declarations for C++ exception handling functions */
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, void*, void*, unsigned long);
void _Unwind_Resume(void*);
unsigned long long __cxa_atexit(void*, void*, void*);

/* Full definitions for Derived and MultiDerived */
struct Derived { void virtual_func(int); void getName(); virtual ~Derived(); };
struct MultiDerived { void funcA(); void funcB(); virtual ~MultiDerived(); };

/* Template class forward declarations */
template<typename T>
class Container;

template<>
class Container<int>;

template<>
class Container<double>;

/* Full template class definitions */
template<>
class Container<int> {
public:
    void* ptr;
    Container(void* p) : ptr(p) {}
    Container() {}
    void push(int val);
    int get(int idx);
    int getSize();
};

template<>
class Container<double> {
public:
    void* ptr;
    Container(void* p) : ptr(p) {}
    Container() {}
    void push(double val);
    double get(int idx);
    int getSize();
};

/* Template function declarations */
int template_max(int arg_0, int arg_1);
double template_max(double arg_0, double arg_1);
void template_swap(int *ptr, unsigned int val1, unsigned int val2);

/* CRT stub function _init removed by preprocessor */

/* C++ exception handling functions */
extern "C" {
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, void*, void*, unsigned long);
void _Unwind_Resume(void*);
unsigned long long __cxa_atexit(void*, void*, void*);
}

void abort(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void* frame_dummy(void);
void __stack_chk_fail(void);
int puts(const char*);
int strncpy(char*, const char*, unsigned long);
unsigned long strlen(const char*);
int __printf_chk(int, const char*, ...);
void* operator new(unsigned long);
void operator delete(void*, unsigned long);

/* Forward declarations for classes used in functions */
struct Derived;
struct MultiDerived;
struct Base;

/* Template class forward declarations */
template<typename T> class Container;

/* Forward declarations for functions used */
void test_cpp_oo_features(void);
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_exception(void);
void call_virtual_func(void);
long long template_max(int, int);
long long template_max(double, double);
void template_swap(int*, unsigned int, unsigned int);

/* std namespace for C++ iostream initialization */
namespace std { }
using namespace std;



// Function: __dollar_x at 0x400eb0
extern unsigned long long g_412f00;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_412f00;
}


// Function: sub_400ec4 at 0x400ec4
int sub_400ec4()
{
 char *v0; // x0

 return puts(v0);
}


// Function: _Z18test_cpp_exceptionv at 0x401040
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0, 42);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_401114 at 0x401114
void sub_401114()
{
 main();
 return;
}


// Function: main at 0x401120
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401138 at 0x401138
void sub_401138()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401140
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std::ios_base::Init::Init(&_ZStL8__ioinit);
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011b0 at 0x4011b0
void sub_4011b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4011c8 at 0x4011c8
void sub_4011c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40123c at 0x40123c
void sub_40123c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401288 at 0x401288
long long sub_401288()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401294 at 0x401294
void sub_401294()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4012a0
extern char __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x40]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 result = 0;
 strlen(strncpy(&v1, "Test", 31));
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401310
void test_cpp_constructor()
{
 return;
}


// Function: sub_401328 at 0x401328
long long sub_401328(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = call_virtual_func();
 return call_virtual_func();
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
void call_virtual_func(struct Base *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401340
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_401348 at 0x401348
void sub_401348()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401350
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_401358 at 0x401358
void sub_401358()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401360
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401370
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401378 at 0x401378
void sub_401378()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401380
extern char __stack_chk_guard;

void test_cpp_template_func()
{
 unsigned long long v6; // d8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v4 = *((long long *)&__stack_chk_guard);
 template_max<double>(template_max<int>(3, 7, &__stack_chk_guard, 0), 7, &__stack_chk_guard, 0);
 v2 = 10;
 v3 = 20;
 template_swap<int>(&v2, &v3, 20, 10);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401428 at 0x401428
void sub_401428()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401440
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401448 at 0x401448
void sub_401448()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401450
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_412c28;
extern char g_412c50;

void test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 **p; // x20
 void* v4; // x24
 char *addr; // x23
 char *ptr3; // x0
 char *v0; // [bp-0x50]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operatornew(8);
 *(ptr) = &g_412c28;
 p = operatornew(8);
 v4 = *(ptr);
 addr = *((long long *)((long long)v4[8] + 8));
 *(p) = &g_412c50;
 if (*(addr) != 42)
 ptr3 = addr;
 else
 ptr3 = addr + 1;
 strlen(ptr3);
 (long long)v4[8](ptr, (long long)v4[8]);
 *(p)->field_8(p, *(p)->field_8);
 return;
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015b0
extern char __stack_chk_guard;
extern char g_401b10;
extern char g_401b38;
extern char g_401b58;
extern char g_401b78;
extern char g_401b98;
extern char g_401bb8;
extern char g_401bd8;
extern char g_401bf8;
extern char g_401c18;
extern char g_401c38;
extern char g_401c58;
extern char g_401c78;
extern char g_401c98;

void test_cpp_oo_features()
{
 unsigned int v11; // w0
 char *v0; // [bp-0x50]
 char v1; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 puts(&g_401b10);
 strncpy(&v1, "Test", 31);
 result = 0;
 __printf_chk(1, &g_401b38, strlen(&v1) + 4700);
 __printf_chk(1, &g_401b58, (unsigned long long)test_cpp_constructor() & 4294967295);
 __printf_chk(1, &g_401b78, 42);
 __printf_chk(1, &g_401b98, 71);
 __printf_chk(1, &g_401bb8, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 __printf_chk(1, &g_401bd8, 22);
 __printf_chk(1, &g_401bf8, (unsigned long long)test_cpp_template_func() & 4294967295);
 __printf_chk(1, &g_401c18, 16);
 __printf_chk(1, &g_401c38, 85);
 __printf_chk(1, &g_401c58, (unsigned long long)test_cpp_exception() & 4294967295);
 __printf_chk(1, &g_401c78, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 v11 = (unsigned long long)test_cpp_rtti();
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, &g_401c98, v11);
 return;
}


// Function: sub_401734 at 0x401734
void sub_401734(unsigned long a0, unsigned long a1)
{
 struct Base b; b.virtual_func(0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401740
void Base::virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_401748 at 0x401748
void sub_401748()
{
 Base::getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401750
void Base::getName(void* this)
{
 return;
}


// Function: sub_40175c at 0x40175c
long long sub_40175c()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN4BaseD1Ev at 0x401760
int Base::~Base(void* this)
{
 return;
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0, unsigned long a1)
{
 Derived::virtual_func();
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401770
void Derived::virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_40177c at 0x40177c
void sub_40177c()
{
 Derived::getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401780
void Derived::getName(void* this)
{
 return;
}


// Function: sub_40178c at 0x40178c
void sub_40178c()
{
 MultiDerived::funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401790
void MultiDerived::funcA(void* this)
{
 return;
}


// Function: sub_401798 at 0x401798
void sub_401798()
{
 MultiDerived::funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4017a0
void MultiDerived::funcB(void* this)
{
 return;
}


// Function: sub_4017a8 at 0x4017a8
void sub_4017a8()
{
 non-virtual thunk_to_MultiDerived::funcB()();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4017b0
unsigned long long MultiDerived_funcB_thunk()
{
 return 40;
}


// Function: sub_4017a8 at 0x4017a8
void sub_4017a8()
{
 MultiDerived_funcB_thunk();
 return;
}


// Function: sub_4017b8 at 0x4017b8
void sub_4017b8(unsigned long a0)
{
 MiddleA::func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4017c0
void MiddleA::func(void* this)
{
 return;
}


// Function: sub_4017d8 at 0x4017d8
void sub_4017d8(unsigned long a0)
{
 MiddleA_func_thunk();
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x4017e0
int MiddleA_func_thunk_impl(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 150;
}


// Function: sub_401804 at 0x401804
void sub_401804(unsigned long a0)
{
 MiddleB::func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401810
void MiddleB::func(void* this)
{
 return;
}


// Function: sub_401828 at 0x401828
void sub_401828(unsigned long a0)
{
 MiddleB_func_thunk();
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401830
int MiddleB_func_thunk(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 200;
}


// Function: sub_401854 at 0x401854
void sub_401854(unsigned long a0)
{
 DiamondDerived::func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401860
void DiamondDerived::func(void* this)
{
 return;
}


// Function: sub_401878 at 0x401878
void sub_401878(unsigned long a0)
{
 thunk_to_DiamondDerived_func();
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401880
int thunk_to_DiamondDerived_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + (*(a0))[24] + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4018a4
int DiamondDerived_func_thunk_nonvirt(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24)))) + 250;
}


// Function: sub_4018bc at 0x4018bc
void sub_4018bc()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4018c0
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: sub_4018c8 at 0x4018c8
void sub_4018c8()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4018d0
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: sub_4018d8 at 0x4018d8
long long sub_4018d8()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x4018e0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 return;
}


// Function: sub_4018e4 at 0x4018e4
long long sub_4018e4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x4018f0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 return;
}


// Function: sub_4018f4 at 0x4018f4
long long sub_4018f4()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401900
int DiamondDerived::~DiamondDerived(void* this)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401904
long long thunk_to_DiamondDerived::~DiamondDerived()()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401908 at 0x401908
long long sub_401908()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401910
long long non-virtual thunk_to_DiamondDerived::~DiamondDerived()()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401914 at 0x401914
long long sub_401914()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401920
int MultiDerived::~MultiDerived(void* this)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401924
long long non-virtual thunk_to_MultiDerived::~MultiDerived()()
{
 unsigned long v0; // x0

 return v0;
}


// Function: sub_401928 at 0x401928
long long sub_401928()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN7DerivedD2Ev at 0x401930
int Derived::~Derived(void* this)
{
 return;
}


// Function: sub_401934 at 0x401934
long long sub_401934()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN4BaseD0Ev at 0x401940
int Base::~Base(void* this)
{
 operatordelete(this, 8);
 return;
}


// Function: sub_401948 at 0x401948
long long sub_401948()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN7DerivedD0Ev at 0x401950
int Derived::~Derived(void* this)
{
 operatordelete(this, 16);
 return;
}


// Function: sub_401958 at 0x401958
long long sub_401958()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401960
int MultiDerived::~MultiDerived(void* this)
{
 operatordelete(this, 32);
 return;
}


// Function: sub_401968 at 0x401968
void sub_401968(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401970
int non-virtual thunk_to_MultiDerived::~MultiDerived()(void* a0)
{
 return operatordelete(a0 - 16, 32);
}


// Function: sub_40197c at 0x40197c
long long sub_40197c()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401980
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operatordelete(this, 8);
 return;
}


// Function: sub_401988 at 0x401988
long long sub_401988()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401990
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operatordelete(this, 8);
 return;
}


// Function: sub_401998 at 0x401998
long long sub_401998()
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4019a0
int DiamondDerived::~DiamondDerived(void* this)
{
 operatordelete(this, 48);
 return;
}


// Function: sub_4019a8 at 0x4019a8
void sub_4019a8(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4019b0
int thunk_to_DiamondDerived::~DiamondDerived()(void* *a0)
{
 return operatordelete((char *)a0 + (*(a0))[32], 48);
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x4019c4
int non-virtual thunk_to_DiamondDerived::~DiamondDerived()(void* a0)
{
 return operatordelete(a0 - 16, 48);
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4019d0
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_4019dc at 0x4019dc
long long sub_4019dc()
{
 unsigned long long v0; // x0

 v0 = template_max<double>();
 return template_max<double>();
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4019e0
double template_max<double>(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 return v3;
}


// Function: sub_4019ec at 0x4019ec
long long sub_4019ec(unsigned long a0, unsigned long a1)
{
 unsigned long v0; // x0

 v0 = template_swap<int>();
 return template_swap<int>();
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4019f0
long long template_swap<int>(unsigned int *ptr)
{
 unsigned int v0; // w2
 unsigned int *p; // x1

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return ptr;
}


// Function: sub_401a04 at 0x401a04
long long sub_401a04(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = Container<int>::Container();
 return Container<int>::Container();
}


// Function: _ZN9ContainerIiEC2Ev at 0x401a10
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: sub_401a18 at 0x401a18
long long sub_401a18(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = Container<int>::push();
 return Container<int>::push();
}


// Function: _ZN9ContainerIiE4pushEi at 0x401a20
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int v0; // w2

 v0 = (int)ptr[40];
 if (9 >= v0)
 {
 *((unsigned int *)&ptr[40]) = v0 + 1;
 *((int *)((char *)ptr + 4 * v0)) = arg_0;
 }
 return;
}


// Function: sub_401a3c at 0x401a3c
void sub_401a3c(unsigned long a0, unsigned long a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401a40
void Container<int>::get(void* this, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return;
 }
 else if (arg_0 >= (int)this[40])
 {
 return;
 }
 else
 {
 return;
 }
}


// Function: sub_401a68 at 0x401a68
void sub_401a68(unsigned long a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401a70
void Container<int>::getSize(void* this)
{
 return;
}


// Function: sub_401a78 at 0x401a78
long long sub_401a78(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = Container<double>::Container();
 return Container<double>::Container();
}


// Function: _ZN9ContainerIdEC1Ev at 0x401a80
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: sub_401a88 at 0x401a88
long long sub_401a88(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = Container<double>::push();
 return Container<double>::push();
}


// Function: _ZN9ContainerIdE4pushEd at 0x401a90
void Container<double>::push(void* ptr, double arg_0)
{
 unsigned int v0; // w1
 unsigned long v1; // d0

 v0 = (int)ptr[80];
 if (9 >= v0)
 {
 *((unsigned int *)&ptr[80]) = v0 + 1;
 *((unsigned long *)((char *)ptr + 8 * v0)) = v1;
 }
 return;
}


// Function: sub_401aac at 0x401aac
long long sub_401aac(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = Container<double>::get();
 return Container<double>::get();
}


// Function: _ZNK9ContainerIdE3getEi at 0x401ab0
void Container<double>::get(void* this, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return;
 }
 else if (arg_0 >= (int)this[80])
 {
 return;
 }
 else
 {
 return;
 }
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401ad0
void Container<double>::getSize(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


