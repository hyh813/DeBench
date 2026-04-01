// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: AMD64

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <new>

// Exception handling and RTTI support
void __cxa_throw(void* thrown_exception, void* type_info, void* (*dest) (void *));
void* __cxa_allocate_exception(unsigned long);
void __cxa_begin_catch(void*);
void __cxa_end_catch(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
void __cxa_rethrow(unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
void _Unwind_Resume(unsigned long long);
void* __cxa_get_exception_ptr(void*);
int __cxa_type_match(void*, void*);

// RTTI type info
extern char _ZTIi;
extern char _ZTIZ18test_cpp_exceptionvE16DerivedException;

/* CRT stub function _init removed by preprocessor */
// Operator overloads (placeholder declarations)
void* operator new(size_t size);
void* operator new[](size_t size);
void operator delete(void* ptr);
void operator delete[](void* ptr);

// Standard library functions
unsigned long long MaxV(unsigned long long a, unsigned long long b);
size_t strlen(const char *s);
int printf(const char *format, ...);
int puts(const char *s);
char *strncpy(char *dest, const char *src, size_t n);

// Standard library declarations
void __cxa_finalize(void *);
int __cxa_atexit(void (*func) (void *), void *arg, void *dso);

// Global variable declarations
extern unsigned long long (*g_403fe8)();
extern unsigned long long g_404008;
extern void (*g_404010)();
extern char g_403d78;
extern char g_403da0;
extern unsigned long long _ZN14LifecycleClass14instance_countE;
extern unsigned long long __dso_handle;
unsigned long long _ZN14LifecycleClass14instance_countE = 0;

// ios_base::Init function pointer for static initialization
void (*_ZNSt8ios_base4InitD1Ev)(void*);
void *_ZStL8__ioinit;

void _init(void)
{
 // Empty stub - global constructors initialized via __cxa_atexit
 return;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 // Original: goto g_404010; - was likely a function pointer call
 if (g_404010)
  g_404010();
}


// Function: sub_40102c at 0x40102c
void* sub_40102c(unsigned int v1)
{
 return operator new[](v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

// Minimal std::ios_base::Init declaration for linking
namespace std { namespace ios_base { struct Init {}; } }

void _GLOBAL__sub_I_5_1.cpp()
{
 // Using the declared Init type (actual initialization happens elsewhere via __cxa_atexit)
 (void)&_ZStL8__ioinit;
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


/* CRT stub function _start - does not return */
void _start(void) __attribute__((noreturn));
static void __attribute__((noreturn)) sub_401167(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start();
}



/* CRT stub function _start removed by preprocessor */



// CRT stub implementations (normally provided by CRT)
void deregister_tm_clones(void) { }
void register_tm_clones(void) { }
void __do_global_dtors_aux(void) { }
void frame_dummy(void) { }

// Function: sub_401195 at 0x401195
void sub_401195()
{
 // Empty stub - original had unsupported operation
}


// Function: sub_401196 at 0x401196
void sub_401196()
{
 deregister_tm_clones();
 return;
}


// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
 register_tm_clones();
 return;
}


// Function: sub_401209 at 0x401209
void sub_401209()
{
 __do_global_dtors_aux();
 return;
}


// Function: sub_401245 at 0x401245
void sub_401245()
{
}


// Function: sub_401249 at 0x401249
void sub_401249()
{
 frame_dummy();
 return;
}



// Function: sub_401259 at 0x401259
void sub_401259()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401294
extern unsigned long long _ZN14LifecycleClass14instance_countE;

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


// Function: _Z17call_virtual_funcP4Basei at 0x4012e5
struct Base {
 void (**vtable)();
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 // Original: goto *((long long *)*((long long *)&arg_0));
 // Replaced computed goto with a function pointer call
 if (arg_0 && arg_0->vtable[0])
  arg_0->vtable[0]();
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012ed
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012f3
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012f9
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012ff
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401305
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x40130b
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401311
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401317

void test_cpp_exception()
{
 unsigned int *ptr; // rax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 // Throw exception - does not return normally
 __cxa_throw(ptr, &_ZTIi, 0);
 // If we get here, the exception was caught
 __cxa_begin_catch(ptr);
 __cxa_end_catch();
 return;
}


// Function: sub_401342 at 0x401342
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

// Personality routine for exception handling - no return value
void sub_401342(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v3; // rcx
 unsigned long long v4; // r8
 unsigned long long v5; // r9
 unsigned long long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 (void)a0;
 (void)a1;
 (void)a2;
 result = a2;
 if (result == 1)
 {
 __cxa_begin_catch(v6);
 __cxa_rethrow(a0, a1, a2, v3, v4, v5);
 }
 // Handler for other exception types
 __cxa_begin_catch(v6);
 __cxa_end_catch(a0, a1, a2, v7, v8, v9);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
}


// Function: sub_40135f at 0x40135f
void sub_40135f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013d7
void test_cpp_smart_ptr()
{
 return;
}


// Forward declarations for all test functions
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

// CRT stub function declarations
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// RTTI type structures - must be defined before use
struct struct_0;
struct struct_1;

struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
};

struct struct_1 {
 unsigned long long field_0;
 struct struct_1 *field_8;  // RTTI type info pointer
};

// Function: _Z13test_cpp_rttiv at 0x4013dd
extern char g_403d78;
extern char g_403da0;

void test_cpp_rtti()
{
 void* ptr; // r14
 struct struct_0 **p; // r12

 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = operator new(8);
 *(p) = &g_403da0;
 operator delete(ptr);
 (*p)->field_8(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40147f
extern char g_40207d;
extern char g_40209b;
extern char g_4020b7;
extern char g_4020d3;
extern char g_4020ef;
extern char g_40210c;
extern char g_402128;
extern char g_402144;
extern char g_402160;
extern char g_40217c;
extern char g_402199;
extern char g_4021b6;
extern char g_4021d4;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x28]
 char v1; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 puts(&g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(&g_40207d, (unsigned int)strlen(&v1) + 4700);
 printf(&g_40209b, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf(&g_4020b7, 42);
 printf(&g_4020d3, 71);
 printf(&g_4020ef, 650);
 printf(&g_40210c, 22);
 printf(&g_402128, 39);
 printf(&g_402144, 16);
 printf(&g_402160, 85);
 printf(&g_40217c, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_402199, 703);
 printf(&g_4021b6, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x4015a8
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: template_max for int at 0x4015b2
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: template_max_double at 0x4015ba
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 >= arg_0)
  return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4015bf
void template_swap_int(int *ptr, int *p)
{
 int v1; // eax

 v1 = *ptr;
 *ptr = *p;
 *p = v1;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4015c8
int Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4015d0
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4015e4
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_4015f5 at 0x4015f5
void sub_4015f5(unsigned long a0)
{
 (void)a0;
 // Empty stub - original called getSize on invalid object
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4015f6
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4015fa
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401602
void Container<double>::push(void* ptr, double arg_0)
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


// Function: _ZNK9ContainerIdE3getEi at 0x401618
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40162c
void Container<double>::getSize(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401630
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401635 at 0x401635
void sub_401635()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401636
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40163c
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_40163d at 0x40163d
void sub_40163d()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40163e
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401643 at 0x401643
void sub_401643()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401644
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


