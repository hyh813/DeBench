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

int call_weak_fn(void) { return 0; }

extern void *_dso_handle;

/* C++ runtime function declarations */
extern int _cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *_cxa_allocate_exception(size_t size);
extern void _cxa_throw(void *exception, void *type_info, void *dest);
extern void _cxa_end_cleanup(void);
extern void *_cxa_begin_catch(void *exception);
extern void _cxa_end_catch(void);

/* HIBYTE macro for extracting high byte */
#define HIBYTE(x) (*((unsigned char*)&(x) + 1))

/* LODWORD macro for extracting low dword */
#define LODWORD(x) (*(int*)&(x))

/* Undefined symbols from decompilation */
static unsigned short unk_12BD = 0;
static unsigned short unk_12BE = 0;
static unsigned int off_11ED8 = 0;
static unsigned int off_11EEC = 0;
static char asc_1294[] = "Test Output:";
static char aCppL301D[] = "Result1: %d\n";
static char aCppL302D[] = "Result2: %d\n";
static char aCppL303D[] = "Result3: %d\n";
static char aCppL304D[] = "Result4: %d\n";
static char aCppL305D[] = "Result5: %d\n";
static char aCppL306D[] = "Result6: %d\n";
static char aCppL307D[] = "Result7: %d\n";
static char aCppL308D[] = "Result8: %d\n";
static char aCppL309D[] = "Result9: %d\n";

/* RTTI typeinfo stubs */
static void *typeinfo_for_RTTIBase = 0;
static void *typeinfo_for_RTTIDerivedA = 0;
static void *typeinfo_for_RTTIDerivedB = 0;

/* RTTI class stubs */
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

struct RTTIBase {
    int dummy;
};

struct RTTIDerivedA {
    int dummy;
};

struct RTTIDerivedB {
    int dummy;
};

/* C++ dynamic_cast stub */
extern void *_dynamic_cast(void *obj, const void *src_type, const void *dest_type, int flags);

/* LifecycleClass stub */
typedef struct {
    int instance_count;
} LifecycleClass_t;
extern LifecycleClass_t LifecycleClass;

/* C++ iostream stub structures */
typedef struct {
    int dummy;
} std_ios_base_Init;

static std_ios_base_Init std___ioinit = {0};

/* String function declarations */
extern char *strcpy(char *dest, const char *src);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int puts(const char *s);

/* Stub implementations for missing standard library functions */
int puts(const char *s) { return 0; }
char *strcpy(char *dest, const char *src) { return dest; }
size_t strlen(const char *s) { return 0; }
int _cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { return 0; }
int printf(const char *format, ...) { return 0; }
void *_cxa_allocate_exception(size_t size) { return (void *)0; }
void _cxa_throw(void *exception, void *type_info, void *dest) { }
void *_dynamic_cast(void *obj, const void *src_type, const void *dest_type, int flags) { return 0; }

/* LifecycleClass definition */
LifecycleClass_t LifecycleClass = {0};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-1/5-1_clang_Os_no_g
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


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
int GLOBAL__sub_I_5_1_cpp()
{
 /* std::ios_base::Init::Init stub - no-op */
 return _cxa_atexit((void (*)(void *))0, &std___ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
size_t test_cpp_member_func(void)
{
 unsigned short v1[4]; // [sp+8h] [bp-28h] BYREF
 int v2; // [sp+10h] [bp-20h]
 int v3; // [sp+14h] [bp-1Ch]
 int v4; // [sp+18h] [bp-18h]
 int v5; // [sp+1Ch] [bp-14h]
 int v6; // [sp+20h] [bp-10h]
 short v7; // [sp+24h] [bp-Ch]
 char v8; // [sp+26h] [bp-Ah]
 char v9; // [sp+27h] [bp-9h]

 strcpy((char *)v1, "Test");
 HIBYTE(v1[2]) = unk_12BD;
 v1[3] = unk_12BE;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass.instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int call_virtual_func(int ( ***a1)(unsigned int))
{
 return (**a1)(0);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func(void)
{
 return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void test_cpp_exception(void)
{
 unsigned int *exception; // r0

 exception = (unsigned int *)_cxa_allocate_exception(4u);
 *exception = 42;
 _cxa_throw(exception, 0, 0);
}





/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti(void)
{
 unsigned int *v0; // r4
 void *v1; // r5
 void *v2; // r7
 void *v3; // r6
 int v4; // r0

 v0 = (unsigned int *)operator new(4u);
 *v0 = off_11ED8;
 v1 = (void *)operator new(4u);
 *(unsigned int *)v1 = off_11EEC;
    v2 = _dynamic_cast(
 v0,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedA,
 0);
 v3 = _dynamic_cast(
 v1,
 (const struct __class_type_info *)typeinfo_for_RTTIBase,
 (const struct __class_type_info *)typeinfo_for_RTTIDerivedB,
 0);
 operator delete(v0);
 (*(void ( **)(void *))(*(unsigned int *)v1 + 4))(v1);
 v4 = 130;
 if ( !v2 )
 v4 = 30;
 if ( v3 )
 v4 += 200;
 return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void test_cpp_oo_features(void)
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
 HIBYTE(v1[2]) = unk_12BD;
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
 printf(aCppL302D, 1001 * LifecycleClass.instance_count + 21);
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
int template_max_int(int result, int a2)
{
 if ( result <= a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
int template_max_double(double a1, double a2)
{
 int v2; // r5

 v2 = LODWORD(a2);
 if ( a1 > a2 )
 return LODWORD(a1);
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
int * template_swap_int(int *result, int *a2)
{
 int v2; // r2

 v2 = *result;
 *result = *a2;
 *a2 = v2;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
int Container_int_Constructor(int result)
{
 *(unsigned int *)(result + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
int Container_int_push(int result, int a2)
{
 int v2; // r2

 v2 = *(unsigned int *)(result + 40);
 if ( v2 <= 9 )
 {
 *(unsigned int *)(result + 40) = v2 + 1;
 *(unsigned int *)(result + 4 * v2) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
int Container_int_get(int a1, int a2)
{
 int result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
int Container_double_Constructor(int result)
{
 *(unsigned int *)(result + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
int Container_double_push(int result, int a2, int a3, int a4)
{
 int v4; // r12

 v4 = *(unsigned int *)(result + 80);
 if ( v4 <= 9 )
 {
 *(unsigned int *)(result + 8 * v4) = a3;
 *(unsigned int *)(result + 8 * v4 + 4) = a4;
 *(unsigned int *)(result + 80) = v4 + 1;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
long long Container_double_get(int a1, int a2)
{
 long long result; // r0

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 80) > a2 )
 return *(unsigned long long *)(a1 + 8 * a2);
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x100C */
// attributes: thunk
void RTTIDerivedA_destructor(RTTIDerivedA *a1)
{
 operator delete(a1);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int RTTIDerivedA_getType(RTTIDerivedA *a1)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
void RTTIBase_destructor(RTTIBase *a1)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
void RTTIDerivedB_destructor(RTTIDerivedB *a1)
{
 operator delete(a1);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int RTTIDerivedB_getType(RTTIDerivedB *a1)
{
 return 2;
}


/* Function: .term_proc @ 0x1028 */
void term_proc()
{
 ;
}


/* End of decompiled code */
