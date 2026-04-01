/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* IDA-style macros for accessing high/low parts of 64-bit values */
#define LODWORD(x) ((int)(x))
#define HIDWORD(x) ((int)(((unsigned long long)(x)) >> 32))
#define SHIDWORD(x) ((int)(((long long)(x)) >> 32))

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

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct SimpleClass;
struct LifecycleClass;
struct Container_int;
struct Container_double;

/* Struct definitions */
struct Base {
    unsigned int *vptr;
};

struct Derived {
    unsigned int *vptr;
    int multiplier;
};

struct MiddleA {
    unsigned int *vptr;
    int dataA;
};

struct MiddleB {
    unsigned int *vptr;
    int dataB;
};

struct DiamondDerived {
    unsigned int *vptr;
    int dataA;
    int dataB;
};

struct MultiDerived {
    unsigned int *vptr;
    struct Base BaseA;
    struct Base BaseB;
};

struct RTTIBase {
    unsigned int *vptr;
};

struct RTTIDerivedA {
    unsigned int *vptr;
};

struct RTTIDerivedB {
    unsigned int *vptr;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};

/* Global variables */
int LifecycleClass_instance_count = 0;

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O3_g
 * Processor: arm
 */

/* External function declarations */
void *operator_new(size_t size);
void *operator_delete(void *ptr, size_t size);
void *_cxa_allocate_exception(size_t size);
void _cxa_throw(void *exception, void *type_info, void *dest);
void *_dynamic_cast(void *obj, const void *src_type, const void *dst_type, int flags);
int type_info_operator_eq(int a, void *b);
void *_dso_handle;

/* Stub implementations for missing functions */
static void *_dynamic_cast_stub(void *obj, const void *src_type, const void *dst_type, int flags)
{
 (void)obj; (void)src_type; (void)dst_type; (void)flags;
 return 0;
}

static int type_info_operator_eq_stub(int a, void *b)
{
 (void)a; (void)b;
 return 0;
}

static void *_cxa_allocate_exception_stub(size_t size)
{
 (void)size;
 return 0;
}

static void _cxa_throw_stub(void *exception, void *type_info, void *dest)
{
 (void)exception; (void)type_info; (void)dest;
}

static void operator_delete_stub(void *ptr, size_t size)
{
 (void)ptr; (void)size;
}

#define _dynamic_cast _dynamic_cast_stub
#define type_info_operator_eq type_info_operator_eq_stub
#define _cxa_allocate_exception _cxa_allocate_exception_stub
#define _cxa_throw _cxa_throw_stub
#define operator_delete operator_delete_stub

/* Stub implementations for library functions */
static size_t stub_strlen(const char *s)
{
 size_t len = 0;
 while (s[len]) len++;
 return len;
}

static char *stub_strncpy(char *dest, const char *src, size_t n)
{
 size_t i;
 for (i = 0; i < n && src[i]; i++)
  dest[i] = src[i];
 for (; i < n; i++)
  dest[i] = 0;
 return dest;
}

static int stub_puts(const char *s)
{
 (void)s;
 return 0;
}

static int stub_printf_chk(int flag, const char *format, ...)
{
 (void)flag;
 (void)format;
 return 0;
}

#define strlen stub_strlen
#define strncpy stub_strncpy
#define puts stub_puts
#define _printf_chk stub_printf_chk

/* Typeinfo declarations */
int typeinfo_for_int = 0;
int typeinfo_for_RTTIBase = 0;
int typeinfo_for_RTTIDerivedA = 0;
int typeinfo_for_RTTIDerivedB = 0;

/* External variable declarations */
extern int off_116B4;
extern int off_116C8;
static const char *s = "Testing C++ features";
static const char *unk_114FC = "%zu\n";
static const char *unk_1151C = "%d\n";
static const char *unk_11538 = "%d\n";
static const char *unk_11554 = "%d\n";
static const char *unk_11570 = "%d\n";
static const char *unk_11590 = "%d\n";
static const char *unk_115AC = "%d\n";
static const char *unk_115C8 = "%d\n";
static const char *unk_115E4 = "%d\n";

/* External function declarations */
int _printf_chk(int flag, const char *format, ...);

/* Stub function */
int call_weak_fn()
{
 return 0;
}

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
 return call_weak_fn();
}


/* Macro for JUMPOUT stub */
#define JUMPOUT(x) ((void)0)

/* Function: sub_1092C @ 0x1092C */
void sub_1092C()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Forward declaration */
void test_cpp_oo_features();

/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10B28 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 /* std::ios_base::Init::Init(&std::__ioinit); */
 /* _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle); */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
size_t test_cpp_member_func()
{
 SimpleClass obj; // [sp+0h] [bp-30h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor()
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base *, int))obj->vptr[0])(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Forward declarations for template functions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int test_cpp_template_func()
{
 int v0; // r4
 double v1; // r6
 int a; // [sp+4h] [bp-1Ch] BYREF
 int b; // [sp+8h] [bp-18h] BYREF

 v0 = template_max_int(3, 7);
 v1 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr()
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x10ED4 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 int v1; // r4
 double v2; // r6
 int v3; // [sp+0h] [bp-40h] BYREF
 int b; // [sp+4h] [bp-3Ch] BYREF
 char dest[32]; // [sp+Ch] [bp-34h] BYREF

 puts(s);
 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 v0 = strlen(dest);
 _printf_chk(1, unk_114FC, v0 + 4700);
 _printf_chk(1, unk_1151C, LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count);
 _printf_chk(1, unk_11538, 42);
 _printf_chk(1, unk_11554, 71);
 _printf_chk(1, unk_11570, 650);
 _printf_chk(1, unk_11590, 22);
 v1 = template_max_int(3, 7);
 v2 = template_max_double(2.5, 1.5);
 v3 = 10;
 b = 20;
 template_swap_int(&v3, &b);
 _printf_chk(1, unk_115AC, (int)v2 + v1 + v3 + b);
 _printf_chk(1, unk_115C8, 16);
 _printf_chk(1, unk_115E4, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x110D0 */
int Base_virtual_func(Base *self, int x)
{
 (void)self;
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x110D8 */
const char * Base_getName(const Base *self)
{
 (void)self;
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x110E4 */
void * Base_destructor(Base *self)
{
 return self;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x110E8 */
int Derived_virtual_func(Derived *self, int x)
{
 return x * self->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x110F4 */
const char * Derived_getName(const Derived *self)
{
 (void)self;
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11100 */
int MultiDerived_funcA(MultiDerived *self)
{
 (void)self;
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11108 */
int MultiDerived_funcB(MultiDerived *self)
{
 (void)self;
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11110 */
int MultiDerived_funcB_thunk(MultiDerived *self)
{
 (void)self;
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11118 */
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->vptr - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x11130 */
int MiddleA_func_thunk(MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->vptr - 3)
 + *(*(unsigned int **)((char *)&self->vptr + *((unsigned int *)self->vptr - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11154 */
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->vptr - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1116C */
int MiddleB_func_thunk(MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->vptr - 3)
 + *(*(unsigned int **)((char *)&self->vptr + *((unsigned int *)self->vptr - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11190 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->vptr - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x111A8 */
int DiamondDerived_func_thunk(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->vptr - 3)
 + *(*(unsigned int **)((char *)&self->vptr + *((unsigned int *)self->vptr - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x111CC */
int DiamondDerived_func_thunk2(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x111E4 */
int RTTIDerivedA_getType(const RTTIDerivedA *self)
{
 (void)self;
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x111EC */
int RTTIDerivedB_getType(const RTTIDerivedB *self)
{
 (void)self;
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x111F4 */
void * RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 return self;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x111F8 */
void * RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 return self;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x111FC */
void * DiamondDerived_destructor(DiamondDerived *self)
{
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11200 */
void DiamondDerived_destructor_thunk(DiamondDerived *self)
{
 (void)self;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11210 */
void DiamondDerived_destructor_thunk2(DiamondDerived *self)
{
 (void)self;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11218 */
void * MultiDerived_destructor(MultiDerived *self)
{
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1121C */
void MultiDerived_destructor_thunk(MultiDerived *self)
{
 (void)self;
}


/* Function: _ZN7DerivedD2Ev @ 0x11224 */
void * Derived_destructor(Derived *self)
{
 return self;
}


/* Function: _ZN4BaseD0Ev @ 0x11228 */
void * Base_destructor_delete(Base *self)
{
 operator_delete(self, 4u);
 return self;
}


/* Function: _ZN7DerivedD0Ev @ 0x11240 */
void * Derived_destructor_delete(Derived *self)
{
 operator_delete(self, 8u);
 return self;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11258 */
void * MultiDerived_destructor_delete(MultiDerived *self)
{
 operator_delete(self, 0x10u);
 return self;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11270 */
void MultiDerived_destructor_delete_thunk(MultiDerived *self)
{
 operator_delete(&self[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1128C */
void * RTTIDerivedB_destructor_delete(RTTIDerivedB *self)
{
 operator_delete(self, 4u);
 return self;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x112A4 */
void * RTTIDerivedA_destructor_delete(RTTIDerivedA *self)
{
 operator_delete(self, 4u);
 return self;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x112BC */
void * DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete(self, 0x18u);
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x112D4 */
void DiamondDerived_destructor_delete_thunk(DiamondDerived *self)
{
 operator_delete((char *)self + *((unsigned int *)self->vptr - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x112F8 */
void DiamondDerived_destructor_delete_thunk2(DiamondDerived *self)
{
 operator_delete(&self[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11314 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11320 */
double template_max_double(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x11350 */
void template_swap_int(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11364 */
Container_int * Container_int_Constructor(Container_int *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x11370 */
void Container_int_push(Container_int *self, int value)
{
 int size; // r3

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11388 */
int Container_int_get(const Container_int *self, int index)
{
 if ( index >= 0 && self->size > index )
 return self->data[index];
 else
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x113AC */
int Container_int_getSize(const Container_int *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x113B4 */
Container_double * Container_double_Constructor(Container_double *self)
{
 self->size = 0;
 return self;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x113C0 */
void Container_double_push(Container_double *self, int a2, double value)
{
 int size_idx; // r4

 size_idx = (int)(value);
 if ( size_idx <= 9 )
 {
 self->size = size_idx + 1;
 self->data[size_idx] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x113F0 */
double Container_double_get(const Container_double *self, int index)
{
 if ( index < 0 || self->size <= index )
 return 0.0;
 return self->data[index];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1141C */
int Container_double_getSize(const Container_double *self)
{
 return self->size;
}


/* Function: .term_proc @ 0x11424 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x22098 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x2209C */

/* FAILED to decompile: __imp_strncpy @ 0x220A0 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220A4 */

/* FAILED to decompile: __imp_abort @ 0x220A8 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220AC */

/* FAILED to decompile: __imp___libc_start_main @ 0x220B0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220B4 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220B8 */

/* FAILED to decompile: __imp___printf_chk @ 0x220BC */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220C0 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220C4 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220C8 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220CC */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220D0 */

/* FAILED to decompile: __imp_strlen @ 0x220D4 */

/* FAILED to decompile: __imp__Znwj @ 0x220D8 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220E0 */

/* FAILED to decompile: __imp_puts @ 0x220E4 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220E8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220F0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x220F4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x220FC */

/* Total functions decompiled: 70, failed: 25 */
