/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_Os_no_g
 * Processor: arm
 */

#include <stddef.h>
#include <string.h>

/* Function: .init_proc @ 0x1638 */

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct DiamondDerived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;
struct Container_int;
struct Container_double;

/* type_info structure for C++ RTTI support */
struct type_info {
    void *vtable;
    const char *name;
};

/* LifecycleClass struct definition */
struct LifecycleClass {
    void *vtable;
};

static int LifecycleClass_instance_count;

/* External declarations for C++ operators (mangled names for C compatibility) */
extern void *_Znwj(unsigned long size);  /* operator new(unsigned long) */
extern void *_Znam(unsigned long size);  /* operator new[](unsigned long) */
extern void _ZdlPv(void *ptr);          /* operator delete(void*) */
extern void _ZdlPvm(void *ptr, unsigned long size);  /* operator delete(void*, unsigned long) */
extern void _ZdaPv(void *ptr);          /* operator delete[](void*) */

/* Stub for weak function call */
__attribute__((weak)) long long call_weak_fn(void)
{
    return 0;
}

/* Additional C++ runtime support declarations */
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exception, struct type_info *type, void *dest);
extern void *__dynamic_cast(void *ptr, const struct type_info *src, const struct type_info *dst, int offset);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void __cxa_begin_catch(void *exception);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_finalize(void *dso_handle);

/* Standard library declarations */
extern void __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern char *strncpy(char *dest, const char *src, size_t n);
extern void __stack_chk_fail(void);
extern void abort(void);

/* C++ initialization support */
struct std_ios_base_Init {
    void *vtable;
};
extern void _ZNSt8ios_base4InitC1Ev(struct std_ios_base_Init *this);  /* std::ios_base::Init::Init() */
extern void _ZNSt8ios_base4InitD1Ev(struct std_ios_base_Init *this);  /* std::ios_base::Init::~Init() */

/* Unique_ptr destructor declarations - defined below */
extern void _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(void **a1);
extern void _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(void **a1);

/* Exception personality function */
extern int __gxx_personality_v0(int version, int actions, long long exception_class, struct _Unwind_Exception *exception_info, struct _Unwind_Context *context);

/* Unwind support */
struct _Unwind_Exception;
struct _Unwind_Context;
extern void _Unwind_Resume(struct _Unwind_Exception *exception);

/* CRT declarations */
extern void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void __gmon_start__(void);

/* Stub for JUMPOUT */
static inline void JUMPOUT(long long addr) {
    __builtin_unreachable();
}

/* External vtable symbols */
extern const struct type_info off_13868;
extern const struct type_info off_13898;
extern void *off_13B58;
extern void *off_13B80;
extern void *off_13AC8;
extern void *off_13B30;
extern void *off_13AF8;
extern const struct type_info off_138E0;
extern const struct type_info off_13918;
extern void *off_13958;
extern void *off_13990;
extern void *off_13A90;
extern const struct type_info *off_13A80;

/* Global symbols for C++ runtime */
struct std_ios_base_Init std___ioinit;
void *_dso_handle = &_dso_handle;

/* Definitions for vtable and type_info symbols */
const struct type_info off_13868 = { 0 };
const struct type_info off_13898 = { 0 };
void *off_13B58 = NULL;
void *off_13B80 = NULL;
void *off_13AC8 = NULL;
void *off_13B30 = NULL;
void *off_13AF8 = NULL;
const struct type_info off_138E0 = { 0 };
const struct type_info off_13918 = { 0 };
void *off_13958 = NULL;
void *off_13990 = NULL;
void *off_13A90 = NULL;
const struct type_info *off_13A80 = NULL;

/* External data symbols */
extern const char asc_25B2[];
extern const char unk_25D6[];
extern const char unk_25F4[];
extern const char unk_2610[];
extern const char unk_262C[];
extern const char unk_2648[];
extern const char unk_2665[];
extern const char unk_2681[];
extern const char unk_269D[];
extern const char unk_26B9[];

/* Define string constants */
const char asc_25B2[] = "Testing C++ OO Features:";
const char unk_25D6[] = "Member func: %d\n";
const char unk_25F4[] = "Constructor: %d\n";
const char unk_2610[] = "Virtual func: %d\n";
const char unk_262C[] = "Multiple inheritance: %d\n";
const char unk_2648[] = "Diamond inheritance: %d\n";
const char unk_2665[] = "Operator overload: %d\n";
const char unk_2681[] = "Template func: %d\n";
const char unk_269D[] = "Template class: %d\n";
const char unk_26B9[] = "Lambda: %d\n";

/* Forward declarations for template functions */
long long template_max_int(long long result, int a2);
double template_max_double(double result, double a2);
int * template_swap_int(int *result, int *a2);

/* Forward declarations for C++ test functions */
void test_cpp_oo_features(void);

/* Forward declarations for virtual thunks */
long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);
void DiamondDerived_dtor1(struct DiamondDerived *this);

/* Forward declarations for Container template class (int specialization) */
long long Container_int_Constructor(long long result);
long long Container_int_push(long long result, int a2);

/* Minimal struct definitions for C++ classes */
struct Base {
    void *vtable;  /* virtual table pointer */
};

struct Derived {
    void *vtable;  /* virtual table pointer */
    int value;     /* member variable */
};

struct MultiDerived {
    void *vtable1;  /* virtual table pointer for first base */
    void *vtable2;  /* virtual table pointer for second base */
    int padding;    /* padding */
};

struct MiddleA {
    void *vtable1;  /* virtual table pointer for first base */
    void *vtable2;  /* virtual table pointer for second base */
    int member;     /* member variable */
};

struct MiddleB {
    void *vtable1;  /* virtual table pointer for first base */
    void *vtable2;  /* virtual table pointer for second base */
    int member;     /* member variable */
};

struct DiamondDerived {
    void *vtable1;  /* virtual table pointer for first base */
    void *vtable2;  /* virtual table pointer for second base */
    void *vtable3;  /* virtual table pointer for third base */
    int member;     /* member variable at offset 32 */
};

/* Namespace stub for std - converted to C */
struct std_ios_base_Init;
extern struct std_ios_base_Init std___ioinit;
extern void *_dso_handle;

long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_1650 @ 0x1650 */
void sub_1650()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1800 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&off_138E0, 0);
}


/* Function: main @ 0x18D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x18E8 */
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 _ZNSt8ios_base4InitC1Ev(&std___ioinit);
 return __cxa_atexit((void (*)(void *))_ZNSt8ios_base4InitD1Ev, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x1A54 */
long long test_cpp_member_func(void)
{
 char *v0; // x0
 char dest[36]; // [xsp+14h] [xbp+14h] BYREF

 v0 = strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1AC0 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(0 + 21 + 1000 * 0);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1AD8 */
long long call_virtual_func(long long ( ***a1)(unsigned long long))
{
 return (**a1)((unsigned long long)a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1AE8 */
long long test_cpp_virtual_func(void)
{
 int v0; // w19
 void **v2; // [xsp+20h] [xbp+20h] BYREF
 void **v3; // [xsp+28h] [xbp+28h] BYREF
 int v4; // [xsp+30h] [xbp+30h]

 v2 = (void **)&off_13868;
 v3 = (void **)&off_13898;
 v4 = 3;
 v0 = call_virtual_func((long long ( ***)(unsigned long long))&v2);
 return v0 + 21 + (unsigned int)call_virtual_func((long long ( ***)(unsigned long long))&v3);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1B78 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1B80 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1B88 */
long long test_cpp_template_func(void)
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int v4; // [xsp+20h] [xbp+20h] BYREF
 int v5; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max_int(3, 7);
 v1 = v0;
 v2 = template_max_double(2.5, 1.5);
 v4 = 10;
 v5 = 20;
 template_swap_int(&v4, &v5);
 return (unsigned int)((int)v2 + v1 + v4 + v5);
}


/* Function: _Z23test_cpp_template_classv @ 0x1C30 */
long long test_cpp_template_class(void)
{
 int v0; // w1
 unsigned long long v2[10]; // [xsp+28h] [xbp+28h] BYREF
 int v3; // [xsp+50h] [xbp+50h]

 v3 = 1;
 v2[0] = 10;
 Container_int_push((long long)v2, 20);
 Container_int_push((long long)v2, 30);
 v0 = (int)v2[0];
 if ( v3 <= 0 )
 v0 = 0;
 return (unsigned int)(v3 + v0 + 3);
}


/* Function: _Z15test_cpp_lambdav @ 0x1CC0 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x1CC8 */
long long test_cpp_rtti(void)
{
 long long *v0; // x21
 void *v1; // x20
 long long v2; // x23
 char *v3; // x22
 int v4; // w24
 int v5; // w19
 int v6; // w19
 unsigned int v7; // w19

 v0 = (long long *)_Znwj(8u);
 *v0 = (unsigned long long)&off_13B58;
 v1 = (void *)_Znwj(8u);
 v2 = (long long)(unsigned long long)*v0;
 *(unsigned long long *)v1 = (unsigned long long)off_13B80;
 v3 = *(char **)(*(unsigned long long *)(v2 - 8) + 8LL);
 v4 = (unsigned char)*v3;
 if ( v3 == "12RTTIDerivedA" )
 {
 v5 = 10;
 }
 else if ( v4 == 42 )
 {
 v5 = 0;
 }
 else if ( !strcmp(*(const char **)(*(unsigned long long *)(v2 - 8) + 8LL), "12RTTIDerivedA") )
 {
 v5 = 10;
 }
 else
 {
 v5 = 0;
 }
v6 = v5 + 20;
if ( __dynamic_cast(
 v0,
 (const struct type_info *)&off_13868,
 (const struct type_info *)&off_13898,
 0) )
 {
 v6 += 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct type_info *)&off_13868,
 (const struct type_info *)&off_13918,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 ++v3;
 v7 = v6 + strlen(v3);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1E24 */
long long test_cpp_smart_ptr(void)
{
 void *v0; // x0
 void *v2; // [xsp+30h] [xbp+30h] BYREF
 unsigned int *v3; // [xsp+38h] [xbp+38h] BYREF
 void *v4; // [xsp+40h] [xbp+40h] BYREF

 v2 = 0;
 v3 = (unsigned int *)_Znwj(4u);
 *v3 = 200;
v0 = _Znam(0x14u);
v4 = v0;
 *(unsigned long long *)v0 = 0x200000001LL;
 *(unsigned long long *)(v0 + 8) = 0x400000003LL;
 *(unsigned int *)(v0 + 16) = 5;
 _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev((void **)&v4);
 _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev((void **)&v3);
 _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev((void **)&v2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1EF8 */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // w19
 unsigned int v1; // w19
 unsigned long long v3[4]; // [xsp+28h] [xbp+28h] BYREF
 long long ( **v4)(void *); // [xsp+48h] [xbp+48h] BYREF
 int v5; // [xsp+50h] [xbp+50h]

 v3[0] = (unsigned long long)&off_13AC8;
 v4 = (long long (**)(void *))&off_13B30;
 v3[1] = (long long)&off_13B30;
 v3[2] = (unsigned long long)&off_13AF8;
 v5 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&v4);
 v5 = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&v4);
 DiamondDerived_dtor1((struct DiamondDerived *)v3);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1FA0 */
void test_cpp_oo_features(void)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 puts(asc_25B2);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_25D6, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_25F4, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, unk_2610, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_262C, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_2648, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, unk_2665, v5);
 v6 = test_cpp_template_func();
 __printf_chk(1, unk_2681, v6);
 v7 = test_cpp_template_class();
 __printf_chk(1, unk_269D, v7);
 v8 = test_cpp_lambda();
 __printf_chk(1, unk_26B9, v8);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x20D8 */
long long Base_virtual_func(struct Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x20E0 */
const char * Base_getName(struct Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x20EC */
void Base_dtor(struct Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x20F0 */
long long Derived_virtual_func(struct Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x20FC */
const char * Derived_getName(struct Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2108 */
long long MultiDerived_funcA(struct MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2110 */
long long MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2118 */
long long non_virtual_thunk_to_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2120 */
long long VirtualBase_func(struct VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2128 */
void VirtualBase_dtor(struct VirtualBase *this)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x212C */
long long MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2144 */
long long virtual_thunk_to_MiddleA_func(struct MiddleA *this)
{
 return MiddleA_func((struct MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2154 */
long long MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x216C */
long long virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 return MiddleB_func((struct MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x217C */
long long DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2194 */
long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived_func((struct DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x21A4 */
long long non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return DiamondDerived_func((struct DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x21AC */
void MiddleA_dtor1(struct MiddleA *this)
{
 *(unsigned long long *)this = (unsigned long long)&off_138E0;
 *((unsigned long long *)this + 2) = (unsigned long long)&off_13918;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x21C8 */
void virtual_thunk_to_MiddleA_dtor1(struct MiddleA *this)
{
 unsigned long long *v1; // x3

 v1 = (unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
 *v1 = (unsigned long long)&off_138E0;
 v1[2] = (unsigned long long)&off_13918;
}


/* Function: _ZN7MiddleBD1Ev @ 0x21F0 */
void MiddleB_dtor1(struct MiddleB *this)
{
 *(unsigned long long *)this = (unsigned long long)&off_13958;
 *((unsigned long long *)this + 2) = (unsigned long long)&off_13990;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x220C */
void virtual_thunk_to_MiddleB_dtor1(struct MiddleB *this)
{
 unsigned long long *v1; // x3

 v1 = (unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL));
 *v1 = (unsigned long long)&off_13958;
 v1[2] = (unsigned long long)&off_13990;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2234 */
long long RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x223C */
long long RTTIDerivedB_getType(struct RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2244 */
void RTTIDerivedB_dtor(struct RTTIDerivedB *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2248 */
void RTTIDerivedA_dtor(struct RTTIDerivedA *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x224C */
void MultiDerived_dtor(struct MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2250 */
void non_virtual_thunk_to_MultiDerived_dtor1(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2254 */
void Derived_dtor(struct Derived *this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x2258 */
void Base_dtor0(struct Base *this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2260 */
void Derived_dtor0(struct Derived *this)
{
 _ZdlPvm(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2268 */
void MultiDerived_dtor0(struct MultiDerived *this)
{
 _ZdlPvm(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2270 */
void non_virtual_thunk_to_MultiDerived_dtor0(struct MultiDerived *this)
{
 MultiDerived_dtor((struct MultiDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2278 */
void VirtualBase_dtor0(struct VirtualBase *this)
{
 _ZdlPvm(this, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2280 */
void RTTIDerivedB_dtor0(struct RTTIDerivedB *this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2288 */
void RTTIDerivedA_dtor0(struct RTTIDerivedA *this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2290 */
void MiddleA_dtor0(struct MiddleA *this)
{
 *(unsigned long long *)this = (unsigned long long)&off_138E0;
 *((unsigned long long *)this + 2) = (unsigned long long)&off_13918;
 _ZdlPvm(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x22B0 */
void virtual_thunk_to_MiddleA_dtor0(struct MiddleA *this)
{
 MiddleA_dtor1((struct MiddleA *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x22C0 */
void MiddleB_dtor0(struct MiddleB *this)
{
 *(unsigned long long *)this = (unsigned long long)&off_13958;
 *((unsigned long long *)this + 2) = (unsigned long long)&off_13990;
 _ZdlPvm(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x22E0 */
void virtual_thunk_to_MiddleB_dtor0(struct MiddleB *this)
{
 MiddleB_dtor1((struct MiddleB *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x22F0 */
void MiddleA_dtor4(struct MiddleA *this, int a2, long long ( ***a3)(void *))
{
 long long ( **v3)(void *); // x3
 long long ( **v4)(void *); // x1
 long long v5; // x2

 if ( a2 )
 v3 = (long long (**)(void *))&off_138E0;
 else
 v3 = *a3;
 *(unsigned long long *)this = (unsigned long long)v3;
 if ( a2 )
 {
 v5 = 16;
 v4 = (long long (**)(void *))&off_13918;
 }
 else
 {
 v4 = a3[1];
 v5 = (long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)this + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x232C */
void MiddleA_dtor2(struct MiddleA *this, long long ( ***a2)(void *))
{
 MiddleA_dtor4(this, 0, a2);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2338 */
void MiddleB_dtor4(struct MiddleB *this, int a2, long long ( ***a3)(void *))
{
 long long ( **v3)(void *); // x3
 long long ( **v4)(void *); // x1
 long long v5; // x2

 if ( a2 )
 v3 = (long long (**)(void *))&off_13958;
 else
 v3 = *a3;
 *(unsigned long long *)this = (unsigned long long)v3;
 if ( a2 )
 {
 v5 = 16;
 v4 = (long long (**)(void *))&off_13990;
 }
 else
 {
 v4 = a3[1];
 v5 = (long long)*(v3 - 3);
 }
 *(unsigned long long *)((char *)this + v5) = (unsigned long long)v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2374 */
void MiddleB_dtor2(struct MiddleB *this, long long ( ***a2)(void *))
{
 MiddleB_dtor4(this, 0, a2);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2380 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x238C */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2398 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x23AC */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x23B4 */
long long Container_int_push(long long result, int a2)
{
 int v2; // w2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x23D0 */
long long Container_int_get(long long a1, int a2)
{
 if ( a2 < 0 || *(unsigned int *)(a1 + 40) <= a2 )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x23F0 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x23F8 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2400 */
long long Container_double_push(long long result, double a2)
{
 int v2; // w1

 v2 = *(unsigned int *)(result + 80);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 80) = v2 + 1;
 *(double *)(result + 8LL * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x241C */
double Container_double_get(long long a1, int a2)
{
 if ( a2 < 0 || *(unsigned int *)(a1 + 80) <= a2 )
 return 0.0;
 else
 return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x243C */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2444 */
void _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev(void **a1)
{
 void *v1; // x0

 v1 = *a1;
 if ( v1 )
 _ZdlPvm(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2458 */
void _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev(void **a1)
{
 void *v1; // x0

 v1 = *a1;
 if ( v1 )
 _ZdaPv(v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2468 */
void DiamondDerived_dtor4(
 struct DiamondDerived *this,
 int a2,
 long long ( ***a3)(void *))
{
 long long ( **v6)(void *); // x0
 long long v7; // x0
 long long ( **v8)(void *); // x1
 long long ( **v9)(void *); // x1
 long long ( ***v10)(void *); // x2
 long long ( ***v11)(void *); // x19
 long long ( ***v12)(void *); // x1
 long long ( ***v13)(void *); // x1

 if ( a2 )
 v6 = (long long (**)(void *))&off_13AC8;
 else
 v6 = *a3;
 *(unsigned long long *)this = (unsigned long long)v6;
 if ( a2 )
 {
 v7 = 32;
 v8 = (long long (**)(void *))&off_13B30;
 }
 else
 {
 v7 = (long long)*(v6 - 3);
 v8 = a3[5];
 }
 *(unsigned long long *)((char *)this + v7) = (unsigned long long)v8;
 if ( a2 )
 v9 = (long long (**)(void *))&off_13AF8;
 else
 v9 = a3[6];
 v10 = a3 + 3;
 v11 = a3 + 1;
 *((unsigned long long *)this + 2) = (unsigned long long)v9;
 v12 = (long long (***)(void *))(long long)*(long long *)(void *)off_13A90;
 if ( !a2 )
 v12 = v10;
 MiddleB_dtor4((struct MiddleB *)((char *)this + 16), a2 ? 1 : 0, v12);
 v13 = (long long (***)(void *))(long long)off_13A80;
 if ( !a2 )
 v13 = v11;
 MiddleA_dtor4((struct MiddleA *)this, a2 ? 1 : 0, v13);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2518 */
void DiamondDerived_dtor1(struct DiamondDerived *this)
{
 DiamondDerived_dtor4(this, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2524 */
void non_virtual_thunk_to_DiamondDerived_dtor1(struct DiamondDerived *this)
{
 DiamondDerived_dtor4((struct DiamondDerived *)((char *)this - 16), 2, 0);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x252C */
void virtual_thunk_to_DiamondDerived_dtor1(struct DiamondDerived *this)
{
 DiamondDerived_dtor4((struct DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)), 2, 0);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x253C */
void DiamondDerived_dtor0(struct DiamondDerived *this)
{
 DiamondDerived_dtor4(this, 2, 0);
 _ZdlPvm(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2564 */
void non_virtual_thunk_to_DiamondDerived_dtor0(struct DiamondDerived *this)
{
 DiamondDerived_dtor0((struct DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x256C */
void virtual_thunk_to_DiamondDerived_dtor0(struct DiamondDerived *this)
{
 DiamondDerived_dtor0((struct DiamondDerived *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 32LL)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x257C */
void DiamondDerived_dtor2(
 struct DiamondDerived *this,
 long long ( ***a2)(void *))
{
 DiamondDerived_dtor4(this, 0, a2);
}


/* Function: .term_proc @ 0x2588 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14090 */

/* FAILED to decompile: puts @ 0x140A0 */

/* FAILED to decompile: strlen @ 0x140A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140C8 */

/* FAILED to decompile: __cxa_finalize @ 0x140D0 */

/* FAILED to decompile: __libc_start_main @ 0x140E0 */

/* FAILED to decompile: _Znwm @ 0x140E8 */

/* FAILED to decompile: _ZdlPvm @ 0x140F0 */

/* FAILED to decompile: strncpy @ 0x140F8 */

/* FAILED to decompile: __dynamic_cast @ 0x14100 */

/* FAILED to decompile: __cxa_atexit @ 0x14108 */

/* FAILED to decompile: _ZdaPv @ 0x14110 */

/* FAILED to decompile: strcmp @ 0x14120 */

/* FAILED to decompile: __cxa_rethrow @ 0x14128 */

/* Stub implementations for C++ std library functions */
void _ZNSt8ios_base4InitC1Ev(struct std_ios_base_Init *this)
{
    /* std::ios_base::Init::Init() stub */
    if (this)
        this->vtable = NULL;
}

/* FAILED to decompile: abort @ 0x14138 */

/* FAILED to decompile: __cxa_end_catch @ 0x14140 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14148 */

/* FAILED to decompile: __cxa_throw @ 0x14150 */

/* FAILED to decompile: _Unwind_Resume @ 0x14160 */

/* FAILED to decompile: __printf_chk @ 0x14168 */

void _ZNSt8ios_base4InitD1Ev(struct std_ios_base_Init *this)
{
    /* std::ios_base::Init::~Init() stub */
    if (this)
        this->vtable = NULL;
}

/* FAILED to decompile: __gmon_start__ @ 0x14180 */

/* Total functions decompiled: 89, failed: 25 */
