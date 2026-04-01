// Decompiled by BinaryAI
// SHA256: bd0bc4c19c331a4f05dc936954d00d3494d5a7e13ade47ad40cfaa53053bf6b5

// Function: _init @ 0x1048c
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x104ac
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x104b8
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x104c4
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::printf @ 0x104d0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x104dc
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x104e8
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x104f4
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::puts @ 0x10500
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10518
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10524
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::abort @ 0x10530
void abort(void)
{
  abort();
}

// Function: _start @ 0x1053c
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x10580
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x105a4
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x105e8
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10638
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}

// Function: param_fake_branch @ 0x106a4
void param_fake_branch(void)
{
  return;
}

// Function: call_fake_branch @ 0x106a8
undefined4 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x106b0
int param_opaque_predicate(uint param_1)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  uVar5 = param_1 + 1;
  uVar4 = 0xffffffff;
  uVar2 = param_1;
  uVar1 = uVar5;
  if (param_1 != 0xffffffff) {
    do {
      uVar4 = uVar1;
      __aeabi_idivmod(uVar2);
      uVar2 = uVar4;
      uVar1 = extraout_r1;
    } while (extraout_r1 != 0);
  }
  iVar3 = param_1 * 3 + 0x14;
  if ((param_1 * param_1 + (param_1 * 2 | 1) ^ uVar5 * uVar5 | uVar4 ^ 1) == 0) {
    iVar3 = param_1 * 2 + 10;
  }
  return iVar3;
}

// Function: call_opaque_predicate @ 0x10710
undefined4 call_opaque_predicate(void)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  iVar2 = 5;
  iVar1 = 6;
  do {
    iVar4 = iVar1;
    __aeabi_idivmod(iVar2);
    iVar2 = iVar4;
    iVar1 = extraout_r1;
  } while (extraout_r1 != 0);
  uVar3 = 0x23;
  if (iVar4 == 1) {
    uVar3 = 0x14;
  }
  return uVar3;
}

// Function: param_instruction_substitution @ 0x10744
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x1075c
undefined4 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x10764
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte bVar1;
  byte *pbVar2;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  bVar1 = *param_2;
  if (bVar1 != 0) {
    pbVar2 = param_2 + 1;
    do {
      pbVar2[-1] = bVar1 ^ param_4;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return param_2;
}

// Function: param_string_encryption @ 0x107c0
int param_string_encryption(void)
{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  byte local_28 [31];
  undefined local_9;
  pbVar1 = (byte *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
  uVar4 = 0;
  local_9 = 0;
  bVar3 = local_28[0];
  if (local_28[0] != 0) {
    do {
      *pbVar1 = bVar3 ^ 0x5a;
      bVar3 = pbVar1[1];
      pbVar1 = pbVar1 + 1;
    } while (bVar3 != 0);
    uVar4 = (uint)local_28[0];
  }
  sVar2 = strlen((char *)local_28);
  return sVar2 + uVar4;
}

// Function: call_string_encryption @ 0x1082c
int call_string_encryption(void)
{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  uint uVar4;
  byte local_28 [31];
  undefined local_9;
  pbVar1 = (byte *)strncpy((char *)local_28,&param_string_encryption_encrypted,0x20);
  uVar4 = 0;
  local_9 = 0;
  bVar3 = local_28[0];
  if (local_28[0] != 0) {
    do {
      *pbVar1 = bVar3 ^ 0x5a;
      bVar3 = pbVar1[1];
      pbVar1 = pbVar1 + 1;
    } while (bVar3 != 0);
    uVar4 = (uint)local_28[0];
  }
  sVar2 = strlen((char *)local_28);
  return sVar2 + uVar4;
}

// Function: param_tail_call_optimized @ 0x10898
int param_tail_call_optimized(int param_1,int param_2)
{
  longlong lVar1;
  uint uVar2;
  if (0 < param_1) {
    uVar2 = param_1 - 1;
    lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)uVar2;
    param_2 = (uVar2 * uVar2 + param_2 + param_1) -
              ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x108d4
undefined4 call_tail_call_optimized(void)
{
  return 0x7a314;
}

// Function: param_non_tail_call @ 0x108e0
int param_non_tail_call(int param_1)
{
  longlong lVar1;
  uint uVar2;
  if (0 < param_1) {
    uVar2 = param_1 - 1;
    lVar1 = (ulonglong)(param_1 - 2) * (ulonglong)uVar2;
    return (uVar2 * uVar2 + param_1) -
           ((uint)((byte)((ulonglong)lVar1 >> 0x20) & 1) << 0x1f | (uint)lVar1 >> 1);
  }
  return 0;
}

// Function: call_non_tail_call @ 0x10910
undefined4 call_non_tail_call(void)
{
  return 0x13ba;
}

// Function: param_vectorized_loop @ 0x1091c
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,int param_4)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  iVar1 = 0;
  iVar2 = param_4;
  piVar3 = param_3;
  if (0 < param_4) {
    do {
      iVar2 = iVar2 + -1;
      *piVar3 = *param_2 + *param_1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 != 0);
    if (0 < param_4) {
      iVar1 = 0;
      do {
        param_4 = param_4 + -1;
        iVar1 = *param_3 + iVar1;
        param_3 = param_3 + 1;
      } while (param_4 != 0);
    }
  }
  return iVar1;
}

// Function: call_vectorized_loop @ 0x10974
undefined4 call_vectorized_loop(void)
{
  return 0x48;
}

// Function: param_link_time_optimization @ 0x1097c
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x10988
undefined4 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: div_zero_handler @ 0x10990
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x109b8
undefined4 param_division_by_zero(undefined4 param_1)
{
  int iVar1;
  undefined4 uVar2;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = __divsi3(10,param_1);
  return uVar2;
}

// Function: call_division_by_zero @ 0x10a10
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: segv_handler @ 0x10a44
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10a6c
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  return uVar2;
}

// Function: call_null_pointer_deref @ 0x10ab0
int call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  local_14 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x10af4
void param_buffer_overflow_stack(void)
{
  return;
}

// Function: param_buffer_overflow_heap @ 0x10af8
void param_buffer_overflow_heap(void)
{
  return;
}

// Function: call_buffer_overflow @ 0x10afc
undefined4 call_buffer_overflow(void)
{
  return 0x1e;
}

// Function: param_integer_overflow @ 0x10b04
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  int iVar2;
  bool bVar3;
  bVar3 = SBORROW4(param_1,1);
  iVar1 = param_1 - 1;
  iVar2 = param_2 + param_1;
  if (0 < (int)param_1) {
    bVar3 = SBORROW4(param_2,1);
    iVar1 = param_2 - 1;
  }
  if ((iVar1 < 0 != bVar3) || (iVar1 = -1, -1 < iVar2)) {
    iVar1 = iVar2;
    if (0 < iVar2) {
      iVar1 = -2;
    }
    if (-1 < (int)(param_2 & param_1)) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x10b44
undefined4 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x10b50
int param_undefined_behavior(int param_1)
{
  return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x10b58
undefined4 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x10b60
undefined4 param_implementation_defined(void)
{
  return 0x2c;
}

// Function: call_implementation_defined @ 0x10b68
undefined4 call_implementation_defined(void)
{
  return 0x2c;
}

// Function: test_obf_opt_edge @ 0x10b70
void test_obf_opt_edge(void)
{
  byte *pbVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30 [7];
  undefined local_11;
  puts(&DAT_00011251);
  printf(&DAT_00011080,10);
  iVar3 = 5;
  iVar4 = 6;
  do {
    iVar5 = iVar4;
    __aeabi_idivmod(iVar3);
    iVar3 = iVar5;
    iVar4 = extraout_r1;
  } while (extraout_r1 != 0);
  uVar6 = 0x23;
  if (iVar5 == 1) {
    uVar6 = 0x14;
  }
  printf(&DAT_0001109c,uVar6);
  printf(&DAT_000110b8,0xe1);
  pbVar1 = (byte *)strncpy((char *)local_30,&param_string_encryption_encrypted,0x20);
  uVar7 = local_30[0] & 0xff;
  uVar8 = 0;
  local_11 = 0;
  if (uVar7 != 0) {
    do {
      *pbVar1 = (byte)uVar7 ^ 0x5a;
      uVar7 = (uint)pbVar1[1];
      pbVar1 = pbVar1 + 1;
    } while (uVar7 != 0);
    uVar8 = local_30[0] & 0xff;
  }
  sVar2 = strlen((char *)local_30);
  printf(&DAT_000110d5,sVar2 + uVar8);
  printf(&DAT_000110f1,0x7a314);
  printf(&DAT_0001111b,0x13ba);
  printf(&DAT_00011140,0x48);
  printf(&DAT_00011166,0x14);
  iVar3 = param_division_by_zero(5);
  iVar4 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_00011186,iVar4 + iVar3);
  local_30[0] = 0x2a;
  iVar3 = param_null_pointer_deref(local_30);
  iVar4 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_000111a2,iVar4 + iVar3);
  printf(&DAT_000111bf,0x1e);
  printf(&DAT_000111dc,2000000000);
  printf(&DAT_0001120d,10);
  printf(&DAT_0001122a,0x2c);
  return;
}

// Function: main @ 0x10d80
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: __divsi3 @ 0x10d94
uint __divsi3(uint param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  if (param_2 == 0) {
    bVar5 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar5) {
      param_1 = 0x80000000;
    }
    uVar1 = __aeabi_ldiv0(param_1);
    return uVar1;
  }
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10de4))();
  return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x10d9c
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool in_NG;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if (in_NG) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10de4))();
  return uVar1;
}

// Function: __aeabi_idivmod @ 0x10fb4
void __aeabi_idivmod(int param_1,int param_2)
{
  bool bVar1;
  if (param_2 != 0) {
    _divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_ldiv0(param_1);
  return;
}

// Function: __aeabi_ldiv0 @ 0x10fd4
void __aeabi_ldiv0(void)
{
  raise(8);
  return;
}

// Function: _fini @ 0x10fe4
void _fini(void)
{
  return;
}

