/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_O3_g
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



/* Function: varargs_func.cold @ 001010c0 */

int varargs_func_cold(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  int in_EAX;
  int *piVar1;
  long in_FS_OFFSET;
  int *piStack0000000000000008;
  long in_stack_00000018;
  
  piVar1 = param_3;
  do {
    in_EAX = in_EAX + 1;
    param_5 = param_5 + *piVar1;
    piVar1 = piVar1 + 2;
  } while (in_EAX < param_1);
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5;
  }
  piStack0000000000000008 = param_3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_varargs.cold @ 001010db */

int param_varargs_cold(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  int in_EAX;
  int *piVar1;
  long in_FS_OFFSET;
  int *piStack0000000000000008;
  long in_stack_00000018;
  
  piVar1 = param_3;
  do {
    in_EAX = in_EAX + 1;
    param_5 = param_5 + *piVar1;
    piVar1 = piVar1 + 2;
  } while (in_EAX < param_1);
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5;
  }
  piStack0000000000000008 = param_3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: main @ 00101100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _start @ 00101130 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101160 */

/* WARNING: Removing unreachable block (ram,0x00101173) */
/* WARNING: Removing unreachable block (ram,0x0010117f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101190 */

/* WARNING: Removing unreachable block (ram,0x001011b4) */
/* WARNING: Removing unreachable block (ram,0x001011c0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011d0 */

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



/* Function: func_a @ 00101220 */

int func_a(int x)

{
  return x + 10;
}



/* Function: param_varargs @ 00101230 */

/* DWARF original prototype: int param_varargs(int count, int count, ...) */

int param_varargs(int count,int count_1,...)

{
  int in_ECX;
  int in_EDX;
  int in_R8D;
  long in_FS_OFFSET;
  va_list args;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_EDX + count_1 + in_ECX + in_R8D;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: varargs_func @ 001012a0 */

/* DWARF original prototype: int varargs_func(int count, int count, ...) */

int varargs_func(int count,int count_1,...)

{
  int in_ECX;
  int in_EDX;
  int in_R8D;
  int in_R9D;
  long in_FS_OFFSET;
  va_list args;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_EDX + count_1 + in_ECX + in_R8D + in_R9D;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: func_b @ 00101320 */

int func_b(int param_1)

{
  return param_1 * 2;
}



/* Function: cdecl_func @ 00101330 */

int cdecl_func(int a,int b)

{
  return a + b;
}



/* Function: call_cdecl @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 00101350 */

int stdcall_func(int a,int b)

{
  return a * b;
}



/* Function: call_stdcall @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00101370 */

int fastcall_func(int a,int b,int c)

{
  return a + b + c;
}



/* Function: call_fastcall @ 00101380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00101390 */

undefined8 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 001013a0 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 001013b0 */

undefined8 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 001013c0 */

int mips_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_mips @ 001013d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 001013e0 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00101400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 00101410 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00101420 */

undefined8 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00101430 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 00101460 */

/* DWARF func body range[0]: {@address 0x1010c0 001010c0} (27 bytes)
   DWARF func body range[1]: {@address 0x101460 00101460} (194 bytes)
   DWARF: {@address 0x101460 varargs_func} disjoint block 1 */

int varargs_func(int count,...)

{
  int iVar1;
  undefined8 in_RCX;
  int *piVar2;
  undefined8 in_RDX;
  ulong uVar3;
  undefined8 in_RSI;
  int iVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  int in_stack_00000008;
  va_list args;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = in_RSI;
  local_28 = in_RDX;
  local_20 = in_RCX;
  local_18 = in_R8;
  local_10 = in_R9;
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar4 = 0;
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    uVar3 = 8;
    do {
      if (0x2f < (uint)uVar3) {
        iVar1 = iVar1 + 1;
        piVar2 = (int *)&stack0x00000010;
        iVar4 = iVar4 + in_stack_00000008;
        if (count != iVar1) {
          do {
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + *piVar2;
            piVar2 = piVar2 + 2;
          } while (iVar1 < count);
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + *(int *)((long)local_38 + uVar3);
      uVar3 = (ulong)((uint)uVar3 + 8);
    } while (count != iVar1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: func_no_args @ 00101530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00101540 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00101560 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  
  if (s != (char *)0x0) {
    sVar1 = strlen(s);
    x = x + (int)sVar1;
  }
  return (int)((double)x + d + (double)ll);
}



/* Function: func_struct_byval @ 001015c0 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
                    /* Unresolved local var: longlong sum@[???] */
                    /* Unresolved local var: int i@[???] */
  return (int)s.data[0] + (int)s.data[2] + (int)s.data[4] + (int)s.data[6] + (int)s.data[8] +
         (int)s.data[10] + (int)s.data[0xc] + (int)s.data[0xe] +
         (int)s.data[1] + (int)s.data[3] + (int)s.data[5] + (int)s.data[7] + (int)s.data[9] +
         (int)s.data[0xb] + (int)s.data[0xd] + (int)s.data[0xf];
}



/* Function: func_struct_byptr @ 00101630 */

int func_struct_byptr(SmallStruct *p)

{
  if (p != (SmallStruct *)0x0) {
    return p->x * p->y;
  }
  return -1;
}



/* Function: test_calling_conventions @ 00101650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  
  puts(&DAT_00102008);
  __printf_chk(1,"CALL-L1-01: %d\n",0xf);
  __printf_chk(1,"CALL-L1-02: %d\n",0x32);
  __printf_chk(1,"CALL-L1-03: %d\n",6);
  __printf_chk(1,"CALL-L1-04: %d\n",0xf);
  __printf_chk(1,"CALL-L1-05: %d\n",0xf);
  __printf_chk(1,"CALL-L1-06: %d\n",100);
  __printf_chk(1,"CALL-L1-07: %d\n",0x15);
  __printf_chk(1,"CALL-L1-08: %d\n",0xf);
  __printf_chk(1,"CALL-L1-09: %d\n",10);
  __printf_chk(1,"CALL-L1-10: %d\n",0x21);
  iVar1 = varargs_func(5,1,2,3,4,5);
  __printf_chk(1,&DAT_00102030,iVar1);
  __printf_chk(1,&DAT_00102058,0x2a);
  __printf_chk(1,&DAT_00102080,0x24);
  __printf_chk(1,&DAT_001020a8,0x75);
  __printf_chk(1,&DAT_001020d0,0x88);
  __printf_chk(1,&DAT_00102100,0x32);
  return;
}



/* Function: param_by_value_int @ 00101810 */

int param_by_value_int(int x)

{
  return x * 2;
}



/* Function: call_by_value_int @ 00101820 */

undefined8 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00101830 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00101840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 00101850 */

int param_array_decay(int *arr,int n)

{
  return 8;
}



/* Function: call_array_decay @ 00101860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  return 8;
}



/* Function: param_string @ 00101870 */

int param_string(char *str)

{
  return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 00101880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00101890 */

int param_ptr_array(char **arr,int n)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    ppcVar1 = arr + (ulong)(n - 1) + 1;
    iVar3 = 0;
    do {
      pcVar2 = *arr;
      arr = arr + 1;
      iVar3 = iVar3 + *pcVar2;
    } while (ppcVar1 != arr);
    return iVar3;
  }
  return 0;
}



/* Function: call_ptr_array @ 001018d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 001018e0 */

/* DWARF func body range[0]: {@address 0x1010db 001010db} (27 bytes)
   DWARF func body range[1]: {@address 0x1018e0 001018e0} (194 bytes)
   DWARF: {@address 0x1018e0 param_varargs} disjoint block 1 */

int param_varargs(int count,...)

{
  int iVar1;
  undefined8 in_RCX;
  int *piVar2;
  undefined8 in_RDX;
  ulong uVar3;
  undefined8 in_RSI;
  int iVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  int in_stack_00000008;
  va_list args;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = in_RSI;
  local_28 = in_RDX;
  local_20 = in_RCX;
  local_18 = in_R8;
  local_10 = in_R9;
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar4 = 0;
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    uVar3 = 8;
    do {
      if (0x2f < (uint)uVar3) {
        iVar1 = iVar1 + 1;
        piVar2 = (int *)&stack0x00000010;
        iVar4 = iVar4 + in_stack_00000008;
        if (count != iVar1) {
          do {
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + *piVar2;
            piVar2 = piVar2 + 2;
          } while (iVar1 < count);
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + *(int *)((long)local_38 + uVar3);
      uVar3 = (ulong)((uint)uVar3 + 8);
    } while (count != iVar1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: call_varargs_param @ 001019b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 001019e0 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00101a10 */

int param_double_ptr(int **pp,int new_val)

{
  if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
    **pp = new_val;
    *pp = (int *)0x0;
    return 1;
  }
  return -1;
}



/* Function: call_double_ptr @ 00101a40 */

undefined8 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00101a50 */

int param_complex_cast(void *p,int type)

{
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * back_ptr@[???] */
    return *(int *)p;
  }
  if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[???] */
    return *(int *)((long)p + 4) + *(int *)p;
  }
  return -1;
}



/* Function: call_complex_cast @ 00101a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00101a90 */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00101aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  return 0xf;
}



/* Function: param_order_dep @ 00101ab0 */

int param_order_dep(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_order_dep @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
  return 4;
}



/* Function: test_parameter_passing @ 00101ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_00102130);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  __printf_chk(1,"PARAM-L2-03: %d\n",300);
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
  __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
  __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
  __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
  __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}



/* Function: ret_basic_type @ 00101c10 */

int ret_basic_type(int param_1)

{
  return param_1 * 2;
}



/* Function: call_ret_basic @ 00101c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00101c30 */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00101c40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00101c50 */

SmallPoint ret_small_struct(int x,int y)

{
  SmallPoint SVar1;
  
  SVar1.y = y;
  SVar1.x = x;
  return SVar1;
}



/* Function: call_ret_small_struct @ 00101c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00101c80 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  long lVar1;
  long in_FS_OFFSET;
  LargeData d;
  
                    /* Unresolved local var: int i@[???] */
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __return_storage_ptr__->data[0] = seed;
  __return_storage_ptr__->data[1] = seed + 1;
  __return_storage_ptr__->data[2] = seed + 2;
  __return_storage_ptr__->data[3] = seed + 3;
  __return_storage_ptr__->data[4] = seed + 4;
  __return_storage_ptr__->data[5] = seed + 5;
  __return_storage_ptr__->data[6] = seed + 6;
  __return_storage_ptr__->data[7] = seed + 7;
  __return_storage_ptr__->data[8] = seed + 8;
  __return_storage_ptr__->data[9] = seed + 9;
  __return_storage_ptr__->data[10] = seed + 10;
  __return_storage_ptr__->data[0xb] = seed + 0xb;
  __return_storage_ptr__->data[0xc] = seed + 0xc;
  __return_storage_ptr__->data[0xd] = seed + 0xd;
  __return_storage_ptr__->data[0xe] = seed + 0xe;
  __return_storage_ptr__->data[0xf] = seed + 0xf;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101d00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  return 0xd7;
}



/* Function: ret_func_ptr @ 00101d10 */

func_ptr_t ret_func_ptr(int selector)

{
  code *pcVar1;
  
  pcVar1 = func_b;
  if (selector == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00101d40 */

void * ret_opaque_handle(int type)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&handle1_1;
  if (type != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00101d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00101d70 */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z * 2;
  if (x <= y) {
    iVar1 = z + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101d80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00101d90 */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 3) {
    iVar1 = (op * 5 + 5) * 2;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101db0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00101dc0 */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00101dd0 */

undefined8 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00101de0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  puts(&DAT_001022ac);
  __printf_chk(1,&DAT_001022ca,0x2a);
  __printf_chk(1,&DAT_001022e6,0x14);
  __printf_chk(1,&DAT_00102302,7);
  __printf_chk(1,&DAT_0010231d,0xd7);
  __printf_chk(1,&DAT_0010233a,10);
  __printf_chk(1,&DAT_00102356,handle1_1);
  __printf_chk(1,&DAT_00102373,0x28);
  __printf_chk(1,&DAT_0010238f,0x3c);
  __printf_chk(1,&DAT_001023ab,0x15);
  return;
}



/* Function: _fini @ 00101ed4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 81 */
