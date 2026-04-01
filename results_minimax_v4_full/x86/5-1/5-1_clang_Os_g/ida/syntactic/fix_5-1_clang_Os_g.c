/* Auto-injected type definitions by preprocessor */
#ifndef _STDINT_TYPES_DEFINED
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#endif

#include <cstddef>

#ifndef _UINTPTR_T_DEFINED
typedef unsigned long uintptr_t;
#endif

#ifndef _INTPTR_T_DEFINED
typedef long intptr_t;
#endif


typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* C++ headers */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <new>
#include <typeinfo>
#include <exception>

/* Forward declarations for C++ standard library */
namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* External declarations */
extern void* _dso_handle;
extern void _do_global_dtors_aux(void);

/* GCC C++ runtime functions */
extern "C" {
void* __cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void* thrown_exception, void* type_info, void (*dest) (void *));
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch();
void __cxa_rethrow();
void __cxa_atexit(void (*f)(void*), void* arg, void* dso_handle);
int __gxx_personality_v0(int version, int actions, void* exception_class, void* exception_info, void* context);
void* __dynamic_cast(void* src, const void* src_type, const void* dst_type, ptrdiff_t src2dst);
}

/* Base class for virtual function test */
struct Base {
    void** _vptr$Base;
    virtual int virtual_func(int x);
};

/* LifecycleClass for constructor test */
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

/* RTTI classes */
struct __class_type_info {
    virtual ~__class_type_info();
};
struct RTTIBase {
    virtual ~RTTIBase();
};
struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};
struct RTTIDerivedB : RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

/* String constants */
extern const char asc_21D8[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* RTTI type info - these are handled by the C++ runtime */
static const char* typeid_name_int = "int";
static const char* typeid_name_RTTIBase = "RTTIBase";
static const char* typeid_name_RTTIDerivedA = "RTTIDerivedA";
static const char* typeid_name_RTTIDerivedB = "RTTIDerivedB";

/* Vtable pointers for RTTI classes - these point to virtual function tables */
static void* off_3ECC = nullptr;  /* vtable for RTTIDerivedA */
static void* off_3EE0 = nullptr;  /* vtable for RTTIDerivedB */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_Os_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 return 0;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 void **ptr;
 __asm__ volatile ("mov %%ebx, %0" : "=r"(ptr));
 __asm__ volatile ("jmp *8(%0)" : : "r" (*ptr));
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Wrapper for destructor call */
static void std_ios_base_Init_destructor(void* arg) {
    reinterpret_cast<std::ios_base::Init*>(arg)->~Init();
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
void GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit(std_ios_base_Init_destructor, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1324 */
size_t test_cpp_member_func()
{
 char dest[40]; // [esp+4h] [ebp-28h] BYREF

 memcpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1370 */
int test_cpp_constructor()
{
 int v0; // esi
 unsigned int *v1; // eax
 unsigned int *v2; // ecx
 int v3; // esi

 v0 = 0;
 v1 = (unsigned int *)operator new[](0x14u);
 v2 = v1;
 do
 {
 *v2 = v0;
 v0 += 10;
 ++v2;
 }
 while ( v0 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v1[2] + LifecycleClass::instance_count;
 operator delete[](v1);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13CF */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13F4 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13FA */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1400 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1406 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x140C */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1412 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1418 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x141E */
void test_cpp_exception()
{
 void *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 __cxa_throw(exception, (struct type_info *)"typeinfo for int", 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1502 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1508 */
int test_cpp_rtti()
{
 unsigned int *v0; // esi
 void *v1; // edi
 void *v2; // eax
 int v3; // esi
 int v4; // ebp
 void *v6; // [esp+8h] [ebp-14h]
 void *v7; // for second dynamic_cast result

 v0 = (unsigned int *)operator new(4u);
 *v0 = (unsigned int)(uintptr_t)off_3ECC;
 v6 = v0;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = (unsigned int)(uintptr_t)off_3EE0;
 v2 = __dynamic_cast(
      v0,
      (const void *)typeid_name_RTTIBase,
      (const void *)typeid_name_RTTIDerivedA,
      (ptrdiff_t)0);
 v3 = 130;
 if ( !v2 )
 v3 = 30;
 v4 = v3 + 200;
 v7 = __dynamic_cast(
 v1,
 (const struct __class_type_info *)"typeinfo for RTTIBase",
 (const struct __class_type_info *)"typeinfo for RTTIDerivedB",
 (ptrdiff_t)0);
 if ( !v7 )
 v4 = v3;
 operator delete(v6);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15C0 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 int v1; // eax
 char dest[40]; // [esp+14h] [ebp-28h] BYREF

 puts(asc_21D8);
 memcpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 v0 = strlen(dest);
 printf(aCppL301D, v0 + 4700);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1722 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: template_max<int> @ 0x173E */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x174C */
double template_max(double a, double b)
{
 long double v2; // fst6

 v2 = b;
 if ( a > (long double)b )
 return a;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x175D */
void template_swap<int>(int *a, int *b)
{
 int v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Template class Container<int> */
template<typename T>
struct Container {
    int size;
    T data[10];
};

/* Function: _ZN9ContainerIiEC2Ev @ 0x1770 */
Container<int>* Container<int>::Container(Container<int>* this)
{
 this->size = 0;
 return this;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x177C */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1798 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x17B0 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x17B8 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x17C4 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x17E2 */
double Container<double>::get(const Container<double> *this, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x17FC */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1804 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1826 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x182A */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x182C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x184E */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x18AC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* Additional C++ operator overloads */
void* operator new(size_t);
void* operator new[](size_t);
void operator delete(void*);
void operator delete[](void*);

/* Total functions decompiled: 46, failed: 21 */
