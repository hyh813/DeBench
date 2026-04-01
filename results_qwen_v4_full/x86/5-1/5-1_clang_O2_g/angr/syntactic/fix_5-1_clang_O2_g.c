// Angr Decompilation of 5-1_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/* Additional function declarations */
extern int puts(const char* s);
extern int printf(const char* format, ...);
extern void* memset(void* s, int c, size_t n);
extern char* strncpy(char* dest, const char* src, size_t n);
extern size_t strlen(const char* s);

/* C++ runtime function stub implementations */
void* operator_new(size_t size) { return malloc(size); }
void operator_delete(void* ptr) { free(ptr); }
void* __cxa_allocate_exception(size_t size) { return malloc(size); }
void __cxa_throw(void* exc, void* type_info, void* dest) { }
void* __cxa_begin_catch(void* exc) { return exc; }
void __cxa_end_catch(void* exc) { }
void __cxa_rethrow(void* exc) { }
void _Unwind_Resume(unsigned int exc) { }
int __cxa_atexit(void* func, void* arg, void* dso) { return 0; }
void __do_global_ctors_aux() { }
void __do_global_dtors_aux() { }
void frame_dummy() { }
void deregister_tm_clones() { }
void register_tm_clones() { }
void _start() { }

/* CRT stub function _init removed by preprocessor */

// Base struct definition
typedef struct Base {
    void* vtable;
} Base;

// struct_0 definition
typedef struct struct_0 {
    void* vtable;
    void (*field_4)(struct_0* this);
} struct_0;

struct_0 *g_403ff4 = 0;

int _init()
{
 if (g_403ff4)
 ((void(*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _GLOBAL__sub_I_5_1_cpp at 0x401140
void* _ZNSt8ios_base4InitD1Ev = 0;
void* _ZStL8__ioinit = 0;
unsigned int __dso_handle = 0;

int _GLOBAL__sub_I_5_1_cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return __cxa_atexit((void(*)())_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_40117b at 0x40117b
void sub_40117b()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
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



/* CRT stub function deregister_tm_clones removed by preprocessor */



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



/* CRT stub function register_tm_clones removed by preprocessor */


// Function: sub_401247 at 0x401247
void sub_401247()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */


// Function: sub_4012da at 0x4012da
void sub_4012da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4012e9
unsigned int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x4012ed
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function declarations
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(Base *arg_0, int arg_1);
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
int template_max_int(int arg_0, int arg_1);
void template_swap_int(int *ptr, int *p);
int Container_int_Container(void* ptr);
void Container_int_push(void* ptr, int arg_0);
int Container_int_get(void* this, int arg_0);
int Container_int_getSize(void* this);
int Container_double_Container(void* ptr);
void Container_double_push(void* ptr);
double Container_double_get(void* this, int arg_0);
int Container_double_getSize(void* this);
int RTTIDerivedA_RTTIDerivedA(void* this);
int RTTIDerivedA_getType(void* this);
int RTTIBase_RTTIBase(void* this);
int RTTIDerivedB_RTTIDerivedB(void* this);
int RTTIDerivedB_getType(void* this);
int main();

// Function: sub_4012f1 at 0x4012f1
void sub_4012f1()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401300
void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[20]; // [bp-0x28]
 char v2[20]; // [bp-0x24]
 unsigned int v3; // [bp-0x10]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 result = 0;
 v3 = 0;
 memset(v2, 0, 20);
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
 call_virtual_func(0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013a0
void call_virtual_func(Base *arg_0, int arg_1)
{
 void (**vtable)(Base*, int) = (void (**)(Base*, int))arg_0->vtable;
 vtable[0](arg_0, arg_1);
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
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401440
void* _ZTIi = 0;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 v2 = 0;
 v3 = 0;
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch((void*)v2);
 __cxa_end_catch((void*)v2);
 return;
}


// Function: sub_401481 at 0x401481
int sub_401481()
{
 unsigned int result; // edx
 unsigned int v3; // eax
 unsigned int v5; // ebx

 result = 0;
 v3 = 0;
 v5 = 0;
 if (result != 1)
 {
 __cxa_begin_catch((void*)v3);
 __cxa_end_catch((void*)v3);
 __cxa_throw(__cxa_allocate_exception(1), (void*)(v5 - 360), 0);
 }
 __cxa_begin_catch((void*)v3);
 __cxa_rethrow((void*)v3);
 return 0;
}


// Function: sub_40149f at 0x40149f
void sub_40149f()
{
 __cxa_end_catch(0);
}


// Function: sub_401526 at 0x401526
void sub_401526()
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
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401540

void* g_403ecc = 0;
struct_0* g_403ee0 = 0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x14]

 ptr = operator_new(4);
 *((void **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator_new(4);
 *(p) = &g_403ee0;
 operator_delete(v0);
 (*(struct_0**)p)->field_4((*(struct_0**)p));
 return;
}


// Function: sub_4015f3 at 0x4015f3
int sub_4015f3()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401600

char* g_402081 = "";
char* g_40209f = "";
char* g_4020bb = "";
char* g_4020d7 = "";
char* g_4020f3 = "";
char* g_402110 = "";
char* g_40212c = "";
char* g_402148 = "";
char* g_402164 = "";
char* g_402180 = "";
char* g_40219d = "";
char* g_4021ba = "";
char* g_4021d8 = "";

void test_cpp_oo_features()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 char v2[20]; // [bp-0x30]
 char v3[20]; // [bp-0x2c]
 unsigned int v4; // [bp-0x18]
 unsigned int result; // [bp-0x15]
 char flag1; // [bp-0x11]

 puts(g_4021d8);
 result = 0;
 v4 = 0;
 memset(v3, 0, 20);
 strncpy(v2, "Test", 4);
 flag1 = 0;
 v1 = 10;
 strlen(v2);
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
 ptr = operator_new(4);
 *((void **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator_new(4);
 *(p) = &g_403ee0;
 operator_delete(v0);
 (*(struct_0**)p)->field_4((*(struct_0**)p));
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
 template_max_int(0, 0);
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
 return;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401840
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
 Container_int_Container((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401880
int Container_int_Container(void* ptr)
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

 index = (int)((char*)ptr)[40];
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
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: sub_4018c7 at 0x4018c7
void sub_4018c7(unsigned int a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4018d0
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: sub_4018d8 at 0x4018d8
void sub_4018d8(unsigned int a0)
{
 Container_double_Container((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4018e0
int Container_double_Container(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: sub_4018ec at 0x4018ec
void sub_4018ec(unsigned int a0)
{
 Container_double_push((void*)a0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4018f0
void Container_double_push(void* ptr)
{
 unsigned int idx; // ecx

 idx = (int)((char*)ptr)[80];
 if (idx <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = 0.0;
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
double Container_double_get(void* this, int arg_0)
{
 if (arg_0 >= 0)
 {
 }
 return 0.0;
}


// Function: sub_401929 at 0x401929
void sub_401929(unsigned int a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401930
int Container_double_getSize(void* this)
{
 return 0;
}


// Function: sub_401938 at 0x401938
void sub_401938()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401940
int RTTIDerivedA_RTTIDerivedA(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: sub_401961 at 0x401961
void sub_401961()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401970
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: sub_401976 at 0x401976
void sub_401976()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401980
int RTTIBase_RTTIBase(void* this)
{
 return 0;
}


// Function: sub_401981 at 0x401981
int sub_401981()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401990
int RTTIDerivedB_RTTIDerivedB(void* this)
{
 operator_delete(this);
 return 0;
}


// Function: sub_4019b1 at 0x4019b1
void sub_4019b1()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019c0
int RTTIDerivedB_getType(void* this)
{
 return 0;
}


// Function: sub_4019c6 at 0x4019c6
void sub_4019c6()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */


// Function: sub_401a12 at 0x401a12
void sub_401a12()
{
}



/* CRT stub function _fini removed by preprocessor */


