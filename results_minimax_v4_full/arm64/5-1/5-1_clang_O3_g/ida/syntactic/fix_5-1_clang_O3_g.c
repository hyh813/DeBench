/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_O3_g
 * Processor: arm
 */

// C headers required for decompiled code
#include <stddef.h>
#include <string.h>
#include <stdio.h>

// C++ headers required for decompiled code
// Note: <new> is a C++ header not available in C, operator new/delete declared below

// Stub type_info structures (normally provided by C++ runtime)
struct type_info {
    const char *_M_d_name;
};

struct __class_type_info : type_info {};
struct __pbase_type_info : type_info {};

// C++ operators declarations (for C compatibility)
void* operator new(size_t size);
void operator delete(void* ptr);

// Stub type_info for int (used by exception handling)
static struct type_info type_info_for_int = { (const char*)"i" };

// Note: using namespace std; is C++ only - omitted for C compatibility

// Forward declaration for LifecycleClass (needed by test_cpp_constructor)
struct LifecycleClass;

// Stub functions (normally provided by CRT)
static int call_weak_fn(void) { return 0; }
static void JUMPOUT(unsigned long addr) { (void)addr; }

// Stub for std::ios_base::Init (C++ iostream initialization) - C compatible
struct std_ios_base_Init {
    char placeholder;
};
static struct std_ios_base_Init std_ioinit = {0};

// Stub for __cxa_atexit
int __cxa_atexit(void (*func)(void*), void* arg, void* dso);

/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
void GLOBAL__sub_I_5_1_cpp()
{
    // Stub: original was std::ios_base::Init initialization
    // This would initialize cin/cout/cerr in full C++ implementation
}

// Forward declarations for classes (needed before function definitions)
struct Base;
struct LifecycleClass;

// Class definitions (must come before use in functions)
struct Base {
    virtual int virtual_func(int x) = 0;
    virtual ~Base() {}
};

// Define LifecycleClass with static member - must have body for static member
struct LifecycleClass {
    static int instance_count;
};

// Define LifecycleClass::instance_count only once
int LifecycleClass::instance_count = 0;

// C++ operators (already declared earlier, but redeclare for clarity)
// void* operator new(size_t size);
// void operator delete(void* ptr);

// RTTI classes
struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() const = 0;
};

struct RTTIDerivedA : public RTTIBase {
    virtual ~RTTIDerivedA();
    virtual int getType() const override;
};

struct RTTIDerivedB : public RTTIBase {
    virtual ~RTTIDerivedB();
    virtual int getType() const override;
};

// Stub for std::ios_base::Init (C++ iostream initialization)
typedef struct {
    void *placeholder;
} std_ios_base_Init;

// C++ namespace stubs (for C compatibility)
struct std_ios_base_Init_Cpp {
    char placeholder;
};

// Global instance - using the C-compatible version
static std_ios_base_Init std_ioinit = {0};

// DSO handle for __cxa_atexit
void *_dso_handle = 0;

// __dynamic_cast declaration (for RTTI)
void *__dynamic_cast(const void *src, const struct __class_type_info *src_type, 
                     const struct __class_type_info *dst_type, ptrdiff_t offset);

// Data definitions
unsigned long long xmmword_1767 = 0; // placeholder - was "ing..." or similar string data
const unsigned long long off_11D58 = 0; // vtable placeholder for RTTIDerivedA
const unsigned long long off_11D80 = 0; // vtable placeholder for RTTIDerivedB

// DSO handle for __cxa_atexit
void *_dso_handle = 0;

// Global instance for iostream initialization
static std_ios_base_Init std_ioinit = {0};

// Global initializer function
void GLOBAL__sub_I_5_1_cpp()
{
    // Stub: original was std::ios_base::Init initialization
    // This would initialize cin/cout/cerr in full C++ implementation
}

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
void GLOBAL__sub_I_5_1_cpp()
{
 // Stub: original was std::ios_base::Init initialization
 // This would initialize cin/cout/cerr in full C++ implementation
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */








// Data definitions
unsigned long long xmmword_1767 = 0; // placeholder - was "ing..." or similar string data
const unsigned long long off_11D58 = 0; // vtable placeholder for RTTIDerivedA
const unsigned long long off_11D80 = 0; // vtable placeholder for RTTIDerivedB

// String constants
const char asc_1734[] = "C++ OOP Features Test"; // placeholder for string at address 0x1734

// Type info for RTTI (used by __dynamic_cast)
static struct type_info type_info_for_RTTIBase = { (const char*)"RTTIBase" };
static struct type_info type_info_for_RTTIDerivedA = { (const char*)"RTTIDerivedA" };
static struct type_info type_info_for_RTTIDerivedB = { (const char*)"RTTIDerivedB" };

// RTTI type_info pointers (for __dynamic_cast)
static struct __class_type_info type_info_ptr_for_RTTIBase = { { (const char*)"RTTIBase" } };
static struct __class_type_info type_info_ptr_for_RTTIDerivedA = { { (const char*)"RTTIDerivedA" } };
static struct __class_type_info type_info_ptr_for_RTTIDerivedB = { { (const char*)"RTTIDerivedB" } };

// Forward declaration for LifecycleClass (needed by test_cpp_constructor)
struct LifecycleClass;

// Forward declarations for C++ operators (note: can't use 'operator' keyword in C, so use distinct names)
// These are mapped to actual operator new/delete in C++ via macros or the linker
void *operator_new(size_t size);
void operator_delete(void *ptr);

// Format strings for printf statements
extern const char aCppL301D[];
extern const char aCppL302D[];
extern const char aCppL303D[];
extern const char aCppL304D[];
extern const char aCppL305D[];
extern const char aCppL306D[];
extern const char aCppL307D[];
extern const char aCppL308D[];
extern const char aCppL309D[];
extern const char aCppL401D[];
extern const char aCppL402D[];
extern const char aCppL403D[];

// RTTI typeinfo variables referenced in code (these are extern references to compiler-generated RTTI)
extern struct __class_type_info typeinfo_for_RTTIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
int test_cpp_member_func()
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767;
 return strlen(v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
int call_virtual_func(struct Base *obj, int x)
{
 return ((long long ( *)(struct Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1088 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1090 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1098 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10A0 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10A8 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10B0 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10B8 */
int test_cpp_lambda()
{
 return 85;
}


// Declare exception handling functions
void __cxa_throw(void *exception, struct type_info *info, void (*dest)(void *));
void *__cxa_allocate_exception(size_t size);

/* Function: _Z18test_cpp_exceptionv @ 0x10C0 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&type_info_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11BC */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11C4 */
int test_cpp_rtti()
{
 unsigned long long *v0; // x19
 void *v1; // x20
 int v2; // w22
 int v3; // w21

 v0 = (unsigned long long *)operator new(8u);
 *v0 = &off_11D58;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = &off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
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
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v3 = v2 + 200;
 }
 else
 {
 v3 = v2;
 }
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1284 */
void test_cpp_oo_features()
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1734);
 v2 = 0;
 *(unsigned long long *)v1 = *(unsigned long long *)"Test";
 *(unsigned long long *)&v1[15] = xmmword_1767;
 v0 = strlen(v1);
 printf(aCppL301D, (unsigned int)(v0 + 4700));
 printf(aCppL302D, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: sub_137C @ 0x137C */
// positive sp value has been detected, the output may be wrong!
long long sub_137C(unsigned int a1)
{
 unsigned long long *v1; // x19
 void *v2; // x20
 int v3; // w22
 int v4; // w21

 printf(aCppL401D, a1);
 printf(aCppL402D, 703);
 v1 = (unsigned long long *)operator new(8u);
 *v1 = &off_11D58;
 v2 = (void *)operator new(8u);
 *(unsigned long long *)v2 = &off_11D80;
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
 0) )
 {
 v3 = 130;
 }
 else
 {
 v3 = 30;
 }
 if ( __dynamic_cast(
 v2,
 (const struct __class_type_info *)&`typeinfo for'RTTIBase,
 (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
 0) )
 {
 v4 = v3 + 200;
 }
 else
 {
 v4 = v3;
 }
 operator delete(v1);
 (*(void ( **)(void *))(*(unsigned long long *)v2 + 8LL))(v2);
 return printf(aCppL403D, (unsigned int)(v4 + 14));
}


/* Function: main @ 0x1458 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_1464 @ 0x1464 */
// positive sp value has been detected, the output may be wrong!
long long sub_1464()
{
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1470 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x147C */
double template_max<double>(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1488 */
void template_swap<int>(int *a, int *b)
{
 int v2; // w9

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x149C */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x14A4 */
void Container<int>::push(Container<int> *this, int value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x14C0 */
int Container<int>::get(const Container<int> *this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x14E0 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x14E8 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x14F0 */
void Container<double>::push(Container<double> *this, double value)
{
 long long size; // x8

 size = this->size;
 if ( (int)size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x150C */
double Container<double>::get(const Container<double> *this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1528 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1530 */
// attributes: thunk
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1534 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x153C */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1540 */
// attributes: thunk
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1544 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
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

/* Total functions decompiled: 43, failed: 20 */
