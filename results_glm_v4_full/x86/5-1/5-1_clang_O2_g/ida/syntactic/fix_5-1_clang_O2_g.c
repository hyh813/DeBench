/* Auto-injected type definitions by preprocessor */
/* Define size_t first as other types may depend on it */
/* Note: size_t is already defined by system headers */

#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned long uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
/* Don't redefine int32_t - it may conflict with system headers */
#ifndef int64_t
typedef long long int64_t;
#endif
/* ssize_t is already defined by system headers */
/* Don't redefine uintptr_t - it may conflict with system headers */
/* Don't redefine intptr_t - it may conflict with system headers */
/* ptrdiff_t is already defined by system headers */
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

/* External CRT symbol declarations */
extern void *_gmon_start__;
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* C++ standard library headers */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Stub declarations for C++ runtime */
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void *__dso_handle;
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void *, struct type_info *, void *);
extern void *__dynamic_cast(const void *, const void *, const void *, int);
extern void _Unwind_Resume(void *);
extern void __gxx_personality_v0(void);

/* std::ios_base stubs */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* Type info stub */
struct type_info {
    virtual ~type_info();
};

/* Global type info symbols (decompiler-generated) */
extern struct type_info type_info_for_int;
extern struct type_info type_info_for_RTTIBase;
extern struct type_info typeinfo_for_RTIDerivedA;
extern struct type_info typeinfo_for_RTIDerivedB;

/* Operator new/delete implementations */
void *operator new(size_t size) {
    return malloc(size);
}

void *operator new(size_t size, void *ptr) {
    return ptr;
}

void operator delete(void *ptr) {
    free(ptr);
}

/* Global objects (decompiler-generated) */
extern unsigned int off_3ECC;
extern unsigned int off_3EE0;

/* String constants (decompiler-generated) */
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

/* HIBYTE macro */
#define HIBYTE(x) (((unsigned short)(x) >> 8) & 0xFF)

/* Forward declarations for classes */
class Base {
public:
    void **_vptr$Base;
};

/* Wrapper for ios_base::Init destructor */
static void ios_base_init_destructor_wrapper(void *obj) {
    ((std::ios_base::Init*)obj)->~Init();
}

class LifecycleClass {
public:
    static int instance_count;
};

class RTTIDerivedA {
public:
    virtual ~RTTIDerivedA();
    virtual int getType();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
};

class RTTIDerivedB {
public:
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

template<typename T>
class Container {
public:
    int size;
    T data[10];
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O2_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *%0" : : "m"(*(void**)(0)));
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
void GLOBAL__sub_I_5_1_cpp()
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit(ios_base_init_destructor_wrapper, &std::__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11AC @ 0x11AC */
void sub_11AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func()
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 memset(v6, 0, sizeof(v6));
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 s[2] &= 0xFF;
 s[3] = 0;
 strcpy((char *)s, "Test");
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13D0 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13E0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13F0 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1400 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1410 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1440 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &type_info_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1540 */
int test_cpp_rtti()
{
 unsigned int *v0; // eax
 const void *v1; // esi
 void *v2; // edi
 void *v3; // eax
 int v4; // esi
 int v5; // ebp
 void *v7; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)operator new(4u);
 *v0 = (unsigned int)&off_3ECC;
 v1 = v0;
 v7 = v0;
 v2 = operator new(4u);
 *(unsigned int *)v2 = (unsigned int)&off_3EE0;
 v3 = __dynamic_cast(
 v1,
 (const void *)&type_info_for_RTTIBase,
 (const void *)&typeinfo_for_RTIDerivedA,
 0);
 v4 = 130;
 if ( !v3 )
 v4 = 30;
 v5 = v4 + 200;
 if ( !__dynamic_cast(
 v2,
 (const void *)&type_info_for_RTTIBase,
 (const void *)&typeinfo_for_RTIDerivedB,
 0) )
 v5 = v4;
 operator delete(v7);
 (*(void ( **)(void *))(*(unsigned int *)v2 + 4))(v2);
 return v5 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void test_cpp_oo_features()
{
 size_t v0; // eax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 unsigned char v7[8]; // [esp+24h] [ebp-18h] BYREF

 puts(asc_21D8);
 memset(v7, 0, sizeof(v7));
 v6 = 0;
 v5 = 0;
 v4 = 0;
 v3 = 0;
 s[5] = 0;
 v2 = 0;
 strcpy(s, "Test");
 v0 = strlen(s);
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


/* Function: main @ 0x1810 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Primary template declaration for template_max */
template<typename T>
T template_max(T a, T b);

/* Specialization for int */
template<>
int template_max<int>(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Specialization for double */
template<>
double template_max<double>(double a, double b)
{
 long double v2; // fst6

 v2 = b;
 if ( a > (long double)b )
 return a;
 return v2;
}


/* Primary template declaration for template_swap */
template<typename T>
void template_swap(T *a, T *b);

/* Specialization for int */
template<>
void template_swap<int>(int *a, int *b)
{
 int v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1880 */
/* Constructor for Container<int> */
template<>
Container<int>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1890 */
template<>
void Container<int>::push(int value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x18B0 */
template<>
int Container<int>::get(int idx) const
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x18D0 */
template<>
int Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEd @ 0x18E0 */
/* Constructor for Container<double> */
template<>
Container<double>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x18F0 */
template<>
void Container<double>::push(double value)
{
 int size; // ecx

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1910 */
template<>
double Container<double>::get(int idx) const
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1930 */
template<>
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB::getType() const
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A1C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x4078 */

/* FAILED to decompile: __cxa_finalize @ 0x407C */

/* FAILED to decompile: __cxa_begin_catch @ 0x4080 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4084 */

/* FAILED to decompile: strlen @ 0x4088 */

/* FAILED to decompile: __cxa_atexit @ 0x408C */

/* FAILED to decompile: __libc_start_main @ 0x4094 */

/* FAILED to decompile: _ZdlPv @ 0x4098 */

/* FAILED to decompile: __dynamic_cast @ 0x409C */

/* FAILED to decompile: printf @ 0x40A4 */

/* FAILED to decompile: __cxa_rethrow @ 0x40A8 */

/* FAILED to decompile: puts @ 0x40AC */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40B4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40B8 */

/* FAILED to decompile: __cxa_throw @ 0x40BC */

/* FAILED to decompile: _Unwind_Resume @ 0x40C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40C4 */

/* Total functions decompiled: 46, failed: 18 */
