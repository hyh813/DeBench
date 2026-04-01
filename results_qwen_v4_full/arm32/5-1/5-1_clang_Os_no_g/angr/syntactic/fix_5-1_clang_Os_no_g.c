// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: ARMEL

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern unsigned int armg_calculate_condition(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);

// C++ runtime functions
extern void* __cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void* exc, void* type_info, void* dest, ...);
extern void* __cxa_begin_catch(void* exc, ...);
extern void __cxa_end_catch(void);
extern void __cxa_end_cleanup(void);
extern void __cxa_rethrow(void* exc);
extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);
extern void* operator new(unsigned int size);
extern void operator delete(void* ptr);
extern void* __dynamic_cast(void* src, void* src_type, void* dst_type, unsigned int flags);
extern int __aeabi_dcmpgt(void);

/* CRT stub function _init removed by preprocessor */



// Function: sub_400854 at 0x400854
int sub_400854(void)
{
 unsigned int v1 = 0;
 unsigned int v0;

 v0 = v1;
 (void)v0;
 return 0;
}


// Function: __dollar_a_27 at 0x400958
extern void _ZNSt8ios_base4InitD1Ev(void);
extern char _ZStL8__ioinit;
extern unsigned int __dso_handle;
extern void _ZNSt8ios_base4InitC1Ev(void*);

int __dollar_a_27()
{
 unsigned int v0; // r0

 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 v0 = __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
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
 char v4[16]; // [bp-0x1c]
 char v5[4]; // [bp-0xc]

 strncpy((char*)v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 strlen((char*)v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x400b64
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x400b80
class Base {
 int dummy;
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 // Virtual function call simulated
 void (*vfunc)(class Base *, int) = (void (*)(class Base *, int))(*((int *)arg_0));
 vfunc(arg_0, arg_1);
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
 unsigned int v5; // r3
 unsigned int v6; // r1
 unsigned int v7; // r4
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0, v5, v0, v1, v2, v3);
 if (v6 != 3)
 {
 if (!armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_400c6a;
LABEL_400c69:
 if (armg_calculate_condition(18, v6, 3, 0))
 {
 __cxa_end_cleanup();
 }
 }
 else
 {
 if (armg_calculate_condition(18, v6, 3, 0))
 goto LABEL_400c69;
LABEL_400c6a:
 if (armg_calculate_condition(18, v6, 3, 0))
 {
 __cxa_end_cleanup();
 }
 }
 __cxa_begin_catch(0);
 __cxa_end_catch();
 return;
}


// Function: sub_400bf4 at 0x400bf4
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_400bf4(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v4; // r2
 unsigned int v5; // r3

 if (a1 != 1)
 {
 if (a1 != 1)
 {
LABEL_0x400c8c:
 __cxa_end_catch();
 __cxa_begin_catch((void*)a0);
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, v5);
 }
 }
 __cxa_rethrow(__cxa_begin_catch((void*)a0));
}


// Function: sub_400c1c at 0x400c1c
void sub_400c1c(unsigned int a0, unsigned int a1)
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x400c98
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x400ca4
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
extern char g_411ed8;
extern char g_411eec;

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
 p = (void*)operator new(4);
 *((char **)p) = &g_411ed8;
 ptr = (struct_0 **)operator new(4);
 *(ptr) = (struct_0 *)&g_411eec;
 result = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = (unsigned int)__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d70
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern char g_40113d;
extern char g_40115b;
extern char g_401177;
extern char g_401193;
extern char g_4011af;
extern char g_4011cc;
extern char g_4011e8;
extern char g_401204;
extern char g_401220;
extern char g_40123c;
extern char g_401259;
extern char g_401276;
extern char g_401294;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int flag1; // [bp-0x20]
 char v4[16]; // [bp-0x1c]
 char v5[4]; // [bp-0xc]

 puts(&g_401294);
 strncpy(v1, "Test", 4);
 result = 0;
 flag1 = 0;
 memset(&v4, 0, 16);
 memset(&v5, 0, 4);
 v0 = 10;
 printf(&g_40113d, strlen(v1) + 4700);
 printf(&g_40115b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_401177, 42);
 printf(&g_401193, 71);
 printf(&g_4011af, 650);
 printf(&g_4011cc, 22);
 printf(&g_4011e8, 39);
 printf(&g_401204, 16);
 printf(&g_401220, 85);
 printf(&g_40123c, 0);
 printf(&g_401259, 703);
 printf(&g_401276, 0);
 return;
}


// Function: main at 0x400ef4
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400f08
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400f14
void template_max_double()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 unsigned int result; // r0
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
 result = 1;
 if (result)
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return;
 }
 else
 {
 if (!armg_calculate_condition(18, result, 0, 0))
 return;
 }
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x400f48
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x400f5c
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x400f68
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char*)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x400f80
void Container_int_get(void* this_ptr, int arg_0)
{
 unsigned int size;
 if (!armg_calculate_condition(66, arg_0, 0, 0)) {
 goto LABEL_400f90;
 }
 return;
LABEL_400f90:
 size = *((unsigned int *)((char*)this_ptr + 40));
 if (arg_0 >= (int)size)
 {
  return;
 }
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x400fa0
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x400fa8
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x400fb4
void Container_double_push(void* ptr)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = *((unsigned int *)((char*)ptr + 80));
 if (9 >= index)
 goto LABEL_400fc0;
 return;
LABEL_400fc0:
 v1 = 0;
 v2 = 0;
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)((char *)ptr + 4 + 8 * index)) = v2;
 *((unsigned int *)((char*)ptr + 80)) = index + 1;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x400fd8
void Container_double_get(void* this_ptr, int arg_0)
{
 unsigned int size;
 if (!armg_calculate_condition(66, arg_0, 0, 0)) {
  return;
 }
LABEL_400ff0:
 size = *((unsigned int *)((char*)this_ptr + 80));
 if (arg_0 >= (int)size)
 {
  return;
 }
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401004
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40100c
int RTTIDerivedA_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401010
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401018
int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40101c
int RTTIDerivedB_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401020
void RTTIDerivedB_getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


