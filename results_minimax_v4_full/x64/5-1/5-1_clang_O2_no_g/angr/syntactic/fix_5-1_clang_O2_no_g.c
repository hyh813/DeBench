// Angr Decompilation of 5-1_clang_O2_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

/* CRT stub functions - declared as extern */
extern "C" {
void _start(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
}

/* External function declarations */
extern "C" {
void* __cxa_allocate_exception(size_t);
void __cxa_throw(void*, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void*);
void __cxa_rethrow(void*);
void _Unwind_Resume(void*);
int __cxa_atexit(void*, void*, void*);
}

/* C++ runtime functions */
extern "C" void* operator new(size_t);
extern "C" void operator delete(void*);
extern "C" void* operator new[](size_t);
extern "C" void operator delete[](void*);
void test_cpp_member_func();
void test_cpp_constructor();
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
unsigned long long MaxV(unsigned long long, unsigned long long);
void* __dynamic_cast(void*, void*, void*, void*);

/* Missing class declarations and template functions */
void call_virtual_func(void*, int);

// Template function declarations (definitions later)
template<typename T> T template_max(T, T);
template<typename T> void template_swap(T&, T&);

/* Container template class definition */
template<typename T>
class Container {
public:
    T data[10];
    unsigned int size;
    
    Container() : size(0) {}
    
    void push(T value) {
        if (size < 10) {
            data[size++] = value;
        }
    }
    
    T get(int index) {
        return data[index];
    }
    
    int getSize() {
        return size;
    }
};

/* MaxV function definition - used by template_max<double> */
unsigned long long MaxV(unsigned long long a, unsigned long long b)
{
    return a >= b ? a : b;
}

/* Forward declarations for RTTI classes */
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;

/* RTTI type info symbols (minimal stubs) */
extern "C" {
char _ZTIi = 0;
unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException = 0;
unsigned long long _ZTI12RTTIDerivedA = 0;
unsigned long long _ZTI8RTTIBase = 0;
}

typedef struct struct_0 {
    void *padding;
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 *g_403fe8;

void _init()
{
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 // goto g_404010; // Fixed: was goto to a variable, not a label
 (void)v0;
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return printf("Error: uninitialized printf call\n");
}


// Function: _GLOBAL__sub_I_ at 0x401120
/* iostream initialization stubs */
extern "C" void _ZNSt8ios_base4InitD1Ev(void);
extern "C" unsigned long long _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I_(void)
{
 // Stub - actual initialization happens elsewhere
 return;
}


// Function: sub_401147 at 0x401147
void sub_401147(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
}


// Function: sub_401176 at 0x401176
void sub_401176()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401225 at 0x401225
void sub_401225()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 frame_dummy();
 return;
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
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 strlen(&v1);
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
 call_virtual_func((void*)a0, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
// Virtual dispatch stub - actual call handled via vtable
void call_virtual_func(void *arg_0, int arg_1)
{
 (void)arg_0;
 (void)arg_1;
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
extern char _ZTIi;

// Forward declaration 
void test_cpp_exception(void);

// Implementation
void test_cpp_exception_impl(void)
{
 void *ptr; // rax

 ptr = __cxa_allocate_exception(4);
 *(int*)ptr = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 // __cxa_throw never returns - noreturn not needed, infinite loop
 while(1) {}
}


// Function: sub_40134b at 0x40134b
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_40134b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v3; // rcx
 unsigned long long v4; // r8
 unsigned long long v5; // r9
 unsigned long long v6; // rax
 unsigned long long v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v9; // r9

 result = a2;
 if (result == 1)
 {
 __cxa_begin_catch(v6);
 __cxa_end_catch();
 __cxa_rethrow();
 }
 return 0;
}


// Function: sub_401368 at 0x401368
void sub_401368(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __cxa_end_catch();
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
 struct_0 *p; // r12

 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0*)operator new(8);
 *(struct_0**)p = &g_403da0;
 operator delete(ptr);
 // field_8 is a pointer to struct_1, not a function - this was a decompilation error
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
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI8RTTIBase;
extern char g_40207d;
extern char g_40209b;
extern char g_4020b7;
extern char g_4020d3;
extern char g_4020ef;
extern char g_40210c;
extern char g_402128;
extern char g_402144;
extern char g_402160;
extern char g_40217c;
extern char g_402199;
extern char g_4021b6;
extern char g_4021d4;
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

 puts((const char*)&g_4021d4);
 flag1 = 0;
 strncpy(v1, "Test", 4);
 v1[4] = '\0';
 result = 0;
 v0 = 10;
 printf((const char*)&g_40207d, (unsigned int)strlen(v1) + 4700);
 printf((const char*)&g_40209b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf((const char*)&g_4020b7, 42);
 printf((const char*)&g_4020d3, 71);
 printf((const char*)&g_4020ef, 650);
 printf((const char*)&g_40210c, 22);
 printf((const char*)&g_402128, 39);
 printf((const char*)&g_402144, 16);
 printf((const char*)&g_402160, 85);
 printf((const char*)&g_40217c, (unsigned long long)test_cpp_exception() & 4294967295);
 printf((const char*)&g_402199, 703);
 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = operator new(8);
 *(p) = &g_403da0;
 v10 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? v10 : v10 + 200);
 operator delete(ptr);
 // field_8 is a pointer to struct_1, not a function - removing invalid function call
 printf((const char*)&g_4021b6, v11 + 14);
 return;
}


// Function: sub_401673 at 0x401673
void sub_401673()
{
 main();
 return;
}


// Function: main at 0x401680
unsigned int main()
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
 (void)a0;
 (void)a1;
 template_max<int>(0, 0);
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
template<typename T>
T template_max(T arg_0, T arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}

template int template_max<int>(int, int);
template double template_max<double>(double, double);


// Function: sub_401698 at 0x401698
void sub_401698()
{
 template_max<double>(0, 0);
 return;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4016a0
double template_max<double>(double arg_0, double arg_1)
{
 return (double)MaxV((unsigned long long)arg_0, (unsigned long long)arg_1);
}


// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(unsigned long a0, unsigned long a1)
{
 int dummy_a = 0, dummy_b = 0;
 template_swap<int>(dummy_a, dummy_b);
 (void)a0;
 (void)a1;
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap<int>(int &ptr, int &p)
{
 int v1; // eax

 v1 = ptr;
 ptr = p;
 p = v1;
 return;
}


// Function: sub_4016b9 at 0x4016b9
void sub_4016b9(unsigned long a0)
{
 Container<int> temp;
 (void)temp;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
// Constructor is defined in the template class above


// Function: sub_4016c8 at 0x4016c8
void sub_4016c8(unsigned long a0)
{
 Container<int>::push();
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016d0
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(unsigned long a0, unsigned long a1)
{
 Container<int>::get();
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_401701 at 0x401701
void sub_401701(unsigned long a0)
{
 Container<int>::getSize();
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
void Container<int>::getSize(void* this)
{
 return;
}


// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 Container<double>::Container();
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 Container<double>::push();
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
void Container<double>::push(void* ptr, double arg_0)
{
 unsigned long index; // rax

 index = (int)ptr[80];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[80]) = (unsigned int)index + 1;
 *((double *)((char *)ptr + 8 * index)) = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
void sub_401746(unsigned long a0, unsigned long a1)
{
 Container<double>::get();
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
void Container<double>::getSize(void* this)
{
 return;
}


// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401785 at 0x401785
void sub_401785()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
void RTTIDerivedB::getType(void* this)
{
 return;
}



/* CRT stub function _fini removed by preprocessor */


