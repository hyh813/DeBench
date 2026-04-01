// Angr Decompilation of 5-1_clang_O2_g
// Platform: ARMEL

#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <new>

/* C++ ABI exception handling functions */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, void *, void (*)(void *));
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_end_cleanup();
extern int __cxa_atexit(void (*) (void *), void *, void *);
extern void __cxa_rethrow();

/* C++ operators */
extern void *operator new(size_t);
extern void operator delete(void *);

/* C++ RTTI - stub implementation */
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int hint)
{
    (void)src_type; (void)dst_type; (void)hint;
    return src;
}

/* angr decompilation helper */
static int armg_calculate_condition(int cond, int a, int b, int c) {
    (void)a; (void)b; (void)c;
    return cond;
}

/* CRT stub function _init removed by preprocessor */



// Global symbols for RTTI typeinfo (64-bit size for ARM)
unsigned long _ZTI8RTTIBase[1] = {0};
unsigned long _ZTI12RTTIDerivedA[1] = {0};
unsigned long _ZTI12RTTIDerivedB[1] = {0};

// Global variable definition
unsigned int g_412008 = 0;

// Function: sub_400854 at 0x400854

int sub_400854()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return g_412008;
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
class Base {};

void call_virtual_func(class Base *arg_0, int arg_1)
{
 /* virtual function call - indirection through vtable */
 ((void (*)(class Base *, int))(*((int *)*((int *)arg_0))))(arg_0, arg_1);
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

// vtable/typeinfo pointer globals
char g_411ed8[1] = {0};
char g_411eec[1] = {0};

void test_cpp_rtti()
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 void* p; // r4
 struct_0 **ptr; // r5
 void* result; // r0
 void* flag1; // r0
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
 p = operator new(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)operator new(4);
 *(ptr) = (struct_0 *)g_411eec;
 result = __dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag1 = __dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 {
 typedef void (*field_4_type)(void *, void *);
 field_4_type func = (field_4_type)(*ptr)->field_4;
 func(*ptr, (*ptr)->field_4);
 }
 if (!flag1)
 return;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x400d70

extern unsigned int _ZN14LifecycleClass14instance_countE;

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
 void* result; // [bp-0x34]
 void* flag1; // [bp-0x30]
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
 strncpy(&v1, "Test", 4);
 memset(&v4, 0, 16);
 flag2 = 0;
 flag3 = 0;
 v0 = 10;
 flag4 = 0;
 p = operator new(4);
 *((char **)p) = g_411ed8;
 ptr = (struct_0 **)operator new(4);
 *(ptr) = (struct_0 *)&g_411eec;
 v22 = (unsigned int)__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 flag5 = (unsigned int)__dynamic_cast(*ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 operator delete(p);
 {
 typedef void (*field_4_type)(void *, void *);
 field_4_type func = (field_4_type)(*ptr)->field_4;
 func(*ptr, (*ptr)->field_4);
 }
 v24 = (!v22 ? 30 : 130);
 if (flag5)
 v24 += 200;
 (void)v24;
 return;
}


// Function: main at 0x400fac
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x400fc0
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x400fcc
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401000
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // r2

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401014
void _ZN9ContainerIiEC2Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401020
void _ZN9ContainerIiE4pushEi(void* ptr, int arg_0)
{
 unsigned int index; // r2
 unsigned int v1; // r3

 index = *((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 v1 = index + 1;
 *((unsigned int *)((char *)ptr + 40)) = v1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401038
void _ZNK9ContainerIiE3getEi(void* self, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_401048;
 return;
LABEL_401048:
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401058
void _ZNK9ContainerIiE7getSizeEv(void* self)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401060
void _ZN9ContainerIdEC1Ev(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40106c
void _ZN9ContainerIdE4pushEd(void* ptr)
{
 unsigned int index; // r12
 unsigned int v1; // r2
 unsigned int v2; // r3

 index = *(int *)((char *)ptr + 80);
 if (9 >= index)
 goto LABEL_401078;
 return;
LABEL_401078:
 *((unsigned int *)((char *)ptr + 8 * index)) = v1;
 *((unsigned int *)(4 + (char *)ptr + 8 * index)) = v2;
 *((unsigned int *)((char *)ptr + 80)) = index + 1;
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401090
void _ZNK9ContainerIdE3getEi(void* self, int arg_0)
{
 if (!((char)armg_calculate_condition(66, arg_0, 0, 0)))
 goto LABEL_4010a8;
 return;
LABEL_4010a8:
 if (arg_0 >= *((int *)((char *)self + 80)))
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4010bc
void _ZNK9ContainerIdE7getSizeEv(void* self)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4010c4
void _ZN12RTTIDerivedAD0Ev(void* this_ptr)
{
 operator delete(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4010c8
void _ZNK12RTTIDerivedA7getTypeEv(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4010d0
void _ZN8RTTIBaseD2Ev(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4010d4
void _ZN12RTTIDerivedBD0Ev(void* this_ptr)
{
 operator delete(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4010d8
void _ZNK12RTTIDerivedB7getTypeEv(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


