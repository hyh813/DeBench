/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_Os_no_g
 * Processor: arm
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Note: typeinfo is a C++ header - if compilation fails, comment out the next line
// Including it only for type_info definition, but we'll use forward declarations
// Note: iostream removed - causes compilation issues when compiling as C
// The stdio initialization is handled by the CRT anyway

// Define JUMPOUT macro for ARM (dummy implementation)
static inline void JUMPOUT(unsigned long long addr) { (void)addr; }

// Define call_weak_fn as a weak function
__attribute__((weak)) int call_weak_fn(void);

// Define LifecycleClass as struct for C compatibility
struct LifecycleClass {
    int instance_count;
};
// Use global variable to simulate static member
int LifecycleClass_instance_count = 0;
// Macro to access static member for compatibility
#define LifecycleClass_instance_count LifecycleClass_instance_count

// Define xmmword_16B3 (16-byte padding after "Test")
static const unsigned char xmmword_16B3[16] = {0};

// Forward declarations for RTTI types - must come before typeinfo references and function definitions
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// External declarations
void *__dso_handle;
int __cxa_atexit(void (*)(void*), void*, void*);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void*, const void*, void (*)(void*));
void *__cxa_begin_catch(void*);
void __cxa_end_catch();
void __cxa_rethrow();
void *my_operator_new(size_t);
void my_operator_delete(void*);
void *__dynamic_cast(const void*, const void*, const void*, long long);

// String constant
static const char aCppL301D[] = "C++: Member function result: %d\n";
static const char aCppL302D[] = "C++: Constructor static count: %d\n";
static const char aCppL303D[] = "C++: Virtual function result: %d\n";
static const char aCppL304D[] = "C++: Multiple inheritance: %d\n";
static const char aCppL305D[] = "C++: Diamond inheritance: %d\n";
static const char aCppL306D[] = "C++: Operator overload: %d\n";
static const char aCppL307D[] = "C++: Template function: %d\n";
static const char aCppL308D[] = "C++: Template class: %d\n";
static const char aCppL309D[] = "C++: Lambda: %d\n";
static const char asc_1680[] = "C++ OOP Features Test";

// Forward declarations for C++ standard library types (C compatible)
// Using plain C declarations instead of C++ namespaces
struct std_type_info {};
struct std_ios_base_Init {
    // Empty - just for type compatibility
};

struct std_ios_base {
    struct std_ios_base_Init Init_field;
};
typedef int std_ptrdiff_t;

// Declare std namespace for ios_base::Init
// In C, we just use the struct directly
static struct std_ios_base std_ioinit = {0};

// Define _dso_handle externally
extern void *_dso_handle;

// Declare __cxa functions that are used
// These are typically provided by the C++ runtime
// Note: Use __class_type_info for proper RTTI support
extern int __cxa_atexit(void (*)(void*), void*, void*);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, const struct __class_type_info*, void (*)(void*));
extern void *__cxa_begin_catch(void*);
extern void __cxa_end_catch();
extern void __cxa_rethrow();

// Declare operator new and delete
// Using C-compatible names to avoid 'new'/'delete' being treated as keywords
extern void *my_operator_new(size_t);
extern void my_operator_delete(void *);

// Declare __dynamic_cast
extern void *__dynamic_cast(const void *, const struct std_type_info *, const struct std_type_info *, long long);

// Forward declarations for RTTI types - must come before typeinfo references
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// RTTI structures - using plain structs for C compatibility
// Must be defined BEFORE typeinfo and function prototypes that use them
struct RTTIBase { long long vtable; };
struct RTTIDerivedA { long long vtable; long long getType_val; };
struct RTTIDerivedB { long long vtable; long long getType_val; };

// Additional forward declarations needed for functions that use these types
// These must come before the function definitions that reference them
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Typeinfo structures for RTTI
struct __class_type_info {};
static const struct __class_type_info typeinfo_for_RTTIBase = {0};
static const struct __class_type_info typeinfo_for_RTTIDerivedA = {0};
static const struct __class_type_info typeinfo_for_RTTIDerivedB = {0};
static const struct std_type_info typeinfo_for_int = {0};

// Declare __dynamic_cast with correct class type info pointers (use __class_type_info for proper RTTI)
extern void *__dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, long long);

// Declare __cxa_throw with correct type info pointer
extern void __cxa_throw(void*, const struct __class_type_info*, void (*)(void*));

/* Function: .init_proc @ 0xD48 */
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
 // Initialize stdio for C++ iostream
 std_ioinit.Init_field = 0;
 return __cxa_atexit((void (*)(void *))0, &std_ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Forward declarations for RTTI types - needed by functions below
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Offsets for vtable pointers
// vtable offsets for RTTI
static const unsigned long long off_11D58 = 0;
static const unsigned long long off_11D80 = 8;

/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = *(unsigned long long *)xmmword_16B3;
 return (unsigned int)strlen((const char*)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)(a1);
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


/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (const struct __class_type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11B0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11B8 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)malloc(8u);
 *v0 = off_11D58;
 v1 = (void *)malloc(8u);
 *(unsigned long long *)v1 = off_11D80;
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
 free(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1278 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1680);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = *(unsigned long long *)xmmword_16B3;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass_instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x13A4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x13BC */
long long template_max_int(long long result, int a2)
{
 if ( (int)result <= a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x13C8 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x13D4 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w9

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x13E8 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x13F0 */
long long Container_int_push(long long result, int a2)
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x140C */
long long Container_int_get(long long a1, unsigned int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 40) > (signed int)a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x142C */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1434 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x143C */
long long Container_double_push(long long result, double a2)
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1458 */
double Container_double_get(long long a1, unsigned int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > (signed int)a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1474 */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x147C */
// attributes: thunk
void RTTIDerivedA_destructor(struct RTTIDerivedA *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1480 */
long long RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1488 */
void RTTIBase_destructor(struct RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x148C */
// attributes: thunk
void RTTIDerivedB_destructor(struct RTTIDerivedB *this)
{
 free(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1490 */
long long RTTIDerivedB_getType(struct RTTIDerivedB *this)
{
 return 2;
}


/* Function: .term_proc @ 0x1498 */
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
