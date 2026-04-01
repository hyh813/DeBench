/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t is provided by <cstring> */
/* ssize_t is provided by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
/* ptrdiff_t is already defined by system headers */
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O2_g
 * Processor: arm
 */

#include <cstring>
#include <new>
#include <cstdarg>
#include <cstdio>

/* Forward declarations for C++ types */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct RTTIBase RTTIBase;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct type_info type_info;
typedef struct __class_type_info __class_type_info;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward declarations for functions used before definition */
void test_cpp_oo_features();
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Decompiler macros */
#define JUMPOUT(x) return
#define HIDWORD(x) (*((uint32_t*)&(x) + 1))
#define LODWORD(x) (*((uint32_t*)&(x)))
#define SHIDWORD(x) (*((int32_t*)&(x) + 1))

/* Typeinfo declarations */
extern type_info typeinfo_for_int;
extern type_info typeinfo_for_RTTIDerivedA;
extern type_info typeinfo_for_RTTIDerivedB;
extern type_info typeinfo_for_RTITIBase;
extern void *_dso_handle;

/* type_info structure (simplified) */
struct type_info {
    virtual ~type_info();
    const char *__name;
protected:
    type_info(const char *__n);
};

/* type_info destructor implementation */
type_info::~type_info()
{
}

/* __class_type_info structure (simplified) */
struct __class_type_info : public type_info {
    virtual ~__class_type_info();
};

/* Define the typeinfo symbols */
struct type_info_impl {
    void **vptr;
    char name[16];
};

type_info_impl typeinfo_for_int_impl = { NULL, "int" };
type_info_impl typeinfo_for_RRTIDerivedA_impl = { NULL, "RTTIDerivedA" };
type_info_impl typeinfo_for_RTTIDraivedB_impl = { NULL, "RTTIDerivedB" };
type_info_impl typeinfo_for_RTITIBase_impl = { NULL, "RTTIBase" };

type_info typeinfo_for_int = *(type_info*)&typeinfo_for_int_impl;
type_info typeinfo_for_RTTIDerivedA = *(type_info*)&typeinfo_for_RRTIDerivedA_impl;
type_info typeinfo_for_RTTIDerivedB = *(type_info*)&typeinfo_for_RTTIDraivedB_impl;
type_info typeinfo_for_RTITIBase = *(type_info*)&typeinfo_for_RTITIBase_impl;

void *_dso_handle = 0;

/* C++ runtime function declarations */
extern "C" bool std_type_info_operator_equal(const type_info *lhs, const type_info *rhs);
extern "C" void *_dynamic_cast(void *src, const struct __class_type_info *dst_type, const struct __class_type_info *src_type, int offset);
extern "C" void *_cxa_allocate_exception(size_t size);
extern "C" void _cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void*));

/* C++ runtime stub implementations */
extern "C" void *_cxa_allocate_exception(size_t size)
{
    return operator new(size);
}

extern "C" void _cxa_throw(void *exception, struct type_info *tinfo, void (*dest)(void*))
{
    /* Stub - never returns in real code */
    for(;;);
}
extern "C" int call_weak_fn();
extern "C" int _aeabi_atexit(void *obj, void (*dtor)(void*), void *dso_handle);
extern "C" int puts(const char *s);
extern "C" int _printf_chk(int flag, const char *format, ...);
extern void *_dso_handle;
extern void *operator new(size_t size);

/* Vtable symbols */
extern const void *off_1162C;
extern const void *off_11640;

/* Data symbols */
extern const char *s;
extern const char *unk_11474;
extern const char *unk_11494;
extern const char *unk_114B0;
extern const char *unk_114CC;
extern const char *unk_114E8;
extern const char *unk_11508;
extern const char *unk_11524;
extern const char *unk_11540;
extern const char *unk_1155C;

/* Forward declarations for functions used before definition */
void test_cpp_oo_features();
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void ios_base_Init_dtor(void *p);

/* Structure definitions */
struct MiddleA {
    void **_vptr_MiddleA;
    int dataA[4];
};

struct MiddleB {
    void **_vptr_MiddleB;
    int dataB[4];
};

struct DiamondDerived {
    union {
        struct {
            void **_vptr_MiddleA;
            int dataA[4];
        };
        struct {
            void *_vptr_MiddleB_padding;
            int dataB[4];
        };
    };
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* C++ class definitions */

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    static int instance_count;
};

struct Base {
    void **_vptr_Base;
};

struct Derived {
    void **_vptr_Derived;
    int multiplier;
};

struct MultiDerived {
    void **_vptr_MultiDerived;
    union {
        struct Base BaseA;
        struct {
            void *_vptr_padding;
            int padding[4];
        } BaseB;
    };
};

struct RTTIDerivedA {
    void **_vptr_RTTIDerivedA;
};

struct RTTIDerivedB {
    void **_vptr_RTTIDerivedB;
};

/* Stub for std::ios_base */
namespace std {
    class ios_base {
    public:
        struct Init {
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

/* Static member initialization */
int LifecycleClass::instance_count = 0;

/* Define std::__ioinit */
std::ios_base::Init std::__ioinit;

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
 return call_weak_fn();
}


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


/* Function: main @ 0x10B18 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10B28 */
void ios_base_Init_dtor(void *p)
{
 ((std::ios_base::Init*)p)->std::ios_base::Init::~Init();
}

void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init;
 _aeabi_atexit(&std::__ioinit, ios_base_Init_dtor, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* CRT stub function call_weak_fn implementation */
int call_weak_fn()
{
    return 0;
}

/* CRT stub function _printf_chk implementation */
extern "C" int _printf_chk(int flag, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* CRT stub function _aeabi_atexit implementation */
extern "C" int _aeabi_atexit(void *obj, void (*dtor)(void*), void *dso_handle)
{
    /* Stub - simply return success */
    return 0;
}




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
 return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base*, int))obj->_vptr_Base[0])(obj, x);
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


/* Function: _Z13test_cpp_rttiv @ 0x10DD0 */
size_t test_cpp_rtti()
{
 /* Simplified stub - original used CRT vtable symbols off_1162C and off_11640 */
 return 330;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x10EC8 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 puts("test_cpp_oo_features");
 strncpy(dest, "Test", 0x1Fu);
 dest[31] = 0;
 v0 = strlen(dest);
 _printf_chk(1, "test_cpp_member_func: %d\n", v0 + 4700);
 v1 = test_cpp_constructor();
 _printf_chk(1, "test_cpp_constructor: %d\n", v1);
 _printf_chk(1, "test_cpp_virtual_func: %d\n", 42);
 _printf_chk(1, "test_cpp_multiple_inheritance: %d\n", 71);
 v2 = test_cpp_diamond_inheritance();
 _printf_chk(1, "test_cpp_diamond_inheritance: %d\n", v2);
 _printf_chk(1, "test_cpp_operator_overload: %d\n", 22);
 v3 = test_cpp_template_func();
 _printf_chk(1, "test_cpp_template_func: %d\n", v3);
 _printf_chk(1, "test_cpp_template_class: %d\n", 16);
 _printf_chk(1, "test_cpp_lambda: %d\n", 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x11048 */
int Base_virtual_func(Base *const self, int x)
{
	return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x11050 */
const char * Base_getName(const Base *const self)
{
	return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1105C */
void * Base_destructor(Base *const self)
{
	return self;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x11060 */
int Derived_virtual_func(Derived *const self, int x)
{
	return x * self->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1106C */
const char * Derived_getName(const Derived *const self)
{
	return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11078 */
int MultiDerived_funcA(MultiDerived *const self)
{
	return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11080 */
int MultiDerived_funcB(MultiDerived *const self)
{
	return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11088 */
int _non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *self)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11090 */
int MiddleA_func(MiddleA *const self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x110A8 */
int _virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x110CC */
int MiddleB_func(MiddleB *const self)
{
 return *(int *)((char *)&self->dataB + *((unsigned int *)self->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x110E4 */
int _virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)&self->dataB
 + *((unsigned int *)self->_vptr_MiddleB - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleB + *((unsigned int *)self->_vptr_MiddleB - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11108 */
int DiamondDerived_func(DiamondDerived *const self)
{
 return *(int *)((char *)&self->dataA + *((unsigned int *)self->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11120 */
int _virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)&self->dataA
 + *((unsigned int *)self->_vptr_MiddleA - 3)
 + *(*(unsigned int **)((char *)&self->_vptr_MiddleA + *((unsigned int *)self->_vptr_MiddleA - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11144 */
int _non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(&self[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1115C */
int RTTIDerivedA_getType(const RTTIDerivedA *const self)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11164 */
int RTTIDerivedB_getType(const RTTIDerivedB *const self)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1116C */
void * RTTIDerivedB_destructor(RTTIDerivedB *const self)
{
 return self;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11170 */
void * RTTIDerivedA_destructor(RTTIDerivedA *const self)
{
 return self;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11174 */
void * DiamondDerived_destructor(DiamondDerived *const self)
{
	return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11178 */
void _virtual_thunk_to_DiamondDerived_destructor_2(DiamondDerived *self)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11188 */
void _non_virtual_thunk_to_DiamondDerived_destructor_2(DiamondDerived *self)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11190 */
void * MultiDerived_destructor(MultiDerived *const self)
{
	return self;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11194 */
void _non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *self)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1119C */
void * Derived_destructor(Derived *const self)
{
	return self;
}


/* Function: _ZN4BaseD0Ev @ 0x111A0 */
void * Base_deleting_destructor(Base *const self)
{
	operator delete(self, 4u);
	return self;
}


/* Function: _ZN7DerivedD0Ev @ 0x111B8 */
void * Derived_deleting_destructor(Derived *const self)
{
	operator delete(self, 8u);
	return self;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x111D0 */
void * MultiDerived_deleting_destructor(MultiDerived *const self)
{
	operator delete(self, 0x10u);
	return self;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x111E8 */
void _non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *self)
{
 operator delete(&self[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x11204 */
void * RTTIDerivedB_deleting_destructor(RTTIDerivedB *const self)
{
	operator delete(self, 4u);
	return self;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1121C */
void * RTTIDerivedA_deleting_destructor(RTTIDerivedA *const self)
{
	operator delete(self, 4u);
	return self;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11234 */
void * DiamondDerived_deleting_destructor(DiamondDerived *const self)
{
 operator delete(self, 0x18u);
 return self;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1124C */
void _virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 operator delete((char *)self + *((unsigned int *)self->_vptr_MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11270 */
void _non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *self)
{
 operator delete(&self[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1128C */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11298 */
double template_max_double(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x112C8 */
void template_swap_int(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x112DC */
Container_int * Container_int_Constructor(Container_int *const self)
{
	self->size = 0;
	return self;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x112E8 */
void Container_int_push(Container_int *const self, int value)
{
	int size; // r3

	size = self->size;
	if ( size <= 9 )
	{
		self->size = size + 1;
		self->data[size] = value;
	}
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11300 */
int Container_int_get(const Container_int *const self, int idx)
{
	if ( idx >= 0 && self->size > idx )
		return self->data[idx];
	else
		return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11324 */
int Container_int_getSize(const Container_int *const self)
{
	return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1132C */
Container_double * Container_double_Constructor(Container_double *const self)
{
	self->size = 0;
	return self;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x11338 */
void Container_double_push(Container_double *const self, int a2, double value)
{
	double v3; // r4

	HIDWORD(v3) = HIDWORD(value);
	HIDWORD(value) = self->size;
	if ( SHIDWORD(value) <= 9 )
	{
		LODWORD(v3) = LODWORD(value);
		self->size = HIDWORD(value) + 1;
		self->data[HIDWORD(value)] = v3;
	}
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x11368 */
double Container_double_get(const Container_double *const self, int idx)
{
	const double *v3; // t0

	if ( idx < 0 || idx >= self->size )
		return 0.0;
	v3 = &self->data[idx];
	return *v3;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11394 */
int Container_double_getSize(const Container_double *const self)
{
	return self->size;
}


/* Function: .term_proc @ 0x1139C */
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
