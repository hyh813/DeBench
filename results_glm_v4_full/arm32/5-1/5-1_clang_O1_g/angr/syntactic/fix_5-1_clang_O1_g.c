// Angr Decompilation of 5-1_clang_O1_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <cxxabi.h>
#include <exception>
#include <cstddef>

// Declare GCC intrinsic
extern __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) void __cxa_end_cleanup();

// Declare __cxa_atexit (C function, not in __cxxabiv1 namespace)
extern "C" int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

// Angr-specific helper function
extern "C" int armg_calculate_condition(int op, unsigned int a, unsigned int b, int flags);

/* CRT stub function _init removed by preprocessor */



// Function: sub_400b90 at 0x400b90
extern unsigned int g_413008;

int sub_400b90()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: __dollar_a_79 at 0x400cb8
extern char _ZNSt8ios_base4InitD1Ev;
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned int __dso_handle;

int __dollar_a_79()
{
 unsigned int v0; // r0

 new (&_ZStL8__ioinit) std::ios_base::Init();
 v0 = __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
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
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400ed0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int *ptr; // r0
 unsigned int v1; // r1
 unsigned int i; // r2

 ptr = new unsigned int[5];
 v1 = 0;
 i = 0;
 do
 {
 ptr[-1 * i] = v1;
 v1 += 10;
 i -= 1;
 } while (i != 4294967291);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 delete[] ptr;
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400f48
class Base {
} Base;

class Derived : public Base {
} Derived;

class MultiDerived : public Base {
} MultiDerived;

class DiamondDerived {
} DiamondDerived;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 void (*vfunc)(void*, int);
 vfunc = (void (*)(void*, int))(*((int *)*((int *)arg_0)));
 vfunc(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x400f64
typedef struct { unsigned int field_0; } struct_virtual_0;
typedef struct { unsigned int field_0; } struct_virtual_1;

extern void (*g_412cf0)(void**, int, void*);
extern void (*g_412d10)(void**, int, void*);

void test_cpp_virtual_func()
{
 struct_virtual_1 **v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 struct_virtual_0 **v2; // [bp-0xc]

 v2 = (struct_virtual_0 **)&g_412cf0;
 v1 = 3;
 v0 = (struct_virtual_1 **)&g_412d10;
 g_412cf0((void**)v2, 5, (void*)g_412cf0);
 (*(void (**)(void**, int, void*))v0)((void**)v0, 5, (void*)*v0);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400fdc
typedef struct { unsigned int field_0; } struct_multi_0;
typedef struct { unsigned int field_0; } struct_multi_1;

extern void (*g_412d34)(void**, void*);
extern void (*g_412d4c)(void**, void*, void*);
extern unsigned int g_412dd4;

void test_cpp_multiple_inheritance()
{
 struct_multi_0 **v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 struct_multi_1 **v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]

 v3 = 200;
 v1 = 100;
 v0 = (struct_multi_0 **)&g_412d34;
 v2 = (struct_multi_1 **)&g_412d4c;
 g_412d34((void**)v0, (void*)g_412d34);
 g_412d4c((void**)v2, (void*)*v2, (void*)0);
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x40104c
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

extern void* g_412dbc;
extern unsigned int g_412dd4;
extern void (*g_412df0)(void**, void*, void*);

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x28]
 void* v1; // [bp-0x24]
 unsigned int* v2; // [bp-0x20]
 void (*v3)(void**, void*, void*); // [bp-0x18]
 unsigned int v4; // [bp-0x14]

 v4 = 50;
 v3 = g_412df0;
 v0 = (void*)&g_412dbc;
 v2 = &g_412dd4;
 ((void (*)(void**, void*, void*))g_412df0)((void**)&v3, (void*)g_412df0, &g_412dbc);
 ((void (*)(void**, void*, void*))v3)((void**)&v3, (void*)v3, (void*)100);
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

 ptr = (unsigned int *)__cxxabiv1::__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxxabiv1::__cxa_throw(ptr, (std::type_info*)&_ZTIi, 0);
 if (v6 != 3)
 {
 if (!armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_401192;
LABEL_401191:
 if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, v6, 3, 0) ? v6 : v6), (armg_calculate_condition(18, v6, 3, 0) ? 2 : 3), (armg_calculate_condition(18, v6, 3, 0) ? 0 : 0)))
 __cxa_end_cleanup();
 }
 else
 {
 if (armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_401191;
LABEL_401192:
 if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, v6, 3, 0) ? v6 : v6), (armg_calculate_condition(18, v6, 3, 0) ? 2 : 3), (armg_calculate_condition(18, v6, 3, 0) ? 0 : 0)))
 __cxa_end_cleanup();
 }
 __cxxabiv1::__cxa_begin_catch(ptr);
 __cxxabiv1::__cxa_end_catch();
 return;
}


// Function: sub_40111c at 0x40111c
extern std::type_info _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_40111c(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v4; // r2
 unsigned int v5; // r3

 LABEL_0x4011b4:
 if (a1 != 1)
 {
 if (a1 != 1)
 goto LABEL_0x4011b4;
 __cxxabiv1::__cxa_end_catch();
 __cxxabiv1::__cxa_begin_catch((void*)a0);
 __cxxabiv1::__cxa_throw(__cxxabiv1::__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxxabiv1::__cxa_rethrow();
 return 0;
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
extern std::type_info _ZTI12RTTIDerivedA;
extern std::type_info _ZTI12RTTIDerivedB;
extern std::type_info _ZTI8RTTIBase;
extern char g_412ed8;
extern void g_412eec;

void test_cpp_rtti()
{
 unsigned int v8; // lr
 unsigned int v9; // r10
 void* v18; // r6
 unsigned int result; // r10
 unsigned int v20; // r0
 unsigned int flag1; // r0
 unsigned int flag2; // r0
 char *v23; // r0
 char *v24; // r0
 unsigned int v10; // r9
 unsigned int v11; // r8
 unsigned int v12; // r7
 unsigned int v13; // r6
 unsigned int v14; // r5
 unsigned int v15; // r4
 void* *p; // r4
 void* *ptr; // r5
 void* v0; // [bp-0x20]
 void* v1; // [bp-0x1c]
 void* v2; // [bp-0x18]
 void* v3; // [bp-0x14]
 void* v4; // [bp-0x10]
 void* v5; // [bp-0xc]
 void* v6; // [bp-0x8]
 void* v7; // [bp-0x4]

 p = (void* *)malloc(4);
 *(p) = &g_412ed8;
 ptr = (void* *)malloc(4);
 *(ptr) = NULL;
 *(ptr) = &g_412eec;
 v18 = (void*)*((int *)((int)(*(int**)p)[4] + 4));
 if (*((int *)((int)(*(int**)ptr)[4] + 4)) != (int)"12RTTIDerivedB")
 {
 result = 0;
 if (*((char *)*((int *)((int)(*(int**)ptr)[4] + 4))) != 42)
 {
 v20 = strcmp((char*)const_cast<const char*>((char*)*((int *)((int)(*(int**)ptr)[4] + 4))), "12RTTIDerivedB");
 result = v20 + -(v20) + (v20 <= 0);
 }
 }
 else
 {
 result = 1;
 }
 flag1 = (unsigned int)(uintptr_t)__cxxabiv1::__dynamic_cast(p, (const __cxxabiv1::__class_type_info*)&_ZTI8RTTIBase, (const __cxxabiv1::__class_type_info*)&_ZTI12RTTIDerivedA, 0);
 flag2 = (unsigned int)(uintptr_t)__cxxabiv1::__dynamic_cast(ptr, (const __cxxabiv1::__class_type_info*)&_ZTI8RTTIBase, (const __cxxabiv1::__class_type_info*)&_ZTI12RTTIDerivedB, 0);
 v23 = (char*)v18;
 v24 = v23 + 1;
 if (*(v23) != 42)
 v24 = (char*)v18;
 strlen(v24);
 {
 void (*vfunc)(void*, int);
 vfunc = (void (*)(void*, int))*((int*)((int)(*(int**)p)[4]));
 vfunc(p, 0);
 }
 {
 void (*vfunc)(void*, int);
 vfunc = (void (*)(void*, int))*((int*)((int)(*(int**)ptr)[4]));
 vfunc(ptr, 0);
 }
 if (!flag2)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40136c
typedef struct { unsigned int field_0; } struct_oo_0;
typedef struct { unsigned int field_0; } struct_oo_1;
typedef struct { unsigned int field_0; } struct_oo_2;
typedef struct { unsigned int field_0; } struct_oo_3;

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
extern void (*g_412cf0)(void**, int, void*);
extern void (*g_412d10)(void**, int, void*);
extern void (*g_412d34)(void**, void*);
extern void (*g_412d4c)(void**, void*, void*);
extern void* g_412dbc;
extern void (*g_412df0)(void**, void*, void*);

void test_cpp_oo_features()
{
 unsigned int v13; // r4
 unsigned int *ptr; // r0
 unsigned int i; // r1
 unsigned int v17; // r6
 unsigned int v18; // r0
 char *v21; // r5
 unsigned int v22; // r0
 struct_oo_1 **v0; // [bp-0x40], Other Possible Types: void*, unsigned int
 char v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x3c]
 struct_oo_2 **v4; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v5; // [bp-0x34]
 void (**v6)(void**, void*, void*); // [bp-0x30]
 unsigned int v8; // [bp-0x2c]
 unsigned short result; // [bp-0x20]
 char flag1; // [bp-0x1e]
 char flag2; // [bp-0x1d]
 struct_oo_0 **v12; // [bp-0x1c]

 puts(&g_401c71);
 v0 = (struct_oo_1 **)5;
 strncpy(&v1, "Test", 4);
 v4 = 0;
 v5 = 0;
 memset(&v6, 0, 16);
 result = 0;
 flag1 = 0;
 v13 = 0;
 flag2 = 0;
 v0 = (struct_oo_1 **)10;
 printf(&g_401b0d, strlen((const char*)&v1) + 4700);
 ptr = (unsigned int*)new unsigned int[5];
 i = 0;
 do
 {
 ptr[-1 * i] = v13;
 v13 += 10;
 i -= 1;
 } while (i != 4294967291);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 v17 = ptr[2];
 ::operator delete[](ptr);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_401b2b, v17 + _ZN14LifecycleClass14instance_countE + _ZN14LifecycleClass14instance_countE * 1000);
 v12 = (struct_oo_0 **)(void**)&g_412cf0;
 v2 = 3;
 v0 = (struct_oo_1 **)(void**)&g_412d10;
 g_412cf0((void**)&v12, 5, (void*)g_412cf0);
 g_412d10((void**)&v0, 5, (void*)*v0);
 printf(&g_401b47, 21);
 v4 = (struct_oo_2 **)(void**)&g_412d4c;
 v5 = 200;
 v3 = 100;
 v0 = (struct_oo_1 **)(void**)&g_412d34;
 printf(&g_401b63, g_412d4c((void**)&v4, (void*)g_412d4c, (void*)200) + 31);
 v6 = (void(**)(void**, void*, void*))&g_412df0;
 v8 = 50;
 v0 = (struct_oo_1 **)&g_412dbc;
 v4 = (struct_oo_2 **)&g_412dd4;
 v21 = (char*)&v6;
 (*(void (**)(void**, void*, void*))v6)(v21, (void*)v6, &g_412dbc);
 v22 = 0;
 *((unsigned int *)((char *)&v3 + ((unsigned int*)v0)[12])) = 100;
 (*(v6))(v21, *(v6), *(v6));
 printf(&g_401b7f, v22);
 printf(&g_401b9c, 22);
 printf(&g_401bb8, 39);
 printf(&g_401bd4, 16);
 printf(&g_401bf0, 85);
 printf(&g_401c0c, (unsigned int)test_cpp_exception());
 printf(&g_401c29, 703);
 test_cpp_rtti();
 printf(&g_401c46, 0);
 return;
}


// Function: main at 0x401648
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x40165c
void Base::virtual_func(class Base* this, int arg_0)
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401664
void Derived::virtual_func(class Derived* this, int arg_0)
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401670
void Base::~Base()
{
}


// Function: _ZN12MultiDerivedD2Ev at 0x401674
void MultiDerived::~MultiDerived()
{
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401678
void DiamondDerived::~DiamondDerived()
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
double template_max<double>(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016bc
void template_swap<int>(int **ptr, int **p)
{
 unsigned int v0; // r2

 v0 = **ptr;
 **ptr = **p;
 **p = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016d0
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016dc
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = (int)ptr[40];
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)&ptr[40]) = v1;
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
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401728
void Container<double>::push(void* ptr)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = (int)ptr[80];
 if (9 >= index)
 goto LABEL_401734;
 return;
LABEL_401734:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 *((unsigned int *)&ptr[80]) = index + 1;
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
void Base::getName()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x401790
Base::~Base()
{
 ::operator delete(this);
}


// Function: _ZNK7Derived7getNameEv at 0x4017a0
void Derived::getName()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x4017b0
void Derived::~Derived()
{
 ::operator delete(this);
}


// Function: _ZN12MultiDerived5funcAEv at 0x4017c0
void MultiDerived::funcA(void* this)
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x4017c8
void MultiDerived::~MultiDerived()
{
 ::operator delete(this);
}


// Function: _ZN12MultiDerived5funcBEv at 0x4017d8
void MultiDerived::funcB(void* this)
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x4017e0
unsigned int _ZThn8_N12MultiDerived5funcBEv()
{
 return 40;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x4017e8
void _ZThn8_N12MultiDerivedD1Ev()
{
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x4017ec
void _ZThn8_N12MultiDerivedD0Ev(void* a0)
{
 ::operator delete(a0 - 8);
}


// Function: _ZN5BaseA5funcAEv at 0x401800
void BaseA::funcA(void* this)
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x401808
void BaseA::~BaseA(void* this)
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x40180c
void BaseA::~BaseA(const void* this)
{
 ::operator delete((void*)this);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x40181c
void BaseB::funcB(void* this)
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x401824
void BaseB::~BaseB(void* this)
{
}


// Function: _ZN5BaseBD0Ev at 0x401828
BaseB::~BaseB()
{
 ::operator delete(this);
}


// Function: _ZN7MiddleA4funcEv at 0x401838
void MiddleA::func()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401850
void MiddleA::~MiddleA(void* this)
{
}

// Function: _ZTV0_n12_N7MiddleA4funcEv at 0x401864
int _ZTv_n0_n12_N7MiddleA4funcEv(void* *a0)
{
 return (int)(*((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 150);
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401884
void _ZTv0_n16_N7MiddleAD1Ev()
{
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401888
void _ZTv0_n16_N7MiddleAD0Ev(void** a0)
{
 ::operator delete((char *)a0 + (*(a0))[16]);
}



// Function: _ZN7MiddleB4funcEv at 0x4018a4
void MiddleB::func()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x4018bc
void MiddleB::~MiddleB()
{
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x4018d0
int _ZTv0_n12_N7MiddleB4funcEv(void* *a0)
{
 return (int)(*((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 200);
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x4018f0
void _ZTv0_n16_N7MiddleBD1Ev()
{
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x4018f4
void _ZTv0_n16_N7MiddleBD0Ev(void** a0)
{
 ::operator delete((char *)a0 + (*(a0))[16]);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401910
void DiamondDerived::func()
{
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401928
void DiamondDerived::~DiamondDerived()
{
 ::operator delete(this);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401938
int _ZThn8_N14DiamondDerived4funcEv(void* a0)
{
 return *((int *)(-4 + (char *)a0 + *((int *)((int)a0[8] - 12)))) + 250;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x401950
void _ZThn8_N14DiamondDerivedD1Ev(void* this)
{
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x401954
void _ZThn8_N14DiamondDerivedD0Ev(void* a0)
{
 ::operator delete(a0 - 8);
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x401968
int _ZTv0_n12_N14DiamondDerived4funcEv(void** a0)
{
 return (int)(*((int *)(4 + (char *)a0 + (*(a0))[12] + *((int *)(*((int *)((char *)a0 + (*(a0))[12])) - 12)))) + 250);
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x401988
void _ZTv0_n16_N14DiamondDerivedD1Ev()
{
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x40198c
void _ZTv0_n16_N14DiamondDerivedD0Ev(void** a0)
{
 ::operator delete((char *)a0 + (*(a0))[16]);
}


// Function: _ZN11VirtualBase4funcEv at 0x4019a8
void VirtualBase::func(void* this)
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4019b0
void VirtualBase::~VirtualBase(void* this)
{
}


// Function: _ZN11VirtualBaseD0Ev at 0x4019b4
VirtualBase::~VirtualBase()
{
 ::operator delete(this);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4019c4
void RTTIDerivedA::~RTTIDerivedA(const void* this)
{
 ::operator delete((void*)this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4019d4
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4019dc
void RTTIBase::~RTTIBase(void* this)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4019e0
void RTTIDerivedB::~RTTIDerivedB(const void* this)
{
 ::operator delete((void*)this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019f0
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


