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

/* External declarations for CRT and profiling functions */
extern void (*_gmon_start__)(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* External declarations for C standard library functions */
extern void *memset(void *s, int c, size_t n);
extern char *strcpy(char *dest, const char *src);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int puts(const char *s);

/* External declarations for C++ runtime functions */
extern void *_Znwm(size_t size);
extern void _ZdlPv(void *ptr);
extern void *__dynamic_cast(const void *src_ptr, const struct __class_type_info *src_type, const struct __class_type_info *dst_type, size_t src_dst_distance);

/* Typedef for destructor function pointer */
typedef void (*destructor_fn)(void *);

/* External data references */
extern unsigned int off_3ECC;
extern unsigned int off_3EE0;
extern void *typeinfo_for_RTTIBase;
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern char *asc_21D8;
extern char *aCppL301D;
extern char *aCppL302D;
extern char *aCppL303D;
extern char *aCppL304D;
extern char *aCppL305D;
extern char *aCppL306D;
extern char *aCppL307D;
extern char *aCppL308D;
extern char *aCppL309D;

/* External declarations for C++ runtime */
extern void *_dso_handle;
extern void *__ioinit;
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);

/* Macro definitions */
#define HIBYTE(x) (*((unsigned char *)&(x) + 1))

/* Forward declarations for C++ classes */
struct LifecycleClass {
    int instance_count;
};
static int LifecycleClass_instance_count = 0;

struct RTTIDerivedA {
    int dummy;
};

struct RTTIDerivedB {
    int dummy;
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O2_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp dword ptr [ebx+8]");
}


/* Function: sub_1130 @ 0x1130 */
int sub_1130(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
int GLOBAL__sub_I_5_1_cpp()
{
 return __cxa_atexit((void (*)(void *))0, &__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11AC @ 0x11AC */
void sub_11AC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func(void)
{
 unsigned short s[4]; // [esp+14h] [ebp-28h] BYREF
 int v2; // [esp+1Ch] [ebp-20h]
 int v3; // [esp+20h] [ebp-1Ch]
 int v4; // [esp+24h] [ebp-18h]
 int v5; // [esp+28h] [ebp-14h]
 unsigned char v6[8]; // [esp+2Ch] [ebp-10h] BYREF

 memset(v6, 0, sizeof(v6));
 v5 = 0;
 v4 = 0;
 v3 = 0;
 v2 = 0;
 HIBYTE(s[2]) = 0;
 s[3] = 0;
 strcpy((char *)s, "Test");
 return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int call_virtual_func(int ( ***a1)(unsigned int, int), int a2)
{
 return (**a1)((unsigned int)a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13D0 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13E0 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13F0 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1400 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1410 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1440 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, 0, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1540 */
int test_cpp_rtti(void)
{
 unsigned int *v0; // eax
 const void *v1; // esi
 void *v2; // edi
 void *v3; // eax
 int v4; // esi
 int v5; // ebp
 void *v7; // [esp+8h] [ebp-14h]

 v0 = (unsigned int *)_Znwm(4u);
 *v0 = off_3ECC;
 v1 = v0;
 v7 = v0;
 v2 = (void *)_Znwm(4u);
 *(unsigned int *)v2 = off_3EE0;
 v3 = __dynamic_cast(
 v1,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedA,
 0);
 v4 = 130;
 if ( !v3 )
 v4 = 30;
 v5 = v4 + 200;
 if ( !__dynamic_cast(
 v2,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedB,
 0) )
 v5 = v4;
_ZdlPv(v7);
	(*(destructor_fn *)&((void **)v2)[1])(v2);
	_ZdlPv(v2);
	return v5 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 unsigned char v7[8]; // [esp+24h] [ebp-18h] BYREF

 puts(asc_21D8);
 memset(v7, 0, sizeof(v7));
 v6 = 0;
 v5 = 0;
 v4 = 0;
 v3 = 0;
 s[5] = 0;
 v2 = 0;
 strcpy(s, "Test");
 v0 = strlen(s);
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


/* Function: main @ 0x1810 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1830 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > a2 )
 return a1;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1840 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a2;
 if ( a1 > (long double)a2 )
 return a1;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1860 */
unsigned int *template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // edx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1880 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1890 */
int Container_int_push(int a1, int a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x18B0 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x18D0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x18E0 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x18F0 */
int Container_double_push(int a1, double a2)
{
 int result; // eax
 int v3; // ecx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1910 */
long double Container_double_get(int a1, int a2)
{
 long double result; // fst7

 result = 0.0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1930 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
void RTTIDerivedA_destructor(struct RTTIDerivedA *self)
{
 _ZdlPv(self);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
void RTTIBase_destructor()
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
void RTTIDerivedB_destructor(struct RTTIDerivedB *self)
{
 _ZdlPv(self);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB_getType()
{
 return 2;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A1C */
void term_proc()
{
 _do_global_dtors_aux();
}



