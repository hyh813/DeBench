#include <string.h>
#include <new>
#include <stdio.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations and stub definitions for C++ runtime structures */
struct type_info {
  const char *name;
};

namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init() {}
      ~Init() {}
    };
  };
  
  /* Global I/O initialization object */
  static ios_base::Init __ioinit;
}

/* Stub for global initialization objects */
static std::ios_base::Init std___ioinit;
static void *_dso_handle = (void*)0;

/* Stub function for weak function call */
static inline int call_weak_fn() { return 0; }

/* Macro for JUMPOUT decompiler artifact */
#define JUMPOUT(x) do {} while(0)

/* HIBYTE macro - extracts the high-order byte from a 16-bit value */
#define HIBYTE(w) ((unsigned char)(((unsigned short)(w) >> 8) & 0xFF))
/* SET_HIBYTE macro - sets the high-order byte of a 16-bit value */
#define SET_HIBYTE(w, b) ((w) = ((unsigned short)(w) & 0x00FF) | (((unsigned short)(b) & 0xFF) << 8))
/* LODWORD macro - extracts the low-order 32 bits of a 64-bit value */
#define LODWORD(x) ((uint32_t)((uint64_t)(x) & 0xFFFFFFFF))

/* Base class with vtable pointer */
struct Base {
  void **_vptr$Base;
};

/* RTTI base class */
struct RTTIBase {
  void **_vptr$RTTIBase;
};

/* RTTI derived class A */
struct RTTIDerivedA {
  void **_vptr$RTTIBase;
};

/* RTTI derived class B */
struct RTTIDerivedB {
  void **_vptr$RTTIDerivedB;
};

/* Lifecycle class with static instance count */
struct LifecycleClass {
  static int instance_count;
};

/* Template container classes */
template<typename T>
struct Container {
  int size;
  T data[10];
  Container();
  void push(T value);
  T get(int idx) const;
  int getSize() const;
};

/* External vtable references */
extern void *off_11ED8[1];
extern void *off_11EEC[1];

/* Define LifecycleClass static member */
int LifecycleClass::instance_count = 0;

/* Define type_info objects for RTTI */
struct type_info typeinfo_for_int = { 0 };
struct type_info typeinfo_for_RTIBase = { 0 };
struct type_info typeinfo_for_RTTIDerivedA = { 0 };
struct type_info typeinfo_for_RTTIDerivedB = { 0 };

/* Stub implementations for C++ runtime functions */
void _cxa_atexit(void (*func)(void*), void *arg, void *dso_handle)
{
  /* Stub for atexit handler registration */
}

void *_cxa_allocate_exception(size_t thrown_size)
{
  /* Stub for exception allocation */
  return 0;
}

void _cxa_throw(void *exception, struct type_info *tinfo, void *dest)
{
  /* Stub for exception throwing */
}



/* String constants */
static const char *asc_1358 = "Testing C++ Object-Oriented Features:";
static const char *aCppL301D = "String test result: %d\n";
static const char *aCppL302D = "Constructor test result: %d\n";
static const char *aCppL303D = "Virtual function test result: %d\n";
static const char *aCppL304D = "Multiple inheritance test result: %d\n";
static const char *aCppL305D = "Diamond inheritance test result: %d\n";
static const char *aCppL306D = "Operator overload test result: %d\n";
static const char *aCppL307D = "Template function test result: %d\n";
static const char *aCppL308D = "Template class test result: %d\n";
static const char *aCppL309D = "Lambda test result: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_O3_g
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
void RTTIDerivedA_d0(RTTIDerivedA *obj)
{
 operator delete(obj);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */

/* Static cleanup function for ios_base::Init */
static void cleanup_ios_init(void *p)
{
 std::ios_base::Init *init = (std::ios_base::Init *)p;
 init->~Init();
}

void GLOBAL__sub_I_5_1_cpp()
{
 /* C++ constructor call - using placement new syntax */
 std::ios_base::Init *tmp = &std___ioinit;
 new(tmp) std::ios_base::Init;
 _cxa_atexit(cleanup_ios_init, &std___ioinit, _dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */

/* C++ exception allocation function */
extern void *_cxa_allocate_exception(size_t thrown_size);
extern void _cxa_throw(void *exception, struct type_info *tinfo, void *dest);
extern void *_dynamic_cast(void *obj, const struct type_info *src, const struct type_info *dst, int offset);




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
 SET_HIBYTE(v1[2], 0);
 v1[3] = 0;
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

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xCA4 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCB0 */
int test_cpp_rtti()
{
 return 144;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD7C */
void test_cpp_oo_features()
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

 puts(asc_1358);
 strcpy((char *)v1, "Test");
 v1[2] = 0;
 v1[3] = 0;
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
}


/* Function: main @ 0xFB8 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xFCC */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xFD8 */
int template_max_double(double a, double b)
{
 int v2; // r5

 v2 = (int)(*(uint32_t*)(&b));
 if ( a > b )
 return (int)(*(uint32_t*)(&a));
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x100C */
void template_swap_int(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1020 */
void Container_int_Constructor(Container<int> *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x102C */
void Container_int_push(Container<int> *self, int value)
{
 int size_idx; // r2

 size_idx = self->size;
 if ( size_idx <= 9 )
 {
 self->size = size_idx + 1;
 self->data[size_idx] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1044 */
int Container_int_get(const Container<int> *self, int idx)
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1064 */
int Container_int_getSize(const Container<int> *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x106C */
void Container_double_Constructor(Container<double> *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1078 */
void Container_double_push(Container<double> *self, double value)
{
 int size_idx; // r12

 size_idx = self->size;
 if ( size_idx <= 9 )
 {
 self->data[size_idx] = value;
 self->size = size_idx + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x109C */
double Container_double_get(const Container<double> *self, int idx)
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x10C8 */
int Container_double_getSize(const Container<double> *self)
{
 return self->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x10D4 */
int RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x10DC */
void RTTIBase_destructor(RTTIBase *self)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x10E0 */
// attributes: thunk
void RTTIDerivedB_d0(RTTIDerivedB *obj)
{
 operator delete(obj);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x10E4 */
int RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}


/* Function: .term_proc @ 0x10EC */
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
