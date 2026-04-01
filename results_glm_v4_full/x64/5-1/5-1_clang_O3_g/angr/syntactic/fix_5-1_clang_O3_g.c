// Angr Decompilation of 5-1_clang_O3_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <cxxabi.h>
#include <unistd.h>

/* Forward declarations for functions used before definition */
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(void*, int);
void test_cpp_virtual_func();
void test_cpp_multiple_inheritance();
void test_cpp_diamond_inheritance();
void test_cpp_operator_overload();
void test_cpp_template_func();
void test_cpp_template_class();
void test_cpp_lambda();
void test_cpp_exception();
void test_cpp_smart_ptr();
void test_cpp_rtti();
void test_cpp_oo_features();
unsigned int main();
int template_max_int(int, int);
double template_max_double(double, double);
void template_swap_int(int*, int*);
int Container_int_Constructor(void*);
void Container_int_push(void*, int);
int Container_int_get(void*, int);
int Container_int_getSize(void*);
int Container_double_Constructor(void*);
void Container_double_push(void*, double);
int Container_double_get(void*, int);
int Container_double_getSize(void*);
int RTTIDerivedA_destructor(void*);
int RTTIDerivedA_getType(void*);
int RTTIBase_destructor(void*);
int RTTIDerivedB_destructor(void*);
int RTTIDerivedB_getType(void*);

/* Forward declaration for struct_0 */
struct struct_0;

struct struct_0_vtable {
    int (*field_8)(struct struct_0*);
};

/* C++ runtime support functions */
void* operator_new(unsigned long size);
void operator_delete(void* ptr);

void* operator_new(unsigned long size) {
    return malloc(size);
}

void operator_delete(void* ptr) {
    free(ptr);
}

/* CRT stub function declarations */
void _start();
void deregister_tm_clones();
void register_tm_clones();
void __do_global_dtors_aux();
void frame_dummy();

/* C++ runtime support functions */
typedef struct __type_info __type_info_t;

struct __type_info {
    const char* name;
};

void* __dynamic_cast(void* src_ptr, const void* src_type, const void* dst_type, long src2dst_offset);
void __cxa_pure_virtual();
void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
void* __cxa_allocate_exception(unsigned long size);
void __cxa_throw(void* exc, const void* type, void* dest);
void* __cxa_begin_catch(void* exc);
void __cxa_end_catch();
void __cxa_rethrow();
void _Unwind_Resume(void* exc) __attribute__((noreturn));

/* Stub implementations for C++ runtime functions */
void* __dynamic_cast(void* src_ptr, const void* src_type, const void* dst_type, long src2dst_offset) {
    return src_ptr;
}

void __cxa_pure_virtual() {
    abort();
}

void __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) {
}

void* __cxa_allocate_exception(unsigned long size) {
    return malloc(size);
}

void __cxa_throw(void* exc, void* type, void* dest) {
    _Unwind_Resume(exc);
}

void* __cxa_begin_catch(void* exc) {
    return exc;
}

void __cxa_end_catch() {
}

void __cxa_rethrow() {
    __cxa_throw(NULL, NULL, NULL);
}

void _Unwind_Resume(void* exc) {
    abort();
}

 struct struct_0 {
    struct struct_0_vtable *vtable;
};

extern void (*g_403fe8)();
extern void* g_403d78;
extern void* g_403da0;

/* Define global variables */
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;
void (*g_403fe8)() = NULL;
void* g_403d78 = NULL;
void* g_403da0 = NULL;

unsigned long long * _init()
{
 unsigned long long *v1; // rax
 typedef unsigned long long *(*init_func_t)();

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = ((init_func_t)g_403fe8)();
 return v1;
}


// Function: sub_401020 at 0x401020

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return 0;
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
extern void _ZNSt8ios_base4InitD1Ev(void);
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

/* Define runtime globals */
char _ZStL8__ioinit;
unsigned long long __dso_handle = 0;

void _GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init::Init(&_ZStL8__ioinit); */
 __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
}


// Function: sub_401147 at 0x401147
void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
}


// Function: sub_401176 at 0x401176
void sub_401176()
{
 deregister_tm_clones();
 return;
}

void deregister_tm_clones()
{
}

// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 register_tm_clones();
 return;
}

void register_tm_clones()
{
}

// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
 __do_global_dtors_aux();
 return;
}

void __do_global_dtors_aux()
{
}

// Function: sub_401225 at 0x401225
void sub_401225()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 frame_dummy();
 return;
}

void frame_dummy()
{
}



// Function: sub_401239 at 0x401239
void sub_401239()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401240
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(&v1);
 return;
}


// Function: sub_40127c at 0x40127c
void sub_40127c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401280
void test_cpp_constructor()
{
 return;
}


// Function: sub_401292 at 0x401292
void sub_401292(unsigned long a0)
{
 call_virtual_func((void*)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
void call_virtual_func(void* arg_0, int arg_1)
{
 ((void (*)(void*))(*(long long*)arg_0))(arg_0);
}


// Function: sub_4012a8 at 0x4012a8
void sub_4012a8()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012b0
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012c0
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4012c6 at 0x4012c6
void sub_4012c6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012d0
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012e0
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_4012e6 at 0x4012e6
void sub_4012e6()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x4012f0
void test_cpp_template_func()
{
 return;
}


// Function: sub_4012f6 at 0x4012f6
void sub_4012f6()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401300
void test_cpp_template_class()
{
 return;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401310
void test_cpp_lambda()
{
 return;
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401320
extern void* _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14
 unsigned int v3; // edx
 unsigned long long v4; // rdi
 unsigned long long v5; // rsi
 unsigned long long v6; // rdx
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 ptr = __cxa_allocate_exception(4);
 *ptr = 42;
 __cxa_throw(ptr, _ZTIi, 0); /* does not return */
}


// Function: sub_40134b at 0x40134b
extern void* _ZTIZ18test_cpp_exceptionvE16DerivedException;

/* Define type info objects */
struct __type_info _ZTIi = { .name = "i" };
struct __type_info _ZTIZ18test_cpp_exceptionvE16DerivedException = { .name = "Z18test_cpp_exceptionvE16DerivedException" };
struct __type_info _ZTI12RTTIDerivedA = { .name = "12RTTIDerivedA" };
struct __type_info _ZTI8RTTIBase = { .name = "8RTTIBase" };

long long sub_40134b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v6; // rax

 result = a2;
 v6 = a0;  /* exception pointer passed as first parameter */
 if (result != 1)
 {
 __cxa_begin_catch(v6);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), _ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch(v6);
 __cxa_rethrow();
 return 0;
}


// Function: sub_401368 at 0x401368
void sub_401368(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0

void test_cpp_rtti()
{
 void* ptr; // r14
 void* p_raw; // r12
 struct struct_0** p;

 ptr = operator_new(8);
 *((char **)ptr) = &g_403d78;
 p_raw = operator_new(8);
 p = (struct struct_0**)p_raw;
 *(p) = (struct struct_0 *)g_403da0;
 operator_delete(ptr);
 (*p)->vtable->field_8(*p);
 return;
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0

extern unsigned int _ZN14LifecycleClass14instance_countE;
extern void* _ZTI12RTTIDerivedA;
extern void* _ZTI8RTTIBase;
extern const char* g_40207d;
extern const char* g_40209b;
extern const char* g_4020b7;
extern const char* g_4020d3;
extern const char* g_4020ef;
extern const char* g_40210c;
extern const char* g_402128;
extern const char* g_402144;
extern const char* g_402160;
extern const char* g_40217c;
extern const char* g_402199;
extern const char* g_4021b6;
extern const char* g_4021d4;

/* Define string constants and global variables */
unsigned int _ZN14LifecycleClass14instance_countE = 0;
const char* g_40207d = "%d\n";
const char* g_40209b = "%d\n";
const char* g_4020b7 = "%d\n";
const char* g_4020d3 = "%d\n";
const char* g_4020ef = "%d\n";
const char* g_40210c = "%d\n";
const char* g_402128 = "%d\n";
const char* g_402144 = "%d\n";
const char* g_402160 = "%d\n";
const char* g_40217c = "%p\n";
const char* g_402199 = "%d\n";
const char* g_4021b6 = "%d\n";
const char* g_4021d4 = "Testing C++ features\n";

void test_cpp_oo_features()
{
 void* ptr; // r14
 void* p_raw; // r12
 struct struct_0 **p;
 unsigned int v10; // ebx
 unsigned int v11; // ebp
 unsigned int v0; // [bp-0x50]
 char v1; // [bp-0x4c]
 unsigned long long flag1; // [bp-0x3d]
 char result; // [bp-0x2d]

 puts(g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(g_40207d, (unsigned int)strlen(&v1) + 4700);
 printf(g_40209b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_4020b7, 42);
 printf(g_4020d3, 71);
 printf(g_4020ef, 650);
 printf(g_40210c, 22);
 printf(g_402128, 39);
 printf(g_402144, 16);
 printf(g_402160, 85);
 printf(g_40217c, (unsigned long long)(uintptr_t)test_cpp_exception & 4294967295);
 printf(g_402199, 703);
 ptr = operator_new(8);
 *((char **)ptr) = &g_403d78;
 p_raw = operator_new(8);
 p = (struct struct_0**)p_raw;
 *(p) = (struct struct_0 *)g_403da0;
 v10 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? v10 : v10 + 200);
 operator_delete(ptr);
 (*p)->vtable->field_8(*p);
 printf(g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
void sub_401673()
{
 main();
 return;
}


// Function: main at 0x401680
int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40168a at 0x40168a
void sub_40168a(unsigned long a0, unsigned long a1)
{
 template_max_int((int)a0, (int)a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401698 at 0x401698
void sub_401698(unsigned long a0, unsigned long a1)
{
 template_max_double(*(double*)&a0, *(double*)&a1);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
double template_max_double(double arg_0, double arg_1)
{
 return (arg_0 >= arg_1) ? arg_0 : arg_1;
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(unsigned long a0, unsigned long a1)
{
 template_swap_int((int*)a0, (int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *ptr;
 *ptr = *p;
 *p = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
void sub_4016b9(unsigned long a0)
{
 Container_int_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
int Container_int_Constructor(void* ptr)
{
 *((unsigned int*)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(unsigned long a0)
{
 Container_int_push((void*)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int*)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int*)((char*)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(unsigned long a0, unsigned long a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: sub_401701 at 0x401701
void sub_401701(unsigned long a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 Container_double_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
int Container_double_Constructor(void* ptr)
{
 *((unsigned int*)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 Container_double_push((void*)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int*)((char*)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int*)((char*)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
void sub_401746(unsigned long a0, unsigned long a1)
{
 Container_double_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
int Container_double_get(void* this, int arg_0)
{
 return 0;
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
int Container_double_getSize(void* this)
{
 return 0;
}


// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
int RTTIDerivedA_destructor(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: sub_401785 at 0x401785
void sub_401785(unsigned long a0)
{
 RTTIDerivedA_getType((void*)a0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
int RTTIDerivedB_destructor(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5(unsigned long a0)
{
 RTTIDerivedB_getType((void*)a0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
int RTTIDerivedB_getType(void* this)
{
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


