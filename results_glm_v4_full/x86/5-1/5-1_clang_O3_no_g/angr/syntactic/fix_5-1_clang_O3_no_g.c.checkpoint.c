// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: X86

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* C++ ABI function declarations */
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void __cxa_begin_catch(void*);
void __cxa_end_catch(void);
void __cxa_rethrow(void*);
void _Unwind_Resume(void*);
int __cxa_atexit(void (*)(void*), void*, void*);
void* operator_new(size_t);
void operator_delete(void*);

/* C++ ABI function stub implementations */
void* __cxa_allocate_exception(size_t size)
{
    return malloc(size);
}

void __cxa_throw(void* obj, void* tinfo, void* dest)
{
    /* Stub - should not return in real C++ */
    exit(1);
}

void __cxa_begin_catch(void* exc_ptr)
{
    /* Stub implementation */
}

void __cxa_end_catch(void)
{
    /* Stub implementation */
}

void __cxa_rethrow(void* exc_ptr)
{
    /* Stub implementation */
}

void _Unwind_Resume(void* exc_ptr)
{
    /* Stub - should not return in real C++ */
    exit(1);
}

int __cxa_atexit(void (*func)(void*), void* obj, void* dso)
{
    /* Stub implementation */
    return 0;
}

void* operator_new(size_t size)
{
    return malloc(size);
}

void operator_delete(void* ptr)
{
    free(ptr);
}

/* CRT/compiler stub declarations */
void frame_dummy(void);
unsigned int register_tm_clones(void);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_bx(void);
int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int);
void _start(void);

/* Test function declarations */
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void call_virtual_func(void*, int);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void test_cpp_smart_ptr(void);
void test_cpp_rtti(void);
void test_cpp_oo_features(void);
int main(void);
int _init(void);
double template_max_double(double, double);
int template_max_int(int, int);
void template_swap_int(int*, int*);

/* Forward declarations and type definitions */
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[4];
 struct struct_1 *field_4;
} struct_0;

/* Container template function declarations */
int Container_int_Constructor(void*);
void Container_int_push(void*, int);
void Container_int_get(void*, int);
void Container_int_getSize(void*);
int Container_double_Constructor(void*);
void Container_double_push(void*, double);
void Container_double_get(void*, int);
void Container_double_getSize(void*);

/* RTTI function declarations */
void RTTIDerivedA_destructor(void*);
void RTTIDerivedA_getType(void*);
void RTTIBase_destructor(void*);
void RTTIDerivedB_destructor(void*);
void RTTIDerivedB_getType(void*);

/* Global variable definition */
void (*g_403ff4)(void) = NULL;

int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 /* Indirect jump - stub implementation */
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 /* Indirect jump - stub implementation */
 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
// C++ initialization - removed for C compilation
int _GLOBAL__sub_I_5_1_cpp()
{
 return 0;
}


// Function: sub_40117b at 0x40117b
void sub_40117b()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */

void _start(void)
{
    return;
}



// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198827 */
}


// Function: sub_4011ac at 0x4011ac
void sub_4011ac()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011b0
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011b4 at 0x4011b4
void sub_4011b4()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones(void)
{
    return;
}



unsigned int register_tm_clones(void)
{
    return 0;
}



// Function: sub_4011f3 at 0x4011f3
void sub_4011f3()
{
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 register_tm_clones();
 return;
}


// Function: sub_401247 at 0x401247
void sub_401247()
{
 __do_global_dtors_aux();
 return;
}



void __do_global_dtors_aux(void)
{
 return;
}


// Function: sub_4012da at 0x4012da
void sub_4012da()
{
 frame_dummy();
 return;
}



void frame_dummy(void)
{
    return;
}



// Function: __x86_get_pc_thunk_dx at 0x4012e9
int __x86_get_pc_thunk_dx(void)
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x4012ed
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 v0 = 0;
 return v0;
}


// Function: sub_4012f1 at 0x4012f1
int sub_4012f1()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401300
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int v3; // [bp-0x10]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 result = 0;
 v3 = 0;
 memset(&v2, 0, 20);
 strncpy(v1, "Test", 4);
 flag1 = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: sub_401373 at 0x401373
void sub_401373()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401380
void test_cpp_constructor()
{
 return;
}


// Function: sub_40139e at 0x40139e
int sub_40139e()
{
 call_virtual_func(NULL, 0);
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013a0
// C++ virtual function - removed for C compilation
void call_virtual_func(void *arg_0, int arg_1)
{
 return;
}


// Function: sub_4013c5 at 0x4013c5
void sub_4013c5()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013d0
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013e0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4013f0
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401400
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401406 at 0x401406
void sub_401406()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401410
void test_cpp_template_func()
{
 return;
}


// Function: sub_401416 at 0x401416
void sub_401416()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401426 at 0x401426
void sub_401426()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401436 at 0x401436
int sub_401436()
{
 test_cpp_exception();
 return 0;
}


/* C++ RTTI type_info structure */
typedef struct { void *vtable; char name[8]; } type_info;
type_info _ZTIi = {0, "int"};

// Function: _Z18test_cpp_exceptionv at 0x401440
void test_cpp_exception()
{
 unsigned int *ptr; // eax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *ptr = 42;
 __cxa_throw(ptr, (void*)&_ZTIi, 0);
 return;
}


// Function: sub_401481 at 0x401481
int sub_401481()
{
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned int v5; // ebx

 result = 0;
 v2 = 0;
 v5 = 0;
 if (result == 1)
 {
 __cxa_begin_catch((void*)v2);
 __cxa_rethrow((void*)v2);
 }
 else if (result == 1)
 {
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 360), 0);
 }
 return 0;
}


// Function: sub_4014a8 at 0x4014a8
int sub_4014a8()
{
 unsigned int result; // edx

 result = 0;
 __cxa_end_catch();
 if (result == 1)
 return 0;
 else
 return 0;
}


// Function: sub_40152f at 0x40152f
void sub_40152f()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401530
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401536 at 0x401536
int sub_401536()
{
 test_cpp_rtti();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x401540
// C++ RTTI - removed for C compilation
void test_cpp_rtti()
{
 return;
}


// Function: sub_4015f3 at 0x4015f3
int sub_4015f3()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401600

const char *g_402081 = "g_402081";
const char *g_40209f = "g_40209f";
const char *g_4020bb = "g_4020bb";
const char *g_4020d7 = "g_4020d7";
const char *g_4020f3 = "g_4020f3";
const char *g_402110 = "g_402110";
const char *g_40212c = "g_40212c";
const char *g_402148 = "g_402148";
const char *g_402164 = "g_402164";
const char *g_402180 = "g_402180";
const char *g_40219d = "g_40219d";
const char *g_4021ba = "g_4021ba";
const char *g_4021d8 = "g_4021d8";
const char *g_403ecc = "g_403ecc";
const char *g_403ee0 = "g_403ee0";

void test_cpp_oo_features()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]
 char v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x18]
 unsigned int result; // [bp-0x15]
 char flag1; // [bp-0x11]

 puts(g_4021d8);
 result = 0;
 v4 = 0;
 memset(&v3, 0, 20);
 strncpy(&v2, "Test", 4);
 flag1 = 0;
 v1 = 10;
 strlen(&v2);
 printf(g_402081);
 printf(g_40209f);
 printf(g_4020bb);
 printf(g_4020d7);
 printf(g_4020f3);
 printf(g_402110);
 printf(g_40212c);
 printf(g_402148);
 printf(g_402164);
 test_cpp_exception();
 printf(g_402180);
 printf(g_40219d);
 ptr = malloc(sizeof(char*));
 *((const char **)ptr) = g_403ecc;
 v0 = ptr;
 p = (struct_0 **)malloc(sizeof(struct_0 *));
 *(p) = (struct_0 *)g_403ee0;
 free(v0);
 free(p);
 printf(g_4021ba);
 return;
}


// Function: sub_40180f at 0x40180f
int sub_40180f()
{
 main();
 return 0;
}


// Function: main at 0x401810
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40182c at 0x40182c
void sub_40182c(unsigned int a0, unsigned int a1)
{
 template_max_int(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401830
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: sub_40183e at 0x40183e
void sub_40183e(unsigned int a0)
{
 /* template_max<double>(); */
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401840
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}

// Function: sub_401851 at 0x401851
void sub_401851(unsigned int a0, unsigned int a1)
{
 template_swap_int((int*)a0, (int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401860
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: sub_401873 at 0x401873
void sub_401873(unsigned int a0)
{
 Container_int_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401880
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: sub_40188c at 0x40188c
void sub_40188c(unsigned int a0)
{
 Container_int_push((void*)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401890
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4018ac at 0x4018ac
void sub_4018ac(unsigned int a0, unsigned int a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4018b0
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_4018c7 at 0x4018c7
void sub_4018c7(unsigned int a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4018d0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: sub_4018d8 at 0x4018d8
void sub_4018d8(unsigned int a0)
{
 Container_double_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4018e0
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: sub_4018ec at 0x4018ec
void sub_4018ec(unsigned int a0)
{
 Container_double_push((void*)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4018f0
void Container_double_push(void* ptr, double arg_0)
{
 unsigned int idx; // ecx

 idx = *((unsigned int *)((char*)ptr + 80));
 if (idx <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 }
 return;
}


// Function: sub_40190e at 0x40190e
void sub_40190e(unsigned int a0, unsigned int a1)
{
 Container_double_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401910
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 >= 0 && *((int *)((char*)this_ptr + 80)) > arg_0)
 {
 /* access element */
 }
 return;
}


// Function: sub_401929 at 0x401929
void sub_401929(unsigned int a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401930
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401938 at 0x401938
int sub_401938()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401940
// C++ destructor - removed for C compilation
void RTTIDerivedA_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
}


// Function: sub_401961 at 0x401961
void sub_401961()
{
 RTTIDerivedA_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401970
// C++ member function - removed for C compilation
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: sub_401976 at 0x401976
int sub_401976()
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401980
// C++ destructor - removed for C compilation
void RTTIBase_destructor(void* this_ptr)
{
 return;
}


// Function: sub_401981 at 0x401981
int sub_401981()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401990
// C++ destructor - removed for C compilation
void RTTIDerivedB_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
}


// Function: sub_4019b1 at 0x4019b1
void sub_4019b1()
{
 RTTIDerivedB_getType(NULL);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019c0
// C++ member function - removed for C compilation
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}


// Function: sub_4019c6 at 0x4019c6
int sub_4019c6()
{
 __do_global_ctors_aux();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux(void)
{
 return 0;
}


// Function: sub_401a12 at 0x401a12
int sub_401a12()
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


