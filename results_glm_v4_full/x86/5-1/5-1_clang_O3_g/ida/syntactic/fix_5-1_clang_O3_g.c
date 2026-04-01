#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* C++ standard library stubs - C compatible */
struct std_ios_base_Init {
    void (*dtor)(struct std_ios_base_Init *this);
};

struct std_ios_base_Init std__ioinit;

/* Constructor and destructor for std::ios_base::Init */
void std_ios_base_Init__ctor(struct std_ios_base_Init *this) {}
void std_ios_base_Init__dtor(struct std_ios_base_Init *this) {}

/* type_info stub for RTTI */
struct type_info {
    const char *_name;
};

/* Out-of-line definitions for type_info methods */
const char* type_info_name(const struct type_info *this) {
    return this->_name;
}

/* type_info comparison methods */
int type_info_before(const struct type_info *this, const struct type_info *rhs) {
    (void)this; (void)rhs;
    return 0;
}

int type_info_equal(const struct type_info *this, const struct type_info *rhs) {
    return this->_name == rhs->_name;
}

struct __class_type_info {
    const char *_name;
};

/* C++ class stubs */
struct Base {
    void *_vptr_Base;
};

struct LifecycleClass {
    int instance_count;
};

int LifecycleClass_instance_count = 0;

struct Container_base_int {
    int size;
    int data[10];
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* Template removed - using explicit Container_int and Container_double instead */



struct RTTIBase {
    void **_vptr_Base;
};

struct RTTIDerivedA {
    struct RTTIBase base;
};

struct RTTIDerivedB {
    struct RTTIBase base;
};

/* Vtable definitions for virtual function dispatch */
static void *RTTIBase_vtable[2] = {
    (void *)RTTIBase__dtor,
    (void *)0  /* Additional virtual function slot */
};

static void *RTTIDerivedA_vtable[2] = {
    (void *)RTTIDerivedA__dtor,
    (void *)RTTIDerivedA__getType
};

static void *RTTIDerivedB_vtable[2] = {
    (void *)RTTIDerivedB__dtor,
    (void *)RTTIDerivedB__getType
};

/* Global variables */
void *_dso_handle = 0;
const void *off_3ECC = 0;
const void *off_3EE0 = 0;
const char asc_21D8[] = "Testing C++ OO Features";
const char aCppL301D[] = "String: %zu\n";
const char aCppL302D[] = "Constructor: %d\n";
const char aCppL303D[] = "Virtual: %d\n";
const char aCppL304D[] = "Multiple Inheritance: %d\n";
const char aCppL305D[] = "Diamond Inheritance: %d\n";
const char aCppL306D[] = "Operator Overload: %d\n";
const char aCppL307D[] = "Template Func: %d\n";
const char aCppL308D[] = "Template Class: %d\n";
const char aCppL309D[] = "Lambda: %d\n";
struct type_info typeinfo_for_int = { "int" };

/* HIBYTE macro */
#define HIBYTE(x) (((x) >> 8) & 0xFF)

/* External CRT stub functions */
void _gmon_start__(void) {}
void frame_dummy(void) {}
void _do_global_ctors_aux(void) {}
void _do_global_dtors_aux(void) {}

/* Forward declarations for exception handling structures */
struct _Unwind_Exception;
struct _Unwind_Context;

/* Exception handling structure */
struct _Unwind_Exception {
    uint64_t exception_class;
    void (*exception_cleanup)(int, struct _Unwind_Exception *);
    uintptr_t priv_1;
    uintptr_t priv_2;
};

struct _Unwind_Context {
    char dummy[64]; /* incomplete type stub */
};

/* Additional C++ runtime function declarations */
int __gxx_personality_v0(int version, int actions, uint64_t exception_class,
                         struct _Unwind_Exception *ue_header,
                         struct _Unwind_Context *context);
void *__cxa_begin_catch(void *exception_obj);
void __cxa_end_catch(void);
void _Unwind_Resume(struct _Unwind_Exception *exc);

/* Stub implementations */
int __gxx_personality_v0(int version, int actions, uint64_t exception_class,
                         struct _Unwind_Exception *ue_header,
                         struct _Unwind_Context *context) {
    (void)version; (void)actions; (void)exception_class;
    (void)ue_header; (void)context;
    return 0;
}

void *__cxa_begin_catch(void *exception_obj) {
    return exception_obj;
}

void __cxa_end_catch(void) {
}

void _Unwind_Resume(struct _Unwind_Exception *exc) {
    (void)exc;
}

/* C++ new/delete operators - renamed for C compatibility */
void *cpp_operator_new(size_t size) {
    return malloc(size);
}

void *cpp_operator_new_array(size_t size) {
    return malloc(size);
}

void cpp_operator_delete(void *ptr) {
    free(ptr);
}

void cpp_operator_delete_array(void *ptr) {
    free(ptr);
}

/* Mangled name aliases for C++ operators */
void *_Znwj(size_t size) {
    return cpp_operator_new(size);
}

void *_Znam(size_t size) {
    return cpp_operator_new_array(size);
}

void _ZdlPv(void *ptr) {
    cpp_operator_delete(ptr);
}

void _ZdaPv(void *ptr) {
    cpp_operator_delete_array(ptr);
}

/* Placement new operator */
void *cpp_placement_new(size_t size, void *ptr) {
    (void)size; /* unused */
    return ptr;
}

/* C++ runtime functions */
void *__cxa_allocate_exception(size_t size) {
    return malloc(size);
}

void __cxa_throw(void *exception, const struct type_info *tinfo, void (*destructor)(void *)) {
    /* Stub - normally this would unwind and throw */
    (void)tinfo; /* unused */
    (void)destructor; /* unused */
    (void)exception; /* unused parameter */
    free(exception);
}

int __cxa_atexit(void (*)(void *), void *, void *) {
    return 0;
}

void *__dynamic_cast(const void *obj, const void *src_type, const void *dst_type, int hint) {
    (void)src_type;
    (void)dst_type;
    (void)hint;
    return (void *)obj;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O3_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 _gmon_start__();
 frame_dummy();
 _do_global_ctors_aux();
 return 0;
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030(void)
{
 /* Stub function - original contained inline assembly */
 return;
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 int (*vfunc)(int);
 int *vptr = (int *)(a1 - 24);
 vfunc = (int (*)(int))(uintptr_t)*vptr;
 return vfunc(a1);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
void GLOBAL__sub_I_5_1_cpp()
{
 /* Simple initialization */
 std__ioinit.dtor = (void (*)(struct std_ios_base_Init*))std_ios_base_Init__dtor;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11AC @ 0x11AC */
void sub_11AC(void)
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx(void)
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx(void)
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di(void)
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func()
{
 unsigned short s[4]; /* [esp+14h] [ebp-28h] BYREF */
 int v2; /* [esp+1Ch] [ebp-20h] */
 int v3; /* [esp+20h] [ebp-1Ch] */
 int v4; /* [esp+24h] [ebp-18h] */
 int v5; /* [esp+28h] [ebp-14h] */
 unsigned char v6[8]; /* [esp+2Ch] [ebp-10h] BYREF */

 memset(v6, 0, sizeof(v6));
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 s[2] = (s[2] & 0x00FF);
 s[3] = 0;
 strcpy((char *)s, "Test");
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int call_virtual_func(struct Base *obj, int x)
{
 void **vtable;
 int (*vfunc)(struct Base *, int);
 vtable = (void **)obj->_vptr_Base;
 vfunc = (int (*)(struct Base *, int))vtable[0];
 return vfunc(obj, x);
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
 unsigned int *exception; /* eax */

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1540 */
int test_cpp_rtti()
{
 unsigned int *v0; /* eax */
 const void *v1; /* esi */
 void *v2; /* edi */
 void *v3; /* eax */
 int v4; /* esi */
 int v5; /* ebp */
 void *v7; /* [esp+8h] [ebp-14h] */

 v0 = (unsigned int *)cpp_operator_new(4u);
 *v0 = (uintptr_t)off_3ECC;
 v1 = (const void *)v0;
 v7 = v0;
 v2 = cpp_operator_new(4u);
 *(unsigned int *)v2 = (uintptr_t)off_3EE0;
 v3 = __dynamic_cast(
 v1,
 &typeinfo_for_int,
 &typeinfo_for_int,
 0);
 v4 = 130;
 if ( !v3 )
 v4 = 30;
 v5 = v4 + 200;
 if ( !__dynamic_cast(
 v2,
 &typeinfo_for_int,
 &typeinfo_for_int,
 0) )
 v5 = v4;
 cpp_operator_delete(v7);
 cpp_operator_delete(v2);
 return v5 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void test_cpp_oo_features()
{
 size_t v0; /* eax */
 char s[6]; /* [esp+Ch] [ebp-30h] BYREF */
 short v2; /* [esp+12h] [ebp-2Ah] */
 int v3; /* [esp+14h] [ebp-28h] */
 int v4; /* [esp+18h] [ebp-24h] */
 int v5; /* [esp+1Ch] [ebp-20h] */
 int v6; /* [esp+20h] [ebp-1Ch] */
 unsigned char v7[8]; /* [esp+24h] [ebp-18h] BYREF */

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
 printf(aCppL302D, 1001 * LifecycleClass_instance_count + 21);
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
 (void)argc; (void)argv; (void)envp;
 test_cpp_oo_features();
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1830 */
int template_max_int(int a, int b)
{
 int result; /* eax */

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1840 */
double template_max_double(double a, double b)
{
 if ( a > b )
 return a;
 return b;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1860 */
void template_swap_int(int *a, int *b)
{
 int v2; /* edx */

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1880 */
void Container_int__ctor(struct Container_int *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1890 */
void Container_int__push(struct Container_int *this, int value)
{
 int size; /* ecx */

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x18B0 */
int Container_int__get(const struct Container_int *this, int idx)
{
 int result; /* eax */

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x18D0 */
int Container_int__getSize(const struct Container_int *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x18E0 */
void Container_double__ctor(struct Container_double *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x18F0 */
void Container_double__push(struct Container_double *this, double value)
{
 int size; /* ecx */

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1910 */
double Container_double__get(const struct Container_double *this, int idx)
{
 double result;

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1930 */
int Container_double__getSize(const struct Container_double *this)
{
 return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
void RTTIDerivedA__dtor(struct RTTIDerivedA *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA__getType(const struct RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
void RTTIBase__dtor(struct RTTIBase *this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
void RTTIDerivedB__dtor(struct RTTIDerivedB *this)
{
 cpp_operator_delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB__getType(const struct RTTIDerivedB *this)
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A1C */
void term_proc()
{
 _do_global_dtors_aux();
}
