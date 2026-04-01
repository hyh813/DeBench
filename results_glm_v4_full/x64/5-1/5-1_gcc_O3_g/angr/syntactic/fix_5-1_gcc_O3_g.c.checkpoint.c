// Angr Decompilation of 5-1_gcc_O3_g
// Platform: AMD64

#include <string.h>
#include <cxxabi.h>
#include <iostream>

// Forward declarations for C++ runtime functions
extern void* __cxa_begin_catch(void*);
extern void __cxa_end_catch();
extern void* _Unwind_Resume();
extern void* __cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, void*, void*);
extern void __cxa_rethrow();
extern void* operator new(size_t);
extern void operator delete(void*);
extern void __cxa_finalize();
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

/* CRT stub function _init removed by preprocessor */
struct struct_0;

extern struct struct_0 *g_403fe8;

unsigned long long * _init()
{
 struct struct_0 *v1; // rax

 v1 = g_403fe8;
 if (g_403fe8)
 v1 = ((struct struct_0* (*)())g_403fe8)();
 return (unsigned long long *)v1;
}


// Forward declarations for sub_ functions used before definition
void sub_401030();
void sub_401040();
void sub_401050();
void sub_401060();
void sub_401070();
void sub_401080();
void sub_401090();
void sub_4010a0();
void sub_4010b0();
void sub_4010c0();
void sub_4010d0();
void sub_4010e0();
void sub_4010f0();
void sub_401100();
void sub_401110();
void sub_401120();

// Forward declarations for CRT stub functions
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
void frame_dummy();

// Forward declaration for test_cpp_oo_features
void test_cpp_oo_features();

// Forward declaration for test_cpp_member_func
void test_cpp_member_func();

// Forward declaration for main
int main();

// Forward declaration for _GLOBAL__sub_I__Z20test_cpp_member_funcv
void _GLOBAL__sub_I__Z20test_cpp_member_funcv();

// Forward declaration for test_cpp_constructor
void test_cpp_constructor();

// Forward declaration for call_virtual_func
void call_virtual_func(class Base *arg_0, int arg_1);

// Forward declaration for test_cpp_virtual_func
void test_cpp_virtual_func();

// Forward declaration for test_cpp_multiple_inheritance
void test_cpp_multiple_inheritance();

// Forward declaration for test_cpp_diamond_inheritance
void test_cpp_diamond_inheritance();

// Forward declaration for test_cpp_operator_overload
void test_cpp_operator_overload();

// Forward declaration for test_cpp_template_func
void test_cpp_template_func();

// Forward declaration for test_cpp_template_class
void test_cpp_template_class();

// Forward declaration for test_cpp_lambda
void test_cpp_lambda();

// Forward declaration for test_cpp_smart_ptr
void test_cpp_smart_ptr();

// Forward declaration for test_cpp_rtti
void test_cpp_rtti();

// Function: sub_401020 at 0x401020
extern unsigned long long g_403f40;
extern unsigned long long g_403f48;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f40;
 return;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_401020();
 return;
}


// Function: sub_40108f at 0x40108f
void sub_40108f()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_401020();
 return;
}


// Function: sub_40109f at 0x40109f
void sub_40109f()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_401020();
 return;
}


// Function: sub_4010af at 0x4010af
void sub_4010af()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_401020();
 return;
}


// Function: sub_4010bf at 0x4010bf
void sub_4010bf()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_401020();
 return;
}


// Function: sub_4010cf at 0x4010cf
void sub_4010cf()
{
 sub_4010d0();
 return;
}


// Function: sub_4010d0 at 0x4010d0
void sub_4010d0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 10;
 sub_401020();
 return;
}


// Function: sub_4010df at 0x4010df
void sub_4010df()
{
 sub_4010e0();
 return;
}


// Function: sub_4010e0 at 0x4010e0
void sub_4010e0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 11;
 sub_401020();
 return;
}


// Function: sub_4010ef at 0x4010ef
void sub_4010ef()
{
 sub_4010f0();
 return;
}


// Function: sub_4010f0 at 0x4010f0
void sub_4010f0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 12;
 sub_401020();
 return;
}


// Function: sub_4010ff at 0x4010ff
void sub_4010ff()
{
 sub_401100();
 return;
}


// Function: sub_401100 at 0x401100
void sub_401100()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 13;
 sub_401020();
 return;
}


// Function: sub_40110f at 0x40110f
void sub_40110f()
{
 sub_401110();
 return;
}


// Function: sub_401110 at 0x401110
void sub_401110()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 14;
 sub_401020();
 return;
}


// Function: sub_40111f at 0x40111f
void sub_40111f()
{
 sub_401120();
 return;
}


// Function: sub_401120 at 0x401120
void sub_401120()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 15;
 sub_401020();
 return;
}


// Function: sub_40112f at 0x40112f
void sub_40112f()
{
 __cxa_finalize();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401240
extern unsigned long long _ZTIi;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // [bp-0x20]
 unsigned long long v3; // rdx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rcx
 unsigned long long v7; // r8
 unsigned long long v8; // r9
 unsigned long long v10; // [bp-0x28]

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(int*)ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 == 1)
 {
 __cxa_begin_catch((void*)v2);
 __cxa_rethrow();
 __cxa_end_catch();
 }
 if (v3 == 1)
 {
 __cxa_begin_catch(0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 if (v3 == 2)
 {
 __cxa_begin_catch((void*)v10);
 __cxa_end_catch();
 return;
 }
 else if (v3 == 3)
 {
 __cxa_begin_catch(0);
 __cxa_end_catch();
 return;
 }
 }
 _Unwind_Resume(); /* do not return */
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
 main();
 return;
}


// Function: main at 0x401310
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401324 at 0x401324
void sub_401324()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401330
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 // CRT stub: ios_base initialization - no-op for compilation
 __cxa_atexit((void (*)(void*))_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_40135b at 0x40135b
void sub_40135b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 // _start() - CRT stub removed by preprocessor
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401385 at 0x401385
void sub_401385()
{
 // [D] Unsupported jumpkind Ijk_SigTRAP at address 4199301
}


// Function: sub_401386 at 0x401386
void sub_401386()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4013b9 at 0x4013b9
void sub_4013b9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4013f9 at 0x4013f9
void sub_4013f9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401435 at 0x401435
void sub_401435()
{
}


// Function: sub_401439 at 0x401439
void sub_401439()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401449 at 0x401449
void sub_401449()
{
 test_cpp_member_func();
 return;
}


// Forward declarations for template functions


template<typename T>
void template_swap(T* a, T* b);

// Explicit specialization declaration for int
template<>
void template_swap<int>(int* a, int* b);

template<typename T>
T template_max(T a, T b);

template<typename T>
class Container {
private:
    T data[10];
    int count;
public:
    Container();
    void push(T arg_0);
    T get(int arg_0);
    int getSize();
};

// Explicit specializations for Container<double> must come before use
template<>
Container<double>::Container()
{
 this->count = 0;
}

template<>
void Container<double>::push(double arg_0)
{
 if (this->count < 10)
 {
 this->data[this->count] = arg_0;
 this->count++;
 }
}

template<>
double Container<double>::get(int arg_0)
{
 if (arg_0 < 0 || arg_0 >= this->count)
 return 0.0;
 return this->data[arg_0];
}

template<>
int Container<double>::getSize()
{
 return this->count;
}



// Function: _Z20test_cpp_member_funcv at 0x401450
void test_cpp_member_func()
{
 char v0[30]; // [bp-0x34]
 char v1[6]; // [bp-0x16]

 strncpy(v1, "Test", 4);
 strlen(v0);
 return;
}


// Function: sub_4014c5 at 0x4014c5
void sub_4014c5()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4014d0
void test_cpp_constructor()
{
 return;
}


// Function: sub_4014e2 at 0x4014e2
void sub_4014e2(unsigned long a0)
{
 call_virtual_func((Base*)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4014f0
class Base {
public:
 virtual void virtual_func(int arg_0);
 virtual const char* getName();
 virtual ~Base();
};

class Derived : public Base {
public:
 virtual void virtual_func(int arg_0);
 virtual const char* getName();
 virtual ~Derived();
};

class MultiDerived : public Base {
public:
 void funcA();
 void funcB();
 virtual ~MultiDerived();
};

class MiddleA : virtual public Base {
public:
 virtual void func();
};

class MiddleB : virtual public Base {
public:
 virtual void func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
 virtual void func();
 virtual ~DiamondDerived();
};

class RTTIBase {
public:
 virtual const char* getType();
 virtual ~RTTIBase();
};

class RTTIDerivedA : public RTTIBase {
public:
 virtual const char* getType();
 virtual ~RTTIDerivedA();
};

class RTTIDerivedB : public RTTIBase {
public:
 virtual const char* getType();
 virtual ~RTTIDerivedB();
};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: sub_4014f9 at 0x4014f9
void sub_4014f9()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401500
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_40150a at 0x40150a
void sub_40150a()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401510
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_40151a at 0x40151a
void sub_40151a()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401520
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_40152a at 0x40152a
void sub_40152a()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401530
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_40153a at 0x40153a
void sub_40153a()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401540
void test_cpp_template_func()
{
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9
 unsigned long long v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 template_max<int>(3, 7);
 template_max<double>(3.0, 7.0);
 v1 = 10;
 v0 = 0x4004000000000000;
 v2 = 20;
 template_swap<int>((int*)&v1, (int*)&v2);
 return;
}


// Function: sub_4015d3 at 0x4015d3
void sub_4015d3()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4015e0
void test_cpp_template_class()
{
 return;
}


// Function: sub_4015ea at 0x4015ea
void sub_4015ea()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4015f0
void test_cpp_lambda()
{
 return;
}


// Function: sub_4015fa at 0x4015fa
void sub_4015fa()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401600
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_40160a at 0x40160a
void sub_40160a()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401610
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_403c70;
extern char g_403c98;

void test_cpp_rtti()
{
 void* *ptr; // r13
 struct_2 **v2; // rax
 void* v3; // r15
 struct_2 **p; // rbp
 char *v5; // r12

 ptr = (void**)operator new(8);
 *(ptr) = &g_403c70;
 v2 = (struct_2 **)operator new(8);
 v3 = *(ptr);
 p = v2;
 *(p) = (struct_2 *)&g_403c98;
 v5 = *((char **)((long long)v3 + 8));
 if (v5 != "12RTTIDerivedA" && *(v5) != 42)
 strcmp(v5, "12RTTIDerivedA");
 strlen(&v5[*(v5) == 42]);
 ((void (*)(void*))v3)(ptr);
 (*(p))->field_8;
 return;
}


// Function: sub_401748 at 0x401748
void sub_401748()
{
}


// Function: sub_40175d at 0x40175d
void sub_40175d()
{
}


// Function: sub_401768 at 0x401768
void sub_401768()
{
}


// Function: _Z20test_cpp_oo_featuresv at 0x401780
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_402018;
extern char g_40203c;
extern char g_40205a;
extern char g_402076;
extern char g_402092;
extern char g_4020ae;
extern char g_4020cb;
extern char g_4020e7;
extern char g_402103;
extern char g_40211f;
extern char g_40213b;
extern char g_402158;
extern char g_402175;

void test_cpp_oo_features()
{
 unsigned int v7; // eax
 unsigned long long v8; // rdi
 unsigned long long v9; // rsi
 unsigned long long v10; // rdx
 unsigned long long v11; // rcx
 unsigned long long v12; // r8
 unsigned long long v13; // r9
 unsigned long long v0; // [bp-0x50]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 char v3; // [bp-0x34]
 char v4; // [bp-0x2c]

 puts(&g_402018);
 strncpy(&v3, "Test", 4);
 memset(&v4, 0, 24);
 __printf_chk(1, &g_40203c, (unsigned int)strlen(&v3) + 4700);
 __printf_chk(1, &g_40205a, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 __printf_chk(1, &g_402076, 42);
 __printf_chk(1, &g_402092, 71);
 __printf_chk(1, &g_4020ae, 650);
 __printf_chk(1, &g_4020cb, 22);
 v7 = template_max<int>(3, 7);
 template_max<double>(3.0, 7.0);
 v1 = 10;
 v0 = 0x4004000000000000;
 v2 = 20;
 template_swap<int>((int*)&v1, (int*)&v2);
 __printf_chk(1, &g_4020e7, (unsigned int)v0 + v7 + v1 + v2);
 __printf_chk(1, &g_402103, 16);
 __printf_chk(1, &g_40211f, 85);
 test_cpp_exception();
 __printf_chk(1, &g_402158, 703);
 test_cpp_rtti();
 return;
}


// Function: sub_401984 at 0x401984
void sub_401984(unsigned long a0, unsigned long a1)
{
 // Base::virtual_func called with parameters - stub
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401990
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: sub_401998 at 0x401998
void sub_401998()
{
 // Base::getName called without object - stub
 return;
}


// Function: _ZNK4Base7getNameEv at 0x4019a0
const char* Base::getName()
{
 return 0;
}


// Function: sub_4019ac at 0x4019ac
void sub_4019ac()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x4019b0
Base::~Base()
{
}


// Function: sub_4019b5 at 0x4019b5
void sub_4019b5(unsigned long a0, unsigned long a1)
{
 Derived obj;
 obj.virtual_func(0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4019c0
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: sub_4019cb at 0x4019cb
void sub_4019cb()
{
 Derived obj;
 obj.getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x4019d0
const char* Derived::getName()
{
 return 0;
}


// Function: sub_4019dc at 0x4019dc
void sub_4019dc()
{
 MultiDerived obj;
 obj.funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4019e0
void MultiDerived::funcA()
{
}


// Function: sub_4019ea at 0x4019ea
void sub_4019ea()
{
 MultiDerived obj;
 obj.funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4019f0
void MultiDerived::funcB()
{
}


// Forward declaration for non_virtual_thunk_to_MultiDerived_funcB
unsigned long long non_virtual_thunk_to_MultiDerived_funcB();

// Forward declaration for non_virtual_thunk_to_DiamondDerived_func
int non_virtual_thunk_to_DiamondDerived_func(void* a0);

// Function: sub_4019fa at 0x4019fa
void sub_4019fa()
{
 non_virtual_thunk_to_MultiDerived_funcB();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401a00
unsigned long long non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: sub_401a0a at 0x401a0a
void sub_401a0a(unsigned long a0)
{
 MiddleA obj;
 obj.func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401a10
void MiddleA::func()
{
}


// Function: sub_401a25 at 0x401a25
void sub_401a25(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401a30
int thunk_to_MiddleA_func(void* *a0)
{
 char* v1; // rdi

 v1 = (char *)a0 + ((unsigned long long*)a0)[3];
 return *((int *)(8 + v1 + ((unsigned long long*)v1)[3])) + 150;
}


// Function: sub_401a4c at 0x401a4c
void sub_401a4c(unsigned long a0)
{
 MiddleB obj;
 obj.func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401a50
void MiddleB::func()
{
}


// Function: sub_401a65 at 0x401a65
void sub_401a65(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401a70
int thunk_to_MiddleB_func(void* *a0)
{
 char* v1; // rdi

 v1 = (char *)a0 + ((unsigned long long*)a0)[3];
 return *((int *)(8 + v1 + ((unsigned long long*)v1)[3])) + 200;
}


// Function: sub_401a8c at 0x401a8c
void sub_401a8c(unsigned long a0)
{
 DiamondDerived obj;
 obj.func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401a90
void DiamondDerived::func()
{
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401ab0
int thunk_to_DiamondDerived_func(void* *a0)
{
 char* v1; // rdi

 v1 = (char *)a0 + ((unsigned long long*)a0)[3];
 return *((int *)(8 + v1 + ((unsigned long long*)v1)[3])) + 250;
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned long a0)
{
 non_virtual_thunk_to_DiamondDerived_func((void*)a0);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401ad0
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 char* p = (char*)a0;
 unsigned long long* vtbl_ptr = (unsigned long long*)(*(unsigned long long*)((unsigned long long)p[16] - 24));
 return *((int*)(-8 + p + *vtbl_ptr)) + 250;
}


// Function: sub_401ae6 at 0x401ae6
void sub_401ae6()
{
 RTTIDerivedA obj;
 obj.getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401af0
const char* RTTIDerivedA::getType()
{
 return 0;
}


// Function: sub_401afa at 0x401afa
void sub_401afa()
{
 RTTIDerivedB obj;
 obj.getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401b00
const char* RTTIDerivedB::getType()
{
 return 0;
}


// Function: sub_401b0a at 0x401b0a
void sub_401b0a()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401b10
RTTIDerivedB::~RTTIDerivedB()
{
}


// Function: sub_401b15 at 0x401b15
void sub_401b15()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401b20
RTTIDerivedA::~RTTIDerivedA()
{
}


// Function: sub_401b25 at 0x401b25
void sub_401b25()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401b30
DiamondDerived::~DiamondDerived()
{
}


// Function: sub_401b35 at 0x401b35
void sub_401b35()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401b40
void thunk_to_DiamondDerived_destructor()
{
 return;
}


// Function: sub_401b45 at 0x401b45
void sub_401b45()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401b50
void non_virtual_thunk_to_DiamondDerived_destructor()
{
 return;
}


// Function: sub_401b55 at 0x401b55
void sub_401b55()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401b60
MultiDerived::~MultiDerived()
{
}


// Function: sub_401b65 at 0x401b65
void sub_401b65()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401b70
void non_virtual_thunk_to_MultiDerived_destructor()
{
 return;
}


// Function: sub_401b75 at 0x401b75
void sub_401b75()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401b80
Derived::~Derived()
{
}


// Function: sub_401b85 at 0x401b85
void sub_401b85()
{
 return;
}


// Function: sub_401b9e at 0x401b9e
void sub_401b9e()
{
 return;
}


// Function: sub_401bae at 0x401bae
void sub_401bae()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401bb0
// Deleting destructor handled by non_virtual_thunk



// Function: sub_401bbe at 0x401bbe
void sub_401bbe(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401bc0
void non_virtual_thunk_to_MultiDerived_destructor(void* a0)
{
 operator delete ((char*)a0 - 16);
}


// Function: sub_401bd2 at 0x401bd2
void sub_401bd2()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401be0
// Deleting destructor stub



// Function: sub_401bee at 0x401bee
void sub_401bee()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401bf0
// Deleting destructor stub



// Function: sub_401bfe at 0x401bfe
void sub_401bfe()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401c00
// Deleting destructor handled by virtual_thunk



// Function: sub_401c0e at 0x401c0e
void sub_401c0e(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x401c10
void virtual_thunk_to_DiamondDerived_deleting_destructor(void** a0)
{
 operator delete ((char*)a0 + ((unsigned long long*)a0)[4]);
}


// Function: sub_401c25 at 0x401c25
void sub_401c25(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x401c30
void non_virtual_thunk_to_DiamondDerived_destructor(void* a0)
{
 operator delete ((char*)a0 - 16);
}


// Function: sub_401c42 at 0x401c42
void sub_401c42(unsigned long a0, unsigned long a1)
{
 (void)template_max((long long)a0, (long long)a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401c50
template<typename T>
T template_max(T arg_0, T arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401c5c at 0x401c5c
void sub_401c5c()
{
 (void)template_max(0.0, 1.0);
 return;
}





// Function: sub_401c69 at 0x401c69
void sub_401c69(unsigned long a0, unsigned long a1)
{
 int* p1 = (int*)a0;
 int* p2 = (int*)a1;
 template_swap(p1, p2);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401c70
template<typename T>
void template_swap(T* a, T* b)
{
 T temp = *a;
 *a = *b;
 *b = temp;
}

template<>
void template_swap(int* a, int* b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}


// Function: sub_401c7d at 0x401c7d
void sub_401c7d(unsigned long a0)
{
 Container<int> obj;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401c80
template<typename T>
Container<T>::Container()
{
 this->count = 0;
}


// Function: sub_401c8c at 0x401c8c
void sub_401c8c(unsigned long a0)
{
 Container<int> obj;
 obj.push((int)a0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401c90
template<typename T>
void Container<T>::push(T arg_0)
{
 if (this->count < 10)
 {
 this->data[this->count] = arg_0;
 this->count++;
 }
}


// Function: sub_401ca7 at 0x401ca7
void sub_401ca7(unsigned long a0, unsigned long a1)
{
 Container<int> obj;
 obj.get((int)a0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401cb0
template<typename T>
T Container<T>::get(int arg_0)
{
 if (arg_0 < 0 || arg_0 >= this->count)
 return 0;
 return this->data[arg_0];
}


// Function: sub_401cc7 at 0x401cc7
void sub_401cc7(unsigned long a0)
{
 Container<int> obj;
 obj.getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401cd0
template<typename T>
int Container<T>::getSize()
{
 return this->count;
}


// Function: sub_401cd8 at 0x401cd8
void sub_401cd8(unsigned long a0)
{
 Container<double> obj;
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401ce0
// Uses explicit specialization defined above


// Function: sub_401cec at 0x401cec
void sub_401cec(unsigned long a0)
{
 Container<double> obj;
 obj.push(3.14);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401cf0
// Uses explicit specialization defined above


// Function: sub_401d09 at 0x401d09
void sub_401d09(unsigned long a0, unsigned long a1)
{
 Container<double> obj;
 obj.get((int)a0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401d10
// Uses explicit specialization defined above


// Function: sub_401d22 at 0x401d22
void sub_401d22()
{
}


// Function: sub_401d31 at 0x401d31
void sub_401d31(unsigned long a0)
{
 Container<double> obj;
 obj.getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401d40
// Uses explicit specialization defined above


/* CRT stub function _fini removed by preprocessor */


