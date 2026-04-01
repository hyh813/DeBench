// Angr Decompilation of 5-1_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <new>

/* CRT stub function _init removed by preprocessor */
struct dummy_struct { char padding_0[100]; };

/* External declarations */
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern void __do_global_dtors_aux(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void *_ZNSt8ios_base4InitD1Ev;
extern void *_ZStL8__ioinit;
extern void *__dso_handle;
extern int __cxa_atexit(void *, void *, void *);
extern void _start(void);
extern unsigned int __x86.get_pc_thunk_di(unsigned int);
extern unsigned int __x86.get_pc_thunk_dx(void);

/* Standard C++ runtime functions */
extern void *operator new(unsigned int);
extern void operator delete(void *);

/* Test function declarations */
void test_cpp_member_func();
void test_cpp_constructor();
void call_virtual_func(struct Base *arg_0, int arg_1);
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

/* Template function declarations */
void template_swap_int(int *ptr, int *p);
int template_max_int(int arg_0, int arg_1);
extern void *__cxa_allocate_exception(unsigned int);
extern void __cxa_throw(void *, void *, void *);
extern void __cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *);

int _init()
{
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
void *sub_401030()
{
 return 0;
}


// Function: sub_401130 at 0x401130
void sub_401130()
{
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I_5_1.cpp()
{
 std::ios_base::Init::Init(&_ZStL8__ioinit);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
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
 // No-op - was an unsupported instruction
 return;
}


// Function: sub_4011ac at 0x4011ac
void sub_4011ac()
{
}


// Function: __x86.get_pc_thunk_bx at 0x4011b0
unsigned int __x86.get_pc_thunk_bx()
{
 return 0;
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

// Generic structure used for global object tables
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[400];
 struct struct_1 *field_4;
} struct_0;

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401247 at 0x401247
unsigned int * sub_401247()
{
 return __do_global_dtors_aux();
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86.get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_2d8f[19];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[96])
 return v5;
 if (*((int *)&ptr->padding_0[24]))
 sub_401130(*((int *)&ptr->padding_0[76]));
 v10 = &ptr->padding_0[376];
 v11 = *((int *)&ptr->padding_0[100]);
 i = (&ptr->padding_0[372] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[100]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[100]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[100]);
 } while (*((int *)&ptr->padding_0[100]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[96] = 1;
 return v14;
}


// Function: sub_4012da at 0x4012da
void sub_4012da()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x4012e9
unsigned int __x86.get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86.get_pc_thunk_di at 0x4012ed
unsigned int __x86.get_pc_thunk_di(unsigned int *a0)
{
 unsigned int v0; // eax

 v0 = (unsigned int)a0;
 return v0;
}


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
 strlen(&v1);
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
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013a0
struct Base {
 void *vtable;
};

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 if (arg_0 && arg_0->vtable)
  ((void *(*)(struct Base *, int))arg_0->vtable)(arg_0, arg_1);
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
void sub_401436()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401440
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch(v2);
 return;
}


// Function: sub_401481 at 0x401481
void sub_401481()
{
 // Incomplete decompilation - placeholder
 return;
}


// Function: sub_40149f at 0x40149f
void sub_40149f()
{
 __cxa_end_catch();
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
void sub_401536()
{
 test_cpp_rtti();
}


// Function: _Z13test_cpp_rttiv at 0x401540

extern char g_403ecc;
extern char g_403ee0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x14]

 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = operator new(4);
 *(p) = &g_403ee0;
 operator delete(v0);
 (*p)->field_4(p);
 return;
}


// Function: sub_4015f3 at 0x4015f3
void sub_4015f3()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401600

extern char g_402081;
extern char g_40209f;
extern char g_4020bb;
extern char g_4020d7;
extern char g_4020f3;
extern char g_402110;
extern char g_40212c;
extern char g_402148;
extern char g_402164;
extern char g_402180;
extern char g_40219d;
extern char g_4021ba;
extern char g_4021d8;
extern char g_403ecc;
extern char g_403ee0;

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

 puts(&g_4021d8);
 result = 0;
 v4 = 0;
 memset(&v3, 0, 20);
 strncpy(&v2, "Test", 4);
 flag1 = 0;
 v1 = 10;
 strlen(&v2);
 printf(&g_402081);
 printf(&g_40209f);
 printf(&g_4020bb);
 printf(&g_4020d7);
 printf(&g_4020f3);
 printf(&g_402110);
 printf(&g_40212c);
 printf(&g_402148);
 printf(&g_402164);
 test_cpp_exception();
 printf(&g_402180);
 printf(&g_40219d);
 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = operator new(4);
 *(p) = &g_403ee0;
 operator delete(v0);
 (*p)->field_4(p);
 printf(&g_4021ba);
 return;
}


// Function: sub_40180f at 0x40180f
int sub_40180f()
{
 main();
 return;
}


// Function: main at 0x401810
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40182c at 0x40182c
void sub_40182c(int a0, int a1)
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
int sub_40183e(int a0)
{
 return template_max_int(a0, a0);
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401840
// Function: sub_401851 at 0x401851
void sub_401851(int a0, int a1)
{
 template_swap_int(a0, a1);
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
 Container<int>::Container();
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401880
void* Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return ptr;
}


// Function: sub_40188c at 0x40188c
void sub_40188c(unsigned int a0)
{
 Container<int>::push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401890
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4018ac at 0x4018ac
void sub_4018ac(unsigned int a0, unsigned int a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4018b0
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_4018c7 at 0x4018c7
void sub_4018c7(unsigned int a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4018d0
void Container<int>::getSize(void* this)
{
 return;
}


// Function: sub_4018d8 at 0x4018d8
void sub_4018d8(unsigned int a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4018e0
void Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
}


// Function: sub_4018ec at 0x4018ec
void sub_4018ec(unsigned int a0)
{
 Container<double>::push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4018f0
void Container<double>::push(void* ptr)
{
 unsigned int idx; // ecx

 idx = (int)ptr[80];
 if (idx <= 9)
 {
 *((unsigned int *)&ptr[80]) = idx + 1;
 *((unsigned long long *)((char *)ptr + 8 * idx)) = 0;
 }
 return;
}


// Function: sub_40190e at 0x40190e
void sub_40190e(unsigned int a0, unsigned int a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401910
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_401929 at 0x401929
void sub_401929(unsigned int a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401930
void Container<double>::getSize(void* this)
{
 return;
}


// Function: sub_401938 at 0x401938
void sub_401938()
{
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401940
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401961 at 0x401961
void sub_401961()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401970
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: sub_401976 at 0x401976
void sub_401976()
{
}


// Function: _ZN8RTTIBaseD2Ev at 0x401980
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_401981 at 0x401981
void sub_401981()
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401990
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_4019b1 at 0x4019b1
void sub_4019b1()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019c0
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: sub_4019c6 at 0x4019c6
void sub_4019c6()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86.get_pc_thunk_dx();
 ptr = &v2[1].padding_0[379];
 v4 = *((int *)&ptr->padding_0[384]);
 if (*((int *)&ptr->padding_0[384]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[384];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401a12 at 0x401a12
void sub_401a12()
{
}



/* CRT stub function _fini removed by preprocessor */


