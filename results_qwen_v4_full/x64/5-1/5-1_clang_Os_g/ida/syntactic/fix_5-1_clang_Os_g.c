/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_clang_Os_g
 * Processor: pc
 */

#include <cstring>
#include <cstdio>
#include <cmath>

/* Global declarations */
#define JUMPOUT(x) return

extern void *_dso_handle;

/* Forward declarations for missing types */
struct Base {
    long long (*_vptr$Base)(Base *, int);
};

/* External declarations for missing symbols */
static unsigned long long xmmword_21F8 = 0;
struct type_info {
    const char *name;
};
void *__cxa_allocate_exception(unsigned int size)
{
 static char exception_buffer[256];
 return exception_buffer;
}

void __cxa_throw(void *exception, struct type_info *tinfo, void *dest)
{
 (void)exception;
 (void)tinfo;
 (void)dest;
}
static struct type_info typeinfo_for_int = {0};
extern void *__dynamic_cast(void *obj, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, long src2dst);
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}
static const char s[] = "test";
static const char format[] = "%d";
static const char aCppL302D[] = "%d";
static const char aCppL303D[] = "%d";
static const char aCppL304D[] = "%d";
static const char aCppL305D[] = "%d";
static const char aCppL306D[] = "%d";
static const char aCppL307D[] = "%d";
static const char aCppL308D[] = "%d";
static const char aCppL309D[] = "%d";

/* Forward declaration for Container template */
template<typename T>
class Container {
public:
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx) const;
    int getSize() const;
};

class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Forward declarations for RTTI classes */
class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType() const;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
void GLOBAL__sub_I_5_1_cpp()
{
 // std::__ioinit is already constructed as a global
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x125C */
int test_cpp_member_func()
{
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8;
 return strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1294 */
int test_cpp_constructor()
{
 unsigned int *v0; // rax
 long long v1; // rcx
 unsigned int *v2; // rdx
 int v3; // ebx

 v0 = (unsigned int *)operator new[](0x14u);
 v1 = 0;
 v2 = v0;
 do
 {
 *v2 = v1;
 v1 += 10;
 ++v2;
 }
 while ( v1 != 50 );
 ++LifecycleClass::instance_count;
 v3 = v0[2] + LifecycleClass::instance_count;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12E5 */
int call_virtual_func(Base *obj, int x)
{
 return obj->_vptr$Base(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12ED */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12F3 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12F9 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12FF */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1305 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x130B */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1311 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1317 */
int test_cpp_exception()
{
 unsigned int *exception; // rax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13D7 */
int test_cpp_smart_ptr()
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x147F */
void test_cpp_oo_features()
{
 int v0; // eax
 unsigned int v1; // eax
 char s[36]; // [rsp+4h] [rbp-24h] BYREF

 puts(::s);
 memset(&s[15], 0, 17);
 *(unsigned long long *)s = xmmword_21F8;
 v0 = strlen(s);
 printf(format, (unsigned int)(v0 + 4700));
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0x15A8 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Primary template declaration */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

/* Function: _Z12template_maxIiET_S0_S0_ @ 0x15B2 */
template<>
int template_max<int>(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x15BA */
template<>
double template_max<double>(double a, double b)
{
 return fmax(a, b);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x15BF */
template<>
void template_swap<int>(int *a, int *b)
{
 int v2; // eax

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x15C8 */
void Container_int_Constructor(Container<int> *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x15D0 */
void Container_int_push(Container<int> *self, int value)
{
 long long size; // rax

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x15E4 */
int Container_int_get(const Container<int> *self, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x15F6 */
int Container_int_getSize(const Container<int> *self)
{
 return self->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x15FA */
void Container_double_Constructor(Container<double> *self)
{
 self->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1602 */
void Container_double_push(Container<double> *self, double a2, double value)
{
 long long size; // rax

 size = self->size;
 if ( size <= 9 )
 {
 self->size = size + 1;
 self->data[size] = a2;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1618 */
double Container_double_get(const Container<double> *self, int idx)
{
 double result; // xmm0_8

 result = 0.0;
 if ( idx >= 0 && self->size > idx )
 return self->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x162C */
int Container_double_getSize(const Container<double> *self)
{
 return self->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1630 */
// attributes: thunk
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZN8RTTIBase7getTypeEv */
int RTTIBase::getType() const
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1636 */
int RTTIDerivedA::getType() const
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x163C */
RTTIBase::~RTTIBase()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x163E */
// attributes: thunk
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1644 */
int RTTIDerivedB::getType() const
{
 return 2;
}


/* Function: .term_proc @ 0x164C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x40E0 */

/* FAILED to decompile: printf @ 0x40F0 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40F8 */

/* FAILED to decompile: strlen @ 0x4100 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4108 */

/* FAILED to decompile: __libc_start_main @ 0x4118 */

/* FAILED to decompile: __cxa_atexit @ 0x4120 */

/* FAILED to decompile: _ZdlPv @ 0x4128 */

/* FAILED to decompile: _Znwm @ 0x4130 */

/* FAILED to decompile: __dynamic_cast @ 0x4138 */

/* FAILED to decompile: _ZdaPv @ 0x4140 */

/* FAILED to decompile: __cxa_rethrow @ 0x4150 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4158 */

/* FAILED to decompile: puts @ 0x4160 */

/* FAILED to decompile: __cxa_end_catch @ 0x4168 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4170 */

/* FAILED to decompile: __cxa_throw @ 0x4178 */

/* FAILED to decompile: _Unwind_Resume @ 0x4180 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4188 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4190 */

/* FAILED to decompile: __gmon_start__ @ 0x41A0 */

/* Total functions decompiled: 40, failed: 21 */
