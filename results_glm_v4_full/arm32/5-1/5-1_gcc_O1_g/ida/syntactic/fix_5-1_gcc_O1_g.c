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

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_O1_g
 * Processor: arm
 */

/* Stub function forward declaration */
extern int call_weak_fn();



/* Forward declarations and type definitions */
struct SimpleClass {
    char name[32];
};

struct Base;
struct Derived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct MultiDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

struct Base {
    void **_vptr_Base;
    int (*virtual_func)(Base *, int x);
    const char *(*getName)(const Base *);
    void (*destructor)(Base *);
};

struct Derived {
    void **_vptr_Base;
    int multiplier;
    int (*virtual_func)(Derived *, int x);
    const char *(*getName)(const Derived *);
    void (*destructor)(Derived *);
};

struct MiddleA {
    void **_vptr_MiddleA;
    int dataA;
    int (*func)(struct MiddleA *_this);
};

struct MiddleB {
    void **_vptr_MiddleB;
    int dataB;
    int (*func)(struct MiddleB *_this);
};

struct DiamondDerived {
    void **_vptr_MiddleA;
    void **_vptr_MiddleB;
    int dataA;
    int dataB;
    int dataD;
    int (*func)(struct DiamondDerived *_this);
    void (*destructor)(DiamondDerived *);
};

struct MultiDerived {
    struct Base BaseA;
    struct Base BaseB;
};

struct RTTIBase {
    int (*getType)();
};

struct RTTIDerivedA {
    int (*getType)();
    void (*destructor)(RTTIDerivedA *);
};

struct RTTIDerivedB {
    int (*getType)();
    void (*destructor)(RTTIDerivedB *);
};

struct Container {
    int size;
    int data_int[10];
    double data[10];
    void (*push)(struct Container *, int value);
    void (*push_double)(struct Container *, double value);
    int (*get)(const struct Container *, int idx);
    double (*get_double)(const struct Container *, int idx);
    int (*getSize)(const struct Container *);
};

struct LifecycleClass {
};

extern int LifecycleClass_instance_count;

/* Global data */
static const char s[] = "Testing C++ Features";

/* Lifecycle class instance count */
int LifecycleClass_instance_count = 0;

/* Vtable offset placeholders */
void *off_1187C = (void *)0x1187C;
void *off_11894 = (void *)0x11894;
void *off_11968 = (void *)0x11968;
unsigned int off_1197C = 0x1197C;
unsigned int off_11990 = 0x11990;

/* type_info definitions */
struct type_info {
    const char *name;
    int dummy;
};

extern const struct type_info typeinfo_for_RTITIBase;
extern const struct type_info typeinfo_for_RTIDerivedA;
extern const struct type_info typeinfo_for_RTIDerivedB;

/* Stub functions */
extern void *operator new(unsigned int size);
extern void operator delete(void *ptr, unsigned int size);
extern void *operator new[](unsigned int size);
extern void operator delete[](void *ptr);
extern void _cxa_throw(void *exception, const struct type_info *tinfo, void (*dest)(void*));
extern void *_dynamic_cast(void *ptr, const struct __class_type_info *src, const struct __class_type_info *dst, int offset);
bool std_type_info_operator_eq(const type_info *a, const type_info *b);
extern int _printf_chk(int flag, const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern int _aeabi_atexit(void *obj, void (*dtor)(void*), void *dso_handle);

/* Stub function implementations */
bool std_type_info_operator_eq(const type_info *a, const type_info *b)
{
    return a == b;
}

size_t strlen(const char *s)
{
    const char *p = s;
    while (*p) p++;
    return p - s;
}

void *_cxa_allocate_exception(unsigned int size)
{
    return operator new(size);
}

int _printf_chk(int flag, const char *format, ...)
{
    return 0;
}

int puts(const char *s)
{
    return _printf_chk(1, "%s\n", s);
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

void _cxa_throw(void *exception, const struct type_info *tinfo, void (*dest)(void*))
{
}

void *_dynamic_cast(void *ptr, const struct __class_type_info *src, const struct __class_type_info *dst, int offset)
{
    return (void *)0;
}

/* Template function forward declarations */
extern int template_max_int(int a, int b);
extern double template_max_double(double a, double b);
extern void template_swap_int(int *a, int *b);

/* Virtual thunk forward declaration */
extern int _ZTv0_n12_N14DiamondDerived4funcEv(DiamondDerived *_this);

namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
    struct type_info {
        bool operator==(const type_info &other) const;
    };
}

extern void *_dso_handle;

/* type_info symbol definitions */
const struct type_info typeinfo_for_RTITIBase = { "RTTIBase", 0 };
const struct type_info typeinfo_for_RTIDerivedA = { "RTTIDerivedA", 0 };
const struct type_info typeinfo_for_RTIDerivedB = { "RTTIDerivedB", 0 };






/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10C00 */
size_t test_cpp_member_func()
{
 SimpleClass obj; // [sp+0h] [bp-30h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10C6C */
int test_cpp_constructor()
{
 unsigned int *v0; // r0
 int v1; // r3
 int v2; // r4

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass_instance_count++;
 v2 = v1 + 21;
 operator delete[](v0);
 --LifecycleClass_instance_count;
 return v2 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CD0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int (*)(Base *, int))(*obj->_vptr_Base))(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE4 */
int test_cpp_virtual_func()
{
 int v0; // r4
 Base base; // [sp+0h] [bp-18h] BYREF
 Derived derived; // [sp+4h] [bp-14h] BYREF

 base._vptr_Base = (void **)&off_1187C;
 derived._vptr_Base = (void **)&off_11894;
 derived.multiplier = 3;
 v0 = call_virtual_func(&base, 5);
 return v0 + 21 + call_virtual_func((Base *)&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10D68 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10D70 */
int test_cpp_diamond_inheritance()
{
 int v0; // r4
 DiamondDerived obj; // [sp+4h] [bp-24h] BYREF

 obj._vptr_MiddleB = (void **)&off_11968;
 obj.dataB = 50;
 v0 = _ZTv0_n12_N14DiamondDerived4funcEv((DiamondDerived *)&obj);
 obj.dataB = 100;
 return v0 + _ZTv0_n12_N14DiamondDerived4funcEv((DiamondDerived *)&obj);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10DF4 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10DFC */
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


/* Function: _Z23test_cpp_template_classv @ 0x10EAC */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10EB4 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10EBC */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, 0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10F78 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F84 */
size_t test_cpp_rtti()
{
 void *v0; // r5
 void *v1; // r4
 int v2; // r6
 const char *v3; // r0
 size_t v4; // r6

v0 = operator new(4u);
    *(unsigned int *)v0 = off_1197C;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11990;
 if ( std_type_info_operator_eq((const type_info *)(*(unsigned int *)v0 - 4), &typeinfo_for_RTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( std_type_info_operator_eq((const type_info *)(*(unsigned int *)v1 - 4), &typeinfo_for_RTIDerivedB) )
 v2 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTITIBase,
 (const struct __class_type_info *)&typeinfo_for_RTIDerivedA,
 0) )
 {
 v2 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTITIBase,
 (const struct __class_type_info *)&typeinfo_for_RTIDerivedB,
 0) )
 {
 v2 += 200;
 }
 v3 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( *v3 == 42 )
 ++v3;
 v4 = v2 + strlen(v3);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11074 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0
 int v5; // r0

 puts(s);
 v0 = test_cpp_member_func();
 _printf_chk(1, "test_cpp_member_func: %zu\n", v0);
 v1 = test_cpp_constructor();
 _printf_chk(1, "test_cpp_constructor: %d\n", v1);
 v2 = test_cpp_virtual_func();
 _printf_chk(1, "test_cpp_virtual_func: %d\n", v2);
 v3 = test_cpp_multiple_inheritance();
 _printf_chk(1, "test_cpp_multiple_inheritance: %d\n", v3);
 v4 = test_cpp_diamond_inheritance();
 _printf_chk(1, "test_cpp_diamond_inheritance: %d\n", v4);
 _printf_chk(1, "test_cpp_operator_overload: %d\n", 22);
 v5 = test_cpp_template_func();
 _printf_chk(1, "test_cpp_template_func: %d\n", v5);
 _printf_chk(1, "test_cpp_template_class: %d\n", 16);
 _printf_chk(1, "test_cpp_lambda: %d\n", 85);
 test_cpp_exception();
}


/* Function: main @ 0x1119C */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: sub_111A4 @ 0x111A4 */
void sub_111A4(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x111AC */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
}


/* Function: _ZN4Base12virtual_funcEi @ 0x111DC */
int Base_virtual_func(Base *_this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x111E4 */
const char * Base_getName(const Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x111F0 */
void Base_destructor(Base *_this)
{
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x111F4 */
int Derived_virtual_func(Derived *_this, int x)
{
 return x * _this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x11200 */
const char * Derived_getName(const Derived *_this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1120C */
int MultiDerived_funcA(struct MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11214 */
int MultiDerived_funcB(struct MultiDerived *_this)
{
 int result = 40;
 return result;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1121C */
int _ZThn8_N12MultiDerived5funcBEv(struct MultiDerived *self)
{
    return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11224 */
int MiddleA_func(struct MiddleA *_this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned int *)_this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1123C */
int _ZTv0_n12_N7MiddleA4funcEv(struct MiddleA *_this)
{
 void **vptr = _this->_vptr_MiddleA;
 return *(int *)((char *)&_this->dataA
 + *((unsigned int *)vptr - 3)
 + *(*(unsigned int **)((char *)vptr + *((unsigned int *)vptr - 3)) - 3))
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11260 */
int MiddleB_func(struct MiddleB *_this)
{
 return *(int *)((char *)&_this->dataB + *((unsigned int *)_this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11278 */
int _ZTv0_n12_N7MiddleB4funcEv(struct MiddleB *_this)
{
 void **vptr = _this->_vptr_MiddleB;
 return *(int *)((char *)&_this->dataB
 + *((unsigned int *)vptr - 3)
 + *(*(unsigned int **)((char *)vptr + *((unsigned int *)vptr - 3)) - 3))
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1129C */
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(int *)((char *)&_this->dataA + *((unsigned int *)_this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x112B4 */
int _ZTv0_n12_N14DiamondDerived4funcEv(DiamondDerived *_this)
{
 void **vptr = _this->_vptr_MiddleA;
 return *(int *)((char *)&_this->dataA
 + *((unsigned int *)vptr - 3)
 + *(*(unsigned int **)((char *)vptr + *((unsigned int *)vptr - 3)) - 3))
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x112D8 */
int _ZThn8_N14DiamondDerived4funcEv(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(&_this[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x112F0 */
int RTTIDerivedA_getType(const struct RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x112F8 */
int RTTIDerivedB_getType(const struct RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11300 */
void RTTIDerivedB_destructor(RTTIDerivedB *_this)
{
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11304 */
void RTTIDerivedA_destructor(RTTIDerivedA *_this)
{
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11308 */
void DiamondDerived_destructor(DiamondDerived *_this)
{
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1130C */
void _ZTv0_n16_N14DiamondDerivedD1Ev(DiamondDerived *_this)
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1131C */
void _ZThn8_N14DiamondDerivedD1Ev(DiamondDerived *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11324 */
void MultiDerived_destructor(MultiDerived *_this)
{
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11328 */
void _ZThn8_N12MultiDerivedD1Ev(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11330 */
void Derived_destructor(Derived *_this)
{
}


/* Function: _ZN4BaseD0Ev @ 0x11334 */
void Base_deleting_destructor(Base *_this)
{
 operator delete(_this);
}


/* Function: _ZN7DerivedD0Ev @ 0x1134C */
void Derived_deleting_destructor(Derived *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11364 */
void MultiDerived_deleting_destructor(MultiDerived *_this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1137C */
void _ZThn8_N12MultiDerivedD0Ev(MultiDerived *_this)
{
 operator delete(&_this[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x11398 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x113B0 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x113C8 */
void DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete(_this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x113E0 */
void _ZTv0_n16_N14DiamondDerivedD0Ev(DiamondDerived *_this)
{
 void **vptr = _this->_vptr_MiddleA;
 operator delete((char *)_this + *((unsigned int *)vptr - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11404 */
void _ZThn8_N14DiamondDerivedD0Ev(DiamondDerived *_this)
{
 operator delete(&_this[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11420 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1142C */
double template_max_double(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1145C */
void template_swap_int(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11470 */
void Container_int_Constructor(struct Container *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1147C */
void Container_int_push(struct Container *_this, int value)
{
 int _size; // r3

 _size = _this->size;
 if ( _size <= 9 )
 {
 _this->size = _size + 1;
 _this->data_int[_size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x11494 */
int Container_int_get(const struct Container *_this, int idx)
{
 if ( idx < 0 )
 return 0;
 if ( _this->size > idx )
 return _this->data_int[idx];
 return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x114C0 */
int Container_int_getSize(const struct Container *_this)
{
 return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x114C8 */
void Container_double_Constructor(struct Container *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x114D4 */
void Container_double_push(struct Container *_this, double value)
{
 int _size; // r1

 _size = _this->size;
 if ( _size <= 9 )
 {
 _this->size = _size + 1;
 _this->data[_size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x114F0 */
double Container_double_get(const struct Container *_this, int idx)
{
 const double *v3; // t0

 if ( idx < 0 )
 return 0.0;
 if ( _this->size <= idx )
 return 0.0;
 v3 = &_this->data[idx];
 return *v3;
}


/* Function: _ZNK9ContainerIdE7GetSizeEv @ 0x11528 */
int Container_double_getSize(const struct Container *_this)
{
 return _this->size;
}


/* Function: .term_proc @ 0x11530 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 71, failed: 27 */
