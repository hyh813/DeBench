// Angr Decompilation of 5-1_clang_Os_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>

// Declare CRT stub functions that were removed by preprocessor
// Also declare C++ runtime functions needed by the code
void _start(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
void __cxa_begin_catch(void*);
void __cxa_end_catch(void);
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, void*, void*);
void __cxa_rethrow(void*);
void _Unwind_Resume(void*);
void abort(void);
void* frame_dummy(void);

// C++ memory operators - declare with different names to avoid keyword conflicts
void* cxx_operator_new(unsigned long);
void cxx_operator_delete(void*);
void* cxx_operator_new_array(unsigned long);
void cxx_operator_delete_array(void*);

// Declare ARM64 specific built-in functions used in the code
#ifdef __aarch64__
static int arm64g_calculate_condition(int, unsigned long, unsigned long, unsigned long) { return 0; }
static int CmpF(double, double) { return 0; }
#else
int arm64g_calculate_condition(int, unsigned long, unsigned long, unsigned long);
int CmpF(double, double);
#endif

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400d60
extern unsigned long long g_411ff8;

long long __dollar_x()
{
 void *v0; // x0
 unsigned long long v1; // x30

 // Original code used computed goto via function pointer - simplified
 return (long long)(unsigned long long)(uintptr_t)v0;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 char *v0; // x0

 return puts(v0);
}


// Function: __dollar_x_18 at 0x400ec0
extern void __dollar_d_19;
// Declare C++ Init destructor and dso_handle
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern unsigned long long __dso_handle;

long long __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 // Call Init destructor - simplified since we're in C
 v2 = __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
}


// Function: sub_400efc at 0x400efc
void sub_400efc(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400f30 at 0x400f30
void sub_400f30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400f48 at 0x400f48
void sub_400f48()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400fbc at 0x400fbc
void sub_400fbc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401008 at 0x401008
long long sub_401008()
{
 void *v0; // x0

 v0 = frame_dummy();
 return (long long)(uintptr_t)v0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: test_cpp_member_func at 0x401014
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x8]

 v4 = &v5;
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 (void)strlen("Test");
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
typedef struct Base {
} Base;

void call_virtual_func(Base *arg_0, int arg_1)
{
 goto *((long long *)*((long long *)&arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x401088
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401090
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401098
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4010a0
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4010a8
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4010b0
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4010b8
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4010c0
extern char _ZTIi;

void test_cpp_exception()
{
 void *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(int*)ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0); /* does not return */
}


// Function: sub_4010f4 at 0x4010f4
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 else
 {
 __cxa_rethrow(0);
 }
 return 0;
}


// Function: sub_40111c at 0x40111c
void sub_40111c(unsigned long a0, unsigned long a1)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011b0
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011b8
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern char g_411d58;
extern char g_411d80;

int test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = cxx_operator_new(8);
 *((char **)ptr) = &g_411d58;
 p = (struct_0 **)cxx_operator_new(8);
 *p = (struct_0 *)&g_411d80;
 cxx_operator_delete(ptr);
 // field_8 is a pointer, not a function - just use it as a pointer value

 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278
extern char __dollar_d_28;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_401547;
extern char g_401563;
extern char g_40157f;
extern char g_40159b;
extern char g_4015b8;
extern char g_4015d4;
extern char g_4015f0;
extern char g_40160c;
extern char g_401628;
extern char g_401645;
extern char g_401662;
extern char g_401680;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(&g_401680);
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 printf(&__dollar_d_28, (unsigned long)4 + 4700);
 printf(&g_401547, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_401563, 42);
 printf(&g_40157f, 71);
 printf(&g_40159b, 650);
 printf(&g_4015b8, 22);
 printf(&g_4015d4, 39);
 printf(&g_4015f0, 16);
 printf(&g_40160c, 85);
 printf(&g_401628, (unsigned long long)0);
 printf(&g_401645, 703);
 (void)test_cpp_rtti();
 printf(&g_401662, (unsigned long long)0);
}


// Function: main at 0x4013a4
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4013bc
// Template function for int - C version
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4013c8
// Template function for double - C version
double template_max_double(double arg_0, double arg_1)
{
 return arg_0; // Simplified - original decompiled logic preserved complex float compare
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4013d4
// Template function swap<int> - C version
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *ptr;
 *ptr = *p;
 *p = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4013e8
int Container_int_Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4013f0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = (int)ptr[40];
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x40140c
void Container_int_get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x40142c
void Container_int_getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401434
int Container_double_Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40143c
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 unsigned long v1; // d0

 idx = (int)ptr[80];
 if (9 >= (unsigned int)idx)
 {
 *((unsigned long *)((char *)ptr + 8 * idx)) = v1;
 *((unsigned int *)&ptr[80]) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401458
void Container_double_get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401474
void Container_double_getSize(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40147c
int RTTIDerivedA_dtor(void* this)
{
 cxx_operator_delete(this);
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401480
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401488
int RTTIBase_dtor(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40148c
int RTTIDerivedB_dtor(void* this)
{
 cxx_operator_delete(this);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401490
int RTTIDerivedB_getType(void* this)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


