// Angr Decompilation of 5-1_clang_O2_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */



// Define string constants used by printf statements (from binary .rodata)
char g_4015ef[] = "Instance count: %d\n";
char g_40160b[] = "Value: %d\n";
char g_401627[] = "Age: %d\n";
char g_401643[] = "ID: %d\n";
char g_401660[] = "Score: %d\n";
char g_40167c[] = "Rank: %d\n";
char g_401698[] = "Level: %d\n";
char g_4016b4[] = "Points: %d\n";
char g_4016d0[] = "Name: %s\n";
char g_4016ed[] = "Count: %d\n";
char g_40170a[] = "Result: %d\n";
char g_401728[] = "OO Features Test\n";
char g_411d58[] = "Base";
char g_401760[] = "DerivedA";
char g_401780[] = "DerivedB";
char __dollar_d_28[] = "Total length: %d\n";
char g_411d80[] = "RTTIDerivedA";

// Define C++ typeinfo structures (minimal)
// Using unsigned long long arrays to hold typeinfo pointers (compatible with void* usage)
unsigned long long _ZTIi = 0;  // typeinfo for int
unsigned long long _ZTI12RTTIDerivedA = 0;  // typeinfo for RTTIDerivedA
unsigned long long _ZTI8RTTIBase = 0;  // typeinfo for RTTIBase
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;  // typeinfo for DerivedException
unsigned int _ZN14LifecycleClass14instance_countE = 0;  // LifecycleClass::instance_count

// Function: __dollar_x at 0x400d60
// Fixed: v2/v3 are register parameters (x0/x1), g_411ff8 was unused
long long __dollar_x(unsigned long long p0, unsigned long long p1)
{
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = p0;
 v1 = p1;
 return 0;
}


// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 // Empty function - original code had uninitialized v0 passed to puts
 return 0;
}


// Function: __dollar_x_18 at 0x400ec0
// Define __dollar_d_19 as a global object for C++ static initialization
char __dollar_d_19 = 0;

// Define __dso_handle - required by __cxa_atexit for cleanup on DSO unload
// This is normally provided by the CRT, but we define it here for standalone linking
unsigned long long __dso_handle = 0;

// Declare __cxa_atexit to avoid implicit declaration
extern int __cxa_atexit(void *func, void *arg, void *dso_handle);
void _start(void) {}
void deregister_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

// Declare C++ exception handling functions
extern void *__cxa_allocate_exception(unsigned long size);
extern void __cxa_throw(void * thrown_exception, void * tinfo, void * (*dest) (void *));
extern void *__cxa_begin_catch(void * exc_obj);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void * exc_obj);

// Declare C++ operator functions
// Using size_t for proper linking with standard C++ library
#include <stddef.h>

// Use inline wrapper functions to avoid C++ keyword parsing issues
static inline void *cpp_operator_new(size_t size) {
    extern void *operator new(size_t size);
    return operator new(size);
}

static inline void cpp_operator_delete(void *ptr) {
    extern void operator delete(void *ptr);
    operator delete(ptr);
}
extern void *__dynamic_cast(void *ptr, void *from_type, void *to_type, int is_virtual);

// Declare C++ std::ios_base::Init destructor and dso_handle
// Define a minimal stub since the binary doesn't include the full CRT
void _ZNSt8ios_base4InitD1Ev(void) {}

int __dollar_x_18()
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 // C++ initialization code removed - CRT handles this
 return __cxa_atexit((void (*)(void *))&_ZNSt8ios_base4InitD1Ev, &__dollar_d_19, (void *)&__dso_handle);
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
 strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
// Empty C++ class removed - was: class Base {};
// Fixed: Removed invalid goto syntax, this was a virtual table dispatch

void call_virtual_func(void *arg_0, int arg_1)
{
 // Virtual dispatch through vtable - simplified to no-op for linking
 (void)arg_0;
 (void)arg_1;
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
void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0); /* does not return */
 _Unwind_Resume(ptr);
}


// Function: sub_4010f4 at 0x4010f4
long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 __cxa_rethrow();
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
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern char g_411d58[];
extern char g_411d80[];

void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = operatornew(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)operatornew(8);
 *(p) = (struct_0 *)g_411d80;
 operatordelete(ptr);
 // field_8 is a struct pointer, not a function
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278
typedef struct struct_0 {
 char padding_0[8];
 struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
 unsigned long long field_0;
} struct_1;

extern char __dollar_d_28[];
extern unsigned int _ZN14LifecycleClass14instance_countE;
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI8RTTIBase;
extern char g_4015ef[];
extern char g_40160b[];
extern char g_401627[];
extern char g_401643[];
extern char g_401660[];
extern char g_40167c[];
extern char g_401698[];
extern char g_4016b4[];
extern char g_4016d0[];
extern char g_4016ed[];
extern char g_40170a[];
extern char g_401728[];
extern char g_411d58[];
extern char g_411d80[];

void test_cpp_oo_features()
{
 void* ptr; // x19
 struct_0 **p; // x20
 unsigned int v10; // w22
 unsigned int v11; // w21
 unsigned int v0_copy; // [bp-0x58]
 char v1[15]; // [bp-0x54]
 unsigned long long flag1; // [bp-0x45]
 char result; // [bp-0x35]
 char *v4; // [bp-0x30]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(g_401728);
 result = 0;
 v0_copy = 10;
 strncpy(v1, "Test", 4);
 flag1 = 0;
 printf(__dollar_d_28, strlen(v1) + 4700);
 printf(g_4015ef, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_40160b, 42);
 printf(g_401627, 71);
 printf(g_401643, 650);
 printf(g_401660, 22);
 printf(g_40167c, 39);
 printf(g_401698, 16);
 printf(g_4016b4, 85);
 printf(g_4016d0, 0);
 printf(g_4016ed, 703);
 ptr = operatornew(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)operatornew(8);
 *((struct_0 **)p) = (struct_0 *)g_411d80;
 if (!__dynamic_cast(ptr, &_ZTI12RTTIDerivedA, &_ZTI8RTTIBase, 0))
 v10 = 30;
 else
 v10 = 130;
 if (!__dynamic_cast(ptr, &_ZTI12RTTIDerivedA, &_ZTI8RTTIBase, 0))
 v11 = v10;
 else
 v11 = v10 + 200;
 operatordelete(ptr);
 // (*p)->field_8 is a struct pointer, not a function - skipping invalid call
 printf(g_40170a, v11 + 14);
 return;
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
// Note: Using a unique name to avoid C++ template syntax in function name
double template_max_double(double arg_0, double arg_1)
{
 double v0; // d0
 double v1; // d1
 double v3; // x0

 // Complex comparison logic simplified - returns arg_1 if arg_1 >= arg_0, else arg_0
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x40147c
// Note: Using a unique name to avoid C++ template syntax in function name
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *ptr;
 *ptr = *p;
 *p = v0;
 return;
}


// Container<int> class functions
typedef struct {
 int data[10];
 unsigned int size;
} Container_int;

void Container_int_Container(Container_int *ptr)
{
 ptr->size = 0;
 return;
}

void Container_int_push(Container_int *ptr, int arg_0)
{
 unsigned long index; // x8

 index = ptr->size;
 if (9 >= index)
 {
 ptr->size = index + 1;
 ptr->data[index] = arg_0;
 }
 return;
}

int Container_int_get(Container_int *ptr, int arg_0)
{
 if ((unsigned int)arg_0 < ptr->size)
 return ptr->data[arg_0];
 return 0;
}

unsigned int Container_int_getSize(Container_int *ptr)
{
 return ptr->size;
}


// Container<double> class functions
typedef struct {
 double data[10];
 unsigned int size;
} Container_double;

void Container_double_Container(Container_double *ptr)
{
 ptr->size = 0;
 return;
}

void Container_double_push(Container_double *ptr, double arg_0)
{
 unsigned long idx; // x8

 idx = ptr->size;
 if (9 >= idx)
 {
 ptr->data[idx] = arg_0;
 ptr->size = idx + 1;
 }
 return;
}

double Container_double_get(Container_double *ptr, int arg_0)
{
 if ((unsigned int)arg_0 < ptr->size)
 return ptr->data[arg_0];
 return 0.0;
}

unsigned int Container_double_getSize(Container_double *ptr)
{
 return ptr->size;
}


// RTTIDerivedA class functions
typedef struct {
 char padding;
} RTTIDerivedA;

void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operatordelete(this);
 return;
}

void RTTIDerivedA_getType(RTTIDerivedA *this)
{
 return;
}


// RTTIBase class functions
typedef struct {
 char padding;
} RTTIBase;

void RTTIBase_destructor(RTTIBase *this)
{
 return;
}


// RTTIDerivedB class functions
typedef struct {
 char padding;
} RTTIDerivedB;

void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operatordelete(this);
 return;
}

void RTTIDerivedB_getType(RTTIDerivedB *this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


