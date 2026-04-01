// Angr Decompilation of 5-1_gcc_O2_no_g
// Platform: AMD64

#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <cxxabi.h>
#include <unwind.h>
#include <iostream>

// Stub for __printf_chk - minimal implementation for linking
extern "C" int __printf_chk(int flag, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}



/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {} struct_0;

extern struct_0 *g_403fe8;
struct_0 *g_403fe8 = NULL;

typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

typedef struct Base Base;
typedef struct Derived Derived;

class Base {
public:
 virtual void virtual_func(int arg_0);
 virtual void getName();
 virtual ~Base();
};

class Derived : public Base {
public:
 virtual void virtual_func(int arg_0);
 virtual void getName();
 virtual ~Derived();
};

class MultiDerived : public Base {
public:
 virtual void funcA();
 virtual void funcB();
 virtual ~MultiDerived();
};

class MiddleA {
public:
 virtual void func();
};

class MiddleB {
public:
 virtual void func();
};

class DiamondDerived : public virtual MiddleA, public virtual MiddleB {
public:
 virtual void func();
 virtual ~DiamondDerived();
};

class RTTIDerivedA {
public:
 virtual void getType();
 virtual ~RTTIDerivedA();
};

class RTTIDerivedB {
public:
 virtual void getType();
 virtual ~RTTIDerivedB();
};

int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
long long template_swap_int(unsigned int *ptr);
void thunk_to_MiddleA_func(void* *a0);
void Container_int_Constructor(void *this_ptr);
void Container_int_push(void *this_ptr, int arg_0);
void Container_int_get(void *this_ptr, int arg_0);
void Container_int_getSize();
void Container_double_Constructor(void *this_ptr);
void Container_double_push(void *this_ptr, double arg_0);
void Container_double_get(void *this_ptr, int arg_0);
void Container_double_getSize();
void thunk_to_MiddleB_func(void* *a0);
void thunk_to_DiamondDerived_func(void* *a0);
void non_virtual_thunk_to_DiamondDerived_func(void* a0);
void test_cpp_oo_features();
int main();
void test_cpp_constructor();
void call_virtual_func(Base *arg_0, int arg_1);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_smart_ptr();
void test_cpp_rtti();

typedef struct {
 unsigned int count;
 int data[10];
} Container_int;

typedef struct {
 unsigned int count;
 double data[10];
} Container_double;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = ((unsigned long long *(*)())g_403fe8)();
 return v1;
}

void sub_401030(void);
void sub_401040(void);
void sub_401050(void);
void sub_401060(void);
void sub_401070(void);
void sub_401080(void);
void sub_401090(void);
void sub_4010a0(void);
void sub_4010b0(void);
void sub_4010c0(void);
void sub_4010d0(void);
void sub_4010e0(void);
void sub_4010f0(void);
void sub_401100(void);
void sub_401110(void);
void sub_401120(void);

// Function: sub_401020 at 0x401020
unsigned long long g_403f40 = 0;

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
 __cxxabiv1::__cxa_finalize(NULL);
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401240
// Type info definitions - stubbed for linking
// Use local variables to avoid multiple definition conflicts
void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // rax
 unsigned long long v3; // rdx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rcx
 unsigned long long v7; // r8
 unsigned long long v8; // r9
 unsigned long long v10; // rax

 ptr = (unsigned int *)__cxxabiv1::__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxxabiv1::__cxa_throw(ptr, 0, 0);
 if (v3 == 1)
 {
 __cxxabiv1::__cxa_begin_catch((void *)v2);
 __cxxabiv1::__cxa_rethrow();
 __cxxabiv1::__cxa_end_catch();
 }
 if (v3 == 1)
 {
 __cxxabiv1::__cxa_begin_catch(NULL);
 __cxxabiv1::__cxa_end_catch();
 __cxxabiv1::__cxa_throw(__cxxabiv1::__cxa_allocate_exception(1), 0, 0);
 if (v3 == 2)
 {
 __cxxabiv1::__cxa_begin_catch((void *)v10);
 __cxxabiv1::__cxa_end_catch();
 return;
 }
 else if (v3 == 3)
 {
 __cxxabiv1::__cxa_begin_catch(NULL);
 __cxxabiv1::__cxa_end_catch();
 return;
 }
 }
 _Unwind_Resume(NULL); /* do not return */
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
void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void);

// Implementation of std::ios_base::Init destructor
void _ZNSt8ios_base4InitD1Ev()
{
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401330
void _ZNSt8ios_base4InitD1Ev();
extern void* __dso_handle;
char _ZStL8__ioinit;

void _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&_ZStL8__ioinit) std::ios_base::Init();
 __cxxabiv1::__cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_40135b at 0x40135b
void sub_40135b(unsigned long a0, unsigned long a1, unsigned long a2)
{
 /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401385 at 0x401385
void sub_401385()
{
}


// Function: sub_401386 at 0x401386
void sub_401386()
{
 return;
}



// Function: sub_4013b9 at 0x4013b9
void sub_4013b9()
{
 return;
}



// Function: sub_4013f9 at 0x4013f9
void sub_4013f9()
{
 return;
}



// Function: sub_401435 at 0x401435
void sub_401435()
{
}


// Function: sub_401439 at 0x401439
void sub_401439()
{
 return;
}



// Function: sub_401449 at 0x401449
void test_cpp_member_func();

void sub_401449()
{
 test_cpp_member_func();
 return;
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
 call_virtual_func((Base *)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4014f0
void call_virtual_func(Base *arg_0, int arg_1)
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

 template_max_int(3, 7);
 template_max_double(v4, v5);
 v1 = 10;
 v0 = 0x4004000000000000;
 v2 = 20;
 template_swap_int(&v1);
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
char g_403c70 = 0;
char g_403c98 = 0;

void test_cpp_rtti()
{
 void** ptr; // r13
 struct_2 **v2; // rax
 void* v3; // r14
 struct_2 **p; // rbp
 char *v5; // r12

 ptr = (void**)operator new(8);
 *(ptr) = (void *)&g_403c70;
 v2 = (struct_2 **)operator new(8);
 v3 = *(ptr);
 p = v2;
 *(p) = (struct_2 *)&g_403c98;
 v5 = (char *)((*(char ***)v3)[1]);
 if (v5 != (char *)"12RTTIDerivedA" && *(v5) != 42)
 strcmp(v5, "12RTTIDerivedA");
 strlen(&((char *)v5)[*(char *)v5 == 42]);
 return;
}


// Function: sub_401736 at 0x401736
void sub_401736()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401740
const char *g_402018 = "Testing OO features\n";
const char *g_40203c = "String: %s\n";
const char *g_402076 = "Value: %d\n";
const char *g_402092 = "Value: %d\n";
const char *g_4020cb = "Value: %d\n";
const char *g_4020e7 = "";
const char *g_402103 = "Value: %d\n";
const char *g_40211f = "Value: %d\n";
const char *g_40213b = "";
const char *g_402175 = "";

void test_cpp_oo_features()
{
 unsigned int v4; // edi
 char *v5; // rsi
 char v0; // [bp-0x34]
 char v1; // [bp-0x2c]

 puts(g_402018);
 strncpy(&v0, "Test", 4);
 memset(&v1, 0, 24);
 __printf_chk(1, g_40203c, (unsigned int)strlen(&v0) + 4700);
 test_cpp_constructor();
 __printf_chk(v4, v5);
 __printf_chk(1, g_402076, 42);
 __printf_chk(1, g_402092, 71);
 test_cpp_diamond_inheritance();
 __printf_chk(v4, v5);
 __printf_chk(1, g_4020cb, 22);
 test_cpp_template_func();
 __printf_chk(1, g_402103, 16);
 __printf_chk(1, g_40211f, 85);
 test_cpp_exception();
 test_cpp_smart_ptr();
 __printf_chk(v4, v5);
 test_cpp_rtti();
 return;
}


// Function: sub_4018e8 at 0x4018e8
void sub_4018e8(unsigned long a0, unsigned long a1)
{
 ((Base *)a0)->virtual_func((int)a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x4018f0
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: sub_4018f8 at 0x4018f8
void sub_4018f8(unsigned long a0)
{
 ((Base *)a0)->getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401900
void Base::getName()
{
 return;
}


// Function: sub_40190c at 0x40190c
void sub_40190c()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x401910
Base::~Base()
{
 return;
}


// Function: sub_401915 at 0x401915
void sub_401915(unsigned long a0, unsigned long a1)
{
 ((Derived *)a0)->virtual_func((int)a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401920
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: sub_40192b at 0x40192b
void sub_40192b(unsigned long a0)
{
 ((Derived *)a0)->getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401930
void Derived::getName()
{
 return;
}


// Function: _ZN7DerivedD1Ev at 0x401935
Derived::~Derived()
{
 return;
}


// Function: sub_40193c at 0x40193c
void sub_40193c(unsigned long a0)
{
 ((MultiDerived *)a0)->funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401940
void MultiDerived::funcA()
{
 return;
}


// Function: sub_40194a at 0x40194a
void sub_40194a(unsigned long a0)
{
 ((MultiDerived *)a0)->funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401950
void MultiDerived::funcB()
{
 return;
}


// Function: sub_40195a at 0x40195a
void sub_40195a(unsigned long a0)
{
 ((MultiDerived *)a0)->funcB();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x401960
unsigned long long non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: sub_40196a at 0x40196a
void sub_40196a(unsigned long a0)
{
 ((MiddleA *)a0)->func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401970
void MiddleA::func()
{
 return;
}


// Function: sub_401985 at 0x401985
void sub_401985(unsigned long a0)
{
 thunk_to_MiddleA_func((void* *)a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x401990
void thunk_to_MiddleA_func(void* *a0)
{
 void* *v1; // rdi

 v1 = (void* *)((char *)a0 + (*(char **)a0)[24]);
 ((MiddleA *)v1)->func();
}


// Function: sub_4019ac at 0x4019ac
void sub_4019ac(unsigned long a0)
{
 ((MiddleB *)a0)->func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x4019b0
void MiddleB::func()
{
 return;
}


// Function: sub_4019c5 at 0x4019c5
void sub_4019c5(unsigned long a0)
{
 thunk_to_MiddleB_func((void* *)a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x4019d0
void thunk_to_MiddleB_func(void* *a0)
{
 void* *v1; // rdi

 v1 = (void* *)((char *)a0 + (*(char **)a0)[24]);
 ((MiddleB *)v1)->func();
}


// Function: sub_4019ec at 0x4019ec
void sub_4019ec(unsigned long a0)
{
 ((DiamondDerived *)a0)->func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x4019f0
void DiamondDerived::func()
{
 return;
}


// Function: sub_401a05 at 0x401a05
void sub_401a05(unsigned long a0)
{
 thunk_to_DiamondDerived_func((void* *)a0);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401a10
void thunk_to_DiamondDerived_func(void* *a0)
{
 void* *v1; // rdi

 v1 = (void* *)((char *)a0 + (*(char **)a0)[24]);
 ((DiamondDerived *)v1)->func();
}


// Function: sub_401a2c at 0x401a2c
void sub_401a2c(unsigned long a0)
{
 non_virtual_thunk_to_DiamondDerived_func((void *)a0);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x401a30
void non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 ((DiamondDerived *)a0)->func();
}


// Function: sub_401a46 at 0x401a46
void sub_401a46()
{
 RTTIDerivedA obj;
 obj.getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401a50
void RTTIDerivedA::getType()
{
 return;
}


// Function: sub_401a5a at 0x401a5a
void sub_401a5a()
{
 RTTIDerivedB obj;
 obj.getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401a60
void RTTIDerivedB::getType()
{
 return;
}


// Function: sub_401a6a at 0x401a6a
void sub_401a6a()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x401a70
RTTIDerivedB::~RTTIDerivedB()
{
 return;
}


// Function: sub_401a75 at 0x401a75
void sub_401a75()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x401a80
RTTIDerivedA::~RTTIDerivedA()
{
 return;
}


// Function: sub_401a85 at 0x401a85
void sub_401a85()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401a90
DiamondDerived::~DiamondDerived()
{
 return;
}


// Function: sub_401a95 at 0x401a95
void sub_401a95()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401aa0
void thunk_to_DiamondDerived_destructor()
{
 return;
}


// Function: sub_401aa5 at 0x401aa5
void sub_401aa5()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401ab0
void non_virtual_thunk_to_DiamondDerived_destructor()
{
 return;
}


// Function: sub_401ab5 at 0x401ab5
void sub_401ab5()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401ac0
MultiDerived::~MultiDerived()
{
 return;
}


// Function: sub_401ac5 at 0x401ac5
void sub_401ac5()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401ad0
void non_virtual_thunk_to_MultiDerived_destructor()
{
 return;
}


// Function: sub_401ad5 at 0x401ad5
void sub_401ad5()
{
 return;
}


// Function: _ZN7DerivedD2Ev at 0x401ae0
void Derived_destructor(Derived *this_ptr)
{
 return;
}


// Function: sub_401ae5 at 0x401ae5
void sub_401ae5()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401af0
void Base_deleting_destructor(Base *this_ptr)
{
 operator delete(this_ptr);
 return;
}


// Function: sub_401afe at 0x401afe
void sub_401afe()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401b00
void Derived_deleting_destructor(Derived *this_ptr)
{
 free(this_ptr);
 return;
}


// Function: sub_401b0e at 0x401b0e
void sub_401b0e()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401b10
void MultiDerived_deleting_destructor(void *this_ptr)
{
 operator delete(this_ptr);
 return;
}


// Function: sub_401b1e at 0x401b1e
void sub_401b1e(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401b20
void non_virtual_thunk_to_MultiDerived_deleting_destructor(void* a0)
{
 operator delete((char *)a0 - 16);
}


// Function: sub_401b32 at 0x401b32
void sub_401b32()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401b40
void RTTIDerivedB_deleting_destructor(void *this_ptr)
{
 operator delete(this_ptr);
}


// Function: sub_401b4e at 0x401b4e
void sub_401b4e()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401b50
void RTTIDerivedA_deleting_destructor(void *this_ptr)
{
 operator delete(this_ptr);
}


// Function: sub_401b5e at 0x401b5e
void sub_401b5e()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401b60
void DiamondDerived_deleting_destructor(void *this_ptr)
{
 operator delete(this_ptr);
}


// Function: sub_401b6e at 0x401b6e
void sub_401b6e(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x401b70
void thunk_to_DiamondDerived_deleting_destructor(void* *a0)
{
 operator delete((char *)a0 + (*(char **)a0)[32]);
}


// Function: sub_401b85 at 0x401b85
void sub_401b85(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x401b90
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(void* a0)
{
 operator delete((char *)a0 - 16);
}


// Function: sub_401ba2 at 0x401ba2
void sub_401ba2(unsigned long a0, unsigned long a1)
{
 template_max_int((int)a0, (int)a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401bb0
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401bbc at 0x401bbc
void sub_401bbc(unsigned long a0, unsigned long a1)
{
 template_max_double(*(double *)&a0, *(double *)&a1);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401bc0
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401bc9 at 0x401bc9
void sub_401bc9(unsigned long a0, unsigned long a1)
{
 template_swap_int((unsigned int *)a0);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401bd0
long long template_swap_int(unsigned int *ptr)
{
 unsigned long v1; // rax
 unsigned int *p; // rsi
 unsigned int temp; // local temp

 p = ptr + 1;
 v1 = *(ptr);
 temp = *(p);
 *(p) = v1;
 *(ptr) = temp;
 return v1;
}


// Function: sub_401bdd at 0x401bdd
void sub_401bdd(unsigned long a0)
{
 Container_int_Constructor((void *)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401be0
void Container_int_Constructor(void *this_ptr)
{
 *((unsigned int *)this_ptr) = 0;
}


// Function: sub_401bec at 0x401bec
void sub_401bec(unsigned long a0)
{
 Container_int_push((void *)a0, *(int *)(a0 + 8));
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401bf0
void Container_int_push(void *this_ptr, int arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)this_ptr);
 if ((unsigned int)index <= 9)
 {
 *((unsigned int *)this_ptr) = (unsigned int)index + 1;
 *((int *)((char *)this_ptr + 4 + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401c07 at 0x401c07
void sub_401c07(unsigned long a0, unsigned long a1)
{
 Container_int_get((void *)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401c10
void Container_int_get(void *this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: sub_401c27 at 0x401c27
void sub_401c27(unsigned long a0)
{
 Container_int_getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401c30
void Container_int_getSize()
{
 return;
}


// Function: sub_401c38 at 0x401c38
void sub_401c38(unsigned long a0)
{
 Container_double_Constructor((void *)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401c40
void Container_double_Constructor(void *this_ptr)
{
 *((unsigned int *)this_ptr) = 0;
}


// Function: sub_401c4c at 0x401c4c
void sub_401c4c(unsigned long a0)
{
 Container_double_push((void *)a0, *(double *)(a0 + 8));
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401c50
void Container_double_push(void *this_ptr, double arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)this_ptr);
 if ((unsigned int)index <= 9)
 {
 *((unsigned int *)this_ptr) = (unsigned int)index + 1;
 *((double *)((char *)this_ptr + 8 + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401c69 at 0x401c69
void sub_401c69(unsigned long a0, unsigned long a1)
{
 Container_double_get((void *)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401c70
void Container_double_get(void *this_ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: sub_401c82 at 0x401c82
void sub_401c82()
{
}


// Function: sub_401c91 at 0x401c91
void sub_401c91(unsigned long a0)
{
 Container_double_getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401ca0
void Container_double_getSize()
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


