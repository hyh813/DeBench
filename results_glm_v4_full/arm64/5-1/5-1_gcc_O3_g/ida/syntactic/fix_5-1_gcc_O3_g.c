/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O3_g
 * Processor: arm
 */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/* Forward declarations */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct Container_int;
struct Container_double;
struct MiddleA;
struct MiddleB;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Template function declarations - explicit instantiations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Class definitions */
struct SimpleClass {
    char name[32];
};

struct Base {
    void *_vptr_Base;
};

struct LifecycleClass {
    void *_vptr_LifecycleClass;
};

int LifecycleClass_instance_count = 0;

struct RTTIBase {
    void *_vptr_RTIBase;
};

struct RTTIDerivedA {
    void *_vptr_RTIBase;
};

struct RTTIDerivedB {
    void *_vptr_RTIBase;
};

/* Forward declarations for typeinfo structures */
extern struct __class_type_info typeinfo_for_RTTIBase;
extern struct __class_type_info typeinfo_for_RTTIDerivedA;
extern struct __class_type_info typeinfo_for_RTTIDerivedB;

/* Vtable pointers with proper structure for RTTI */
static void *vtable_for_RTTIBase[4] = {
    &typeinfo_for_RTTIBase,  /* typeinfo pointer */
    NULL,                    /* virtual function pointers */
    NULL,
    NULL
};

static void *vtable_for_RTTIDerivedA[4] = {
    &typeinfo_for_RTTIDerivedA,
    NULL,
    NULL,
    NULL
};

static void *vtable_for_RTTIDerivedB[4] = {
    &typeinfo_for_RTTIDerivedB,
    NULL,
    NULL,
    NULL
};

/* Forward declarations for Base virtual functions */
int Base_virtual_func(struct Base *const this, int x);
const char * Base_getName(const struct Base *const this);
void Base_dtor(struct Base *const this);
void Base_dtor0(struct Base *const this);

/* Forward declarations for Derived virtual functions */
int Derived_virtual_func(struct Derived *const this, int x);
const char * Derived_getName(const struct Derived *const this);
void Derived_dtor(struct Derived *const this);
void Derived_dtor0(struct Derived *const this);

/* Forward declarations for MultiDerived functions */
int MultiDerived_funcA(struct MultiDerived *const this);
int MultiDerived_funcB(struct MultiDerived *const this);
void MultiDerived_dtor(struct MultiDerived *const this);
void MultiDerived_dtor0(struct MultiDerived *const this);

/* Forward declarations for DiamondDerived functions */
int DiamondDerived_func(struct DiamondDerived *const this);
void DiamondDerived_dtor(struct DiamondDerived *const this);
void DiamondDerived_dtor0(struct DiamondDerived *const this);

/* Forward declarations for Middle functions */
int MiddleA_func(struct MiddleA *const this);
int MiddleB_func(struct MiddleB *const this);

/* Forward declarations for RTTI derived functions */
int RTTIDerivedA_getType(const struct RTTIDerivedA *const this);
int RTTIDerivedB_getType(const struct RTTIDerivedB *const this);
void RTTIDerivedA_dtor(struct RTTIDerivedA *const this);
void RTTIDerivedB_dtor(struct RTTIDerivedB *const this);
void RTTIDerivedA_dtor0(struct RTTIDerivedA *const this);
void RTTIDerivedB_dtor0(struct RTTIDerivedB *const this);
void RTTIBase_dtor(struct RTTIBase *const this);
void RTTIBase_dtor0(struct RTTIBase *const this);

extern struct __class_type_info typeinfo_for_Base;
static void *vtable_for_Base[4] = {
    &typeinfo_for_Base,
    (void *)&Base_virtual_func,
    (void *)&Base_getName,
    (void *)&Base_dtor
};

static void *vtable_for_Derived[4] = {
    &typeinfo_for_Derived,
    (void *)&Derived_virtual_func,
    (void *)&Derived_getName,
    (void *)&Derived_dtor
};

static void *vtable_for_LifecycleClass[2] = {
    &typeinfo_for_LifecycleClass,
    NULL
};

/* Legacy pointer names for compatibility */
static void *off_12C28 = (void *)vtable_for_RTTIBase;
static void *off_12C50 = (void *)vtable_for_RTTIDerivedA;

/* Forward declaration of __class_type_info */
struct __class_type_info;

/* External CRT function declarations */
long long call_weak_fn(void);
void JUMPOUT(int addr);
int __printf_chk(int flag, const char *format, ...);
void abort(void);

/* Operator new/delete declarations */
void *_Znwm(unsigned long size);
void _ZdlPv(void *ptr);
void _ZdlPvm(void *ptr, unsigned long size);

/* Type info structures for C++ RTTI */
struct __class_type_info {
    void *_vptr;
    const char *name;
};

/* C++ runtime function implementations */
void *__cxa_allocate_exception(unsigned int size)
{
    return _Znwm((unsigned long)size);
}

void __cxa_throw(void *exception, const struct __class_type_info *tinfo, void (*dest)(void *))
{
    /* Stub - would normally unwind and terminate */
    fprintf(stderr, "Exception thrown\n");
    abort();
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub - registration for cleanup on exit */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* printf_chk implementation - security-checked printf */
int __printf_chk(int flag, const char *format, ...)
{
    va_list args;
    int result;
    (void)flag;  /* Flag indicates format string checking level */
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    return result;
}

/* abort implementation - terminate program abnormally */
void abort(void)
{
    /* Stub - would normally terminate with SIGABRT */
    fprintf(stderr, "Aborting\n");
    exit(1);
}



void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, ptrdiff_t src2dst_offset)
{
    /* Simple stub implementation */
    if (src_type && dst_type && src_type->name && dst_type->name) {
        if (src_type->name == dst_type->name) {
            return src_ptr;
        }
    }
    return NULL;
}

/* Additional class definitions needed */
struct Derived {
    void *_vptr_Derived;
    int multiplier;
};

struct MultiDerived {
    struct Base BaseA;
    struct Base BaseB;
    void *_vptr_MultiDerived;
};

struct MiddleA {
    struct {
        void *_vptr_MiddleA;
    } _vptr;
    int dataA;
};

struct MiddleB {
    struct {
        void *_vptr_MiddleB;
    } _vptr;
    int dataB;
};

struct DiamondDerived {
    struct MiddleA middleA;
    struct MiddleB middleB;
    int dataA;
    int dataB;
    void *_vptr_DiamondDerived;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Operator new/delete implementations */
void *_Znwm(unsigned long size)
{
    return malloc(size);
}

void _ZdlPv(void *ptr)
{
    free(ptr);
}

void _ZdlPvm(void *ptr, unsigned long size)
{
    (void)size;  /* Size parameter is optional in some implementations */
    _ZdlPv(ptr);
}

/* Function declarations */
void test_cpp_oo_features();
void *_dso_handle = NULL;

/* String and I/O function implementations */
char *strncpy(char *dest, const char *src, unsigned long n)
{
    unsigned long i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

unsigned long strlen(const char *s)
{
    unsigned long len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

int puts(const char *s)
{
    return __printf_chk(1, "%s\n", s);
}

int strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/* Type info for exceptions */
struct __class_type_info typeinfo_for_int = {NULL, "int"};
struct __class_type_info typeinfo_for_Base = {NULL, "4Base"};
struct __class_type_info typeinfo_for_Derived = {NULL, "7Derived"};
struct __class_type_info typeinfo_for_LifecycleClass = {NULL, "15LifecycleClass"};
struct __class_type_info typeinfo_for_RTTIBase = {NULL, "8RTTIBase"};
struct __class_type_info typeinfo_for_RTTIDerivedA = {NULL, "12RTTIDerivedA"};
struct __class_type_info typeinfo_for_RTTIDerivedB = {NULL, "12RTTIDerivedB"};

/* String and data references */
const char asc_1BA0[] = "Testing C++ Object-Oriented Features:\n";
const char unk_1BC8[] = "  Member function test: %d\n";
const char unk_1BE8[] = "  Constructor test: %d\n";
const char unk_1C08[] = "  Virtual function test: %d\n";
const char unk_1C28[] = "  Multiple inheritance test: %d\n";
const char unk_1C48[] = "  Diamond inheritance test: %d\n";
const char unk_1C68[] = "  Operator overload test: %d\n";
const char unk_1C88[] = "  Template function test: %d\n";
const char unk_1CA8[] = "  Template class test: %d\n";
const char unk_1CC8[] = "  Lambda test: %d\n";

/* std::ios_base initialization */
char std___ioinit[1];

void std_ios_base_Init_Init(void *obj)
{
    /* Stub - std::ios_base::Init constructor */
    (void)obj;
}

void std_ios_base_Init_dtor(void *obj)
{
    /* Stub - std::ios_base::Init destructor */
    (void)obj;
}

/* Function: .init_proc @ 0xE90 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_EB0 @ 0xEB0 */
void sub_EB0()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x1040 */
int test_cpp_exception()
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
 return 42;  /* Add return for proper control flow */
}


/* Function: main @ 0x1120 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1140 */
__attribute__((constructor))
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))&std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* Function: call_weak_fn @ 0xE98 */
long long call_weak_fn(void)
{
    return 0;
}

/* Function: JUMPOUT @ 0xEB0 */
void JUMPOUT(int addr)
{
    (void)addr;  /* Stub - would normally jump to address */
}


/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x12A0 */
int test_cpp_member_func()
{
 char *v0; // x0
 struct SimpleClass obj; // [xsp+10h] [xbp+10h] BYREF

 v0 = strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1310 */
int test_cpp_constructor()
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1330 */
int call_virtual_func(struct Base *obj, int x)
{
 return (*(int (**)(struct Base *, int))obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1340 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1350 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1360 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1370 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1380 */
int test_cpp_template_func()
{
 int v0; // w19
 double v1; // d8
 int a; // [xsp+20h] [xbp+20h] BYREF
 int b; // [xsp+24h] [xbp+24h] BYREF

 v0 = template_max_int(3, 7);
 v1 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)v1 + v0 + a + b;
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


/* Function: _Z18test_cpp_smart_ptrv @ 0x1440 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1450 */
int test_cpp_rtti()
{
 long long *v0; // x21
 void *v1; // x20
 long long v2; // x24
 const char *v3; // x23
 int v4; // w25
 int v5; // w22
 int v6; // w19
 const char *v7; // x0
 int v8; // w19

 v0 = (long long *)_Znwm(8u);
 *v0 = (long long)off_12C28;
 v1 = (void *)_Znwm(8u);
 v2 = *v0;
 v3 = *(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 *(unsigned long long *)v1 = (unsigned long long)off_12C50;
 if ( v3 == "12RTTIDerivedA" )
 {
 v4 = *(unsigned char *)v3;
 v5 = 30;
 }
 else
 {
 v4 = *(unsigned char *)v3;
 if ( v4 == 42 )
 {
 v5 = 20;
 }
 else if ( !strcmp(v3, "12RTTIDerivedA") )
 {
 v5 = 30;
 }
 else
 {
 v5 = 20;
 }
 }
 v6 = v5;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)(const void *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)(const void *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v6 = v5 + 100;
 }
 if ( __dynamic_cast(
 v1,
 (const struct __class_type_info *)(const void *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)(const void *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v6 += 200;
 }
 if ( v4 == 42 )
 v7 = v3 + 1;
 else
 v7 = v3;
 v8 = v6 + strlen(v7);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x15F0 */
void test_cpp_oo_features()
{
 int v0; // w0
 int v1; // w19
 double v2; // d8
 int a; // [xsp+28h] [xbp+28h] BYREF
 int b; // [xsp+2Ch] [xbp+2Ch] BYREF
 char v5[36]; // [xsp+34h] [xbp+34h] BYREF

 puts(asc_1BA0);
 strncpy(v5, "Test", 0x1Fu);
 v5[31] = 0;
 v0 = strlen(v5);
 __printf_chk(1, (const char *)&unk_1BC8, (unsigned int)(v0 + 4700));
 __printf_chk(
 1,
 (const char *)&unk_1BE8,
 (unsigned int)(LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count));
 __printf_chk(1, (const char *)&unk_1C08, 42);
 __printf_chk(1, (const char *)&unk_1C28, 71);
 __printf_chk(1, (const char *)&unk_1C48, 650);
 __printf_chk(1, (const char *)&unk_1C68, 22);
 v1 = template_max_int(3, 7);
 v2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 __printf_chk(1, (const char *)&unk_1C88, (unsigned int)((int)v2 + v1 + a + b));
 __printf_chk(1, (const char *)&unk_1CA8, 16);
 __printf_chk(1, (const char *)&unk_1CC8, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x17D0 */
int Base_virtual_func(struct Base *const this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x17E0 */
const char * Base_getName(const struct Base *const this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x17F0 */
void Base_dtor(struct Base *const this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1800 */
int Derived_virtual_func(struct Derived *const this, int x)
{
 return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1810 */
const char * Derived_getName(const struct Derived *const this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1820 */
int MultiDerived_funcA(struct MultiDerived *const this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1830 */
int MultiDerived_funcB(struct MultiDerived *const this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1840 */
long long thunk_N12MultiDerived5funcBEv(void *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1850 */
int MiddleA_func(struct MiddleA *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->_vptr._vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1870 */
long long thunk_N7MiddleA4funcEv(void *this)
{
 return 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A0 */
int MiddleB_func(struct MiddleB *const this)
{
 return *(int *)((char *)&this->dataB + *((unsigned long long *)this->_vptr._vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x18C0 */
long long thunk_N7MiddleB4funcEv(void *this)
{
 return 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x18F0 */
int DiamondDerived_func(struct DiamondDerived *const this)
{
 return *(int *)((char *)&this->dataA + *((unsigned long long *)this->middleA._vptr._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1910 */
long long thunk_N14DiamondDerived4funcEv(void *this)
{
 return 250;
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1934 */
long long thunk2_N14DiamondDerived4funcEv(void *this)
{
 return 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1950 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *const this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1960 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *const this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1970 */
void RTTIDerivedB_dtor(struct RTTIDerivedB *const this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1980 */
void RTTIDerivedA_dtor(struct RTTIDerivedA *const this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1990 */
void DiamondDerived_dtor(struct DiamondDerived *const this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1994 */
void virtual_thunk_DiamondDerived_dtor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x19A0 */
void thunk_N14DiamondDerivedD1Ev(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x19B0 */
void MultiDerived_dtor(struct MultiDerived *const this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x19B4 */
void thunk_N12MultiDerivedD1Ev(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x19C0 */
void Derived_dtor(struct Derived *const this)
{
    /* Call base class destructor */
    Base_dtor((struct Base *)this);
}


/* Function: _ZN4BaseD0Ev @ 0x19D0 */
void Base_dtor0(struct Base *const this)
{
    Base_dtor(this);
    _ZdlPvm(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x19E0 */
void Derived_dtor0(struct Derived *const this)
{
    Derived_dtor(this);
    _ZdlPvm(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x19F0 */
void MultiDerived_dtor0(struct MultiDerived *const this)
{
    MultiDerived_dtor(this);
    _ZdlPvm(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1A00 */
void thunk_MultiDerived_dtor0(struct MultiDerived *this)
{
 _ZdlPvm(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1A10 */
void RTTIDerivedB_dtor0(struct RTTIDerivedB *const this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1A20 */
void RTTIDerivedA_dtor0(struct RTTIDerivedA *const this)
{
 _ZdlPvm(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1A30 */
void DiamondDerived_dtor0(struct DiamondDerived *const this)
{
    DiamondDerived_dtor(this);
    _ZdlPvm(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1A40 */
void virtual_thunk_DiamondDerived_dtor0(struct DiamondDerived *this)
{
 _ZdlPvm((char *)this + *((unsigned long long *)this->middleA._vptr._vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1A54 */
void thunk_DiamondDerived_dtor0(struct DiamondDerived *this)
{
 _ZdlPvm(&this[-1].middleB.dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1A60 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1A70 */
double template_max_double(double a, double b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1A80 */
void template_swap_int(int *a, int *b)
{
 int v2; // w2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1AA0 */
void Container_int_Constructor(struct Container_int *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1AB0 */
void Container_int_push(struct Container_int *const this, int value)
{
 int size; // w2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1AD0 */
int Container_int_get(const struct Container_int *const this, int idx)
{
 int result; // w0

 result = 0;
 if ( (idx & 0x80000000) == 0 )
 {
 result = 0;
 if ( this->size > idx )
 return this->data[idx];
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1B00 */
int Container_int_getSize(const struct Container_int *const this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1B10 */
void Container_double_Constructor(struct Container_double *const this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1B20 */
void Container_double_push(struct Container_double *const this, double value)
{
 int size; // w1

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1B40 */
double Container_double_get(const struct Container_double *const this, int idx)
{
 double result; // d0

 result = 0.0;
 if ( (idx & 0x80000000) == 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1B60 */
int Container_double_getSize(const struct Container_double *const this)
{
 return this->size;
}


/* Function: .term_proc @ 0x1B68 */
void term_proc()
{
 ;
}


/* FAILED to decompile: puts @ 0x130A0 */

/* FAILED to decompile: strlen @ 0x130A8 */

/* FAILED to decompile: __stack_chk_fail @ 0x130B0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x130B8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x130C8 */

/* FAILED to decompile: __cxa_finalize @ 0x130D0 */

/* FAILED to decompile: __libc_start_main @ 0x130E0 */

/* FAILED to decompile: _Znwm @ 0x130E8 */

/* FAILED to decompile: _ZdlPvm @ 0x130F0 */

/* FAILED to decompile: strncpy @ 0x130F8 */

/* FAILED to decompile: __dynamic_cast @ 0x13100 */

/* FAILED to decompile: __cxa_atexit @ 0x13108 */

/* FAILED to decompile: strcmp @ 0x13118 */

/* FAILED to decompile: __cxa_rethrow @ 0x13120 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x13128 */

/* FAILED to decompile: abort @ 0x13130 */

/* FAILED to decompile: __cxa_end_catch @ 0x13138 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x13140 */

/* FAILED to decompile: __cxa_throw @ 0x13148 */

/* FAILED to decompile: _Unwind_Resume @ 0x13150 */

/* FAILED to decompile: __printf_chk @ 0x13158 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13160 */

/* FAILED to decompile: __gmon_start__ @ 0x13170 */

/* Total functions decompiled: 70, failed: 23 */
