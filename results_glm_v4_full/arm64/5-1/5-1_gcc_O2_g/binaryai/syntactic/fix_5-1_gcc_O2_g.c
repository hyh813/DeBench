#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Decompiled by BinaryAI
// SHA256: 1c73fbcca3ab6a0ae44184b3cb35ec3d159d76a40bf89aad0bed99d24dc25fc8

/* Forward declarations */
typedef struct Derived Derived;

/* Base class definition */
struct Base {
    void *vtable;
};

/* Derived class definition */
struct Derived {
    void *vtable;
    int member;
};

/* Middle class definitions */
struct MiddleA {
    void *vtable;
    int member;
};

struct MiddleB {
    void *vtable;
    int member;
};

/* MultiDerived class definition */
struct MultiDerived {
    void *vtable;
    int member;
    char extra[16];
};

/* DiamondDerived class definition */
struct DiamondDerived {
    void *vtable;
    int member;
    char extra[32];
};

/* RTTI derived class definitions */
struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

/* RTTIBase class definition */
struct RTTIBase {
    void *vtable;
};

/* LifecycleClass definition */
struct LifecycleClass {
    void *vtable;
};

typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct LifecycleClass LifecycleClass;
typedef struct Init_ios_base Init_ios_base;

/* External variable declarations */
extern char completed_0;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;
extern unsigned long __ioinit;
extern unsigned long stack0x00000008;


/* External function declarations with correct signatures */
extern void __cxa_finalize(void *);
extern void Init(void *);
extern void __stack_chk_fail(void);
extern void *__dynamic_cast(void *, const void *, const void *, int);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern int __libc_start_main(int (*)(int, char **), int, char **, void (*)(void), void (*)(void), void (*)(void));
extern void operator_delete(void *, unsigned long);
extern void *operator_new(unsigned long);
extern void *_Znwj(unsigned long);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, const void *, void *);
extern char DAT_00101af8[];
extern char DAT_00101b10[];
extern char DAT_00101b38[];
extern char DAT_00101b58[];
extern char DAT_00101b78[];
extern char DAT_00101b98[];
extern char DAT_00101bb8[];
extern char DAT_00101bd8[];
extern char DAT_00101bf8[];
extern char DAT_00101c18[];
extern char DAT_00101c38[];
extern char DAT_00101c58[];
extern char DAT_00101c78[];
extern char DAT_00101c98[];

/* Namespace declarations - converted for C compatibility */
struct Init_ios_base {
    void (*_Init)(void *);
    void (*Init)(void *);
};

/* Function declarations */
/* Note: Functions defined in this file do not need extern declarations */

/* type_info objects for RTTI - C compatible representation */
extern void *int_typeinfo;

/* Definitions for external symbols - stub implementations */

/* type_info structure for RTTI - proper C++ compatible representation */
typedef struct type_info {
    const void *vtable;  /* Virtual table pointer for type_info */
    const char *name;   /* Type name */
} type_info;

/* Virtual function table for type_info - proper C++ structure */
struct type_info_vtable {
    const void *typeinfo_ptr;  /* pointer to type_info itself (for RTTI) */
    void (*destructor)(void *); /* virtual destructor */
};

/* Create the vtable for type_info */
static const struct type_info_vtable type_info_vtable_for_typeinfo = {
    NULL,  /* typeinfo_ptr - will point to the type_info itself */
    NULL   /* destructor - stub */
};

void *type_info_vtable = (void *)&type_info_vtable_for_typeinfo;

/* RTTI type_info objects - stub definitions with proper structure */
static const type_info RTTIBase_typeinfo_stub = { &type_info_vtable_for_typeinfo, "12RTTIBase" };
static const type_info RTTIDerivedA_typeinfo_stub = { &type_info_vtable_for_typeinfo, "12RTTIDerivedA" };
static const type_info RTTIDerivedB_typeinfo_stub = { &type_info_vtable_for_typeinfo, "12RTTIDerivedB" };

const void *RTTIBase_typeinfo = &RTTIBase_typeinfo_stub;
const void *RTTIDerivedA_typeinfo = &RTTIDerivedA_typeinfo_stub;
const void *RTTIDerivedB_typeinfo = &RTTIDerivedB_typeinfo_stub;

/* Forward declarations */
void call_weak_fn(void);
void test_cpp_oo_features(void);
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);
void _fini(void);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void Base__Base2(struct Base *this);
int Base_virtual_func(struct Base *this, int);
unsigned char *Base_getName(struct Base *this);
void Derived__Derived2(Derived *this);
int Derived_virtual_func(Derived *this, int);
char *Derived_getName(Derived *this);
void MultiDerived__MultiDerived4(MultiDerived *this);
unsigned long long MultiDerived_funcA(void);
void MultiDerived__MultiDerived3(MultiDerived *this);
unsigned long long MultiDerived_funcB_this(MultiDerived *this);

/* Combined vtable structure for RTTI - type_info at -8, vtable at +0 */
struct RTTI_vtable_combined {
    type_info typeinfo_obj;       /* type_info at offset -8 from vtable */
    void (*vfunc1)(void *);       /* virtual function 1 at offset +8 */
    void (*vfunc2)(void *);       /* virtual function 2 at offset +16 */
};

/* Vtable pointers - stub definitions with combined structure */
static const struct RTTI_vtable_combined RTTIDerivedA_vtable_combined = {
    { &type_info_vtable_for_typeinfo, "12RTTIDerivedA" },  /* typeinfo */
    (void (*)(void *))RTTIDerivedA__RTTIDerivedA2,          /* destructor */
    (void (*)(void *))RTTIDerivedA_getType                  /* virtual function */
};

static const struct RTTI_vtable_combined RTTIDerivedB_vtable_combined = {
    { &type_info_vtable_for_typeinfo, "12RTTIDerivedB" },  /* typeinfo */
    (void (*)(void *))RTTIDerivedB__RTTIDerivedB2,          /* destructor */
    (void (*)(void *))RTTIDerivedB_getType                  /* virtual function */
};

/* Point to the vtable portion (offset +8 from the start of combined struct) */
void *PTR__RTTIDerivedA_00112c28 = (void *)((char *)&RTTIDerivedA_vtable_combined + 8);
void *PTR__RTTIDerivedB_00112c50 = (void *)((char *)&RTTIDerivedB_vtable_combined + 8);

/* Base class type_info and vtable - separate definitions */
static const type_info Base_typeinfo = { &type_info_vtable_for_typeinfo, "4Base" };

/* Base class vtable structure */
struct Base_vtable {
    void (*destructor)(void *);
    int (*virtual_func)(void *, int);
    unsigned char *(*getName)(void *);
};

static const struct Base_vtable Base_vtable_struct = {
    (void (*)(void *))Base__Base2,
    (int (*)(void *, int))Base_virtual_func,
    (unsigned char *(*)(void *))Base_getName
};

void *PTR__Base_00112ca0 = (void *)&Base_vtable_struct;

/* Derived class type_info and vtable */
static const type_info Derived_typeinfo = { &type_info_vtable_for_typeinfo, "7Derived" };

/* Derived class vtable structure */
struct Derived_vtable {
    void (*destructor)(void *);
    int (*virtual_func)(void *, int);
    char *(*getName)(void *);
};

static const struct Derived_vtable Derived_vtable_struct = {
    (void (*)(void *))Derived__Derived2,
    (int (*)(void *, int))Derived_virtual_func,
    (char *(*)(void *))Derived_getName
};

void *PTR__Derived_00112cb0 = (void *)&Derived_vtable_struct;

/* MultiDerived class type_info and vtables */
static const type_info MultiDerived_typeinfo = { &type_info_vtable_for_typeinfo, "11MultiDerived" };

/* First vtable for MultiDerived (for first base class) */
struct MultiDerived_vtable1 {
    void (*destructor)(void *);
    unsigned long long (*funcA)(void *);
};

static const struct MultiDerived_vtable1 MultiDerived_vtable1_struct = {
    (void (*)(void *))MultiDerived__MultiDerived4,
    (unsigned long long (*)(void *))MultiDerived_funcA
};

/* Second vtable for MultiDerived (for second base class) */
struct MultiDerived_vtable2 {
    void (*destructor)(void *);
    unsigned long long (*funcB)(void *);
};

static const struct MultiDerived_vtable2 MultiDerived_vtable2_struct = {
    (void (*)(void *))MultiDerived__MultiDerived3,
    (unsigned long long (*)(void *))MultiDerived_funcB_this
};

void *PTR__MultiDerived_00112cc0 = (void *)&MultiDerived_vtable1_struct;
void *PTR__MultiDerived_00112cc8 = (void *)&MultiDerived_vtable2_struct;

/* Stub implementation for std::ios_base::Init::Init */
void Init(void *this)
{
    /* Stub implementation - std::ios_base initialization */
    return;
}

/* Global variables - stub definitions */
char completed_0 = 0;
void *__dso_handle = NULL;
int LifecycleClass_instance_count = 0;
unsigned long __stack_chk_guard = 0;
unsigned long ___stack_chk_guard = 0;
unsigned long __ioinit = 0;
unsigned long stack0x00000008 = 0;
/* Integer type_info - stub definition for internal use */
static const type_info int_typeinfo_stub = { &type_info_vtable_for_typeinfo, "int" };
const void *int_typeinfo = &int_typeinfo_stub;

/* String/data arrays - stub definitions */
char DAT_00101af8[32] = "Base\0";
char DAT_00101b10[32] = "Testing C++ OO Features\0";
char DAT_00101b38[32] = "Member func result: %d\n\0";
char DAT_00101b58[32] = "Constructor test: %d\n\0";
char DAT_00101b78[32] = "Virtual func test: %d\n\0";
char DAT_00101b98[32] = "Multiple inheritance: %d\n\0";
char DAT_00101bb8[32] = "Diamond inheritance: %d\n\0";
char DAT_00101bd8[32] = "Operator overload: %d\n\0";
char DAT_00101bf8[32] = "Template class: %d\n\0";
char DAT_00101c18[32] = "Lambda: %d\n\0";
char DAT_00101c38[32] = "Exception test\n\0";
char DAT_00101c58[32] = "Smart pointer: %d\n\0";
char DAT_00101c78[32] = "RTTI test: %d\n\0";
char DAT_00101c98[32] = "All tests passed!\n\0";

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x100ed0
int puts_wrapper(char *__s)
{
 return puts(__s);
}

// Function: <EXTERNAL>::strlen @ 0x100ee0
size_t strlen_wrapper(char *__s)
{
 return strlen(__s);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ef0
void __stack_chk_fail_wrapper(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100f00
/* Begin catch handler - defined as weak to allow linker resolution */
void __attribute__((weak)) __cxa_begin_catch(void *exception_obj)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100f10
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

void * __cxa_allocate_exception_wrapper(size_t size)
{
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100f20
void __cxa_finalize_wrapper(void *dso_handle)
{
 __cxa_finalize(dso_handle);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
void __libc_start_main_wrapper(int (*main)(int, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void))
{
 __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini);
}

// Function: <EXTERNAL>::operator.new @ 0x100f40
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::_Znwj @ operator new(unsigned int)
void *_Znwj(unsigned long param_1)
{
 return operator_new(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x100f50
void operator_delete(void *param_1,unsigned long param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::_ZdlPvm @ operator delete(void*, unsigned long)
void _ZdlPvm(void *ptr, unsigned long size)
{
    operator_delete(ptr, size);
}

// Function: <EXTERNAL>::strncpy @ 0x100f60
char * strncpy_wrapper(char *__dest,char *__src,size_t __n)
{
 return strncpy(__dest,__src,__n);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100f70
void *__dynamic_cast_wrapper(void *ptr, const void *src, const void *dst, int hint)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
int __cxa_atexit_impl(void (*func)(void *), void *arg, void *dso_handle)
{
 return __cxa_atexit(func, arg, dso_handle);
}

// Function: <EXTERNAL>::strcmp @ 0x100f90
int strcmp_wrapper(char *__s1,char *__s2)
{
 return strcmp(__s1,__s2);
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100fa0
/* Exception rethrow function - defined as weak to allow linker resolution */
void __attribute__((weak)) __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100fb0
void std_ios_base_Init_Init(void *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x100fc0
void abort_impl(void)
{
 /* Stub implementation for abort() */
 while (1) {
 /* Infinite loop to halt execution */
 }
}

// Standard abort function
void abort(void)
{
    abort_impl();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100fd0
/* End catch handler - defined as weak to allow linker resolution */
void __attribute__((weak)) __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100fe0
void __gxx_personality_v0_wrapper(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100ff0
void __cxa_throw_wrapper(void)
{
 __cxa_throw((void*)0, (void*)0, (void*)0);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
/* Unwind resume function - defined as weak to allow linker resolution */
void __attribute__((weak)) _Unwind_Resume(void)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101010
int __printf_chk(int __flag, const char *__fmt, ...)
{
 int iVar1;
 __builtin_va_list ap;
 __builtin_va_start(ap, __fmt);
 iVar1 = vprintf(__fmt, ap);
 __builtin_va_end(ap);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
void __gmon_start__(void)
{
 /* Stub for profiling initialization */
 return;
}

// Function: test_cpp_exception @ 0x101040
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)0x0,0);
}

// Function: main @ 0x101120
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 Init(&__ioinit);
 __cxa_atexit((void (*)(void *))Init,&__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101180
void _start(void)
{
    /* Standard program entry point - minimal implementation */
    __libc_start_main(main, 0, NULL, (void (*)(void))_init, (void (*)(void))_fini, NULL);
    abort_impl();
}

// Function: call_weak_fn @ 0x1011b4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x1011d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101200
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010123c @ 0x10123c
void FUN_0010123c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101240
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x1012a0
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 extern int LifecycleClass_instance_count;
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(struct Base *param_1,int param_2)
{
 void (*vfunc)(struct Base *, int);
 vfunc = (void (*)(struct Base *, int))(**(void ***)param_1);
 vfunc(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101340
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101350
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101360
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x101370
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101380
void test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int_(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x101420
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101430
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x101440
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101450
int test_cpp_rtti(void)
{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 iVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 cVar1 = *__s1;
 if ((__s1 != "12RTTIDerivedA") && (iVar7 = 0, cVar1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 lVar5 = (long)__dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar2 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar2 = iVar7 + 0x14;
 }
 lVar5 = (long)__dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar2;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 {
 void *dtor = *(void **)(lVar8);
 ((void (*)(void *))dtor)(plVar3);
 }
 {
 void *dtor = *(void **)(*plVar4);
 ((void (*)(void *))dtor)(plVar4);
 }
 return iVar7 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x1015b0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 size_t sVar2;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((char *)&DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,(const char *)&DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(const char *)&DAT_00101b58,uVar1);
 __printf_chk(1,(const char *)&DAT_00101b78,0x2a);
 __printf_chk(1,(const char *)&DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(const char *)&DAT_00101bb8,uVar1);
 __printf_chk(1,(const char *)&DAT_00101bd8,0x16);
 test_cpp_template_func();
 __printf_chk(1,(const char *)&DAT_00101bf8,uVar1);
 __printf_chk(1,(const char *)&DAT_00101c18,0x10);
 __printf_chk(1,(const char *)&DAT_00101c38,0x55);
 test_cpp_exception();
 __printf_chk(1,(const char *)&DAT_00101c58,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(const char *)&DAT_00101c78,uVar1);
 uVar1 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,(const char *)&DAT_00101c98);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x101740
int Base_virtual_func(struct Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101750
unsigned char * Base_getName(struct Base *this)
{
 return (unsigned char *)&DAT_00101af8;
}

// Function: Base::~Base @ 0x101760
void Base__Base(struct Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x101770
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x101780
char * Derived_getName(Derived *this)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101790
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1017a0
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1017b0
unsigned long long MultiDerived_funcB_this(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x1017c0
int MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x1017e0
int MiddleA_func2(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101810
int MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101830
int MiddleB_func2(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101860
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101880
int DiamondDerived_func2(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x1018a4
int DiamondDerived_func3(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1018c0
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x1018d0
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1018e0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1018f0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101900
void DiamondDerived__DiamondDerived1(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101904
void DiamondDerived__DiamondDerived2(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101910
void DiamondDerived__DiamondDerived3(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101920
void MultiDerived__MultiDerived1(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101924
void MultiDerived__MultiDerived2(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101930
void Derived__Derived1(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x101940
void Base__Base2(struct Base *this)
{
 operator_delete(this,8);
 return;
}

// Function: Derived::~Derived @ 0x101950
void Derived__Derived2(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101960
void MultiDerived__MultiDerived3(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101970
void MultiDerived__MultiDerived4(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101980
void RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101990
void RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019a0
void DiamondDerived__DiamondDerived4(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019b0
void DiamondDerived__DiamondDerived5(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1019c4
void DiamondDerived__DiamondDerived6(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x1019d0
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1019e0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1019f0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101a10
void Container_int_Constructor(void *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101a20
void Container_int_push(void *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x101a40
unsigned int Container_int_get(void *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x28))) {
 return *(unsigned int *)((char *)this + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101a70
unsigned int Container_int_getSize(void *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x101a80
void Container_double_Constructor(void *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101a90
void Container_double_push(void *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101ab0
unsigned long long Container_double_get(void *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this + 0x50))) {
 return *(unsigned long long *)((char *)this + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101ad0
unsigned int Container_double_getSize(void *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: _fini @ 0x101ad8
void _fini(void)
{
 return;
}

