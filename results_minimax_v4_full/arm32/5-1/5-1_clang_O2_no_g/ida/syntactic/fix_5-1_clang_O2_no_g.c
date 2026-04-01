/* Standard library headers */
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <iostream>

/* Auto-injected type definitions by preprocessor - only non-standard types */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef signed char int8_t;
typedef short int16_t;
typedef long long int64_t;
typedef unsigned long long uintmax_t;

/* HIBYTE macro */
#define HIBYTE(x) (*((unsigned char*)&x + 1))

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O2_no_g
 * Processor: arm
 */

/* Forward declarations for weak functions - must be before use */
__attribute__((weak)) int call_weak_fn(void);

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
}


/* CRT handle for dynamic symbol table - declared before use */
void *_dso_handle;

/* Standard library internal - iostream initialization */
static std::ios_base::Init __ioinit;

/* C++ exception handling and runtime declarations */
extern "C" {
    void* _cxa_allocate_exception(size_t);
    void _cxa_throw(void*, void*, void*);
    void* _cxa_begin_catch(void*);
    void _cxa_end_catch(void);
    void* _cxa_end_cleanup(void);
    int _cxa_atexit(void (*)(void*), void*, void*);
    void _cxa_finalize(void*);
    void _cxa_rethrow(void);
    void _cxa_throw_exception(void*, void*, void*);
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
int GLOBAL__sub_I_5_1_cpp()
{
 new (&__ioinit) std::ios_base::Init();
 // Lambda must be captureless to convert to function pointer for _cxa_atexit
 struct StaticDestructor {
   ~StaticDestructor() { __ioinit.~Init(); }
 };
 static StaticDestructor dtor;
 return _cxa_atexit([](void*) { __ioinit.~Init(); }, &__ioinit, &_dso_handle);
}


/* Forward declarations for weak functions - must be before use */
__attribute__((weak)) int call_weak_fn(void);

/* Standard library namespace */
using namespace std;

/* Weak function implementation */
__attribute__((weak)) int call_weak_fn(void) { return 0; }


/* Data from binary - uninitialized global variables */
unsigned char unk_1375;
unsigned short unk_1376;

/* Data from binary - string constants */
const char asc_134C[] = "CPP OOP Features Test";
const char aCppL301D[] = "String length + 4700 = %zu\n";
const char aCppL302D[] = "Static member count * 1001 + 21 = %d\n";
const char aCppL303D[] = "Virtual function result = %d\n";
const char aCppL304D[] = "Multiple inheritance test = %d\n";
const char aCppL305D[] = "Diamond inheritance test = %d\n";
const char aCppL306D[] = "Operator overload test = %d\n";
const char aCppL307D[] = "Template function test = %d\n";
const char aCppL308D[] = "Template class test = %d\n";
const char aCppL309D[] = "Lambda test = %d\n";

/* RTTI type info pointers */
const unsigned int off_11ED8 = 0;
const unsigned int off_11EEC = 0;


/* Class declarations for RTTI types */
class LifecycleClass {
public:
    static int instance_count;
};

/* RTTI class declarations */
class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType() = 0;
};

class RTTIDerivedA : public RTTIBase {
public:
    ~RTTIDerivedA();
    int getType() override;
};

class RTTIDerivedB : public RTTIBase {
public:
    ~RTTIDerivedB();
    int getType() override;
};


/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func(void)
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
 HIBYTE(v1[2]) = unk_1375;
 v1[3] = unk_1376;
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
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(int (**a1)(unsigned int))
{
 return (*a1)((unsigned int)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (void*)0, (void*)0);
}


/* Function: sub_BF0 @ 0xBF0 */
// positive sp value has been detected, the output may be wrong!
int sub_BF0(void *a1, int a2)
{
 int v2; // r4
 int v3; // r6
 int v4; // r5
 bool v5; // zf

 v4 = 100;
 v5 = a2 == 3;
 if ( a2 != 3 )
 {
 v4 = 200;
 v5 = a2 == 2;
 }
 if ( !v5 )
 {
   // Exception path - cleanup and return 0
   // Note: _cxa_end_cleanup is a non-returning function in practice
   // but we keep it for decompilation accuracy
   return 0;
 }
 else
 {
 // Normal path - using a1 as exception pointer for catch
 void *exc = _cxa_begin_catch(a1);
 (void)exc;
 _cxa_end_catch();
 return v3 + 2 * v2 + v4;
 }
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti(void)
{
 unsigned int *v0; // r4
 void *v1; // r5
 void *v2; // r7
 void *v3; // r6
 int v4; // r0

 v0 = (unsigned int *)operator new(4u);
 *v0 = off_11ED8;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11EEC;
 v2 = _dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0);
 v3 = _dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0);
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 v4 = 130;
 if ( !v2 )
 v4 = 30;
 if ( v3 )
 v4 += 200;
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features(void)
{
 size_t v0; // r0
 unsigned short v1[4]; // [sp+8h] [bp-38h] BYREF
 int v2; // [sp+10h] [bp-30h]
 int v3; // [sp+14h] [bp-2Ch]
 int v4; // [sp+18h] [bp-28h]
 int v5; // [sp+1Ch] [bp-24h]
 int v6; // [sp+20h] [bp-20h]
 short v7; // [sp+24h] [bp-1Ch]
 char v8; // [sp+26h] [bp-1Ah]
 char v9; // [sp+27h] [bp-19h]

 puts(asc_134C);
 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = unk_1375;
 v1[3] = unk_1376;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v8 = 0;
 v7 = 0;
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


/* Template function declaration */
template<typename T>
T template_max(T a, T b);

/* Forward declaration for template class */
template<typename T>
class Container;


/* Function: main @ 0xFAC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Template function definition */
template<typename T>
T template_max(T a, T b) {
    return a > b ? a : b;
}

/* Forward declaration for template class */
template<typename T>
class Container;

/* Explicit template specializations */
template<>
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}

template<>
int template_max<double>(double a1, double a2)
{
 int v2; // r5

 v2 = (int)a1;
 if ( a1 > a2 )
 return (int)a1;
 return v2;
}

template<>
void template_swap<int>(int* a, int* b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Template class definitions */
template<typename T>
class Container {
public:
    Container() {}
    int push(T value);
    T get(int index);
    int getSize();
private:
    T data[10];
    int size;
};

// Explicit specialization for int
template<>
class Container<int> {
private:
    int data[10];
    int size;
public:
    Container() : size(0) {}
    int push(int value);
    int get(int index);
    int getSize();
};

template<>
int Container<int>::push(int value) {
    if (size <= 9) {
        data[size] = value;
        size++;
    }
    return 0;
}

template<>
int Container<int>::get(int index) {
    if (index >= 0 && size > index)
        return data[index];
    return 0;
}

template<>
int Container<int>::getSize() { return size; }

// Explicit specialization for double
template<>
class Container<double> {
private:
    long long data[10];
    int size;
public:
    Container() : size(0) {}
    int push(double value);
    double get(int index);
    int getSize();
};

template<>
int Container<double>::push(double value) {
    if (size <= 9) {
        *(double*)&data[size] = value;
        size++;
    }
    return 0;
}

template<>
double Container<double>::get(int index) {
    if (index >= 0 && size > index)
        return *(double*)&data[index];
    return 0;
}

template<>
int Container<double>::getSize() { return size; }


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x10C4 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x10C8 */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x10D0 */
RTTIBase::~RTTIBase()
{
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x10D4 */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x10D8 */
int RTTIDerivedB::getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x10E0 */
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

/* FAILED to decompile: __imp__ZdlPv @ 0x120E0 */

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

/* Total functions decompiled: 42, failed: 22 */
