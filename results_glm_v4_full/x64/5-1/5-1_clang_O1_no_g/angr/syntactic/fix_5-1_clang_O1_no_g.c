// Angr Decompilation of 5-1_clang_O1_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>

/* CRT stub function _init removed by preprocessor */


struct_0 *g_405fe8 = NULL;

/* Forward declarations for C++ runtime */
extern void __cxa_atexit(void (*f)(void*), void* p, void* d);
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* exc, void* type, void* dest);
extern void __cxa_begin_catch(void* exc);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void* exc);

/* Standard C++ namespace simulation */
namespace std {
    namespace ios_base {
        class Init {
        public:
            Init(void* p) {}
        };
    }
}

/* Forward declaration for struct_0 */
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

/* Forward declaration for LifecycleClass */
typedef struct LifecycleClass {
} LifecycleClass;

/* Forward declaration for Base - needed before function declarations */
typedef struct Base {
} Base;

/* Forward declarations for other classes */
typedef struct Derived {
} Derived;

typedef struct MultiDerived {
} MultiDerived;

typedef struct DiamondDerived {
} DiamondDerived;

typedef struct BaseA {
} BaseA;

typedef struct BaseB {
} BaseB;

typedef struct MiddleA {
} MiddleA;

typedef struct MiddleB {
} MiddleB;

typedef struct VirtualBase {
} VirtualBase;

typedef struct RTTIBase {
} RTTIBase;

typedef struct RTTIDerivedA {
} RTTIDerivedA;

typedef struct RTTIDerivedB {
} RTTIDerivedB;

/* Stub functions for CRT */
void _start(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Additional function declarations */
unsigned long long MaxV(unsigned long long a, unsigned long long b);
long long Base_virtual_func(void* this_ptr, int arg_0);
void Derived_virtual_func(void* this_ptr, int arg_0);
long long MultiDerived_funcA(void* this_ptr);
void MultiDerived_funcB(void* this);
long long MultiDerived_funcB_thunk(void* this_ptr);
void DiamondDerived_func(void* this);
void test_cpp_virtual_func(void);
int Base_destructor(void* this_ptr);
int MultiDerived_destructor(void* this_ptr);
int DiamondDerived_destructor(void* this_ptr);
int BaseA_destructor(void* this);
int BaseB_destructor(void* this);
int MiddleA_destructor(void* this);
int MiddleB_destructor(void* this);
int VirtualBase_destructor(void* this);
int RTTIBase_destructor(void* this);
int Base_deleting_destructor(void* this_ptr);
int Derived_deleting_destructor(void* this_ptr);
int MultiDerived_destructor_delete(void* this_ptr);
int BaseA_destructor_delete(void* this);
int BaseB_destructor_delete(void* this);
int MiddleA_destructor_delete(void* this);
int MiddleB_destructor_delete(void* this);
int DiamondDerived_destructor_delete(void* this);
int VirtualBase_destructor_delete(void* this);
int RTTIDerivedA_destructor_delete(void* this);
int RTTIDerivedB_destructor_delete(void* this);

/* Test functions forward declarations */
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void call_virtual_func(struct Base *arg_0, int arg_1);
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
unsigned int main(void);
char*Base_getName(void* this);
char*Derived_getName(void* this);
void BaseA_funcA(void* this);
void BaseB_funcB(void* this);
void MiddleA_func(void* this);
int MiddleA_thunk_func(void* *a0);
void MiddleB_func(void* this);
int thunk_to_MiddleB_func(void* *a0);
void VirtualBase_func(void* this);
char*RTTIDerivedA_getType(void* this);
char*RTTIDerivedB_getType(void* this);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(int *ptr, int *p);
void Container_int_Constructor(void* ptr);
void Container_int_push(void* ptr, int arg_0);
int Container_int_get(void* this, int arg_0);
unsigned int Container_int_getSize(void* this);
void Container_double_Constructor(void* ptr);
void Container_double_push(void* ptr, double arg_0);
double Container_double_get(void* this, int arg_0);
unsigned int Container_double_getSize(void* this);
void non_virtual_thunk_to_MultiDerived_D1(void);
long long non_virtual_thunk_to_MultiDerived_D0(void* a0);
int non_virtual_thunk_to_DiamondDerived_func(void* a0);
void non_virtual_thunk_to_DiamondDerived_destructor(void);
long long non_virtual_thunk_to_DiamondDerived_destructor_delete(void* a0);
long long thunk_to_DiamondDerived_func_vtable(void* v1);
void thunk_to_DiamondDerived_destructor(void);
long long thunk_to_DiamondDerived_destructor_delete(void* *a0);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_405fe8;
 if (g_405fe8) {
     /* Function call stub */
 }
 return v1;
}


// Function: sub_402020 at 0x402020
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;

void sub_402020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 /* goto g_406010; - Invalid goto to variable, removed */
 return;
}

unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
 if (b >= a)
 return b;
 return a;
}


// Function: sub_40202c at 0x40202c
extern void* operator new[](unsigned long size);
extern void* operator new(unsigned long size);
extern void operator delete[](void* ptr);
extern void operator delete(void* ptr);

int sub_40202c()
{
unsigned int v1 = 4; // rdi

 return (int)(unsigned long)operator new[](v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x402150
void _ZNSt8ios_base4InitD1Ev(void* p) {}
struct _ZStL8__ioinit_struct { int dummy; } _ZStL8__ioinit = {0};
unsigned long long __dso_handle = 0;

void _GLOBAL__sub_I_5_1.cpp()
{
 /* std::ios_base::Init::Init(&_ZStL8__ioinit); */
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_402178 at 0x402178
void sub_402178(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub functions */
void _start(void)
{
    return;
}

void deregister_tm_clones(void)
{
    return;
}

void register_tm_clones(void)
{
    return;
}

void __do_global_dtors_aux(void)
{
    return;
}

void frame_dummy(void)
{
    return;
}



// Function: sub_4021a5 at 0x4021a5
void sub_4021a5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4202917 */
}


// Function: sub_4021a6 at 0x4021a6
void sub_4021a6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4021d9 at 0x4021d9
void sub_4021d9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_402219 at 0x402219
void sub_402219()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_402255 at 0x402255
void sub_402255()
{
}


// Function: sub_402259 at 0x402259
void sub_402259()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_402269 at 0x402269
void sub_402269()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x402270
void test_cpp_member_func()
{
 unsigned int v0;
 char v1[15];
 unsigned long long flag1;
 char result;

 strncpy(&v1, "Test", 4);
 flag1 = 0;
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_4022ac at 0x4022ac
void sub_4022ac()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x4022b0
unsigned int _ZN14LifecycleClass14instance_countE = 0;

void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = operator new[](20);
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](v1);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: sub_402303 at 0x402303
void sub_402303()
{
 call_virtual_func(NULL, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x402310
void call_virtual_func(struct Base *arg_0, int arg_1)
{
 unsigned long long v2; // rax;
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 if (arg_0 != NULL) {
     /* Virtual function call through vtable */
 }
 return;
}


// Function: sub_402318 at 0x402318
void sub_402318()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x402320
char g_4059c8 = 0;
struct_0 *g_405a08 = NULL;

void test_cpp_virtual_func()
{
 struct_0 **v0; // [bp-0x20]
 unsigned int v1; // [bp-0x18]
 unsigned long v2; // [bp-0x10]

 v2 = (unsigned long)&g_4059c8;
 v0 = &g_405a08;
 v1 = 3;
 Base_virtual_func(&v2, 5);
 if (*v0 != NULL) {
     /* Virtual function call */
 }
 return;
}


// Function: sub_402373 at 0x402373
void sub_402373()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x402380
char g_405a50 = 0;
struct_0 *g_405a80 = NULL;

void test_cpp_multiple_inheritance()
{
 unsigned long v0; // [bp-0x30]
 unsigned int v1; // [bp-0x28]
 struct_0 **v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]

 v0 = (unsigned long)&g_405a50;
 v2 = &g_405a80;
 v1 = 100;
 v3 = 200;
 MultiDerived_funcA(&v0);
 if (*v2 != NULL) {
     /* Virtual function call */
 }
 return;
}


// Function: sub_4023d8 at 0x4023d8
void sub_4023d8()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4023e0
struct_0 *g_405b58 = NULL;
unsigned long long g_405b88 = 0;
struct_0 *g_405bc0 = NULL;

void test_cpp_diamond_inheritance()
{
 void* v0; // [bp-0x40]
 char v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 struct_0 **v3; // [bp-0x20]
 unsigned int v4; // [bp-0x18]

 v0 = &g_405b58;
 v3 = &g_405bc0;
 v2 = (unsigned long long)&g_405b88;
 v4 = 50;
 DiamondDerived_func(&v3);
 /* *((unsigned int *)&(&v1)[v0[24]]) = 100; - Invalid pointer arithmetic removed */
 if (*v3 != NULL) {
     /* Virtual function call */
 }
 return;
}


// Function: sub_402446 at 0x402446
void sub_402446()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x402450
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_402456 at 0x402456
void sub_402456()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x402460
void test_cpp_template_func()
{
 return;
}


// Function: sub_402466 at 0x402466
void sub_402466()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x402470
void test_cpp_template_class()
{
 return;
}


// Function: sub_402476 at 0x402476
void sub_402476()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x402480
void test_cpp_lambda()
{
 return;
}


// Function: sub_402486 at 0x402486
void sub_402486()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x402490
extern char _ZTIi;
char _ZTIi = 0;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 __cxa_begin_catch(v2);
 __cxa_end_catch();
 return;
}


// Function: sub_4024bb at 0x4024bb
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;

long long sub_4024bb(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx

 result = a2;
 if (result != 1)
 {
 __cxa_begin_catch(a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch(a0);
 __cxa_rethrow();
 return 0;
}


// Function: sub_4024d8 at 0x4024d8
void sub_4024d8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x402550
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_402556 at 0x402556
void sub_402556()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x402560
char g_405d78 = 0;
char g_405da0 = 0;

void test_cpp_rtti()
{
 unsigned long long v2; // rax
 void* *p; // r14
 void* *ptr; // r13
 char *v5; // r15
 char result; // al
 unsigned long long v0; // [bp-0x38]

 v0 = v2;
 p = operator new(8);
 *(p) = &g_405d78;
 ptr = operator new(8);
 *(ptr) = &g_405da0;
 v5 = *((long long *)((long long)(*(p))[8] + 8));
 if (*((long long *)((long long)(*(ptr))[8] + 8)) == "12RTTIDerivedB")
 {
 result = 1;
 }
 else if (*((char *)*((long long *)((long long)(*(ptr))[8] + 8))) == 42)
 {
 result = 0;
 }
 else
 {
 result = !strcmp(*((long long *)((long long)(*(ptr))[8] + 8)), "12RTTIDerivedB");
 }
 strlen(&v5[*(v5) == 42]);
 (long long)(*(p))[8](p);
 operator delete(p);
 (long long)(*(ptr))[8](ptr);
 operator delete(ptr);
 return;
}


// Function: sub_40269a at 0x40269a
void sub_40269a()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4026a0
typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern unsigned int _ZN14LifecycleClass14instance_countE;
const char* g_40307d = "%s\n";
const char* g_40309b = "%d\n";
const char* g_4030b7 = "%d\n";
const char* g_4030d3 = "%d\n";
const char* g_4030ef = "%d\n";
const char* g_40310c = "%d\n";
const char* g_403128 = "%d\n";
const char* g_403144 = "%d\n";
const char* g_403160 = "%d\n";
const char* g_40317c = "%d\n";
const char* g_403199 = "%d\n";
const char* g_4031b6 = "%d\n";
const char* g_4031e1 = "Test";

void test_cpp_oo_features()
{
 unsigned long long i; // rbx
 unsigned int p[3]; // rax
 unsigned int ptr[3]; // rcx
 unsigned long v19; // rbx
 unsigned int v20; // eax
 unsigned long long v23; // rax
 void* v0; // [bp-0x48]
 struct_0 **v2; // [bp-0x48]
 unsigned long v3; // [bp-0x48]
 char v4; // [bp-0x44]
 unsigned int v5; // [bp-0x40]
 unsigned long v6; // [bp-0x38]
 unsigned long long v7; // [bp-0x35]
 unsigned int v8; // [bp-0x30]
 struct_1 **v9; // [bp-0x28]
 char result; // [bp-0x25]
 unsigned int v11; // [bp-0x20]
 unsigned long v12; // [bp-0x18]

 puts(&g_4031e1);
 strncpy(&v4, "Test", 4);
 v7 = 0;
 result = 0;
 *((unsigned int *)&v2) = 10;
 i = 0;
 printf(&g_40307d, (unsigned int)strlen(&v4) + 4700);
 p = operator new[](20);
 ptr = p;
 do
 {
 ptr[0] = i;
 i += 10;
 ptr = &ptr[1];
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 v19 = _ZN14LifecycleClass14instance_countE + p[2];
 operator delete[](p);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 printf(&g_40309b, _ZN14LifecycleClass14instance_countE * 1000 + v19);
 v12 = &g_4059c8;
 v2 = &g_405a08;
 v5 = 3;
 v20 = Base_virtual_func(&v12, 5);
 printf(&g_4030b7, v20 + (*(v2))(&v2, 5) + 21);
 v3 = &g_405a50;
 v6 = &g_405a80;
 v5 = 100;
 v8 = 200;
 printf(&g_4030d3, (int)MultiDerived_funcB_thunk(&v6) + 31);
 v0 = &g_405b58;
 v9 = &g_405bc0;
 v6 = &g_405b88;
 v11 = 50;
 v23 = DiamondDerived_func(&v9);
 *((unsigned int *)((char *)&v5 + v0[24])) = 100;
 printf(&g_4030ef, (v23 & 4294967295) + ((*(v9))(&v9) & 4294967295) & 4294967295);
 printf(&g_40310c, 22);
 printf(&g_403128, 39);
 printf(&g_403144, 16);
 printf(&g_403160, 85);
 printf(&g_40317c, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_403199, 703);
 printf(&g_4031b6, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: sub_4028ec at 0x4028ec
void sub_4028ec()
{
 main();
 return;
}


// Function: main at 0x4028f0
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_4028fa at 0x4028fa
void sub_4028fa()
{
 Base_virtual_func(NULL, 0);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x402900
long long Base_virtual_func(void* this_ptr, int arg_0)
{
 unsigned int v1 = 0;

 return v1 + 1;
}


// Function: sub_402904 at 0x402904
void sub_402904()
{
 Derived_virtual_func(NULL, 0);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x402910
void Derived_virtual_func(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_402917 at 0x402917
void sub_402917()
{
 return;
}


// Function: _ZN4BaseD2Ev at 0x402920
int Base_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_402921 at 0x402921
void sub_402921()
{
 return;
}


// Function: _ZN12MultiDerivedD2Ev at 0x402930
int MultiDerived_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_402931 at 0x402931
void sub_402931()
{
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x402940
int DiamondDerived_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_402941 at 0x402941
void sub_402941()
{
 template_max_int(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x402950
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_402958 at 0x402958
void sub_402958()
{
 template_max_double(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x402960
double template_max_double(double arg_0, double arg_1)
{
 return (double)(unsigned long long)(MaxV((unsigned long long)arg_0, (unsigned long long)arg_1));
}


// Function: sub_402965 at 0x402965
void sub_402965(unsigned long a0, unsigned long a1)
{
 template_swap_int((int*)a0, (int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x402970
void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: sub_402979 at 0x402979
void sub_402979()
{
 Container_int_Constructor(NULL);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x402980
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: sub_402988 at 0x402988
void sub_402988()
{
 Container_int_push(NULL, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x402990
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (unsigned long)(int)((unsigned char*)ptr)[40];
 if (index <= 9)
 {
 *((unsigned int *)&((unsigned char*)ptr)[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4029a4 at 0x4029a4
void sub_4029a4()
{
 Container_int_get(NULL, 0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4029b0
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: sub_4029c2 at 0x4029c2
void sub_4029c2()
{
 Container_int_getSize(NULL);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4029d0
unsigned int Container_int_getSize(void* this)
{
 return 0;
}


// Function: sub_4029d4 at 0x4029d4
void sub_4029d4()
{
 Container_double_Constructor(NULL);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4029e0
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: sub_4029e8 at 0x4029e8
void sub_4029e8()
{
 Container_double_push(NULL, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4029f0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[80];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[80]) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_402a06 at 0x402a06
void sub_402a06()
{
 Container_double_get(NULL, 0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x402a10
double Container_double_get(void* this, int arg_0)
{
 return 0.0;
}


// Function: sub_402a25 at 0x402a25
void sub_402a25(unsigned long a0)
{
 Container_double_getSize(NULL);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x402a30
unsigned int Container_double_getSize(void* this)
{
 return 0;
}


// Function: sub_402a34 at 0x402a34
void sub_402a34()
{
 Base_getName(NULL);
 return;
}


// Function: _ZNK4Base7getNameEv at 0x402a40
char* Base_getName(void* this)
{
 return "Base";
}


// Function: sub_402a48 at 0x402a48
void sub_402a48()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x402a50
int Base_deleting_destructor(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this_ptr);
 return 0;
}


// Function: sub_402a58 at 0x402a58
void sub_402a58()
{
 Derived_getName(NULL);
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x402a60
char* Derived_getName(void* this)
{
 return "Derived";
}


// Function: sub_402a68 at 0x402a68
void sub_402a68()
{
 return;
}


// Function: _ZN7DerivedD0Ev at 0x402a70
int Derived_deleting_destructor(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this_ptr);
 return 0;
}


// Function: sub_402a78 at 0x402a78
void sub_402a78()
{
 MultiDerived_funcA(NULL);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x402a80
long long MultiDerived_funcA(void* this_ptr)
{
 return 30;
}


// Function: sub_402a86 at 0x402a86
void sub_402a86()
{
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x402a90
int MultiDerived_destructor_delete(void* this_ptr)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this_ptr);
 return;
}


// Function: sub_402a98 at 0x402a98
void sub_402a98()
{
 MultiDerived_funcB(NULL);
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x402aa0
void MultiDerived_funcB(void* this)
{
 return;
}


// Function: sub_402aa6 at 0x402aa6
void sub_402aa6()
{
 MultiDerived_funcB_thunk(NULL);
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x402ab0
long long MultiDerived_funcB_thunk(void* this_ptr)
{
 return 40;
}


// Function: sub_402ab6 at 0x402ab6
void sub_402ab6()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x402ac0
void non_virtual_thunk_to_MultiDerived_D1(void)
{
 return;
}


// Function: sub_402ac1 at 0x402ac1
void sub_402ac1()
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x402ad0
long long non_virtual_thunk_to_MultiDerived_D0(void* a0)
{
 unsigned long v1; // rax

 operator delete(a0 - 16);
 return v1;
}


// Function: sub_402adc at 0x402adc
void sub_402adc()
{
 BaseA_funcA(NULL);
 return;
}


// Function: _ZN5BaseA5funcAEAEv at 0x402ae0
void BaseA_funcA(void* this)
{
 return;
}


// Function: sub_402ae6 at 0x402ae6
void sub_402ae6()
{
 return;
}


// Function: _ZN5BaseAD2Ev at 0x402af0
int BaseA_destructor(void* this)
{
 return;
}


// Function: sub_402af1 at 0x402af1
void sub_402af1()
{
 return;
}


// Function: _ZN5BaseAD0Ev at 0x402b00
int BaseA_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return 0;
}


// Function: sub_402b08 at 0x402b08
void sub_402b08()
{
 BaseB_funcB(NULL);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x402b10
void BaseB_funcB(void* this)
{
 return;
}


// Function: sub_402b16 at 0x402b16
void sub_402b16()
{
 return;
}


// Function: _ZN5BaseBD2Ev at 0x402b20
int BaseB_destructor(void* this)
{
 return;
}


// Function: sub_402b21 at 0x402b21
void sub_402b21()
{
 return;
}


// Function: _ZN5BaseBD0Ev at 0x402b30
int BaseB_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402b38 at 0x402b38
void sub_402b38()
{
 MiddleA_func(NULL);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x402b40
void MiddleA_func(void* this)
{
 return;
}


// Function: sub_402b51 at 0x402b51
void sub_402b51()
{
 return;
}


// Function: _ZN7MiddleAD1Ev at 0x402b60
int MiddleA_destructor(void* this)
{
 return;
}


// Function: sub_402b61 at 0x402b61
void sub_402b61()
{
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x402b70
int MiddleA_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402b78 at 0x402b78
void sub_402b78()
{
 MiddleA_thunk_func(NULL);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x402b80
int MiddleA_thunk_func(void* *a0)
{
 return 150 + *((int *)(8 + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)) + (char *)a0 + (*(a0))[24]));
}


// Function: sub_402b9d at 0x402b9d
void sub_402b9d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD1Ev at 0x402ba0
void MiddleA_thunk_destructor()
{
 return;
}


// Function: sub_402ba1 at 0x402ba1
void sub_402ba1()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleAD0Ev at 0x402bb0
long long MiddleA_thunk_deleting_destructor(void* *a0)
{
 unsigned long v1; // rax

 operator delete((char *)a0 + (*(a0))[32]);
 return v1;
}


// Function: sub_402bbf at 0x402bbf
void sub_402bbf()
{
 MiddleB_func(NULL);
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x402bc0
void MiddleB_func(void* this)
{
 return;
}


// Function: sub_402bd1 at 0x402bd1
void sub_402bd1()
{
 return;
}


// Function: _ZN7MiddleBD1Ev at 0x402be0
int MiddleB_destructor(void* this)
{
 return;
}


// Function: sub_402be1 at 0x402be1
void sub_402be1()
{
 return;
}


// Function: _ZN7MiddleBD0Ev at 0x402bf0
int MiddleB_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402bf8 at 0x402bf8
void sub_402bf8()
{
 thunk_to_MiddleB_func(NULL);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x402c00
int thunk_to_MiddleB_func(void* *a0)
{
 return 200 + *((int *)(8 + *((long long *)(*((long long *)((char *)a0 + (*(a0))[24])) - 24)) + (char *)a0 + (*(a0))[24]));
}


// Function: sub_402c1d at 0x402c1d
void sub_402c1d()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD1Ev at 0x402c20
void thunk_to_MiddleB_destructor(void)
{
 return;
}


// Function: sub_402c21 at 0x402c21
void sub_402c21()
{
 return;
}


// Function: _ZTv0_n32_N7MiddleBD0Ev at 0x402c30
long long thunk_to_MiddleB_destructor_delete(void* *a0)
{
 unsigned long v1; // rax

 operator delete((char *)a0 + (*(a0))[32]);
 return v1;
}


// Function: sub_402c3f at 0x402c3f
void sub_402c3f()
{
 DiamondDerived_func(NULL);
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x402c40
void DiamondDerived_func(void* this)
{
 return;
}


// Function: sub_402c51 at 0x402c51
void sub_402c51()
{
 return;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x402c60
int DiamondDerived_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402c68 at 0x402c68
void sub_402c68()
{
 non_virtual_thunk_to_DiamondDerived_func(NULL);
 return;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x402c70
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return 250 + *((int *)(-8 + (char *)a0 + *((long long *)((long long)a0[16] - 24))));
}


// Function: sub_402c82 at 0x402c82
void sub_402c82()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x402c90
void non_virtual_thunk_to_DiamondDerived_destructor(void)
{
 return;
}


// Function: sub_402c91 at 0x402c91
void sub_402c91()
{
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x402ca0
long long non_virtual_thunk_to_DiamondDerived_destructor_delete(void* a0)
{
 unsigned long v1; // rax

 operator delete(a0 - 16);
 return v1;
}


// Function: sub_402cac at 0x402cac
void sub_402cac()
{
 thunk_to_DiamondDerived_func(NULL);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x402cb0
long long thunk_to_DiamondDerived_func_vtable(void* v1)
{
 return 250 + *((int *)(8 + *((long long *)(*((long long *)((char *)v1 + (*(v1))[24])) - 24)) + (char *)v1 + (*(v1))[24]));
}


// Function: sub_402ccd at 0x402ccd
void sub_402ccd()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x402cd0
void thunk_to_DiamondDerived_destructor(void)
{
 return;
}


// Function: sub_402cd1 at 0x402cd1
void sub_402cd1()
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x402ce0
long long thunk_to_DiamondDerived_destructor_delete(void* *a0)
{
 unsigned long v1; // rax

 operator delete((char *)a0 + (*(a0))[32]);
 return v1;
}


// Function: sub_402cef at 0x402cef
void sub_402cef()
{
 VirtualBase_func(NULL);
 return;
}


// Function: _ZN11VirtualBase4funcEv at 0x402cf0
void VirtualBase_func(void* this)
{
 return;
}


// Function: sub_402cf6 at 0x402cf6
void sub_402cf6()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x402d00
int VirtualBase_destructor(void* this)
{
 return;
}


// Function: sub_402d01 at 0x402d01
void sub_402d01()
{
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x402d10
int VirtualBase_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402d18 at 0x402d18
void sub_402d18()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x402d20
int RTTIDerivedA_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402d28 at 0x402d28
void sub_402d28()
{
 RTTIDerivedA_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x402d30
char* RTTIDerivedA_getType(void* this)
{
 return "RTTIDerivedA";
}


// Function: sub_402d36 at 0x402d36
void sub_402d36()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x402d40
int RTTIBase_destructor(void* this)
{
 return;
}


// Function: sub_402d41 at 0x402d41
void sub_402d41()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x402d50
int RTTIDerivedB_destructor_delete(void* this)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 operator delete(this);
 return;
}


// Function: sub_402d58 at 0x402d58
void sub_402d58()
{
 RTTIDerivedB_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x402d60
char* RTTIDerivedB_getType(void* this)
{
 return "RTTIDerivedB";
}



/* CRT stub function _fini removed by preprocessor */


