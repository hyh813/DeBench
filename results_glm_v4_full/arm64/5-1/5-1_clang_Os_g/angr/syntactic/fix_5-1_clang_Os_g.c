// Angr Decompilation of 5-1_clang_Os_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Forward declarations */
struct _Unwind_Exception;
struct _Unwind_Context;

int main(void);
void _start(void);
char arm64g_calculate_condition(int cond, unsigned long op1, unsigned long op2, unsigned long op3);
unsigned long CmpF(double a, double b);

/* C++ ABI runtime function declarations */
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, void *tinfo, void *dest);
void __cxa_begin_catch(void *exc);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void _Unwind_Resume(void) __attribute__((noreturn));

/* C++ RTTI support - minimal std::type_info definition */
struct type_info {
    const void** __vtable;  /* Virtual table pointer for type_info */
    const char* __type_name;
};

/* Global variable definitions */
int __dollar_d_19 = 0;
unsigned long long __dso_handle = 0;
int _ZN14LifecycleClass14instance_countE = 0;

/* Explicit type_info definitions removed - use pointer versions below */

/* C++ ABI type_info vtable structure and functions */

/* Type comparison method - part of type_info vtable */
static int __do_upcast_for_class_type_info(
    const struct type_info* __dst_type,
    void**__obj_ptr)
{
    /* Stub implementation - return 0 (no upcast) */
    (void)__dst_type;
    (void)__obj_ptr;
    return 0;
}

/* Virtual table for type_info - matches expected ABI layout */
const void *__ZTVN10__cxxabiv117__class_type_infoE[2] = {
    NULL,  /* offset_to_top */
    NULL   /* type_info pointer */
};

/* Simple type_info for int exception */
struct type_info type_info_int = { NULL, "i" };
struct type_info type_info_derived = { NULL, "DerivedException" };

/* Global type_info pointers */
const struct type_info* _ZTIi = &type_info_int;
const struct type_info* _ZTIderived = &type_info_derived;
char __dollar_d_28[] = "%d\n";
char g_401547[] = "%d\n";
char g_401563[] = "%d\n";
char g_40157f[] = "%d\n";
char g_40159b[] = "%d\n";
char g_4015b8[] = "%d\n";
char g_4015d4[] = "%d\n";
char g_4015f0[] = "%d\n";
char g_40160c[] = "%d\n";
char g_401628[] = "%d\n";
char g_401645[] = "%d\n";
char g_401662[] = "%d\n";
char g_401680[] = "Testing C++ OO Features\n";
char g_411d58[] = "";
char g_411d80[] = "";

// Function: __dollar_x at 0x400d60
long long __dollar_x()
{
 return 0;
}

unsigned long long g_411ff8 = (unsigned long long)__dollar_x;

/* C++ operator new - mangled name _Znwj */
void *_Znwj_internal(size_t size)
{
 return malloc(size);
}

/* C++ operator delete - mangled name _ZdlPv */
void _ZdlPv_internal(void *ptr)
{
 free(ptr);
}

/* Keep the old names for compatibility */
void *cxx_operator_new(size_t size)
{
 return _Znwj_internal(size);
}

void cxx_operator_delete(void *ptr)
{
 _ZdlPv_internal(ptr);
}



/* C++ operators new and delete (required by compiler/runtime) */
void *operator_new_std(size_t size)
{
    return malloc(size);
}

void *operator_new_array(size_t size)
{
    return malloc(size);
}

void operator_delete_std(void *ptr)
{
    free(ptr);
}

void operator_delete_array(void *ptr)
{
    free(ptr);
}

/* C++ operator new/delete with mangled names for linking */
#ifdef __cplusplus
extern "C" {
#endif

void *_Znwj(unsigned int size)
{
 return malloc((size_t)size);
}

void *_Znwm(unsigned long long size)
{
 return malloc(size);
}

void *_Znam(unsigned long long size)
{
 return malloc(size);
}

void _ZdlPv(void *ptr)
{
 free(ptr);
}

void _ZdaPv(void *ptr)
{
 free(ptr);
}

void _ZdlPvm(void *ptr, unsigned long long size)
{
 (void)size;
 free(ptr);
}

#ifdef __cplusplus
}
#endif

/* Angr-specific helper functions - stub implementations */
char arm64g_calculate_condition(int cond, unsigned long op1, unsigned long op2, unsigned long op3)
{
    /* Stub implementation - return default value */
    return 0;
}

unsigned long CmpF(double a, double b)
{
    /* Stub implementation for floating point comparison flags */
    return 0;
}







// Function: sub_400d74 at 0x400d74
int sub_400d74()
{
 return puts("");
}


// Function: __dollar_x_18 at 0x400ec0
void ios_init_wrapper(void *arg)
{
 (void)arg;
}

long long __dollar_x_18()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 /* std::ios_base::Init::Init(&__dollar_d_19); */
 __dollar_d_19 = 0;
 __cxa_atexit(ios_init_wrapper, &__dollar_d_19, &__dso_handle);
 __cxa_atexit(ios_init_wrapper, &__dollar_d_19, &__dso_handle);
 return 0;
}


// Function: _start at 0x400ef0
void _start(void)
{
    /* Program entry point - call main and exit */
    int ret = main();
    exit(ret);
}


// Function: sub_400efc at 0x400efc
void sub_400efc(unsigned long a0)
{
    /* Call main and exit - do not return */
    int ret = main();
    exit(ret);
}


// Function: sub_400f30 at 0x400f30
void sub_400f30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void)
{
    /* Stub implementation */
}


/* CRT stub function register_tm_clones */
void register_tm_clones(void)
{
    /* Stub implementation */
}


// Function: sub_400f48 at 0x400f48
void sub_400f48()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function __do_global_dtors_aux */
void __do_global_dtors_aux(void)
{
    /* Stub implementation */
}


// Function: sub_400fbc at 0x400fbc
void sub_400fbc()
{
 __do_global_dtors_aux();
 return;
}


/* CRT stub function frame_dummy */
void frame_dummy(void)
{
    /* Stub implementation */
}


// Function: sub_401008 at 0x401008
long long sub_401008()
{
 unsigned long long v0; // x0

 frame_dummy();
 return 0;
}


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
 strncpy((char *)v1, "Test", 4);
 flag1 = 0;
 strlen((char *)&v0 + 4);
 return;
}


// Function: _Z20test_cpp_constructorv at 0x401064
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x40107c
typedef struct Base {
    void **vtable;  // Virtual function table pointer
} Base;

void call_virtual_func(struct Base *arg_0, int arg_1)
{
 void *vtable_ptr;
 void (*vfunc)(struct Base *, int);
 vtable_ptr = *(void **)arg_0;
 vfunc = *(void (**)(struct Base *, int))vtable_ptr;
 vfunc(arg_0, arg_1);
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
 ptr = (unsigned int *)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 _Unwind_Resume(); /* do not return */
}


// Function: sub_4010f4 at 0x4010f4
long long sub_4010f4(unsigned long long a0, unsigned int a1)
{
 if (a1 != 1)
 {
 if (a1 != 1) {
 /* LABEL_0x4011a8 - fall through to end of function */
 }
 __cxa_begin_catch((void*)a0);
 __cxa_end_catch();
 __cxa_throw(__cxa_allocate_exception(1), &_ZTIderived, 0);
 }
 __cxa_begin_catch((void*)a0);
 __cxa_rethrow();
 return 0;
}


// Function: sub_40111c at 0x40111c
void sub_40111c(unsigned long a0, unsigned long a1)
{
 __cxa_end_catch();
 return;
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

void test_cpp_rtti()
{
 void* ptr; // x19
 struct_0 **p; // x20
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = (void*)cxx_operator_new(8);
 *((char **)ptr) = g_411d58;
 p = (struct_0 **)cxx_operator_new(8);
 *(p) = (struct_0 *)g_411d80;
 cxx_operator_delete(ptr);
 cxx_operator_delete(p);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x401278
void test_cpp_oo_features()
{
 unsigned int v0; // [bp-0x38]
 char v1[15]; // [bp-0x34]
 unsigned long long flag1; // [bp-0x25]
 char result; // [bp-0x15]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 puts(g_401680);
 result = 0;
 v0 = 10;
 strncpy((char *)v1, "Test", 4);
 flag1 = 0;
 printf(__dollar_d_28, strlen((char *)&v0 + 4) + 4700);
 printf(g_401547, _ZN14LifecycleClass14instance_countE * 1001 + 21);
 printf(g_401563, 42);
 printf(g_40157f, 71);
 printf(g_40159b, 650);
 printf(g_4015b8, 22);
 printf(g_4015d4, 39);
 printf(g_4015f0, 16);
 printf(g_40160c, 85);
 test_cpp_exception();
 printf(g_401628, 0);
 printf(g_401645, 703);
 test_cpp_rtti();
 printf(g_401662, 0);
 return;
}


// Function: main at 0x4013a4
int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x4013bc
int template_max_int(int arg_0, int arg_1)
{
 if (arg_1 >= arg_0)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x4013c8
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x4013d4
void template_swap_int(int *ptr, int *p)
{
 unsigned int v0; // w9

 v0 = *((int *)ptr);
 *((int *)ptr) = *((int *)p);
 *((unsigned int *)p) = v0;
 return;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4013e8
int Container_int_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 40)) = 0;
 return 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4013f0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long index; // x8

 index = *(unsigned int *)((char *)ptr + 40);
 if (9 >= (unsigned int)index)
 {
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x40140c
int Container_int_get(void* this, int arg_0)
{
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x40142c
int Container_int_getSize(void* this)
{
 return 0;
}


// Function: _ZN9ContainerIdEC1Ev at 0x401434
void Container_double_Constructor(void* ptr)
{
 *((unsigned int *)((char *)ptr + 80)) = 0;
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x40143c
void Container_double_push(void* ptr, double arg_0)
{
 unsigned long idx; // x8

 idx = *(unsigned int *)((char *)ptr + 80);
 if (9 >= (unsigned int)idx)
 {
 *((double *)((char *)ptr + 8 * idx)) = arg_0;
 *((unsigned int *)((char *)ptr + 80)) = (unsigned int)idx + 1;
 }
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x401458
double Container_double_get(void* this, int arg_0)
{
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x401474
unsigned int Container_double_getSize(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x40147c
void RTTIDerivedA_destructor(void* this)
{
 cxx_operator_delete(this);
 return;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x401480
int RTTIDerivedA_getType(void* this)
{
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x401488
int RTTIBase_destructor(void* this)
{
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40148c
int RTTIDerivedB_destructor(void* this)
{
 cxx_operator_delete(this);
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x401490
int RTTIDerivedB_getType(void* this)
{
 return 0;
}



/* CRT stub function _fini */
void _fini(void)
{
    /* Stub implementation */
}

/* C++ ABI runtime implementations - required for linking */

/* Pure virtual function handler - called when a pure virtual function is called */
void __cxa_pure_virtual(void)
{
    /* Pure virtual function called - should never happen */
    abort();
}

/* Delete null pointer check */
void __cxa_deleted_virtual(void)
{
    /* Deleted virtual function called - abort */
    abort();
}

/* Bad cast handler for dynamic_cast failures */
void __cxa_bad_cast(void)
{
    /* Bad cast - abort */
    abort();
}

/* Bad typeid handler for typeid on null pointer */
void __cxa_bad_typeid(void)
{
    /* Bad typeid - abort */
    abort();
}

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
    /* Stub implementation - return success */
    return 0;
}

void *__cxa_allocate_exception(size_t size)
{
    /* Stub implementation - allocate exception object */
    return malloc(size);
}

void __cxa_throw(void *obj, void *tinfo, void *dest)
{
    /* Stub implementation - terminate since we can't actually throw */
    abort();
}

void *__cxa_begin_catch(void *exc)
{
    /* Stub implementation - return exception object */
    (void)exc;
    return exc;
}

void __cxa_end_catch(void)
{
    /* Stub implementation - force symbol to be emitted */
}

void __cxa_rethrow(void)
{
    /* Stub implementation - abort since we can't actually rethrow */
    abort();
}

int __gxx_personality_v0(int version, int actions, unsigned long long exception_class,
                         struct _Unwind_Exception *ue_header,
                         struct _Unwind_Context *context)
{
    /* Stub implementation - return continue unwind */
    return 0;
}

/* Unwind ABI stub */
void _Unwind_Resume(void) __attribute__((noreturn));
void _Unwind_Resume(void)
{
    /* Stub implementation - abort since we can't actually resume */
    abort();
}


