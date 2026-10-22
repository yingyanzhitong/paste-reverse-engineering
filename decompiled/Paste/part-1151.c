/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bdf4e0 | FUN_100bdf4e0 */

void FUN_100bdf4e0(void)

{
  return;
}



/* Address: 0x100bdf4ec | FUN_100bdf4ec */

void FUN_100bdf4ec(void)

{
  Foundation::UUID::typeMetadataAccessor();
  return;
}



/* Address: 0x100bdf4f4 | FUN_100bdf4f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdf4f4(undefined8 param_1)

{
  long in_x9;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + in_x9) = param_1;
  return 0;
}



/* Address: 0x100bdf500 | FUN_100bdf500 */

void FUN_100bdf500(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bdf508 | FUN_100bdf508 */

void FUN_100bdf508(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bdf510 | FUN_100bdf510 */

void FUN_100bdf510(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bdf518 | FUN_100bdf518 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdf518(void)

{
  return 0;
}



/* Address: 0x100bdf520 | FUN_100bdf520 */

void FUN_100bdf520(void)

{
  Date unaff_x20;
  
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(unaff_x20);
  return;
}



/* Address: 0x100bdf528 | FUN_100bdf528 */

void FUN_100bdf528(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bdf534 | FUN_100bdf534 */

void FUN_100bdf534(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20;
  return;
}



/* Address: 0x100bdf540 | FUN_100bdf540 */

void FUN_100bdf540(void)

{
  return;
}



/* Address: 0x100bdf54c | FUN_100bdf54c */

void FUN_100bdf54c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_50 = &DAT_100c9eb68;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &DAT_100c9eb80;
    local_38 = &DAT_100c9eb68;
    puStack_30 = &DAT_100c9eb68;
    local_28 = &DAT_100c9eb98;
    _swift_initClassMetadata2(param_1,0,6,&local_50,param_1 + 0x70);
  }
  return;
}



/* Address: 0x100bdf5e0 | FUN_100bdf5e0 */

void FUN_100bdf5e0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *unaff_x20;
  lVar5 = *(long *)(lVar8 + 0x58);
  lVar7 = *(long *)(lVar5 + -8);
  lVar9 = *(long *)(lVar7 + 0x40);
  lVar1 = (long)unaff_x20 + *(long *)(lVar8 + 0x88);
  FUN_100004640(lVar1,*(undefined8 *)(lVar1 + 0x18));
  puVar2 = &DAT_100f3c5b8;
  FUN_100b6f90c(&DAT_100f3c5b8,0x18);
  _swift_weakInit(puVar2 + 0x10);
  (**(code **)(lVar7 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),param_1,lVar5);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar4 + 0x38 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100f3c608;
  _swift_allocObject(&DAT_100f3c608,uVar6 + lVar9,uVar4 | 7);
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(lVar8 + 0x50);
  *(long *)(puVar3 + 0x18) = lVar5;
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar8 + 0x60);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(lVar8 + 0x68);
  *(undefined **)(puVar3 + 0x30) = puVar2;
  (**(code **)(lVar7 + 0x20))
            (puVar3 + uVar6,&stack0xffffffffffffffa0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar5);
  _swift_retain(puVar2);
  FUN_100bb0798(FUN_100be0334,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}



/* Address: 0x100bdf70c | FUN_100bdf70c */

void FUN_100bdf70c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100bdf768(param_2);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100bdf768 | FUN_100bdf768 */

/* WARNING: Removing unreachable block (ram,0x000100bdf844) */

void FUN_100bdf768(undefined8 param_1)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_b0 [8];
  code *local_a8;
  undefined1 local_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x50);
  lVar5 = *(long *)(lVar3 + -8);
  puVar4 = auStack_b0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar2 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar8,auStack_78,0,0);
  local_a8 = *(code **)(lVar5 + 0x10);
  (*local_a8)(puVar4,(long)unaff_x20 + lVar8,lVar3);
  lVar7 = *(long *)(lVar2 + 0x60);
  pcVar9 = *(code **)(lVar7 + 0x28);
  lVar2 = lVar3;
  (*pcVar9)(lVar3,lVar7);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(puVar4,lVar3);
  _swift_beginAccess((long)unaff_x20 + lVar8,local_90,0x21);
  (**(code **)(lVar7 + 0x10))(param_1);
  _swift_endAccess(local_90);
  pcVar1 = local_a8;
  (*local_a8)(puVar4,(long)unaff_x20 + lVar8,lVar3);
  lVar5 = lVar3;
  (**(code **)(lVar7 + 0x20))(lVar3,lVar7);
  (*pcVar6)(puVar4,lVar3);
  if (lVar5 < unaff_x20[3]) {
    (*pcVar1)(puVar4,(long)unaff_x20 + lVar8,lVar3);
    lVar5 = lVar3;
    (*pcVar9)(lVar3,lVar7);
    (*pcVar6)(puVar4,lVar3);
    if (lVar5 < unaff_x20[4]) {
      if (lVar2 != 0) {
        return;
      }
      if (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)) != 0) {
        return;
      }
      FUN_100bdfd24();
      return;
    }
  }
  FUN_100bdfb28();
  return;
}



/* Address: 0x100bdf9dc | FUN_100bdf9dc */

double FUN_100bdf9dc(undefined *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  FUN_100be03fc();
  lVar1 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x88);
  FUN_100004640(lVar1,*(undefined8 *)(lVar1 + 0x18));
  puVar3 = &DAT_100f3c5b8;
  FUN_100b6f90c(&DAT_100f3c5b8,0x18);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_100f3c5e0;
  FUN_100b6f90c(&DAT_100f3c5e0,0x38);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar5 + 0x50);
  uVar6 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(lVar5 + 0x68);
  *(undefined **)(puVar4 + 0x30) = puVar3;
  _swift_retain(puVar3);
  FUN_100bb07e0(FUN_100be02c4,puVar4);
  _swift_release(puVar3);
  _swift_release();
  FUN_100be03fc();
  if (param_1 <= puVar4) {
    return (double)(ulong)((long)puVar4 - (long)param_1) / 1000000000.0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bdfad4);
  (*pcVar2)();
}



/* Address: 0x100bdfad4 | FUN_100bdfad4 */

void FUN_100bdfad4(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100bdfb28();
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100bdfb28 | FUN_100bdfb28 */

void FUN_100bdfb28(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long *unaff_x20;
  DispatchWorkItem *this;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *local_90;
  long local_88;
  code *pcStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *unaff_x20;
  lVar3 = *(long *)(lVar7 + 0x50);
  lVar8 = *(long *)(lVar3 + -8);
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)&local_90 - uVar2;
  lVar6 = lVar10 - uVar2;
  lVar4 = *(long *)(lVar7 + 0x98);
  this = *(DispatchWorkItem **)((long)unaff_x20 + lVar4);
  if (this == (DispatchWorkItem *)0x0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(this);
    Dispatch::DispatchWorkItem::cancel(this);
    _swift_release(this);
    uVar1 = *(undefined8 *)((long)unaff_x20 + lVar4);
  }
  *(undefined8 *)((long)unaff_x20 + lVar4) = 0;
  _swift_release(uVar1);
  lVar12 = *(long *)(*unaff_x20 + 0x78);
  _swift_beginAccess((long)unaff_x20 + lVar12,auStack_78,0,0);
  pcVar5 = *(code **)(lVar8 + 0x10);
  (*pcVar5)(lVar6,(long)unaff_x20 + lVar12,lVar3);
  lVar7 = *(long *)(lVar7 + 0x60);
  pcVar11 = *(code **)(lVar7 + 0x20);
  lVar4 = lVar3;
  (*pcVar11)(lVar3,lVar7);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar6,lVar3);
  if (lVar4 < 1) {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd000000000000012,0x8000000100dd1630,0xd000000000000066,0x8000000100dd1650,0x89
                 );
  }
  else {
    pcStack_80 = (code *)unaff_x20[5];
    local_88 = unaff_x20[6];
    (*pcVar5)(lVar6,(long)unaff_x20 + lVar12,lVar3);
    lVar4 = lVar3;
    lVar8 = lVar7;
    (**(code **)(lVar7 + 0x30))(lVar3,lVar7);
    local_90 = pcVar11;
    (*pcVar9)(lVar6,lVar3);
    (*pcVar5)(lVar10,(long)unaff_x20 + lVar12,lVar3);
    lVar6 = lVar3;
    (*local_90)(lVar3,lVar7);
    (*pcVar9)(lVar10,lVar3);
    (*pcStack_80)(lVar4,lVar8,lVar6);
    FUN_10003bf2c(lVar4,lVar8);
  }
  FUN_100bdffc8();
  return;
}



/* Address: 0x100bdfd24 | FUN_100bdfd24 */

void FUN_100bdfd24(void)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  DispatchWorkItem *pDVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 uVar8;
  DispatchWorkItemFlags flags;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  lVar9 = *unaff_x20;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  flags.unknown =
       auStack_90 + -(*(long *)(*(long *)(DVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(*(long *)(DVar2.unknown + -8) + 0x40);
  puVar3 = &DAT_100f3c5b8;
  _swift_allocObject(&DAT_100f3c5b8,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar4 = &DAT_100f3c630;
  _swift_allocObject(&DAT_100f3c630,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x50);
  uVar8 = *(undefined8 *)(lVar9 + 0x58);
  *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(lVar9 + 0x60);
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(lVar9 + 0x68);
  *(undefined **)(puVar4 + 0x30) = puVar3;
  local_60 = FUN_100be037c;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100030410;
  puStack_68 = &DAT_100f3c648;
  local_58 = puVar4;
  __Block_copy(&local_80);
  DVar2.unknown = puVar3;
  _swift_retain();
  DVar2 = Dispatch::DispatchQoS::get_unspecified(DVar2);
  local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100be03b4();
  puVar4 = &DAT_101047770;
  FUN_100b6730c(&DAT_101047770);
  puVar5 = puVar4;
  FUN_1000305e8();
  Swift::SetAlgebra::_init(flags.unknown,&local_88,puVar4,puVar5,DVar1.unknown,DVar2.unknown);
  pDVar6 = Dispatch::DispatchWorkItem::typeMetadataAccessor();
  _swift_allocObject(pDVar6,*(undefined4 *)(pDVar6 + 0x30),*(undefined2 *)(pDVar6 + 0x34));
  pDVar6 = Dispatch::DispatchWorkItem::_init
                     (pDVar6,(DispatchQoS)(flags.unknown + -(lVar7 + 0xfU & 0xfffffffffffffff0)),
                      flags);
  puVar4 = local_58;
  _swift_release(puVar3);
  _swift_release(puVar4);
  uVar8 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98));
  *(DispatchWorkItem **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)) = pDVar6;
  _swift_retain(pDVar6);
  _swift_release(uVar8);
  lVar7 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x88);
  FUN_100004640(lVar7,*(undefined8 *)(lVar7 + 0x18));
  FUN_100bb0cc8(unaff_x20[2],pDVar6);
  _swift_release(pDVar6);
  return;
}



/* Address: 0x100bdff24 | FUN_100bdff24 */

void FUN_100bdff24(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_100b84dac(0);
  FUN_100b84df8(1,0xd000000000000024,0x8000000100dd16e0,0xd000000000000066,0x8000000100dd1650,0x70);
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100bdfb28();
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100bdffc8 | FUN_100bdffc8 */

void FUN_100bdffc8(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess((long)param_1 + *(long *)(lVar1 + 0x78),auStack_48,1,0);
  (**(code **)(*(long *)(lVar1 + 0x60) + 0x18))(*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Address: 0x100be0024 | FUN_100be0024 */

void FUN_100be0024(void)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x90);
  FUN_100076688((long)unaff_x20 + lVar2,auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 8))(0,0,local_50,lStack_48);
  FUN_100004594(auStack_68);
  _swift_release(unaff_x20[6]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  _swift_unknownObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  FUN_100004594((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  FUN_100004594((long)unaff_x20 + lVar2);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)));
  return;
}



/* Address: 0x100be0100 | FUN_100be0100 */

void FUN_100be0100(void)

{
  FUN_100be0024();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100be0124 | FUN_100be0124 */

void FUN_100be0124(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cd0638);
  return;
}



/* Address: 0x100be0130 | FUN_100be0130 */

void FUN_100be0130(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100be0138 | FUN_100be0138 */

undefined8 * FUN_100be0138(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_2[4];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x100be0174 | FUN_100be0174 */

undefined8 * FUN_100be0174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_retain();
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100be01c4 | FUN_100be01c4 */

undefined8 * FUN_100be01c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100be0204 | FUN_100be0204 */

int FUN_100be0204(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 6);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100be0244 | FUN_100be0244 */

void FUN_100be0244(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cd06ac);
  return;
}



/* Address: 0x100be0250 | thunk_FUN_100bdf9dc */

void thunk_FUN_100bdf9dc(void)

{
  FUN_100bdf9dc();
  return;
}



/* Address: 0x100be0254 | FUN_100be0254 */

void FUN_100be0254(void)

{
  FUN_100bdf5e0();
  return;
}



/* Address: 0x100be0274 | FUN_100be0274 */

void FUN_100be0274(void)

{
  FUN_100bdf9dc();
  return;
}



/* Address: 0x100be0294 | thunk_FUN_100bdf9dc */

void thunk_FUN_100bdf9dc(void)

{
  thunk_FUN_100bdf9dc();
  return;
}



/* Address: 0x100be0298 | FUN_100be0298 */

undefined8 FUN_100be0298(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x68);
}



/* Address: 0x100be02a0 | FUN_100be02a0 */

void FUN_100be02a0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100be02c4 | FUN_100be02c4 */

void FUN_100be02c4(void)

{
  FUN_100be0388(FUN_100bdfad4);
  return;
}



/* Address: 0x100be02d0 | FUN_100be02d0 */

void FUN_100be02d0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100be0334 | FUN_100be0334 */

void FUN_100be0334(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  FUN_100bdf70c(*(undefined8 *)(unaff_x20 + 0x30),
                unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)),
                *(undefined8 *)(unaff_x20 + 0x10),*(long *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100be0358 | FUN_100be0358 */

void FUN_100be0358(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100be037c | FUN_100be037c */

void FUN_100be037c(void)

{
  FUN_100be0388(FUN_100bdff24);
  return;
}



/* Address: 0x100be0388 | FUN_100be0388 */

void FUN_100be0388(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100be0398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100be039c | FUN_100be039c */

void FUN_100be039c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100be03ac | FUN_100be03ac */

void FUN_100be03ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100be03b4 | FUN_100be03b4 */

void FUN_100be03b4(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fa82c0 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fa82c0 = puVar2;
  return;
}



/* Address: 0x100be03f8 | thunk_FUN_100be0358 */

void thunk_FUN_100be0358(void)

{
  FUN_100be0358();
  return;
}



/* Address: 0x100be03fc | FUN_100be03fc */

void FUN_100be03fc(void)

{
  ID unaff_x19;
  long unaff_x25;
  
  _objc_msgSend(unaff_x19,*(SEL *)(unaff_x25 + 0x710));
  return;
}



/* Address: 0x100be0408 | FUN_100be0408 */

undefined1 * FUN_100be0408(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100be0464(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100be0464 | FUN_100be0464 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100be07e0) */
/* WARNING: Removing unreachable block (ram,0x000100be0880) */
/* WARNING: Removing unreachable block (ram,0x000100be07f8) */
/* WARNING: Removing unreachable block (ram,0x000100be05d0) */
/* WARNING: Removing unreachable block (ram,0x000100be0804) */

ID FUN_100be0464(long param_1)

{
  long lVar1;
  long lVar2;
  DecodingError DVar3;
  undefined *puVar4;
  ID self;
  NSString *pNVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ID unaff_x20;
  long unaff_x21;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_80 [16];
  undefined *local_70;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  ulong uVar5;
  
  puVar4 = &DAT_101048228;
  FUN_100b6730c();
  lVar11 = *(long *)(puVar4 + -8);
  puVar10 = auStack_80 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  switchD_100be0a0c::caseD_22();
  local_70 = (undefined *)Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_61 = 0;
    FUN_100b7e4f0();
    Swift::KeyedDecodingContainer::_decode
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,local_70);
    lVar1 = CONCAT71(uStack_57,local_58);
    if (lVar1 != 0) {
      _objc_allocWithZone();
      self = _objc_msgSend(unaff_x20,"initWithThreadId:",lVar1);
      local_58 = 1;
      puVar9 = puVar4;
      Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
      if (puVar9 == (undefined *)0x0) {
        pNVar6 = (NSString *)0x0;
      }
      else {
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar9);
      }
      _objc_msgSend(self,"setName:",pNVar6);
      uVar7 = 0;
      FUN_100bc4e30(0);
      local_61 = 2;
      uVar8 = uVar7;
      switchD_100be0a0c::caseD_2c();
      Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,uVar7,&local_61,puVar4,uVar7,uVar8);
      _objc_msgSend(self,"setStacktrace:",CONCAT71(uStack_57,local_58));
      puVar9 = local_70;
      local_61 = 3;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,local_70);
      lVar2 = CONCAT71(uStack_57,local_58);
      lVar1 = 0;
      if (lVar2 != 1) {
        lVar1 = lVar2;
      }
      _objc_msgSend(self,"setCrashed:",lVar1);
      FUN_10001486c(lVar2);
      local_61 = 4;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,puVar9);
      lVar2 = CONCAT71(uStack_57,local_58);
      lVar1 = 0;
      if (lVar2 != 1) {
        lVar1 = lVar2;
      }
      _objc_msgSend(self,"setCurrent:",lVar1);
      FUN_10001486c(lVar2);
      local_61 = 5;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,puVar9);
      lVar2 = CONCAT71(uStack_57,local_58);
      lVar1 = 0;
      if (lVar2 != 1) {
        lVar1 = lVar2;
      }
      _objc_msgSend(self,"setIsMain:",lVar1);
      FUN_10001486c(lVar2);
      (**(code **)(lVar11 + 8))(puVar10,puVar4);
      FUN_100004594(param_1);
      return self;
    }
    local_58 = 0;
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    uVar5 = (ulong)(byte)DVar3.value;
    puVar9 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(uVar5,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    switchD_100be0a0c::caseD_14();
    Swift::DecodingError::_dataCorruptedError
              (puVar9,&local_58,puVar10,0xd00000000000003b,0x8000000100dd1740,puVar4,uVar5);
    _swift_willThrow();
    (**(code **)(lVar11 + 8))(puVar10,puVar4);
  }
  FUN_100004594(param_1);
  return unaff_x20;
}



/* Address: 0x100be08e4 | FUN_100be08e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100be08e4(undefined8 param_1)

{
  ID IVar1;
  
  _swift_getObjectType();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithThreadId:",param_1);
  return IVar1;
}



/* Address: 0x100be0938 | _TtC6Sentry21SentryThreadDecodable::initWithThreadId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry21SentryThreadDecodable::initWithThreadId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100be08e4();
  return param_3;
}



/* Address: 0x100be0968 | FUN_100be0968 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be0968(void)

{
  return ZEXT816(0x100fa5060);
}



/* Address: 0x100be0988 | FUN_100be0988 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be09bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100be0988(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100be09e4 | thunk_FUN_100be0988 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be09bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100be0988(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100be09e8 | FUN_100be09e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100be0cbc) */
/* WARNING: Removing unreachable block (ram,0x000100be0e7c) */
/* WARNING: Removing unreachable block (ram,0x000100be0e24) */
/* WARNING: Removing unreachable block (ram,0x000100be0ed8) */
/* WARNING: Removing unreachable block (ram,0x000100be0cf4) */
/* WARNING: Removing unreachable block (ram,0x000100be0d44) */

String FUN_100be09e8(ulong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  bool in_CY;
  Union_Impl_FuncImpl *pUVar2;
  undefined8 *puVar3;
  void *pvVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  char *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  undefined1 auStack_40 [16];
  
  puVar6 = &SUB_e200000000000000;
  pUVar2 = (Union_Impl_FuncImpl *)&SUB_00006469;
  pcVar7 = (char *)(param_1 & 0xff);
  uVar10 = (ulong)(byte)pcVar7[0x100c9ec50];
  lVar9 = uVar10 * 4 + 0x100be0a10;
  switch(pcVar7) {
  default:
    puVar6 = &DAT_e400000000000000;
  case (char *)0x38:
  case (char *)0x46:
  case (char *)0x6c:
  case (char *)0x7a:
  case (char *)0x94:
  case (char *)0xa2:
  case (char *)0xda:
    pUVar2 = (Union_Impl_FuncImpl *)0x656d616e;
  case (char *)0x2e:
  case (char *)0x36:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x8a:
  case (char *)0x92:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xbc:
  case (char *)0xea:
  case (char *)0xf2:
    SVar11.bridgeObject = puVar6;
    SVar11.str = (char *)pUVar2;
    return SVar11;
  case (char *)0x2:
  case (char *)0xa:
    puVar6 = (undefined *)0xea00000000006563;
  case (char *)0x8:
    pUVar2 = (Union_Impl_FuncImpl *)0x7473;
  case (char *)0xc4:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 | 0x63610000);
  case (char *)0x9:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 | 0x746b00000000);
  case (char *)0xd:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 | 0x6172000000000000);
  case (char *)0xb:
    SVar13.bridgeObject = puVar6;
    SVar13.str = (char *)pUVar2;
    return SVar13;
  case (char *)0x3:
    puVar6 = &DAT_e700000000000000;
    pUVar2 = (Union_Impl_FuncImpl *)0x73617263;
  case (char *)0xf:
    SVar14.str = (char *)((ulong)pUVar2 | 0x64656800000000);
    SVar14.bridgeObject = puVar6;
    return SVar14;
  case (char *)0x4:
  case (char *)0xf4:
    puVar6 = &DAT_e700000000000000;
    pUVar2 = (Union_Impl_FuncImpl *)0x72727563;
  case (char *)0xc6:
  case (char *)0xfe:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 | 0x746e6500000000);
  case (char *)0x6:
    SVar12.bridgeObject = puVar6;
    SVar12.str = (char *)pUVar2;
    return SVar12;
  case (char *)0x5:
    puVar6 = &DAT_e400000000000000;
  case (char *)0xa8:
    pUVar2 = (Union_Impl_FuncImpl *)0x616d;
  case (char *)0xe9:
    pUVar2 = (Union_Impl_FuncImpl *)(ulong)((uint)pUVar2 | 0x6e690000);
  case (char *)0x0:
  case (char *)0x2d:
  case (char *)0x61:
  case (char *)0x89:
  case (char *)0xb1:
    SVar15.bridgeObject = puVar6;
    SVar15.str = (char *)pUVar2;
    return SVar15;
  case (char *)0xe:
    puVar6 = (undefined *)(ulong)SUB_e200000000000000;
    pUVar2 = (Union_Impl_FuncImpl *)(ulong)SUB_00006469;
  case (char *)0xcd:
  case (char *)0xd5:
    FUN_100bec518(pUVar2,puVar6);
    SVar16.bridgeObject = puVar6;
    SVar16.str = (char *)pUVar2;
    return SVar16;
  case (char *)0x10:
  case (char *)0x16:
  case (char *)0xac:
    SVar21 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar21;
  case (char *)0x14:
  case (char *)0x18:
    pcVar7 = (char *)&_TtC6Sentry13SentrySession::lock;
  case (char *)0x59:
    pUVar2 = *(Union_Impl_FuncImpl **)(pcVar7 + 0x238);
  case (char *)0x13:
  case (char *)0x4c:
    if (pUVar2 != (Union_Impl_FuncImpl *)0x0) {
      SVar25.bridgeObject = &SUB_e200000000000000;
      SVar25.str = (char *)pUVar2;
      return SVar25;
    }
    pUVar2 = (Union_Impl_FuncImpl *)&_TtC6Sentry13SentrySession::lock;
  case (char *)0x15:
  case (char *)0x58:
  case (char *)0x70:
    puVar3 = (undefined8 *)(pUVar2 + 0x8a);
    FUN_100b6734c(puVar3);
    pcVar7 = 
    PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
    ;
    _swift_getWitnessTable
              (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
               ,puVar3);
    DAT_101048238 = pcVar7;
    SVar26.bridgeObject = puVar3;
    SVar26.str = pcVar7;
    return SVar26;
  case (char *)0x17:
switchD_100be0a0c_caseD_17:
    pUVar2 = &TargetResilientWitness_100c9dffc.Implementation;
  case (char *)0x53:
    pUVar2 = pUVar2 + 0x367;
    puVar6 = &DAT_100f3c710;
  case (char *)0x23:
    _swift_getWitnessTable(pUVar2,puVar6);
  case (char *)0x84:
    pcVar7 = (char *)&_TtC6Sentry13SentrySession::lock;
  case (char *)0x12:
  case (char *)0x54:
    pcVar7 = pcVar7 + 0x230;
  case (char *)0x1f:
  case (char *)0x51:
    *(Union_Impl_FuncImpl **)pcVar7 = pUVar2;
    SVar24.bridgeObject = puVar6;
    SVar24.str = (char *)pUVar2;
    return SVar24;
  case (char *)0x1c:
  case (char *)0x4e:
  case (char *)0x82:
  case (char *)0xaa:
  case (char *)0xe2:
    switchD_100be0a0c::caseD_22();
  case (char *)0xc0:
  case (char *)0xc8:
  case (char *)0xd0:
  case (char *)0x56:
    SVar21 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar21;
  case (char *)0x22:
    pcVar7 = (char *)&_TtC6Sentry13SentrySession::lock;
  case (char *)0x1e:
    pUVar2 = *(Union_Impl_FuncImpl **)(pcVar7 + 0x230);
  case (char *)0x1b:
  case (char *)0x20:
  case (char *)0x52:
    if (pUVar2 == (Union_Impl_FuncImpl *)0x0) {
switchD_100be0a0c_caseD_55:
      goto switchD_100be0a0c_caseD_17;
    }
  case (char *)0x11:
  case (char *)0x19:
  case (char *)0x1d:
  case (char *)0x24:
  case (char *)0x57:
    SVar23.bridgeObject = &SUB_e200000000000000;
    SVar23.str = (char *)pUVar2;
    return SVar23;
  case (char *)0x29:
  case (char *)0x3d:
  case (char *)0x5d:
  case (char *)0x71:
  case (char *)0x85:
  case (char *)0x99:
  case (char *)0xad:
  case (char *)0xc1:
  case (char *)0xc9:
  case (char *)0xd1:
  case (char *)0xe5:
  case (char *)0xf9:
    if (DAT_101048248 != (char *)0x0) {
      SVar33.bridgeObject = &SUB_e200000000000000;
      SVar33.str = DAT_101048248;
      return SVar33;
    }
  case (char *)0x40:
    pcVar7 = &DAT_100c9ecd4;
    puVar6 = &DAT_100f3c710;
    _swift_getWitnessTable(&DAT_100c9ecd4,&DAT_100f3c710);
    DAT_101048248 = pcVar7;
    SVar34.bridgeObject = puVar6;
    SVar34.str = pcVar7;
    return SVar34;
  case (char *)0x2a:
  case (char *)0x3e:
  case (char *)0x5e:
  case (char *)0x72:
  case (char *)0x86:
  case (char *)0x9a:
  case (char *)0xae:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xd2:
  case (char *)0xe6:
  case (char *)0xfa:
    FUN_100be0988();
    *unaff_x19 = (char)pcVar7;
    SVar18.bridgeObject = puVar6;
    SVar18.str = pcVar7;
    return SVar18;
  case (char *)0x2c:
  case (char *)0x60:
  case (char *)0x74:
  case (char *)0xcc:
    pcVar7 = (char *)&DAT_101045000;
  case (char *)0x5c:
    SVar27.str = *(char **)(pcVar7 + 0x248);
    if (SVar27.str != (char *)0x0) {
      SVar27.bridgeObject = &SUB_e200000000000000;
      return SVar27;
    }
    pvVar4 = (void *)0xff;
    FUN_100bc4e30(0xff);
    pTVar5 = &TargetProtocolConformanceDescriptor_100c9d37c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d37c,pvVar4);
    DAT_101045248 = pTVar5;
    SVar28.bridgeObject = pvVar4;
    SVar28.str = (char *)pTVar5;
    return SVar28;
  case (char *)0x3c:
    uVar8 = 0xc9ec50;
    if (!in_CY) {
      uVar8 = 1;
    }
    uVar1 = 0;
    if (0xfa < param_3) {
      uVar1 = uVar8;
    }
    lVar9 = 0x100be0cb0;
    uVar10 = (ulong)(&BYTE_100c9ec5b)[uVar1];
  case (char *)0xc5:
                    /* WARNING: Could not recover jumptable at 0x000100be0cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar9 + uVar10 * 4))();
    SVar29.bridgeObject = puVar6;
    SVar29.str = (char *)pUVar2;
    return SVar29;
  case (char *)0x41:
  case (char *)0x75:
  case (char *)0x9d:
    pcVar7 = (char *)(ulong)*unaff_x20;
    FUN_100bec8f0(pcVar7);
    SVar17.bridgeObject = puVar6;
    SVar17.str = pcVar7;
    return SVar17;
  case (char *)0x4d:
  case (char *)0x81:
    pcVar7 = (char *)&_TtC6Sentry13SentrySession::lock;
  case (char *)0xa9:
  case (char *)0xe1:
    SVar35.str = *(char **)(pcVar7 + 0x250);
    if (SVar35.str != (char *)0x0) {
      SVar35.bridgeObject = &SUB_e200000000000000;
      return SVar35;
    }
    pUVar2 = (Union_Impl_FuncImpl *)&DAT_100c9ecac;
    puVar6 = &UNK_100f3c000;
  case (char *)0x42:
  case (char *)0x76:
  case (char *)0x9e:
  case (char *)0xce:
  case (char *)0xd6:
    puVar6 = puVar6 + 0x710;
    _swift_getWitnessTable(pUVar2,puVar6);
    DAT_101048250 = pUVar2;
    SVar36.bridgeObject = puVar6;
    SVar36.str = (char *)pUVar2;
    return SVar36;
  case (char *)0x55:
    goto switchD_100be0a0c_caseD_55;
  case (char *)0x80:
    SVar31.bridgeObject = &SUB_e200000000000000;
    SVar31.str = &SUB_00006469;
    return SVar31;
  case (char *)0x88:
    FUN_100be0408();
    if (unaff_x21 == 0) {
      *(Union_Impl_FuncImpl **)unaff_x19 = pUVar2;
    }
  case (char *)0xe0:
  case (char *)0x1a:
  case (char *)0x21:
  case (char *)0x98:
    SVar22.bridgeObject = puVar6;
    SVar22.str = (char *)pUVar2;
    return SVar22;
  case (char *)0xd4:
    DAT_0000646a = 0;
  case (char *)0x28:
    SVar30.bridgeObject = &SUB_e200000000000000;
    SVar30.str = &SUB_00006469;
    return SVar30;
  case (char *)0xe4:
    thunk_FUN_100be0988();
    *pcVar7 = (char)pUVar2;
  case (char *)0x50:
    SVar20.bridgeObject = puVar6;
    SVar20.str = (char *)pUVar2;
    return SVar20;
  case (char *)0xe8:
    register0x00000008 = (BADSPACEBASE *)auStack_40;
  case (char *)0x43:
  case (char *)0x77:
  case (char *)0x9f:
  case (char *)0xcf:
  case (char *)0xd7:
    *(undefined8 *)((long)register0x00000008 + 0x30) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x38) = unaff_x30;
    return (String)ZEXT816(0);
  case (char *)0xf8:
    pUVar2 = (Union_Impl_FuncImpl *)(ulong)*unaff_x20;
    unaff_x19 = pcVar7;
  case (char *)0x9c:
  case (char *)0xb0:
    FUN_100be09e8();
    *(Union_Impl_FuncImpl **)unaff_x19 = pUVar2;
    *(undefined **)(unaff_x19 + 8) = puVar6;
    SVar19.bridgeObject = puVar6;
    SVar19.str = (char *)pUVar2;
    return SVar19;
  case (char *)0xfc:
    SVar32.bridgeObject = &SUB_e200000000000000;
    SVar32.str = &SUB_00006469;
    return SVar32;
  case (char *)0xfd:
    *(undefined1 **)(pcVar7 + 0x240) = &SUB_00006469;
    SVar21.bridgeObject = &SUB_e200000000000000;
    SVar21.str = &SUB_00006469;
    return SVar21;
  }
}



/* Address: 0x100be0a7c | switchD_100be0a0c::caseD_e */

void switchD_100be0a0c::caseD_e(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bec518(*param_1,*param_2);
  return;
}



/* Address: 0x100be0a88 | switchD_100be0a0c::caseD_41 */

void switchD_100be0a0c::caseD_41(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec8f0(*unaff_x20);
  return;
}



/* Address: 0x100be0a90 | FUN_100be0a90 */

void FUN_100be0a90(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed16c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100be0a98 | FUN_100be0a98 */

void FUN_100be0a98(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed2d8(param_1,*unaff_x20);
  return;
}



/* Address: 0x100be0aa0 | FUN_100be0aa0 */

void FUN_100be0aa0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100be0988(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100be0acc | FUN_100be0acc */

void FUN_100be0acc(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100be09e8();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100be0af4 | FUN_100be0af4 */

void FUN_100be0af4(void)

{
  undefined1 *unaff_x20;
  
  FUN_100be09e8(*unaff_x20);
  return;
}



/* Address: 0x100be0afc | FUN_100be0afc */

void FUN_100be0afc(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100be0988();
  *param_1 = param_2;
  return;
}



/* Address: 0x100be0b20 | switchD_100be0a0c::caseD_1c */

String switchD_100be0a0c::caseD_1c(void)

{
  String SVar1;
  
  caseD_22();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}


