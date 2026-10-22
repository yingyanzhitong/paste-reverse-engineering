/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100675ce0 | FUN_100675ce0 */

void FUN_100675ce0(long param_1)

{
  FUN_1006754a0();
                    /* WARNING: Could not recover jumptable at 0x000100675d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100675d10 | FUN_100675d10 */

void FUN_100675d10(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d198,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x100675d44 | FUN_100675d44 */

void FUN_100675d44(undefined8 param_1,undefined8 param_2)

{
  FUN_100677d54(param_1,param_2,0x100c6d198);
  return;
}



/* Address: 0x100675d50 | FUN_100675d50 */

void FUN_100675d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2);
  FUN_100675dec(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,
                param_4,param_5);
  (**(code **)(lVar2 + 8))(param_2,param_4);
  return;
}



/* Address: 0x100675dec | FUN_100675dec */

void FUN_100675dec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  tuple2_conflict3 tVar2;
  
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0);
  *param_1 = tVar2._0_8_;
  uVar1 = 0;
  FUN_100675114(0,param_3);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  FUN_1006769d8(param_2,uVar1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x000100675e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_2,param_4);
  return;
}



/* Address: 0x100675e7c | FUN_100675e7c */

void FUN_100675e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_4 + -8);
  puVar3 = auStack_80 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_78 = param_1;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_100675114();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)puVar3 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(puVar3,param_2,param_4);
  FUN_100675f80(lVar2,puVar3,param_3,param_4,param_5,local_70,uStack_68);
  (**(code **)(lVar5 + 8))(param_2,param_4);
  if (unaff_x21 == 0) {
    (**(code **)(lVar4 + 0x20))(local_78,lVar2,lVar1);
  }
  return;
}



/* Address: 0x100675f80 | FUN_100675f80 */

/* WARNING: Removing unreachable block (ram,0x0001006767a0) */
/* WARNING: Removing unreachable block (ram,0x0001006764a0) */

void FUN_100675f80(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  __int64 _Var10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  tuple2_conflict3 tVar21;
  long local_160;
  code *local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  code *local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  code *local_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  undefined8 *local_98;
  code *local_90;
  long local_88;
  long local_80;
  long lVar5;
  
  local_e8 = *(long *)(param_5 + -8);
  uVar12 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = (long)&local_160 - uVar12;
  local_128 = local_100 - uVar12;
  lVar13 = local_128 - uVar12;
  local_f0 = param_7;
  local_e0 = param_5;
  local_c0 = (code *)lVar13;
  local_98 = param_1;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_b0 = CONCAT71(extraout_var_00,OVar3.value);
  local_b8 = *(long *)(lStack_b0 + -8);
  uVar12 = *(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_138 = lVar13 - uVar12;
  local_120 = local_138 - uVar12;
  lVar18 = local_120 - uVar12;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_a0 = CONCAT71(extraout_var_01,OVar3.value);
  local_a8 = *(long *)(lStack_a0 + -8);
  uVar12 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_148 = lVar18 - uVar12;
  local_118 = (code *)(local_148 - uVar12);
  local_90 = (code *)((long)local_118 - uVar12);
  local_80 = *(long *)(param_3 + -8);
  uVar12 = *(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_108 = (long)local_90 - uVar12;
  local_f8 = local_108 - uVar12;
  local_130 = local_f8 - uVar12;
  local_c8 = local_130 - uVar12;
  lVar20 = *(long *)(param_4 + -8);
  lVar13 = local_c8 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  local_88 = param_3;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar16 = *(long *)(lVar6 + -8);
  lVar15 = lVar13 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar20 + 0x10))(lVar13,param_2,param_4);
  Swift::Sequence::_makeIterator();
  local_150 = param_6;
  _swift_getAssociatedConformanceWitness
            (param_6,param_4,lVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  local_110 = param_6;
  Swift::IteratorProtocol::_next();
  pcVar14 = *(code **)(*(long *)(lVar5 + -8) + 0x30);
  lVar7 = lVar18;
  (*pcVar14)(lVar18,1,lVar5);
  lVar13 = local_88;
  pcVar1 = local_90;
  pcVar17 = local_c0;
  if ((int)lVar7 == 1) {
    (**(code **)(local_b8 + 8))(lVar18,lStack_b0);
    lVar13 = local_88;
    pcVar17 = local_90;
    (**(code **)(local_80 + 0x38))(local_90,1,1,local_88);
    (**(code **)(local_a8 + 8))(pcVar17,lStack_a0);
    tVar21 = Swift::Array<undefined>::_allocateUninitialized(0,lVar13);
    (**(code **)(lVar20 + 8))(param_2,param_4);
    (**(code **)(lVar16 + 8))(lVar15,lVar6);
    puVar9 = local_98;
    *local_98 = tVar21._0_8_;
    uVar8 = 0;
    FUN_100675114(0,lVar13);
    uVar11 = 1;
  }
  else {
    local_158 = pcVar14;
    local_140 = lVar20;
    local_d8 = lVar15;
    lStack_d0 = lVar6;
    FUN_100628180(local_90,lVar5,local_c0);
    lVar6 = local_80;
    lVar7 = local_e0;
    if (unaff_x21 != 0) {
      uVar8 = local_f0;
      _swift_allocError(local_e0,local_f0,0,0);
      (**(code **)(local_e8 + 0x20))(uVar8,pcVar17,lVar7);
      (**(code **)(local_140 + 8))(param_2,param_4);
      (**(code **)(lVar16 + 8))(local_d8,lStack_d0);
      return;
    }
    pcVar14 = *(code **)(local_80 + 0x38);
    (*pcVar14)(pcVar1,0,1,lVar13);
    pcVar19 = *(code **)(lVar6 + 0x20);
    (*pcVar19)(local_c8,pcVar1,lVar13);
    lVar15 = lStack_d0;
    lVar6 = local_d8;
    lVar7 = local_120;
    Swift::IteratorProtocol::_next();
    lVar18 = lVar7;
    local_160 = lVar5;
    (*local_158)(lVar7,1,lVar5);
    pcVar17 = local_118;
    if ((int)lVar18 != 1) {
      local_c0 = pcVar19;
      local_90 = pcVar14;
      FUN_100628180(local_118,local_160,local_128);
      local_120 = lVar16;
      (*local_90)(pcVar17,0,1,lVar13);
      pcVar1 = local_c0;
      lVar7 = local_130;
      (*local_c0)(local_130,pcVar17,lVar13);
      tVar21 = Swift::Array<undefined>::_allocateUninitialized(0,lVar13);
      local_128 = param_4;
      _Var10 = Swift::Sequence::get_underestimatedCount();
      uVar8 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      Swift::Array<undefined>::reserveCapacity(_Var10,uVar8);
      lVar5 = local_f8;
      pcVar17 = *(code **)(local_80 + 0x10);
      (*pcVar17)(local_f8,local_c8,lVar13);
      Swift::Array<undefined>::append(lVar5,uVar8);
      local_118 = pcVar17;
      (*pcVar17)(lVar5,lVar7,lVar13);
      Swift::Array<undefined>::append(lVar5,uVar8);
      lVar6 = local_138;
      Swift::IteratorProtocol::_next();
      lVar7 = local_160;
      lVar15 = lVar6;
      (*local_158)(lVar6,1,local_160);
      lVar5 = local_148;
      iVar4 = (int)lVar15;
      while (iVar4 != 1) {
        FUN_100628180(lVar5,lVar7,local_100);
        (*local_90)(lVar5,0,1,lVar13);
        lVar15 = local_108;
        (*pcVar1)(local_108,lVar5,lVar13);
        lVar16 = local_f8;
        (*local_118)(local_f8,lVar15,lVar13);
        pcVar1 = local_c0;
        Swift::Array<undefined>::append(lVar16,uVar8);
        (**(code **)(local_80 + 8))(lVar15,lVar13);
        Swift::IteratorProtocol::_next();
        lVar15 = lVar6;
        (*local_158)(lVar6,1,lVar7);
        iVar4 = (int)lVar15;
      }
      (**(code **)(local_140 + 8))(param_2,local_128);
      pcVar17 = *(code **)(local_80 + 8);
      (*pcVar17)(local_130,lVar13);
      (*pcVar17)(local_c8,lVar13);
      (**(code **)(local_120 + 8))(local_d8,lStack_d0);
      (**(code **)(local_b8 + 8))(lVar6,lStack_b0);
      (*local_90)(lVar5,1,1,lVar13);
      (**(code **)(local_a8 + 8))(lVar5,lStack_a0);
      puVar9 = local_98;
      *local_98 = tVar21._0_8_;
      uVar8 = 0;
      FUN_100675114(0,lVar13);
      _swift_storeEnumTagMultiPayload(puVar9,uVar8,1);
      return;
    }
    (**(code **)(local_140 + 8))(param_2,param_4);
    (**(code **)(lVar16 + 8))(lVar6,lVar15);
    (**(code **)(local_b8 + 8))(lVar7,lStack_b0);
    pcVar17 = local_118;
    (*pcVar14)(local_118,1,1,lVar13);
    (**(code **)(local_a8 + 8))(pcVar17,lStack_a0);
    puVar9 = local_98;
    (*pcVar19)(local_98,local_c8,lVar13);
    uVar8 = 0;
    FUN_100675114(0,lVar13);
    uVar11 = 0;
  }
  _swift_storeEnumTagMultiPayload(puVar9,uVar8,uVar11);
  return;
}



/* Address: 0x10067682c | thunk_FUN_100676830 */

void thunk_FUN_100676830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  tuple2_conflict3 tVar2;
  
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0,param_2);
  *param_1 = tVar2._0_8_;
  uVar1 = 0;
  FUN_100675114(0,param_2);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}



/* Address: 0x100676830 | FUN_100676830 */

void FUN_100676830(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  tuple2_conflict3 tVar2;
  
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0,param_2);
  *param_1 = tVar2._0_8_;
  uVar1 = 0;
  FUN_100675114(0,param_2);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}



/* Address: 0x100676878 | FUN_100676878 */

void FUN_100676878(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_2 + 0x10));
  FUN_1006768a8(param_1,uVar1);
  return;
}



/* Address: 0x1006768a8 | FUN_1006768a8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100676938 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006768a8(undefined8 param_1,long param_2)

{
  CollectionOfOne CVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar3 = *(long *)(lVar6 + 0x40);
  CVar1 = Swift::CollectionOfOne::typeMetadataAccessor();
  lVar7 = *(long *)(CVar1.unknown + -8);
  lVar5 = (long)(&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,lVar4);
  Swift::CollectionOfOne::init(lVar5,CVar1.unknown,lVar4);
  puVar2 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040;
  _swift_getWitnessTable
            (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040,CVar1.unknown);
  FUN_1006769d8(lVar5,param_2,CVar1.unknown,puVar2);
  (**(code **)(lVar7 + 8))(lVar5,CVar1.unknown);
  return;
}



/* Address: 0x100676990 | FUN_100676990 */

void FUN_100676990(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_2 + 0x10));
  FUN_1006769d8(param_1,uVar1,param_3,param_4);
  return;
}



/* Address: 0x1006769d8 | FUN_1006769d8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100676fd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006769d8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  Optional OVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  __int64 _Var5;
  __int64 _Var6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  tuple2_conflict3 tVar17;
  long local_110 [4];
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  code *local_b0;
  long local_a8;
  
  lVar8 = *(long *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_c8 = CONCAT71((int7)((ulong)param_1 >> 8),OVar1.value);
  local_d0 = *(long *)(local_c8 + -8);
  uVar7 = *(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110[3] = (long)local_110 - uVar7;
  local_e8 = local_110[3] - uVar7;
  local_b8 = local_e8 - uVar7;
  lVar16 = *(long *)(param_3 + -8);
  lVar12 = local_b8 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_a8 = *(long *)(lVar3 + -8);
  uVar7 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = lVar12 - uVar7;
  lVar15 = local_d8 - uVar7;
  lVar14 = *(long *)(lVar8 + -8);
  uVar7 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_110[2] = lVar15 - uVar7;
  local_f0 = local_110[2] - uVar7;
  local_e0 = local_f0 - uVar7;
  local_c0 = local_e0 - uVar7;
  lVar9 = local_c0 - uVar7;
  local_b0 = *(code **)(param_2 + -8);
  puVar10 = (undefined8 *)(lVar9 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(local_b0 + 0x10))(puVar10);
  puVar4 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,param_2);
  if ((int)puVar4 == 1) {
    local_c0 = lVar3;
    local_b8 = param_3;
    local_110[1] = lVar14;
    uVar13 = *puVar10;
    lVar9 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,lVar9);
    bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
    lVar3 = local_b8;
    if (bVar2) {
      local_110[0] = lVar9;
      (**(code **)(lVar16 + 0x10))(lVar12,param_1,local_b8);
      lVar9 = local_d8;
      Swift::Sequence::_makeIterator();
      lVar14 = local_c0;
      _swift_getAssociatedConformanceWitness
                (param_4,lVar3,local_c0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      lVar12 = local_e8;
      Swift::IteratorProtocol::_next();
      lVar3 = local_110[1];
      pcVar11 = *(code **)(local_110[1] + 0x30);
      lVar15 = lVar12;
      (*pcVar11)(lVar12,1,lVar8);
      if ((int)lVar15 == 1) {
        (**(code **)(local_a8 + 8))(lVar9,lVar14);
        _swift_bridgeObjectRelease(uVar13);
        pcVar11 = *(code **)(local_d0 + 8);
        goto LAB_100676d60;
      }
      (**(code **)(local_b0 + 8))(unaff_x20,param_2);
      local_b0 = *(code **)(lVar3 + 0x20);
      (*local_b0)(local_f0,lVar12,lVar8);
      lVar3 = local_110[3];
      local_e8 = param_4;
      Swift::IteratorProtocol::_next();
      lVar12 = lVar3;
      (*pcVar11)(lVar3,1,lVar8);
      if ((int)lVar12 == 1) {
        (**(code **)(local_a8 + 8))(lVar9,lVar14);
        _swift_bridgeObjectRelease(uVar13);
        (**(code **)(local_d0 + 8))(lVar3,local_c8);
        (*local_b0)(unaff_x20,local_f0,lVar8);
        uVar13 = 0;
        goto LAB_100676ed8;
      }
      (*local_b0)(local_110[2],lVar3,lVar8);
      _Var5 = Swift::Array<undefined>::get_count(lVar12,lVar8);
      _Var6 = Swift::Sequence::get_underestimatedCount();
      lVar3 = local_110[0];
      if (SCARRY8(_Var5,_Var6)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1006770ac);
        (*pcVar11)();
      }
      Swift::Array<undefined>::reserveCapacity(_Var5 + _Var6,local_110[0]);
      lVar15 = local_e0;
      lVar14 = local_f0;
      lVar9 = local_110[1];
      pcVar11 = *(code **)(local_110[1] + 0x10);
      (*pcVar11)(local_e0,local_f0,lVar8);
      Swift::Array<undefined>::append(lVar15,lVar3);
      lVar12 = local_110[2];
      (*pcVar11)(lVar15,local_110[2],lVar8);
      Swift::Array<undefined>::append(lVar15,lVar3);
      lVar16 = local_c0;
      lVar15 = local_d8;
      FUN_100677db0(local_d8,lVar3,local_c0,local_e8);
      pcVar11 = *(code **)(lVar9 + 8);
      (*pcVar11)(lVar12,lVar8);
      (*pcVar11)(lVar14,lVar8);
      (**(code **)(local_a8 + 8))(lVar15,lVar16);
    }
    else {
      (**(code **)(local_b0 + 8))(unaff_x20,param_2);
      lVar3 = local_b8;
      (**(code **)(lVar16 + 0x10))(lVar12,param_1,local_b8);
      Swift::Array<undefined>::_append(lVar12,lVar9,lVar3,param_4);
    }
    *unaff_x20 = uVar13;
  }
  else {
    pcVar11 = *(code **)(lVar14 + 0x20);
    (*pcVar11)(lVar9,puVar10,lVar8);
    (**(code **)(lVar16 + 0x10))(lVar12,param_1,param_3);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    lVar12 = local_b8;
    local_d8 = param_4;
    Swift::IteratorProtocol::_next();
    lVar16 = lVar12;
    (**(code **)(lVar14 + 0x30))(lVar12,1,lVar8);
    if ((int)lVar16 == 1) {
      (**(code **)(local_a8 + 8))(lVar15,lVar3);
      (**(code **)(lVar14 + 8))(lVar9,lVar8);
      pcVar11 = *(code **)(local_d0 + 8);
LAB_100676d60:
      (*pcVar11)(lVar12,local_c8);
      return;
    }
    local_c8 = lVar9;
    (**(code **)(local_b0 + 8))(unaff_x20,param_2);
    (*pcVar11)(local_c0,lVar12,lVar8);
    tVar17 = Swift::Array<undefined>::_allocateUninitialized(0,lVar8);
    *unaff_x20 = tVar17._0_8_;
    _Var5 = Swift::Sequence::get_underestimatedCount();
    if (SCARRY8(_Var5,1)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1006770a8);
      (*pcVar11)();
    }
    uVar13 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Array<undefined>::reserveCapacity(_Var5 + 1,uVar13);
    lVar12 = local_c8;
    lVar9 = local_e0;
    pcVar11 = *(code **)(lVar14 + 0x10);
    (*pcVar11)(local_e0,local_c8,lVar8);
    Swift::Array<undefined>::append(lVar9,uVar13);
    lVar16 = local_c0;
    (*pcVar11)(lVar9,local_c0,lVar8);
    Swift::Array<undefined>::append(lVar9,uVar13);
    FUN_100677db0(lVar15,uVar13,lVar3,local_d8);
    pcVar11 = *(code **)(lVar14 + 8);
    (*pcVar11)(lVar16,lVar8);
    (**(code **)(local_a8 + 8))(lVar15,lVar3);
    (*pcVar11)(lVar12,lVar8);
  }
  uVar13 = 1;
LAB_100676ed8:
  _swift_storeEnumTagMultiPayload(unaff_x20,param_2,uVar13);
  return;
}



/* Address: 0x1006770ac | FUN_1006770ac */

void FUN_1006770ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_3 + 0x10));
  FUN_1006770ec(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1006770ec | FUN_1006770ec */

void FUN_1006770ec(undefined8 param_1,long param_2,long param_3,undefined8 param_4,void *param_5)

{
  long lVar1;
  StaticString file;
  undefined1 *line;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  _StringGuts _Var5;
  char *pcVar6;
  undefined8 *unaff_x20;
  char *pcVar7;
  long lVar8;
  tuple2_conflict3 tVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long alStack_70 [2];
  StaticString local_60;
  undefined1 *local_58;
  
  lVar8 = *(long *)(param_3 + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var5.unknown = (undefined *)((long)alStack_70 + lVar1);
  (**(code **)(lVar8 + 0x10))(_Var5.unknown);
  puVar3 = (undefined8 *)_Var5.unknown;
  _swift_getEnumCaseMultiPayload(_Var5.unknown,param_3);
  if ((int)puVar3 == 1) {
    local_60.unknown = *(undefined **)_Var5.unknown;
    uVar4 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Array<undefined>::remove(param_1,param_2,uVar4);
    FUN_100677f10();
    _swift_bridgeObjectRelease(local_60.unknown);
  }
  else {
    pcVar7 = *(char **)(param_3 + 0x10);
    pcVar6 = pcVar7;
    (**(code **)(*(long *)(pcVar7 + -8) + 0x20))(param_1);
    if (param_2 != 0) {
      local_60.unknown = (undefined *)0x0;
      local_58 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var5);
      _swift_bridgeObjectRelease(local_58);
      local_60.unknown = (undefined *)0x207865646e69;
      local_58 = &DAT_e600000000000000;
      alStack_70[1] = param_2;
      SVar10 = Swift::CustomStringConvertible::get_description();
      SVar12.bridgeObject = param_5;
      SVar12.str = pcVar6;
      Swift::String::append(SVar10,SVar12);
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
      SVar10.bridgeObject = (void *)0xee0073646e756f62;
      SVar10.str = (char *)0x20666f2074756f20;
      SVar13.bridgeObject = param_5;
      SVar13.str = pcVar6;
      Swift::String::append(SVar10,SVar13);
      line = local_58;
      file.unknown = local_60.unknown;
      *(undefined4 *)((long)auStack_78 + lVar1) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar1) = 0x130;
      SVar11.bridgeObject = (void *)0x2;
      SVar11.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,file,(__uint64)line,0xdae790);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006772d4);
      (*pcVar2)();
    }
    (**(code **)(lVar8 + 8))();
    tVar9 = Swift::Array<undefined>::_allocateUninitialized(0,pcVar7);
    *unaff_x20 = tVar9._0_8_;
    _swift_storeEnumTagMultiPayload();
  }
  return;
}



/* Address: 0x1006772d4 | FUN_1006772d4 */

void FUN_1006772d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100677320(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100677320 | FUN_100677320 */

void FUN_100677320(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  long lVar8;
  tuple2_conflict3 tVar9;
  undefined8 uStack_70;
  undefined8 local_58;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar4 + -8);
  uVar7 = (long)&uStack_70 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_3 + -8);
  puVar5 = (undefined8 *)(uVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar6 + 0x10))(puVar5);
  puVar1 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,param_3);
  if ((int)puVar1 == 1) {
    local_58 = *puVar5;
    uVar2 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar2);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar2
              );
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
    FUN_100677f10(unaff_x20,&stack0xffffffffffffffa8,lVar4);
    _swift_bridgeObjectRelease(local_58);
  }
  else {
    (**(code **)(lVar8 + 0x20))(uVar7,puVar5,lVar4);
    uVar3 = uVar7;
    (*param_1)();
    if ((unaff_x21 == 0) && ((uVar3 & 1) != 0)) {
      (**(code **)(lVar6 + 8))(unaff_x20,param_3);
      tVar9 = Swift::Array<undefined>::_allocateUninitialized(0,lVar4);
      (**(code **)(lVar8 + 8))(uVar7,lVar4);
      *unaff_x20 = tVar9._0_8_;
      _swift_storeEnumTagMultiPayload(unaff_x20,param_3,1);
    }
    else {
      (**(code **)(lVar8 + 8))(uVar7,lVar4);
    }
  }
  return;
}



/* Address: 0x1006774e4 | FUN_1006774e4 */

void FUN_1006774e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100677530(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100677530 | FUN_100677530 */

void FUN_100677530(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 auStack_60 [2];
  
  lVar4 = *(long *)(param_3 + -8);
  puVar3 = (undefined8 *)((long)auStack_60 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar4 + 0x10))(puVar3);
  puVar1 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,param_3);
  if ((int)puVar1 == 1) {
    auStack_60[1] = *puVar3;
    uVar2 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar2);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar2);
    (extension_Swift)::Swift::MutableCollection::_sort();
    FUN_100677f10();
    _swift_bridgeObjectRelease(auStack_60[1]);
  }
  else {
    (**(code **)(lVar4 + 8))(puVar3,param_3);
  }
  return;
}



/* Address: 0x100677650 | FUN_100677650 */

void FUN_100677650(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  FUN_100675160(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  return;
}



/* Address: 0x10067765c | FUN_10067765c */

void FUN_10067765c(Hasher param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  Hasher HVar2;
  IndexingIterator IVar3;
  __uint64 _Var4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar7 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_80 - uVar6;
  lVar9 = lVar8 - uVar6;
  HVar2.unknown = (undefined *)&TargetResilientWitness_100c6d40c.Implementation;
  local_70 = param_3;
  _swift_getWitnessTable();
  IVar3 = Swift::IndexingIterator::typeMetadataAccessor();
  local_80 = *(long *)(IVar3.unknown + -8);
  lVar11 = lVar9 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var4 = (extension_Swift)::Swift::Collection::get_count();
  Swift::Hasher::_combine(_Var4,HVar2);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(lVar11);
  iVar1 = *(int *)(IVar3.unknown + 0x24);
  local_78 = IVar3.unknown;
  *(undefined8 *)(lVar11 + iVar1) = 0;
  lVar12 = param_2;
  FUN_100675708();
  if (lVar12 != 0) {
    lVar12 = 0;
    do {
      FUN_1006757ac(lVar9,lVar12,param_2);
      local_68 = lVar12;
      _swift_getWitnessTable(0x100c6d360,param_2);
      (extension_Swift)::Swift::RandomAccessCollection::_index();
      (**(code **)(lVar10 + 0x20))(lVar8,lVar9,lVar7);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar10 + 8))(lVar8,lVar7);
      lVar5 = param_2;
      FUN_100675708();
      lVar12 = *(long *)(lVar11 + iVar1);
    } while (lVar12 != lVar5);
  }
  (**(code **)(local_80 + 8))(lVar11,local_78);
  return;
}



/* Address: 0x100677810 | FUN_100677810 */

void FUN_100677810(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10067781c | FUN_10067781c */

void FUN_10067781c(undefined8 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_10067765c(HVar1.unknown,param_1,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100677870 | FUN_100677870 */

void FUN_100677870(undefined8 param_1,long param_2)

{
  FUN_10067781c(param_1,*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x100677878 | FUN_100677878 */

void FUN_100677878(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10067765c(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100677880 | FUN_100677880 */

void FUN_100677880(void)

{
  FUN_10067788c();
  return;
}



/* Address: 0x10067788c | FUN_10067788c */

void FUN_10067788c(__int64 param_1,undefined8 param_2,long param_3,code *param_4)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  (*param_4)(HVar1.unknown,param_2,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006778e0 | FUN_1006778e0 */

void FUN_1006778e0(__int64 param_1)

{
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x1006778ec | FUN_1006778ec */

void FUN_1006778ec(void)

{
  (extension_Swift)::Swift::RandomAccessCollection::_distance();
  return;
}



/* Address: 0x1006778f8 | FUN_1006778f8 */

void FUN_1006778f8(void)

{
  _swift_getWitnessTable(0x100c6d360);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x100677948 | FUN_100677948 */

void FUN_100677948(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x10067795c | FUN_10067795c */

void FUN_10067795c(__int64 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c6d360,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x1006779c0 | FUN_1006779c0 */

void FUN_1006779c0(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getWitnessTable(0x100c6d360,param_4);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x100677a24 | FUN_100677a24 */

void FUN_100677a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c6d360,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_distance();
  return;
}



/* Address: 0x100677a78 | FUN_100677a78 */

void FUN_100677a78(undefined8 *param_1,undefined8 param_2)

{
  FUN_100675708();
  *param_1 = param_2;
  return;
}



/* Address: 0x100677a9c | FUN_100677a9c */

code * FUN_100677a9c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x2e2);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_100677b10();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10026c674;
}



/* Address: 0x100677b10 | FUN_100677b10 */

undefined1  [16] FUN_100677b10(long *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  *param_1 = *(long *)(param_3 + 0x10);
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x291);
  }
  param_1[2] = (long)pvVar1;
  FUN_1006757ac(pvVar1,param_2,param_3);
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = thunk_FUN_1006333c4;
  return auVar3;
}



/* Address: 0x100677b94 | thunk_FUN_1006333c4 */

void thunk_FUN_1006333c4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  (**(code **)(param_1[1] + 8))(pvVar1,*param_1);
  _free(pvVar1);
  return;
}



/* Address: 0x100677b98 | $$(extension_in_Swift):Swift.Collection<_where_A.SubSequence_==_Swift.Slice<A>>.subscript.getter_:_(Swift.Range<A.Index>)_->_Swift.Slice<A> */

void ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
               (void)

{
  ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
            ();
  return;
}



/* Address: 0x100677b9c | FUN_100677b9c */

void FUN_100677b9c(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d360,param_1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x100677be8 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::get_isEmpty */

bool (extension_Swift)::Swift::Collection::get_isEmpty(void)

{
  bool bVar1;
  
  bVar1 = get_isEmpty();
  return bVar1;
}



/* Address: 0x100677bec | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::get_count */

__int64 (extension_Swift)::Swift::Collection::get_count(void)

{
  __int64 _Var1;
  
  _Var1 = get_count();
  return _Var1;
}



/* Address: 0x100677bf0 | FUN_100677bf0 */

void FUN_100677bf0(void)

{
  _swift_getWitnessTable(0x100c6d360);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x100677c40 | FUN_100677c40 */

void FUN_100677c40(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x100677c54 | FUN_100677c54 */

void FUN_100677c54(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 local_38;
  
  local_38 = *param_1;
  _swift_getWitnessTable(param_4);
  (*param_5)(param_1,&local_38,param_2,param_4,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730);
  return;
}



/* Address: 0x100677cb4 | FUN_100677cb4 */

void FUN_100677cb4(long param_1,long param_2)

{
  IndexingIterator IVar1;
  
  (**(code **)(*(long *)(param_2 + -8) + 0x20))(param_1);
  _swift_getWitnessTable(0x100c6d410,param_2);
  IVar1 = Swift::IndexingIterator::typeMetadataAccessor();
  *(undefined8 *)(param_1 + *(int *)(IVar1.unknown + 0x24)) = 0;
  return;
}



/* Address: 0x100677d14 | FUN_100677d14 */

void FUN_100677d14(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d410,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x100677d48 | FUN_100677d48 */

void FUN_100677d48(undefined8 param_1,undefined8 param_2)

{
  FUN_100677d54(param_1,param_2,0x100c6d410);
  return;
}



/* Address: 0x100677d54 | FUN_100677d54 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100677d80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100677d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar1;
  
  _swift_getWitnessTable(param_3,param_1);
  CVar1 = Swift::__copyCollectionToContiguousArray(param_3,param_1,param_3);
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return CVar1.unknown;
}



/* Address: 0x100677db0 | FUN_100677db0 */

void FUN_100677db0(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long local_88;
  long lStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar7 = *(long *)(param_2 + 0x10);
  local_70 = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lStack_80 = CONCAT71(extraout_var,OVar1.value);
  local_88 = *(long *)(lStack_80 + -8);
  puVar9 = auStack_90 + -(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar7 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)puVar9 - uVar3;
  lVar8 = lVar10 - uVar3;
  local_78 = param_1;
  Swift::IteratorProtocol::_next();
  pcVar5 = *(code **)(lVar4 + 0x30);
  puVar2 = puVar9;
  (*pcVar5)(puVar9,1,lVar7);
  if ((int)puVar2 != 1) {
    pcVar6 = *(code **)(lVar4 + 0x20);
    do {
      (*pcVar6)(lVar8,puVar9,lVar7);
      (**(code **)(lVar4 + 0x10))(lVar10,lVar8,lVar7);
      Swift::Array<undefined>::append(lVar10,local_70);
      (**(code **)(lVar4 + 8))(lVar8,lVar7);
      Swift::IteratorProtocol::_next();
      puVar2 = puVar9;
      (*pcVar5)(puVar9,1,lVar7);
    } while ((int)puVar2 != 1);
  }
  (**(code **)(local_88 + 8))(puVar9,lStack_80);
  return;
}



/* Address: 0x100677f10 | FUN_100677f10 */

void FUN_100677f10(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  FUN_100675114(0,param_3);
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar2 = *param_2;
  *puVar3 = uVar2;
  _swift_storeEnumTagMultiPayload(puVar3,lVar1,1);
  pcVar5 = *(code **)(lVar4 + 0x28);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar5)(param_1,puVar3,lVar1);
  return;
}



/* Address: 0x100677fa4 | FUN_100677fa4 */

void FUN_100677fa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6d030,param_1,&local_18);
  return;
}



/* Address: 0x100677fdc | FUN_100677fdc */

void FUN_100677fdc(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d138,param_1);
  return;
}



/* Address: 0x100677fec | FUN_100677fec */

void FUN_100677fec(void)

{
  undefined *puVar1;
  
  if (DAT_100fd9ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fd9ea8 = puVar1;
  return;
}



/* Address: 0x10067802c | FUN_10067802c */

void FUN_10067802c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d0e8;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0,param_1,
             &local_28);
  return;
}



/* Address: 0x100678074 | FUN_100678074 */

void FUN_100678074(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d198,param_1);
  return;
}



/* Address: 0x100678084 | FUN_100678084 */

void FUN_100678084(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d138;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98,param_1,
             &local_28);
  return;
}



/* Address: 0x1006780cc | FUN_1006780cc */

void FUN_1006780cc(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d278,param_1);
  return;
}



/* Address: 0x1006780dc | FUN_1006780dc */

void FUN_1006780dc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fd9ea0;
    FUN_1000f8b08(&DAT_100fd9ea0,0x100c6d0e0);
    puVar2 = puVar1;
    FUN_100677fec();
    local_40 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
    puStack_38 = puVar2;
    _swift_getWitnessTable(param_2,puVar1,&local_40);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100678150 | FUN_100678150 */

void FUN_100678150(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d0b0,param_1);
  return;
}



/* Address: 0x100678160 | FUN_100678160 */

void FUN_100678160(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(0x100c6d2e0,param_1,&local_18);
  return;
}



/* Address: 0x100678198 | FUN_100678198 */

void FUN_100678198(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d3b0,param_1);
  return;
}



/* Address: 0x1006781a8 | FUN_1006781a8 */

void FUN_1006781a8(void)

{
  FUN_1006780dc(&DAT_100fd9e98,
                PTR__Swift__Swift__Range<undefined>_>Swift__RandomAccessCollection_100eac960);
  return;
}



/* Address: 0x1006781cc | FUN_1006781cc */

void FUN_1006781cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d360;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0,param_1,
             &local_28);
  return;
}


