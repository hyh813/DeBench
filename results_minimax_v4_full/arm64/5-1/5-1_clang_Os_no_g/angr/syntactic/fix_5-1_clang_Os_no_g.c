// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

// Additional function declarations needed for linking
extern void abort(void);
extern int puts(const char *s);
extern int printf(const char *format, ...);

// C++ runtime stub implementations (these would normally come from libstdc++)
// Providing minimal stubs to allow linking
void *__cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void *exception, void *type_info, void (*destructor)(void *)) { abort(); }
void *_Unwind_Resume(void *exception) { abort(); return NULL; }
void *__cxa_begin_catch(void *exception) { return exception; }
void __cxa_end_catch(void) { }
void __cxa_rethrow(void) { abort(); }
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle) { return 0; }

// CRT and runtime stub definitions
void _start(void) { while(1); }
void deregister_tm_clones(void) { }
void __do_global_dtors_aux(void) { }
int frame_dummy(void) { return 0; }

// C++ runtime symbols - stub definitions
char __dollar_d_19 = 0;
unsigned long long __dso_handle = 0;
char _ZTIi = 0;
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;

// Additional extern variable definitions needed for linking
char __dollar_d_28 = 0;
char g_401680 = 0;
char g_401547 = 0;
char g_401563 = 0;
char g_40157f = 0;
char g_40159b = 0;
char g_4015b8 = 0;
char g_4015d4 = 0;
char g_4015f0 = 0;
char g_40160c = 0;
char g_401628 = 0;
char g_401645 = 0;
char g_401662 = 0;
char g_411d58 = 0;
char g_411d80 = 0;

// Definition for static class member variable
unsigned int _ZN14LifecycleClass14instance_countE = 0;

// Additional symbols needed for linking
// g_411ff8 is used as a jump target - using function pointer type
void *(*g_411ff8)(void *) = NULL;

// C++ runtime function declarations
extern int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type_info, void (*destructor)(void *));
extern void *_Unwind_Resume(void *exception);
extern void *__cxa_begin_catch(void *exception);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
// Note: operator new/delete are C++ only - using malloc/free instead
// extern void *operator_new(size_t size);
// extern void operator delete(void *ptr);
extern int frame_dummy(void);

// Function: __dollar_x at 0x400d60
// ARM64 calling convention: x16 and x30 are passed as parameters
long long __dollar_x(unsigned long long v2, unsigned long long v3)
{
 // Simply return the first parameter (v2/x16)
 return v2;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 char *v0 = "Hello"; // x0 - initialized to allow linking

 return puts(v0);
}


// Function: __dollar_x_18 at 0x400ec0
// Note: Already defined above as part of CRT initialization


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
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401014
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 // strlen(&v0 | 4); // decompilation error - removing
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

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 // Virtual function dispatch via vtable - simplified for C
 (void)arg_0;
 (void)arg_1;
 return;
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
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0); /* do not return */
 _Unwind_Resume(ptr);
}


// Function: sub_4010f4 at 0x4010f4
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 void *exc_ptr;
 if (a1 != 1)
 {
 __cxa_end_catch();
 exc_ptr = __cxa_begin_catch((void*)a0);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 exc_ptr = __cxa_begin_catch((void*)a0);
 (void)exc_ptr;
 __cxa_rethrow();
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

void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(8);
 *((char **)ptr) = &g_411d58;
 p = malloc(8);
 *(struct_0 **)p = (struct_0 *)&g_411d80;
 free(ptr);
 // Call function pointer stored in field_8
 ((void(*)(void*))(*p)->field_8)(*p);
 return;
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
 printf(&__dollar_d_28, (unsigned long)(v0) + 4700);
 printf(&g_401547, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_401563, 42);
 printf(&g_40157f, 71);
 printf(&g_40159b, 650);
 printf(&g_4015b8, 22);
 printf(&g_4015d4, 39);
 printf(&g_4015f0, 16);
 printf(&g_40160c, 85);
 test_cpp_exception();
 printf(&g_401628, 0);
 printf(&g_401645, 703);
 test_cpp_rtti();
 printf(&g_401662, 0);
 return;
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
// Template function - C++ only, removing for C compilation
#if defined(__cplusplus)
#else
// Stub for C compilation
void template_max_stub(void) { return; }
#endif

// Function: _Z12template_maxIdET_S0_S0_ at 0x4013c8
// Template function - C++ only, removing for C compilation
#if defined(__cplusplus)
#else
// Stub for C compilation
void template_max_double_stub(void) { return; }
#endif


// Function: _Z13template_swapIiEvRT_S1_ at 0x4013d4
#if defined(__cplusplus)
// void template_swap<int>(int &ptr, int &p)
#else
void template_swap_stub_int(void) { return; }
#endif


// Function: _ZN9ContainerIiEC2Ev at 0x4013e8
void Container_int_Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4013f0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = *((unsigned int *)((char*)ptr + 40));
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)((char*)ptr + 40)) = (unsigned int)index + 1;
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
void Container_double_Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40143c
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 double v1; // d0

 idx = *((unsigned int *)((char*)ptr + 80));
 if (9 >= (unsigned int)idx)
 {
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 *((unsigned int *)((char*)ptr + 80)) = (unsigned int)idx + 1;
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
void RTTIDerivedA_destructor(void* this)
{
 free(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401480
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401488
void RTTIBase_destructor(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40148c
void RTTIDerivedB_destructor(void* this)
{
 free(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401490
void RTTIDerivedB_getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


