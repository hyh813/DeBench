/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions */
typedef struct { unsigned long long data; } undefined7;

/* Include setjmp for exception handling */
#include <setjmp.h>

/* Standard library definitions */
#ifndef NULL
#define NULL ((void*)0)
#endif

/* Forward declarations and external symbols */
struct Base {
    void **vtable;  /* vtable pointer at offset 0 */
};
typedef struct Base Base;
extern void *__dso_handle;

/* Forward declaration of type_info */
struct type_info;
typedef struct type_info type_info;

/* std namespace forward declarations */
struct std_ios_base_Init {
    void (*_Init)(void);
};
typedef struct std_ios_base_Init std_ios_base_Init;

struct std_ios_base {
    /* No typedef in C - use std_ios_base_Init directly */
};
typedef struct std_ios_base std_ios_base;

extern std_ios_base_Init std___ioinit;
extern void std_ios_base_Init__Init(std_ios_base_Init *this);
extern void std_ios_base_Init_Init(std_ios_base_Init *this);

/* Helper functions for C++ namespace calls */
extern void std_ios_base_Init_Init__(std_ios_base_Init *this);
extern void std_ios_base_Init__Init__(std_ios_base_Init *this);

/* RTTI and type_info definition */
struct type_info {
    const char *name;
    /* Comparison operators - needed for linking */
    int (*__is_pointer_p)(const type_info *);
    int (*__is_function_p)(const type_info *);
    int (*__do_catch)(const type_info *, void **, unsigned int) __attribute__((unused));
    int (*__do_upcast)(const type_info *, const type_info *, void **) __attribute__((unused));
    /* Additional vtable pointer for RTTI */
    void **vtable;
};
typedef struct type_info type_info;

/* Forward declarations for type_info methods */
int type_info___is_pointer_p(const type_info *this);
int type_info___is_function_p(const type_info *this);
int type_info___do_catch(const type_info *this, void **exception, unsigned int);
int type_info___do_upcast(const type_info *this, const type_info *other, void **obj);

/* External type_info references */
extern type_info typeinfo_int;

struct RTTIBase;
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;

struct RTTIBase {
    /* vtable pointer at offset 0 */
    void **vtable;
};
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    /* vtable pointer at offset 0 */
    void **vtable;
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    /* vtable pointer at offset 0 */
    void **vtable;
};
typedef struct RTTIDerivedB RTTIDerivedB;

/* Static member references for RTTI */
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* Global vtable/typeinfo pointers */
extern void *PTR__RTTIBase_00111d58[];
extern void *PTR__RTTIBase_00111d80[];

/* Forward declarations for vtable functions */
void RTTIBase_dtor(RTTIBase *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);

/* Template class type definitions */
struct Container_int_ {
    int data[10];
    int count;
};
typedef struct Container_int_ Container_int_;

struct Container_double_ {
    double data[10];
    int count;
};
typedef struct Container_double_ Container_double_;

/* Function declarations */
int call_weak_fn(int);
int main(int argc, char **argv);
void test_cpp_exception(void);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void*));
long __dynamic_cast(void *obj, type_info *src, type_info *dst, int src2dst);
void exit(int status);
void abort(void)
{
    exit(1);
}
void _Unwind_Resume(void *exception);
unsigned long test_cpp_exception_wrapper(void);
void __cxa_finalize(void *dso_handle);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
int __libc_start_main(int (*main)(int, char **), int argc, char **argv, 
                       void (*init)(void), void (*fini)(void), void *stack_end);
void __gmon_start__(void);
size_t strlen(const char *s);
void *malloc(size_t size);
void free(void *ptr);
void *operator_new(size_t size);
void operator_delete(void *ptr);
int puts(const char *s);
int printf(const char *format, ...);

void *operator_new(size_t size)
{
    return malloc(size);
}
void operator_delete(void *ptr)
{
    free(ptr);
}

/* C++ runtime stub implementations */
void *__cxa_allocate_exception(size_t size)
{
    return malloc(size);
}

void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub - would normally register cleanup function */
}

void __cxa_finalize(void *dso_handle)
{
    /* Stub - would normally call all registered cleanup functions */
}

int __libc_start_main(int (*main)(int, char **), int argc, char **argv,
                       void (*init)(void), void (*fini)(void), void *stack_end)
{
    /* Stub implementation - call main directly */
    exit(main(argc, argv));
    return 0;
}

extern jmp_buf exception_wrapper_jmp_buf;
extern int exception_wrapper_jmp_buf_set;

void __cxa_throw(void *exception, type_info *tinfo, void (*dest)(void*))
{
    /* Stub - would normally call unwinding */
    if (exception_wrapper_jmp_buf_set) {
        exception_wrapper_jmp_buf_set = 0;
        free(exception);  /* Clean up the exception */
        longjmp(exception_wrapper_jmp_buf, 1);
    }
    _Unwind_Resume(exception);
}

long __dynamic_cast(void *obj, type_info *src, type_info *dst, int src2dst)
{
    /* Stub implementation - return 0 if cast fails, obj pointer if succeeds */
    if (obj == NULL || src == NULL || dst == NULL) {
        return 0;
    }
    /* For this decompiled code, simple non-zero return for successful casts */
    return (long)obj;
}

void _Unwind_Resume(void *exception)
{
    /* Stub - would normally resume exception unwinding */
    abort();
}

/* Global variables */
char completed_0 = 0;
int LifecycleClass_instance_count = 0;
std_ios_base_Init std___ioinit;
void *__dso_handle = &__dso_handle;

/* Vtable definitions for RTTI */
void *PTR__RTTIBase_00111d58[] = {
    (void *)RTTIBase_dtor,
    (void *)RTTIDerivedA_getType
};

void *PTR__RTTIBase_00111d80[] = {
    (void *)RTTIBase_dtor,
    (void *)RTTIDerivedB_getType
};

/* String data definitions */
static char DAT_00101728[] = "Testing C++ Object-Oriented Features:\n";
static char DAT_001015d1[] = "  test_cpp_member_func: %lu\n";
static char DAT_001015ef[] = "  test_cpp_constructor: %lu\n";
static char DAT_0010160b[] = "  test_cpp_virtual_func: %lu\n";
static char DAT_00101627[] = "  test_cpp_multiple_inheritance: %lu\n";
static char DAT_00101643[] = "  test_cpp_diamond_inheritance: %lu\n";
static char DAT_00101660[] = "  test_cpp_operator_overload: %lu\n";
static char DAT_0010167c[] = "  test_cpp_template_func: %lu\n";
static char DAT_00101698[] = "  test_cpp_template_class: %lu\n";
static char DAT_001016b4[] = "  test_cpp_lambda: %lu\n";
static char DAT_001016d0[] = "  test_cpp_exception: %lu\n";
static char DAT_001016ed[] = "  test_cpp_smart_ptr: %lu\n";
static char DAT_0010170a[] = "  test_cpp_rtti: %lu\n";

/* type_info definitions */
type_info typeinfo_int = { "i" };
type_info RTTIBase_typeinfo = { "4Base" };
type_info RTTIDerivedA_typeinfo = { "10RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo = { "10RTTIDerivedB" };

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};
typedef struct LifecycleClass LifecycleClass;
extern int LifecycleClass_instance_count;

// Decompiled by BinaryAI
// SHA256: 329c6f885953c0704914fb7ba3807a228163f40c7059363d95498127463c12de

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))0)();
 return;
}







































// Function: std_ios_base_Init_Init
void std_ios_base_Init_Init(std_ios_base_Init *this)
{
    /* Empty implementation for std::ios_base::Init constructor */
}

// Function: std_ios_base_Init__Init
void std_ios_base_Init__Init(std_ios_base_Init *this)
{
    /* Empty implementation for std::ios_base::Init destructor */
}

// Function: std_ios_base_Init_Init__ helper
void std_ios_base_Init_Init__(std_ios_base_Init *this)
{
    std_ios_base_Init_Init(this);
}

// Function: std_ios_base_Init__Init__ helper
void std_ios_base_Init__Init__(std_ios_base_Init *this)
{
    std_ios_base_Init__Init(this);
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void) __attribute__((constructor));
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init__((std_ios_base_Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init__,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 __libc_start_main(main,(int)param_1,(char **)NULL,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x100f34
/* Stub for __gmon_start__ - called from libc initialization */
void __gmon_start__(void)
{
    /* Empty stub - profiling initialization */
}

int call_weak_fn(int param)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100f50
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100f80
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100fbc @ 0x100fbc
void FUN_00100fbc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c.data = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24.data = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))(**(void ***)param_1))(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101088
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&typeinfo_int,0);
}

// Function: test_cpp_smart_ptr @ 0x1011b0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011b8
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)(uintptr_t)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)(intptr_t)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101278
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts((char *)&DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 uStack_4c.data = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44.data = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf((const char*)&DAT_001015d1,(unsigned long)((int)sVar2 + 0x125c));
 printf((const char*)&DAT_001015ef,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((const char*)&DAT_0010160b,0x2a);
 printf((const char*)&DAT_00101627,0x47);
 printf((const char*)&DAT_00101643,0x28a);
 printf((const char*)&DAT_00101660,0x16);
 printf((const char*)&DAT_0010167c,0x27);
 printf((const char*)&DAT_00101698,0x10);
 printf((const char*)&DAT_001016b4,0x55);
 uVar3 = test_cpp_exception_wrapper();
 printf((const char*)&DAT_001016d0,uVar3 & 0xffffffff);
 printf((const char*)&DAT_001016ed,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)(uintptr_t)&PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)(intptr_t)&PTR__RTTIBase_00111d80;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 iVar1 = printf((const char*)&DAT_0010170a,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x10144c
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101464
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x101470
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x10147c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101490
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(((char*)this) + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101498
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(((char*)this) + 0x28);
 if (iVar1 < 10) {
 *(int *)(((char*)this) + 0x28) = iVar1 + 1;
 *(int *)(((char*)this) + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1014b4
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(((char*)this) + 0x28))) {
 uVar1 = *(unsigned int *)(((char*)this) + (unsigned long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1014d4
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(((char*)this) + 0x28);
}

// Function: Container<double>::Container @ 0x1014dc
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(((char*)this) + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1014e4
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(((char*)this) + 0x50);
 if (iVar1 < 10) {
 *(double *)(((char*)this) + (long)iVar1 * 8) = param_1;
 *(int *)(((char*)this) + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x101500
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(((char*)this) + 0x50))) {
 uVar1 = *(unsigned long long *)(((char*)this) + (unsigned long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10151c
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(((char*)this) + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101524
void RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101528
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101530
void RTTIBase_dtor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101534
void RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101538
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: test_cpp_exception wrapper @ 0x101540
int exception_wrapper_jmp_buf_set = 0;
jmp_buf exception_wrapper_jmp_buf;

unsigned long test_cpp_exception_wrapper(void)
{
    if (setjmp(exception_wrapper_jmp_buf) == 0) {
        exception_wrapper_jmp_buf_set = 1;
        /* Exception will be caught by modified __cxa_throw */
        test_cpp_exception();
        exception_wrapper_jmp_buf_set = 0;
    }
    return 0;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
    return;
}

