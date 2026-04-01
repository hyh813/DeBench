/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Stub definitions for missing symbols */
#define JUMPOUT(x) return
#define HIBYTE(x) (((x) >> 8) & 0xFF)
#define SET_HIBYTE(x, val) do { (x) = ((x) & 0xFF) | (((val) & 0xFF) << 8); } while(0)
void* operator_new(size_t size) { (void)size; return (void*)0; }
void operator_delete(void* ptr) { (void)ptr; }
int call_weak_fn() { return 0; }
void* _cxa_allocate_exception(size_t size) { return operator_new(size); }
void* _cxa_begin_catch(void* exc) { return exc; }
void _cxa_end_catch() { }
void _cxa_end_cleanup() { }
void _cxa_rethrow() { }
int _cxa_atexit(void (*func)(void*), void* arg, void* dso_handle) { (void)func; (void)arg; (void)dso_handle; return 0; }
int puts(const char* str) { (void)str; return 0; }
int printf(const char* format, ...) { (void)format; return 0; }
size_t strlen(const char* str) { (void)str; return 0; }
char* strcpy(char* dest, const char* src) { (void)dest; (void)src; return dest; }

/* Helper functions for C++ runtime */
void std_ios_base_Init_ctor(void* obj) { (void)obj; }
void std_ios_base_Init_dtor(void* obj) { (void)obj; }

/* std namespace stubs */
extern void* std___ioinit;
extern void* _dso_handle;
int _cxa_atexit(void (*func)(void*), void* arg, void* dso_handle);

/* Base class definition */
struct Base {
    void *_vptr_Base;
};

/* RTTI class definitions */
struct RTTIBase {
    void *_vptr_RTTIBase;
};

struct RTTIDerivedA {
    RTTIBase base;
};
int RTTIDerivedA_getType(const RTTIDerivedA *obj);
void RTTIDerivedA_dtor(RTTIDerivedA *obj);

struct RTTIDerivedB {
    RTTIDerivedA base;
};
int RTTIDerivedB_getType(const RTTIDerivedB *obj);
void RTTIDerivedB_dtor(RTTIDerivedB *obj);

/* LifecycleClass definition */
struct LifecycleClass {
    int instance_count;
};
int LifecycleClass_instance_count = 0;

/* Container class definitions */
struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

/* String constants */
static const char asc_1294[] = "C++ Test";

/* Undefined constants from decompilation */
static int unk_12BD = 0;
static int unk_12BE = 0;
static const char aCppL301D[] = "Result1: %d\n";
static const char aCppL302D[] = "Result2: %d\n";
static const char aCppL303D[] = "Result3: %d\n";
static const char aCppL304D[] = "Result4: %d\n";
static const char aCppL305D[] = "Result5: %d\n";
static const char aCppL306D[] = "Result6: %d\n";
static const char aCppL307D[] = "Result7: %d\n";
static const char aCppL308D[] = "Result8: %d\n";
static const char aCppL309D[] = "Result9: %d\n";

/* Function declarations */
void* operator_new(size_t size);
void operator_delete(void* ptr);
void* _dynamic_cast(void* obj, const void* src_type, const void* dst_type, int flags);
void* _cxa_allocate_exception(size_t size);
void _cxa_throw(void* exc, void* type_info, void* destructor);
void* _cxa_begin_catch(void* exc);
void _cxa_end_catch();
void _cxa_end_cleanup();
void _cxa_rethrow();
int puts(const char* str);
int printf(const char* format, ...);
size_t strlen(const char* str);
char* strcpy(char* dest, const char* src);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
 JUMPOUT(0);
}


/* Function: _ZN12RTTIDerivedAD0Ev_0 @ 0x8BC */
void RTTIDerivedA_dtor(RTTIDerivedA *obj)
{
 operator_delete(obj);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
void GLOBAL__sub_I_5_1_cpp()
{
 std_ios_base_Init_ctor(&std___ioinit);
 _cxa_atexit((void (*)(void *))std_ios_base_Init_dtor, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */






/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(Base *obj, int x)
{
 void **vtable = (void **)obj->_vptr_Base;
 int (*func)(Base *, int) = (int (*)(Base *, int))vtable[0];
 return func(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func()
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance()
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func()
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class()
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception()
{
 void *exception; // r0

 exception = _cxa_allocate_exception(4u);
 *(unsigned int *)exception = 42;
 _cxa_throw(exception, 0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr()
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features()
{
 size_t v0; // r0
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 puts(asc_1294);
 strcpy((char *)v1, "Test");
 SET_HIBYTE(v1[2], unk_12BD);
 v1[3] = unk_12BE;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v0 = strlen((const char *)v1);
 printf(aCppL301D, v0 + 4700);
 printf(aCppL302D, 1001 * LifecycleClass_instance_count + 21);
 printf(aCppL303D, 42);
 printf(aCppL304D, 71);
 printf(aCppL305D, 650);
 printf(aCppL306D, 22);
 printf(aCppL307D, 39);
 printf(aCppL308D, 16);
 printf(aCppL309D, 85);
 test_cpp_exception();
}


/* Function: main @ 0xEF4 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xF08 */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
int template_max_double(double a, double b)
{
 int v2; // r5

 v2 = (int)b;
 if ( a > b )
 return (int)a;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
void template_swap_int(int *a, int *b)
{
 int v2; // r2

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
void Container_int_ctor(Container_int *thiz)
{
 thiz->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
void Container_int_push(Container_int *thiz, int value)
{
 int size; // r2

 size = thiz->size;
 if ( size <= 9 )
 {
 thiz->size = size + 1;
 thiz->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
int Container_int_get(const Container_int *thiz, int idx)
{
 int result; // r0

 result = 0;
 if ( idx >= 0 && thiz->size > idx )
 return thiz->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
int Container_int_getSize(const Container_int *thiz)
{
 return thiz->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
void Container_double_ctor(Container_double *thiz)
{
 thiz->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
void Container_double_push(Container_double *thiz, double value)
{
 int size; // r12

 size = thiz->size;
 if ( size <= 9 )
 {
 thiz->data[size] = value;
 thiz->size = size + 1;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
double Container_double_get(const Container_double *thiz, int idx)
{
 double result; // r0

 result = 0.0;
 if ( idx >= 0 && thiz->size > idx )
 return thiz->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
int Container_double_getSize(const Container_double *thiz)
{
 return thiz->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int RTTIDerivedA_getType(const RTTIDerivedA *obj)
{
 (void)obj;
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
void RTTIBase_dtor()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
void RTTIDerivedB_dtor(RTTIDerivedB *obj)
{
 RTTIDerivedA_dtor((RTTIDerivedA*)obj);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int RTTIDerivedB_getType(const RTTIDerivedB *obj)
{
 (void)obj;
 return 2;
}


/* Function: .term_proc @ 0x1028 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp__Znwj @ 0x120C0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x120C4 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x120C8 */

/* FAILED to decompile: __imp_printf @ 0x120CC */

/* FAILED to decompile: __imp_puts @ 0x120D0 */

/* FAILED to decompile: __imp___libc_start_main @ 0x120D8 */

/* FAILED to decompile: __imp_abort @ 0x120DC */

/* FAILED to decompile: _ZdlPv @ 0x120E0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x120E4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x120E8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x120EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x120F4 */

/* FAILED to decompile: __imp_strlen @ 0x120F8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x120FC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x12100 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x12104 */

/* FAILED to decompile: __imp___cxa_throw @ 0x12108 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x1210C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x12110 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12114 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x12118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x12120 */

/* Total functions decompiled: 41, failed: 22 */
