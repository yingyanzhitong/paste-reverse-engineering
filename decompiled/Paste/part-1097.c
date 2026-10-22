/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b93d08 | FUN_100b93d08 */

void FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93d10 | FUN_100b93d10 */

void FUN_100b93d10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b8ecf0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b93d18 | FUN_100b93d18 */

void FUN_100b93d18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b93d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Address: 0x100b93d2c | FUN_100b93d2c */

void FUN_100b93d2c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x100b93d4c | FUN_100b93d4c */

void FUN_100b93d4c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 local_28;
  
  local_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&local_28);
  FUN_100b6f9f0();
  return;
}



/* Address: 0x100b93d74 | FUN_100b93d74 */

void FUN_100b93d74(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100b93d94 | FUN_100b93d94 */

void FUN_100b93d94(void)

{
  undefined8 local_30;
  
  FUN_100b94048();
  FUN_100b6f9f0(local_30);
  return;
}



/* Address: 0x100b93db4 | FUN_100b93db4 */

void FUN_100b93db4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b940a0();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b93dd0 | FUN_100b93dd0 */

void FUN_100b93dd0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28,&local_30);
  FUN_100b6f9f0();
  return;
}



/* Address: 0x100b93dfc | FUN_100b93dfc */

void FUN_100b93dfc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  FUN_100b56e88();
  return;
}



/* Address: 0x100b93e20 | thunk_FUN_100b93e28 */

undefined1 thunk_FUN_100b93e28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_29,&uStack_28);
  return uStack_29;
}



/* Address: 0x100b93e24 | thunk_FUN_100b93e60 */

void thunk_FUN_100b93e60(void)

{
  FUN_100b93e60();
  return;
}



/* Address: 0x100b93e28 | FUN_100b93e28 */

undefined1 FUN_100b93e28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&local_29,&local_28);
  return local_29;
}



/* Address: 0x100b93e60 | FUN_100b93e60 */

void FUN_100b93e60(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  long unaff_x20;
  
  bVar1 = (byte)*param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = bVar1 & 1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b93e8c | thunk_FUN_100b93d94 */

void thunk_FUN_100b93d94(void)

{
  undefined8 uStack_30;
  
  FUN_100b94048();
  FUN_100b6f9f0(uStack_30);
  return;
}



/* Address: 0x100b93e90 | FUN_100b93e90 */

void FUN_100b93e90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100bb3cb4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100b93e98 | FUN_100b93e98 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b93e98(ID param_1)

{
  ID IVar1;
  Dictionary<undefined,undefined> DVar2;
  
  IVar1 = _objc_msgSend(param_1,"infoDictionary");
  FUN_100b6f868();
  if (IVar1 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6faa8();
  }
  FUN_100b56e88(DVar2.unknown);
  return;
}



/* Address: 0x100b93f08 | thunk_FUN_100b93d4c */

void thunk_FUN_100b93d4c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  FUN_100b6f9f0();
  return;
}



/* Address: 0x100b93f0c | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f10 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f14 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f18 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f1c | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f20 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f24 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f28 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f2c | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f30 | thunk_FUN_100b93cf8 */

void thunk_FUN_100b93cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b93f34 | thunk_FUN_100b93db4 */

void thunk_FUN_100b93db4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b940a0();
  *unaff_x19 = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b93f38 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f3c | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f40 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f44 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f48 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f4c | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f50 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f54 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f58 | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f5c | thunk_FUN_100b93cd4 */

void thunk_FUN_100b93cd4(void)

{
  FUN_100b93cd4();
  return;
}



/* Address: 0x100b93f60 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f64 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f68 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f6c | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f70 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f74 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f78 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f7c | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f80 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f84 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f88 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f8c | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f90 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f94 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f98 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93f9c | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fa0 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fa4 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fa8 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fac | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fb0 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fb4 | thunk_FUN_100b90cb4 */

void thunk_FUN_100b90cb4(void)

{
  FUN_100b90cb4();
  return;
}



/* Address: 0x100b93fb8 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fbc | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fc0 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}


