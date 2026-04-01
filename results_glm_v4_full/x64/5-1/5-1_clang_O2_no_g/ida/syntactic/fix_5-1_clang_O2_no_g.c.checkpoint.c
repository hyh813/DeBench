/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_O2_no_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#include <typeinfo>
#include <cxxabi.h>
#include <exception>
#include <math.h>



extern "C" {


extern void __cxa_throw(void *obj, std::type_info *tinfo, void (*dest)(void*));
extern void *__cxa_allocate_exception(size_t);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dynamic_cast(const void *src_ptr, const __cxxabiv1::__class_type_info *src_type, const __cxxabiv1::__class_type_info *dst_type, ptrdiff_t src2dst_offset);
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void *_Unwind_Resume(void *);
extern void __cxa_finalize(void *dso_handle);
extern void __gxx_personality_v0(void);

} // extern "C"

namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
}

inline std::ios_base::Init::Init() {
}

inline std::ios_base::Init::~Init() {
}

/* Wrapper for destructor to allow taking its address */
static void ios_init_destructor_wrapper(std::ios_base::Init *obj) {
  obj->~Init();
}

extern std::ios_base::Init __ioinit;
extern void *_dso_handle;

/* Global data declarations */
static const unsigned long long xmmword_21F8[2] = {0, 0};
static const char *s = "Testing C++ Features";
static const char *format = "test_cpp_member_func: %d\n";
static const char *aCppL302D = "test_cpp_constructor: %d\n";
static const char *aCppL303D = "test_cpp_virtual_func: %d\n";
static const char *aCppL304D = "test_cpp_multiple_inheritance: %d\n";
static const char *aCppL305D = "test_cpp_diamond_inheritance: %d\n";
static const char *aCppL306D = "test_cpp_operator_overload: %d\n";
static const char *aCppL307D = "test_cpp_template_func: %d\n";
static const char *aCppL308D = "test_cpp_template_class: %d\n";
static const char *aCppL309D = "test_cpp_lambda: %d\n";

/* Class declarations */
struct RTTIBase {
  virtual ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
  virtual ~RTTIDerivedA();
  virtual long long getType();
};

struct RTTIDerivedB : RTTIBase {
  virtual ~RTTIDerivedB();
  virtual long long getType() const;
};

/* Type info declarations */
static const std::type_info *type_info_for_int = &typeid(int);
static const __cxxabiv1::__class_type_info *type_info_for_RTITIBase = static_cast<const __cxxabiv1::__class_type_info*>(&typeid(RTTIBase));
static const __cxxabiv1::__class_type_info *type_info_for_RTITIDerivedA = static_cast<const __cxxabiv1::__class_type_info*>(&typeid(RTTIDerivedA));
static const __cxxabiv1::__class_type_info *type_info_for_RTITIDerivedB = static_cast<const __cxxabiv1::__class_type_info*>(&typeid(RTTIDerivedB));

/* Operator new/delete declarations */
void *operator new(size_t size) {
  return malloc(size);
}

void operator delete(void *ptr) noexcept {
  free(ptr);
}

struct LifecycleClass {
  static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Helper macros */
#define JUMPOUT(x) do {} while(0)







/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
int GLOBAL__sub_I_5_1_cpp()
{
 new (&__ioinit) std::ios_base::Init();
 return __cxa_atexit((void (*)(void *))static_cast<void (*)(std::ios_base::Init*)>(ios_init_destructor_wrapper), &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
long long test_cpp_member_func(void)
{
 unsigned char s[31]; // [rsp+4h] [rbp-24h] BYREF
 char v2; // [rsp+23h] [rbp-5h]

 *(unsigned long long *)&s[15] = *(unsigned long long *)(((const char *)xmmword_21F8) + 15);
 *(unsigned long long *)s = xmmword_21F8[0];
 v2 = 0;
 return (unsigned int)(unsigned long)strlen((char*)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
long long test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
long long test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
long long test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, const_cast<std::type_info*>(type_info_for_int), (void (*)(void*))0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
long long test_cpp_rtti(void)
{
 unsigned long long *v0; // r14
 void *v1; // r12
 int v2; // ebx
 int v3; // ebp

 v0 = (unsigned long long *)operator new(8u);
 *v0 = (unsigned long long)type_info_for_RTITIBase;
 v1 = (void *)operator new(8u);
 *(unsigned long long *)v1 = (unsigned long long)type_info_for_RTITIDerivedB;
 v2 = 130;
 if ( !__dynamic_cast(
 v0,
 type_info_for_RTITIBase,
 type_info_for_RTITIDerivedA,
 0) )
 v2 = 30;
 v3 = v2 + 200;
 if ( !__dynamic_cast(
 v1,
 type_info_for_RTITIBase,
 type_info_for_RTITIDerivedB,
 0) )
 v3 = v2;
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return (unsigned int)(v3 + 14);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void test_cpp_oo_features(void)
{
 int v0; // eax
 unsigned char s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
 char v2; // [rsp+2Bh] [rbp-2Dh]

 puts(::s);
 *(unsigned long long *)&s[15] = *(unsigned long long *)(((const char *)xmmword_21F8) + 15);
 *(unsigned long long *)s = xmmword_21F8[0];
 v2 = 0;
 v0 = strlen((char*)s);
 printf(format, (unsigned int)(v0 + 4700));
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


/* Function: main @ 0x1680 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


template<typename T>
T template_max(T a1, T a2);

/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
template<>
int template_max<int>(int a1, int a2)
{
 int result; // rax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
template<>
double template_max<double>(double a1, double a2)
{
 return fmax(a1, a2);
}


template<typename T>
void template_swap(T &a1, T &a2);

/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
template<>
void template_swap<int>(int &a1, int &a2)
{
 int temp; // rax

 temp = a1;
 a1 = a2;
 a2 = temp;
}


template<typename T>
struct Container {
  T data[10];
  unsigned int size;
  
  Container();
  long long push(T a1);
  T get(int a1) const;
  long long getSize() const;
};

/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
template<>
Container<int>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
template<>
long long Container<int>::push(int a2)
{
 long long result; // rax

 result = this->size;
 if ( result <= 9 )
 {
 this->size = result + 1;
 this->data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
template<>
int Container<int>::get(int a2) const
{
 int result; // rax

 result = 0;
 if ( a2 >= 0 && this->size > a2 )
 return this->data[a2];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
template<>
long long Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
template<>
Container<double>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
template<>
long long Container<double>::push(double a2)
{
 long long result; // rax

 result = this->size;
 if ( result <= 9 )
 {
 this->size = result + 1;
 this->data[result] = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
template<>
double Container<double>::get(int a2) const
{
 double result; // xmm0_8

 result = 0.0;
 if ( a2 >= 0 && this->size > a2 )
 return this->data[a2];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
template<>
long long Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
long long RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
long long RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x17C8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: printf @ 0x40D8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40E0 */

/* FAILED to decompile: strlen @ 0x40E8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x40F0 */

/* FAILED to decompile: __libc_start_main @ 0x4100 */

/* FAILED to decompile: __cxa_atexit @ 0x4108 */

/* FAILED to decompile: _ZdlPv @ 0x4110 */

/* FAILED to decompile: _Znwm @ 0x4118 */

/* FAILED to decompile: __dynamic_cast @ 0x4120 */

/* FAILED to decompile: __cxa_rethrow @ 0x4130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4138 */

/* FAILED to decompile: puts @ 0x4140 */

/* FAILED to decompile: __cxa_end_catch @ 0x4148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4150 */

/* FAILED to decompile: __cxa_throw @ 0x4158 */

/* FAILED to decompile: _Unwind_Resume @ 0x4160 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4168 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4170 */

/* FAILED to decompile: __gmon_start__ @ 0x4180 */

/* Total functions decompiled: 40, failed: 19 */
