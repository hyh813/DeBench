// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdarg.h>


/* CRT stub function _init removed by preprocessor */
struct struct_0 {
    char padding[8];
};

static struct struct_0* g_403fe8_impl() { return 0; }
struct struct_0* (*g_403fe8)(void) = g_403fe8_impl;

// Missing function declarations
void* operator new(size_t size);
void* operator new[](size_t size);
void operator delete(void* ptr);
void operator delete[](void* ptr);

// Implement operator new/delete
void* operator new(size_t size) {
    return malloc(size);
}

void* operator new[](size_t size) {
    return malloc(size);
}

void operator delete(void* ptr) {
    free(ptr);
}

void operator delete[](void* ptr) {
    free(ptr);
}
void _start();
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
void frame_dummy();
void test_cpp_member_func();
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

/* C++ ABI functions - these are typically provided by libstdc++/libc++ */
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, const void*, void (*)(void*)) __attribute__((noreturn));
void __cxa_begin_catch(void*);
void __cxa_end_catch();
void _Unwind_Resume(void*) __attribute__((noreturn));
void __cxa_rethrow() __attribute__((noreturn));

/* Stub implementations for C++ ABI functions */
void* __cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void* exception, const void* type, void (*destructor)(void*)) {
    (void)type;
    (void)destructor;
    fprintf(stderr, "Exception thrown: %p\n", exception);
    exit(1);
}

void* g_current_exception = NULL;

void __cxa_begin_catch(void* exception) {
    g_current_exception = exception;
}

void __cxa_end_catch(void) {
    g_current_exception = NULL;
}

void _Unwind_Resume(void* exception) {
    (void)exception;
    fprintf(stderr, "Unwind resume\n");
    exit(1);
}

void __cxa_rethrow(void) {
    fprintf(stderr, "Rethrowing exception\n");
    exit(1);
}

/* Type info for exception handling - using dummy type_info pointers */
/* In real C++ code, these would point to actual std::type_info objects from typeid() */
typedef struct type_info {
    const char* name;
} type_info;

static const type_info g_type_int_int = { "int" };
static const type_info g_type_derived_int = { "derived" };
static const void* g_type_int = (const void*)&g_type_int_int;
static const void* g_type_derived = (const void*)&g_type_derived_int;



unsigned long long * init_function()
{
 unsigned long long *v1; // rax

 v1 = g_403fe8();
 return v1;
}


// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
static void (*g_404010)() = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 if (g_404010) g_404010();
}


// Function: sub_40102c at 0x40102c
void* sub_40102c(unsigned int v1)
{
 return operator new[](v1);
}


// Function: _GLOBAL__sub_I_5_1 at 0x401140
static char _ZStL8__ioinit;
unsigned long long __dso_handle = 0;

void _GLOBAL__sub_I_5_1()
{
 return;
}


// Function: sub_401167 at 0x401167
void sub_401167(unsigned long a0, unsigned long a1, unsigned long a2)
{
 /* _start() call removed - CRT function */
 (void)a0; (void)a1; (void)a2;
}



void _start()
{
 return;
}



// Function: sub_401195 at 0x401195
void sub_401195()
{
 /* [D] Unsupported jumpkind Ijk_SigTRAP at address 4198805() */
}


// Function: sub_401196 at 0x401196
void sub_401196()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones()
{
 return;
}



// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
 register_tm_clones();
 return;
}



void register_tm_clones()
{
 return;
}



// Function: sub_401209 at 0x401209
void sub_401209()
{
 __do_global_dtors_aux();
 return;
}



void __do_global_dtors_aux()
{
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



void frame_dummy()
{
 return;
}



// Function: sub_401259 at 0x401259
void sub_401259()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x40125c
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401294
extern unsigned int _ZN14LifecycleClass14instance_countE;
unsigned int _ZN14LifecycleClass14instance_countE = 0;

void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = (unsigned int*)operator new[](20);
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


// Forward declarations for structs
struct Container_int;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Function: _Z17call_virtual_funcP4Basei at 0x4012e5
typedef struct Base {
} Base;

// Forward declarations for Container_int functions
unsigned int Container_int_getSize(struct Container_int *this);
int Container_int_get(struct Container_int *this, int arg_0);
void Container_int_push(struct Container_int *ptr, int arg_0);

// Forward declarations for RTTI functions
void RTTIDerivedA_getType(struct RTTIDerivedA *this);
void RTTIDerivedB_getType(struct RTTIDerivedB *this);

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 /* Virtual function call - removed invalid goto */
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
 __cxa_throw(ptr, (const void*)g_type_int, 0);
 __cxa_begin_catch(ptr);
 __cxa_end_catch();
 return;
}


// Function: sub_401342 at 0x401342
void sub_401342(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx;

 (void)a1;
 result = (unsigned int)a2;
 if (result != 1)
 {
 __cxa_begin_catch((void*)(uintptr_t)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (const void*)g_type_derived, 0);
 }
 __cxa_begin_catch((void*)(uintptr_t)a0);
 __cxa_rethrow();
 __builtin_unreachable();
 /* __cxa_rethrow is noreturn, so code below is unreachable */
}


// Function: sub_40135f at 0x40135f
void sub_40135f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
 (void)a0; (void)a1; (void)a2;
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013d7
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013dd
typedef struct RTTI_struct_0 {
 char padding_0[8];
 struct RTTI_struct_1 *field_8;
} RTTI_struct_0;

typedef struct RTTI_struct_1 {
 unsigned long long field_0;
} RTTI_struct_1;

char g_403d78 = 0;
char g_403da0 = 0;

void test_cpp_rtti()
{
 void* ptr; // r14
 RTTI_struct_0 **p; // r12

 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (RTTI_struct_0**)operator new(8);
 *(p) = &g_403da0;
 operator delete(ptr);
 (*(p))->field_8 = (RTTI_struct_1*)(*(p));
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40147f
const char g_40207d[] = "%s\n";
const char g_40209b[] = "%p\n";
const char g_4020b7[] = "%d\n";
const char g_4020d3[] = "%d\n";
const char g_4020ef[] = "%d\n";
const char g_40210c[] = "%d\n";
const char g_402128[] = "%d\n";
const char g_402144[] = "%d\n";
const char g_402160[] = "%d\n";
const char g_40217c[] = "%p\n";
const char g_402199[] = "%d\n";
const char g_4021b6[] = "%p\n";
const char g_4021d4[] = "Testing C++ OO features\n";

void test_cpp_constructor(void);
void test_cpp_exception(void);
void test_cpp_rtti(void);

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x28]
 char v1[16]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 puts(g_4021d4);
 flag1 = 0;
 strncpy(&v1[0], "Test", 4);
 result = 0;
 v0 = 10;
 printf(g_40207d, (unsigned int)strlen(&v1[0]) + 4700);
 printf(g_40209b, (unsigned long long)(unsigned long)test_cpp_constructor);
 printf(g_4020b7, (int)42);
 printf(g_4020d3, (int)71);
 printf(g_4020ef, (int)650);
 printf(g_40210c, (int)22);
 printf(g_402128, (int)39);
 printf(g_402144, (int)16);
 printf(g_402160, (int)85);
 printf(g_40217c, (unsigned long long)(unsigned long)test_cpp_exception);
 printf(g_402199, (int)703);
 printf(g_4021b6, (unsigned long long)(unsigned long)test_cpp_rtti);
 return;
}


// Function: main at 0x4015a8
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4015b2
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4015ba

static unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
 return a >= b ? a : b;
}

double template_max_double(double arg_0, double arg_1)
{
 unsigned long long u0 = (unsigned long long)arg_0;
 unsigned long long u1 = (unsigned long long)arg_1;
 return (double)MaxV(u0, u1);
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4015bf
void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4015c8
struct Container_int {
    unsigned int count;
    int data[10];
};

int Container_int_Constructor(Container_int *ptr)
{
 ptr->count = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4015d0
void Container_int_push(Container_int *ptr, int arg_0)
{
 unsigned long index;

 index = ptr->count;
 if (index <= 9)
 {
 ptr->count = (unsigned int)index + 1;
 ptr->data[index] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4015e4
int Container_int_get(Container_int *this, int arg_0)
{
 if (arg_0 >= 0 && (unsigned int)arg_0 < this->count)
     return this->data[arg_0];
 return 0;
}


// Function: sub_4015f5 at 0x4015f5
void sub_4015f5(unsigned long a0)
{
 Container_int_getSize((Container_int*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4015f6
unsigned int Container_int_getSize(Container_int *this)
{
 if (this)
     return this->count;
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4015fa
typedef struct Container_double {
    unsigned int count;
    double data[10];
} Container_double;

int Container_double_Constructor(Container_double *ptr)
{
 ptr->count = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401602
void Container_double_push(Container_double *ptr, double arg_0)
{
 unsigned long index;

 index = ptr->count;
 if (index <= 9)
 {
 ptr->count = (unsigned int)index + 1;
 ptr->data[index] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401618
double Container_double_get(Container_double *this, int arg_0)
{
 if (arg_0 >= 0 && (unsigned int)arg_0 < this->count)
     return this->data[arg_0];
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40162c
unsigned int Container_double_getSize(Container_double *this)
{
 if (this)
     return this->count;
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401630
struct RTTIDerivedA {
    int dummy;
};

int RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator delete(this);
 return 0;
}


// Function: sub_401635 at 0x401635
void RTTIDerivedA_getType(RTTIDerivedA *this);

void sub_401635()
{
 RTTIDerivedA_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401636
void RTTIDerivedA_getType(RTTIDerivedA *this)
{
 (void)this;
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40163c
typedef struct RTTIBase {
    int dummy;
} RTTIBase;

int RTTIBase_destructor(RTTIBase *this)
{
 (void)this;
 return 0;
}


// Function: sub_40163d at 0x40163d
void sub_40163d()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40163e
struct RTTIDerivedB {
    int dummy;
};

int RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator delete(this);
 return 0;
}


// Function: sub_401643 at 0x401643
void RTTIDerivedB_getType(RTTIDerivedB *this);

void sub_401643()
{
 RTTIDerivedB_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401644
void RTTIDerivedB_getType(RTTIDerivedB *this)
{
 (void)this;
 return;
}



void _fini()
{
 return;
}


