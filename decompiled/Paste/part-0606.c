/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100681318 | FUN_100681318 */

void FUN_100681318(undefined8 param_1,long param_2)

{
  bool bVar1;
  ManagedBufferPointer MVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  long local_80 [2];
  long local_70;
  long lStack_68;
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  lVar5 = *(long *)(param_2 + 0x10);
  FUN_1006035b0(local_80,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,lVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_80[0] < 1) {
    uVar4 = 1;
  }
  else {
    MVar2 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar1 = Swift::ManagedBufferPointer::isUniqueReference(MVar2);
    if (!bVar1) {
      FUN_1006844f0(0,lVar5);
      FUN_1006840e8();
    }
    uVar4 = *unaff_x20;
    puStack_58 = auStack_50;
    local_60 = FUN_100680644;
    puVar3 = &DAT_100fda040;
    local_70 = lVar5;
    lStack_68 = lVar5;
    local_40 = lVar5;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(param_1,FUN_10067f5fc,local_80,uVar4,&DAT_100ef5140,lVar5,puVar3,lVar5,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_88
                 );
    uVar4 = 0;
  }
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,uVar4,1,lVar5);
  return;
}



/* Address: 0x100681450 | FUN_100681450 */

void FUN_100681450(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ManagedBufferPointer MVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [8];
  long local_b0 [2];
  undefined8 local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  FUN_1006035b0(local_b0,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar7,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = local_b0[0] + 1;
  if (!SCARRY8(local_b0[0],1)) {
    MVar4 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar3 = Swift::ManagedBufferPointer::isUniqueReference(MVar4);
    FUN_1006035b0(local_b0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar7,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_b0[0] < lVar1) || (!bVar3)) {
      uVar5 = 0;
      FUN_1006844f0(0,uVar7);
      FUN_100684260(bVar3,lVar1,0,uVar5);
    }
    uVar5 = *unaff_x20;
    pcStack_98 = FUN_10068269c;
    local_90 = auStack_80;
    puVar6 = &DAT_100fda040;
    local_a0 = uVar7;
    local_70 = uVar7;
    uStack_68 = param_1;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,local_b0,uVar5,&DAT_100ef5140,uVar7,puVar6,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006815d8);
  (*pcVar2)();
}



/* Address: 0x1006815d8 | FUN_1006815d8 */

void FUN_1006815d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  __int64 _Var4;
  ManagedBufferPointer MVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [8];
  char local_d0 [16];
  undefined8 local_c0;
  code *pcStack_b8;
  long *local_b0;
  long local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  local_90 = uVar8;
  uStack_88 = param_3;
  local_80 = param_4;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if ((local_d0[0] == '\x01') && (_Var4 = Swift::Collection::get_count(), 0 < _Var4)) {
    FUN_1006035b0(local_a0,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar8,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar1 = local_a0[0] + _Var4;
    if (SCARRY8(local_a0[0],_Var4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006817e0);
      (*pcVar2)();
    }
    MVar5 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar3 = Swift::ManagedBufferPointer::isUniqueReference(MVar5);
    FUN_1006035b0(local_a0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar8,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_a0[0] < lVar1) || (!bVar3)) {
      uVar6 = 0;
      FUN_1006844f0(0,uVar8);
      FUN_100684260(bVar3,lVar1,0,uVar6);
    }
    uVar6 = *unaff_x20;
    pcStack_b8 = FUN_1006826f8;
    local_b0 = local_a0;
    puVar7 = &DAT_100fda040;
    local_c0 = uVar8;
    local_90 = uVar8;
    uStack_88 = param_3;
    local_80 = param_4;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,local_d0,uVar6,&DAT_100ef5140,uVar8,puVar7,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_d8
                 );
  }
  return;
}



/* Address: 0x1006817e0 | FUN_1006817e0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100681ce0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006817e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  UVar3;
  long lVar4;
  undefined8 uVar5;
  Optional OVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  PartialRangeUpTo PVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined1 auStack_230 [16];
  long local_220;
  long local_218;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_210;
  undefined *local_208;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_200;
  undefined8 local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1b0;
  code *local_1a8;
  long local_1a0;
  code *local_198;
  undefined *local_190;
  undefined *local_188;
  long local_180;
  long local_178;
  undefined8 local_170;
  undefined1 *local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  char local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  char local_70;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar18 = param_7;
  _swift_getAssociatedConformanceWitness
            (param_7,param_6,lVar8,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_188 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_1f0 = *(long *)(local_188 + -8);
  lVar15 = *(long *)(local_1f0 + 0x40);
  uVar9 = 0xff;
  local_168 = auStack_230 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,puVar2,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar11 = param_7;
  _swift_getAssociatedConformanceWitness
            (param_7,param_6,uVar9,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  local_170 = *(undefined8 *)(lVar11 + 8);
  lVar10 = 0;
  local_180 = lVar11;
  _swift_getAssociatedTypeWitness
            (0,local_170,uVar9,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_1e0 = *(long *)(lVar10 + -8);
  uVar16 = *(long *)(local_1e0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_210.unknown = auStack_230 + -(lVar15 + 0xfU & 0xfffffffffffffff0) + -uVar16;
  puVar17 = local_210.unknown + -uVar16;
  lVar11 = 0;
  local_200.unknown = puVar17;
  local_1d8 = lVar10;
  _swift_checkMetadataState(0,uVar9);
  local_160 = *(long *)(lVar11 + -8);
  uVar16 = *(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = (long)puVar17 - uVar16;
  local_1e8 = lVar20 - uVar16;
  lVar10 = local_1e8 - uVar16;
  local_1c8 = lVar10;
  local_178 = lVar11;
  local_150 = lVar18;
  PVar12 = Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_1d0 = *(long *)(PVar12.unknown + -8);
  local_148 = lVar10 - (*(long *)(local_1d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1c0 = *(long *)(lVar8 + -8);
  uVar16 = *(long *)(local_1c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_158 = local_148 - uVar16;
  lVar18 = local_158 - uVar16;
  local_190 = PVar12.unknown;
  local_130 = lVar18;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_138 = CONCAT71((int7)((ulong)PVar12.unknown >> 8),OVar6.value);
  local_140 = *(long *)(local_138 + -8);
  uVar16 = *(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_218 = lVar18 - uVar16;
  local_208 = (undefined *)(local_218 - uVar16);
  pcVar19 = (code *)(local_208 + -uVar16);
  uVar9 = *(undefined8 *)(param_7 + 8);
  lVar11 = 0;
  local_198 = pcVar19;
  _swift_getAssociatedTypeWitness
            (0,uVar9,param_6,puVar2,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_1a8 = *(code **)(lVar11 + -8);
  local_1b0.unknown = pcVar19 + -(*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(param_6 + -8);
  uVar16 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1b8 = (long)local_1b0.unknown - uVar16;
  lVar15 = local_1b8 - uVar16;
  local_1a0 = lVar11;
  local_128 = param_2;
  FUN_100686198(&local_90,param_1,param_2,param_5);
  lVar18 = 0;
  if (local_70 != '\x01') {
    lVar18 = local_78;
  }
  if (SCARRY8(local_88,lVar18)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x100682428);
    (*pcVar19)();
  }
  local_120 = param_1;
  if (param_3 < local_88 + lVar18) {
    if (local_70 == '\x01') {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10068243c);
        (*pcVar19)();
      }
      lVar11 = local_88;
      if (param_3 <= local_88) {
        lVar11 = param_3;
      }
      lVar18 = local_88 - lVar11;
      local_80 = local_90;
      local_78 = local_88;
      if (SBORROW8(local_88,lVar11)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100682440);
        (*pcVar19)();
      }
    }
    else {
      lVar18 = local_78 - param_3;
      if (local_78 < param_3) {
        lVar18 = param_3 - local_78;
        if (SBORROW8(param_3,local_78)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100682444);
          (*pcVar19)();
        }
        if (lVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10068244c);
          (*pcVar19)();
        }
        local_1f8 = local_80;
        lVar1 = local_88;
        if (lVar18 <= local_88) {
          lVar1 = lVar18;
        }
        if (SBORROW8(local_88,lVar1)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100682450);
          (*pcVar19)();
        }
        local_220 = lVar20;
        FUN_100682798(local_88 - lVar1,local_88,local_90,local_88,param_5);
        local_70 = local_78 == 0;
        uVar5 = 0;
        if (!(bool)local_70) {
          uVar5 = local_1f8;
        }
        goto LAB_100681bf4;
      }
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100682448);
        (*pcVar19)();
      }
    }
    FUN_100682798(lVar18,local_78,local_80,local_78,param_5);
    pcVar19 = *(code **)(lVar10 + 0x10);
    (*pcVar19)(lVar15,param_4,param_6);
LAB_100682270:
    Swift::Sequence::_withContiguousStorageIfAvailable();
    lVar20 = local_120;
    if (local_98 == '\x01') {
      (*pcVar19)(local_1b8,lVar15,param_6);
      UVar3.unknown = local_1b0.unknown;
      Swift::Sequence::__copyContents(local_1b0);
      lVar18 = local_1a0;
      _swift_getAssociatedConformanceWitness
                (uVar9,param_6,local_1a0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      pcVar19 = local_198;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_1a8 + 8))(UVar3.unknown,lVar18);
      (**(code **)(lVar10 + 8))(lVar15,param_6);
      pcVar14 = pcVar19;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(pcVar19,1,param_5);
      (**(code **)(local_140 + 8))(pcVar19,local_138);
      lVar20 = local_120;
      if ((int)pcVar14 != 1) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1006823b0);
        (*pcVar19)();
      }
      goto LAB_1006823c8;
    }
  }
  else {
    local_1f8 = local_80;
    local_220 = lVar20;
    uVar5 = local_1f8;
LAB_100681bf4:
    local_1f8 = uVar5;
    pcVar19 = *(code **)(lVar10 + 0x10);
    (*pcVar19)(lVar15,param_4,param_6);
    lVar18 = local_158;
    if (local_70 == '\x01') goto LAB_100682270;
    Swift::Collection::_get_startIndex();
    lVar4 = local_130;
    Swift::Collection::_index(lVar18);
    lVar20 = local_1c0;
    local_198 = *(code **)(local_1c0 + 8);
    (*local_198)(lVar18,lVar8);
    lVar1 = local_150;
    uVar9 = *(undefined8 *)(local_150 + 8);
    bVar7 = Swift::Equatable::___infix(lVar4,lVar4,lVar8);
    if (!bVar7) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100682434);
      (*pcVar19)();
    }
    local_1a8 = *(code **)(lVar20 + 0x10);
    (*local_1a8)(lVar18,lVar4,lVar8);
    lVar20 = local_148;
    Swift::PartialRangeUpTo::init(local_148,lVar11,lVar8,lVar1);
    puVar2 = local_190;
    puVar13 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
               local_190);
    lVar18 = local_1c8;
    local_1a0 = param_7;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_1c8,lVar20,param_6,puVar2,param_7,puVar13);
    uVar5 = local_170;
    lVar11 = local_178;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      (**(code **)(local_160 + 0x10))(local_1e8,lVar18,lVar11);
      UVar3.unknown = local_200.unknown;
      Swift::Sequence::__copyContents(local_200);
      lVar20 = local_1d8;
      _swift_getAssociatedConformanceWitness
                (uVar5,lVar11,local_1d8,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      puVar2 = local_208;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_1e0 + 8))(UVar3.unknown,lVar20);
      pcVar19 = *(code **)(local_160 + 8);
      (*pcVar19)(lVar18,lVar11);
      (**(code **)(local_1d0 + 8))(local_148,local_190);
      puVar13 = puVar2;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(puVar2,1);
      (**(code **)(local_140 + 8))(puVar2,local_138);
      if ((int)puVar13 != 1) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100681ec4);
        (*pcVar19)();
      }
    }
    else {
      pcVar19 = *(code **)(local_160 + 8);
      (*pcVar19)(lVar18,lVar11);
      (**(code **)(local_1d0 + 8))(local_148,puVar2);
    }
    lVar20 = local_120;
    lVar11 = local_130;
    puVar17 = local_168;
    bVar7 = Swift::Equatable::___infix(local_130,local_130,lVar8,uVar9);
    lVar18 = local_1a0;
    if (!bVar7) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x100682438);
      (*pcVar19)();
    }
    (*local_1a8)(local_158,lVar11,lVar8);
    Swift::PartialRangeFrom::init(puVar17,puVar13,lVar8,local_150);
    puVar2 = local_188;
    puVar13 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
               local_188);
    lVar11 = local_220;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_220,puVar17,param_6,puVar2,lVar18,puVar13);
    uVar9 = local_170;
    lVar18 = local_178;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      (**(code **)(local_160 + 0x10))(local_1e8,lVar11,lVar18);
      UVar3.unknown = local_210.unknown;
      Swift::Sequence::__copyContents(local_210);
      lVar4 = local_1d8;
      _swift_getAssociatedConformanceWitness
                (uVar9,lVar18,local_1d8,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      lVar1 = local_218;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_1e0 + 8))(UVar3.unknown,lVar4);
      (*pcVar19)(lVar11,lVar18);
      (**(code **)(local_1f0 + 8))(local_168,local_188);
      (*local_198)(local_130,lVar8);
      (**(code **)(lVar10 + 8))(lVar15,param_6);
      lVar18 = lVar1;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(lVar1,1,param_5);
      (**(code **)(local_140 + 8))(lVar1,local_138);
      if ((int)lVar18 != 1) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1006821e0);
        (*pcVar19)();
      }
      goto LAB_1006823c8;
    }
    (*pcVar19)(lVar11,lVar18);
    (**(code **)(local_1f0 + 8))(local_168,local_188);
    (*local_198)(local_130,lVar8);
  }
  (**(code **)(lVar10 + 8))(lVar15,param_6);
LAB_1006823c8:
  if (SCARRY8(*(long *)(lVar20 + 8),param_3)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x10068242c);
    (*pcVar19)();
  }
  *(long *)(lVar20 + 8) = *(long *)(lVar20 + 8) + param_3;
  if (SBORROW8(0,param_3)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x100682430);
    (*pcVar19)();
  }
  uVar9 = *(undefined8 *)(lVar20 + 0x10);
  FUN_100686f74(uVar9,-param_3,lVar20,local_128,param_5);
  *(undefined8 *)(lVar20 + 0x10) = uVar9;
  return;
}



/* Address: 0x100682450 | FUN_100682450 */

void FUN_100682450(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  char local_e0 [16];
  undefined8 local_d0;
  code *pcStack_c8;
  long *local_c0;
  long local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  local_a0 = uVar4;
  uStack_98 = param_3;
  local_90 = param_4;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_e0[0] == '\x01') {
    FUN_1006035b0(local_b0,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar1 = local_b0[0];
    FUN_10067c1f0(param_1,param_2,param_3,param_4);
    uVar5 = *unaff_x20;
    FUN_1006035b0(local_b0,FUN_1006035a4,0,uVar5,&DAT_100ef5140,uVar4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if (SBORROW8(local_b0[0],lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100682604);
      (*pcVar2)();
    }
    pcStack_c8 = FUN_100682744;
    puVar3 = &DAT_100fda040;
    local_d0 = uVar4;
    local_c0 = local_b0;
    local_a0 = uVar4;
    uStack_98 = param_3;
    local_90 = param_4;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,local_e0,uVar5,&DAT_100ef5140,uVar4,puVar3,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_e8
                 );
  }
  return;
}



/* Address: 0x100682604 | FUN_100682604 */

void FUN_100682604(long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  FUN_100684540(param_3,param_1,param_2,param_6);
  lVar3 = *param_1;
  param_1[1] = lVar3;
  param_1[2] = param_3;
  if (SBORROW8(lVar3,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100682694);
    (*pcVar2)();
  }
  lVar1 = param_4 + (lVar3 - param_5);
  if (!SCARRY8(param_4,lVar3 - param_5)) {
    if (param_4 <= lVar1) {
      FUN_100686fb4(param_4,lVar1,param_1,param_2,param_6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068269c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100682698);
  (*pcVar2)();
}



/* Address: 0x10068269c | FUN_10068269c */

void FUN_10068269c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006862d0(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x1006826cc | FUN_1006826cc */

void FUN_1006826cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067d450(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),FUN_1006827dc,
                FUN_100680c84);
  return;
}



/* Address: 0x1006826f8 | FUN_1006826f8 */

void FUN_1006826f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006817e0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100682718 | FUN_100682718 */

void FUN_100682718(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067d450(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),FUN_100682764,
                FUN_100680c84);
  return;
}



/* Address: 0x100682744 | FUN_100682744 */

void FUN_100682744(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100682604(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100682764 | FUN_100682764 */

void FUN_100682764(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100686db8(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100682798 | FUN_100682798 */

void FUN_100682798(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if ((param_1 < 0) || (param_4 < param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006827d8);
    (*pcVar1)();
  }
  if (param_3 == 0) {
    Swift::UnsafeMutableBufferPointer::_init(0);
    return;
  }
  if (!SBORROW8(param_2,param_1)) {
    Swift::UnsafeMutableBufferPointer::_init
              (param_3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006827dc);
  (*pcVar1)();
}



/* Address: 0x1006827dc | FUN_1006827dc */

void FUN_1006827dc(void)

{
  FUN_100682764();
  return;
}



/* Address: 0x1006827f0 | FUN_1006827f0 */

void FUN_1006827f0(Hasher param_1,__uint64 param_2,long param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  long lVar3;
  Hasher HVar4;
  __uint64 _Var5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  __uint64 local_80;
  long lStack_78;
  __uint64 local_70;
  
  lVar9 = *(long *)(param_3 + -8);
  lVar6 = (long)&local_80 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar7 = lVar6 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
                  0xfffffffffffffff0);
  HVar4.unknown = (undefined *)0x0;
  _Var5 = param_2;
  FUN_1006035b0(&local_80,FUN_1006035a4,0,param_2,&DAT_100ef5140,param_3,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  Swift::Hasher::_combine(local_80,HVar4);
  lVar3 = param_3;
  FUN_100679b54();
  uVar2 = 0;
  local_80 = param_2;
  lStack_78 = lVar3;
  local_70 = _Var5;
  FUN_100680958(0,param_3);
  FUN_100679ba8(lVar7);
  pcVar8 = *(code **)(lVar9 + 0x30);
  lVar3 = lVar7;
  (*pcVar8)(lVar7,1,param_3);
  if ((int)lVar3 != 1) {
    pcVar10 = *(code **)(lVar9 + 0x20);
    do {
      (*pcVar10)(lVar6,lVar7,param_3);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar9 + 8))(lVar6,param_3);
      FUN_100679ba8(lVar7,uVar2);
      lVar3 = lVar7;
      (*pcVar8)(lVar7,1,param_3);
    } while ((int)lVar3 != 1);
  }
  _swift_release(local_80);
  return;
}



/* Address: 0x10068298c | FUN_10068298c */

void FUN_10068298c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1006827f0(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006829e8 | FUN_1006829e8 */

void FUN_1006829e8(long param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10068298c(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x1006829fc | FUN_1006829fc */

void FUN_1006829fc(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1006827f0(param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100682a10 | FUN_100682a10 */

void FUN_100682a10(__int64 param_1,long param_2,long param_3)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_1006827f0(HVar1.unknown,*unaff_x20,*(undefined8 *)(param_2 + 0x10),uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100682a64 | FUN_100682a64 */

void FUN_100682a64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6da58,param_1,&local_18);
  return;
}



/* Address: 0x100682a9c | FUN_100682a9c */

undefined8 FUN_100682a9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  FUN_1006035b0(&local_28,FUN_100003284,0,param_1,&DAT_100ef5140,param_2,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_28;
}



/* Address: 0x100682b00 | FUN_100682b00 */

undefined8 FUN_100682b00(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_28;
  
  FUN_1006035b0(&local_28,FUN_100684074,0,param_1,&DAT_100ef5140,param_2,
                PTR___type_metadata_for_Swift_Never_100eadc38,&DAT_100ef5230,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_28;
}



/* Address: 0x100682b64 | FUN_100682b64 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100682bdc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100682b64(undefined *param_1,ulong param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  code *pcVar1;
  ContiguousArray<undefined> CVar2;
  __int64 _Var3;
  ManagedBuffer *this;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  ulong local_70;
  
  lVar5 = *(long *)(param_5 + -8);
  (**(code **)(lVar5 + 0x10))
            (auStack_b0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0),param_3,param_5);
  CVar2 = Swift::ContiguousArray::_init(param_1,param_4,param_5,param_6);
  if ((long)(param_2 | (ulong)param_1) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100682cf4);
    (*pcVar1)();
  }
  if (((long)param_1 <= (long)param_2) && ((param_2 | (ulong)param_1) != 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100682cfc);
    (*pcVar1)();
  }
  _Var3 = Swift::ContiguousArray::get_count((ContiguousArray)CVar2.unknown);
  if (_Var3 <= (long)param_1) {
    this = (ManagedBuffer *)0x0;
    FUN_1006886d0(0,param_4);
    local_90 = param_5;
    puStack_88 = param_6;
    local_80 = param_1;
    puStack_78 = CVar2.unknown;
    local_70 = param_2;
    Swift::ManagedBuffer::_create(this,(__int64)param_1);
    puVar4 = param_1;
    _swift_retain();
    FUN_100683f48();
    _Var3 = Swift::ContiguousArray::get_count((ContiguousArray)CVar2.unknown);
    if (0 < _Var3) {
      local_90 = param_4;
      puStack_88 = param_5;
      local_80 = param_6;
      puStack_78 = puVar4;
      FUN_10068330c(FUN_1006833d4,auStack_a0,CVar2.unknown,param_4,
                    PTR___type_metadata_for____100eae0c8 + 8,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    }
    _swift_release(param_1);
    _swift_release(CVar2.unknown);
    (**(code **)(lVar5 + 8))(param_3,param_5);
    FUN_100004520(puVar4,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100682cf8);
  (*pcVar1)();
}



/* Address: 0x100682cfc | FUN_100682cfc */

void FUN_100682cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *pcStack_88;
  undefined1 *local_80;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  pcStack_88 = FUN_1006834cc;
  local_80 = auStack_70;
  puVar1 = &DAT_100fda040;
  local_90 = param_5;
  local_60 = param_5;
  uStack_58 = param_6;
  local_50 = param_7;
  uStack_48 = param_2;
  local_40 = param_3;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(param_1,FUN_10067f650,auStack_a0,param_4,&DAT_100ef5140,param_5,puVar1,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8);
  return;
}



/* Address: 0x100682db0 | FUN_100682db0 */

void FUN_100682db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  Optional OVar6;
  undefined7 extraout_var;
  UnsafeMutableBufferPointer<undefined> UVar7;
  UnsafeBufferPointer UVar8;
  UnsafeMutableBufferPointer UVar9;
  undefined *puVar10;
  Slice SVar11;
  undefined *puVar12;
  __int64 _Var13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  long local_160;
  __int64 local_158;
  long local_150;
  long lStack_148;
  long local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  char local_108;
  long local_100;
  long lStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined *puStack_e8;
  UnsafeBufferPointer<undefined> local_d8;
  __int64 _Stack_d0;
  long local_c8;
  long lStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  long *plStack_88;
  code *local_80;
  long *plStack_78;
  
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_160 = CONCAT71(extraout_var,OVar6.value);
  local_168 = *(long *)(local_160 + -8);
  uVar14 = *(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1b0 = (long)&local_1b0 - uVar14;
  local_170 = local_1b0 - uVar14;
  FUN_10068457c(&local_d8,param_1,param_2,param_5);
  _Var13 = _Stack_d0;
  UVar7 = Swift::UnsafeMutableBufferPointer::init(local_d8);
  lStack_f8 = lStack_c0;
  local_100 = local_c8;
  local_f0 = local_b8;
  local_a0 = param_5;
  UVar8 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar6 = Swift::Optional::typeMetadataAccessor();
  UVar9 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_150,FUN_1006834ec,&local_b0,OVar6.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar9.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  local_198 = local_150;
  bVar4 = (char)local_140 != '\x01';
  local_190 = lStack_148;
  bVar5 = lStack_148 != 0;
  puVar10 = PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048;
  local_188 = param_3;
  local_180 = param_4;
  local_b0 = param_3;
  uStack_a8 = param_4;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
             UVar8.unknown);
  (extension_Swift)::Swift::Collection::_prefix(_Var13);
  local_1a0 = puVar10;
  local_140 = param_5;
  SVar11 = Swift::Slice::typeMetadataAccessor();
  puVar12 = PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8;
  puStack_138 = SVar11.unknown;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,SVar11.unknown);
  puVar10 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  uVar16 = *(undefined8 *)(SVar11.unknown + 0x10);
  puStack_98 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  lVar15 = *(long *)(SVar11.unknown + 0x18);
  plStack_88 = &local_100;
  plStack_78 = &local_150;
  local_80 = FUN_100680984;
  local_1a8 = puVar12;
  local_178 = UVar7.unknown;
  local_158 = _Var13;
  local_130 = puVar12;
  local_128 = UVar7.unknown;
  local_a0 = uVar16;
  local_90 = lVar15;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_108 == '\x01') {
    local_140 = CONCAT71(uStack_ef,local_f0);
    lStack_148 = lStack_f8;
    local_150 = local_100;
    puStack_138 = puStack_e8;
    FUN_100683508(&local_b0,local_178,local_158,SVar11.unknown);
    Swift::Slice::_get_endIndex(SVar11);
    lVar1 = local_170;
    if (local_90 != local_150) {
      Swift::Slice::_get_subscript((Slice)&local_90);
      Swift::Slice::_formIndex((Slice)&local_90);
      (**(code **)(*(long *)(param_5 + -8) + 0x38))(lVar1,0,1,param_5);
      (**(code **)(local_168 + 8))(lVar1,local_160);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006832ac);
      (*pcVar3)();
    }
    (**(code **)(*(long *)(param_5 + -8) + 0x38))(local_170,1,1,param_5);
    (**(code **)(local_168 + 8))(lVar1,local_160);
  }
  if (bVar4 && bVar5) {
    local_b0 = local_188;
    uStack_a8 = local_180;
    (extension_Swift)::Swift::Collection::_dropFirst(local_158);
    lVar2 = local_190;
    lVar1 = local_198;
    local_130 = local_1a8;
    local_128 = (undefined *)local_198;
    local_120 = local_190;
    puStack_98 = puVar10;
    plStack_88 = &local_100;
    plStack_78 = &local_150;
    local_80 = FUN_100680c5c;
    local_140 = param_5;
    puStack_138 = SVar11.unknown;
    local_a0 = uVar16;
    local_90 = lVar15;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_108 == '\x01') {
      local_140 = CONCAT71(uStack_ef,local_f0);
      lStack_148 = lStack_f8;
      local_150 = local_100;
      puStack_138 = puStack_e8;
      FUN_100683508(&local_b0,lVar1,lVar2,SVar11.unknown);
      Swift::Slice::_get_endIndex(SVar11);
      lVar15 = local_1b0;
      if (local_90 != local_150) {
        Swift::Slice::_get_subscript((Slice)&local_90);
        Swift::Slice::_formIndex((Slice)&local_90);
        (**(code **)(*(long *)(param_5 + -8) + 0x38))(lVar15,0,1,param_5);
        (**(code **)(local_168 + 8))(lVar15,local_160);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10068330c);
        (*pcVar3)();
      }
      (**(code **)(*(long *)(param_5 + -8) + 0x38))(local_1b0,1,1,param_5);
      (**(code **)(local_168 + 8))(lVar15,local_160);
    }
  }
  return;
}



/* Address: 0x10068330c | FUN_10068330c */

void FUN_10068330c(void)

{
  long in_x5;
  undefined8 in_x7;
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(in_x5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  FUN_1006833f4();
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_x7,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),in_x5);
  }
  return;
}



/* Address: 0x100683378 | FUN_100683378 */

void FUN_100683378(undefined8 *param_1)

{
  undefined8 uVar1;
  __int64 _Var2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  _Var2 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x28));
  *param_1 = uVar1;
  param_1[1] = _Var2;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1006833d4 | FUN_1006833d4 */

void FUN_1006833d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_100682cfc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_3);
  return;
}



/* Address: 0x1006833f4 | FUN_1006833f4 */

void FUN_1006833f4(undefined8 param_1,code *param_2,undefined8 param_3,
                  _ContiguousArrayBuffer param_4,undefined8 param_5,undefined8 param_6,long param_7,
                  undefined8 param_8,undefined8 param_9)

{
  UnsafeMutablePointer<undefined> start;
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar2 = *(long *)(param_7 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_68 = param_9;
  start = Swift::_ContiguousArrayBuffer::get_firstElementAddress(param_4);
  Swift::_ContiguousArrayBuffer::get_count(param_4);
  Swift::UnsafeBufferPointer::_init((__int64)start.unknown);
  (*param_2)(param_1);
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(local_68,auStack_70 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_7);
  }
  return;
}



/* Address: 0x1006834cc | FUN_1006834cc */

void FUN_1006834cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100682db0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006834ec | FUN_1006834ec */

void FUN_1006834ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10068f02c(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x100683508 | FUN_100683508 */

void FUN_100683508(undefined8 param_1,undefined8 param_2,undefined8 param_3,Slice param_4)

{
  long lVar1;
  Iterator IVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Slice local_c0;
  char local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  
  lVar5 = *(long *)(param_4.unknown + 0x18);
  uStack_118 = *(undefined8 *)(param_4.unknown + 0x18);
  uVar3 = *(undefined8 *)(param_4.unknown + 0x10);
  lVar1 = 0;
  local_128 = param_1;
  local_120 = uVar3;
  _swift_getAssociatedTypeWitness
            (0,lVar5,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar6 = *(long *)(lVar1 + -8);
  lVar7 = (long)&local_130 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_e8 = uStack_118;
  local_f0 = local_120;
  local_130 = lVar1;
  local_e0 = param_2;
  uStack_d8 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar5 + 8),uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  IVar2 = Swift::UnsafeBufferPointer::Iterator::typeMetadataAccessor();
  uVar3 = 0;
  _swift_getTupleTypeMetadata2(0,IVar2.unknown,PTR___type_metadata_for_Swift_Int_100eac6f8,0,0);
  local_a0 = local_120;
  local_98 = uVar3;
  lStack_90 = lVar5;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_b8 == '\x01') {
    puVar4 = PTR_Swift__Swift__Slice<undefined>_>Swift__Sequence_100eadca8;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Slice<undefined>_>Swift__Sequence_100eadca8,param_4.unknown);
    FUN_100683960(local_128,param_2,param_3,param_4.unknown,puVar4);
  }
  else {
    Swift::Slice::_get_startIndex(param_4);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,param_4.unknown);
    Swift::IndexingIterator::typeMetadataAccessor();
    uVar3 = local_128;
    Swift::Slice::_index(lVar7,local_c0);
    (**(code **)(lVar6 + 8))(lVar7,local_130);
    (**(code **)(*(long *)(param_4.unknown + -8) + 0x20))(uVar3);
  }
  return;
}



/* Address: 0x100683728 | FUN_100683728 */

void FUN_100683728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  code *pcVar1;
  long lVar2;
  Range<__int64> RVar3;
  __int64 _Var4;
  UnsafeBufferPointer UVar5;
  Slice SVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  code *local_c8;
  long local_90;
  long local_58;
  
  lVar2 = 0;
  local_e8 = param_2;
  uStack_e0 = param_3;
  local_d8 = param_1;
  uStack_d0 = param_6;
  local_c8 = param_5;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar8 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  Swift::Slice::typeMetadataAccessor();
  Swift::Collection::_get_startIndex();
  RVar3.unknown = (undefined *)Swift::Collection::_distance();
  (**(code **)(lVar8 + 8))(auStack_f0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  _Var4 = Swift::Collection::_distance();
  if (SCARRY8((long)RVar3.unknown,_Var4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068395c);
    (*pcVar1)();
  }
  if ((long)RVar3.unknown <= (long)(RVar3.unknown + _Var4)) {
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(param_9 + 8),param_7,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
    Swift::UnsafeBufferPointer::get_subscript(RVar3,(UnsafeBufferPointer)(RVar3.unknown + _Var4));
    UVar5 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
               UVar5.unknown);
    SVar6 = Swift::Slice::typeMetadataAccessor();
    Swift::Slice::get_base(SVar6);
    if (local_90 != 0) {
      Swift::Slice::_get_startIndex(SVar6);
      local_90 = local_90 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * local_58;
    }
    Swift::Slice::_get_endIndex(SVar6);
    Swift::Slice::_get_startIndex(SVar6);
    Swift::UnsafeBufferPointer::_init(local_90);
    (*local_c8)(local_d8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100683960);
  (*pcVar1)();
}



/* Address: 0x100683960 | FUN_100683960 */

long FUN_100683960(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar3 = 0xff;
  local_88 = param_3;
  local_78 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lStack_90 = CONCAT71(extraout_var,OVar2.value);
  local_98 = *(long *)(lStack_90 + -8);
  puVar11 = auStack_a0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar3 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,puVar1,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_80 = *(long *)(lVar4 + -8);
  lVar6 = *(long *)(local_80 + 0x40);
  local_68 = lVar4;
  Swift::Sequence::_makeIterator();
  lVar4 = local_88;
  if (param_2 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = local_88;
    if (local_88 != 0) {
      if (local_88 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100683b9c);
        (*pcVar7)();
      }
      _swift_getAssociatedConformanceWitness
                (param_5,param_4,local_68,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      local_70 = param_5;
      Swift::IteratorProtocol::_next();
      puVar5 = puVar11;
      (**(code **)(lVar8 + 0x30))(puVar11,1,lVar3);
      if ((int)puVar5 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pcVar7 = *(code **)(lVar8 + 0x20);
        do {
          (*pcVar7)(lVar12,puVar11,lVar3);
          FUN_1006331c4(lVar12,param_2,lVar3);
          lVar10 = local_88;
          if (lVar4 + -1 == lVar9) goto LAB_100683b60;
          param_2 = param_2 + *(long *)(lVar8 + 0x48);
          Swift::IteratorProtocol::_next();
          puVar5 = puVar11;
          (**(code **)(lVar8 + 0x30))(puVar11,1,lVar3);
          lVar9 = lVar9 + 1;
        } while ((int)puVar5 != 1);
      }
      (**(code **)(local_98 + 8))(puVar11,lStack_90);
      lVar10 = lVar9;
    }
  }
LAB_100683b60:
  (**(code **)(local_80 + 0x20))(local_78,lVar12 - (lVar6 + 0xfU & 0xfffffffffffffff0),local_68);
  return lVar10;
}



/* Address: 0x100683b9c | FUN_100683b9c */

void FUN_100683b9c(tuple2 *param_1,undefined *param_2)

{
  UnsafeMutableBufferPointer<undefined> initializing;
  UnsafeBufferPointer UVar1;
  long unaff_x20;
  tuple2 tVar2;
  
  initializing.unknown = *(undefined **)(unaff_x20 + 0x20);
  UVar1.unknown = *(undefined **)(unaff_x20 + 0x28);
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 8),*(undefined8 *)(unaff_x20 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  tVar2 = Swift::UnsafeBufferPointer::__copyContents(initializing,UVar1);
  *param_1 = tVar2;
  param_1[1]._.unknown = param_2;
  return;
}



/* Address: 0x100683c1c | FUN_100683c1c */

void FUN_100683c1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100683728(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100683c3c | FUN_100683c3c */

void FUN_100683c3c(void)

{
  FUN_100683cbc();
  return;
}



/* Address: 0x100683c58 | FUN_100683c58 */

void FUN_100683c58(undefined8 param_1)

{
  bool bVar1;
  ManagedBufferPointer MVar2;
  
  MVar2 = Swift::ManagedBufferPointer::typeMetadataAccessor();
  bVar1 = Swift::ManagedBufferPointer::isUniqueReference(MVar2);
  if (bVar1) {
    return;
  }
  FUN_1006840e8(param_1);
  return;
}



/* Address: 0x100683ca0 | FUN_100683ca0 */

void FUN_100683ca0(void)

{
  FUN_100683cbc();
  return;
}



/* Address: 0x100683cbc | FUN_100683cbc */

void FUN_100683cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined1 local_78 [8];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = &DAT_100fda040;
  local_60 = param_5;
  uStack_58 = param_6;
  local_50 = param_2;
  uStack_48 = param_3;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(param_1,param_7,auStack_70,param_4,&DAT_100ef5140,param_5,puVar1,param_6,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_78);
  return;
}



/* Address: 0x100683d64 | FUN_100683d64 */

void FUN_100683d64(void)

{
  if (DAT_100fda288 != -1) {
    _swift_once(&DAT_100fda288,FUN_100688650);
  }
  _swift_retain(DAT_101057c40);
  Swift::ManagedBufferPointer::_init();
  return;
}



/* Address: 0x100683dc4 | FUN_100683dc4 */

void FUN_100683dc4(long param_1,uint param_2,long param_3)

{
  bool bVar1;
  ManagedBufferPointer MVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long local_58;
  
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  MVar2 = Swift::ManagedBufferPointer::typeMetadataAccessor();
  bVar1 = Swift::ManagedBufferPointer::isUniqueReference(MVar2);
  FUN_1006035b0(&local_58,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar3,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if ((local_58 < param_1) || (!bVar1)) {
    FUN_100684260(bVar1,param_1,param_2 & 1,param_3);
  }
  return;
}



/* Address: 0x100683e8c | FUN_100683e8c */

void FUN_100683e8c(__int64 param_1)

{
  ManagedBuffer *this;
  
  this = (ManagedBuffer *)0x0;
  FUN_1006886d0();
  Swift::ManagedBuffer::_create(this,param_1);
  Swift::ManagedBufferPointer::_init();
  return;
}



/* Address: 0x100683ef0 | FUN_100683ef0 */

bool FUN_100683ef0(long param_1,long param_2,undefined8 param_3)

{
  FUN_100004520(param_2,&DAT_100ef5140);
  FUN_100004520(param_1,&DAT_100ef5140,param_3);
  return param_2 == param_1;
}



/* Address: 0x100683f48 | FUN_100683f48 */

void FUN_100683f48(void)

{
  Swift::ManagedBufferPointer::_init();
  return;
}



/* Address: 0x100683f68 | FUN_100683f68 */

undefined1  [16]
FUN_100683f68(ManagedBufferPointer param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  UnsafeMutablePointer<undefined> UVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  Swift::_StringGuts::grow(0x14,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar6 = Swift::__typeName(SUB81(param_2.unknown,0));
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar6,SVar8);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar6.bridgeObject = (void *)0xea00000000006567;
  SVar6.str = (char *)0x61726f74535f2e3e;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar6,SVar9);
  UVar2 = Swift::ManagedBufferPointer::get__headerPointer(param_1);
  pcVar3 = *(char **)UVar2.unknown;
  pvVar4 = *(void **)(UVar2.unknown + 8);
  pcVar5 = *(char **)(UVar2.unknown + 0x10);
  FUN_1006886dc();
  SVar7.bridgeObject = pvVar4;
  SVar7.str = pcVar3;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar5;
  Swift::String::append(SVar7,SVar10);
  _swift_bridgeObjectRelease(pvVar4);
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x3c6575716544;
  return auVar1;
}



/* Address: 0x100684044 | FUN_100684044 */

void FUN_100684044(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100683f68(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100684054 | FUN_100684054 */

void FUN_100684054(undefined8 param_1,undefined8 param_2)

{
  FUN_100004520(param_1,&DAT_100ef5140,param_2);
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100684074 | FUN_100684074 */

void FUN_100684074(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  return;
}



/* Address: 0x100684080 | FUN_100684080 */

void FUN_100684080(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long *in_x6;
  long unaff_x21;
  
  (*param_3)();
  if (unaff_x21 != 0) {
    *in_x6 = unaff_x21;
  }
  return;
}



/* Address: 0x1006840b0 | FUN_1006840b0 */

void FUN_1006840b0(void)

{
  FUN_100684198();
  return;
}



/* Address: 0x1006840c4 | FUN_1006840c4 */

void FUN_1006840c4(void)

{
  ManagedBufferPointer MVar1;
  
  MVar1 = Swift::ManagedBufferPointer::typeMetadataAccessor();
  Swift::ManagedBufferPointer::isUniqueReference(MVar1);
  return;
}



/* Address: 0x1006840e8 | FUN_1006840e8 */

void FUN_1006840e8(long param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lStack_68;
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = *unaff_x20;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = auStack_50;
  local_60 = FUN_100684524;
  puVar1 = &DAT_100fda040;
  local_70 = uVar2;
  lStack_68 = param_1;
  local_40 = uVar2;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(&local_38,FUN_1006840b0,auStack_80,uVar3,&DAT_100ef5140,uVar2,puVar1,param_1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_88);
  _swift_release(uVar3);
  *unaff_x20 = local_38;
  return;
}



/* Address: 0x100684198 | FUN_100684198 */

void FUN_100684198(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x20))();
  if (unaff_x21 != 0) {
    *param_3 = unaff_x21;
  }
  return;
}



/* Address: 0x1006841c8 | FUN_1006841c8 */

ulong FUN_1006841c8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong local_38;
  
  if ((param_2 & 1) == 0) {
    FUN_1006035b0(&local_38,FUN_100003284,0,param_3,&DAT_100ef5140,param_4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    local_38 = local_38 * 3 + 1 >> 1;
  }
  else {
    FUN_1006035b0(&local_38,FUN_100003284,0,param_3,&DAT_100ef5140,param_4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  if ((long)param_1 <= (long)local_38) {
    param_1 = local_38;
  }
  return param_1;
}



/* Address: 0x100684260 | FUN_100684260 */

void FUN_100684260(ulong param_1,long param_2,uint param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  long local_b0 [2];
  undefined8 local_a0;
  long lStack_98;
  code *local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60 [2];
  
  uVar2 = *unaff_x20;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  FUN_1006035b0(local_b0,FUN_100003284,0,uVar2,&DAT_100ef5140,uVar3,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  local_a0 = uVar3;
  lStack_98 = param_4;
  local_70 = uVar3;
  if (local_b0[0] < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,uVar2,uVar3);
    lStack_68 = param_2;
    if ((param_1 & 1) == 0) {
      puStack_88 = auStack_80;
      local_90 = FUN_100684450;
      puVar1 = &DAT_100fda040;
      FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    }
    else {
      puStack_88 = auStack_80;
      local_90 = FUN_100684488;
      puVar1 = &DAT_100fda040;
      FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    }
  }
  else {
    puStack_88 = auStack_80;
    local_90 = FUN_1006844c0;
    puVar1 = &DAT_100fda040;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  }
  FUN_1006034cc(local_60,FUN_100684510,local_b0,uVar2,&DAT_100ef5140,uVar3,puVar1,param_4,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8);
  _swift_release(uVar2);
  *unaff_x20 = local_60[0];
  return;
}



/* Address: 0x100684414 | FUN_100684414 */

void FUN_100684414(__int64 *param_1,ManagedBuffer *param_2)

{
  __int64 _Var1;
  
  _Var1 = Swift::ManagedBuffer::get_capacity(param_2,param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = _Var1;
  return;
}



/* Address: 0x100684450 | FUN_100684450 */

void FUN_100684450(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100687828(uVar1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100684488 | FUN_100684488 */

void FUN_100684488(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100687708(uVar1,param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006844c0 | FUN_1006844c0 */

void FUN_1006844c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1006875f4(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = param_2;
  return;
}



/* Address: 0x1006844f0 | FUN_1006844f0 */

void FUN_1006844f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006844fc | FUN_1006844fc */

void FUN_1006844fc(void)

{
  FUN_100684080();
  return;
}



/* Address: 0x100684510 | FUN_100684510 */

void FUN_100684510(void)

{
  FUN_1006840b0();
  return;
}



/* Address: 0x100684524 | FUN_100684524 */

void FUN_100684524(void)

{
  FUN_1006844c0();
  return;
}


