// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <new>
#include <iostream>
#include <cstddef>
#include <cstdio>
#include <cstring>

using namespace std;

/* String literal definitions */
char g_40123b[] = "%d\n";
char g_40121f[] = "%d\n";
char g_401358[] = "Testing C++ Features\n";
char g_401201[] = "%d\n";
char g_401257[] = "%d\n";
char g_401273[] = "%d\n";
char g_401290[] = "%d\n";
char g_4012ac[] = "%d\n";
char g_4012c8[] = "%d\n";
char g_4012e4[] = "%d\n";
char g_401300[] = "%d\n";
char g_40131d[] = "%d\n";
char g_40133a[] = "%d\n";


extern int armg_calculate_condition(int, int, int, int);

/* Stub implementation for ARM condition flag calculation */
int armg_calculate_condition(int cond_code, int flags_n, int flags_z, int flags_c, int flags_v)
{
  /* Simple stub - return condition based on NZCV flags */
  switch (cond_code) {
    case 0: return flags_z;           /* EQ */
    case 1: return !flags_z;          /* NE */
    case 2: return flags_c;           /* CS/HS */
    case 3: return !flags_c;          /* CC/LO */
    case 4: return flags_n;           /* MI */
    case 5: return !flags_n;          /* PL */
    case 6: return flags_v;           /* VS */
    case 7: return !flags_v;          /* VC */
    case 8: return flags_c && !flags_z; /* HI */
    case 9: return !flags_c || flags_z; /* LS */
    case 10: return flags_n == flags_v; /* GE */
    case 11: return flags_n != flags_v; /* LT */
    case 12: return !flags_z && (flags_n == flags_v); /* GT */
    case 13: return flags_z || (flags_n != flags_v); /* LE */
    case 14: return 1;                /* AL */
    default: return 0;
  }
}

/* Memory allocation functions */
extern void *operator new(std::size_t);
extern void operator delete(void *);

/* C++ ABI exception handling functions */
extern void *__cxa_allocate_exception(std::size_t thrown_size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *));
extern void *__cxa_begin_catch(void *thrown_exception);
extern void __cxa_end_catch();
extern void __cxa_end_cleanup();
extern void __cxa_rethrow();
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Stub implementations for C++ ABI functions */
void *__cxa_allocate_exception(std::size_t thrown_size)
{
  return malloc(thrown_size);
}

void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *))
{
  /* Simple stub - in real implementation this would unwind stack */
  abort();
}

void *__cxa_begin_catch(void *thrown_exception)
{
  return thrown_exception;
}

void __cxa_end_catch()
{
  /* Stub - clean up exception handling */
}

void __cxa_end_cleanup()
{
  /* Stub - clean up after exception */
}

void __cxa_rethrow()
{
  /* Stub - rethrow current exception */
  abort();
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
  /* Stub - register exit handler (not implemented) */
  return 0;
}

/* C++ RTTI support */
extern void* __dynamic_cast(const void* src_ptr, const void* src_type, const void* dst_type, int src2dst_offset);

/* Stub implementation for dynamic_cast */
void* __dynamic_cast(const void* src_ptr, const void* src_type, const void* dst_type, int src2dst_offset)
{
  /* Simple stub - return null for non-matching types */
  if (src_type == dst_type)
    return (void*)src_ptr;
  return 0;
}

/* ARM ABI floating-point comparison functions */
extern int __aeabi_dcmpgt(double a, double b);

/* Stub implementation for ARM double comparison */
int __aeabi_dcmpgt(double a, double b)
{
  return (a > b) ? 1 : 0;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_400854 at 0x400854
extern unsigned int g_412008;

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: __dollar_a_27 at 0x400958
extern char _ZNSt8ios_base4InitD1Ev;
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned int __dso_handle;

int __dollar_a_27()
{
 unsigned int v0; // r0

 new (&_ZStL8__ioinit) std::ios_base::Init();
 v0 = __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009cc at 0x4009cc
void sub_4009cc()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x400afc
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4; // [bp-0x1c]
 char v5; // [bp-0xc]

 strncpy(v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
class Base {
};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 // Virtual function dispatch - simplified for compilation
 ((void (*)(class Base *, int))(*(int **)arg_0)[0])(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x400b8c
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x400b94
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x400b9c
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x400ba8
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x400bb0
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x400bb8
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x400bc0
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x400bc8
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // r0

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 __cxa_begin_catch(0);
 __cxa_end_catch();
 return;
}








// Function: _Z18test_cpp_smart_ptrv at 0x400ca4
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400cb0
typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;
extern char g_411ed8[8];
extern char g_411eec[8];
char g_411ed8[8] = {0};
char g_411eec[8] = {0};

void test_cpp_rtti()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 unsigned int result; // r0
 unsigned int flag1; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
 p = (void*)malloc(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)(void*)malloc(4);
 *(ptr) = (struct_0*)g_411eec;
 result = (unsigned int)(uintptr_t)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = (unsigned int)(uintptr_t)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 free(p);
 ((void (*)(struct_0*))((*(struct_0**)ptr)->field_4))(*ptr);
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d7c

extern unsigned int _ZN14LifecycleClass14instance_countE;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern unsigned int _ZTI12RTTIDerivedA;
extern unsigned int _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

void test_cpp_oo_features()
{
 unsigned int v13; // lr
 unsigned int v14; // r7
 unsigned int flag5; // r0
 unsigned int v24; // r0
 unsigned int v15; // r6
 unsigned int v16; // r5
 unsigned int v17; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 unsigned int v22; // r0
 unsigned int v0; // [bp-0x3c]
 char v1; // [bp-0x38]
 unsigned int result; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 char v4; // [bp-0x2c]
 unsigned short flag3; // [bp-0x1c]
 char flag2; // [bp-0x1a]
 char flag4; // [bp-0x19]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]
 unsigned int v12; // [bp-0x4]

 v12 = v13;
 v11 = v14;
 v10 = v15;
 v9 = v16;
 v8 = v17;
 puts((const char *)&g_401358);
 strncpy(&v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 flag2 = 0;
 flag3 = 0;
 v0 = 10;
 flag4 = 0;
 printf((const char *)&g_401201, (int)(strlen(&v1) + 4700));
 printf((const char *)&g_40121f, (int)(_ZN14LifecycleClass14instance_countE * 1001 + 21));
 printf((const char *)&g_40123b, 42);
 printf((const char *)&g_401257, 71);
 printf((const char *)&g_401273, 650);
 printf((const char *)&g_401290, 22);
 printf((const char *)&g_4012ac, 39);
 printf((const char *)&g_4012c8, 16);
 printf((const char *)&g_4012e4, 85);
 test_cpp_exception();
 printf((const char *)&g_401300, 0);
 printf((const char *)&g_40131d, 703);
 p = operator new(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)operator new(4);
 *(ptr) = (struct_0*)g_411eec;
 v22 = (unsigned int)(uintptr_t)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag5 = (unsigned int)(uintptr_t)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 ((void (*)(struct_0*))((*(struct_0**)ptr)->field_4))(*ptr);
 v24 = (!v22 ? 30 : 130);
 if (flag5)
 v24 += 200;
 printf((const char *)&g_40133a, (int)(v24 + 14));
 return;
}


// Function: main at 0x400fb8
int main()
{
 test_cpp_oo_features();
 return 0;
}


/* Template Container class definition */
template<typename T>
class Container {
public:
  Container() {}
  ~Container() {}
  void push(T arg_0) {}
  T get(int arg_0) { return T(); }
  int getSize() { return 0; }
};

/* RTTI base and derived class definitions */
class RTTIBase {
public:
  virtual ~RTTIBase();
  virtual void getType() {}
};

class RTTIDerivedA : public RTTIBase {
public:
  virtual ~RTTIDerivedA();
  virtual void getType() override;
};

class RTTIDerivedB : public RTTIBase {
public:
  virtual ~RTTIDerivedB();
  virtual void getType() override;
};

// Function: _Z12template_maxIiET_S0_S0_ at 0x400fcc
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400fd8
double template_max_double(double arg_0, double arg_1)
{
  if (arg_0 > arg_1)
    return arg_0;
  return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40100c
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401020
template<>
Container<int>::Container()
{
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40102c
template<>
void Container<int>::push(int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401044
template<>
int Container<int>::get(int arg_0)
{
 return int();
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401064
template<>
int Container<int>::getSize()
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40106c
template<>
Container<double>::Container()
{
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401078
template<>
void Container<double>::push(double arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40109c
template<>
double Container<double>::get(int arg_0)
{
 return double();
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010c8
template<>
int Container<double>::getSize()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4010d0
RTTIDerivedA::~RTTIDerivedA()
{
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010d4
void RTTIDerivedA::getType()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010dc
RTTIBase::~RTTIBase()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010e0
RTTIDerivedB::~RTTIDerivedB()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010e4
void RTTIDerivedB::getType()
{
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv
// Definition moved inline in class definition



/* CRT stub function _fini removed by preprocessor */


