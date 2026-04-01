/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_gcc_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: test_cpp_exception @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00101264 to 00101268 has its CatchHandler @ 00101269 */
  __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: main @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _start @ 00101360 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101390 */

/* WARNING: Removing unreachable block (ram,0x001013a3) */
/* WARNING: Removing unreachable block (ram,0x001013af) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001013c0 */

/* WARNING: Removing unreachable block (ram,0x001013e4) */
/* WARNING: Removing unreachable block (ram,0x001013f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101400 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: test_cpp_member_func @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  long lVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  SimpleClass obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  obj.name[0x1e] = '\0';
  builtin_strncpy(obj.name,"Test",5);
  obj.name[5] = '\0';
  obj.name[6] = '\0';
  obj.name[7] = '\0';
  obj.name[8] = '\0';
  obj.name[9] = '\0';
  obj.name[10] = '\0';
  obj.name[0xb] = '\0';
  obj.name[0xc] = '\0';
  obj.name[0xd] = '\0';
  obj.name[0xe] = '\0';
  obj.name[0xf] = '\0';
  obj.name[0x10] = '\0';
  obj.name[0x11] = '\0';
  obj.name[0x12] = '\0';
  obj.name[0x13] = '\0';
  obj.name[0x14] = '\0';
  obj.name[0x15] = '\0';
  obj.name[0x16] = '\0';
  obj.name[0x17] = '\0';
  obj.name[0x18] = '\0';
  obj.name[0x19] = '\0';
  obj.name[0x1a] = '\0';
  obj.name[0x1b] = '\0';
  obj.name[0x1c] = '\0';
  obj.name[0x1d] = '\0';
  obj.name[0x1f] = '\0';
  sVar2 = strlen(obj.name);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)sVar2 + 0x125c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001014f0 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x001014f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**obj->_vptr_Base)();
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00101520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
  return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
  return 0x16;
}



/* Function: test_cpp_template_func @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  int iVar1;
  long in_FS_OFFSET;
  double dVar2;
  int a;
  int b;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = template_max<int>(3,7);
  dVar2 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)dVar2 + iVar1 + a + b;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
  return 0x10;
}



/* Function: test_cpp_lambda @ 001015f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
  return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
  return 0x2bf;
}



/* Function: test_cpp_rtti @ 00101610 */

/* WARNING: Removing unreachable block (ram,0x001016b2) */
/* WARNING: Removing unreachable block (ram,0x001016b7) */
/* WARNING: Removing unreachable block (ram,0x001016be) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  long lVar1;
  char *__s1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  
  plVar3 = operator_new(8);
  *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
  plVar4 = operator_new(8);
  lVar1 = *plVar3;
  *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
  __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
  if (__s1 == "12RTTIDerivedA") {
    iVar2 = 0x1e;
  }
  else if (*__s1 == '*') {
    iVar2 = 0x14;
  }
  else {
    iVar2 = strcmp(__s1,"12RTTIDerivedA");
    iVar2 = (-(uint)(iVar2 == 0) & 10) + 0x14;
  }
                    /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
                    /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
  if (lVar5 != 0) {
    iVar2 = iVar2 + 100;
  }
  lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  if (lVar5 != 0) {
    iVar2 = iVar2 + 200;
  }
  sVar6 = strlen(__s1 + (*__s1 == '*'));
  (**(code **)(lVar1 + 8))(plVar3);
  (**(code **)(*plVar4 + 8))(plVar4);
  return iVar2 + (int)sVar6;
}



/* Function: test_cpp_oo_features @ 00101780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  double dVar4;
  int a;
  int b;
  SimpleClass obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00102018);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: int r3@[???] */
  builtin_strncpy(obj.name,"Test",5);
  obj.name[5] = '\0';
  obj.name[6] = '\0';
  obj.name[7] = '\0';
  obj.name[8] = '\0';
  obj.name[9] = '\0';
  obj.name[10] = '\0';
  obj.name[0xb] = '\0';
  obj.name[0xc] = '\0';
  obj.name[0xd] = '\0';
  obj.name[0xe] = '\0';
  obj.name[0xf] = '\0';
  obj.name[0x10] = '\0';
  obj.name[0x11] = '\0';
  obj.name[0x12] = '\0';
  obj.name[0x13] = '\0';
  obj.name[0x14] = '\0';
  obj.name[0x15] = '\0';
  obj.name[0x16] = '\0';
  obj.name[0x17] = '\0';
  obj.name[0x18] = '\0';
  obj.name[0x19] = '\0';
  obj.name[0x1a] = '\0';
  obj.name[0x1b] = '\0';
  obj.name[0x1c] = '\0';
  obj.name[0x1d] = '\0';
  obj.name[0x1e] = '\0';
  obj.name[0x1f] = '\0';
  sVar3 = strlen(obj.name);
  __printf_chk(1,&DAT_0010203c,(int)sVar3 + 0x125c);
                    /* Unresolved local var: int result@[???] */
  __printf_chk(1,&DAT_0010205a,LifecycleClass::instance_count * 0x3e9 + 0x15);
  __printf_chk(1,&DAT_00102076,0x2a);
  __printf_chk(1,&DAT_00102092,0x47);
  __printf_chk(1,&DAT_001020ae,0x28a);
  __printf_chk(1,&DAT_001020cb,0x16);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: double r2@[???] */
  iVar2 = template_max<int>(3,7);
  dVar4 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  __printf_chk(1,&DAT_001020e7,(int)dVar4 + iVar2 + a + b);
  __printf_chk(1,&DAT_00102103,0x10);
  __printf_chk(1,&DAT_0010211f,0x55);
  iVar2 = test_cpp_exception();
  __printf_chk(1,&DAT_0010213b,iVar2);
  __printf_chk(1,&DAT_00102158,0x2bf);
  test_cpp_rtti();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_00102175);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: virtual_func @ 00101990 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: getName @ 001019a0 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 001019b0 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  return;
}



/* Function: virtual_func @ 001019c0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return this->multiplier * x;
}



/* Function: getName @ 001019d0 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: funcA @ 001019e0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: funcB @ 001019f0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: funcB @ 00101a00 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: func @ 00101a10 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00101a30 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0x96;
}



/* Function: func @ 00101a50 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00101a70 */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 200;
}



/* Function: func @ 00101a90 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: func @ 00101ab0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  _func_int_varargs *p_Var1;
  
  p_Var1 = (_func_int_varargs *)
           ((long)&(this->super_MiddleA)._vptr_MiddleA +
           (long)(this->super_MiddleA)._vptr_MiddleA[-3]);
  return *(int *)(p_Var1 + *(long *)(*(long *)p_Var1 + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00101ad0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((long)this + *(long *)(*(long *)&this[-1].field_0x20 + -0x18) + -8) + 0xfa;
}



/* Function: getType @ 00101af0 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: getType @ 00101b00 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: ~RTTIDerivedB @ 00101b10 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  return;
}



/* Function: ~RTTIDerivedA @ 00101b20 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  return;
}



/* Function: ~DiamondDerived @ 00101b30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  return;
}



/* Function: ~DiamondDerived @ 00101b40 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~DiamondDerived @ 00101b50 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  return;
}



/* Function: ~MultiDerived @ 00101b60 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  return;
}



/* Function: ~MultiDerived @ 00101b70 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  return;
}



/* Function: ~Derived @ 00101b80 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  return;
}



/* Function: ~Base @ 00101b90 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~Derived @ 00101ba0 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00101bb0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00101bc0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  operator_delete(&this[-1].super_BaseB,0x20);
  return;
}



/* Function: ~RTTIDerivedB @ 00101be0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 00101bf0 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00101c00 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00101c10 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete((_func_int_varargs *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]),0x30);
  return;
}



/* Function: ~DiamondDerived @ 00101c30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  operator_delete(&this[-1].field_0x20,0x30);
  return;
}



/* Function: template_max<int> @ 00101c50 */

int template_max<int>(int a,int b)

{
  if (b <= a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 00101c60 */

double template_max<double>(double a,double b)

{
  if (a <= b) {
    a = b;
  }
  return a;
}



/* Function: template_swap<int> @ 00101c70 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00101c80 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00101c90 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
  int iVar1;
  
  iVar1 = this->size;
  if (iVar1 < 10) {
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00101cb0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  if ((-1 < idx) && (idx < this->size)) {
    return this->data[idx];
  }
  return 0;
}



/* Function: getSize @ 00101cd0 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 00101ce0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00101cf0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  int iVar1;
  
  iVar1 = this->size;
  if (iVar1 < 10) {
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00101d10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  if ((-1 < idx) && (idx < this->size)) {
    return this->data[idx];
  }
  return 0.0;
}



/* Function: getSize @ 00101d40 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: _fini @ 00101d48 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 68 */
