/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_gcc_O1_no_g
 * Processor: arm
 */

#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/* Base class type info for dynamic_cast support */
struct __class_type_info {
    const char *name;
    void **__vptr;  // vtable pointer for polymorphic type_info
    void (*type_info_dtor)(struct __class_type_info *this);
};

/* Global type_info objects for C++ RTTI support */
static struct __class_type_info type_info_int = { .name = "int" };
static struct __class_type_info type_info_RTITIBase = { .name = "RTTIBase" };
static struct __class_type_info type_info_RTITIDerivedA = { .name = "RTTIDerivedA" };
static struct __class_type_info type_info_RTITIDerivedB = { .name = "RTTIDerivedB" };

/* Macro to simulate typeid() using global objects */
#define typeid_int (&type_info_int)
#define typeid_RTITIBase (&type_info_RTITIBase)
#define typeid_RTITIDerivedA (&type_info_RTITIDerivedA)
#define typeid_RTITIDerivedB (&type_info_RTITIDerivedB)

/* Function: .init_proc @ 0x1458 */
extern long long call_weak_fn(void);

long long init_proc()
{
 return call_weak_fn();
}

/* Forward declarations for C++ classes */
struct Base {
    long long (*virtual_func)(struct Base *this, int a2);
    const char * (*getName)(struct Base *this);
    void (*dtor)(struct Base *this);
};

struct Derived {
    long long (*virtual_func)(struct Derived *this, int a2);
    const char * (*getName)(struct Derived *this);
    void (*dtor)(struct Derived *this);
};

struct MultiDerived {
    long long (*funcA)(struct MultiDerived *this);
    long long (*funcB)(struct MultiDerived *this);
    void (*dtor)(struct MultiDerived *this);
};

struct MiddleA {
    long long (*func)(struct MiddleA *this);
    void (*dtor)(struct MiddleA *this);
};

struct MiddleB {
    long long (*func)(struct MiddleB *this);
    void (*dtor)(struct MiddleB *this);
};

struct DiamondDerived {
    long long (*func)(struct DiamondDerived *this);
    void (*dtor)(struct DiamondDerived *this);
};

struct RTTIBase {
    void (*dtor)(struct RTTIBase *this);
};

struct RTTIDerivedA {
    long long (*getType)(struct RTTIDerivedA *this);
    void (*dtor)(struct RTTIDerivedA *this);
};

struct RTTIDerivedB {
    long long (*getType)(struct RTTIDerivedB *this);
    void (*dtor)(struct RTTIDerivedB *this);
};

struct LifecycleClass {
};

/* Global variable to simulate static member (C-compatible) */
int lifecycle_class_instance_count = 0;

/* Macro for JUMPOUT placeholder */
#define JUMPOUT(x) return

/* External declarations for C++ operators - renamed for C compatibility */
extern void cpp_operator_delete(void *ptr, unsigned long size);
extern void *cpp_operator_new(unsigned long size);
extern void *cpp_operator_new_array(unsigned long size);

/* C++ operator new/delete implementations */
void *_Znam(unsigned long size)  /* operator new[] */
{
    return cpp_operator_new_array(size);
}

void *_Znwm(unsigned long size)  /* operator new */
{
    return cpp_operator_new(size);
}

void _ZdlPv(void *ptr)  /* operator delete(void*) */
{
    cpp_operator_delete(ptr, 0);
}

void _ZdlPvm(void *ptr, unsigned long size)  /* operator delete(void*, size_t) */
{
    cpp_operator_delete(ptr, size);
}

void _ZdaPv(void *ptr)  /* operator delete[](void*) */
{
    cpp_operator_delete(ptr, 0);
}

/* External declarations for C++ runtime functions */
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exception, struct __class_type_info *tinfo, void (*dest)(void*));
extern void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst_offset);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* External declarations for standard library functions */
extern int __printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);

/* Dummy handles for C++ runtime */
extern void *_dso_handle;
extern void *__ioinit;

/* Forward declarations for template functions (as regular C functions) */
extern long long template_max_int(long long result, int a2);
extern double template_max_double(double result, double a2);
extern int* template_swap_int(int *result, int *a2);

/* Forward declarations for virtual functions used in vtables */
extern long long Base_virtual_func(struct Base *this, int a2);
extern const char * Base_getName(struct Base *this);
extern void Base_dtor(struct Base *this);
extern void Base_dtor_complete(struct Base *this);
extern void Base_dtor_delete(struct Base *this);
extern long long Derived_virtual_func(struct Derived *this, int a2);
extern const char * Derived_getName(struct Derived *this);
extern void Derived_dtor(struct Derived *this);
extern void Derived_dtor_complete(struct Derived *this);
extern void Derived_dtor_delete(struct Derived *this);
extern long long DiamondDerived_func(struct DiamondDerived *this);
extern void DiamondDerived_dtor(struct DiamondDerived *this);
extern void DiamondDerived_dtor_complete(struct DiamondDerived *this);
extern void DiamondDerived_dtor_delete(struct DiamondDerived *this);
extern long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);
extern void virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this);
extern void virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this);
extern void non_virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this);
extern long long RTTIDerivedA_getType(struct RTTIDerivedA *this);
extern void RTTIDerivedA_dtor(struct RTTIDerivedA *this);
extern void RTTIDerivedA_dtor_complete(struct RTTIDerivedA *this);
extern void RTTIDerivedA_dtor_delete(struct RTTIDerivedA *this);
extern long long RTTIDerivedB_getType(struct RTTIDerivedB *this);
extern void RTTIDerivedB_dtor(struct RTTIDerivedB *this);
extern void RTTIDerivedB_dtor_complete(struct RTTIDerivedB *this);
extern void RTTIDerivedB_dtor_delete(struct RTTIDerivedB *this);
extern long long MultiDerived_funcA(struct MultiDerived *this);
extern long long MultiDerived_funcB(struct MultiDerived *this);
extern long long thunk_to_MultiDerived_funcB(struct MultiDerived *this);
extern void MultiDerived_dtor(struct MultiDerived *this);
extern void MultiDerived_dtor_complete(struct MultiDerived *this);
extern void MultiDerived_dtor_delete(struct MultiDerived *this);
extern void non_virtual_thunk_to_MultiDerived_D1(struct MultiDerived *this);
extern void non_virtual_thunk_to_MultiDerived_D0(struct MultiDerived *this);
extern long long MiddleA_func(struct MiddleA *this);
extern long long virtual_thunk_to_MiddleA_func(struct MiddleA *this);
extern long long MiddleB_func(struct MiddleB *this);
extern long long virtual_thunk_to_MiddleB_func(struct MiddleB *this);
extern long long non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);

/* Vtable definitions - placeholder data structures */
/* Base class vtable */
const long long off_13958[] = {
    (long long)Base_virtual_func,
    (long long)Base_getName,
    (long long)Base_dtor,
    (long long)Base_dtor_complete
};

/* Derived class vtable */
const long long off_13988[] = {
    (long long)Derived_virtual_func,
    (long long)Derived_getName,
    (long long)Derived_dtor,
    (long long)Derived_dtor_complete
};

/* DiamondDerived vtable */
const long long off_13B30[] = {
    (long long)DiamondDerived_func,
    (long long)DiamondDerived_dtor,
    (long long)virtual_thunk_to_DiamondDerived_D1,
    (long long)DiamondDerived_dtor_complete,
    (long long)virtual_thunk_to_DiamondDerived_D0,
    (long long)non_virtual_thunk_to_DiamondDerived_D0
};

/* RTTIDerivedA vtable */
const long long off_13B58[] = {
    (long long)RTTIDerivedA_getType,
    (long long)RTTIDerivedA_dtor,
    (long long)RTTIDerivedA_dtor_complete
};

/* RTTIDerivedB vtable */
const long long off_13B80[] = {
    (long long)RTTIDerivedB_getType,
    (long long)RTTIDerivedB_dtor,
    (long long)RTTIDerivedB_dtor_complete
};

/* MiddleA vtable */
const long long off_13BA8[] = {
    (long long)MiddleA_func,
    (long long)virtual_thunk_to_MiddleA_func
};

/* MiddleB vtable */
const long long off_13BD0[] = {
    (long long)MiddleB_func,
    (long long)virtual_thunk_to_MiddleB_func
};

/* String definitions for printf output */
const char asc_2148[] = "=== Testing C++ OO Features ===";
const char unk_2170[] = "Member func result: %d\n";
const char unk_2190[] = "Constructor result: %d\n";
const char unk_21B0[] = "Virtual func result: %d\n";
const char unk_21D0[] = "Multiple inheritance result: %d\n";
const char unk_21F0[] = "Diamond inheritance result: %d\n";
const char unk_2210[] = "Operator overload result: %d\n";
const char unk_2230[] = "Template func result: %d\n";
const char unk_2250[] = "Template class result: %d\n";
const char unk_2270[] = "Lambda result: %d\n";

/* Forward declaration for virtual thunk function */
extern long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this);

/* Container class - C stub (template removed for C compatibility) */
/* Concrete implementations provided as separate functions */


/* Function: sub_1470 @ 0x1470 */
void sub_1470()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* Standard library functions */
int puts(const char *s)
{
    const char *p = s;
    while (*p) p++;
    __printf_chk(1, "%s\n", s);
    return p - s + 1;
}

size_t strlen(const char *s)
{
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

char *strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

int __printf_chk(int flag, const char *format, ...)
{
    va_list args;
    int ret;
    va_start(args, format);
    ret = vprintf(format, args);
    va_end(args);
    return ret;
}

/* C++ operators */
void *cpp_operator_new(unsigned long size)
{
    return malloc(size);
}

void cpp_operator_delete(void *ptr, unsigned long size)
{
    (void)size;
    free(ptr);
}

void *cpp_operator_new_array(unsigned long size)
{
    return malloc(size);
}

/* C++ runtime functions */
void *__cxa_allocate_exception(unsigned long size)
{
    return malloc(size);
}

void __cxa_begin_catch(void *exception_obj)
{
    (void)exception_obj;
    return;
}

void __cxa_end_catch(void)
{
}

void __cxa_rethrow(void)
{
}

int __gxx_personality_v0(int version, int actions, unsigned long exception_class,
                        struct _Unwind_Exception *exception_obj,
                        struct _Unwind_Context *context)
{
    (void)version;
    (void)actions;
    (void)exception_class;
    (void)exception_obj;
    (void)context;
    return 1;  /* _URC_CONTINUE_UNWIND */
}

void __stack_chk_fail(void)
{
    puts("Stack smashing detected");
    exit(1);
}

void __cxa_throw(void *exception, struct __class_type_info *tinfo, void (*dest)(void*))
{
    (void)exception;
    (void)tinfo;
    (void)dest;
    /* Placeholder - would call unwinding in real implementation */
}

void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, int src2dst_offset)
{
    (void)src_ptr;
    (void)src_type;
    (void)dst_type;
    (void)src2dst_offset;
    return NULL; /* Placeholder */
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0; /* Placeholder */
}

/* Dummy handles */
void *_dso_handle = NULL;
void *__ioinit = NULL;

long long call_weak_fn(void)
{
    return 0; /* Placeholder for weak function */
}

/* Function: _Z20test_cpp_member_funcv @ 0x1754 */
long long test_cpp_member_func(void)
{
 char dest[36]; // [xsp+24h] [xbp+24h] BYREF

 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 return (unsigned int)strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x17CC */
long long test_cpp_constructor(void)
{
 unsigned int *v0; // x0
 int v1; // w1
 int v2; // w19

 v0 = (unsigned int *)cpp_operator_new_array(0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
v1 = lifecycle_class_instance_count++;
	v2 = v1 + 21;
	cpp_operator_delete(v0, 0x14u);
	--lifecycle_class_instance_count;
	return (unsigned int)(v2 + 1000 * lifecycle_class_instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1838 */
long long call_virtual_func(void ***a1)
{
 void *obj = *(void **)a1;
 long long (*func)(void *, int) = (long long (*)(void *, int))**(void ***)a1;
 return func(obj, 0);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1854 */
long long test_cpp_virtual_func(void)
{
 int v0; // w19
 long long ( **v2)(void *__hidden, int); // [xsp+20h] [xbp+20h] BYREF
 long long ( **v3)(void *__hidden, int); // [xsp+28h] [xbp+28h] BYREF
 int v4; // [xsp+30h] [xbp+30h]

 v2 = (long long (**)(void *, int))&off_13958;
 v3 = (long long (**)(void *, int))&off_13988;
 v4 = 3;
 v0 = call_virtual_func((void ***)&v2);
 return v0 + 21 + (unsigned int)call_virtual_func((void ***)&v3);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x18E4 */
long long test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x18EC */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // w19
 long long ( **v2)(void *__hidden); // [xsp+48h] [xbp+48h] BYREF
 int v3; // [xsp+50h] [xbp+50h]

 v2 = (long long (**)(void *))&off_13B30;
 v3 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&v2);
 v3 = 100;
 return v0 + (unsigned int)virtual_thunk_to_DiamondDerived_func((struct DiamondDerived *)&v2);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1988 */
long long test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1990 */
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


/* Function: _Z23test_cpp_template_classv @ 0x1A38 */
long long test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1A40 */
long long test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1A48 */
void test_cpp_exception(void)
{
 unsigned int *exception; // x0

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, typeid_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1B20 */
long long test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1B28 */
long long test_cpp_rtti(void)
{
 long long *v0; // x20
 void *v1; // x21
 long long v2; // x23
 char *v3; // x22
 int v4; // w19
 int v5; // w19
 const char *v6; // x0
 unsigned int v7; // w19

 v0 = (long long *)cpp_operator_new(8u);
 *v0 = (long long)off_13B58;
 v1 = (void *)cpp_operator_new(8u);
 *(unsigned long long *)v1 = (unsigned long long)off_13B80;
 v2 = *v0;
 v3 = *(char **)(*(unsigned long long *)(*v0 - 8) + 8LL);
 v4 = 10;
 if ( v3 != "12RTTIDerivedA" )
 {
 v4 = 0;
 if ( *v3 != 42 )
 {
 if ( !strcmp(*(const char **)(*(unsigned long long *)(*v0 - 8) + 8LL), "12RTTIDerivedA") )
 v4 = 10;
 else
 v4 = 0;
 }
 }
 v5 = v4 + 20;
 if ( __dynamic_cast(
 v0,
 typeid_RTITIBase,
 typeid_RTITIDerivedA,
 0) )
 {
 v5 += 100;
 }
 if ( __dynamic_cast(
 v1,
 typeid_RTITIBase,
 typeid_RTITIDerivedB,
 0) )
 {
 v5 += 200;
 }
 if ( *v3 == 42 )
 v6 = v3 + 1;
 else
 v6 = v3;
 v7 = v5 + strlen(v6);
 (*(void ( **)(long long *))(v2 + 8))(v0);
 (*(void ( **)(void *))(*(unsigned long long *)v1 + 8LL))(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1C8C */
void test_cpp_oo_features(void)
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 puts(asc_2148);
 v0 = test_cpp_member_func();
 __printf_chk(1, (const char *)unk_2170, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, (const char *)unk_2190, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, (const char *)unk_21B0, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, (const char *)unk_21D0, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, (const char *)unk_21F0, v4);
 __printf_chk(1, (const char *)unk_2210, 22);
 v5 = test_cpp_template_func();
 __printf_chk(1, (const char *)unk_2230, v5);
 __printf_chk(1, (const char *)unk_2250, 16);
 __printf_chk(1, (const char *)unk_2270, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1DBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1DD4 */
long long GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base initialization stubbed for C compatibility */
 return __cxa_atexit((void (*)(void *))0, &__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1E18 */
long long Base_virtual_func(struct Base *this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1E20 */
const char * Base_getName(struct Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1E2C */
void Base_dtor(struct Base *this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1E30 */
long long Derived_virtual_func(struct Derived *this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1E3C */
const char * Derived_getName(struct Derived *this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1E48 */
long long MultiDerived_funcA(struct MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1E50 */
long long MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1E58 */
long long thunk_to_MultiDerived_funcB(struct MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1E60 */
long long MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1E78 */
long long virtual_thunk_to_MiddleA_func(struct MiddleA *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1E9C */
long long MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1EB4 */
long long virtual_thunk_to_MiddleB_func(struct MiddleB *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1ED8 */
long long DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1EF0 */
long long virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this
 + *(unsigned long long *)(*(unsigned long long *)this - 24LL)
 + *(unsigned long long *)(*(unsigned long long *)((char *)this + *(unsigned long long *)(*(unsigned long long *)this - 24LL)) - 24LL)
 + 8)
 + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1F14 */
long long non_virtual_thunk_to_DiamondDerived_func(struct DiamondDerived *this)
{
 return (unsigned int)(*(unsigned int *)((char *)this + *(unsigned long long *)(*((unsigned long long *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1F2C */
long long RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1F34 */
long long RTTIDerivedB_getType(struct RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1F3C */
void RTTIDerivedB_dtor(struct RTTIDerivedB *this)
{
 ;
}

/* Function: _ZN12RTTIDerivedBD1Ev @ 0x1F3C */
void RTTIDerivedB_dtor_complete(struct RTTIDerivedB *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1F40 */
void RTTIDerivedA_dtor(struct RTTIDerivedA *this)
{
 ;
}

/* Function: _ZN12RTTIDerivedAD1Ev @ 0x1F40 */
void RTTIDerivedA_dtor_complete(struct RTTIDerivedA *this)
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1F44 */
void DiamondDerived_dtor_complete(struct DiamondDerived *this)
{
 ;
}

/* Function: _ZN14DiamondDerivedD2Ev @ 0x1F44 */
void DiamondDerived_dtor(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1F48 */
void non_virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1F4C */
void virtual_thunk_to_DiamondDerived_D1(struct DiamondDerived *this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1F50 */
void MultiDerived_dtor(struct MultiDerived *this)
{
 ;
}

/* Function: _ZN12MultiDerivedD1Ev @ 0x1F54 */
void MultiDerived_dtor_complete(struct MultiDerived *this)
{
 ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1F54 */
void non_virtual_thunk_to_MultiDerived_D1(struct MultiDerived *this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1F58 */
void Derived_dtor(struct Derived *this)
{
 ;
}

/* Function: _ZN4BaseD1Ev @ 0x1F5C */
void Base_dtor_complete(struct Base *this)
{
 ;
}

/* Function: _ZN4BaseD0Ev @ 0x1F60 */
void Base_dtor_delete(struct Base *this)
{
 cpp_operator_delete(this, 8u);
}


/* Function: _ZN7DerivedD1Ev @ 0x1F74 */
void Derived_dtor_complete(struct Derived *this)
{
 ;
}

/* Function: _ZN7DerivedD0Ev @ 0x1F74 */
void Derived_dtor_delete(struct Derived *this)
{
 cpp_operator_delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1F8C */
void MultiDerived_dtor_delete(struct MultiDerived *this)
{
 cpp_operator_delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1FA4 */
void non_virtual_thunk_to_MultiDerived_D0(struct MultiDerived *this)
{
 cpp_operator_delete(this, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1FC0 */
void RTTIDerivedA_dtor_delete(struct RTTIDerivedA *this)
{
 cpp_operator_delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1FD8 */
void RTTIDerivedB_dtor_delete(struct RTTIDerivedB *this)
{
 cpp_operator_delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1FF0 */
void DiamondDerived_dtor_delete(struct DiamondDerived *this)
{
 cpp_operator_delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2008 */
void virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this)
{
 cpp_operator_delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x202C */
void non_virtual_thunk_to_DiamondDerived_D0(struct DiamondDerived *this)
{
 cpp_operator_delete(this, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2048 */
long long template_max_int(long long result, int a2)
{
 if ( (int)result < a2 )
 return (unsigned int)a2;
 else
 return (unsigned int)result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2054 */
double template_max_double(double result, double a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2060 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // w2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2074 */
long long Container_int_Constructor(long long result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x207C */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x2098 */
long long Container_int_get(long long a1, int a2)
{
 long long result; // x0

 result = 0;
 if ( (a2 & 0x80000000) == 0 )
 {
 result = 0;
 if ( *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4LL * a2);
 }
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x20C0 */
long long Container_int_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x20C8 */
long long Container_double_Constructor(long long result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x20D0 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x20EC */
double Container_double_get(long long a1, int a2)
{
 double result; // d0

 result = 0.0;
 if ( (a2 & 0x80000000) == 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8LL * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x210C */
long long Container_double_getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x2114 */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x14098 */

/* FAILED to decompile: puts @ 0x140A8 */

/* FAILED to decompile: strlen @ 0x140B0 */

/* FAILED to decompile: __stack_chk_fail @ 0x140B8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x140C0 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x140D0 */

/* FAILED to decompile: __cxa_finalize @ 0x140D8 */

/* FAILED to decompile: __libc_start_main @ 0x140E8 */

/* FAILED to decompile: _Znwm @ 0x140F0 */

/* FAILED to decompile: _ZdlPvm @ 0x140F8 */

/* FAILED to decompile: strncpy @ 0x14100 */

/* FAILED to decompile: __dynamic_cast @ 0x14108 */

/* FAILED to decompile: __cxa_atexit @ 0x14110 */

/* FAILED to decompile: _ZdaPv @ 0x14118 */

/* FAILED to decompile: strcmp @ 0x14128 */

/* FAILED to decompile: __cxa_rethrow @ 0x14130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x14138 */

/* FAILED to decompile: abort @ 0x14140 */

/* FAILED to decompile: __cxa_end_catch @ 0x14148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x14150 */

/* FAILED to decompile: __cxa_throw @ 0x14158 */

/* FAILED to decompile: _Unwind_Resume @ 0x14168 */

/* FAILED to decompile: __printf_chk @ 0x14170 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x14178 */

/* FAILED to decompile: __gmon_start__ @ 0x14188 */

/* Total functions decompiled: 70, failed: 25 */
