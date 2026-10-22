/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006a5efc | FUN_1006a5efc */

undefined8 FUN_1006a5efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbe08;
  FUN_1000f7830(&DAT_100fdbe08,&DAT_100c6f5d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006a5f4c | FUN_1006a5f4c */

undefined8 FUN_1006a5f4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009edba8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006a5f90 | FUN_1006a5f90 */

void FUN_1006a5f90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  code *pcVar4;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar5;
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar1 = 0;
  local_b8 = param_4;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,0x100cbca10,&TargetProtocolRequirement_100cbca48);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_7 + 0x68))(auStack_c0 + -extraout_x8,param_5,param_7);
  lVar2 = param_7;
  _swift_getAssociatedConformanceWitness
            (param_7,param_5,lVar1,0x100cbca10,&TargetProtocolRequirement_100cbca30);
  pcVar4 = *(code **)(lVar2 + 8);
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  *(long *)((long)alStack_d0 + -extraout_x8) = lVar2;
  (*pcVar4)(&local_a8,unaff_x20,param_2,param_3,local_b8,param_5,uVar3,param_7,lVar1);
  (**(code **)(lVar5 + 8))(auStack_c0 + -extraout_x8,lVar1);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_80;
    param_1[4] = local_88;
    param_1[7] = uStack_70;
    param_1[6] = local_78;
    *(undefined1 *)(param_1 + 8) = local_68;
    param_1[1] = uStack_a0;
    *param_1 = local_a8;
    param_1[3] = uStack_90;
    param_1[2] = local_98;
  }
  return;
}



/* Address: 0x1006a60e4 | FUN_1006a60e4 */

void FUN_1006a60e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006a614c(&local_68,param_2,param_3,*unaff_x20,*(undefined8 *)(param_6 + 0x10),param_4,
                *(undefined8 *)(param_7 + -8),param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006a614c | FUN_1006a614c */

void FUN_1006a614c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long alStack_e0 [2];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_58;
  
  lVar1 = 0;
  local_d0 = param_1;
  local_c8 = param_7;
  local_c0 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_8,param_6,0x100cbca10,&TargetProtocolRequirement_100cbca48);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_d0 + -extraout_x8;
  (**(code **)(param_8 + 0x68))(lVar6,param_6,param_8);
  lVar2 = param_8;
  local_58 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_8,param_6,lVar1,0x100cbca10,&TargetProtocolRequirement_100cbca30);
  pcVar5 = *(code **)(lVar2 + 8);
  uVar3 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  local_b0 = local_c8;
  puVar4 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,uVar3,&local_b0);
  *(long *)((long)alStack_e0 + -extraout_x8) = lVar2;
  (*pcVar5)(&local_a8,&local_58,local_c0,param_3,uVar3,param_6,puVar4,param_8,lVar1);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  if (unaff_x21 == 0) {
    local_d0[5] = uStack_80;
    local_d0[4] = local_88;
    local_d0[7] = uStack_70;
    local_d0[6] = local_78;
    *(undefined1 *)(local_d0 + 8) = local_68;
    local_d0[1] = uStack_a0;
    *local_d0 = local_a8;
    local_d0[3] = uStack_90;
    local_d0[2] = local_98;
  }
  return;
}



/* Address: 0x1006a62d4 | FUN_1006a62d4 */

void FUN_1006a62d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006a6348(&local_68,param_2,param_3,*unaff_x20,*(undefined8 *)(param_6 + 0x10),
                *(undefined8 *)(param_6 + 0x18),param_4,*(undefined8 *)(param_7 + -8),
                *(undefined8 *)(param_6 + 0x20),*(undefined8 *)(param_7 + -0x10),param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006a6348 | FUN_1006a6348 */

void FUN_1006a6348(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  long lVar1;
  long lVar2;
  Dictionary DVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long alStack_100 [2];
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_58;
  
  local_e8 = param_10;
  lVar1 = 0;
  local_f0 = param_1;
  local_e0 = param_6;
  local_d8 = param_9;
  local_d0 = param_8;
  local_c8 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_11,param_7,0x100cbca10,&TargetProtocolRequirement_100cbca48);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_f0 + -extraout_x8;
  (**(code **)(param_11 + 0x68))(lVar6,param_7,param_11);
  lVar2 = param_11;
  local_58 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_11,param_7,lVar1,0x100cbca10,&TargetProtocolRequirement_100cbca30);
  pcVar7 = *(code **)(lVar2 + 8);
  DVar3 = Swift::Dictionary::typeMetadataAccessor();
  local_b8 = local_d0;
  uStack_b0 = local_e8;
  puVar4 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,
             DVar3.unknown,&local_b8);
  *(long *)((long)alStack_100 + -extraout_x8) = lVar2;
  (*pcVar7)(&local_a8,&local_58,local_c8,param_3,DVar3.unknown,param_7,puVar4,param_11,lVar1);
  (**(code **)(lVar5 + 8))(lVar6,lVar1);
  if (unaff_x21 == 0) {
    local_f0[5] = uStack_80;
    local_f0[4] = local_88;
    local_f0[7] = uStack_70;
    local_f0[6] = local_78;
    *(undefined1 *)(local_f0 + 8) = local_68;
    local_f0[1] = uStack_a0;
    *local_f0 = local_a8;
    local_f0[3] = uStack_90;
    local_f0[2] = local_98;
  }
  return;
}



/* Address: 0x1006a64e0 | FUN_1006a64e0 */

void FUN_1006a64e0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = *param_3;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f5e0;
  local_38 = uVar3;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f5e0,param_2,&local_38);
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  puVar2 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_40 = uVar3;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,param_2,&local_40);
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}



/* Address: 0x1006a6548 | FUN_1006a6548 */

void FUN_1006a6548(long param_1,undefined8 param_2,undefined8 *param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = param_3[1];
  uStack_38 = param_3[1];
  uVar4 = *param_3;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f630;
  local_40 = uVar4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f630,param_2,&local_40);
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  puVar2 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  local_50 = uVar4;
  local_48 = uVar3;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,param_2,
             &local_50);
  *(undefined **)(param_1 + 0x10) = puVar2;
  return;
}



/* Address: 0x1006a65c0 | FUN_1006a65c0 */

void FUN_1006a65c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  uVar1 = param_2;
  FUN_1006a6660();
  FUN_1006a5f90(&local_98,param_2,param_3,param_6,param_4,uVar1,param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_70;
    param_1[4] = local_78;
    param_1[7] = uStack_60;
    param_1[6] = local_68;
    *(undefined1 *)(param_1 + 8) = local_58;
    param_1[1] = uStack_90;
    *param_1 = local_98;
    param_1[3] = uStack_80;
    param_1[2] = local_88;
  }
  return;
}



/* Address: 0x1006a6660 | FUN_1006a6660 */

void FUN_1006a6660(void)

{
  UUID UVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fdbe18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  pTVar2 = &TargetProtocolConformanceDescriptor_100c72740;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72740,UVar1.unknown);
  DAT_100fdbe18 = pTVar2;
  return;
}



/* Address: 0x1006a66a4 | FUN_1006a66a4 */

void FUN_1006a66a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006a6ac8(&local_68,param_2,param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                param_12);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006a6718 | FUN_1006a6718 */

void FUN_1006a6718(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006a6ac8(&local_68,param_2,param_3,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2),
                unaff_x20[3],param_5,param_6,param_7,param_8);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006a6788 | FUN_1006a6788 */

void FUN_1006a6788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_11;
  *(undefined8 *)(unaff_x22 + 0x98) = param_12;
  *(undefined8 *)(unaff_x22 + 0x88) = param_10;
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(undefined1 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  _swift_task_switch(FUN_1006a67c0,0,0);
  return;
}



/* Address: 0x1006a67c0 | FUN_1006a67c0 */

void FUN_1006a67c0(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  FUN_1009e1f14();
  (**(code **)(lVar2 + 0x58))(uVar3,lVar2);
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006a6864;
  FUN_1006a51ec(uVar3);
  return;
}



/* Address: 0x1006a6864 | FUN_1006a6864 */

void FUN_1006a6864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  lVar1 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006a68c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0xb0) = param_1;
  *(undefined8 *)(lVar2 + 0xb8) = param_3;
  _swift_task_switch(FUN_1006a68f4,0,0);
  return;
}



/* Address: 0x1006a68f4 | FUN_1006a68f4 */

void FUN_1006a68f4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  String SVar13;
  tuple2_conflict1 tVar14;
  
  lVar1 = *(long *)(unaff_x22 + 0xb0);
  uVar4 = *(ulong *)(unaff_x22 + 0xb8);
  uVar10 = *(ulong *)(unaff_x22 + 0x20);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined1 *)(unaff_x22 + 0xc0);
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar1 + 0x18,unaff_x22 + 0x38,0,0);
  lVar9 = *(long *)(lVar1 + 0x18);
  _swift_retain(lVar1);
  SVar13.bridgeObject = pvVar8;
  SVar13.str = (char *)(ulong)(uint)((int)(uVar10 >> 0x20) - (int)uVar10);
  tVar14 = Swift::String::_fromUTF8Repairing
                     ((undefined *)
                      (lVar9 + (uVar4 >> 0x18 & 0xffff00) + (uVar4 >> 0x30 & 0xff) +
                      (uVar10 & 0xffffffff)),SVar13);
  pvVar8 = tVar14.result.bridgeObject;
  _swift_release(lVar1,pvVar8,tVar14._16_8_);
  FUN_1006a6da8(uVar12,uVar5,tVar14.result.str,pvVar8,uVar3,uVar6,uVar7,uVar2,uVar5,uVar11);
  _swift_bridgeObjectRelease(pvVar8);
  _swift_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a6a10 | FUN_1006a6a10 */

void FUN_1006a6a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[3];
  plVar4 = (long *)0xd0;
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005c804c;
  FUN_1006a6788(plVar4,param_1,param_2,param_3,param_4,uVar1,uVar2,uVar3,uVar5,param_5,param_6);
  return;
}



/* Address: 0x1006a6ac8 | FUN_1006a6ac8 */

void FUN_1006a6ac8(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  ulong uVar4;
  String SVar5;
  
  FUN_1006b0138(param_2,param_4,param_5,param_6,param_7,param_8,param_10);
  if (unaff_x21 == 0) {
    uVar4 = 0x2d746e65746e6f43;
    uVar1 = param_2;
    FUN_100611728();
    uVar3 = param_4;
    FUN_10060cb90();
    _swift_bridgeObjectRelease(param_4);
    uVar2 = 0xd000000000000021;
    FUN_1006eb42c(0xd000000000000021,0x8000000100dab030,(int)((ulong)uVar3 >> 0x20) - (int)uVar3);
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar2)
    ;
    if ((uVar4 & 1) == 0) {
      SVar5 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar5.str,SVar5.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
    }
    _swift_release(uVar2);
    param_1[5] = uVar3;
    param_1[4] = param_2;
    param_1[7] = 0;
    param_1[6] = uVar1 & 0xffffffffffffff;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[1] = 0x4b4f;
    *param_1 = 200;
    param_1[3] = uVar2;
    param_1[2] = &SUB_e200000000000000;
  }
  return;
}



/* Address: 0x1006a6c6c | FUN_1006a6c6c */

void FUN_1006a6c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006a6c80 | FUN_1006a6c80 */

undefined1  [16] FUN_1006a6c80(void)

{
  return ZEXT816(0x100ef6658);
}



/* Address: 0x1006a6c90 | FUN_1006a6c90 */

String FUN_1006a6c90(void)

{
  String SVar1;
  
  FUN_1006a6d68();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1006a6cb8 | FUN_1006a6cb8 */

String FUN_1006a6cb8(void)

{
  String SVar1;
  
  FUN_1006a6d68();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1006a6ce0 | thunk_FUN_1006a6ce4 */

void thunk_FUN_1006a6ce4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbe20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f740;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f740,&DAT_100ef6658);
  DAT_100fdbe20 = pTVar1;
  return;
}



/* Address: 0x1006a6ce4 | FUN_1006a6ce4 */

void FUN_1006a6ce4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbe20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f740;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f740,&DAT_100ef6658);
  DAT_100fdbe20 = pTVar1;
  return;
}



/* Address: 0x1006a6d24 | thunk_FUN_1006a6d28 */

void thunk_FUN_1006a6d28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbe28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f718;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f718,&DAT_100ef6658);
  DAT_100fdbe28 = pTVar1;
  return;
}



/* Address: 0x1006a6d28 | FUN_1006a6d28 */

void FUN_1006a6d28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbe28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f718;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f718,&DAT_100ef6658);
  DAT_100fdbe28 = pTVar1;
  return;
}



/* Address: 0x1006a6d68 | FUN_1006a6d68 */

void FUN_1006a6d68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbe30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6f768;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f768,&DAT_100ef6658);
  DAT_100fdbe30 = pTVar1;
  return;
}



/* Address: 0x1006a6da8 | FUN_1006a6da8 */

void FUN_1006a6da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = 0;
  FUN_1006a6ebc();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(lVar2 + 0x18) = param_5;
  *(undefined8 *)(lVar2 + 0x20) = param_6;
  *(char *)(lVar2 + 0x28) = (char)param_7;
  *(undefined8 *)(lVar2 + 0x30) = param_8;
  *(undefined **)(lVar2 + 0x38) = puVar1;
  *(undefined **)(lVar2 + 0x10) = puVar1;
  FUN_1006ad0e8(param_5,param_6,param_7);
  _swift_bridgeObjectRetain(param_8);
  FUN_1006b71d8(param_3,param_4);
  if (unaff_x21 == 0) {
    FUN_1006a6f58(param_1);
    FUN_1006ad108(param_3,param_4,param_7);
    _swift_release(lVar2);
  }
  else {
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x1006a6ebc | FUN_1006a6ebc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006a6ebc(void)

{
  return ZEXT816(0x100fdbe88);
}



/* Address: 0x1006a6edc | FUN_1006a6edc */

undefined8 FUN_1006a6edc(undefined8 param_1)

{
  FUN_1006ad0e8();
  return param_1;
}



/* Address: 0x1006a6f18 | FUN_1006a6f18 */

void FUN_1006a6f18(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1006ad130(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  *(undefined1 *)(unaff_x20 + 2) = param_3;
  return;
}



/* Address: 0x1006a6f58 | FUN_1006a6f58 */

void FUN_1006a6f58(undefined8 param_1)

{
  undefined8 in_x4;
  long unaff_x21;
  undefined1 auStack_40 [32];
  
  FUN_1006aca3c(auStack_40);
  if (unaff_x21 == 0) {
    _swift_dynamicCast(param_1,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,in_x4,7);
  }
  return;
}



/* Address: 0x1006a6fbc | FUN_1006a6fbc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a7170 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006a6fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  DecodingError DVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long local_80 [2];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar11 != 0) {
    lVar10 = *(long *)(unaff_x20 + 0x10) + lVar11 * 0x18;
    lVar11 = *(long *)(lVar10 + 8);
    lVar1 = *(long *)(lVar10 + 0x10);
    if (*(char *)(lVar10 + 0x18) == '\x01') {
      FUN_1006ad53c(lVar11,lVar1,1);
      FUN_1006ad53c(lVar11,lVar1,1);
      _swift_retain();
      lVar10 = lVar11;
      uVar5 = param_3;
      FUN_1006a7238();
      uVar8 = 0;
      local_80[0] = lVar10;
      local_70 = uVar5;
      FUN_1006afc98(0,param_3,param_4);
      pTVar6 = &TargetProtocolConformanceDescriptor_100c6f9d8;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f9d8,uVar8);
      Swift::KeyedDecodingContainer::_init(param_1,pTVar6,param_3,uVar8,pTVar6);
      FUN_1006ad108(lVar11,lVar1,1);
    }
    else if (*(char *)(lVar10 + 0x18) == '\x03' && (lVar1 == 0 && lVar11 == 0)) {
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1006c25a4();
      lVar11 = 0;
      FUN_1006b5aec();
      _swift_allocObject();
      *(undefined **)(lVar11 + 0x10) = puVar7;
      _swift_retain();
      uVar5 = param_3;
      FUN_1006a7238();
      uVar8 = 0;
      local_80[0] = lVar11;
      local_70 = uVar5;
      FUN_1006afc98(0,param_3,param_4);
      pTVar6 = &TargetProtocolConformanceDescriptor_100c6f9d8;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f9d8,uVar8);
      Swift::KeyedDecodingContainer::_init(param_1,pTVar6,param_3,uVar8,pTVar6);
    }
    else {
      DVar4 = Swift::DecodingError::typeMetadataAccessor();
      lVar11 = CONCAT71((int7)((ulong)param_2 >> 8),DVar4.value);
      puVar9 = (undefined8 *)
               PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar11,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar7 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      iVar2 = *(int *)(puVar7 + 0x30);
      puVar7 = &DAT_100fdbf68;
      FUN_1000f7830(&DAT_100fdbf68,&DAT_100c6f980);
      *puVar9 = puVar7;
      _swift_beginAccess(unaff_x20 + 0x38,local_80,0,0);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
      _swift_bridgeObjectRetain(uVar5);
      Swift::DecodingError::Context::_init
                ((long)puVar9 + (long)iVar2,uVar5,0xd000000000000015,0x8000000100dafe90,0);
      (**(code **)(*(long *)(lVar11 + -8) + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
                 ,lVar11);
      _swift_willThrow();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a7238);
  (*pcVar3)();
}



/* Address: 0x1006a7238 | FUN_1006a7238 */

undefined8 FUN_1006a7238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(uVar1);
  FUN_1000f7830(&DAT_100fdbf70,&DAT_100c6f988);
  FUN_1006afd04();
  (extension_Swift)::Swift::Sequence::_compactMap();
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(param_1);
  return param_2;
}



/* Address: 0x1006a7308 | FUN_1006a7308 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a7408 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006a7308(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  DecodingError DVar5;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined *local_78 [3];
  undefined *local_60;
  long local_58;
  ulong uVar6;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0,0);
  lVar11 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006a7504);
    (*pcVar4)();
  }
  lVar10 = *(long *)(unaff_x20 + 0x10) + lVar11 * 0x18;
  lVar11 = *(long *)(lVar10 + 8);
  lVar1 = *(long *)(lVar10 + 0x10);
  cVar2 = *(char *)(lVar10 + 0x18);
  if (cVar2 == '\x02') {
    lVar10 = lVar11 + 0x10;
    _swift_beginAccess(lVar10,auStack_a8,0,0);
    uVar7 = *(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10);
    lVar12 = lVar11;
  }
  else {
    lVar10 = 0;
    if (cVar2 != '\x03' || (lVar1 != 0 || lVar11 != 0)) {
      DVar5 = Swift::DecodingError::typeMetadataAccessor();
      uVar6 = (ulong)(byte)DVar5.value;
      puVar9 = (undefined8 *)
               PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(uVar6,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar8 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      iVar3 = *(int *)(puVar8 + 0x30);
      puVar8 = &DAT_100fdbf58;
      FUN_1000f7830(&DAT_100fdbf58,&DAT_100c6f978);
      *puVar9 = puVar8;
      _swift_beginAccess(unaff_x20 + 0x38,auStack_a8,0,0);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
      _swift_bridgeObjectRetain(uVar7);
      Swift::DecodingError::Context::_init
                ((long)puVar9 + (long)iVar3,uVar7,0xd000000000000011,0x8000000100dafe70,0);
      (**(code **)(*(long *)(uVar6 - 8) + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
                 ,uVar6);
      _swift_willThrow();
      return;
    }
    FUN_1006b5b18();
    _swift_allocObject();
    uVar7 = 0;
    *(undefined **)(lVar10 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar12 = lVar10;
  }
  local_60 = &DAT_100ef6990;
  FUN_1006afc2c();
  puVar8 = &DAT_100ef68b8;
  local_58 = lVar10;
  _swift_allocObject(&DAT_100ef68b8,0x38,7);
  *(long *)(puVar8 + 0x10) = lVar12;
  *(long *)(puVar8 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar8 + 0x20) = uVar7;
  puVar8[0x28] = 0;
  *(undefined8 *)(puVar8 + 0x30) = 0;
  local_78[0] = puVar8;
  FUN_100076508(local_78,param_1);
  FUN_1006ad53c(lVar11,lVar1,cVar2);
  _swift_retain();
  return;
}



/* Address: 0x1006a7504 | FUN_1006a7504 */

undefined8 FUN_1006a7504(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  String SVar7;
  undefined1 auStack_58 [24];
  
  SVar7 = Swift::CodingKey::get_stringValue();
  pvVar4 = SVar7.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_58,0x20,0);
  pvVar6 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar6);
    FUN_10046483c();
    if (((ulong)SVar7.bridgeObject & 1) != 0) {
      puVar5 = (undefined8 *)(*(long *)((long)pvVar6 + 0x38) + (long)SVar7.str * 0x18);
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      uVar3 = *(undefined1 *)(puVar5 + 2);
      FUN_1006ad53c(uVar1,uVar2,uVar3);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(pvVar6);
      FUN_1006ad108(uVar1,uVar2,uVar3);
      return 1;
    }
    _swift_bridgeObjectRelease(pvVar4);
    pvVar4 = pvVar6;
  }
  _swift_bridgeObjectRelease(pvVar4);
  _swift_endAccess(auStack_58);
  return 0;
}



/* Address: 0x1006a7600 | FUN_1006a7600 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a7798 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_1006a7600(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  String SVar13;
  undefined1 auStack_78 [24];
  
  SVar13 = Swift::CodingKey::get_stringValue();
  pvVar7 = SVar13.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0x20,0);
  pvVar11 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar11);
    FUN_10046483c();
    param_1 = SVar13.str;
    if (((ulong)SVar13.bridgeObject & 1) != 0) {
      puVar10 = (undefined8 *)(*(long *)((long)pvVar11 + 0x38) + (long)param_1 * 0x18);
      uVar6 = *puVar10;
      lVar1 = puVar10[1];
      bVar2 = *(byte *)(puVar10 + 2);
      FUN_1006ad53c(uVar6,lVar1,bVar2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar7);
      _swift_bridgeObjectRelease(pvVar11);
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          uVar12 = (ulong)(lVar1 == 0);
          FUN_1006ad108(uVar6,lVar1,0);
          goto LAB_1006a77f4;
        }
        uVar9 = 1;
LAB_1006a77ec:
        FUN_1006ad108(uVar6,lVar1,uVar9);
      }
      else if (bVar2 == 2) {
        uVar9 = 2;
        goto LAB_1006a77ec;
      }
      uVar12 = 0;
      goto LAB_1006a77f4;
    }
    _swift_bridgeObjectRelease(pvVar7);
    pvVar7 = pvVar11;
  }
  _swift_bridgeObjectRelease(pvVar7);
  _swift_endAccess(auStack_78);
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  uVar12 = CONCAT71((int7)((ulong)param_1 >> 8),DVar4.value);
  puVar8 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(uVar12,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar5 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar3 = *(int *)(puVar5 + 0x30);
  *(long *)(puVar8 + 0x18) = param_5;
  *(undefined8 *)(puVar8 + 0x20) = param_6;
  FUN_10000cbb0(puVar8);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  _swift_beginAccess(param_2 + 0x38,auStack_78,0,0);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar6);
  Swift::DecodingError::Context::_init(puVar8 + iVar3,uVar6,0,0xe000000000000000,0);
  (**(code **)(*(long *)(uVar12 - 8) + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,uVar12);
  _swift_willThrow();
LAB_1006a77f4:
  return (uint)uVar12 & 1;
}



/* Address: 0x1006a781c | FUN_1006a781c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a79c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_1006a781c(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  DecodingError DVar4;
  undefined *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined *puVar9;
  long *plVar10;
  void *pvVar11;
  String SVar12;
  undefined1 auStack_78 [24];
  long lVar5;
  
  SVar12 = Swift::CodingKey::get_stringValue();
  pvVar8 = SVar12.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0x20,0);
  pvVar11 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar11);
    FUN_10046483c();
    param_1 = SVar12.str;
    if (((ulong)SVar12.bridgeObject & 1) != 0) {
      plVar10 = (long *)(*(long *)((long)pvVar11 + 0x38) + (long)param_1 * 0x18);
      lVar5 = *plVar10;
      lVar1 = plVar10[1];
      uVar2 = (undefined1)plVar10[2];
      FUN_1006ad53c(lVar5,lVar1,uVar2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar8);
      _swift_bridgeObjectRelease(pvVar11);
      param_2 = lVar5;
      FUN_1006ad768(lVar5,lVar1,uVar2);
      FUN_1006ad108(lVar5,lVar1,uVar2);
      goto LAB_1006a79f0;
    }
    _swift_bridgeObjectRelease(pvVar8);
    pvVar8 = pvVar11;
  }
  _swift_bridgeObjectRelease(pvVar8);
  _swift_endAccess(auStack_78);
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)param_1 >> 8),DVar4.value);
  puVar9 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar5,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar6 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar3 = *(int *)(puVar6 + 0x30);
  *(long *)(puVar9 + 0x18) = param_5;
  *(undefined8 *)(puVar9 + 0x20) = param_6;
  FUN_10000cbb0(puVar9);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  _swift_beginAccess(param_2 + 0x38,auStack_78,0,0);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar7);
  Swift::DecodingError::Context::_init(puVar9 + iVar3,uVar7,0,0xe000000000000000,0);
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,lVar5);
  _swift_willThrow();
LAB_1006a79f0:
  return (uint)param_2 & 1;
}



/* Address: 0x1006a7a18 | FUN_1006a7a18 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a7bbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1006a7a18(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  DecodingError DVar5;
  long lVar6;
  undefined *puVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined *puVar11;
  long *plVar12;
  void *pvVar13;
  long unaff_x21;
  String SVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_78 [24];
  long lVar7;
  
  SVar14 = Swift::CodingKey::get_stringValue();
  pvVar10 = SVar14.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0x20,0);
  pvVar13 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar13 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar13);
    FUN_10046483c();
    param_1 = SVar14.str;
    if (((ulong)SVar14.bridgeObject & 1) != 0) {
      plVar12 = (long *)(*(long *)((long)pvVar13 + 0x38) + (long)param_1 * 0x18);
      lVar1 = *plVar12;
      lVar2 = plVar12[1];
      uVar3 = (undefined1)plVar12[2];
      FUN_1006ad53c(lVar1,lVar2,uVar3);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar10);
      _swift_bridgeObjectRelease(pvVar13);
      lVar6 = lVar1;
      lVar7 = lVar2;
      FUN_1006ad564(lVar1,lVar2,uVar3);
      if (unaff_x21 == 0) {
        _swift_bridgeObjectRetain(lVar7);
        FUN_1006ad108(lVar1,lVar2,uVar3);
        param_2 = lVar6;
      }
      else {
        FUN_1006ad108(lVar1,lVar2,uVar3);
        lVar7 = unaff_x21;
      }
      goto LAB_1006a7be8;
    }
    _swift_bridgeObjectRelease(pvVar10);
    pvVar10 = pvVar13;
  }
  _swift_bridgeObjectRelease(pvVar10);
  _swift_endAccess(auStack_78);
  DVar5 = Swift::DecodingError::typeMetadataAccessor();
  lVar7 = CONCAT71((int7)((ulong)param_1 >> 8),DVar5.value);
  puVar11 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar7,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar8 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar4 = *(int *)(puVar8 + 0x30);
  *(long *)(puVar11 + 0x18) = param_5;
  *(undefined8 *)(puVar11 + 0x20) = param_6;
  FUN_10000cbb0(puVar11);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  _swift_beginAccess(param_2 + 0x38,auStack_78,0,0);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar9);
  Swift::DecodingError::Context::_init(puVar11 + iVar4,uVar9,0,0xe000000000000000,0);
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,lVar7);
  _swift_willThrow();
LAB_1006a7be8:
  auVar15._8_8_ = lVar7;
  auVar15._0_8_ = param_2;
  return auVar15;
}



/* Address: 0x1006a7c38 | FUN_1006a7c38 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a7e20 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006a7c38(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  byte *******pppppppbVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  DecodingError DVar6;
  byte *******pppppppbVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  void *pvVar15;
  long unaff_x21;
  byte *******pppppppbVar16;
  String SVar17;
  byte ******local_98;
  ulong uStack_90;
  byte local_81;
  undefined1 auStack_80 [16];
  undefined8 *local_70;
  undefined8 local_58;
  
  SVar17 = Swift::CodingKey::get_stringValue();
  pvVar11 = SVar17.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_80,0x20,0);
  pvVar15 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar15 + 0x10) == 0) {
LAB_1006a7d84:
    _swift_bridgeObjectRelease(pvVar11);
    _swift_endAccess(auStack_80);
    DVar6 = Swift::DecodingError::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)param_1 >> 8),DVar6.value);
    puVar13 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar8,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar9 = &DAT_100fdc020;
    FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
    iVar5 = *(int *)(puVar9 + 0x30);
    *(long *)(puVar13 + 0x18) = param_5;
    *(undefined8 *)(puVar13 + 0x20) = param_6;
    FUN_10000cbb0(puVar13);
    (**(code **)(*(long *)(param_5 + -8) + 0x10))();
    _swift_beginAccess(param_2 + 0x38,auStack_80,0,0);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    _swift_bridgeObjectRetain(uVar10);
    Swift::DecodingError::Context::_init(puVar13 + iVar5,uVar10,0,0xe000000000000000,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
               ,lVar8);
    _swift_willThrow();
    return;
  }
  _swift_bridgeObjectRetain(pvVar15);
  FUN_10046483c();
  param_1 = SVar17.str;
  if (((ulong)SVar17.bridgeObject & 1) == 0) {
    _swift_bridgeObjectRelease(pvVar11);
    pvVar11 = pvVar15;
    goto LAB_1006a7d84;
  }
  puVar14 = (undefined8 *)(*(long *)((long)pvVar15 + 0x38) + (long)param_1 * 0x18);
  pppppppbVar1 = (byte *******)*puVar14;
  uVar2 = puVar14[1];
  uVar3 = *(undefined1 *)(puVar14 + 2);
  FUN_1006ad53c(pppppppbVar1,uVar2,uVar3);
  _swift_endAccess(auStack_80);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_bridgeObjectRelease(pvVar15);
  pppppppbVar7 = pppppppbVar1;
  uVar12 = uVar2;
  FUN_1006ad564(pppppppbVar1,uVar2,uVar3);
  if (unaff_x21 != 0) goto LAB_1006a7f50;
  local_58 = 0;
  local_70 = &local_58;
  if ((uVar12 >> 0x3c & 1) == 0) {
    if ((uVar12 >> 0x3d & 1) == 0) {
      if (((ulong)pppppppbVar7 >> 0x3c & 1) == 0) goto LAB_1006a7fd0;
      pppppppbVar16 = (byte *******)((uVar12 & 0xfffffffffffffff) + 0x20);
      if (*(byte *)pppppppbVar16 < 0x21 &&
          (1L << ((ulong)*(byte *)pppppppbVar16 & 0x3f) & 0x100003e01U) != 0) goto LAB_1006a7e80;
      _swift_bridgeObjectRetain(uVar12);
LAB_1006a7f98:
      __swift_stdlib_strtod_clocale(pppppppbVar16,&local_58);
      if (pppppppbVar16 != (byte *******)0x0) {
        bVar4 = *(byte *)pppppppbVar16;
        _swift_bridgeObjectRelease(uVar12);
        pppppppbVar7 = pppppppbVar16;
        if (bVar4 == 0) {
LAB_1006a7fb0:
          FUN_1006ad108(pppppppbVar1,uVar2,uVar3);
          return;
        }
        goto LAB_1006a7e94;
      }
    }
    else {
      uStack_90 = uVar12 & 0xffffffffffffff;
      local_98 = (byte ******)pppppppbVar7;
      if (0x20 < ((uint)pppppppbVar7 & 0xff) ||
          (1L << ((ulong)pppppppbVar7 & 0x3f) & 0x100003e01U) == 0) {
        _swift_bridgeObjectRetain(uVar12);
        pppppppbVar16 = &local_98;
        goto LAB_1006a7f98;
      }
LAB_1006a7e80:
      _swift_bridgeObjectRetain(uVar12);
      pppppppbVar16 = pppppppbVar7;
    }
    _swift_bridgeObjectRelease(uVar12);
    pppppppbVar7 = pppppppbVar16;
  }
  else {
LAB_1006a7fd0:
    _swift_bridgeObjectRetain(uVar12);
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1006b00f0);
    _swift_bridgeObjectRelease(uVar12);
    if ((local_81 & 1) != 0) goto LAB_1006a7fb0;
  }
LAB_1006a7e94:
  DVar6 = Swift::DecodingError::typeMetadataAccessor();
  lVar8 = CONCAT71((int7)((ulong)pppppppbVar7 >> 8),DVar6.value);
  puVar14 = (undefined8 *)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar8,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar9 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar5 = *(int *)(puVar9 + 0x30);
  *puVar14 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  _swift_beginAccess(param_2 + 0x38,auStack_80,0,0);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar10);
  Swift::DecodingError::Context::_init
            ((long)puVar14 + (long)iVar5,uVar10,0x6465746365707845,0xef656c62756f4420,0);
  (**(code **)(*(long *)(lVar8 + -8) + 0x68))
            (puVar14,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,lVar8);
  _swift_willThrow();
LAB_1006a7f50:
  FUN_1006ad108(pppppppbVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1006a8020 | FUN_1006a8020 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a8208 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006a8020(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  DecodingError DVar6;
  byte *pbVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  void *pvVar15;
  long unaff_x21;
  byte **ppbVar16;
  String SVar17;
  byte *local_90;
  ulong uStack_88;
  undefined1 auStack_80 [16];
  undefined4 *local_70;
  byte local_55;
  undefined4 local_54;
  
  ppbVar16 = &local_90;
  SVar17 = Swift::CodingKey::get_stringValue();
  pvVar11 = SVar17.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_80,0x20,0);
  pvVar15 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar15 + 0x10) == 0) {
LAB_1006a816c:
    _swift_bridgeObjectRelease(pvVar11);
    _swift_endAccess(auStack_80);
    DVar6 = Swift::DecodingError::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)param_1 >> 8),DVar6.value);
    puVar13 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar8,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar9 = &DAT_100fdc020;
    FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
    iVar5 = *(int *)(puVar9 + 0x30);
    *(long *)(puVar13 + 0x18) = param_5;
    *(undefined8 *)(puVar13 + 0x20) = param_6;
    FUN_10000cbb0(puVar13);
    (**(code **)(*(long *)(param_5 + -8) + 0x10))();
    _swift_beginAccess(param_2 + 0x38,auStack_80,0,0);
    uVar10 = *(undefined8 *)(param_2 + 0x38);
    _swift_bridgeObjectRetain(uVar10);
    Swift::DecodingError::Context::_init(puVar13 + iVar5,uVar10,0,0xe000000000000000,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
               ,lVar8);
    _swift_willThrow();
    return;
  }
  _swift_bridgeObjectRetain(pvVar15);
  FUN_10046483c();
  param_1 = SVar17.str;
  if (((ulong)SVar17.bridgeObject & 1) == 0) {
    _swift_bridgeObjectRelease(pvVar11);
    pvVar11 = pvVar15;
    goto LAB_1006a816c;
  }
  puVar14 = (undefined8 *)(*(long *)((long)pvVar15 + 0x38) + (long)param_1 * 0x18);
  pbVar1 = (byte *)*puVar14;
  uVar2 = puVar14[1];
  uVar3 = *(undefined1 *)(puVar14 + 2);
  FUN_1006ad53c(pbVar1,uVar2,uVar3);
  _swift_endAccess(auStack_80);
  _swift_bridgeObjectRelease(pvVar11);
  _swift_bridgeObjectRelease(pvVar15);
  pbVar7 = pbVar1;
  uVar12 = uVar2;
  FUN_1006ad564(pbVar1,uVar2,uVar3);
  if (unaff_x21 != 0) goto LAB_1006a8338;
  local_54 = 0;
  local_70 = &local_54;
  if ((uVar12 >> 0x3c & 1) == 0) {
    if ((uVar12 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar7 >> 0x3c & 1) == 0) goto LAB_1006a83b8;
      ppbVar16 = (byte **)((uVar12 & 0xfffffffffffffff) + 0x20);
      if (*(byte *)ppbVar16 < 0x21 && (1L << ((ulong)*(byte *)ppbVar16 & 0x3f) & 0x100003e01U) != 0)
      goto LAB_1006a8268;
      _swift_bridgeObjectRetain(uVar12);
LAB_1006a8380:
      __swift_stdlib_strtof_clocale(ppbVar16,&local_54);
      if (ppbVar16 != (byte **)0x0) {
        bVar4 = *(byte *)ppbVar16;
        _swift_bridgeObjectRelease(uVar12);
        pbVar7 = (byte *)ppbVar16;
        if (bVar4 == 0) {
LAB_1006a8398:
          FUN_1006ad108(pbVar1,uVar2,uVar3);
          return;
        }
        goto LAB_1006a827c;
      }
    }
    else {
      uStack_88 = uVar12 & 0xffffffffffffff;
      local_90 = pbVar7;
      if (0x20 < ((uint)pbVar7 & 0xff) || (1L << ((ulong)pbVar7 & 0x3f) & 0x100003e01U) == 0) {
        _swift_bridgeObjectRetain(uVar12);
        goto LAB_1006a8380;
      }
LAB_1006a8268:
      _swift_bridgeObjectRetain(uVar12);
      ppbVar16 = (byte **)pbVar7;
    }
    _swift_bridgeObjectRelease(uVar12);
    pbVar7 = (byte *)ppbVar16;
  }
  else {
LAB_1006a83b8:
    _swift_bridgeObjectRetain(uVar12);
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1006b0104);
    _swift_bridgeObjectRelease(uVar12);
    if ((local_55 & 1) != 0) goto LAB_1006a8398;
  }
LAB_1006a827c:
  DVar6 = Swift::DecodingError::typeMetadataAccessor();
  lVar8 = CONCAT71((int7)((ulong)pbVar7 >> 8),DVar6.value);
  puVar14 = (undefined8 *)
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar8,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar9 = &DAT_100fdbf50;
  FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
  iVar5 = *(int *)(puVar9 + 0x30);
  *puVar14 = PTR___type_metadata_for_Swift_Float_100eac620;
  _swift_beginAccess(param_2 + 0x38,auStack_80,0,0);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar10);
  Swift::DecodingError::Context::_init
            ((long)puVar14 + (long)iVar5,uVar10,0x6465746365707845,0xee0074616f6c4620,0);
  (**(code **)(*(long *)(lVar8 + -8) + 0x68))
            (puVar14,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
             ,lVar8);
  _swift_willThrow();
LAB_1006a8338:
  FUN_1006ad108(pbVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1006a8408 | FUN_1006a8408 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a85c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1006a8408(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  code *param_10)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  DecodingError DVar4;
  long lVar5;
  undefined *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined *puVar10;
  long *plVar11;
  void *pvVar12;
  String SVar13;
  undefined1 auStack_78 [24];
  long lVar6;
  
  SVar13 = Swift::CodingKey::get_stringValue();
  pvVar9 = SVar13.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0x20,0);
  pvVar12 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar12 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar12);
    FUN_10046483c();
    param_1 = SVar13.str;
    if (((ulong)SVar13.bridgeObject & 1) != 0) {
      plVar11 = (long *)(*(long *)((long)pvVar12 + 0x38) + (long)param_1 * 0x18);
      lVar6 = *plVar11;
      lVar1 = plVar11[1];
      uVar2 = (undefined1)plVar11[2];
      FUN_1006ad53c(lVar6,lVar1,uVar2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar9);
      _swift_bridgeObjectRelease(pvVar12);
      lVar5 = lVar6;
      (*param_10)(lVar6,lVar1,uVar2,param_7,param_8,param_9);
      FUN_1006ad108(lVar6,lVar1,uVar2);
      return lVar5;
    }
    _swift_bridgeObjectRelease(pvVar9);
    pvVar9 = pvVar12;
  }
  _swift_bridgeObjectRelease(pvVar9);
  _swift_endAccess(auStack_78);
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)param_1 >> 8),DVar4.value);
  puVar10 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar6,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar7 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar3 = *(int *)(puVar7 + 0x30);
  *(long *)(puVar10 + 0x18) = param_5;
  *(undefined8 *)(puVar10 + 0x20) = param_6;
  FUN_10000cbb0(puVar10);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  _swift_beginAccess(param_2 + 0x38,auStack_78,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar8);
  Swift::DecodingError::Context::_init(puVar10 + iVar3,uVar8,0,0xe000000000000000,0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x68))
            (puVar10,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,lVar6);
  _swift_willThrow();
  return param_2;
}



/* Address: 0x1006a8618 | FUN_1006a8618 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a87c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1006a8618(char *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  DecodingError DVar4;
  long lVar5;
  undefined *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined *puVar10;
  long *plVar11;
  void *pvVar12;
  String SVar13;
  undefined1 auStack_78 [24];
  long lVar6;
  
  SVar13 = Swift::CodingKey::get_stringValue();
  pvVar9 = SVar13.bridgeObject;
  _swift_beginAccess(param_3 + 0x10,auStack_78,0x20,0);
  pvVar12 = *(void **)(param_3 + 0x10);
  if (*(long *)((long)pvVar12 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar12);
    FUN_10046483c();
    param_1 = SVar13.str;
    if (((ulong)SVar13.bridgeObject & 1) != 0) {
      plVar11 = (long *)(*(long *)((long)pvVar12 + 0x38) + (long)param_1 * 0x18);
      lVar6 = *plVar11;
      lVar1 = plVar11[1];
      uVar2 = (undefined1)plVar11[2];
      FUN_1006ad53c(lVar6,lVar1,uVar2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar9);
      _swift_bridgeObjectRelease(pvVar12);
      lVar5 = lVar6;
      (*param_7)(lVar6,lVar1,uVar2);
      FUN_1006ad108(lVar6,lVar1,uVar2);
      return lVar5;
    }
    _swift_bridgeObjectRelease(pvVar9);
    pvVar9 = pvVar12;
  }
  _swift_bridgeObjectRelease(pvVar9);
  _swift_endAccess(auStack_78);
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)param_1 >> 8),DVar4.value);
  puVar10 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar6,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar7 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar3 = *(int *)(puVar7 + 0x30);
  *(long *)(puVar10 + 0x18) = param_5;
  *(undefined8 *)(puVar10 + 0x20) = param_6;
  FUN_10000cbb0(puVar10);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  _swift_beginAccess(param_2 + 0x38,auStack_78,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(uVar8);
  Swift::DecodingError::Context::_init(puVar10 + iVar3,uVar8,0,0xe000000000000000,0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x68))
            (puVar10,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,lVar6);
  _swift_willThrow();
  return param_2;
}



/* Address: 0x1006a8818 | FUN_1006a8818 */

void FUN_1006a8818(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  long extraout_x8;
  undefined8 *puVar5;
  long extraout_x12;
  void *pvVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  String SVar15;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_7 + -8);
  local_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar11 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar11 - extraout_x12;
  pcVar10 = *(code **)(lVar7 + 0x10);
  (*pcVar10)(lVar13);
  _swift_beginAccess(param_4 + 0x38,auStack_78,0x21,0);
  uVar9 = *(ulong *)(param_4 + 0x38);
  uVar2 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_4 + 0x38) = uVar9;
  uVar3 = uVar9;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1006a2b94(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    *(ulong *)(param_4 + 0x38) = uVar3;
  }
  local_a8 = param_10;
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar9 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_1006a2b94(uVar9,uVar2 + 1,1,uVar3);
    *(ulong *)(param_4 + 0x38) = uVar9;
  }
  (*pcVar10)(puVar11,lVar13,param_7);
  FUN_100444220(uVar2,puVar11,param_4 + 0x38,param_7,param_9);
  (**(code **)(lVar7 + 8))(lVar13,param_7);
  *(ulong *)(param_4 + 0x38) = uVar9;
  _swift_endAccess(auStack_78);
  SVar15 = Swift::CodingKey::get_stringValue();
  pvVar4 = SVar15.bridgeObject;
  _swift_beginAccess(param_5 + 0x10,auStack_78,0x20,0);
  pvVar6 = *(void **)(param_5 + 0x10);
  if (*(long *)((long)pvVar6 + 0x10) == 0) {
    uVar12 = 0;
    uVar14 = 0;
    uVar8 = 3;
  }
  else {
    _swift_bridgeObjectRetain(pvVar6);
    FUN_10046483c();
    if (((ulong)SVar15.bridgeObject & 1) == 0) {
      uVar12 = 0;
      uVar14 = 0;
      uVar8 = 3;
    }
    else {
      puVar5 = (undefined8 *)(*(long *)((long)pvVar6 + 0x38) + (long)SVar15.str * 0x18);
      uVar12 = *puVar5;
      uVar14 = puVar5[1];
      uVar8 = *(undefined1 *)(puVar5 + 2);
      FUN_1006ad53c(uVar12,uVar14,uVar8);
    }
    _swift_bridgeObjectRelease(pvVar4);
    pvVar4 = pvVar6;
  }
  _swift_bridgeObjectRelease(pvVar4);
  _swift_endAccess(auStack_78);
  uVar1 = local_a8;
  FUN_1006a6f58(local_a0,uVar12,uVar14,uVar8,param_8,param_8,local_a8);
  FUN_1006ad108(uVar12,uVar14,uVar8);
  FUN_1006a8f88(param_4,param_5,param_6,param_7,param_8,param_9,uVar1);
  return;
}



/* Address: 0x1006a8ab0 | FUN_1006a8ab0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a8df0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006a8ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  DecodingError DVar4;
  ulong uVar5;
  undefined8 uVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  void *pvVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  undefined8 *puVar15;
  long extraout_x12;
  long lVar16;
  long lVar17;
  void *pvVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  String SVar22;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  
  lVar16 = *(long *)(param_7 + -8);
  local_a8 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar17 - extraout_x12;
  pcVar20 = *(code **)(lVar16 + 0x10);
  (*pcVar20)(lVar19);
  _swift_beginAccess(param_4 + 0x38,&local_78,0x21,0);
  uVar21 = *(ulong *)(param_4 + 0x38);
  _swift_retain(param_4);
  uVar5 = uVar21;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_4 + 0x38) = uVar21;
  uVar11 = uVar21;
  if ((uVar5 & 1) == 0) {
    uVar11 = 0;
    FUN_1006a2b94(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
    *(ulong *)(param_4 + 0x38) = uVar11;
  }
  uVar5 = *(ulong *)(uVar11 + 0x10);
  uVar21 = uVar11;
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
    FUN_1006a2b94(uVar21,uVar5 + 1,1,uVar11);
    *(ulong *)(param_4 + 0x38) = uVar21;
  }
  (*pcVar20)(lVar17,lVar19,param_7);
  FUN_100444220(uVar5,lVar17,param_4 + 0x38,param_7,param_9);
  (**(code **)(lVar16 + 8))(lVar19,param_7);
  *(ulong *)(param_4 + 0x38) = uVar21;
  _swift_endAccess(&local_78);
  SVar22 = Swift::CodingKey::get_stringValue();
  pvVar12 = SVar22.bridgeObject;
  _swift_beginAccess(param_5 + 0x10,&local_78,0x20,0);
  pvVar18 = *(void **)(param_5 + 0x10);
  if (*(long *)((long)pvVar18 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar18);
    FUN_10046483c();
    if (((ulong)SVar22.bridgeObject & 1) != 0) {
      puVar15 = (undefined8 *)(*(long *)((long)pvVar18 + 0x38) + (long)SVar22.str * 0x18);
      uVar9 = *puVar15;
      uVar1 = puVar15[1];
      cVar2 = *(char *)(puVar15 + 2);
      FUN_1006ad53c(uVar9,uVar1,cVar2);
      _swift_endAccess(&local_78);
      _swift_bridgeObjectRelease(pvVar12);
      _swift_bridgeObjectRelease(pvVar18);
      if (cVar2 == '\x01') {
        uVar10 = uVar9;
        _swift_retain();
        lVar16 = param_4;
        uVar14 = param_8;
        FUN_1006a7238();
        uVar6 = 0;
        local_b0 = param_9;
        local_78 = uVar10;
        lStack_70 = lVar16;
        local_68 = uVar14;
        FUN_1006afc98(0,param_8,param_10);
        _swift_retain(uVar10);
        _swift_retain(lVar16);
        _swift_bridgeObjectRetain(uVar14);
        pTVar7 = &TargetProtocolConformanceDescriptor_100c6f9d8;
        _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6f9d8,uVar6);
        Swift::KeyedDecodingContainer::_init(local_a8,pTVar7,param_8,uVar6,pTVar7);
        FUN_1006ad108(uVar9,uVar1,1);
        _swift_bridgeObjectRelease(uVar14);
        _swift_release(lVar16);
        _swift_release(uVar10);
        FUN_1006a8f88(param_4,param_5,param_6,param_7,param_8,local_b0,param_10);
        return;
      }
      _swift_release(param_4);
      DVar4 = Swift::DecodingError::typeMetadataAccessor();
      lVar16 = CONCAT71((int7)((ulong)&local_78 >> 8),DVar4.value);
      puVar15 = (undefined8 *)
                PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar16,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar8 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      iVar3 = *(int *)(puVar8 + 0x30);
      puVar8 = &DAT_100fdbf68;
      FUN_1000f7830(&DAT_100fdbf68,&DAT_100c6f980);
      *puVar15 = puVar8;
      _swift_beginAccess(param_4 + 0x38,&local_78,0,0);
      uVar10 = *(undefined8 *)(param_4 + 0x38);
      _swift_bridgeObjectRetain(uVar10);
      Swift::DecodingError::Context::_init
                ((long)puVar15 + (long)iVar3,uVar10,0xd000000000000015,0x8000000100dafe90,0);
      (**(code **)(*(long *)(lVar16 + -8) + 0x68))
                (puVar15,*(undefined4 *)
                          PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
                 ,lVar16);
      _swift_willThrow();
      FUN_1006ad108(uVar9,uVar1,cVar2);
      goto LAB_1006a8e1c;
    }
    _swift_bridgeObjectRelease(pvVar12);
    pvVar12 = pvVar18;
  }
  _swift_bridgeObjectRelease(pvVar12);
  _swift_endAccess(&local_78);
  _swift_release(param_4);
  DVar4 = Swift::DecodingError::typeMetadataAccessor();
  lVar16 = CONCAT71((int7)((ulong)&local_78 >> 8),DVar4.value);
  puVar13 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar16,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar8 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar3 = *(int *)(puVar8 + 0x30);
  *(long *)(puVar13 + 0x18) = param_7;
  *(undefined8 *)(puVar13 + 0x20) = param_9;
  FUN_10000cbb0(puVar13);
  (*pcVar20)();
  _swift_beginAccess(param_4 + 0x38,&local_78,0,0);
  uVar9 = *(undefined8 *)(param_4 + 0x38);
  _swift_bridgeObjectRetain(uVar9);
  Swift::DecodingError::Context::_init(puVar13 + iVar3,uVar9,0,0xe000000000000000,0);
  (**(code **)(*(long *)(lVar16 + -8) + 0x68))
            (puVar13,*(undefined4 *)
                      PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,lVar16);
  _swift_willThrow();
LAB_1006a8e1c:
  FUN_1006a8f88(param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Address: 0x1006a8f88 | FUN_1006a8f88 */

void FUN_1006a8f88(long param_1)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [40];
  
  _swift_beginAccess(param_1 + 0x38,auStack_60,0x21,0);
  FUN_1006b07a4(auStack_48);
  _swift_endAccess(auStack_60);
  FUN_100004594(auStack_48);
  return;
}



/* Address: 0x1006a8fdc | FUN_1006a8fdc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a92b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006a8fdc(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  DecodingError DVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long *plVar11;
  long extraout_x12;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  void *pvVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  String SVar19;
  undefined1 auStack_a0 [8];
  undefined8 *local_98;
  undefined1 auStack_78 [24];
  long lVar6;
  
  lVar12 = *(long *)(param_6 + -8);
  local_98 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar14 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar14 - extraout_x12;
  pcVar17 = *(code **)(lVar12 + 0x10);
  (*pcVar17)(lVar16);
  _swift_beginAccess(param_3 + 0x38,auStack_78,0x21,0);
  uVar18 = *(ulong *)(param_3 + 0x38);
  _swift_retain(param_3);
  uVar4 = uVar18;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_3 + 0x38) = uVar18;
  uVar7 = uVar18;
  if ((uVar4 & 1) == 0) {
    uVar7 = 0;
    FUN_1006a2b94(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
    *(ulong *)(param_3 + 0x38) = uVar7;
  }
  uVar4 = *(ulong *)(uVar7 + 0x10);
  uVar18 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar4) {
    uVar18 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1006a2b94(uVar18,uVar4 + 1,1,uVar7);
    *(ulong *)(param_3 + 0x38) = uVar18;
  }
  (*pcVar17)(puVar14,lVar16,param_6);
  FUN_100444220(uVar4,puVar14,param_3 + 0x38,param_6,param_7);
  (**(code **)(lVar12 + 8))(lVar16,param_6);
  *(ulong *)(param_3 + 0x38) = uVar18;
  _swift_endAccess(auStack_78);
  SVar19 = Swift::CodingKey::get_stringValue();
  pvVar8 = SVar19.bridgeObject;
  _swift_beginAccess(param_4 + 0x10,auStack_78,0x20,0);
  pvVar15 = *(void **)(param_4 + 0x10);
  if (*(long *)((long)pvVar15 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pvVar15);
    FUN_10046483c();
    if (((ulong)SVar19.bridgeObject & 1) != 0) {
      plVar11 = (long *)(*(long *)((long)pvVar15 + 0x38) + (long)SVar19.str * 0x18);
      lVar12 = *plVar11;
      lVar16 = plVar11[1];
      cVar1 = (char)plVar11[2];
      FUN_1006ad53c(lVar12,lVar16,cVar1);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar8);
      _swift_bridgeObjectRelease(pvVar15);
      if (cVar1 == '\x02') {
        lVar16 = lVar12 + 0x10;
        _swift_beginAccess(lVar16,auStack_78,0,0);
        puVar10 = local_98;
        uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x10);
        local_98[3] = &DAT_100ef6990;
        FUN_1006afc2c();
        puVar10[4] = lVar16;
        puVar5 = &DAT_100ef68b8;
        _swift_allocObject(&DAT_100ef68b8,0x38,7);
        *puVar10 = puVar5;
        *(long *)(puVar5 + 0x10) = lVar12;
        *(long *)(puVar5 + 0x18) = param_3;
        *(undefined8 *)(puVar5 + 0x20) = uVar13;
        puVar5[0x28] = 0;
        *(undefined8 *)(puVar5 + 0x30) = 0;
        FUN_1006a8f88(param_3,param_4,param_5,param_6,param_7);
        return;
      }
      _swift_release(param_3);
      DVar3 = Swift::DecodingError::typeMetadataAccessor();
      lVar6 = CONCAT71((int7)((ulong)auStack_78 >> 8),DVar3.value);
      puVar10 = (undefined8 *)
                PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar6,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar5 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      iVar2 = *(int *)(puVar5 + 0x30);
      puVar5 = &DAT_100fdbf68;
      FUN_1000f7830(&DAT_100fdbf68,&DAT_100c6f980);
      *puVar10 = puVar5;
      _swift_beginAccess(param_3 + 0x38,auStack_78,0,0);
      uVar13 = *(undefined8 *)(param_3 + 0x38);
      _swift_bridgeObjectRetain(uVar13);
      Swift::DecodingError::Context::_init
                ((long)puVar10 + (long)iVar2,uVar13,0xd000000000000015,0x8000000100dafe90,0);
      (**(code **)(*(long *)(lVar6 + -8) + 0x68))
                (puVar10,*(undefined4 *)
                          PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
                 ,lVar6);
      _swift_willThrow();
      FUN_1006ad108(lVar12,lVar16,cVar1);
      goto LAB_1006a92e0;
    }
    _swift_bridgeObjectRelease(pvVar8);
    pvVar8 = pvVar15;
  }
  _swift_bridgeObjectRelease(pvVar8);
  _swift_endAccess(auStack_78);
  _swift_release(param_3);
  DVar3 = Swift::DecodingError::typeMetadataAccessor();
  lVar12 = CONCAT71((int7)((ulong)auStack_78 >> 8),DVar3.value);
  puVar9 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
  _swift_allocError(lVar12,
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                    ,0,0);
  puVar5 = &DAT_100fdc020;
  FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
  iVar2 = *(int *)(puVar5 + 0x30);
  *(long *)(puVar9 + 0x18) = param_6;
  *(undefined8 *)(puVar9 + 0x20) = param_7;
  FUN_10000cbb0(puVar9);
  (*pcVar17)();
  _swift_beginAccess(param_3 + 0x38,auStack_78,0,0);
  uVar13 = *(undefined8 *)(param_3 + 0x38);
  _swift_bridgeObjectRetain(uVar13);
  Swift::DecodingError::Context::_init(puVar9 + iVar2,uVar13,0,0xe000000000000000,0);
  (**(code **)(*(long *)(lVar12 + -8) + 0x68))
            (puVar9,*(undefined4 *)
                     PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
             ,lVar12);
  _swift_willThrow();
LAB_1006a92e0:
  FUN_1006a8f88(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x1006a9448 | FUN_1006a9448 */

void FUN_1006a9448(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdaff50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a9490);
  (*pcVar1)();
}



/* Address: 0x1006a9490 | FUN_1006a9490 */

void FUN_1006a9490(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdaff50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a94d8);
  (*pcVar1)();
}



/* Address: 0x1006a94d8 | FUN_1006a94d8 */

void FUN_1006a94d8(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006ad72c(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1006a94fc | FUN_1006a94fc */

void FUN_1006a94fc(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1006a7504(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1006a9510 | FUN_1006a9510 */

uint FUN_1006a9510(uint param_1)

{
  FUN_1006a9550();
  return param_1 & 1;
}



/* Address: 0x1006a9530 | FUN_1006a9530 */

uint FUN_1006a9530(uint param_1)

{
  FUN_1006a9550();
  return param_1 & 1;
}



/* Address: 0x1006a9550 | FUN_1006a9550 */

uint FUN_1006a9550(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined8 *unaff_x20;
  
  (*param_4)(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
             *(undefined8 *)(param_2 + 0x18));
  return (uint)param_1 & 1;
}



/* Address: 0x1006a957c | FUN_1006a957c */

void FUN_1006a957c(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1006a7a18(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1006a95a0 | FUN_1006a95a0 */

void FUN_1006a95a0(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1006a7c38(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1006a95c4 | FUN_1006a95c4 */

void FUN_1006a95c4(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1006a8020(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1006a95e8 | FUN_1006a95e8 */

void FUN_1006a95e8(void)

{
  FUN_1006a97b8();
  return;
}



/* Address: 0x1006a9620 | FUN_1006a9620 */

void FUN_1006a9620(void)

{
  FUN_1006a971c();
  return;
}



/* Address: 0x1006a963c | FUN_1006a963c */

void FUN_1006a963c(void)

{
  FUN_1006a971c();
  return;
}



/* Address: 0x1006a9658 | FUN_1006a9658 */

void FUN_1006a9658(void)

{
  FUN_1006a971c();
  return;
}



/* Address: 0x1006a9674 | FUN_1006a9674 */

void FUN_1006a9674(void)

{
  FUN_1006a97b8();
  return;
}



/* Address: 0x1006a96b0 | FUN_1006a96b0 */

void FUN_1006a96b0(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decode();
  return;
}


