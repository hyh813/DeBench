// Angr Decompilation of 5-1_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    char padding_0[4];
    void (*field_4)(struct_0 *);
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_0 *g_403ff4;

// Global variable definitions
char g_403ecc = 0;
char g_403ee0 = 0;
char g_402081[] = "";
char g_40209f[] = "";
char g_4020bb[] = "";
char g_4020d7[] = "";
char g_4020f3[] = "";
char g_402110[] = "";
char g_40212c[] = "";
char g_402148[] = "";
char g_402164[] = "";
char g_402180[] = "";
char g_40219d[] = "";
char g_4021ba[] = "";
char g_4021d8[] = "";

extern void frame_dummy(void);



// Forward declarations for functions called before definition
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double a0, double a1);
extern void template_swap_int(int *ptr, int *p);
extern int Container_int_Constructor(void* ptr);
extern void Container_int_push(void* ptr, int arg_0);
extern void Container_int_get(void* this_ptr, int arg_0);
extern void Container_int_getSize(void* this_ptr);
extern int Container_double_Constructor(void* ptr);
extern void Container_double_push(void* ptr);
extern void Container_double_get(void* this_ptr, int arg_0);
extern void Container_double_getSize(void* this_ptr);
extern int RTTIDerivedA_destructor(void* this_ptr);
extern void RTTIDerivedA_getType(void* this_ptr);
extern int RTTIBase_destructor(void* this_ptr);
extern int RTTIDerivedB_destructor(void* this_ptr);
extern void RTTIDerivedB_getType(void* this_ptr);
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

// x86 thunk functions
extern int __x86_get_pc_thunk_bx(void);
extern int __x86_get_pc_thunk_dx(void);
extern int __x86_get_pc_thunk_di(int a0, int a1);
extern unsigned int __do_global_ctors_aux(void);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void register_tm_clones(void);

// Forward declarations for missing functions
extern void _start(void);
extern int main(void);

// C++ RTTI typeinfo symbol
extern void* _ZTIi;

// Stub implementations for C++ runtime functions
static void* operator_new(unsigned int size) { return malloc(size); }
static void operator_delete(void* ptr) { free(ptr); }
static int __cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) { return 0; }
static void* __cxa_allocate_exception(unsigned int size) { return malloc(size); }
static void __cxa_throw(void* exc, void* type, void* dest) { }
static void* __cxa_begin_catch(void* exc) { return exc; }
static void __cxa_end_catch(void* exc) { }
static void __cxa_rethrow(void* exc) { }
static void _Unwind_Resume(void* exc) { }
static void _ZNSt8ios_base4InitD1Ev(void* ptr) { }




// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_401130 at 0x401130
int sub_401130()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
}


// Function: _GLOBAL__sub_I_5_1_cpp at 0x401140
char _ZStL8__ioinit = 0;
unsigned int __dso_handle = 0;



int _GLOBAL__sub_I_5_1_cpp()
{
 unsigned int v2; // eax
 unsigned int v0; // [bp-0xc]

 v0 = v2;
 return __cxa_atexit(_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_40117b at 0x40117b
void sub_40117b()
{
 return;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
}


// Function: sub_4011ac at 0x4011ac
void sub_4011ac()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011b0
int __x86_get_pc_thunk_bx()
{
 return 0;
}






/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011f3 at 0x4011f3
void sub_4011f3()
{
}






/* CRT stub function register_tm_clones removed by preprocessor */








/* CRT stub function __do_global_dtors_aux removed by preprocessor */








/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x4012e9
int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x4012ed
int __x86_get_pc_thunk_di(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_4012f1 at 0x4012f1
int sub_4012f1()
{
 test_cpp_member_func();
 return 0;
}


// Function: _Z20test_cpp_member_funcv at 0x401300
static void test_cpp_member_func()
{
 unsigned int v0; // [bp-0x2c]
 char v1[4]; // [bp-0x28]
 char v2; // [bp-0x24]
 unsigned int v3; // [bp-0x10]
 unsigned int result; // [bp-0xd]
 char flag1; // [bp-0x9]

 result = 0;
 v3 = 0;
 memset(&v2, 0, 20);
 strncpy(v1, "Test", 4);
 flag1 = 0;
 v0 = 10;
 strlen(v1);
 return;
}


// Function: sub_401373 at 0x401373
void sub_401373()
{
 test_cpp_constructor();
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401380
static void test_cpp_constructor()
{
 return;
}


// Function: sub_40139e at 0x40139e
int sub_40139e()
{
 return 0;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013a0
typedef struct Base {
    void (*vtable)(struct Base *, int);
} Base;

void call_virtual_func(Base *arg_0, int arg_1)
{
 arg_0->vtable(arg_0, arg_1);
 return;
}


// Function: sub_4013c5 at 0x4013c5
void sub_4013c5()
{
 test_cpp_virtual_func();
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013d0
static void test_cpp_virtual_func()
{
 return;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
 test_cpp_multiple_inheritance();
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013e0
static void test_cpp_multiple_inheritance()
{
 return;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 test_cpp_diamond_inheritance();
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x4013f0
static void test_cpp_diamond_inheritance()
{
 return;
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
 test_cpp_operator_overload();
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401400
static void test_cpp_operator_overload()
{
 return;
}


// Function: sub_401406 at 0x401406
void sub_401406()
{
 test_cpp_template_func();
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x401410
static void test_cpp_template_func()
{
 return;
}


// Function: sub_401416 at 0x401416
void sub_401416()
{
 test_cpp_template_class();
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401420
static void test_cpp_template_class()
{
 return;
}


// Function: sub_401426 at 0x401426
void sub_401426()
{
 test_cpp_lambda();
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401430
static void test_cpp_lambda()
{
 return;
}


// Function: sub_401436 at 0x401436
int sub_401436()
{
 test_cpp_exception();
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x401440
extern int puts(const char* s);
extern int printf(const char* format, ...);
extern unsigned int strlen(const char* s);
extern void* memset(void* s, int c, unsigned int n);
extern char* strncpy(char* dest, const char* src, unsigned int n);

static void test_cpp_exception()
{
 unsigned int *ptr;
 unsigned int v2;
 unsigned int v3;

 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}








// Function: sub_40152f at 0x40152f
void sub_40152f()
{
 test_cpp_smart_ptr();
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x401530
static void test_cpp_smart_ptr()
{
 return;
}


// Function: sub_401536 at 0x401536
int sub_401536()
{
 test_cpp_rtti();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x401540
extern char g_403ecc;
extern char g_403ee0;

static void test_cpp_rtti()
{
 void* ptr;
 struct_0 **p;
 void* v0;

 ptr = operator_new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator_new(4);
 *(p) = (struct_0 *)&g_403ee0;
 operator_delete(v0);
 (*p)->field_4(*p);
 return;
}


// Function: sub_4015f3 at 0x4015f3
int sub_4015f3()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401600
extern char g_402081[];
extern char g_40209f[];
extern char g_4020bb[];
extern char g_4020d7[];
extern char g_4020f3[];
extern char g_402110[];
extern char g_40212c[];
extern char g_402148[];
extern char g_402164[];
extern char g_402180[];
extern char g_40219d[];
extern char g_4021ba[];
extern char g_4021d8[];

static void test_cpp_oo_features()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 char v2; // [bp-0x30]
 char v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x18]
 unsigned int result; // [bp-0x15]
 char flag1; // [bp-0x11]

 puts((const char*)&g_4021d8);
 result = 0;
 v4 = 0;
 memset(&v3, 0, 20);
 strncpy(&v2, "Test", 4);
 flag1 = 0;
 v1 = 10;
 strlen(&v2);
 printf((const char*)&g_402081);
 printf((const char*)&g_40209f);
 printf((const char*)&g_4020bb);
 printf((const char*)&g_4020d7);
 printf((const char*)&g_4020f3);
 printf((const char*)&g_402110);
 printf((const char*)&g_40212c);
 printf((const char*)&g_402148);
 printf((const char*)&g_402164);
 test_cpp_exception();
 printf((const char*)&g_402180);
 printf((const char*)&g_40219d);
 ptr = operator_new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0 **)operator_new(4);
 *(p) = (struct_0 *)&g_403ee0;
 operator_delete(v0);
 (*p)->field_4(*p);
 printf((const char*)&g_4021ba);
 return;
}


// Function: sub_40180f at 0x40180f
int sub_40180f()
{
 main();
 return 0;
}


// Function: main at 0x401810
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: sub_40182c at 0x40182c
void sub_40182c(unsigned int a0, unsigned int a1)
{
 template_max_int(a0, a1);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401830
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: sub_40183e at 0x40183e
double template_max_double(double a0, double a1)
{
 if (a0 <= a1)
 return a1;
 return a0;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x401840
// Function: sub_401851 at 0x401851
void sub_401851(unsigned int a0, unsigned int a1)
{
 template_swap_int((int*)a0, (int*)a1);
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x401860
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // edx

 v0 = *ptr;
 *ptr = *p;
 *p = v0;
 return;
}





// Function: _ZN9ContainerIiEC2Ev at 0x401880
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 40)) = 0;
 return 0;
}





// Function: _ZN9ContainerIiE4pushEi at 0x401890
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = (int)((char*)ptr)[40];
 if (index <= 9)
 {
 *((unsigned int *)((char*)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}





// Function: _ZNK9ContainerIiE3getEi at 0x4018b0
void Container_int_get(void* this_ptr, int arg_0)
{
 return;
}





// Function: _ZNK9ContainerIiE7getSizeEv at 0x4018d0
void Container_int_getSize(void* this_ptr)
{
 return;
}







// Function: _ZN9ContainerIdEC1Ev at 0x4018e0
int Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char*)ptr + 80)) = 0;
 return 0;
}





// Function: _ZN9ContainerIdE4pushEd at 0x4018f0
void Container_double_push(void* ptr)
{
 unsigned int idx; // ecx

 idx = (int)((char*)ptr)[80];
 if (idx <= 9)
 {
 *((unsigned int *)((char*)ptr + 80)) = idx + 1;
 *((double *)((char *)ptr + 8 * idx)) = 0.0;
 }
 return;
}





// Function: _ZNK9ContainerIdE3getEi at 0x401910
void Container_double_get(void* this_ptr, int arg_0)
{
 if (arg_0 >= 0 && (int)((char*)this_ptr)[80] > arg_0)
 {
 }
 return;
}





// Function: _ZNK9ContainerIdE7getSizeEv at 0x401930
void Container_double_getSize(void* this_ptr)
{
 return;
}


// Function: sub_401938 at 0x401938
int sub_401938()
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401940
int RTTIDerivedA_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
 return 0;
}





// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401970
void RTTIDerivedA_getType(void* this_ptr)
{
 return;
}


// Function: sub_401976 at 0x401976
void sub_401976()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401980
int RTTIBase_destructor(void* this_ptr)
{
 return 0;
}


// Function: sub_401981 at 0x401981
int sub_401981()
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x401990
int RTTIDerivedB_destructor(void* this_ptr)
{
 operator_delete(this_ptr);
 return 0;
}





// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4019c0
void RTTIDerivedB_getType(void* this_ptr)
{
 return;
}






/* CRT stub function __do_global_ctors_aux removed by preprocessor */




// Function: sub_401a12 at 0x401a12
void sub_401a12()
{
}



/* CRT stub function _fini removed by preprocessor */


