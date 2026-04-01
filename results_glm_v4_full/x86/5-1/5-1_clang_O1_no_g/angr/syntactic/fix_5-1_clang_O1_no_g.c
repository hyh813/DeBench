// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>

/* Forward declarations */
typedef struct struct_0 struct_0;
typedef struct struct_1 struct_1;
typedef struct struct_2 struct_2;
typedef struct struct_3 struct_3;
typedef struct struct_4 struct_4;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct LifecycleClass LifecycleClass;

/* Global variable definitions */
unsigned int _ZN14LifecycleClass14instance_countE = 0;
char g_405ce4 = 0;
struct_0 *g_405d04 = NULL;
unsigned int g_405d28 = 0;
struct_1 *g_405d40 = NULL;
unsigned int g_405db0 = 0;
unsigned int g_405dc8 = 0;
struct_2 *g_405de4 = NULL;
unsigned int _ZTI12RTTIDerivedA = 0;
unsigned int _ZTI12RTTIDerivedB = 0;
char _ZTS12RTTIDerivedB = 0;
char g_405ecc = 0;
char g_405ee0 = 0;
char _ZTIi = 0;
char g_403081 = 0;
char g_40309f = 0;
char g_4030bb = 0;
char g_4030d7 = 0;
char g_4030f3 = 0;
char g_403110 = 0;
char g_40312c = 0;
char g_403148 = 0;
char g_403164 = 0;
char g_403180 = 0;
char g_40319d = 0;
char g_4031ba = 0;
char g_4031e5 = 0;

/* CRT functions */
extern void (*g_405ff4)(void);
void frame_dummy(void);
void _start(void);
unsigned int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_bx(void);
int __x86_get_pc_thunk_di(int a0);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void __do_global_dtors_aux(void);
int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle);

/* Standard I/O functions */
int printf(const char *format, ...);
int puts(const char *s);

/* C++ runtime functions */
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exc, void* type, void* dest);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void _Unwind_Resume(void* exc);

/* Operator new/delete - using C-compatible wrappers */
void* operator_new_array(unsigned int size);
void operator_delete_array(void* ptr);
void operatordelete(void* ptr);



/* Virtual table structures */
struct struct_0 {
 unsigned int* vfunc_ptr0;
 unsigned int* vfunc_ptr1;
 unsigned int* vfunc_ptr2;
};

struct struct_1 {
 unsigned int* vfunc_ptr;
};

struct struct_4 {
 unsigned int* field_4;
};

/* Virtual function pointer type */
typedef void (*virtual_func_t)(void* this_ptr, int arg);

/* Virtual function pointer type without int arg */
typedef void (*virtual_void_func_t)(void* this_ptr);

struct struct_2 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
};

struct struct_3 {
 unsigned int field_0;
 unsigned int field_4;
};

/* Base class with virtual table */
struct Base {
 unsigned int* vtable;
};

/* Derived class */
struct Derived {
 unsigned int* vtable;
};

/* Multiple inheritance base class A */
struct BaseA {
 unsigned int* vtable;
};

/* Multiple inheritance base class B */
struct BaseB {
 unsigned int* vtable;
};

/* Multiple inheritance derived class */
struct MultiDerived {
 unsigned int* vtable;
 unsigned int* vtable_b;
};

/* Diamond inheritance classes */
struct VirtualBase {
 unsigned int* vtable;
};

struct MiddleA {
 unsigned int* vtable;
};

struct MiddleB {
 unsigned int* vtable;
};

struct DiamondDerived {
 unsigned int* vtable;
 unsigned int* vtable_b;
 unsigned int* vtable_c;
};

/* RTTI classes */
struct RTTIBase {
 unsigned int* vtable;
};

struct RTTIDerivedA {
 unsigned int* vtable;
};

struct RTTIDerivedB {
 unsigned int* vtable;
};

/* Lifecycle class */
struct LifecycleClass {
 unsigned int* vtable;
};

int _init()
{
 if (g_405ff4)
 g_405ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 /* indirect jump - stubbed */
 return 0;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 void* v1; // ebx

 /* indirect jump - stubbed */
 return 0;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
/* C++ runtime initialization - simplified for C compatibility */
static void _ZNSt8ios_base4InitD1Ev(void) {}
static char _ZStL8__ioinit = 0;
static unsigned int __dso_handle = 0;

int _GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init::Init(&_ZStL8__ioinit); */
 return __cxa_atexit(_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */

/* Forward declarations */
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void call_virtual_func(struct Base*, int);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
int main(void);
int _init(void);

/* C++ mangled function declarations */
void _ZN4Base12virtual_funcEi(void* this_ptr, int arg_0);
void _ZN7Derived12virtual_funcEi(void* this_ptr, int arg_0);
void _ZN4BaseD2Ev(void* this_ptr);
void _ZN12MultiDerivedD2Ev(void* this_ptr);
void _ZN14DiamondDerivedD1Ev(void* this_ptr);
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1);
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1);
void _Z13template_swapIiEvRT_S1_(int *ptr, int *p);
void _ZN9ContainerIiEC2Ev(void* ptr);
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0);
int _ZNK9ContainerIiE3getEi(void* this, int arg_0);
unsigned int _ZNK9ContainerIiE7getSizeEv(void* this);
void _ZN9ContainerIdEC1Ev(void* ptr);
void _ZN9ContainerIdE4pushEd(void* ptr);
double _ZNK9ContainerIdE3getEi(void* this, int arg_0);
unsigned int _ZNK9ContainerIdE7getSizeEv(void* this);
const char* _ZNK4Base7getNameEv(void* this);
void _ZN4BaseD0Ev(void* this_ptr);
const char* _ZNK7Derived7getNameEv(void* this);
void _ZN7DerivedD0Ev(void* this_ptr);
void _ZN12MultiDerived5funcAEv(void);
void _ZN12MultiDerivedD0Ev(void* this_ptr);
void _ZN12MultiDerived5funcBEv(void* this);
void _ZThn8_N12MultiDerived5funcBEv(void);
void _ZThn8_N12MultiDerivedD1Ev(void);
void _ZThn8_N12MultiDerivedD0Ev(void* a0);
void _ZN5BaseA5funcAEv(void* this);
void _ZN5BaseAD2Ev(void* this_ptr);
void _ZN5BaseAD0Ev(void* this_ptr);
void _ZN5BaseB5funcBEv(void* this);
void _ZN5BaseBD2Ev(void* this_ptr);
void _ZN5BaseBD0Ev(void* this_ptr);
void _ZN7MiddleA4funcEv(void* this);
void _ZN7MiddleAD1Ev(void* this_ptr);
void _ZN7MiddleAD0Ev(void* this_ptr);
void _ZTv0_n12_N7MiddleA4funcEv(void* *a0);
void _ZTv0_n16_N7MiddleAD1Ev(void);
void _ZTv0_n16_N7MiddleAD0Ev(void* *a0);
void _ZN7MiddleB4funcEv(void* this);
void _ZN7MiddleBD1Ev(void* this_ptr);
void _ZN7MiddleBD0Ev(void* this_ptr);
void _ZTv0_n12_N7MiddleB4funcEv(void* *a0);
void _ZTv0_n16_N7MiddleBD1Ev(void);
void _ZTv0_n16_N7MiddleBD0Ev(void* *a0);
void _ZN14DiamondDerived4funcEv(void* this);
void _ZN14DiamondDerivedD0Ev(void* this_ptr);
void _ZThn8_N14DiamondDerived4funcEv(void* a0);
void _ZThn8_N14DiamondDerivedD1Ev(void);
void _ZThn8_N14DiamondDerivedD0Ev(void* a0);
void _ZTv0_n12_N14DiamondDerived4funcEv(void);
void _ZTv0_n16_N14DiamondDerivedD1Ev(void);
void _ZTv0_n16_N14DiamondDerivedD0Ev(void* *a0);
void _ZN11VirtualBase4funcEv(void* this);
void _ZN11VirtualBaseD2Ev(void* this_ptr);
void _ZN11VirtualBaseD0Ev(void* this_ptr);
void _ZN12RTTIDerivedAD0Ev(void* this_ptr);
const char* _ZNK12RTTIDerivedA7getTypeEv(void* this);
void _ZN8RTTIBaseD2Ev(void* this_ptr);
void _ZN12RTTIDerivedBD0Ev(void* this_ptr);
const char* _ZNK12RTTIDerivedB7getTypeEv(void* this);



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4011e0
void __x86_get_pc_thunk_bx()
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

unsigned int register_tm_clones()
{
 __x86_get_pc_thunk_dx();
 return 0;
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 __x86_get_pc_thunk_di(0);
 deregister_tm_clones();
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401319
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40131d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401321 at 0x401321
void sub_401321()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401330
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 strncpy(v1, "Test", 4);
 memset(&v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_4013a3 at 0x4013a3
void sub_4013a3()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4013b0
extern unsigned int _ZN14LifecycleClass14instance_countE;

void* operator_new_array(unsigned int sz)
{
 if (sz == 0) sz = 1;
 return malloc(sz);
}

void operator_delete_array(void* ptr)
{
 free(ptr);
}

void operatordelete(void* ptr)
{
 free(ptr);
}

void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int*)malloc(20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 free(v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_401414 at 0x401414
void sub_401414()
{
 struct Base dummy;
 call_virtual_func(&dummy, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401420

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 (*((int *)*((int *)arg_0)))(arg_0, arg_1);
 return;
}


// Function: sub_401445 at 0x401445
void sub_401445()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401450
extern char g_405ce4;
extern struct_0 *g_405d04;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = (unsigned int)&g_405ce4;
 v0 = &g_405d04;
 v1 = 3;
 /* Base::virtual_func(&v2, 5); */
 if (v0 && *v0 && (*v0)->vfunc_ptr0)
   ((virtual_func_t)(*v0)->vfunc_ptr0)(&v2, 5);
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4014b0
extern char g_405d28;
extern struct_1 *g_405d40;

void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int *v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v0 = (unsigned int)&g_405d28;
 v2 = (unsigned int *)&g_405d40;
 v1 = 100;
 v3 = 200;
 /* MultiDerived::funcA(&v0); */
 ((void (*)(void*))(*v2))(&v0);
 return;
}


// Function: sub_40150e at 0x40150e
void sub_40150e()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401510
extern unsigned int g_405db0;
extern unsigned int g_405dc8;
extern struct_2 *g_405de4;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x24]
 char v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int *v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v0 = (void*)&g_405db0;
 v3 = (unsigned int *)&g_405de4;
 v2 = (unsigned int)&g_405dc8;
 v4 = 50;
 /* thunk to DiamondDerived::func()(&v3); */
 /* *((unsigned int *)&(&v1)[v0[12]]) = 100; */
 ((void (*)(void*))(*v3))(&v3);
 return;
}


// Function: sub_401578 at 0x401578
void sub_401578()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401580
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401586 at 0x401586
void sub_401586()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401590
void test_cpp_template_func()
{
 return;
}


// Function: sub_401596 at 0x401596
void sub_401596()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4015a0
void test_cpp_template_class()
{
 return;
}


// Function: sub_4015a6 at 0x4015a6
void sub_4015a6()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4015b0
void test_cpp_lambda()
{
 return;
}


// Function: sub_4015b6 at 0x4015b6
void sub_4015b6()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4015c0
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 void *v2; // esi
 unsigned int v3; // edx

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch();
 return;
}


// Function: sub_401601 at 0x401601
void sub_401601()
{
 unsigned int result; // edx
 void *v3; // eax
 unsigned int v5; // ebx

 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x40169e;
 __cxa_begin_catch(v3);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 848), 0);
 }
 __cxa_begin_catch(v3);
 __cxa_rethrow();
 return;
LABEL_0x40169e:
 return;
}


// Function: sub_40161f at 0x40161f
void sub_40161f()
{
 __cxa_end_catch();
 return;
}


// Function: sub_4016a6 at 0x4016a6
void sub_4016a6()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4016b0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4016b6 at 0x4016b6
void sub_4016b6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4016c0
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern char _ZTS12RTTIDerivedB;
extern char g_405ecc;
extern char g_405ee0;

void test_cpp_rtti()
{
 void* *ptr; // edi
 void* *p; // ebp
 char *v8; // eax
 char result; // al
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 char *v2; // [bp-0x1c]
 void* *v3; // [bp-0x18]
 struct_4 **v4; // [bp-0x14]

 ptr = malloc(4);
 *(ptr) = &g_405ecc;
 p = malloc(4);
 *(p) = &g_405ee0;
 /* v2 = *((int *)((int)(*(ptr))[4] + 4)); */
 /* v8 = *((int *)((int)(*(p))[4] + 4)); */
 v8 = &_ZTS12RTTIDerivedB;
 if (v8 == &_ZTS12RTTIDerivedB)
 {
 result = 1;
 }
 else if (*(char*)v8 == 42)
 {
 result = 0;
 }
 else
 {
 result = !strcmp(v8, &_ZTS12RTTIDerivedB);
 }
 v1 = 0;
 v0 = &_ZTI12RTTIDerivedA;
 v3 = ptr;
 v1 = 0;
 v0 = &_ZTI12RTTIDerivedB;
 /* strlen(&v2[*(v2) == 42]); */
 /* (int)(*(v3))[4](v3); */
 /* *(v4)->field_4(v4); */
 free(ptr);
 free(p);
 return;
}


// Function: sub_40180d at 0x40180d
void sub_40180d()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401810
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_403081;
extern char g_40309f;
extern char g_4030bb;
extern char g_4030d7;
extern char g_4030f3;
extern char g_403110;
extern char g_40312c;
extern char g_403148;
extern char g_403164;
extern char g_403180;
extern char g_40319d;
extern char g_4031ba;
extern char g_4031e5;
extern char g_405ce4;
extern struct_0 *g_405d04;
extern unsigned int g_405d28;
extern struct_1 *g_405d40;
extern unsigned int g_405db0;
extern unsigned int g_405dc8;
extern struct_2 *g_405de4;

void test_cpp_oo_features()
{
 unsigned int i; // esi
 unsigned int *v11; // eax
 unsigned int *ptr; // ecx
 unsigned int v0; // [bp-0x3c], Other Possible Types: void*, unsigned int
 char v1; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v2; // [bp-0x34], Other Possible Types: char, unsigned int
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int result; // [bp-0x1d]
 char flag1; // [bp-0x19]
 unsigned int v8; // [bp-0x14]

 puts(&g_4031e5);
 strncpy(&v1, "Test", 4);
 memset(&v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = 10;
 strlen(&v1);
 printf(&g_403081);
 i = 0;
 v11 = (unsigned int*)operator_new_array(20);
 ptr = v11;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(v11);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_40309f);
 v8 = (unsigned int)&g_405ce4;
 v0 = (unsigned int)&g_405d04;
 v1 = 3;
 if (g_405d04 && g_405d04->vfunc_ptr0)
   ((virtual_func_t)g_405d04->vfunc_ptr0)((void*)v8, 5);
 printf(&g_4030bb);
 v0 = (unsigned int)&g_405d28;
 v2 = (unsigned int)&g_405d40;
 v1 = 100;
 v3 = 200;
 if (g_405d40)
   ((virtual_void_func_t)*g_405d40)((void*)v0);
 printf(&g_4030d7);
 v0 = (unsigned int)&g_405db0;
 v4 = (unsigned int)&g_405de4;
 v2 = (unsigned int)&g_405dc8;
 v5 = 50;
 if (g_405de4)
   ((virtual_void_func_t)*g_405de4)((void*)v0);
 printf(&g_4030f3);
 printf(&g_403110);
 printf(&g_40312c);
 printf(&g_403148);
 printf(&g_403164);
 test_cpp_exception();
 printf(&g_403180);
 printf(&g_40319d);
 test_cpp_rtti();
 printf(&g_4031ba);
 return;
}


// Function: sub_401aa9 at 0x401aa9
void sub_401aa9()
{
 main();
 return;
}


// Function: main at 0x401ab0
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned int a0, unsigned int a1)
{
 _ZN4Base12virtual_funcEi((void*)a0, a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401ad0
void _ZN4Base12virtual_funcEi(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401ad8 at 0x401ad8
void sub_401ad8(unsigned int a0, unsigned int a1)
{
 _ZN7Derived12virtual_funcEi((void*)a0, a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401ae0
void _ZN7Derived12virtual_funcEi(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401aed at 0x401aed
void sub_401aed()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401af0
void _ZN4BaseD2Ev(void* this_ptr)
{
 return;
}


// Function: sub_401af1 at 0x401af1
void sub_401af1()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x401b00
void _ZN12MultiDerivedD2Ev(void* this_ptr)
{
 return;
}


// Function: sub_401b01 at 0x401b01
void sub_401b01()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401b10
void _ZN14DiamondDerivedD1Ev(void* this_ptr)
{
 return;
}


// Function: sub_401b11 at 0x401b11
void sub_401b11(unsigned int a0, unsigned int a1)
{
 _Z12template_maxIiET_S0_S0_(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401b20
int _Z12template_maxIiET_S0_S0_(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: sub_401b2e at 0x401b2e
void sub_401b2e(unsigned int a0)
{
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401b30
double _Z12template_maxIdET_S0_S0_(double arg_0, double arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}
// Function: sub_401b41 at 0x401b41
void sub_401b41(unsigned int a0, unsigned int a1)
{
 int x = a0;
 int y = a1;
 _Z13template_swapIiEvRT_S1_(&x, &y);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401b50
void _Z13template_swapIiEvRT_S1_(int *ptr, int *p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_401b63 at 0x401b63
void sub_401b63(unsigned int a0)
{
 struct ContainerInt {
   unsigned int data[10];
   unsigned int size;
 };
 struct ContainerInt c;
 _ZN9ContainerIiEC2Ev(&c);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401b70
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return;
}


// Function: sub_401b7c at 0x401b7c
void sub_401b7c(unsigned int a0)
{
 struct ContainerInt {
   unsigned int data[10];
   unsigned int size;
 };
 struct ContainerInt c;
 _ZN9ContainerIiE4pushEi(&c, a0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401b80
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0, unsigned int a1)
{
 struct ContainerInt {
   unsigned int data[10];
   unsigned int size;
 };
 struct ContainerInt c;
 _ZNK9ContainerIiE3getEi(&c, a0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ba0
int _ZNK9ContainerIiE3getEi(void* this, int arg_0)
{
 return 0;
}


// Function: sub_401bb7 at 0x401bb7
void sub_401bb7(unsigned int a0)
{
 struct ContainerInt {
   unsigned int data[10];
   unsigned int size;
 };
 struct ContainerInt c;
 _ZNK9ContainerIiE7getSizeEv(&c);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401bc0
unsigned int _ZNK9ContainerIiE7getSizeEv(void* this)
{
 return 0;
}


// Function: sub_401bc8 at 0x401bc8
void sub_401bc8(unsigned int a0)
{
 struct ContainerDouble {
   unsigned long long data[10];
   unsigned int size;
 };
 struct ContainerDouble c;
 _ZN9ContainerIdEC1Ev(&c);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401bd0
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: sub_401bdc at 0x401bdc
void sub_401bdc(unsigned int a0)
{
 struct ContainerDouble {
   unsigned long long data[10];
   unsigned int size;
 };
 struct ContainerDouble c;
 _ZN9ContainerIdE4pushEd(&c);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401be0
void _ZN9ContainerIdE4pushEd(void* ptr)
{
 unsigned int idx; // ecx

 idx = *((unsigned int *)((char *)ptr + 80));
 if (idx <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = idx + 1;
 *((unsigned long long *)((char *)ptr + 8 * idx)) = 0;
 }
 return;
}


// Function: sub_401bfe at 0x401bfe
void sub_401bfe(unsigned int a0, unsigned int a1)
{
 struct ContainerDouble {
   unsigned long long data[10];
   unsigned int size;
 };
 struct ContainerDouble c;
 _ZNK9ContainerIdE3getEi(&c, a0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401c00
double _ZNK9ContainerIdE3getEi(void* this, int arg_0)
{
 return 0.0;
}


// Function: sub_401c19 at 0x401c19
void sub_401c19(unsigned int a0)
{
 struct ContainerDouble {
   unsigned long long data[10];
   unsigned int size;
 };
 struct ContainerDouble c;
 _ZNK9ContainerIdE7getSizeEv(&c);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401c20
unsigned int _ZNK9ContainerIdE7getSizeEv(void* this)
{
 return 0;
}


// Function: sub_401c28 at 0x401c28
void sub_401c28()
{
 _ZNK4Base7getNameEv(0);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401c30
const char* _ZNK4Base7getNameEv(void* this)
{
 return "Base";
}


// Function: sub_401c43 at 0x401c43
int sub_401c43()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401c50
void _ZN4BaseD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401c71 at 0x401c71
void sub_401c71()
{
 _ZNK7Derived7getNameEv(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401c80
const char* _ZNK7Derived7getNameEv(void* this)
{
 return "Derived";
}


// Function: sub_401c93 at 0x401c93
int sub_401c93()
{
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401ca0
void _ZN7DerivedD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401cc1 at 0x401cc1
void sub_401cc1()
{
 _ZN12MultiDerived5funcAEv();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401cd0
void _ZN12MultiDerived5funcAEv()
{
 return;
}


// Function: sub_401cd6 at 0x401cd6
int sub_401cd6()
{
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401ce0
void _ZN12MultiDerivedD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401d01 at 0x401d01
void sub_401d01()
{
 _ZN12MultiDerived5funcBEv(0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401d10
void _ZN12MultiDerived5funcBEv(void* this)
{
 return;
}


// Function: sub_401d16 at 0x401d16
void sub_401d16()
{
 _ZThn8_N12MultiDerived5funcBEv();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401d20
void _ZThn8_N12MultiDerived5funcBEv()
{
 return;
}


// Function: sub_401d26 at 0x401d26
void sub_401d26()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401d30
void _ZThn8_N12MultiDerivedD1Ev()
{
 return;
}


// Function: sub_401d31 at 0x401d31
int sub_401d31()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401d40
void _ZThn8_N12MultiDerivedD0Ev(void* a0)
{
 operatordelete(a0 - 8);
 return;
}


// Function: sub_401d64 at 0x401d64
void sub_401d64()
{
 _ZN5BaseA5funcAEv(0);
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x401d70
void _ZN5BaseA5funcAEv(void* this)
{
 return;
}


// Function: sub_401d76 at 0x401d76
void sub_401d76()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x401d80
void _ZN5BaseAD2Ev(void* this_ptr)
{
 return;
}


// Function: sub_401d81 at 0x401d81
int sub_401d81()
{
 return 0;
}


// Function: _ZN5BaseAD0Ev at 0x401d90
void _ZN5BaseAD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401db1 at 0x401db1
void sub_401db1()
{
 _ZN5BaseB5funcBEv(0);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x401dc0
void _ZN5BaseB5funcBEv(void* this)
{
 return;
}


// Function: sub_401dc6 at 0x401dc6
void sub_401dc6()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x401dd0
void _ZN5BaseBD2Ev(void* this_ptr)
{
 return;
}


// Function: sub_401dd1 at 0x401dd1
int sub_401dd1()
{
 return 0;
}


// Function: _ZN5BaseBD0Ev at 0x401de0
void _ZN5BaseBD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401e01 at 0x401e01
void sub_401e01(unsigned int a0)
{
 _ZN7MiddleA4funcEv(0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401e10
void _ZN7MiddleA4funcEv(void* this)
{
 return;
}


// Function: sub_401e23 at 0x401e23
void sub_401e23()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401e30
void _ZN7MiddleAD1Ev(void* this_ptr)
{
 return;
}


// Function: sub_401e31 at 0x401e31
int sub_401e31()
{
 return 0;
}


// Function: _ZN7MiddleAD0Ev at 0x401e40
void _ZN7MiddleAD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401e61 at 0x401e61
void sub_401e61(unsigned int a0)
{
 _ZTv0_n12_N7MiddleA4funcEv(0);
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401e70
void _ZTv0_n12_N7MiddleA4funcEv(void* *a0)
{
 return;
}


// Function: sub_401e8c at 0x401e8c
void sub_401e8c()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401e90
void _ZTv0_n16_N7MiddleAD1Ev()
{
 return;
}


// Function: sub_401e91 at 0x401e91
int sub_401e91()
{
 return 0;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401ea0
void _ZTv0_n16_N7MiddleAD0Ev(void* *a0)
{
 if (a0 && *(a0))
 operatordelete((char *)a0 + (*(a0))[16]);
 return;
}


// Function: sub_401ec6 at 0x401ec6
void sub_401ec6(unsigned int a0)
{
 _ZN7MiddleB4funcEv(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401ed0
void _ZN7MiddleB4funcEv(void* this)
{
 return;
}


// Function: sub_401ee3 at 0x401ee3
void sub_401ee3()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x401ef0
void _ZN7MiddleBD1Ev(void* this_ptr)
{
 return;
}


// Function: sub_401ef1 at 0x401ef1
int sub_401ef1()
{
 return 0;
}


// Function: _ZN7MiddleBD0Ev at 0x401f00
void _ZN7MiddleBD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401f21 at 0x401f21
void sub_401f21(unsigned int a0)
{
 _ZTv0_n12_N7MiddleB4funcEv(0);
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401f30
void _ZTv0_n12_N7MiddleB4funcEv(void* *a0)
{
 return;
}


// Function: sub_401f4c at 0x401f4c
void sub_401f4c()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x401f50
void _ZTv0_n16_N7MiddleBD1Ev()
{
 return;
}


// Function: sub_401f51 at 0x401f51
int sub_401f51()
{
 return 0;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x401f60
void _ZTv0_n16_N7MiddleBD0Ev(void* *a0)
{
 if (a0 && *(a0))
 operatordelete((char *)a0 + (*(a0))[16]);
 return;
}


// Function: sub_401f86 at 0x401f86
void sub_401f86(unsigned int a0)
{
 _ZN14DiamondDerived4funcEv(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401f90
void _ZN14DiamondDerived4funcEv(void* this)
{
 return;
}


// Function: sub_401fa3 at 0x401fa3
int sub_401fa3()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401fb0
void _ZN14DiamondDerivedD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_401fd1 at 0x401fd1
void sub_401fd1(unsigned int a0)
{
 _ZThn8_N14DiamondDerived4funcEv(0);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401fe0
void _ZThn8_N14DiamondDerived4funcEv(void* a0)
{
 return;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x402000
void _ZThn8_N14DiamondDerivedD1Ev()
{
 return;
}


// Function: sub_402001 at 0x402001
int sub_402001()
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x402010
void _ZThn8_N14DiamondDerivedD0Ev(void* a0)
{
 operatordelete(a0 - 8);
 return;
}


// Function: sub_402034 at 0x402034
void sub_402034(unsigned int a0)
{
 _ZTv0_n12_N14DiamondDerived4funcEv();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x402040
void _ZTv0_n12_N14DiamondDerived4funcEv()
{
 return;
}


// Function: sub_40205c at 0x40205c
void sub_40205c()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x402060
void _ZTv0_n16_N14DiamondDerivedD1Ev()
{
 return;
}


// Function: sub_402061 at 0x402061
int sub_402061()
{
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x402070
void _ZTv0_n16_N14DiamondDerivedD0Ev(void* *a0)
{
 if (a0 && *(a0))
 operatordelete((char *)a0 + (*(a0))[16]);
 return;
}


// Function: sub_402096 at 0x402096
void sub_402096()
{
 _ZN11VirtualBase4funcEv(0);
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x4020a0
void _ZN11VirtualBase4funcEv(void* this)
{
 return;
}


// Function: sub_4020a6 at 0x4020a6
void sub_4020a6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4020b0
void _ZN11VirtualBaseD2Ev(void* this_ptr)
{
 return;
}


// Function: sub_4020b1 at 0x4020b1
int sub_4020b1()
{
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4020c0
void _ZN11VirtualBaseD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_4020e1 at 0x4020e1
int sub_4020e1()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4020f0
void _ZN12RTTIDerivedAD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_402111 at 0x402111
void sub_402111()
{
 _ZNK12RTTIDerivedA7getTypeEv(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402120
const char* _ZNK12RTTIDerivedA7getTypeEv(void* this)
{
 return "RTTIDerivedA";
}


// Function: sub_402126 at 0x402126
int sub_402126()
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402130
void _ZN8RTTIBaseD2Ev(void* this_ptr)
{
 return;
}


// Function: sub_402131 at 0x402131
int sub_402131()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402140
void _ZN12RTTIDerivedBD0Ev(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: sub_402161 at 0x402161
void sub_402161()
{
 _ZNK12RTTIDerivedB7getTypeEv(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402170
const char* _ZNK12RTTIDerivedB7getTypeEv(void* this)
{
 return "RTTIDerivedB";
}


// Function: sub_402176 at 0x402176
void sub_402176()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 __x86_get_pc_thunk_dx();
 return 0;
}


// Function: sub_4021c2 at 0x4021c2
void sub_4021c2()
{
}



/* CRT stub function _fini removed by preprocessor */


