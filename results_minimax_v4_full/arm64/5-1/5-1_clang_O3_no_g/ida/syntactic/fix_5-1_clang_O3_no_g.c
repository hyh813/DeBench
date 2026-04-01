/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O3_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Since this needs to compile as C, we convert C++ classes to C structs
// and remove namespaces and other C++ specific features

// Forward declare ios_base::Init for C compatibility
typedef struct ios_base_init {
    void* vtable;
} ios_base_init;

// LifecycleClass declaration - using struct instead of class
typedef struct LifecycleClass {
    int instance_count;  // actual member variable
} LifecycleClass;

// Static instance counter - global in C
static LifecycleClass LifecycleClass_instance = {0};

// Function to get reference to static instance (emulates static member)
static LifecycleClass* LifecycleClass_instance_ptr() {
    return &LifecycleClass_instance;
}

// RTTI classes for dynamic_cast - converted to C structs
typedef struct RTTIBase {
    void* vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
    void* vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void* vtable;
} RTTIDerivedB;

// Virtual function tables
static void* RTTIBase_vtable = 0;
static void* RTTIDerivedA_vtable = 0;
static void* RTTIDerivedB_vtable = 0;

// Template class Container - removed for C compatibility
// The template class and specializations are removed since C doesn't support templates
// The actual implementations are provided below as regular functions

// Constant from binary - xmmword_1767 (16 bytes)
const char xmmword_1767[16] = "Test1234567890";  // placeholder constant

// Weak function stub
__attribute__((weak)) long long call_weak_fn() { return 0; }

// JUMPOUT stub - remove or make empty
void JUMPOUT(unsigned long long addr) { (void)addr; }

// External declarations for CRT functions
// Note: Using C-compatible declarations (no extern "C" block)
void* __cxa_allocate_exception(unsigned long);
void __cxa_throw(void*, const struct type_info*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
int __cxa_atexit(void (*)(void*), void*, void*);
void __cxa_finalize(void*);
int __libc_start_main(int (*)(int, char**, char**), int, char**, void*, void*, void*, void*);
// Use malloc/free instead of operator new/delete for C compatibility
void free(void*);
void* malloc(unsigned long);
void* __dynamic_cast(const void*, const void*, const void*, unsigned long);
void _Unwind_Resume(void);
int printf(const char*, ...);
int puts(const char*);
unsigned long strlen(const char*);
void abort(void);
void __gmon_start__(void);

// Wrapper functions for C++ operator new/delete - C compatible
void* operator_new(unsigned long size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

// Fix: add semicolon after struct type_info declaration
struct type_info {
    const char* name;
};

// Make sure the forward declaration is const for __cxa_throw compatibility
typedef const struct type_info type_info_t;

// C++ RTTI type info structures - using __class_type_info for compatibility
struct __class_type_info {
    const char* name;
};

struct __si_class_type_info {
    const char* name;
    const struct __class_type_info* base_info;
};

// type_info structure for RTTI

// RTTI typeinfo names are defined as struct type_info below for C++ compatibility

// String constants
const char asc_1734[] = "Testing C++ Features:\n";
const char aCppL301D[] = "Member function: %d\n";
const char aCppL302D[] = "Constructor: %d\n";
const char aCppL303D[] = "Virtual function: %d\n";
const char aCppL304D[] = "Multiple inheritance: %d\n";
const char aCppL305D[] = "Diamond inheritance: %d\n";
const char aCppL306D[] = "Operator overload: %d\n";
const char aCppL307D[] = "Template function: %d\n";
const char aCppL308D[] = "Template class: %d\n";
const char aCppL309D[] = "Lambda: %d\n";

// Virtual table pointers for RTTI
static void* off_11D58 = 0;  // placeholder
static void* off_11D80 = 0;  // placeholder

// Exception personality function - C compatible declaration
int __gxx_personality_v0(int, unsigned long, void*, void*);

void* __dso_handle = 0;
void* _dso_handle = &__dso_handle;
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
long long GLOBAL__sub_I_5_1_cpp()
{
 // Initialize ios_base::Init - simplified for C compatibility
 return __cxa_atexit(NULL, NULL, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 memset(v1, 0, sizeof(v1));
 memcpy(v1, "Test", 4);
 memcpy(&v1[15], xmmword_1767, 16);
 return (unsigned int)strlen((const char*)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance.instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1088 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1090 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1098 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10A0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10A8 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10B0 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10B8 */
long long test_cpp_lambda(void)
{
 return 85;
}


// type_info structure for RTTI - properly defined for __cxa_throw compatibility
const struct type_info typeinfo_for_int = {"int"};
const struct type_info typeinfo_for_RTTIBase = {"RTTIBase"};
const struct type_info typeinfo_for_RTTIDerivedA = {"RTTIDerivedA"};
const struct type_info typeinfo_for_RTTIDerivedB = {"RTTIDerivedB"};

/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
void test_cpp_exception(void)
{
 void *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 __cxa_throw(exception, (const struct type_info*)&typeinfo_for_int, (void (*)(void*))0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11BC */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11C4 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator_new(8u);
 *(unsigned long long *)v0 = (unsigned long long)(long)off_11D58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v2 = 130;
 }
 else
 {
 v2 = 30;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 operator_delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1284 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1734);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test\x0\x0";  // pad to 8 bytes
 *(unsigned long long *)&v1[15] = xmmword_1767;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass_instance.instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1458 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1470 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x147C */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1488 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x149C */
long long ContainerInt_Container(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x14A4 */
long long ContainerInt_push(long long result, int a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 40);
 if ( (int)v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x14C0 */
long long ContainerInt_get(long long a1, unsigned int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > (signed int)a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14E0 */
long long ContainerInt_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14E8 */
long long ContainerDouble_Container(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14F0 */
long long ContainerDouble_push(long long result, double a2)
{
 long long v2; // x8

 v2 = *(int *)(result + 80);
 if ( (int)v2 <= 9 )
 {
 *(double *)(result + 8 * v2) = a2;
 *(unsigned int *)(result + 80) = v2 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x150C */
double ContainerDouble_get(long long a1, unsigned int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > (signed int)a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1528 */
long long ContainerDouble_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1530 */
// attributes: thunk
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1534 */
long long RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x153C */
void RTTIBase_destructor(RTTIBase *this)
{
 (void)this;  // Suppress unused parameter warning
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1540 */
// attributes: thunk
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1544 */
long long RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x154C */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x12130 */

/* FAILED to decompile: strlen @ 0x12138 */

/* FAILED to decompile: __cxa_begin_catch @ 0x12140 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x12148 */

/* FAILED to decompile: __cxa_finalize @ 0x12150 */

/* FAILED to decompile: __libc_start_main @ 0x12160 */

/* FAILED to decompile: _ZdlPv @ 0x12168 */

/* FAILED to decompile: _Znwm @ 0x12170 */

/* FAILED to decompile: __dynamic_cast @ 0x12178 */

/* FAILED to decompile: __cxa_atexit @ 0x12180 */

/* FAILED to decompile: __cxa_rethrow @ 0x12190 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x12198 */

/* FAILED to decompile: abort @ 0x121A0 */

/* FAILED to decompile: __cxa_end_catch @ 0x121A8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x121B0 */

/* FAILED to decompile: __cxa_throw @ 0x121B8 */

/* FAILED to decompile: _Unwind_Resume @ 0x121C0 */

/* FAILED to decompile: printf @ 0x121C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x121D0 */

/* FAILED to decompile: __gmon_start__ @ 0x121E0 */

/* Total functions decompiled: 41, failed: 20 */
