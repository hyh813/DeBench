/* Standard library includes */
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
#include <typeinfo>

/* LifecycleClass declaration */
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass();
    ~LifecycleClass();
};

int LifecycleClass::instance_count = 0;

 LifecycleClass::LifecycleClass() { ++instance_count; }
 LifecycleClass::~LifecycleClass() { --instance_count; }

/* std::ios_base::Init declaration */
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

/* External declarations */
void *operator new(unsigned int);
void *operator new[](unsigned int);
void operator delete(void*);
void operator delete[](void*);
int printf(const char *, ...);
int puts(const char *);
void *memcpy(void *, const void *, unsigned int);
unsigned int strlen(const char *);
void *__cxa_allocate_exception(unsigned int);
void __cxa_throw(void *, const struct type_info *, void (*)(void *));
void *__cxa_begin_catch(void *);
void __cxa_end_catch();
void __cxa_rethrow();
int __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(const void *, const struct __class_type_info *, const struct __class_type_info *, long);
int __gxx_personality_v0(...);
void _Unwind_Resume(void *);

/* String literals (decompiled from data section) */
const char asc_21D8[] = "C++ OO Features Test\n";
const char aCppL301D[] = "Test: %zu\n";
const char aCppL302D[] = "Cpp: %d\n";
const char aCppL303D[] = "Cpp: %d\n";
const char aCppL304D[] = "Cpp: %d\n";
const char aCppL305D[] = "Cpp: %d\n";
const char aCppL306D[] = "Cpp: %d\n";
const char aCppL307D[] = "Cpp: %d\n";
const char aCppL308D[] = "Cpp: %d\n";
const char aCppL309D[] = "Cpp: %d\n";

/* CRT stubs - defined as weak */
void _gmon_start__(void) __attribute__((weak));
void frame_dummy(void) __attribute__((weak));
int _do_global_ctors_aux(void) __attribute__((weak));
void _do_global_dtors_aux(void) __attribute__((weak));
void *_dso_handle;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_Os_no_g
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
    __asm__("jmp *8(%%ebx)" : : );
}


/* Function: sub_1160 @ 0x1160 */
int sub_1160(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1170 */
static void destroy_ioinit(void* p) {
    ((std::ios_base::Init*)p)->~Init();
}

int GLOBAL__sub_I_5_1_cpp()
{
 new ((void*)&std::__ioinit) std::ios_base::Init();
 return __cxa_atexit(destroy_ioinit, &std::__ioinit, &_dso_handle);
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
size_t test_cpp_member_func(void)
{
 char dest[40]; // [esp+4h] [ebp-28h] BYREF

 memcpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1370 */
int test_cpp_constructor(void)
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
int call_virtual_func(unsigned int *a1, int a2)
{
 return (*(int (*)(unsigned int, int))(*(unsigned int **)a1)[0])(*a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13F4 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13FA */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1400 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1406 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x140C */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1412 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1418 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x141E */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)"int", 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1502 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* RTTI type info structures */
struct __class_type_info {
    virtual void dummy() {}
};
struct __si_class_type_info : __class_type_info {
    const char *typeinfo_name;
    __si_class_type_info(const char *name) : typeinfo_name(name) {}
};

static const __class_type_info RTTIBase_typeinfo = __class_type_info();
static const __si_class_type_info RTTIDerivedA_typeinfo("RTTIDerivedA");
static const __si_class_type_info RTTIDerivedB_typeinfo("RTTIDerivedB");

/* Function: _Z13test_cpp_rttiv @ 0x1508 */
int test_cpp_rtti(void)
{
 unsigned int *v0; // esi
 unsigned int *v1; // edi
 void *v2; // eax
 int v3; // esi
 int v4; // ebp
 unsigned int *v6; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)operator new(sizeof(unsigned int));
 *v0 = 0;  // vtable pointer placeholder
 v6 = v0;
 v1 = (unsigned int *)operator new(sizeof(unsigned int));
 *v1 = 0;  // vtable pointer placeholder
 v2 = __dynamic_cast(
 (const void *)v0,
 (const struct __class_type_info *)&RTTIBase_typeinfo,
 (const struct __si_class_type_info *)&RTTIDerivedA_typeinfo,
 0);
 v3 = 130;
 if ( !v2 )
 v3 = 30;
 v4 = v3 + 200;
 if ( !__dynamic_cast(
 v1,
 (const struct __class_type_info *)&RTTIBase_typeinfo,
 (const struct __si_class_type_info *)&RTTIDerivedB_typeinfo,
 0) )
 v4 = v3;
 operator delete((void *)v6);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15C0 */
void test_cpp_oo_features(void)
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


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x173E */
template<typename T>
T template_max(T a1, T a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x174C */
template<> double template_max<double>(double a1, double a2)
{
 double v2; // fst6

 v2 = a2;
 if ( a1 > a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x175D */
// Explicit instantiation removed - template definition follows below

void template_swap(int *a1, int *a2)
{
 int v3; // edx

 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
}
;


/* Function: _ZN9ContainerIiEC2Ev @ 0x1770 */
int Container<int>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x177C */
int Container<int>::push(int a1, int a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1798 */
int Container<int>::get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x17B0 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x17B8 */
int Container<double>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x17C4 */
int Container<double>::push(int a1, double a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x17E2 */
long double Container<double>::get(int a1, int a2)
{
 long double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x17FC */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1804 */
void RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1826 */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x182A */
void RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x182C */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x184E */
int RTTIDerivedB::getType()
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x18AC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x4084 */

/* FAILED to decompile: __cxa_finalize @ 0x4088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x408C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4090 */

/* FAILED to decompile: memcpy @ 0x4094 */

/* FAILED to decompile: strlen @ 0x4098 */

/* FAILED to decompile: __cxa_atexit @ 0x409C */

/* FAILED to decompile: __libc_start_main @ 0x40A4 */

/* FAILED to decompile: _Znaj @ 0x40A8 */

/* FAILED to decompile: _ZdlPv @ 0x40AC */

/* FAILED to decompile: __dynamic_cast @ 0x40B0 */

/* FAILED to decompile: _ZdaPv @ 0x40B4 */

/* FAILED to decompile: printf @ 0x40BC */

/* FAILED to decompile: __cxa_rethrow @ 0x40C0 */

/* FAILED to decompile: puts @ 0x40C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x40CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x40D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40DC */

/* Total functions decompiled: 46, failed: 21 */
