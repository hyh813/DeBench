// Angr Decompilation of 5-1_clang_O2_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* Forward declarations */
struct Base;
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
static int template_max_int(int arg_0, int arg_1);
static double template_max_double(double arg_0, double arg_1);
static void template_swap_int(int *ptr, int *p);
static int MaxV(unsigned long long a, unsigned long long b);
static int Container_int_Constructor(void* ptr);
static void Container_int_push(void* ptr, int arg_0);
static void Container_int_get(void* this_ptr, int arg_0);
static void Container_int_getSize(void* this_ptr);
static int Container_double_Constructor(void* ptr);
static void Container_double_push(void* ptr, double arg_0);
static void Container_double_get(void* this_ptr, int arg_0);
static void Container_double_getSize(void* this_ptr);
static void RTTIDerivedA_getType(void* this_ptr);
static int RTTIDerivedA_destructor(void* this_ptr);
static int RTTIBase_destructor(void* this_ptr);
static void RTTIDerivedB_getType(void* this_ptr);
static int RTTIDerivedB_destructor(void* this_ptr);

/* CRT stub functions */
void _start() __attribute__((noreturn)) { for(;;); }
static void deregister_tm_clones() { }
static void register_tm_clones() { }
static void __do_global_dtors_aux() { }
static void frame_dummy() { }
void* __dynamic_cast(void *src, void *src_type, void *dst_type, long offset) { return 0; }
static void* operatornew(unsigned long size) { return malloc(size); }
static void operatordelete(void *ptr) { free(ptr); }
void* __cxa_allocate_exception(unsigned long size) { return malloc(size); }
void __cxa_throw(void *exc, void *type, void *dest) { }
void* __cxa_begin_catch(void *exc) { return exc; }
void __cxa_end_catch(void) { }
void _Unwind_Resume(void *exc) { }
void __cxa_rethrow(void *exc) { }

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
 char padding_0[8];
 void (*field_8)(struct struct_0 *);
} struct_0;

struct_0 *g_403fe8 = 0;

/* Global variable definitions */
char g_40207d[] = "%d\n";
char g_40209b[] = "%d\n";
char g_4020b7[] = "%d\n";
char g_4020d3[] = "%d\n";
char g_4020ef[] = "%d\n";
char g_40210c[] = "%d\n";
char g_402128[] = "%d\n";
char g_402144[] = "%d\n";
char g_402160[] = "%d\n";
char g_40217c[] = "%d\n";
char g_402199[] = "%d\n";
char g_4021b6[] = "%d\n";
char g_4021d4[] = "Test\n";
char g_403d78 = 0;
char g_403da0 = 0;
unsigned int _ZN14LifecycleClass14instance_countE = 0;
unsigned long long _ZTI12RTTIDerivedA = 0;
unsigned long long _ZTI8RTTIBase = 0;
char _ZTIi = 0;
char _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;
char _ZNSt8ios_base4InitD1Ev = 0;
char _ZStL8__ioinit = 0;
unsigned long long __dso_handle = 0;
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

static void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 ((void(*)())g_404010)();
}


// Function: sub_40102c at 0x40102c
static int sub_40102c()
{
 char *v1; // rdi

 v1 = "";
 return printf("%s", v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
extern char _ZNSt8ios_base4InitD1Ev;
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I_5_1_cpp()
{
 return;
}


// Function: sub_401147 at 0x401147
static void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
static void sub_401175()
{
}


// Function: sub_401176 at 0x401176
static void sub_401176()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011a9 at 0x4011a9
static void sub_4011a9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011e9 at 0x4011e9
static void sub_4011e9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401225 at 0x401225
static void sub_401225()
{
}


// Function: sub_401229 at 0x401229
static void sub_401229()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401239 at 0x401239
static void sub_401239()
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
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: sub_40127c at 0x40127c
static void sub_40127c()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401280
void test_cpp_constructor()
{
 return;
}


struct Base {
 unsigned long long *vtable;
};

// Function: sub_401292 at 0x401292
static void sub_401292(unsigned long a0)
{
 struct Base base;
 base.vtable = 0;
 call_virtual_func(&base, 0);
 return;
}

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 ((void(*)())arg_0->vtable[0])();
}


// Function: sub_4012a8 at 0x4012a8
static void sub_4012a8()
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
static void sub_4012b6()
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
static void sub_4012c6()
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
static void sub_4012d6()
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
static void sub_4012e6()
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
static void sub_4012f6()
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
static void sub_401306()
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
static void sub_401316()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401320
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax
 unsigned long long v2; // r14

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}








// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
static void sub_4013e6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0
extern char g_403d78;
extern char g_403da0;

void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operatornew(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operatornew(8);
 *(p) = (struct_0 *)&g_403da0;
 operatordelete(ptr);
 ((void(*)(void*))(*p)->field_8)(*p);
 return;
}


// Function: sub_401492 at 0x401492
static void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI8RTTIBase;
extern char g_40207d[];
extern char g_40209b[];
extern char g_4020b7[];
extern char g_4020d3[];
extern char g_4020ef[];
extern char g_40210c[];
extern char g_402128[];
extern char g_402144[];
extern char g_402160[];
extern char g_40217c[];
extern char g_402199[];
extern char g_4021b6[];
extern char g_4021d4[];
extern char g_403d78;
extern char g_403da0;

void test_cpp_oo_features()
{
 void* ptr; // r14
 struct_0 **p; // r12
 unsigned int v10; // ebx
 unsigned int v11; // ebp
 unsigned int v0; // [bp-0x50]
 char v1[15]; // [bp-0x4c]
 unsigned long long flag1; // [bp-0x3d]
 char result; // [bp-0x2d]

 puts(g_4021d4);
 flag1 = 0;
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(g_40207d, (unsigned int)strlen(v1) + 4700);
 printf(g_40209b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_4020b7, 42);
 printf(g_4020d3, 71);
 printf(g_4020ef, 650);
 printf(g_40210c, 22);
 printf(g_402128, 39);
 printf(g_402144, 16);
 printf(g_402160, 85);
 printf(g_40217c, 0);
 printf(g_402199, 703);
 ptr = operatornew(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operatornew(8);
 *(p) = (struct_0 *)&g_403da0;
 v10 = (!__dynamic_cast(ptr, (void*)&_ZTI8RTTIBase, (void*)&_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = v10 + 200;
 operatordelete(ptr);
 ((void(*)(void*))(*p)->field_8)(*p);
 printf(g_4021b6, v11 + 14);
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

static void sub_40168a(unsigned long a0, unsigned long a1)
{
 template_max_int(10, 20);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
static int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401698 at 0x401698
static void sub_401698()
{
 template_max_double(10.5, 20.5);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x401698
static double template_max_double(double arg_0, double arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_4016a5 at 0x4016a5

static void sub_4016a5(unsigned long a0, unsigned long a1)
{
 int x = 5, y = 10;
 template_swap_int(&x, &y);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
static void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *ptr;
 *ptr = *p;
 *p = v1;
 return;
}


// Function: MaxV
static int MaxV(unsigned long long a, unsigned long long b)
{
 return (a > b) ? a : b;
}


// Function: sub_4016b9 at 0x4016b9

static void sub_4016b9(unsigned long a0)
{
 char buf[44];
 Container_int_Constructor(buf);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
static int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}


// Function: sub_4016c8 at 0x4016c8

static void sub_4016c8(unsigned long a0)
{
 char buf[44];
 Container_int_push(buf, 42);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
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


// Function: sub_4016e4 at 0x4016e4

static void sub_4016e4(unsigned long a0, unsigned long a1)
{
 char buf[44];
 Container_int_get(buf, 0);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
static void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401701 at 0x401701

static void sub_401701(unsigned long a0)
{
 char buf[44];
 Container_int_getSize(buf);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
static void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401714 at 0x401714

static void sub_401714(unsigned long a0)
{
 char buf[84];
 Container_double_Constructor(buf);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
static int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}


// Function: sub_401728 at 0x401728

static void sub_401728(unsigned long a0)
{
 char buf[84];
 Container_double_push(buf, 3.14);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
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


// Function: sub_401746 at 0x401746

static void sub_401746(unsigned long a0, unsigned long a1)
{
 char buf[84];
 Container_double_get(buf, 0);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
static void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401764 at 0x401764

static void sub_401764(unsigned long a0)
{
 char buf[84];
 Container_double_getSize(buf);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
static void Container_double_getSize(void* this_ptr)
{
 return;
}





// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
static int RTTIDerivedA_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_401785 at 0x401785

static void sub_401785(unsigned long a0)
{
 char buf[8];
 RTTIDerivedA_getType(buf);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
static void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}





// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
static int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_4017a1 at 0x4017a1
static void sub_4017a1(unsigned long a0)
{
 char buf[8];
 RTTIBase_destructor(buf);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
static int RTTIDerivedB_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_4017b5 at 0x4017b5

static void sub_4017b5(unsigned long a0)
{
 char buf[8];
 RTTIDerivedB_getType(buf);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
static void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


