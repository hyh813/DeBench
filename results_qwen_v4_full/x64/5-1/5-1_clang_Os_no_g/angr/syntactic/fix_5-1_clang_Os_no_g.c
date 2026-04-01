// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

struct_0 *g_403fe8 = 0;

// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

static void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
static void* operator_new_array(unsigned long size) { return malloc(size); }
static void operator_delete_array(void* ptr) { free(ptr); }
static void* operator_new(unsigned long size) { return malloc(size); }
static void operator_delete(void* ptr) { free(ptr); }

static int sub_40102c()
{
 unsigned int v1 = 0; // rdi

 return (int)(unsigned long)operator_new_array(v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401140
static void _ZNSt8ios_base4InitD1Ev(void* this_ptr) { }
static char _ZStL8__ioinit = 0;
static unsigned long long __dso_handle = 0;

static void _ZNSt8ios_base4InitC1Ev(void* this_ptr) { }
static int __cxa_atexit(void (*func)(void), void* arg, void* dso_handle) { return 0; }

static void _GLOBAL__sub_I_5_1_cpp()
{
 _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
 __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void*)&__dso_handle);
 return;
}


// Function: sub_401167 at 0x401167
static void sub_401167(unsigned long a0, unsigned long a1, unsigned long a2)
{
 exit(0); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401195 at 0x401195
static void sub_401195()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198805
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401245 at 0x401245
static void sub_401245()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401259 at 0x401259
static void test_cpp_member_func();
static void sub_401259()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x40125c

static void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x28]
 char v1[15]; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401294
static unsigned int _ZN14LifecycleClass14instance_countE = 0;

static void test_cpp_constructor()
{
 unsigned int *v1; // rax
 unsigned long long i; // rcx
 unsigned int *ptr; // rdx

 v1 = (unsigned int *)operator_new_array(20);
 i = 0;
 ptr = v1;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator_delete_array(v1);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012e5
typedef struct Base {
 void* vtable;
} Base;

static void call_virtual_func(Base *arg_0, int arg_1)
{
 void (*func)(Base*, int) = (void (*)(Base*, int))((long long*)arg_0->vtable)[0];
 func(arg_0, arg_1);
}


// Function: _Z21test_cpp_virtual_funcv at 0x4012ed
static void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4012f3
static void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4012f9
static void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x4012ff
static void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401305
static void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x40130b
static void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401311
static void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401317
static char _ZTIi = 0;
static void* __cxa_allocate_exception(unsigned long size) { return malloc(size); }
static void __cxa_throw(void* exc, void* type, void* dest) { free(exc); }
static void _Unwind_Resume(void* exc) { }
static void* __cxa_begin_catch(void* exc) { return exc; }
static void __cxa_end_catch(void) { }

static void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}








// Function: _Z18test_cpp_smart_ptrv at 0x4013d7
static void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013dd
static char g_403d78 = 0;
static char g_403da0 = 0;

static void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operator_new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operator_new(8);
 *p = (struct_0 *)&g_403da0;
 operator_delete(ptr);
 if (p && *p && (*p)->field_8)
 ;
 operator_delete(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x40147f
static char g_40207d = 0;
static char g_40209b = 0;
static char g_4020b7 = 0;
static char g_4020d3 = 0;
static char g_4020ef = 0;
static char g_40210c = 0;
static char g_402128 = 0;
static char g_402144 = 0;
static char g_402160 = 0;
static char g_40217c = 0;
static char g_402199 = 0;
static char g_4021b6 = 0;
static char g_4021d4 = 0;

static void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x28]
 char v1; // [bp-0x24]
 unsigned long long flag1; // [bp-0x15]
 char result; // [bp-0x5]

 puts(&g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(&g_40207d, (unsigned int)strlen(&v1) + 4700);
 test_cpp_constructor();
 printf(&g_40209b, 0);
 printf(&g_4020b7, 42);
 printf(&g_4020d3, 71);
 printf(&g_4020ef, 650);
 printf(&g_40210c, 22);
 printf(&g_402128, 39);
 printf(&g_402144, 16);
 printf(&g_402160, 85);
 test_cpp_exception();
 printf(&g_40217c, 0);
 printf(&g_402199, 703);
 test_cpp_rtti();
 printf(&g_4021b6, 0);
 return;
}


// Function: main at 0x4015a8
int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4015b2
static int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4015ba
static double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4015bf
static void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4015c8
static void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4015d0
static void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)((char*)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4015e4
static void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_4015f5 at 0x4015f5
static void sub_4015f5(unsigned long a0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4015f6
static void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4015fa
static void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401602
static void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = *((unsigned int *)((char*)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401618
static void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40162c
static void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401630
static void RTTIDerivedA_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
}


// Function: sub_401635 at 0x401635
static void sub_401635()
{
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401636
static void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40163c
static void RTTIBase_destructor(void* this_ptr)
{
}


// Function: sub_40163d at 0x40163d
static void sub_40163d()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40163e
static void RTTIDerivedB_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
}


// Function: sub_401643 at 0x401643
static void sub_401643()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401644
static void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


