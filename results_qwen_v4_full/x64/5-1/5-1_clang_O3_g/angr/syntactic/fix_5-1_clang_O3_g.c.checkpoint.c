// Angr Decompilation of 5-1_clang_O3_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

struct_0 *g_403fe8 = 0;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = (unsigned long long *)g_403fe8;
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
unsigned long long g_404010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]
 void (*func_ptr)(void);

 v0 = g_404008;
 func_ptr = (void (*)(void))g_404010;
 func_ptr();
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = ""; // rdi

 return printf("%s", v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
void _ZNSt8ios_base4InitD1Ev(void) { }
char _ZStL8__ioinit = 0;
extern unsigned long long __dso_handle;

void __cxa_atexit(void (*func)(void), void *arg, void *dso_handle) { }

void _GLOBAL__sub_I_5_1_cpp()
{
 __cxa_atexit((void (*)(void))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, (void *)&__dso_handle);
 return;
}

// C++ RTTI and exception handling externs
void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst) { return src; }
extern void *_ZTIi;
extern unsigned long long _ZTI8RTTIBase;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;


// Function: sub_401147 at 0x401147
extern void _start(void);

void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __builtin_unreachable(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198773 */
}





















// Function: sub_401239 at 0x401239
extern void test_cpp_member_func(void);

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
 strncpy(v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: sub_40127c at 0x40127c
extern void test_cpp_constructor(void);

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


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
struct Base {
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 ((void(*)())(*(long long *)arg_0))();
}


// Function: sub_401292 at 0x401292
extern void call_virtual_func(struct Base *arg_0, int arg_1);

void sub_401292(unsigned long a0)
{
 call_virtual_func(&Base, 0);
 return;
}


// Function: sub_4012a8 at 0x4012a8
extern void test_cpp_virtual_func(void);

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
extern void test_cpp_multiple_inheritance(void);

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
extern void test_cpp_diamond_inheritance(void);

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
extern void test_cpp_operator_overload(void);

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
extern void test_cpp_template_func(void);

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
extern void test_cpp_template_class(void);

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
extern void test_cpp_lambda(void);

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
extern void test_cpp_exception(void);

void sub_401316()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401320
void test_cpp_exception()
{
 return;
}


// Function: sub_40134b at 0x40134b
long long sub_40134b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 return 0;
}





// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
extern void test_cpp_smart_ptr(void);

void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
extern void test_cpp_rtti(void);

void sub_4013e6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0
char g_403d78 = 0;
char g_403da0 = 0;
extern void *operator new(size_t size);
extern void operator delete(void *ptr);

void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operator new(8);
 *(p) = (struct_0 *)&g_403da0;
 operator delete(ptr);
 (*(void (**)(struct_0 **))(*p)->field_8)(p);
 return;
}


// Function: sub_401492 at 0x401492
extern void test_cpp_oo_features(void);

void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0
unsigned int _ZN14LifecycleClass14instance_countE = 0;
unsigned long long _ZTI12RTTIDerivedA = 0;
unsigned long long _ZTI8RTTIBase = 0;
extern char g_40207d[] = "%d\n";
extern char g_40209b[] = "%d\n";
extern char g_4020b7[] = "%d\n";
extern char g_4020d3[] = "%d\n";
extern char g_4020ef[] = "%d\n";
extern char g_40210c[] = "%d\n";
extern char g_402128[] = "%d\n";
extern char g_402144[] = "%d\n";
extern char g_402160[] = "%d\n";
extern char g_40217c[] = "%d\n";
extern char g_402199[] = "%d\n";
extern char g_4021b6[] = "%d\n";
extern char g_4021d4[] = "Test";
extern char g_403d78;
extern char g_403da0;
extern void *__dynamic_cast(void *src, void *src_type, void *dst_type, long src2dst);

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
 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operator new(8);
 *(p) = (struct_0 *)&g_403da0;
 v10 = (!__dynamic_cast(ptr, (void *)&_ZTI8RTTIBase, (void *)&_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = v10 + 200;
 operator delete(ptr);
 (*(void (**)(struct_0 **))(*p)->field_8)(p);
 printf(g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
extern int main(void);

void sub_401673()
{
 main();
 return;
}


// Function: main at 0x401680
extern void test_cpp_oo_features(void);

int main()
{
 unsigned long long v2 = 0; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40168a at 0x40168a
extern int template_max_int(int arg_0, int arg_1);

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
extern double template_max_double(double arg_0, double arg_1);

void sub_401698()
{
 template_max_double(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
 if (a > b) return a;
 return b;
}

double template_max_double(double arg_0, double arg_1)
{
 return (double)MaxV((unsigned long long)arg_0, (unsigned long long)arg_1);
}


// Function: sub_4016a5 at 0x4016a5
extern void template_swap_int(int *ptr, int *p);

void sub_4016a5(unsigned long a0, unsigned long a1)
{
 template_swap_int((int *)a0, (int *)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap_int(int *ptr, int *p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
extern int Container_int_Constructor(void* ptr);

void sub_4016b9(unsigned long a0)
{
 Container_int_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: sub_4016c8 at 0x4016c8
extern void Container_int_push(void* ptr, int arg_0);

void sub_4016c8(unsigned long a0)
{
 Container_int_push((void*)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)*((int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
extern void Container_int_get(void* this_ptr, int arg_0);

void sub_4016e4(unsigned long a0, unsigned long a1)
{
 Container_int_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401701 at 0x401701
extern void Container_int_getSize(void* this_ptr);

void sub_401701(unsigned long a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401714 at 0x401714
extern int Container_double_Constructor(void* ptr);

void sub_401714(unsigned long a0)
{
 Container_double_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: sub_401728 at 0x401728
extern void Container_double_push(void* ptr, double arg_0);

void sub_401728(unsigned long a0)
{
 Container_double_push((void*)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)*((int *)((char *)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
extern void Container_double_get(void* this_ptr, int arg_0);

void sub_401746(unsigned long a0, unsigned long a1)
{
 Container_double_get((void*)a0, (int)a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401764 at 0x401764
extern void Container_double_getSize(void* this_ptr);

void sub_401764(unsigned long a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
extern void operator delete(void* ptr);

int RTTIDerivedA_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return 0;
}


// Function: sub_401785 at 0x401785
extern void RTTIDerivedA_getType(void* this_ptr);

void sub_401785()
{
 RTTIDerivedA_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
int RTTIDerivedB_destructor(void* this_ptr)
{
 operator delete(this_ptr);
 return 0;
}


// Function: sub_4017b5 at 0x4017b5
extern void RTTIDerivedB_getType(void* this_ptr);

void sub_4017b5()
{
 RTTIDerivedB_getType(0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


