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

typedef struct _UNKNOWN _UNKNOWN;

/* Helper macros for DWORD splitting */
#define LODWORD(x) ((uint32_t)((uint64_t)(x) & 0xFFFFFFFF))
#define HIDWORD(x) ((uint32_t)((uint64_t)(x) >> 32))
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#define NULL ((void *)0)

/* Forward declarations for C++ classes */
struct Base;
typedef struct Base Base;

struct Derived;
typedef struct Derived Derived;

struct MultiDerived;
typedef struct MultiDerived MultiDerived;

struct MiddleA;
typedef struct MiddleA MiddleA;

struct MiddleB;
typedef struct MiddleB MiddleB;

struct DiamondDerived;
typedef struct DiamondDerived DiamondDerived;

struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Standard library function declarations */
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *memset(void *s, int c, size_t n);
extern char *strcpy(char *dest, const char *src);
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);

/* Standard library function implementations */
size_t strlen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return p - s;
}

char *strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++) != '\0');
    return dest;
}

/* Forward declarations for template functions */
extern int template_max_int(int a1, int a2);
extern long double template_max_double(double a1, double a2);
extern unsigned int *template_swap_int(int *a1, unsigned int *a2);

/* Forward declarations for test functions */
extern void test_cpp_oo_features(long double a1);

/* Forward declarations for typeinfo objects */
struct type_info {
    const char *_vptr_info;
    const char *name;
};
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTITIBase;
extern struct type_info typeinfo_for_RTITIDerivedA;
extern struct type_info typeinfo_for_RTITIDerivedB;

/* Type info definitions */
struct type_info typeinfo_for_int = {
    (const char *)NULL,
    "int"
};

struct type_info typeinfo_for_RTITIBase = {
    (const char *)NULL,
    "RTTIBase"
};

struct type_info typeinfo_for_RTITIDerivedA = {
    (const char *)NULL,
    "RTTIDerivedA"
};

struct type_info typeinfo_for_RTITIDerivedB = {
    (const char *)NULL,
    "RTTIDerivedB"
};

/* Forward declarations for C++ runtime functions */
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, struct type_info *, void (*)(void *));
extern void *__dynamic_cast(void *, const struct type_info *, const struct type_info *, ptrdiff_t);
extern void *operator new(unsigned int size);
extern void operator delete(void *);

/* C++ runtime function stubs */
void *__cxa_allocate_exception(size_t size) {
    return operator new(size);
}

void __cxa_throw(void *exception, struct type_info *type, void (*destructor)(void *)) {
    /* Stub - in real implementation, this would throw the exception */
    (void)exception;
    (void)type;
    (void)destructor;
}

void *__dynamic_cast(void *ptr, const struct type_info *src_type, const struct type_info *dst_type, ptrdiff_t offset) {
    /* Stub - in real implementation, this would perform dynamic cast */
    (void)src_type;
    (void)dst_type;
    (void)offset;
    return ptr;
}

/* Global variables */
int LifecycleClass_instance_count = 0;
extern int off_4E48;
extern int off_4E5C;
extern const char asc_3018[];
extern const char unk_303C[];
extern const char unk_305A[];
extern const char unk_3076[];
extern const char unk_3092[];
extern const char unk_30AE[];
extern const char unk_30CB[];
extern const char unk_30E7[];
extern const char unk_3103[];
extern const char unk_311F[];
extern void (*_gmon_start__)(void);
extern int frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern void _start(int, const char **, const char **);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void std_ios_base_Init_Init(void *i);
extern void std_ios_base_Init_destructor(void *i);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void *std___ioinit;
extern void *_dso_handle;

/* Inline assembly for stack canary */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int ret;
    __asm__ volatile ("movl %%gs:%1,%0" : "=r"(ret) : "m"(*(unsigned int *)(offset)));
    return ret;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O3_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 register unsigned int ebx __asm__("ebx");
 __asm__ volatile ("jmp *%0" : : "m"(*(void **)(ebx+8)));
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
int sub_1150(int a1)
{
 return (*(int (**)(void))(a1 + 84))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1270 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features(0.0);
 return 0;
}






/* CRT stub function _start removed by preprocessor */



/* Function: sub_140C @ 0x140C */
void sub_140C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

/* CRT function implementations */
void _do_global_dtors_aux(void) {
    /* Stub - handles global destructors */
}




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1549 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x154D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1560 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+0h] [ebp-30h] BYREF
 short v2; // [esp+6h] [ebp-2Ah]
 int v3; // [esp+8h] [ebp-28h]
 int v4; // [esp+Ch] [ebp-24h]
 int v5; // [esp+10h] [ebp-20h]
 int v6; // [esp+14h] [ebp-1Ch]
 int v7; // [esp+18h] [ebp-18h]
 short v8; // [esp+1Ch] [ebp-14h]
 char v9; // [esp+1Eh] [ebp-12h]
 char v10; // [esp+1Fh] [ebp-11h]
 unsigned int v11; // [esp+20h] [ebp-10h]

 v11 = __readgsdword(0x14u);
 strcpy(s, "Test");
 s[5] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 result = ((long long)v11 - (long long)__readgsdword(0x14u)) << 32 | (strlen(s) + 4700);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int call_virtual_func(int (***a1)(void), int a2)
{
 return (**a1)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
long long test_cpp_template_func(long double a1)
{
 int v1; // ebx
 unsigned int result_lo; // eax
 unsigned int result_hi;
 long long result; // rax
 int v3; // [esp+1Ch] [ebp-18h] BYREF
 int v4; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v1 = template_max_int(3, 7);
 template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
 template_swap_int(&v3, (unsigned int *)&v4);
 result_lo = v4 + v3 + v1 + (int)(double)a1;
 result_hi = v5 - __readgsdword(0x14u);
 result = ((long long)result_hi << 32) | result_lo;
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr(void)
{
 return 703;
}





/* Function: _Z20test_cpp_oo_featuresv @ 0x18C0 */
void test_cpp_oo_features(long double a1)
{
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AE0 */
int Base_virtual_func(Base *_this, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AF0 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B10 */
void Base_destructor()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B20 */
int Derived_virtual_func(Derived *_this, int a2)
{
 return *((unsigned int *)_this + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B40 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B60 */
int MultiDerived_funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B70 */
int MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1B80 */
int MultiDerived_funcB_nonvirtual_thunk()
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B90 */
int MiddleA_func(MiddleA *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1BB0 */
int MiddleA_func_virtual_thunk(MiddleA *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1BD0 */
int MiddleB_func(MiddleB *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1BF0 */
int MiddleB_func_virtual_thunk(MiddleB *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C10 */
int DiamondDerived_func(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C30 */
int DiamondDerived_func_virtual_thunk(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this
 + *(unsigned int *)(*(unsigned int *)_this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)_this + *(unsigned int *)(*(unsigned int *)_this - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C50 */
int DiamondDerived_func_nonvirtual_thunk(DiamondDerived *_this)
{
 return *(unsigned int *)((char *)_this + *(unsigned int *)(*((unsigned int *)_this - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1C70 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1C80 */
int RTTIDerivedB_getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1C90 */
void RTTIDerivedB_destructor()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1CA0 */
void RTTIDerivedA_destructor()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1CB0 */
void DiamondDerived_destructor()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1CC0 */
void DiamondDerived_destructor_virtual_thunk()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1CD0 */
void DiamondDerived_destructor_nonvirtual_thunk()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1CE0 */
void MultiDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1CF0 */
void MultiDerived_destructor_nonvirtual_thunk()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D00 */
void Derived_destructor()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D10 */
void Base_deleting_destructor(Base *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D40 */
void Derived_deleting_destructor(Derived *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D70 */
void MultiDerived_deleting_destructor(MultiDerived *_this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DA0 */
void MultiDerived_deleting_destructor_nonvirtual_thunk(MultiDerived *_this)
{
 operator delete((char *)_this - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DD0 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E00 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1E30 */
void DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 operator delete(_this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1E60 */
void DiamondDerived_deleting_destructor_virtual_thunk(DiamondDerived *_this)
{
 unsigned int *v1;
 v1 = (unsigned int *)_this - 4;
 operator delete((void *)((char *)_this + *v1));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1E90 */
void DiamondDerived_deleting_destructor_nonvirtual_thunk(DiamondDerived *_this)
{
 operator delete((void *)((char *)_this - 8));
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1EC0 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1EE0 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a1;
 if ( a1 <= (long double)a2 )
 return a2;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1F00 */
unsigned int * template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // ecx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1F20 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1F30 */
int Container_int_push(int a1, int a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1F50 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1F80 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1F90 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1FA0 */
int Container_double_push(int a1, double a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1FD0 */
long double Container_double_get(int a1, int a2)
{
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2000 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: __x86.get_pc_thunk.ax @ 0x200C */
void * _x86_get_pc_thunk_ax()
{
 void *retaddr;
 __asm__ volatile ("movl (%%esp), %0" : "=r"(retaddr));
 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x2010 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2020 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("call __stack_chk_fail");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x208C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: __stack_chk_fail @ 0x505C */

/* FAILED to decompile: __dynamic_cast @ 0x5060 */

/* FAILED to decompile: __cxa_rethrow @ 0x5068 */

/* FAILED to decompile: puts @ 0x506C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5070 */

/* FAILED to decompile: __cxa_end_catch @ 0x5074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5078 */

/* FAILED to decompile: __cxa_throw @ 0x507C */

/* FAILED to decompile: _Unwind_Resume @ 0x5080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5084 */

/* Total functions decompiled: 95, failed: 20 */
