// Angr Decompilation of 5-1_clang_Os_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <new>
#include <cstddef>

/* External declarations */
extern "C" {
    void __cxa_atexit(void (*destructor)(void*), void* arg, void* dso_handle);
    void _Unwind_Resume(void* exc_ptr);
    void __cxa_throw(void* thrown_exception, void* type_info, void (*dest)(void*));
    void* __cxa_allocate_exception(size_t thrown_size);
    void* __cxa_begin_catch(void* exc_ptr);
    void __cxa_end_catch(void);
    void* __cxa_rethrow(void);
}

namespace std {
    struct ios_base {
        struct Init {
            ~Init();
        };
    };
}

typedef std::ios_base::Init Init;

void _ZNSt8ios_base4InitD1Ev();
void* __dso_handle;
void** g_403ff4;

// Missing class declarations
class LifecycleClass {
public:
    static unsigned int instance_count;
};
unsigned int LifecycleClass::instance_count = 0;

// External variables
extern char g_403ecc;
extern char g_403ee0;
extern char g_402081;
extern char g_40209f;
extern char g_4020bb;
extern char g_4020d7;
extern char g_4020f3;
extern char g_402110;
extern char g_40212c;
extern char g_402148;
extern char g_402164;
extern char g_402180;
extern char g_40219d;
extern char g_4021ba;
extern char g_4021d8;

// Exception type info
extern char _ZTIi;  // typeinfo for int

// _init removed - conflicts with CRT initialization


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 void* v1; // ebx

 return 0;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_ at 0x401170
void _ZNSt8ios_base4InitD1Ev();
static int _ZStL8__ioinit;

int _GLOBAL__sub_I_()
{
 return __cxa_atexit((void (*)(void*))&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 exit(0); /* does not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4011e0
void __x86.get_pc_thunk_bx()
{
 return;
}


// Function: sub_4011e4 at 0x4011e4
void sub_4011e4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401223 at 0x401223
void sub_401223()
{
}


// Function: sub_401229 at 0x401229
void sub_401229()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones */
unsigned int register_tm_clones()
{
 return 0;
}

void frame_dummy() {}
void deregister_tm_clones() { return; }
void __do_global_dtors_aux() { return; }
unsigned int __do_global_ctors_aux() { return 0; }


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */




// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401319
void __x86.get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40131d
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 v0 = (unsigned int)a0;
 return v0;
}


// Function: sub_401321 at 0x401321
void sub_401321()
{
 test_cpp_member_func();
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401324
void test_cpp_member_func()
{
 char v1[31]; // [bp-0x28]

 memcpy(v1, "Test", 5);
 (void)strlen(v1);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401370
unsigned int LifecycleClass::instance_count = 0;

void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = (unsigned int*)operator new[](20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator delete[](v2);
 LifecycleClass::instance_count = LifecycleClass::instance_count - 1;
 return;
}


// Base class declaration - moved outside function
class Base {
public:
    virtual void virtual_method(int arg_1) {}
};

// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
void call_virtual_func(class Base *arg_0, int arg_1)
{
    if (arg_0)
    {
        void (**vtable)(class Base*, int) = (void (**)(class Base*, int))*((int*)*((int*)arg_0));
        if (vtable)
        {
            vtable[0](arg_0, arg_1);
        }
    }
    return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x4013f4
void test_cpp_virtual_func()
{
 return;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x4013fa
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401400
void test_cpp_diamond_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x401406
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x40140c
void test_cpp_template_func()
{
 return;
}


// Function: _Z23test_cpp_template_classv at 0x401412
void test_cpp_template_class()
{
 return;
}


// Function: _Z15test_cpp_lambdav at 0x401418
void test_cpp_lambda()
{
 return;
}


// Function: _Z18test_cpp_exceptionv at 0x40141e
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // eax
 unsigned int v2; // esi
 unsigned int v3; // edx

 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 v2 = __cxa_throw(ptr, &_ZTIi, 0);
 if (v3 != 3 && v3 != 2)
 _Unwind_Resume(v2); /* do not return */
 __cxa_begin_catch(v2);
 __cxa_end_catch(v2);
 return;
}


// Function: sub_40145f at 0x40145f
void sub_40145f()
{
 void* v3; // eax
 unsigned int v5; // ebx
 unsigned int result = 0; // edx

 if (result != 1)
 {
 if (result != 1)
 {
 __cxa_begin_catch(v3);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), (void*)((unsigned int)v5 - 360), 0);
 }
 __cxa_begin_catch(v3);
 __cxa_rethrow(v3);
 }
 return;
}


// Function: sub_40147d at 0x40147d
void sub_40147d()
{
 __cxa_end_catch();
}


// Function: _Z18test_cpp_smart_ptrv at 0x401502
void test_cpp_smart_ptr()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x401508
typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 char padding_0[500];
 struct struct_1 *field_4;
} struct_0;

extern char g_403ecc;
extern char g_403ee0;

void test_cpp_rtti()
{
 void* ptr; // eax
 struct_0 **p; // edi
 void* v0; // [bp-0x14]

 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (struct_0**)operator new(4);
 *p = (struct_0*)&g_403ee0;
 operator delete(v0);
 (*p)->field_4(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x4015c0
extern char g_402081;
extern char g_40209f;
extern char g_4020bb;
extern char g_4020d7;
extern char g_4020f3;
extern char g_402110;
extern char g_40212c;
extern char g_402148;
extern char g_402164;
extern char g_402180;
extern char g_40219d;
extern char g_4021ba;
extern char g_4021d8;

void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x2c]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]

 puts(&g_4021d8);
 memcpy(&v1, "Test", 31);
 result = 0;
 v0 = 10;
 strlen(&v1);
 printf(&g_402081);
 test_cpp_constructor();
 printf(&g_40209f);
 printf(&g_4020bb);
 printf(&g_4020d7);
 printf(&g_4020f3);
 printf(&g_402110);
 printf(&g_40212c);
 printf(&g_402148);
 printf(&g_402164);
 test_cpp_exception();
 printf(&g_402180);
 printf(&g_40219d);
 test_cpp_rtti();
 printf(&g_4021ba);
 return;
}


// Function: main at 0x401722
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x40173e
int template_max(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x40174c
// Function: _Z13template_swapIiEvRT_S1_ at 0x40175d
void template_swap(int &ptr, int &p)
{
 unsigned int v0; // edx

 v0 = *((int *)&ptr);
 *((int *)&ptr) = *((int *)&p);
 *((unsigned int *)&p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401770
void Container<int>::Container(void* ptr)
{
 *((unsigned int *)&ptr[40]) = 0;
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x40177c
void Container<int>::push(void* ptr, int arg_0)
{
 unsigned int index; // ecx

 index = (int)ptr[40];
 if (index <= 9)
 {
 *((unsigned int *)&ptr[40]) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x401798
void Container<int>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_4017af at 0x4017af
void sub_4017af(unsigned int a0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x4017b0
void Container<int>::getSize(void* this)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x4017b8
int Container<double>::Container(void* ptr)
{
 *((unsigned int *)&ptr[80]) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x4017c4
void Container<double>::push(void* ptr)
{
 unsigned int idx; // ecx

 idx = (int)ptr[80];
 if (idx <= 9)
 {
 *((unsigned int *)&ptr[80]) = idx + 1;
 *((unsigned long long *)((char *)ptr + 8 * idx)) = 0;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
void Container<double>::get(void* this, int arg_0)
{
 return;
}


// Function: sub_4017fb at 0x4017fb
void sub_4017fb(unsigned int a0)
{
 Container<double>::getSize();
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x4017fc
void Container<double>::getSize(void* this)
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401804
int RTTIDerivedA::~RTTIDerivedA(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_401825 at 0x401825
void sub_401825()
{
 RTTIDerivedA::getType();
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401826
void RTTIDerivedA::getType(void* this)
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x40182a
int RTTIBase::~RTTIBase(void* this)
{
 return;
}


// Function: sub_40182b at 0x40182b
int sub_40182b()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40182c
int RTTIDerivedB::~RTTIDerivedB(void* this)
{
 operator delete(this);
 return;
}


// Function: sub_40184d at 0x40184d
void sub_40184d()
{
 RTTIDerivedB::getType();
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x40184e
void RTTIDerivedB::getType(void* this)
{
 return;
}


// Function: sub_401854 at 0x401854
void sub_401854()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_4018a2 at 0x4018a2
void sub_4018a2()
{
}



/* CRT stub function _fini removed by preprocessor */


