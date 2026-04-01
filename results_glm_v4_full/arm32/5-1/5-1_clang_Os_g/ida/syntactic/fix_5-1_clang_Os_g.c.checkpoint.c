/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned int size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_Os_g
 * Processor: arm
 */

/* Forward declarations for C++ classes */
struct Base {
 void **_vptr$Base;
};

struct RTTIDerivedA {
 void **_vptr$RTTIBase;
 int getType() const;
};

struct RTTIBase {
 void **_vptr$RTTIBIBase;
 ~RTTIBase();
};

struct RTTIDerivedB : RTTIDerivedA {
 int getType() const;
};

struct LifecycleClass {
 static int instance_count;
};

int LifecycleClass::instance_count = 0;

struct type_info {
};

/* Template container class */
template<typename T>
struct Container {
 int size;
 T data[10];
 
 Container();
 void push(T value);
 T get(int idx) const;
 int getSize() const;
};

/* Stub for C++ standard library namespace */
namespace std {
 struct ios_base {
 struct Init {
 Init();
 ~Init();
 };
 };
 static ios_base::Init __ioinit;
}

/* Stub declarations for decompiler macros and missing functions */
#define JUMPOUT(x) return
#define HIBYTE(x) (((x) >> 8) & 0xFF)
#define SET_HIBYTE(x, val) ((x) = (((x) & 0xFF) | (((val) & 0xFF) << 8)))

extern int call_weak_fn(void);
static void *_dso_handle = 0;
static int unk_12BD = 0;
static int unk_12BE = 0;
extern void *off_11ED8;
extern void *off_11EEC;
static const char *asc_1294 = "C++ Object-Oriented Features Test";
static const char *aCppL301D = "Member functions: %d\n";
static const char *aCppL302D = "Constructors: %d\n";
static const char *aCppL303D = "Virtual functions: %d\n";
static const char *aCppL304D = "Multiple inheritance: %d\n";
static const char *aCppL305D = "Diamond inheritance: %d\n";
static const char *aCppL306D = "Operator overloading: %d\n";
static const char *aCppL307D = "Template functions: %d\n";
static const char *aCppL308D = "Template classes: %d\n";
static const char *aCppL309D = "Lambdas: %d\n";

/* C++ runtime stubs */
extern void *operator new(size_t size);
extern void operator delete(void *ptr);
extern int _cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void *_dynamic_cast(void *src, const struct __class_type_info *src_type, const struct __class_type_info *dest_type, int src2dest);

void *_cxa_allocate_exception(size_t size)
{
    static unsigned char exception_buffer[128];
    return exception_buffer;
}

void _cxa_throw(void *obj, struct type_info *tinfo, void *dest)
{
    /* Stub - exception throwing not supported */
}
/* Simple implementations for standard library functions */
void puts(const char *s)
{
    while (*s) {
        /* Write character to stdout - simplified stub */
        s++;
    }
}

int printf(const char *fmt, ...)
{
    /* Simplified printf stub */
    return 0;
}

size_t strlen(const char *s)
{
    size_t len = 0;
    while (s[len]) len++;
    return len;
}

char *strcpy(char *dest, const char *src)
{
    char *d = dest;
    while ((*d++ = *src++)) ;
    return dest;
}

static int LODWORD(double x) {
    union { double d; int i[2]; } u;
    u.d = x;
    return u.i[0];
}

extern void std_ios_base_Init_ctor(void *obj);
extern void std_ios_base_Init_dtor(void *obj);

struct __class_type_info;

/* Type info objects for RTTI */
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTITIBase;
extern struct type_info typeinfo_for_RTITIDerivedA;
extern struct type_info typeinfo_for_RTITIDerivedB;














/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func()
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 SET_HIBYTE(v1[2], unk_12BD);
 v1[3] = unk_12BE;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr()
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti()
{
 return 144;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 puts(asc_1294);
 strcpy((char *)v1, "Test");
 SET_HIBYTE(v1[2], unk_12BD);
 v1[3] = unk_12BE;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v0 = strlen((const char *)v1);
 printf(aCppL301D, v0 + 4700);
 printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0xEF4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xF08 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
int template_max_double(double a, double b)
{
 int v2; // r5

 v2 = LODWORD(b);
 if ( a > b )
 return LODWORD(a);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
void template_swap_int(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
template<>
Container<int>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
template<>
void Container<int>::push(int value)
{
 int size; // r2

 size = this->size;
 if ( size <= 9 )
 {
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
template<>
int Container<int>::get(int idx) const
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
template<>
int Container<int>::getSize() const
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
template<>
Container<double>::Container()
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
template<>
void Container<double>::push(double value)
{
 int size; // r12

 size = this->size;
 if ( size <= 9 )
 {
 this->data[size] = value;
 this->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
template<>
double Container<double>::get(int idx) const
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && this->size > idx )
 return this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
template<>
int Container<double>::getSize() const
{
 return this->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
void RTTIDerivedB_dtor(RTTIDerivedB *_this)
{
 ;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x1028 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x120C0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x120C4 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x120C8 */

/* FAILED to decompile: __imp_printf @ 0x120CC */

/* FAILED to decompile: __imp_puts @ 0x120D0 */

/* FAILED to decompile: __imp___libc_start_main @ 0x120D8 */

/* FAILED to decompile: __imp_abort @ 0x120DC */

/* FAILED to decompile: _ZdlPv @ 0x120E0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x120E4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x120E8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x120EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x120F4 */

/* FAILED to decompile: __imp_strlen @ 0x120F8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x120FC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x12100 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x12104 */

/* FAILED to decompile: __imp___cxa_throw @ 0x12108 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x1210C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x12110 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12114 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x12118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x12120 */

/* Total functions decompiled: 41, failed: 22 */
