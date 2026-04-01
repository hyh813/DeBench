// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Forward declarations for test functions
void test_cpp_operator_overload(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_smart_ptr(void);
void test_cpp_lambda(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_exception(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
void test_cpp_virtual_func(void);
void test_cpp_constructor(void);
void test_cpp_member_func(void);

// Forward declarations for helper functions
void frame_dummy(void);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);
void __x86_get_pc_thunk_dx(void);
int __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void __x86_get_pc_thunk_dx(void) { }

// Forward declaration for main
int main(void);

// Forward declaration for call_virtual_func
void call_virtual_func(void *arg_0, int arg_1);

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

/* CRT stub function _init removed by preprocessor */

void (*g_405ff4)(void) = 0;

// Missing function stub definitions
void frame_dummy(void) { }
int __do_global_ctors_aux(void) { return 0; }
void __do_global_dtors_aux(void) { }

// C++ mangled name variables (defined later in file)
unsigned int _ZN14LifecycleClass14instance_countE;

// C++ mangled function declarations - stubs defined below
void _ZN4Base12virtual_funcEi(void* this, int arg);
void _ZN7Derived12virtual_funcEi(void* this, int arg);
int _ZN4BaseD2Ev(void* this);
int _ZN12MultiDerivedD2Ev(void* this);
int _ZN14DiamondDerivedD1Ev(void* this);
int _ZN4BaseD0Ev(void* this);
int _ZN7DerivedD0Ev(void* this);
int _ZN12MultiDerivedD0Ev(void* this);
int _ZN5BaseAD2Ev(void* this);
int _ZN5BaseBD2Ev(void* this);
int _ZN7MiddleAD1Ev(void* this);
int _ZN7MiddleBD1Ev(void* this);
int _ZN14DiamondDerivedD0Ev(void* this);
int _ZN11VirtualBaseD2Ev(void* this);
int _ZN12RTTIDerivedAD0Ev(void* this);
int _ZN8RTTIBaseD2Ev(void* this);
int _ZN12RTTIDerivedBD0Ev(void* this);

int my_init_func()
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
 return ptr[2];
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 void* v1; // ebx

 return (int)((unsigned int*)v1)[24];
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
void _ZNSt8ios_base4InitD1Ev(void* obj) { }
char _ZStL8__ioinit = 0;
unsigned int __dso_handle = 0;
int __cxa_atexit(void* func, void* obj, void* dso) { return 0; }

void std_ios_base_Init_Init(void* p) { }

int _GLOBAL__sub_I_5_1.cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 return __cxa_atexit((void*)_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


void _start(void);

// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 _start(); /* do not return */
}



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
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

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones(void)
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = (struct_0 *)0;
 v0 = v4;
 return 0;
}



// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
int __x86_get_pc_thunk_di(void)
{
 unsigned int v0; // eax

 return v0;
}






// Function: sub_401321 at 0x401321
int sub_401321()
{
 test_cpp_member_func();
 return 0;
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
 strlen(v1);
 return;
}


// Function: sub_4013a3 at 0x4013a3
int sub_4013a3()
{
 test_cpp_constructor();
 return 0;
}


// Function: _Z20test_cpp_constructorv at 0x4013b0
unsigned int _ZN14LifecycleClass14instance_countE = 0;

void* operator_new[](unsigned int size);
void operator_delete[](void* ptr);
void* operator_new(unsigned int size);
void operator_delete(void* ptr);

void* operator_new[](unsigned int size) { return malloc(size); }
void operator_delete[](void* ptr) { free(ptr); }
void* operator_new(unsigned int size) { return malloc(size); }
void operator_delete(void* ptr) { free(ptr); }

void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int *)operator_new[](20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete[](v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_401414 at 0x401414
int sub_401414()
{
 call_virtual_func(0, 0);
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401420
typedef struct Base {
    void** vtable;
} Base;

void call_virtual_func(void *arg_0, int arg_1)
{
 ((void (*)(void*, int))(*((void**)arg_0)))(arg_0, arg_1);
 return;
}


// Function: sub_401445 at 0x401445
int sub_401445()
{
 test_cpp_virtual_func();
 return 0;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401450

char g_405ce4 = 0;
struct_0 *g_405d04 = 0;

typedef struct struct_2 {
 unsigned int field_0;
} struct_2;

typedef struct struct_3 {
 unsigned int field_0;
} struct_3;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = (unsigned int)&g_405ce4;
 v0 = (struct_0 **)&g_405d04;
 v1 = 3;
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4014b0

char g_405d28 = 0;
struct_0 *g_405d40 = 0;

void test_cpp_multiple_inheritance()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 struct_0 **v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]

 v0 = (unsigned int)&g_405d28;
 v2 = (struct_0 **)&g_405d40;
 v1 = 100;
 v3 = 200;
 return;
}


// Function: sub_40150e at 0x40150e
int sub_40150e()
{
 test_cpp_diamond_inheritance();
 return 0;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401510

void* g_405db0 = 0;
unsigned int g_405dc8 = 0;
struct_0 *g_405de4 = 0;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x24]
 char v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 struct_0 **v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]

 v0 = &g_405db0;
 v3 = &g_405de4;
 v2 = (unsigned int)&g_405dc8;
 v4 = 50;
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
int sub_4015b6()
{
 test_cpp_exception();
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x4015c0
void* _ZTIi = 0;
void* _ZTI12RTTIDerivedA = 0;
void* _ZTI12RTTIDerivedB = 0;
char _ZTS12RTTIDerivedB = 0;

// Exception handling function declarations
void __cxa_rethrow(void* exc);
void* __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void* exc, void* type, void* dest);
void _Unwind_Resume(unsigned int v);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch(void* exc);

void* __cxa_allocate_exception(unsigned int size) { return malloc(size); }
void __cxa_throw(void* exc, void* type, void* dest) { }
void _Unwind_Resume(unsigned int v) { }
void* __cxa_begin_catch(void* exc) { return exc; }
void __cxa_end_catch(void* exc) { }
void __cxa_rethrow(void* exc) { }

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 v2 = 0;
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch((void*)v2);
 return;
}


// Function: sub_401601 at 0x401601
int sub_401601()
{
 unsigned int result; // edx
 unsigned int v3; // eax
 unsigned int v5; // ebx

 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x40169e;
 __cxa_begin_catch((void*)v3);
 __cxa_end_catch((void*)v3);
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 848), 0);
 }
 __cxa_begin_catch((void*)v3);
 __cxa_rethrow((void*)v3);
 return 0;
}


// Function: sub_40161f at 0x40161f
void sub_40161f()
{
 __cxa_end_catch(0);
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
int sub_4016b6()
{
 test_cpp_rtti();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x4016c0
typedef struct struct_5 {
 unsigned int field_0;
} struct_5;

typedef struct struct_4 {
 char padding_0[4];
 struct_5 *field_4;
} struct_4;

char g_405ecc = 0;
char g_405ee0 = 0;


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

 ptr = (void**)operator_new(4);
 *(ptr) = &g_405ecc;
 p = (void**)operator_new(4);
 *(p) = &g_405ee0;
 v1 = 0;
 v0 = _ZTI12RTTIDerivedA;
 v3 = ptr;
 v1 = 0;
 v0 = _ZTI12RTTIDerivedB;
 return;
}


// Function: sub_40180d at 0x40180d
int sub_40180d()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401810

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


void test_cpp_oo_features()
{
 unsigned int i; // esi
 unsigned int *v11; // eax
 unsigned int *ptr; // ecx
 struct_1 **v0; // [bp-0x3c], Other Possible Types: void*, unsigned int
 char v1; // [bp-0x38], Other Possible Types: unsigned int
 struct_2 **v2; // [bp-0x34], Other Possible Types: char, unsigned int
 unsigned int v3; // [bp-0x30]
 struct_3 **v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int result; // [bp-0x1d]
 char flag1; // [bp-0x19]
 struct_0 **v8; // [bp-0x14]

 puts((const char*)&g_4031e5);
 strncpy(&v1, "Test", 4);
 memset(&v2, 0, 20);
 result = 0;
 flag1 = 0;
 v0 = (struct_1**)10;
 strlen(&v1);
 printf((const char*)&g_403081);
 i = 0;
 v11 = operator_new[](20);
 ptr = v11;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete[](v11);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf((const char*)&g_40309f);
 v8 = &g_405ce4;
 v0 = &g_405d04;
 v1 = 3;
 printf((const char*)&g_4030bb);
 v0 = (struct_1**)&g_405d28;
 v2 = &g_405d40;
 v1 = 100;
 v3 = 200;
 printf((const char*)&g_4030d7);
 v0 = (struct_1**)&g_405db0;
 v4 = &g_405de4;
 v2 = (struct_2**)&g_405dc8;
 v5 = 50;
 printf((const char*)&g_4030f3);
 printf((const char*)&g_403110);
 printf((const char*)&g_40312c);
 printf((const char*)&g_403148);
 printf((const char*)&g_403164);
 test_cpp_exception();
 printf((const char*)&g_403180);
 printf((const char*)&g_40319d);
 test_cpp_rtti();
 printf((const char*)&g_4031ba);
 return;
}


// Function: sub_401aa9 at 0x401aa9
int sub_401aa9()
{
 main();
 return 0;
}


// Function: main at 0x401ab0
int main()
{
 test_cpp_oo_features();
 return 0;
}


int Base_virtual_func(Base* this, int arg);

// Function: sub_401acc at 0x401acc
void sub_401acc(unsigned int a0, unsigned int a1)
{
 Base_virtual_func(0, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401ad0
int Base_virtual_func(Base* this, int arg)
{
 char v1; // [bp+0x8]

 return *((int *)&v1) + 1;
}


void Derived_virtual_func(void* this, int arg_0);

// Function: sub_401ad8 at 0x401ad8
void sub_401ad8(unsigned int a0, unsigned int a1)
{
 Derived_virtual_func(0, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401ae0
void Derived_virtual_func(void* this, int arg_0)
{
 return;
}


// Function: sub_401aed at 0x401aed
void sub_401aed()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x401af0
int Base_destructor(void* this)
{
 return 0;
}


// Function: sub_401af1 at 0x401af1
void sub_401af1()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x401b00
int MultiDerived_destructor(void* this)
{
 return 0;
}


// Function: sub_401b01 at 0x401b01
void sub_401b01()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401b10
int DiamondDerived_destructor(void* this)
{
 return 0;
}


int template_max_int(int arg_0, int arg_1);

// Function: sub_401b11 at 0x401b11
void sub_401b11(unsigned int a0, unsigned int a1)
{
 (void)template_max_int(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401b20
int template_max_int(int arg_0, int arg_1)
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


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401b30
void template_swap_int(int *ptr, int *p);

// Function: sub_401b41 at 0x401b41
void sub_401b41(unsigned int a0, unsigned int a1)
{
 template_swap_int(0, 0);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401b50
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


int Container_int_Constructor(void* ptr);

// Function: sub_401b63 at 0x401b63
void sub_401b63(unsigned int a0)
{
 (void)Container_int_Constructor(0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401b70
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


void Container_int_push(void* ptr, int arg_0);

// Function: sub_401b7c at 0x401b7c
void sub_401b7c(unsigned int a0)
{
 Container_int_push(0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401b80
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = (int)*((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


void Container_int_get(void* this, int arg_0);

// Function: sub_401b9c at 0x401b9c
void sub_401b9c(unsigned int a0, unsigned int a1)
{
 Container_int_get(0, 0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401ba0
void Container_int_get(void* this, int arg_0)
{
 return;
}


void Container_int_getSize(void* this);

// Function: sub_401bb7 at 0x401bb7
void sub_401bb7(unsigned int a0)
{
 Container_int_getSize(0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401bc0
void Container_int_getSize(void* this)
{
 return;
}


int Container_double_Constructor(void* ptr);

// Function: sub_401bc8 at 0x401bc8
void sub_401bc8(unsigned int a0)
{
 (void)Container_double_Constructor(0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401bd0
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


void Container_double_push(void* ptr, double arg_0);

// Function: sub_401bdc at 0x401bdc
void sub_401bdc(unsigned int a0)
{
 Container_double_push(0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401be0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx; // ecx

 idx = (int)*((unsigned int *)((char*)ptr + 80));
 if (idx <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 }
 return;
}


void Container_double_get(void* this, int arg_0);

// Function: sub_401bfe at 0x401bfe
void sub_401bfe(unsigned int a0, unsigned int a1)
{
 Container_double_get(0, 0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401c00
void Container_double_get(void* this, int arg_0)
{
 if (arg_0 >= 0 && (int)*((unsigned int *)((char*)this + 80)) > arg_0)
 {
 }
 return;
}


void Container_double_getSize(void* this);

// Function: sub_401c19 at 0x401c19
void sub_401c19(unsigned int a0)
{
 Container_double_getSize(0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401c20
void Container_double_getSize(void* this)
{
 return;
}


void Base_getName(void* this);

// Function: sub_401c28 at 0x401c28
void sub_401c28()
{
 Base_getName(0);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401c30
void Base_getName(void* this)
{
 return;
}


// Function: sub_401c43 at 0x401c43
int sub_401c43()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401c50
int Base_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


void Derived_getName(void* this);

// Function: sub_401c71 at 0x401c71
void sub_401c71()
{
 Derived_getName(0);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401c80
void Derived_getName(void* this)
{
 return;
}


// Function: sub_401c93 at 0x401c93
void sub_401c93()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x401ca0
int Derived_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


int MultiDerived_funcA();

// Function: sub_401cc1 at 0x401cc1
void sub_401cc1()
{
 (void)MultiDerived_funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401cd0
int MultiDerived_funcA()
{
 return 30;
}


// Function: sub_401cd6 at 0x401cd6
int sub_401cd6()
{
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401ce0
int MultiDerived_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


void MultiDerived_funcB(void* this);

// Function: sub_401d01 at 0x401d01
void sub_401d01()
{
 MultiDerived_funcB(0);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x401d10
void MultiDerived_funcB(void* this)
{
 return;
}


unsigned int MultiDerived_funcB_thunk();

// Function: sub_401d16 at 0x401d16
void sub_401d16()
{
 (void)MultiDerived_funcB_thunk();
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x401d20
unsigned int MultiDerived_funcB_thunk()
{
 return 40;
}


// Function: sub_401d26 at 0x401d26
void sub_401d26()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x401d30
void MultiDerived_destructor_thunk()
{
 return;
}


// Function: sub_401d31 at 0x401d31
int sub_401d31()
{
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x401d40
unsigned int MultiDerived_destructor_delete_thunk(void* a0)
{
 return (unsigned int)operator_delete((char*)a0 - 8);
}


void BaseA_funcA(void* this);

// Function: sub_401d64 at 0x401d64
void sub_401d64()
{
 BaseA_funcA(0);
 return;
}


// Function: _ZN5BaseA5funcAEv at 0x401d70
void BaseA_funcA(void* this)
{
 return;
}


// Function: sub_401d76 at 0x401d76
void sub_401d76()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x401d80
int BaseA_destructor(void* this)
{
 return 0;
}


// Function: sub_401d81 at 0x401d81
void sub_401d81()
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x401d90
int BaseA_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


void BaseB_funcB(void* this);

// Function: sub_401db1 at 0x401db1
void sub_401db1()
{
 BaseB_funcB(0);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x401dc0
void BaseB_funcB(void* this)
{
 return;
}


// Function: sub_401dc6 at 0x401dc6
void sub_401dc6()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x401dd0
int BaseB_destructor(void* this)
{
 return 0;
}


// Function: sub_401dd1 at 0x401dd1
void sub_401dd1()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x401de0
int BaseB_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


void MiddleA_func(void* this);

// Function: sub_401e01 at 0x401e01
void sub_401e01(unsigned int a0)
{
 MiddleA_func(0);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x401e10
void MiddleA_func(void* this)
{
 return;
}


// Function: sub_401e23 at 0x401e23
void sub_401e23()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x401e30
int MiddleA_destructor(void* this)
{
 return 0;
}


// Function: sub_401e31 at 0x401e31
void sub_401e31()
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x401e40
int MiddleA_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


int MiddleA_func_thunk(void** a0);

// Function: sub_401e61 at 0x401e61
void sub_401e61(unsigned int a0)
{
 (void)MiddleA_func_thunk(0);
 return;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x401e70
int MiddleA_func_thunk(void* *a0)
{
 return 150;
}


// Function: sub_401e8c at 0x401e8c
void sub_401e8c()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x401e90
void MiddleA_destructor_thunk()
{
 return;
}


// Function: sub_401e91 at 0x401e91
void sub_401e91()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x401ea0
unsigned int MiddleA_destructor_delete_thunk(void** a0)
{
 return (unsigned int)operator_delete(a0);
}


void MiddleB_func(void* this);

// Function: sub_401ec6 at 0x401ec6
void sub_401ec6(unsigned int a0)
{
 MiddleB_func(0);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401ed0
void MiddleB_func(void* this)
{
 return;
}


// Function: sub_401ee3 at 0x401ee3
void sub_401ee3()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x401ef0
int MiddleB_destructor(void* this)
{
 return 0;
}


// Function: sub_401ef1 at 0x401ef1
void sub_401ef1()
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x401f00
int MiddleB_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


int MiddleB_func_thunk(void** a0);

// Function: sub_401f21 at 0x401f21
void sub_401f21(unsigned int a0)
{
 (void)MiddleB_func_thunk(0);
 return;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x401f30
int MiddleB_func_thunk(void* *a0)
{
 return 200;
}


// Function: sub_401f4c at 0x401f4c
void sub_401f4c()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x401f50
void MiddleB_destructor_thunk()
{
 return;
}


// Function: sub_401f51 at 0x401f51
void sub_401f51()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x401f60
unsigned int MiddleB_destructor_delete_thunk(void** a0)
{
 return (unsigned int)operator_delete(a0);
}


void DiamondDerived_func(void* this);

// Function: sub_401f86 at 0x401f86
void sub_401f86(unsigned int a0)
{
 DiamondDerived_func(0);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401f90
void DiamondDerived_func(void* this)
{
 return;
}


// Function: sub_401fa3 at 0x401fa3
int sub_401fa3()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x401fb0
int DiamondDerived_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


int DiamondDerived_func_thunk(void* a0);

// Function: sub_401fd1 at 0x401fd1
void sub_401fd1(unsigned int a0)
{
 (void)DiamondDerived_func_thunk(0);
 return;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x401fe0
int DiamondDerived_func_thunk(void* a0)
{
 return 250;
}


// Function: sub_401ff4 at 0x401ff4
void sub_401ff4()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x402000
void DiamondDerived_destructor_thunk()
{
 return;
}


// Function: sub_402001 at 0x402001
void sub_402001()
{
 return;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x402010
unsigned int DiamondDerived_destructor_delete_thunk(void* a0)
{
 return (unsigned int)operator_delete((char*)a0 - 8);
}


int DiamondDerived_func_vthunk();

// Function: sub_402034 at 0x402034
void sub_402034(unsigned int a0)
{
 (void)DiamondDerived_func_vthunk();
 return;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x402040
int DiamondDerived_func_vthunk()
{
 return 250;
}


// Function: sub_40205c at 0x40205c
void sub_40205c()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x402060
void DiamondDerived_destructor_vthunk()
{
 return;
}


// Function: sub_402061 at 0x402061
void sub_402061()
{
 return;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x402070
unsigned int DiamondDerived_destructor_delete_vthunk(void** a0)
{
 return (unsigned int)operator_delete(a0);
}


void VirtualBase_func(void* this);

// Function: sub_402096 at 0x402096
void sub_402096()
{
 VirtualBase_func(0);
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x4020a0
void VirtualBase_func(void* this)
{
 return;
}


// Function: sub_4020a6 at 0x4020a6
void sub_4020a6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4020b0
int VirtualBase_destructor(void* this)
{
 return 0;
}


// Function: sub_4020b1 at 0x4020b1
void sub_4020b1()
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4020c0
int VirtualBase_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: sub_4020e1 at 0x4020e1
void sub_4020e1()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4020f0
int RTTIDerivedA_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


void RTTIDerivedA_getType(void* this);

// Function: sub_402111 at 0x402111
void sub_402111()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402120
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: sub_402126 at 0x402126
void sub_402126()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402130
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: sub_402131 at 0x402131
void sub_402131()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402140
int RTTIDerivedB_destructor_delete(void* this)
{
 operator_delete(this);
 return 0;
}


void RTTIDerivedB_getType(void* this);

// Function: sub_402161 at 0x402161
void sub_402161()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402170
void RTTIDerivedB_getType(void* this)
{
 return;
}


// Function: sub_402176 at 0x402176
void sub_402176()
{
 __do_global_ctors_aux();
 return;
}


// Function: sub_4021c2 at 0x4021c2
void sub_4021c2()
{
}


