/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-1/5-1_clang_Os_no_g
 * Processor: arm
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

/* C++ ABI function declarations */
void *__cxa_allocate_exception(unsigned int size);
void __cxa_throw(void *exception, void *typeinfo, void *dest);
void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset);

/* C++ ABI function stub implementations */
void *__cxa_allocate_exception(unsigned int size)
{
    return malloc(size);
}

void __cxa_throw(void *exception, void *typeinfo, void *dest)
{
    (void)exception;
    (void)typeinfo;
    (void)dest;
    /* In a real implementation, this would unwind and throw */
    fprintf(stderr, "Exception thrown (stub implementation)\n");
    exit(1);
}

void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset)
{
    (void)src_ptr;
    (void)src_type;
    (void)dst_type;
    (void)src2dst_offset;
    /* Simple stub that returns NULL for all casts */
    return NULL;
}

/* C++ operator declarations for C compilation */
/* Note: In C mode, these need special handling */
void *_Znwm(unsigned long size)
{
    return malloc(size);
}

void _ZdlPv(void *ptr)
{
    free(ptr);
}

/* Wrapper functions for operator new/delete */
void *operator_new(unsigned long size);
void operator_delete(void *ptr);

void *operator_new(unsigned long size)
{
    return _Znwm(size);
}

void operator_delete(void *ptr)
{
    _ZdlPv(ptr);
}

/* type_info structure */
struct type_info {
    const char *name;
    void (*vtable)(void);
};

/* __class_type_info for dynamic_cast */
struct __class_type_info {
    const char *name;
    void (*vtable)(void);
};

/* type_info for int used in exception throwing */
static struct type_info type_info_int_data = {"int"};
#define type_info_int type_info_int_data

/* RTTI type_info objects */
static struct __class_type_info type_info_for_RTTIBase_data = {"RTTIBase"};
static struct __class_type_info type_info_for_RTTIDerivedA_data = {"RTTIDerivedA"};
static struct __class_type_info type_info_for_RTTIDerivedB_data = {"RTTIDerivedB"};
#define type_info_for_RTTIBase type_info_for_RTTIBase_data
#define type_info_for_RTTIDerivedA type_info_for_RTTIDerivedA_data
#define type_info_for_RTTIDerivedB type_info_for_RTTIDerivedB_data

/* RTTI class forward declarations */
struct RTTIBase {
    void *vtable;
};
struct RTTIDerivedA {
    void *vtable;
};
struct RTTIDerivedB {
    void *vtable;
};

/* Vtable arrays */
#define off_11D58 off_11D58_data
#define off_11D70 off_11D70_data
#define off_11D80 off_11D80_data

/* Forward declarations for constructors and destructors */
void RTTIBase_Constructor(struct RTTIBase *this);
void RTTIDerivedA_Constructor(struct RTTIDerivedA *this);
void RTTIDerivedB_Constructor(struct RTTIDerivedB *this);
void RTTIBase_destructor(struct RTTIBase *this);
void RTTIDerivedA_destructor(struct RTTIDerivedA *this);
void RTTIDerivedB_destructor(struct RTTIDerivedB *this);

/* Vtable pointers for RTTI classes */
void *off_11D58_data[3] = {
    &type_info_for_RTTIBase,
    (void *)RTTIBase_destructor,
    0
};
void *off_11D70_data[3] = {
    &type_info_for_RTTIDerivedA,
    (void *)RTTIDerivedA_destructor,
    0
};
void *off_11D80_data[3] = {
    &type_info_for_RTTIDerivedB,
    (void *)RTTIDerivedB_destructor,
    0
};

/* Constructor implementations for RTTI classes */
void RTTIBase_Constructor(struct RTTIBase *this)
{
    this->vtable = off_11D58;
}

void RTTIDerivedA_Constructor(struct RTTIDerivedA *this)
{
    this->vtable = off_11D70;
}

void RTTIDerivedB_Constructor(struct RTTIDerivedB *this)
{
    this->vtable = off_11D80;
}

/* External CRT function stubs */
long long call_weak_fn(void)
{
 return 0;
}

/* Function: .init_proc @ 0xD48 */
long long init_proc()
{
 return call_weak_fn();
}


/* External data references */
static unsigned long long xmmword_16B3_data[2] = {(unsigned long long)(uintptr_t)0, (unsigned long long)(uintptr_t)0};
#define xmmword_16B3 xmmword_16B3_data


void JUMPOUT(unsigned int addr) { (void)addr; }


/* C++ Standard Library stubs */
struct std_ios_base_Init {
};
static struct std_ios_base_Init std_ioinit_data = {};
#define std_ioinit std_ioinit_data

void std_ios_base_Init_Init(struct std_ios_base_Init *this) {
 (void)this;
}
void std_ios_base_Init_dtor(struct std_ios_base_Init *this) {
 (void)this;
}

static void *__dso_handle_data;
void *__dso_handle = &__dso_handle_data;

/* C++ ABI function atexit */
int __cxa_atexit(void (*)(void *), void *, void *);

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub implementation - doesn't actually register anything */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

/* C++ ABI finalize */
void __cxa_finalize(void *dso_handle)
{
    (void)dso_handle;
}

/* C++ ABI begin catch */
void *__cxa_begin_catch(void *exception_obj)
{
    (void)exception_obj;
    return NULL;
}

/* C++ ABI end catch */
void __cxa_end_catch(void)
{
}

/* C++ ABI personality */
int __gxx_personality_v0(
    int version,
    int actions,
    unsigned long long exception_class,
    struct _Unwind_Exception *exception_obj,
    struct _Unwind_Context *context)
{
    (void)version;
    (void)actions;
    (void)exception_class;
    (void)exception_obj;
    (void)context;
    return 0;
}

struct _Unwind_Exception {
    unsigned long long exception_class;
    void (*exception_cleanup)(int, struct _Unwind_Exception *);
    unsigned long long private_1;
    unsigned long long private_2;
};

struct _Unwind_Context;

/* Unwind resume */
void _Unwind_Resume(struct _Unwind_Exception *exc)
{
    (void)exc;
    exit(1);
}

/* C++ ABI rethrow */
void __cxa_rethrow(void)
{
    /* Stub implementation - rethrows current exception */
    exit(1);
}

/* gmon profiling startup */
void __gmon_start__(void)
{
    /* Stub implementation - profiling startup */
}


/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count = 0;

/* String constants */
static const char *asc_1680_data = "C++ Object-Oriented Features Test";
#define asc_1680 asc_1680_data

/* Printf format strings */
static const char *aCppL301D_data = "%d\n";
#define aCppL301D aCppL301D_data

static const char *aCppL302D_data = "%d\n";
#define aCppL302D aCppL302D_data

static const char *aCppL303D_data = "%d\n";
#define aCppL303D aCppL303D_data

static const char *aCppL304D_data = "%d\n";
#define aCppL304D aCppL304D_data

static const char *aCppL305D_data = "%d\n";
#define aCppL305D aCppL305D_data

static const char *aCppL306D_data = "%d\n";
#define aCppL306D aCppL306D_data

static const char *aCppL307D_data = "%d\n";
#define aCppL307D aCppL307D_data

static const char *aCppL308D_data = "%d\n";
#define aCppL308D aCppL308D_data

static const char *aCppL309D_data = "%d\n";
#define aCppL309D aCppL309D_data


/* Function: sub_D60 @ 0xD60 */
void sub_D60()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xEC0 */
long long GLOBAL__sub_I_5_1_cpp()
{
 std_ios_base_Init_Init((struct std_ios_base_Init *)&std_ioinit);
 return __cxa_atexit((void (*)(void *))&std_ios_base_Init_dtor, &std_ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* C++ runtime startup function */
long long __libc_start_main(
    int (*main)(int, char **, char **),
    int argc,
    char **argv,
    int (*init)(void),
    void (*fini)(void),
    void (*rtld_fini)(void),
    void *stack_end)
{
    (void)init;
    (void)fini;
    (void)rtld_fini;
    (void)stack_end;
    exit(main(argc, argv, NULL));
    return 0;
}



/* Standard library function declarations */
/* Standard library functions - implementations provided below */

/* Standard library function stubs - using system implementations */

/* Stub implementations for standard library functions if needed */
void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    size_t i;
    for (i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

void *memset(void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    size_t i;
    for (i = 0; i < n; i++) {
        p[i] = (unsigned char)c;
    }
    return s;
}

void _Exit(int status)
{
    (void)status;
    /* Stub implementation - halt program */
    for(;;);
}

void exit(int status)
{
    _Exit(status);
}

int vprintf(const char *format, va_list ap)
{
    (void)format;
    (void)ap;
    return 0;
}

/* Standard library function stub implementations */
size_t strlen(const char *s)
{
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int printf(const char *format, ...)
{
    va_list args;
    int result;
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    return result;
}

int puts(const char *s)
{
    return printf("%s\n", s);
}

void abort(void)
{
    _Exit(1);
}

/* Function: _Z20test_cpp_member_funcv @ 0x1014 */
long long test_cpp_member_func(void)
{
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 memset(v1, 0, sizeof(v1));
 v2 = 0;
 memcpy(v1, "Test", 4);
 memcpy(&v1[15], xmmword_16B3, 8);
 return (unsigned int)strlen((char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1064 */
long long test_cpp_constructor(void)
{
 return (unsigned int)(1001 * LifecycleClass_instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x107C */
long long call_virtual_func(void ***a1)
{
 return (*((long long (**)(void *))a1))((void *)a1);
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
 __cxa_throw(exception, (struct type_info *)&type_info_int, 0);
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

 v0 = (unsigned long long *)operator_new(8u);
 *(unsigned long long *)v0 = (uintptr_t)off_11D58;
 v1 = (void *)operator_new(8u);
 *(unsigned long long *)v1 = (uintptr_t)off_11D80;
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&type_info_for_RTTIBase,
 (const struct __class_type_info *)&type_info_for_RTTIDerivedA,
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
 (const struct __class_type_info *)&type_info_for_RTTIBase,
 (const struct __class_type_info *)&type_info_for_RTTIDerivedB,
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


/* Function: _Z20test_cpp_oo_featuresv @ 0x1278 */
void test_cpp_oo_features(void)
{
 int v0; // w0
 unsigned char v1[31]; // [xsp+Ch] [xbp-24h] BYREF
 char v2; // [xsp+2Bh] [xbp-5h]

 puts(asc_1680);
 memset(v1, 0, sizeof(v1));
 v2 = 0;
 memcpy(v1, "Test", 4);
 memcpy(&v1[15], xmmword_16B3, 8);
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
 return 0;
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
 operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1480 */
long long RTTIDerivedA_getType(struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1488 */
void RTTIBase_destructor(struct RTTIBase *this)
{
 (void)this;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x148C */
// attributes: thunk
void RTTIDerivedB_destructor(struct RTTIDerivedB *this)
{
 operator_delete(this);
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
