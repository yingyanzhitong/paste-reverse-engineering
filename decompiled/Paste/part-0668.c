/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007153d0 | thunk_FUN_100713960 */

void thunk_FUN_100713960(void)

{
  thunk_FUN_100713960();
  return;
}



/* Address: 0x1007153d4 | FUN_1007153d4 */

void FUN_1007153d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = *(long *)(param_6 + -8);
  puVar4 = auStack_80 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)puVar4 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_9;
  local_70 = param_7;
  local_68 = param_8;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar3);
  (**(code **)(lVar2 + 0x10))(puVar4,param_3,param_6);
  uVar1 = local_78;
  *(undefined8 *)(lVar3 + -0x10) = param_10;
  *(undefined8 *)(lVar3 + -8) = uVar1;
  FUN_1007154c4(param_1,lVar3,param_2,0,puVar4,param_5,local_70,param_6,local_68);
  return;
}



/* Address: 0x1007154c4 | FUN_1007154c4 */

void FUN_1007154c4(long param_1,undefined8 param_2,long param_3,char param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_4 == '\x01' || 0 < param_3) {
    (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
    local_70 = param_10;
    uStack_68 = param_11;
    lVar3 = 0;
    local_90 = param_6;
    uStack_88 = param_7;
    local_80 = param_8;
    uStack_78 = param_9;
    FUN_10071751c(0,&local_90);
    plVar1 = (long *)(param_1 + *(int *)(lVar3 + 0x48));
    *plVar1 = param_3;
    *(char *)(plVar1 + 1) = param_4;
    (**(code **)(*(long *)(param_8 + -8) + 0x20))(param_1 + *(int *)(lVar3 + 0x44),param_5,param_8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100715598);
  (*pcVar2)();
}



/* Address: 0x100715598 | FUN_100715598 */

void FUN_100715598(void)

{
  FUN_1007157dc();
  return;
}



/* Address: 0x1007155a4 | FUN_1007155a4 */

void FUN_1007155a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar4 = (long)&local_a0 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(param_4 + -8);
  lVar5 = lVar4 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = param_9;
  uStack_98 = param_8;
  (**(code **)(lVar3 + 0x10))(lVar5);
  (**(code **)(lVar2 + 0x10))(lVar4,param_2,param_5);
  (**(code **)(lVar3 + 0x20))(param_1,lVar5,param_4);
  local_70 = local_a0;
  uStack_68 = uStack_98;
  lVar3 = 0;
  local_90 = param_4;
  uStack_88 = param_6;
  local_80 = param_5;
  uStack_78 = param_7;
  FUN_10071751c(0,&local_90);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x48));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  (**(code **)(lVar2 + 0x20))(param_1 + *(int *)(lVar3 + 0x44),lVar4,param_5);
  return;
}



/* Address: 0x1007156b8 | FUN_1007156b8 */

void FUN_1007156b8(void)

{
  FUN_1007159e8();
  return;
}



/* Address: 0x1007156c4 | FUN_1007156c4 */

void FUN_1007156c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 auStack_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  local_70 = param_7;
  uStack_68 = param_8;
  FUN_10073d7b0(0,param_6,param_9);
  lVar3 = *(long *)(lVar1 + -8);
  lVar4 = (long)&local_70 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = lVar4 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar5);
  (**(code **)(lVar3 + 0x10))(lVar4,param_3,lVar1);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c75b68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75b68,lVar1);
  *(undefined8 *)(lVar5 + -0x10) = param_10;
  *(TargetProtocolConformanceDescriptor **)(lVar5 + -8) = pTVar2;
  FUN_1007154c4(param_1,lVar5,param_2,0,lVar4,param_5,local_70,lVar1,uStack_68);
  return;
}



/* Address: 0x1007157d0 | FUN_1007157d0 */

void FUN_1007157d0(void)

{
  FUN_1007157dc();
  return;
}



/* Address: 0x1007157dc | FUN_1007157dc */

void FUN_1007157dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1);
  (*param_8)(param_1,param_2,param_3);
  return;
}



/* Address: 0x1007158a0 | FUN_1007158a0 */

void FUN_1007158a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  TargetProtocolConformanceDescriptor *pTStack_68;
  
  lVar2 = 0;
  local_a0 = param_7;
  uStack_98 = param_9;
  FUN_10073d7b0(0,param_5,param_8);
  lVar4 = *(long *)(lVar2 + -8);
  lVar6 = (long)&local_a0 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_4 + -8);
  lVar7 = lVar6 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(lVar7);
  (**(code **)(lVar4 + 0x10))(lVar6,param_2,lVar2);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c75b68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75b68,lVar2);
  (**(code **)(lVar5 + 0x20))(param_1,lVar7,param_4);
  uStack_78 = local_a0;
  local_70 = uStack_98;
  lVar5 = 0;
  local_90 = param_4;
  uStack_88 = param_6;
  local_80 = lVar2;
  pTStack_68 = pTVar3;
  FUN_10071751c(0,&local_90);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar5 + 0x48));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  (**(code **)(lVar4 + 0x20))(param_1 + *(int *)(lVar5 + 0x44),lVar6,lVar2);
  return;
}



/* Address: 0x1007159dc | FUN_1007159dc */

void FUN_1007159dc(void)

{
  FUN_1007159e8();
  return;
}



/* Address: 0x1007159e8 | FUN_1007159e8 */

void FUN_1007159e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100715a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,param_2,UNRECOVERED_JUMPTABLE,param_3,param_4,uVar1,param_5,param_6,puVar2);
  return;
}



/* Address: 0x100715aa0 | FUN_100715aa0 */

void FUN_100715aa0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  lVar8 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x90) = lVar8;
  lVar4 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar9;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar9,uVar10,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  *(long *)(unaff_x22 + 0x18) = lVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  lVar4 = 0xff;
  FUN_100716568();
  *(long *)(unaff_x22 + 0xf0) = lVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xf8) = CONCAT71(extraout_var,OVar1.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x100) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x128) = CONCAT71(extraout_var_00,OVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x130) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar2;
  _swift_task_switch(FUN_100715c54,0,0);
  return;
}



/* Address: 0x100715c54 | FUN_100715c54 */

void FUN_100715c54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  long *plVar7;
  AsyncMapSequence AVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  TargetProtocolConformanceDescriptor *pTVar13;
  code *pcVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  
  bVar6 = *(byte *)(*(long *)(unaff_x22 + 0x88) + 0x18);
  pcVar14 = *(code **)(*(long *)(unaff_x22 + 0x98) + 0x38);
  *(code **)(unaff_x22 + 0x158) = pcVar14;
  if ((bVar6 & 1) != 0) {
    (*pcVar14)(*(undefined8 *)(unaff_x22 + 0x80),1,1,*(undefined8 *)(unaff_x22 + 0x90));
    uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x000100715d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  (*pcVar14)(*(undefined8 *)(unaff_x22 + 0x150),1,1,*(undefined8 *)(unaff_x22 + 0x90));
  plVar7 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar7;
  AVar8 = Swift::AsyncMapSequence::typeMetadataAccessor();
  uVar9 = 0xff;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar10 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar9);
  uVar11 = 0xff;
  FUN_1007357c4(0xff,uVar9,puVar10);
  puVar10 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar12 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar8.unknown);
  pTVar13 = &TargetProtocolConformanceDescriptor_100c75710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75710,uVar11);
  *(undefined **)(unaff_x22 + 0x40) = AVar8.unknown;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined **)(unaff_x22 + 0x50) = puVar12;
  *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x58) = pTVar13;
  uVar9 = 0xff;
  FUN_10070ab0c();
  AVar8 = Swift::AsyncMapSequence::typeMetadataAccessor();
  pTVar13 = &TargetProtocolConformanceDescriptor_100c74400;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74400,uVar9);
  _swift_getWitnessTable(puVar10,AVar8.unknown);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
  *(undefined **)(unaff_x22 + 0x68) = AVar8.unknown;
  *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x70) = pTVar13;
  *(undefined **)(unaff_x22 + 0x78) = puVar10;
  uVar9 = 0;
  FUN_10079fb58(0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100715e90;
  FUN_10079f72c(*(undefined8 *)(unaff_x22 + 0x108),uVar9);
  return;
}



/* Address: 0x100715e90 | FUN_100715e90 */

void FUN_100715e90(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100715ef4;
  }
  else {
    pcVar1 = FUN_100716498;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100715ef4 | FUN_100715ef4 */

void FUN_100715ef4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long *plVar5;
  AsyncMapSequence AVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  TargetProtocolConformanceDescriptor *pTVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uVar23;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar15 = *(long *)(unaff_x22 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = uVar14;
  (**(code **)(lVar15 + 0x30))(uVar14,1,uVar13);
  if ((int)uVar8 == 1) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar15 = *(long *)(unaff_x22 + 0x130);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0xf8));
    (**(code **)(lVar15 + 0x20))(uVar16,uVar13,uVar8);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar17 = *(long *)(unaff_x22 + 0xc0);
    (**(code **)(lVar15 + 0x20))(uVar11,uVar14,uVar13);
    (**(code **)(lVar15 + 0x10))(uVar8,uVar11,uVar13);
    (**(code **)(lVar17 + 0x30))(uVar8,2,uVar16);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
    if ((int)uVar8 == 0) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar15 = *(long *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar17 = *(long *)(unaff_x22 + 0x98);
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0x118),
                 *(undefined8 *)(unaff_x22 + 0xb8));
      pcVar18 = *(code **)(lVar15 + 0x10);
      (*pcVar18)(uVar16,uVar14,uVar8);
      pcVar20 = *(code **)(lVar17 + 0x30);
      uVar14 = uVar16;
      (*pcVar20)(uVar16,1,uVar13);
      pcVar22 = *(code **)(lVar15 + 8);
      (*pcVar22)(uVar16,uVar8);
      if ((int)uVar14 == 1) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
        pcVar1 = *(code **)(unaff_x22 + 0x158);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
        lVar15 = *(long *)(unaff_x22 + 0x130);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        Swift::RangeReplaceableCollection::init();
        (*pcVar1)(uVar16,0,1,uVar13);
        (**(code **)(lVar15 + 0x28))(uVar14,uVar16,uVar8);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x10))
                (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xd0),
                 *(undefined8 *)(unaff_x22 + 0xb8));
      (*pcVar20)(uVar14,1,uVar8);
      if ((int)uVar14 == 1) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100716498);
        (*pcVar20)();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      Swift::RangeReplaceableCollection::_append();
      (*pcVar20)(uVar14,1,uVar8);
      if ((int)uVar14 == 0) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar12 = *(long *)(unaff_x22 + 0x110);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
        lVar2 = *(long *)(unaff_x22 + 0xc0);
        lVar15 = *(long *)(unaff_x22 + 0x98);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar17 = *(long *)(unaff_x22 + 0x88);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        (**(code **)(lVar15 + 0x10))(uVar8,*(undefined8 *)(unaff_x22 + 0x150),uVar13);
        _Var4 = Swift::Collection::get_count();
        (**(code **)(lVar15 + 8))(uVar8,uVar13);
        (**(code **)(lVar2 + 8))(uVar19,uVar14);
        (**(code **)(lVar12 + 8))(uVar16,uVar11);
        if ((*(char *)(lVar17 + 8) == '\x01') || (_Var4 != **(long **)(unaff_x22 + 0x88)))
        goto LAB_100716350;
      }
      else {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
        lVar15 = *(long *)(unaff_x22 + 0x110);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xf0);
        lVar17 = *(long *)(unaff_x22 + 0x88);
        (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xb8));
        (**(code **)(lVar15 + 8))(uVar8,uVar14);
        if (*(char *)(lVar17 + 8) != '\x01') {
LAB_100716350:
          plVar5 = (long *)&DAT_00000030;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x160) = plVar5;
          AVar6 = Swift::AsyncMapSequence::typeMetadataAccessor();
          uVar14 = 0xff;
          Swift::Array<undefined>::typeMetadataAccessor();
          puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
          _swift_getWitnessTable
                    (PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar14);
          uVar8 = 0xff;
          FUN_1007357c4(0xff,uVar14,puVar7);
          puVar7 = 
          PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
          puVar9 = 
          PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
          _swift_getWitnessTable
                    (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
                     ,AVar6.unknown);
          pTVar10 = &TargetProtocolConformanceDescriptor_100c75710;
          _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75710,uVar8);
          *(undefined **)(unaff_x22 + 0x40) = AVar6.unknown;
          *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
          *(undefined **)(unaff_x22 + 0x50) = puVar9;
          *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x58) = pTVar10;
          uVar14 = 0xff;
          FUN_10070ab0c();
          AVar6 = Swift::AsyncMapSequence::typeMetadataAccessor();
          pTVar10 = &TargetProtocolConformanceDescriptor_100c74400;
          _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74400,uVar14);
          _swift_getWitnessTable(puVar7,AVar6.unknown);
          *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
          *(undefined **)(unaff_x22 + 0x68) = AVar6.unknown;
          *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x70) = pTVar10;
          *(undefined **)(unaff_x22 + 0x78) = puVar7;
          uVar14 = 0;
          FUN_10079fb58(0);
          *plVar5 = unaff_x22;
          plVar5[1] = (long)FUN_100715e90;
          FUN_10079f72c(*(undefined8 *)(unaff_x22 + 0x108),uVar14);
          return;
        }
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
      (*pcVar18)(*(undefined8 *)(unaff_x22 + 0x80),uVar8,uVar14);
      (*pcVar22)(uVar8,uVar14);
    }
    else if ((int)uVar8 == 1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
      lVar15 = *(long *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar17 = *(long *)(unaff_x22 + 0x88);
      (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
                (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0xf0));
      *(undefined1 *)(lVar17 + 0x18) = 1;
      (**(code **)(lVar15 + 0x10))(uVar13,uVar14,uVar8);
      (**(code **)(lVar15 + 8))(uVar14,uVar8);
    }
    else {
      lVar15 = *(long *)(unaff_x22 + 0x130);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar17 = *(long *)(unaff_x22 + 0x98);
      (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
                (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0xf0));
      pcVar20 = *(code **)(lVar15 + 0x10);
      (*pcVar20)(uVar13,uVar14,uVar16);
      (**(code **)(lVar17 + 0x30))(uVar13,1,uVar8);
      if ((int)uVar13 == 1) {
        (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x128));
        goto LAB_100716350;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
      pcVar18 = *(code **)(*(long *)(unaff_x22 + 0x130) + 8);
      (*pcVar18)(*(undefined8 *)(unaff_x22 + 0x138),uVar14);
      (*pcVar20)(uVar13,uVar8,uVar14);
      (*pcVar18)(uVar8,uVar14);
    }
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x150));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x00010071634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100716498 | FUN_100716498 */

void FUN_100716498(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x130) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x128));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100716564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100716568 | FUN_100716568 */

void FUN_100716568(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cbd468);
  return;
}



/* Address: 0x100716574 | FUN_100716574 */

void FUN_100716574(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100715aa0(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1007165dc | FUN_1007165dc */

undefined8 FUN_1007165dc(long param_1)

{
  long lVar1;
  AsyncMapSequence AVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined *puVar8;
  AsyncMapSequence AVar9;
  long lVar10;
  _ContiguousArrayStorage *p_Var11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  tuple2_conflict3 tVar19;
  undefined1 auStack_180 [8];
  long local_178;
  undefined8 local_170;
  long local_168;
  long local_160;
  undefined *local_158;
  TargetProtocolConformanceDescriptor *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  undefined8 local_110;
  undefined *local_108;
  TargetProtocolConformanceDescriptor *local_100;
  long local_f8;
  long local_f0;
  undefined1 *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  TargetProtocolConformanceDescriptor *local_88;
  TargetProtocolConformanceDescriptor *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar15 = *(long *)(param_1 + 0x20);
  local_e0 = *(long *)(lVar15 + -8);
  local_e8 = auStack_180 + -(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = *(undefined **)(param_1 + 0x10);
  local_160 = *(long *)(puVar16 + -8);
  lVar14 = (long)local_e8 - (*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d8 = *(undefined8 *)(param_1 + 0x18);
  uStack_b8 = *(undefined8 *)(param_1 + 0x30);
  local_170 = *(undefined8 *)(param_1 + 0x28);
  local_110 = *(undefined8 *)(param_1 + 0x38);
  uStack_c8 = *(undefined8 *)(param_1 + 0x38);
  local_d0 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = 0xff;
  local_c0 = local_170;
  local_98 = puVar16;
  puStack_90 = (undefined *)local_d8;
  local_88 = (TargetProtocolConformanceDescriptor *)lVar15;
  local_80 = (TargetProtocolConformanceDescriptor *)local_170;
  uStack_78 = uStack_b8;
  local_70 = local_110;
  FUN_100716568(0xff,&local_98);
  AVar2 = Swift::AsyncMapSequence::typeMetadataAccessor();
  uVar3 = 0xff;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar4 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  local_130 = uVar3;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar3);
  uVar5 = 0xff;
  local_138 = puVar4;
  FUN_1007357c4(0xff,uVar3,puVar4);
  puVar4 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  puVar6 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  local_140 = uVar5;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,AVar2.unknown);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c75710;
  local_148 = puVar6;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75710,uVar5);
  puVar8 = (undefined *)0xff;
  local_150 = pTVar7;
  local_98 = AVar2.unknown;
  puStack_90 = (undefined *)uVar5;
  local_88 = (TargetProtocolConformanceDescriptor *)puVar6;
  local_80 = pTVar7;
  FUN_10070ab0c(0xff,&local_98);
  AVar9 = Swift::AsyncMapSequence::typeMetadataAccessor();
  pTVar7 = &TargetProtocolConformanceDescriptor_100c74400;
  local_158 = AVar9.unknown;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74400,puVar8);
  local_100 = pTVar7;
  _swift_getWitnessTable(puVar4,AVar9.unknown);
  lVar10 = 0;
  local_120 = puVar8;
  local_108 = puVar4;
  local_98 = puVar8;
  puStack_90 = AVar9.unknown;
  local_88 = pTVar7;
  local_80 = (TargetProtocolConformanceDescriptor *)puVar4;
  FUN_10079fb4c(0,&local_98);
  local_f0 = *(long *)(lVar10 + -8);
  local_128 = lVar14 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_118 = *(long *)(puVar8 + -8);
  lVar17 = local_128 - (*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_168 = *(long *)(AVar2.unknown + -8);
  lVar13 = lVar17 - (*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_178 = lVar17;
  local_f8 = lVar10;
  (**(code **)(local_160 + 0x10))(lVar14,unaff_x20,puVar16);
  puVar4 = &DAT_100efc0f0;
  _swift_allocObject(&DAT_100efc0f0,0x40,7);
  uVar3 = local_170;
  *(undefined **)(puVar4 + 0x10) = puVar16;
  *(undefined8 *)(puVar4 + 0x18) = local_d8;
  *(long *)(puVar4 + 0x20) = lVar15;
  *(undefined8 *)(puVar4 + 0x28) = local_c0;
  *(undefined8 *)(puVar4 + 0x38) = uStack_c8;
  *(undefined8 *)(puVar4 + 0x30) = local_d0;
  (extension_Swift)::Swift::AsyncSequence::_map();
  _swift_release(puVar4);
  p_Var11 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar18 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  _swift_allocObject(p_Var11,uVar18 + *(long *)(*(long *)(lVar1 + -8) + 0x48),uVar12 | 7);
  tVar19 = Swift::Array<undefined>::__adoptStorage();
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,puVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(tVar19._0_8_ + uVar18,1,2,lVar1);
  local_98 = tVar19._0_8_;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_100004520();
  puVar4 = local_98;
  FUN_100708128(&local_a0,local_130,local_138);
  _swift_bridgeObjectRelease(puVar4);
  FUN_10070a98c(lVar17,lVar13,&local_a0,AVar2.unknown,local_140,local_148,local_150);
  _swift_bridgeObjectRelease(local_a0);
  (**(code **)(local_168 + 8))(lVar13,AVar2.unknown);
  puVar6 = local_158;
  lVar14 = *(long *)(local_158 + -8);
  lVar13 = lVar13 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(local_e0 + 0x10))(local_e8,unaff_x20 + *(int *)(param_1 + 0x44),lVar15);
  puVar4 = &DAT_100efc118;
  _swift_allocObject(&DAT_100efc118,0x40,7);
  *(undefined **)(puVar4 + 0x10) = puVar16;
  *(undefined8 *)(puVar4 + 0x18) = local_d8;
  *(long *)(puVar4 + 0x20) = lVar15;
  *(undefined8 *)(puVar4 + 0x30) = local_d0;
  *(undefined8 *)(puVar4 + 0x28) = local_c0;
  *(undefined8 *)(puVar4 + 0x38) = local_110;
  (extension_Swift)::Swift::AsyncSequence::_map();
  _swift_release(puVar4);
  puVar4 = local_120;
  lVar10 = local_128;
  lVar1 = local_178;
  FUN_10079f7a0(local_128,local_178,lVar13,local_120,puVar6,local_100,local_108);
  (**(code **)(lVar14 + 8))(lVar13,puVar6);
  (**(code **)(local_118 + 8))(lVar1,puVar4);
  lVar1 = local_f8;
  FUN_10079f894(local_f8);
  (**(code **)(local_f0 + 8))(lVar10,lVar1);
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x48));
}



/* Address: 0x100716b08 | FUN_100716b08 */

void FUN_100716b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100716b24,0,0);
  return;
}



/* Address: 0x100716b24 | FUN_100716b24 */

void FUN_100716b24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(uVar1,uVar2,lVar3);
  (**(code **)(lVar4 + 0x38))(uVar1,0,2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100716bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100716bb0 | FUN_100716bb0 */

void FUN_100716bb0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100716bc0 | FUN_100716bc0 */

void FUN_100716bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100716b08(plVar7,param_1,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x100716c5c | FUN_100716c5c */

void FUN_100716c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100716c78,0,0);
  return;
}



/* Address: 0x100716c78 | FUN_100716c78 */

void FUN_100716c78(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x18),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar2,2,2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100716ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100716ce4 | FUN_100716ce4 */

void FUN_100716ce4(long *param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1007165dc();
  (**(code **)(*(long *)(param_2 + -8) + 8))();
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Address: 0x100716d48 | FUN_100716d48 */

void FUN_100716d48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_100716c5c(plVar7,param_1,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x100716de4 | FUN_100716de4 */

void FUN_100716de4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c747f8,param_1);
  return;
}



/* Address: 0x100716df4 | FUN_100716df4 */

void FUN_100716df4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &DAT_100c748b8;
      _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x40);
    }
  }
  return;
}



/* Address: 0x100716e88 | FUN_100716e88 */

long * FUN_100716e88(long *param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar9 = *(long *)(param_3 + 0x20);
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = (ulong)*(uint *)(lVar11 + 0x50) & 0xff;
  uVar5 = *(long *)(lVar7 + 0x40) + uVar4;
  lVar3 = *(long *)(lVar11 + 0x40) + 7;
  uVar2 = (uint)uVar4 | *(uint *)(lVar7 + 0x50) & 0xf8;
  if ((uVar2 < 8 && ((*(uint *)(lVar7 + 0x50) | *(uint *)(lVar11 + 0x50)) & 0x100000) == 0) &&
      (lVar3 + (uVar5 & (uVar4 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 9 < 0x19) {
    (**(code **)(lVar7 + 0x10))(param_1);
    uVar10 = uVar5 + (long)param_1 & ~uVar4;
    uVar5 = uVar5 + (long)param_2 & ~uVar4;
    (**(code **)(lVar11 + 0x10))(uVar10,uVar5,lVar9);
    puVar8 = (undefined8 *)(lVar3 + uVar5 & 0xfffffffffffffff8);
    uVar1 = *(undefined1 *)(puVar8 + 1);
    puVar6 = (undefined8 *)(lVar3 + uVar10 & 0xfffffffffffffff8);
    *puVar6 = *puVar8;
    *(undefined1 *)(puVar6 + 1) = uVar1;
  }
  else {
    uVar5 = (ulong)(uVar2 | 7);
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100716f98 | FUN_100716f98 */

void FUN_100716f98(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100716fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(long *)(lVar3 + 0x40) + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff))
  ;
  return;
}



/* Address: 0x100716ff0 | FUN_100716ff0 */

long FUN_100716ff0(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x10))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x10))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10071708c | FUN_10071708c */

long FUN_10071708c(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x18))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x18))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100717128 | FUN_100717128 */

long FUN_100717128(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x20))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x20))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x1007171c4 | FUN_1007171c4 */

long FUN_1007171c4(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar6 + 0x28))();
  lVar7 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar6 = *(long *)(lVar6 + 0x40) + uVar3;
  uVar5 = lVar6 + param_1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = lVar6 + param_2 & (uVar3 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar5,uVar3);
  lVar6 = *(long *)(lVar7 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar5 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *puVar4 = *puVar2;
  *(undefined1 *)(puVar4 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100717260 | FUN_100717260 */

uint * FUN_100717260(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar11 + 0x54);
  lVar12 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  uVar9 = *(uint *)(lVar12 + 0x54);
  uVar3 = uVar9;
  if (uVar9 <= uVar6) {
    uVar3 = uVar6;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar2 = *(long *)(lVar11 + 0x40) + uVar13;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    lVar1 = (*(long *)(lVar12 + 0x40) + (uVar2 & (uVar13 ^ 0xffffffffffffffff)) + 7 &
            0xfffffffffffffff8) + 9;
    uVar10 = (uint)lVar1;
    uVar8 = 2;
    uVar5 = uVar8;
    if (uVar10 < 4) {
      uVar5 = ((param_2 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar5) {
      uVar8 = 4;
    }
    if (uVar5 < 0x100) {
      uVar8 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar8;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0)) {
LAB_1007172fc:
        uVar6 = uVar8 - 1 << (ulong)((uVar10 & 3) << 3);
        if (uVar10 < 4) {
          uVar9 = (uint)(byte)*param_1;
        }
        else {
          uVar9 = *param_1;
          uVar6 = 0;
        }
        return (uint *)(ulong)(uVar3 + (uVar9 | uVar6) + 1);
      }
    }
    else {
      if (uVar4 == 2) {
        uVar8 = (uint)*(ushort *)((long)param_1 + lVar1);
      }
      else {
        uVar8 = *(uint *)((long)param_1 + lVar1);
      }
      if (uVar8 != 0) goto LAB_1007172fc;
    }
    if (uVar3 == 0) {
      return (uint *)0x0;
    }
  }
  if (uVar6 < uVar9) {
    puVar7 = (uint *)((ulong)(uVar2 + (long)param_1) & ~uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010071735c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar12 + 0x30))(puVar7,uVar9,*(long *)(param_3 + 0x20));
    return puVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010071736c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x30))();
  return param_1;
}



/* Address: 0x100717384 | FUN_100717384 */

void FUN_100717384(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  lVar9 = *(long *)(param_4 + 0x10);
  lVar12 = *(long *)(lVar9 + -8);
  uVar5 = *(uint *)(lVar12 + 0x54);
  lVar11 = *(long *)(param_4 + 0x20);
  lVar13 = *(long *)(lVar11 + -8);
  uVar6 = *(uint *)(lVar13 + 0x54);
  uVar3 = uVar6;
  if (uVar6 <= uVar5) {
    uVar3 = uVar5;
  }
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar2 = *(long *)(lVar12 + 0x40) + uVar14;
  sVar1 = (*(long *)(lVar13 + 0x40) + (uVar2 & (uVar14 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 9;
  uVar8 = (uint)param_2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar15 = 2;
    uVar4 = uVar15;
    if ((uint)sVar1 < 4) {
      uVar4 = ((param_3 - uVar3) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar15 = 4;
    }
    if (uVar4 < 0x100) {
      uVar15 = 1;
    }
    uVar7 = 0;
    if (1 < uVar4) {
      uVar7 = uVar15;
    }
  }
  if (uVar3 < uVar8) {
    uVar8 = uVar8 + ~uVar3;
    _bzero(param_1,sVar1);
    iVar10 = 1;
    if ((uint)sVar1 < 4) {
      iVar10 = (uVar8 >> 8) + 1;
      *(char *)param_1 = (char)uVar8;
    }
    else {
      *param_1 = uVar8;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  else {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
        if (uVar8 == 0) {
          return;
        }
        goto LAB_1007174a0;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar8 != 0) {
LAB_1007174a0:
      if (uVar5 < uVar6) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x38);
        param_1 = (uint *)(uVar2 + (long)param_1 & ~uVar14);
        lVar9 = lVar11;
        uVar5 = uVar6;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001007174f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar5,lVar9);
      return;
    }
  }
  return;
}



/* Address: 0x10071751c | FUN_10071751c */

void FUN_10071751c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd3a8);
  return;
}



/* Address: 0x100717528 | FUN_100717528 */

undefined8 * FUN_100717528(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_retain();
  return param_1;
}



/* Address: 0x10071756c | FUN_10071756c */

undefined8 * FUN_10071756c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x1007175c8 | FUN_1007175c8 */

void FUN_1007175c8(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1007175dc | FUN_1007175dc */

undefined8 * FUN_1007175dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100717628 | FUN_100717628 */

int FUN_100717628(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100717670 | FUN_100717670 */

void FUN_100717670(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1007176b4 | FUN_1007176b4 */

void FUN_1007176b4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd408);
  return;
}



/* Address: 0x1007176c0 | FUN_1007176c0 */

void FUN_1007176c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Address: 0x10071772c | FUN_10071772c */

long * FUN_10071772c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  size_t sVar8;
  long lVar9;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar9 = *(long *)(lVar3 + -8);
  uVar1 = *(uint *)(lVar9 + 0x54);
  sVar8 = *(ulong *)(lVar9 + 0x40);
  uVar7 = (uint)sVar8;
  uVar5 = sVar8;
  if (uVar1 < 2) {
    if (uVar7 < 4) {
      uVar2 = (~(-1 << (ulong)(uVar7 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar7 << 3 & 0x1f);
      uVar5 = 2;
      if (0xfffe < uVar2) {
        uVar5 = 4;
      }
      if (uVar2 < 0xff) {
        uVar5 = (ulong)(uVar2 != 0);
      }
    }
    else {
      uVar5 = 1;
    }
    uVar5 = uVar5 + sVar8;
  }
  uVar6 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar6 < 8 && uVar5 < 0x19) && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) {
    plVar4 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,2,lVar3);
    if ((int)plVar4 != 0) {
      if (uVar1 < 2) {
        if (uVar7 < 4) {
          uVar1 = (~(-1 << (ulong)(uVar7 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar7 << 3 & 0x1f);
          uVar5 = 2;
          if (0xfffe < uVar1) {
            uVar5 = 4;
          }
          if (uVar1 < 0xff) {
            uVar5 = (ulong)(uVar1 != 0);
          }
        }
        else {
          uVar5 = 1;
        }
        sVar8 = uVar5 + sVar8;
      }
      plVar4 = _memcpy(param_1,param_2,sVar8);
      return plVar4;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar9 + 0x38))(param_1,0,2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007178e8 | FUN_1007178e8 */

void FUN_1007178e8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar3 = *(long *)(lVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,2,lVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100717968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Address: 0x10071796c | FUN_10071796c */

void * FUN_10071796c(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,2,lVar2);
  if ((int)pvVar3 != 0) {
    sVar4 = *(size_t *)(lVar6 + 0x40);
    if (*(uint *)(lVar6 + 0x54) < 2) {
      if ((uint)sVar4 < 4) {
        uVar1 = (uint)sVar4 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar6 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar5 = 2;
        if (0xfffe < uVar1) {
          uVar5 = 4;
        }
        if (uVar1 < 0xff) {
          uVar5 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar5 = 1;
      }
      sVar4 = uVar5 + sVar4;
    }
    pvVar3 = _memcpy(param_1,param_2,sVar4);
    return pvVar3;
  }
  (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar2);
  (**(code **)(lVar6 + 0x38))(param_1,0,2,lVar2);
  return param_1;
}



/* Address: 0x100717a80 | FUN_100717a80 */

void * FUN_100717a80(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar4 = param_1;
  (*pcVar9)(param_1,2,lVar2);
  pvVar3 = param_2;
  (*pcVar9)(param_2,2,lVar2);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar2);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar2);
    uVar6 = *(uint *)(lVar8 + 0x54);
    sVar5 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar6) goto LAB_100717b84;
    if (3 < (uint)sVar5) goto LAB_100717b0c;
LAB_100717b40:
    uVar1 = (int)sVar5 << 3;
    uVar6 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar6) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar7 = 2;
    if (0xfffe < uVar6) {
      uVar7 = 4;
    }
    if (uVar6 < 0xff) {
      uVar7 = (ulong)(uVar6 != 0);
    }
  }
  else {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar2);
      (**(code **)(lVar8 + 0x38))(param_1,0,2,lVar2);
      return param_1;
    }
    uVar6 = *(uint *)(lVar8 + 0x54);
    sVar5 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar6) goto LAB_100717b84;
    if ((uint)sVar5 < 4) goto LAB_100717b40;
LAB_100717b0c:
    uVar7 = 1;
  }
  sVar5 = uVar7 + sVar5;
LAB_100717b84:
  pvVar4 = _memcpy(param_1,param_2,sVar5);
  return pvVar4;
}



/* Address: 0x100717bfc | FUN_100717bfc */

void * FUN_100717bfc(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar6 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,2,lVar2);
  if ((int)pvVar3 != 0) {
    sVar4 = *(size_t *)(lVar6 + 0x40);
    if (*(uint *)(lVar6 + 0x54) < 2) {
      if ((uint)sVar4 < 4) {
        uVar1 = (uint)sVar4 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar6 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar5 = 2;
        if (0xfffe < uVar1) {
          uVar5 = 4;
        }
        if (uVar1 < 0xff) {
          uVar5 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar5 = 1;
      }
      sVar4 = uVar5 + sVar4;
    }
    pvVar3 = _memcpy(param_1,param_2,sVar4);
    return pvVar3;
  }
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar2);
  (**(code **)(lVar6 + 0x38))(param_1,0,2,lVar2);
  return param_1;
}



/* Address: 0x100717d10 | FUN_100717d10 */

void * FUN_100717d10(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar8 = *(long *)(lVar2 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar4 = param_1;
  (*pcVar9)(param_1,2,lVar2);
  pvVar3 = param_2;
  (*pcVar9)(param_2,2,lVar2);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar2);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar2);
    uVar6 = *(uint *)(lVar8 + 0x54);
    sVar5 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar6) goto LAB_100717e14;
    if (3 < (uint)sVar5) goto LAB_100717d9c;
LAB_100717dd0:
    uVar1 = (int)sVar5 << 3;
    uVar6 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar6) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar7 = 2;
    if (0xfffe < uVar6) {
      uVar7 = 4;
    }
    if (uVar6 < 0xff) {
      uVar7 = (ulong)(uVar6 != 0);
    }
  }
  else {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar2);
      (**(code **)(lVar8 + 0x38))(param_1,0,2,lVar2);
      return param_1;
    }
    uVar6 = *(uint *)(lVar8 + 0x54);
    sVar5 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar6) goto LAB_100717e14;
    if ((uint)sVar5 < 4) goto LAB_100717dd0;
LAB_100717d9c:
    uVar7 = 1;
  }
  sVar5 = uVar7 + sVar5;
LAB_100717e14:
  pvVar4 = _memcpy(param_1,param_2,sVar5);
  return pvVar4;
}



/* Address: 0x100717e8c | FUN_100717e8c */

int FUN_100717e8c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (1 < uVar2) {
    uVar1 = uVar2 - 2;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 < 2) {
    if ((uint)uVar7 < 4) {
      uVar3 = (uint)uVar7 << 3;
      uVar3 = (~(-1 << (ulong)(uVar3 & 0x1f)) - uVar2) + 2 >> (ulong)(uVar3 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar3) {
        uVar8 = 4;
      }
      if (uVar3 < 0xff) {
        uVar8 = (ulong)(uVar3 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    uVar7 = uVar8 + uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100717fb4;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar9 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_100717fb4;
      goto LAB_100717f4c;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100717f4c:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_100717fb4:
  if (uVar2 < 3) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if (1 < (uint)param_1) {
    return (uint)param_1 - 2;
  }
  return 0;
}



/* Address: 0x100718030 | FUN_100718030 */

void FUN_100718030(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  uint uVar10;
  size_t sVar11;
  int iVar12;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar3 - 2;
  }
  sVar11 = *(size_t *)(lVar7 + 0x40);
  if (uVar3 < 2) {
    if ((uint)sVar11 < 4) {
      uVar10 = (uint)sVar11 << 3;
      uVar10 = (~(-1 << (ulong)(uVar10 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar10 & 0x1f);
      uVar8 = 2;
      if (0xfffe < uVar10) {
        uVar8 = 4;
      }
      if (uVar10 < 0xff) {
        uVar8 = (ulong)(uVar10 != 0);
      }
    }
    else {
      uVar8 = 1;
    }
    sVar11 = uVar8 + sVar11;
  }
  uVar10 = (uint)sVar11;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f)
            ) + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar10 < 4) {
      bVar5 = bVar9;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar10 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar11);
        uVar4 = (undefined2)uVar2;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar11);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar11) = (char)iVar12;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar11) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar11) = iVar12;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar11) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar11) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar11) = 0;
    }
    if ((param_2 != 0) && (2 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001007181c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))(param_1,param_2 + 2,uVar3,lVar6);
      return;
    }
  }
  return;
}



/* Address: 0x100718270 | FUN_100718270 */

void FUN_100718270(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x0001007182c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,2,lVar1);
  return;
}



/* Address: 0x1007182c4 | FUN_1007182c4 */

void FUN_1007182c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
                    /* WARNING: Could not recover jumptable at 0x000100718318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,2,lVar1);
  return;
}



/* Address: 0x10071831c | thunk_FUN_100716bb0 */

void thunk_FUN_100716bb0(void)

{
  FUN_100716bb0();
  return;
}



/* Address: 0x100718320 | FUN_100718320 */

void FUN_100718320(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_1007183b8(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,
                param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x1007183b8 | FUN_1007183b8 */

void FUN_1007183b8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (0 < param_3) {
    (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
    lVar2 = 0;
    local_60 = param_4;
    uStack_58 = param_5;
    local_50 = param_6;
    uStack_48 = param_7;
    FUN_10071843c(0,&local_60);
    *(long *)(param_1 + *(int *)(lVar2 + 0x34)) = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10071843c);
  (*pcVar1)();
}



/* Address: 0x10071843c | FUN_10071843c */

void FUN_10071843c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd4c8);
  return;
}



/* Address: 0x100718448 | FUN_100718448 */

void FUN_100718448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar1);
  FUN_100718320(param_1,param_2);
  return;
}



/* Address: 0x1007184d8 | FUN_1007184d8 */

void FUN_1007184d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  lVar1 = 0;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_7;
  FUN_10071857c(0,&local_70);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x34)) = param_3;
  return;
}



/* Address: 0x10071857c | FUN_10071857c */

void FUN_10071857c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbd51c);
  return;
}


