/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10067c7b0 | FUN_10067c7b0 */

void FUN_10067c7b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  undefined1 *puVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  UnsafeBufferPointer<undefined> mutating;
  UnsafeMutableBufferPointer<undefined> UVar5;
  undefined1 *puVar6;
  long lVar7;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  initializing;
  undefined8 uVar8;
  undefined1 auStack_100 [8];
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  char local_b0;
  char local_a8;
  long local_90;
  long lStack_88;
  long local_80;
  undefined *puStack_78;
  long local_70;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var,OVar3.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  local_d8 = auStack_100 + -(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(param_6 + -8);
  lVar7 = (long)local_d8 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(param_7 + 8);
  lVar4 = 0;
  local_e0 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,uVar8,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_f8 = *(long *)(lVar4 + -8);
  initializing.unknown =
       (undefined *)(lVar7 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ca2c);
    (*pcVar2)();
  }
  mutating.unknown = (undefined *)0x0;
  local_f0 = lVar4;
  local_c0 = param_1;
  lStack_b8 = param_3;
  FUN_100684644(0,param_3,param_1,param_2,param_5);
  UVar5 = Swift::UnsafeMutableBufferPointer::init(mutating);
  local_90 = param_5;
  lStack_88 = param_6;
  local_80 = param_7;
  puStack_78 = UVar5.unknown;
  local_70 = param_3;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_b0 == '\x01') {
    local_90 = param_5;
    lStack_88 = param_6;
    local_80 = param_7;
    puStack_78 = UVar5.unknown;
    local_70 = param_3;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_a8 == '\x01') {
      (**(code **)(local_e8 + 0x10))(local_e0,param_4,param_6);
      Swift::Sequence::__copyContents(initializing);
      lVar4 = local_f0;
      _swift_getAssociatedConformanceWitness
                (uVar8,param_6,local_f0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      puVar1 = local_d8;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_f8 + 8))(initializing.unknown,lVar4);
      puVar6 = puVar1;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(puVar1,1,param_5);
      (**(code **)(local_d0 + 8))(puVar1,lStack_c8);
      if ((int)puVar6 != 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067ca30);
        (*pcVar2)();
      }
    }
  }
  *(long *)(local_c0 + 8) = lStack_b8;
  return;
}



/* Address: 0x10067ca30 | FUN_10067ca30 */

void FUN_10067ca30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  UnsafeBufferPointer UVar1;
  undefined *puVar2;
  undefined1 auStack_48 [8];
  
  UVar1 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
             UVar1.unknown);
  FUN_1006881f4(auStack_48,param_1,param_2,param_3,param_4,param_5,UVar1.unknown,puVar2);
  return;
}



/* Address: 0x10067cac0 | FUN_10067cac0 */

void FUN_10067cac0(UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
                   param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  Optional OVar4;
  undefined7 extraout_var;
  __int64 _Var5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_a0;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  byte local_70;
  
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lStack_f8 = CONCAT71(extraout_var,OVar4.value);
  local_100 = *(long *)(lStack_f8 + -8);
  uVar8 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_110 + -uVar8;
  lVar9 = (long)puVar10 - uVar8;
  lVar13 = *(long *)(param_5 + -8);
  uVar8 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar9 - uVar8;
  lVar11 = lVar17 - uVar8;
  lVar16 = lVar11 - uVar8;
  lVar14 = *(long *)(param_6 + -8);
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar16 - uVar8;
  lVar18 = lVar12 - uVar8;
  FUN_100686198(&local_90,param_2,param_3,param_5);
  pcVar15 = *(code **)(lVar14 + 0x10);
  (*pcVar15)(lVar18,param_4,param_6);
  local_f0 = CONCAT44(local_f0._4_4_,(uint)local_70);
  if ((local_70 == 1) || (_Var5 = Swift::Sequence::get_underestimatedCount(), _Var5 <= lStack_88)) {
    (*pcVar15)(lVar12,lVar18,param_6);
    local_a0 = (long)Swift::Sequence::__copyContents(param_1);
    puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
    if (local_a0 == lStack_88 && (int)local_f0 != 1) {
      if (lStack_78 < 1) {
        lStack_78 = 0;
      }
      else {
        local_108 = lStack_88;
        uVar6 = 0;
        local_f0 = lVar18;
        _swift_getAssociatedTypeWitness
                  (0,param_7,param_6,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                   PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
        _swift_getAssociatedConformanceWitness
                  (param_7,param_6,uVar6,puVar2,
                   PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                  );
        lVar12 = 0;
        do {
          Swift::IteratorProtocol::_next();
          lVar18 = lVar9;
          (**(code **)(lVar13 + 0x30))(lVar9,1,param_5);
          if ((int)lVar18 == 1) {
            (**(code **)(lVar14 + 8))(local_f0,param_6);
            (**(code **)(local_100 + 8))(lVar9,lStack_f8);
            local_a0 = local_108 + lVar12;
            if (SCARRY8(local_108,lVar12)) goto LAB_10067cf80;
            goto LAB_10067cf1c;
          }
          (**(code **)(lVar13 + 0x20))(lVar16,lVar9,param_5);
          if (local_80 == 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x10067cfc0);
            (*pcVar15)();
          }
          lVar18 = *(long *)(lVar13 + 0x48);
          (**(code **)(lVar13 + 0x10))(lVar11,lVar16,param_5);
          FUN_1006331c4(lVar11,local_80 + lVar18 * lVar12,param_5);
          (**(code **)(lVar13 + 8))(lVar16,param_5);
          lVar12 = lVar12 + 1;
          lVar18 = local_f0;
          lStack_88 = local_108;
        } while (lStack_78 != lVar12);
      }
      (**(code **)(lVar14 + 8))(lVar18,param_6);
      local_a0 = lStack_88 + lStack_78;
      if (SCARRY8(lStack_88,lStack_78)) {
LAB_10067cf80:
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10067cf84);
        (*pcVar15)();
      }
    }
    else {
      (**(code **)(lVar14 + 8))(lVar18,param_6);
    }
  }
  else {
    local_f0 = lVar18;
    (*pcVar15)(lVar12,lVar18,param_6);
    Swift::Sequence::_makeIterator();
    bVar1 = false;
    lVar18 = 0;
    local_108 = lStack_88;
    local_a0 = lStack_88;
    lVar9 = local_90;
    while (puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
          lVar18 != local_a0) {
LAB_10067cc78:
      uVar6 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_7,param_6,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
      _swift_getAssociatedConformanceWitness
                (param_7,param_6,uVar6,puVar2,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      Swift::IteratorProtocol::_next();
      puVar7 = puVar10;
      (**(code **)(lVar13 + 0x30))(puVar10,1,param_5);
      if ((int)puVar7 == 1) {
        (**(code **)(lVar14 + 8))(local_f0,param_6);
        (**(code **)(local_100 + 8))(puVar10,lStack_f8);
        local_a0 = lVar18;
        if (bVar1) goto LAB_10067cfa4;
        goto LAB_10067cf1c;
      }
      (**(code **)(lVar13 + 0x20))(lVar17,puVar10,param_5);
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10067cfbc);
        (*pcVar15)();
      }
      lVar12 = *(long *)(lVar13 + 0x48);
      (**(code **)(lVar13 + 0x10))(lVar11,lVar17,param_5);
      FUN_1006331c4(lVar11,lVar9 + lVar12 * lVar18,param_5);
      (**(code **)(lVar13 + 8))(lVar17,param_5);
      bVar3 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10067cd58);
        (*pcVar15)();
      }
    }
    if (!bVar1 && 0 < lStack_78) {
      lVar18 = 0;
      bVar1 = true;
      local_a0 = lStack_78;
      lVar9 = local_80;
      goto LAB_10067cc78;
    }
    (**(code **)(lVar14 + 8))(local_f0,param_6);
    lVar18 = local_a0;
    if (bVar1) {
LAB_10067cfa4:
      local_a0 = local_108 + lVar18;
      if (SCARRY8(local_108,lVar18)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10067cfb4);
        (*pcVar15)();
      }
    }
  }
LAB_10067cf1c:
  if (!SCARRY8(*(long *)(param_2 + 8),local_a0)) {
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + local_a0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10067cfb8);
  (*pcVar15)();
}



/* Address: 0x10067cfc0 | FUN_10067cfc0 */

void FUN_10067cfc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  Optional OVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_100 [8];
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  char local_68;
  long local_58;
  
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lStack_f0 = CONCAT71(extraout_var,OVar5.value);
  local_f8 = *(long *)(lStack_f0 + -8);
  puVar8 = auStack_100 + -(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_5 + -8);
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)puVar8 - uVar9;
  lVar10 = lVar12 - uVar9;
  FUN_100685f04(param_3,param_1,param_2,param_5);
  FUN_100686198(&local_88,param_1,param_2,param_5);
  bVar4 = false;
  lVar13 = 0;
  local_e8 = lStack_80;
  local_58 = lStack_80;
  lVar14 = local_88;
  do {
    puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
    if (lVar13 == local_58) {
      if (!bVar4) {
        if (local_68 == '\x01' || lStack_70 < 1) goto LAB_10067d200;
        lVar13 = 0;
        bVar4 = true;
        local_58 = lStack_70;
        lVar14 = local_78;
        goto LAB_10067d0ec;
      }
LAB_10067d1f0:
      bVar4 = SCARRY8(local_e8,local_58);
      local_58 = local_e8 + local_58;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d244);
        (*pcVar2)();
      }
LAB_10067d200:
      if (!SCARRY8(*(long *)(param_1 + 8),local_58)) {
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + local_58;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d240);
      (*pcVar2)();
    }
LAB_10067d0ec:
    uVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_7,param_6,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
    _swift_getAssociatedConformanceWitness
              (param_7,param_6,uVar6,puVar1,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    puVar7 = puVar8;
    (**(code **)(lVar15 + 0x30))(puVar8,1,param_5);
    if ((int)puVar7 == 1) {
      (**(code **)(local_f8 + 8))(puVar8,lStack_f0);
      local_58 = lVar13;
      if (!bVar4) goto LAB_10067d200;
      goto LAB_10067d1f0;
    }
    (**(code **)(lVar15 + 0x20))(lVar10,puVar8,param_5);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d248);
      (*pcVar2)();
    }
    lVar11 = *(long *)(lVar15 + 0x48);
    (**(code **)(lVar15 + 0x10))(lVar12,lVar10,param_5);
    FUN_1006331c4(lVar12,lVar14 + lVar11 * lVar13,param_5);
    (**(code **)(lVar15 + 8))(lVar10,param_5);
    bVar3 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d1cc);
      (*pcVar2)();
    }
  } while( true );
}



/* Address: 0x10067d248 | FUN_10067d248 */

void FUN_10067d248(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d450);
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
    pcStack_b8 = FUN_100680344;
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



/* Address: 0x10067d450 | FUN_10067d450 */

void FUN_10067d450(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ManagedBufferPointer MVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  long local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 auStack_58 [8];
  
  uVar6 = *param_3;
  _swift_retain(uVar6);
  FUN_1006035b0(local_a0,FUN_1006035a4,0,uVar6,&DAT_100ef5140,param_4,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_release(uVar6);
  lVar1 = local_a0[0] + param_2;
  if (!SCARRY8(local_a0[0],param_2)) {
    MVar4 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar3 = Swift::ManagedBufferPointer::isUniqueReference(MVar4);
    FUN_1006035b0(local_a0,FUN_100003284,0,*param_3,&DAT_100ef5140,param_4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_a0[0] < lVar1) || (!bVar3)) {
      uVar6 = 0;
      FUN_1006844f0(0,param_4);
      FUN_100684260(bVar3,lVar1,0,uVar6);
    }
    uVar6 = *param_3;
    local_b0 = local_a0;
    local_c0 = param_4;
    uStack_b8 = param_7;
    local_90 = param_4;
    uStack_88 = param_5;
    local_80 = param_6;
    uStack_78 = param_1;
    local_70 = param_2;
    _swift_retain(uVar6);
    puVar5 = &DAT_100fda040;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(param_8,auStack_d0,uVar6,&DAT_100ef5140,param_4,puVar5,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_58
                 );
    _swift_release(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067d638);
  (*pcVar2)();
}



/* Address: 0x10067d638 | FUN_10067d638 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010067db40 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10067d638(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7)

{
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  UVar1;
  Optional OVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  PartialRangeUpTo PVar9;
  UnsafeMutableBufferPointer<undefined> UVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined *local_210;
  long local_208;
  long local_200;
  long local_1f8;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1f0;
  undefined *local_1e8;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1e0;
  long local_1d8;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_1d0;
  code *local_1c8;
  undefined *local_1c0;
  long local_1b8;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  code *local_180;
  undefined8 local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  code *local_100;
  char local_98;
  __int64 local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  char local_70;
  
  puVar14 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar5 = param_7;
  _swift_getAssociatedConformanceWitness
            (param_7,param_6,lVar4,puVar14,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_1b0 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_1b8 = *(long *)(local_1b0 + -8);
  lVar15 = (long)&local_210 - (*(long *)(local_1b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = 0xff;
  local_150 = lVar15;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_6,puVar14,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar8 = param_7;
  _swift_getAssociatedConformanceWitness
            (param_7,param_6,uVar6,puVar14,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  local_178 = *(undefined8 *)(lVar8 + 8);
  lVar7 = 0;
  local_148 = lVar8;
  _swift_getAssociatedTypeWitness
            (0,local_178,uVar6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_1a0 = *(long *)(lVar7 + -8);
  uVar13 = *(long *)(local_1a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f0.unknown = (undefined *)(lVar15 - uVar13);
  puVar14 = local_1f0.unknown + -uVar13;
  lVar8 = 0;
  local_1e0.unknown = puVar14;
  local_198 = lVar7;
  _swift_checkMetadataState(0,uVar6);
  local_140 = *(long *)(lVar8 + -8);
  uVar13 = *(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = (long)puVar14 - uVar13;
  local_1a8 = lVar18 - uVar13;
  lVar7 = local_1a8 - uVar13;
  local_188 = lVar7;
  local_168 = lVar8;
  local_138 = lVar5;
  PVar9 = Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_190 = *(long *)(PVar9.unknown + -8);
  local_130 = lVar7 - (*(long *)(local_190 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_180 = *(code **)(lVar4 + -8);
  uVar13 = *(long *)(local_180 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_128 = local_130 - uVar13;
  lVar8 = local_128 - uVar13;
  local_170 = PVar9.unknown;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_158 = CONCAT71((int7)((ulong)PVar9.unknown >> 8),OVar2.value);
  local_160 = *(long *)(local_158 + -8);
  uVar13 = *(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f8 = lVar8 - uVar13;
  local_1e8 = (undefined *)(local_1f8 - uVar13);
  lVar17 = (long)local_1e8 - uVar13;
  uVar6 = *(undefined8 *)(param_7 + 8);
  UVar10.unknown = (undefined *)0x0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_1c8 = *(code **)(UVar10.unknown + -8);
  local_1d0.unknown =
       (undefined *)(lVar17 - (*(long *)(local_1c8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = *(long *)(param_6 + -8);
  uVar13 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1d8 = (long)local_1d0.unknown - uVar13;
  lVar15 = local_1d8 - uVar13;
  local_1c0 = UVar10.unknown;
  local_118 = param_1;
  FUN_100686198(&local_90,param_1,param_2,param_5);
  lVar5 = 0;
  if (local_70 != '\x01') {
    lVar5 = local_78;
  }
  if (SCARRY8(local_88,lVar5)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1b0);
    (*pcVar16)();
  }
  local_120 = param_3;
  if (param_3 < local_88 + lVar5) {
    if (local_88 < param_3) {
      if (local_70 == '\x01') {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1cc);
        (*pcVar16)();
      }
      lVar5 = param_3 - local_88;
      if (SBORROW8(param_3,local_88)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1c4);
        (*pcVar16)();
      }
      if (lVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1c8);
        (*pcVar16)();
      }
      lVar12 = local_78;
      if (lVar5 <= local_78) {
        lVar12 = lVar5;
      }
      local_200 = lVar18;
      UVar10 = Swift::UnsafeMutableBufferPointer::_init(local_80);
      local_70 = lVar12 == 0;
      local_210 = (undefined *)0x0;
      local_208 = lVar12;
      if (!(bool)local_70) {
        local_210 = UVar10.unknown;
      }
      goto LAB_10067da50;
    }
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1c0);
      (*pcVar16)();
    }
    Swift::UnsafeMutableBufferPointer::_init(local_90);
    pcVar16 = *(code **)(lVar7 + 0x10);
    (*pcVar16)(lVar15,param_4,param_6);
LAB_10067dd4c:
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      (*pcVar16)(local_1d8,lVar15,param_6);
      UVar1.unknown = local_1d0.unknown;
      Swift::Sequence::__copyContents(local_1d0);
      puVar14 = local_1c0;
      _swift_getAssociatedConformanceWitness
                (uVar6,param_6,local_1c0,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      Swift::IteratorProtocol::_next();
      (**(code **)(local_1c8 + 8))(UVar1.unknown,puVar14);
      (**(code **)(lVar7 + 8))(lVar15,param_6);
      lVar5 = lVar17;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(lVar17,1);
      (**(code **)(local_160 + 8))(lVar17,local_158);
      if ((int)lVar5 != 1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10067de7c);
        (*pcVar16)();
      }
      goto LAB_10067e168;
    }
  }
  else {
    local_210 = local_80;
    local_208 = local_78;
    local_200 = lVar18;
LAB_10067da50:
    pcVar16 = *(code **)(lVar7 + 0x10);
    (*pcVar16)(lVar15,param_4,param_6);
    lVar5 = local_128;
    if (local_70 == '\x01') goto LAB_10067dd4c;
    Swift::Collection::_get_startIndex();
    Swift::Collection::_index(lVar5);
    pcVar16 = local_180;
    local_1c8 = *(code **)(local_180 + 8);
    (*local_1c8)(lVar5,lVar4);
    lVar17 = local_138;
    local_1c0 = *(undefined **)(local_138 + 8);
    bVar3 = Swift::Equatable::___infix(lVar8,lVar8,lVar4);
    if (!bVar3) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1b8);
      (*pcVar16)();
    }
    local_180 = *(code **)(pcVar16 + 0x10);
    (*local_180)(lVar5,lVar8,lVar4);
    lVar18 = local_130;
    Swift::PartialRangeUpTo::init(local_130,UVar10.unknown,lVar4,lVar17);
    puVar14 = local_170;
    puVar11 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
               local_170);
    lVar5 = local_188;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_188,lVar18,param_6,puVar14,param_7,puVar11);
    lVar17 = local_168;
    uVar6 = local_178;
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      (**(code **)(local_140 + 0x10))(local_1a8,lVar5,lVar17);
      UVar1.unknown = local_1e0.unknown;
      Swift::Sequence::__copyContents(local_1e0);
      lVar18 = local_198;
      _swift_getAssociatedConformanceWitness
                (uVar6,lVar17,local_198,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      puVar14 = local_1e8;
      Swift::IteratorProtocol::_next();
      lVar17 = local_168;
      (**(code **)(local_1a0 + 8))(UVar1.unknown,lVar18);
      local_100 = *(code **)(local_140 + 8);
      (*local_100)(lVar5,lVar17);
      (**(code **)(local_190 + 8))(local_130,local_170);
      puVar11 = puVar14;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(puVar14,1);
      (**(code **)(local_160 + 8))(puVar14,local_158);
      if ((int)puVar11 != 1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10067dd10);
        (*pcVar16)();
      }
    }
    else {
      local_100 = *(code **)(local_140 + 8);
      (*local_100)(lVar5,lVar17);
      (**(code **)(local_190 + 8))(local_130,puVar14);
    }
    bVar3 = Swift::Equatable::___infix(lVar8,lVar8,lVar4,local_1c0);
    if (!bVar3) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1bc);
      (*pcVar16)();
    }
    (*local_180)(local_128,lVar8,lVar4);
    lVar18 = local_150;
    Swift::PartialRangeFrom::init(local_150,puVar11,lVar4,local_138);
    puVar14 = local_1b0;
    puVar11 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
               local_1b0);
    lVar5 = local_200;
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_200,lVar18,param_6,puVar14,param_7,puVar11);
    Swift::Sequence::_withContiguousStorageIfAvailable();
    if (local_98 == '\x01') {
      local_128 = lVar4;
      (**(code **)(local_140 + 0x10))(local_1a8,lVar5,lVar17);
      uVar6 = local_178;
      UVar1.unknown = local_1f0.unknown;
      Swift::Sequence::__copyContents(local_1f0);
      lVar18 = local_198;
      _swift_getAssociatedConformanceWitness
                (uVar6,lVar17,local_198,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      lVar4 = local_1f8;
      Swift::IteratorProtocol::_next();
      (**(code **)(local_1a0 + 8))(UVar1.unknown,lVar18);
      (*local_100)(lVar5,lVar17);
      (**(code **)(local_1b8 + 8))(local_150,puVar14);
      (*local_1c8)(lVar8,local_128);
      (**(code **)(lVar7 + 8))(lVar15,param_6);
      lVar5 = lVar4;
      (**(code **)(*(long *)(param_5 + -8) + 0x30))(lVar4,1);
      (**(code **)(local_160 + 8))(lVar4,local_158);
      if ((int)lVar5 != 1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e118);
        (*pcVar16)();
      }
      goto LAB_10067e168;
    }
    (*local_100)(lVar5,lVar17);
    (**(code **)(local_1b8 + 8))(local_150,puVar14);
    (*local_1c8)(lVar8,lVar4);
  }
  (**(code **)(lVar7 + 8))(lVar15,param_6);
LAB_10067e168:
  if (SCARRY8(*(long *)(local_118 + 8),local_120)) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10067e1b4);
    (*pcVar16)();
  }
  *(long *)(local_118 + 8) = *(long *)(local_118 + 8) + local_120;
  return;
}



/* Address: 0x10067e1cc | FUN_10067e1cc */

void FUN_10067e1cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ManagedBufferPointer MVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  code *pcStack_a8;
  long *local_a0;
  long local_90 [2];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e3bc);
    (*pcVar2)();
  }
  uVar7 = *unaff_x20;
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  FUN_1006035b0(local_90,FUN_1006035a4,0,uVar7,&DAT_100ef5140,uVar6,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 <= local_90[0]) {
    FUN_1006035b0(local_90,FUN_1006035a4,0,uVar7,&DAT_100ef5140,uVar6,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar1 = local_90[0] + 1;
    if (!SCARRY8(local_90[0],1)) {
      MVar4 = Swift::ManagedBufferPointer::typeMetadataAccessor();
      bVar3 = Swift::ManagedBufferPointer::isUniqueReference(MVar4);
      FUN_1006035b0(local_90,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar6,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      if ((local_90[0] < lVar1) || (!bVar3)) {
        uVar7 = 0;
        FUN_1006844f0(0,uVar6);
        FUN_100684260(bVar3,lVar1,0,uVar7);
      }
      uVar7 = *unaff_x20;
      pcStack_a8 = FUN_100680360;
      local_a0 = local_90;
      local_b0 = uVar6;
      local_80 = uVar6;
      lStack_78 = param_2;
      local_70 = param_1;
      _swift_retain(uVar7);
      puVar5 = &DAT_100fda040;
      FUN_1000f7830(&DAT_100fda040,0x100c6d628);
      FUN_1006034cc(FUN_100680c84,auStack_c0,uVar7,&DAT_100ef5140,uVar6,puVar5,
                    PTR___type_metadata_for____100eae0c8 + 8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                    auStack_c8);
      _swift_release(uVar7);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e3c4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e3c0);
  (*pcVar2)();
}



/* Address: 0x10067e3c4 | FUN_10067e3c4 */

void FUN_10067e3c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  long local_88 [5];
  
  lVar4 = *(long *)(param_6 + -8);
  lVar2 = *(long *)(lVar4 + 0x40);
  if (param_3 == 0) {
    FUN_1006862d0(param_4,param_1,param_2,param_6);
  }
  else {
    uVar3 = *param_5;
    _swift_retain(uVar3);
    FUN_1006035b0(local_88,FUN_1006035a4,0,uVar3,&DAT_100ef5140,param_6,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    _swift_release(uVar3);
    if (param_3 == local_88[0]) {
      FUN_100685f04(param_4,param_1,param_2,param_6);
    }
    else {
      FUN_10068638c(local_88,1,param_3,param_1,param_2,param_6);
      if (local_88[0] == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e528);
        (*pcVar1)();
      }
      (**(code **)(lVar4 + 0x10))(auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4,param_6)
      ;
      FUN_1006331c4(auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0),local_88[0],param_6);
    }
  }
  return;
}



/* Address: 0x10067e528 | FUN_10067e528 */

void FUN_10067e528(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_10068037c();
                    /* WARNING: Could not recover jumptable at 0x00010067e560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_1,param_4);
  return;
}



/* Address: 0x10067e564 | FUN_10067e564 */

void FUN_10067e564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_7 + -8) + 0x40);
  (**(code **)(*(long *)(param_7 + -8) + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,param_7);
  FUN_1006853ec(&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4,param_5,
                param_1,param_2,param_6,param_7,param_8);
  return;
}



/* Address: 0x10067e618 | FUN_10067e618 */

void FUN_10067e618(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  long local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined1 *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e754);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1006035b0(local_a0,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 < local_a0[0]) {
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,uVar5);
      FUN_1006840e8();
    }
    uVar6 = *unaff_x20;
    puStack_78 = auStack_70;
    local_80 = FUN_10068059c;
    local_90 = uVar5;
    uStack_88 = uVar5;
    local_60 = uVar5;
    _swift_retain(uVar6);
    puVar4 = &DAT_100fda040;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(param_1,FUN_10067f5fc,local_a0,uVar6,&DAT_100ef5140,uVar5,puVar4,uVar5,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8
                 );
    _swift_release(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e758);
  (*pcVar1)();
}



/* Address: 0x10067e758 | FUN_10067e758 */

void FUN_10067e758(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  
  FUN_10067ab2c(param_4,*param_3,param_5);
  if (SCARRY8(param_4,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e7d0);
    (*pcVar1)();
  }
  if (param_4 <= param_4 + 1) {
    FUN_1006852c0(param_4,param_4 + 1,param_1,param_2,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e7d4);
  (*pcVar1)();
}



/* Address: 0x10067e7d4 | FUN_10067e7d4 */

void FUN_10067e7d4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *pcStack_88;
  long *local_80;
  long local_70 [2];
  undefined8 local_60;
  long lStack_58;
  long local_50;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e908);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1006035b0(local_70,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 <= local_70[0]) {
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,uVar5);
      FUN_1006840e8();
    }
    uVar6 = *unaff_x20;
    pcStack_88 = FUN_1006805b8;
    local_80 = local_70;
    puVar4 = &DAT_100fda040;
    local_90 = uVar5;
    local_60 = uVar5;
    lStack_58 = param_1;
    local_50 = param_2;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_a0,uVar6,&DAT_100ef5140,uVar5,puVar4,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067e90c);
  (*pcVar1)();
}



/* Address: 0x10067e90c | FUN_10067e90c */

void FUN_10067e90c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined8 local_80 [2];
  long local_70;
  long lStack_68;
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_80[0] = *unaff_x20;
  _swift_getWitnessTable(0x100c6d780,param_2);
  bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (!bVar2) {
    lVar6 = *(long *)(param_2 + 0x10);
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,lVar6);
      FUN_1006840e8();
    }
    uVar5 = *unaff_x20;
    puStack_58 = auStack_50;
    local_60 = FUN_1006805ec;
    puVar4 = &DAT_100fda040;
    local_70 = lVar6;
    lStack_68 = lVar6;
    local_40 = lVar6;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(param_1,FUN_100680c70,local_80,uVar5,&DAT_100ef5140,lVar6,puVar4,lVar6,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_88
                 );
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,0,1,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ea34);
  (*pcVar1)();
}



/* Address: 0x10067ea34 | FUN_10067ea34 */

undefined8 FUN_10067ea34(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  long local_90 [2];
  undefined8 local_80;
  code *pcStack_78;
  undefined1 *local_70;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  long lStack_48;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067eb58);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  FUN_1006035b0(local_90,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_1 <= local_90[0]) {
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,uVar5);
      FUN_1006840e8();
    }
    uVar6 = *unaff_x20;
    pcStack_78 = FUN_100680614;
    local_70 = auStack_60;
    puVar4 = &DAT_100fda040;
    local_80 = uVar5;
    local_50 = uVar5;
    lStack_48 = param_1;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,local_90,uVar6,&DAT_100ef5140,uVar5,puVar4,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_98
                 );
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067eb5c);
  (*pcVar1)();
}



/* Address: 0x10067eb5c | FUN_10067eb5c */

void FUN_10067eb5c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_80[0] = *unaff_x20;
  _swift_getWitnessTable(0x100c6d780,param_2);
  bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (!bVar2) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,uVar6);
      FUN_1006840e8();
    }
    uVar5 = *unaff_x20;
    puStack_58 = auStack_50;
    local_60 = FUN_100680644;
    puVar4 = &DAT_100fda040;
    local_70 = uVar6;
    uStack_68 = uVar6;
    local_40 = uVar6;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(param_1,FUN_100680c70,local_80,uVar5,&DAT_100ef5140,uVar6,puVar4,uVar6,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_88
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ec68);
  (*pcVar1)();
}



/* Address: 0x10067ec68 | FUN_10067ec68 */

void FUN_10067ec68(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  long local_90 [2];
  undefined8 local_80;
  code *pcStack_78;
  undefined1 *local_70;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  long lStack_48;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ed88);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  FUN_1006035b0(local_90,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_1 <= local_90[0]) {
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,uVar5);
      FUN_1006840e8();
    }
    uVar6 = *unaff_x20;
    pcStack_78 = FUN_10068066c;
    local_70 = auStack_60;
    puVar4 = &DAT_100fda040;
    local_80 = uVar5;
    local_50 = uVar5;
    lStack_48 = param_1;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,local_90,uVar6,&DAT_100ef5140,uVar5,puVar4,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_98
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067ed8c);
  (*pcVar1)();
}



/* Address: 0x10067ed8c | FUN_10067ed8c */

void FUN_10067ed8c(ulong param_1,long param_2)

{
  bool bVar1;
  ManagedBufferPointer MVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  code *pcStack_68;
  undefined1 *local_60;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  if ((param_1 & 1) == 0) {
    _swift_release(*unaff_x20);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    FUN_100683d64();
    *unaff_x20 = uVar4;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    MVar2 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar1 = Swift::ManagedBufferPointer::isUniqueReference(MVar2);
    if (!bVar1) {
      FUN_1006844f0(0,uVar4);
      FUN_1006840e8();
    }
    uVar5 = *unaff_x20;
    pcStack_68 = FUN_10068069c;
    local_60 = auStack_50;
    puVar3 = &DAT_100fda040;
    local_70 = uVar4;
    local_40 = uVar4;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_80,uVar5,&DAT_100ef5140,uVar4,puVar3,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_88
                 );
  }
  return;
}



/* Address: 0x10067ee78 | FUN_10067ee78 */

void FUN_10067ee78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  thunk_FUN_100683d64();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10067eea0 | FUN_10067eea0 */

void FUN_10067eea0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10067fb4c(*param_1,param_1[1],param_2,param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010067eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Address: 0x10067eef4 | thunk_FUN_100679cbc */

void thunk_FUN_100679cbc(void)

{
  FUN_100679cbc();
  return;
}



/* Address: 0x10067eef8 | FUN_10067eef8 */

void FUN_10067eef8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x10);
  uVar1 = param_2;
  FUN_10068006c(param_2,param_3,lVar2);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_2,lVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10067ef48 | FUN_10067ef48 */

void FUN_10067ef48(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10068013c(param_2,*(undefined8 *)(param_5 + 0x10),param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10067efa4 | FUN_10067efa4 */

void FUN_10067efa4(undefined8 param_1,long param_2)

{
  FUN_100679d80();
                    /* WARNING: Could not recover jumptable at 0x00010067efdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x10067efe0 | FUN_10067efe0 */

void FUN_10067efe0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10067c1f0(param_1,param_4,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010067f028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return;
}



/* Address: 0x10067f02c | FUN_10067f02c */

void FUN_10067f02c(void)

{
  FUN_10067f038();
  return;
}



/* Address: 0x10067f038 | FUN_10067f038 */

void FUN_10067f038(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x00010067f074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x10067f078 | FUN_10067f078 */

void FUN_10067f078(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10068037c(param_1,*param_2,param_5,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010067f0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return;
}



/* Address: 0x10067f0c8 | FUN_10067f0c8 */

void FUN_10067f0c8(undefined8 *param_1)

{
  FUN_10067e618(*param_1);
  return;
}



/* Address: 0x10067f0d0 | FUN_10067f0d0 */

void FUN_10067f0d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_10067e7d4(*param_1,param_1[1],param_2);
  return;
}



/* Address: 0x10067f0e0 | thunk_FUN_10067e90c */

void thunk_FUN_10067e90c(void)

{
  FUN_10067e90c();
  return;
}



/* Address: 0x10067f0e4 | FUN_10067f0e4 */

undefined8 FUN_10067f0e4(void)

{
  FUN_10067ea34();
  return 1;
}



/* Address: 0x10067f0fc | thunk_FUN_10067eb5c */

void thunk_FUN_10067eb5c(void)

{
  FUN_10067eb5c();
  return;
}



/* Address: 0x10067f100 | thunk_FUN_10067ec68 */

void thunk_FUN_10067ec68(void)

{
  FUN_10067ec68();
  return;
}



/* Address: 0x10067f104 | thunk_FUN_10067ed8c */

void thunk_FUN_10067ed8c(void)

{
  FUN_10067ed8c();
  return;
}



/* Address: 0x10067f108 | FUN_10067f108 */

void FUN_10067f108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c6d860,param_3);
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
  return;
}



/* Address: 0x10067f170 | FUN_10067f170 */

void FUN_10067f170(long *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  code *pcVar1;
  
  if (param_2 < *param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067f1a8);
    (*pcVar1)();
  }
  if (*param_3 != 0) {
    if (*param_4 == *param_3) {
      *(long *)(*param_5 + 0x10) = *param_1;
      Swift::ContiguousArray::typeMetadataAccessor();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067f1ac);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067f1b0);
  (*pcVar1)();
}



/* Address: 0x10067f1b0 | FUN_10067f1b0 */

long FUN_10067f1b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  UVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  Optional OVar5;
  undefined7 extraout_var;
  long lVar6;
  UnsafeMutableBufferPointer UVar7;
  Slice SVar8;
  tuple2_conflict2 tVar9;
  long lVar10;
  long local_150;
  long local_148;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  local_f0 = param_1;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_118 = CONCAT71(extraout_var,OVar5.value);
  local_120 = *(long *)(local_118 + -8);
  local_128 = (long)&local_150 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_150 = *(long *)(param_7 + -8);
  lVar10 = local_128 - (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f8 = *(undefined8 *)(param_8 + 8);
  lVar6 = 0;
  local_148 = lVar10;
  _swift_getAssociatedTypeWitness
            (0,local_f8,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_138 = *(long *)(lVar6 + -8);
  local_140.unknown =
       (undefined *)(lVar10 - (*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_130 = lVar6;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_4;
  lStack_c8 = param_5;
  UVar7 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__Collection_100eaca40,
             UVar7.unknown);
  SVar8 = Swift::Slice::typeMetadataAccessor();
  Swift::Slice::get_base(SVar8);
  lVar6 = local_78;
  if (local_78 != 0) {
    local_98 = param_2;
    local_90 = param_3;
    local_88 = param_4;
    uStack_80 = param_5;
    Swift::Slice::_get_startIndex(SVar8);
    lVar6 = lVar6 + *(long *)(*(long *)(param_6 + -8) + 0x48) * local_a0;
  }
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_4;
  lStack_c8 = param_5;
  Swift::Slice::_get_endIndex(SVar8);
  local_110 = param_3;
  uStack_108 = param_4;
  local_100 = param_5;
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_4;
  uStack_80 = param_5;
  Swift::Slice::_get_startIndex(SVar8);
  lVar10 = local_78 - local_a0;
  puStack_b8 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(lVar6);
  uVar3 = local_f0;
  uVar2 = local_f8;
  local_d0 = param_6;
  lStack_c8 = param_7;
  local_c0 = param_8;
  local_b0 = lVar10;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  tVar9._ = local_98;
  if ((char)local_90 == '\x01') {
    (**(code **)(local_150 + 0x10))(local_148,uVar3,param_7);
    UVar1.unknown = local_140.unknown;
    tVar9 = Swift::Sequence::__copyContents(local_140);
    lVar6 = local_130;
    _swift_getAssociatedConformanceWitness
              (uVar2,param_7,local_130,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    lVar10 = local_128;
    Swift::IteratorProtocol::_next();
    (**(code **)(local_138 + 8))(UVar1.unknown,lVar6);
    lVar6 = lVar10;
    (**(code **)(*(long *)(param_6 + -8) + 0x30))(lVar10,1,param_6);
    (**(code **)(local_120 + 8))(lVar10,local_118);
    if ((int)lVar6 != 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10067f4b8);
      (*pcVar4)();
    }
  }
  uStack_d8 = local_110;
  local_d0 = uStack_108;
  lStack_c8 = local_100;
  local_e0 = param_2;
  Swift::Slice::_get_startIndex(SVar8);
  if (SCARRY8(local_98,tVar9._)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067f50c);
    (*pcVar4)();
  }
  return local_98 + tVar9._;
}



/* Address: 0x10067f50c | FUN_10067f50c */

undefined8 FUN_10067f50c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  code *pcStack_80;
  undefined1 *local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48 [3];
  
  uVar1 = 0;
  local_90 = param_2;
  local_60 = param_2;
  uStack_58 = param_1;
  FUN_100680958();
  pcStack_80 = FUN_100680bf8;
  local_78 = auStack_70;
  puVar2 = &DAT_100fda040;
  local_88 = uVar1;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(local_48,FUN_100680c48,auStack_a0,param_1,&DAT_100ef5140,param_2,puVar2,uVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8);
  return local_48[0];
}



/* Address: 0x10067f5c0 | FUN_10067f5c0 */

void FUN_10067f5c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  (**(code **)(lVar1 + 0x10))
            (param_1,param_3 + *(long *)(lVar1 + 0x48) * *(long *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10067f5fc | FUN_10067f5fc */

void FUN_10067f5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1006844fc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x10067f620 | FUN_10067f620 */

void FUN_10067f620(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100685f04(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x10067f650 | FUN_10067f650 */

void FUN_10067f650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1006844fc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10),PTR___type_metadata_for____100eae0c8 + 8,param_3);
  return;
}



/* Address: 0x10067f67c | FUN_10067f67c */

undefined8 FUN_10067f67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  code *pcStack_80;
  undefined1 *local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  
  uVar1 = 0;
  local_90 = param_3;
  local_60 = param_3;
  uStack_58 = param_2;
  local_50 = param_1;
  FUN_100680958(0,param_3);
  pcStack_80 = FUN_100680bdc;
  local_78 = auStack_70;
  puVar2 = &DAT_100fda040;
  local_88 = uVar1;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(local_48,FUN_10067f960,auStack_a0,param_1,&DAT_100ef5140,param_3,puVar2,uVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8);
  return local_48[0];
}



/* Address: 0x10067f738 | FUN_10067f738 */

void FUN_10067f738(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(param_2 + 0x10);
  FUN_100686f74(lVar2,*(undefined8 *)(param_2 + 8),param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10)
               );
  if ((lVar2 == 0) || (lVar2 == *(long *)(lVar1 + 8))) {
    uVar3 = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 8) = 0;
    *(long *)(lVar1 + 0x10) = lVar2;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x10067f7a0 | FUN_10067f7a0 */

void FUN_10067f7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1006844fc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10),PTR___type_metadata_for_Swift_Bool_100eac570,
                param_3);
  return;
}



/* Address: 0x10067f7c8 | FUN_10067f7c8 */

void FUN_10067f7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar1 = PTR___type_metadata_for_Swift_Never_100eadc38;
  FUN_1006035b0(local_70,FUN_1006035a4,0,param_1,&DAT_100ef5140,param_2,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  local_60 = param_2;
  uStack_58 = param_1;
  FUN_10067a388(local_70[0],FUN_100680ba4,local_70,param_2,puVar1,puVar2);
  return;
}



/* Address: 0x10067f86c | FUN_10067f86c */

undefined8
FUN_10067f86c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  code *pcStack_90;
  undefined1 *local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50 [4];
  
  uVar1 = 0xff;
  local_a0 = param_4;
  local_70 = param_4;
  uStack_68 = param_1;
  local_60 = param_2;
  uStack_58 = param_3;
  FUN_100680958(0xff,param_4);
  uVar2 = 0;
  _swift_getTupleTypeMetadata2(0,uVar1,PTR___type_metadata_for_Swift_Int_100eac6f8,0,0);
  pcStack_90 = FUN_100680b18;
  local_88 = auStack_80;
  puVar3 = &DAT_100fda040;
  local_98 = uVar2;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(local_50,FUN_10067f960,auStack_b0,param_3,&DAT_100ef5140,param_4,puVar3,uVar2,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8);
  return local_50[0];
}



/* Address: 0x10067f944 | FUN_10067f944 */

void FUN_10067f944(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067a840(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10067f960 | FUN_10067f960 */

void FUN_10067f960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1006844fc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x10067f980 | FUN_10067f980 */

void FUN_10067f980(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  FUN_100684540(lVar2,param_2,param_3,lVar1);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (param_1,param_3 + *(long *)(*(long *)(lVar1 + -8) + 0x48) * lVar2,lVar1);
  return;
}



/* Address: 0x10067f9e0 | FUN_10067f9e0 */

void FUN_10067f9e0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  ManagedBufferPointer MVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *pcStack_88;
  long *local_80;
  long local_70 [2];
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10067fb14);
    (*pcVar1)();
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  FUN_1006035b0(local_70,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 < local_70[0]) {
    MVar3 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar2 = Swift::ManagedBufferPointer::isUniqueReference(MVar3);
    if (!bVar2) {
      FUN_1006844f0(0,uVar5);
      FUN_1006840e8();
    }
    uVar6 = *unaff_x20;
    pcStack_88 = FUN_100680ab8;
    local_80 = local_70;
    puVar4 = &DAT_100fda040;
    local_90 = uVar5;
    local_60 = uVar5;
    lStack_58 = param_2;
    local_50 = param_1;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_a0,uVar6,&DAT_100ef5140,uVar5,puVar4,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_a8
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10067fb18);
  (*pcVar1)();
}



/* Address: 0x10067fb18 | FUN_10067fb18 */

void FUN_10067fb18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067afa0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x10067fb30 | FUN_10067fb30 */

void FUN_10067fb30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067b0d0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10067fb4c | FUN_10067fb4c */

void FUN_10067fb4c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  ManagedBufferPointer MVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_180 [2];
  long local_170 [3];
  undefined8 local_158;
  long local_150;
  long local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [16];
  undefined8 local_100;
  code *pcStack_f8;
  long *local_f0;
  long local_e0 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  
  lVar7 = 0;
  local_138 = param_5;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_140 = *(long *)(lVar7 + -8);
  uVar10 = *(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)local_170 - uVar10;
  lVar15 = lVar16 - uVar10;
  local_130 = param_1;
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10067ff20);
    (*pcVar13)();
  }
  uVar14 = *unaff_x20;
  uVar12 = *(undefined8 *)(param_4 + 0x10);
  FUN_1006035b0(local_e0,FUN_1006035a4,0,uVar14,&DAT_100ef5140,uVar12,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_e0[0] < param_2) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10067ff24);
    (*pcVar13)();
  }
  lVar2 = param_2 - local_130;
  if (SBORROW8(param_2,local_130)) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10067ff28);
    (*pcVar13)();
  }
  local_158 = param_3;
  local_150 = lVar15;
  local_148 = lVar7;
  lVar7 = Swift::Collection::get_count();
  lVar3 = lVar7 - lVar2;
  if (!SBORROW8(lVar7,lVar2)) {
    FUN_1006035b0(local_e0,FUN_1006035a4,0,uVar14,&DAT_100ef5140,uVar12,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar1 = local_e0[0] + lVar3;
    if (SCARRY8(local_e0[0],lVar3)) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10067ff30);
      (*pcVar13)();
    }
    local_170[2] = lVar3;
    MVar8 = Swift::ManagedBufferPointer::typeMetadataAccessor();
    bVar6 = Swift::ManagedBufferPointer::isUniqueReference(MVar8);
    FUN_1006035b0(local_e0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar12,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    if ((local_e0[0] < lVar1) || (!bVar6)) {
      uVar14 = 0;
      FUN_1006844f0(0,uVar12);
      FUN_100684260(bVar6,lVar1,0,uVar14);
    }
    lVar3 = local_130;
    uVar5 = local_138;
    uVar14 = local_158;
    if (lVar2 <= lVar7) {
      lVar7 = lVar2;
    }
    lVar1 = local_130 + lVar7;
    if (!SCARRY8(local_130,lVar7)) {
      local_170[1] = 0;
      local_170[0] = lVar2;
      Swift::Collection::_get_startIndex();
      lVar2 = local_150;
      Swift::Collection::_index(lVar16);
      lVar4 = local_148;
      pcVar13 = *(code **)(local_140 + 8);
      (*pcVar13)(lVar16,local_148);
      uVar11 = *unaff_x20;
      uStack_c8 = uVar5;
      lStack_b8 = lVar3;
      local_a0 = uVar14;
      lStack_98 = lVar2;
      local_90 = local_170[2];
      local_80 = local_170[0];
      pcStack_f8 = FUN_100680a7c;
      local_f0 = local_e0;
      puVar9 = &DAT_100fda040;
      local_100 = uVar12;
      local_d0 = uVar12;
      local_c0 = param_6;
      local_b0 = param_2;
      lStack_a8 = lVar1;
      lStack_88 = lVar7;
      FUN_1000f7830(&DAT_100fda040,0x100c6d628);
      *(undefined1 **)(lVar15 + -0x10) = auStack_118;
      FUN_1006034cc(FUN_100680c84,auStack_110,uVar11,&DAT_100ef5140,uVar12,puVar9,
                    PTR___type_metadata_for____100eae0c8 + 8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (*pcVar13)(lVar2,lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x10067ff34);
    (*pcVar13)();
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x10067ff2c);
  (*pcVar13)();
}



/* Address: 0x10067ff34 | FUN_10067ff34 */

void FUN_10067ff34(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  code *pcVar1;
  Slice SVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100680030);
    (*pcVar1)();
  }
  FUN_1006035b0(&local_70,FUN_1006035a4,0,*unaff_x20,&DAT_100ef5140,*(undefined8 *)(param_6 + 0x10),
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_5 <= local_70) {
    local_70 = param_1;
    uStack_68 = param_2;
    local_60 = param_3;
    _swift_getWitnessTable(0x100c6d780,param_6);
    SVar2 = Swift::Slice::typeMetadataAccessor();
    puVar3 = PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,SVar2.unknown);
    FUN_10067fb4c(param_4,param_5,&local_70,param_6,SVar2.unknown,puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100680034);
  (*pcVar1)();
}



/* Address: 0x100680034 | FUN_100680034 */

void FUN_100680034(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067b7c0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100680050 | FUN_100680050 */

void FUN_100680050(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067b964(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10068006c | FUN_10068006c */

long FUN_10068006c(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  code *pcStack_78;
  undefined1 *local_70;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  
  if (-1 < param_2) {
    lVar2 = param_2;
    thunk_FUN_100683e8c(param_2,param_3);
    pcStack_78 = FUN_100680a2c;
    local_70 = auStack_60;
    local_80 = param_3;
    local_50 = param_3;
    lStack_48 = param_2;
    local_40 = param_1;
    _swift_retain();
    puVar3 = &DAT_100fda040;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_90,lVar2,&DAT_100ef5140,param_3,puVar3,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_98
                 );
    _swift_release(lVar2);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068013c);
  (*pcVar1)();
}



/* Address: 0x10068013c | FUN_10068013c */

undefined8
FUN_10068013c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  FUN_100683d64();
  uVar2 = 0;
  FUN_1006883a0(0,param_2);
  FUN_10067c1f0(param_1,uVar2,param_3,param_4);
  return uVar1;
}



/* Address: 0x1006801a8 | FUN_1006801a8 */

void FUN_1006801a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067d450(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),FUN_1006809f8,
                FUN_100680c84);
  return;
}



/* Address: 0x1006801d4 | FUN_1006801d4 */

void FUN_1006801d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067cac0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006801f0 | FUN_1006801f0 */

void FUN_1006801f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067cfc0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}


