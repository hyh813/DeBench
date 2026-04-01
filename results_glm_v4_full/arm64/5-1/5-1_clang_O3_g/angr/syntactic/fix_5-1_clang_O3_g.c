// Angr Decompilation of 5-1_clang_O3_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

/* Forward declarations for functions called before definition */
void _start(void);
int main(void);
void deregister_tm_clones(void);

/* CRT stub function _init removed by preprocessor */

// C++ runtime support functions
// Mangled names for operator new/delete on AARCH64 (LP64)
// _Znwm = operator new(unsigned long) - correct for 64-bit
void *_Znwm(unsigned long size)
{
    return malloc(size);
}

// _ZdlPv = operator delete(void*)
void _ZdlPv(void *ptr)
{
    free(ptr);
}

// _ZdaPv = operator delete[](void*)
void _ZdaPv(void *ptr)
{
    free(ptr);
}

// _Znwj = operator new(unsigned) for compatibility
void *_Znwj(unsigned size)
{
    return malloc(size);
}

// _Znwm = operator new(unsigned long, std::nothrow_t) nothrow variant
void *_ZnwmRKSt9nothrow_t(unsigned long size, const void *nothrow)
{
    (void)nothrow;
    return malloc(size);
}

// _Znam = operator new[](unsigned long)
void *_Znam(unsigned long size)
{
    return malloc(size);
}



// Standard operator new/delete with C++ linkage - removed (C syntax doesn't support 'operator new/delete')

// std::ios_base::Init::~Init()
void _ZNSt8ios_base4InitD1Ev(void)
{
}

// Missing global variable definitions
char __dollar_d_28[] = "%d\n";
unsigned int _ZN14LifecycleClass14instance_countE = 0;
unsigned long long g_411ff8 = 0;

// LifecycleClass dummy implementations to prevent undefined references
void _ZN14LifecycleClassC1Ev(void *this)
{
}

void _ZN14LifecycleClassD1Ev(void *this)
{
}

void _ZN14LifecycleClassD0Ev(void *this)
{
}
char g_411d58 = 0;
char g_411d80 = 0;
char __dollar_d_19 = 0;
unsigned long long __dso_handle = 0;
char g_4015fb[] = "%d\n";
char g_401617[] = "%d\n";
char g_401633[] = "%d\n";
char g_40164f[] = "%d\n";
char g_40166c[] = "%d\n";
char g_401688[] = "%d\n";
char g_4016a4[] = "%d\n";
char g_4016c0[] = "%d\n";
char g_4016dc[] = "%d\n";
char g_4016f9[] = "%d\n";
char g_401716[] = "%d\n";
char g_401734[] = "Testing C++ OO Features\n";

// Type info structures for RTTI
typedef struct __type_info {
    const char *name;
} __type_info_t;

// Actual type info objects (not pointers) - addresses can be taken
const __type_info_t _ZTI8RTTIBase = { .name = "8RTTIBase" };
const __type_info_t _ZTI12RTTIDerivedA = { .name = "12RTTIDerivedA" };
const __type_info_t _ZTIZ18test_cpp_exceptionvE16DerivedException = { .name = "DerivedException" };
const __type_info_t _ZTIi = { .name = "i" };



// Function: __dollar_x at 0x400d60

long long __dollar_x()
{
 return 0;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 return 0;
}


// Function: __dollar_x_18 at 0x400ec0
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    return 0;
}

int __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 // std::ios_base::Init::Init(&__dollar_d_19);
 v2 = __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, (void *)&__dollar_d_19, (void *)&__dso_handle);
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, (void *)&__dollar_d_19, (void *)&__dso_handle);
}


// Function: sub_400efc at 0x400efc
void sub_400efc(unsigned long a0)
{
 _start(); /* do not return */
}

void _start(void)
{
    main();
    exit(0);
}



// Function: sub_400f30 at 0x400f30
void sub_400f30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400f48 at 0x400f48
void sub_400f48()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones(void)
{
}

/* CRT stub function register_tm_clones removed by preprocessor */

void __do_global_dtors_aux(void)
{
}

// Function: sub_400fbc at 0x400fbc
void sub_400fbc()
{
 __do_global_dtors_aux();
 return;
}

void frame_dummy(void)
{
}

// Function: sub_401008 at 0x401008
long long sub_401008()
{
 frame_dummy();
 return 0;
}



// Function: _Z20test_cpp_member_funcv at 0x401014
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 result = 0;
 v0 = 10;
 strncpy((char *)&v1, "Test", 4);
 flag1 = 0;
 strlen((char *)((unsigned long)&v0 | 4));
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
struct Base {
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 // Virtual function call removed - invalid void expression
}


// Function: _Z21test_cpp_virtual_funcv at 0x401088
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401090
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401098
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4010a0
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4010a8
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x4010b0
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x4010b8
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x4010c0
void *__cxa_allocate_exception(unsigned long size)
{
    return malloc(size);
}

void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *))
{
    abort();
}

void __cxa_rethrow()
{
    abort();
}

void *__cxa_begin_catch(void *thrown_exception)
{
    return thrown_exception;
}

void __cxa_end_catch(void)
{
}

void _Unwind_Resume(void *exc)
{
    abort();
}

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(ptr); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4
void sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 == 1)
 {
 __cxa_begin_catch((void *)a0);
 __cxa_rethrow();
 }
 else if (a1 == 1)
 {
 __cxa_begin_catch((void *)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
}


// Function: sub_401128 at 0x401128
void sub_401128(unsigned long a0, unsigned int a1)
{
 __cxa_end_catch();
 if (a1 != 1)
 return;
 LABEL_0x401144:
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011bc
void test_cpp_smart_ptr()
{
 return;
}


// Global RTTI type structures
typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

// Function: _Z13test_cpp_rttiv at 0x4011c4
void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = _Znwj(8);
 *((char **)ptr) = &g_411d58;
 p = _Znwj(8);
 *(p) = (struct_0 *)&g_411d80;
 _ZdlPv(ptr);
 // Virtual function call removed - invalid void expression
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401284
void *__dynamic_cast(void *ptr, void *src_type, void *dst_type, int src2dst_offset)
{
    return ptr;
}
int arm64g_calculate_condition(int cc, unsigned long op1, unsigned long op2, unsigned long op3)
{
    return 0;
}

unsigned long CmpF(unsigned long a, unsigned long b)
{
    return 0;
}

void test_cpp_oo_features()
{
 void* ptr; // x19
 struct_0 **p; // x20
 unsigned int v10; // w22
 unsigned int v11; // w21
 unsigned int v0; // [bp-0x58]
 char v1[15]; // [bp-0x54]
 unsigned long long flag1; // [bp-0x45]
 char result; // [bp-0x35]
 char *v4; // [bp-0x30]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(g_401734);
 result = 0;
 v0 = 10;
 strncpy((char *)&v1, "Test", 4);
 flag1 = 0;
 printf(__dollar_d_28, strlen((char *)((unsigned long)&v0 | 4)) + 4700);
 printf(g_4015fb, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_401617, 42);
 printf(g_401633, 71);
 printf(g_40164f, 650);
 printf(g_40166c, 22);
 printf(g_401688, 39);
 printf(g_4016a4, 16);
 printf(g_4016c0, 85);
 printf(g_4016dc, 0);
 printf(g_4016f9, 703);
 ptr = _Znwj(8);
 *((char **)ptr) = &g_411d58;
 p = _Znwj(8);
 *(p) = (struct_0 *)&g_411d80;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v10 = 30;
 else
 v10 = 130;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v11 = v10;
 else
 v11 = v10 + 200;
 _ZdlPv(ptr);
 // Virtual function call removed - invalid void expression
 printf(g_401716, v11 + 14);
 return;
}


// Function: main at 0x401458
int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401470
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x40147c
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401488
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x40149c
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4014a4
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = *((unsigned int *)((char *)ptr + 40));
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
}


// Function: _ZNK9ContainerIiE3getEi at 0x4014c0
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4014e0
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4014e8
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4014f0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 union {
 double d;
 unsigned long ul;
 } v1; // d0

 v1.d = arg_0;
 idx = *((unsigned int *)((char *)ptr + 80));
 if (9 >= (unsigned int)idx)
 {
 *((unsigned long *)((char *)ptr + 8 * idx)) = v1.ul;
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)idx + 1;
 }
}


// Function: _ZNK9ContainerIdE3getEi at 0x40150c
int Container_double_get(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401528
int Container_double_getSize(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401530
void RTTIDerivedA_destructor(void* this)
{
 operator_delete(this);
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401534
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40153c
void RTTIBase_destructor(void* this)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401540
void RTTIDerivedB_destructor(void* this)
{
 operator_delete(this);
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401544
int RTTIDerivedB_getType(void* this)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


