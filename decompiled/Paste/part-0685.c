/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007516b8 | FUN_1007516b8 */

undefined8 FUN_1007516b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  ContiguousArray CVar7;
  TargetProtocolConformanceDescriptor *pTVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar10 = unaff_x20[4];
  if (lVar10 < 0) {
    local_78 = 0;
  }
  else {
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar4 = unaff_x20[3];
    uVar9 = unaff_x20[5];
    uVar6 = 0xff;
    local_70 = lVar10;
    FUN_100752c10(0xff,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20));
    CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_retain(uVar1);
    _swift_retain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(uVar4);
    _swift_retain(lVar10);
    _swift_bridgeObjectRetain(uVar9);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,
               CVar7.unknown);
    bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar5) {
      _swift_release(uVar3);
      _swift_release(uVar1);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(lVar10);
      _swift_release(uVar4);
      _swift_bridgeObjectRelease(uVar9);
      local_78 = 1;
    }
    else {
      FUN_100752c1c(uVar1,uVar3,uVar2,uVar4,lVar10,uVar9);
      pTVar8 = &TargetProtocolConformanceDescriptor_100c76670;
      local_70 = uVar4;
      local_68 = lVar10;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76670,uVar6);
      FUN_1007fa688(0,uVar6,pTVar8);
      FUN_1007f1b54(auStack_80);
      *unaff_x20 = uVar1;
      unaff_x20[1] = uVar3;
      unaff_x20[2] = uVar2;
      unaff_x20[3] = local_70;
      unaff_x20[4] = local_68;
      unaff_x20[5] = uVar9;
    }
  }
  return local_78;
}



/* Address: 0x10075182c | FUN_10075182c */

undefined8 FUN_10075182c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  Optional OVar2;
  bool bVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  TargetProtocolConformanceDescriptor *pTVar6;
  Set SVar7;
  undefined8 uVar8;
  ContiguousArray CVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_100 [5];
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar5;
  
  lVar1 = *(long *)(param_4 + 0x10);
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  uVar16 = *(undefined8 *)(param_4 + 0x20);
  lVar4 = 0xff;
  FUN_100752c8c(0xff,lVar1,uVar10,uVar16);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar2.value);
  lVar19 = *(long *)(lVar5 + -8);
  lVar11 = (long)local_100 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_100[3] = CONCAT71(extraout_var_00,OVar2.value);
  local_100[4] = *(long *)(local_100[3] + -8);
  lVar17 = lVar11 - (*(long *)(local_100[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar4 + -8);
  puVar15 = (undefined8 *)(lVar17 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar13 = unaff_x20[4];
  if (lVar13 < 0) {
    local_98 = 1;
  }
  else {
    local_100[2] = *unaff_x20;
    local_100[1] = unaff_x20[1];
    uVar12 = unaff_x20[5];
    local_80 = unaff_x20[2];
    local_100[0] = unaff_x20[3];
    lVar18 = *(long *)(lVar1 + -8);
    local_90 = local_100[0];
    local_88 = lVar13;
    local_78 = local_100[2];
    uStack_70 = local_100[1];
    (**(code **)(lVar18 + 0x10))(lVar17,param_2,lVar1);
    (**(code **)(lVar18 + 0x38))(lVar17,0,1,lVar1);
    *puVar15 = param_3;
    puVar15[1] = param_1;
    lVar18 = 0;
    FUN_100752c8c(0,lVar1,uVar10,uVar16);
    (**(code **)(local_100[4] + 0x20))
              ((long)puVar15 + (long)*(int *)(lVar18 + 0x30),lVar17,local_100[3]);
    pTVar6 = &TargetProtocolConformanceDescriptor_100c76630;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76630,lVar4);
    SVar7 = Swift::Set::typeMetadataAccessor();
    Swift::Set::_remove(lVar11,puVar15,SVar7.unknown);
    lVar17 = lVar11;
    (**(code **)(lVar14 + 0x30))(lVar11,1,lVar4);
    if ((int)lVar17 == 1) {
      (**(code **)(lVar19 + 8))(lVar11,lVar5);
      uVar8 = 0xff;
      local_a0 = lVar13;
      FUN_100752c10(0xff,lVar1,uVar10,uVar16);
      CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,
                 CVar9.unknown);
      bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar3) {
        uVar10 = 0;
        FUN_1007fa688(0,lVar4,pTVar6);
        FUN_1007ea300(puVar15,uVar10);
        (**(code **)(lVar14 + 8))(puVar15,lVar4);
        local_98 = 2;
      }
      else {
        pTVar6 = &TargetProtocolConformanceDescriptor_100c76670;
        _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76670,uVar8);
        FUN_1007fa688(0,uVar8,pTVar6);
        FUN_1007f1b54(&local_a0);
        (**(code **)(lVar14 + 8))(puVar15,lVar4);
        local_78 = local_100[2];
        uStack_70 = local_100[1];
        local_100[0] = local_90;
        lVar13 = local_88;
      }
    }
    else {
      (**(code **)(lVar14 + 8))(puVar15,lVar4);
      (**(code **)(lVar19 + 8))(lVar11,lVar5);
      local_98 = 1;
      local_78 = local_100[2];
      uStack_70 = local_100[1];
    }
    *unaff_x20 = local_78;
    unaff_x20[1] = uStack_70;
    unaff_x20[2] = local_80;
    unaff_x20[3] = local_100[0];
    unaff_x20[4] = lVar13;
    unaff_x20[5] = uVar12;
  }
  return local_98;
}



/* Address: 0x100751b7c | FUN_100751b7c */

undefined8 FUN_100751b7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  Optional OVar10;
  long lVar11;
  undefined7 extraout_var;
  TargetProtocolConformanceDescriptor *pTVar12;
  undefined8 uVar13;
  long lVar14;
  Set SVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  lVar11 = 0xff;
  FUN_100752c8c(0xff,uVar13,uVar3,uVar18);
  OVar10 = Swift::Optional::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,OVar10.value);
  local_d8 = *(long *)(local_b8 + -8);
  uVar16 = *(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = auStack_e0 + -uVar16;
  local_a8 = (long)local_c0 - uVar16;
  lVar17 = *(long *)(lVar11 + -8);
  uVar16 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = local_a8 - uVar16;
  local_d0 = local_c8 - uVar16;
  local_b0 = local_d0 - uVar16;
  local_80 = unaff_x20[4];
  if (-1 < local_80) {
    uVar1 = *unaff_x20;
    uVar4 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    uVar19 = unaff_x20[5];
    local_78 = uVar2;
    local_70 = uVar1;
    uStack_68 = uVar4;
    FUN_1007514c8(param_1,uVar13,uVar3,uVar18);
    local_90 = uVar5;
    _swift_retain(uVar5);
    _swift_retain(local_80);
    lVar7 = local_a8;
    local_88 = uVar19;
    _swift_bridgeObjectRetain(uVar19);
    local_a0 = uVar1;
    _swift_retain(uVar1);
    local_98 = uVar4;
    _swift_retain(uVar4);
    _swift_bridgeObjectRetain(uVar2);
    pTVar12 = &TargetProtocolConformanceDescriptor_100c76630;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76630,lVar11);
    uVar13 = 0;
    FUN_1007fa688(0,lVar11,pTVar12);
    lVar9 = local_b0;
    FUN_1007f62b4(lVar7,local_b0,uVar13);
    lVar14 = lVar7;
    (**(code **)(lVar17 + 0x30))(lVar7,1,lVar11);
    lVar6 = local_b8;
    if ((int)lVar14 != 1) {
      pcVar20 = *(code **)(lVar17 + 8);
      (*pcVar20)(lVar9,lVar11);
      lVar6 = local_d0;
      (**(code **)(lVar17 + 0x20))(local_d0,lVar7,lVar11);
      lVar17 = local_80;
      uVar3 = local_88;
      uVar13 = local_90;
      FUN_100752c1c(local_a0,local_98,uVar2,local_90,local_80,local_88);
      *unaff_x20 = local_70;
      unaff_x20[1] = uStack_68;
      unaff_x20[2] = uVar2;
      unaff_x20[3] = uVar13;
      unaff_x20[4] = lVar17;
      unaff_x20[5] = uVar3;
      uVar13 = *(undefined8 *)(lVar6 + 8);
      (*pcVar20)(lVar6,lVar11);
      return uVar13;
    }
    pcVar20 = *(code **)(local_d8 + 8);
    (*pcVar20)(lVar7,local_b8);
    lVar7 = local_c8;
    (**(code **)(lVar17 + 0x10))(local_c8,lVar9,lVar11);
    SVar15 = Swift::Set::typeMetadataAccessor();
    puVar8 = local_c0;
    Swift::Set::_update(local_c0,lVar7,SVar15.unknown);
    (*pcVar20)(puVar8,lVar6);
    (**(code **)(lVar17 + 8))(lVar9,lVar11);
    lVar11 = local_80;
    uVar3 = local_88;
    uVar13 = local_90;
    FUN_100752c1c(local_a0,local_98,uVar2,local_90,local_80,local_88);
    *unaff_x20 = local_70;
    unaff_x20[1] = uStack_68;
    unaff_x20[2] = local_78;
    unaff_x20[3] = uVar13;
    unaff_x20[4] = lVar11;
    unaff_x20[5] = uVar3;
  }
  return 1;
}



/* Address: 0x100751e54 | FUN_100751e54 */

undefined1  [16] FUN_100751e54(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  bool bVar5;
  undefined7 extraout_var;
  undefined1 *puVar7;
  ContiguousArray CVar8;
  undefined8 uVar9;
  TargetProtocolConformanceDescriptor *pTVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  long local_a0 [2];
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  long local_70;
  long lStack_68;
  long lVar6;
  
  lVar19 = *(long *)(param_2 + 0x18);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,OVar4.value);
  lVar14 = *(long *)(lVar6 + -8);
  puVar18 = &stack0xffffffffffffff30 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = *(long *)(lVar19 + -8);
  lVar16 = (long)puVar18 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = unaff_x20[4];
  if (lVar13 < 0) {
    pcVar17 = (code *)0x0;
    pcVar15 = (code *)0x0;
  }
  else {
    lVar21 = unaff_x20[5];
    lVar2 = unaff_x20[3];
    lVar1 = *unaff_x20;
    lVar3 = unaff_x20[1];
    _swift_bridgeObjectRelease(unaff_x20[2]);
    _swift_bridgeObjectRelease(lVar21);
    (**(code **)(lVar14 + 0x10))(puVar18,param_1,lVar6);
    puVar7 = puVar18;
    (**(code **)(lVar23 + 0x30))(puVar18,1,lVar19);
    if ((int)puVar7 == 1) {
      (**(code **)(lVar14 + 8))(puVar18,lVar6);
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      unaff_x20[5] = 0;
      unaff_x20[4] = -0x8000000000000000;
      uVar20 = *(undefined8 *)(param_2 + 0x10);
      uVar22 = *(undefined8 *)(param_2 + 0x20);
    }
    else {
      pcVar17 = *(code **)(lVar23 + 0x20);
      (*pcVar17)(lVar16,puVar18,lVar19);
      uVar20 = *(undefined8 *)(param_2 + 0x10);
      uVar22 = *(undefined8 *)(param_2 + 0x20);
      local_a0[0] = lVar13;
      FUN_100752c10(0xff,uVar20,lVar19,uVar22);
      CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,
                 CVar8.unknown);
      bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar5) {
        lVar6 = lVar19;
        uVar9 = uVar22;
        _swift_allocError(lVar19,uVar22,0,0);
        (*pcVar17)(uVar9,lVar16,lVar19);
        *unaff_x20 = lVar6;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        unaff_x20[3] = 0;
      }
      else {
        (**(code **)(lVar23 + 8))(lVar16,lVar19);
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
      }
      unaff_x20[5] = 0;
      unaff_x20[4] = -0x8000000000000000;
    }
    uVar9 = 0xff;
    local_90 = uVar20;
    lStack_88 = lVar19;
    local_80 = uVar22;
    local_70 = lVar1;
    lStack_68 = lVar3;
    FUN_100752c8c(0xff,uVar20,lVar19,uVar22);
    pTVar10 = &TargetProtocolConformanceDescriptor_100c76630;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76630,uVar9);
    uVar11 = 0;
    FUN_1007fa688(0,uVar9,pTVar10);
    puVar12 = &DAT_100fe0dd8;
    FUN_1000f7830(&DAT_100fe0dd8,&DAT_100c755a0);
    uVar9 = 0x100c7a1e0;
    _swift_getWitnessTable(0x100c7a1e0,uVar11);
    pcVar17 = FUN_1006035a4;
    FUN_1005f45bc(FUN_1006035a4,local_a0,uVar11,puVar12,
                  PTR___type_metadata_for_Swift_Never_100eadc38,uVar9,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    uVar9 = 0xff;
    local_90 = uVar20;
    lStack_88 = lVar19;
    local_80 = uVar22;
    local_70 = lVar2;
    lStack_68 = lVar13;
    FUN_100752c10(0xff,uVar20,lVar19,uVar22);
    pTVar10 = &TargetProtocolConformanceDescriptor_100c76670;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76670,uVar9);
    uVar22 = 0;
    FUN_1007fa688(0,uVar9,pTVar10);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    Swift::UnsafeContinuation::typeMetadataAccessor();
    OVar4 = Swift::Optional::typeMetadataAccessor();
    uVar20 = 0x100c7a1e0;
    _swift_getWitnessTable(0x100c7a1e0,uVar22);
    pcVar15 = FUN_1006035a4;
    FUN_1005f45bc(FUN_1006035a4,local_a0,uVar22,OVar4.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,uVar20,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    _swift_release(lVar3);
    _swift_release(lVar1);
    _swift_release(lVar13);
    _swift_release(lVar2);
  }
  auVar24._8_8_ = pcVar15;
  auVar24._0_8_ = pcVar17;
  return auVar24;
}



/* Address: 0x100752204 | FUN_100752204 */

void FUN_100752204(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  bool bVar5;
  Result RVar6;
  Optional OVar7;
  long lVar8;
  ContiguousArray CVar9;
  long lVar10;
  TargetProtocolConformanceDescriptor *pTVar11;
  undefined7 extraout_var;
  undefined8 *puVar12;
  undefined *puVar13;
  code *pcVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  long local_80;
  undefined8 *local_78;
  long local_70;
  long lStack_68;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar8 = 0;
  FUN_100752c8c(0,lVar10,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  local_88 = auStack_90 + -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *unaff_x20;
  lVar17 = unaff_x20[4];
  if (-1 < lVar17) {
    lVar1 = unaff_x20[1];
    lVar2 = unaff_x20[2];
    lVar18 = unaff_x20[3];
    lVar15 = unaff_x20[5];
    local_80 = lVar10;
    local_78 = param_1;
    local_70 = lVar1;
    CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_retain(lVar16);
    _swift_retain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    _swift_retain(lVar18);
    _swift_retain(lVar17);
    _swift_bridgeObjectRetain(lVar15);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,
               CVar9.unknown);
    bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (!bVar5) {
      FUN_100752c1c(lVar16,lVar1,lVar2,lVar18,lVar17,lVar15);
      pTVar11 = &TargetProtocolConformanceDescriptor_100c76630;
      local_70 = lVar16;
      lStack_68 = lVar1;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76630,lVar8);
      FUN_1007fa688(0,lVar8,pTVar11);
      puVar4 = local_88;
      FUN_1007f1b54(local_88);
      *unaff_x20 = local_70;
      unaff_x20[1] = lStack_68;
      unaff_x20[2] = lVar2;
      unaff_x20[3] = lVar18;
      unaff_x20[4] = lVar17;
      unaff_x20[5] = lVar15;
      puVar13 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      OVar7 = Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar6 = Swift::Result::typeMetadataAccessor();
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,puVar13,RVar6.value,"continuation result ",0);
      puVar12 = local_78;
      iVar3 = *(int *)(lVar10 + 0x30);
      *local_78 = *(undefined8 *)(puVar4 + 8);
      (**(code **)(*(long *)(CONCAT71(extraout_var,OVar7.value) + -8) + 0x20))
                ((long)local_78 + (long)iVar3,puVar4 + *(int *)(lVar8 + 0x30),
                 CONCAT71(extraout_var,OVar7.value));
      _swift_storeEnumTagMultiPayload((long)puVar12 + (long)iVar3,RVar6.value,0);
      pcVar14 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
    }
    else {
      _swift_release(lVar1);
      _swift_release(lVar16);
      _swift_bridgeObjectRelease(lVar2);
      _swift_release(lVar17);
      _swift_release(lVar18);
      _swift_bridgeObjectRelease(lVar15);
      puVar13 = &DAT_100fe0dd8;
      FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
      RVar6 = Swift::Result::typeMetadataAccessor();
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,puVar13,RVar6.value,"continuation result ",0);
      pcVar14 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
      puVar12 = local_78;
    }
    (*pcVar14)(puVar12,bVar5,1,lVar10);
    return;
  }
  if (lVar16 == 0) {
    puVar13 = &DAT_100fe0dd8;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar6 = Swift::Result::typeMetadataAccessor();
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,puVar13,RVar6.value,"continuation result ",0);
    lVar8 = (long)*(int *)(lVar17 + 0x30);
    *param_1 = 0;
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))((long)param_1 + lVar8,1,1,lVar10);
  }
  else {
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    unaff_x20[5] = 0;
    unaff_x20[4] = -0x8000000000000000;
    puVar13 = &DAT_100fe0dd8;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    RVar6 = Swift::Result::typeMetadataAccessor();
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,puVar13,RVar6.value,"continuation result ",0);
    lVar8 = (long)*(int *)(lVar17 + 0x30);
    *param_1 = 0;
    *(long *)((long)param_1 + lVar8) = lVar16;
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar8,RVar6.value,lVar16 != 0);
                    /* WARNING: Could not recover jumptable at 0x000100752680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar17 + -8) + 0x38))(param_1,0,1,lVar17);
  return;
}



/* Address: 0x100752684 | FUN_100752684 */

void FUN_100752684(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  Optional OVar4;
  long lVar5;
  undefined8 uVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  Set SVar8;
  ContiguousArray CVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined7 extraout_var;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_100;
  undefined8 local_f8;
  long *local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  
  lVar1 = *(long *)(param_4 + 0x10);
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  uVar14 = *(undefined8 *)(param_4 + 0x20);
  lVar5 = 0;
  FUN_100752c8c(0,lVar1,uVar10,uVar14);
  local_d8 = (long)&local_100 -
             (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *unaff_x20;
  lVar16 = unaff_x20[4];
  if (lVar16 < 0) {
    if (lVar17 == 0) {
      (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
      lVar5 = 0;
      FUN_100752c98(0,lVar1,uVar10,uVar14);
    }
    else {
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      unaff_x20[5] = 0;
      unaff_x20[4] = -0x8000000000000000;
      *param_1 = lVar17;
      lVar5 = 0;
      FUN_100752c98(0,lVar1,uVar10,uVar14);
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar5,lVar17 != 0);
                    /* WARNING: Could not recover jumptable at 0x000100752a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,0,1,lVar5);
    return;
  }
  local_c8 = unaff_x20[1];
  local_c0 = unaff_x20[2];
  lVar15 = unaff_x20[3];
  local_90 = unaff_x20[5];
  uVar6 = 0xff;
  local_e8 = param_3;
  lStack_e0 = param_2;
  local_d0 = lVar5;
  local_b0 = param_3;
  lStack_a8 = param_2;
  local_88 = lVar15;
  lStack_80 = lVar16;
  local_78 = lVar17;
  lStack_70 = local_c8;
  FUN_100752c10(0xff,lVar1,uVar10,uVar14);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c76670;
  local_b8 = uVar14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76670,uVar6);
  SVar8 = Swift::Set::typeMetadataAccessor();
  Swift::Set::_remove(&local_a0,&local_b0,SVar8.unknown);
  lVar12 = local_c8;
  lVar5 = local_d0;
  if (local_98 == 1) {
    local_a0 = local_c8;
    local_100 = lVar15;
    local_f8 = uVar10;
    local_f0 = param_1;
    CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,
               CVar9.unknown);
    bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (bVar3) {
      local_a0 = local_e8;
      local_98 = lStack_e0;
      uVar10 = 0;
      FUN_1007fa688(0,uVar6,pTVar7);
      FUN_1007ea300(&local_a0,uVar10);
      *unaff_x20 = lVar17;
      unaff_x20[1] = lVar12;
      unaff_x20[2] = local_c0;
      unaff_x20[3] = local_88;
      unaff_x20[4] = lStack_80;
      unaff_x20[5] = local_90;
      lVar5 = 0;
      FUN_100752c98(0,lVar1,local_f8,local_b8);
      pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar10 = 1;
      param_1 = local_f0;
      goto LAB_1007529dc;
    }
    pTVar7 = &TargetProtocolConformanceDescriptor_100c76630;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76630,lVar5);
    FUN_1007fa688(0,lVar5,pTVar7);
    lVar17 = local_d8;
    FUN_1007f1b54(local_d8);
    *unaff_x20 = local_78;
    unaff_x20[1] = lStack_70;
    unaff_x20[2] = local_c0;
    unaff_x20[3] = local_100;
    unaff_x20[4] = lVar16;
    unaff_x20[5] = local_90;
    puVar11 = &DAT_100fe0dd8;
    FUN_1000f8b08(&DAT_100fe0dd8,&DAT_100c755a0);
    OVar4 = Swift::Optional::typeMetadataAccessor();
    lVar16 = CONCAT71(extraout_var,OVar4.value);
    lVar12 = 0;
    _swift_getTupleTypeMetadata2(0,puVar11,lVar16,"continuation element ",0);
    param_1 = local_f0;
    iVar2 = *(int *)(lVar12 + 0x30);
    *local_f0 = *(long *)(lVar17 + 8);
    (**(code **)(*(long *)(lVar16 + -8) + 0x20))
              ((long)local_f0 + (long)iVar2,lVar17 + *(int *)(lVar5 + 0x30),lVar16);
    lVar5 = 0;
    FUN_100752c98(0,lVar1,local_f8,local_b8);
    _swift_storeEnumTagMultiPayload(param_1,lVar5,2);
    pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  else {
    *unaff_x20 = lVar17;
    unaff_x20[1] = local_c8;
    unaff_x20[2] = local_c0;
    unaff_x20[3] = lVar15;
    unaff_x20[4] = lVar16;
    unaff_x20[5] = local_90;
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
    lVar5 = 0;
    FUN_100752c98(0,lVar1,uVar10,local_b8);
    _swift_storeEnumTagMultiPayload(param_1,lVar5,0);
    pcVar13 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
  uVar10 = 0;
LAB_1007529dc:
  (*pcVar13)(param_1,uVar10,1,lVar5);
  return;
}



/* Address: 0x100752a7c | FUN_100752a7c */

long FUN_100752a7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  Set SVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar9 = unaff_x20[4];
  if (lVar9 < 0) {
    local_80 = 1;
  }
  else {
    uVar7 = *unaff_x20;
    uVar1 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar10 = unaff_x20[3];
    uVar8 = unaff_x20[5];
    uStack_90 = 0;
    uVar3 = 0xff;
    local_98 = param_1;
    local_78 = uVar8;
    local_70 = uVar10;
    local_68 = lVar9;
    FUN_100752c10(0xff,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                  *(undefined8 *)(param_2 + 0x20));
    _swift_retain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(lVar9);
    _swift_bridgeObjectRetain(uVar8);
    _swift_retain(uVar7);
    _swift_retain(uVar10);
    pTVar4 = &TargetProtocolConformanceDescriptor_100c76670;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76670,uVar3);
    uVar5 = 0;
    FUN_1007fa688(0,uVar3,pTVar4);
    FUN_1007f62b4(auStack_88,&local_98,uVar5);
    if (local_80 == 1) {
      uStack_90 = 0;
      local_98 = param_1;
      SVar6 = Swift::Set::typeMetadataAccessor();
      Swift::Set::_update(auStack_88,&local_98,SVar6.unknown);
      FUN_100752c1c(uVar7,uVar1,uVar2,uVar10,lVar9,uVar8);
      local_80 = 1;
      uVar8 = local_78;
    }
    else {
      FUN_100752c1c(uVar7,uVar1,uVar2,uVar10,lVar9,uVar8);
    }
    *unaff_x20 = uVar7;
    unaff_x20[1] = uVar1;
    unaff_x20[2] = uVar2;
    unaff_x20[3] = local_70;
    unaff_x20[4] = local_68;
    unaff_x20[5] = uVar8;
  }
  return local_80;
}



/* Address: 0x100752c10 | FUN_100752c10 */

void FUN_100752c10(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100752c1c | FUN_100752c1c */

void FUN_100752c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  if (-1 < param_5) {
    _swift_release(param_2);
    _swift_bridgeObjectRelease(param_3);
    _swift_release(param_5);
    _swift_bridgeObjectRelease(param_6);
    _swift_release(param_1);
    _swift_release(param_4);
    return;
  }
  _swift_errorRelease();
  return;
}



/* Address: 0x100752c8c | FUN_100752c8c */

void FUN_100752c8c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100752c98 | FUN_100752c98 */

void FUN_100752c98(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100752ca4 | FUN_100752ca4 */

void FUN_100752ca4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  Set<undefined> SVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Set<undefined> SVar9;
  undefined8 uVar10;
  tuple2_conflict3 tVar11;
  
  uVar2 = 0;
  FUN_100752c8c(0,param_2,param_3,param_4);
  tVar11 = Swift::Array<undefined>::_allocateUninitialized(0,uVar2);
  uVar3 = tVar11._0_8_;
  pTVar4 = &TargetProtocolConformanceDescriptor_100c76630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76630,uVar2);
  uVar10 = uVar2;
  FUN_1007e93d8(uVar3,uVar2,pTVar4);
  tVar11 = Swift::Array<undefined>::_allocateUninitialized(0,uVar2);
  SVar6.unknown = tVar11._0_8_;
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar5);
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar1) {
    _swift_bridgeObjectRelease(SVar6.unknown);
    SVar6 = Swift::Set::init();
  }
  else {
    FUN_100752e90(SVar6.unknown,uVar2,pTVar4);
  }
  uVar5 = 0;
  FUN_100752c10(0,param_2,param_3,param_4);
  tVar11 = Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  uVar7 = tVar11._0_8_;
  pTVar4 = &TargetProtocolConformanceDescriptor_100c76670;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76670,uVar5);
  uVar2 = uVar5;
  FUN_1007e93d8(uVar7,uVar5,pTVar4);
  tVar11 = Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  SVar9.unknown = tVar11._0_8_;
  uVar8 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar8);
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar1) {
    _swift_bridgeObjectRelease(SVar9.unknown);
    SVar9 = Swift::Set::init();
  }
  else {
    FUN_100752e90(SVar9.unknown,uVar5,pTVar4);
  }
  *param_1 = uVar3;
  param_1[1] = uVar10;
  param_1[2] = SVar6.unknown;
  param_1[3] = uVar7;
  param_1[4] = uVar2;
  param_1[5] = SVar9.unknown;
  return;
}



/* Address: 0x100752e90 | FUN_100752e90 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100752f10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100752e90(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  __int64 _Var2;
  _NativeSet<undefined> _native;
  UnsafeMutablePointer<undefined> UVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  long local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar5 = *(long *)(param_2 + -8);
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&local_80 - uVar4;
  local_68 = lVar6 - uVar4;
  lVar7 = local_68 - uVar4;
  _Var2 = Swift::Array<undefined>::get_count();
  _native = Swift::_NativeSet::init(_Var2);
  _Var2 = Swift::Array<undefined>::get_endIndex(_native.unknown,param_2);
  if (_Var2 != 0) {
    lVar9 = 0;
    local_80 = lVar7;
    local_78 = param_1;
    do {
      lVar7 = local_80;
      Swift::Array<undefined>::get_subscript(local_80,lVar9,param_1,param_2);
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10075307c);
        (*pcVar8)();
      }
      local_70 = lVar9 + 1;
      (**(code **)(lVar5 + 0x20))(local_68,lVar7,param_2);
      UVar3.unknown =
           (undefined *)Swift::Hashable::_rawHashValue(*(__int64 *)(_native.unknown + 0x28));
      uVar4 = -1L << ((ulong)(byte)_native.unknown[0x20] & 0x3f);
      uVar10 = (ulong)UVar3.unknown & (uVar4 ^ 0xffffffffffffffff);
      while( true ) {
        if ((*(ulong *)(_native.unknown + (uVar10 >> 6) * 8 + 0x38) >> (uVar10 & 0x3f) & 1) == 0)
        break;
        UVar3 = Swift::_NativeSet::get__elements(_native.unknown);
        (**(code **)(lVar5 + 0x10))(lVar6,UVar3.unknown + *(long *)(lVar5 + 0x48) * uVar10,param_2);
        bVar1 = Swift::Equatable::___infix(lVar6,local_68,param_2,*(undefined8 *)(param_3 + 8));
        pcVar8 = *(code **)(lVar5 + 8);
        (*pcVar8)(lVar6,param_2);
        if (bVar1) {
          (*pcVar8)(local_68,param_2);
          goto LAB_100752f40;
        }
        uVar10 = uVar10 + 1 & ~uVar4;
      }
      Swift::_NativeSet::_unsafeInsertNew(local_68,uVar10,_native.unknown,param_2,param_3);
LAB_100752f40:
      param_1 = local_78;
      _Var2 = Swift::Array<undefined>::get_endIndex(UVar3.unknown,param_2);
      lVar9 = local_70;
    } while (local_70 != _Var2);
  }
  _swift_bridgeObjectRelease(param_1);
  Swift::Set::init(_native);
  return;
}



/* Address: 0x10075307c | FUN_10075307c */

void FUN_10075307c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100753088 | thunk_FUN_100745398 */

uint thunk_FUN_100745398(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x10075308c | thunk_FUN_10060938c */

void thunk_FUN_10060938c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = 0;
    *(uint *)param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x100753090 | FUN_100753090 */

void FUN_100753090(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10075309c | FUN_10075309c */

void FUN_10075309c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007530a8 | thunk_FUN_1007530ec */

void thunk_FUN_1007530ec(void)

{
  FUN_1007530ec();
  return;
}



/* Address: 0x1007530ac | FUN_1007530ac */

void FUN_1007530ac(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[1]);
    return;
  }
  return;
}



/* Address: 0x1007530ec | FUN_1007530ec */

ulong * FUN_1007530ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    uVar2 = param_2[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x100753140 | FUN_100753140 */

ulong * FUN_100753140(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1007531f8 | FUN_1007531f8 */

ulong * FUN_1007531f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else if (*param_2 < 0xffffffff) {
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1[1]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = param_1[1];
    param_1[1] = param_2[1];
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x100753284 | FUN_100753284 */

void FUN_100753284(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100753290 | FUN_100753290 */

undefined1  [16] FUN_100753290(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_30 = &DAT_100c764b8;
  uVar3 = *(ulong *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x28);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x100753314 | FUN_100753314 */

long * FUN_100753314(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar3 + -8);
  uVar1 = (ulong)*(uint *)(lVar8 + 0x50) & 0xff;
  sVar2 = *(size_t *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    sVar2 = sVar2 + 1;
  }
  if (((uint)uVar1 < 8 && (*(uint *)(lVar8 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar1 - 0x11 | uVar1) - sVar2) {
    *param_1 = *param_2;
    puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
    puVar6 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
    puVar7 = puVar6 + 1;
    puVar5 = puVar4 + 1;
    *puVar4 = *puVar6;
    puVar4 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,lVar3);
    if ((int)puVar4 == 0) {
      (**(code **)(lVar8 + 0x10))(puVar5,puVar7,lVar3);
      (**(code **)(lVar8 + 0x38))(puVar5,0,1,lVar3);
    }
    else {
      _memcpy(puVar5,puVar7,sVar2);
    }
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    param_1 = (long *)(lVar3 + ((ulong)((uint)uVar1 & 0xf8 ^ 0x1f8) & uVar1 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10075341c | FUN_10075341c */

void FUN_10075341c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar1 = (param_1 + 0xfU & 0xfffffffffffffff8) + uVar5 + 8;
  uVar2 = uVar1 & (uVar5 ^ 0xffffffffffffffff);
  (**(code **)(lVar4 + 0x30))(uVar2,1,lVar3);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100753488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(uVar1 & (uVar5 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Address: 0x10075348c | FUN_10075348c */

undefined8 * FUN_10075348c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = *param_2;
  puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = uVar8 + 8 + (long)puVar4;
  uVar2 = uVar8 + 8 + (long)puVar5;
  uVar3 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x30))(uVar3,1,lVar7);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar9 + 0x10))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
  }
  else {
    sVar6 = *(size_t *)(lVar9 + 0x40);
    if (*(int *)(lVar9 + 0x54) == 0) {
      sVar6 = sVar6 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar6);
  }
  return param_1;
}



/* Address: 0x100753554 | FUN_100753554 */

undefined8 * FUN_100753554(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  puVar5 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar5 = *puVar6;
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = uVar9 + 8 + (long)puVar5;
  uVar2 = uVar9 + 8 + (long)puVar6;
  pcVar11 = *(code **)(lVar10 + 0x30);
  uVar3 = uVar1 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar3,1,lVar8);
  uVar4 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar4,1,lVar8);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar10 + 0x18))
                (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar8);
      return param_1;
    }
    (**(code **)(lVar10 + 8))(uVar1 & (uVar9 ^ 0xffffffffffffffff),lVar8);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar10 + 0x10))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar8);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar8);
    return param_1;
  }
  sVar7 = *(size_t *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar7);
  return param_1;
}



/* Address: 0x100753668 | FUN_100753668 */

undefined8 * FUN_100753668(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = *param_2;
  puVar4 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  lVar7 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar7 + -8);
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar1 = uVar8 + 8 + (long)puVar4;
  uVar2 = uVar8 + 8 + (long)puVar5;
  uVar3 = uVar2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x30))(uVar3,1,lVar7);
  if ((int)uVar3 == 0) {
    (**(code **)(lVar9 + 0x20))
              (uVar1 & (uVar8 ^ 0xffffffffffffffff),uVar2 & (uVar8 ^ 0xffffffffffffffff),lVar7);
    (**(code **)(lVar9 + 0x38))(uVar1 & (uVar8 ^ 0xffffffffffffffff),0,1,lVar7);
  }
  else {
    sVar6 = *(size_t *)(lVar9 + 0x40);
    if (*(int *)(lVar9 + 0x54) == 0) {
      sVar6 = sVar6 + 1;
    }
    _memcpy((void *)(uVar1 & (uVar8 ^ 0xffffffffffffffff)),
            (void *)(uVar2 & (uVar8 ^ 0xffffffffffffffff)),sVar6);
  }
  return param_1;
}



/* Address: 0x100753730 | FUN_100753730 */

undefined8 * FUN_100753730(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  puVar5 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  *puVar5 = *puVar6;
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar1 = uVar9 + 8 + (long)puVar5;
  uVar2 = uVar9 + 8 + (long)puVar6;
  pcVar11 = *(code **)(lVar10 + 0x30);
  uVar3 = uVar1 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar3,1,lVar8);
  uVar4 = uVar2 & (uVar9 ^ 0xffffffffffffffff);
  (*pcVar11)(uVar4,1,lVar8);
  if ((int)uVar3 == 0) {
    if ((int)uVar4 == 0) {
      (**(code **)(lVar10 + 0x28))
                (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar8);
      return param_1;
    }
    (**(code **)(lVar10 + 8))(uVar1 & (uVar9 ^ 0xffffffffffffffff),lVar8);
  }
  else if ((int)uVar4 == 0) {
    (**(code **)(lVar10 + 0x20))
              (uVar1 & (uVar9 ^ 0xffffffffffffffff),uVar2 & (uVar9 ^ 0xffffffffffffffff),lVar8);
    (**(code **)(lVar10 + 0x38))(uVar1 & (uVar9 ^ 0xffffffffffffffff),0,1,lVar8);
    return param_1;
  }
  sVar7 = *(size_t *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy((void *)(uVar1 & (uVar9 ^ 0xffffffffffffffff)),
          (void *)(uVar2 & (uVar9 ^ 0xffffffffffffffff)),sVar7);
  return param_1;
}



/* Address: 0x100753844 | FUN_100753844 */

int FUN_100753844(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  lVar9 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar2 = *(int *)(lVar9 + 0x54);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = iVar2 - 1;
  }
  uVar1 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  lVar10 = *(long *)(lVar9 + 0x40);
  if (iVar2 == 0) {
    lVar10 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar3 = *(byte *)(lVar9 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1007538fc;
  uVar7 = lVar10 + ((ulong)bVar3 + 0x10 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  uVar6 = (uint)uVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar11 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f);
    if (uVar11 < 0xff) {
      if (uVar11 == 0) goto LAB_1007538fc;
      goto LAB_1007538bc;
    }
    if (uVar11 < 0xffff) {
      uVar11 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar11 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1007538bc:
    uVar11 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar11 != 0) {
    uVar5 = 0;
    if (uVar6 < 4) {
      uVar5 = uVar11 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar5) + 1;
  }
LAB_1007538fc:
  puVar8 = (ulong *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar5 < 0x7fffffff) {
    uVar7 = *puVar8;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar2 = 0;
    if (1 < (int)uVar7 + 1U) {
      iVar2 = (int)uVar7;
    }
    return iVar2;
  }
  uVar5 = (int)puVar8 + (uint)bVar3 + 8 & ~(uint)bVar3;
  (**(code **)(lVar9 + 0x30))();
  iVar2 = 0;
  if (uVar5 != 0) {
    iVar2 = uVar5 - 1;
  }
  return iVar2;
}



/* Address: 0x1007539b8 | FUN_1007539b8 */

void FUN_1007539b8(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  size_t sVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  iVar14 = *(int *)(lVar9 + 0x54);
  uVar2 = 0;
  if (iVar14 != 0) {
    uVar2 = iVar14 - 1;
  }
  uVar8 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar8 = 0x7ffffffe;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  sVar6 = *(size_t *)(lVar9 + 0x40);
  if (iVar14 == 0) {
    sVar6 = sVar6 + 1;
  }
  sVar1 = (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)) + sVar6;
  uVar5 = (uint)sVar1;
  bVar13 = 0;
  if (uVar8 <= param_3 && param_3 - uVar8 != 0) {
    uVar3 = (param_3 - uVar8) + ~(-1 << (ulong)(uVar5 << 3 & 0x1f)) >> (ulong)(uVar5 << 3 & 0x1f);
    bVar11 = 2;
    if (0xfffe < uVar3) {
      bVar11 = 4;
    }
    if (uVar3 < 0xff) {
      bVar11 = uVar3 != 0;
    }
    bVar13 = 1;
    if (uVar5 < 4) {
      bVar13 = bVar11;
    }
  }
  if (uVar8 < param_2) {
    param_2 = param_2 + ~uVar8;
    if (uVar5 < 4) {
      iVar14 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar14 = 1;
    }
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar14;
      }
    }
    else if (bVar13 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar14;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar14;
    }
  }
  else {
    if (bVar13 < 2) {
      if (bVar13 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar13 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      puVar7 = (ulong *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
      if (uVar2 < 0x7fffffff) {
        if (param_2 < 0x7fffffff) {
          *puVar7 = (ulong)param_2;
        }
        else {
          *puVar7 = 0;
          *(uint *)puVar7 = param_2 + 0x80000001;
        }
      }
      else {
        puVar12 = (uint *)((long)puVar7 + uVar10 + 8 & ~uVar10);
        if (param_2 <= uVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100753bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar9 + 0x38))(puVar12,param_2 + 1);
          return;
        }
        uVar5 = (uint)sVar6;
        uVar8 = 0xffffffff;
        if (uVar5 < 4) {
          uVar8 = ~(-1 << (ulong)((uVar5 & 3) << 3));
        }
        if (uVar5 != 0) {
          uVar8 = uVar8 & (uVar2 - param_2 ^ 0xffffffff);
          uVar2 = 4;
          if (uVar5 < 4) {
            uVar2 = uVar5;
          }
          _bzero(puVar12,sVar6);
          if ((int)uVar2 < 3) {
            if (uVar2 == 1) {
              *(char *)puVar12 = (char)uVar8;
            }
            else {
              *(short *)puVar12 = (short)uVar8;
            }
          }
          else if (uVar2 == 3) {
            *(short *)puVar12 = (short)uVar8;
            *(char *)((long)puVar12 + 2) = (char)(uVar8 >> 0x10);
          }
          else {
            *puVar12 = uVar8;
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x100753c58 | FUN_100753c58 */

undefined1  [16] FUN_100753c58(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  long local_38;
  undefined *puStack_30;
  undefined1 *local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar2 + -8) + 0x40;
    puStack_30 = &DAT_100c764f8;
    _swift_getTupleTypeLayout2(auStack_58,&DAT_100c764b8);
    local_28 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x100753ce0 | FUN_100753ce0 */

long * FUN_100753ce0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  size_t sVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  sVar5 = *(size_t *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    sVar5 = sVar5 + 1;
  }
  uVar6 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  uVar1 = (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + sVar5;
  uVar2 = sVar5;
  if (sVar5 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (((uint)uVar6 < 8 && (*(uint *)(lVar10 + 0x50) & 0x100000) == 0) && uVar2 + 1 < 0x19) {
    uVar7 = (uint)*(byte *)((long)param_2 + uVar2);
    if (2 < *(byte *)((long)param_2 + uVar2)) {
      uVar7 = (int)*param_2 + 3;
    }
    if (uVar7 == 2) {
      uVar9 = ~uVar6;
      *param_1 = *param_2;
      uVar1 = (long)param_1 + uVar6 + 8;
      uVar6 = (long)param_2 + uVar6 + 8;
      uVar3 = uVar6 & uVar9;
      (**(code **)(lVar10 + 0x30))(uVar3,1,lVar8);
      if ((int)uVar3 == 0) {
        (**(code **)(lVar10 + 0x10))(uVar1 & uVar9,uVar6 & uVar9,lVar8);
        (**(code **)(lVar10 + 0x38))(uVar1 & uVar9,0,1,lVar8);
      }
      else {
        _memcpy((void *)(uVar1 & uVar9),(void *)(uVar6 & uVar9),sVar5);
      }
      *(undefined1 *)((long)param_1 + uVar2) = 2;
    }
    else if (uVar7 == 1) {
      lVar8 = *param_2;
      _swift_errorRetain(lVar8);
      *param_1 = lVar8;
      *(undefined1 *)((long)param_1 + uVar2) = 1;
    }
    else {
      plVar4 = param_2;
      (**(code **)(lVar10 + 0x30))(param_2,1,lVar8);
      if ((int)plVar4 == 0) {
        (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar8);
        (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar8);
      }
      else {
        _memcpy(param_1,param_2,sVar5);
      }
      *(undefined1 *)((long)param_1 + uVar2) = 0;
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100753eb0 | FUN_100753eb0 */

void FUN_100753eb0(uint *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  uint *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  uVar7 = *(ulong *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar2 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + uVar7;
  if (uVar7 <= uVar2) {
    uVar7 = uVar2;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar7);
  uVar8 = (uint)bVar3;
  if (2 < bVar3) {
    uVar6 = (uint)uVar7;
    uVar9 = 4;
    if (uVar6 < 4) {
      uVar9 = uVar6;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_100753f70;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    uVar8 = uVar9 | bVar3 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 3;
  }
LAB_100753f70:
  if (uVar8 == 2) {
    pbVar1 = (byte *)((long)param_1 + uVar5 + 8);
    uVar7 = (ulong)pbVar1 & ~uVar5;
    (**(code **)(lVar11 + 0x30))(uVar7,1,lVar10);
    if ((int)uVar7 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
      param_1 = (uint *)((ulong)pbVar1 & ~uVar5);
      goto LAB_100753ff4;
    }
  }
  else {
    if (uVar8 == 1) {
      _swift_errorRelease(*(undefined8 *)param_1);
      return;
    }
    puVar4 = param_1;
    (**(code **)(lVar11 + 0x30))(param_1,1,lVar10);
    if ((int)puVar4 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 8);
LAB_100753ff4:
                    /* WARNING: Could not recover jumptable at 0x000100754004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,lVar10);
      return;
    }
  }
  return;
}



/* Address: 0x100754008 | FUN_100754008 */

undefined8 * FUN_100754008(undefined8 *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  size_t sVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar11 + -8);
  sVar8 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar2 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + sVar8;
  uVar3 = sVar8;
  if (sVar8 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar4 = *(byte *)((long)param_2 + uVar3);
  uVar9 = (uint)bVar4;
  if (2 < bVar4) {
    uVar14 = (uint)uVar3;
    uVar10 = 4;
    if (uVar14 < 4) {
      uVar10 = uVar14;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1007540d4;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar4 - 3 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007540d4:
  if (uVar9 == 2) {
    uVar13 = ~uVar7;
    *param_1 = *(undefined8 *)param_2;
    uVar2 = (long)param_1 + uVar7 + 8;
    pbVar1 = (byte *)((long)param_2 + uVar7 + 8);
    uVar7 = (ulong)pbVar1 & uVar13;
    (**(code **)(lVar15 + 0x30))(uVar7,1,lVar11);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar15 + 0x10))(uVar2 & uVar13,(ulong)pbVar1 & uVar13,lVar11);
      (**(code **)(lVar15 + 0x38))(uVar2 & uVar13,0,1,lVar11);
    }
    else {
      _memcpy((void *)(uVar2 & uVar13),(void *)((ulong)pbVar1 & uVar13),sVar8);
    }
    uVar6 = 2;
  }
  else if (uVar9 == 1) {
    uVar12 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar12);
    *param_1 = uVar12;
    uVar6 = 1;
  }
  else {
    puVar5 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar11);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar15 + 0x10))(param_1,param_2,lVar11);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar11);
    }
    else {
      _memcpy(param_1,param_2,sVar8);
    }
    uVar6 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar6;
  return param_1;
}



/* Address: 0x1007541f8 | FUN_1007541f8 */

uint * FUN_1007541f8(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar11 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar11 + -8);
  sVar10 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  uVar15 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = (uVar15 + 8 & (uVar15 ^ 0xffffffffffffffff)) + sVar10;
  uVar4 = sVar10;
  if (sVar10 <= uVar16) {
    uVar4 = uVar16;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar7 = *(byte *)((long)param_1 + uVar4);
  uVar9 = (uint)bVar7;
  uVar13 = (uint)uVar4;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar13 < 4) {
      uVar3 = uVar13;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007542ec;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (uVar13 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar13 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
LAB_1007542ec:
  uVar16 = ~uVar15;
  if (uVar9 == 2) {
    pbVar1 = (byte *)((long)param_1 + uVar15 + 8);
    uVar5 = (ulong)pbVar1 & uVar16;
    (**(code **)(lVar14 + 0x30))(uVar5,1,lVar11);
    if ((int)uVar5 == 0) {
      pcVar8 = *(code **)(lVar14 + 8);
      puVar6 = (uint *)((ulong)pbVar1 & uVar16);
LAB_100754358:
      (*pcVar8)(puVar6,lVar11);
    }
  }
  else if (uVar9 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    puVar6 = param_1;
    (**(code **)(lVar14 + 0x30))(param_1,1,lVar11);
    if ((int)puVar6 == 0) {
      pcVar8 = *(code **)(lVar14 + 8);
      puVar6 = param_1;
      goto LAB_100754358;
    }
  }
  bVar7 = *(byte *)((long)param_2 + uVar4);
  uVar9 = (uint)bVar7;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar13 < 4) {
      uVar3 = uVar13;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x0001007543d0;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar13 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar13 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
joined_r0x0001007543d0:
  if (uVar9 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    pbVar1 = (byte *)((long)param_1 + uVar15 + 8);
    pbVar2 = (byte *)((long)param_2 + uVar15 + 8);
    uVar15 = (ulong)pbVar2 & uVar16;
    (**(code **)(lVar14 + 0x30))(uVar15,1,lVar11);
    if ((int)uVar15 == 0) {
      (**(code **)(lVar14 + 0x10))((ulong)pbVar1 & uVar16,(ulong)pbVar2 & uVar16,lVar11);
      (**(code **)(lVar14 + 0x38))((ulong)pbVar1 & uVar16,0,1,lVar11);
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar16),(void *)((ulong)pbVar2 & uVar16),sVar10);
    }
    bVar7 = 2;
  }
  else if (uVar9 == 1) {
    uVar12 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar12);
    *(undefined8 *)param_1 = uVar12;
    bVar7 = 1;
  }
  else {
    puVar6 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,lVar11);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar14 + 0x10))(param_1,param_2,lVar11);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar11);
      bVar7 = 0;
    }
    else {
      _memcpy(param_1,param_2,sVar10);
      bVar7 = 0;
    }
  }
  *(byte *)((long)param_1 + uVar4) = bVar7;
  return param_1;
}



/* Address: 0x100754514 | FUN_100754514 */

undefined8 * FUN_100754514(undefined8 *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  size_t sVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar11 + -8);
  sVar8 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar8 = sVar8 + 1;
  }
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar2 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + sVar8;
  uVar3 = sVar8;
  if (sVar8 <= uVar2) {
    uVar3 = uVar2;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar4 = *(byte *)((long)param_2 + uVar3);
  uVar9 = (uint)bVar4;
  if (2 < bVar4) {
    uVar13 = (uint)uVar3;
    uVar10 = 4;
    if (uVar13 < 4) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1007545e0;
      uVar10 = (uint)(byte)*param_2;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*param_2;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*param_2;
    }
    else {
      uVar10 = *param_2;
    }
    uVar9 = uVar10 | bVar4 - 3 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar9 = uVar10;
    }
    uVar9 = uVar9 + 3;
  }
LAB_1007545e0:
  if (uVar9 == 2) {
    uVar12 = ~uVar7;
    *param_1 = *(undefined8 *)param_2;
    uVar2 = (long)param_1 + uVar7 + 8;
    pbVar1 = (byte *)((long)param_2 + uVar7 + 8);
    uVar7 = (ulong)pbVar1 & uVar12;
    (**(code **)(lVar14 + 0x30))(uVar7,1,lVar11);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar14 + 0x20))(uVar2 & uVar12,(ulong)pbVar1 & uVar12,lVar11);
      (**(code **)(lVar14 + 0x38))(uVar2 & uVar12,0,1,lVar11);
    }
    else {
      _memcpy((void *)(uVar2 & uVar12),(void *)((ulong)pbVar1 & uVar12),sVar8);
    }
    uVar6 = 2;
  }
  else if (uVar9 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar6 = 1;
  }
  else {
    puVar5 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,lVar11);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar11);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar11);
    }
    else {
      _memcpy(param_1,param_2,sVar8);
    }
    uVar6 = 0;
  }
  *(undefined1 *)((long)param_1 + uVar3) = uVar6;
  return param_1;
}



/* Address: 0x1007546fc | FUN_1007546fc */

uint * FUN_1007546fc(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar11 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar11 + -8);
  sVar10 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar10 = sVar10 + 1;
  }
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar15 = (uVar14 + 8 & (uVar14 ^ 0xffffffffffffffff)) + sVar10;
  uVar4 = sVar10;
  if (sVar10 <= uVar15) {
    uVar4 = uVar15;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar7 = *(byte *)((long)param_1 + uVar4);
  uVar9 = (uint)bVar7;
  uVar12 = (uint)uVar4;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar12 < 4) {
      uVar3 = uVar12;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007547f0;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (uVar12 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar12 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
LAB_1007547f0:
  uVar15 = ~uVar14;
  if (uVar9 == 2) {
    pbVar1 = (byte *)((long)param_1 + uVar14 + 8);
    uVar5 = (ulong)pbVar1 & uVar15;
    (**(code **)(lVar13 + 0x30))(uVar5,1,lVar11);
    if ((int)uVar5 == 0) {
      pcVar8 = *(code **)(lVar13 + 8);
      puVar6 = (uint *)((ulong)pbVar1 & uVar15);
LAB_10075485c:
      (*pcVar8)(puVar6,lVar11);
    }
  }
  else if (uVar9 == 1) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    puVar6 = param_1;
    (**(code **)(lVar13 + 0x30))(param_1,1,lVar11);
    if ((int)puVar6 == 0) {
      pcVar8 = *(code **)(lVar13 + 8);
      puVar6 = param_1;
      goto LAB_10075485c;
    }
  }
  bVar7 = *(byte *)((long)param_2 + uVar4);
  uVar9 = (uint)bVar7;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar12 < 4) {
      uVar3 = uVar12;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x0001007548d4;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar12 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)((uVar12 & 3) << 3)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
joined_r0x0001007548d4:
  if (uVar9 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    pbVar1 = (byte *)((long)param_1 + uVar14 + 8);
    pbVar2 = (byte *)((long)param_2 + uVar14 + 8);
    uVar14 = (ulong)pbVar2 & uVar15;
    (**(code **)(lVar13 + 0x30))(uVar14,1,lVar11);
    if ((int)uVar14 == 0) {
      (**(code **)(lVar13 + 0x20))((ulong)pbVar1 & uVar15,(ulong)pbVar2 & uVar15,lVar11);
      (**(code **)(lVar13 + 0x38))((ulong)pbVar1 & uVar15,0,1,lVar11);
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar15),(void *)((ulong)pbVar2 & uVar15),sVar10);
    }
    bVar7 = 2;
  }
  else if (uVar9 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar7 = 1;
  }
  else {
    puVar6 = param_2;
    (**(code **)(lVar13 + 0x30))(param_2,1,lVar11);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar11);
      (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar11);
      bVar7 = 0;
    }
    else {
      _memcpy(param_1,param_2,sVar10);
      bVar7 = 0;
    }
  }
  *(byte *)((long)param_1 + uVar4) = bVar7;
  return param_1;
}



/* Address: 0x100754a10 | FUN_100754a10 */

int FUN_100754a10(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar6 = ((ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + uVar7;
  if (uVar7 <= uVar6) {
    uVar7 = uVar6;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_100754adc;
  uVar6 = uVar7 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100754adc;
      goto LAB_100754a68;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_100754a68:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar8 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_100754adc:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar7)) {
    iVar2 = (*(byte *)((long)param_1 + uVar7) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x100754b38 | FUN_100754b38 */

void FUN_100754b38(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar2 = ((ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + uVar6;
  if (uVar6 <= uVar2) {
    uVar6 = uVar2;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  sVar1 = uVar6 + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0xfe) {
    bVar8 = 0;
  }
  else if (uVar7 < 4) {
    uVar3 = ((param_3 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar7 << 3 & 0x1f)) +
            1;
    bVar8 = 2;
    if (0xffff < uVar3) {
      bVar8 = 4;
    }
    if (uVar3 < 0x100) {
      bVar8 = 1 < uVar3;
    }
  }
  else {
    bVar8 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar8 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar6) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar7 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar4 = (undefined2)uVar3;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar8 < 2) {
      if (bVar8 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar9;
      }
    }
    else if (bVar8 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar9;
    }
  }
  return;
}



/* Address: 0x100754d00 | FUN_100754d00 */

uint FUN_100754d00(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = ((ulong)*(byte *)(lVar5 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) + uVar7;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (uVar7 < 9) {
    uVar7 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar7);
  uVar3 = (uint)bVar2;
  if (2 < bVar2) {
    uVar6 = (uint)uVar7;
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar2 - 3 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
  return uVar3;
}



/* Address: 0x100754db8 | FUN_100754db8 */

void FUN_100754db8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    uVar4 = uVar4 + 1;
  }
  uVar1 = ((ulong)*(byte *)(lVar3 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)) + uVar4;
  if (uVar4 <= uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    uVar2 = (uint)uVar4;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x03';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1,uVar4);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100754eb4 | FUN_100754eb4 */

void FUN_100754eb4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100754ec0 | FUN_100754ec0 */

undefined1  [16] FUN_100754ec0(undefined8 param_1)

{
  Optional OVar1;
  Result RVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_40 [32];
  ulong uVar3;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,OVar1.value);
  FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,RVar2.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_40,&DAT_100c764b8,*(long *)(lVar4 + -8) + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0,auStack_40,1);
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Address: 0x100754f64 | FUN_100754f64 */

ulong * FUN_100754f64(ulong *param_1,ulong *param_2,long param_3)

{
  size_t sVar1;
  ulong uVar2;
  byte bVar3;
  ulong *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar16 = *(long *)(lVar11 + -8);
  uVar7 = *(ulong *)(lVar16 + 0x40);
  uVar10 = (ulong)*(uint *)(lVar16 + 0x50) & 0xf8;
  uVar6 = uVar10 | 7;
  if (*(int *)(lVar16 + 0x54) == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar2 = uVar7;
  if (uVar7 < 9) {
    uVar2 = 8;
  }
  sVar1 = uVar2 + (uVar10 + 0xf & (uVar6 ^ 0xffffffffffffffff)) + 1;
  if ((*(uint *)(lVar16 + 0x50) & 0x1000f8) != 0 || 0x18 < sVar1) {
    uVar7 = *param_2;
    *param_1 = uVar7;
    _swift_retain();
    return (ulong *)(uVar7 + (uVar6 + 0x10 & ~uVar6));
  }
  uVar10 = *param_2;
  uVar6 = uVar10;
  if (0xfffffffe < uVar10) {
    uVar6 = 0xffffffff;
  }
  if ((uVar10 != 0) && (1 < (int)uVar6 + 1U)) {
    puVar4 = _memcpy(param_1,param_2,sVar1);
    return puVar4;
  }
  *param_1 = uVar10;
  puVar13 = (uint *)((long)param_2 + 0xfU & 0xfffffffffffffff8);
  bVar3 = *(byte *)((long)puVar13 + uVar2);
  uVar8 = (uint)bVar3;
  if (1 < bVar3) {
    uVar15 = (uint)uVar2;
    uVar9 = 4;
    if (uVar15 < 4) {
      uVar9 = uVar15;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1007550c8;
      uVar9 = (uint)(byte)*puVar13;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar13;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar13;
    }
    else {
      uVar9 = *puVar13;
    }
    uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1007550c8:
  puVar14 = (undefined8 *)((long)param_1 + 0xfU & 0xfffffffffffffff8);
  if (uVar8 == 1) {
    uVar12 = *(undefined8 *)puVar13;
    _swift_errorRetain(uVar12);
    *puVar14 = uVar12;
    *(undefined1 *)((long)puVar14 + uVar2) = 1;
  }
  else {
    puVar5 = puVar13;
    (**(code **)(lVar16 + 0x30))(puVar13,1,lVar11);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar16 + 0x10))(puVar14,puVar13,lVar11);
      (**(code **)(lVar16 + 0x38))(puVar14,0,1,lVar11);
      *(undefined1 *)((long)puVar14 + uVar2) = 0;
    }
    else {
      _memcpy(puVar14,puVar13,uVar7);
      *(undefined1 *)((long)puVar14 + uVar2) = 0;
    }
  }
  return param_1;
}



/* Address: 0x100755154 | FUN_100755154 */

void FUN_100755154(ulong *param_1,long param_2)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar5 = 0xffffffff;
  }
  if ((uVar4 != 0 && (int)uVar5 != -1) && (uVar4 == 0 || (int)uVar5 != 0)) {
    return;
  }
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar4 = (ulong)*(uint *)(lVar10 + 0x50) & 0xf8 | 7;
  uVar5 = *(ulong *)(lVar10 + 0x40);
  puVar9 = (uint *)((long)param_1 + uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff));
  if (*(int *)(lVar10 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  bVar1 = *(byte *)((long)puVar9 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar5;
    uVar7 = 4;
    if (uVar3 < 4) {
      uVar7 = uVar3;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100755230;
      uVar7 = (uint)(byte)*puVar9;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar9;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar9;
    }
    else {
      uVar7 = *puVar9;
    }
    uVar6 = uVar7 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_100755230:
  if (uVar6 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar9);
    return;
  }
  puVar2 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar8);
  if ((int)puVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010075528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))(puVar9,lVar8);
  return;
}



/* Address: 0x100755290 | FUN_100755290 */

ulong * FUN_100755290(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  ulong *puVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  
  lVar12 = *(long *)(param_3 + 0x10);
  lVar16 = *(long *)(lVar12 + -8);
  uVar6 = *(ulong *)(lVar16 + 0x40);
  iVar2 = *(int *)(lVar16 + 0x54);
  uVar10 = (ulong)*(uint *)(lVar16 + 0x50) & 0xf8 | 7;
  uVar9 = ~uVar10;
  uVar11 = *param_2;
  uVar1 = uVar11;
  if (0xfffffffe < uVar11) {
    uVar1 = 0xffffffff;
  }
  if ((uVar11 != 0 && (int)uVar1 != -1) && (uVar11 == 0 || (int)uVar1 != 0)) {
    if (iVar2 == 0) {
      uVar6 = uVar6 + 1;
    }
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    puVar4 = _memcpy(param_1,param_2,uVar6 + (uVar10 + 8 & uVar9) + 1);
    return puVar4;
  }
  *param_1 = uVar11;
  puVar14 = (undefined8 *)((long)param_1 + uVar10 + 8 & uVar9);
  puVar15 = (uint *)((long)param_2 + uVar10 + 8 & uVar9);
  if (iVar2 == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar1 = uVar6;
  if (uVar6 < 9) {
    uVar1 = 8;
  }
  bVar3 = *(byte *)((long)puVar15 + uVar1);
  uVar7 = (uint)bVar3;
  if (1 < bVar3) {
    uVar17 = (uint)uVar1;
    uVar8 = 4;
    if (uVar17 < 4) {
      uVar8 = uVar17;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007553c4;
      uVar8 = (uint)(byte)*puVar15;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar15;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar15;
    }
    else {
      uVar8 = *puVar15;
    }
    uVar7 = uVar8 | bVar3 - 2 << (ulong)((uVar17 & 3) << 3);
    if (3 < uVar17) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1007553c4:
  if (uVar7 == 1) {
    uVar13 = *(undefined8 *)puVar15;
    _swift_errorRetain(uVar13);
    *puVar14 = uVar13;
    *(undefined1 *)((long)puVar14 + uVar1) = 1;
  }
  else {
    puVar5 = puVar15;
    (**(code **)(lVar16 + 0x30))(puVar15,1,lVar12);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar16 + 0x10))(puVar14,puVar15,lVar12);
      (**(code **)(lVar16 + 0x38))(puVar14,0,1,lVar12);
    }
    else {
      _memcpy(puVar14,puVar15,uVar6);
    }
    *(undefined1 *)((long)puVar14 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100755464 | FUN_100755464 */

ulong * FUN_100755464(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  ulong *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  
  lVar16 = *(long *)(param_3 + 0x10);
  lVar20 = *(long *)(lVar16 + -8);
  uVar7 = *(ulong *)(lVar20 + 0x40);
  iVar2 = *(int *)(lVar20 + 0x54);
  uVar13 = (ulong)*(uint *)(lVar20 + 0x50) & 0xf8;
  uVar12 = uVar13 | 7;
  uVar11 = ~uVar12;
  uVar15 = *param_1;
  uVar21 = uVar15;
  if (0xfffffffe < uVar15) {
    uVar21 = 0xffffffff;
  }
  uVar14 = *param_2;
  uVar1 = uVar14;
  if (0xfffffffe < uVar14) {
    uVar1 = 0xffffffff;
  }
  bVar4 = uVar14 != 0 && 1 < (int)uVar1 + 1U;
  if ((uVar15 != 0) && (1 < (int)uVar21 + 1U)) {
    if (bVar4) {
      if (iVar2 == 0) {
        uVar7 = uVar7 + 1;
      }
      if (uVar7 < 9) {
        uVar7 = 8;
      }
      goto LAB_1007556e4;
    }
    *param_1 = uVar14;
    puVar18 = (uint *)((long)param_1 + uVar12 + 8 & uVar11);
    puVar19 = (uint *)((long)param_2 + uVar12 + 8 & uVar11);
    if (iVar2 == 0) {
      uVar7 = uVar7 + 1;
    }
    uVar21 = uVar7;
    if (uVar7 < 9) {
      uVar21 = 8;
    }
    bVar3 = *(byte *)((long)puVar19 + uVar21);
    uVar8 = (uint)bVar3;
    if (1 < bVar3) {
      uVar10 = (uint)uVar21;
      uVar9 = 4;
      if (uVar10 < 4) {
        uVar9 = uVar10;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_10075572c;
        uVar9 = (uint)(byte)*puVar19;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar19;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar19;
      }
      else {
        uVar9 = *puVar19;
      }
      uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
      if (3 < uVar10) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 2;
    }
    goto LAB_10075572c;
  }
  if (bVar4) {
    puVar18 = (uint *)((long)param_1 + uVar12 + 8 & uVar11);
    if (iVar2 == 0) {
      uVar7 = uVar7 + 1;
    }
    if (uVar7 < 9) {
      uVar7 = 8;
    }
    bVar3 = *(byte *)((long)puVar18 + uVar7);
    uVar8 = (uint)bVar3;
    if (1 < bVar3) {
      uVar10 = (uint)uVar7;
      uVar9 = 4;
      if (uVar10 < 4) {
        uVar9 = uVar10;
      }
      if ((int)uVar9 < 2) {
        if (uVar9 == 0) goto LAB_100755690;
        uVar9 = (uint)(byte)*puVar18;
      }
      else if (uVar9 == 2) {
        uVar9 = (uint)(ushort)*puVar18;
      }
      else if (uVar9 == 3) {
        uVar9 = (uint)(uint3)*puVar18;
      }
      else {
        uVar9 = *puVar18;
      }
      uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar10 & 3) << 3);
      if (3 < uVar10) {
        uVar8 = uVar9;
      }
      uVar8 = uVar8 + 2;
    }
LAB_100755690:
    if (uVar8 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar18);
    }
    else {
      puVar19 = puVar18;
      (**(code **)(lVar20 + 0x30))(puVar18,1,lVar16);
      if ((int)puVar19 == 0) {
        (**(code **)(lVar20 + 8))(puVar18,lVar16);
      }
    }
LAB_1007556e4:
    puVar5 = _memcpy(param_1,param_2,uVar7 + (uVar13 + 0xf & (uVar12 ^ 0xffffffffffffffff)) + 1);
    return puVar5;
  }
  *param_1 = uVar14;
  puVar18 = (uint *)((long)param_1 + uVar12 + 8 & uVar11);
  puVar19 = (uint *)((long)param_2 + uVar12 + 8 & uVar11);
  if (puVar18 == puVar19) {
    return param_1;
  }
  if (iVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  uVar21 = uVar7;
  if (uVar7 < 9) {
    uVar21 = 8;
  }
  bVar3 = *(byte *)((long)puVar18 + uVar21);
  uVar8 = (uint)bVar3;
  uVar9 = (uint)uVar21;
  if (1 < bVar3) {
    uVar10 = 4;
    if (uVar9 < 4) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_1007557f0;
      uVar10 = (uint)(byte)*puVar18;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar18;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar18;
    }
    else {
      uVar10 = *puVar18;
    }
    uVar8 = uVar10 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar8 = uVar10;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1007557f0:
  if (uVar8 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar18);
  }
  else {
    puVar6 = puVar18;
    (**(code **)(lVar20 + 0x30))(puVar18,1,lVar16);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar20 + 8))(puVar18,lVar16);
    }
  }
  uVar8 = (uint)*(byte *)((long)puVar19 + uVar21);
  if (1 < uVar8) {
    uVar10 = 4;
    if (uVar9 < 4) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 < 2) {
      if (uVar10 == 0) goto LAB_10075572c;
      uVar10 = (uint)(byte)*puVar19;
    }
    else if (uVar10 == 2) {
      uVar10 = (uint)(ushort)*puVar19;
    }
    else if (uVar10 == 3) {
      uVar10 = (uint)(uint3)*puVar19;
    }
    else {
      uVar10 = *puVar19;
    }
    uVar8 = uVar10 | uVar8 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar8 = uVar10;
    }
    uVar8 = uVar8 + 2;
  }
LAB_10075572c:
  if (uVar8 == 1) {
    uVar17 = *(undefined8 *)puVar19;
    _swift_errorRetain(uVar17);
    *(undefined8 *)puVar18 = uVar17;
    *(byte *)((long)puVar18 + uVar21) = 1;
  }
  else {
    puVar6 = puVar19;
    (**(code **)(lVar20 + 0x30))(puVar19,1,lVar16);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar20 + 0x10))(puVar18,puVar19,lVar16);
      (**(code **)(lVar20 + 0x38))(puVar18,0,1,lVar16);
    }
    else {
      _memcpy(puVar18,puVar19,uVar7);
    }
    *(byte *)((long)puVar18 + uVar21) = 0;
  }
  return param_1;
}



/* Address: 0x1007558a8 | FUN_1007558a8 */

ulong * FUN_1007558a8(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  ulong *puVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  
  lVar12 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar12 + -8);
  uVar6 = *(ulong *)(lVar15 + 0x40);
  iVar2 = *(int *)(lVar15 + 0x54);
  uVar10 = (ulong)*(uint *)(lVar15 + 0x50) & 0xf8 | 7;
  uVar9 = ~uVar10;
  uVar11 = *param_2;
  uVar1 = uVar11;
  if (0xfffffffe < uVar11) {
    uVar1 = 0xffffffff;
  }
  if ((uVar11 != 0 && (int)uVar1 != -1) && (uVar11 == 0 || (int)uVar1 != 0)) {
    if (iVar2 == 0) {
      uVar6 = uVar6 + 1;
    }
    if (uVar6 < 9) {
      uVar6 = 8;
    }
    puVar4 = _memcpy(param_1,param_2,uVar6 + (uVar10 + 8 & uVar9) + 1);
    return puVar4;
  }
  *param_1 = uVar11;
  puVar13 = (undefined8 *)((long)param_1 + uVar10 + 8 & uVar9);
  puVar14 = (uint *)((long)param_2 + uVar10 + 8 & uVar9);
  if (iVar2 == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar1 = uVar6;
  if (uVar6 < 9) {
    uVar1 = 8;
  }
  bVar3 = *(byte *)((long)puVar14 + uVar1);
  uVar7 = (uint)bVar3;
  if (1 < bVar3) {
    uVar16 = (uint)uVar1;
    uVar8 = 4;
    if (uVar16 < 4) {
      uVar8 = uVar16;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_1007559dc;
      uVar8 = (uint)(byte)*puVar14;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*puVar14;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*puVar14;
    }
    else {
      uVar8 = *puVar14;
    }
    uVar7 = uVar8 | bVar3 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_1007559dc:
  if (uVar7 == 1) {
    *puVar13 = *(undefined8 *)puVar14;
    *(undefined1 *)((long)puVar13 + uVar1) = 1;
  }
  else {
    puVar5 = puVar14;
    (**(code **)(lVar15 + 0x30))(puVar14,1,lVar12);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar13,puVar14,lVar12);
      (**(code **)(lVar15 + 0x38))(puVar13,0,1,lVar12);
    }
    else {
      _memcpy(puVar13,puVar14,uVar6);
    }
    *(undefined1 *)((long)puVar13 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100755a74 | FUN_100755a74 */

ulong * FUN_100755a74(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  ulong *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  
  lVar17 = *(long *)(param_3 + 0x10);
  lVar20 = *(long *)(lVar17 + -8);
  uVar8 = *(ulong *)(lVar20 + 0x40);
  iVar3 = *(int *)(lVar20 + 0x54);
  uVar14 = (ulong)*(uint *)(lVar20 + 0x50) & 0xf8;
  uVar13 = uVar14 | 7;
  uVar12 = ~uVar13;
  uVar16 = *param_1;
  uVar1 = uVar16;
  if (0xfffffffe < uVar16) {
    uVar1 = 0xffffffff;
  }
  uVar15 = *param_2;
  uVar2 = uVar15;
  if (0xfffffffe < uVar15) {
    uVar2 = 0xffffffff;
  }
  bVar5 = uVar15 != 0 && 1 < (int)uVar2 + 1U;
  if ((uVar16 != 0) && (1 < (int)uVar1 + 1U)) {
    if (bVar5) {
      if (iVar3 == 0) {
        uVar8 = uVar8 + 1;
      }
      if (uVar8 < 9) {
        uVar8 = 8;
      }
      goto LAB_100755cf4;
    }
    *param_1 = uVar15;
    puVar18 = (uint *)((long)param_1 + uVar13 + 8 & uVar12);
    puVar19 = (uint *)((long)param_2 + uVar13 + 8 & uVar12);
    if (iVar3 == 0) {
      uVar8 = uVar8 + 1;
    }
    uVar1 = uVar8;
    if (uVar8 < 9) {
      uVar1 = 8;
    }
    bVar4 = *(byte *)((long)puVar19 + uVar1);
    uVar9 = (uint)bVar4;
    if (1 < bVar4) {
      uVar11 = (uint)uVar1;
      uVar10 = 4;
      if (uVar11 < 4) {
        uVar10 = uVar11;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto joined_r0x000100755e2c;
        uVar10 = (uint)(byte)*puVar19;
      }
      else if (uVar10 == 2) {
        uVar10 = (uint)(ushort)*puVar19;
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*puVar19;
      }
      else {
        uVar10 = *puVar19;
      }
      uVar9 = uVar10 | bVar4 - 2 << (ulong)((uVar11 & 3) << 3);
      if (3 < uVar11) {
        uVar9 = uVar10;
      }
      uVar9 = uVar9 + 2;
    }
    goto joined_r0x000100755e2c;
  }
  if (bVar5) {
    puVar18 = (uint *)((long)param_1 + uVar13 + 8 & uVar12);
    if (iVar3 == 0) {
      uVar8 = uVar8 + 1;
    }
    if (uVar8 < 9) {
      uVar8 = 8;
    }
    bVar4 = *(byte *)((long)puVar18 + uVar8);
    uVar9 = (uint)bVar4;
    if (1 < bVar4) {
      uVar11 = (uint)uVar8;
      uVar10 = 4;
      if (uVar11 < 4) {
        uVar10 = uVar11;
      }
      if ((int)uVar10 < 2) {
        if (uVar10 == 0) goto LAB_100755ca0;
        uVar10 = (uint)(byte)*puVar18;
      }
      else if (uVar10 == 2) {
        uVar10 = (uint)(ushort)*puVar18;
      }
      else if (uVar10 == 3) {
        uVar10 = (uint)(uint3)*puVar18;
      }
      else {
        uVar10 = *puVar18;
      }
      uVar9 = uVar10 | bVar4 - 2 << (ulong)((uVar11 & 3) << 3);
      if (3 < uVar11) {
        uVar9 = uVar10;
      }
      uVar9 = uVar9 + 2;
    }
LAB_100755ca0:
    if (uVar9 == 1) {
      _swift_errorRelease(*(undefined8 *)puVar18);
    }
    else {
      puVar19 = puVar18;
      (**(code **)(lVar20 + 0x30))(puVar18,1,lVar17);
      if ((int)puVar19 == 0) {
        (**(code **)(lVar20 + 8))(puVar18,lVar17);
      }
    }
LAB_100755cf4:
    puVar6 = _memcpy(param_1,param_2,uVar8 + (uVar14 + 0xf & (uVar13 ^ 0xffffffffffffffff)) + 1);
    return puVar6;
  }
  *param_1 = uVar15;
  puVar18 = (uint *)((long)param_1 + uVar13 + 8 & uVar12);
  puVar19 = (uint *)((long)param_2 + uVar13 + 8 & uVar12);
  if (puVar18 == puVar19) {
    return param_1;
  }
  if (iVar3 == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar1 = uVar8;
  if (uVar8 < 9) {
    uVar1 = 8;
  }
  bVar4 = *(byte *)((long)puVar18 + uVar1);
  uVar9 = (uint)bVar4;
  uVar10 = (uint)uVar1;
  if (1 < bVar4) {
    uVar11 = 4;
    if (uVar10 < 4) {
      uVar11 = uVar10;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_100755d70;
      uVar11 = (uint)(byte)*puVar18;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar18;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar18;
    }
    else {
      uVar11 = *puVar18;
    }
    uVar9 = uVar11 | bVar4 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar9 = uVar11;
    }
    uVar9 = uVar9 + 2;
  }
LAB_100755d70:
  if (uVar9 == 1) {
    _swift_errorRelease(*(undefined8 *)puVar18);
  }
  else {
    puVar7 = puVar18;
    (**(code **)(lVar20 + 0x30))(puVar18,1,lVar17);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar20 + 8))(puVar18,lVar17);
    }
  }
  bVar4 = *(byte *)((long)puVar19 + uVar1);
  uVar9 = (uint)bVar4;
  if (1 < bVar4) {
    uVar11 = 4;
    if (uVar10 < 4) {
      uVar11 = uVar10;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto joined_r0x000100755e2c;
      uVar11 = (uint)(byte)*puVar19;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar19;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar19;
    }
    else {
      uVar11 = *puVar19;
    }
    uVar9 = uVar11 | bVar4 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar9 = uVar11;
    }
    uVar9 = uVar9 + 2;
  }
joined_r0x000100755e2c:
  if (uVar9 == 1) {
    *(undefined8 *)puVar18 = *(undefined8 *)puVar19;
    *(byte *)((long)puVar18 + uVar1) = 1;
  }
  else {
    puVar7 = puVar19;
    (**(code **)(lVar20 + 0x30))(puVar19,1,lVar17);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar20 + 0x20))(puVar18,puVar19,lVar17);
      (**(code **)(lVar20 + 0x38))(puVar18,0,1,lVar17);
    }
    else {
      _memcpy(puVar18,puVar19,uVar8);
    }
    *(byte *)((long)puVar18 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100755ebc | FUN_100755ebc */

int FUN_100755ebc(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar9 = *(ulong *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  if (uVar9 < 9) {
    uVar9 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0x7ffffffe) goto LAB_100755f80;
  uVar1 = *(uint *)(lVar7 + 0x50) & 0xf8;
  uVar9 = uVar9 + ((ulong)(uVar1 + 0xf & (uVar1 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar5 = (uint)uVar9;
  uVar1 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar8 = param_2 + 0x80000003 + ~(-1 << (ulong)(uVar1 & 0x1f)) >> (ulong)(uVar1 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_100755f80;
      goto LAB_100755f40;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar9);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar9);
    }
  }
  else {
LAB_100755f40:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar9);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar1 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar1 = 4;
      if (uVar5 < 4) {
        uVar1 = uVar5;
      }
      if ((int)uVar1 < 3) {
        if (uVar1 == 1) {
          uVar9 = (ulong)(byte)*param_1;
        }
        else {
          uVar9 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar1 == 3) {
        uVar9 = (ulong)(uint3)*param_1;
      }
      else {
        uVar9 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar9 | uVar2) + 0x7ffffffe;
  }
LAB_100755f80:
  uVar9 = *param_1;
  if (0xfffffffe < uVar9) {
    uVar9 = 0xffffffff;
  }
  iVar6 = (int)uVar9;
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = iVar6 + -1;
  }
  iVar4 = 0;
  if (1 < iVar6 + 1U) {
    iVar4 = iVar3;
  }
  return iVar4;
}



/* Address: 0x100756000 | FUN_100756000 */

void FUN_100756000(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  uVar7 = *(uint *)(lVar5 + 0x50) & 0xf8;
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 9) {
    uVar6 = 8;
  }
  sVar1 = uVar6 + ((ulong)(uVar7 + 0xf & (uVar7 ^ 0xffffffff)) & 0x1f8) + 1;
  uVar7 = (uint)sVar1;
  if (param_3 < 0x7ffffffe) {
    bVar4 = 0;
  }
  else if (uVar7 < 4) {
    uVar2 = param_3 + 0x80000003 + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f)
    ;
    bVar4 = 2;
    if (0xfffe < uVar2) {
      bVar4 = 4;
    }
    if (uVar2 < 0xff) {
      bVar4 = uVar2 != 0;
    }
  }
  else {
    bVar4 = 1;
  }
  if (param_2 < 0x7ffffffe) {
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 1);
    }
  }
  else {
    param_2 = param_2 + 0x80000002;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar4 < 2) {
      if (bVar4 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar8;
      }
    }
    else if (bVar4 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar8;
    }
  }
  return;
}



/* Address: 0x1007561d4 | FUN_1007561d4 */

void FUN_1007561d4(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 < 0x7fffffff) {
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
    }
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    uVar1 = (int)uVar5 + (uVar1 + 0xf & (uVar1 ^ 0xffffffff) & 0x1f8) + 1;
    uVar4 = 0xffffffff;
    if (uVar1 < 4) {
      uVar4 = ~(-1 << (ulong)(uVar1 * 8 & 0x1f));
    }
    if (uVar1 != 0) {
      uVar4 = uVar4 & param_2 + 0x80000001;
      uVar2 = 4;
      if (uVar1 < 4) {
        uVar2 = uVar1;
      }
      _bzero(param_1,(ulong)uVar1);
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          *(char *)param_1 = (char)uVar4;
        }
        else {
          *(short *)param_1 = (short)uVar4;
        }
      }
      else if (uVar2 == 3) {
        *(short *)param_1 = (short)uVar4;
        *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
      }
      else {
        *(uint *)param_1 = uVar4;
      }
    }
  }
  return;
}



/* Address: 0x1007562c8 | FUN_1007562c8 */

void FUN_1007562c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007562d4 | FUN_1007562d4 */

void FUN_1007562d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  if (-1 < param_5) {
    _swift_retain(param_4);
    _swift_retain(param_5);
    _swift_bridgeObjectRetain(param_6);
    _swift_retain(param_1);
    _swift_retain(param_2);
    _swift_bridgeObjectRetain(param_3);
    return;
  }
  _swift_errorRetain();
  return;
}



/* Address: 0x100756344 | FUN_100756344 */

void FUN_100756344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100756358 | FUN_100756358 */

void FUN_100756358(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100756364 | FUN_100756364 */

void FUN_100756364(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c76608,param_1);
  return;
}



/* Address: 0x100756374 | FUN_100756374 */

void FUN_100756374(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c765e0,param_1);
  return;
}



/* Address: 0x100756384 | thunk_FUN_100756388 */

void thunk_FUN_100756388(undefined8 *param_1)

{
  FUN_100752c1c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



/* Address: 0x100756388 | FUN_100756388 */

void FUN_100756388(undefined8 *param_1)

{
  FUN_100752c1c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  return;
}



/* Address: 0x10075639c | thunk_FUN_1007563a0 */

undefined8 * thunk_FUN_1007563a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  FUN_1007562d4(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  return param_1;
}


