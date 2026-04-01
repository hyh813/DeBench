// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Additional function declarations
extern int puts(const char *s);

// C++ runtime function declarations
extern void *operatornew(unsigned long size);
extern void operatordelete(void *ptr);
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void *exc, void *type_info, void *dest);
extern void __cxa_begin_catch(void *exc);
extern void __cxa_end_catch();
extern void __cxa_rethrow();
extern void _Unwind_Resume(unsigned long long exc);
extern void *__dynamic_cast(void *src, void *src_type, void *dest_type, int src_ptr_type);
extern unsigned long long MaxV(unsigned long long a, unsigned long long b);

// C++ runtime stub implementations
void *operatornew(unsigned long size) { return malloc(size); }
void operatordelete(void *ptr) { free(ptr); }
void __cxa_throw(void *exc, void *type_info, void *dest) { }
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle) { return 0; }
void _ZNSt8ios_base4InitD1Ev(void) { }
void *__cxa_allocate_exception(unsigned long size) { return malloc(size); }
void *__dynamic_cast(void *src, void *src_type, void *dest_type, int src_ptr_type) { return 0; }
unsigned long long MaxV(unsigned long long a, unsigned long long b) { return (a > b) ? a : b; }

// Typeinfo definitions
void* _ZTI8RTTIBase = 0;
void* _ZTI12RTTIDerivedA = 0;

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    char padding_0[8];
    void (*field_8)(struct struct_0 *);
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 *g_403fe8;

// Missing global variable definitions
char* g_403da0 = "g_403da0_string";
const char* g_4020d3 = "g_4020d3_string";
const char* g_4021b6 = "g_4021b6_string";
char* g_403d78 = "g_403d78_string";
const char* g_40207d = "g_40207d_string";
const char* g_40209b = "g_40209b_string";
const char* g_4020b7 = "g_4020b7_string";
const char* g_4020ef = "g_4020ef_string";
const char* g_40210c = "g_40210c_string";
const char* g_402128 = "g_402128_string";
const char* g_402144 = "g_402144_string";
const char* g_402160 = "g_402160_string";
const char* g_40217c = "g_40217c_string";
const char* g_402199 = "g_402199_string";
const char* g_4021d4 = "g_4021d4_string";

void _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = (unsigned long long *)g_403fe8;
 return;
}


// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 ((void(*)())g_404010)();
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = NULL; // rdi

 return printf("%s", v1 ? v1 : "");
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
extern void _ZNSt8ios_base4InitD1Ev(void);
extern char _ZStL8__ioinit;
extern unsigned long long __dso_handle;
extern int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);

void _GLOBAL__sub_I_5_1_cpp()
{
 __cxa_atexit((void(*)(void))&_ZNSt8ios_base4InitD1Ev, (void*)&_ZStL8__ioinit, (void*)&__dso_handle);
 return;
}


// Function: sub_401147 at 0x401147
void _start(void)
{
 /* CRT stub - does not return */
}

void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198773 */
}


// Function: sub_401176 at 0x401176
void deregister_tm_clones(void)
{
 return;
}

void sub_401176()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011a9 at 0x4011a9
void register_tm_clones(void)
{
 return;
}

void sub_4011a9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */







// Function: sub_401225 at 0x401225
void sub_401225()
{
}


// Function: sub_401229 at 0x401229
void frame_dummy(void)
{
 return;
}

void sub_401229()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function declarations for called functions
extern void test_cpp_member_func(void);

// Typeinfo declarations
extern void* _ZTI8RTTIBase;
extern void* _ZTI12RTTIDerivedA;
extern void* _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern void test_cpp_constructor(void);
extern void call_virtual_func(void);
extern void test_cpp_virtual_func(void);
extern void test_cpp_multiple_inheritance(void);
extern void test_cpp_diamond_inheritance(void);
extern void test_cpp_operator_overload(void);
extern void test_cpp_template_func(void);
extern void test_cpp_template_class(void);
extern void test_cpp_lambda(void);
extern void test_cpp_exception(void);
extern void test_cpp_smart_ptr(void);
extern void test_cpp_rtti(void);
extern void test_cpp_oo_features(void);
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern void template_swap_int(unsigned long ptr, unsigned long p);
extern int Container_int_Constructor(void* ptr);
extern void Container_int_push(void* ptr, int arg_0);
extern void Container_int_get(void* this_ptr, int arg_0);
extern void Container_int_getSize(void* this_ptr);
extern int Container_double_Constructor(void* ptr);
extern void Container_double_push(void* ptr, double arg_0);
extern void Container_double_get(void* this_ptr, int arg_0);
extern void Container_double_getSize(void* this_ptr);
extern int RTTIDerivedA_destructor(void* this_ptr);
extern void RTTIDerivedA_getType(void* this_ptr);
extern int RTTIBase_destructor(void* this_ptr);
extern int RTTIDerivedB_destructor(void* this_ptr);
extern void RTTIDerivedB_getType(void* this_ptr);
extern int main(void);

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
 (void)strlen(v1);
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


// Function: sub_401292 at 0x401292
extern void call_virtual_func(void);
void sub_401292(unsigned long a0)
{
 call_virtual_func();
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
typedef struct Base {
    void *vtable;
} Base;

void call_virtual_func(void)
{
 // Stub function - signature mismatch in decompiled code
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
extern void* _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // rax

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
}








// Function: _Z18test_cpp_smart_ptrv at 0x4013e0
void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_rtti();
 return;
}


// Function: _Z13test_cpp_rttiv at 0x4013f0
extern char* g_403d78;
extern char* g_403da0;

void test_cpp_rtti()
{
 void* ptr; // r14
 struct_0 **p; // r12

 ptr = operatornew(8);
 *((char **)ptr) = g_403d78;
 p = (struct_0 **)operatornew(8);
 *(p) = (struct_0 *)&g_403da0;
 operatordelete(ptr);
 (*p)->field_8(*p);
 return;
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0
unsigned int _ZN14LifecycleClass14instance_countE = 0;
extern void* _ZTI12RTTIDerivedA;
extern void* _ZTI8RTTIBase;
extern const char* g_40207d;
extern const char* g_40209b;
extern const char* g_4020b7;
extern const char* g_4020d3;
extern const char* g_4020ef;
extern const char* g_40210c;
extern const char* g_402128;
extern const char* g_402144;
extern const char* g_402160;
extern const char* g_40217c;
extern const char* g_402199;
extern const char* g_4021b6;
extern const char* g_4021d4;
extern char* g_403d78;
extern char* g_403da0;

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
 test_cpp_exception();
 printf(g_40217c, 42);
 printf(g_402199, 703);
 ptr = operatornew(8);
 *((char **)ptr) = g_403d78;
 p = (struct_0 **)operatornew(8);
 *(p) = (struct_0 *)&g_403da0;
 v10 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? v10 : v10 + 200);
 operatordelete(ptr);
 (*p)->field_8(*p);
 printf(g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
void sub_401673()
{
 main();
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
void sub_40168a(int a0, int a1)
{
 template_max_int(a0, a1);
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
void sub_401698(double a0, double a1)
{
 template_max_double(a0, a1);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
double template_max_double(double arg_0, double arg_1)
{
 return (double)(MaxV((unsigned long long)arg_0, (unsigned long long)arg_1));
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(int* a0, int* a1)
{
 template_swap_int((unsigned long)a0, (unsigned long)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap_int(unsigned long ptr, unsigned long p)
{
 unsigned int v1; // eax

 v1 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
void sub_4016b9(void* a0)
{
 Container_int_Constructor(a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(void* a0, int a1)
{
 Container_int_push(a0, a1);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)*((unsigned int *)((char *)ptr + 40));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(void* a0, int a1)
{
 Container_int_get(a0, a1);
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401701 at 0x401701
void sub_401701(void* a0)
{
 Container_int_getSize(a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
void Container_int_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401714 at 0x401714
void sub_401714(void* a0)
{
 Container_double_Constructor(a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return 0;
}


// Function: sub_401728 at 0x401728
void sub_401728(void* a0, double a1)
{
 Container_double_push(a0, a1);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)*((unsigned int *)((char *)ptr + 80));
 if (index <= 9)
 {
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
void sub_401746(void* a0, int a1)
{
 Container_double_get(a0, a1);
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
void Container_double_get(void* this_ptr, int arg_0)
{
 return;
}


// Function: sub_401764 at 0x401764
void sub_401764(void* a0)
{
 Container_double_getSize(a0);
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
int RTTIDerivedA_destructor(void* this_ptr)
{
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_401785 at 0x401785
void sub_401785(void* a0)
{
 RTTIDerivedA_getType(a0);
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
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5(void* a0)
{
 RTTIDerivedB_getType(a0);
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


