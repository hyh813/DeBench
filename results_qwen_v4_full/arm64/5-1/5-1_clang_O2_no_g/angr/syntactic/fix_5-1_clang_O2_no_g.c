// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

// Function declarations
extern void _start(void);
extern int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *type_info, void *dest);
extern void _Unwind_Resume(void *exc);
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, long offset);
extern void *__cxa_begin_catch(void *exc);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void *operatornew(size_t size);
void *operatornew(size_t size) {
 return malloc(size);
}

void operatordelete(void *ptr) {
 free(ptr);
}

extern int arm64g_calculate_condition(int cond, unsigned long val1, unsigned long val2, int flag1, int flag2);
extern unsigned long CmpF(unsigned long a, unsigned long b);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void *frame_dummy(void);

typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;


// Function: __dollar_x at 0x400d60
extern unsigned long long g_411ff8;

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


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 char *v0; // x0

 v0 = 0;
 return puts(v0);
}


// Function: __dollar_x_18 at 0x400ec0
extern void __dollar_d_19;
extern char _ZNSt8ios_base4InitD1Ev;
extern unsigned long long __dso_handle;

long long __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, (void *)&__dollar_d_19, (void *)&__dso_handle);
 return __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, (void *)&__dollar_d_19, (void *)&__dso_handle);
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
long long sub_401008()
{
 unsigned long long v0; // x0

 v0 = (unsigned long long)frame_dummy();
 return (long long)frame_dummy();
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
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 long long *v0 = *(long long **)arg_0;
 goto *v0;
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
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 if (a1 != 1)
 goto LABEL_0x4011a8;
 __cxa_begin_catch((void *)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_begin_catch((void *)a0);
 __cxa_rethrow();
LABEL_0x4011a8:
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
extern char g_411d58;
extern char g_411d80;

void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 void *temp1; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operatornew(8);
 *(char **)ptr = &g_411d58;
 temp1 = operatornew(8);
 p = (struct_0 **)temp1;
 *p = (struct_0 *)&g_411d80;
 operatordelete((void *)ptr);
 operatordelete((void *)temp1);
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278
extern char __dollar_d_28;
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI8RTTIBase;
extern char g_4015ef;
extern char g_40160b;
extern char g_401627;
extern char g_401643;
extern char g_401660;
extern char g_40167c;
extern char g_401698;
extern char g_4016b4;
extern char g_4016d0;
extern char g_4016ed;
extern char g_40170a;
extern char g_401728;
extern char g_411d58;
extern char g_411d80;

void test_cpp_oo_features()
{
 void* ptr; // x19
 struct_0 **p; // x20
 void *temp2; // x0
 unsigned int v10; // w22
 unsigned int v11; // w21
 unsigned int v0; // [bp-0x58]
 char v1[15]; // [bp-0x54]
 unsigned long long flag1; // [bp-0x45]
 char result; // [bp-0x35]
 char *v4; // [bp-0x30]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(&g_401728);
 result = 0;
 v0 = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 printf(&__dollar_d_28, strlen(v1) + 4700);
 printf(&g_4015ef, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_40160b, 42);
 printf(&g_401627, 71);
 printf(&g_401643, 650);
 printf(&g_401660, 22);
 printf(&g_40167c, 39);
 printf(&g_401698, 16);
 printf(&g_4016b4, 85);
 printf(&g_4016d0, 0);
 printf(&g_4016ed, 703);
 ptr = operatornew(8);
 *(char **)ptr = &g_411d58;
 temp2 = operatornew(8);
 p = (struct_0 **)temp2;
 *p = (struct_0 *)&g_411d80;
 if (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0))
 v10 = 30;
 else
 v10 = 130;
 v11 = v10;
 operatordelete((void *)ptr);
 operatordelete((void *)temp2);
 printf(&g_40170a, v11 + 14);
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
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
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
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x401498
void Container_int_push(void* ptr, int arg_0)
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


// Function: _ZNK9ContainerIiE3getEi at 0x4014b4
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4014d4
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4014dc
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4014e4
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8
 unsigned long v1; // d0

 idx = (int)ptr[80];
 v1 = *(unsigned long*)&arg_0;
 if (9 >= (unsigned int)idx)
 {
 *((unsigned long *)((char *)ptr + 8 * idx)) = v1;
 *((unsigned int *)&ptr[80]) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401500
void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40151c
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401524
void RTTIDerivedA_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401528
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401530
void RTTIBase_destructor(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401534
void RTTIDerivedB_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401538
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


