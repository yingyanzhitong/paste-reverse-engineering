/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100684538 | FUN_100684538 */

undefined8 FUN_100684538(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x100684540 | FUN_100684540 */

long FUN_100684540(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_2 <= param_2[2] + param_1) {
    lVar1 = *param_2;
  }
  return (param_2[2] + param_1) - lVar1;
}



/* Address: 0x10068455c | FUN_10068455c */

void FUN_10068455c(long param_1)

{
  FUN_100686f74(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x10068456c | FUN_10068456c */

long FUN_10068456c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * param_1;
}



/* Address: 0x10068457c | FUN_10068457c */

void FUN_10068457c(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> UVar2;
  UnsafeBufferPointer<undefined> UVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = param_2[2];
  lVar4 = *param_2 - lVar8;
  if (SBORROW8(*param_2,lVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100684640);
    (*pcVar1)();
  }
  lVar7 = param_2[1];
  if (lVar4 < lVar7) {
    lVar5 = lVar7 - lVar4;
    if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100684644);
      (*pcVar1)();
    }
    UVar2 = Swift::UnsafeBufferPointer::_init
                      (param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar8);
    UVar3 = Swift::UnsafeBufferPointer::_init(param_3);
    uVar6 = 0;
    lVar7 = lVar4;
  }
  else {
    UVar2 = Swift::UnsafeBufferPointer::_init
                      (param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar8);
    UVar3.unknown = (undefined *)0x0;
    lVar5 = 0;
    uVar6 = 1;
  }
  *param_1 = UVar2.unknown;
  param_1[1] = lVar7;
  param_1[2] = UVar3.unknown;
  param_1[3] = lVar5;
  *(undefined1 *)(param_1 + 4) = uVar6;
  return;
}



/* Address: 0x100684644 | FUN_100684644 */

void FUN_100684644(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (!SBORROW8(param_2,param_1)) {
    Swift::UnsafeBufferPointer::_init(param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1)
    ;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100684664);
  (*pcVar1)();
}



/* Address: 0x100684664 | FUN_100684664 */

void FUN_100684664(undefined8 param_1,__int64 param_2)

{
  Swift::UnsafeMutableBufferPointer::_init(param_2);
  return;
}



/* Address: 0x100684674 | FUN_100684674 */

void FUN_100684674(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> mutating;
  
  if (!SBORROW8(param_2,param_1)) {
    mutating = Swift::UnsafeBufferPointer::_init
                         (param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1);
    Swift::UnsafeMutableBufferPointer::init(mutating);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006846b4);
  (*pcVar1)();
}



/* Address: 0x1006846b4 | FUN_1006846b4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100684c28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006846b4(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  UVar2;
  long lVar3;
  undefined8 uVar4;
  Optional OVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  PartialRangeUpTo PVar11;
  long lVar12;
  UnsafeMutableBufferPointer<undefined> UVar13;
  UnsafeMutableBufferPointer UVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 auStack_230 [8];
  long local_228;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_220;
  code *local_218;
  long local_210;
  code *local_208;
  long local_200;
  long local_1f8;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1f0;
  undefined *local_1e8;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined *local_178;
  long local_170;
  long local_168;
  undefined1 *local_160;
  undefined *local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  code *local_120;
  long local_118;
  code *local_110;
  long local_108;
  undefined1 auStack_100 [16];
  long local_f0;
  long lStack_e8;
  long local_e0;
  code *local_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  code *local_a8;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  UnsafeBufferPointer<undefined> local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar7 = 0xff;
  local_130 = param_4;
  local_128 = (code *)param_5;
  local_120 = param_3;
  local_110 = (code *)param_2;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar12 = param_8;
  _swift_getAssociatedConformanceWitness
            (param_8,param_7,lVar7,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_158 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_1d0 = *(long *)(local_158 + -8);
  lVar16 = *(long *)(local_1d0 + 0x40);
  uVar8 = 0xff;
  local_160 = auStack_230 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_7,puVar1,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar10 = param_8;
  _swift_getAssociatedConformanceWitness
            (param_8,param_7,uVar8,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  puVar15 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  puVar1 = PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18;
  local_148 = *(undefined8 *)(lVar10 + 8);
  lVar9 = 0;
  local_150 = lVar10;
  _swift_getAssociatedTypeWitness
            (0,local_148,uVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_1c0 = *(long *)(lVar9 + -8);
  uVar17 = *(long *)(local_1c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f0.unknown = auStack_230 + -(lVar16 + 0xfU & 0xfffffffffffffff0) + -uVar17;
  puVar18 = local_1f0.unknown + -uVar17;
  lVar10 = 0;
  local_1e0.unknown = puVar18;
  local_1b8 = lVar9;
  _swift_checkMetadataState(0,uVar8);
  local_190 = *(long *)(lVar10 + -8);
  uVar17 = *(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1a0 = (long)puVar18 - uVar17;
  local_1c8 = local_1a0 - uVar17;
  lVar9 = local_1c8 - uVar17;
  local_1a8 = lVar9;
  local_198 = lVar10;
  local_138 = lVar12;
  PVar11 = Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_1b0 = *(long *)(PVar11.unknown + -8);
  local_140 = lVar9 - (*(long *)(local_1b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar19 = *(code **)(lVar7 + -8);
  uVar17 = *(long *)(pcVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_170 = local_140 - uVar17;
  lVar9 = local_170 - uVar17;
  local_178 = PVar11.unknown;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_180 = CONCAT71((int7)((ulong)PVar11.unknown >> 8),OVar5.value);
  local_188 = *(long *)(local_180 + -8);
  uVar17 = *(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f8 = lVar9 - uVar17;
  local_1e8 = (undefined *)(local_1f8 - uVar17);
  lVar10 = (long)local_1e8 - uVar17;
  uVar8 = *(undefined8 *)(param_8 + 8);
  lVar12 = 0;
  local_1d8 = lVar10;
  _swift_getAssociatedTypeWitness(0,uVar8,param_7,puVar15,puVar1);
  local_218 = *(code **)(lVar12 + -8);
  local_220.unknown =
       (undefined *)(lVar10 - (*(long *)(local_218 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_118 = *(long *)(param_7 + -8);
  uVar17 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)local_220.unknown - uVar17;
  local_108 = lVar10 - uVar17;
  if ((code *)param_1 != local_110) {
    local_210 = lVar12;
    local_208 = pcVar19;
    local_200 = lVar7;
    local_168 = lVar9;
    FUN_1006879e4(&local_90,param_1,local_110,local_130,local_128,param_6);
    lVar16 = lStack_88;
    UVar13 = Swift::UnsafeMutableBufferPointer::init(local_90);
    uStack_b8 = uStack_78;
    local_c0 = local_80;
    local_b0 = local_70;
    local_f0 = param_6;
    Swift::UnsafeBufferPointer::typeMetadataAccessor();
    OVar5 = Swift::Optional::typeMetadataAccessor();
    UVar14 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
    FUN_100617fb8(&local_a8,FUN_1006834ec,auStack_100,OVar5.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,UVar14.unknown,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar12 = CONCAT71(uStack_9f,local_a0);
    local_110 = local_a8;
    local_128 = (code *)UVar13;
    FUN_100688150(UVar13.unknown,lVar16,param_6);
    lVar9 = local_108;
    lVar7 = local_118;
    if ((local_98 == '\x01') || (lVar12 == 0)) {
      local_110 = *(code **)(local_118 + 0x10);
      (*local_110)(local_108,local_120,param_7);
      local_d8 = local_128;
      local_f0 = param_6;
      lStack_e8 = param_7;
      local_e0 = param_8;
      local_d0 = lVar16;
      Swift::Sequence::_withContiguousStorageIfAvailable();
      if (local_a0 == '\x01') {
        (*local_110)(lVar10,lVar9,param_7);
        UVar2.unknown = local_220.unknown;
        Swift::Sequence::__copyContents(local_220);
        lVar12 = local_210;
        _swift_getAssociatedConformanceWitness
                  (uVar8,param_7,local_210,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                   PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                  );
        lVar10 = local_1d8;
        Swift::IteratorProtocol::_next();
        (**(code **)(local_218 + 8))(UVar2.unknown,lVar12);
        (**(code **)(lVar7 + 8))(local_108,param_7);
        lVar12 = lVar10;
        (**(code **)(*(long *)(param_6 + -8) + 0x30))(lVar10,1,param_6);
        (**(code **)(local_188 + 8))(lVar10,local_180);
        if ((int)lVar12 == 1) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100684f84);
        (*pcVar19)();
      }
    }
    else {
      local_130 = 0;
      local_210 = lVar12;
      FUN_100688150(local_110,lVar12,param_6);
      (**(code **)(local_118 + 0x10))(local_108,local_120,param_7);
      lVar10 = local_170;
      Swift::Collection::_get_startIndex();
      lVar7 = local_168;
      local_120 = (code *)lVar16;
      Swift::Collection::_index(lVar10);
      lVar12 = local_200;
      pcVar19 = local_208;
      pcVar20 = *(code **)(local_208 + 8);
      (*pcVar20)(lVar10,local_200);
      lVar9 = local_138;
      local_1d8 = *(long *)(local_138 + 8);
      bVar6 = Swift::Equatable::___infix(lVar7,lVar7,lVar12);
      if (!bVar6) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1006852bc);
        (*pcVar19)();
      }
      local_208 = *(code **)(pcVar19 + 0x10);
      local_218 = pcVar20;
      (*local_208)(lVar10,lVar7,lVar12);
      lVar7 = local_140;
      Swift::PartialRangeUpTo::init(local_140,UVar14.unknown,lVar12,lVar9);
      puVar1 = local_178;
      puVar15 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
      _swift_getWitnessTable
                (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
                 local_178);
      lVar12 = local_1a8;
      ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
                (local_1a8,lVar7,param_7,puVar1,param_8,puVar15);
      uVar4 = local_130;
      uVar8 = local_148;
      lVar7 = local_198;
      lStack_e8 = local_198;
      local_e0 = local_150;
      local_d8 = local_128;
      local_d0 = (long)local_120;
      local_228 = param_6;
      local_f0 = param_6;
      Swift::Sequence::_withContiguousStorageIfAvailable();
      lVar9 = local_190;
      local_130 = uVar4;
      if (local_a0 == '\x01') {
        (**(code **)(local_190 + 0x10))(local_1c8,lVar12,lVar7);
        UVar2.unknown = local_1e0.unknown;
        Swift::Sequence::__copyContents(local_1e0);
        lVar10 = local_1b8;
        _swift_getAssociatedConformanceWitness
                  (uVar8,lVar7,local_1b8,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                   PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                  );
        puVar1 = local_1e8;
        Swift::IteratorProtocol::_next();
        (**(code **)(local_1c0 + 8))(UVar2.unknown,lVar10);
        lVar10 = local_170;
        local_120 = *(code **)(lVar9 + 8);
        (*local_120)(lVar12,lVar7);
        (**(code **)(local_1b0 + 8))(local_140,local_178);
        lVar12 = local_228;
        puVar15 = puVar1;
        (**(code **)(*(long *)(local_228 + -8) + 0x30))(puVar1,1,local_228);
        (**(code **)(local_188 + 8))(puVar1,local_180);
        if ((int)puVar15 != 1) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100684e2c);
          (*pcVar19)();
        }
      }
      else {
        local_120 = *(code **)(local_190 + 8);
        (*local_120)(lVar12,lVar7);
        (**(code **)(local_1b0 + 8))(local_140,puVar1);
        lVar12 = local_228;
      }
      pcVar19 = local_110;
      lVar16 = local_1a0;
      lVar9 = local_200;
      bVar6 = Swift::Equatable::___infix(local_168,local_168,local_200,local_1d8);
      lVar3 = local_138;
      if (!bVar6) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x1006852c0);
        (*pcVar19)();
      }
      (*local_208)(lVar10,local_168,lVar9);
      puVar18 = local_160;
      Swift::PartialRangeFrom::init(local_160,puVar15,lVar9,lVar3);
      puVar1 = local_158;
      puVar15 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
      _swift_getWitnessTable
                (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
                 local_158);
      ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
                (lVar16,puVar18,param_7,puVar1,param_8,puVar15);
      uVar8 = local_148;
      lStack_e8 = lVar7;
      local_e0 = local_150;
      local_d8 = pcVar19;
      local_d0 = local_210;
      local_f0 = lVar12;
      Swift::Sequence::_withContiguousStorageIfAvailable();
      if (local_a0 == '\x01') {
        (**(code **)(local_190 + 0x10))(local_1c8,lVar16,lVar7);
        UVar2.unknown = local_1f0.unknown;
        Swift::Sequence::__copyContents(local_1f0);
        lVar10 = local_1b8;
        _swift_getAssociatedConformanceWitness
                  (uVar8,lVar7,local_1b8,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                   PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                  );
        lVar12 = local_1f8;
        Swift::IteratorProtocol::_next();
        (**(code **)(local_1c0 + 8))(UVar2.unknown,lVar10);
        (*local_120)(lVar16,lVar7);
        (**(code **)(local_1d0 + 8))(local_160,local_158);
        (*local_218)(local_168,lVar9);
        (**(code **)(local_118 + 8))(local_108,param_7);
        lVar10 = lVar12;
        (**(code **)(*(long *)(local_228 + -8) + 0x30))(lVar12,1);
        (**(code **)(local_188 + 8))(lVar12,local_180);
        if ((int)lVar10 == 1) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100685230);
        (*pcVar19)();
      }
      (*local_120)(lVar16,lVar7);
      (**(code **)(local_1d0 + 8))(local_160,local_158);
      (*local_218)(local_168,lVar9);
      lVar9 = local_108;
      lVar7 = local_118;
    }
    (**(code **)(lVar7 + 8))(lVar9,param_7);
  }
  return;
}



/* Address: 0x1006852c0 | FUN_1006852c0 */

void FUN_1006852c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  UnsafeMutableBufferPointer<undefined> UVar2;
  UnsafeMutableBufferPointer UVar3;
  undefined8 uVar4;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  long lStack_98;
  char local_90;
  UnsafeBufferPointer<undefined> local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  FUN_1006879e4(&local_88);
  uVar4 = uStack_80;
  UVar2 = Swift::UnsafeMutableBufferPointer::init(local_88);
  uStack_b8 = uStack_70;
  local_c0 = local_78;
  local_b0 = local_68;
  local_d0 = param_5;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  UVar3 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_a0,FUN_100688370,auStack_e0,OVar1.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar3.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  FUN_100688150(UVar2.unknown,uVar4,param_5);
  if ((local_90 != '\x01') && (lStack_98 != 0)) {
    FUN_100688150(local_a0,lStack_98,param_5);
  }
  FUN_100686fb4(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x1006853ec | FUN_1006853ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006859bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006853ec(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  PartialRangeUpTo PVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  code *pcVar16;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  UVar17;
  undefined1 auStack_210 [8];
  undefined8 local_208;
  code *local_200;
  long local_1f8;
  undefined8 local_1f0;
  code *local_1e8;
  long local_1e0;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1d8;
  undefined *local_1d0;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined *local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  code *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  long local_b0;
  char local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  char local_70;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar6 = 0xff;
  local_118 = param_3;
  local_110 = param_4;
  local_108 = param_5;
  local_f0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar15 = param_8;
  _swift_getAssociatedConformanceWitness
            (param_8,param_7,lVar6,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_150 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_1b8 = *(long *)(local_150 + -8);
  lVar12 = *(long *)(local_1b8 + 0x40);
  uVar7 = 0xff;
  local_158 = auStack_210 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_7,puVar1,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar9 = param_8;
  _swift_getAssociatedConformanceWitness
            (param_8,param_7,uVar7,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  puVar1 = PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18;
  local_140 = *(undefined8 *)(lVar9 + 8);
  lVar8 = 0;
  local_148 = lVar9;
  _swift_getAssociatedTypeWitness
            (0,local_140,uVar7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_1a8 = *(long *)(lVar8 + -8);
  uVar13 = *(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1d8.unknown = auStack_210 + -(lVar12 + 0xfU & 0xfffffffffffffff0) + -uVar13;
  puVar14 = local_1d8.unknown + -uVar13;
  lVar9 = 0;
  local_1c8.unknown = puVar14;
  local_1a0 = lVar8;
  _swift_checkMetadataState(0,uVar7);
  local_178 = *(long *)(lVar9 + -8);
  uVar13 = *(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_188 = (long)puVar14 - uVar13;
  local_1b0 = local_188 - uVar13;
  lVar8 = local_1b0 - uVar13;
  local_190 = lVar8;
  local_138 = lVar9;
  local_120 = lVar15;
  PVar10 = Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_198 = *(long *)(PVar10.unknown + -8);
  local_130 = lVar8 - (*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar6 + -8);
  uVar13 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_128 = local_130 - uVar13;
  lVar15 = local_128 - uVar13;
  local_180 = lVar6;
  local_160 = PVar10.unknown;
  local_f8 = lVar15;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_168 = CONCAT71((int7)((ulong)PVar10.unknown >> 8),OVar4.value);
  local_170 = *(long *)(local_168 + -8);
  uVar13 = *(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1e0 = lVar15 - uVar13;
  local_1d0 = (undefined *)(local_1e0 - uVar13);
  lVar15 = (long)local_1d0 - uVar13;
  uVar7 = *(undefined8 *)(param_8 + 8);
  lVar9 = 0;
  local_1c0 = lVar15;
  _swift_getAssociatedTypeWitness(0,uVar7,param_7,puVar11,puVar1);
  local_1e8 = *(code **)(lVar9 + -8);
  UVar17.unknown = (undefined *)(lVar15 - (*(long *)(local_1e8 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  lVar6 = *(long *)(param_7 + -8);
  uVar13 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)UVar17.unknown - uVar13;
  lVar15 = lVar12 - uVar13;
  if (param_2 < 1) {
                    /* WARNING: Could not recover jumptable at 0x0001006858e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))(local_f0,param_7);
    return;
  }
  FUN_10068638c(&local_90,param_2,local_118,local_110,local_108,param_6);
  pcVar16 = *(code **)(lVar6 + 0x10);
  local_108 = lVar6;
  local_100 = param_6;
  (*pcVar16)(lVar15,local_f0,param_7);
  lVar6 = local_128;
  if (local_70 == '\x01') {
    local_d0 = local_100;
    uStack_b8 = local_90;
    local_f8 = lStack_88;
    local_b0 = lStack_88;
    lStack_c8 = param_7;
    local_c0 = param_8;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      (*pcVar16)(lVar12,lVar15,param_7);
      Swift::Sequence::__copyContents(UVar17);
      _swift_getAssociatedConformanceWitness
                (uVar7,param_7,lVar9,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      lVar6 = local_1c0;
      Swift::IteratorProtocol::_next();
      pcVar16 = *(code **)(local_108 + 8);
      (*pcVar16)(local_f0,param_7);
      (**(code **)(local_1e8 + 8))(UVar17.unknown,lVar9);
      (*pcVar16)(lVar15,param_7);
      lVar15 = lVar6;
      (**(code **)(*(long *)(local_100 + -8) + 0x30))(lVar6,1);
      (**(code **)(local_170 + 8))(lVar6,local_168);
      if ((int)lVar15 == 1) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1006858bc);
      (*pcVar16)();
    }
    pcVar16 = *(code **)(local_108 + 8);
    (*pcVar16)(local_f0,param_7);
  }
  else {
    local_1f0 = local_80;
    local_118 = lStack_78;
    Swift::Collection::_get_startIndex();
    lVar3 = local_f8;
    local_110 = (code *)local_90;
    Swift::Collection::_index(lVar6);
    lVar12 = local_180;
    local_1e8 = *(code **)(lVar8 + 8);
    (*local_1e8)(lVar6,local_180);
    lVar2 = local_120;
    local_1c0 = *(long *)(local_120 + 8);
    bVar5 = Swift::Equatable::___infix(lVar3,lVar3,lVar12);
    if (!bVar5) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100685ef8);
      (*pcVar16)();
    }
    local_200 = *(code **)(lVar8 + 0x10);
    (*local_200)(lVar6,lVar3,lVar12);
    lVar6 = local_130;
    Swift::PartialRangeUpTo::init(local_130,lVar9,lVar12,lVar2);
    puVar1 = local_160;
    puVar11 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
               local_160);
    lVar9 = local_190;
    local_1f8 = lVar15;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_190,lVar6,param_7,puVar1,param_8,puVar11);
    lVar6 = local_138;
    uVar7 = local_140;
    local_d0 = local_100;
    lStack_c8 = local_138;
    local_c0 = local_148;
    uStack_b8 = local_110;
    local_b0 = lStack_88;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    lVar15 = local_178;
    local_208 = 0;
    if (local_98 == '\x01') {
      (**(code **)(local_178 + 0x10))(local_1b0,lVar9,lVar6);
      UVar17.unknown = local_1c8.unknown;
      Swift::Sequence::__copyContents(local_1c8);
      lVar8 = local_1a0;
      _swift_getAssociatedConformanceWitness
                (uVar7,lVar6,local_1a0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      puVar1 = local_1d0;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_1a8 + 8))(UVar17.unknown,lVar8);
      local_110 = *(code **)(lVar15 + 8);
      (*local_110)(lVar9,lVar6);
      (**(code **)(local_198 + 8))(local_130,local_160);
      lVar9 = local_100;
      puVar11 = puVar1;
      (**(code **)(*(long *)(local_100 + -8) + 0x30))(puVar1,1,local_100);
      (**(code **)(local_170 + 8))(puVar1,local_168);
      if ((int)puVar11 != 1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100685ba4);
        (*pcVar16)();
      }
    }
    else {
      local_110 = *(code **)(local_178 + 8);
      (*local_110)(lVar9,lVar6);
      (**(code **)(local_198 + 8))(local_130,puVar1);
      lVar9 = local_100;
    }
    lVar2 = local_f8;
    lVar8 = local_118;
    lVar6 = local_188;
    bVar5 = Swift::Equatable::___infix(local_f8,local_f8,lVar12,local_1c0);
    lVar15 = local_120;
    if (!bVar5) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100685efc);
      (*pcVar16)();
    }
    (*local_200)(local_128,lVar2,lVar12);
    puVar14 = local_158;
    Swift::PartialRangeFrom::init(local_158,puVar11,lVar12,lVar15);
    puVar1 = local_150;
    puVar11 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
               local_150);
    lVar15 = local_1f8;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (lVar6,puVar14,param_7,puVar1,param_8,puVar11);
    lVar2 = local_138;
    uVar7 = local_140;
    lStack_c8 = local_138;
    local_c0 = local_148;
    uStack_b8 = local_1f0;
    local_b0 = lVar8;
    local_d0 = lVar9;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      (**(code **)(local_178 + 0x10))(local_1b0,lVar6,lVar2);
      UVar17.unknown = local_1d8.unknown;
      Swift::Sequence::__copyContents(local_1d8);
      lVar8 = local_1a0;
      _swift_getAssociatedConformanceWitness
                (uVar7,lVar2,local_1a0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      lVar9 = local_1e0;
      Swift::IteratorProtocol::_next();
      pcVar16 = *(code **)(local_108 + 8);
      (*pcVar16)(local_f0,param_7);
      (**(code **)(local_1a8 + 8))(UVar17.unknown,lVar8);
      (*local_110)(lVar6,lVar2);
      (**(code **)(local_1b8 + 8))(local_158,local_150);
      (*local_1e8)(local_f8,lVar12);
      (*pcVar16)(lVar15,param_7);
      lVar15 = lVar9;
      (**(code **)(*(long *)(local_100 + -8) + 0x30))(lVar9,1);
      (**(code **)(local_170 + 8))(lVar9,local_168);
      if ((int)lVar15 == 1) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100685e70);
      (*pcVar16)();
    }
    pcVar16 = *(code **)(local_108 + 8);
    (*pcVar16)(local_f0,param_7);
    (*local_110)(lVar6,lVar2);
    (**(code **)(local_1b8 + 8))(local_158,local_150);
    (*local_1e8)(local_f8,lVar12);
  }
  (*pcVar16)(lVar15,param_7);
  return;
}



/* Address: 0x100685efc | FUN_100685efc */

void FUN_100685efc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Address: 0x100685f04 | FUN_100685f04 */

void FUN_100685f04(undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_100686f74(lVar2,*(undefined8 *)(param_2 + 8),param_2);
  lVar4 = *(long *)(lVar5 + 0x48);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,param_4);
  (**(code **)(lVar5 + 0x20))
            (param_3 + lVar4 * lVar2,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0)
             ,param_4);
  if (!SCARRY8(*(long *)(param_2 + 8),1)) {
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100685fac);
  (*pcVar1)();
}



/* Address: 0x100685fac | FUN_100685fac */

void FUN_100685fac(undefined *param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  Optional OVar2;
  long lVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  UnsafeBufferPointer UVar5;
  UnsafeMutableBufferPointer UVar6;
  UnsafeBufferPointer<undefined> from;
  UnsafePointer<undefined> from_00;
  ulong uVar7;
  ulong count;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined *local_a0;
  ulong local_98;
  char local_90;
  UnsafeBufferPointer<undefined> local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  if (0 < (long)param_2) {
    lVar3 = *(long *)(param_3 + 8);
    if (SCARRY8(lVar3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686180);
      (*pcVar1)();
    }
    *(ulong *)(param_3 + 8) = lVar3 + param_2;
    if ((long)(lVar3 + param_2) < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686184);
      (*pcVar1)();
    }
    FUN_1006879e4(&local_88);
    uVar7 = uStack_80;
    UVar4 = Swift::UnsafeMutableBufferPointer::init(local_88);
    uStack_b8 = uStack_70;
    local_c0 = local_78;
    local_b0 = local_68;
    local_d0 = param_5;
    UVar5 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
    OVar2 = Swift::Optional::typeMetadataAccessor();
    UVar6 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
    FUN_100617fb8(&local_a0,FUN_100688370,auStack_e0,OVar2.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,UVar6.unknown,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_90 == '\x01') || (local_98 == 0)) {
      _swift_getWitnessTable
                (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
                 UVar5.unknown);
      if (param_1 == (undefined *)0x0) {
        return;
      }
      from_00.unknown = param_1;
      local_a0 = UVar4.unknown;
      if ((long)uVar7 < (long)param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100686190);
        (*pcVar1)();
      }
    }
    else {
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100686188);
        (*pcVar1)();
      }
      count = param_2;
      if (uVar7 <= param_2) {
        count = uVar7;
      }
      from = Swift::UnsafeBufferPointer::_init(param_1);
      _swift_getWitnessTable
                (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
                 UVar5.unknown);
      if ((from.unknown != (undefined *)0x0) && (count != 0)) {
        if ((long)uVar7 < (long)count) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100686194);
          (*pcVar1)();
        }
        Swift::UnsafeMutablePointer::initialize
                  ((UnsafePointer<undefined>)from.unknown,count,(UnsafeMutablePointer)UVar4.unknown)
        ;
      }
      if ((long)local_98 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10068618c);
        (*pcVar1)();
      }
      from_00.unknown = (undefined *)0x0;
      if (local_98 <= param_2) {
        from_00.unknown = (undefined *)(param_2 - local_98);
      }
      FUN_1006881b0(from_00.unknown,param_2,param_1,param_2,param_5);
      if (from_00.unknown == (undefined *)0x0) {
        return;
      }
      if (param_2 == 0) {
        return;
      }
      if ((long)local_98 < (long)param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100686198);
        (*pcVar1)();
      }
    }
    Swift::UnsafeMutablePointer::initialize(from_00,param_2,(UnsafeMutablePointer)local_a0);
  }
  return;
}



/* Address: 0x100686198 | FUN_100686198 */

void FUN_100686198(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  UnsafeBufferPointer<undefined> UVar4;
  UnsafeMutableBufferPointer<undefined> UVar5;
  UnsafeMutableBufferPointer<undefined> UVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  UnsafeMutableBufferPointer<undefined> UVar10;
  
  lVar7 = param_2[1];
  lVar9 = param_2[2];
  lVar3 = lVar9;
  FUN_100686f74(lVar9,lVar7,param_2);
  lVar8 = *param_2;
  if (lVar7 < lVar8) {
    if (lVar9 <= lVar3) {
      lVar7 = lVar8 - lVar3;
      if (lVar8 < lVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006862c8);
        (*pcVar1)();
      }
      if (SBORROW8(lVar8,lVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006862cc);
        (*pcVar1)();
      }
      UVar4 = Swift::UnsafeBufferPointer::_init
                        (param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar3);
      UVar5 = Swift::UnsafeMutableBufferPointer::init(UVar4);
      lVar9 = param_2[2];
      if (lVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006862d0);
        (*pcVar1)();
      }
      UVar4 = Swift::UnsafeBufferPointer::_init(param_3);
      UVar6 = Swift::UnsafeMutableBufferPointer::init(UVar4);
      bVar2 = lVar9 == 0;
      UVar10.unknown = (undefined *)0x0;
      if (!bVar2) {
        UVar10 = UVar6;
      }
      goto LAB_1006862a0;
    }
    lVar7 = lVar9 - lVar3;
    if (SBORROW8(lVar9,lVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006862c4);
      (*pcVar1)();
    }
    UVar4 = Swift::UnsafeBufferPointer::_init
                      (param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar3);
    UVar5 = Swift::UnsafeMutableBufferPointer::init(UVar4);
  }
  else {
    lVar7 = 0;
    UVar5 = Swift::UnsafeMutableBufferPointer::_init
                      (param_3 + *(long *)(*(long *)(param_4 + -8) + 0x48) * lVar3);
  }
  lVar9 = 0;
  bVar2 = true;
  UVar10.unknown = (undefined *)0x0;
LAB_1006862a0:
  *param_1 = UVar5.unknown;
  param_1[1] = lVar7;
  param_1[2] = UVar10.unknown;
  param_1[3] = lVar9;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x1006862d0 | FUN_1006862d0 */

void FUN_1006862d0(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    lVar3 = *param_2;
    if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068638c);
      (*pcVar1)();
    }
  }
  else if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100686320);
    (*pcVar1)();
  }
  lVar4 = *(long *)(lVar5 + 0x48);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_1,param_4);
  (**(code **)(lVar5 + 0x20))
            (param_3 + (lVar3 + -1) * lVar4,
             &stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  param_2[2] = lVar3 + -1;
  if (!SCARRY8(param_2[1],1)) {
    param_2[1] = param_2[1] + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100686388);
  (*pcVar1)();
}



/* Address: 0x10068638c | FUN_10068638c */

void FUN_10068638c(undefined8 *param_1,long param_2,__int64 param_3,long *param_4,
                  UnsafeMutablePointer<undefined> param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  __int64 count;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar8 = param_4[1];
  lVar7 = lVar8 - param_3;
  if (SBORROW8(lVar8,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100686910);
    (*pcVar2)();
  }
  count = param_4[2];
  if (lVar7 <= param_3) {
    lVar6 = count;
    FUN_100686f74(count,lVar8,param_4);
    if (SCARRY8(lVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100686918);
      (*pcVar2)();
    }
    FUN_100686f74(count,lVar8 + param_2,param_4);
    lVar9 = 0;
    if (*param_4 <= param_4[2] + param_3) {
      lVar9 = *param_4;
    }
    lVar9 = (param_4[2] + param_3) - lVar9;
    lVar8 = lVar9;
    FUN_100686f74(lVar9,param_2,param_4);
    lVar4 = *param_4;
    lVar5 = lVar6;
    if (lVar6 < 1) {
      lVar5 = lVar4;
    }
    lVar1 = count;
    if (count < 1) {
      lVar1 = lVar4;
    }
    if (lVar5 < lVar9) {
      if (lVar1 < lVar8) {
        if (0 < lVar6) {
          Swift::UnsafeMutablePointer::moveInitialize
                    (param_5,lVar6,
                     (UnsafeMutablePointer)
                     (param_5.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2));
          FUN_100686f74(0,lVar6,param_4);
          FUN_100686f74(param_2,lVar6,param_4);
        }
        if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100686928);
          (*pcVar2)();
        }
        if (0 < param_2) {
          lVar5 = *param_4;
          Swift::UnsafeMutablePointer::moveInitialize
                    ((UnsafeMutablePointer<undefined>)
                     (param_5.unknown +
                     *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar5 - param_2)),param_2,
                     (UnsafeMutablePointer)param_5.unknown);
          FUN_100686f74(lVar5 - param_2,param_2,param_4);
          FUN_100686f74(0,param_2,param_4);
        }
        lVar5 = lVar7 - param_2;
        if (SBORROW8(lVar7,param_2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10068693c);
          (*pcVar2)();
        }
        lVar7 = lVar5 - lVar6;
        if (SBORROW8(lVar5,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100686940);
          (*pcVar2)();
        }
      }
      else {
        if (0 < lVar6) {
          Swift::UnsafeMutablePointer::moveInitialize
                    (param_5,lVar6,
                     (UnsafeMutablePointer)
                     (param_5.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2));
          FUN_100686f74(0,lVar6,param_4);
          FUN_100686f74(param_2,lVar6,param_4);
          lVar4 = *param_4;
        }
        lVar7 = lVar4 - lVar9;
        if (SBORROW8(lVar4,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100686938);
          (*pcVar2)();
        }
      }
    }
    else if (lVar1 < lVar8) {
      if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100686930);
        (*pcVar2)();
      }
      if (0 < count) {
        Swift::UnsafeMutablePointer::moveInitialize
                  ((UnsafeMutablePointer<undefined>)
                   (param_5.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar4 - param_2))
                   ,count,(UnsafeMutablePointer)param_5.unknown);
        FUN_100686f74(lVar4 - param_2,count,param_4);
        FUN_100686f74(0,count,param_4);
      }
      bVar3 = SBORROW8(lVar7,count);
      lVar7 = lVar7 - count;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100686708);
        (*pcVar2)();
      }
    }
    if (0 < lVar7) {
      lVar6 = *(long *)(*(long *)(param_6 + -8) + 0x48);
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)(param_5.unknown + lVar6 * lVar9),lVar7,
                 (UnsafeMutablePointer)(param_5.unknown + lVar6 * lVar8));
      FUN_100686f74(lVar9,lVar7,param_4);
      FUN_100686f74(lVar8,lVar7,param_4);
    }
    if (SCARRY8(param_4[1],param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100686920);
      (*pcVar2)();
    }
    param_4[1] = param_4[1] + param_2;
    if (lVar8 < 1) {
      lVar8 = *param_4;
    }
    goto LAB_1006868c8;
  }
  lVar7 = -param_2;
  if (SBORROW8(0,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100686914);
    (*pcVar2)();
  }
  lVar6 = count;
  FUN_100686f74(count,lVar7,param_4);
  lVar8 = 0;
  if (*param_4 <= param_4[2] + param_3) {
    lVar8 = *param_4;
  }
  lVar8 = (param_4[2] + param_3) - lVar8;
  lVar9 = lVar8;
  FUN_100686f74(lVar8,lVar7,param_4);
  lVar4 = *param_4;
  lVar5 = lVar8;
  if (lVar8 < 1) {
    lVar5 = lVar4;
  }
  lVar1 = lVar9;
  if (lVar9 < 1) {
    lVar1 = lVar4;
  }
  if (lVar5 < count) {
    lVar5 = lVar4 - count;
    if (lVar1 < lVar6) {
      if (SBORROW8(lVar4,count)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100686924);
        (*pcVar2)();
      }
      if (0 < lVar5) {
        lVar4 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((UnsafeMutablePointer<undefined>)(param_5.unknown + lVar4 * count),lVar5,
                   (UnsafeMutablePointer)(param_5.unknown + lVar4 * lVar6));
        FUN_100686f74(count,lVar5,param_4);
        FUN_100686f74(lVar6,lVar5,param_4);
      }
      if (0 < param_2) {
        lVar5 = *param_4;
        Swift::UnsafeMutablePointer::moveInitialize
                  (param_5,param_2,
                   (UnsafeMutablePointer)
                   (param_5.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar5 + lVar7)));
        FUN_100686f74(0,param_2,param_4);
        lVar5 = lVar5 + lVar7;
        lVar7 = param_2;
LAB_10068665c:
        FUN_100686f74(lVar5,lVar7,param_4);
      }
LAB_100686664:
      if (lVar9 < 1) goto LAB_10068689c;
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)
                 (param_5.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2),lVar9,
                 (UnsafeMutablePointer)param_5.unknown);
      FUN_100686f74(param_2,lVar9,param_4);
      lVar7 = 0;
      param_3 = lVar9;
    }
    else {
      if (SBORROW8(lVar4,count)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100686934);
        (*pcVar2)();
      }
      if (0 < lVar5) {
        lVar4 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((UnsafeMutablePointer<undefined>)(param_5.unknown + lVar4 * count),lVar5,
                   (UnsafeMutablePointer)(param_5.unknown + lVar4 * lVar6));
        FUN_100686f74(count,lVar5,param_4);
        FUN_100686f74(lVar6,lVar5,param_4);
      }
      if (lVar8 < 1) goto LAB_10068689c;
      lVar5 = *param_4;
      Swift::UnsafeMutablePointer::moveInitialize
                (param_5,lVar8,
                 (UnsafeMutablePointer)
                 (param_5.unknown + *(long *)(*(long *)(param_6 + -8) + 0x48) * (lVar5 + lVar7)));
      FUN_100686f74(0,lVar8,param_4);
      lVar7 = lVar5 + lVar7;
      param_3 = lVar8;
    }
LAB_100686894:
    FUN_100686f74(lVar7,param_3,param_4);
  }
  else {
    if (lVar1 < lVar6) {
      lVar7 = lVar4 - lVar6;
      if (SBORROW8(lVar4,lVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10068692c);
        (*pcVar2)();
      }
      if (0 < lVar7) {
        lVar5 = *(long *)(*(long *)(param_6 + -8) + 0x48);
        Swift::UnsafeMutablePointer::moveInitialize
                  ((UnsafeMutablePointer<undefined>)(param_5.unknown + lVar5 * count),lVar7,
                   (UnsafeMutablePointer)(param_5.unknown + lVar5 * lVar6));
        FUN_100686f74(count,lVar7,param_4);
        lVar5 = lVar6;
        goto LAB_10068665c;
      }
      goto LAB_100686664;
    }
    if (0 < param_3) {
      lVar7 = *(long *)(*(long *)(param_6 + -8) + 0x48);
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)(param_5.unknown + lVar7 * count),param_3,
                 (UnsafeMutablePointer)(param_5.unknown + lVar7 * lVar6));
      FUN_100686f74(count,param_3,param_4);
      lVar7 = lVar6;
      goto LAB_100686894;
    }
  }
LAB_10068689c:
  param_4[2] = lVar6;
  if (SCARRY8(param_4[1],param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068691c);
    (*pcVar2)();
  }
  param_4[1] = param_4[1] + param_2;
  if (lVar8 < 1) {
    lVar8 = *param_4;
  }
LAB_1006868c8:
  FUN_100688080(&local_88,lVar9,lVar8,param_4,param_5.unknown,param_6);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  *(undefined1 *)(param_1 + 4) = local_68;
  return;
}



/* Address: 0x100686940 | FUN_100686940 */

void FUN_100686940(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if (SBORROW8(param_1[1],1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006869a8);
    (*pcVar3)();
  }
  lVar1 = param_1[2] + param_1[1] + -1;
  lVar2 = 0;
  if (*param_1 <= lVar1) {
    lVar2 = *param_1;
  }
  Swift::UnsafeMutablePointer::move
            ((undefined *)(param_2 + (lVar1 - lVar2) * *(long *)(*(long *)(param_3 + -8) + 0x48)));
  if (!SBORROW8(param_1[1],1)) {
    param_1[1] = param_1[1] + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006869ac);
  (*pcVar3)();
}



/* Address: 0x1006869ac | FUN_1006869ac */

void FUN_1006869ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  Optional OVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer UVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_90;
  long lStack_88;
  char local_80;
  UnsafeBufferPointer<undefined> local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  if (0 < param_1) {
    lVar5 = *(long *)(param_2 + 8);
    if (SBORROW8(lVar5,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686aec);
      (*pcVar1)();
    }
    if (lVar5 < lVar5 - param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686af0);
      (*pcVar1)();
    }
    FUN_1006879e4(&local_78,lVar5 - param_1,lVar5,param_2,param_3,param_4);
    uVar6 = uStack_70;
    UVar3 = Swift::UnsafeMutableBufferPointer::init(local_78);
    uStack_a8 = uStack_60;
    local_b0 = local_68;
    local_a0 = local_58;
    local_c0 = param_4;
    Swift::UnsafeBufferPointer::typeMetadataAccessor();
    OVar2 = Swift::Optional::typeMetadataAccessor();
    UVar4 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
    FUN_100617fb8(&local_90,FUN_100688370,auStack_d0,OVar2.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,UVar4.unknown,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    FUN_100688150(UVar3.unknown,uVar6,param_4);
    if ((local_80 != '\x01') && (lStack_88 != 0)) {
      FUN_100688150(local_90,lStack_88,param_4);
    }
    if (SBORROW8(*(long *)(param_2 + 8),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686af4);
      (*pcVar1)();
    }
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) - param_1;
  }
  return;
}



/* Address: 0x100686af4 | FUN_100686af4 */

void FUN_100686af4(long *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  Swift::UnsafeMutablePointer::move
            ((undefined *)(param_2 + *(long *)(*(long *)(param_3 + -8) + 0x48) * param_1[2]));
  lVar1 = param_1[2] + 1;
  if (SCARRY8(param_1[2],1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100686b54);
    (*pcVar2)();
  }
  if (*param_1 <= lVar1) {
    lVar1 = 0;
  }
  param_1[2] = lVar1;
  if (!SBORROW8(param_1[1],1)) {
    param_1[1] = param_1[1] + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100686b58);
  (*pcVar2)();
}



/* Address: 0x100686b58 | FUN_100686b58 */

void FUN_100686b58(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  Optional OVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer UVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_90;
  long lStack_88;
  char local_80;
  UnsafeBufferPointer<undefined> local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  if (0 < param_1) {
    FUN_1006879e4(&local_78,0,param_1,param_2,param_3,param_4);
    uVar5 = uStack_70;
    UVar3 = Swift::UnsafeMutableBufferPointer::init(local_78);
    uStack_a8 = uStack_60;
    local_b0 = local_68;
    local_a0 = local_58;
    local_c0 = param_4;
    Swift::UnsafeBufferPointer::typeMetadataAccessor();
    OVar2 = Swift::Optional::typeMetadataAccessor();
    UVar4 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
    FUN_100617fb8(&local_90,FUN_100688370,auStack_d0,OVar2.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,UVar4.unknown,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    FUN_100688150(UVar3.unknown,uVar5,param_4);
    if ((local_80 != '\x01') && (lStack_88 != 0)) {
      FUN_100688150(local_90,lStack_88,param_4);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    FUN_100686f74(uVar5,param_1,param_2);
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    if (SBORROW8(*(long *)(param_2 + 8),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686ca0);
      (*pcVar1)();
    }
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) - param_1;
  }
  return;
}



/* Address: 0x100686ca0 | FUN_100686ca0 */

void FUN_100686ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  Optional OVar1;
  UnsafeMutableBufferPointer<undefined> UVar2;
  UnsafeMutableBufferPointer UVar3;
  undefined8 uVar4;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_90;
  long lStack_88;
  char local_80;
  UnsafeBufferPointer<undefined> local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  if (0 < *(long *)(param_1 + 8)) {
    FUN_10068457c(&local_78);
    uVar4 = uStack_70;
    UVar2 = Swift::UnsafeMutableBufferPointer::init(local_78);
    uStack_a8 = uStack_60;
    local_b0 = local_68;
    local_a0 = local_58;
    local_c0 = param_3;
    Swift::UnsafeBufferPointer::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    UVar3 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
    FUN_100617fb8(&local_90,FUN_100688370,auStack_d0,OVar1.value,
                  PTR___type_metadata_for_Swift_Never_100eadc38,UVar3.unknown,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    FUN_100688150(UVar2.unknown,uVar4,param_3);
    if ((local_80 != '\x01') && (lStack_88 != 0)) {
      FUN_100688150(local_90,lStack_88,param_3);
    }
    *(long *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Address: 0x100686db0 | FUN_100686db0 */

void FUN_100686db0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Address: 0x100686db8 | FUN_100686db8 */

void FUN_100686db8(UnsafePointer<undefined> param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  UnsafeBufferPointer UVar2;
  UnsafeBufferPointer<undefined> from;
  undefined *puVar3;
  ulong count;
  undefined8 uVar4;
  UnsafeMutablePointer local_88;
  ulong local_80;
  undefined *local_78;
  ulong uStack_70;
  char local_68;
  
  if (0 < (long)param_2) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    FUN_100686f74(uVar4,-param_2);
    *(undefined8 *)(param_3 + 0x10) = uVar4;
    if (SCARRY8(*(long *)(param_3 + 8),param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f60);
      (*pcVar1)();
    }
    *(ulong *)(param_3 + 8) = *(long *)(param_3 + 8) + param_2;
    FUN_100688080(&local_88);
    if (local_68 == '\x01') {
      UVar2 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
      _swift_getWitnessTable
                (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
                 UVar2.unknown);
      if (param_1.unknown != (undefined *)0x0) {
        local_78 = local_88.unknown;
        if ((long)local_80 < (long)param_2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f6c);
          (*pcVar1)();
        }
LAB_100686f14:
        Swift::UnsafeMutablePointer::initialize(param_1,param_2,(UnsafeMutablePointer)local_78);
        return;
      }
    }
    else {
      if ((long)local_80 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f64);
        (*pcVar1)();
      }
      count = param_2;
      if (local_80 <= param_2) {
        count = local_80;
      }
      from = Swift::UnsafeBufferPointer::_init(param_1.unknown);
      UVar2 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
      _swift_getWitnessTable
                (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
                 UVar2.unknown);
      if ((from.unknown != (undefined *)0x0) && (count != 0)) {
        if ((long)local_80 < (long)count) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f70);
          (*pcVar1)();
        }
        Swift::UnsafeMutablePointer::initialize
                  ((UnsafePointer<undefined>)from.unknown,count,local_88);
      }
      if ((long)uStack_70 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f68);
        (*pcVar1)();
      }
      puVar3 = (undefined *)0x0;
      if (uStack_70 <= param_2) {
        puVar3 = (undefined *)(param_2 - uStack_70);
      }
      FUN_1006881b0(puVar3,param_2,param_1.unknown,param_2,param_5);
      if ((puVar3 != (undefined *)0x0) && (param_2 != 0)) {
        param_1.unknown = puVar3;
        if ((long)uStack_70 < (long)param_2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f74);
          (*pcVar1)();
        }
        goto LAB_100686f14;
      }
    }
  }
  return;
}



/* Address: 0x100686f74 | FUN_100686f74 */

long FUN_100686f74(long param_1,long param_2,long *param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1 + param_2;
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100686fb0);
    (*pcVar1)();
  }
  if (param_2 < 0) {
    if ((lVar3 < 0) && (bVar2 = SCARRY8(lVar3,*param_3), lVar3 = lVar3 + *param_3, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686fb4);
      (*pcVar1)();
    }
  }
  else {
    lVar4 = *param_3;
    bVar2 = SBORROW8(lVar3,lVar4);
    if ((lVar4 <= lVar3) && (lVar3 = lVar3 - lVar4, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100686f98);
      (*pcVar1)();
    }
  }
  return lVar3;
}



/* Address: 0x100686fb4 | FUN_100686fb4 */

void FUN_100686fb4(long param_1,long param_2,long *param_3,UnsafeMutablePointer<undefined> param_4,
                  long param_5)

{
  long lVar1;
  long count;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  count = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874dc);
    (*pcVar2)();
  }
  if (count < 1) {
    return;
  }
  lVar7 = param_3[1];
  lVar9 = param_3[2];
  lVar6 = *param_3;
  lVar8 = 0;
  if (lVar6 <= lVar9 + param_1) {
    lVar8 = lVar6;
  }
  lVar10 = 0;
  if (lVar6 <= lVar9 + param_2) {
    lVar10 = lVar6;
  }
  lVar6 = lVar7 - param_2;
  if (SBORROW8(lVar7,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874e0);
    (*pcVar2)();
  }
  lVar8 = (lVar9 + param_1) - lVar8;
  lVar10 = (lVar9 + param_2) - lVar10;
  if (lVar6 <= param_1) {
    FUN_100686f74(lVar9,lVar7,param_3);
    if (SBORROW8(lVar7,count)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874e4);
      (*pcVar2)();
    }
    lVar5 = *param_3;
    lVar7 = param_3[2] + (lVar7 - count);
    lVar4 = 0;
    if (lVar5 <= lVar7) {
      lVar4 = lVar5;
    }
    if (lVar6 != 0) {
      lVar7 = lVar7 - lVar4;
      lVar4 = lVar7;
      if (lVar7 < 1) {
        lVar4 = lVar5;
      }
      lVar1 = lVar9;
      if (lVar9 < 1) {
        lVar1 = lVar5;
      }
      if (lVar10 < lVar1) {
        if (lVar4 < lVar8) {
          lVar7 = lVar5 - lVar8;
          if (SBORROW8(lVar5,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874f4);
            (*pcVar2)();
          }
          if (0 < lVar7) {
            lVar9 = *(long *)(*(long *)(param_5 + -8) + 0x48);
            Swift::UnsafeMutablePointer::moveInitialize
                      ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar9 * lVar10),lVar7,
                       (UnsafeMutablePointer)(param_4.unknown + lVar9 * lVar8));
            FUN_100686f74(lVar10,lVar7,param_3);
            FUN_100686f74(lVar8,lVar7,param_3);
          }
          if (SBORROW8(lVar6,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100687504);
            (*pcVar2)();
          }
          if (0 < lVar6 - lVar7) {
            lVar4 = *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar10;
            lVar9 = lVar6 - lVar7;
LAB_1006872c4:
            Swift::UnsafeMutablePointer::moveInitialize
                      ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar4),lVar9,
                       (UnsafeMutablePointer)param_4.unknown);
            FUN_100686f74(lVar10,lVar9,param_3);
            lVar8 = 0;
LAB_1006874a4:
            FUN_100686f74(lVar8,lVar9,param_3);
          }
        }
        else if (0 < lVar6) {
          lVar7 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          Swift::UnsafeMutablePointer::moveInitialize
                    ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar7 * lVar10),lVar6,
                     (UnsafeMutablePointer)(param_4.unknown + lVar7 * lVar8));
          FUN_100686f74(lVar10,lVar6,param_3);
          lVar9 = lVar6;
          goto LAB_1006874a4;
        }
      }
      else {
        lVar6 = lVar5 - lVar10;
        if (lVar4 < lVar8) {
          if (SBORROW8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874f8);
            (*pcVar2)();
          }
          lVar4 = *(long *)(*(long *)(param_5 + -8) + 0x48);
          if (0 < lVar6) {
            Swift::UnsafeMutablePointer::moveInitialize
                      ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar4 * lVar10),lVar6,
                       (UnsafeMutablePointer)(param_4.unknown + lVar4 * lVar8));
            FUN_100686f74(lVar10,lVar6,param_3);
            FUN_100686f74(lVar8,lVar6,param_3);
          }
          Swift::UnsafeMutablePointer::moveInitialize
                    (param_4,count,(UnsafeMutablePointer)(param_4.unknown + lVar4 * lVar8));
          lVar10 = 0;
          FUN_100686f74(0,count,param_3);
          FUN_100686f74(lVar8,count,param_3);
          if (0 < lVar7) {
            lVar4 = lVar10 * lVar4;
            lVar9 = lVar7;
            goto LAB_1006872c4;
          }
        }
        else {
          if (SBORROW8(lVar5,lVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100687500);
            (*pcVar2)();
          }
          if (0 < lVar6) {
            lVar7 = *(long *)(*(long *)(param_5 + -8) + 0x48);
            Swift::UnsafeMutablePointer::moveInitialize
                      ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar7 * lVar10),lVar6,
                       (UnsafeMutablePointer)(param_4.unknown + lVar7 * lVar8));
            FUN_100686f74(lVar10,lVar6,param_3);
            FUN_100686f74(lVar8,lVar6,param_3);
          }
          if (0 < lVar9) {
            Swift::UnsafeMutablePointer::moveInitialize
                      (param_4,lVar9,
                       (UnsafeMutablePointer)
                       (param_4.unknown + *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar8));
            FUN_100686f74(0,lVar9,param_3);
            goto LAB_1006874a4;
          }
        }
      }
    }
    lVar8 = param_3[1] - count;
    if (SBORROW8(param_3[1],count)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874e8);
      (*pcVar2)();
    }
    goto LAB_1006874b8;
  }
  lVar7 = lVar9;
  FUN_100686f74(lVar9,count,param_3);
  if (param_1 != 0) {
    lVar4 = *param_3;
    lVar6 = lVar10;
    if (lVar10 < 1) {
      lVar6 = lVar4;
    }
    lVar5 = lVar8;
    if (lVar8 < 1) {
      lVar5 = lVar4;
    }
    if (lVar9 < lVar5) {
      if (lVar6 < lVar7) {
        if (0 < lVar10) {
          Swift::UnsafeMutablePointer::moveInitialize
                    ((UnsafeMutablePointer<undefined>)
                     (param_4.unknown + *(long *)(*(long *)(param_5 + -8) + 0x48) * (lVar4 - count))
                     ,lVar10,(UnsafeMutablePointer)param_4.unknown);
          FUN_100686f74(lVar4 - count,lVar10,param_3);
          FUN_100686f74(0,lVar10,param_3);
        }
        lVar8 = lVar10;
        if (SBORROW8(param_1,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006870b8);
          (*pcVar2)();
        }
LAB_100687370:
        param_1 = param_1 - lVar8;
        if (param_1 < 1) goto LAB_1006873b8;
        lVar9 = param_3[2];
        lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
        lVar8 = lVar6 * lVar9;
        goto LAB_10068738c;
      }
      if (param_1 < 1) goto LAB_1006873b8;
      lVar8 = *(long *)(*(long *)(param_5 + -8) + 0x48);
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar8 * lVar9),param_1,
                 (UnsafeMutablePointer)(param_4.unknown + lVar8 * lVar7));
    }
    else {
      if (lVar7 <= lVar6) {
        if (SBORROW8(0,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874f0);
          (*pcVar2)();
        }
        if (0 < lVar8) {
          Swift::UnsafeMutablePointer::moveInitialize
                    (param_4,lVar8,
                     (UnsafeMutablePointer)
                     (param_4.unknown + *(long *)(*(long *)(param_5 + -8) + 0x48) * (lVar10 - lVar8)
                     ));
          FUN_100686f74(0,lVar8,param_3);
          FUN_100686f74(lVar10 - lVar8,lVar8,param_3);
        }
        if (SBORROW8(param_1,lVar8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874fc);
          (*pcVar2)();
        }
        goto LAB_100687370;
      }
      lVar6 = *(long *)(*(long *)(param_5 + -8) + 0x48);
      if (0 < lVar8) {
        Swift::UnsafeMutablePointer::moveInitialize
                  (param_4,lVar8,(UnsafeMutablePointer)(param_4.unknown + lVar6 * count));
        FUN_100686f74(0,lVar8,param_3);
        FUN_100686f74(count,lVar8,param_3);
        lVar4 = *param_3;
      }
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar6 * (lVar4 - count)),count,
                 (UnsafeMutablePointer)param_4.unknown);
      FUN_100686f74(lVar4 - count,count,param_3);
      FUN_100686f74(0,count,param_3);
      bVar3 = SBORROW8(param_1,lVar10);
      param_1 = param_1 - lVar10;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006874ec);
        (*pcVar2)();
      }
      if (param_1 < 1) goto LAB_1006873b8;
      lVar9 = param_3[2];
      lVar8 = lVar9 * lVar6;
LAB_10068738c:
      Swift::UnsafeMutablePointer::moveInitialize
                ((UnsafeMutablePointer<undefined>)(param_4.unknown + lVar8),param_1,
                 (UnsafeMutablePointer)(param_4.unknown + lVar6 * lVar7));
    }
    FUN_100686f74(lVar9,param_1,param_3);
    FUN_100686f74(lVar7,param_1,param_3);
  }
LAB_1006873b8:
  param_3[2] = lVar7;
  lVar8 = param_3[1] - count;
  if (SBORROW8(param_3[1],count)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006873cc);
    (*pcVar2)();
  }
LAB_1006874b8:
  param_3[1] = lVar8;
  return;
}



/* Address: 0x100687504 | FUN_100687504 */

void FUN_100687504(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  Optional OVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  UnsafeMutableBufferPointer UVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  long lStack_78;
  char local_70;
  UnsafeBufferPointer<undefined> local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  FUN_10068457c(&local_68);
  uVar6 = uStack_60;
  UVar4 = Swift::UnsafeMutableBufferPointer::init(local_68);
  uStack_98 = uStack_50;
  local_a0 = local_58;
  local_90 = local_48;
  local_b0 = param_4;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  UVar5 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_80,FUN_100688370,auStack_c0,OVar3.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar5.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar2 = 0;
  if (lStack_78 != 0) {
    uVar2 = local_80;
  }
  cVar1 = local_70;
  if (lStack_78 == 0 || local_70 == '\x01') {
    cVar1 = '\x01';
  }
  if (local_70 != '\x01') {
    local_80 = uVar2;
  }
  *param_1 = UVar4.unknown;
  param_1[1] = uVar6;
  param_1[2] = local_80;
  param_1[3] = lStack_78;
  *(char *)(param_1 + 4) = cVar1;
  return;
}



/* Address: 0x1006875f4 | FUN_1006875f4 */

undefined * FUN_1006875f4(__int64 *param_1,__int64 *param_2,__int64 *param_3)

{
  ManagedBuffer *this;
  __int64 minimumCapacity;
  ManagedBufferPointer<undefined,undefined> MVar1;
  undefined *puVar2;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  __int64 *local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  __int64 *local_70;
  __int64 *p_Stack_68;
  __int64 *local_60;
  
  this = (ManagedBuffer *)0x0;
  FUN_1006886d0(0,param_3);
  minimumCapacity = *param_1;
  local_70 = param_1;
  p_Stack_68 = param_2;
  Swift::ManagedBuffer::_create(this,minimumCapacity);
  _swift_retain();
  MVar1 = Swift::ManagedBufferPointer::_init();
  if (0 < param_1[1]) {
    pcStack_98 = FUN_10068827c;
    puVar2 = &DAT_100fda040;
    local_a0 = param_3;
    local_90 = auStack_80;
    local_70 = param_3;
    p_Stack_68 = param_1;
    local_60 = param_2;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_10067f650,auStack_b0,MVar1.unknown,&DAT_100ef5140,param_3,puVar2,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
  }
  _swift_release(minimumCapacity);
  return MVar1.unknown;
}



/* Address: 0x100687708 | FUN_100687708 */

undefined * FUN_100687708(__int64 param_1,long param_2,undefined8 param_3,long param_4)

{
  ManagedBuffer *this;
  ManagedBufferPointer<undefined,undefined> MVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  long local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  long local_70;
  long lStack_68;
  undefined8 local_60;
  
  lVar3 = *(long *)(param_2 + 8);
  this = (ManagedBuffer *)0x0;
  FUN_1006886d0(0,param_4);
  local_70 = lVar3;
  Swift::ManagedBuffer::_create(this,param_1);
  _swift_retain();
  MVar1 = Swift::ManagedBufferPointer::_init();
  if (0 < lVar3) {
    pcStack_98 = FUN_1006882d8;
    puVar2 = &DAT_100fda040;
    local_a0 = param_4;
    local_90 = auStack_80;
    local_70 = param_4;
    lStack_68 = param_2;
    local_60 = param_3;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_b0,MVar1.unknown,&DAT_100ef5140,param_4,puVar2,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
    *(undefined8 *)(param_2 + 8) = 0;
  }
  _swift_release(param_1);
  return MVar1.unknown;
}



/* Address: 0x100687828 | FUN_100687828 */

undefined * FUN_100687828(__int64 param_1,long param_2,long param_3,long param_4)

{
  ManagedBuffer *this;
  ManagedBufferPointer<undefined,undefined> MVar1;
  undefined *puVar2;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  long local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  long local_70;
  long lStack_68;
  long local_60;
  
  this = (ManagedBuffer *)0x0;
  FUN_1006886d0(0,param_4);
  local_70 = param_2;
  lStack_68 = param_3;
  Swift::ManagedBuffer::_create(this,param_1);
  _swift_retain();
  MVar1 = Swift::ManagedBufferPointer::_init();
  if (0 < *(long *)(param_2 + 8)) {
    pcStack_98 = FUN_100688338;
    puVar2 = &DAT_100fda040;
    local_a0 = param_4;
    local_90 = auStack_80;
    local_70 = param_4;
    lStack_68 = param_2;
    local_60 = param_3;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_b0,MVar1.unknown,&DAT_100ef5140,param_4,puVar2,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
  }
  _swift_release(param_1);
  return MVar1.unknown;
}



/* Address: 0x100687944 | FUN_100687944 */

undefined8 FUN_100687944(undefined8 *param_1)

{
  return *param_1;
}



/* Address: 0x100687954 | FUN_100687954 */

undefined1  [16] FUN_100687954(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = param_2;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100687970;
  return auVar1;
}



/* Address: 0x100687970 | FUN_100687970 */

void FUN_100687970(undefined8 *param_1)

{
  *(undefined8 *)(param_1[1] + 8) = *param_1;
  return;
}



/* Address: 0x10068797c | FUN_10068797c */

undefined1  [16] FUN_10068797c(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = param_2;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100687998;
  return auVar1;
}



/* Address: 0x100687998 | FUN_100687998 */

void FUN_100687998(undefined8 *param_1)

{
  *(undefined8 *)(param_1[1] + 0x10) = *param_1;
  return;
}



/* Address: 0x1006879a4 | FUN_1006879a4 */

long FUN_1006879a4(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + 1;
  if (!SCARRY8(param_1,1)) {
    if (*param_2 <= lVar1) {
      lVar1 = 0;
    }
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006879c0);
  (*pcVar2)();
}



/* Address: 0x1006879c0 | FUN_1006879c0 */

long FUN_1006879c0(long param_1,long *param_2)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    param_1 = *param_2;
    if (SBORROW8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006879e4);
      (*pcVar1)();
    }
  }
  else if (SBORROW8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006879d0);
    (*pcVar1)();
  }
  return param_1 + -1;
}



/* Address: 0x1006879e4 | FUN_1006879e4 */

void FUN_1006879e4(undefined8 *param_1,long param_2,long param_3,long *param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  UnsafeBufferPointer<undefined> UVar4;
  UnsafeBufferPointer<undefined> UVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *param_4;
  lVar9 = param_4[2] + param_2;
  lVar1 = 0;
  if (lVar8 <= lVar9) {
    lVar1 = lVar8;
  }
  lVar10 = param_4[2] + param_3;
  lVar2 = 0;
  if (lVar8 <= lVar10) {
    lVar2 = lVar8;
  }
  lVar6 = param_3 - param_2;
  if (!SBORROW8(param_3,param_2)) {
    lVar9 = lVar9 - lVar1;
    if ((lVar6 == 0) || (lVar10 = lVar10 - lVar2, lVar9 < lVar10)) {
      UVar4 = Swift::UnsafeBufferPointer::_init
                        (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * lVar9);
      UVar5.unknown = (undefined *)0x0;
      lVar10 = 0;
      uVar7 = 1;
    }
    else {
      lVar6 = lVar8 - lVar9;
      if (SBORROW8(lVar8,lVar9)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100687acc);
        (*pcVar3)();
      }
      UVar4 = Swift::UnsafeBufferPointer::_init
                        (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * lVar9);
      UVar5 = Swift::UnsafeBufferPointer::_init(param_5);
      uVar7 = 0;
    }
    *param_1 = UVar4.unknown;
    param_1[1] = lVar6;
    param_1[2] = UVar5.unknown;
    param_1[3] = lVar10;
    *(undefined1 *)(param_1 + 4) = uVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100687ac8);
  (*pcVar3)();
}



/* Address: 0x100687acc | FUN_100687acc */

void FUN_100687acc(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  Optional OVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  UnsafeMutableBufferPointer UVar5;
  undefined8 uVar6;
  undefined8 in_x4;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  long lStack_78;
  char local_70;
  UnsafeBufferPointer<undefined> local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  FUN_1006879e4(&local_68);
  uVar6 = uStack_60;
  UVar4 = Swift::UnsafeMutableBufferPointer::init(local_68);
  uStack_98 = uStack_50;
  local_a0 = local_58;
  local_90 = local_48;
  local_b0 = in_x4;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  UVar5 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_80,FUN_100688370,auStack_c0,OVar3.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar5.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar2 = 0;
  if (lStack_78 != 0) {
    uVar2 = local_80;
  }
  cVar1 = local_70;
  if (lStack_78 == 0 || local_70 == '\x01') {
    cVar1 = '\x01';
  }
  if (local_70 != '\x01') {
    local_80 = uVar2;
  }
  *param_1 = UVar4.unknown;
  param_1[1] = uVar6;
  param_1[2] = local_80;
  param_1[3] = lStack_78;
  *(char *)(param_1 + 4) = cVar1;
  return;
}



/* Address: 0x100687bbc | FUN_100687bbc */

void FUN_100687bbc(void)

{
  FUN_100687bd4();
  return;
}



/* Address: 0x100687bc8 | FUN_100687bc8 */

void FUN_100687bc8(void)

{
  FUN_100687bd4();
  return;
}



/* Address: 0x100687bd4 | FUN_100687bd4 */

long FUN_100687bd4(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,code *param_7)

{
  code *pcVar1;
  bool bVar2;
  
  if (0 < param_3) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100687c30);
      (*pcVar1)();
    }
    (*param_7)(param_2,param_3,param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_1,param_6
              );
    bVar2 = SCARRY8(param_1,param_3);
    param_1 = param_1 + param_3;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100687c2c);
      (*pcVar1)();
    }
  }
  return param_1;
}



/* Address: 0x100687c30 | FUN_100687c30 */

undefined1  [16]
FUN_100687c30(long param_1,long param_2,__int64 param_3,undefined8 param_4,long param_5,long param_6
             )

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (0 < param_3) {
    lVar1 = *(long *)(*(long *)(param_6 + -8) + 0x48);
    Swift::UnsafeMutablePointer::moveInitialize
              ((undefined *)(param_5 + lVar1 * param_1),param_3,
               (undefined *)(param_5 + lVar1 * param_2));
    FUN_100686f74(param_1,param_3,param_4);
    FUN_100686f74(param_2,param_3,param_4);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x100687cb4 | FUN_100687cb4 */

void FUN_100687cb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_38;
  
  FUN_10068457c(&local_58,param_3,param_4,param_5);
  FUN_100687bbc(*(undefined8 *)(param_3 + 0x10),local_58,uStack_50);
  if (local_38 != '\x01') {
    FUN_100687bbc(0,local_48,uStack_40);
  }
  return;
}



/* Address: 0x100687d38 | FUN_100687d38 */

void FUN_100687d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_58;
  undefined8 uStack_50;
  char local_38;
  
  FUN_10068457c(&local_58,param_3,param_4,param_5);
  FUN_100687bbc(0,local_58,uStack_50);
  if (local_38 != '\x01') {
    FUN_100687bbc();
  }
  return;
}



/* Address: 0x100687db4 | FUN_100687db4 */

void FUN_100687db4(undefined8 param_1,UnsafeMutablePointer param_2,undefined8 param_3,
                  undefined8 param_4,long param_5)

{
  code *pcVar1;
  Optional OVar2;
  UnsafeMutableBufferPointer<undefined> from;
  UnsafeMutableBufferPointer UVar3;
  long count;
  undefined1 auStack_d0 [16];
  long local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  UnsafeMutablePointer<undefined> local_90;
  long lStack_88;
  char local_80;
  UnsafeBufferPointer<undefined> local_78;
  __int64 _Stack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  FUN_10068457c(&local_78,param_3,param_4,param_5);
  count = _Stack_70;
  from = Swift::UnsafeMutableBufferPointer::init(local_78);
  uStack_a8 = uStack_60;
  local_b0 = local_68;
  local_a0 = local_58;
  local_c0 = param_5;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  UVar3 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_90,FUN_100688370,auStack_d0,OVar2.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar3.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (count < 1) {
    count = 0;
  }
  else {
    if (from.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100687f04);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::moveInitialize
              ((UnsafeMutablePointer<undefined>)from.unknown,count,param_2);
  }
  if ((local_80 != '\x01') && (0 < lStack_88)) {
    if (local_90.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100687f08);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::moveInitialize
              (local_90,lStack_88,
               (UnsafeMutablePointer)
               (param_2.unknown + *(long *)(*(long *)(param_5 + -8) + 0x48) * count));
  }
  return;
}



/* Address: 0x100687f08 | FUN_100687f08 */

long FUN_100687f08(undefined8 param_1,long param_2,long param_3,char param_4,code *param_5,
                  undefined8 param_6,long *param_7,long param_8,long param_9,long param_10)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  code *local_78;
  long local_70;
  undefined8 uStack_68;
  
  local_70 = *(long *)(param_10 + -8);
  uVar3 = *(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_90 + -uVar3;
  lVar7 = param_7[1];
  uStack_68 = param_1;
  if (param_2 < lVar7) {
    lVar2 = param_7[2];
    local_88 = param_3;
    local_80 = param_8;
    local_78 = param_5;
    FUN_100686f74(lVar2,lVar7,param_7);
    lVar5 = *param_7;
    lVar4 = 0;
    if (lVar5 <= param_7[2] + param_2) {
      lVar4 = lVar5;
    }
    lVar4 = (param_7[2] + param_2) - lVar4;
    if (lVar2 <= lVar4) {
      lVar2 = lVar5;
    }
    lVar5 = lVar2 - lVar4;
    if (SBORROW8(lVar2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100688080);
      (*pcVar1)();
    }
    lVar2 = lVar5;
    if (local_88 <= lVar5) {
      lVar2 = local_88;
    }
    if (param_4 != '\x01') {
      lVar5 = lVar2;
    }
    Swift::UnsafeBufferPointer::_init(local_80 + *(long *)(*(long *)(param_9 + -8) + 0x48) * lVar4);
    (*local_78)(puVar6 + -uVar3);
    if (unaff_x21 != 0) {
      return lVar7;
    }
    lVar7 = param_2 + lVar5;
    puVar6 = puVar6 + -uVar3;
    if (SCARRY8(param_2,lVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100688014);
      (*pcVar1)();
    }
  }
  else {
    Swift::UnsafeBufferPointer::_init(0);
    (*param_5)(puVar6);
    if (unaff_x21 != 0) {
      return lVar7;
    }
  }
  (**(code **)(local_70 + 0x20))(uStack_68,puVar6,param_10);
  return lVar7;
}



/* Address: 0x100688080 | FUN_100688080 */

void FUN_100688080(undefined8 *param_1,long param_2,long param_3,long *param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  bool bVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  long lVar5;
  UnsafeMutableBufferPointer<undefined> UVar6;
  
  if (param_2 < param_3) {
    lVar5 = param_3 - param_2;
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068814c);
      (*pcVar1)();
    }
    UVar3 = Swift::UnsafeMutableBufferPointer::_init
                      (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2);
    param_3 = 0;
    bVar2 = true;
    UVar6.unknown = (undefined *)0x0;
  }
  else {
    lVar5 = *param_4 - param_2;
    if (SBORROW8(*param_4,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100688150);
      (*pcVar1)();
    }
    UVar3 = Swift::UnsafeMutableBufferPointer::_init
                      (param_5 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_2);
    UVar4 = Swift::UnsafeMutableBufferPointer::_init(param_5);
    bVar2 = param_3 == 0;
    UVar6.unknown = (undefined *)0x0;
    if (!bVar2) {
      UVar6 = UVar4;
    }
  }
  *param_1 = UVar3.unknown;
  param_1[1] = lVar5;
  param_1[2] = UVar6.unknown;
  param_1[3] = param_3;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x100688150 | FUN_100688150 */

undefined1  [16] FUN_100688150(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    _swift_arrayDestroy();
    lVar3 = *(long *)(*(long *)(param_3 + -8) + 0x48);
    lVar2 = param_2 * lVar3;
    if (SUB168(SEXT816(param_2) * SEXT816(lVar3),8) != lVar2 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006881b0);
      (*pcVar1)();
    }
    lVar2 = param_1 + lVar2;
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x1006881b0 | FUN_1006881b0 */

void FUN_1006881b0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if ((param_1 < 0) || (param_4 < param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006881f0);
    (*pcVar1)();
  }
  if (param_3 == 0) {
    Swift::UnsafeBufferPointer::_init(0);
    return;
  }
  if (!SBORROW8(param_2,param_1)) {
    Swift::UnsafeBufferPointer::_init(param_3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1)
    ;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006881f4);
  (*pcVar1)();
}



/* Address: 0x1006881f4 | FUN_1006881f4 */

void FUN_1006881f4(long *param_1,UnsafePointer<undefined> param_2,long param_3,
                  UnsafeMutablePointer param_4,long param_5)

{
  code *pcVar1;
  
  if (param_2.unknown == (undefined *)0x0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (param_5 < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100688250);
      (*pcVar1)();
    }
    Swift::UnsafeMutablePointer::initialize(param_2,param_3,param_4);
  }
  *param_1 = param_3;
  return;
}



/* Address: 0x100688250 | FUN_100688250 */

void FUN_100688250(void)

{
  FUN_1005fb664();
  return;
}



/* Address: 0x100688264 | FUN_100688264 */

void FUN_100688264(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[2];
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10068827c | FUN_10068827c */

void FUN_10068827c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100687cb4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100688298 | FUN_100688298 */

void FUN_100688298(__int64 *param_1,ManagedBuffer *param_2)

{
  __int64 _Var1;
  long unaff_x20;
  __int64 _Var2;
  
  _Var2 = *(__int64 *)(unaff_x20 + 0x10);
  _Var1 = Swift::ManagedBuffer::get_capacity(param_2,param_2);
  *param_1 = _Var1;
  param_1[1] = _Var2;
  param_1[2] = 0;
  return;
}



/* Address: 0x1006882d8 | FUN_1006882d8 */

void FUN_1006882d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100687db4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006882f4 | FUN_1006882f4 */

void FUN_1006882f4(__int64 *param_1,ManagedBuffer *param_2)

{
  __int64 _Var1;
  __int64 _Var2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _Var1 = Swift::ManagedBuffer::get_capacity(param_2,param_2);
  _Var2 = *(__int64 *)(lVar3 + 8);
  *param_1 = _Var1;
  param_1[1] = _Var2;
  param_1[2] = 0;
  return;
}



/* Address: 0x100688338 | FUN_100688338 */

void FUN_100688338(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100687d38(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100688354 | FUN_100688354 */

void FUN_100688354(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100688360 | FUN_100688360 */

void FUN_100688360(void)

{
  return;
}



/* Address: 0x100688364 | FUN_100688364 */

void FUN_100688364(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100688370 | FUN_100688370 */

void FUN_100688370(void)

{
  FUN_1006834ec();
  return;
}



/* Address: 0x100688384 | thunk_FUN_100642528 */

void thunk_FUN_100642528(void)

{
  FUN_100642528();
  return;
}



/* Address: 0x100688388 | FUN_100688388 */

void FUN_100688388(void)

{
  FUN_100688250();
  return;
}


