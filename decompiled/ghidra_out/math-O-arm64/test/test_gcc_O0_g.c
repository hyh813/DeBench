/**
 * Ghidra Decompilation Output
 * Source Binary: 1_gcc_O0_g
 * Decompilation Date: Tue Jan 13 19:19:00 CST 2026
 * Ghidra Version: 12.0_PUBLIC
 * Architecture: AARCH64
 */

// ================== Function: sequential_ops ==================
// Address: 100000460

int sequential_ops(int a,int b,int c)

{
                    /* Unresolved local var: int temp1@[???]
                       Unresolved local var: int temp2@[???]
                       Unresolved local var: int temp3@[???] */
  return (a + b) * 2 - c;
}



// ================== Function: single_if ==================
// Address: 1000004a8

int single_if(int x)

{
  undefined4 local_4;
  
  local_4 = x;
  if (0 < x) {
    local_4 = x << 1;
  }
  return local_4;
}



// ================== Function: if_else ==================
// Address: 1000004dc

int if_else(int x)

{
  uint local_4;
  
  local_4 = (uint)(0 < x);
  return local_4;
}



// ================== Function: nested_if_2 ==================
// Address: 100000514

int nested_if_2(int a,int b)

{
  int local_4;
  
  if (a < 1) {
    local_4 = 0;
  }
  else {
    local_4 = a;
    if (0 < b) {
      local_4 = a + b;
    }
  }
  return local_4;
}



// ================== Function: nested_if_deep ==================
// Address: 100000574

int nested_if_deep(int a,int b,int c,int d,int e)

{
  undefined4 local_4;
  
  if (a < 1) {
    local_4 = 0;
  }
  else if (b < 1) {
    local_4 = 1;
  }
  else if (c < 1) {
    local_4 = 2;
  }
  else if (d < 1) {
    local_4 = 3;
  }
  else if (e < 1) {
    local_4 = 4;
  }
  else {
    local_4 = 5;
  }
  return local_4;
}



// ================== Function: if_elseif_chain ==================
// Address: 10000062c

int if_elseif_chain(int x)

{
  undefined4 local_4;
  
  if (x == 0) {
    local_4 = 10;
  }
  else if (x == 1) {
    local_4 = 0x14;
  }
  else if (x == 2) {
    local_4 = 0x1e;
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



// ================== Function: if_elseif_long ==================
// Address: 10000069c

int if_elseif_long(int x)

{
  undefined4 local_4;
  
  if (x == 0) {
    local_4 = 100;
  }
  else if (x == 1) {
    local_4 = 200;
  }
  else if (x == 2) {
    local_4 = 300;
  }
  else if (x == 3) {
    local_4 = 400;
  }
  else if (x == 4) {
    local_4 = 500;
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



// ================== Function: switch_small ==================
// Address: 100000744

int switch_small(int op)

{
  undefined4 local_4;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  if (op == 0) {
    local_4 = 0xf;
  }
  else if (op == 1) {
    local_4 = 5;
  }
  else if (op == 2) {
    local_4 = 0x32;
  }
  else if (op == 3) {
    local_4 = 2;
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



// ================== Function: test_control_flow_l1 ==================
// Address: 100000804

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_control_flow_l1(void)

{
  _printf(s_________100000a24);
  sequential_ops(5,7,3);
  _printf("CF-L1-01 (sequential_ops): %d\n");
  single_if(10);
  _printf("CF-L1-02 (single_if): %d\n");
  single_if(-5);
  _printf("CF-L1-02 (single_if): %d\n");
  if_else(5);
  _printf("CF-L1-03 (if_else): %d\n");
  if_else(-3);
  _printf("CF-L1-03 (if_else): %d\n");
  nested_if_2(10,5);
  _printf("CF-L1-04 (nested_if_2): %d\n");
  nested_if_2(10,-5);
  _printf("CF-L1-04 (nested_if_2): %d\n");
  nested_if_2(-10,5);
  _printf("CF-L1-04 (nested_if_2): %d\n");
  nested_if_deep(1,1,1,1,1);
  _printf("CF-L1-05 (nested_if_deep): %d\n");
  if_elseif_chain(1);
  _printf("CF-L1-06 (if_elseif_chain): %d\n");
  if_elseif_long(3);
  _printf("CF-L1-07 (if_elseif_long): %d\n");
  switch_small(2);
  _printf("CF-L1-08 (switch_small): %d\n");
  return;
}



// ================== Function: main ==================
// Address: 1000009ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_control_flow_l1();
  return 0;
}



// ================== Function: _printf ==================
// Address: 100000a18

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _printf(char *param_1,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100000a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


// Total Functions: 11
