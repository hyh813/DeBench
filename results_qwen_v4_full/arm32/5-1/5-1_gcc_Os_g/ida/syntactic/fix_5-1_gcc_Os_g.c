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

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;
typedef struct std_unique_ptr_int std_unique_ptr_int;
typedef struct std_unique_ptr_int_array std_unique_ptr_int_array;

/* Forward function declarations */
void test_cpp_oo_features(void);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void Container_int_push(Container_int *const this_ptr, int value);
void *std_unique_ptr_int___unique_ptr(std_unique_ptr_int *const this_ptr);
void *std_unique_ptr_int_array___unique_ptr(std_unique_ptr_int_array *const this_ptr);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr);
void *DiamondDerived___DiamondDerived(DiamondDerived *this_ptr);

/* External function declarations */
void *operator_delete(void *ptr, size_t size) { return ptr; }
void operator_delete_array(void *ptr) { }
size_t strlen(const char *s) { size_t len = 0; while (s[len]) len++; return len; }
char *strncpy(char *dest, const char *src, size_t n) { size_t i; for (i = 0; i < n && src[i]; i++) dest[i] = src[i]; for (; i < n; i++) dest[i] = 0; return dest; }
int std_type_info_operator_eq(unsigned int a, void *b) { return 1; }
void *_dynamic_cast(void *obj, const void *target_type, const void *src_type, int flags) { return obj; }
int call_weak_fn(void);
void JUMPOUT(int) { }
void *_cxa_allocate_exception(size_t size) { return operator new(size); }
void _cxa_throw(void *exception, void *type_info, void *dest) { }
void std_ios_base_Init_Init(void *);
void std_ios_base_Init___Init(void *);
void _aeabi_atexit(void *, void (*)(void *), void *);
int puts(const char *s) { return 0; }
int _printf_chk(int flag, const char *format, ...) { return 0; }
void *operator new(unsigned int size);
void *operator new[](unsigned int size);

/* SHIDWORD macro for extracting high 32 bits of 64-bit value */
#define SHIDWORD(x) ((int)((unsigned long long)(x) >> 32))

/* External symbol declarations */
extern int off_11B2C;
extern int off_11B48;
extern int off_11B68;
extern int off_11B84;
extern int off_11BFC;
extern int off_11C04;
extern int off_11C20;
extern int off_11C38;
extern int off_11C54;
extern int off_11C68;
extern int off_11C7C;
extern int off_11AF0;
extern int off_11B08;
extern int typeinfo_for_RTTIDerivedA;
extern int typeinfo_for_RTTIDerivedB;
extern int typeinfo_for_RTTIBase;
extern int typeinfo_for_int;
extern int std___ioinit;
extern int _dso_handle;
extern char s[];
extern char unk_1188A[];
extern char unk_118A8[];
extern char unk_118C4[];
extern char unk_118E0[];
extern char unk_118FC[];
extern char unk_11919[];
extern char unk_11935[];
extern char unk_11951[];
extern char unk_1196D[];

/* Define missing external symbols */
char s[] = "Testing C++ OO features";
int _dso_handle = 0;
int typeinfo_for_RTTIDerivedA = 0;
int typeinfo_for_RTTIDerivedB = 0;
int typeinfo_for_RTTIBase = 0;
int typeinfo_for_int = 0;
int std___ioinit = 0;
int off_11B2C = 0;
int off_11B48 = 0;
int off_11B68 = 0;
int off_11B84 = 0;
int off_11BFC = 0;
int off_11C04 = 0;
int off_11C20 = 0;
int off_11C38 = 0;
int off_11C54 = 0;
int off_11C68 = 0;
int off_11C7C = 0;
int off_11AF0 = 0;
int off_11B08 = 0;
char unk_1188A[] = "test_cpp_member_func: %zu\n";
char unk_118A8[] = "test_cpp_constructor: %d\n";
char unk_118C4[] = "test_cpp_virtual_func: %d\n";
char unk_118E0[] = "test_cpp_multiple_inheritance: %d\n";
char unk_118FC[] = "test_cpp_diamond_inheritance: %d\n";
char unk_11919[] = "test_cpp_operator_overload: %d\n";
char unk_11935[] = "test_cpp_template_func: %d\n";
char unk_11951[] = "test_cpp_template_class: %d\n";
char unk_1196D[] = "test_cpp_lambda: %d\n";

/* Struct definitions */
struct Base {
    int (**_vptr_Base)(...);
};

struct Derived {
    int (**_vptr_Base)(...);
    int multiplier;
};

struct MultiDerived {
    int (**_vptr_Base)(...);
    int dataA;
    int dataB;
};

struct VirtualBase {
    int (**_vptr_VirtualBase)(...);
};

struct MiddleA {
    int (**_vptr_MiddleA)(...);
    int dataA;
};

struct MiddleB {
    int (**_vptr_MiddleB)(...);
    int dataB;
};

struct DiamondDerived {
    int (**_vptr_MiddleA)(...);
    int dataA;
    int dataB;
    int (**_vptr_MiddleB)(...);
    MiddleA middleA_part;
    MiddleB middleB_part;
};

struct RTTIBase {
    unsigned int vptr;
};

struct RTTIDerivedA {
    unsigned int vptr;
};

struct RTTIDerivedB {
    unsigned int vptr;
};

struct SimpleClass {
    char name[32];
};

struct LifecycleClass {
    int instance_count;
};

/* Static member simulation */
int LifecycleClass_instance_count = 0;

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct std_unique_ptr_int {
    struct {
        struct {
            void *_M_head_impl;
            char gap0[4];
        } _M_t;
    } _M_t;
};

struct std_unique_ptr_int_array {
    struct {
        struct {
            void *_M_head_impl;
            char gap0[4];
        } _M_t;
    } _M_t;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_gcc_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_109BC @ 0x109BC */
void sub_109BC()
{
 JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10B08 */
void test_cpp_exception()
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x10BBC */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}






/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */
int call_weak_fn(void) { return 0; }




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x10CF4 */
size_t test_cpp_member_func()
{
 SimpleClass obj; // [sp+0h] [bp-30h] BYREF

 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10D60 */
int test_cpp_constructor()
{
 return LifecycleClass_instance_count + 21 + 1000 * LifecycleClass_instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10D7C */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10D88 */
int test_cpp_virtual_func(int a1, int a2, int a3, int a4)
{
 int v4; // r4
 Base base; // [sp+0h] [bp-18h] BYREF
 Derived derived; // [sp+4h] [bp-14h] BYREF
 int v8; // [sp+Ch] [bp-Ch]

 v8 = a4;
 base._vptr_Base = (int (**)(...))&off_11AF0;
 derived._vptr_Base = (int (**)(...))&off_11B08;
 derived.multiplier = 3;
 v4 = call_virtual_func(&base, 5);
 return v4 + 21 + call_virtual_func((Base *)&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10E08 */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10E10 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10E18 */
int test_cpp_template_func(int a1, int a2, int a3, int a4)
{
 int v4; // r4
 double v5; // r6
 int a; // [sp+4h] [bp-1Ch] BYREF
 int b[6]; // [sp+8h] [bp-18h] BYREF

 b[1] = a4;
 v4 = template_max_int(3, 7);
 v5 = template_max_double(2.5, 1.5);
 a = 10;
 b[0] = 20;
 template_swap_int(&a, b);
 return (int)v5 + v4 + a + b[0];
}


/* Function: _Z23test_cpp_template_classv @ 0x10EC0 */
int test_cpp_template_class()
{
 int v0; // r3
 int r2[10]; // [sp+0h] [bp-38h] BYREF
 int v3; // [sp+28h] [bp-10h]

 v3 = 1;
 r2[0] = 10;
 Container_int_push((Container_int *const)r2, 20);
 Container_int_push((Container_int *const)r2, 30);
 if ( v3 > 0 )
 v0 = r2[0];
 else
 v0 = 0;
 return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x10F40 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F48 */
size_t test_cpp_rtti()
{
 void *v0; // r6
 void *v1; // r5
 int v2; // r4
 const char *v3; // r0
 size_t v4; // r4

 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = off_11C68;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11C7C;
 if ( std_type_info_operator_eq(*(unsigned int *)(*(unsigned int *)v0 - 4), &typeinfo_for_RTTIDerivedA) )
 v2 = 10;
 else
 v2 = 0;
 if ( std_type_info_operator_eq(*(unsigned int *)(*(unsigned int *)v1 - 4), &typeinfo_for_RTTIDerivedB) )
 v2 += 20;
 if ( _dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v2 += 100;
 }
 if ( _dynamic_cast(
 v1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v2 += 200;
 }
 v3 = *(const char **)(*(unsigned int *)(*(unsigned int *)v0 - 4) + 4);
 if ( *v3 == 42 )
 ++v3;
 v4 = v2 + strlen(v3);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 return v4;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11038 */
int test_cpp_smart_ptr(int a1, int a2, int a3, int *a4)
{
 int *v4; // r0
 unsigned int *v5; // r0
 std_unique_ptr_int ptr2; // [sp+0h] [bp-18h] BYREF
 std_unique_ptr_int_array arr; // [sp+8h] [bp-10h] BYREF

 arr._M_t._M_t._M_head_impl = a4;
 v4 = (int *)operator new(4u);
 *v4 = 200;
  ptr2._M_t._M_t._M_head_impl = v4;
  *(unsigned int *)ptr2._M_t._M_t.gap0 = 0;
 v5 = (unsigned int *)operator new[](0x14u);
 *v5 = 1;
 v5[1] = 2;
 v5[2] = 3;
  v5[3] = 4;
  *(unsigned int *)arr._M_t._M_t.gap0 = (unsigned int)v5;
  v5[4] = 5;
 std_unique_ptr_int_array___unique_ptr(&arr);
 std_unique_ptr_int___unique_ptr((std_unique_ptr_int *const)&ptr2);
 std_unique_ptr_int___unique_ptr(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110EC */
int test_cpp_diamond_inheritance()
{
 int v0; // r4
 int v1; // r4
 DiamondDerived obj; // [sp+4h] [bp-24h] BYREF

 obj._vptr_MiddleA = (int (**)(...))&off_11C20;
 *(int **)&obj.dataA = (int *)&off_11C38;
 obj._vptr_MiddleB = (int (**)(...))&off_11C54;
 obj.dataB = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB_part);
 obj.dataB = 100;
 v1 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB_part);
 DiamondDerived___DiamondDerived(&obj);
 return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1117C */
void test_cpp_oo_features()
{
 size_t v0; // r0
 int v1; // r0
 long long v2; // r0
 int v3; // r2
 int v4; // r3
 int v5; // r0
 int v6; // r0
 int v7; // r0
 int v8; // r0
 long long v9; // r0
 int v10; // r2
 int v11; // r3
 int v12; // r0
 int v13; // r0
 int v14; // r0

 puts(s);
 v0 = test_cpp_member_func();
 _printf_chk(1, unk_1188A, v0);
 v1 = test_cpp_constructor();
 v2 = _printf_chk(1, unk_118A8, v1);
 v5 = test_cpp_virtual_func(v2, SHIDWORD(v2), v3, v4);
 _printf_chk(1, unk_118C4, v5);
 v6 = test_cpp_multiple_inheritance();
 _printf_chk(1, unk_118E0, v6);
 v7 = test_cpp_diamond_inheritance();
 _printf_chk(1, unk_118FC, v7);
 v8 = test_cpp_operator_overload();
 v9 = _printf_chk(1, unk_11919, v8);
 v12 = test_cpp_template_func(v9, SHIDWORD(v9), v10, v11);
 _printf_chk(1, unk_11935, v12);
 v13 = test_cpp_template_class();
 _printf_chk(1, unk_11951, v13);
 v14 = test_cpp_lambda();
 _printf_chk(1, unk_1196D, v14);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x112B0 */
int Base_virtual_func(Base *this_ptr, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x112B8 */
const char * Base_getName(const Base *this_ptr)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x112C4 */
void * Base___Base(Base *this_ptr)
{
 return this_ptr;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x112C8 */
int Derived_virtual_func(Derived *this_ptr, int x)
{
 return x * this_ptr->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x112D4 */
const char * Derived_getName(const Derived *this_ptr)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x112E0 */
int MultiDerived_funcA(MultiDerived *this_ptr)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x112E8 */
int MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x112F0 */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this_ptr)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x112F8 */
int VirtualBase_func(VirtualBase *this_ptr)
{
 return 100;
}





/* Function: _ZN7MiddleA4funcEv @ 0x11304 */
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1131C */
int virtual_thunk_to_MiddleA_func(MiddleA *this_ptr)
{
 return MiddleA_func((MiddleA *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x11330 */
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataB + *((unsigned int *)this_ptr->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11348 */
int virtual_thunk_to_MiddleB_func(MiddleB *this_ptr)
{
 return MiddleB_func((MiddleB *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1135C */
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)&this_ptr->dataA + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11374 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11388 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this_ptr)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ptr - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x11390 */
void * MiddleA___MiddleA(MiddleA *this_ptr)
{
 this_ptr->_vptr_MiddleA = (int (**)(...))&off_11B2C;
 *(&this_ptr->dataA + 1) = (int)&off_11B48;
 return this_ptr;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x113A8 */
void virtual_thunk_to_MiddleA___MiddleA(MiddleA *this_ptr)
{
 int v1; // r1

 v1 = *((unsigned int *)this_ptr->_vptr_MiddleA - 4);
 *(int (***)(...))((char *)&this_ptr->_vptr_MiddleA + v1) = (int (**)(...))&off_11B2C;
 *(int *)((char *)&this_ptr->dataA + v1 + 4) = (int)&off_11B48;
}


/* Function: _ZN7MiddleBD1Ev @ 0x113D0 */
void * MiddleB___MiddleB(MiddleB *this_ptr)
{
 this_ptr->_vptr_MiddleB = (int (**)(...))&off_11B68;
 *(&this_ptr->dataB + 1) = (int)&off_11B84;
 return this_ptr;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x113E8 */
void virtual_thunk_to_MiddleB___MiddleB(MiddleB *this_ptr)
{
 int v1; // r1

 v1 = *((unsigned int *)this_ptr->_vptr_MiddleB - 4);
 *(int (***)(...))((char *)&this_ptr->_vptr_MiddleB + v1) = (int (**)(...))&off_11B68;
 *(int *)((char *)&this_ptr->dataB + v1 + 4) = (int)&off_11B84;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x11410 */
int RTTIDerivedA_getType(const RTTIDerivedA *this_ptr)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11418 */
int RTTIDerivedB_getType(const RTTIDerivedB *this_ptr)
{
 return 2;
}





/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11424 */
void * RTTIDerivedA___RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 return this_ptr;
}











/* Function: _ZN4BaseD0Ev @ 0x11438 */
void * Base___Base_deleting(Base *this_ptr)
{
 operator_delete(this_ptr, 4u);
 return this_ptr;
}


/* Function: _ZN7DerivedD0Ev @ 0x11450 */
void * Derived___Derived(Derived *this_ptr)
{
 operator_delete(this_ptr, 8u);
 return this_ptr;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11468 */
void * MultiDerived___MultiDerived(MultiDerived *this_ptr)
{
 operator_delete(this_ptr, 0x10u);
 return this_ptr;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11480 */
void non_virtual_thunk_to_MultiDerived___MultiDerived(MultiDerived *this_ptr)
{
 MultiDerived___MultiDerived((MultiDerived *)((char *)this_ptr - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x11488 */
void * VirtualBase___VirtualBase(VirtualBase *this_ptr)
{
 operator_delete(this_ptr, 8u);
 return this_ptr;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x114A0 */
void * RTTIDerivedB___RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr, 4u);
 return this_ptr;
}

















/* Function: _ZN7MiddleAD2Ev @ 0x11550 */
void * MiddleA___MiddleA(MiddleA *this_ptr, const void **__vtt_parm)
{
 unsigned int *v2; // r2

 v2 = (unsigned int *)__vtt_parm;
 this_ptr->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_ptr->_vptr_MiddleA + *(v2 - 3)) = (int (**)(...))__vtt_parm[1];
 return this_ptr;
}


/* Function: _ZN7MiddleBD2Ev @ 0x11568 */
void * MiddleB___MiddleB(MiddleB *this_ptr, const void **__vtt_parm)
{
 unsigned int *v2; // r2

 v2 = (unsigned int *)__vtt_parm;
 this_ptr->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_ptr->_vptr_MiddleB + *(v2 - 3)) = (int (**)(...))__vtt_parm[1];
 return this_ptr;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11580 */
int template_max_int(int a, int b)
{
 if ( a < b )
 return b;
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1158C */
double template_max_double(double a, double b)
{
 double v2; // r4

 v2 = a;
 if ( a <= b )
 return b;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x115BC */
void template_swap_int(int *a, int *b)
{
 int v2; // r3

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x115D0 */
Container_int * Container_int_Container(Container_int *const this_ptr)
{
 this_ptr->size = 0;
 return this_ptr;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x115DC */
void Container_int_push(Container_int *const this_ptr, int value)
{
 int size; // r3

 size = this_ptr->size;
 if ( size <= 9 )
 {
 this_ptr->size = size + 1;
 this_ptr->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x115F4 */
int Container_int_get(const Container_int *const this_ptr, int idx)
{
 if ( idx < 0 || this_ptr->size <= idx )
 return 0;
 else
 return this_ptr->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11618 */
int Container_int_getSize(const Container_int *const this_ptr)
{
 return this_ptr->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x11620 */
Container_double * Container_double_Container(Container_double *const this_ptr)
{
 this_ptr->size = 0;
 return this_ptr;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1162C */
void Container_double_push(Container_double *const this_ptr, double value)
{
 int size; // r1

 size = this_ptr->size;
 if ( size <= 9 )
 {
 this_ptr->size = size + 1;
 this_ptr->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1164C */
double Container_double_get(const Container_double *const this_ptr, int idx)
{
 const double *v3; // t0

 if ( idx < 0 || idx >= this_ptr->size )
 return 0.0;
 v3 = &this_ptr->data[idx];
 return *v3;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11678 */
int Container_double_getSize(const Container_double *const this_ptr)
{
 return this_ptr->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x11680 */
void * std_unique_ptr_int___unique_ptr(std_unique_ptr_int *const this_ptr)
{
 void *v2; // r0

 v2 = *(void **)&this_ptr->_M_t._M_t.gap0;
 if ( v2 )
 operator_delete(v2, 4u);
 return this_ptr;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x116A4 */
void * std_unique_ptr_int_array___unique_ptr(std_unique_ptr_int_array *const this_ptr)
{
 void *v2; // r0

 v2 = *(void **)&this_ptr->_M_t._M_t.gap0;
 if ( v2 )
 operator_delete_array(v2);
 return this_ptr;
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x116C4 */
void * DiamondDerived___DiamondDerived(
 DiamondDerived *this_ptr,
 int __in_chrg,
 const void **__vtt_parm)
{
 int v4; // r3
 int (**v7)(...); // r2
 unsigned int (**v8)(DiamondDerived *__hidden); // r3
 const void **v9; // r1
 const void **v10; // r1

 if ( __in_chrg )
 v4 = (int)&off_11C20;
 else
 v4 = (int)*__vtt_parm;
 this_ptr->_vptr_MiddleA = (int (**)(...))v4;
 if ( __in_chrg )
 v4 = 16;
 if ( __in_chrg )
 {
 v7 = (int (**)(...))&off_11C54;
 }
 else
 {
 v4 = *(unsigned int *)(v4 - 12);
 v7 = (int (**)(...))__vtt_parm[5];
 }
 *(int (***)(...))((char *)&this_ptr->_vptr_MiddleA + v4) = v7;
 if ( __in_chrg )
 v8 = (unsigned int (**)(DiamondDerived *__hidden))&off_11C38;
 else
 v8 = (unsigned int (**)(DiamondDerived *__hidden))__vtt_parm[6];
 if ( __in_chrg )
 v9 = (const void **)&off_11C04;
 else
 v9 = __vtt_parm + 3;
 *(&this_ptr->dataA + 1) = (int)v8;
 MiddleB___MiddleB((MiddleB *)(&this_ptr->dataA + 1), v9);
 if ( __in_chrg )
 v10 = (const void **)&off_11BFC;
 else
 v10 = __vtt_parm + 1;
 MiddleA___MiddleA((MiddleA *)this_ptr, v10);
 return this_ptr;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11748 */
void * DiamondDerived___DiamondDerived(DiamondDerived *this_ptr)
{
 return DiamondDerived___DiamondDerived(this_ptr, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11754 */
void non_virtual_thunk_to_DiamondDerived___DiamondDerived(DiamondDerived *this_ptr)
{
 DiamondDerived___DiamondDerived((DiamondDerived *)((char *)this_ptr - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1175C */
void virtual_thunk_to_DiamondDerived___DiamondDerived(DiamondDerived *this_ptr)
{
 DiamondDerived___DiamondDerived((DiamondDerived *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11770 */
void * DiamondDerived___DiamondDerived_deleting(DiamondDerived *this_ptr)
{
 DiamondDerived___DiamondDerived(this_ptr);
 operator_delete(this_ptr, 0x18u);
 return this_ptr;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11790 */
void non_virtual_thunk_to_DiamondDerived___DiamondDerived_deleting(DiamondDerived *this_ptr)
{
 DiamondDerived___DiamondDerived((DiamondDerived *)((char *)this_ptr - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x11798 */
void virtual_thunk_to_DiamondDerived___DiamondDerived_deleting(DiamondDerived *this_ptr)
{
 DiamondDerived___DiamondDerived((DiamondDerived *)((char *)this_ptr + *((unsigned int *)this_ptr->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x117AC */
void * DiamondDerived___DiamondDerived(DiamondDerived *this_ptr, const void **__vtt_parm)
{
 return DiamondDerived___DiamondDerived(this_ptr, 0, __vtt_parm);
}


/* Function: .term_proc @ 0x117B8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 87, failed: 27 */
