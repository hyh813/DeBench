/* Standard library includes */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <typeinfo>
#include <cstdlib>
#include <new>
#include <cstdarg>
#include <iostream>

/* Standard integer types - using fixed-width types from stdint.h */
#include <stdint.h>

/* Remove conflicting typedefs - rely on standard headers */

/* C++ exception and runtime support functions */
extern "C" {
void* _cxa_allocate_exception(size_t thrown_size);
void _cxa_throw(void* thrown_exception, void* type_info, void (*dest) (void *));
void* _cxa_begin_catch(void* exception);
void _cxa_end_catch();
void _cxa_rethrow();
void _cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
int _cxa_finalize(void*);
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
}

/* Standard library stubs for missing declarations */
void *operator new(unsigned int size);
void operator delete(void *ptr);
void *operator new[](unsigned int size);
void operator delete[](void *ptr);

/* Base class for virtual function testing */
struct Base {
    int (**_vptr$Base)(void);
    virtual int virtual_func(int x) { return x; }
};

/* RTTI related classes */
struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
    virtual ~RTTIBase() {}
    virtual int getType() { return 0; }
};

struct RTTIDerivedA : RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() { return 1; }
};

struct RTTIDerivedB : RTTIDerivedA {
    virtual int getType() { return 2; }
};

/* Lifecycle class for constructor testing */
struct LifecycleClass {
    static int instance_count;
};

/* Container template class stubs */
template<typename T>
struct Container {
    T data[10];
    int size;
    Container() : size(0) {}
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/* Stub functions */
int call_weak_fn() { return 0; }
void JUMPOUT(unsigned int addr) { (void)addr; }

/* Standard library declarations */
#include <string.h>

/* Missing symbols from runtime */
void *_dso_handle;
char unk_12BD = 0;
char unk_12BE = 0;

/* RTTI and vtable pointers - these are external symbols in the binary */
extern void *off_11ED8;
extern void *off_11EEC;

/* String constants */
extern const char asc_1294[];
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];

/* Type info for int - used in exception handling */
struct type_info {
    virtual ~type_info() {}
    bool operator==(const type_info& other) const { return this == &other; }
    bool operator!=(const type_info& other) const { return !(*this == other); }
    const char* name() const { return "int"; }
};

const type_info typeinfo_for_int;

/* Dynamic cast function stubs - runtime provided */
void *__dynamic_cast(
    const void *src,
    const void *src_type,
    const void *dst_type,
    void *src_ptr);

/* Macro definitions */

/* HIBYTE macro - extracts the high byte of a 16-bit value */
#define HIBYTE(x) ((unsigned char)(((unsigned short)(x)) >> 8))

/* LODWORD macro - extracts the low 32 bits of a 64-bit value */
#define LODWORD(x) ((unsigned int)(x))

/* Using namespace for std */
using namespace std;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
 JUMPOUT(0);
}


/* Function: _ZN12RTTIDerivedAD0Ev_0 @ 0x8BC */
RTTIDerivedA::~RTTIDerivedA()
{
    operator delete(this);
}


/* Global constructor initialization */

// The iostream header is included, which provides std::ios_base and its Init class
// We just need to declare the __ioinit object that iostream uses

// Helper function to call the destructor of std::ios_base::Init
// Note: std::ios_base is already defined in <iostream>

static void iostream_init_destructor(void* arg) {
    ((std::ios_base::Init*)arg)->~Init();
}

void GLOBAL__sub_I_5_1_cpp()
{
    // Register destructor to be called at program exit
    _cxa_atexit(
        iostream_init_destructor,
        0,
        &_dso_handle
    );
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func()
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 ((unsigned char *)&v1[2])[1] = unk_12BD;
 v1[3] = unk_12BE;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (void *)&typeinfo_for_int, (void (*)(void *))0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // r4
 void *v1; // r5
 void *v2; // r7
 void *v3; // r6
 int v4; // r0

 v0 = (RTTIDerivedA *)operator new(4u);
 v0->_vptr$RTTIBase = (int (**)(void))&off_11ED8;
 v1 = operator new(4u);
 *(unsigned int *)v1 = (unsigned int)&off_11EEC;
 v2 = __dynamic_cast(
 v0,
 (const struct __class_type_info *)"typeinfo for RTTIBase",
 (const struct __class_type_info *)"typeinfo for RTTIDerivedA",
 0);
 v3 = __dynamic_cast(
 v1,
 (const struct __class_type_info *)"typeinfo for RTTIBase",
 (const struct __class_type_info *)"typeinfo for RTTIDerivedB",
 0);
 v0->~RTTIDerivedA();
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 v4 = 130;
 if ( !v2 )
 v4 = 30;
 if ( v3 )
 v4 += 200;
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features()
{
 size_t v0;
 unsigned short v1[4];
 int v2;
 int v3;
 int v4;
 int v5;
 int v6;
 short v7;
 char v8;
 char v9;

 puts(asc_1294);
 strcpy((char *)v1, "Test");
 ((unsigned char *)&v1[2])[1] = unk_12BD;
 v1[3] = unk_12BE;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v0 = strlen((const char *)v1);
 printf(aCppL301D, v0 + 4700);
 printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0xEF4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xF08 */
template<typename T>
T template_max(T a, T b)
{
 if ( a <= b )
 return b;
 return a;
}

/* Explicit specialization for int */
template<>
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
template<>
double template_max<double>(double a, double b)
{
 double result; // r5

 result = b;
 if ( a > b )
 result = a;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
/* Primary template for template_swap */
template<typename T>
void template_swap(T *a, T *b)
{
 T v2;
 v2 = *a;
 *a = *b;
 *b = v2;
}

/* Explicit specialization for int */
template<>
void template_swap<int>(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
void Container<int>::push(int value)
{
 int size; // r2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // r12

 size = this->size;
 if ( size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedA::~RTTIDerivedA((RTTIDerivedA *)this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x1028 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x120C0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x120C4 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x120C8 */

/* FAILED to decompile: __imp_printf @ 0x120CC */

/* FAILED to decompile: __imp_puts @ 0x120D0 */

/* FAILED to decompile: __imp___libc_start_main @ 0x120D8 */

/* FAILED to decompile: __imp_abort @ 0x120DC */

/* FAILED to decompile: _ZdlPv @ 0x120E0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x120E4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x120E8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x120EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x120F4 */

/* FAILED to decompile: __imp_strlen @ 0x120F8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x120FC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x12100 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x12104 */

/* FAILED to decompile: __imp___cxa_throw @ 0x12108 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x1210C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x12110 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12114 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x12118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x12120 */

/* Total functions decompiled: 41, failed: 22 */
