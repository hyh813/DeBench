/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O2_g
 * Processor: pc
 */

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
#include <cxxabi.h>

/* External declarations */
extern "C" {
void *_dso_handle;
void (*_gmon_start__)(void);
void __cxa_allocate_exception(unsigned int);
void __cxa_throw(void*, struct type_info*, void*) __attribute__((noreturn));
int __cxa_atexit(void (*)(void*), void*, void*);
}

struct type_info {
    virtual ~type_info() {}
};

#define TYPEINFO_FOR_INT ((struct type_info*)0x1234)

/* Forward declarations */
int test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
int test_cpp_operator_overload(void);

/* Base class definition */
class Base {
public:
    virtual ~Base() {}
    virtual int virtual_func(int x) { return x + 42; }
};

/* LifecycleClass definition */
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};

int LifecycleClass::instance_count = 0;

/* call_virtual_func forward declaration */
int call_virtual_func(Base *obj, int x);

/* Internal runtime declarations */
namespace std {
    static ios_base::Init __ioinit;
}

/* JUMPOUT macro for unresolved jumps */
#define JUMPOUT(addr) ((void (*)())addr)()

/* Function: init_proc @ 0x1000 */
void (*init_proc(void))(void)
{
 if (_gmon_start__)
  return _gmon_start__;
 return 0;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
__attribute__((noreturn))
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)TYPEINFO_FOR_INT, 0);
 for(;;) {}
}


/* Function: test_cpp_oo_features @ 0x1200 */
int test_cpp_oo_features(void)
{
    int result = 0;
    result += test_cpp_member_func();
    result += test_cpp_constructor();
    result += test_cpp_virtual_func();
    result += test_cpp_multiple_inheritance();
    result += test_cpp_diamond_inheritance();
    result += test_cpp_operator_overload();
    return result;
}


/* Function: main @ 0x1310 */
int main(int argc, const char **argv, const char **envp)
{
 (void)argc; (void)argv; (void)envp;
 return test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 new (&std::__ioinit) std::ios_base::Init();
 (void)__cxa_atexit([](void *p) { ((std::ios_base::Init*)p)->~Init(); }, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* SimpleClass definition */
struct SimpleClass {
    char name[32];
};

/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
int test_cpp_member_func()
{
    struct SimpleClass obj;
    size_t v2;

    v2 = 0;
    *(unsigned long long *)obj.name = 1953719636;
    memset(&obj.name[8], 0, 24);
    return (int)(strlen(obj.name) + 4700);
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return obj->virtual_func(x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
int test_cpp_operator_overload()
{
 return 22;
}




/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
