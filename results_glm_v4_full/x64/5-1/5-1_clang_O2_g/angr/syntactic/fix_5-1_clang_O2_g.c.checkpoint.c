// Angr Decompilation of 5-1_clang_O2_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <new>
#include <typeinfo>
#include <cxxabi.h>
#include <exception>

/* Forward declarations */
void _start(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void* operator new(size_t size);
void operator delete(void* ptr);
void* __dynamic_cast(void* ptr, void* src_type, void* dst_type, int src2dst);
unsigned long long MaxV(unsigned long long a, unsigned long long b);
int __cxa_atexit(void (*func)(void*), void* arg, void* dso);
void* __cxa_allocate_exception(size_t size);
void* __cxa_throw(void* obj, void* tinfo, void* dest);
void* __cxa_begin_catch(void* exception_ptr);
void __cxa_end_catch();
void __cxa_rethrow();
void _Unwind_Resume(void* exception_ptr);
void test_cpp_member_func(void);
void test_cpp_constructor(void);
void call_virtual_func(class Base*, int);
void test_cpp_virtual_func(void);
void test_cpp_multiple_inheritance(void);
void test_cpp_diamond_inheritance(void);
void test_cpp_operator_overload(void);
void test_cpp_template_func(void);
void test_cpp_template_class(void);
void test_cpp_lambda(void);
void test_cpp_exception(void);
void test_cpp_oo_features(void);
void test_cpp_rtti(void);
void test_cpp_smart_ptr(void);
int main(void);
void __builtin_trap(void);

/* C++ class stubs */
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            Init(void* ptr);
            static void D1Ev(void* ptr);
        };
    };
}

/* Forward class declarations */
class Base;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;

/* Template function declarations */
template<typename T>
T template_max(T arg_0, T arg_1);

template<typename T>
void template_swap(T& ptr, T& p);

/* C++ class definitions */
class Base {
public:
    virtual void func(int) {}
    virtual ~Base() {}
};

class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual void getType();
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual void getType();
};

class LifecycleClass {
public:
    static unsigned int instance_count;
};

template<typename T>
class Container {
public:
    Container();
    void push(T arg_0);
    T get(int arg_0) const;
    int getSize() const;
private:
    T data[10];
    unsigned int count;
};

/* CRT stub function _init removed by preprocessor */

/* Forward declarations for structs */
struct struct_0 {
    void* field_0;
    void (*field_8)(struct struct_0*);
};
struct struct_1;

extern struct struct_0 *g_403fe8;
extern unsigned long long *g_403fe8_func(void);

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = g_403fe8_func();
 return v1;
}

// CRT stub function implementations
void _start(void)
{
 __builtin_trap();
}

void deregister_tm_clones(void)
{
}

void register_tm_clones(void)
{
}

void __do_global_dtors_aux(void)
{
}

void frame_dummy(void)
{
}

void _fini(void)
{
}

// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 ((void (*)())g_404010)();
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 v1 = "Hello\n";
 return printf(v1);
}


// Function: _GLOBAL__sub_I_5_1.cpp at 0x401120
extern char _ZNSt8ios_base4InitD1Ev;
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void _GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init _ZStL8__ioinit; - skipped for decompilation */
 /* __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle); - skipped */
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
 __builtin_trap();
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
 Base b;
 call_virtual_func(&b, 0);
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x4012a0
class Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 ((void (*)(class Base*, int))(*(long long**)arg_0)[0])(arg_0, arg_1);
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








// Function: sub_40134b at 0x40134b
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

long long sub_40134b(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned int result; // ebx
 unsigned long long v6; // rax

 result = (unsigned int)a2;
 if (result != 1)
 {
LABEL_0x4013d8:
 if (result != 1)
 goto LABEL_0x4013d8;
 v6 = (unsigned long long)__cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0);
 }
 v6 = (unsigned long long)__cxa_begin_catch((void*)a0);
 __cxa_rethrow();
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
 char v1; // [bp-0x4c]
 unsigned long long flag1; // [bp-0x3d]
 char result; // [bp-0x2d]

 puts(&g_4021d4);
 flag1 = 0;
 strncpy(&v1, "Test", 4);
 result = 0;
 v0 = 10;
 printf(&g_40207d, (unsigned int)strlen(&v1) + 4700);
 printf(&g_40209b, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(&g_4020b7, 42);
 printf(&g_4020d3, 71);
 printf(&g_4020ef, 650);
 printf(&g_40210c, 22);
 printf(&g_402128, 39);
 printf(&g_402144, 16);
 printf(&g_402160, 85);
 test_cpp_exception();
 printf(&g_40217c, (unsigned long long)0);
 printf(&g_402199, 703);
 ptr = operator new(8);
 *((char **)ptr) = &g_403d78;
 p = (struct_0 **)operator new(8);
 *(p) = (struct_0 *)&g_403da0;
 v10 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0) ? 30 : 130);
 v11 = (!__dynamic_cast(ptr, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 1) ? v10 : v10 + 200);
 operator delete(ptr);
 if (*p && (*p)->field_8)
 (*p)->field_8(*p);
 printf(&g_4021b6, v11 + 14);
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
 return;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x401690
int template_max(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: sub_401698 at 0x401698
void sub_401698()
{
 return;
}





// Function: sub_4016a5 at 0x4016a5
void sub_4016a5(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4016b0
void template_swap(int &ptr, int &p)
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
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4016c0
template<>
Container<int>::Container()
{
    count = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4016c8
template<>
void Container<int>::push(int arg_0)
{
 unsigned long index; // rax

 index = count;
 if (index <= 9)
 {
 count = (unsigned int)index + 1;
 data[index] = arg_0;
 }
 return;
}





// Function: sub_4016e4 at 0x4016e4
void sub_4016e4(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x4016f0
template<>
int Container<int>::get(int arg_0) const
{
 return data[arg_0];
}


// Function: sub_401701 at 0x401701
void sub_401701(unsigned long a0)
{
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x401710
template<>
int Container<int>::getSize() const
{
    return count;
}


// Function: sub_401714 at 0x401714
void sub_401714(unsigned long a0)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401720
template<>
Container<double>::Container()
{
    count = 0;
}


// Function: sub_401728 at 0x401728
void sub_401728(unsigned long a0)
{
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x401730
template<>
void Container<double>::push(double arg_0)
{
 unsigned long index; // rax

 index = count;
 if (index <= 9)
 {
 count = (unsigned int)index + 1;
 data[index] = arg_0;
 }
 return;
}


// Function: sub_401746 at 0x401746
void sub_401746(unsigned long a0, unsigned long a1)
{
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401750
template<>
double Container<double>::get(int arg_0) const
{
 return data[arg_0];
}


// Function: sub_401764 at 0x401764
void sub_401764(unsigned long a0)
{
 return;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401770
template<>
int Container<double>::getSize() const
{
    return count;
}


// Function: sub_401774 at 0x401774
void sub_401774()
{
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x401780
void _ZN12RTTIDerivedAD0Ev(RTTIDerivedA* this_ptr)
{
    this_ptr->~RTTIDerivedA();
    ::operator delete(this_ptr);
}


// Function: sub_401785 at 0x401785
void sub_401785()
{
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401790
void RTTIDerivedA::getType()
{
}


// Function: sub_401796 at 0x401796
void sub_401796()
{
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x4017a0
void _ZN8RTTIBaseD2Ev(RTTIBase* this_ptr)
{
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1()
{
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x4017b0
void _ZN12RTTIDerivedBD0Ev(RTTIDerivedB* this_ptr)
{
    this_ptr->~RTTIDerivedB();
    ::operator delete(this_ptr);
}


// Function: sub_4017b5 at 0x4017b5
void sub_4017b5()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4017c0
void RTTIDerivedB::getType()
{
}



/* CRT stub function _fini removed by preprocessor */


