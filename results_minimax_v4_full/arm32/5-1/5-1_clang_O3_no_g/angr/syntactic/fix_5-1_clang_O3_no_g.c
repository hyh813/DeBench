// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */


// Includes for standard library functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ARM condition code calculator function
int armg_calculate_condition(unsigned int cond, unsigned int op1, unsigned int op2, unsigned int flags);

// C++ Exception handling functions (from C++ ABI)
extern void* __cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void*, void*, void*, ...);
extern void* __cxa_begin_catch(void*);
extern void __cxa_end_catch(void);
extern void __cxa_end_cleanup(void);
extern void __cxa_rethrow(void*, unsigned int, unsigned int, unsigned int);

// C++ operators
extern void* operator new(unsigned int);
extern void operator delete(void*);
extern void __cxa_free_exception(void*);

// __dynamic_cast function (GCC extension for RTTI)
extern void* __dynamic_cast(const void*, const void*, const void*, unsigned int);



// Function: sub_400854 at 0x400854
extern unsigned int g_412008;
typedef void (*func_ptr)(void);

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]
 func_ptr f;

 v0 = v1;
 f = (func_ptr)g_412008;
 f();
 return 0;
}


// Function: __dollar_a_27 at 0x400958
// Removed: C++ static initialization not needed for decompiled code



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
class Base {
public:
 virtual void virtual_func() {}
};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void (*)(class Base *))(*(int *)*((int *)arg_0)))(arg_0);
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
 unsigned int v5; // r3
 unsigned int v6; // r1
 unsigned int v7; // r4
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = __cxa_allocate_exception(4);
 *(unsigned int *)ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0, v5, *((int *)&v0), *((int *)&v1), *((int *)&v2), *((int *)&v3));
 if (v6 != 3)
 {
 if (!armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_400c76;
LABEL_400c75:
 if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, v6, 3, 0) ? v6 : v6), (armg_calculate_condition(18, v6, 3, 0) ? 2 : 3), (armg_calculate_condition(18, v6, 3, 0) ? 0 : 0)))
 __cxa_end_cleanup();
 }
 else
 {
 if (armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_400c75;
LABEL_400c76:
 if ((char)armg_calculate_condition(18, (armg_calculate_condition(18, v6, 3, 0) ? v6 : v6), (armg_calculate_condition(18, v6, 3, 0) ? 2 : 3), (armg_calculate_condition(18, v6, 3, 0) ? 0 : 0)))
 __cxa_end_cleanup();
 }
 __cxa_begin_catch(ptr);
 __cxa_end_catch();
 return;
}


// Function: sub_400bf4 at 0x400bf4
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_400bf4(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v4; // r2
 unsigned int v5; // r3

 if (a1 == 1)
 {
 __cxa_rethrow(__cxa_begin_catch((void*)a0), a1, v1, v2);
 }
 else if (a1 == 1)
 {
 __cxa_end_catch();
 __cxa_begin_catch((void*)a0);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, v5);
 }
}


// Function: sub_400c28 at 0x400c28
int sub_400c28(unsigned int a0, unsigned int a1)
{
 __cxa_end_catch();
 // Labels removed - control flow simplified
 return 0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x400ca4
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400cb0
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[4];
 struct_1 *field_4;
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
 struct_0 *p; // r4
 struct_0 *ptr; // r5
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
 p = (struct_0 *)operator new(4);
 *((struct_1 **)p) = (struct_1 *)&g_411ed8;
 ptr = (struct_0 *)operator new(4);
 *((struct_1 **)ptr) = (struct_1 *)&g_411eec;
 result = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = (unsigned int)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 ptr->field_4->field_0;
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d7c
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char g_401201;
extern char g_40121f;
extern char g_40123b;
extern char g_401257;
extern char g_401273;
extern char g_401290;
extern char g_4012ac;
extern char g_4012c8;
extern char g_4012e4;
extern char g_401300;
extern char g_40131d;
extern char g_40133a;
extern char g_401358;
extern char g_411ed8;
extern char g_411eec;

void test_cpp_oo_features()
{
 unsigned int v13; // lr
 unsigned int v14; // r7
 unsigned int flag5; // r0
 unsigned int v24; // r0
 unsigned int v15; // r6
 unsigned int v16; // r5
 unsigned int v17; // r4;
 unsigned int result; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 char v4; // [bp-0x2c]
 unsigned short flag3; // [bp-0x1c]
 char flag2; // [bp-0x1a]
 char flag4; // [bp-0x19]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]
 unsigned int v12; // [bp-0x4]
 struct_0 *p; // r4
 struct_0 *ptr; // r5
 unsigned int v22; // r0
 unsigned int v0; // [bp-0x3c]
 char v1; // [bp-0x38]

 v12 = v13;
 v11 = v14;
 v10 = v15;
 v9 = v16;
 v8 = v17;
 puts(&g_401358);
 strncpy(&v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 flag2 = 0;
 flag3 = 0;
 v0 = 10;
 flag4 = 0;
 printf(&g_401201, strlen(&v1) + 4700);
 printf(&g_40121f, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_40123b, 42);
 printf(&g_401257, 71);
 printf(&g_401273, 650);
 printf(&g_401290, 22);
 printf(&g_4012ac, 39);
 printf(&g_4012c8, 16);
 printf(&g_4012e4, 85);
 test_cpp_exception();
 printf(&g_401300, 0);
 printf(&g_40131d, 703);
 p = (struct_0 *)operator new(4);
 *((struct_1 **)p) = (struct_1 *)&g_411ed8;
 ptr = (struct_0 *)operator new(4);
 *((struct_1 **)ptr) = (struct_1 *)&g_411eec;
 v22 = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag5 = (unsigned int)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 delete(p);
 ptr->field_4->field_0;
 v24 = (!v22 ? 30 : 130);
 if (flag5)
 v24 += 200;
 printf(&g_40133a, v24 + 14);
 return;
}


// Function: main at 0x400fb8
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400fcc
template<typename T>
T template_max(T arg_0, T arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400fd8
template<>
double template_max<double>(double arg_0, double arg_1)
{
 double result; // r0

 if (arg_0 > arg_1)
 result = arg_0;
 else
 result = arg_1;
 return result;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40100c
template<typename T>
void template_swap(T &arg_0, T &arg_1)
{
 unsigned int v0; // r2

 v0 = *((int *)&arg_0);
 *((int *)&arg_0) = *((int *)&arg_1);
 *((unsigned int *)&arg_1) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401020
template<typename T>
class Container {
public:
 void push(void* ptr, int arg_0);
 void get(void* self, int arg_0);
 void getSize(void* this);
};

void Container<int>::Container()
{
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40102c
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = (int)((char*)ptr)[40];
 if (index <= 9)
 {
 v1 = index + 1;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401044
void Container<int>::get(void* self, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401054;
 return;
LABEL_401054:
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401064
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40106c
void Container<double>::Container()
{
}


// Function: _ZN9ContainerIdE4pushEd at 0x401078
void Container<double>::push(void* ptr, int arg_0)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = (int)((char*)ptr)[80];
 if (9 >= index)
 goto LABEL_401084;
 return;
LABEL_401084:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 *((unsigned int *)((char*)ptr + 80)) = index + 1;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40109c
void Container<double>::get(void* this, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_4010b4;
 return;
LABEL_4010b4:
 if (arg_0 >= (int)this[80])
 return;
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010c8
void Container<double>::getSize(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4010d0
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010d4
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010dc
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010e0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010e4
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


