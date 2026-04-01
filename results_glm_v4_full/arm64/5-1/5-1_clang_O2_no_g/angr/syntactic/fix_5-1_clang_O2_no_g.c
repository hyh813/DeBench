// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

/* C++ type_info structure definition (C compatible) */
struct type_info {
    const char *__type_name;
};

/* Function declarations for implicit functions */
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern void abort(void);

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* ARM64 helper functions for floating-point comparison */
unsigned long arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep);
unsigned long CmpF(unsigned long arg1, unsigned long arg2);

/* C++ compatibility declarations */
extern void* __cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
extern void __cxa_end_catch(void);
extern void *__cxa_begin_catch(void *exception_obj);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void);
extern void *__dynamic_cast(void *src_ptr, void *from_type, void *to_type, int src2dst_offset);

/* C++ new/delete operators - C compatible wrappers */
void *operator_new(size_t size);
void operator_delete(void *ptr);

/* ARM64 helper functions for floating-point comparison */
/* ARM64 helper functions for floating-point comparison - implementations below */

/* CRT stub function declarations */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Stub for C++ ios_base::Init */
struct ios_base_init {
    char padding[16];
};

void ios_base_Init_Init(struct ios_base_init *this);
void ios_base_Init_D1(struct ios_base_init *this);
void _ZNSt8ios_base4InitD1Ev(void);

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400d60
unsigned long long g_411ff8 = 0;

long long __dollar_x()
{
 return *(long long*)g_411ff8;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 return puts("");
}


// Function: __dollar_x_18 at 0x400ec0
struct ios_base_init __dollar_d_19;
unsigned long long __dso_handle;

void __dollar_x_18()
{
 ios_base_Init_Init(&__dollar_d_19);
 __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
}


// Function: sub_400efc at 0x400efc
void sub_400efc(unsigned long a0)
{
 abort(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



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



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400fbc at 0x400fbc
void sub_400fbc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401008 at 0x401008
long long sub_401008()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



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
 (void)strlen((char *)&v0 + 4);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
struct Base {
    char padding[8];
    void **vtable;
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 ((void (*)(struct Base *, int))(*(void **)arg_0))(arg_0, arg_1);
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
char _ZTIi[8];

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4
char _ZTIZ18test_cpp_exceptionvE16DerivedException[8];

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 (void)__cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
 return 0;
}


// Function: sub_40111c at 0x40111c
void sub_40111c(unsigned long a0, unsigned long a1)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011b0
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011b8
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

/* Global RTTI type info objects */
char g_411d58[8];
char g_411d80[8];

void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operator_new(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)operator_new(8);
 *p = (struct_0 *)&g_411d80;
 operator_delete(ptr);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278
char __dollar_d_28[] = "%d\n";
unsigned int _ZN14LifecycleClass14instance_countE = 0;
char _ZTI12RTTIDerivedA[8];
char _ZTI8RTTIBase[8];
char g_4015ef[] = "%d\n";
char g_40160b[] = "%d\n";
char g_401627[] = "%d\n";
char g_401643[] = "%d\n";
char g_401660[] = "%d\n";
char g_40167c[] = "%d\n";
char g_401698[] = "%d\n";
char g_4016b4[] = "%d\n";
char g_4016d0[] = "%d\n";
char g_4016ed[] = "%d\n";
char g_40170a[] = "%d\n";
char g_401728[] = "Testing C++ OO Features\n";

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
 puts(g_401728);
 result = 0;
 v0 = 10;
 strncpy((char *)&v1, "Test", 4);
 flag1 = 0;
 v10 = printf(__dollar_d_28, strlen((char *)&v0) + 4 + 4700);
 v10 = printf(g_4015ef, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 v10 = printf(g_40160b, 42);
 v10 = printf(g_401627, 71);
 v10 = printf(g_401643, 650);
 v10 = printf(g_401660, 22);
 v10 = printf(g_40167c, 39);
 v10 = printf(g_401698, 16);
 v10 = printf(g_4016b4, 85);
 v10 = printf(g_4016d0, 0);
 v10 = printf(g_4016ed, 703);
 printf(g_40160b, 42);
 printf(g_401627, 71);
 printf(g_401643, 650);
 printf(g_401660, 22);
 printf(g_40167c, 39);
 printf(g_401698, 16);
 printf(g_4016b4, 85);
 printf(g_4016d0, 0);
 printf(g_4016ed, 703);
 ptr = operator_new(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)operator_new(8);
 *p = (struct_0 *)g_411d80;
 if (!__dynamic_cast(ptr, _ZTI8RTTIBase, _ZTI12RTTIDerivedA, 0))
 v10 = 30;
 else
 v10 = 130;
 if (!__dynamic_cast(ptr, _ZTI8RTTIBase, _ZTI12RTTIDerivedA, 0))
 v11 = v10;
 else
 v11 = v10 + 200;
 operator_delete(ptr);
 printf(g_40170a, v11 + 14);
 return;
}


// Function: main at 0x40144c
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401464
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401470
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 v0 = *(unsigned long*)&arg_0;
 v1 = *(unsigned long*)&arg_1;
 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 v3 = v0;
 else
 v3 = v1;
 return *(double*)&v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40147c
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401490
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401498
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = (int)((char*)ptr)[40];
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)&((char*)ptr)[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4014b4
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4014d4
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4014dc
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4014e4
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8

 idx = (int)((char*)ptr)[80];
 if (9 >= (unsigned int)idx)
 {
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 *((unsigned int *)&((char*)ptr)[80]) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401500
int Container_double_get(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40151c
int Container_double_getSize(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401524
int RTTIDerivedA_destructor(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401528
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401530
void RTTIBase_destructor(void* this)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401534
int RTTIDerivedB_destructor(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401538
int RTTIDerivedB_getType(void* this)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


/* Stub implementations for undefined functions */

void operator_delete(void *ptr)
{
    free(ptr);
}

void *operator_new(size_t size)
{
    return malloc(size);
}

void *__dynamic_cast(void *src_ptr, void *from_type, void *to_type, int src2dst_offset)
{
    /* Stub implementation for dynamic_cast */
    (void)from_type;
    (void)to_type;
    (void)src2dst_offset;
    return src_ptr;
}

unsigned long arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
    return 0;
}

unsigned long CmpF(unsigned long arg1, unsigned long arg2)
{
    return 0;
}

void deregister_tm_clones(void)
{
}

void __do_global_dtors_aux(void)
{
}

void frame_dummy(void)
{
}

void ios_base_Init_Init(struct ios_base_init *this)
{
}

void ios_base_Init_D1(struct ios_base_init *this)
{
}

void _ZNSt8ios_base4InitD1Ev(void)
{
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub implementation - does nothing */
    (void)func;
    (void)arg;
    (void)dso_handle;
    return 0;
}

