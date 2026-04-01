/* Auto-injected type definitions by preprocessor */
#include <typeinfo>
#include <new>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cstdarg>

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

// Decompiled by BinaryAI
// SHA256: 4673be70d5b0997e1379c4c44163d65c3fe1f3e3e92267514402be9b55d0bfef

struct Base {
  void **vtable;
};
struct LifecycleClass {
  static int instance_count;
};

struct RTTIBase {
  void **vtable;
  static std::type_info *typeinfo;
};
struct RTTIDerivedA {
  void **vtable;
  static std::type_info *typeinfo;
};
struct RTTIDerivedB {
  void **vtable;
  static std::type_info *typeinfo;
};
struct Container_int_ {
  int data[10];
  int size;
};

typedef struct Container_int_ Container_int_;

struct Container_double_ {
  double data[10];
  int size;
};

typedef struct Container_double_ Container_double_;
/* std namespace stubs */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init() {}
      ~Init() {}
      static void destroy(void *ptr) { ((Init*)ptr)->~Init(); }
    };
  };
}

std::ios_base::Init *__ioinit;
char __dso_handle;

/* Data definitions */
char DAT_000121d8[1] = {0};
char DAT_000121fc[1] = {0};
char DAT_00012081[1] = {0};
char DAT_0001209f[1] = {0};
char DAT_000120bb[1] = {0};
char DAT_000120d7[1] = {0};
char DAT_000120f3[1] = {0};
char DAT_00012110[1] = {0};
char DAT_0001212c[1] = {0};
char DAT_00012148[1] = {0};
char DAT_00012164[1] = {0};
char DAT_00012180[1] = {0};
char DAT_0001219d[1] = {0};
char DAT_000121ba[1] = {0};
void *PTR__RTTIBase_00013ecc;
void *PTR__RTTIBase_00013ee0;
extern std::type_info int_typeinfo;

/* Function declarations */
void *malloc(size_t size);
void free(void *ptr);
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_dtors_aux(void);
void __do_global_ctors_aux(void);
void _fini(void);
int main(int, char **);
void __libc_start_main(int (*main)(int, char **), int argc, char ** const argv, 
                       void (*init)(void), void (*fini)(void), 
                       void (*rtld_fini)(void), void *stack_end);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __cxa_begin_catch(void);
void *__cxa_allocate_exception(size_t size);
void __cxa_rethrow(void);
void __cxa_end_catch(void);
void __cxa_throw(void *thrown_exception, std::type_info *tinfo, void (*dest)(void*));
void _Unwind_Resume(void);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);
void deregister_tm_clones(void);
void register_tm_clones(void);

int LifecycleClass::instance_count = 0;
std::type_info *RTTIBase::typeinfo = (std::type_info *)&PTR__RTTIBase_00013ecc;
std::type_info *RTTIDerivedA::typeinfo = (std::type_info *)&PTR__RTTIBase_00013ecc;
std::type_info *RTTIDerivedB::typeinfo = (std::type_info *)&PTR__RTTIBase_00013ee0;

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
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator new(size_t param_1)
{
 void *ptr;
 if (param_1 == 0) param_1 = 1;
 ptr = malloc(param_1);
 if (ptr == (void *)0) {
   throw std::bad_alloc();
 }
 return ptr;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::memcpy @ 0x11070
void * memcpy(void *__dest,const void *__src,size_t __n)
{
 char *d = (char *)__dest;
 char *s = (char *)__src;
 while (__n--) {
 *d++ = *s++;
 }
 return __dest;
}

// Function: <EXTERNAL>::strlen @ 0x11080
size_t strlen(const char *__s)
{
 const char *p = __s;
 while (*p) p++;
 return p - __s;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11090
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
void __libc_start_main(int (*main)(int, char **), int argc, char ** const argv, 
                       void (*init)(void), void (*fini)(void), 
                       void (*rtld_fini)(void), void *stack_end)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
void * operator new[](size_t param_1)
{
 return operator new(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x110c0
void operator delete(void *param_1)
{
 if (param_1 != (void *)0) {
 free(param_1);
 }
 return;
}



void *__dynamic_cast(const void *src_ptr, const std::type_info *src_type, const std::type_info *dst_type, ptrdiff_t src2dst_offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
void operator delete[](void *param_1)
{
 operator delete(param_1);
 return;
}

// Function: <EXTERNAL>::printf @ 0x110f0
int printf(const char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x11110
int puts(const char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
std::ios_base::Init::Init()
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw(void *thrown_exception, std::type_info *tinfo, void (*dest)(void*))
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume(void)
{
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 int unaff_EBX = 0;
 ((void (*)(void))(*(void **)(unaff_EBX + -0x18)))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 uVar1 = 0x11178;
 __ioinit = new std::ios_base::Init();
 __cxa_atexit(&std::ios_base::Init::destroy,(void *)__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main((int (*)(int, char **))main,(int)param_2,(char **)NULL,(void (*)(void))_init,(void (*)(void))_fini,NULL,(void *)param_1);
 do {
 } while( true );
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
 piVar1 = (int *)operator new[](0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + piVar1[2];
 operator delete[](piVar1);
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
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x11502
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11508
int test_cpp_rtti(void)
{
 RTTIBase *puVar1;
 RTTIBase *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (RTTIBase *)operator new(sizeof(RTTIBase));
 puVar1->vtable = &PTR__RTTIBase_00013ecc;
 piVar2 = (RTTIBase *)operator new(sizeof(RTTIBase));
 piVar2->vtable = &PTR__RTTIBase_00013ee0;
 iVar3 = (int)__dynamic_cast(puVar1, RTTIBase::typeinfo, RTTIDerivedA::typeinfo, 0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = (int)__dynamic_cast(piVar2, RTTIBase::typeinfo, RTTIDerivedB::typeinfo, 0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator delete(puVar1);
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
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_000121ba,uVar2);
 return;
}

// Function: main @ 0x11722
int main(int argc, char **argv)
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
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1177c
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11798
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x117b0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x117b8
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x117c4
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x117e2
long double Container_double_get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 lVar1 = *(double *)((char *)this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x117fc
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11804
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11826
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1182a
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1182c
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1184e
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x11860
void __do_global_ctors_aux(void)
{
 return;
}

// Function: frame_dummy @ 0x11861
void frame_dummy(void)
{
 return;
}

// Function: _fini @ 0x118ac
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

