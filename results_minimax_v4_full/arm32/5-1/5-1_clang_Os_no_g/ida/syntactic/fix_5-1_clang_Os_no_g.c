/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* HIBYTE macro - gets the high byte of a 16-bit value (returns lvalue for assignment) */
#define HIBYTE(x) (*(((unsigned char*)&(x)) + 1))

/* LODWORD macro - gets the low 32 bits of a 64-bit value */
#define LODWORD(x) ((unsigned int)(x))

/* Uninitialized data references from binary */
unsigned short unk_12BD;
unsigned short unk_12BE;
unsigned int off_11ED8 = 0;
unsigned int off_11EEC = 0;
const char *asc_1294 = "";
const char *aCppL301D = "";
const char *aCppL302D = "";
const char *aCppL303D = "";
const char *aCppL304D = "";
const char *aCppL305D = "";
const char *aCppL306D = "";
const char *aCppL307D = "";
const char *aCppL308D = "";
const char *aCppL309D = "";
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>

/* CRT stub declarations */
extern "C" {
int call_weak_fn(void);
void *_dso_handle;
int _cxa_atexit(void (*)(void *), void *, void *);
void _cxa_end_cleanup(void);
void _cxa_begin_catch(void *);
void _cxa_end_catch(void);
unsigned int *_cxa_allocate_exception(unsigned int);
void _cxa_throw(void *, const struct type_info *, void (*)(void *));
void *_dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, long);
}

// C++ operators must have C++ linkage
void *operator new(size_t);
void operator delete(void *);
void *operator new[](size_t);
void operator delete[](void *);

// Placement new operator
inline void *operator new(size_t, void *p) { return p; }
inline void *operator new[](size_t, void *p) { return p; }

/* External C++ standard library declarations */
namespace std {
class ios_base {
public:
    class Init {
    public:
        Init();
        ~Init();
    };
};
static ios_base::Init __ioinit;
}

/* Lifecycle class for testing */
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass();
    ~LifecycleClass();
};

/* JUMPOUT macro - used for indirect jumps in ARM */
#define JUMPOUT(addr) ((void (*)(void))(addr)())

/* RTTI classes for dynamic_cast testing */
class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType();
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType();
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_Os_no_g
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


// Helper function for calling destructor at exit (extern "C" for correct linkage)
extern "C" void std_ios_init_destructor(void *ptr) {
    ((std::ios_base::Init *)ptr)->~Init();
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
void GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 _cxa_atexit(std_ios_init_destructor, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func(void)
{
 char v1[32]; // [sp+8h] [bp-28h] BYREF
 int v2 = 0; // [sp+10h] [bp-20h]
 int v3 = 0; // [sp+14h] [bp-1Ch]
 int v4 = 0; // [sp+18h] [bp-18h]
 int v5 = 0; // [sp+1Ch] [bp-14h]
 int v6 = 0; // [sp+20h] [bp-10h]
 short v7 = 0; // [sp+24h] [bp-Ch]
 char v8 = 0; // [sp+26h] [bp-Ah]
 char v9 = 0; // [sp+27h] [bp-9h]

 strcpy(v1, "Test");
 v1[4] = (char)unk_12BD;
 v1[5] = (char)(unk_12BD >> 8);
 v1[6] = (char)unk_12BE;
 v1[7] = (char)(unk_12BE >> 8);
 return (size_t)strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func_ptr(int **a1)
{
 // ARM calling convention: first arg in r0
 // a1 points to object with vtable at offset 0
 // Fixed: get vtable pointer, then get function at offset 0, then call with 'this' pointer
 return (*(int (*)(void *))(*(int *)*a1))((void *)*a1);
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

 exception = _cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeid(int), (void (*)(void *))0);
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
 _cxa_end_cleanup();
 _cxa_begin_catch(a1);
 _cxa_end_catch();
 return v3 + 2 * v2 + v4;
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
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedA),
 0);
 v3 = _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeid(RTTIBase),
 (const struct __class_type_info *)&typeid(RTTIDerivedB),
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
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 puts(asc_1294);
 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = unk_12BD;
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
int template_max<int>(int result, int a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
int template_max<double>(double a1, double a2)
{
 int v2; // r5

 v2 = LODWORD(a2);
 if ( a1 > a2 )
 return LODWORD(a1);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
int *template_swap(int *result, int *a2)
{
 int v2; // r2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
int Container<int>::Container(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
int Container<int>::push(int result, int a2)
{
 int v2; // r2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
int Container<int>::get(int a1, int a2)
{
 int result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
int Container<double>::Container(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
int Container<double>::push(int result, int a2, int a3, int a4)
{
 int v4; // r12

 v4 = *(unsigned int *)(result + 80);
 if ( v4 <= 9 )
 {
 *(unsigned int *)(result + 8 * v4) = a3;
 *(unsigned int *)(result + 8 * v4 + 4) = a4;
 *(unsigned int *)(result + 80) = v4 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
long long Container<double>::get(int a1, int a2)
{
 long long result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(unsigned long long *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x100C */
// attributes: thunk
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int RTTIDerivedA::getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int RTTIDerivedB::getType(RTTIDerivedB *this)
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
