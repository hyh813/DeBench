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
typedef unsigned int uint;

// External function declarations
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern void *__dso_handle;

// Standard library declarations
extern int printf(char *__format, ...);
extern int puts(char *__s);
extern void *memcpy(void *__dest, const void *__src, size_t __n);
extern size_t strlen(const char *__s);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern int __libc_start_main(int (*)(int, char**, char**), int, char**, void*, void*, unsigned long, ...);
extern void *operator new(unsigned long);
extern void operator delete(void *);
extern void *operator new[](unsigned long);
extern void operator delete[](void *);



// Data symbols (string pointers)
extern char* DAT_00012081;
extern char* DAT_0001209f;
extern char* DAT_000120bb;
extern char* DAT_000120d7;
extern char* DAT_000120f3;
extern char* DAT_00012110;
extern char* DAT_0001212c;
extern char* DAT_00012148;
extern char* DAT_00012164;
extern char* DAT_00012180;
extern char* DAT_0001219d;
extern char* DAT_000121ba;
extern char* DAT_000121d8;
extern char* DAT_000121fc;
extern void* PTR__RTTIBase_00013ecc;
extern void* PTR__RTTIDerivedA_00013ee0;

// External functions
extern void __x86_get_pc_thunk_di(void);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void*, void*, void*);
extern void *__cxa_begin_catch(void*);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void*);
extern void *__dynamic_cast(void*, void*, void*, unsigned long);
extern int main(void);

// Missing type definitions
struct LifecycleClass {
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

struct Base {
    void (*vtable)();
};

// Use type_info directly from the runtime
struct __class_type_info;
struct __si_class_type_info;
struct __vmi_class_type_info;

// RTTI typeinfo stubs - using void* for compatibility
// These are minimal stubs to satisfy the decompiled code
struct __class_type_info {
    char _dummy[16];  // Minimal stub
};

struct __si_class_type_info {
    char _dummy[24];  // Minimal stub
};

struct __vmi_class_type_info {
    char _dummy[32];  // Minimal stub
};

// int typeinfo for exception handling
struct int_ {
    static void* typeinfo;
};
void* int_::typeinfo = (void*)0;

// RTTI typeinfo definitions - use proper type_info pointers
struct RTTIBase {
    static void* typeinfo;
};
void* RTTIBase::typeinfo = (void*)0;

struct RTTIDerivedA {
    static void* typeinfo;
};
void* RTTIDerivedA::typeinfo = (void*)1;

struct RTTIDerivedB {
    static void* typeinfo;
};
void* RTTIDerivedB::typeinfo = (void*)2;

// Template class type definitions
struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

// C++ standard namespace stubs
namespace std {
    namespace ios_base {
        struct Init {
            Init();
            ~Init();
        };
    }
    // __ioinit should be an instance of ios_base::Init, not a separate type
    static ios_base::Init __ioinit;
}

// Implement Init constructor and destructor
namespace std {
    namespace ios_base {
        Init::Init() {}
        Init::~Init() {}
    }
}

// Decompiled by BinaryAI
// SHA256: f34bb694d715844a9bd099c4fe9256f69544575444bb39ee457636ccb9961990

// Function: _init @ 0x11000
void _init(void)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 // Original: call via null function pointer (removed as unsafe)
 return;
}

// Note: External functions are declared at the top and implemented properly

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
// Note: Proper main signature for __libc_start_main
int main_wrapper(int argc, char** argv, char** envp)
{
 return main();
}

// _start is the entry point - parameters come from the environment
void _start(void)
{
 // Simpler approach: set up minimal argc=1, argv[0]= "", argv[1]=NULL
 static char* empty_argv[2] = { "", NULL };
 
 __libc_start_main(main_wrapper, 1, empty_argv, &__dso_handle, 0, 0);
 
 // __libc_start_main should not return
 while(1) { }
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2ddf) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d5b) != 0) {
 FUN_00011160(*(unsigned int *)(unaff_EDI + 0x2dcb));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2de3);
 while (uVar1 < ((unaff_EDI + 0x2bff) - (unaff_EDI + 0x2bfb) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2de3) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2bfb + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2de3);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2ddf) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11324
int test_cpp_member_func(void)
{
 size_t sVar1;
 char local_28 [31];
 char local_9;
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11370
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 piVar1 = (int *)::operator new(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + piVar1[2];
 operator delete(piVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3;
}

// Function: call_virtual_func @ 0x113cf
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x113f4
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x113fa
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x11400
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11406
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1140c
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x11412
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11418
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1141e
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x11502
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11508
int test_cpp_rtti(void)
{
 void **puVar1;
 void **piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (void **)::operator new(4);
 *puVar1 = &RTTIBase::typeinfo;
 piVar2 = (void **)::operator new(4);
 *piVar2 = &RTTIDerivedA::typeinfo;
 iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator delete(puVar1);
 // Call destructor through vtable
 operator delete(piVar2);
 return iVar3 + 0xe;
}

// Function: test_cpp_oo_features @ 0x115c0
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char local_28 [31];
 char local_9;
 puts(&DAT_000121d8);
 memcpy(local_28,&DAT_000121fc,0x1f);
 local_9 = 0;
 sVar1 = strlen(local_28);
 printf(&DAT_00012081,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 printf(&DAT_0001209f,uVar2);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 test_cpp_exception();
 printf(&DAT_00012180,0x2a);
 printf(&DAT_0001219d,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,uVar2);
 return;
}

// Function: main @ 0x11722
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1173e
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1174c
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x1175d
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11770
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1177c
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11798
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x117b0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x117b8
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x117c4
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x117e2
long double __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = (long double)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x117fc
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11804
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11826
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1182a
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1182c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1184e
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x11860
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x118ac
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

