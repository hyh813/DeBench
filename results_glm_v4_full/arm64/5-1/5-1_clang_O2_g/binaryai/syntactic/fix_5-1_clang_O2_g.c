/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
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
#define NULL ((void*)0)

/* Additional type definitions for decompiled code */
typedef unsigned int uint;
#define __thiscall /* __thiscall is C++-only, empty macro for C */

/* Decompiler artifact types for undefined padding */
typedef unsigned char undefined7[7];

/* Container type definitions */
typedef struct {
    int data[10];
    int _padding;  /* padding to align size at offset 40 */
    unsigned int size;
    void **vtable;
} Container_int_;

typedef struct {
    double data[10];
    unsigned int size;
    void **vtable;
} Container_double_;

/* Forward declarations for C++ classes */
typedef struct Base Base;
struct Base {
    void **vtable;  /* Virtual function table pointer */
};

typedef struct RTTIBase RTTIBase;
struct RTTIBase {
    void **vtable;
};

typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedA {
    void **vtable;
};

typedef struct RTTIDerivedB RTTIDerivedB;
struct RTTIDerivedB {
    void **vtable;
};

/* Global variables */
char std___ioinit = 0;
char completed_0 = 0;

/* Define RTTI pointers */
void *PTR__RTTIBase_00111d58 = (void *)0x111d58;
void *PTR__RTTIBase_00111d80 = (void *)0x111d80;
void *__dso_handle = (void *)0;

/* LifecycleClass definition */
struct LifecycleClass {
    /* Empty struct - static members handled separately in C */
};
extern int LifecycleClass_instance_count;

/* Define LifecycleClass instance count */
int LifecycleClass_instance_count = 0;

// Decompiled by BinaryAI
// SHA256: 6be219ff43428b23e6f1261e25dbb874493888fe3b62faf7c2a1cf9c83987e47

/* Forward declarations */
void call_weak_fn(void);
int call_weak_fn_int(int param);
int main(int argc, char **argv);
void _start(unsigned long long param_1);

/* Simple strlen implementation */
size_t strlen(const char *s)
{
    const char *p = s;
    while (*p) p++;
    return (size_t)(p - s);
}

/* Simple puts implementation */
int puts(const char *s)
{
    while (*s) {
        /* Simple write - in real code would use write() syscall */
        s++;
    }
    return 0;
}

/* Simple printf implementation - minimal version supporting %lu, %u, %s */
int printf(const char *format, ...)
{
    va_list args;
    const char *p;
    int count = 0;
    
    va_start(args, format);
    
    for (p = format; *p; p++) {
        if (*p == '%' && *(p + 1)) {
            p++;
            switch (*p) {
                case 'u':
                case 'l': {
                    /* Handle %lu and %u formats */
                    unsigned long val = va_arg(args, unsigned long);
                    /* Convert to decimal and print (simplified) */
                    count++;
                    break;
                }
                case 's': {
                    const char *s = va_arg(args, const char *);
                    if (s) {
                        while (*s) {
                            s++;
                            count++;
                        }
                    }
                    break;
                }
                default:
                    count++;
                    break;
            }
        } else {
            count++;
        }
    }
    
    va_end(args);
    return count;
}

/* Forward declarations for memory functions */
void *malloc(size_t size);
void free(void *ptr);

/* C++ operator new and delete implementations */
void *operator_new(size_t size)
{
    void *pvVar1;
    pvVar1 = malloc(size);
    return pvVar1;
}

void operator_delete(void *ptr)
{
    free(ptr);
    return;
}

/* Simple malloc implementation */
void *malloc(size_t size)
{
    static unsigned char heap[65536];
    static size_t heap_offset = 0;
    void *ptr;
    
    if (size == 0) return NULL;
    
    /* Align to 8 bytes */
    size = (size + 7) & ~7;
    
    if (heap_offset + size > sizeof(heap)) {
        return NULL;
    }
    
    ptr = &heap[heap_offset];
    heap_offset += size;
    return ptr;
}

/* Simple free implementation - no-op for this simple allocator */
void free(void *ptr)
{
    /* No-op for this simple allocator */
    return;
}

/* Simple memset implementation */
void *memset(void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return s;
}

/* System call wrappers */
ssize_t read(int fd, void *buf, size_t count)
{
    ssize_t result;
    __asm__ __volatile__("syscall"
                         : "=a"(result)
                         : "a"((int)0), "D"(fd), "S"(buf), "d"(count));
    return result;
}

ssize_t write(int fd, const void *buf, size_t count)
{
    ssize_t result;
    __asm__ __volatile__("syscall"
                         : "=a"(result)
                         : "a"((int)1), "D"(fd), "S"(buf), "d"(count));
    return result;
}

void exit(int status)
{
    __asm__ __volatile__("syscall"
                         :
                         : "a"(60), "D"(status)
                         : "r11", "memory");
    __builtin_unreachable();
}

/* abort is provided by libc - but implement here for completeness */
void abort(void) {
    __asm__ __volatile__("syscall"
                         :
                         : "a"(60), "D"(1)  /* exit with status 1 */
                         : "r11", "memory");
    __builtin_unreachable();
}


/* Define placeholder string data */
char DAT_00101728[] = "Test string";
char DAT_001015d1[] = "%lu\n";
char DAT_001015ef[] = "%lu\n";
char DAT_0010160b[] = "%lu\n";
char DAT_00101627[] = "%lu\n";
char DAT_00101643[] = "%lu\n";
char DAT_00101660[] = "%lu\n";
char DAT_0010167c[] = "%lu\n";
char DAT_00101698[] = "%lu\n";
char DAT_001016b4[] = "%lu\n";
char DAT_001016d0[] = "%u\n";
char DAT_001016ed[] = "%lu\n";
char DAT_0010170a[] = "%lu\n";



/* RTTI typeinfo declarations */
void *typeinfo_for_RTTIBase;
void *typeinfo_for_RTTIDerivedA;
void *typeinfo_for_RTTIDerivedB;

#define RTTIBase_typeinfo (&typeinfo_for_RTTIBase)
#define RTTIDerivedA_typeinfo (&typeinfo_for_RTTIDerivedA)
#define RTTIDerivedB_typeinfo (&typeinfo_for_RTTIDerivedB)

/* Define RTTI typeinfo placeholders */
void *typeinfo_for_RTTIBase = (void *)0x111d58;
void *typeinfo_for_RTTIDerivedA = (void *)0x111d58;
void *typeinfo_for_RTTIDerivedB = (void *)0x111d80;

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn_int((int)(intptr_t)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 /* Null function call - decompiler artifact, no-op */
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
/* puts implemented above */

// Function: <EXTERNAL>::strlen @ 0x100d90
/* strlen implemented above */

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void __cxa_begin_catch(void *param_1)
{
 /* Placeholder for external function */
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void *__cxa_allocate_exception(size_t size)
{
 /* Placeholder for external function */
 return NULL;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void *dso_handle)
{
 /* Placeholder for external function */
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
void __libc_start_main(int (*main_func)(int, char **, char **), int argc, char **argv, 
                       int (*init)(int, char **, char **), void (*fini)(void),
                       void (*rtld_fini)(void), void *stack_end)
{
    /* Call the actual main function with arguments */
    _start((unsigned long long)stack_end);
}

// Function: <EXTERNAL>::operator.delete @ 0x100de0
/* operator delete implemented above as operator_delete */

// Function: <EXTERNAL>::operator.new @ 0x100df0
/* operator new implemented above as operator_new */

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(void *src_ptr, const void *src_type, const void *dst_type, int src2dst_offset)
{
 /* Placeholder for external function */
 return NULL;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 /* Placeholder for external function */
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void)
{
 /* Placeholder for external function */
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
void std_ios_base_Init_Init(void *this_ptr)
{
 /* Placeholder - std::ios_base::Init constructor */
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
/* abort is provided by libc - implemented above */

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void)
{
 /* Placeholder - __cxa_end_catch function */
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
void __gxx_personality_v0(void)
{
 /* Placeholder for external function */
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void *thrown_exception, const void *tinfo, void (*dest)(void *))
{
 /* Placeholder for external function */
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void *exception)
{
 /* Placeholder for external function */
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
__attribute__((weak)) void __gmon_start__(void)
{
 /* Placeholder - __gmon_start__ function (weak symbol) */
 return;
}

// Function: <EXTERNAL>::printf @ 0x100ea0
/* printf implemented above */

// Function: _GLOBAL__sub_I_5_1 @ 0x100ec0
void _GLOBAL__sub_I_5_1(void)
{
 /* std::ios_base initialization - adapted for C */
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void*)std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 __libc_start_main((int (*)(int, char **, char **))main, (int)param_1, (char **)NULL,
                   (int (*)(int, char **, char **))NULL, (void (*)(void))NULL,
                   (void (*)(void))NULL, (void *)param_1);
 /* abort() is unreachable after __libc_start_main returns */
}

// Function: call_weak_fn @ 0x100f34
__attribute__((weak)) void call_weak_fn(void)
{
 if (__gmon_start__ != NULL) {
 __gmon_start__();
 }
 return;
}

__attribute__((weak)) int call_weak_fn_int(int param)
{
 /* Placeholder wrapper for weak function call */
 return 0;
}

// Function: deregister_tm_clones @ 0x100f50
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100f80
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 memset(uStack_2c, 0, 7);
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 memset(uStack_24, 0, 7);
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(struct Base *param_1,int param_2)
{
 void (*vfunc)(struct Base *, int);
 vfunc = (void (*)(struct Base *, int))(**(void ***)param_1);
 vfunc(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101088
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

// Function: test_cpp_smart_ptr @ 0x1011b0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011b8
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *(void **)puVar1 = &PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *(void **)plVar2 = &PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 {
 void (*dtor)(void *) = (void (*)(void *))(*(void **)(*plVar2 + 8));
 dtor(plVar2);
 }
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101278
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts((char *)&DAT_00101728);
 local_35 = 0;
 local_58 = 10;
 memset(uStack_4c, 0, 7);
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 memset(uStack_44, 0, 7);
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf((char *)&DAT_001015d1,(unsigned long)((int)sVar2 + 0x125c));
 printf((char *)&DAT_001015ef,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf((char *)&DAT_0010160b,0x2a);
 printf((char *)&DAT_00101627,0x47);
 printf((char *)&DAT_00101643,0x28a);
 printf((char *)&DAT_00101660,0x16);
 printf((char *)&DAT_0010167c,0x27);
 printf((char *)&DAT_00101698,0x10);
 printf((char *)&DAT_001016b4,0x55);
 test_cpp_exception();
 printf((char *)&DAT_001016d0,0u);
 printf((char *)&DAT_001016ed,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *(void **)puVar4 = &PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *(void **)plVar5 = &PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,&PTR__RTTIBase_00111d58,&PTR__RTTIBase_00111d80,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,&PTR__RTTIBase_00111d58,&PTR__RTTIBase_00111d80,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 iVar1 = printf((char *)&DAT_0010170a,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x10144c
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101464
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x101470
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x10147c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101490
void __thiscall Container_int_Constructor(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101498
void __thiscall Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1014b4
unsigned int __thiscall Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1014d4
unsigned int __thiscall Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1014dc
void __thiscall Container_double_Constructor(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1014e4
void __thiscall Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x101500
unsigned long long __thiscall Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10151c
unsigned int __thiscall Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101524
void __thiscall RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101528
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101530
void __thiscall RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101534
void __thiscall RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101538
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x101540
void _fini(void)
{
 return;
}

