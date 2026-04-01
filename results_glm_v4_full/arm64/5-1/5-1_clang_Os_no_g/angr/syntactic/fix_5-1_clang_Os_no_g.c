// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Global variable definitions */
unsigned long long g_411ff8 = 0;
char __dollar_d_19 = 0;
unsigned long long __dso_handle = 0;

/* Typeinfo placeholders for C++ RTTI */
typedef struct {
    const char* name;
    void* base_typeinfo;
} __type_info;

__type_info _ZTIi = {"int", NULL};
__type_info _ZTIZ18test_cpp_exceptionvE16DerivedException = {"DerivedException", NULL};

char g_411d58[16] = {0};
char g_411d80[16] = {0};
char __dollar_d_28[] = "%d\n";
char g_401547[] = "instance count: %d\n";
char g_401563[] = "constructor: %d\n";
char g_40157f[] = "destructor: %d\n";
char g_40159b[] = "member: %d\n";
char g_4015b8[] = "virtual: %d\n";
char g_4015d4[] = "multiple inheritance: %d\n";
char g_4015f0[] = "diamond: %d\n";
char g_40160c[] = "operator overload: %d\n";
char g_401628[] = "exception: %d\n";
char g_401645[] = "smart pointer: %d\n";
char g_401662[] = "rtti: %d\n";
char g_401680[] = "=== C++ OO Features Test ===\n";

/* Definition for LifecycleClass::instance_count - needed for linking */
unsigned int _ZN14LifecycleClass14instance_countE = 0;

/* Function declarations for external symbols */
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);
extern void* __cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void* thrown_exception, void* tinfo, void (*dest)(void*));
extern void* __cxa_begin_catch(void* exception_object);
extern void __cxa_end_catch(void);
extern void _Unwind_Resume(void* exception_object);
extern void __cxa_rethrow(void);
extern void* operator_new(size_t size);
extern void operator_delete(void* ptr);
extern void _ZNSt8ios_base4InitD1Ev(void);
extern void _ZNSt8ios_base4InitC1Ev(void);

/* Definitions of operator new/delete */
void* operator_new(size_t size)
{
 return malloc(size);
}

void operator_delete(void* ptr)
{
 free(ptr);
}

/* Stub implementations for C++ exception handling runtime functions */
void* __cxa_allocate_exception(size_t thrown_size)
{
 return malloc(thrown_size);
}

void __cxa_throw(void* thrown_exception, void* tinfo, void (*dest)(void*))
{
 /* In a real C++ environment, this would start unwinding */
 /* For this C compilation, just abort since we can't do proper exception handling */
 free(thrown_exception);
 abort();
}

void _Unwind_Resume(void* exception_object)
{
 /* In a real C++ environment, this would resume unwinding */
 /* For this C compilation, just abort */
 abort();
}

void* __cxa_begin_catch(void* exception_object)
{
 /* Return the exception object */
 return exception_object;
}

void __cxa_end_catch(void)
{
 /* No-op for this C compilation */
}

void __cxa_rethrow(void)
{
 /* In a real C++ environment, this would rethrow the current exception */
 /* For this C compilation, just abort */
 abort();
}

/* Stub for std::ios_base::Init destructor */
void _ZNSt8ios_base4InitD1Ev(void)
{
 /* No-op - we're not using real iostream functionality */
}

/* Stub for std::ios_base::Init constructor */
void _ZNSt8ios_base4InitC1Ev(void)
{
 /* No-op - we're not using real iostream functionality */
}

/* Stub for __cxa_atexit - registers destructor for C++ static objects */
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle)
{
 /* In a real C++ environment, this would register the destructor to be called
  * at program exit or shared library unload. For this C compilation, just
  * return success (0) without actually registering anything. */
 (void)func;
 (void)arg;
 (void)dso_handle;
 return 0;
}

/* Wrapper function for __cxa_atexit - converts void (*)(void*) to void (*)(void) */
static void ios_init_dtor_wrapper(void* arg)
{
 /* Ignore the argument and call the actual destructor */
 (void)arg;
 _ZNSt8ios_base4InitD1Ev();
}

/* CRT stub implementations */
void _start(void)
{
 /* No-op for this compilation - let main run normally */
}

void deregister_tm_clones(void)
{
 /* No-op for this compilation */
}

void __do_global_dtors_aux(void)
{
 /* No-op for this compilation */
}

void frame_dummy(void)
{
 /* No-op for this compilation */
}

/* ARM64 helper functions */
int arm64g_calculate_condition(int cond, unsigned long long nzcv, unsigned long long cc_op, unsigned long long cc_dep1)
{
 /* Stub implementation - return 0 as default */
 return 0;
}

unsigned long long CmpF(double a, double b)
{
 /* Stub implementation - simple comparison */
 return (a < b) ? 1 : ((a > b) ? 0 : 2);
}

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400d60

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 // goto g_411ff8;  // External label - not compilable
 return 0;
}



// Function: __dollar_x_18 at 0x400ec0

long long __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 // Stub for std::ios_base::Init constructor - just set the global variable
 __dollar_d_19 = 1;
 v2 = __cxa_atexit((void (*)(void*))_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
 return v2;
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
void sub_401008()
{
 frame_dummy();
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
 strlen((char*)(((size_t)&v0) | 4));
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
struct Base {
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 /* Stub - virtual function call - not compilable in C */
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

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(ptr); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 if (a1 != 1)
 {
 // LABEL_0x4011a8:  // Undefined label - handling inline
 return 0;
 }
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
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

void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operator_new(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)operator_new(8);
 *(p) = (struct_0 *)&g_411d80;
 operator_delete(ptr);
 ((void (*)(void*))(size_t)(*p->field_8)((size_t)*p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(g_401680);
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 printf(__dollar_d_28, 42);
 printf(g_401547, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_401563, 42);
 printf(g_40157f, 71);
 printf(g_40159b, 650);
 printf(g_4015b8, 22);
 printf(g_4015d4, 39);
 printf(g_4015f0, 16);
 printf(g_40160c, 85);
 test_cpp_exception();
 printf(g_401628, 0);
 printf(g_401645, 703);
 test_cpp_rtti();
 printf(g_401662, 0);
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
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4013c8
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 v0 = *(unsigned long*)&arg_0;
 v1 = *(unsigned long*)&arg_1;
 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 {
 v3 = v1;
 return *(double*)&v3;
 }
 v3 = v0;
 return *(double*)&v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4013d4
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4013e8
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4013f0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = *(unsigned int*)((char*)ptr + 40);
 if (9 >= (unsigned int)index)
 {
 *(unsigned int*)((char*)ptr + 40) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x40140c
int Container_int_get(void* this, int arg_0)
{
 if (arg_0 >= 0 && arg_0 < 10)
 return *((int *)((char *)this + 4 * arg_0));
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x40142c
unsigned int Container_int_getSize(void* this)
{
 return *(unsigned int*)((char*)this + 40);
}


// Function: _ZN9ContainerIdEC1Ev at 0x401434
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40143c
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 unsigned long v1; // d0

 idx = *(unsigned int*)((char*)ptr + 80);
 v1 = *(unsigned long*)&arg_0;
 if (9 >= (unsigned int)idx)
 {
 *((unsigned long *)((char *)ptr + 8 * idx)) = v1;
 *(unsigned int*)((char*)ptr + 80) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401458
double Container_double_get(void* this, int arg_0)
{
 if (arg_0 >= 0 && arg_0 < 10)
 return *(double *)((char *)this + 8 * arg_0);
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401474
unsigned int Container_double_getSize(void* this)
{
 return *(unsigned int*)((char*)this + 80);
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40147c
void RTTIDerivedA_destructor(void* this)
{
 operator_delete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401480
int RTTIDerivedA_getType(void* this)
{
 return 1;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401488
void RTTIBase_destructor(void* this)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40148c
void RTTIDerivedB_destructor(void* this)
{
 operator_delete(this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401490
int RTTIDerivedB_getType(void* this)
{
 return 2;
}



/* CRT stub function _fini removed by preprocessor */


