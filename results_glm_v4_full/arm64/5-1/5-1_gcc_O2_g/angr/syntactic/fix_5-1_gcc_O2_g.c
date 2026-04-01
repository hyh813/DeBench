// Angr Decompilation of 5-1_gcc_O2_g
// Platform: AARCH64
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Forward declarations
void operatordelete(void *ptr, unsigned long size);
void* operatornew(unsigned long size);
void __stack_chk_fail(void);
void* __builtin_new(unsigned long size);
void __builtin_delete(void *ptr);
void test_cpp_oo_features(void);
int test_cpp_rtti(void);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest, ...);
void _Unwind_Resume(void);
int main(void);
long long _GLOBAL__sub_I__Z20test_cpp_member_funcv(void);
void* operatornew(unsigned long size);
int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
int non_virtual_thunk_to_MultiDerived_funcB(void);
void _ZNSt8ios_base4InitC1Ev(void* obj);
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void call_virtual_func(void *arg_0, int arg_1);
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_smart_ptr(void);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
void template_swap_int(unsigned int *ptr, unsigned int *ptr2);
int Container_int_Constructor(void *obj);
void Container_int_push(void *obj, int arg_0);
int Container_int_get(void *obj, int arg_0);
int Container_int_getSize(void *obj);
int Container_double_Constructor(void *obj);
void Container_double_push(void *obj, double arg_0);
double Container_double_get(void *obj, int arg_0);
int Container_double_getSize(void *obj);
void Base_virtual_func(void *obj, int arg_0);
void Base_getName(void);
void Derived_virtual_func(void *obj, int arg_0);
void Derived_getName(void);
void MultiDerived_funcA(void);
void MultiDerived_funcB(void);
int MiddleA_func(void);
int MiddleB_func(void);
int DiamondDerived_func(void);
int RTTIDerivedA_getType(void);
int RTTIDerivedB_getType(void);
int __printf_chk(int flag, const char *format, ...);
int thunk_to_MiddleA_func(void* *a0);
int thunk_to_MiddleB_func(void* *a0);
int thunk_to_DiamondDerived_func(void* *a0);


/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400eb0
extern unsigned long long g_412f00;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return 0;
}


// Function: sub_400ec4 at 0x400ec4
int sub_400ec4()
{
 return puts("test");
}


// Function: _Z18test_cpp_exceptionv at 0x401040
extern char _ZTIi;

void test_cpp_exception()
{
 void *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *((unsigned int*)ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0, 0);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_401114 at 0x401114
void sub_401114()
{
 main();
 return;
}


// Function: main at 0x401120
int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_401138 at 0x401138
void sub_401138()
{
 _GLOBAL__sub_I__Z20test_cpp_member_funcv();
 return;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x401140
void _ZNSt8ios_base4InitD1Ev(void* obj);
extern char _ZStL8__ioinit;
extern void* __dso_handle;

long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 v2 = __cxa_atexit((void (*)(void*))_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, __dso_handle);
 return v2;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011b0 at 0x4011b0
void sub_4011b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4011c8 at 0x4011c8
void sub_4011c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40123c at 0x40123c
void sub_40123c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401288 at 0x401288
long long sub_401288()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401294 at 0x401294
void sub_401294()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x4012a0
extern char __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x40]
 char v1[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = (unsigned long)__stack_chk_guard;
 result = 0;
 (void)strlen(strncpy(v1, "Test", 31));
 if (v3 != __stack_chk_guard)
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401310
void test_cpp_constructor()
{
 return;
}


// Function: sub_401328 at 0x401328
long long sub_401328(unsigned long a0)
{
 call_virtual_func((void*)a0, 0);
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x401330
void call_virtual_func(void *arg_0, int arg_1)
{
 typedef void (*func_t)(void*, int);
 func_t vfunc = (func_t)*(long long*)*(long long**)arg_0;
 vfunc(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x401340
void test_cpp_virtual_func()
{
 return;
}


// Function: sub_401348 at 0x401348
long long sub_401348()
{
 test_cpp_multiple_inheritance();
 return 0;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401350
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_401358 at 0x401358
void sub_401358()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401360
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_401368 at 0x401368
void sub_401368()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401370
void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401378 at 0x401378
void sub_401378()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401380
extern char __stack_chk_guard;

void test_cpp_template_func()
{
 unsigned long long v6; // d8
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v4 = (unsigned long)__stack_chk_guard;
 template_max_double(template_max_int(3, 7), 7);
 v2 = 10;
 v3 = 20;
 template_swap_int(&v2, &v3);
 if (v4 != __stack_chk_guard)
 __stack_chk_fail(); /* do not return */
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
void test_cpp_template_class()
{
 return;
}


// Function: sub_401428 at 0x401428
void sub_401428()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
void test_cpp_lambda()
{
 return;
}


// Function: sub_401438 at 0x401438
void sub_401438()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401440
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401448 at 0x401448
void sub_401448()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401450
typedef struct struct_2 {
 char padding_0[8];
 struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
 unsigned long long field_0;
} struct_3;

extern char g_412c28;
extern char g_412c50;

int test_cpp_rtti()
{
 void* *ptr; // x21
 struct_2 **p; // x20
 void* v4; // x24
 char *addr; // x23
 char *ptr3; // x0
 long long temp1; // temp
 long long temp2; // temp
 char *v0; // [bp-0x50]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (void**)operatornew(8);
 p = (struct_2 **)operatornew(8);
 temp1 = *(long long *)ptr;
 v4 = (void*)temp1;
 temp2 = *((long long *)((char *)v4 + 8 + 8));
 addr = (char *)temp2;
 p = (struct_2 **)&g_412c50;
 if (*(addr) != 42)
 ptr3 = addr;
 else
 ptr3 = addr + 1;
 (void)strlen(ptr3);
 ((void (*)(void**, long long))((long long*)v4)[8])(ptr, 0);
 (*p)->field_8 = (*p)->field_8;
 return 0;
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015b0
extern char __stack_chk_guard;
extern char g_401b10;
extern char g_401b38;
extern char g_401b58;
extern char g_401b78;
extern char g_401b98;
extern char g_401bb8;
extern char g_401bd8;
extern char g_401bf8;
extern char g_401c18;
extern char g_401c38;
extern char g_401c58;
extern char g_401c78;
extern char g_401c98;

void test_cpp_oo_features()
{
 unsigned int v11; // w0
 char *v0; // [bp-0x50]
 char v1; // [bp-0x2c];
 char result; // [bp-0xd]
 unsigned long v3; // [bp-0x8];
 char v4; // [bp+0x0];

 v0 = &v4;
 v3 = (unsigned long)__stack_chk_guard;
 puts(&g_401b10);
 strncpy(&v1, "Test", 31);
 result = 0;
 __printf_chk(1, &g_401b38, strlen(&v1) + 4700);
 test_cpp_constructor();
 __printf_chk(1, &g_401b78, 42);
 __printf_chk(1, &g_401b98, 71);
 test_cpp_diamond_inheritance();
 __printf_chk(1, &g_401bd8, 22);
 test_cpp_template_func();
 __printf_chk(1, &g_401c18, 16);
 __printf_chk(1, &g_401c38, 85);
 test_cpp_exception();
 test_cpp_smart_ptr();
 v11 = (unsigned long long)test_cpp_rtti();
 if (v3 != __stack_chk_guard)
 __stack_chk_fail(); /* do not return */
 __printf_chk(1, &g_401c98, v11);
 return;
}


// Function: sub_401734 at 0x401734
void sub_401734(void *a0, int a1)
{
 Base_virtual_func(a0, a1);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x401740
void Base_virtual_func(void *obj, int arg_0)
{
 return;
}


// Function: sub_401748 at 0x401748
void sub_401748()
{
 Base_getName();
 return;
}


// Function: _ZNK4Base7getNameEv at 0x401750
void Base_getName()
{
 return;
}


// Function: sub_40175c at 0x40175c
long long sub_40175c()
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x401760
int Base_destructor()
{
 return 0;
}


// Function: sub_401764 at 0x401764
void sub_401764(void *a0, int a1)
{
 Derived_virtual_func(a0, a1);
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x401770
void Derived_virtual_func(void *obj, int arg_0)
{
 return;
}


// Function: sub_40177c at 0x40177c
void sub_40177c()
{
 Derived_getName();
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x401780
void Derived_getName()
{
 return;
}


// Function: sub_40178c at 0x40178c
void sub_40178c()
{
 MultiDerived_funcA();
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x401790
void MultiDerived_funcA()
{
 return;
}


// Function: sub_401798 at 0x401798
void sub_401798()
{
 MultiDerived_funcB();
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4017a0
void MultiDerived_funcB()
{
 return;
}


// Function: sub_4017a8 at 0x4017a8
void sub_4017a8()
{
 non_virtual_thunk_to_MultiDerived_funcB();
 return;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x4017b0
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


// Function: sub_4017b8 at 0x4017b8
void sub_4017b8(unsigned long a0)
{
 MiddleA_func();
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4017c0
int MiddleA_func()
{
 return 0;
}


// Function: sub_4017d8 at 0x4017d8
void sub_4017d8(unsigned long a0)
{
 thunk_to_MiddleA_func((void**)&a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x4017e0
int thunk_to_MiddleA_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + ((long long*)a0)[24] + *((long long *)(*((long long *)((char *)a0 + ((long long*)a0)[24])) - 24)))) + 150;
}


// Function: sub_401804 at 0x401804
void sub_401804(unsigned long a0)
{
 MiddleB_func();
 return;
}


// Function: _ZN7MiddleB4funcEv at 0x401810
int MiddleB_func()
{
 return 0;
}


// Function: sub_401828 at 0x401828
void sub_401828(unsigned long a0)
{
 thunk_to_MiddleB_func((void**)&a0);
 return;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x401830
int thunk_to_MiddleB_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + ((long long*)a0)[24] + *((long long *)(*((long long *)((char *)a0 + ((long long*)a0)[24])) - 24)))) + 200;
}


// Function: sub_401854 at 0x401854
void sub_401854(unsigned long a0)
{
 DiamondDerived_func();
 return;
}


// Function: _ZN14DiamondDerived4funcEv at 0x401860
int DiamondDerived_func()
{
 return 0;
}


// Function: sub_401878 at 0x401878
void sub_401878(unsigned long a0)
{
 thunk_to_DiamondDerived_func((void**)&a0);
 return;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x401880
int thunk_to_DiamondDerived_func(void* *a0)
{
 return *((int *)(8 + (char *)a0 + ((long long*)a0)[24] + *((long long *)(*((long long *)((char *)a0 + ((long long*)a0)[24])) - 24)))) + 250;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4018a4
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 return *((int *)(-8 + (char *)a0 + *((long long *)((long long)((long long*)a0)[16] - 24)))) + 250;
}


// Function: sub_4018bc at 0x4018bc
void sub_4018bc()
{
 RTTIDerivedA_getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4018c0
int RTTIDerivedA_getType()
{
 return 0;
}


// Function: sub_4018c8 at 0x4018c8
void sub_4018c8()
{
 RTTIDerivedB_getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4018d0
int RTTIDerivedB_getType()
{
 return 0;
}


// Function: sub_4018d8 at 0x4018d8
long long sub_4018d8()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x4018e0
int RTTIDerivedB_destructor()
{
 return 0;
}


// Function: sub_4018e4 at 0x4018e4
long long sub_4018e4()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x4018f0
int RTTIDerivedA_destructor()
{
 return 0;
}


// Function: sub_4018f4 at 0x4018f4
long long sub_4018f4()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x401900
int DiamondDerived_destructor()
{
 return 0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x401904
long long thunk_to_DiamondDerived_destructor(void* *a0)
{
 return 0;
}


// Function: sub_401908 at 0x401908
long long sub_401908()
{
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x401910
long long non_virtual_thunk_to_DiamondDerived_destructor(void* a0)
{
 return 0;
}


// Function: sub_401914 at 0x401914
long long sub_401914()
{
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x401920
int MultiDerived_destructor()
{
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x401924
long long non_virtual_thunk_to_MultiDerived_destructor(void* a0)
{
 return 0;
}


// Function: sub_401928 at 0x401928
long long sub_401928()
{
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x401930
int Derived_destructor()
{
 return 0;
}


// Function: sub_401934 at 0x401934
long long sub_401934()
{
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x401940
int Base_deleting_destructor(void *obj)
{
 operatordelete(obj, 8);
 return 0;
}


// Function: sub_401948 at 0x401948
long long sub_401948()
{
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x401950
int Derived_deleting_destructor(void *obj)
{
 operatordelete(obj, 16);
 return 0;
}


// Function: sub_401958 at 0x401958
long long sub_401958()
{
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x401960
int MultiDerived_deleting_destructor(void *obj)
{
 operatordelete(obj, 32);
 return 0;
}


// Function: sub_401968 at 0x401968
void sub_401968(unsigned long a0)
{
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x401970
int non_virtual_thunk_to_MultiDerived_destructor_v2(void* a0)
{
 operatordelete(a0 - 16, 32);
 return 0;
}


// Function: sub_40197c at 0x40197c
long long sub_40197c()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401980
int RTTIDerivedB_deleting_destructor(void *obj)
{
 operatordelete(obj, 8);
 return 0;
}


// Function: sub_401988 at 0x401988
long long sub_401988()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401990
int RTTIDerivedA_deleting_destructor(void *obj)
{
 operatordelete(obj, 8);
 return 0;
}


// Function: sub_401998 at 0x401998
long long sub_401998()
{
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x4019a0
int DiamondDerived_deleting_destructor(void *obj)
{
 operatordelete(obj, 48);
 return 0;
}


// Function: sub_4019a8 at 0x4019a8
void sub_4019a8(unsigned long a0)
{
 return;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4019b0
int thunk_to_DiamondDerived_destructor_v2(void* *a0)
{
 operatordelete((char *)a0 + ((long long*)a0)[32], 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x4019c4
int non_virtual_thunk_to_DiamondDerived_destructor_v2(void* a0)
{
 operatordelete(a0 - 16, 48);
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4019d0
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_4019dc at 0x4019dc
long long sub_4019dc(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = (unsigned long long)template_max_double(*(double*)&a0, *(double*)&a1);
 return v0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4019e0
double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 > arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_4019ec at 0x4019ec
long long sub_4019ec(unsigned long a0, unsigned long a1)
{
 template_swap_int((unsigned int*)a0, (unsigned int*)a1);
 return 0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4019f0
void template_swap_int(unsigned int *ptr, unsigned int *ptr2)
{
 unsigned int v0; // w2

 v0 = *(ptr);
 *(ptr) = *(ptr2);
 *(ptr2) = v0;
 return;
}


// Function: sub_401a04 at 0x401a04
long long sub_401a04(unsigned long a0)
{
 unsigned long long v0; // x0

 Container_int_Constructor((void*)a0);
 return 0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401a10
int Container_int_Constructor(void *obj)
{
 *((unsigned int *)((char *)obj + 40)) = 0;
 return 0;
}


// Function: sub_401a18 at 0x401a18
long long sub_401a18(unsigned long a0, unsigned long a1)
{
 Container_int_push((void*)a0, (int)a1);
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401a20
void Container_int_push(void *obj, int arg_0)
{
 unsigned int v0; // w2

 v0 = *((unsigned int *)((char *)obj + 40));
 if (9 >= v0)
 {
 *((unsigned int *)((char *)obj + 40)) = v0 + 1;
 *((int *)((char *)obj + 4 * v0)) = arg_0;
 }
 return;
}


// Function: sub_401a3c at 0x401a3c
void sub_401a3c(unsigned long a0, unsigned long a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401a40
int Container_int_get(void *obj, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return 0;
 }
 else if (arg_0 >= *((int *)((char *)obj + 40)))
 {
 return 0;
 }
 else
 {
 return *((int *)((char *)obj + 4 * arg_0));
 }
}


// Function: sub_401a68 at 0x401a68
void sub_401a68(unsigned long a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401a70
int Container_int_getSize(void *obj)
{
 return *((int *)((char *)obj + 40));
}


// Function: sub_401a78 at 0x401a78
long long sub_401a78(unsigned long a0)
{
 unsigned long long v0; // x0

 Container_double_Constructor((void*)a0);
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401a80
int Container_double_Constructor(void *obj)
{
 *((unsigned int *)((char *)obj + 80)) = 0;
 return 0;
}


// Function: sub_401a88 at 0x401a88
long long sub_401a88(unsigned long a0, unsigned long a1)
{
 Container_double_push((void*)a0, *(double*)&a1);
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401a90
void Container_double_push(void *obj, double arg_0)
{
 unsigned int v0; // w1

 v0 = *((unsigned int *)((char *)obj + 80));
 if (9 >= v0)
 {
 *((unsigned int *)((char *)obj + 80)) = v0 + 1;
 *(unsigned long long *)((char *)obj + 8 * v0) = *(unsigned long long *)&arg_0;
 }
 return;
}


// Function: sub_401aac at 0x401aac
long long sub_401aac(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0
 double temp;

 temp = Container_double_get((void*)a0, (int)a1);
 v0 = *(unsigned long long*)&temp;
 return (long long)v0;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401ab0
double Container_double_get(void *obj, int arg_0)
{
 if (((char)(arg_0 >> 31) & 1))
 {
 return 0.0;
 }
 else if (arg_0 >= *((int *)((char *)obj + 80)))
 {
 return 0.0;
 }
 else
 {
 return *((double *)((char *)obj + 8 * arg_0));
 }
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401ad0
int Container_double_getSize(void *obj)
{
 return *((int *)((char *)obj + 80));
}



/* CRT stub function _fini removed by preprocessor */


// Function: operatornew at 0x...
void* operatornew(unsigned long size)
{
 return malloc(size);
}


// Function: operatordelete at 0x...
void operatordelete(void *ptr, unsigned long size)
{
 free(ptr);
}

