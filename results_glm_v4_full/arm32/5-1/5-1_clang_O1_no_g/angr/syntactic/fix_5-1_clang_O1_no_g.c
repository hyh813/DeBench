// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <new>
#include <cxxabi.h>
#include <stdint.h>

// Stub function for ARM condition code evaluation
static inline int armg_calculate_condition(int condition_code, uint32_t value, uint32_t rhs, int unused) {
    switch (condition_code) {
        case 0: return value & rhs;               // AND
        case 1: return (value & rhs) == 0;        // AND_EQ
        case 10: return value >= rhs;             // GE
        case 11: value < rhs;                      // LT
        case 12: return value > rhs;              // GT
        case 13: return value <= rhs;             // LE
        case 14: return 1;                        // AL (always)
        case 18: return value == rhs;             // EQ
        default: return 0;
    }
}




/* CRT stub function _init removed by preprocessor */



// Function: sub_400b90 at 0x400b90
extern unsigned int g_413008;

int sub_400b90()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)())g_413008)();
 return 0;
}


// Function: __dollar_a_79 at 0x400cb8
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit;
extern unsigned int __dso_handle;

int __dollar_a_79()
{
 unsigned int v0; // r0

 new (&_ZStL8__ioinit) std::ios_base::Init;
 v0 = __cxxabiv1::__cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxxabiv1::__cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400d30 at 0x400d30
void sub_400d30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x400e60
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 v0 = 5;
 strncpy(v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen((const char*)&v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400ed0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // r0
 unsigned int v1; // r1
 unsigned int i; // r2;

 ptr = (unsigned int*)operator new[](20);
 v1 = 0;
 i = 0;
 do
 {
 ((unsigned int*)ptr)[-1 * i] = v1;
 v1 += 10;
 i -= 1;
 } while (i != 4294967291);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400f48
class Base {
public:
    virtual void virtual_func(int arg_0);
    virtual ~Base();
} Base;

class Derived : public Base {
public:
    virtual void virtual_func(int arg_0);
    virtual ~Derived();
};

class BaseA {
public:
    virtual void funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    virtual void funcB();
    virtual ~BaseB();
};

class MiddleA : public BaseA {
public:
    virtual void func();
    virtual ~MiddleA();
};

class MiddleB : public BaseB {
public:
    virtual void func();
    virtual ~MiddleB();
};

class VirtualBase {
public:
    virtual void func();
    virtual ~VirtualBase();
};

class MultiDerived : public BaseA, public BaseB {
public:
    virtual void funcA();
    virtual void funcB();
    virtual ~MultiDerived();
};

class DiamondDerived : public MiddleA, public MiddleB, public VirtualBase {
public:
    virtual void func();
    virtual ~DiamondDerived();
};

typedef void (*virtual_func_t)(class Base*, int);

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((virtual_func_t)*(void**)arg_0)(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x400f64
typedef void* (*struct_0)(void**, void*);
typedef void (*struct_1)(void**, void*);

extern struct_0 g_412cf0;
extern struct_1 g_412d10;

void test_cpp_virtual_func()
{
 void *v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 void *v2; // [bp-0xc]

	v1 = 3;
 ((struct_0)g_412cf0)(&v2, (void*)5);
 ((struct_1)g_412d10)(&v0, &v0);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400fdc
typedef int (*struct_2)(void**, void*);
typedef int (*struct_3)(void**, void*);

extern struct_2 g_412d34;
extern struct_3 g_412d4c;

void test_cpp_multiple_inheritance()
{
 void *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 void *v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]

 v3 = 200;
 v1 = 100;
 v0 = &g_412d34;
 v2 = &g_412d4c;
 g_412d34((void**)&v0, (void*)g_412d34);
 ((struct_3)v2)((void**)&v2, v2);
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x40104c

extern char g_412dbc;
extern unsigned int g_412dd4;
extern struct_0 *g_412df0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x28]
 char v1; // [bp-0x24]
 void *v2; // [bp-0x20]
 struct_0 **v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]

 v4 = 50;
 v3 = &g_412df0;
 v0 = (void*)&g_412dbc;
 v2 = (void*)g_412dd4;
 ((struct_0)g_412df0)((void**)&v3, (void*)g_412df0);
 *((unsigned int *)&(&v1)[((char*)v0)[12]]) = 100;
 ((struct_0)(*(v3)))((void**)&v3, (void*)*(v3));
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4010d0
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4010d8
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4010e0
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4010e8
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4010f0
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // r0
 unsigned int v5; // r3
 unsigned int v6; // r1
 unsigned int v7; // r4
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int*)__cxxabiv1::__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxxabiv1::__cxa_throw(ptr, (std::type_info*)&_ZTIi, 0);
 if (v6 != 3)
 {
 if (!armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_401192;
LABEL_401191:
 if ((char)armg_calculate_condition(18, v6, 2, 0))
 __cxxabiv1::__cxa_end_catch();
 }
 else
 {
 if (armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_401191;
LABEL_401192:
 if ((char)armg_calculate_condition(18, v6, 3, 0))
 __cxxabiv1::__cxa_end_catch();
 }
 __cxxabiv1::__cxa_begin_catch(ptr);
 __cxxabiv1::__cxa_end_catch();
 return;
}


// Function: sub_40111c at 0x40111c
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_40111c(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v4; // r2
 unsigned int v5; // r3

 if (a1 != 1)
 {
 __cxxabiv1::__cxa_begin_catch((void*)a0);
 __cxxabiv1::__cxa_end_catch();
 __cxxabiv1::__cxa_throw(__cxxabiv1::__cxa_allocate_exception(1), (std::type_info*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxxabiv1::__cxa_rethrow();
}


// Function: sub_401144 at 0x401144
void sub_401144(unsigned int a0, unsigned int a1)
{
 __cxxabiv1::__cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011c0
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011cc
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern void* g_412ed8;
extern void* g_412eec;

void test_cpp_rtti()
{
 unsigned int v8; // lr
 unsigned int v9; // r10
 void *v18; // r6
 void *result; // r10
 unsigned int v20; // r0
 void *flag1; // r0
 void *flag2; // r0
 void *v23; // r0
 void *v24; // r0
 unsigned int v10; // r9
 unsigned int v11; // r8
 unsigned int v12; // r7
 unsigned int v13; // r6
 unsigned int v14; // r5
 unsigned int v15; // r4
 void* *p; // r4
 void* *ptr; // r5
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = v8;
 v6 = v9;
 v5 = v10;
 v4 = v11;
 v3 = v12;
 v2 = v13;
 v1 = v14;
 v0 = v15;
	p = (void**)(void*)malloc(4);
 *(p) = g_412ed8;
	ptr = (void**)(void*)malloc(4);
*(ptr) = NULL;
*(ptr) = (void*)g_412eec;
 v18 = (void*)(unsigned int)*((unsigned int *)((char*)(*(int**)p)[4] + 4));
 if (*((int *)((char*)(*(int**)ptr)[4] + 4)) != (int)"12RTTIDerivedB")
 {
 result = 0;
 if (*((char *)*((int *)((char*)(*(int**)ptr)[4] + 4))) != 42)
 {
 v20 = strcmp((char*)*((int *)((char*)(*(int**)ptr)[4] + 4)), "12RTTIDerivedB");
 result = v20 + -(v20) + (v20 <= 0);
 }
 }
 else
 {
 result = (void*)1;
 }
	flag1 = __cxxabiv1::__dynamic_cast(p, (const __cxxabiv1::__class_type_info*)(void*)*(void**)p, (const __cxxabiv1::__class_type_info*)&_ZTI12RTTIDerivedA, 0);
	flag2 = (void*)__cxxabiv1::__dynamic_cast(ptr, (const __cxxabiv1::__class_type_info*)(void*)*(void**)ptr, (const __cxxabiv1::__class_type_info*)&_ZTI12RTTIDerivedB, 0);
 v23 = v18;
	v24 = (void*)((char*)v23 + 1);
 if (*((char*)v23) != 42)
 v24 = v18;
 strlen((const char*)v24);
	((void (*)(void**, void**))(void*)(unsigned int)((int**)p)[4])((void**)p, (void**)p);
	((void (*)(void**, void**))(unsigned int)((int**)ptr)[4])((void**)ptr, (void**)ptr);
 if (!flag2)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40136c
typedef struct struct_4 {
 unsigned int field_0;
} struct_4;

typedef struct struct_5 {
 unsigned int field_0;
} struct_5;

typedef struct struct_6 {
 unsigned int field_0;
} struct_6;

typedef struct struct_7 {
 unsigned int field_0;
} struct_7;

extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_401b0d;
extern char g_401b2b;
extern char g_401b47;
extern char g_401b63;
extern char g_401b7f;
extern char g_401b9c;
extern char g_401bb8;
extern char g_401bd4;
extern char g_401bf0;
extern char g_401c0c;
extern char g_401c29;
extern char g_401c46;
extern char g_401c71;
extern struct_0 g_412cf0;
extern struct_1 g_412d10;
typedef int (*struct_2)(void**, void*);
typedef int (*struct_3)(void**, void*);

extern struct_2 g_412d34;
extern struct_3 g_412d4c;
extern char g_412dbc;
extern unsigned int g_412dd4;
extern struct_0 *g_412df0;

void test_cpp_oo_features()
{
 unsigned int v13; // r4
 unsigned int *ptr; // r0
 unsigned int i; // r1
 unsigned int v17; // r6
 unsigned int v18; // r0
 char *v21; // r5
 unsigned int v22; // r0
 unsigned int v0; // [bp-0x40]
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x3c]
 void *v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 void *v6; // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 unsigned short result; // [bp-0x20]
 void *flag1; // [bp-0x1e]
 void *flag2; // [bp-0x1d]
 struct_0 *v12; // [bp-0x1c]

 puts(&g_401c71);
 v0 = 5;
 strncpy(&v1, "Test", 4);
 v4 = 0;
 v5 = 0;
 memset(&v6, 0, 16);
 result = 0;
 flag1 = 0;
 v13 = 0;
 flag2 = 0;
 v0 = 10;
 printf(&g_401b0d, strlen((const char*)&v3) + 4700);
	ptr = (unsigned int*)operator new[](20);
	i = 0;
	do
	{
	((unsigned int*)ptr)[-1 * i] = v13;
 v13 += 10;
 i -= 1;
 } while (i != 4294967291);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
	v17 = ptr[2];
 operator delete[]((void*)ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_401b2b, v17 + _ZN14LifecycleClass14instance_countE + _ZN14LifecycleClass14instance_countE * 1000);
 v12 = (struct_0*)(void*)&g_412cf0;
 v2 = 3;
 v0 = (unsigned int)(size_t)&g_412d10;
 v18 = ((struct_0)g_412cf0)((void**)&v12, (void*)5);
 printf(&g_401b47, v18 + ((int (*)(void**, void*))v0)((void**)&v0, (void*)v0) + 21);
 v4 = (void*)&g_412d4c;
 v5 = 200;
 v3 = 100;
 v0 = (unsigned int)(size_t)&g_412d34;
 printf(&g_401b63, ((int (*)(void**, void*))g_412d4c)((void**)&v4, v4) + 31);
 v6 = (void*)&g_412df0;
 v8 = 50;
 v0 = (void*)(unsigned int)(size_t)&g_412dbc;
 v4 = (void*)(void*)g_412dd4;
 v21 = (char*)v6;
 v22 = (unsigned int)(size_t)((struct_0)g_412df0)(&v21, (void*)v6);
 *((unsigned int *)((char *)&v3 + ((char*)v0)[12]]) = 100;
 {
 struct_0 *fp = (struct_0*)(*(void**)v6);
 printf(&g_401b7f, (unsigned int)(size_t)fp((void**)&v6, v6) + v22);
 }
 printf(&g_401b9c, 22);
 printf(&g_401bb8, 39);
 printf(&g_401bd4, 16);
 printf(&g_401bf0, 85);
 test_cpp_exception();
 printf(&g_401c29, 703);
 test_cpp_rtti();
 return;
}


// Function: main at 0x401648
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x40165c
void Base::virtual_func(int arg_0)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401664
void Derived::virtual_func(int arg_0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401670
Base::~Base()
{
 return;
}

void operator delete(void* ptr)
{
 free(ptr);
}


// Function: _ZN12MultiDerivedD2Ev at 0x401674
MultiDerived::~MultiDerived()
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401678
DiamondDerived::~DiamondDerived()
{
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x40167c
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401688
double template_max<double>()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 unsigned int result; // r0
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
 result = 0;
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return;
 }
 else
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return;
 }
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016bc
void template_swap<int>(int &ptr, int &p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016d0
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016dc
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f4
void Container<int>::get(void* this, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401704;
 return;
LABEL_401704:
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401714
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40171c
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401728
void Container<double>::push(void* ptr)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = *((unsigned int *)((char*)ptr + 80));
 if (9 >= index)
 goto LABEL_401734;
 return;
LABEL_401734:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 *((unsigned int *)((char*)ptr + 80)) = index + 1;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40174c
void Container<double>::get(void* this, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401764;
 return;
LABEL_401764:
 if (arg_0 >= (int)this[80])
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401778
void Container<double>::getSize(void* this)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401780
void Base::getName(void* this)
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401790
int Base::~Base(void* this)
{
 operator delete(this);
 return 0;
}


// Function: _ZNK7Derived7getNameEv at 0x4017a0
void Derived::getName(void* this)
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x4017b0
void Derived::~Derived(void* this)
{
 ::operator delete(this);
}


// Function: _ZN12MultiDerived5funcAEv at 0x4017c0
void MultiDerived::funcA(void* this)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4017c8
void MultiDerived::~MultiDerived(void* this)
{
 ::operator delete(this);
}


// Function: _ZN12MultiDerived5funcBEv at 0x4017d8
void MultiDerived::funcB(void* this)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x4017e0
void* non-virtual thunk to MultiDerived::funcB()(void* this)
{
 return (void*)((char*)this - 8);
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x4017e8
void* non-virtual thunk to MultiDerived::~MultiDerived()(void* this)
{
 return (void*)((char*)this - 8);
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x4017ec
void non-virtual thunk to MultiDerived::~MultiDerived()(void* a0)
{
 ::operator delete(a0 - 8);
}


// Function: _ZN5BaseA5funcAEv at 0x401800
void BaseA::funcA(void* this)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x401808
int BaseA::~BaseA(void* this)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x40180c
void BaseA::~BaseA(void* this)
{
 ::operator delete(this);
}


// Function: _ZN5BaseB5funcBEv at 0x40181c
void BaseB::funcB(void* this)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x401824
int BaseB::~BaseB(void* this)
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x401828
void BaseB::~BaseB(void* this)
{
 ::operator delete(this);
}


// Function: _ZN7MiddleA4funcEv at 0x401838
void MiddleA::func(void* this)
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401850
int MiddleA::~MiddleA(void* this)
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x401854
void MiddleA::~MiddleA(void* this)
{
 ::operator delete(this);
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401864
void* thunk to MiddleA::func(void* *a0)
{
 return (void*)(*((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 150);
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401884
int thunk to MiddleA::~MiddleA(void* a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401888
unsigned int _ZTv0_n16_N7MiddleAD0Ev(void** a0)
{
 operator delete((char *)a0 + (*(a0))[16]);
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x4018a4
void MiddleB::func(void* this)
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x4018bc
int MiddleB::~MiddleB(void* this)
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x4018c0
void MiddleB::~MiddleB(void* this)
{
 ::operator delete(this);
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x4018d0
void* thunk to MiddleB::func(void* *a0)
{
 return (void*)(*((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 200);
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x4018f0
int thunk to MiddleB::~MiddleB(void* a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x4018f4
unsigned int _ZTv0_n16_N7MiddleBD0Ev(void** a0)
{
 operator delete((char *)a0 + (*(a0))[16]);
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401910
void DiamondDerived::func(void* this)
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401928
void DiamondDerived::~DiamondDerived(void* this)
{
 ::operator delete(this);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401938
void* non-virtual thunk to DiamondDerived::func()(void* a0)
{
 return (void*)(*((int *)(-4 + (char *)a0 + *((int *)((int)((void**)a0)[8] - 12)))) + 250);
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401950
void* non-virtual thunk to DiamondDerived::~DiamondDerived(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401954
void non-virtual thunk to DiamondDerived::~DiamondDerived()(void* a0)
{
 ::operator delete((void*)((char*)a0 - 8));
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401968
void* thunk to DiamondDerived::func(void* *a0)
{
 return (void*)(*((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 250);
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401988
int thunk to DiamondDerived::~DiamondDerived(void* a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x40198c
void thunk to DiamondDerived::~DiamondDerived()(void* *a0)
{
 ::operator delete((char *)a0 + (*(a0))[16]);
}


// Function: _ZN11VirtualBase4funcEv at 0x4019a8
void VirtualBase::func(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4019b0
int VirtualBase::~VirtualBase(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4019b4
void VirtualBase::~VirtualBase(void* this)
{
 ::operator delete(this);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4019c4
void RTTIDerivedA::~RTTIDerivedA(void* this)
{
 ::operator delete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4019d4
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4019dc
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4019e0
void RTTIDerivedB::~RTTIDerivedB(void* this)
{
 ::operator delete(this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019f0
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


