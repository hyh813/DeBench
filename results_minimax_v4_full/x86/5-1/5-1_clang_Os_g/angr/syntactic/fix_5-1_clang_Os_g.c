// Angr Decompilation of 5-1_clang_Os_g
// Platform: X86

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <new>
#include <typeinfo>
#include <unwind.h>

// External declarations for CRT/C++ runtime functions
extern "C" {
    void __cxa_begin_catch(void*);
    void __cxa_end_catch();
    void __cxa_throw(void*, void*, void*);
    void __cxa_rethrow();
    void* __cxa_allocate_exception(unsigned int);
    void _Unwind_Resume(void*);
    int __cxa_atexit(void (*)(void*), void*, void*);
}

// C++ operators (must not be extern "C")
void* operator new(unsigned int);
void operator delete(void*);
void* operator new[](unsigned int);
void operator delete[](void*);

/* CRT stub function _init removed by preprocessor */
struct struct_0 {
    char padding_0[512];  // Extended to accommodate larger accesses
    char padding_2d5f[512];  // For padding_2d5f accesses
};

// Make struct_0 large enough for all array accesses in the code
// The original code accesses padding_0[376], padding_0[372], etc.
static struct struct_0 g_struct_0_instance;

void frame_dummy();
unsigned int __do_global_ctors_aux();

int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}

// Forward declarations for CRT stub functions
void frame_dummy() {}
void deregister_tm_clones() {}
unsigned int register_tm_clones();
unsigned int __do_global_dtors_aux();
unsigned int __do_global_ctors_aux();

// Global variable - originally used as function pointer in CRT init
void (*g_403ff4)(void) = nullptr;


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 // goto ptr[2]; // Invalid goto with array index - commented out
 return v0;
}


// Function: sub_401160 at 0x401160
int sub_401160()
{
 void* v1; // ebx

 // Invalid goto - removed
 return 0;
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401170
extern void _ZNSt8ios_base4InitD1Ev(void*);
extern unsigned int __dso_handle;

// Static ioinit object for iostream initialization
static unsigned int _ZStL8__ioinit = 0;

int _GLOBAL__sub_I_5_1.cpp()
{
 // Call std::ios_base::Init constructor (simplified)
 _ZNSt8ios_base4InitD1Ev((void*)&_ZStL8__ioinit);
 return __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
}


// Function: sub_4011ab at 0x4011ab
void sub_4011ab()
{
 // _start(); /* do not return - commented out as function not available */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011db at 0x4011db
void sub_4011db()
{
 // Unsupported instruction - removed
}


// Function: sub_4011dc at 0x4011dc
void sub_4011dc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4011e0
void __x86_get_pc_thunk_bx()
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



/* CRT stub function register_tm_clones removed by preprocessor */
/* struct_0 defined at top */

unsigned int register_tm_clones()
{
 // Simplified stub - original assembly had complex pointer arithmetic
 return 0;
}


// Function: sub_401277 at 0x401277
void sub_401277()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

// Simplified version - original assembly contained complex CRT cleanup logic
unsigned int * __do_global_dtors_aux()
{
 // Call deregister_tm_clones to run destructors for static objects
 unsigned int *result = (unsigned int *)deregister_tm_clones();
 return result;
}


// Function: sub_40130a at 0x40130a
void sub_40130a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401319
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int result; // eax
 return result;
}


// Function: __x86_get_pc_thunk_di at 0x40131d
unsigned int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401321 at 0x401321
void sub_401321()
{
 // Original call to test_cpp_member_func removed - function not available
 return;
}


// Function: _Z20test_cpp_member_funcv at 0x401324
// Not fully decompiled - placeholder
void test_cpp_member_func_placeholder()
{
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401370
extern unsigned int _ZN14LifecycleClass14instance_countE;

void test_cpp_constructor()
{
 unsigned int i; // esi
 unsigned int *v2; // eax
 unsigned int *ptr; // ecx

 i = 0;
 v2 = operator new[](20);
 ptr = v2;
 do
 {
 *(ptr) = i;
 i += 10;
 ptr += 1;
 } while (i != 50);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 operator delete[](v2);
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4013cf
class Base {
public:
    virtual void virtual_func(int) {}
};

typedef void (Base::*VirtualMethodPtr)(int);

void call_virtual_func(class Base *arg_0, int arg_1)
{
    // Call virtual method via vtable
    VirtualMethodPtr vtable_entry = (VirtualMethodPtr)(*((int*)arg_0));
    (arg_0->*vtable_entry)(arg_1);
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
int sub_40145f()
{
 unsigned int result; // edx
 unsigned int v3; // eax
 unsigned int v5; // ebx

 if (result != 1)
 {
 if (result != 1)
 goto LABEL_0x4014fa;
 __cxa_begin_catch(v3);
 __cxa_end_catch(v3);
 __cxa_throw(__cxa_allocate_exception(1), v5 - 360, 0);
 }
 __cxa_begin_catch(v3);
 __cxa_rethrow(v3);
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
extern char g_403ecc;
extern char g_403ee0;

void test_cpp_rtti()
{
 void* ptr; // eax
 void** p; // edi
 void* v0; // [bp-0x14]

 ptr = operator new(4);
 *((char **)ptr) = &g_403ecc;
 v0 = ptr;
 p = (void**)operator new(4);
 *(void**)p = &g_403ee0;
 operator delete(v0);
 // Simplified - original used RTTI type_info access
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
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Failed to decompile function _Z12template_maxIdET_S0_S0_ at 0x40174c
// Function: _Z13template_swapIiEvRT_S1_ at 0x40175d
void template_swap<int>(int &ptr, int &p)
{
 unsigned int v0; // edx

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x401770
int Container<int>::Container(void* ptr)
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
 Container<int>::getSize();
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

 // Unsupported IR instruction - simplified version
 idx = (int)ptr[80];
 if (idx <= 9)
 {
 *((unsigned int *)&ptr[80]) = idx + 1;
 // Original contained unsupported PutI instructions
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x4017e2
void Container<double>::get(void* this, int arg_0)
{
 // Original IR instructions removed - unsupported in C
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

// Simplified version - original assembly contained complex CRT init logic
unsigned int __do_global_ctors_aux()
{
 // Simplified stub - original had complex constructor function pointers
 return 0;
}


// Function: sub_4018a2 at 0x4018a2
void sub_4018a2()
{
}



/* CRT stub function _fini removed by preprocessor */


