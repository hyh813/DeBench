// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

/* Forward declarations for C++ runtime functions */
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exc, void *tinfo, void *dest);
extern void __cxa_begin_catch(void *exc);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void *__cxa_current_exception_type(void);
extern int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);

/* Forward declarations for operator new/delete */
extern void *operatornew(size_t size);
extern void operatordelete(void *ptr);

/* Define operator new/delete */
void *operatornew(size_t size)
{
 return malloc(size);
}

void operatordelete(void *ptr)
{
 free(ptr);
}

/* Forward declarations for test functions */
extern void test_cpp_member_func(void);
extern void test_cpp_constructor(void);
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
extern int main(void);

/* Forward declaration for Base struct */
struct Base;

/* Forward declaration for call_virtual_func */
extern void call_virtual_func(struct Base *arg_0, int arg_1);

/* Forward declarations for template functions */
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern void template_swap_int(int *ptr, int *p);

/* Forward declarations for Container class methods */
extern void Container_int_Constructor(void *ptr);
extern void Container_int_push(void *ptr, int arg_0);
extern void Container_int_get(void *this_ptr, int arg_0);
extern unsigned int Container_int_getSize(void *this_ptr);
extern void Container_double_Constructor(void *ptr);
extern void Container_double_push(void *ptr, double arg_0);
extern void Container_double_get(void *this_ptr, int arg_0);
extern unsigned int Container_double_getSize(void *this_ptr);

/* Forward declarations for RTTI classes */
extern int RTTIDerivedA_destructor(void *this_ptr);
extern void RTTIDerivedA_getType(void *this_ptr);
extern int RTTIBase_destructor(void *this_ptr);
extern int RTTIDerivedB_destructor(void *this_ptr);
extern void RTTIDerivedB_getType(void *this_ptr);

/* Helper function */
extern unsigned long long MaxV(unsigned long long a, unsigned long long b);

/* Define missing global variables */
char g_40207d[] = "Length: %d\n";
char g_40209b[] = "Count: %d\n";
char g_4020b7[] = "Value: %d\n";
char g_4020d3[] = "Num: %d\n";
char g_4020ef[] = "Size: %d\n";
char g_40210c[] = "Idx: %d\n";
char g_402128[] = "Pos: %d\n";
char g_402144[] = "Off: %d\n";
char g_402160[] = "Val: %d\n";
char g_40217c[] = "Zero: %d\n";
char g_402199[] = "Big: %d\n";
char g_4021b6[] = "Result: %d\n";
char g_4021d4[] = "Starting test...\n";
char g_403d78 = 0;
char g_403da0 = 0;

/* Define MaxV function */
unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
 return (a > b) ? a : b;
}

/* Define LifecycleClass::instance_count */
unsigned int _ZN14LifecycleClass14instance_countE = 0;

/* Define RTTI type info */
void *_ZTIi = 0;
void *_ZTI12RTTIDerivedA = 0;
void *_ZTI8RTTIBase = 0;
void *_ZTIZ18test_cpp_exceptionvE16DerivedException = 0;

/* Forward declarations for CRT stub functions */
extern void _start(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void frame_dummy(void);

typedef struct struct_1 {
 void (*field_8)(void *arg);
} struct_1;

typedef struct struct_0 {
 char padding_0[8];
 struct_1 *field_8;
} struct_0;

extern struct_0 *g_403fe8;




// Function: sub_401020 at 0x401020
unsigned long long g_404008;

void sub_401020(void)
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1 = "test"; // rdi

 return printf(v1);
}


// Function: _GLOBAL__sub_I_5_1_cpp at 0x401120
void _GLOBAL__sub_I_5_1_cpp()
{
 return;
}






/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401225 at 0x401225
void sub_401225()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401239 at 0x401239
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
void sub_401292(unsigned long a0)
{
 call_virtual_func((struct Base *)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
struct Base {
 unsigned long long *vtable;
};

extern void call_virtual_func(struct Base *arg_0, int arg_1);

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 void (*func_ptr)(void) = (void (*)(void))((unsigned long long *)arg_0)[0];
 if (func_ptr) func_ptr();
}


// Function: sub_4012a8 at 0x4012a8
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
void sub_401316()
{
 test_cpp_exception();
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x401320
extern void *_ZTIi;

void test_cpp_exception()
{
 /* Exception handling stub - CRT functions removed */
 return;
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
 if (p && *p) (*p)->field_8->field_8(*p);
 return;
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_cpp_oo_features();
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4014a0
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern void *_ZTI12RTTIDerivedA;
extern void *_ZTI8RTTIBase;
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
 char v1[16]; // [bp-0x4c]
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
 v10 = 30;
 v11 = v10;
 operatordelete(ptr);
 if (p && *p) (*p)->field_8->field_8(*p);
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
void sub_40168a(unsigned long a0, unsigned long a1)
{
 template_max_int(0, 0);
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
void sub_401698()
{
 template_max_double(0.0, 0.0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
double template_max_double(double arg_0, double arg_1)
{
 return (unsigned long long)(MaxV((unsigned long long)arg_0, (unsigned long long)arg_1));
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(unsigned long a0, unsigned long a1)
{
 template_swap_int((int*)a0, (int*)a1);
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
void sub_4016b9(unsigned long a0)
{
 Container_int_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
void Container_int_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[40]) = 0;
}


// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(unsigned long a0)
{
 Container_int_push((void*)a0, 0);
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)((char*)ptr)[40];
 if (index <= 9)
 {
 *((unsigned int *)&((char*)ptr)[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
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
void sub_401701(unsigned long a0)
{
 Container_int_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
unsigned int Container_int_getSize(void* this_ptr)
{
 return 0;
}


// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 Container_double_Constructor((void*)a0);
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)&((char*)ptr)[80]) = 0;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 Container_double_push((void*)a0, 0.0);
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)((char*)ptr)[80];
 if (index <= 9)
 {
 *((unsigned int *)&((char*)ptr)[80]) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
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
void sub_401764(unsigned long a0)
{
 Container_double_getSize((void*)a0);
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
unsigned int Container_double_getSize(void* this_ptr)
{
 return 0;
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
 operatordelete(this_ptr);
 return 0;
}


// Function: sub_4017b5 at 0x4017b5
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


