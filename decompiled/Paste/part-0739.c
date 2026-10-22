/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10081d614 | FUN_10081d614 */

void FUN_10081d614(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100806454(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,param_6,
                FUN_100812e78,unaff_x22 + 0x10,thunk_FUN_100812cbc,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081d72c | FUN_10081d72c */

void FUN_10081d72c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e6ec;
  FUN_100806c44(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,param_6,
                (undefined8 *)(unaff_x22 + 0x98),FUN_100812e78,unaff_x22 + 0x10,thunk_FUN_100812cbc,
                unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081d864 | FUN_10081d864 */

void FUN_10081d864(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100807348(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,param_6,
                FUN_100812e78,unaff_x22 + 0x10,thunk_FUN_100812cbc,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081d97c | FUN_10081d97c */

void FUN_10081d97c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806454(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_10081da88,unaff_x22 + 0x10,FUN_10081daac);
  return;
}



/* Address: 0x10081da88 | FUN_10081da88 */

void FUN_10081da88(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x10081daac | FUN_10081daac */

void FUN_10081daac(undefined8 param_1)

{
  FUN_10081ec30(param_1,FUN_10080a13c);
  return;
}



/* Address: 0x10081dab8 | FUN_10081dab8 */

void FUN_10081dab8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000028;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806c44(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                param_8,FUN_100824644,unaff_x22 + 0x10,thunk_FUN_10081daac,unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081dbd0 | FUN_10081dbd0 */

void FUN_10081dbd0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100807348(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_7,
                FUN_100824644,unaff_x22 + 0x10,thunk_FUN_10081daac);
  return;
}



/* Address: 0x10081dcdc | FUN_10081dcdc */

void FUN_10081dcdc(undefined1 *param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  code *in_stack_00000010;
  
  if (param_3 == '\0') {
    (*in_stack_00000010)();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_1;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_1;
    puVar1[1] = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10081dd74 | FUN_10081dd74 */

void FUN_10081dd74(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100806454(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,param_6,
                FUN_100813218,unaff_x22 + 0x10,thunk_FUN_1008130ec,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081de8c | FUN_10081de8c */

void FUN_10081de8c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e6ec;
  FUN_100806c44(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,param_6,
                (undefined8 *)(unaff_x22 + 0x98),FUN_100813218,unaff_x22 + 0x10,thunk_FUN_1008130ec,
                unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081dfc4 | FUN_10081dfc4 */

void FUN_10081dfc4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100807348(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,5,param_6,
                FUN_100813218,unaff_x22 + 0x10,thunk_FUN_1008130ec,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081e0dc | FUN_10081e0dc */

void FUN_10081e0dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806454(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                FUN_100824658,unaff_x22 + 0x10,thunk_FUN_10081345c);
  return;
}



/* Address: 0x10081e1e8 | FUN_10081e1e8 */

void FUN_10081e1e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000028;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806c44(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                param_8,FUN_100824658,unaff_x22 + 0x10,thunk_FUN_10081345c,unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081e300 | FUN_10081e300 */

void FUN_10081e300(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100807348(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                FUN_100824658,unaff_x22 + 0x10,thunk_FUN_10081345c);
  return;
}



/* Address: 0x10081e40c | FUN_10081e40c */

void FUN_10081e40c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081e524;
  FUN_100806454(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,param_6,
                FUN_10081e584,unaff_x22 + 0x10,FUN_10081e5a8,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081e524 | FUN_10081e524 */

void FUN_10081e524(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x98));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010081e568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010081e580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Address: 0x10081e584 | FUN_10081e584 */

void FUN_10081e584(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x10081e5a8 | FUN_10081e5a8 */

void FUN_10081e5a8(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10080a27c);
  return;
}



/* Address: 0x10081e5b4 | FUN_10081e5b4 */

void FUN_10081e5b4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10081e6ec;
  FUN_100806c44(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,param_6,
                (undefined8 *)(unaff_x22 + 0x98),FUN_1008134b0,unaff_x22 + 0x10,thunk_FUN_10081e5a8,
                unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081e6ec | FUN_10081e6ec */

void FUN_10081e6ec(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010081e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010081e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Address: 0x10081e74c | FUN_10081e74c */

void FUN_10081e74c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100807348(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,param_6,
                FUN_1008134b0,unaff_x22 + 0x10,thunk_FUN_10081e5a8,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081e864 | FUN_10081e864 */

void FUN_10081e864(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806454(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                FUN_10082466c,unaff_x22 + 0x10,thunk_FUN_100813930);
  return;
}



/* Address: 0x10081e970 | FUN_10081e970 */

void FUN_10081e970(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000028;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100806c44(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                param_8,FUN_10082466c,unaff_x22 + 0x10,thunk_FUN_100813930,unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081ea88 | FUN_10081ea88 */

void FUN_10081ea88(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081d37c;
  FUN_100807348(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_7,
                FUN_10082466c,unaff_x22 + 0x10,thunk_FUN_100813930);
  return;
}



/* Address: 0x10081eb94 | FUN_10081eb94 */

void FUN_10081eb94(undefined1 *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,code *param_11)

{
  undefined1 *puVar1;
  
  if (param_3 == '\x01') {
    (*param_11)(param_1,param_9,param_7,param_8,param_4,param_5,param_6,param_9,param_10);
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_1;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_1;
    puVar1[1] = 1;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10081ec30 | FUN_10081ec30 */

void FUN_10081ec30(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010081ec38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10081ec3c | FUN_10081ec3c */

void FUN_10081ec3c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100806454(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,param_6,
                FUN_10081ed54,unaff_x22 + 0x10,FUN_10081ed78,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081ed54 | FUN_10081ed54 */

void FUN_10081ed54(void)

{
  FUN_100812bd0();
  return;
}



/* Address: 0x10081ed78 | FUN_10081ed78 */

void FUN_10081ed78(undefined8 param_1)

{
  FUN_10081efd4(param_1,FUN_10080a2d0);
  return;
}



/* Address: 0x10081ed84 | FUN_10081ed84 */

void FUN_10081ed84(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000020;
  plVar1 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e6ec;
  FUN_100806c44(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,param_6,
                (undefined8 *)(unaff_x22 + 0x98),FUN_100813984,unaff_x22 + 0x10,thunk_FUN_10081ed78,
                unaff_x22 + 0x60);
  return;
}



/* Address: 0x10081eebc | FUN_10081eebc */

void FUN_10081eebc(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x28) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x38) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000020;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000028;
  *(undefined8 *)(unaff_x22 + 0x80) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x88) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x90) = in_stack_00000018;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  Swift::Array<undefined>::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10081e524;
  FUN_100807348(unaff_x22 + 0x58,param_1,param_2 & 0xcfffffffffffffff,param_3,param_4,6,param_6,
                FUN_100813984,unaff_x22 + 0x10,thunk_FUN_10081ed78,unaff_x22 + 0x60,param_7);
  return;
}



/* Address: 0x10081efd4 | FUN_10081efd4 */

void FUN_10081efd4(undefined8 *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010081efe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10081efe4 | FUN_10081efe4 */

void FUN_10081efe4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_6,
                FUN_100824680,0,thunk_FUN_10081f0dc,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081f0c8 | FUN_10081f0c8 */

void FUN_10081f0c8(void)

{
  FUN_10081f2f0();
  return;
}



/* Address: 0x10081f0dc | FUN_10081f0dc */

undefined8 FUN_10081f0dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  _swift_bridgeObjectRetain(param_1[1]);
  return uVar1;
}



/* Address: 0x10081f10c | FUN_10081f10c */

void FUN_10081f10c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  *(undefined8 *)(unaff_x22 + 0x18) = param_8;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100758850;
  FUN_100808514(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100824680,0,thunk_FUN_10081f0dc,0);
  return;
}



/* Address: 0x10081f20c | FUN_10081f20c */

void FUN_10081f20c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,0,param_6,
                FUN_100824680,0,thunk_FUN_10081f0dc,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081f2f0 | FUN_10081f2f0 */

void FUN_10081f2f0(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\0') {
    *param_1 = param_2;
    param_1[1] = param_3;
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10081f35c | FUN_10081f35c */

void FUN_10081f35c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_6,
                FUN_100824694,0,thunk_FUN_10081f454,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081f440 | FUN_10081f440 */

void FUN_10081f440(void)

{
  FUN_10081f638();
  return;
}



/* Address: 0x10081f454 | FUN_10081f454 */

undefined8 FUN_10081f454(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10081f464 | FUN_10081f464 */

void FUN_10081f464(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_100824694,0,thunk_FUN_10081f454,0,param_8,
                param_9);
  return;
}



/* Address: 0x10081f554 | FUN_10081f554 */

void FUN_10081f554(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,1,param_6,
                FUN_100824694,0,thunk_FUN_10081f454,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081f638 | FUN_10081f638 */

void FUN_10081f638(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\x01') {
    *param_1 = param_2;
    return;
  }
  FUN_1000f4a4c();
  puVar1 = param_2;
  FUN_10080b43c();
  _swift_allocError(&DAT_100f04860,puVar1,0,0);
  *puVar1 = (char)param_2;
  puVar1[1] = 1;
  _swift_willThrow();
  return;
}



/* Address: 0x10081f6a4 | FUN_10081f6a4 */

void FUN_10081f6a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,2,param_6,
                FUN_1008246a8,0,thunk_FUN_10081f79c,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081f788 | FUN_10081f788 */

void FUN_10081f788(void)

{
  FUN_10081f988();
  return;
}



/* Address: 0x10081f79c | FUN_10081f79c */

undefined8 FUN_10081f79c(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x10081f7ac | FUN_10081f7ac */

void FUN_10081f7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005cd444;
  FUN_100808514(plVar1,param_2,param_3,param_4 & 0xcfffffffffffffff,param_5,param_6,2,param_7,
                (undefined8 *)(unaff_x22 + 0x10),FUN_1008246a8,0,thunk_FUN_10081f79c,0,param_8,
                param_9);
  return;
}



/* Address: 0x10081f8a4 | FUN_10081f8a4 */

void FUN_10081f8a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,2,param_6,
                FUN_1008246a8,0,thunk_FUN_10081f79c,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081f988 | FUN_10081f988 */

void FUN_10081f988(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\x02') {
    *param_1 = param_2;
    return;
  }
  FUN_1000f4a4c();
  puVar1 = param_2;
  FUN_10080b43c();
  _swift_allocError(&DAT_100f04860,puVar1,0,0);
  *puVar1 = (char)param_2;
  puVar1[1] = 2;
  _swift_willThrow();
  return;
}



/* Address: 0x10081f9f4 | FUN_10081f9f4 */

void FUN_10081f9f4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,3,param_6,
                FUN_1008246bc,0,thunk_FUN_10081faec,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081fad8 | FUN_10081fad8 */

void FUN_10081fad8(void)

{
  FUN_10081fcd0();
  return;
}



/* Address: 0x10081faec | FUN_10081faec */

undefined1 FUN_10081faec(undefined1 *param_1)

{
  return *param_1;
}



/* Address: 0x10081fafc | FUN_10081fafc */

void FUN_10081fafc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x18) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100808514(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,3,param_6,
                (undefined1 *)(unaff_x22 + 0x18),FUN_1008246bc,0,thunk_FUN_10081faec,0,param_8,
                param_9);
  return;
}



/* Address: 0x10081fbec | FUN_10081fbec */

void FUN_10081fbec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,3,param_6,
                FUN_1008246bc,0,thunk_FUN_10081faec,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081fcd0 | FUN_10081fcd0 */

void FUN_10081fcd0(byte *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\x03') {
    *param_1 = (byte)param_2 & 1;
    return;
  }
  FUN_1000f4a4c();
  puVar1 = param_2;
  FUN_10080b43c();
  _swift_allocError(&DAT_100f04860,puVar1,0,0);
  *puVar1 = (char)param_2;
  puVar1[1] = 3;
  _swift_willThrow();
  return;
}



/* Address: 0x10081fd40 | FUN_10081fd40 */

void FUN_10081fd40(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe6f28,&USHORT_100c7ae10);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,4,param_6,FUN_1008246d0
                ,0,thunk_FUN_10081fe4c,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x10081fe38 | FUN_10081fe38 */

void FUN_10081fe38(void)

{
  FUN_100820074();
  return;
}



/* Address: 0x10081fe4c | FUN_10081fe4c */

void FUN_10081fe4c(undefined8 *param_1)

{
  _swift_bridgeObjectRetain(*param_1);
  return;
}



/* Address: 0x10081fe6c | FUN_10081fe6c */

void FUN_10081fe6c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_7;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  FUN_1000f7830(&DAT_100fe6f28,&USHORT_100c7ae10);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd444;
  FUN_100808514(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,4,param_6,
                (undefined8 *)(unaff_x22 + 0x10),FUN_1008246d0,0,thunk_FUN_10081fe4c,0,param_8,
                param_9);
  return;
}



/* Address: 0x10081ff7c | FUN_10081ff7c */

void FUN_10081ff7c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe6f28,&USHORT_100c7ae10);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100809130(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,4,param_6,FUN_1008246d0
                ,0,thunk_FUN_10081fe4c,0,param_7,param_8,param_9);
  return;
}



/* Address: 0x100820074 | FUN_100820074 */

void FUN_100820074(undefined8 *param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  undefined1 *puVar1;
  
  if (param_4 == '\x04') {
    *param_1 = param_2;
    _swift_bridgeObjectRetain();
  }
  else {
    FUN_1000f4a4c();
    puVar1 = param_2;
    FUN_10080b43c();
    _swift_allocError(&DAT_100f04860,puVar1,0,0);
    *puVar1 = (char)param_2;
    puVar1[1] = 4;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1008200e4 | FUN_1008200e4 */

void FUN_1008200e4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100807ab8(param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,5,param_6,FUN_1008246e4
                ,0,thunk_FUN_1008201f0,0,param_7,param_8,param_9);
  return;
}


