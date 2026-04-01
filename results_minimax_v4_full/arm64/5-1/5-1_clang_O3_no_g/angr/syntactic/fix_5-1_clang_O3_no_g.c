// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unwind.h>

/* CRT stub function _init removed by preprocessor */

// Extern declarations for CRT stub functions
extern void _start(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void *frame_dummy(void);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *exception, void *type_info, void *destructor);
extern void *__cxa_begin_catch(void *exception);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern unsigned long __dynamic_cast(void *ptr, void *src_type, void *dst_type, int is_ref);
extern void *malloc(unsigned long size);
extern void free(void *ptr);

// C++ operator new/delete declarations (renamed for C compatibility)
void *cpp_operator_new(unsigned long size);
void cpp_operator_delete(void *ptr);

// C++ std::ios_base::Init destructor declaration (for __cxa_atexit)
extern int _ZNSt8ios_base4InitD1Ev(void*);


// Function: __dollar_x at 0x400d60
extern unsigned long long g_411ff8;

long long __dollar_x()
{
 // Original code was a jump table thunk - simplified for C compilation
 return 0;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 puts("sub_400d74");
 return 0;
}


// Function: __dollar_x_18 at 0x400ec0
 extern void __dollar_d_19;
extern unsigned long long __dso_handle;
 extern int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

 long long __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 // std::ios_base::Init::Init(&__dollar_d_19);
 v2 = __cxa_atexit((void(*)(void*))&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
 (void)__cxa_atexit((void(*)(void*))&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, &__dso_handle);
 return v2;
}


// Function: sub_400efc at 0x400efc
void sub_400efc(unsigned long a0)
{
 _start(); /* do not return */
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
void sub_401008()
{
 frame_dummy();
 return;
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
 strncpy(v1, "Test", 4);
 flag1 = 0;
 (void)strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
typedef struct Base {
    void *virtual_table;
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 // Virtual function call via vtable - simplified
 return;
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
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(unsigned int *)ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0); /* does not return */
 /* __cxa_throw never returns - unreachable code removed */
}


// Function: sub_4010f4 at 0x4010f4
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 == 1)
 {
 __cxa_rethrow();
 }
 else if (a1 == 1)
 {
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
}


// Function: sub_401128 at 0x401128
void sub_401128(unsigned long a0, unsigned int a1)
{
 (void)__cxa_end_catch();
 if (a1 != 1)
 {
 // Original: goto LABEL_0x4011b4;
 }
 else
 {
 // Original: goto LABEL_0x401144;
 }
}


// Function: _Z18test_cpp_smart_ptrv at 0x4011bc
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4011c4
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern char g_411d58;
extern char g_411d80;

 void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (void*)malloc(8);
 *((char **)ptr) = &g_411d58;
 p = (struct_0**)malloc(8);
 *(struct_0 **)p = (struct_0 *)&g_411d80;
 free(ptr);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401284
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern char __dollar_d_28;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI8RTTIBase;
extern char g_4015fb;
extern char g_401617;
extern char g_401633;
extern char g_40164f;
extern char g_40166c;
extern char g_401688;
extern char g_4016a4;
extern char g_4016c0;
extern char g_4016dc;
extern char g_4016f9;
extern char g_401716;
extern char g_401734;
extern char g_411d58;
extern char g_411d80;

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
 puts(&g_401734);
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 printf(&__dollar_d_28, strlen(v1) + 4700);
 printf(&g_4015fb, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_401617, 42);
 printf(&g_401633, 71);
 printf(&g_40164f, 650);
 printf(&g_40166c, 22);
 printf(&g_401688, 39);
 printf(&g_4016a4, 16);
 printf(&g_4016c0, 85);
 printf(&g_4016dc, 0);
 printf(&g_4016f9, 703);
 ptr = (void*)malloc(8);
 *((char **)ptr) = &g_411d58;
 p = (struct_0**)malloc(8);
 *(struct_0 **)p = (struct_0 *)&g_411d80;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v10 = 30;
 else
 v10 = 130;
 if (!__dynamic_cast(p, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v11 = v10;
 else
 v11 = v10 + 200;
 free(ptr);
 // field_8 is a struct pointer, not a function - just access it
 (void)(*p)->field_8;
 printf(&g_401716, v11 + 14);
 return;
}


// Function: main at 0x401458
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401470
// Template function removed - C does not support templates

// Function: _Z12template_maxIdET_S0_S0_ at 0x40147c
// Template function removed - C does not support templates

// Function: _Z13template_swapIiEvRT_S1_ at 0x401488
// Template function removed - C does not support templates

// Function: _ZN9ContainerIiEC2Ev at 0x40149c
typedef struct ContainerInt {
} ContainerInt;

void ContainerInt_Init(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4014a4
void ContainerInt_Push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = (int)ptr[40];
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4014c0
void ContainerInt_Get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4014e0
void ContainerInt_GetSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4014e8
int ContainerDouble_Init(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4014f0
void ContainerDouble_Push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 unsigned long v1; // d0

 idx = (int)ptr[80];
 if (9 >= (unsigned int)idx)
 {
 *((unsigned long *)((char *)ptr + 8 * idx)) = v1;
 *((unsigned int *)&ptr[80]) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x40150c
void ContainerDouble_Get(void* this, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401528
void ContainerDouble_GetSize(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401530
void RTTIDerivedA_D0(void* this)
{
 free(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401534
void RTTIDerivedA_getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40153c
int RTTIBase_D2(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401540
void RTTIDerivedB_D0(void* this)
{
 free(this);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401544
void RTTIDerivedB_getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


