// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 void* field_0;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

struct_0 *g_403fe8 = NULL;

/* Built-in functions */
#define __builtin_unreachable() do { } while(0)
#define __builtin_trap() do { __builtin_unreachable(); } while(0)

/* C++ runtime function declarations */
int __cxa_atexit(void (*func)(void*), void* obj, void* dso_handle);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, void* type_info, void* dest);
void __cxa_begin_catch(void* exception);
void __cxa_end_catch(void);
void _Unwind_Resume(void* exception);
void __cxa_rethrow(void);
void* __dynamic_cast(void* obj, void* from_type, void* to_type, long long offset);
unsigned long long MaxV(unsigned long long a, unsigned long long b);

/* MaxV implementation */
unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
 return (a > b) ? a : b;
}

/* Extern variable definitions */
unsigned long long g_404008 = 0;
unsigned long long __dso_handle = 0;
void (*_ZNSt8ios_base4InitD1Ev)(void*) = 0;
char _ZStL8__ioinit = 0;
void* _ZTIi = 0;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
const void* g_403d78 = 0;
const void* g_403da0 = 0;
const char* g_40207d = "%d\n";
const char* g_40209b = "%d\n";
const char* g_4020b7 = "%d\n";
const char* g_4020d3 = "%d\n";
const char* g_4020ef = "%d\n";
const char* g_40210c = "%d\n";
const char* g_402128 = "%d\n";
const char* g_402144 = "%d\n";
const char* g_402160 = "%d\n";
const char* g_40217c = "%d\n";
const char* g_402199 = "%d\n";
const char* g_4021b6 = "%d\n";
const char* g_4021d4 = "%s\n";
const void* _ZTI8RTTIBase = 0;
const void* _ZTI12RTTIDerivedA = 0;
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;

/* operator new/delete implementations */
void* _Znwj(size_t size)
{
 return malloc(size);
}

void _ZdlPv(void* ptr)
{
 free(ptr);
}

/* Container template stub */
typedef struct Container_int {
 int size;
 int data[10];
} Container_int;

typedef struct Container_double {
 int size;
 double data[10];
} Container_double;

/* RTTI class stubs */
typedef struct Base {
 void* vtable;
} Base;

typedef struct RTTIBase {
 void* vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
 void* vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
 void* vtable;
} RTTIDerivedB;

/* Lifecycle class stub */
typedef struct LifecycleClass {
 int dummy;
} LifecycleClass;

void _init()
{
 /* CRT stub - initialization function */
 return;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 const char *v1; // rdi

 v1 = "";  // Initialize to empty string
 return printf("%s", v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
void _GLOBAL__sub_I_main(void)
{
 /* std::ios_base::Init init removed - C++ standard library */
 __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_401147 at 0x401147
void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 /* _start() call removed - CRT stub */
 __builtin_unreachable();
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
 __builtin_trap();
}


// Function: sub_401176 at 0x401176
void sub_401176()
{
 /* deregister_tm_clones() call removed - CRT stub */
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 /* register_tm_clones() call removed - CRT stub */
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
 /* __do_global_dtors_aux() call removed - CRT stub */
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401225 at 0x401225
void sub_401225()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 /* frame_dummy() call removed - CRT stub */
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



/* Forward declarations for test functions */
void test_cpp_member_func(void);
void test_cpp_constructor(void);
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
void call_virtual_func(Base *arg_0, int arg_1);

/* Forward declaration for main */
int main(void);

/* Forward declarations for template functions */
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(int *ptr, int *p);

/* Forward declarations for Container<int> methods */
int Container_int_Constructor(Container_int *ptr);
void Container_int_push(Container_int *ptr, int arg_0);
int Container_int_get(Container_int *this, int arg_0);
int Container_int_getSize(Container_int *this);

/* Forward declarations for Container<double> methods */
int Container_double_Constructor(Container_double *ptr);
void Container_double_push(Container_double *ptr, double arg_0);
double Container_double_get(Container_double *this, int arg_0);
int Container_double_getSize(Container_double *this);

/* Forward declarations for RTTI methods */
int RTTIDerivedA_destructor(void* this);
void RTTIDerivedA_getType(void* this);
int RTTIBase_destructor(void* this);
int RTTIDerivedB_destructor(void* this);
void RTTIDerivedB_getType(void* this);



// Function: sub_401239 at 0x401239
void sub_401239()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401240
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(v1);
 printf("test_cpp_member_func: %d\n", v0);
 return;
}


// Function: sub_40127c at 0x40127c
void sub_40127c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401280
void test_cpp_constructor()
{
 printf("test_cpp_constructor called\n");
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
void call_virtual_func(Base *arg_0, int arg_1)
{
 void (*vfunc)(Base *, int);
 void** vtable = arg_0->vtable;
 vfunc = (void (*)(Base *, int))vtable[0];
 vfunc(arg_0, arg_1);
}


// Function: sub_4012a8 at 0x4012a8
void sub_4012a8()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012b0
void test_cpp_virtual_func()
{
 Base b;
 b.vtable = NULL;
 printf("test_cpp_virtual_func called\n");
 return;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012c0
void test_cpp_multiple_inheritance()
{
 printf("test_cpp_multiple_inheritance called\n");
 return;
}


// Function: sub_4012c6 at 0x4012c6
void sub_4012c6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012d0
void test_cpp_diamond_inheritance()
{
 printf("test_cpp_diamond_inheritance called\n");
 return;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012e0
void test_cpp_operator_overload()
{
 printf("test_cpp_operator_overload called\n");
 return;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4012f0
void test_cpp_template_func()
{
 int a = 5, b = 10;
 printf("test_cpp_template_func: max = %d\n", template_max_int(a, b));
 return;
}


// Function: sub_4012f6 at 0x4012f6
void sub_4012f6()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401300
void test_cpp_template_class()
{
 Container_int c;
 Container_int_Constructor(&c);
 printf("test_cpp_template_class: size = %d\n", c.size);
 return;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401310
void test_cpp_lambda()
{
 printf("test_cpp_lambda called\n");
 return;
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401320
void test_cpp_exception()
{
 unsigned int *ptr; // rax

 ptr = __cxa_allocate_exception(4);
 *ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 __builtin_unreachable();
}


// Function: sub_40134b at 0x40134b
void sub_40134b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx

 result = a2;
 if (result != 1)
 {
 __cxa_rethrow();
 }
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 return;
}


// Function: sub_401368 at 0x401368
void sub_401368(unsigned long a0, unsigned long a1, unsigned long a2)
{
 (void)a1;
 (void)a2;
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
void test_cpp_smart_ptr()
{
 printf("test_cpp_smart_ptr called\n");
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0
void test_cpp_rtti()
{
 void* ptr; // r14
 void* p; // r12

 ptr = _Znwj(8);
 *((void **)ptr) = (void *)g_403d78;
 p = _Znwj(8);
 *((void **)p) = (void *)g_403da0;
 _ZdlPv(ptr);
 _ZdlPv(p);
 return;
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0
void test_cpp_oo_features()
{
 void* ptr; // r14
 struct_0 **p; // r12
 unsigned int v10; // ebx
 unsigned int v11; // ebp
 unsigned int v0; // [bp-0x50]
 char v1; // [bp-0x4c]
 unsigned long long flag1; // [bp-0x3d]
 char result; // [bp-0x2d]

 puts(g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(g_40207d, (int)(strlen(&v1) + 4700));
 printf(g_40209b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_4020b7, 42);
 printf(g_4020d3, 71);
 printf(g_4020ef, 650);
 printf(g_40210c, 22);
 printf(g_402128, 39);
 printf(g_402144, 16);
 printf(g_402160, 85);
 printf(g_40217c, 0);
 printf(g_402199, 703);
 ptr = _Znwj(8);
 *((const void **)ptr) = g_403d78;
 p = (struct_0 **)_Znwj(8);
 v10 = (!__dynamic_cast(ptr, (void*)_ZTI8RTTIBase, (void*)_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(ptr, (void*)_ZTI8RTTIBase, (void*)_ZTI12RTTIDerivedA, 0) ? v10 : v10 + 200);
 _ZdlPv(ptr);
 _ZdlPv(p);
 printf(g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
void sub_401673()
{
 main();
 return;
}


// Function: main at 0x401680
int main()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40168a at 0x40168a
void sub_40168a(int a0, int a1)
{
 template_max_int(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401698 at 0x401698
void sub_401698()
{
 template_max_double(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
double template_max_double(double arg_0, double arg_1)
{
 return (arg_1 >= arg_0) ? arg_1 : arg_0;
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(int *a0, int *a1)
{
 template_swap_int(a0, a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap_int(int *ptr, int *p)
{
 int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((int *)p) = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
void sub_4016b9(unsigned long a0)
{
 Container_int_Constructor((Container_int *)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
int Container_int_Constructor(Container_int *ptr)
{
 ptr->size = 0;
 return 0;
}


// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(unsigned long a0)
{
 Container_int_push((Container_int *)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container_int_push(Container_int *ptr, int arg_0)
{
 unsigned long index; // rax

 index = ptr->size;
 if (index <= 9)
 {
 ptr->size = (unsigned int)index + 1;
 ptr->data[index] = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(unsigned long a0, unsigned long a1)
{
 Container_int_get((Container_int *)a0, a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
int Container_int_get(Container_int *this, int arg_0)
{
 return this->data[arg_0];
}


// Function: sub_401701 at 0x401701
void sub_401701(unsigned long a0)
{
 Container_int_getSize((Container_int *)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
int Container_int_getSize(Container_int *this)
{
 return this->size;
}


// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 Container_double_Constructor((Container_double *)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
int Container_double_Constructor(Container_double *ptr)
{
 ptr->size = 0;
 return 0;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 Container_double_push((Container_double *)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container_double_push(Container_double *ptr, double arg_0)
{
 unsigned long index; // rax

 index = ptr->size;
 if (index <= 9)
 {
 ptr->size = (unsigned int)index + 1;
 ptr->data[index] = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
void sub_401746(unsigned long a0, unsigned long a1)
{
 Container_double_get((Container_double *)a0, a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
double Container_double_get(Container_double *this, int arg_0)
{
 return this->data[arg_0];
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0)
{
 Container_double_getSize((Container_double *)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
int Container_double_getSize(Container_double *this)
{
 return this->size;
}


// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
int RTTIDerivedA_destructor(void* this)
{
 _ZdlPv(this);
 return 0;
}


// Function: sub_401785 at 0x401785
void sub_401785()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
int RTTIDerivedB_destructor(void* this)
{
 _ZdlPv(this);
 return 0;
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
void RTTIDerivedB_getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


