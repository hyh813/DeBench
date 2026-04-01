// Angr Decompilation of 5-1_clang_Os_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

// C++ ABI function declarations
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void* exception, void* obj_type_info, void (*destructor)(void*));
extern void* __cxa_begin_catch(void* exception);
extern void __cxa_end_catch();
extern void __cxa_rethrow();
extern void _Unwind_Resume(void* exception);

// Stub for C++ standard library ios_base::Init
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init() {}
            ~Init() {}
        };
    };
}

// Missing CRT function declarations
int main();
void _start();
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
void frame_dummy();

// Missing standard library function declarations
int puts(const char *s);
int printf(const char *format, ...);
void exit(int status);
void *malloc(size_t size);
void free(void *ptr);

// Missing operator declarations
void* operator new[](size_t size);
void operator delete[](void* ptr);
void* operator new(size_t size);
void operator delete(void* ptr);

// Missing function declarations

// RTTI class definitions
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    
    RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual void getType() {}
    
    RTTIDerivedA() {}
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual void getType() {}
    
    RTTIDerivedB() {}
};

// Global variable definitions
unsigned long long __dso_handle = 0;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern void _ZNSt8ios_base4InitD1Ev();
extern void* _ZStL8__ioinit;
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;
void* g_403fe8 = 0;
extern char* g_403d78;
extern char* g_403da0;
extern char* _ZTIi;
extern char* _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern char* g_40207d;

// Define the RTTI globals that are referenced but otherwise undefined
char g_403d78_dummy[8] = {0};
char g_403da0_dummy[8] = {0};
char _ZTIZ18test_cpp_exceptionvE16DerivedException_dummy[8] = {0};
char _ZTIi_dummy[8] = {0};
char g_40207d_dummy[32] = "%d\n";
char g_40209b_dummy[32] = "%d\n";
char g_4020b7_dummy[32] = "%d\n";
char g_4020d3_dummy[32] = "%d\n";
char g_4020ef_dummy[32] = "%d\n";
char g_40210c_dummy[32] = "%d\n";
char g_402128_dummy[32] = "%d\n";
char g_402144_dummy[32] = "%d\n";
char g_402160_dummy[32] = "%d\n";
char g_40217c_dummy[32] = "%d\n";
char g_402199_dummy[32] = "%d\n";
char g_4021b6_dummy[32] = "%d\n";
char g_4021d4_dummy[32] = "%d\n";

#define g_403d78 g_403d78_dummy
#define g_403da0 g_403da0_dummy
#define _ZTIZ18test_cpp_exceptionvE16DerivedException _ZTIZ18test_cpp_exceptionvE16DerivedException_dummy
#define _ZTIi _ZTIi_dummy
#define g_40207d g_40207d_dummy
#define g_40209b g_40209b_dummy
#define g_4020b7 g_4020b7_dummy
#define g_4020d3 g_4020d3_dummy
#define g_4020ef g_4020ef_dummy
#define g_40210c g_40210c_dummy
#define g_402128 g_402128_dummy
#define g_402144 g_402144_dummy
#define g_402160 g_402160_dummy
#define g_40217c g_40217c_dummy
#define g_402199 g_402199_dummy
#define g_4021b6 g_4021b6_dummy
#define g_4021d4 g_4021d4_dummy

unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
    return a > b ? a : b;
}

// Base class definition with virtual function table support
class Base {
public:
    virtual ~Base() {}
    virtual void virtualMethod() {}
    
    Base() {}
};

unsigned int Container_int_getSize(void* ptr);
void test_cpp_member_func();
void RTTIDerivedA_getType(void* ptr);
void RTTIDerivedB_getType(void* ptr);
int RTTIBase_D2Ev(void* ptr);

// CRT stub function implementations
void _start()
{
    exit(main());
}

void deregister_tm_clones()
{
}

void register_tm_clones()
{
}

void __do_global_dtors_aux()
{
}

void frame_dummy()
{
}

// Operator implementations
void* operator new(size_t size)
{
    return malloc(size);
}

void operator delete(void* ptr)
{
    free(ptr);
}

void* operator new[](size_t size)
{
    return malloc(size);
}

void operator delete[](void* ptr)
{
    free(ptr);
}

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    void (*func)(void);
} struct_0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)(long long)g_403fe8;
 if (g_403fe8)
 {
     typedef unsigned long long* (*init_func_t)();
     init_func_t func = (init_func_t)(long long)g_403fe8;
     v1 = func();
 }
 return v1;
}

// Template function declarations (instantiated versions provided below)
// template_max and template_swap are implemented as specific type instances


// Function: sub_401020 at 0x401020 - removed (indirect jump stub)



// Function: sub_40102c at 0x40102c
void* sub_40102c(unsigned int size)
{
 return operator new[](size);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
void _GLOBAL__sub_I_5_1_cpp()
{

 return;
}


// Function: sub_401167 at 0x401167
void sub_401167(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401195 at 0x401195
void sub_401195()
{
 __builtin_trap();
}


// Function: sub_401196 at 0x401196
void sub_401196()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011c9 at 0x4011c9
void sub_4011c9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401209 at 0x401209
void sub_401209()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



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



/* CRT stub function frame_dummy removed by preprocessor */



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
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401294
void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = (unsigned int *)operator new[](20);
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
void call_virtual_func(Base *arg_0, int arg_1)
{
 // Virtual function call stub
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


// Function: _Z15test_cpp_exceptionv at 0x401317
void test_cpp_exception()
{
 unsigned int *ptr; // rax
 void *v2; // r14

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, (void*)_ZTIi, 0);
 _Unwind_Resume(v2); /* do not return */
 return;
}


// Function: sub_401342 at 0x401342
long long sub_401342(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx

 result = a2;
 if (result != 1)
 {
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)&_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 return 0;
 }
 __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
 return 0;
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


// Function: _Z13test_cpp_rttiv at 0x4013dd

void test_cpp_rtti()
{
 void* ptr; // r14
 typedef struct struct_0_local {
  char padding_0[8];
  void* field_8;
 } struct_0_local;
 
 struct_0_local *p; // r12

 ptr = operator new(8);
 *((char **)ptr) = g_403d78;
 p = (struct_0_local *)operator new(8);
 *((char **)&p->field_8) = g_403da0;
 operator delete(ptr);
 RTTIBase_D2Ev(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40147f
void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x28]
 char v1[16]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]

 puts(&g_4021d4[0]);
 flag1 = 0;
 strncpy(v1, "Test", 4);
 v0 = 10;
 printf(&g_40207d[0], (unsigned int)strlen(v1) + 4700);
 test_cpp_constructor();
 printf(&g_40209b[0], 0);
 printf(&g_4020b7[0], 42);
 printf(&g_4020d3[0], 71);
 printf(&g_4020ef[0], 650);
 printf(&g_40210c[0], 22);
 printf(&g_402128[0], 39);
 printf(&g_402144[0], 16);
 printf(&g_402160[0], 85);
 printf(&g_40217c[0], 0);
 printf(&g_402199[0], 703);
 test_cpp_rtti();
 printf(&g_4021b6[0], 0);
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
 return arg_1 >= arg_0 ? arg_1 : arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4015ba
double template_max_double(double arg_0, double arg_1)
{
 return arg_0 >= arg_1 ? arg_0 : arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4015bf
void template_swap_int(int* ptr, int* p)
{
 unsigned int v1; // eax

 v1 = *ptr;
 *ptr = *p;
 *p = v1;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4015c8
int Container_int_C2Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4015d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4015e4
int Container_int_get(void* ptr, int arg_0)
{
    if (arg_0 >= 0 && arg_0 < 10)
        return *((int *)((char *)ptr + 4 * arg_0));
    return 0;
}


// Function: sub_4015f5 at 0x4015f5
void sub_4015f5(unsigned long a0)
{
    Container_int_getSize(NULL);
    return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4015f6
unsigned int Container_int_getSize(void* ptr)
{
    if (ptr)
        return *((unsigned int *)((char *)ptr + 40));
    return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4015fa
int Container_double_C1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401602
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)((char *)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401618
double Container_double_get(void* ptr, int arg_0)
{
    if (arg_0 >= 0 && arg_0 < 10)
        return *((double *)((char *)ptr + 8 * arg_0));
    return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40162c
unsigned int Container_double_getSize(void* ptr)
{
    if (ptr)
        return *((unsigned int *)((char *)ptr + 80));
    return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401630
int RTTIDerivedA_D0Ev(void* ptr)
{
 free(ptr);
 return 0;
}


// Function: sub_401635 at 0x401635
void sub_401635()
{
 RTTIDerivedA_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401636
void RTTIDerivedA_getType(void* ptr)
{
    return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40163c
int RTTIBase_D2Ev(void* ptr)
{
 return 0;
}


// Function: sub_40163d at 0x40163d
void sub_40163d()
{
    return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40163e
int RTTIDerivedB_D0Ev(void* ptr)
{
 free(ptr);
 return 0;
}


// Function: sub_401643 at 0x401643
void sub_401643()
{
    RTTIDerivedB_getType(NULL);
    return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401644
void RTTIDerivedB_getType(void* ptr)
{
    return;
}



// Function: _fini at cleanup
void _fini()
{
}

