// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 struct_0_t;
typedef struct struct_1 struct_1_t;
typedef struct Base Base_t;

struct struct_1 {
 unsigned int field_0;
};

struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
};

// Forward declaration of Base struct (converted from C++ class)
struct Base {
 void** vtable;  // Virtual table pointer
};

extern void (*g_403ff4)();

// Forward declarations for C++ runtime functions
// These are based on the Itanium C++ ABI

int __cxa_atexit(void (*func)(void*), void* arg, void* __dso_handle);
void* __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void* exception, void* type_info, void (*dest)(void*)) __attribute__((noreturn));
void* __cxa_begin_catch(void* exception) __attribute__((noreturn));
void __cxa_end_catch(void);
void __cxa_rethrow(void) __attribute__((noreturn));
void _Unwind_Resume(void* exception) __attribute__((noreturn));

// Stub implementations for C++ ABI functions
int __cxa_atexit(void (*func)(void*), void* arg, void* __dso_handle)
{
 // Stub: register destructor to be called at program exit
 (void)func;
 (void)arg;
 (void)__dso_handle;
 return 0;
}

void* __cxa_allocate_exception(unsigned int size)
{
 return malloc(size);
}

void __cxa_throw(void* exception, void* type_info, void (*dest)(void*))
{
 // Stub: normally this would unwind the stack
 // For compilation purposes, just free and exit
 (void)type_info;
 (void)dest;
 if (exception) free(exception);
 exit(1);
}

void* __cxa_begin_catch(void* exception)
{
 (void)exception;
 return NULL;
}

void __cxa_end_catch(void)
{
 // Stub: cleanup after catch
 return;
}

void __cxa_rethrow(void)
{
 // Stub: rethrow current exception
 exit(1);
}

void _Unwind_Resume(void* exception)
{
 // Stub: resume unwinding
 (void)exception;
 exit(1);
}

// C++ operator new/delete - implemented as regular C functions
void* cpp_operator_new(unsigned int size);
void cpp_operator_delete(void* ptr);

// Implement operator new/delete
void* cpp_operator_new(unsigned int size)
{
 return malloc(size);
}

void cpp_operator_delete(void* ptr)
{
 if (ptr) free(ptr);
}

// Global constructor/destructor functions
void frame_dummy();
void __do_global_ctors_aux();
void __do_global_dtors_aux();
void deregister_tm_clones();
unsigned int register_tm_clones();
void _start();

// Test function declarations
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(Base *obj, int arg);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void test_cpp_oo_features();

// Template function stubs
int template_max_int(int arg_0, int arg_1);
void template_swap_int(int* ptr, int* p);
double template_max_double(double arg_0, double arg_1);

// Container class stubs
void Container_int_Constructor(void* ptr);
void Container_int_push(void* ptr, int arg_0);
void Container_int_get(void* this_, int arg_0);
void Container_int_getSize(void* this_);
void Container_double_Constructor(void* ptr);
void Container_double_push(void* ptr, double arg_0);
void Container_double_get(void* this_, int arg_0);
void Container_double_getSize(void* this_);

// RTTI class stubs
int RTTIDerivedA_destructor(void* this_);
void RTTIDerivedA_getType(void* this_);
int RTTIBase_destructor(void* this_);
int RTTIDerivedB_destructor(void* this_);
void RTTIDerivedB_getType(void* this_);

// PC thunk functions
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int a0);

int main();

void _init()
{
 /* g_403ff4 is an external symbol that may not be linked */
 if (g_403ff4)
 (*g_403ff4)();
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
extern void ios_base_Init_D1Ev(void* arg);
extern char _ZStL8__ioinit;
extern void* __dso_handle;

// Stub implementation for std::ios_base::Init destructor
void ios_base_Init_D1Ev(void* arg)
{
 (void)arg;  // Suppress unused parameter warning
 return;
}

// Definitions for external symbols
char _ZStL8__ioinit = 0;
void* __dso_handle = NULL;

void _GLOBAL__sub_I_5_1_cpp(void)
{
 /* C++ global constructor - registers destructor for std::ios_base::Init object */
 __cxa_atexit((void (*)(void*))&ios_base_Init_D1Ev, &_ZStL8__ioinit, __dso_handle);
}


// Function: sub_40117b at 0x40117b
void sub_40117b()
{
 _start(); /* do not return */
}



void _start()
{
 return;
}



// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 return;
}


// Function: sub_4011ac at 0x4011ac
void sub_4011ac()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: sub_4011b4 at 0x4011b4
void sub_4011b4()
{
 deregister_tm_clones();
 return;
}

void deregister_tm_clones()
{
 return;
}



// Function: sub_4011f3 at 0x4011f3
void sub_4011f3()
{
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401247 at 0x401247
void sub_401247()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 deregister_tm_clones();
}


// Function: sub_4012da at 0x4012da
void sub_4012da()
{
 frame_dummy();
 return;
}

void frame_dummy()
{
 return;
}



// Function: __x86_get_pc_thunk_dx at 0x4012e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x4012ed
int __x86_get_pc_thunk_di(int a0)
{
 (void)a0;  // Suppress unused parameter warning
 return 0;
}


// Function: sub_4012f1 at 0x4012f1
int sub_4012f1()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401300
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int v3; // [bp-0x10]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 result = 0;
 v3 = 0;
 memset(&v2, 0, 20);
 strncpy(v1, "Test", 4);
 flag1 = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_401373 at 0x401373
void sub_401373()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401380
void test_cpp_constructor()
{
 return;
}


// Function: sub_40139e at 0x40139e
int sub_40139e()
{
 call_virtual_func(0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013a0
void call_virtual_func(Base *arg_0, int arg_1)
{
 if (arg_0)
 {
 // Virtual function call through vtable - stubbed for C compilation
 }
 return;
}


// Function: sub_4013c5 at 0x4013c5
void sub_4013c5()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013d0
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013e0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4013f0
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401400
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401406 at 0x401406
void sub_401406()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401410
void test_cpp_template_func()
{
 return;
}


// Function: sub_401416 at 0x401416
void sub_401416()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401426 at 0x401426
void sub_401426()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401436 at 0x401436
int sub_401436()
{
 test_cpp_exception();
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x401440

// type_info stub for C++ RTTI
struct type_info {
 const char* name;
};

// Type info for int type (RTTI symbol _ZTIi)
struct type_info _ZTIi = { "int" };

void test_cpp_exception()
{
 unsigned int *ptr;

 ptr = __cxa_allocate_exception(4);
 *ptr = 42;
 // __cxa_throw doesn't return - it noreturn
 // The third parameter is a destructor function pointer (NULL for int type)
 __cxa_throw(ptr, _ZTIi, NULL);
}


// Function: sub_401481 at 0x401481
int sub_401481()
{
 unsigned int result = 0; // edx
 unsigned int v3 = 0; // eax
 void* v5 = 0; // ebx

 if (result != 1)
 {
 return 0;
 }
 __cxa_begin_catch((void*)v3);
 __cxa_rethrow(); // noreturn function
 return 0;
 (void)v5; // Suppress unused warning
}


// Function: sub_40149f at 0x40149f
void sub_40149f()
{
 __cxa_end_catch();
}


// Function: sub_401526 at 0x401526
void sub_401526()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401530
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401536 at 0x401536
int sub_401536()
{
 test_cpp_rtti();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x401540
// RTTI vtable pointers - defined later
extern void* g_403ecc;
extern void* g_403ee0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct struct_0 **p; // edi

 ptr = cpp_operator_new(4);
 *((void **)ptr) = &g_403ecc;
 p = (struct struct_0 **)cpp_operator_new(4);
 *p = (struct struct_0 *)(g_403ee0);
 cpp_operator_delete(ptr);
 // (*(p))->field_4(*(p)); // Removed: field_4 is not a function
 return;
}


// Function: sub_4015f3 at 0x4015f3
int sub_4015f3()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401600

// Definitions for string literals
char g_402081[] = "";
char g_40209f[] = "";
char g_4020bb[] = "";
char g_4020d7[] = "";
char g_4020f3[] = "";
char g_402110[] = "";
char g_40212c[] = "";
char g_402148[] = "";
char g_402164[] = "";
char g_402180[] = "";
char g_40219d[] = "";
char g_4021ba[] = "";
char g_4021d8[] = "";

// Definitions for RTTI vtables
void* g_403ecc = &_ZTIi;
void* g_403ee0 = &_ZTIi;

void test_cpp_oo_features()
{
 void* ptr; // eax
 struct struct_0 **p; // edi
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]
 char v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x18]
 unsigned int result; // [bp-0x15]
 char flag1; // [bp-0x11]

 puts(&g_4021d8);
 result = 0;
 v4 = 0;
 memset(&v3, 0, 20);
 strncpy(&v2, "Test", 4);
 flag1 = 0;
 v1 = 10;
 strlen(&v2);
 printf(&g_402081);
 printf(&g_40209f);
 printf(&g_4020bb);
 printf(&g_4020d7);
 printf(&g_4020f3);
 printf(&g_402110);
 printf(&g_40212c);
 printf(&g_402148);
 printf(&g_402164);
 test_cpp_exception();
 printf(&g_402180);
 printf(&g_40219d);
 ptr = cpp_operator_new(4);
 *((void **)ptr) = &g_403ecc;
 p = (struct struct_0 **)cpp_operator_new(4);
 *p = (struct struct_0 *)(g_403ee0);
 cpp_operator_delete(ptr);
 // (*(p))->field_4(*(p)); // Removed: field_4 is not a function
 printf(&g_4021ba);
 return;
}


// Function: sub_40180f at 0x40180f
int sub_40180f()
{
 main();
 return 0;
}


// Function: main at 0x401810
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40182c at 0x40182c
void sub_40182c(unsigned int a0, unsigned int a1)
{
 template_max_int(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401830
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: sub_40183e at 0x40183e
void sub_40183e(unsigned int a0, unsigned int a1)
{
 template_max_double((double)a0, (double)a1);
 return;
}

// Function: _Z12template_maxIdET_S0_S0_ at 0x401840
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}
// Function: sub_401851 at 0x401851
void sub_401851(unsigned int a0, unsigned int a1)
{
 template_swap_int((int*)a0, (int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401860
void template_swap_int(int* ptr, int* p)
{
 unsigned int v0; // edx

 v0 = *ptr;
 *ptr = *p;
 *p = v0;
 return;
}


// Function: sub_401873 at 0x401873
void sub_401873(unsigned int a0)
{
 Container_int_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401880
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return;
}


// Function: sub_40188c at 0x40188c
void sub_40188c(unsigned int a0)
{
 Container_int_push((void*)a0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401890
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4018ac at 0x4018ac
void sub_4018ac(unsigned int a0, unsigned int a1)
{
 Container_int_get((void*)a0, a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4018b0
void Container_int_get(void* this_, int arg_0)
{
 return;
}


// Function: sub_4018c7 at 0x4018c7
void sub_4018c7(unsigned int a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4018d0
void Container_int_getSize(void* this_)
{
 return;
}


// Function: sub_4018d8 at 0x4018d8
void sub_4018d8(unsigned int a0)
{
 Container_double_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4018e0
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return;
}


// Function: sub_4018ec at 0x4018ec
void sub_4018ec(unsigned int a0, double a1)
{
 Container_double_push((void*)a0, a1);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4018f0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx; // ecx

 idx = *((unsigned int *)((char*)ptr + 80));
 if (idx <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 }
 return;
}


// Function: sub_40190e at 0x40190e
void sub_40190e(unsigned int a0, unsigned int a1)
{
 Container_double_get((void*)a0, a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401910
double Container_double_get(void* this_, int arg_0)
{
 if (arg_0 >= 0 && *((int *)((char*)this_ + 80)) > arg_0)
 {
 return *((double *)((char *)this_ + 8 * arg_0));
 }
 return 0.0;
}


// Function: sub_401929 at 0x401929
void sub_401929(unsigned int a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401930
int Container_double_getSize(void* this_)
{
 return *((int *)((char*)this_ + 80));
}


// Function: sub_401938 at 0x401938
int sub_401938()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401940
int RTTIDerivedA_destructor(void* this_ptr)
{
 cpp_operator_delete(this_ptr);
 return;
}


// Function: sub_401961 at 0x401961
void sub_401961()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401970
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: sub_401976 at 0x401976
void sub_401976()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401980
int RTTIBase_destructor(void* this_ptr)
{
 (void)this_ptr;  // Suppress unused parameter warning
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401990
int RTTIDerivedB_destructor(void* this_ptr)
{
 cpp_operator_delete(this_ptr);
 return;
}


// Function: sub_4019b1 at 0x4019b1
void sub_4019b1()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019c0
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: sub_4019c6 at 0x4019c6
void sub_4019c6()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_401a12 at 0x401a12
int sub_401a12()
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


