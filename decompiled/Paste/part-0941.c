/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a2cba0 | FUN_100a2cba0 */

void FUN_100a2cba0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a267ac(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a2cc14 | FUN_100a2cc14 */

void FUN_100a2cc14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_10085408c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100a2cc8c | FUN_100a2cc8c */

void FUN_100a2cc8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a25bbc(plVar5,param_1,param_2,uVar2,uVar4,uVar6,uVar1,uVar3);
  return;
}



/* Address: 0x100a2cd24 | FUN_100a2cd24 */

void FUN_100a2cd24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100a25f30(plVar5,param_1,param_2,uVar2,uVar4,uVar6,uVar1,uVar3);
  return;
}



/* Address: 0x100a2cdbc | FUN_100a2cdbc */

void FUN_100a2cdbc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(lVar1 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar4 + 0x40);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x28),lVar1,0x100cc971c,
             &TargetProtocolRequirement_100cc972c);
  lVar7 = *(long *)(lVar2 + -8);
  uVar6 = uVar5 + lVar3 + (ulong)*(byte *)(lVar7 + 0x50) &
          ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar7 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar4 + 8))(unaff_x20 + uVar5,lVar1);
  (**(code **)(lVar7 + 8))(unaff_x20 + uVar6,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar3 + uVar6 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2ce90 | FUN_100a2ce90 */

void FUN_100a2ce90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar9;
  ulong uVar10;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar10 = uVar8 + 0x30 & (uVar8 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,lVar1,0x100cc971c,&TargetProtocolRequirement_100cc972c);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar8 = uVar10 + lVar7 + uVar8 & (uVar8 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8));
  plVar6 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_100a26648(uVar2,uVar4,unaff_x20 + uVar10,unaff_x20 + uVar8,uVar9,lVar1,uVar3);
  return;
}



/* Address: 0x100a2cf74 | FUN_100a2cf74 */

void FUN_100a2cf74(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2cf98 | FUN_100a2cf98 */

void FUN_100a2cf98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a29b68(uVar1,uVar2);
  return;
}



/* Address: 0x100a2d004 | FUN_100a2d004 */

void FUN_100a2d004(void)

{
  long lVar1;
  NWEndpoint NVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  
  lVar4 = 0;
  FUN_100a2d4c0();
  lVar8 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = unaff_x20 + uVar7;
  uVar5 = 0;
  FUN_100a0de2c(0);
  lVar6 = lVar1;
  _swift_getEnumCaseMultiPayload(lVar1,uVar5);
  iVar3 = (int)lVar6;
  if (iVar3 == 2) {
    NVar2 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 8))
              (lVar1,CONCAT71(extraout_var,NVar2.value));
  }
  else if ((iVar3 == 1) || (iVar3 == 0)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x14) + 8));
  if (*(long *)(lVar1 + *(int *)(lVar4 + 0x20) + 0x18) != 0) {
    FUN_100004594();
  }
  lVar6 = *(long *)(lVar8 + 0x40);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x24)));
  _swift_release(*(undefined8 *)(unaff_x20 + (uVar7 + lVar6 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2d0f8 | FUN_100a2d0f8 */

void FUN_100a2d0f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  FUN_100a291d4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x100a2d15c | thunk_FUN_100a2d160 */

void thunk_FUN_100a2d160(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2d160 | FUN_100a2d160 */

void FUN_100a2d160(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2d1c4 | thunk_FUN_100a2d1c8 */

void thunk_FUN_100a2d1c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  plVar2 = *(long **)(unaff_x20 +
                     (*(long *)(lVar1 + 0x40) + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)) + 7 &
                     0xfffffffffffffff8));
  lVar1 = *plVar2;
  (**(code **)(*(long *)(lVar1 + 0x58) + 0x18))
            (param_1,param_2,*(undefined8 *)((long)plVar2 + *(long *)(lVar1 + 0x70)),
             *(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Address: 0x100a2d1c8 | FUN_100a2d1c8 */

void FUN_100a2d1c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  plVar2 = *(long **)(unaff_x20 +
                     (*(long *)(lVar1 + 0x40) + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)) + 7 &
                     0xfffffffffffffff8));
  lVar1 = *plVar2;
  (**(code **)(*(long *)(lVar1 + 0x58) + 0x18))
            (param_1,param_2,*(undefined8 *)((long)plVar2 + *(long *)(lVar1 + 0x70)),
             *(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Address: 0x100a2d224 | FUN_100a2d224 */

void FUN_100a2d224(void)

{
  long unaff_x20;
  
  FUN_100a29284(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100a2d244 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d248 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d24c | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d250 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d254 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d258 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d25c | thunk_FUN_100a2ca5c */

void thunk_FUN_100a2ca5c(void)

{
  FUN_100a2ca5c();
  return;
}



/* Address: 0x100a2d260 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d264 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d268 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d26c | thunk_FUN_100a2ca5c */

void thunk_FUN_100a2ca5c(void)

{
  FUN_100a2ca5c();
  return;
}



/* Address: 0x100a2d270 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d274 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d278 | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d27c | thunk_FUN_100a2cf74 */

void thunk_FUN_100a2cf74(void)

{
  FUN_100a2cf74();
  return;
}



/* Address: 0x100a2d280 | thunk_FUN_100a252a4 */

void thunk_FUN_100a252a4(void)

{
  FUN_100a252a4();
  return;
}



/* Address: 0x100a2d284 | thunk_FUN_100a2ca90 */

undefined1  [16] thunk_FUN_100a2ca90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_40,&uStack_30);
  puVar1 = &DAT_100f28eb8;
  _swift_allocObject(&DAT_100f28eb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = uStack_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x100a2d288 | thunk_FUN_100a2caec */

void thunk_FUN_100a2caec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f28e90;
  _swift_allocObject(&DAT_100f28e90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100a2d28c | thunk_FUN_100a2d1c8 */

void thunk_FUN_100a2d1c8(void)

{
  thunk_FUN_100a2d1c8();
  return;
}



/* Address: 0x100a2d290 | thunk_FUN_100a2b0b8 */

void thunk_FUN_100a2b0b8(void)

{
  FUN_100a2b0b8();
  return;
}



/* Address: 0x100a2d294 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100a2d298 | thunk_FUN_100a2b0c8 */

void thunk_FUN_100a2b0c8(void)

{
  FUN_100a2b0c8();
  return;
}



/* Address: 0x100a2d29c | thunk_FUN_100a2d160 */

void thunk_FUN_100a2d160(void)

{
  thunk_FUN_100a2d160();
  return;
}



/* Address: 0x100a2d2a0 | thunk_FUN_100a2d160 */

void thunk_FUN_100a2d160(void)

{
  thunk_FUN_100a2d160();
  return;
}



/* Address: 0x100a2d2a4 | thunk_FUN_100a157c0 */

void thunk_FUN_100a157c0(void)

{
  FUN_100a157c0();
  return;
}



/* Address: 0x100a2d2a8 | FUN_100a2d2a8 */

void FUN_100a2d2a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  
  lVar1 = 0;
  local_78 = param_2;
  FUN_100a2d4c0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(param_8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_100a2b01c(0,param_8,param_9);
  (**(code **)(lVar4 + 0x10))(lVar3,unaff_x20,param_8);
  FUN_100a2d3f0(local_78,puVar2);
  FUN_100011128(param_3,param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_retain(param_7);
  FUN_100a246fc(lVar3,puVar2,param_3,param_4,param_5,param_6,param_7);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_PTR_100f28bd0;
  *param_1 = lVar3;
  return;
}



/* Address: 0x100a2d3f0 | FUN_100a2d3f0 */

undefined8 FUN_100a2d3f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100a2d434 | FUN_100a2d434 */

void FUN_100a2d434(void)

{
  FUN_100a2d440();
  return;
}



/* Address: 0x100a2d440 | FUN_100a2d440 */

undefined8 FUN_100a2d440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100a2d484 | FUN_100a2d484 */

undefined1  [16] FUN_100a2d484(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_100a2d4c0();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x14));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100a2d4c0 | FUN_100a2d4c0 */

void FUN_100a2d4c0(undefined8 param_1)

{
  if (DAT_100ff52a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cc9744);
  return;
}



/* Address: 0x100a2d4f8 | FUN_100a2d4f8 */

undefined8 FUN_100a2d4f8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  return *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x18));
}



/* Address: 0x100a2d518 | FUN_100a2d518 */

undefined1 FUN_100a2d518(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x1c));
}



/* Address: 0x100a2d538 | FUN_100a2d538 */

void FUN_100a2d538(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  FUN_100a2d568(unaff_x20 + *(int *)(lVar1 + 0x20),param_1);
  return;
}



/* Address: 0x100a2d568 | FUN_100a2d568 */

undefined8 FUN_100a2d568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff5240;
  FUN_1000f7830(&DAT_100ff5240,&DAT_100c8e810);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100a2d5b8 | FUN_100a2d5b8 */

void FUN_100a2d5b8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  _swift_retain(*(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x24)));
  return;
}



/* Address: 0x100a2d5d8 | FUN_100a2d5d8 */

void FUN_100a2d5d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_100a2d664(param_2,param_1);
  lVar2 = 0;
  FUN_100a2d4c0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18)) = param_5;
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x1c)) = param_6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x20));
  uVar3 = *param_7;
  uVar5 = param_7[3];
  uVar4 = param_7[2];
  puVar1[1] = param_7[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = param_7[4];
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24)) = 0;
  return;
}



/* Address: 0x100a2d664 | FUN_100a2d664 */

undefined8 FUN_100a2d664(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100a2d6a8 | FUN_100a2d6a8 */

void FUN_100a2d6a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_100a2d664(param_2,param_1);
  lVar2 = 0;
  FUN_100a2d4c0();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x14));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18)) = param_5;
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x1c)) = param_6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x20));
  uVar3 = *param_7;
  uVar5 = param_7[3];
  uVar4 = param_7[2];
  puVar1[1] = param_7[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = param_7[4];
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24)) = param_8;
  return;
}



/* Address: 0x100a2d740 | FUN_100a2d740 */

long * FUN_100a2d740(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  NWEndpoint NVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined7 extraout_var;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    uVar6 = 0;
    FUN_100a0de2c(0);
    plVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar6);
    if ((int)plVar7 == 2) {
      NVar5 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar5.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,NVar5.value));
    }
    else {
      if ((int)plVar7 == 1) {
        lVar9 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar9;
      }
      else {
        lVar9 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar9;
        param_1[2] = param_2[2];
      }
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar6,plVar7);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x20);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    lVar9 = puVar2[3];
    _swift_bridgeObjectRetain();
    if (lVar9 == 0) {
      uVar6 = *puVar2;
      uVar11 = puVar2[3];
      uVar10 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar6;
      puVar1[3] = uVar11;
      puVar1[2] = uVar10;
      puVar1[4] = puVar2[4];
    }
    else {
      uVar6 = puVar2[4];
      puVar1[3] = lVar9;
      puVar1[4] = uVar6;
      (*(code *)**(undefined8 **)(lVar9 + -8))(puVar1,puVar2,lVar9);
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x100a2d8a0 | FUN_100a2d8a0 */

void FUN_100a2d8a0(long param_1,long param_2)

{
  NWEndpoint NVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined7 extraout_var;
  
  uVar3 = 0;
  FUN_100a0de2c(0);
  lVar4 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar3);
  iVar2 = (int)lVar4;
  if (iVar2 == 2) {
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 8))
              (param_1,CONCAT71(extraout_var,NVar1.value));
  }
  else if ((iVar2 == 1) || (iVar2 == 0)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  if (*(long *)(param_1 + *(int *)(param_2 + 0x20) + 0x18) != 0) {
    FUN_100004594();
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  return;
}



/* Address: 0x100a2d93c | FUN_100a2d93c */

undefined8 * FUN_100a2d93c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  NWEndpoint NVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = 0;
  FUN_100a0de2c(0);
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar4);
  if ((int)puVar5 == 2) {
    NVar3 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar3.value) + -8) + 0x10))
              (param_1,param_2,CONCAT71(extraout_var,NVar3.value));
  }
  else {
    if ((int)puVar5 == 1) {
      uVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar7;
    }
    else {
      uVar7 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar7;
      param_1[2] = param_2[2];
    }
    _swift_bridgeObjectRetain();
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar4,puVar5);
  iVar2 = *(int *)(param_3 + 0x18);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar4 = puVar1[1];
  *puVar5 = *puVar1;
  puVar5[1] = uVar4;
  *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  iVar2 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar2);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar2);
  lVar6 = puVar1[3];
  _swift_bridgeObjectRetain();
  if (lVar6 == 0) {
    uVar4 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    puVar5[1] = puVar1[1];
    *puVar5 = uVar4;
    puVar5[3] = uVar8;
    puVar5[2] = uVar7;
    puVar5[4] = puVar1[4];
  }
  else {
    uVar4 = puVar1[4];
    puVar5[3] = lVar6;
    puVar5[4] = uVar4;
    (*(code *)**(undefined8 **)(lVar6 + -8))(puVar5,puVar1,lVar6);
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  _swift_retain();
  return param_1;
}



/* Address: 0x100a2da74 | FUN_100a2da74 */

undefined8 * FUN_100a2da74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  NWEndpoint NVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    FUN_100a0e500(param_1);
    uVar3 = 0;
    FUN_100a0de2c(0);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar3);
    if ((int)puVar4 == 2) {
      NVar2 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 0x10))
                (param_1,param_2,CONCAT71(extraout_var,NVar2.value));
    }
    else {
      if ((int)puVar4 == 1) {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
      }
      else {
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
      }
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar3,puVar4);
  }
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar4 = *puVar1;
  uVar3 = puVar4[1];
  puVar4[1] = puVar1[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar5 = puVar1[3];
  if (puVar4[3] == 0) {
    if (lVar5 == 0) {
      uVar6 = puVar1[1];
      uVar3 = *puVar1;
      uVar8 = puVar1[3];
      uVar7 = puVar1[2];
      puVar4[4] = puVar1[4];
      puVar4[1] = uVar6;
      *puVar4 = uVar3;
      puVar4[3] = uVar8;
      puVar4[2] = uVar7;
    }
    else {
      puVar4[3] = lVar5;
      puVar4[4] = puVar1[4];
      (*(code *)**(undefined8 **)(lVar5 + -8))(puVar4,puVar1);
    }
  }
  else if (lVar5 == 0) {
    FUN_100004594();
    uVar6 = puVar1[1];
    uVar3 = *puVar1;
    uVar8 = puVar1[3];
    uVar7 = puVar1[2];
    puVar4[4] = puVar1[4];
    puVar4[1] = uVar6;
    *puVar4 = uVar3;
    puVar4[3] = uVar8;
    puVar4[2] = uVar7;
  }
  else {
    FUN_10008820c(puVar4,puVar1);
  }
  lVar5 = (long)*(int *)(param_3 + 0x24);
  uVar3 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_retain();
  _swift_release(uVar3);
  return param_1;
}



/* Address: 0x100a2dc24 | FUN_100a2dc24 */

void * FUN_100a2dc24(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  NWEndpoint NVar4;
  long lVar5;
  void *pvVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = 0;
  FUN_100a0de2c();
  pvVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar5);
  if ((int)pvVar6 == 2) {
    NVar4 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar4.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,NVar4.value));
    _swift_storeEnumTagMultiPayload(param_1,lVar5,2);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar7 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar7;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar7 = *puVar3;
  uVar9 = puVar3[3];
  uVar8 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar7;
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[4] = puVar3[4];
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  return param_1;
}



/* Address: 0x100a2dd00 | FUN_100a2dd00 */

void * FUN_100a2dd00(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  NWEndpoint NVar4;
  long lVar5;
  void *pvVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != param_2) {
    FUN_100a0e500(param_1);
    lVar5 = 0;
    FUN_100a0de2c();
    pvVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar5);
    if ((int)pvVar6 == 2) {
      NVar4 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar4.value) + -8) + 0x20))
                (param_1,param_2,CONCAT71(extraout_var,NVar4.value));
      _swift_storeEnumTagMultiPayload(param_1,lVar5,2);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar5 + -8) + 0x40));
    }
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar8 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  if (puVar1[3] != 0) {
    FUN_100004594(puVar1);
  }
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar8 = *puVar2;
  uVar9 = puVar2[3];
  uVar7 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar9;
  puVar1[2] = uVar7;
  puVar1[4] = puVar2[4];
  lVar5 = (long)*(int *)(param_3 + 0x24);
  uVar8 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_release(uVar8);
  return param_1;
}



/* Address: 0x100a2de20 | FUN_100a2de20 */

void FUN_100a2de20(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a2de2c | FUN_100a2de2c */

ulong FUN_100a2de2c(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = 0;
  FUN_100a0e718();
  if ((int)param_2 == *(int *)(*(long *)(lVar2 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100a2de7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Address: 0x100a2deb8 | FUN_100a2deb8 */

void FUN_100a2deb8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a2dec4 | FUN_100a2dec4 */

void FUN_100a2dec4(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a0e718();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100a2df1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = param_2 & 0xffffffff;
  return;
}


